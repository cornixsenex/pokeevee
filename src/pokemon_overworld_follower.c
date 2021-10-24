#include "global.h"
#include "pokemon_overworld_follower.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_door.h"
#include "field_effect.h"
#include "field_effect_helpers.h"
#include "field_player_avatar.h"
#include "field_control_avatar.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "fldeff_misc.h"
#include "item.h"
#include "task.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "party_menu.h"
#include "pokemon.h"
#include "script.h"
#include "event_data.h"
#include "sound.h"
#include "trig.h"
#include "metatile_behavior.h"
#include "constants/event_object_movement.h"
#include "constants/event_objects.h"
#include "constants/songs.h"
#include "constants/map_types.h"
#include "constants/field_effects.h"
#include "constants/metatile_behaviors.h"
#include "constants/party_menu.h"
/*
    -FollowMe_StairsMoveHook ?
    -FollowMe_WarpStairsEndHook ?
*/

/*
Known Issues:
    -follower gets messed up if you go into a map with a maximum number of event objects
        -inherits incorrect palette, may get directionally confused
*/

// Defines
#define PLAYER_AVATAR_FLAG_BIKE    PLAYER_AVATAR_FLAG_MACH_BIKE | PLAYER_AVATAR_FLAG_ACRO_BIKE

struct FollowerSpriteGraphics
{
    u16 normalId;
    u16 machBikeId;
    u16 acroBikeId;
    u16 surfId;
    u16 underwaterId;
};

// EWRAM
//EWRAM_DATA struct Follower gSaveBlock2Ptr->follower = {0};

// Function Declarations
static u8 POF_GetFollowerMapObjId(void);
static u16 POF_GetFollowerSprite(void);
static void POF_Task_ReallowPlayerMovement(u8 taskId);
static u8 POF_DetermineFollowerDirection(struct ObjectEvent* player, struct ObjectEvent* follower);
static void POF_PlayerLogCoordinates(struct ObjectEvent* player);
static u8 POF_DetermineFollowerState(struct ObjectEvent* follower, u8 state, u8 direction);
static bool8 POF_IsStateMovement(u8 state);
static u8 POF_ReturnFollowerDelayedState(u8 direction);
static void POF_Task_FinishSurfDismount(u8 taskId);
static void POF_Task_FollowerOutOfDoor(u8 taskId);
static void POF_Task_FollowerHandleIndoorStairs(u8 taskId);
static void POF_Task_FollowerHandleEscalator(u8 taskId);
static void POF_Task_FollowerHandleEscalatorFinish(u8 taskId);
static void POF_CalculateFollowerEscalatorTrajectoryUp(struct Task *task);
static void POF_CalculateFollowerEscalatorTrajectoryDown(struct Task *task);

// Const Data
static const struct FollowerSpriteGraphics gFollowerAlternateSprites[] =
{
    //FORMAT:
    //{WALKING/RUNNING SPRITE ID, MACH BIKE SPRITE ID, ACRO BIKE SPRITE ID, SURFING SPRITE ID},
    [0] = 
    {
        .normalId = OBJ_EVENT_GFX_RIVAL_MAY_NORMAL,
        .machBikeId = OBJ_EVENT_GFX_RIVAL_MAY_MACH_BIKE,
        .acroBikeId = OBJ_EVENT_GFX_RIVAL_MAY_ACRO_BIKE,
        .surfId = OBJ_EVENT_GFX_RIVAL_MAY_SURFING,
        .underwaterId = OBJ_EVENT_GFX_MAY_UNDERWATER,
    },
    
};

// Functions
u8 POF_GetFollowerObjectId(void)
{
    if (!gSaveBlock2Ptr->follower.inProgress)
        return OBJECT_EVENTS_COUNT;

    return gSaveBlock2Ptr->follower.objId;
}

static u8 POF_GetFollowerMapObjId(void)
{
    return gSaveBlock2Ptr->follower.objId;
}

const u8* POF_GetFollowerScriptPointer(void)
{
    if (!gSaveBlock2Ptr->follower.inProgress)
        return NULL;

    return gSaveBlock2Ptr->follower.script;
}

static u8 GetPlayerMapObjId(void)
{
	return gPlayerAvatar.objectEventId;
}

static u16 POF_GetFollowerSprite(void)
{
    return gSaveBlock2Ptr->follower.graphicsId;
}

bool8 POF_PlayerHasFollower(void)
{
    return gSaveBlock2Ptr->follower.inProgress;
}

bool8 POF_IsPlayerOnFoot(void)
{
    if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_ON_FOOT)
        return TRUE;
    else
        return FALSE;
}

bool8 POF_FollowerComingThroughDoor(void)
{
    if (!POF_PlayerHasFollower())
        return FALSE;
    
    if (gSaveBlock2Ptr->follower.comeOutDoorStairs)
        return TRUE;
    
    return FALSE;
}

bool8 POF_CheckFollowerFlag(u16 flag)
{
    if (!gSaveBlock2Ptr->follower.inProgress)
        return TRUE;
    
    if (gSaveBlock2Ptr->follower.flags & flag)
        return TRUE;
    
    return FALSE;
}

u8 POF_GetFollowerSlotId(void)
{
    if (gSaveBlock2Ptr->follower.partySlotId > 0 && gSaveBlock2Ptr->follower.partySlotId < 7)
        return (gSaveBlock2Ptr->follower.partySlotId - 1); 
    
    return 0xFF;
}

void POF_SetFollowerSlotId(u8 slotId)
{
    gSaveBlock2Ptr->follower.partySlotId = (slotId + 1);
}

bool8 POF_IsFollowerSlotId(u8 slotId)
{
    if (slotId == POF_GetFollowerSlotId())
        return TRUE;
    
    return FALSE;
}

bool8 POF_IsFollowerAlive(void)
{
    if (POF_GetFollowerSlotId() != 0xFF)
        if (GetMonData(&gPlayerParty[POF_GetFollowerSlotId()], MON_DATA_HP) > 0)
            return TRUE;

    return FALSE;
}

bool8 POF_IsFollowerAliveAndWell(void)
{
    u8 ailment = GetMonAilment(&gPlayerParty[POF_GetFollowerSlotId()]);
    if (POF_PlayerHasFollower() && POF_IsFollowerAlive() && (ailment == AILMENT_NONE || ailment == AILMENT_PKRS))
        return TRUE;
    
    return FALSE;
}


void POF_FollowerHide(void)
{
    if (!gSaveBlock2Ptr->follower.inProgress)
        return;

    gObjectEvents[POF_GetFollowerMapObjId()].invisible = TRUE;
}

/*
void POF_IsFollowerStoppingRockClimb(void)
{
    gSpecialVar_Result = FALSE;
    if (!gSaveBlock2Ptr->follower.inProgress)
        return;

    gSpecialVar_Result = (gSaveBlock2Ptr->follower.flags & FOLLOWER_FLAG_CAN_ROCK_CLIMB) == 0;
}
*/

void POF_FollowMe_SetIndicatorToComeOutDoor(void)
{
    if (gSaveBlock2Ptr->follower.inProgress)
        gSaveBlock2Ptr->follower.comeOutDoorStairs = 1;
}

void POF_FollowMe_TryRemoveFollowerOnWhiteOut(void)
{
    if (gSaveBlock2Ptr->follower.inProgress)
    {
        if (gSaveBlock2Ptr->follower.flags & FOLLOWER_FLAG_CLEAR_ON_WHITE_OUT)
            gSaveBlock2Ptr->follower.inProgress = FALSE;
        else
            POF_FollowMe_WarpSetEnd();
    }
}



//Actual Follow Me
void POF_FollowMe(struct ObjectEvent* npc, u8 state, bool8 ignoreScriptActive)
{
    struct ObjectEvent* player = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct ObjectEvent* follower = &gObjectEvents[POF_GetFollowerMapObjId()];
    u8 dir;
    u8 newState;
    u8 taskId;

    if (player != npc) //Only when the player moves
        return;
    else if (!gSaveBlock2Ptr->follower.inProgress)
        return;
    else if (ScriptContext2_IsEnabled() && !ignoreScriptActive)
        return; //Don't follow during a script
    
    //Check if state would cause hidden follower to reappear
    if (POF_IsStateMovement(state) && gSaveBlock2Ptr->follower.warpEnd && !gSaveBlock2Ptr->follower.hidden)
    {
        gSaveBlock2Ptr->follower.warpEnd = 0;

        if (gSaveBlock2Ptr->follower.comeOutDoorStairs == 1)
        {
            gPlayerAvatar.preventStep = TRUE;
            taskId = CreateTask(POF_Task_FollowerOutOfDoor, 1);
            gTasks[taskId].data[0] = 0;
            gTasks[taskId].data[2] = follower->currentCoords.x;
            gTasks[taskId].data[3] = follower->currentCoords.y;
            goto RESET;
        }
        else if (gSaveBlock2Ptr->follower.comeOutDoorStairs == 2)
        {
            gSaveBlock2Ptr->follower.comeOutDoorStairs = 0;
        }
        
        follower->invisible = FALSE;
        MoveObjectEventToMapCoords(follower, player->currentCoords.x, player->currentCoords.y);
        ObjectEventTurn(follower, player->facingDirection); //The follower should be facing the same direction as the player when it comes out of hiding
    }

    dir = POF_DetermineFollowerDirection(player, follower);

    if (dir == DIR_NONE)
        goto RESET;
        
    newState = POF_DetermineFollowerState(follower, state, dir);
    if (newState == MOVEMENT_INVALID)
        goto RESET;


    ObjectEventClearHeldMovementIfActive(follower);
    ObjectEventSetHeldMovement(follower, newState);
    POF_PlayerLogCoordinates(player);

    switch (newState) 
    {
    case MOVEMENT_ACTION_JUMP_2_DOWN ... MOVEMENT_ACTION_JUMP_2_RIGHT:
        CreateTask(POF_Task_ReallowPlayerMovement, 1); //Synchronize movements on stairs and ledges
        gPlayerAvatar.preventStep = TRUE;   //allow follower to catch up
    }

RESET:
    ObjectEventClearHeldMovementIfFinished(follower);
}

static void POF_Task_ReallowPlayerMovement(u8 taskId)
{
    bool8 animStatus = ObjectEventClearHeldMovementIfFinished(&gObjectEvents[POF_GetFollowerMapObjId()]);
    if (animStatus == 0)
    {
        if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_DASH)
        && ObjectEventClearHeldMovementIfFinished(&gObjectEvents[gPlayerAvatar.objectEventId]))
            SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT); //Temporarily stop running
        return;
    }

    gPlayerAvatar.preventStep = FALSE;
    DestroyTask(taskId);
}

static u8 POF_DetermineFollowerDirection(struct ObjectEvent* player, struct ObjectEvent* follower)
{
    //Move the follower towards the player
    s8 delta_x = follower->currentCoords.x - player->currentCoords.x;
    s8 delta_y = follower->currentCoords.y - player->currentCoords.y;

    if (delta_x < 0)
        return DIR_EAST;
    else if (delta_x > 0)
        return DIR_WEST;

    if (delta_y < 0)
        return DIR_SOUTH;
    else if (delta_y > 0)
        return DIR_NORTH;

    return DIR_NONE;
}

static void POF_PlayerLogCoordinates(struct ObjectEvent* player)
{
    gSaveBlock2Ptr->follower.log.x = player->currentCoords.x;
    gSaveBlock2Ptr->follower.log.y = player->currentCoords.y;
}

#define RETURN_STATE(state, dir) return newState == MOVEMENT_INVALID ? state + (dir - 1) : POF_ReturnFollowerDelayedState(dir - 1);
static u8 POF_DetermineFollowerState(struct ObjectEvent* follower, u8 state, u8 direction)
{
    u8 newState = MOVEMENT_INVALID;
    #if SIDEWAYS_STAIRS_IMPLEMENTED == TRUE
        u8 collision = COLLISION_NONE;
        s16 followerX = follower->currentCoords.x;
        s16 followerY = follower->currentCoords.y;
        u8 currentBehavior = MapGridGetMetatileBehaviorAt(followerX, followerY);
        u8 nextBehavior;
        
        MoveCoords(direction, &followerX, &followerY);
        nextBehavior = MapGridGetMetatileBehaviorAt(followerX, followerY);
    #endif

    if (POF_IsStateMovement(state) && gSaveBlock2Ptr->follower.delayedState)
        newState = gSaveBlock2Ptr->follower.delayedState + direction;

    //Clear ice tile stuff
    follower->disableAnim = FALSE; //follower->field1 &= 0xFB;
    
    #if SIDEWAYS_STAIRS_IMPLEMENTED == TRUE
        // clear overwrite movement
        follower->directionOverwrite = DIR_NONE;
        
        //sideways stairs checks
        collision = GetSidewaysStairsCollision(follower, direction, currentBehavior, nextBehavior, collision);
        switch (collision)
        {
        case COLLISION_SIDEWAYS_STAIRS_TO_LEFT:
            follower->directionOverwrite = GetLeftSideStairsDirection(direction);
            break;
        case COLLISION_SIDEWAYS_STAIRS_TO_RIGHT:
            follower->directionOverwrite = GetRightSideStairsDirection(direction);
            break;
        }
    #endif
    
    switch (state) 
    {
    case MOVEMENT_ACTION_WALK_SLOW_DOWN ... MOVEMENT_ACTION_WALK_SLOW_RIGHT:
        // Slow walk
        RETURN_STATE(MOVEMENT_ACTION_WALK_SLOW_DOWN, direction);

    case MOVEMENT_ACTION_WALK_NORMAL_DOWN ... MOVEMENT_ACTION_WALK_NORMAL_RIGHT:
        // normal walk
        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);

    case MOVEMENT_ACTION_JUMP_2_DOWN ... MOVEMENT_ACTION_JUMP_2_RIGHT:
        // Ledge jump
        if (((newState - direction) >= MOVEMENT_ACTION_JUMP_2_DOWN && (newState - direction) <= MOVEMENT_ACTION_JUMP_2_RIGHT)
        ||  ((newState - direction) >= 0x84 && (newState - direction) <= 0x87)) //Previously jumped
        {
            newState = MOVEMENT_INVALID;
            RETURN_STATE(MOVEMENT_ACTION_JUMP_2_DOWN, direction); //Jump right away
        }

        gSaveBlock2Ptr->follower.delayedState = MOVEMENT_ACTION_JUMP_2_DOWN;
        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);

    case MOVEMENT_ACTION_WALK_FAST_DOWN ... MOVEMENT_ACTION_WALK_FAST_RIGHT:
        // Handle player on waterfall
        if (PlayerIsUnderWaterfall(&gObjectEvents[gPlayerAvatar.objectEventId]) && (state == MOVEMENT_ACTION_WALK_FAST_UP))
            return MOVEMENT_INVALID;
        
        //Handle ice tile (some walking animation) -  Set a bit to freeze the follower's animation
        if (MetatileBehavior_IsIce(follower->currentMetatileBehavior) || MetatileBehavior_IsTrickHouseSlipperyFloor(follower->currentMetatileBehavior))
            follower->disableAnim = TRUE;
        
        RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction);
    
    case MOVEMENT_ACTION_WALK_FASTEST_DOWN ... MOVEMENT_ACTION_WALK_FASTEST_RIGHT:
        // mach bike
        if (MetatileBehavior_IsIce(follower->currentMetatileBehavior) || MetatileBehavior_IsTrickHouseSlipperyFloor(follower->currentMetatileBehavior))
            follower->disableAnim = TRUE;
        
        RETURN_STATE(MOVEMENT_ACTION_WALK_FASTEST_DOWN, direction);
        
    // acro bike
    case MOVEMENT_ACTION_RIDE_WATER_CURRENT_DOWN ... MOVEMENT_ACTION_RIDE_WATER_CURRENT_RIGHT:
        // Handle player on waterfall
        if (PlayerIsUnderWaterfall(&gObjectEvents[gPlayerAvatar.objectEventId]) && IsPlayerSurfingNorth())
        //if (PlayerIsUnderWaterfall(&gObjectEvents[gPlayerAvatar.objectEventId]) && (state == MOVEMENT_ACTION_RIDE_WATER_CURRENT_DOWN))
            return MOVEMENT_INVALID;
        
        RETURN_STATE(MOVEMENT_ACTION_RIDE_WATER_CURRENT_DOWN, direction);  //regular movement
    case MOVEMENT_ACTION_ACRO_WHEELIE_FACE_DOWN ... MOVEMENT_ACTION_ACRO_WHEELIE_FACE_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_ACRO_WHEELIE_FACE_DOWN, direction);
    case MOVEMENT_ACTION_ACRO_POP_WHEELIE_DOWN ... MOVEMENT_ACTION_ACRO_POP_WHEELIE_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_ACRO_POP_WHEELIE_DOWN, direction);
    case MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_DOWN ... MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_DOWN, direction);
    case MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_DOWN ... MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_DOWN, direction);
    case MOVEMENT_ACTION_ACRO_WHEELIE_HOP_DOWN ... MOVEMENT_ACTION_ACRO_WHEELIE_HOP_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_ACRO_WHEELIE_HOP_DOWN, direction);
    case MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN ... MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN, direction);
    case MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_DOWN ... MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_DOWN, direction);
    case MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_DOWN ... MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_DOWN, direction);
    case MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_DOWN ... MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_DOWN, direction);
    case MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_DOWN ... MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_DOWN, direction);
        
    // Sliding
    case MOVEMENT_ACTION_SLIDE_DOWN ... MOVEMENT_ACTION_SLIDE_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_SLIDE_DOWN, direction);
    case MOVEMENT_ACTION_PLAYER_RUN_DOWN ... MOVEMENT_ACTION_PLAYER_RUN_RIGHT:
        //Running frames
        if (gSaveBlock2Ptr->follower.flags & FOLLOWER_FLAG_HAS_RUNNING_FRAMES)
            RETURN_STATE(MOVEMENT_ACTION_PLAYER_RUN_DOWN, direction);

        RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction);
    case MOVEMENT_ACTION_JUMP_SPECIAL_DOWN ... MOVEMENT_ACTION_JUMP_SPECIAL_RIGHT:
        gSaveBlock2Ptr->follower.delayedState = MOVEMENT_ACTION_JUMP_SPECIAL_DOWN;
        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);
    case MOVEMENT_ACTION_JUMP_DOWN ... MOVEMENT_ACTION_JUMP_RIGHT:
        gSaveBlock2Ptr->follower.delayedState = MOVEMENT_ACTION_JUMP_DOWN;
        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);
    
    // run slow
    #ifdef MOVEMENT_ACTION_RUN_DOWN_SLOW
    case MOVEMENT_ACTION_RUN_DOWN_SLOW ... MOVEMENT_ACTION_RUN_RIGHT_SLOW:
        if (gSaveBlock2Ptr->follower.flags & FOLLOWER_FLAG_HAS_RUNNING_FRAMES)
            RETURN_STATE(MOVEMENT_ACTION_RUN_DOWN_SLOW, direction);

        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);
    #endif
        
    default:
        return MOVEMENT_INVALID;
    }

    return newState;
}

static bool8 POF_IsStateMovement(u8 state)
{
    switch (state) 
    {
    case MOVEMENT_ACTION_FACE_DOWN:
    case MOVEMENT_ACTION_FACE_UP:
    case MOVEMENT_ACTION_FACE_LEFT:
    case MOVEMENT_ACTION_FACE_RIGHT:
    //case MOVEMENT_ACTION_FACE_DOWN_FAST:
    //case MOVEMENT_ACTION_FACE_UP_FAST:
    //case MOVEMENT_ACTION_FACE_LEFT_FAST:
    //case MOVEMENT_ACTION_FACE_RIGHT_FAST:
    case MOVEMENT_ACTION_DELAY_1:
    case MOVEMENT_ACTION_DELAY_2:
    case MOVEMENT_ACTION_DELAY_4:
    case MOVEMENT_ACTION_DELAY_8:
    case MOVEMENT_ACTION_DELAY_16:
    case MOVEMENT_ACTION_FACE_PLAYER:
    case MOVEMENT_ACTION_FACE_AWAY_PLAYER:
    case MOVEMENT_ACTION_LOCK_FACING_DIRECTION:
    case MOVEMENT_ACTION_UNLOCK_FACING_DIRECTION:
    case MOVEMENT_ACTION_SET_INVISIBLE:
    case MOVEMENT_ACTION_SET_VISIBLE:
    case MOVEMENT_ACTION_EMOTE_EXCLAMATION_MARK:
    case MOVEMENT_ACTION_EMOTE_QUESTION_MARK:
    case MOVEMENT_ACTION_EMOTE_HEART:
    //case MOVEMENT_ACTION_EMOTE_CROSS:
    //case MOVEMENT_ACTION_EMOTE_DOUBLE_EXCLAMATION_MARK:
    //case MOVEMENT_ACTION_EMOTE_HAPPY:
    case MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_DOWN:
    case MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_UP:
    case MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_LEFT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_RIGHT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FAST_DOWN:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FAST_UP:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FAST_LEFT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FAST_RIGHT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FASTEST_DOWN:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FASTEST_UP:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FASTEST_LEFT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FASTEST_RIGHT:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_DOWN:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_UP:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_LEFT:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_RIGHT:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_DOWN_UP:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_UP_DOWN:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_LEFT_RIGHT:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_RIGHT_LEFT:
        return FALSE;
    }

    return TRUE;
}

static u8 POF_ReturnFollowerDelayedState(u8 direction)
{
    u8 newState = gSaveBlock2Ptr->follower.delayedState;
    gSaveBlock2Ptr->follower.delayedState = 0;
    
    /*
    #ifdef MOVEMENT_ACTION_WALK_STAIRS_DIAGONAL_UP_LEFT
    switch (newState) 
    {
    case MOVEMENT_ACTION_WALK_STAIRS_DIAGONAL_UP_LEFT ... MOVEMENT_ACTION_WALK_STAIRS_DIAGONAL_DOWN_RIGHT:
    case MOVEMENT_ACTION_WALK_STAIRS_DIAGONAL_UP_LEFT_RUNNING ... MOVEMENT_ACTION_WALK_STAIRS_DIAGONAL_DOWN_RIGHT_RUNNING:
    case MOVEMENT_ACTION_RIDE_WATER_CURRENT_UP_LEFT ... MOVEMENT_ACTION_RIDE_WATER_CURRENT_DOWN_RIGHT:
        return newState; //Each its own movement, so don't modify direction
    }
    #endif
    */

    return newState + direction;
}

#define LEDGE_FRAMES_MULTIPLIER 2

//extern void (**stepspeeds[5])(struct Sprite*, u8);
//extern const u16 stepspeed_seq_length[5];
void POF_FollowMe_Ledges(struct ObjectEvent* npc, struct Sprite* sprite, u16* ledgeFramesTbl)
{
    u8 speed;
    u16 frameCount;
    u8 currentFrame;
    struct ObjectEvent* follower = &gObjectEvents[POF_GetFollowerMapObjId()];
    
    if (!gSaveBlock2Ptr->follower.inProgress || gSaveBlock2Ptr->follower.hidden)
        return;

    if (follower == npc)
        speed = gPlayerAvatar.runningState ? 3 : 1;
    else
        speed = 0;

    //Calculate the frames for the jump
    frameCount = GetMiniStepCount(speed) * LEDGE_FRAMES_MULTIPLIER;   //in event_object_movement.c
    ledgeFramesTbl[sprite->data[4]] = frameCount;

    //Call the step shifter
    currentFrame = sprite->data[6] / LEDGE_FRAMES_MULTIPLIER;
    //stepspeeds[speed][currentFrame](sprite, sprite->data[3]);
    RunMiniStep(sprite, speed, currentFrame);   //in event_object_movement.c
}

bool8 POF_FollowMe_IsCollisionExempt(struct ObjectEvent* obstacle, struct ObjectEvent* collider)
{
    struct ObjectEvent* follower = &gObjectEvents[POF_GetFollowerMapObjId()];
    struct ObjectEvent* player = &gObjectEvents[gPlayerAvatar.objectEventId];
    
    if (!gSaveBlock2Ptr->follower.inProgress)
        return FALSE;

    if ((obstacle == follower && collider == player) || gSaveBlock2Ptr->follower.hidden)
        return TRUE;

    return FALSE;
}

void POF_FollowMe_FollowerToWater(void)
{
    if (!gSaveBlock2Ptr->follower.inProgress || gSaveBlock2Ptr->follower.hidden)
        return;
    
    POF_FollowMe_HandleBike();
}

static void POF_Task_FinishSurfDismount(u8 taskId)
{
    DestroySprite(&gSprites[gTasks[taskId].data[0]]);
    UnfreezeObjectEvents();
    DestroyTask(taskId);
    gPlayerAvatar.preventStep = FALSE;

    gSaveBlock2Ptr->follower.hidden = FALSE;
    gObjectEvents[POF_GetFollowerMapObjId()].invisible = FALSE;
}

void POF_Task_DoDoorWarp(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    s16 *x = &task->data[2];
    s16 *y = &task->data[3];
    u8 playerObjId = gPlayerAvatar.objectEventId;
    u8 followerObjId = POF_GetFollowerObjectId();

    switch (task->data[0])
    {
    case 0:
        if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_DASH))
            SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT); //Stop running

        gSaveBlock2Ptr->follower.comeOutDoorStairs = 0; //Just in case came out and when right back in
        FreezeObjectEvents();
        PlayerGetDestCoords(x, y);
        PlaySE(GetDoorSoundEffect(*x, *y - 1));
        task->data[1] = FieldAnimateDoorOpen(*x, *y - 1);
        task->data[0] = 1;
        break;
    case 1:
        if (task->data[1] < 0 || gTasks[task->data[1]].isActive != TRUE)
        {
            ObjectEventClearHeldMovementIfActive(&gObjectEvents[playerObjId]);
            ObjectEventSetHeldMovement(&gObjectEvents[playerObjId], MOVEMENT_ACTION_WALK_NORMAL_UP);

            if (gSaveBlock2Ptr->follower.inProgress && !gObjectEvents[followerObjId].invisible)
            {
                u8 newState = POF_DetermineFollowerState(&gObjectEvents[followerObjId], MOVEMENT_ACTION_WALK_NORMAL_UP,
                                                    POF_DetermineFollowerDirection(&gObjectEvents[playerObjId], &gObjectEvents[followerObjId]));
                ObjectEventClearHeldMovementIfActive(&gObjectEvents[followerObjId]);
                ObjectEventSetHeldMovement(&gObjectEvents[followerObjId], newState);
            }

            task->data[0] = 2;
        }
        break;
    case 2:
        if (IsPlayerStandingStill())
        {
            if (!gSaveBlock2Ptr->follower.inProgress || gObjectEvents[followerObjId].invisible) //Don't close door on follower
                task->data[1] = FieldAnimateDoorClose(*x, *y - 1);
            ObjectEventClearHeldMovementIfFinished(&gObjectEvents[playerObjId]);
            SetPlayerVisibility(0);
            task->data[0] = 3;
        }
        break;
    case 3:
        if (task->data[1] < 0 || gTasks[task->data[1]].isActive != TRUE)
        {
            task->data[0] = 4;
        }
        break;
    case 4:
        if (gSaveBlock2Ptr->follower.inProgress)
        {
            ObjectEventClearHeldMovementIfActive(&gObjectEvents[followerObjId]);
            ObjectEventSetHeldMovement(&gObjectEvents[followerObjId], MOVEMENT_ACTION_WALK_NORMAL_UP);
        }

        TryFadeOutOldMapMusic();
        WarpFadeOutScreen();
        PlayRainStoppingSoundEffect();
        task->data[0] = 0;
        task->func = Task_WarpAndLoadMap;
        break;
    case 5:
        TryFadeOutOldMapMusic();
        PlayRainStoppingSoundEffect();
        task->data[0] = 0;
        task->func = Task_WarpAndLoadMap;
        break;
    }
}

static u8 GetPlayerFaceToDoorDirection(struct ObjectEvent* player, struct ObjectEvent* follower)
{
    s16 delta_x = player->currentCoords.x - follower->currentCoords.x;

    if (delta_x < 0)
        return DIR_EAST;
    else if (delta_x > 0)
        return DIR_WEST;

    return DIR_NORTH;
}

static void POF_Task_FollowerOutOfDoor(u8 taskId)
{
    struct ObjectEvent *follower = &gObjectEvents[POF_GetFollowerMapObjId()];
    struct ObjectEvent *player = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct Task *task = &gTasks[taskId];
    s16 *x = &task->data[2];
    s16 *y = &task->data[3];
    
    //if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_DASH) && ObjectEventClearHeldMovementIfFinished(player))
        //SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT); //Temporarily stop running

    if (ObjectEventClearHeldMovementIfFinished(player))
        //ObjectEventTurn(player, GetPlayerFaceToDoorDirection(player, follower)); //The player should face towards the follow as the exit the door

    switch (task->data[0])
    {
    case 0:
        FreezeObjectEvents();
        task->data[1] = FieldAnimateDoorOpen(follower->currentCoords.x, follower->currentCoords.y);
        if (task->data[1] != -1)
            PlaySE(GetDoorSoundEffect(*x, *y)); //only play SE for animating doors
        
        task->data[0] = 1;
        break;
    case 1:
        if (task->data[1] < 0 || gTasks[task->data[1]].isActive != TRUE) //if Door isn't still opening
        {
            follower->invisible = FALSE;
            ObjectEventTurn(follower, DIR_SOUTH); //The follower should be facing down when it comes out the door
            follower->singleMovementActive = FALSE;
            follower->heldMovementActive = FALSE;
            ObjectEventSetHeldMovement(follower, MOVEMENT_ACTION_WALK_NORMAL_DOWN); //follower step down
            task->data[0] = 2;
        }
        break;
    case 2:
        if (ObjectEventClearHeldMovementIfFinished(follower))
        {
            task->data[1] = FieldAnimateDoorClose(*x, *y);
            task->data[0] = 3;
        }
        break;
    case 3:
        if (task->data[1] < 0 || gTasks[task->data[1]].isActive != TRUE) //Door is closed
        {
            UnfreezeObjectEvents();
            task->data[0] = 4;
        }
        break;
    case 4:
        POF_FollowMe_HandleSprite();
        gSaveBlock2Ptr->follower.comeOutDoorStairs = 0;
        gPlayerAvatar.preventStep = FALSE; //Player can move again
        DestroyTask(taskId);
        break;
    }
}

void POF_StairsMoveFollower(void)
{
    if (!gSaveBlock2Ptr->follower.inProgress)
        return;

    if (!FuncIsActiveTask(POF_Task_FollowerHandleIndoorStairs) && gSaveBlock2Ptr->follower.comeOutDoorStairs != 2)
        CreateTask(POF_Task_FollowerHandleIndoorStairs, 1);
}

static void POF_Task_FollowerHandleIndoorStairs(u8 taskId)
{
    struct ObjectEvent* follower = &gObjectEvents[POF_GetFollowerMapObjId()];
    struct ObjectEvent* player = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct Task *task = &gTasks[taskId];

    switch (task->data[0])
    {
    case 0:
        gSaveBlock2Ptr->follower.comeOutDoorStairs = 2; //So the task doesn't get created more than once
        ObjectEventClearHeldMovementIfActive(follower);
        ObjectEventSetHeldMovement(follower, POF_DetermineFollowerState(follower, MOVEMENT_ACTION_WALK_NORMAL_DOWN, POF_DetermineFollowerDirection(player, follower)));
        task->data[0]++;
        break;
    case 1:
        if (ObjectEventClearHeldMovementIfFinished(follower))
        {
            ObjectEventSetHeldMovement(follower, POF_DetermineFollowerState(follower, MOVEMENT_ACTION_WALK_NORMAL_DOWN, player->movementDirection));
            DestroyTask(taskId);
        }
        break;
    }
}

void POF_EscalatorMoveFollower(u8 movementType)
{
    u8 taskId;
    
    if (!gSaveBlock2Ptr->follower.inProgress)
        return;

    taskId = CreateTask(POF_Task_FollowerHandleEscalator, 1);
    gTasks[taskId].data[1] = movementType;
}

static void POF_Task_FollowerHandleEscalator(u8 taskId)
{
    struct ObjectEvent* follower = &gObjectEvents[POF_GetFollowerMapObjId()];
    struct ObjectEvent* player = &gObjectEvents[gPlayerAvatar.objectEventId];
    
    ObjectEventClearHeldMovementIfActive(follower);
    ObjectEventSetHeldMovement(follower, POF_DetermineFollowerState(follower, MOVEMENT_ACTION_WALK_NORMAL_DOWN, POF_DetermineFollowerDirection(player, follower)));
    DestroyTask(taskId);
}

void POF_EscalatorMoveFollowerFinish(void)
{
    if (!gSaveBlock2Ptr->follower.inProgress)
        return;

    CreateTask(POF_Task_FollowerHandleEscalatorFinish, 1);
}

static void POF_Task_FollowerHandleEscalatorFinish(u8 taskId)
{
    s16 x, y;
    struct ObjectEvent* follower = &gObjectEvents[POF_GetFollowerMapObjId()];
    struct ObjectEvent* player = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct Sprite* sprite = &gSprites[follower->spriteId];
    struct Task *task = &gTasks[taskId];

    switch (task->data[0])
    {
    case 0:
        MoveObjectEventToMapCoords(follower, player->currentCoords.x, player->currentCoords.y);
        PlayerGetDestCoords(&x, &y);
        task->data[2] = MapGridGetMetatileBehaviorAt(x, y);
        task->data[7] = 0;
        task->data[0]++;
        break;
    case 1:
        if (task->data[7]++ < 0x20) //Wait half a second before revealing the follower
            break;

        task->data[0]++;
        task->data[1] = 16;
        POF_CalculateFollowerEscalatorTrajectoryUp(task);
        gSaveBlock2Ptr->follower.warpEnd = 0;
        gPlayerAvatar.preventStep = TRUE;
        ObjectEventSetHeldMovement(follower, GetFaceDirectionMovementAction(DIR_EAST));
        if (task->data[2] == 0x6b)
            task->data[0] = 4;
        break;
    case 2:
        follower->invisible = FALSE;
        POF_CalculateFollowerEscalatorTrajectoryDown(task);
        task->data[0]++;
        break;
    case 3:
        POF_CalculateFollowerEscalatorTrajectoryDown(task);
        task->data[2]++;
        if (task->data[2] & 1)
        {
            task->data[1]--;
        }

        if (task->data[1] == 0)
        {
            sprite->x2 = 0;
            sprite->y2 = 0;
            task->data[0] = 6;
        }
        break;
    case 4:
        follower->invisible = FALSE;
        POF_CalculateFollowerEscalatorTrajectoryUp(task);
        task->data[0]++;
        break;
    case 5:
        POF_CalculateFollowerEscalatorTrajectoryUp(task);
        task->data[2]++;
        if (task->data[2] & 1)
        {
            task->data[1]--;
        }

        if (task->data[1] == 0)
        {
            sprite->x2 = 0;
            sprite->y2 = 0;
            task->data[0]++;
        }
        break;
    case 6:
        if (ObjectEventClearHeldMovementIfFinished(follower))
        {
            gPlayerAvatar.preventStep = FALSE;
            DestroyTask(taskId);
        }
    }
}

static void POF_CalculateFollowerEscalatorTrajectoryDown(struct Task *task)
{
    struct Sprite* sprite = &gSprites[gObjectEvents[POF_GetFollowerMapObjId()].spriteId];
    
    sprite->x2 = Cos(0x84, task->data[1]);
    sprite->y2 = Sin(0x94, task->data[1]);
}

static void POF_CalculateFollowerEscalatorTrajectoryUp(struct Task *task)
{
    struct Sprite* sprite = &gSprites[gObjectEvents[POF_GetFollowerMapObjId()].spriteId];
    
    sprite->x2 = Cos(0x7c, task->data[1]);
    sprite->y2 = Sin(0x76, task->data[1]);
}

void POF_FollowMe_HandleBike(void)
{
    POF_ToggleFollower();
}

void POF_FollowerUnhide(void)
{
    if(gSaveBlock2Ptr->follower.partySlotId == 0 || !gSaveBlock2Ptr->follower.inProgress)
        return;

    gSaveBlock2Ptr->follower.hidden = FALSE;
    gObjectEvents[gSaveBlock2Ptr->follower.objId].invisible = FALSE;
}

void POF_FollowMe_HandleSprite(void)
{
    POF_SetFollowerSprite(FOLLOWER_SPRITE_INDEX_NORMAL);
}

void POF_SetFollowerSprite(u8 spriteIndex)
{
    u8 oldSpriteId;
    u8 newSpriteId;
    u16 newGraphicsId;
    struct ObjectEventTemplate clone;
    struct ObjectEvent backupFollower;
    struct ObjectEvent *follower;
    
    if (!gSaveBlock2Ptr->follower.inProgress || gSaveBlock2Ptr->follower.hidden)
        return;

    if (gSaveBlock2Ptr->follower.currentSprite == spriteIndex)
        return;

    //Save sprite
    follower = &gObjectEvents[POF_GetFollowerMapObjId()];
    gSaveBlock2Ptr->follower.currentSprite = spriteIndex;
    oldSpriteId = follower->spriteId;
    newGraphicsId = POF_GetFollowerSprite();

    //Reload the entire event object.
    //It would usually be enough just to change the sprite Id, but if the original
    //sprite and the new sprite have different palettes, the palette would need to
    //be reloaded.
    backupFollower = *follower;
    backupFollower.graphicsId = newGraphicsId;
    //backupFollower.graphicsIdUpperByte = newGraphicsId >> 8;
    DestroySprite(&gSprites[oldSpriteId]);
    RemoveObjectEvent(&gObjectEvents[POF_GetFollowerMapObjId()]);

    clone = *GetObjectEventTemplateByLocalIdAndMap(gSaveBlock2Ptr->follower.map.id, gSaveBlock2Ptr->follower.map.number, gSaveBlock2Ptr->follower.map.group);
    clone.graphicsId = newGraphicsId;
    //clone.graphicsIdUpperByte = newGraphicsId >> 8;
    gSaveBlock2Ptr->follower.objId = TrySpawnObjectEventTemplate(&clone, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, clone.x, clone.y);

    follower = &gObjectEvents[POF_GetFollowerMapObjId()];
    newSpriteId = follower->spriteId;
    *follower = backupFollower;
    follower->spriteId = newSpriteId;
    MoveObjectEventToMapCoords(follower, follower->currentCoords.x, follower->currentCoords.y);
    ObjectEventTurn(follower, follower->facingDirection);
}

void POF_FollowMe_WarpSetEnd(void)
{
    struct ObjectEvent *player;
    struct ObjectEvent *follower;
    u8 toY;
    
    if (!gSaveBlock2Ptr->follower.inProgress)
        return;

    player = &gObjectEvents[gPlayerAvatar.objectEventId];
    follower = &gObjectEvents[POF_GetFollowerMapObjId()];

    gSaveBlock2Ptr->follower.warpEnd = 1;
    POF_PlayerLogCoordinates(player);

    toY = gSaveBlock2Ptr->follower.comeOutDoorStairs == 1 ? (player->currentCoords.y - 1) : player->currentCoords.y;
    MoveObjectEventToMapCoords(follower, player->currentCoords.x, toY);
    
    follower->facingDirection = player->facingDirection;
    follower->movementDirection = player->movementDirection;

    gSaveBlock2Ptr->follower.hidden = FALSE;
}

void POF_CreateFollowerAvatar(void)
{
    struct ObjectEvent* player;
    struct ObjectEventTemplate clone;

    if (!gSaveBlock2Ptr->follower.inProgress || gSaveBlock2Ptr->follower.hidden)
        return;

    player = &gObjectEvents[gPlayerAvatar.objectEventId];
    clone = *GetObjectEventTemplateByLocalIdAndMap(gSaveBlock2Ptr->follower.map.id, gSaveBlock2Ptr->follower.map.number, gSaveBlock2Ptr->follower.map.group);

    clone.graphicsId = POF_GetFollowerSprite();
    //clone.graphicsIdUpperByte = POF_GetFollowerSprite() >> 8;
    clone.x = player->currentCoords.x - 7;
    clone.y = player->currentCoords.y - 7;
    clone.movementType = 0; //Doesn't get to move on its own

    switch (GetPlayerFacingDirection())
    {
    case DIR_NORTH:
        clone.movementType = MOVEMENT_TYPE_FACE_UP;
        break;
    case DIR_WEST:
        clone.movementType = MOVEMENT_TYPE_FACE_LEFT;
        break;
    case DIR_EAST:
        clone.movementType = MOVEMENT_TYPE_FACE_RIGHT;
        break;
    }

    // Create NPC and store ID
    gSaveBlock2Ptr->follower.objId = TrySpawnObjectEventTemplate(&clone, gSaveBlock2Ptr->follower.map.number, gSaveBlock2Ptr->follower.map.group, clone.x, clone.y);
    if (gSaveBlock2Ptr->follower.objId == OBJECT_EVENTS_COUNT)
        gSaveBlock2Ptr->follower.inProgress = FALSE; //Cancel the following because couldn't load sprite

    gObjectEvents[gSaveBlock2Ptr->follower.objId].invisible = TRUE;
}

enum
{
	GoDown,
	GoUp,
	GoLeft,
	GoRight
};
void POF_FollowerPositionFix(u8 offset)
{
    u8 playerObjId = GetPlayerMapObjId();
    u8 followerObjid = gSaveBlock2Ptr->follower.objId;
    u16 playerX = gObjectEvents[playerObjId].currentCoords.x;
    u16 playerY = gObjectEvents[playerObjId].currentCoords.y;
    u16 npcX = gObjectEvents[followerObjid].currentCoords.x;
    u16 npcY = gObjectEvents[followerObjid].currentCoords.y;
    
    gSpecialVar_Result = 0xFFFF;

    if (!gSaveBlock2Ptr->follower.inProgress)
        return;

    if (playerX == npcX)
    {
        if (playerY > npcY)
        {
            if (playerY != npcY + offset) //Player and follower are not 1 tile apart
            {
                if (gSpecialVar_0x8000 == 0)
                    gSpecialVar_Result = GoDown;
                else
                    gObjectEvents[followerObjid].currentCoords.y = playerY - offset;
            }
        }
        else // Player Y <= npcY
        {
            if (playerY != npcY - offset) //Player and follower are not 1 tile apart
            {
                if (gSpecialVar_0x8000 == 0)
                    gSpecialVar_Result = GoUp;
                else
                    gObjectEvents[followerObjid].currentCoords.y = playerY + offset;
            }
        }
    }
    else //playerY == npcY
    {
        if (playerX > npcX)
        {
            if (playerX != npcX + offset) //Player and follower are not 1 tile apart
            {
                if (gSpecialVar_0x8000 == 0)
                    gSpecialVar_Result = GoRight;
                else
                    gObjectEvents[followerObjid].currentCoords.x = playerX - offset;
            }
        }
        else // Player X <= npcX
        {
            if (playerX != npcX - offset) //Player and follower are not 1 tile apart
            {
                if (gSpecialVar_0x8000 == 0)
                    gSpecialVar_Result = GoLeft;
                else
                    gObjectEvents[followerObjid].currentCoords.x = playerX + offset;
            }
        }
    }
}

void FollowerTrainerSightingPositionFix(void)
{
    POF_FollowerPositionFix(1);
}

void FollowerIntoPlayer(void)
{
    POF_FollowerPositionFix(0);
}



//////////////////SCRIPTING////////////////////

//@Details: Ends the follow me feature.
void POF_DestroyFollower(void)
{
    if (gSaveBlock2Ptr->follower.inProgress)
    {
        RemoveObjectEvent(&gObjectEvents[gSaveBlock2Ptr->follower.objId]);
        FlagSet(gSaveBlock2Ptr->follower.flag);
        gSaveBlock2Ptr->follower.inProgress = FALSE;
        gSaveBlock2Ptr->follower.partySlotId = 0;
    }
}

//@Details: Faces the player and the follower sprite towards each other.
void POF_PlayerFaceFollowerSprite(void)
{
    if (gSaveBlock2Ptr->follower.inProgress)
    {
        u8 playerDirection, followerDirection;
        struct ObjectEvent* player, *follower;
    
        player = &gObjectEvents[gPlayerAvatar.objectEventId];
        follower = &gObjectEvents[gSaveBlock2Ptr->follower.objId];
        playerDirection = POF_DetermineFollowerDirection(player, follower);
        followerDirection = playerDirection;
        
        //Flip direction
        switch (playerDirection) 
        {
        case DIR_NORTH:
            playerDirection = DIR_SOUTH;
            followerDirection = DIR_NORTH;
            break;
        case DIR_SOUTH:
            playerDirection = DIR_NORTH;
            followerDirection = DIR_SOUTH;
            break;
        case DIR_WEST:
            playerDirection = DIR_EAST;
            followerDirection = DIR_WEST;
            break;
        case DIR_EAST:
            playerDirection = DIR_WEST;
            followerDirection = DIR_EAST;
            break;
        }

        ObjectEventTurn(player, playerDirection);
        ObjectEventTurn(follower, followerDirection);
    }
}

void POF_CreateMonFromPartySlotId(void)
{
    struct ObjectEvent* follower;
    u8 eventObjId;
    const u8 *script;
    u16 flag;
    u16 gfx_id;
    u8 slotId = (gSaveBlock2Ptr->follower.partySlotId-1);
    u16 species = GetMonData(&gPlayerParty[slotId], MON_DATA_SPECIES);

    if(gSaveBlock2Ptr->follower.partySlotId == 0)
        return;

    if (species > 251)
        species = gSpeciesLookUpTable[species];


    gfx_id = NUM_REGULAR_OBJ_EVENT_GFX + species - 1;

    for (eventObjId = 0; eventObjId < OBJECT_EVENTS_COUNT; eventObjId++) //For each NPC on the map
    {
        if (gObjectEvents[eventObjId].active || gObjectEvents[eventObjId].isPlayer)
            continue;

        //TrySpawnObjectEvent(254, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);

        flag = GetObjectEventTemplateByLocalIdAndMap(follower->localId, follower->mapNum, follower->mapGroup)->flagId;

        gSaveBlock2Ptr->follower.inProgress = TRUE;
        gSaveBlock2Ptr->follower.objId = eventObjId;
        gSaveBlock2Ptr->follower.graphicsId = gfx_id;
        gSaveBlock2Ptr->follower.map.id = 0;
        gSaveBlock2Ptr->follower.map.number = 0;
        gSaveBlock2Ptr->follower.map.group = 33;
        gSaveBlock2Ptr->follower.script = EventScript_TestSignpostMsg;
        gSaveBlock2Ptr->follower.flag = flag;
        gSaveBlock2Ptr->follower.flags = 0x100;
        gSaveBlock2Ptr->follower.createSurfBlob = 0;
        gSaveBlock2Ptr->follower.comeOutDoorStairs = 0;
        gSaveBlock2Ptr->follower.hidden = 0;

        POF_CreateFollowerAvatar();
        gObjectEvents[gSaveBlock2Ptr->follower.objId].invisible = FALSE;
        break;
    }

}

static u8 GetClockwiseNextDirection(u8 direction)
{
    switch (direction) 
    {
    case DIR_NORTH:
        direction = DIR_EAST;
        break;
    case DIR_SOUTH:
        direction = DIR_WEST;
        break;
    case DIR_WEST:
        direction = DIR_NORTH;
        break;
    case DIR_EAST:
        direction = DIR_SOUTH;
        break;
    }
    return direction;
}

void POF_MoveFollowerToPlayer(void)
{
    struct ObjectEvent *player = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct ObjectEvent *follower = &gObjectEvents[POF_GetFollowerMapObjId()];
    s16 xx = follower->currentCoords.x; 
    s16 yy = follower->currentCoords.y;
    s16 playerDirection = player->previousMovementDirection;
    s16 followerDirection = playerDirection;
    u8 collision = 0xFF;
    u8 i;

    // MoveObjectEventToMapCoords(follower, xx, yy);

    for (i = 0; i<4; i++)
    {
        followerDirection = GetOppositeDirection(playerDirection);
        collision = GetCollisionInDirection(player, followerDirection);

        if (collision == COLLISION_NONE)
        {
            switch (playerDirection) 
            {
            case DIR_NORTH:
                yy += 1;
                break;
            case DIR_SOUTH:
                yy += -1;
                break;
            case DIR_WEST:
                xx += 1;
                break;
            case DIR_EAST:
                xx += -1;
                break;
            }
            i = 5;
        }

        playerDirection = GetClockwiseNextDirection(playerDirection);
    }
    
    MoveObjectEventToMapCoords(follower, xx, yy);
    followerDirection = POF_DetermineFollowerDirection(player, follower);
    ObjectEventTurn(follower, followerDirection);
}

static void POF_DisableFollowerTemp(void)
{
    if (gSaveBlock2Ptr->follower.inProgress)
    {
        RemoveObjectEvent(&gObjectEvents[gSaveBlock2Ptr->follower.objId]);
        gSaveBlock2Ptr->follower.inProgress = FALSE;
    }
}

static void POF_RenableFollower(void)
{
    if (!gSaveBlock2Ptr->follower.inProgress && gSaveBlock2Ptr->follower.partySlotId != 0)
    {
        gSaveBlock2Ptr->follower.inProgress = TRUE;
        POF_CreateMonFromPartySlotId();
        POF_MoveFollowerToPlayer();
    }
}

void POF_ToggleFollower(void)
{
    if (gSaveBlock2Ptr->follower.inProgress)
        POF_DisableFollowerTemp();
    else
        POF_RenableFollower();
}

