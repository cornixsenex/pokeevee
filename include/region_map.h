#ifndef GUARD_REGION_MAP_H
#define GUARD_REGION_MAP_H

#include "bg.h"

// Exported type declarations
#define MAP_NAME_LENGTH 16

enum
{
    MAP_INPUT_NONE,
    MAP_INPUT_MOVE_START,
    MAP_INPUT_MOVE_CONT,
    MAP_INPUT_MOVE_END,
    MAP_INPUT_A_BUTTON,
    MAP_INPUT_B_BUTTON,
    MAP_INPUT_R_BUTTON
};

enum {
    MAPSECTYPE_NONE,
    MAPSECTYPE_ROUTE,
    MAPSECTYPE_CITY_CANFLY,
    MAPSECTYPE_CITY_CANTFLY,
    MAPSECTYPE_BATTLE_FRONTIER,
    NUM_MAPSEC_TYPES
};

struct RegionMap {
    /*0x000*/ u16 mapSecId;
    /*0x002*/ u8 mapSecType;
    /*0x003*/ u8 posWithinMapSec;
    /*0x004*/ u8 mapSecName[20];
    /*0x018*/ u8 (*inputCallback)(void);
    /*0x01c*/ struct Sprite *cursorSprite;
    /*0x020*/ struct Sprite *playerIconSprite;
    /*0x024*/ s32 bg2x;
    /*0x028*/ s32 bg2y;
    /*0x02c*/ u32 bg2pa;
    /*0x034*/ u32 bg2pc;
    /*0x030*/ u32 bg2pb;
    /*0x038*/ u32 bg2pd;
    /*0x03c*/ s32 unk_03c;
    /*0x040*/ s32 unk_040;
    /*0x044*/ s32 unk_044;
    /*0x048*/ s32 unk_048;
    /*0x04c*/ s32 unk_04c;
    /*0x050*/ s32 unk_050;
    /*0x054*/ u16 cursorPosX;
    /*0x056*/ u16 cursorPosY;
    /*0x058*/ u16 cursorTileTag;
    /*0x05a*/ u16 cursorPaletteTag;
    /*0x05c*/ s16 scrollX;
    /*0x05e*/ s16 scrollY;
    /*0x060*/ s16 unk_060;
    /*0x062*/ s16 unk_062;
    /*0x064*/ u16 zoomedCursorPosX;
    /*0x066*/ u16 zoomedCursorPosY;
    /*0x068*/ s16 zoomedCursorDeltaY;
    /*0x06a*/ s16 zoomedCursorDeltaX;
    /*0x06c*/ u16 zoomedCursorMovementFrameCounter;
    /*0x06e*/ u16 unk_06e;
    /*0x070*/ u16 playerIconTileTag;
    /*0x072*/ u16 playerIconPaletteTag;
    /*0x074*/ u16 playerIconSpritePosX;
    /*0x076*/ u16 playerIconSpritePosY;
    /*0x078*/ bool8 zoomed;
    /*0x079*/ u8 initStep;
    /*0x07a*/ s8 cursorMovementFrameCounter;
    /*0x07b*/ s8 cursorDeltaX;
    /*0x07c*/ s8 cursorDeltaY;
    /*0x07d*/ bool8 needUpdateVideoRegs;
    /*0x07e*/ bool8 blinkPlayerIcon;
    /*0x07f*/ bool8 playerIsInCave;
    /*0x080*/ u8 bgNum;
    /*0x081*/ u8 charBaseIdx;
    /*0x082*/ u8 mapBaseIdx;
    /*0x083*/ bool8 bgManaged;
    /*0x084*/ u8 filler_084[0x100];
    /*0x184*/ u8 cursorSmallImage[0x100];
    /*0x284*/ u8 cursorLargeImage[0x600];
}; // size = 0x884

struct RegionMapLocation
{
    u8 x;
    u8 y;
    u8 width;
    u8 height;
    const u8 *name;
};

// Exported RAM declarations

// Exported ROM declarations
void InitRegionMapData(struct RegionMap *regionMap, const struct BgTemplate *template, bool8 zoomed);
bool8 LoadRegionMapGfx(void);
void UpdateRegionMapVideoRegs(void);
void InitRegionMap(struct RegionMap *regionMap, bool8 zoomed);
u8 DoRegionMapInputCallback(void);
bool8 UpdateRegionMapZoom(void);
void FreeRegionMapIconResources(void);
u16 GetRegionMapSecIdAt(u16 x, u16 y);
void CreateRegionMapPlayerIcon(u16 tileTag, u16 paletteTag);
void CreateRegionMapCursor(u16 tileTag, u16 paletteTag);
bool32 IsEventIslandMapSecId(u8 mapSecId);
u8 *GetMapName(u8 *dest, u16 regionMapId, u16 padLength);
u8 *GetMapNameGeneric(u8 *dest, u16 mapSecId);
u8 *GetMapNameHandleAquaHideout(u8 *dest, u16 mapSecId);
u16 CorrectSpecialMapSecId(u16 mapSecId);
void ShowRegionMapForPokedexAreaScreen(struct RegionMap *regionMap);
void PokedexAreaScreen_UpdateRegionMapVariablesAndVideoRegs(s16 x, s16 y);
void CB2_OpenFlyMap(void);
bool8 IsRegionMapZoomed(void);
void TrySetPlayerIconBlink(void);
void BlendRegionMap(u16 color, u32 coeff);
void SetRegionMapDataForZoom(void);

//Pokenav Fly funcs
u32 FilterFlyDestination(struct RegionMap* regionMap);
void SetFlyDestination(struct RegionMap* regionMap);

//Cornix Custom - Dynamic Maps
bool32 IsRoute3RiverDelta(bool32 useWarpInfo);
u32 GetDynamicMapSec_MareWWW(bool32 useWarpInfo);
u32 GetDynamicMapSec_Route17(bool32 useWarpInfo);
u32 GetDynamicMapSec_LakeIra(bool32 useWarpInfo);
bool32 IsLakeIraSouthUpperDracoWest(bool32 useWarpInfo);
bool32 IsSilvanWoodsNUpperDracoEast(bool32 useWarpInfo);
u32 GetDynamicMapSec_SilvanWoods(bool32 useWarpInfo);
u32 GetDynamicMapSec_MareS6(bool32 useWarpInfo);
u32 GetDynamicMapSec_MareWW(bool32 useWarpInfo);
u32 GetDynamicMapSec_CityClara(bool32 useWarpInfo);
u32 GetDynamicMapSec_MareW(bool32 useWarpInfo);
u32 GetDynamicMapSec_SRoute18(bool32 useWarpInfo);
bool32 GetDynamicMapSec_MareS5(bool32 useWarpInfo);
u32 GetDynamicMapSec_Route4(bool32 useWarpInfo);
u32 GetDynamicMapSec_Route6(bool32 useWarpInfo);
u32 GetDynamicMapSec_Route7(bool32 useWarpInfo);
u32 GetDynamicMapSec_Route5(bool32 useWarpInfo);
bool32 IsSanjoSabinaNova(bool32 useWarpInfo);
bool32 IsDoakTownRobustica(bool32 useWarpInfo);
bool32 IsSRoute19MareInternum(bool32 useWarpInfo);
bool32 IsRoute9ViaSaxosa(bool32 useWarpInfo);
bool32 IsRoute16VenatorMons(bool32 useWarpInfo);
u32 GetDynamicMapSec_Tucson(bool32 useWarpInfo);
bool32 IsPyramidsDCactorum(bool32 useWarpInfo);
u32 GetDynamicMapSec_Vegas(bool32 useWarpInfo);
u32 GetDynamicMapSec_EliciusBeach(bool32 useWarpInfo);
u32 GetDynamicMapSec_Route10(bool32 useWarpInfo);
u32 GetDynamicMapSec_Route11(bool32 useWarpInfo);
u32 IsPenninsulaECastrum(bool32 useWarpInfo);
u32 GetDynamicMapSec_Hippodrome(bool32 useWarpInfo);
u32 IsBikeMapEViaMagna(bool32 useWarpInfo);
u32 IsBikeMapWViaMagna(bool32 useWarpInfo);
u32 IsBikeRouteFarmViaMagna(bool32 useWarpInfo);
u32 IsSanjoRockFillerSabinaNova(bool32 useWarpInfo);
u32 IsGatoCityParkNThermae(bool32 useWarpInfo);
u32 GetDynamicMapSec_MareS4(bool32 useWarpInfo);
u32 GetDynamicMapSec_MareS3(bool32 useWarpInfo);
u32 GetDynamicMapSec_MareS2(bool32 useWarpInfo);
u32 GetDynamicMapSec_MareS1(bool32 useWarpInfo);
u32 GetDynamicMapSec_BigIslandN(bool32 useWarpInfo);
u32 GetDynamicMapSec_BigIslandS(bool32 useWarpInfo);
u32 GetDynamicMapSec_OceanPerimeterBigIslandS(bool32 useWarpInfo);
u32 GetDynamicMapSec_BigIslandFillerW(bool32 useWarpInfo);
u32 GetDynamicMapSec_MareS7(bool32 useWarpInfo);
u32 GetDynamicMapSec_MareS8(bool32 useWarpInfo);
u32 GetDynamicMapSec_MareS9(bool32 useWarpInfo);
u32 GetDynamicMapSec_MareS10(bool32 useWarpInfo);
u32 GetDynamicMapSec_OceanPerimeter2(bool32 useWarpInfo);


extern const struct RegionMapLocation gRegionMapEntries[];

#endif //GUARD_REGION_MAP_H
