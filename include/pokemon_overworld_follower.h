#ifndef GUARD_TX_POKEMON_FOLLOWER
#define GUARD_TX_POKEMON_FOLLOWER

#include "constants/pokemon_overworld_follower.h"

#define DEFAULT_FOLLOWER_LOCAL_ID 0xFE
#define MOVEMENT_INVALID 0xFE

enum FollowerSpriteTypes
{
    FOLLOWER_SPRITE_INDEX_NORMAL,
    FOLLOWER_SPRITE_INDEX_MACH_BIKE,
    FOLLOWER_SPRITE_INDEX_ACRO_BIKE,
    FOLLOWER_SPRITE_INDEX_SURF,
    FOLLOWER_SPRITE_INDEX_UNDERWATER,
};

// Exported Functions
// void POF_SetUpFollowerSprite(u8 localId, u16 flags); //
void POF_DestroyFollower(void);
// void POF_PlayerFaceFollowerSprite(void); //
bool8 POF_FollowerComingThroughDoor(void);

u8 POF_GetFollowerObjectId(void);
// u8 POF_GetFollowerLocalId(void); //
const u8* POF_GetFollowerScriptPointer(void);
void POF_FollowerHide(void);
// void POF_TryFreezeFollowerAnim(struct ObjectEvent* npc); //
void POF_IsFollowerStoppingRockClimb(void);
void POF_FollowMe_SetIndicatorToComeOutDoor(void);
// void POF_FollowMe_SetIndicatorToRecreateSurfBlob(void);
void POF_FollowMe_TryRemoveFollowerOnWhiteOut(void);
void POF_FollowMe(struct ObjectEvent* npc, u8 state, bool8 ignoreScriptActive);
void POF_FollowMe_Ledges(struct ObjectEvent* npc, struct Sprite* obj, u16* ledgeFramesTbl);
bool8 POF_FollowMe_IsCollisionExempt(struct ObjectEvent* obstacle, struct ObjectEvent* collider);
void POF_FollowMe_FollowerToWater(void);
// void FollowMe_BindToSurbBlobOnReloadScreen(void);
void POF_PrepareFollowerDismountSurf(void);
void POF_StairsMoveFollower(void);
void POF_FollowMe_HandleBike(void);
void POF_FollowMe_HandleSprite(void);
void POF_FollowMe_WarpSetEnd(void);
void POF_CreateFollowerAvatar(void);
void POF_EscalatorMoveFollower(u8 movementType);
void POF_EscalatorMoveFollowerFinish(void);
// bool8 POF_FollowerCanBike(void);
bool8 POF_CheckFollowerFlag(u16 flag);
void POF_FollowerPositionFix(u8 offset);
void POF_SetFollowerSprite(u8 spriteIndex);
bool8 POF_PlayerHasFollower(void);
void POF_CreateMonFromPartySlotId(void);
void POF_FollowerUnhide(void);
u8 POF_GetFollowerSlotId(void);
void POF_SetFollowerSlotId(u8 slotId);
bool8 POF_IsFollowerSlotId(u8 slotId);
bool8 POF_IsFollowerAlive(void);
bool8 POF_IsFollowerAliveAndWell(void);

// moved from field_screen_effect.c
void POF_Task_DoDoorWarp(u8 taskId);
bool8 POF_IsPlayerOnFoot(void);

void TEST_function(void);

#endif
