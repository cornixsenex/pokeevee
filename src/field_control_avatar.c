#include "global.h"
#include "battle_setup.h"
#include "bike.h"
#include "coord_event_weather.h"
#include "daycare.h"
#include "debug.h"
#include "dexnav.h"
#include "faraway_island.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "fieldmap.h"
#include "field_control_avatar.h"
#include "field_effect.h" //Rock Climb
#include "field_message_box.h"
#include "field_player_avatar.h"
#include "field_poison.h"
#include "field_screen_effect.h"
#include "field_specials.h"
#include "fldeff_misc.h"
#include "follower_npc.h"
#include "item_menu.h"
#include "link.h"
#include "match_call.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "pokemon.h"
#include "safari_zone.h"
#include "script.h"
#include "secret_base.h"
#include "sound.h"
#include "start_menu.h"
#include "trainer_see.h"
#include "trainer_hill.h"
#include "vs_seeker.h"
#include "wild_encounter.h"
#include "constants/event_bg.h"
#include "constants/event_objects.h"
#include "constants/field_poison.h"
#include "constants/map_types.h"
#include "constants/metatile_behaviors.h"
#include "constants/songs.h"
#include "constants/trainer_hill.h"

static EWRAM_DATA u8 sWildEncounterImmunitySteps = 0;
static EWRAM_DATA u16 sPrevMetatileBehavior = 0;

COMMON_DATA u8 gSelectedObjectEvent = 0;

static void GetInFrontOfPlayerPosition(struct MapPosition *);
static u16 GetPlayerCurMetatileBehavior(int);
static bool8 TryStartInteractionScript(struct MapPosition *, u16, u8);
static const u8 *GetInteractionScript(struct MapPosition *, u8, u8);
static const u8 *GetInteractedObjectEventScript(struct MapPosition *, u8, u8);
static const u8 *GetInteractedBackgroundEventScript(struct MapPosition *, u8, u8);
static const u8 *GetInteractedMetatileScript(struct MapPosition *, u8, u8);
static const u8 *GetInteractedWaterScript(struct MapPosition *, u8, u8);
static bool32 TrySetupDiveDownScript(void);
static bool32 TrySetupDiveEmergeScript(void);
static bool8 TryStartStepBasedScript(struct MapPosition *, u16, u16);
static bool8 CheckStandardWildEncounter(u16);
static bool8 TryArrowWarp(struct MapPosition *, u16, u8);
static bool8 IsWarpMetatileBehavior(u16);
static bool8 IsArrowWarpMetatileBehavior(u16, u8);
static s8 GetWarpEventAtMapPosition(struct MapHeader *, struct MapPosition *);
static void SetupWarp(struct MapHeader *, s8, struct MapPosition *);
static bool8 TryDoorWarp(struct MapPosition *, u16, u8);
static s8 GetWarpEventAtPosition(struct MapHeader *, u16, u16, u8);
static const u8 *GetCoordEventScriptAtPosition(struct MapHeader *, u16, u16, u8);
static const struct BgEvent *GetBackgroundEventAtPosition(struct MapHeader *, u16, u16, u8);
static bool8 TryStartWarpEventScript(struct MapPosition *, u16);
static bool8 TryStartMiscWalkingScripts(u16);
static bool8 TryStartStepCountScript(u16);
static void UpdateFriendshipStepCounter(void);
static void UpdateFollowerStepCounter(void);
#if OW_POISON_DAMAGE < GEN_5
static bool8 UpdatePoisonStepCounter(void);
#endif // OW_POISON_DAMAGE
static bool8 EnableAutoRun(void); //Apparently auto run isn't in rhh? IDK
static bool32 TrySetUpWalkIntoSignpostScript(struct MapPosition * position, u32 metatileBehavior, u32 playerDirection);
static void SetMsgSignPostAndVarFacing(u32 playerDirection);
static void SetUpWalkIntoSignScript(const u8 *script, u32 playerDirection);
static u32 GetFacingSignpostType(u16 metatileBehvaior, u32 direction);
static const u8 *GetSignpostScriptAtMapPosition(struct MapPosition * position);
//Cornix Tombstones
static const u8 *GetTombstoneScriptAtMapPosition(struct MapPosition *position);

void FieldClearPlayerInput(struct FieldInput *input)
{
    input->pressedAButton = FALSE;
    input->checkStandardWildEncounter = FALSE;
    input->pressedStartButton = FALSE;
    input->pressedSelectButton = FALSE;
    input->heldDirection = FALSE;
    input->heldDirection2 = FALSE;
    input->tookStep = FALSE;
    input->pressedBButton = FALSE;
    input->pressedRButton = FALSE;
    input->input_field_1_1 = FALSE;
    input->input_field_1_2 = FALSE;
    input->input_field_1_3 = FALSE;
    input->dpadDirection = 0;
}

void FieldGetPlayerInput(struct FieldInput *input, u16 newKeys, u16 heldKeys)
{
    u8 tileTransitionState = gPlayerAvatar.tileTransitionState;
    u8 runningState = gPlayerAvatar.runningState;
    bool8 forcedMove = MetatileBehavior_IsForcedMovementTile(GetPlayerCurMetatileBehavior(runningState));

    if ((tileTransitionState == T_TILE_CENTER && forcedMove == FALSE) || tileTransitionState == T_NOT_MOVING)
    {
        if (GetPlayerSpeed() != PLAYER_SPEED_FASTEST)
        {
            if (newKeys & START_BUTTON)
                input->pressedStartButton = TRUE;
            if (newKeys & SELECT_BUTTON)
                input->pressedSelectButton = TRUE;
            if (newKeys & A_BUTTON)
                input->pressedAButton = TRUE;
            if (newKeys & B_BUTTON)
                input->pressedBButton = TRUE;
            if (newKeys & R_BUTTON && !FlagGet(DN_FLAG_SEARCHING))
                input->pressedRButton = TRUE;
        }

        if (heldKeys & (DPAD_UP | DPAD_DOWN | DPAD_LEFT | DPAD_RIGHT))
        {
            input->heldDirection = TRUE;
            input->heldDirection2 = TRUE;
        }
    }

    if (forcedMove == FALSE)
    {
        if (tileTransitionState == T_TILE_CENTER && runningState == MOVING)
            input->tookStep = TRUE;
        if (forcedMove == FALSE && tileTransitionState == T_TILE_CENTER)
            input->checkStandardWildEncounter = TRUE;
    }

    if (heldKeys & DPAD_UP)
        input->dpadDirection = DIR_NORTH;
    else if (heldKeys & DPAD_DOWN)
        input->dpadDirection = DIR_SOUTH;
    else if (heldKeys & DPAD_LEFT)
        input->dpadDirection = DIR_WEST;
    else if (heldKeys & DPAD_RIGHT)
        input->dpadDirection = DIR_EAST;

    if(DEBUG_OVERWORLD_MENU && !DEBUG_OVERWORLD_IN_MENU)
    {
        if ((heldKeys & DEBUG_OVERWORLD_HELD_KEYS) && input->DEBUG_OVERWORLD_TRIGGER_EVENT)
        {
            input->input_field_1_2 = TRUE;
            input->DEBUG_OVERWORLD_TRIGGER_EVENT = FALSE;
        }
    }
}

int ProcessPlayerFieldInput(struct FieldInput *input)
{
    struct MapPosition position;
    u8 playerDirection;
    u16 metatileBehavior;

    gSpecialVar_LastTalked = LOCALID_NONE;
    gSelectedObjectEvent = 0;

    gMsgIsSignPost = FALSE;
    playerDirection = GetPlayerFacingDirection();
    GetPlayerPosition(&position);
    metatileBehavior = MapGridGetMetatileBehaviorAt(position.x, position.y);

    if (CheckForTrainersWantingBattle() == TRUE)
        return TRUE;

    if (TryRunOnFrameMapScript() == TRUE)
        return TRUE;

    if (input->pressedBButton && TrySetupDiveEmergeScript() == TRUE)
        return TRUE;
    if (input->tookStep)
    {
        IncrementGameStat(GAME_STAT_STEPS);
        IncrementBirthIslandRockStepCount();
        if (TryStartStepBasedScript(&position, metatileBehavior, playerDirection) == TRUE)
            return TRUE;
    }

    if ((input->checkStandardWildEncounter) && ((input->dpadDirection == 0) || input->dpadDirection == playerDirection))
    {
        GetInFrontOfPlayerPosition(&position);
        metatileBehavior = MapGridGetMetatileBehaviorAt(position.x, position.y);
        if (TrySetUpWalkIntoSignpostScript(&position, metatileBehavior, playerDirection) == TRUE)
            return TRUE;
        GetPlayerPosition(&position);
        metatileBehavior = MapGridGetMetatileBehaviorAt(position.x, position.y);
    }

    if (input->checkStandardWildEncounter && CheckStandardWildEncounter(metatileBehavior) == TRUE)
        return TRUE;
    if (input->heldDirection && input->dpadDirection == playerDirection)
    {
        if (TryArrowWarp(&position, metatileBehavior, playerDirection) == TRUE)
            return TRUE;
    }

    GetInFrontOfPlayerPosition(&position);
    metatileBehavior = MapGridGetMetatileBehaviorAt(position.x, position.y);

    if (input->heldDirection && (input->dpadDirection == playerDirection) && (TrySetUpWalkIntoSignpostScript(&position, metatileBehavior, playerDirection) == TRUE))
        return TRUE;

    if (input->pressedAButton && TryStartInteractionScript(&position, metatileBehavior, playerDirection) == TRUE)
        return TRUE;

    if (input->heldDirection2 && input->dpadDirection == playerDirection)
    {
        if (TryDoorWarp(&position, metatileBehavior, playerDirection) == TRUE)
            return TRUE;
    }
    if (input->pressedAButton && TrySetupDiveDownScript() == TRUE)
        return TRUE;
    if (input->pressedStartButton)
    {
        PlaySE(SE_WIN_OPEN);
        ShowStartMenu();
        return TRUE;
    }

    if (input->tookStep && TryFindHiddenPokemon())
        return TRUE;

    if (input->pressedSelectButton && UseRegisteredKeyItemOnField() == TRUE)
        return TRUE;
    
    if (input->pressedRButton && EnableAutoRun())
        return TRUE;


	if (input->input_field_1_2)
	{
		PlaySE(SE_WIN_OPEN);
		Debug_ShowMainMenu();
		return TRUE;
	}

    if (input->pressedRButton && TryStartDexNavSearch())
        return TRUE;

    if(input->input_field_1_2 && DEBUG_OVERWORLD_MENU && !DEBUG_OVERWORLD_IN_MENU)
    {
        PlaySE(SE_WIN_OPEN);
        FreezeObjectEvents();
        Debug_ShowMainMenu();
        return TRUE;
    }

    if (CanTriggerSpinEvolution())
    {
        ResetSpinTimer();
        TrySpecialOverworldEvo(); // Special vars set in CanTriggerSpinEvolution.
        return TRUE;
    }

    return FALSE;
}

void GetPlayerPosition(struct MapPosition *position)
{
    PlayerGetDestCoords(&position->x, &position->y);
    position->elevation = PlayerGetElevation();
}

static void GetInFrontOfPlayerPosition(struct MapPosition *position)
{
    s16 x, y;

    GetXYCoordsOneStepInFrontOfPlayer(&position->x, &position->y);
    PlayerGetDestCoords(&x, &y);
    if (MapGridGetElevationAt(x, y) != 0)
        position->elevation = PlayerGetElevation();
    else
        position->elevation = 0;
}

static u16 GetPlayerCurMetatileBehavior(int runningState)
{
    s16 x, y;

    PlayerGetDestCoords(&x, &y);
    return MapGridGetMetatileBehaviorAt(x, y);
}

static bool8 TryStartInteractionScript(struct MapPosition *position, u16 metatileBehavior, u8 direction)
{
    const u8 *script = GetInteractionScript(position, metatileBehavior, direction);
    if (script == NULL || Script_HasNoEffect(script))
        return FALSE;

    // Don't play interaction sound for certain scripts.
    if (script != LittlerootTown_BrendansHouse_2F_EventScript_PC
     && script != LittlerootTown_MaysHouse_2F_EventScript_PC
     && script != SecretBase_EventScript_PC
     && script != SecretBase_EventScript_RecordMixingPC
     && script != SecretBase_EventScript_DollInteract
     && script != SecretBase_EventScript_CushionInteract
     && script != EventScript_PC)
        PlaySE(SE_SELECT);

    ScriptContext_SetupScript(script);
    return TRUE;
}

static const u8 *GetInteractionScript(struct MapPosition *position, u8 metatileBehavior, u8 direction)
{
    const u8 *script = GetInteractedObjectEventScript(position, metatileBehavior, direction);
    if (script != NULL)
        return script;

    script = GetInteractedBackgroundEventScript(position, metatileBehavior, direction);
    if (script != NULL)
        return script;

    script = GetInteractedMetatileScript(position, metatileBehavior, direction);
    if (script != NULL)
        return script;

    script = GetInteractedWaterScript(position, metatileBehavior, direction);
    if (script != NULL)
        return script;

    return NULL;
}

const u8 *GetInteractedLinkPlayerScript(struct MapPosition *position, u8 metatileBehavior, u8 direction)
{
    u8 objectEventId;
    s32 i;

    if (!MetatileBehavior_IsCounter(MapGridGetMetatileBehaviorAt(position->x, position->y)))
        objectEventId = GetObjectEventIdByPosition(position->x, position->y, position->elevation);
    else
        objectEventId = GetObjectEventIdByPosition(position->x + gDirectionToVectors[direction].x, position->y + gDirectionToVectors[direction].y, position->elevation);

    if (objectEventId == OBJECT_EVENTS_COUNT || gObjectEvents[objectEventId].localId == LOCALID_PLAYER)
        return NULL;

    for (i = 0; i < 4; i++)
    {
        if (gLinkPlayerObjectEvents[i].active == TRUE && gLinkPlayerObjectEvents[i].objEventId == objectEventId)
            return NULL;
    }

    gSelectedObjectEvent = objectEventId;
    gSpecialVar_LastTalked = gObjectEvents[objectEventId].localId;
    gSpecialVar_Facing = direction;
    return GetObjectEventScriptPointerByObjectEventId(objectEventId);
}

static const u8 *GetInteractedObjectEventScript(struct MapPosition *position, u8 metatileBehavior, u8 direction)
{
    u8 objectEventId;
    const u8 *script;
    s16 currX = gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.x;
    s16 currY = gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.y;
    u8 currBehavior = MapGridGetMetatileBehaviorAt(currX, currY);

    switch (direction)
    {
    case DIR_EAST:
        if (MetatileBehavior_IsSidewaysStairsLeftSideAny(metatileBehavior))
            // sideways stairs left-side to your right -> check northeast
            objectEventId = GetObjectEventIdByPosition(currX + 1, currY - 1, position->elevation);
        else if (MetatileBehavior_IsSidewaysStairsRightSideAny(currBehavior))
            // on top of right-side stairs -> check southeast
            objectEventId = GetObjectEventIdByPosition(currX + 1, currY + 1, position->elevation);
        else
            // check in front of player
            objectEventId = GetObjectEventIdByPosition(position->x, position->y, position->elevation);
        break;
    case DIR_WEST:
        if (MetatileBehavior_IsSidewaysStairsRightSideAny(metatileBehavior))
            // facing sideways stairs right side -> check northwest
            objectEventId = GetObjectEventIdByPosition(currX - 1, currY - 1, position->elevation);
        else if (MetatileBehavior_IsSidewaysStairsLeftSideAny(currBehavior))
            // on top of left-side stairs -> check southwest
            objectEventId = GetObjectEventIdByPosition(currX - 1, currY + 1, position->elevation);
        else
            // check in front of player
            objectEventId = GetObjectEventIdByPosition(position->x, position->y, position->elevation);
        break;
    default:
        objectEventId = GetObjectEventIdByPosition(position->x, position->y, position->elevation);
        break;
    }

    if (objectEventId == OBJECT_EVENTS_COUNT || gObjectEvents[objectEventId].localId == LOCALID_PLAYER)
    {
        if (MetatileBehavior_IsCounter(metatileBehavior) != TRUE)
            return NULL;

        // Look for an object event on the other side of the counter.
        objectEventId = GetObjectEventIdByPosition(position->x + gDirectionToVectors[direction].x, position->y + gDirectionToVectors[direction].y, position->elevation);
        if (objectEventId == OBJECT_EVENTS_COUNT || gObjectEvents[objectEventId].localId == LOCALID_PLAYER)
            return NULL;
    }

    gSelectedObjectEvent = objectEventId;
    gSpecialVar_LastTalked = gObjectEvents[objectEventId].localId;
    gSpecialVar_Facing = direction;

    if (InTrainerHill() == TRUE)
        script = GetTrainerHillTrainerScript();
    else if (PlayerHasFollowerNPC() && objectEventId == GetFollowerNPCObjectId())
        script = GetFollowerNPCScriptPointer();
    else
        script = GetObjectEventScriptPointerByObjectEventId(objectEventId);

    script = GetRamScript(gSpecialVar_LastTalked, script);
    return script;
}

static const u8 *GetInteractedBackgroundEventScript(struct MapPosition *position, u8 metatileBehavior, u8 direction)
{
    const struct BgEvent *bgEvent = GetBackgroundEventAtPosition(&gMapHeader, position->x - MAP_OFFSET, position->y - MAP_OFFSET, position->elevation);

    if (bgEvent == NULL)
        return NULL;
    if (bgEvent->bgUnion.script == NULL)
        return EventScript_TestSignpostMsg;

    if (GetFacingSignpostType(metatileBehavior, direction) != NOT_SIGNPOST)
        SetMsgSignPostAndVarFacing(direction);

    switch (bgEvent->kind)
    {
    case BG_EVENT_PLAYER_FACING_ANY:
    default:
        return bgEvent->bgUnion.script;
    case BG_EVENT_PLAYER_FACING_NORTH:
        if (direction != DIR_NORTH)
            return NULL;
        break;
    case BG_EVENT_PLAYER_FACING_SOUTH:
        if (direction != DIR_SOUTH)
            return NULL;
        break;
    case BG_EVENT_PLAYER_FACING_EAST:
        if (direction != DIR_EAST)
            return NULL;
        break;
    case BG_EVENT_PLAYER_FACING_WEST:
        if (direction != DIR_WEST)
            return NULL;
        break;
    case 5:
    case 6:
    case BG_EVENT_HIDDEN_ITEM:
        gSpecialVar_0x8004 = ((u32)bgEvent->bgUnion.script >> 16) + FLAG_HIDDEN_ITEMS_START;
        gSpecialVar_0x8005 = (u32)bgEvent->bgUnion.script;
        if (FlagGet(gSpecialVar_0x8004) == TRUE)
            return NULL;
        return EventScript_HiddenItemScript;
    case BG_EVENT_SECRET_BASE:
        if (direction == DIR_NORTH)
        {
            gSpecialVar_0x8004 = bgEvent->bgUnion.secretBaseId;
            if (TrySetCurSecretBase())
                return SecretBase_EventScript_CheckEntrance;
        }
        return NULL;
    }

    return bgEvent->bgUnion.script;
}

static const u8 *GetInteractedMetatileScript(struct MapPosition *position, u8 metatileBehavior, u8 direction)
{
    s8 elevation;

    if (MetatileBehavior_IsPlayerFacingTVScreen(metatileBehavior, direction) == TRUE)
        return EventScript_TV;
    if (MetatileBehavior_IsPC(metatileBehavior) == TRUE)
        return EventScript_PC;
    if (MetatileBehavior_IsClosedSootopolisDoor(metatileBehavior) == TRUE)
        return EventScript_ClosedSootopolisDoor;
    if (MetatileBehavior_IsSkyPillarClosedDoor(metatileBehavior) == TRUE)
        return SkyPillar_Outside_EventScript_ClosedDoor;
    if (MetatileBehavior_IsCableBoxResults1(metatileBehavior) == TRUE)
        return EventScript_CableBoxResults;
    if (MetatileBehavior_IsPokeblockFeeder(metatileBehavior) == TRUE)
        return EventScript_PokeBlockFeeder;
    if (MetatileBehavior_IsTrickHousePuzzleDoor(metatileBehavior) == TRUE)
        return Route110_TrickHousePuzzle_EventScript_Door;
    if (MetatileBehavior_IsRegionMap(metatileBehavior) == TRUE)
        return EventScript_RegionMap;
    if (MetatileBehavior_IsRunningShoesManual(metatileBehavior) == TRUE)
        return EventScript_RunningShoesManual;
    if (MetatileBehavior_IsPictureBookShelf(metatileBehavior) == TRUE)
        return EventScript_PictureBookShelf;
    if (MetatileBehavior_IsBookShelf(metatileBehavior) == TRUE)
        return EventScript_BookShelf;
    if (MetatileBehavior_IsPokeCenterBookShelf(metatileBehavior) == TRUE)
        return EventScript_PokemonCenterBookShelf;
    if (MetatileBehavior_IsVase(metatileBehavior) == TRUE)
        return EventScript_Vase;
    if (MetatileBehavior_IsTrashCan(metatileBehavior) == TRUE)
        return EventScript_EmptyTrashCan;
	//Mortia Tombstone
    if (MetatileBehavior_IsPlayerFacingTombstone(metatileBehavior, direction) == TRUE)
        return GetTombstoneScriptAtMapPosition(position);
    if (MetatileBehavior_IsShopShelf(metatileBehavior) == TRUE)
        return EventScript_ShopShelf;
    if (MetatileBehavior_IsBlueprint(metatileBehavior) == TRUE)
        return EventScript_Blueprint;
    if (MetatileBehavior_IsPlayerFacingWirelessBoxResults(metatileBehavior, direction) == TRUE)
        return EventScript_WirelessBoxResults;
    if (MetatileBehavior_IsCableBoxResults2(metatileBehavior, direction) == TRUE)
        return EventScript_CableBoxResults;
    if (MetatileBehavior_IsQuestionnaire(metatileBehavior) == TRUE)
        return EventScript_Questionnaire;
    if (MetatileBehavior_IsTrainerHillTimer(metatileBehavior) == TRUE)
        return EventScript_TrainerHillTimer;
    if (MetatileBehavior_IsRockClimbable(metatileBehavior) == TRUE && !IsRockClimbActive())
        return EventScript_UseRockClimb;
    if (MetatileBehavior_IsPokeMartSign(metatileBehavior) == TRUE)
    {
        if(direction != DIR_NORTH)
            return NULL;
        SetMsgSignPostAndVarFacing(direction);
        return Common_EventScript_ShowPokemartSign;
    }
    if (MetatileBehavior_IsPokemonCenterSign(metatileBehavior) == TRUE)
    {
        if(direction != DIR_NORTH)
            return NULL;
        SetMsgSignPostAndVarFacing(direction);
        return Common_EventScript_ShowPokemonCenterSign;
    }

    elevation = position->elevation;
    if (elevation == MapGridGetElevationAt(position->x, position->y))
    {
        if (MetatileBehavior_IsSecretBasePC(metatileBehavior) == TRUE)
            return SecretBase_EventScript_PC;
        if (MetatileBehavior_IsRecordMixingSecretBasePC(metatileBehavior) == TRUE)
            return SecretBase_EventScript_RecordMixingPC;
        if (MetatileBehavior_IsSecretBaseSandOrnament(metatileBehavior) == TRUE)
            return SecretBase_EventScript_SandOrnament;
        if (MetatileBehavior_IsSecretBaseShieldOrToyTV(metatileBehavior) == TRUE)
            return SecretBase_EventScript_ShieldOrToyTV;
        if (MetatileBehavior_IsSecretBaseDecorationBase(metatileBehavior) == TRUE)
        {
            CheckInteractedWithFriendsFurnitureBottom();
            return NULL;
        }
        if (MetatileBehavior_HoldsLargeDecoration(metatileBehavior) == TRUE)
        {
            CheckInteractedWithFriendsFurnitureMiddle();
            return NULL;
        }
        if (MetatileBehavior_HoldsSmallDecoration(metatileBehavior) == TRUE)
        {
            CheckInteractedWithFriendsFurnitureTop();
            return NULL;
        }
    }
    else if (MetatileBehavior_IsSecretBasePoster(metatileBehavior) == TRUE)
    {
        CheckInteractedWithFriendsPosterDecor();
        return NULL;
    }

    return NULL;
}

static const u8 *GetInteractedWaterScript(struct MapPosition *unused1, u8 metatileBehavior, u8 direction)
{
    if (FlagGet(FLAG_BADGE05_GET) == TRUE && PartyHasMonWithSurf() == TRUE && IsPlayerFacingSurfableFishableWater() == TRUE
     && CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_SURF)
     )
        return EventScript_UseSurf;

    if (MetatileBehavior_IsWaterfall(metatileBehavior) == TRUE
     && CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_WATERFALL)
     )
    {
        if (FlagGet(FLAG_BADGE08_GET) == TRUE && IsPlayerSurfingNorth() == TRUE)
            return EventScript_UseWaterfall;
        else
            return EventScript_CannotUseWaterfall;
    }
    return NULL;
}

static bool32 TrySetupDiveDownScript(void)
{
    if (!CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_DIVE))
        return FALSE;

    if (FlagGet(FLAG_BADGE07_GET) && TrySetDiveWarp() == 2)
    {
        ScriptContext_SetupScript(EventScript_UseDive);
        return TRUE;
    }
    return FALSE;
}

static bool32 TrySetupDiveEmergeScript(void)
{
    if (!CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_DIVE))
        return FALSE;

    if (FlagGet(FLAG_BADGE07_GET) && gMapHeader.mapType == MAP_TYPE_UNDERWATER && TrySetDiveWarp() == 1)
    {
        ScriptContext_SetupScript(EventScript_UseDiveUnderwater);
        return TRUE;
    }
    return FALSE;
}

static bool8 TryStartStepBasedScript(struct MapPosition *position, u16 metatileBehavior, u16 direction)
{
    if (TryStartCoordEventScript(position) == TRUE)
        return TRUE;
    if (TryStartWarpEventScript(position, metatileBehavior) == TRUE)
        return TRUE;
    if (TryStartMiscWalkingScripts(metatileBehavior) == TRUE)
        return TRUE;
    if (TryStartStepCountScript(metatileBehavior) == TRUE)
        return TRUE;
    if (UpdateRepelCounter() == TRUE)
        return TRUE;
    return FALSE;
}

bool8 TryStartCoordEventScript(struct MapPosition *position)
{
    const u8 *script = GetCoordEventScriptAtPosition(&gMapHeader, position->x - MAP_OFFSET, position->y - MAP_OFFSET, position->elevation);

    if (script == NULL)
        return FALSE;

    struct ScriptContext ctx;
    if (!RunScriptImmediatelyUntilEffect(SCREFF_V1 | SCREFF_HARDWARE, script, &ctx))
        return FALSE;

    ScriptContext_ContinueScript(&ctx);
    return TRUE;
}

static bool8 TryStartMiscWalkingScripts(u16 metatileBehavior)
{
    s16 x, y;
	s32 mapGroup, mapNum;
    
    if (MetatileBehavior_IsCrackedFloorHole(metatileBehavior))
    {
        ScriptContext_SetupScript(EventScript_FallDownHole);
        return TRUE;
    }
	else if (MetatileBehavior_IsFalseFloorHole(metatileBehavior))
    {
        ScriptContext_SetupScript(EventScript_FallDownFalseFloor);
        return TRUE;
    }
	else if (MetatileBehavior_IsColchisBattle(metatileBehavior))
    {
		if (FlagGet(FLAG_COLCHIS_FORCED_BATTLE)) {
			ScriptContext_SetupScript(Colchis_Script_CheckForcedBattle);
			return TRUE;
		}
    }
	else if (MetatileBehavior_IsOceanMapTransitionA(metatileBehavior))
    {
		mapGroup = gSaveBlock1Ptr->location.mapGroup;
		mapNum   = gSaveBlock1Ptr->location.mapNum;
		//Route10 - Check From Mare Tranquillum to Acta Tranquilla
		if (mapGroup == MAP_GROUP(MAP_ROUTE10) && mapNum == MAP_NUM(MAP_ROUTE10)) {
			if (VarGet(VAR_TEMP_5) == 3) {
				ScriptContext_SetupScript(Route10_Script_Transition_ActaTranquilla);
				return TRUE;
			}
		}
        //MareS6 - Isla Pina Transition
		if (mapGroup == MAP_GROUP(MAP_MARE_S6) && mapNum == MAP_NUM(MAP_MARE_S6)) {
			if (VarGet(VAR_TEMP_5) != 1) {
				ScriptContext_SetupScript(MareS6_Script_Transition_IslaPina);
				return TRUE;
			}
		}
        //MareS4 - Transition Mare Tropicum
		if (mapGroup == MAP_GROUP(MAP_MARE_S4) && mapNum == MAP_NUM(MAP_MARE_S4)) {
			if (VarGet(VAR_TEMP_5) != 1) {
				ScriptContext_SetupScript(MareS4_Script_Transition_MareTropicum);
				return TRUE;
			}
		}
		//MareS3 - Transition Mare Tranquillum
		if (mapGroup == MAP_GROUP(MAP_MARE_S3) && mapNum == MAP_NUM(MAP_MARE_S3)) {
			if (VarGet(VAR_TEMP_5) != 1) {
				ScriptContext_SetupScript(MareS3_Script_Transition_MareTranquillum);
				return TRUE;
			}
		}
		//MareS2 - Transition Mare Tranquillum
		if (mapGroup == MAP_GROUP(MAP_MARE_S2) && mapNum == MAP_NUM(MAP_MARE_S2)) {
			if (VarGet(VAR_TEMP_5) != 1) {
				ScriptContext_SetupScript(MareS2_Script_Transition_MareTranquillum);
				return TRUE;
			}
		}
        //BigIslandN - Mare Mortuorum
		if (mapGroup == MAP_GROUP(MAP_BIG_ISLAND_N) && mapNum == MAP_NUM(MAP_BIG_ISLAND_N)) {
			if (VarGet(VAR_TEMP_5) != 1) {
				ScriptContext_SetupScript(BigIslandN_Script_Transition_MareMortuorum);
				return TRUE;
			}
		}
        //OceanPerimeterBigIslandS - Isla Ignifera
		if (mapGroup == MAP_GROUP(MAP_OCEAN_PERIMETER_BIG_ISALND_S) && mapNum == MAP_NUM(MAP_OCEAN_PERIMETER_BIG_ISALND_S)) {
			if (VarGet(VAR_TEMP_5) != 1) {
				ScriptContext_SetupScript(OceanPerimeterBigIslandS_Script_Transition_IslaIgnifera);
				return TRUE;
			}
		}
		//MareS7 - Transition Isla Ithaca
		if (mapGroup == MAP_GROUP(MAP_MARE_S7) && mapNum == MAP_NUM(MAP_MARE_S7)) {
			if (VarGet(VAR_TEMP_5) != 1) {
				ScriptContext_SetupScript(MareS7_Script_Transition_IslaIthaca);
				return TRUE;
			}
		}
		//MareS8 - Transition Isla Ithaca
		if (mapGroup == MAP_GROUP(MAP_MARE_S8) && mapNum == MAP_NUM(MAP_MARE_S8)) {
			if (VarGet(VAR_TEMP_5) != 1) {
				ScriptContext_SetupScript(MareS8_Script_Transition_IslaIthaca);
				return TRUE;
			}
		}
		//MareS9 - Transition Isla Tropica
		if (mapGroup == MAP_GROUP(MAP_MARE_S9) && mapNum == MAP_NUM(MAP_MARE_S9)) {
			if (VarGet(VAR_TEMP_5) != 1) {
				ScriptContext_SetupScript(MareS9_Script_Transition_IslaTropica);
				return TRUE;
			}
		}
		//MareS10 - Transition Isla Tropica
		if (mapGroup == MAP_GROUP(MAP_MARE_S10) && mapNum == MAP_NUM(MAP_MARE_S10)) {
			if (VarGet(VAR_TEMP_5) != 1) {
				ScriptContext_SetupScript(MareS10_Script_Transition_IslaTropica);
				return TRUE;
			}
		}
		//OceanPerimeter2 - Transition Mare Subtropicum 
		if (mapGroup == MAP_GROUP(MAP_OCEAN_PERIMETER2) && mapNum == MAP_NUM(MAP_OCEAN_PERIMETER2)) {
			if (VarGet(VAR_TEMP_5) != 1) {
				ScriptContext_SetupScript(OceanPerimeter2_Script_Transition_MareSubtropicum);
				return TRUE;
			}
		}

    }
	else if (MetatileBehavior_IsOceanMapTransitionB(metatileBehavior))
    {
		mapGroup = gSaveBlock1Ptr->location.mapGroup;
		mapNum   = gSaveBlock1Ptr->location.mapNum;
		//Route10 - Check From Acta Tranquilla to Mare Tranquillum
		if (mapGroup == MAP_GROUP(MAP_ROUTE10) && mapNum == MAP_NUM(MAP_ROUTE10)) {
			if (VarGet(VAR_TEMP_5) == 2) {
				ScriptContext_SetupScript(Route10_Script_Transition_MareTranquillum);
				return TRUE;
			}
		}
        //MareS6 - Mare Occidens Transition
		if (mapGroup == MAP_GROUP(MAP_MARE_S6) && mapNum == MAP_NUM(MAP_MARE_S6)) {
			if (VarGet(VAR_TEMP_5) != 2) {
				ScriptContext_SetupScript(MareS6_Script_Transition_MareOccidens);
				return TRUE;
			}
		}
        //MareS4 - Transition Mare Subtropicum
		if (mapGroup == MAP_GROUP(MAP_MARE_S4) && mapNum == MAP_NUM(MAP_MARE_S4)) {
			if (VarGet(VAR_TEMP_5) != 3) {
				ScriptContext_SetupScript(MareS4_Script_Transition_MareSubtropicum);
				return TRUE;
			}
		}
		//MareS3 - Transition Mare Subtropicum
		if (mapGroup == MAP_GROUP(MAP_MARE_S3) && mapNum == MAP_NUM(MAP_MARE_S3)) {
			if (VarGet(VAR_TEMP_5) != 2) {
				ScriptContext_SetupScript(MareS3_Script_Transition_MareSubtropicum);
				return TRUE;
			}
		}
		//MareS2 - Transition Mare Mortuorum 
		if (mapGroup == MAP_GROUP(MAP_MARE_S2) && mapNum == MAP_NUM(MAP_MARE_S2)) {
			if (VarGet(VAR_TEMP_5) != 2) {
				ScriptContext_SetupScript(MareS2_Script_Transition_MareMortuorum);
				return TRUE;
			}
		}
		//BigIslandN - Mare Oriens 
		if (mapGroup == MAP_GROUP(MAP_BIG_ISLAND_N) && mapNum == MAP_NUM(MAP_BIG_ISLAND_N)) {
			if (VarGet(VAR_TEMP_5) != 2) {
				ScriptContext_SetupScript(BigIslandN_Script_Transition_MareOriens);
				return TRUE;
			}
		}
		//BigIslandS - Isla Ignifera 
		if (mapGroup == MAP_GROUP(MAP_BIG_ISLAND_S) && mapNum == MAP_NUM(MAP_BIG_ISLAND_S)) {
			if (VarGet(VAR_TEMP_5) != 2) {
				ScriptContext_SetupScript(BigIslandS_Script_Transition_IslaIgnifera);
				return TRUE;
			}
		}
		//OceanPerimeterBigIslandS - Mare Subtropicum 
		if (mapGroup == MAP_GROUP(MAP_OCEAN_PERIMETER_BIG_ISALND_S) && mapNum == MAP_NUM(MAP_OCEAN_PERIMETER_BIG_ISALND_S)) {
			if (VarGet(VAR_TEMP_5) != 2) {
				ScriptContext_SetupScript(OceanPerimeterBigIslandS_Script_Transition_MareSubtropicum);
				return TRUE;
			}
		}
		//MareS7 - Transition Mare Subtropicum 
		if (mapGroup == MAP_GROUP(MAP_MARE_S7) && mapNum == MAP_NUM(MAP_MARE_S7)) {
			if (VarGet(VAR_TEMP_5) != 2) {
				ScriptContext_SetupScript(MareS7_Script_Transition_MareSubtropicum);
				return TRUE;
			}
		}
		//MareS8 - Transition Mare Subtropicum 
		if (mapGroup == MAP_GROUP(MAP_MARE_S8) && mapNum == MAP_NUM(MAP_MARE_S8)) {
			if (VarGet(VAR_TEMP_5) != 2) {
				ScriptContext_SetupScript(MareS8_Script_Transition_MareSubtropicum);
				return TRUE;
			}
		}
		//MareS9 - Transition Mare Subtropicum 
		if (mapGroup == MAP_GROUP(MAP_MARE_S9) && mapNum == MAP_NUM(MAP_MARE_S9)) {
			if (VarGet(VAR_TEMP_5) != 2) {
				ScriptContext_SetupScript(MareS9_Script_Transition_MareSubtropicum);
				return TRUE;
			}
		}
		//MareS10 - Transition Mare Occidens 
		if (mapGroup == MAP_GROUP(MAP_MARE_S10) && mapNum == MAP_NUM(MAP_MARE_S10)) {
			if (VarGet(VAR_TEMP_5) != 2) {
				ScriptContext_SetupScript(MareS10_Script_Transition_MareOccidens);
				return TRUE;
			}
		}
		//OceanPerimeter2 - Transition Mare Occidens 
		if (mapGroup == MAP_GROUP(MAP_OCEAN_PERIMETER2) && mapNum == MAP_NUM(MAP_OCEAN_PERIMETER2)) {
			if (VarGet(VAR_TEMP_5) != 2) {
				ScriptContext_SetupScript(OceanPerimeter2_Script_Transition_MareOccidens);
				return TRUE;
			}
		}
    }
	else if (MetatileBehavior_IsOceanMapTransitionC(metatileBehavior))
    {
		mapGroup = gSaveBlock1Ptr->location.mapGroup;
		mapNum   = gSaveBlock1Ptr->location.mapNum;
        //MareS4 - Transition Isla Herba Bona
		if (mapGroup == MAP_GROUP(MAP_MARE_S4) && mapNum == MAP_NUM(MAP_MARE_S4)) {
			if (VarGet(VAR_TEMP_5) != 4) {
				ScriptContext_SetupScript(MareS4_Script_Transition_IslaHerbaBona);
				return TRUE;
			}
		}
		//MareS3 - Transition Isla Herba Bona
		if (mapGroup == MAP_GROUP(MAP_MARE_S3) && mapNum == MAP_NUM(MAP_MARE_S3)) {
			if (VarGet(VAR_TEMP_5) != 3) {
				ScriptContext_SetupScript(MareS3_Script_Transition_IslaHerbaBona);
				return TRUE;
			}
		}
		//MareS2 - Transition Mare Subtropicum
		if (mapGroup == MAP_GROUP(MAP_MARE_S2) && mapNum == MAP_NUM(MAP_MARE_S2)) {
			if (VarGet(VAR_TEMP_5) != 3) {
				ScriptContext_SetupScript(MareS2_Script_Transition_MareSubtropicum);
				return TRUE;
			}
		}
		//BigIslandN - Mare Subtropicum
		if (mapGroup == MAP_GROUP(MAP_BIG_ISLAND_N) && mapNum == MAP_NUM(MAP_BIG_ISLAND_N)) {
			if (VarGet(VAR_TEMP_5) != 3) {
				ScriptContext_SetupScript(BigIslandN_Script_Transition_MareSubtropicum);
				return TRUE;
			}
		}
		//BigIslandS - Mare Subtropicum
		if (mapGroup == MAP_GROUP(MAP_BIG_ISLAND_S) && mapNum == MAP_NUM(MAP_BIG_ISLAND_S)) {
			if (VarGet(VAR_TEMP_5) != 3) {
				ScriptContext_SetupScript(BigIslandS_Script_Transition_MareSubtropicum);
				return TRUE;
			}
		}
		//OceanPerimeterBigIslandS - Mare Oriens
		if (mapGroup == MAP_GROUP(MAP_OCEAN_PERIMETER_BIG_ISALND_S) && mapNum == MAP_NUM(MAP_OCEAN_PERIMETER_BIG_ISALND_S)) {
			if (VarGet(VAR_TEMP_5) != 3) {
				ScriptContext_SetupScript(OceanPerimeterBigIslandS_Script_Transition_MareOriens);
				return TRUE;
			}
		}
		//MareS7 - Transition Isla Herba Bona
		if (mapGroup == MAP_GROUP(MAP_MARE_S7) && mapNum == MAP_NUM(MAP_MARE_S7)) {
			if (VarGet(VAR_TEMP_5) != 3) {
				ScriptContext_SetupScript(MareS7_Script_Transition_IslaHerbaBona);
				return TRUE;
			}
		}
		//MareS8 - Transition Mare Tropicum 
		if (mapGroup == MAP_GROUP(MAP_MARE_S8) && mapNum == MAP_NUM(MAP_MARE_S8)) {
			if (VarGet(VAR_TEMP_5) != 3) {
				ScriptContext_SetupScript(MareS8_Script_Transition_MareTropicum);
				return TRUE;
			}
		}
		//MareS9 - Transition Mare Tropicum 
		if (mapGroup == MAP_GROUP(MAP_MARE_S9) && mapNum == MAP_NUM(MAP_MARE_S9)) {
			if (VarGet(VAR_TEMP_5) != 3) {
				ScriptContext_SetupScript(MareS9_Script_Transition_MareTropicum);
				return TRUE;
			}
		}
		//MareS10 - Transition Mare Tropicum 
		if (mapGroup == MAP_GROUP(MAP_MARE_S10) && mapNum == MAP_NUM(MAP_MARE_S10)) {
			if (VarGet(VAR_TEMP_5) != 3) {
				ScriptContext_SetupScript(MareS10_Script_Transition_MareTropicum);
				return TRUE;
			}
		}
		//MareS6 - Transition Mare Tropicum 
		if (mapGroup == MAP_GROUP(MAP_MARE_S6) && mapNum == MAP_NUM(MAP_MARE_S6)) {
			if (VarGet(VAR_TEMP_5) != 3) {
				ScriptContext_SetupScript(MareS6_Script_MareTropicumTransition); //Note name irregularity
				return TRUE;
			}
		}

    }
	else if (MetatileBehavior_IsOceanMapTransitionD(metatileBehavior))
    {
		mapGroup = gSaveBlock1Ptr->location.mapGroup;
		mapNum   = gSaveBlock1Ptr->location.mapNum;
        //MareS4 - Transition Isla Hesperia
		if (mapGroup == MAP_GROUP(MAP_MARE_S4) && mapNum == MAP_NUM(MAP_MARE_S4)) {
			if (VarGet(VAR_TEMP_5) != 5) {
				ScriptContext_SetupScript(MareS4_Script_Transition_IslaHesperia);
				return TRUE;
			}
		}
		//MareS2 - Transition Isla Hesperia
		if (mapGroup == MAP_GROUP(MAP_MARE_S2) && mapNum == MAP_NUM(MAP_MARE_S2)) {
			if (VarGet(VAR_TEMP_5) != 4) {
				ScriptContext_SetupScript(MareS2_Script_Transition_IslaHerbaBona);
				return TRUE;
			}
		}
		//BigIslandN - Isla Ignifera
		if (mapGroup == MAP_GROUP(MAP_BIG_ISLAND_N) && mapNum == MAP_NUM(MAP_BIG_ISLAND_N)) {
			if (VarGet(VAR_TEMP_5) != 4) {
				ScriptContext_SetupScript(BigIslandN_Script_Transition_IslaIgnifera);
				return TRUE;
			}
		}
		//BigIslandS - Mare Oriens
		if (mapGroup == MAP_GROUP(MAP_BIG_ISLAND_S) && mapNum == MAP_NUM(MAP_BIG_ISLAND_S)) {
			if (VarGet(VAR_TEMP_5) != 4) {
				ScriptContext_SetupScript(BigIslandS_Script_Transition_MareOriens);
				return TRUE;
			}
		}
		//MareS7 - Transition Isla Hesperia
		if (mapGroup == MAP_GROUP(MAP_MARE_S7) && mapNum == MAP_NUM(MAP_MARE_S7)) {
			if (VarGet(VAR_TEMP_5) != 4) {
				ScriptContext_SetupScript(MareS7_Script_Transition_IslaArida);
				return TRUE;
			}
		}
		//MareS8 - Transition Isla Hesperia
		if (mapGroup == MAP_GROUP(MAP_MARE_S8) && mapNum == MAP_NUM(MAP_MARE_S8)) {
			if (VarGet(VAR_TEMP_5) != 4) {
				ScriptContext_SetupScript(MareS8_Script_Transition_IslaHesperia);
				return TRUE;
			}
		}
		//MareS9 - Transition Isla Hesperia
		if (mapGroup == MAP_GROUP(MAP_MARE_S9) && mapNum == MAP_NUM(MAP_MARE_S9)) {
			if (VarGet(VAR_TEMP_5) != 4) {
				ScriptContext_SetupScript(MareS9_Script_Transition_IslaHesperia);
				return TRUE;
			}
		}
		//MareS10 - Transition Isla Solata
		if (mapGroup == MAP_GROUP(MAP_MARE_S10) && mapNum == MAP_NUM(MAP_MARE_S10)) {
			if (VarGet(VAR_TEMP_5) != 4) {
				ScriptContext_SetupScript(MareS10_Script_Transition_IslaSolata);
				return TRUE;
			}
		}
   
   
	}
    else if (MetatileBehavior_IsBattlePyramidWarp(metatileBehavior))
    {
        ScriptContext_SetupScript(BattlePyramid_WarpToNextFloor);
        return TRUE;
    }
    else if (MetatileBehavior_IsSecretBaseGlitterMat(metatileBehavior) == TRUE)
    {
        DoSecretBaseGlitterMatSparkle();
        return FALSE;
    }
    else if (MetatileBehavior_IsSecretBaseSoundMat(metatileBehavior) == TRUE)
    {
        PlayerGetDestCoords(&x, &y);
        PlaySecretBaseMusicNoteMatSound(MapGridGetMetatileIdAt(x, y));
        return FALSE;
    }
    return FALSE;
}

static bool8 TryStartStepCountScript(u16 metatileBehavior)
{
    if (InUnionRoom() == TRUE)
    {
        return FALSE;
    }

    IncrementRematchStepCounter();
    UpdateFriendshipStepCounter();
    UpdateFarawayIslandStepCounter();
    UpdateFollowerStepCounter();

    if (!(gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_FORCED_MOVE) && !MetatileBehavior_IsForcedMovementTile(metatileBehavior))
    {
    #if OW_POISON_DAMAGE < GEN_5
        if (UpdatePoisonStepCounter() == TRUE)
        {
            ScriptContext_SetupScript(EventScript_FieldPoison);
            return TRUE;
        }
    #endif
        if (ShouldEggHatch())
        {
            IncrementGameStat(GAME_STAT_HATCHED_EGGS);
            ScriptContext_SetupScript(EventScript_EggHatch);
            return TRUE;
        }
        if (AbnormalWeatherHasExpired() == TRUE)
        {
            ScriptContext_SetupScript(AbnormalWeather_EventScript_EndEventAndCleanup_1);
            return TRUE;
        }
        if (ShouldDoBrailleRegicePuzzle() == TRUE)
        {
            ScriptContext_SetupScript(IslandCave_EventScript_OpenRegiEntrance);
            return TRUE;
        }
        if (ShouldDoWallyCall() == TRUE)
        {
            ScriptContext_SetupScript(MauvilleCity_EventScript_RegisterWallyCall);
            return TRUE;
        }
        if (ShouldDoScottFortreeCall() == TRUE)
        {
            ScriptContext_SetupScript(Route119_EventScript_ScottWonAtFortreeGymCall);
            return TRUE;
        }
        if (ShouldDoScottBattleFrontierCall() == TRUE)
        {
            ScriptContext_SetupScript(LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall);
            return TRUE;
        }
        if (ShouldDoRoxanneCall() == TRUE)
        {
            ScriptContext_SetupScript(RustboroCity_Gym_EventScript_RegisterRoxanne);
            return TRUE;
        }
        if (ShouldDoRivalRayquazaCall() == TRUE)
        {
            ScriptContext_SetupScript(MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall);
            return TRUE;
        }
        if (UpdateVsSeekerStepCounter())
        {
            ScriptContext_SetupScript(EventScript_VsSeekerChargingDone);
            return TRUE;
        }
    }

    if (SafariZoneTakeStep() == TRUE)
        return TRUE;
    if (CountSSTidalStep(1) == TRUE)
    {
        ScriptContext_SetupScript(SSTidalCorridor_EventScript_ReachedStepCount);
        return TRUE;
    }
    if (TryStartMatchCall())
        return TRUE;
    return FALSE;
}

static void UNUSED ClearFriendshipStepCounter(void)
{
    VarSet(VAR_FRIENDSHIP_STEP_COUNTER, 0);
}

static void UpdateFriendshipStepCounter(void)
{
    u16 *ptr = GetVarPointer(VAR_FRIENDSHIP_STEP_COUNTER);
    int i;

    (*ptr)++;
    (*ptr) %= 128;
    if (*ptr == 0)
    {
        struct Pokemon *mon = gPlayerParty;
        for (i = 0; i < PARTY_SIZE; i++)
        {
            AdjustFriendship(mon, FRIENDSHIP_EVENT_WALKING);
            mon++;
        }
    }
}

static void UpdateFollowerStepCounter(void)
{
    if (gPlayerPartyCount > 0 && gFollowerSteps < (u16)-1)
        gFollowerSteps++;
}

void ClearPoisonStepCounter(void)
{
    VarSet(VAR_POISON_STEP_COUNTER, 0);
}

#if OW_POISON_DAMAGE < GEN_5
static bool8 UpdatePoisonStepCounter(void)
{
    u16 *ptr;

    if (gMapHeader.mapType != MAP_TYPE_SECRET_BASE)
    {
        ptr = GetVarPointer(VAR_POISON_STEP_COUNTER);
        (*ptr)++;
        (*ptr) %= 4;
        if (*ptr == 0)
        {
            switch (DoPoisonFieldEffect())
            {
            case FLDPSN_NONE:
                return FALSE;
            case FLDPSN_PSN:
                return FALSE;
            case FLDPSN_FNT:
                return TRUE;
            }
        }
    }
    return FALSE;
}
#endif // OW_POISON_DAMAGE

void RestartWildEncounterImmunitySteps(void)
{
    // Starts at 0 and counts up to 4 steps.
    sWildEncounterImmunitySteps = 0;
}

static bool8 CheckStandardWildEncounter(u16 metatileBehavior)
{
    if (FlagGet(OW_FLAG_NO_ENCOUNTER))
        return FALSE;

    if (sWildEncounterImmunitySteps < 4)
    {
        sWildEncounterImmunitySteps++;
        sPrevMetatileBehavior = metatileBehavior;
        return FALSE;
    }

    if (StandardWildEncounter(metatileBehavior, sPrevMetatileBehavior) == TRUE)
    {
        sWildEncounterImmunitySteps = 0;
        sPrevMetatileBehavior = metatileBehavior;
        return TRUE;
    }

    sPrevMetatileBehavior = metatileBehavior;
    return FALSE;
}

static void StorePlayerStateAndSetupWarp(struct MapPosition *position, s32 warpEventId)
{
    StoreInitialPlayerAvatarState();
    SetupWarp(&gMapHeader, warpEventId, position);
}

static bool8 TryArrowWarp(struct MapPosition *position, u16 metatileBehavior, u8 direction)
{
    s32 warpEventId = GetWarpEventAtMapPosition(&gMapHeader, position);
    u32 delay;

    if (warpEventId == WARP_ID_NONE)
        return FALSE;

    if (IsArrowWarpMetatileBehavior(metatileBehavior, direction) == TRUE)
    {
        StorePlayerStateAndSetupWarp(position, warpEventId);
        DoWarp();
        return TRUE;
    }
    else if (IsDirectionalStairWarpMetatileBehavior(metatileBehavior, direction) == TRUE)
    {
        delay = 0;
        if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_BIKE)
        {
            SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT);
            delay = 12;
        }

        StorePlayerStateAndSetupWarp(position, warpEventId);
        DoStairWarp(metatileBehavior, delay);
        return TRUE;
    }
    return FALSE;
}

static bool8 TryStartWarpEventScript(struct MapPosition *position, u16 metatileBehavior)
{
    s8 warpEventId = GetWarpEventAtMapPosition(&gMapHeader, position);

    if (warpEventId != WARP_ID_NONE && IsWarpMetatileBehavior(metatileBehavior) == TRUE)
    {
        StoreInitialPlayerAvatarState();
        SetupWarp(&gMapHeader, warpEventId, position);
        if (MetatileBehavior_IsEscalator(metatileBehavior) == TRUE)
        {
            DoEscalatorWarp(metatileBehavior);
            return TRUE;
        }
        if (MetatileBehavior_IsLavaridgeB1FWarp(metatileBehavior) == TRUE)
        {
            DoLavaridgeGymB1FWarp();
            return TRUE;
        }
        if (MetatileBehavior_IsLavaridge1FWarp(metatileBehavior) == TRUE)
        {
            DoLavaridgeGym1FWarp();
            return TRUE;
        }
        if (MetatileBehavior_IsAquaHideoutWarp(metatileBehavior) == TRUE)
        {
            DoTeleportTileWarp();
            return TRUE;
        }
        if (MetatileBehavior_IsUnionRoomWarp(metatileBehavior) == TRUE)
        {
            DoSpinExitWarp();
            return TRUE;
        }
        if (MetatileBehavior_IsMtPyreHole(metatileBehavior) == TRUE)
        {
            ScriptContext_SetupScript(EventScript_FallDownHoleMtPyre);
            return TRUE;
        }
        if (MetatileBehavior_IsMossdeepGymWarp(metatileBehavior) == TRUE)
        {
            DoMossdeepGymWarp();
            return TRUE;
        }
        DoWarp();
        return TRUE;
    }
    return FALSE;
}

static bool8 IsWarpMetatileBehavior(u16 metatileBehavior)
{
    if (MetatileBehavior_IsWarpDoor(metatileBehavior) != TRUE
     && MetatileBehavior_IsLadder(metatileBehavior) != TRUE
     && MetatileBehavior_IsEscalator(metatileBehavior) != TRUE
     && MetatileBehavior_IsNonAnimDoor(metatileBehavior) != TRUE
     && MetatileBehavior_IsLavaridgeB1FWarp(metatileBehavior) != TRUE
     && MetatileBehavior_IsLavaridge1FWarp(metatileBehavior) != TRUE
     && MetatileBehavior_IsAquaHideoutWarp(metatileBehavior) != TRUE
     && MetatileBehavior_IsMtPyreHole(metatileBehavior) != TRUE
     && MetatileBehavior_IsMossdeepGymWarp(metatileBehavior) != TRUE
     && MetatileBehavior_IsUnionRoomWarp(metatileBehavior) != TRUE)
        return FALSE;
    return TRUE;
}

static bool8 IsArrowWarpMetatileBehavior(u16 metatileBehavior, u8 direction)
{
    switch (direction)
    {
    case DIR_NORTH:
        return MetatileBehavior_IsNorthArrowWarp(metatileBehavior);
    case DIR_SOUTH:
        return MetatileBehavior_IsSouthArrowWarp(metatileBehavior);
    case DIR_WEST:
        return MetatileBehavior_IsWestArrowWarp(metatileBehavior);
    case DIR_EAST:
        return MetatileBehavior_IsEastArrowWarp(metatileBehavior);
    }
    return FALSE;
}

static s8 GetWarpEventAtMapPosition(struct MapHeader *mapHeader, struct MapPosition *position)
{
    return GetWarpEventAtPosition(mapHeader, position->x - MAP_OFFSET, position->y - MAP_OFFSET, position->elevation);
}

static void SetupWarp(struct MapHeader *unused, s8 warpEventId, struct MapPosition *position)
{
    const struct WarpEvent *warpEvent;

    u8 trainerHillMapId = GetCurrentTrainerHillMapId();
    DebugPrintf("SetupWarp()");

    if (trainerHillMapId)
    {
        if (trainerHillMapId == GetNumFloorsInTrainerHillChallenge())
        {
            if (warpEventId == 0)
                warpEvent = &gMapHeader.events->warps[0];
            else
                warpEvent = SetWarpDestinationTrainerHill4F();
        }
        else if (trainerHillMapId == TRAINER_HILL_ROOF)
        {
            warpEvent = SetWarpDestinationTrainerHillFinalFloor(warpEventId);
        }
        else
        {
            warpEvent = &gMapHeader.events->warps[warpEventId];
        }
    }
    else
    {
        warpEvent = &gMapHeader.events->warps[warpEventId];
    }

    if (warpEvent->mapNum == MAP_NUM(MAP_DYNAMIC))
    {
        DebugPrintf("warpEvent->mapNum == MAP_NUM(DYNAMIC)");
        SetWarpDestinationToDynamicWarp(warpEvent->warpId);
    }
    else
    {
        const struct MapHeader *mapHeader;
        DebugPrintf("warpEvent->mapNum != MAP_NUM(DYNAMIC)");

        SetWarpDestinationToMapWarp(warpEvent->mapGroup, warpEvent->mapNum, warpEvent->warpId);
        UpdateEscapeWarp(position->x, position->y);
        mapHeader = Overworld_GetMapHeaderByGroupAndId(warpEvent->mapGroup, warpEvent->mapNum);
        if (mapHeader->events->warps[warpEvent->warpId].mapNum == MAP_NUM(MAP_DYNAMIC))
            SetDynamicWarp(mapHeader->events->warps[warpEventId].warpId, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, warpEventId);
    }
}

static bool8 TryDoorWarp(struct MapPosition *position, u16 metatileBehavior, u8 direction)
{
    s8 warpEventId;

    if (direction == DIR_NORTH)
    {
        if (MetatileBehavior_IsOpenSecretBaseDoor(metatileBehavior) == TRUE)
        {
            WarpIntoSecretBase(position, gMapHeader.events);
            return TRUE;
        }

        if (MetatileBehavior_IsWarpDoor(metatileBehavior) == TRUE)
        {
            warpEventId = GetWarpEventAtMapPosition(&gMapHeader, position);
            if (warpEventId != WARP_ID_NONE && IsWarpMetatileBehavior(metatileBehavior) == TRUE)
            {
                StoreInitialPlayerAvatarState();
                SetupWarp(&gMapHeader, warpEventId, position);
                DoDoorWarp();
                return TRUE;
            }
        }
    }
    return FALSE;
}

static s8 GetWarpEventAtPosition(struct MapHeader *mapHeader, u16 x, u16 y, u8 elevation)
{
    s32 i;
    const struct WarpEvent *warpEvent = mapHeader->events->warps;
    u8 warpCount = mapHeader->events->warpCount;

    for (i = 0; i < warpCount; i++, warpEvent++)
    {
        if ((u16)warpEvent->x == x && (u16)warpEvent->y == y)
        {
            if (warpEvent->elevation == elevation || warpEvent->elevation == 0)
                return i;
        }
    }
    return WARP_ID_NONE;
}

static bool32 ShouldTriggerScriptRun(const struct CoordEvent *coordEvent)
{
    u16 *varPtr = GetVarPointer(coordEvent->trigger);
    // Treat non Vars as flags
    if (varPtr == NULL)
        return (FlagGet(coordEvent->trigger) == coordEvent->index);
    else
        return (*varPtr == coordEvent->index);
}

static const u8 *TryRunCoordEventScript(const struct CoordEvent *coordEvent)
{
    if (coordEvent != NULL)
    {
        if (coordEvent->script == NULL)
        {
            DoCoordEventWeather(coordEvent->trigger);
            return NULL;
        }
        if (coordEvent->trigger == TRIGGER_RUN_IMMEDIATELY)
        {
            RunScriptImmediately(coordEvent->script);
            return NULL;
        }
        if (ShouldTriggerScriptRun(coordEvent))
            return coordEvent->script;
    }
    return NULL;
}

static const u8 *GetCoordEventScriptAtPosition(struct MapHeader *mapHeader, u16 x, u16 y, u8 elevation)
{
    s32 i;
    const struct CoordEvent *coordEvents = mapHeader->events->coordEvents;
    u8 coordEventCount = mapHeader->events->coordEventCount;

    for (i = 0; i < coordEventCount; i++)
    {
        if ((u16)coordEvents[i].x == x && (u16)coordEvents[i].y == y)
        {
            if (coordEvents[i].elevation == elevation || coordEvents[i].elevation == 0)
            {
                const u8 *script = TryRunCoordEventScript(&coordEvents[i]);
                if (script != NULL)
                    return script;
            }
        }
    }
    return NULL;
}

const u8 *GetCoordEventScriptAtMapPosition(struct MapPosition *position)
{
    return GetCoordEventScriptAtPosition(&gMapHeader, position->x - MAP_OFFSET, position->y - MAP_OFFSET, position->elevation);
}

static const struct BgEvent *GetBackgroundEventAtPosition(struct MapHeader *mapHeader, u16 x, u16 y, u8 elevation)
{
    u8 i;
    const struct BgEvent *bgEvents = mapHeader->events->bgEvents;
    u8 bgEventCount = mapHeader->events->bgEventCount;

    for (i = 0; i < bgEventCount; i++)
    {
        if ((u16)bgEvents[i].x == x && (u16)bgEvents[i].y == y)
        {
            if (bgEvents[i].elevation == elevation || bgEvents[i].elevation == 0)
                return &bgEvents[i];
        }
    }
    return NULL;
}

bool8 TryDoDiveWarp(struct MapPosition *position, u16 metatileBehavior)
{
    if (gMapHeader.mapType == MAP_TYPE_UNDERWATER && !MetatileBehavior_IsUnableToEmerge(metatileBehavior))
    {
        if (SetDiveWarpEmerge(position->x - MAP_OFFSET, position->y - MAP_OFFSET))
        {
            StoreInitialPlayerAvatarState();
            DoDiveWarp();
            PlaySE(SE_M_DIVE);
            return TRUE;
        }
    }
    else if (MetatileBehavior_IsDiveable(metatileBehavior) == TRUE)
    {
        if (SetDiveWarpDive(position->x - MAP_OFFSET, position->y - MAP_OFFSET))
        {
            StoreInitialPlayerAvatarState();
            DoDiveWarp();
            PlaySE(SE_M_DIVE);
            return TRUE;
        }
    }
    return FALSE;
}

u8 TrySetDiveWarp(void)
{
    s16 x, y;
    u8 metatileBehavior;

    PlayerGetDestCoords(&x, &y);
    metatileBehavior = MapGridGetMetatileBehaviorAt(x, y);
    if (gMapHeader.mapType == MAP_TYPE_UNDERWATER && !MetatileBehavior_IsUnableToEmerge(metatileBehavior))
    {
        if (SetDiveWarpEmerge(x - MAP_OFFSET, y - MAP_OFFSET) == TRUE)
            return 1;
    }
    else if (MetatileBehavior_IsDiveable(metatileBehavior) == TRUE)
    {
        if (SetDiveWarpDive(x - MAP_OFFSET, y - MAP_OFFSET) == TRUE)
            return 2;
    }
    return 0;
}

const u8 *GetObjectEventScriptPointerPlayerFacing(void)
{
    u8 direction;
    struct MapPosition position;

    direction = GetPlayerMovementDirection();
    GetInFrontOfPlayerPosition(&position);
    return GetInteractedObjectEventScript(&position, MapGridGetMetatileBehaviorAt(position.x, position.y), direction);
}

int SetCableClubWarp(void)
{
    struct MapPosition position;

    GetPlayerMovementDirection();  //unnecessary
    GetPlayerPosition(&position);
    MapGridGetMetatileBehaviorAt(position.x, position.y);  //unnecessary
    SetupWarp(&gMapHeader, GetWarpEventAtMapPosition(&gMapHeader, &position), &position);
    return 0;
}

//Begin Auto Run
extern const u8 EventScript_DisableAutoRun[];
extern const u8 EventScript_EnableAutoRun[];

static bool8 EnableAutoRun(void)
{
    if (!FlagGet(FLAG_SYS_B_DASH))
        return FALSE;   //auto run unusable until you get running shoes

    PlaySE(SE_SELECT);
    if (gSaveBlock2Ptr->autoRun)
    {
        gSaveBlock2Ptr->autoRun = FALSE;
        ScriptContext_SetupScript(EventScript_DisableAutoRun);
    }
    else
    {
        gSaveBlock2Ptr->autoRun = TRUE;
        ScriptContext_SetupScript(EventScript_EnableAutoRun);
    }
    
    return TRUE;
}
//End Auto Run

static bool32 TrySetUpWalkIntoSignpostScript(struct MapPosition *position, u32 metatileBehavior, u32 playerDirection)
{
    const u8 *script;

    if ((JOY_HELD(DPAD_LEFT | DPAD_RIGHT)) || (playerDirection != DIR_NORTH))
        return FALSE;

    switch (GetFacingSignpostType(metatileBehavior, playerDirection))
    {
    case MB_POKEMON_CENTER_SIGN:
        SetUpWalkIntoSignScript(Common_EventScript_ShowPokemonCenterSign, playerDirection);
        return TRUE;
    case MB_POKEMART_SIGN:
        SetUpWalkIntoSignScript(Common_EventScript_ShowPokemartSign, playerDirection);
        return TRUE;
    case MB_SIGNPOST:
        script = GetSignpostScriptAtMapPosition(position);
        if (script == NULL)
            return FALSE;
        SetUpWalkIntoSignScript(script, playerDirection);
        return TRUE;
    default:
        return FALSE;
    }
}

static u32 GetFacingSignpostType(u16 metatileBehavior, u32 playerDirection)
{
    if (MetatileBehavior_IsPokemonCenterSign(metatileBehavior) == TRUE)
        return MB_POKEMON_CENTER_SIGN;
    if (MetatileBehavior_IsPokeMartSign(metatileBehavior) == TRUE)
        return MB_POKEMART_SIGN;
    if (MetatileBehavior_IsSignpost(metatileBehavior) == TRUE)
        return MB_SIGNPOST;

    return NOT_SIGNPOST;
}

static void SetMsgSignPostAndVarFacing(u32 playerDirection)
{
    gWalkAwayFromSignpostTimer = WALK_AWAY_SIGNPOST_FRAMES;
    gMsgBoxIsCancelable = TRUE;
    gMsgIsSignPost = TRUE;
    gSpecialVar_Facing = playerDirection;
}

static void SetUpWalkIntoSignScript(const u8 *script, u32 playerDirection)
{
    ScriptContext_SetupScript(script);
    SetMsgSignPostAndVarFacing(playerDirection);
}

static const u8 *GetSignpostScriptAtMapPosition(struct MapPosition *position)
{
    const struct BgEvent *event = GetBackgroundEventAtPosition(&gMapHeader, position->x - 7, position->y - 7, position->elevation);
    if (event == NULL)
        return NULL;
    if (event->bgUnion.script != NULL)
        return event->bgUnion.script;
    return EventScript_TestSignpostMsg;
}

static void Task_OpenStartMenu(u8 taskId)
{
    if (ArePlayerFieldControlsLocked())
        return;

    PlaySE(SE_WIN_OPEN);
    ShowStartMenu();
    DestroyTask(taskId);
}

bool32 IsDpadPushedToTurnOrMovePlayer(struct FieldInput *input)
{
    return (input->dpadDirection != 0 && GetPlayerFacingDirection() != input->dpadDirection);
}

void CancelSignPostMessageBox(struct FieldInput *input)
{
    if (!ScriptContext_IsEnabled())
        return;

    if (gWalkAwayFromSignpostTimer)
    {
        gWalkAwayFromSignpostTimer--;
        return;
    }

    if (!gMsgBoxIsCancelable)
        return;

    if (IsDpadPushedToTurnOrMovePlayer(input))
    {
        ScriptContext_SetupScript(EventScript_CancelMessageBox);
        LockPlayerFieldControls();
        return;
    }

    if (!input->pressedStartButton)
        return;

    ScriptContext_SetupScript(EventScript_CancelMessageBox);
    LockPlayerFieldControls();

    if (FuncIsActiveTask(Task_OpenStartMenu))
        return;

    CreateTask(Task_OpenStartMenu, 8);
}

//cornix Mortia tombstone
static const u8 *GetTombstoneScriptAtMapPosition(struct MapPosition *position)
{
	u16 x, y;
	x = position->x;
	y = position->y;

	//Shift x et y
	x -= 7;
	y -= 7;
	
	//Logic
	DebugPrintf("GetTombstoneScriptAtMapPosition\nx: %d\ny: %d\n", x, y);
	
	//WIP
	//3 prophets
	if (x == 60 && y == 14)
		return Script_Tombstone_Jesus;
	else if (x == 58 && y == 14)
		return Script_Tombstone_Buddha;
	else if (x == 62 && y == 14)
		return Script_Tombstone_Mahometus;
	//Row 1 Upper Area
	else if (x == 34 && y == 6)
		return Script_Tombstone_Einstein;
	else if (x == 37 && y == 6)
		return Script_Tombstone_Gandhi;
	else if (x == 45 && y == 6)
		return Script_Tombstone_Napoleon;
	else if (x == 48 && y == 6)
		return Script_Tombstone_Marx;
	//Row 2 Upper Area
	else if (x == 34 && y == 9)
		return Script_Tombstone_Caesar;
	else if (x == 37 && y == 9)
		return Script_Tombstone_Virgil;
	else if (x == 45 && y == 9)
		return Script_Tombstone_Shakespeare;
	else if (x == 48 && y == 9)
		return Script_Tombstone_MartinLuther;
	//Row 3 Upper Area
	else if (x == 34 && y == 12)
		return Script_Tombstone_Newton;
	else if (x == 37 && y == 12)
		return Script_Tombstone_Columbus;
	else if (x == 45 && y == 12)
		return Script_Tombstone_Augustus;
	else if (x == 48 && y == 12)
		return Script_Tombstone_Khan;
	//6 Ante top
	else if (x == 32 && y == 16)
		return Script_Tombstone_WilliamNorman;
	else if (x == 35 && y == 16)
		return Script_Tombstone_Elizabeth;
	else if (x == 38 && y == 16)
		return Script_Tombstone_Richard1;
	else if (x == 44 && y == 16)
		return Script_Tombstone_Lincoln;
	else if (x == 47 && y == 16)
		return Script_Tombstone_AlexanderGreat;
	else if (x == 50 && y == 16)
		return Script_Tombstone_KarlusMagnus;
	//3 philosophers together
	else if (x == 52 && y == 13)
		return Script_Tombstone_Socrates;
	else if (x == 53 && y == 13)
		return Script_Tombstone_Aristotle;
	else if (x == 54 && y == 13)
		return Script_Tombstone_Plato;
	//2 together up top
	else if (x == 58 && y == 8)
		return Script_Tombstone_Turing;
	else if (x == 59 && y == 8)
		return Script_Tombstone_Lovelace;
	//player et frens
	else if (x == 8 && y == 10)
		return Script_Tombstone_Player;
	else if (x == 14 && y == 13)
		return Script_Tombstone_JohnLinn;
	else if (x == 11 && y == 16)
		return Script_Tombstone_JamesStrait;
	else if (x == 11 && y == 13)
		return Script_Tombstone_Jerry;
	else if (x == 11 && y == 10)
		return Script_Tombstone_Phil;
	else if (x == 8 && y == 7)
		return Script_Tombstone_Ryan;
	else if (x == 11 && y == 7)
		return Script_Tombstone_Maggie;
	else if (x == 14 && y == 7)
		return Script_Tombstone_Ramiro;
	else if (x == 14 && y == 10)
		return Script_Tombstone_Kira;
	else if (x == 17 && y == 10)
		return Script_Tombstone_Bo;
	else if (x == 17 && y == 13)
		return Script_Tombstone_SawyerHawkins;
	else if (x == 20 && y == 13)
		return Script_Tombstone_MichaelDavis;
	else if (x == 30 && y == 11)
		return Script_Tombstone_Hunter;
	else if (x == 14 && y == 16)
		return Script_Tombstone_CowboyNeal;
	else if (x == 17 && y == 16)
		return Script_Tombstone_Owsley;
	else if (x == 20 && y == 16)
		return Script_Tombstone_Brent;
	else if (x == 22 && y == 16)
		return Script_Tombstone_Pigpen;
	else if (x == 24 && y == 16)
		return Script_Tombstone_Keith;
	else if (x == 27 && y == 16)
		return Script_Tombstone_BillGraham;
    //Single out West
	else if (x == 13 && y == 27)
		return Script_Tombstone_Hisler;
    //Single out East
	else if (x == 62 && y == 26)
		return Script_Tombstone_Washington;
    //Double top left
	else if (x == 29 && y == 27)
		return Script_Tombstone_Lennon;
	else if (x == 30 && y == 27)
		return Script_Tombstone_Harrison;
    //Double top right
	else if (x == 52 && y == 27)
		return Script_Tombstone_Wright1;
	else if (x == 53 && y == 27)
		return Script_Tombstone_Wright2;
    //Double bottom left
	else if (x == 29 && y == 42)
		return Script_Tombstone_Antony;
	else if (x == 30 && y == 42)
		return Script_Tombstone_Cleopatra;
    //Double bottom right
	else if (x == 52 && y == 42)
		return Script_Tombstone_Jefferson;
	else if (x == 53 && y == 42)
		return Script_Tombstone_Adams;
	//Left Fence Top Row
	else if (x == 24 && y == 28)
		return Script_Tombstone_Thucydides;
	else if (x == 26 && y == 28)
		return Script_Tombstone_Ford;
	else if (x == 28 && y == 28)
		return Script_Tombstone_Rockefeller;
	else if (x == 31 && y == 28)
		return Script_Tombstone_Morgan;
	else if (x == 33 && y == 28)
		return Script_Tombstone_Mays;
	else if (x == 35 && y == 28)
		return Script_Tombstone_Kubrick;
	//Left Fence Row 2
	else if (x == 24 && y == 31)
		return Script_Tombstone_Brando;
	else if (x == 26 && y == 31)
		return Script_Tombstone_Gutenburg;
	else if (x == 28 && y == 31)
		return Script_Tombstone_Horace;
	else if (x == 31 && y == 31)
		return Script_Tombstone_CatoElder;
	else if (x == 33 && y == 31)
		return Script_Tombstone_Dickens;
	else if (x == 35 && y == 31)
		return Script_Tombstone_Darwin;
	//Left Fence Row 3
	else if (x == 24 && y == 34)
		return Script_Tombstone_Pasteur;
	else if (x == 26 && y == 34)
		return Script_Tombstone_Fleming;
	else if (x == 28 && y == 34)
		return Script_Tombstone_Tubman;
	else if (x == 31 && y == 34)
		return Script_Tombstone_VanGogh;
	else if (x == 33 && y == 34)
		return Script_Tombstone_Picasso;
	else if (x == 35 && y == 34)
		return Script_Tombstone_ChienShiungWu;
	//Left Fence Row 4
	else if (x == 24 && y == 37)
		return Script_Tombstone_Faraday;
	else if (x == 26 && y == 37)
		return Script_Tombstone_Maxwell;
	else if (x == 28 && y == 37)
		return Script_Tombstone_Goethe;
	else if (x == 31 && y == 37)
		return Script_Tombstone_Voltaire;
	else if (x == 33 && y == 37)
		return Script_Tombstone_Trotsky;
	else if (x == 35 && y == 37)
		return Script_Tombstone_Kafka;
    //Right Fence Row 1
	else if (x == 47 && y == 28)
		return Script_Tombstone_Tolstoy;
	else if (x == 49 && y == 28)
		return Script_Tombstone_Pope;
	else if (x == 51 && y == 28)
		return Script_Tombstone_HunterThompson;
	else if (x == 54 && y == 28)
		return Script_Tombstone_Kesey;
	else if (x == 56 && y == 28)
		return Script_Tombstone_MilesDavis;
	else if (x == 58 && y == 28)
		return Script_Tombstone_Coltrane;
    //Right Fence Row 2
	else if (x == 47 && y == 31)
		return Script_Tombstone_Dante;
	else if (x == 49 && y == 31)
		return Script_Tombstone_Chaucer;
	else if (x == 51 && y == 31)
		return Script_Tombstone_Tchaikovsky;
	else if (x == 54 && y == 31)
		return Script_Tombstone_Montesquieu;
	else if (x == 56 && y == 31)
		return Script_Tombstone_Rousseau;
	else if (x == 58 && y == 31)
		return Script_Tombstone_Paine;
     //Fence Right Row 3
	else if (x == 47 && y == 34)
		return Script_Tombstone_Elvis;
	else if (x == 49 && y == 34)
		return Script_Tombstone_Ovid;
	else if (x == 51 && y == 34)
		return Script_Tombstone_Tacitus;
	else if (x == 54 && y == 34)
		return Script_Tombstone_CatoMinor;
	else if (x == 56 && y == 34)
		return Script_Tombstone_Bohr;
	else if (x == 58 && y == 34)
		return Script_Tombstone_Descartes;
    //Right Fence Row 4
	else if (x == 47 && y == 37)
		return Script_Tombstone_Aristophanes;
	else if (x == 49 && y == 37)
		return Script_Tombstone_Hemingway;
	else if (x == 51 && y == 37)
		return Script_Tombstone_Ginsberg;
	else if (x == 54 && y == 37)
		return Script_Tombstone_VonNeumann;
	else if (x == 56 && y == 37)
		return Script_Tombstone_Edison;
	else if (x == 58 && y == 37)
		return Script_Tombstone_Vanderbilt;
    //Left Outer Fence Col 1
	else if (x == 19 && y == 27)
		return Script_Tombstone_Leonidas;
	else if (x == 19 && y == 30)
		return Script_Tombstone_Pompey;
	else if (x == 19 && y == 33)
		return Script_Tombstone_Pericles;
	else if (x == 19 && y == 36)
		return Script_Tombstone_Antigonos;
	else if (x == 19 && y == 39)
		return Script_Tombstone_Darius;
    //Left Outer Fence Col 2
	else if (x == 21 && y == 27)
		return Script_Tombstone_Spartacus;
	else if (x == 21 && y == 30)
		return Script_Tombstone_Otto;
	else if (x == 21 && y == 33)
		return Script_Tombstone_Justinian;
	else if (x == 21 && y == 36)
		return Script_Tombstone_Pepin;
	else if (x == 21 && y == 39)
		return Script_Tombstone_Timur;
	else if (x == 21 && y == 42)
		return Script_Tombstone_Churchill;
    //Right outer fence col L
	else if (x == 61 && y == 27)
		return Script_Tombstone_Henry6;
	else if (x == 61 && y == 30)
		return Script_Tombstone_Hindenburg;
	else if (x == 61 && y == 33)
		return Script_Tombstone_Elizabeth2;
	else if (x == 61 && y == 36)
		return Script_Tombstone_Cromwell;
	else if (x == 61 && y == 39)
		return Script_Tombstone_Mao;
	else if (x == 61 && y == 42)
		return Script_Tombstone_Eisenhower;
	else if (x == 61 && y == 45)
		return Script_Tombstone_Ashoka;
    //Right outer fence col R
	else if (x == 63 && y == 27)
		return Script_Tombstone_QinShiHuang;
	else if (x == 63 && y == 30)
		return Script_Tombstone_Che;
	else if (x == 63 && y == 33)
		return Script_Tombstone_Cincinnatus;
	else if (x == 63 && y == 36)
		return Script_Tombstone_MarcusAurelius;
	else if (x == 63 && y == 39)
		return Script_Tombstone_Trajan;
	else if (x == 63 && y == 42)
		return Script_Tombstone_Urban2;
	else if (x == 63 && y == 45)
		return Script_Tombstone_Henry8;
     //Below Fences Row 1 (note exclude those handled by cols above)
	else if (x == 23 && y == 42)
		return Script_Tombstone_GustavusAdolphus;
	else if (x == 25 && y == 42)
		return Script_Tombstone_Robespierre;
	else if (x == 27 && y == 42)
		return Script_Tombstone_Lenin;
	else if (x == 32 && y == 42)
		return Script_Tombstone_Mandela;
	else if (x == 34 && y == 42)
		return Script_Tombstone_Catherine;
	else if (x == 36 && y == 42)
		return Script_Tombstone_Bolivar;
	else if (x == 46 && y == 42)
		return Script_Tombstone_Bismark;
	else if (x == 48 && y == 42)
		return Script_Tombstone_Castro;
	else if (x == 50 && y == 42)
		return Script_Tombstone_FrederickGreat;
	else if (x == 55 && y == 42)
		return Script_Tombstone_Victoria;
	else if (x == 57 && y == 42)
		return Script_Tombstone_Louis16;
	else if (x == 59 && y == 42)
		return Script_Tombstone_Patton;
     //Below Fences Row 2 (note exclude those handled by cols above)
	else if (x == 23 && y == 45)
		return Script_Tombstone_Louis14;
	else if (x == 25 && y == 45)
		return Script_Tombstone_Atilla;
	else if (x == 27 && y == 45)
		return Script_Tombstone_Sulla;
	else if (x == 32 && y == 45)
		return Script_Tombstone_Xerxes;
	else if (x == 34 && y == 45)
		return Script_Tombstone_Nero;
	else if (x == 36 && y == 45)
		return Script_Tombstone_EdwardPrince;
	else if (x == 46 && y == 45)
		return Script_Tombstone_Mussolini;
	else if (x == 48 && y == 45)
		return Script_Tombstone_Gorbachev;
	else if (x == 50 && y == 45)
		return Script_Tombstone_SusanAnthony;
	else if (x == 55 && y == 45)
		return Script_Tombstone_Henry4;
	else if (x == 57 && y == 45)
		return Script_Tombstone_Franklin;
	else if (x == 59 && y == 45)
		return Script_Tombstone_Tiberius;
	//Far Right Col 1
	else if (x == 69 && y == 21)
		return Script_Tombstone_DaVinci;
	else if (x == 69 && y == 24)
		return Script_Tombstone_Pythagoras;
	else if (x == 69 && y == 27)
		return Script_Tombstone_Feynman;
	else if (x == 69 && y == 30)
		return Script_Tombstone_Sartre;
	else if (x == 69 && y == 33)
		return Script_Tombstone_Nietzshe;
	else if (x == 69 && y == 36)
		return Script_Tombstone_Joyce;
	else if (x == 69 && y == 39)
		return Script_Tombstone_Bradly;
	else if (x == 69 && y == 42)
		return Script_Tombstone_Constantine;
	else if (x == 69 && y == 45)
		return Script_Tombstone_Henry2;
	else if (x == 69 && y == 48)
		return Script_Tombstone_Henry5;
	else if (x == 69 && y == 51)
		return Script_Tombstone_FrederickBarbarossa;
	else if (x == 69 && y == 54)
		return Script_Tombstone_AndrewJackson;
	else if (x == 69 && y == 57)
		return Script_Tombstone_FDR;
	else if (x == 69 && y == 60)
		return Script_Tombstone_Reagan;
	//Far Right Col 2
	else if (x == 71 && y == 30)
		return Script_Tombstone_Hirohito;
	else if (x == 71 && y == 33)
		return Script_Tombstone_Aquinas;
	else if (x == 71 && y == 36)
		return Script_Tombstone_Tesla;
	else if (x == 71 && y == 39)
		return Script_Tombstone_Bach;
	else if (x == 71 && y == 42)
		return Script_Tombstone_Hobbes;
	else if (x == 71 && y == 45)
		return Script_Tombstone_Hendrix;
	else if (x == 71 && y == 48)
		return Script_Tombstone_Tolkien;
	else if (x == 71 && y == 51)
		return Script_Tombstone_Berry;
	else if (x == 71 && y == 54)
		return Script_Tombstone_Milton;
	else if (x == 71 && y == 57)
		return Script_Tombstone_Sophocles;
	else if (x == 71 && y == 60)
		return Script_Tombstone_Aeschylus;
	//Far Right Col 3
	else if (x == 73 && y == 36)
		return Script_Tombstone_StPeter;
	else if (x == 73 && y == 39)
		return Script_Tombstone_Engles;
	else if (x == 73 && y == 42)
		return Script_Tombstone_Archimedes;
	else if (x == 73 && y == 45)
		return Script_Tombstone_Watt;
	else if (x == 73 && y == 48)
		return Script_Tombstone_Schrodinger;
	else if (x == 73 && y == 51)
		return Script_Tombstone_Fitzgerald;
	else if (x == 73 && y == 54)
		return Script_Tombstone_Woolfe;
	else if (x == 73 && y == 57)
		return Script_Tombstone_Dostoevsky;
	else if (x == 73 && y == 60)
		return Script_Tombstone_Janis;
    //1 furthest right
	else if (x == 75 && y == 39)
		return Script_Tombstone_Richard2;
    //Bottom Left 3 far lefta
	else if (x == 23 && y == 51)
		return Script_Tombstone_Cyrus;
	else if (x == 23 && y == 54)
		return Script_Tombstone_Caligula;
	else if (x == 23 && y == 57)
		return Script_Tombstone_Isabella;
     //Bottom Row 1
	else if (x == 30 && y == 51)
		return Script_Tombstone_Yeltsin;
	else if (x == 32 && y == 51)
		return Script_Tombstone_JackKilby;
	else if (x == 34 && y == 51)
		return Script_Tombstone_Mozart;
	else if (x == 36 && y == 51)
		return Script_Tombstone_Jobs;
	else if (x == 38 && y == 51)
		return Script_Tombstone_Cobain;
	else if (x == 40 && y == 51)
		return Script_Tombstone_Michelangelo;
	else if (x == 42 && y == 51)
		return Script_Tombstone_Copernicus;
	else if (x == 44 && y == 51)
		return Script_Tombstone_Galileo;
	else if (x == 46 && y == 51)
		return Script_Tombstone_Cash;
	else if (x == 48 && y == 51)
		return Script_Tombstone_Freud;
	else if (x == 50 && y == 51)
		return Script_Tombstone_Kant;
	else if (x == 52 && y == 51)
		return Script_Tombstone_Diogenes;
	else if (x == 59 && y == 51)
		return Script_Tombstone_Cervantes;
	else if (x == 61 && y == 51)
		return Script_Tombstone_Kerouac;
	else if (x == 63 && y == 51)
		return Script_Tombstone_Tupac;
	else if (x == 65 && y == 51)
		return Script_Tombstone_Osama;
	else if (x == 67 && y == 51)
		return Script_Tombstone_JFK;
     //Bottom Row 2
	else if (x == 30 && y == 54)
		return Script_Tombstone_Twain;
	else if (x == 32 && y == 54)
		return Script_Tombstone_Hitchcock;
	else if (x == 34 && y == 54)
		return Script_Tombstone_JimMorrison;
	else if (x == 36 && y == 54)
		return Script_Tombstone_MJ;
	else if (x == 38 && y == 54)
		return Script_Tombstone_Teddy;
	else if (x == 40 && y == 54)
		return Script_Tombstone_MLK;
	else if (x == 42 && y == 54)
		return Script_Tombstone_Sinatra;
	else if (x == 44 && y == 54)
		return Script_Tombstone_Oppenheimer;
	else if (x == 46 && y == 54)
		return Script_Tombstone_Jung;
	else if (x == 48 && y == 54)
		return Script_Tombstone_Khalo;
	else if (x == 50 && y == 54)
		return Script_Tombstone_Scipio;
	else if (x == 52 && y == 54)
		return Script_Tombstone_Stalin;
	else if (x == 59 && y == 54)
		return Script_Tombstone_Rommel;
	else if (x == 61 && y == 54)
		return Script_Tombstone_Euripides;
	else if (x == 63 && y == 54)
		return Script_Tombstone_Hawking;
	else if (x == 65 && y == 54)
		return Script_Tombstone_Suleiman;
	else if (x == 67 && y == 54)
		return Script_Tombstone_Machiavelli;
     //Bottom Row 3
	else if (x == 30 && y == 57)
		return Script_Tombstone_Cicero;
	else if (x == 32 && y == 57)
		return Script_Tombstone_MarieCurie;
	else if (x == 34 && y == 57)
		return Script_Tombstone_JaneAusten;
	else if (x == 36 && y == 57)
		return Script_Tombstone_Hannibal;
	else if (x == 38 && y == 57)
		return Script_Tombstone_Sullust;
	else if (x == 40 && y == 57)
		return Script_Tombstone_Zinn;
	else if (x == 42 && y == 57)
		return Script_Tombstone_Disney;
	else if (x == 50 && y == 57)
		return Script_Tombstone_Chaplin;
	else if (x == 52 && y == 57)
		return Script_Tombstone_Sagan;
	else if (x == 59 && y == 57)
		return Script_Tombstone_Dimaggio;
	else if (x == 61 && y == 57)
		return Script_Tombstone_Lee;
	else if (x == 67 && y == 57)
		return Script_Tombstone_Livy;
    //Bottom 2 left
	else if (x == 32 && y == 60)
		return Script_Tombstone_Epicurus;
	else if (x == 34 && y == 60)
		return Script_Tombstone_Schopenhaur;
    //Bottom 1 right 
	else if (x == 69 && y == 60)
		return Script_Tombstone_Wells;
	//Pyramus et Thisbe
	else if (x == 29 && y == 62)
		return Script_Tombstone_Pyramus;
	else if (x == 30 && y == 62)
		return Script_Tombstone_Thisbe;
    //Default - unused I do believe
	else
		return Script_Tombstone_Default;
}
