#include "global.h"
#include "fieldmap.h" //CornixSenex
#include "main.h"
#include "text.h"
#include "menu.h"
#include "malloc.h"
#include "metatile_behavior.h" //CornixSenex
#include "gpu_regs.h"
#include "palette.h"
#include "party_menu.h"
#include "trig.h"
#include "overworld.h"
#include "event_data.h"
#include "secret_base.h"
#include "string_util.h"
#include "international_string_util.h"
#include "strings.h"
#include "text_window.h"
#include "constants/songs.h"
#include "m4a.h"
#include "field_effect.h"
#include "field_specials.h"
#include "fldeff.h"
#include "region_map.h"
#include "constants/region_map_sections.h"
#include "heal_location.h"
#include "constants/field_specials.h"
#include "constants/heal_locations.h"
#include "constants/map_types.h"
#include "constants/metatile_behaviors.h" //CornixSenex
#include "constants/rgb.h"
#include "constants/weather.h"

/*
 *  This file handles region maps generally, and the map used when selecting a fly destination.
 *  Specific features of other region map uses are handled elsewhere
 *
 *  For the region map in the pokenav, see pokenav_region_map.c
 *  For the region map in the pokedex, see pokdex_area_screen.c/pokedex_area_region_map.c
 *  For the region map that can be viewed on the wall of pokemon centers, see field_region_map.c
 *
 */

#define MAP_WIDTH 28
#define MAP_HEIGHT 15
#define MAPCURSOR_X_MIN 1
#define MAPCURSOR_Y_MIN 2
#define MAPCURSOR_X_MAX (MAPCURSOR_X_MIN + MAP_WIDTH - 1)
#define MAPCURSOR_Y_MAX (MAPCURSOR_Y_MIN + MAP_HEIGHT - 1)

#define FLYDESTICON_RED_OUTLINE 6

enum {
    TAG_CURSOR,
    TAG_PLAYER_ICON,
    TAG_FLY_ICON,
};

// Window IDs for the fly map
enum {
    WIN_MAPSEC_NAME,
    WIN_MAPSEC_NAME_TALL, // For fly destinations with subtitles (just Ever Grande)
    WIN_FLY_TO_WHERE,
};

struct MultiNameFlyDest
{
    const u8 *const *name;
    u16 mapSecId;
    u16 flag;
};

static EWRAM_DATA struct RegionMap *sRegionMap = NULL;

static EWRAM_DATA struct {
    void (*callback)(void);
    u16 state;
    u16 mapSecId;
    struct RegionMap regionMap;
    u8 tileBuffer[0x1c0];
    u8 nameBuffer[0x26]; // never read
    bool8 choseFlyLocation;
} *sFlyMap = NULL;

static bool32 sDrawFlyDestTextWindow;

static u8 ProcessRegionMapInput_Full(void);
static u8 MoveRegionMapCursor_Full(void);
static u8 ProcessRegionMapInput_Zoomed(void);
static u8 MoveRegionMapCursor_Zoomed(void);
static void CalcZoomScrollParams(s16 scrollX, s16 scrollY, s16 c, s16 d, u16 e, u16 f, u8 rotation);
static u16 GetMapSecIdAt(u16 x, u16 y);
static void RegionMap_SetBG2XAndBG2Y(s16 x, s16 y);
static void InitMapBasedOnPlayerLocation(void);
static void RegionMap_InitializeStateBasedOnSSTidalLocation(void);
static u8 GetMapsecType(u16 mapSecId);
static u16 CorrectSpecialMapSecId_Internal(u16 mapSecId);
static u16 GetTerraOrMarineCaveMapSecId(void);
//static void GetMarineCaveCoords(u16 *x, u16 *y);
static bool32 IsPlayerInAquaHideout(u8 mapSecId);
static void GetPositionOfCursorWithinMapSec(void);
static bool8 RegionMap_IsMapSecIdInNextRow(u16 y);
static void SpriteCB_CursorMapFull(struct Sprite *sprite);
static void FreeRegionMapCursorSprite(void);
static void HideRegionMapPlayerIcon(void);
static void UnhideRegionMapPlayerIcon(void);
static void SpriteCB_PlayerIconMapZoomed(struct Sprite *sprite);
static void SpriteCB_PlayerIconMapFull(struct Sprite *sprite);
static void SpriteCB_PlayerIcon(struct Sprite *sprite);
static void VBlankCB_FlyMap(void);
static void CB2_FlyMap(void);
static void SetFlyMapCallback(void callback(void));
static void DrawFlyDestTextWindow(void);
static void LoadFlyDestIcons(void);
static void CreateFlyDestIcons(void);
static void TryCreateRedOutlineFlyDestIcons(void);
static void SpriteCB_FlyDestIcon(struct Sprite *sprite);
static void CB_FadeInFlyMap(void);
static void CB_HandleFlyMapInput(void);
static void CB_ExitFlyMap(void);

static const u16 sRegionMapCursorPal[] = INCBIN_U16("graphics/pokenav/region_map/cursor.gbapal");
static const u32 sRegionMapCursorSmallGfxLZ[] = INCBIN_U32("graphics/pokenav/region_map/cursor_small.4bpp.lz");
static const u32 sRegionMapCursorLargeGfxLZ[] = INCBIN_U32("graphics/pokenav/region_map/cursor_large.4bpp.lz");
static const u16 sRegionMapBg_Pal[] = INCBIN_U16("graphics/pokenav/region_map/map.gbapal");
static const u32 sRegionMapBg_GfxLZ[] = INCBIN_U32("graphics/pokenav/region_map/map.8bpp.lz");
static const u32 sRegionMapBg_TilemapLZ[] = INCBIN_U32("graphics/pokenav/region_map/map.bin.lz");
static const u16 sRegionMapPlayerIcon_BrendanPal[] = INCBIN_U16("graphics/pokenav/region_map/brendan_icon.gbapal");
static const u8 sRegionMapPlayerIcon_BrendanGfx[] = INCBIN_U8("graphics/pokenav/region_map/brendan_icon.4bpp");
static const u16 sRegionMapPlayerIcon_MayPal[] = INCBIN_U16("graphics/pokenav/region_map/may_icon.gbapal");
static const u8 sRegionMapPlayerIcon_MayGfx[] = INCBIN_U8("graphics/pokenav/region_map/may_icon.4bpp");

#include "data/region_map/region_map_layout.h"
#include "data/region_map/region_map_entries.h"

static const u16 sRegionMap_SpecialPlaceLocations[][2] =
{
    //{MAPSEC_UNDERWATER_105,             MAPSEC_ROUTE_105},
    //{MAPSEC_UNDERWATER_124,             MAPSEC_ROUTE_124},
    #ifdef BUGFIX
    //{MAPSEC_UNDERWATER_125,             MAPSEC_ROUTE_125},
    #else
    //{MAPSEC_UNDERWATER_125,             MAPSEC_ROUTE_129}, // BUG: Map will incorrectly display the name of Route 129 when diving on Route 125 (for Marine Cave only)
    #endif
    //{MAPSEC_UNDERWATER_126,             MAPSEC_ROUTE_126},
    //{MAPSEC_UNDERWATER_127,             MAPSEC_ROUTE_127},
    //{MAPSEC_UNDERWATER_128,             MAPSEC_ROUTE_128},
    //{MAPSEC_UNDERWATER_129,             MAPSEC_ROUTE_129},
    {MAPSEC_UNDERWATER_SOOTOPOLIS,      MAPSEC_SOOTOPOLIS_CITY},
    {MAPSEC_UNDERWATER_SEAFLOOR_CAVERN, MAPSEC_ROUTE_128},
    {MAPSEC_AQUA_HIDEOUT,               MAPSEC_LILYCOVE_CITY},
    {MAPSEC_AQUA_HIDEOUT_OLD,           MAPSEC_LILYCOVE_CITY},
    {MAPSEC_MAGMA_HIDEOUT,              MAPSEC_ROUTE_112},
    {MAPSEC_UNDERWATER_SEALED_CHAMBER,  MAPSEC_ROUTE_134},
    {MAPSEC_PETALBURG_WOODS,            MAPSEC_ROUTE_104},
    {MAPSEC_JAGGED_PASS,                MAPSEC_ROUTE_112},
    {MAPSEC_MT_PYRE,                    MAPSEC_ROUTE_122},
    {MAPSEC_SKY_PILLAR,                 MAPSEC_ROUTE_131},
//    {MAPSEC_MIRAGE_TOWER,               MAPSEC_ROUTE_111},
   // {MAPSEC_TRAINER_HILL,               MAPSEC_ROUTE_111},
   // {MAPSEC_DESERT_UNDERPASS,           MAPSEC_ROUTE_114},
   // {MAPSEC_ALTERING_CAVE,              MAPSEC_ROUTE_103},
   // {MAPSEC_ARTISAN_CAVE,               MAPSEC_ROUTE_103},
    {MAPSEC_ABANDONED_SHIP,             MAPSEC_ROUTE_108},
    {MAPSEC_NONE,                       MAPSEC_NONE}
};

static const u16 sMarineCaveMapSecIds[] =
{
    //MAPSEC_MARINE_CAVE,
    //MAPSEC_UNDERWATER_MARINE_CAVE,
    //MAPSEC_UNDERWATER_MARINE_CAVE
};

static const u16 sTerraOrMarineCaveMapSecIds[ABNORMAL_WEATHER_LOCATIONS] =
{
    [ABNORMAL_WEATHER_ROUTE_114_NORTH - 1] = MAPSEC_ROUTE_114,
    [ABNORMAL_WEATHER_ROUTE_114_SOUTH - 1] = MAPSEC_ROUTE_114,
    [ABNORMAL_WEATHER_ROUTE_115_WEST  - 1] = MAPSEC_ROUTE_115,
    [ABNORMAL_WEATHER_ROUTE_115_EAST  - 1] = MAPSEC_ROUTE_115,
    [ABNORMAL_WEATHER_ROUTE_116_NORTH - 1] = MAPSEC_ROUTE_116,
    [ABNORMAL_WEATHER_ROUTE_116_SOUTH - 1] = MAPSEC_ROUTE_116,
    [ABNORMAL_WEATHER_ROUTE_118_EAST  - 1] = MAPSEC_ROUTE_118,
    [ABNORMAL_WEATHER_ROUTE_118_WEST  - 1] = MAPSEC_ROUTE_118,
    [ABNORMAL_WEATHER_ROUTE_105_NORTH - 1] = MAPSEC_ROUTE_105,
    [ABNORMAL_WEATHER_ROUTE_105_SOUTH - 1] = MAPSEC_ROUTE_105,
    [ABNORMAL_WEATHER_ROUTE_125_WEST  - 1] = MAPSEC_ROUTE_125,
    [ABNORMAL_WEATHER_ROUTE_125_EAST  - 1] = MAPSEC_ROUTE_125,
    [ABNORMAL_WEATHER_ROUTE_127_NORTH - 1] = MAPSEC_ROUTE_127,
    [ABNORMAL_WEATHER_ROUTE_127_SOUTH - 1] = MAPSEC_ROUTE_127,
    [ABNORMAL_WEATHER_ROUTE_129_WEST  - 1] = MAPSEC_ROUTE_129,
    [ABNORMAL_WEATHER_ROUTE_129_EAST  - 1] = MAPSEC_ROUTE_129
};

#define MARINE_CAVE_COORD(location) (ABNORMAL_WEATHER_##location - MARINE_CAVE_LOCATIONS_START)

static const struct UCoords16 sMarineCaveLocationCoords[MARINE_CAVE_LOCATIONS] =
{
    [MARINE_CAVE_COORD(ROUTE_105_NORTH)] = {0, 10},
    [MARINE_CAVE_COORD(ROUTE_105_SOUTH)] = {0, 12},
    [MARINE_CAVE_COORD(ROUTE_125_WEST)]  = {24, 3},
    [MARINE_CAVE_COORD(ROUTE_125_EAST)]  = {25, 4},
    [MARINE_CAVE_COORD(ROUTE_127_NORTH)] = {25, 6},
    [MARINE_CAVE_COORD(ROUTE_127_SOUTH)] = {25, 7},
    [MARINE_CAVE_COORD(ROUTE_129_WEST)]  = {24, 10},
    [MARINE_CAVE_COORD(ROUTE_129_EAST)]  = {24, 10}
};

static const u8 sMapSecAquaHideoutOld[] =
{
    MAPSEC_AQUA_HIDEOUT_OLD
};

static const struct OamData sRegionMapCursorOam =
{
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16),
    .priority = 1
};

static const union AnimCmd sRegionMapCursorAnim1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(4, 20),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd sRegionMapCursorAnim2[] =
{
    ANIMCMD_FRAME( 0, 10),
    ANIMCMD_FRAME(16, 10),
    ANIMCMD_FRAME(32, 10),
    ANIMCMD_FRAME(16, 10),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sRegionMapCursorAnimTable[] =
{
    sRegionMapCursorAnim1,
    sRegionMapCursorAnim2
};

static const struct SpritePalette sRegionMapCursorSpritePalette =
{
    .data = sRegionMapCursorPal,
    .tag = TAG_CURSOR
};

static const struct SpriteTemplate sRegionMapCursorSpriteTemplate =
{
    .tileTag = TAG_CURSOR,
    .paletteTag = TAG_CURSOR,
    .oam = &sRegionMapCursorOam,
    .anims = sRegionMapCursorAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_CursorMapFull
};

static const struct OamData sRegionMapPlayerIconOam =
{
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16),
    .priority = 2
};

static const union AnimCmd sRegionMapPlayerIconAnim1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END
};

static const union AnimCmd *const sRegionMapPlayerIconAnimTable[] =
{
    sRegionMapPlayerIconAnim1
};

// Event islands that don't appear on map. (Southern Island does)
//CORNIX REMOVED because all these mapsecs have been repurposed
//static const u8 sMapSecIdsOffMap[] =
//{
////    MAPSEC_BIRTH_ISLAND,
//    //MAPSEC_FARAWAY_ISLAND,
////    MAPSEC_NAVEL_ROCK
//};

static const u16 sRegionMapFramePal[] = INCBIN_U16("graphics/pokenav/region_map/frame.gbapal");
static const u32 sRegionMapFrameGfxLZ[] = INCBIN_U32("graphics/pokenav/region_map/frame.4bpp.lz");
static const u32 sRegionMapFrameTilemapLZ[] = INCBIN_U32("graphics/pokenav/region_map/frame.bin.lz");
static const u16 sFlyTargetIcons_Pal[] = INCBIN_U16("graphics/pokenav/region_map/fly_target_icons.gbapal");
static const u32 sFlyTargetIcons_Gfx[] = INCBIN_U32("graphics/pokenav/region_map/fly_target_icons.4bpp.lz");

static const u8 sMapHealLocations[][3] =
{
    [MAPSEC_LITTLEROOT_TOWN] = {MAP_GROUP(MAP_LITTLEROOT_TOWN), MAP_NUM(MAP_LITTLEROOT_TOWN), HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F},
    [MAPSEC_OLDALE_TOWN] = {MAP_GROUP(MAP_OLDALE_TOWN), MAP_NUM(MAP_OLDALE_TOWN), HEAL_LOCATION_OLDALE_TOWN},
    [MAPSEC_DEWFORD_TOWN] = {MAP_GROUP(MAP_DEWFORD_TOWN), MAP_NUM(MAP_DEWFORD_TOWN), HEAL_LOCATION_DEWFORD_TOWN},
    [MAPSEC_LAVARIDGE_TOWN] = {MAP_GROUP(MAP_LAVARIDGE_TOWN), MAP_NUM(MAP_LAVARIDGE_TOWN), HEAL_LOCATION_LAVARIDGE_TOWN},
    [MAPSEC_FALLARBOR_TOWN] = {MAP_GROUP(MAP_FALLARBOR_TOWN), MAP_NUM(MAP_FALLARBOR_TOWN), HEAL_LOCATION_FALLARBOR_TOWN},
    [MAPSEC_VERDANTURF_TOWN] = {MAP_GROUP(MAP_VERDANTURF_TOWN), MAP_NUM(MAP_VERDANTURF_TOWN), HEAL_LOCATION_VERDANTURF_TOWN},
    [MAPSEC_PACIFIDLOG_TOWN] = {MAP_GROUP(MAP_PACIFIDLOG_TOWN), MAP_NUM(MAP_PACIFIDLOG_TOWN), HEAL_LOCATION_PACIFIDLOG_TOWN},
    [MAPSEC_PETALBURG_CITY] = {MAP_GROUP(MAP_PETALBURG_CITY), MAP_NUM(MAP_PETALBURG_CITY), HEAL_LOCATION_PETALBURG_CITY},
    [MAPSEC_SLATEPORT_CITY] = {MAP_GROUP(MAP_SLATEPORT_CITY), MAP_NUM(MAP_SLATEPORT_CITY), HEAL_LOCATION_SLATEPORT_CITY},
    [MAPSEC_MAUVILLE_CITY] = {MAP_GROUP(MAP_MAUVILLE_CITY), MAP_NUM(MAP_MAUVILLE_CITY), HEAL_LOCATION_MAUVILLE_CITY},
    [MAPSEC_RUSTBORO_CITY] = {MAP_GROUP(MAP_RUSTBORO_CITY), MAP_NUM(MAP_RUSTBORO_CITY), HEAL_LOCATION_RUSTBORO_CITY},
    [MAPSEC_FORTREE_CITY] = {MAP_GROUP(MAP_FORTREE_CITY), MAP_NUM(MAP_FORTREE_CITY), HEAL_LOCATION_FORTREE_CITY},
    [MAPSEC_LILYCOVE_CITY] = {MAP_GROUP(MAP_LILYCOVE_CITY), MAP_NUM(MAP_LILYCOVE_CITY), HEAL_LOCATION_LILYCOVE_CITY},
    [MAPSEC_MOSSDEEP_CITY] = {MAP_GROUP(MAP_MOSSDEEP_CITY), MAP_NUM(MAP_MOSSDEEP_CITY), HEAL_LOCATION_MOSSDEEP_CITY},
    [MAPSEC_SOOTOPOLIS_CITY] = {MAP_GROUP(MAP_SOOTOPOLIS_CITY), MAP_NUM(MAP_SOOTOPOLIS_CITY), HEAL_LOCATION_SOOTOPOLIS_CITY},
    [MAPSEC_EVER_GRANDE_CITY] = {MAP_GROUP(MAP_EVER_GRANDE_CITY), MAP_NUM(MAP_EVER_GRANDE_CITY), HEAL_LOCATION_EVER_GRANDE_CITY},
    [MAPSEC_ROUTE_101] = {MAP_GROUP(MAP_ROUTE101), MAP_NUM(MAP_ROUTE101), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_102] = {MAP_GROUP(MAP_ROUTE102), MAP_NUM(MAP_ROUTE102), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_103] = {MAP_GROUP(MAP_ROUTE103), MAP_NUM(MAP_ROUTE103), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_104] = {MAP_GROUP(MAP_ROUTE104), MAP_NUM(MAP_ROUTE104), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_105] = {MAP_GROUP(MAP_ROUTE105), MAP_NUM(MAP_ROUTE105), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_106] = {MAP_GROUP(MAP_ROUTE106), MAP_NUM(MAP_ROUTE106), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_107] = {MAP_GROUP(MAP_ROUTE107), MAP_NUM(MAP_ROUTE107), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_108] = {MAP_GROUP(MAP_ROUTE108), MAP_NUM(MAP_ROUTE108), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_109] = {MAP_GROUP(MAP_ROUTE109), MAP_NUM(MAP_ROUTE109), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_110] = {MAP_GROUP(MAP_ROUTE110), MAP_NUM(MAP_ROUTE110), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_111] = {MAP_GROUP(MAP_ROUTE111), MAP_NUM(MAP_ROUTE111), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_112] = {MAP_GROUP(MAP_ROUTE112), MAP_NUM(MAP_ROUTE112), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_113] = {MAP_GROUP(MAP_ROUTE113), MAP_NUM(MAP_ROUTE113), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_114] = {MAP_GROUP(MAP_ROUTE114), MAP_NUM(MAP_ROUTE114), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_115] = {MAP_GROUP(MAP_ROUTE115), MAP_NUM(MAP_ROUTE115), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_116] = {MAP_GROUP(MAP_ROUTE116), MAP_NUM(MAP_ROUTE116), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_117] = {MAP_GROUP(MAP_ROUTE117), MAP_NUM(MAP_ROUTE117), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_118] = {MAP_GROUP(MAP_ROUTE118), MAP_NUM(MAP_ROUTE118), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_119] = {MAP_GROUP(MAP_ROUTE119), MAP_NUM(MAP_ROUTE119), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_120] = {MAP_GROUP(MAP_ROUTE120), MAP_NUM(MAP_ROUTE120), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_121] = {MAP_GROUP(MAP_ROUTE121), MAP_NUM(MAP_ROUTE121), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_122] = {MAP_GROUP(MAP_ROUTE122), MAP_NUM(MAP_ROUTE122), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_123] = {MAP_GROUP(MAP_ROUTE123), MAP_NUM(MAP_ROUTE123), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_124] = {MAP_GROUP(MAP_ROUTE124), MAP_NUM(MAP_ROUTE124), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_125] = {MAP_GROUP(MAP_ROUTE125), MAP_NUM(MAP_ROUTE125), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_126] = {MAP_GROUP(MAP_ROUTE126), MAP_NUM(MAP_ROUTE126), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_127] = {MAP_GROUP(MAP_ROUTE127), MAP_NUM(MAP_ROUTE127), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_128] = {MAP_GROUP(MAP_ROUTE128), MAP_NUM(MAP_ROUTE128), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_129] = {MAP_GROUP(MAP_ROUTE129), MAP_NUM(MAP_ROUTE129), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_130] = {MAP_GROUP(MAP_ROUTE130), MAP_NUM(MAP_ROUTE130), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_131] = {MAP_GROUP(MAP_ROUTE131), MAP_NUM(MAP_ROUTE131), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_132] = {MAP_GROUP(MAP_ROUTE132), MAP_NUM(MAP_ROUTE132), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_133] = {MAP_GROUP(MAP_ROUTE133), MAP_NUM(MAP_ROUTE133), HEAL_LOCATION_NONE},
    [MAPSEC_ROUTE_134] = {MAP_GROUP(MAP_ROUTE134), MAP_NUM(MAP_ROUTE134), HEAL_LOCATION_NONE},
};

static const u8 *const sEverGrandeCityNames[] =
{
    gText_PokemonLeague,
    gText_PokemonCenter
};

static const struct MultiNameFlyDest sMultiNameFlyDestinations[] =
{
    {
        .name = sEverGrandeCityNames,
        .mapSecId = MAPSEC_EVER_GRANDE_CITY,
        .flag = FLAG_LANDMARK_POKEMON_LEAGUE
    }
};

static const struct BgTemplate sFlyMapBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1
    },
    {
        .bg = 2,
        .charBaseIndex = 2,
        .mapBaseIndex = 28,
        .screenSize = 2,
        .paletteMode = 1,
        .priority = 2
    }
};

static const struct WindowTemplate sFlyMapWindowTemplates[] =
{
    [WIN_MAPSEC_NAME] = {
        .bg = 0,
        .tilemapLeft = 17,
        .tilemapTop = 17,
        .width = 12,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x01
    },
    [WIN_MAPSEC_NAME_TALL] = {
        .bg = 0,
        .tilemapLeft = 17,
        .tilemapTop = 15,
        .width = 12,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x19
    },
    [WIN_FLY_TO_WHERE] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 18,
        .width = 14,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x49
    },
    DUMMY_WIN_TEMPLATE
};

static const struct SpritePalette sFlyTargetIconsSpritePalette =
{
    .data = sFlyTargetIcons_Pal,
    .tag = TAG_FLY_ICON
};

static const u16 sRedOutlineFlyDestinations[][2] =
{
    {
        FLAG_LANDMARK_BATTLE_FRONTIER,
        MAPSEC_BATTLE_FRONTIER
    },
    {
        -1,
        MAPSEC_NONE
    }
};

static const struct OamData sFlyDestIcon_OamData =
{
    .shape = SPRITE_SHAPE(8x8),
    .size = SPRITE_SIZE(8x8),
    .priority = 2
};

static const union AnimCmd sFlyDestIcon_Anim_8x8CanFly[] =
{
    ANIMCMD_FRAME( 0, 5),
    ANIMCMD_END
};

static const union AnimCmd sFlyDestIcon_Anim_16x8CanFly[] =
{
    ANIMCMD_FRAME( 1, 5),
    ANIMCMD_END
};

static const union AnimCmd sFlyDestIcon_Anim_8x16CanFly[] =
{
    ANIMCMD_FRAME( 3, 5),
    ANIMCMD_END
};

static const union AnimCmd sFlyDestIcon_Anim_8x8CantFly[] =
{
    ANIMCMD_FRAME( 5, 5),
    ANIMCMD_END
};

static const union AnimCmd sFlyDestIcon_Anim_16x8CantFly[] =
{
    ANIMCMD_FRAME( 6, 5),
    ANIMCMD_END
};

static const union AnimCmd sFlyDestIcon_Anim_8x16CantFly[] =
{
    ANIMCMD_FRAME( 8, 5),
    ANIMCMD_END
};

// Only used by Battle Frontier
static const union AnimCmd sFlyDestIcon_Anim_RedOutline[] =
{
    ANIMCMD_FRAME(10, 5),
    ANIMCMD_END
};

static const union AnimCmd *const sFlyDestIcon_Anims[] =
{
    [SPRITE_SHAPE(8x8)]       = sFlyDestIcon_Anim_8x8CanFly,
    [SPRITE_SHAPE(16x8)]      = sFlyDestIcon_Anim_16x8CanFly,
    [SPRITE_SHAPE(8x16)]      = sFlyDestIcon_Anim_8x16CanFly,
    [SPRITE_SHAPE(8x8)  + 3]  = sFlyDestIcon_Anim_8x8CantFly,
    [SPRITE_SHAPE(16x8) + 3]  = sFlyDestIcon_Anim_16x8CantFly,
    [SPRITE_SHAPE(8x16) + 3]  = sFlyDestIcon_Anim_8x16CantFly,
    [FLYDESTICON_RED_OUTLINE] = sFlyDestIcon_Anim_RedOutline
};

static const struct SpriteTemplate sFlyDestIconSpriteTemplate =
{
    .tileTag = TAG_FLY_ICON,
    .paletteTag = TAG_FLY_ICON,
    .oam = &sFlyDestIcon_OamData,
    .anims = sFlyDestIcon_Anims,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

void InitRegionMap(struct RegionMap *regionMap, bool8 zoomed)
{
    InitRegionMapData(regionMap, NULL, zoomed);
    while (LoadRegionMapGfx());
}

void InitRegionMapData(struct RegionMap *regionMap, const struct BgTemplate *template, bool8 zoomed)
{
    sRegionMap = regionMap;
    sRegionMap->initStep = 0;
    sRegionMap->zoomed = zoomed;
    sRegionMap->inputCallback = zoomed == TRUE ? ProcessRegionMapInput_Zoomed : ProcessRegionMapInput_Full;
    if (template != NULL)
    {
        sRegionMap->bgNum = template->bg;
        sRegionMap->charBaseIdx = template->charBaseIndex;
        sRegionMap->mapBaseIdx = template->mapBaseIndex;
        sRegionMap->bgManaged = TRUE;
    }
    else
    {
        sRegionMap->bgNum = 2;
        sRegionMap->charBaseIdx = 2;
        sRegionMap->mapBaseIdx = 28;
        sRegionMap->bgManaged = FALSE;
    }
}

void ShowRegionMapForPokedexAreaScreen(struct RegionMap *regionMap)
{
    sRegionMap = regionMap;
    InitMapBasedOnPlayerLocation();
    sRegionMap->playerIconSpritePosX = sRegionMap->cursorPosX;
    sRegionMap->playerIconSpritePosY = sRegionMap->cursorPosY;
}

bool8 LoadRegionMapGfx(void)
{
    switch (sRegionMap->initStep)
    {
    case 0:
        if (sRegionMap->bgManaged)
            DecompressAndCopyTileDataToVram(sRegionMap->bgNum, sRegionMapBg_GfxLZ, 0, 0, 0);
        else
            LZ77UnCompVram(sRegionMapBg_GfxLZ, (u16 *)BG_CHAR_ADDR(2));
        break;
    case 1:
        if (sRegionMap->bgManaged)
        {
            if (!FreeTempTileDataBuffersIfPossible())
                DecompressAndCopyTileDataToVram(sRegionMap->bgNum, sRegionMapBg_TilemapLZ, 0, 0, 1);
        }
        else
        {
            LZ77UnCompVram(sRegionMapBg_TilemapLZ, (u16 *)BG_SCREEN_ADDR(28));
        }
        break;
    case 2:
        if (!FreeTempTileDataBuffersIfPossible())
            LoadPalette(sRegionMapBg_Pal, BG_PLTT_ID(7), 3 * PLTT_SIZE_4BPP);
        break;
    case 3:
        LZ77UnCompWram(sRegionMapCursorSmallGfxLZ, sRegionMap->cursorSmallImage);
        break;
    case 4:
        LZ77UnCompWram(sRegionMapCursorLargeGfxLZ, sRegionMap->cursorLargeImage);
        break;
    case 5:
        InitMapBasedOnPlayerLocation();
        sRegionMap->playerIconSpritePosX = sRegionMap->cursorPosX;
        sRegionMap->playerIconSpritePosY = sRegionMap->cursorPosY;
        sRegionMap->mapSecId = CorrectSpecialMapSecId_Internal(sRegionMap->mapSecId);
        sRegionMap->mapSecType = GetMapsecType(sRegionMap->mapSecId);
        GetMapName(sRegionMap->mapSecName, sRegionMap->mapSecId, MAP_NAME_LENGTH);
        break;
    case 6:
        if (sRegionMap->zoomed == FALSE)
        {
            CalcZoomScrollParams(0, 0, 0, 0, 0x100, 0x100, 0);
        }
        else
        {
            sRegionMap->scrollX = sRegionMap->cursorPosX * 8 - 0x34;
            sRegionMap->scrollY = sRegionMap->cursorPosY * 8 - 0x44;
            sRegionMap->zoomedCursorPosX = sRegionMap->cursorPosX;
            sRegionMap->zoomedCursorPosY = sRegionMap->cursorPosY;
            CalcZoomScrollParams(sRegionMap->scrollX, sRegionMap->scrollY, 0x38, 0x48, 0x80, 0x80, 0);
        }
        break;
    case 7:
        GetPositionOfCursorWithinMapSec();
        UpdateRegionMapVideoRegs();
        sRegionMap->cursorSprite = NULL;
        sRegionMap->playerIconSprite = NULL;
        sRegionMap->cursorMovementFrameCounter = 0;
        sRegionMap->blinkPlayerIcon = FALSE;
        if (sRegionMap->bgManaged)
        {
            SetBgAttribute(sRegionMap->bgNum, BG_ATTR_SCREENSIZE, 2);
            SetBgAttribute(sRegionMap->bgNum, BG_ATTR_CHARBASEINDEX, sRegionMap->charBaseIdx);
            SetBgAttribute(sRegionMap->bgNum, BG_ATTR_MAPBASEINDEX, sRegionMap->mapBaseIdx);
            SetBgAttribute(sRegionMap->bgNum, BG_ATTR_WRAPAROUND, 1);
            SetBgAttribute(sRegionMap->bgNum, BG_ATTR_PALETTEMODE, 1);
        }
        sRegionMap->initStep++;
        return FALSE;
    default:
        return FALSE;
    }
    sRegionMap->initStep++;
    return TRUE;
}

void BlendRegionMap(u16 color, u32 coeff)
{
    BlendPalettes(0x380, coeff, color);
    CpuCopy16(&gPlttBufferFaded[BG_PLTT_ID(7)], &gPlttBufferUnfaded[BG_PLTT_ID(7)], 3 * PLTT_SIZE_4BPP);
}

void FreeRegionMapIconResources(void)
{
    if (sRegionMap->cursorSprite != NULL)
    {
        DestroySprite(sRegionMap->cursorSprite);
        FreeSpriteTilesByTag(sRegionMap->cursorTileTag);
        FreeSpritePaletteByTag(sRegionMap->cursorPaletteTag);
    }
    if (sRegionMap->playerIconSprite != NULL)
    {
        DestroySprite(sRegionMap->playerIconSprite);
        FreeSpriteTilesByTag(sRegionMap->playerIconTileTag);
        FreeSpritePaletteByTag(sRegionMap->playerIconPaletteTag);
    }
}

u8 DoRegionMapInputCallback(void)
{
    return sRegionMap->inputCallback();
}

static u8 ProcessRegionMapInput_Full(void)
{
    u8 input;

    input = MAP_INPUT_NONE;
    sRegionMap->cursorDeltaX = 0;
    sRegionMap->cursorDeltaY = 0;
    if (JOY_HELD(DPAD_UP) && sRegionMap->cursorPosY > MAPCURSOR_Y_MIN)
    {
        sRegionMap->cursorDeltaY = -1;
        input = MAP_INPUT_MOVE_START;
    }
    if (JOY_HELD(DPAD_DOWN) && sRegionMap->cursorPosY < MAPCURSOR_Y_MAX)
    {
        sRegionMap->cursorDeltaY = +1;
        input = MAP_INPUT_MOVE_START;
    }
    if (JOY_HELD(DPAD_LEFT) && sRegionMap->cursorPosX > MAPCURSOR_X_MIN)
    {
        sRegionMap->cursorDeltaX = -1;
        input = MAP_INPUT_MOVE_START;
    }
    if (JOY_HELD(DPAD_RIGHT) && sRegionMap->cursorPosX < MAPCURSOR_X_MAX)
    {
        sRegionMap->cursorDeltaX = +1;
        input = MAP_INPUT_MOVE_START;
    }
    if (JOY_NEW(A_BUTTON))
    {
        input = MAP_INPUT_A_BUTTON;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        input = MAP_INPUT_B_BUTTON;
    }
    else if (JOY_NEW(R_BUTTON))
    {
        input = MAP_INPUT_R_BUTTON;
    }
    if (input == MAP_INPUT_MOVE_START)
    {
        sRegionMap->cursorMovementFrameCounter = 4;
        sRegionMap->inputCallback = MoveRegionMapCursor_Full;
    }
    return input;
}

static u8 MoveRegionMapCursor_Full(void)
{
    u16 mapSecId;

    if (sRegionMap->cursorMovementFrameCounter != 0)
        return MAP_INPUT_MOVE_CONT;

    if (sRegionMap->cursorDeltaX > 0)
    {
        sRegionMap->cursorPosX++;
    }
    if (sRegionMap->cursorDeltaX < 0)
    {
        sRegionMap->cursorPosX--;
    }
    if (sRegionMap->cursorDeltaY > 0)
    {
        sRegionMap->cursorPosY++;
    }
    if (sRegionMap->cursorDeltaY < 0)
    {
        sRegionMap->cursorPosY--;
    }

    mapSecId = GetMapSecIdAt(sRegionMap->cursorPosX, sRegionMap->cursorPosY);
    sRegionMap->mapSecType = GetMapsecType(mapSecId);
    if (mapSecId != sRegionMap->mapSecId)
    {
        sRegionMap->mapSecId = mapSecId;
        GetMapName(sRegionMap->mapSecName, sRegionMap->mapSecId, MAP_NAME_LENGTH);
    }
    GetPositionOfCursorWithinMapSec();
    sRegionMap->inputCallback = ProcessRegionMapInput_Full;
    return MAP_INPUT_MOVE_END;
}

static u8 ProcessRegionMapInput_Zoomed(void)
{
    u8 input;

    input = MAP_INPUT_NONE;
    sRegionMap->zoomedCursorDeltaX = 0;
    sRegionMap->zoomedCursorDeltaY = 0;
    if (JOY_HELD(DPAD_UP) && sRegionMap->scrollY > -0x34)
    {
        sRegionMap->zoomedCursorDeltaY = -1;
        input = MAP_INPUT_MOVE_START;
    }
    if (JOY_HELD(DPAD_DOWN) && sRegionMap->scrollY < 0x3c)
    {
        sRegionMap->zoomedCursorDeltaY = +1;
        input = MAP_INPUT_MOVE_START;
    }
    if (JOY_HELD(DPAD_LEFT) && sRegionMap->scrollX > -0x2c)
    {
        sRegionMap->zoomedCursorDeltaX = -1;
        input = MAP_INPUT_MOVE_START;
    }
    if (JOY_HELD(DPAD_RIGHT) && sRegionMap->scrollX < 0xac)
    {
        sRegionMap->zoomedCursorDeltaX = +1;
        input = MAP_INPUT_MOVE_START;
    }
    if (JOY_NEW(A_BUTTON))
    {
        input = MAP_INPUT_A_BUTTON;
    }
    if (JOY_NEW(B_BUTTON))
    {
        input = MAP_INPUT_B_BUTTON;
    }
    else if (JOY_NEW(R_BUTTON))
    {
        input = MAP_INPUT_R_BUTTON;
    }
    if (input == MAP_INPUT_MOVE_START)
    {
        sRegionMap->inputCallback = MoveRegionMapCursor_Zoomed;
        sRegionMap->zoomedCursorMovementFrameCounter = 0;
    }
    return input;
}

static u8 MoveRegionMapCursor_Zoomed(void)
{
    u16 x;
    u16 y;
    u16 mapSecId;

    sRegionMap->scrollY += sRegionMap->zoomedCursorDeltaY;
    sRegionMap->scrollX += sRegionMap->zoomedCursorDeltaX;
    RegionMap_SetBG2XAndBG2Y(sRegionMap->scrollX, sRegionMap->scrollY);
    sRegionMap->zoomedCursorMovementFrameCounter++;
    if (sRegionMap->zoomedCursorMovementFrameCounter == 8)
    {
        x = (sRegionMap->scrollX + 0x2c) / 8 + 1;
        y = (sRegionMap->scrollY + 0x34) / 8 + 2;
        if (x != sRegionMap->zoomedCursorPosX || y != sRegionMap->zoomedCursorPosY)
        {
            sRegionMap->zoomedCursorPosX = x;
            sRegionMap->zoomedCursorPosY = y;
            mapSecId = GetMapSecIdAt(x, y);
            sRegionMap->mapSecType = GetMapsecType(mapSecId);
            if (mapSecId != sRegionMap->mapSecId)
            {
                sRegionMap->mapSecId = mapSecId;
                GetMapName(sRegionMap->mapSecName, sRegionMap->mapSecId, MAP_NAME_LENGTH);
            }
            GetPositionOfCursorWithinMapSec();
        }
        sRegionMap->zoomedCursorMovementFrameCounter = 0;
        sRegionMap->inputCallback = ProcessRegionMapInput_Zoomed;
        return MAP_INPUT_MOVE_END;
    }
    return MAP_INPUT_MOVE_CONT;
}

void SetRegionMapDataForZoom(void)
{
    if (sRegionMap->zoomed == FALSE)
    {
        sRegionMap->scrollY = 0;
        sRegionMap->scrollX = 0;
        sRegionMap->unk_040 = 0;
        sRegionMap->unk_03c = 0;
        sRegionMap->unk_060 = sRegionMap->cursorPosX * 8 - 0x34;
        sRegionMap->unk_062 = sRegionMap->cursorPosY * 8 - 0x44;
        sRegionMap->unk_044 = (sRegionMap->unk_060 << 8) / 16;
        sRegionMap->unk_048 = (sRegionMap->unk_062 << 8) / 16;
        sRegionMap->zoomedCursorPosX = sRegionMap->cursorPosX;
        sRegionMap->zoomedCursorPosY = sRegionMap->cursorPosY;
        sRegionMap->unk_04c = 0x10000;
        sRegionMap->unk_050 = -0x800;
    }
    else
    {
        sRegionMap->unk_03c = sRegionMap->scrollX * 0x100;
        sRegionMap->unk_040 = sRegionMap->scrollY * 0x100;
        sRegionMap->unk_060 = 0;
        sRegionMap->unk_062 = 0;
        sRegionMap->unk_044 = -(sRegionMap->unk_03c / 16);
        sRegionMap->unk_048 = -(sRegionMap->unk_040 / 16);
        sRegionMap->cursorPosX = sRegionMap->zoomedCursorPosX;
        sRegionMap->cursorPosY = sRegionMap->zoomedCursorPosY;
        sRegionMap->unk_04c = 0x8000;
        sRegionMap->unk_050 = 0x800;
    }
    sRegionMap->unk_06e = 0;
    FreeRegionMapCursorSprite();
    HideRegionMapPlayerIcon();
}

bool8 UpdateRegionMapZoom(void)
{
    bool8 retVal;

    if (sRegionMap->unk_06e >= 16)
    {
        return FALSE;
    }
    sRegionMap->unk_06e++;
    if (sRegionMap->unk_06e == 16)
    {
        sRegionMap->unk_044 = 0;
        sRegionMap->unk_048 = 0;
        sRegionMap->scrollX = sRegionMap->unk_060;
        sRegionMap->scrollY = sRegionMap->unk_062;
        sRegionMap->unk_04c = (sRegionMap->zoomed == FALSE) ? (128 << 8) : (256 << 8);
        sRegionMap->zoomed = !sRegionMap->zoomed;
        sRegionMap->inputCallback = (sRegionMap->zoomed == FALSE) ? ProcessRegionMapInput_Full : ProcessRegionMapInput_Zoomed;
        CreateRegionMapCursor(sRegionMap->cursorTileTag, sRegionMap->cursorPaletteTag);
        UnhideRegionMapPlayerIcon();
        retVal = FALSE;
    }
    else
    {
        sRegionMap->unk_03c += sRegionMap->unk_044;
        sRegionMap->unk_040 += sRegionMap->unk_048;
        sRegionMap->scrollX = sRegionMap->unk_03c >> 8;
        sRegionMap->scrollY = sRegionMap->unk_040 >> 8;
        sRegionMap->unk_04c += sRegionMap->unk_050;
        if ((sRegionMap->unk_044 < 0 && sRegionMap->scrollX < sRegionMap->unk_060) || (sRegionMap->unk_044 > 0 && sRegionMap->scrollX > sRegionMap->unk_060))
        {
            sRegionMap->scrollX = sRegionMap->unk_060;
            sRegionMap->unk_044 = 0;
        }
        if ((sRegionMap->unk_048 < 0 && sRegionMap->scrollY < sRegionMap->unk_062) || (sRegionMap->unk_048 > 0 && sRegionMap->scrollY > sRegionMap->unk_062))
        {
            sRegionMap->scrollY = sRegionMap->unk_062;
            sRegionMap->unk_048 = 0;
        }
        if (sRegionMap->zoomed == FALSE)
        {
            if (sRegionMap->unk_04c < (128 << 8))
            {
                sRegionMap->unk_04c = (128 << 8);
                sRegionMap->unk_050 = 0;
            }
        }
        else
        {
            if (sRegionMap->unk_04c > (256 << 8))
            {
                sRegionMap->unk_04c = (256 << 8);
                sRegionMap->unk_050 = 0;
            }
        }
        retVal = TRUE;
    }
    CalcZoomScrollParams(sRegionMap->scrollX, sRegionMap->scrollY, 0x38, 0x48, sRegionMap->unk_04c >> 8, sRegionMap->unk_04c >> 8, 0);
    return retVal;
}

static void CalcZoomScrollParams(s16 scrollX, s16 scrollY, s16 c, s16 d, u16 e, u16 f, u8 rotation)
{
    s32 var1;
    s32 var2;
    s32 var3;
    s32 var4;

    sRegionMap->bg2pa = e * gSineTable[rotation + 64] >> 8;
    sRegionMap->bg2pc = e * -gSineTable[rotation] >> 8;
    sRegionMap->bg2pb = f * gSineTable[rotation] >> 8;
    sRegionMap->bg2pd = f * gSineTable[rotation + 64] >> 8;

    var1 = (scrollX << 8) + (c << 8);
    var2 = d * sRegionMap->bg2pb + sRegionMap->bg2pa * c;
    sRegionMap->bg2x = var1 - var2;

    var3 = (scrollY << 8) + (d << 8);
    var4 = sRegionMap->bg2pd * d + sRegionMap->bg2pc * c;
    sRegionMap->bg2y = var3 - var4;

    sRegionMap->needUpdateVideoRegs = TRUE;
}

static void RegionMap_SetBG2XAndBG2Y(s16 x, s16 y)
{
    sRegionMap->bg2x = (x << 8) + 0x1c00;
    sRegionMap->bg2y = (y << 8) + 0x2400;
    sRegionMap->needUpdateVideoRegs = TRUE;
}

void UpdateRegionMapVideoRegs(void)
{
    if (sRegionMap->needUpdateVideoRegs)
    {
        SetGpuReg(REG_OFFSET_BG2PA, sRegionMap->bg2pa);
        SetGpuReg(REG_OFFSET_BG2PB, sRegionMap->bg2pb);
        SetGpuReg(REG_OFFSET_BG2PC, sRegionMap->bg2pc);
        SetGpuReg(REG_OFFSET_BG2PD, sRegionMap->bg2pd);
        SetGpuReg(REG_OFFSET_BG2X_L, sRegionMap->bg2x);
        SetGpuReg(REG_OFFSET_BG2X_H, sRegionMap->bg2x >> 16);
        SetGpuReg(REG_OFFSET_BG2Y_L, sRegionMap->bg2y);
        SetGpuReg(REG_OFFSET_BG2Y_H, sRegionMap->bg2y >> 16);
        sRegionMap->needUpdateVideoRegs = FALSE;
    }
}

void PokedexAreaScreen_UpdateRegionMapVariablesAndVideoRegs(s16 x, s16 y)
{
    CalcZoomScrollParams(x, y, 0x38, 0x48, 0x100, 0x100, 0);
    UpdateRegionMapVideoRegs();
    if (sRegionMap->playerIconSprite != NULL)
    {
        sRegionMap->playerIconSprite->x2 = -x;
        sRegionMap->playerIconSprite->y2 = -y;
    }
}

static u16 GetMapSecIdAt(u16 x, u16 y)
{
    if (y < MAPCURSOR_Y_MIN || y > MAPCURSOR_Y_MAX || x < MAPCURSOR_X_MIN || x > MAPCURSOR_X_MAX)
    {
        return MAPSEC_NONE;
    }
    y -= MAPCURSOR_Y_MIN;
    x -= MAPCURSOR_X_MIN;
    return sRegionMap_MapSectionLayout[y][x];
}

static void InitMapBasedOnPlayerLocation(void)
{
    const struct MapHeader *mapHeader;
    u16 mapWidth;
    u16 mapHeight;
    u16 x;
    u16 y;
    u16 dimensionScale;
    u16 xOnMap;
    struct WarpData *warp;

    if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(MAP_SS_TIDAL_CORRIDOR)
        && (gSaveBlock1Ptr->location.mapNum == MAP_NUM(MAP_SS_TIDAL_CORRIDOR)
            || gSaveBlock1Ptr->location.mapNum == MAP_NUM(MAP_SS_TIDAL_LOWER_DECK)
            || gSaveBlock1Ptr->location.mapNum == MAP_NUM(MAP_SS_TIDAL_ROOMS)))
    {
        RegionMap_InitializeStateBasedOnSSTidalLocation();
        return;
    }

    switch (GetMapTypeByGroupAndId(gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum))
    {
    default:
    case MAP_TYPE_TOWN:
    case MAP_TYPE_CITY:
    case MAP_TYPE_ROUTE:
    case MAP_TYPE_UNDERWATER:
    case MAP_TYPE_OCEAN_ROUTE:
        sRegionMap->mapSecId = gMapHeader.regionMapSectionId;
        sRegionMap->playerIsInCave = FALSE;
        mapWidth = gMapHeader.mapLayout->width;
        mapHeight = gMapHeader.mapLayout->height;
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
        //if (sRegionMap->mapSecId == MAPSEC_UNDERWATER_SEAFLOOR_CAVERN || sRegionMap->mapSecId == MAPSEC_UNDERWATER_MARINE_CAVE)
        //    sRegionMap->playerIsInCave = TRUE;
        break;
    case MAP_TYPE_UNDERGROUND:
    case MAP_TYPE_UNKNOWN:
        if (gMapHeader.allowEscaping)
        {
            mapHeader = Overworld_GetMapHeaderByGroupAndId(gSaveBlock1Ptr->escapeWarp.mapGroup, gSaveBlock1Ptr->escapeWarp.mapNum);
            sRegionMap->mapSecId = mapHeader->regionMapSectionId;
            sRegionMap->playerIsInCave = TRUE;
            mapWidth = mapHeader->mapLayout->width;
            mapHeight = mapHeader->mapLayout->height;
            x = gSaveBlock1Ptr->escapeWarp.x;
            y = gSaveBlock1Ptr->escapeWarp.y;
        }
        else
        {
            sRegionMap->mapSecId = gMapHeader.regionMapSectionId;
            sRegionMap->playerIsInCave = TRUE;
            mapWidth = 1;
            mapHeight = 1;
            x = 1;
            y = 1;
        }
        break;
    case MAP_TYPE_SECRET_BASE:
        mapHeader = Overworld_GetMapHeaderByGroupAndId((u16)gSaveBlock1Ptr->dynamicWarp.mapGroup, (u16)gSaveBlock1Ptr->dynamicWarp.mapNum);
        sRegionMap->mapSecId = mapHeader->regionMapSectionId;
        sRegionMap->playerIsInCave = TRUE;
        mapWidth = mapHeader->mapLayout->width;
        mapHeight = mapHeader->mapLayout->height;
        x = gSaveBlock1Ptr->dynamicWarp.x;
        y = gSaveBlock1Ptr->dynamicWarp.y;
        break;
    case MAP_TYPE_INDOOR:
        sRegionMap->mapSecId = gMapHeader.regionMapSectionId;
        if (sRegionMap->mapSecId != MAPSEC_DYNAMIC)
        {
            warp = &gSaveBlock1Ptr->escapeWarp;
            mapHeader = Overworld_GetMapHeaderByGroupAndId(warp->mapGroup, warp->mapNum);
        }
        else
        {
            warp = &gSaveBlock1Ptr->dynamicWarp;
            mapHeader = Overworld_GetMapHeaderByGroupAndId(warp->mapGroup, warp->mapNum);
            sRegionMap->mapSecId = mapHeader->regionMapSectionId;
        }

        if (IsPlayerInAquaHideout(sRegionMap->mapSecId))
            sRegionMap->playerIsInCave = TRUE;
        else
            sRegionMap->playerIsInCave = FALSE;

        mapWidth = mapHeader->mapLayout->width;
        mapHeight = mapHeader->mapLayout->height;
        x = warp->x;
        y = warp->y;
        break;
    }

    xOnMap = x;

    dimensionScale = mapWidth / gRegionMapEntries[sRegionMap->mapSecId].width;
    if (dimensionScale == 0)
    {
        dimensionScale = 1;
    }
    x /= dimensionScale;
    if (x >= gRegionMapEntries[sRegionMap->mapSecId].width)
    {
        x = gRegionMapEntries[sRegionMap->mapSecId].width - 1;
    }

    dimensionScale = mapHeight / gRegionMapEntries[sRegionMap->mapSecId].height;
    if (dimensionScale == 0)
    {
        dimensionScale = 1;
    }
    y /= dimensionScale;
    if (y >= gRegionMapEntries[sRegionMap->mapSecId].height)
    {
        y = gRegionMapEntries[sRegionMap->mapSecId].height - 1;
    }

    switch (sRegionMap->mapSecId)
    {
    case MAPSEC_ROUTE_114:
        if (y != 0)
            x = 0;
        break;
    case MAPSEC_ROUTE_126:
    case MAPSEC_UNDERWATER_126:
        x = 0;
        if (gSaveBlock1Ptr->pos.x > 32)
            x++;
        if (gSaveBlock1Ptr->pos.x > 51)
            x++;

        y = 0;
        if (gSaveBlock1Ptr->pos.y > 37)
            y++;
        if (gSaveBlock1Ptr->pos.y > 56)
            y++;
        break;
    case MAPSEC_ROUTE_121:
        x = 0;
        if (xOnMap > 14)
            x++;
        if (xOnMap > 28)
            x++;
        if (xOnMap > 54)
            x++;
        break;
//    case MAPSEC_UNDERWATER_MARINE_CAVE:
//        GetMarineCaveCoords(&sRegionMap->cursorPosX, &sRegionMap->cursorPosY);
//        return;
    }
    sRegionMap->cursorPosX = gRegionMapEntries[sRegionMap->mapSecId].x + x + MAPCURSOR_X_MIN;
    sRegionMap->cursorPosY = gRegionMapEntries[sRegionMap->mapSecId].y + y + MAPCURSOR_Y_MIN;
}

static void RegionMap_InitializeStateBasedOnSSTidalLocation(void)
{
    u16 y;
    u16 x;
    s8 mapGroup;
    s8 mapNum;
    u16 dimensionScale;
    s16 xOnMap;
    s16 yOnMap;
    const struct MapHeader *mapHeader;

    y = 0;
    x = 0;
    switch (GetSSTidalLocation(&mapGroup, &mapNum, &xOnMap, &yOnMap))
    {
    case SS_TIDAL_LOCATION_SLATEPORT:
        sRegionMap->mapSecId = MAPSEC_SLATEPORT_CITY;
        break;
    case SS_TIDAL_LOCATION_LILYCOVE:
        sRegionMap->mapSecId = MAPSEC_LILYCOVE_CITY;
        break;
    case SS_TIDAL_LOCATION_ROUTE124:
        sRegionMap->mapSecId = MAPSEC_ROUTE_124;
        break;
    case SS_TIDAL_LOCATION_ROUTE131:
        sRegionMap->mapSecId = MAPSEC_ROUTE_131;
        break;
    default:
    case SS_TIDAL_LOCATION_CURRENTS:
        mapHeader = Overworld_GetMapHeaderByGroupAndId(mapGroup, mapNum);

        sRegionMap->mapSecId = mapHeader->regionMapSectionId;
        dimensionScale = mapHeader->mapLayout->width / gRegionMapEntries[sRegionMap->mapSecId].width;
        if (dimensionScale == 0)
            dimensionScale = 1;
        x = xOnMap / dimensionScale;
        if (x >= gRegionMapEntries[sRegionMap->mapSecId].width)
            x = gRegionMapEntries[sRegionMap->mapSecId].width - 1;

        dimensionScale = mapHeader->mapLayout->height / gRegionMapEntries[sRegionMap->mapSecId].height;
        if (dimensionScale == 0)
            dimensionScale = 1;
        y = yOnMap / dimensionScale;
        if (y >= gRegionMapEntries[sRegionMap->mapSecId].height)
            y = gRegionMapEntries[sRegionMap->mapSecId].height - 1;
        break;
    }
    sRegionMap->playerIsInCave = FALSE;
    sRegionMap->cursorPosX = gRegionMapEntries[sRegionMap->mapSecId].x + x + MAPCURSOR_X_MIN;
    sRegionMap->cursorPosY = gRegionMapEntries[sRegionMap->mapSecId].y + y + MAPCURSOR_Y_MIN;
}

static u8 GetMapsecType(u16 mapSecId)
{
    switch (mapSecId)
    {
    case MAPSEC_NONE:
        return MAPSECTYPE_NONE;
    case MAPSEC_LITTLEROOT_TOWN:
        return FlagGet(FLAG_VISITED_LITTLEROOT_TOWN) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_OLDALE_TOWN:
        return FlagGet(FLAG_VISITED_OLDALE_TOWN) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_DEWFORD_TOWN:
        return FlagGet(FLAG_VISITED_DEWFORD_TOWN) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_LAVARIDGE_TOWN:
        return FlagGet(FLAG_VISITED_LAVARIDGE_TOWN) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_FALLARBOR_TOWN:
        return FlagGet(FLAG_VISITED_FALLARBOR_TOWN) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_VERDANTURF_TOWN:
        return FlagGet(FLAG_VISITED_VERDANTURF_TOWN) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_PACIFIDLOG_TOWN:
        return FlagGet(FLAG_VISITED_PACIFIDLOG_TOWN) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_PETALBURG_CITY:
        return FlagGet(FLAG_VISITED_PETALBURG_CITY) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_SLATEPORT_CITY:
        return FlagGet(FLAG_VISITED_SLATEPORT_CITY) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_MAUVILLE_CITY:
        return FlagGet(FLAG_VISITED_MAUVILLE_CITY) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_RUSTBORO_CITY:
        return FlagGet(FLAG_VISITED_RUSTBORO_CITY) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_FORTREE_CITY:
        return FlagGet(FLAG_VISITED_FORTREE_CITY) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_LILYCOVE_CITY:
        return FlagGet(FLAG_VISITED_LILYCOVE_CITY) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_MOSSDEEP_CITY:
        return FlagGet(FLAG_VISITED_MOSSDEEP_CITY) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_SOOTOPOLIS_CITY:
        return FlagGet(FLAG_VISITED_SOOTOPOLIS_CITY) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_EVER_GRANDE_CITY:
        return FlagGet(FLAG_VISITED_EVER_GRANDE_CITY) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
    case MAPSEC_BATTLE_FRONTIER:
        return FlagGet(FLAG_LANDMARK_BATTLE_FRONTIER) ? MAPSECTYPE_BATTLE_FRONTIER : MAPSECTYPE_NONE;
    case MAPSEC_SOUTHERN_ISLAND:
        return FlagGet(FLAG_LANDMARK_SOUTHERN_ISLAND) ? MAPSECTYPE_ROUTE : MAPSECTYPE_NONE;
    default:
        return MAPSECTYPE_ROUTE;
    }
}

u16 GetRegionMapSecIdAt(u16 x, u16 y)
{
    return GetMapSecIdAt(x, y);
}

static u16 CorrectSpecialMapSecId_Internal(u16 mapSecId)
{
    u32 i;

    for (i = 0; i < ARRAY_COUNT(sMarineCaveMapSecIds); i++)
    {
        if (sMarineCaveMapSecIds[i] == mapSecId)
        {
            return GetTerraOrMarineCaveMapSecId();
        }
    }
    for (i = 0; sRegionMap_SpecialPlaceLocations[i][0] != MAPSEC_NONE; i++)
    {
        if (sRegionMap_SpecialPlaceLocations[i][0] == mapSecId)
        {
            return sRegionMap_SpecialPlaceLocations[i][1];
        }
    }
    return mapSecId;
}

static u16 GetTerraOrMarineCaveMapSecId(void)
{
    s16 idx;

    idx = VarGet(VAR_ABNORMAL_WEATHER_LOCATION) - 1;

    if (idx < 0 || idx > ABNORMAL_WEATHER_LOCATIONS - 1)
        idx = 0;

    return sTerraOrMarineCaveMapSecIds[idx];
}

//static void GetMarineCaveCoords(u16 *x, u16 *y)
//{
//    u16 idx;
//
//    idx = VarGet(VAR_ABNORMAL_WEATHER_LOCATION);
//    if (idx < MARINE_CAVE_LOCATIONS_START || idx > ABNORMAL_WEATHER_LOCATIONS)
//    {
//        idx = MARINE_CAVE_LOCATIONS_START;
//    }
//    idx -= MARINE_CAVE_LOCATIONS_START;
//
//    *x = sMarineCaveLocationCoords[idx].x + MAPCURSOR_X_MIN;
//    *y = sMarineCaveLocationCoords[idx].y + MAPCURSOR_Y_MIN;
//}

// Probably meant to be an "IsPlayerInIndoorDungeon" function, but in practice it only has the one mapsec
// Additionally, because the mapsec doesnt exist in Emerald, this function always returns FALSE
static bool32 IsPlayerInAquaHideout(u8 mapSecId)
{
    u32 i;

    for (i = 0; i < ARRAY_COUNT(sMapSecAquaHideoutOld); i++)
    {
        if (sMapSecAquaHideoutOld[i] == mapSecId)
            return TRUE;
    }
    return FALSE;
}

u16 CorrectSpecialMapSecId(u16 mapSecId)
{
    return CorrectSpecialMapSecId_Internal(mapSecId);
}

static void GetPositionOfCursorWithinMapSec(void)
{
    u16 x;
    u16 y;
    u16 posWithinMapSec;

    if (sRegionMap->mapSecId == MAPSEC_NONE)
    {
        sRegionMap->posWithinMapSec = 0;
        return;
    }
    if (!sRegionMap->zoomed)
    {
        x = sRegionMap->cursorPosX;
        y = sRegionMap->cursorPosY;
    }
    else
    {
        x = sRegionMap->zoomedCursorPosX;
        y = sRegionMap->zoomedCursorPosY;
    }
    posWithinMapSec = 0;
    while (1)
    {
        if (x <= MAPCURSOR_X_MIN)
        {
            if (RegionMap_IsMapSecIdInNextRow(y))
            {
                y--;
                x = MAPCURSOR_X_MAX + 1;
            }
            else
            {
                break;
            }
        }
        else
        {
            x--;
            if (GetMapSecIdAt(x, y) == sRegionMap->mapSecId)
            {
                posWithinMapSec++;
            }
        }
    }
    sRegionMap->posWithinMapSec = posWithinMapSec;
}

static bool8 RegionMap_IsMapSecIdInNextRow(u16 y)
{
    u16 x;

    if (y-- == 0)
    {
        return FALSE;
    }
    for (x = MAPCURSOR_X_MIN; x <= MAPCURSOR_X_MAX; x++)
    {
        if (GetMapSecIdAt(x, y) == sRegionMap->mapSecId)
        {
            return TRUE;
        }
    }
    return FALSE;
}

static void SpriteCB_CursorMapFull(struct Sprite *sprite)
{
    if (sRegionMap->cursorMovementFrameCounter != 0)
    {
        sprite->x += 2 * sRegionMap->cursorDeltaX;
        sprite->y += 2 * sRegionMap->cursorDeltaY;
        sRegionMap->cursorMovementFrameCounter--;
    }
}

static void SpriteCB_CursorMapZoomed(struct Sprite *sprite)
{

}

void CreateRegionMapCursor(u16 tileTag, u16 paletteTag)
{
    u8 spriteId;
    struct SpriteTemplate template;
    struct SpritePalette palette;
    struct SpriteSheet sheet;

    palette = sRegionMapCursorSpritePalette;
    template = sRegionMapCursorSpriteTemplate;
    sheet.tag = tileTag;
    template.tileTag = tileTag;
    sRegionMap->cursorTileTag = tileTag;
    palette.tag = paletteTag;
    template.paletteTag = paletteTag;
    sRegionMap->cursorPaletteTag = paletteTag;
    if (!sRegionMap->zoomed)
    {
        sheet.data = sRegionMap->cursorSmallImage;
        sheet.size = sizeof(sRegionMap->cursorSmallImage);
        template.callback = SpriteCB_CursorMapFull;
    }
    else
    {
        sheet.data = sRegionMap->cursorLargeImage;
        sheet.size = sizeof(sRegionMap->cursorLargeImage);
        template.callback = SpriteCB_CursorMapZoomed;
    }
    LoadSpriteSheet(&sheet);
    LoadSpritePalette(&palette);
    spriteId = CreateSprite(&template, 56, 72, 0);
    if (spriteId != MAX_SPRITES)
    {
        sRegionMap->cursorSprite = &gSprites[spriteId];
        if (sRegionMap->zoomed == TRUE)
        {
            sRegionMap->cursorSprite->oam.size = SPRITE_SIZE(32x32);
            sRegionMap->cursorSprite->x -= 8;
            sRegionMap->cursorSprite->y -= 8;
            StartSpriteAnim(sRegionMap->cursorSprite, 1);
        }
        else
        {
            sRegionMap->cursorSprite->oam.size = SPRITE_SIZE(16x16);
            sRegionMap->cursorSprite->x = 8 * sRegionMap->cursorPosX + 4;
            sRegionMap->cursorSprite->y = 8 * sRegionMap->cursorPosY + 4;
        }
        sRegionMap->cursorSprite->data[1] = 2;
        sRegionMap->cursorSprite->data[2] = OBJ_PLTT_ID(IndexOfSpritePaletteTag(paletteTag)) + 1;
        sRegionMap->cursorSprite->data[3] = TRUE;
    }
}

static void FreeRegionMapCursorSprite(void)
{
    if (sRegionMap->cursorSprite != NULL)
    {
        DestroySprite(sRegionMap->cursorSprite);
        FreeSpriteTilesByTag(sRegionMap->cursorTileTag);
        FreeSpritePaletteByTag(sRegionMap->cursorPaletteTag);
    }
}

static void UNUSED SetUnkCursorSpriteData(void)
{
    sRegionMap->cursorSprite->data[3] = TRUE;
}

static void UNUSED ClearUnkCursorSpriteData(void)
{
    sRegionMap->cursorSprite->data[3] = FALSE;
}

void CreateRegionMapPlayerIcon(u16 tileTag, u16 paletteTag)
{
    u8 spriteId;
    struct SpriteSheet sheet = {sRegionMapPlayerIcon_BrendanGfx, 0x80, tileTag};
    struct SpritePalette palette = {sRegionMapPlayerIcon_BrendanPal, paletteTag};
    struct SpriteTemplate template = {tileTag, paletteTag, &sRegionMapPlayerIconOam, sRegionMapPlayerIconAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy};

    if (IsEventIslandMapSecId(gMapHeader.regionMapSectionId))
    {
        sRegionMap->playerIconSprite = NULL;
        return;
    }
    if (gSaveBlock2Ptr->playerGender == FEMALE)
    {
        sheet.data = sRegionMapPlayerIcon_MayGfx;
        palette.data = sRegionMapPlayerIcon_MayPal;
    }
    LoadSpriteSheet(&sheet);
    LoadSpritePalette(&palette);
    spriteId = CreateSprite(&template, 0, 0, 1);
    sRegionMap->playerIconSprite = &gSprites[spriteId];
    if (!sRegionMap->zoomed)
    {
        sRegionMap->playerIconSprite->x = sRegionMap->playerIconSpritePosX * 8 + 4;
        sRegionMap->playerIconSprite->y = sRegionMap->playerIconSpritePosY * 8 + 4;
        sRegionMap->playerIconSprite->callback = SpriteCB_PlayerIconMapFull;
    }
    else
    {
        sRegionMap->playerIconSprite->x = sRegionMap->playerIconSpritePosX * 16 - 0x30;
        sRegionMap->playerIconSprite->y = sRegionMap->playerIconSpritePosY * 16 - 0x42;
        sRegionMap->playerIconSprite->callback = SpriteCB_PlayerIconMapZoomed;
    }
}

static void HideRegionMapPlayerIcon(void)
{
    if (sRegionMap->playerIconSprite != NULL)
    {
        sRegionMap->playerIconSprite->invisible = TRUE;
        sRegionMap->playerIconSprite->callback = SpriteCallbackDummy;
    }
}

static void UnhideRegionMapPlayerIcon(void)
{
    if (sRegionMap->playerIconSprite != NULL)
    {
        if (sRegionMap->zoomed == TRUE)
        {
            sRegionMap->playerIconSprite->x = sRegionMap->playerIconSpritePosX * 16 - 0x30;
            sRegionMap->playerIconSprite->y = sRegionMap->playerIconSpritePosY * 16 - 0x42;
            sRegionMap->playerIconSprite->callback = SpriteCB_PlayerIconMapZoomed;
            sRegionMap->playerIconSprite->invisible = FALSE;
        }
        else
        {
            sRegionMap->playerIconSprite->x = sRegionMap->playerIconSpritePosX * 8 + 4;
            sRegionMap->playerIconSprite->y = sRegionMap->playerIconSpritePosY * 8 + 4;
            sRegionMap->playerIconSprite->x2 = 0;
            sRegionMap->playerIconSprite->y2 = 0;
            sRegionMap->playerIconSprite->callback = SpriteCB_PlayerIconMapFull;
            sRegionMap->playerIconSprite->invisible = FALSE;
        }
    }
}

#define sY       data[0]
#define sX       data[1]
#define sVisible data[2]
#define sTimer   data[7]

static void SpriteCB_PlayerIconMapZoomed(struct Sprite *sprite)
{
    sprite->x2 = -2 * sRegionMap->scrollX;
    sprite->y2 = -2 * sRegionMap->scrollY;
    sprite->sY = sprite->y + sprite->y2 + sprite->centerToCornerVecY;
    sprite->sX = sprite->x + sprite->x2 + sprite->centerToCornerVecX;
    if (sprite->sY < -8 || sprite->sY > DISPLAY_HEIGHT + 8 || sprite->sX < -8 || sprite->sX > DISPLAY_WIDTH + 8)
        sprite->sVisible = FALSE;
    else
        sprite->sVisible = TRUE;

    if (sprite->sVisible == TRUE)
        SpriteCB_PlayerIcon(sprite);
    else
        sprite->invisible = TRUE;
}

static void SpriteCB_PlayerIconMapFull(struct Sprite *sprite)
{
    SpriteCB_PlayerIcon(sprite);
}

static void SpriteCB_PlayerIcon(struct Sprite *sprite)
{
    if (sRegionMap->blinkPlayerIcon)
    {
        if (++sprite->sTimer > 16)
        {
            sprite->sTimer = 0;
            sprite->invisible = sprite->invisible ? FALSE : TRUE;
        }
    }
    else
    {
        sprite->invisible = FALSE;
    }
}

void TrySetPlayerIconBlink(void)
{
    if (sRegionMap->playerIsInCave)
        sRegionMap->blinkPlayerIcon = TRUE;
}

#undef sY
#undef sX
#undef sVisible
#undef sTimer

u8 *GetMapName(u8 *dest, u16 regionMapId, u16 padLength)
{
    u8 *str;
    u16 i;

    if (regionMapId == MAPSEC_SECRET_BASE)
    {
        str = GetSecretBaseMapName(dest);
    }
    else if (regionMapId < MAPSEC_NONE)
    {
        str = StringCopy(dest, gRegionMapEntries[regionMapId].name);
    }
    else
    {
        if (padLength == 0)
        {
            padLength = 18;
        }
        return StringFill(dest, CHAR_SPACE, padLength);
    }
    if (padLength != 0)
    {
        for (i = str - dest; i < padLength; i++)
        {
            *str++ = CHAR_SPACE;
        }
        *str = EOS;
    }
    return str;
}

// CORNIX SENEX Touched this function to accomodate MAPSEC_DYNAMIC changes
// Goal: Figure out which actual map we're on then determine which shown "map" 
// to return depending on that map's specifications ( metatile type or x,y coords or whatever
// CornixSenex 2.4.25
u8 *GetMapNameGeneric(u8 *dest, u16 mapSecId)
{
	s32 mapGroup, mapNum;
	u32 n;

	mapGroup = gSaveBlock1Ptr->location.mapGroup;
	mapNum   = gSaveBlock1Ptr->location.mapNum;
    switch (mapSecId)
    {
    case MAPSEC_DYNAMIC:
		//Route3 - Cove, Delta, River
		if (mapGroup == MAP_GROUP(MAP_ROUTE3) && mapNum == MAP_NUM(MAP_ROUTE3)) 
		{
			if (IsRoute3RiverDelta(FALSE))
				return StringCopy(dest, sMapName_DELTA_DRACI);
			else  // Default part of map => Cove
				return StringCopy(dest, sMapName_SINVS_CAMELVS);
		}
		//MareWWW - Mare Occidens or River Delta
		if (mapGroup == MAP_GROUP(MAP_MARE_WWW) && mapNum == MAP_NUM(MAP_MARE_WWW))
		{
			n = GetDynamicMapSec_MareWWW(FALSE);
			switch (n)
			{
				case 0:
					return StringCopy(dest, gText_Ferry);
				case 1:
					return StringCopy(dest, sMapName_MARE_OCCIDENS);
				case 2:
					return StringCopy(dest, sMapName_DELTA_DRACI);
				case 3:
					return StringCopy(dest, sMapName_ACTA_ECHONA);
				default:
					return StringCopy(dest, gText_Ferry);
			}

		}
		//Route17
		if (mapGroup == MAP_GROUP(MAP_ROUTE17) && mapNum == MAP_NUM(MAP_ROUTE17))
		{
			n = GetDynamicMapSec_Route17(FALSE);
			switch (n)
			{
				case 0:
					return StringCopy(dest, gText_Ferry);
				case 1:
					return StringCopy(dest, sMapName_LACVS_DRACVS);
				case 2:
					return StringCopy(dest, sMapName_LITVS_LACVS);
				case 3:
					return StringCopy(dest, sMapName_DRACVS_SVPERIOR);
				case 4:
					return StringCopy(dest, sMapName_DRACVS_INFERIOR);
				case 5:
					return StringCopy(dest, sMapName_UPPER_EAST_DRAKE);
				case 6:
					return StringCopy(dest, sMapName_LOWER_EAST_DRAKE);
				case 7:
					return StringCopy(dest, sMapName_UPPER_WEST_DRAKE);
				case 8:
					return StringCopy(dest, sMapName_LOWER_WEST_DRAKE);
				default:
					return StringCopy(dest, gText_Ferry);
			}
		}
		//Lake Ira
		if (mapGroup == MAP_GROUP(MAP_LAKE_IRA) && mapNum == MAP_NUM(MAP_LAKE_IRA))
		{
			n = GetDynamicMapSec_LakeIra(FALSE);
			switch (n)
			{
				case 0:
					return StringCopy(dest, gText_Ferry);
				case 1:
					return StringCopy(dest, sMapName_LACVS_DRACVS);
				case 2:
					return StringCopy(dest, sMapName_LITVS_LACVS);
				case 3:
					return StringCopy(dest, sMapName_SALIX);
				default:
					return StringCopy(dest, gText_Ferry);
			}
		}
		//Lake Ira South
		if (mapGroup == MAP_GROUP(MAP_LAKE_IRA_SOUTH) && mapNum == MAP_NUM(MAP_LAKE_IRA_SOUTH)) 	
		{
			if (IsLakeIraSouthUpperDracoWest(FALSE))
				return StringCopy(dest, sMapName_UPPER_WEST_DRAKE);
			else  // Default part of map => Cove
				return StringCopy(dest, sMapName_LOWER_WEST_DRAKE);
		}

		//Silvan Woods N
		if (mapGroup == MAP_GROUP(MAP_SILVAN_WOODS_N) && mapNum == MAP_NUM(MAP_SILVAN_WOODS_N)) 	
		{		
			if (IsSilvanWoodsNUpperDracoEast(FALSE))
				return StringCopy(dest, sMapName_UPPER_EAST_DRAKE);
			else  // Default part of map => Cove
				return StringCopy(dest, sMapName_LOWER_EAST_DRAKE);
		}
		//Silvan Woods
		if (mapGroup == MAP_GROUP(MAP_SILVAN_WOODS) && mapNum == MAP_NUM(MAP_SILVAN_WOODS))
		{
			n = GetDynamicMapSec_SilvanWoods(FALSE);
			switch (n)
			{
				case 0:
					return StringCopy(dest, gText_Ferry);
				case 1:
					return StringCopy(dest, sMapName_SILVA);
				case 2:
					return StringCopy(dest, sMapName_DRACVS_INFERIOR);
				case 3:
					return StringCopy(dest, sMapName_SILVA_PROFVNDA);
				default:
					return StringCopy(dest, gText_Ferry);
			}
		}
		//MareS6
		if (mapGroup == MAP_GROUP(MAP_MARE_S6) && mapNum == MAP_NUM(MAP_MARE_S6))
		{
			n = GetDynamicMapSec_MareS6(FALSE);
			switch (n)
			{
				case 0:
					return StringCopy(dest, gText_Ferry);
				case 1:
					return StringCopy(dest, sMapName_ISLA_PINEA);
				case 2:
					return StringCopy(dest, sMapName_MARE_OCCIDENS);
				case 3:
					return StringCopy(dest, sMapName_MARE_TROPICVM);
				case 4:
					return StringCopy(dest, sMapName_ACTA_ECHONA);
				default:
					return StringCopy(dest, gText_Ferry);
			}
		}
		//MareWW
		if (mapGroup == MAP_GROUP(MAP_MARE_WW) && mapNum == MAP_NUM(MAP_MARE_WW))
		{
			n = GetDynamicMapSec_MareWW(FALSE);
			switch (n)
			{
				case 0:
					return StringCopy(dest, gText_Ferry);
				case 1:
					return StringCopy(dest, sMapName_DELTA_DRACI);
				case 2:
					return StringCopy(dest, sMapName_MARE_TROPICVM);
				case 3:
					return StringCopy(dest, sMapName_ACTA_ECHONA);
				default:
					return StringCopy(dest, gText_Ferry);
			}
		}
		//City Clara
		if (mapGroup == MAP_GROUP(MAP_CITY_CLARA) && mapNum == MAP_NUM(MAP_CITY_CLARA))
		{
			n = GetDynamicMapSec_CityClara(FALSE);
			switch (n)
			{
				case 0:
					return StringCopy(dest, gText_Ferry);
				case 1:
					return StringCopy(dest, sMapName_ACTA_ECHONA);
				case 2:
					return StringCopy(dest, sMapName_SILVA);
				case 3:
					return StringCopy(dest, sMapName_VIA_FIDELIVM);
				case 4:
					return StringCopy(dest, sMapName_SINVS_CLARVS);
				case 5:
					return StringCopy(dest, sMapName_CASTALIA);
				case 6:
					return StringCopy(dest, sMapName_DELTA_DRACI);
				default:
					return StringCopy(dest, gText_Ferry);
			}
		}
		//MareW
		if (mapGroup == MAP_GROUP(MAP_MARE_W) && mapNum == MAP_NUM(MAP_MARE_W))
		{
			n = GetDynamicMapSec_MareW(FALSE);
			switch (n)
			{
				case 0:
					return StringCopy(dest, gText_Ferry);
				case 1:
					return StringCopy(dest, sMapName_ACTA_ECHONA);
				case 2:
					return StringCopy(dest, sMapName_MARE_INTERNVM);
				case 3:
					return StringCopy(dest, sMapName_MARE_TRANQVILLVM);
				case 4:
					return StringCopy(dest, sMapName_MARE_TROPICVM);
				default:
					return StringCopy(dest, gText_Ferry);
			}
		}
		//SRoute18
		if (mapGroup == MAP_GROUP(MAP_SROUTE18) && mapNum == MAP_NUM(MAP_SROUTE18))
		{
			n = GetDynamicMapSec_SRoute18(FALSE);
			switch (n)
			{
				case 0:
					return StringCopy(dest, gText_Ferry);
				case 1:
					return StringCopy(dest, sMapName_SINVS_PACIFICVS);
				case 2:
					return StringCopy(dest, sMapName_CASTRVM);
				case 3:
					return StringCopy(dest, sMapName_SINVS_CLARVS);
				case 4:
					return StringCopy(dest, sMapName_MARE_INTERNVM);
				default:
					return StringCopy(dest, gText_Ferry);
			}
		}
        //MareS5
		if (mapGroup == MAP_GROUP(MAP_MARE_S5) && mapNum == MAP_NUM(MAP_MARE_S5))
		{
			n = GetDynamicMapSec_MareS5(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_MARE_TROPICVM);
				case 2:
					return StringCopy(dest, sMapName_ACTA_ECHONA);
				case 3:
					return StringCopy(dest, sMapName_ISLA_PINEA);
				default:
					return StringCopy(dest, gText_Ferry);
            }
        }
		//Route4
		if (mapGroup == MAP_GROUP(MAP_ROUTE4) && mapNum == MAP_NUM(MAP_ROUTE4))
		{
			n = GetDynamicMapSec_Route4(FALSE);
			switch (n)
			{
				case 0:
					return StringCopy(dest, gText_Ferry);
				case 1:
					return StringCopy(dest, sMapName_VIA_FIDELIVM);
				case 2:
					return StringCopy(dest, sMapName_VIA_LITORALIS);
				case 3:
					return StringCopy(dest, sMapName_SINVS_PACIFICVS);
				default:
					return StringCopy(dest, gText_Ferry);
			}
		}
		//Route6
		if (mapGroup == MAP_GROUP(MAP_ROUTE6) && mapNum == MAP_NUM(MAP_ROUTE6))
		{
			n = GetDynamicMapSec_Route6(FALSE);
			switch (n)
			{
				case 0:
					return StringCopy(dest, gText_Ferry);
				case 1:
					return StringCopy(dest, sMapName_VIA_LITORALIS);
				case 2:
					return StringCopy(dest, sMapName_VILLA_VIVARIA);
				case 3:
					return StringCopy(dest, sMapName_SINVS_PACIFICVS);
				default:
					return StringCopy(dest, gText_Ferry);
			}
		}
		//Route7
		if (mapGroup == MAP_GROUP(MAP_ROUTE7) && mapNum == MAP_NUM(MAP_ROUTE7))
		{
			n = GetDynamicMapSec_Route7(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_VIA_LITORALIS);
				case 2:
					return StringCopy(dest, sMapName_MARE_INTERNVM);
				case 3:
					return StringCopy(dest, sMapName_MONTES_VIGILIAE);
				case 4:
					return StringCopy(dest, sMapName_VILLA_VALLIS);
				case 5:
					return StringCopy(dest, sMapName_SABINA_NOVA);
				default:
					return StringCopy(dest, gText_Ferry);
			}
		}
		//Route5
		if (mapGroup == MAP_GROUP(MAP_ROUTE5) && mapNum == MAP_NUM(MAP_ROUTE5))
		{
			n = GetDynamicMapSec_Route5(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_VENATOR_MONS);
				case 2:
					return StringCopy(dest, sMapName_VIA_LITORALIS);
				case 3:
					return StringCopy(dest, sMapName_VILLA_VENATORVM);
				default:
					return StringCopy(dest, gText_Ferry);
			}
		}
	  	//Sanjo
		if (mapGroup == MAP_GROUP(MAP_SANJO) && mapNum == MAP_NUM(MAP_SANJO))
		{
			if (IsSanjoSabinaNova(FALSE))
                return StringCopy(dest, sMapName_SABINA_NOVA);
            else
                return StringCopy(dest, sMapName_VIA_MAGNA);
        }
		//Doak Town
		if (mapGroup == MAP_GROUP(MAP_DOAK_TOWN) && mapNum == MAP_NUM(MAP_DOAK_TOWN))
		{
			if (IsDoakTownRobustica(FALSE))
                return StringCopy(dest, sMapName_ROBVSTICA);
            else
                return StringCopy(dest, sMapName_VIA_MAGNA);
        }
		//SRoute19 - Mare Internum or Montes Vigiliae
		if (mapGroup == MAP_GROUP(MAP_SROUTE19) && mapNum == MAP_NUM(MAP_SROUTE19))
		{
			if (IsSRoute19MareInternum(FALSE))
                return StringCopy(dest, sMapName_MARE_INTERNVM);
            else
                return StringCopy(dest, sMapName_MONTES_VIGILIAE);
        }
        //Route9 - Via Saxosa or Montes Vigiliae
		if (mapGroup == MAP_GROUP(MAP_ROUTE9) && mapNum == MAP_NUM(MAP_ROUTE9))
        {
            if (IsRoute9ViaSaxosa(FALSE))
                return StringCopy(dest, sMapName_VIA_SAXOSA);
            else
                return StringCopy(dest, sMapName_MONTES_VIGILIAE);
        }
		//Route16 - Venator Mons or D. Columnaris 
		if (mapGroup == MAP_GROUP(MAP_ROUTE16) && mapNum == MAP_NUM(MAP_ROUTE16))
        {
            if (IsRoute16VenatorMons(FALSE))
                return StringCopy(dest, sMapName_VENATOR_MONS);
            else
                return StringCopy(dest, sMapName_D__COLVMNARIS);
        }
		//Tucson - Via Magna, Oasis, Deseret
		if (mapGroup == MAP_GROUP(MAP_TUCSON) && mapNum == MAP_NUM(MAP_TUCSON))
		{
			n = GetDynamicMapSec_Tucson(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_VIA_MAGNA);
				case 2:
					return StringCopy(dest, sMapName_OASIS);
				case 3:
					return StringCopy(dest, sMapName_DESERET);
				default:
					return StringCopy(dest, gText_Ferry);
			}
		}
		//Pyramids - D Cactorum or Vallis Pyramidis 
		if (mapGroup == MAP_GROUP(MAP_PYRAMIDS) && mapNum == MAP_NUM(MAP_PYRAMIDS))
        {
            if (IsPyramidsDCactorum(FALSE))
                return StringCopy(dest, sMapName_D__CACTORVM);
            else
                return StringCopy(dest, sMapName_VALLIS_PYRAMIDIS);
        }
		//Vegas - Peccatum or Via Magna
		if (mapGroup == MAP_GROUP(MAP_VEGAS) && mapNum == MAP_NUM(MAP_VEGAS))
        {
			n = GetDynamicMapSec_Vegas(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_PECCATVM);
				case 2:
					return StringCopy(dest, sMapName_VIA_MAGNA);
				case 3:
					return StringCopy(dest, sMapName_D__COLVMNARIS);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
        //Elicius Beach - Via Saxosa, Tranquillitas, Montes Vigilliae, Acta Tranquilla, Mare Tranquillum
		if (mapGroup == MAP_GROUP(MAP_ELICIUS_BEACH) && mapNum == MAP_NUM(MAP_ELICIUS_BEACH))
        {
			n = GetDynamicMapSec_EliciusBeach(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_VIA_SAXOSA);
				case 2:
					return StringCopy(dest, sMapName_TRANQVILLITAS);
				case 3:
					return StringCopy(dest, sMapName_MONTES_VIGILIAE);
				case 4:
					return StringCopy(dest, sMapName_ACTA_TRANQVILLA);
				case 5:
					return StringCopy(dest, sMapName_MARE_TRANQVILLVM);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
        //Route10 - Tranquillitas, Acta Tranquilla, Mare Tranquillum
		if (mapGroup == MAP_GROUP(MAP_ROUTE10) && mapNum == MAP_NUM(MAP_ROUTE10))
        {
			n = GetDynamicMapSec_Route10(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_TRANQVILLITAS);
				case 2:
					return StringCopy(dest, sMapName_ACTA_TRANQVILLA);
				case 3:
					return StringCopy(dest, sMapName_MARE_TRANQVILLVM);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//Route11 - Portus Urbis, Acta Tranquilla, Mare Tranquillum
		if (mapGroup == MAP_GROUP(MAP_ROUTE11) && mapNum == MAP_NUM(MAP_ROUTE11))
        {
			n = GetDynamicMapSec_Route11(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_PORTVS_VRBIS);
				case 2:
					return StringCopy(dest, sMapName_ACTA_TRANQVILLA);
				case 3:
					return StringCopy(dest, sMapName_MARE_TRANQVILLVM);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//PenninsulaE - Castrum or Mare Tranquillum 
		if (mapGroup == MAP_GROUP(MAP_PENNINSULA_E) && mapNum == MAP_NUM(MAP_PENNINSULA_E))
        {
            if (IsPenninsulaECastrum(FALSE))
                return StringCopy(dest, sMapName_CASTRVM);
            else
                return StringCopy(dest, sMapName_MARE_TRANQVILLVM);
        }
		//Hippodrome 
		if (mapGroup == MAP_GROUP(MAP_HIPPODROME) && mapNum == MAP_NUM(MAP_HIPPODROME))
        {
			//1: Villae Rusticae
			//2: Circus
			//3: Ilium
			//4: Urbia
			n = GetDynamicMapSec_Hippodrome(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_VILLAE_RVSTICAE);
				case 2:
					return StringCopy(dest, sMapName_CIRCVS);
				case 3:
					return StringCopy(dest, sMapName_ILIVM);
				case 4:
					return StringCopy(dest, sMapName_VRBIA);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
        //BikeMapE - Via Magna or Villae Rusticae
		if (mapGroup == MAP_GROUP(MAP_BIKE_MAP_E) && mapNum == MAP_NUM(MAP_BIKE_MAP_E))
        {
            if (IsBikeMapEViaMagna(FALSE))
                return StringCopy(dest, sMapName_VIA_MAGNA);
            else
                return StringCopy(dest, sMapName_VILLAE_RVSTICAE);
        }
        //BikeMapW - Via Magna or Villae Rusticae
		if (mapGroup == MAP_GROUP(MAP_BIKE_MAP_W) && mapNum == MAP_NUM(MAP_BIKE_MAP_W))
        {
            if (IsBikeMapWViaMagna(FALSE))
                return StringCopy(dest, sMapName_VIA_MAGNA);
            else
                return StringCopy(dest, sMapName_VILLAE_RVSTICAE);
        }
        //BikeRouteFarm - Via Magna or Villae Rusticae
		if (mapGroup == MAP_GROUP(MAP_BIKE_ROUTE_FARM) && mapNum == MAP_NUM(MAP_BIKE_ROUTE_FARM))
        {
            if (IsBikeRouteFarmViaMagna(FALSE))
                return StringCopy(dest, sMapName_VIA_MAGNA);
            else
                return StringCopy(dest, sMapName_VILLAE_RVSTICAE);
        }
        //SanjoRockFiller - Sabina Nova or Villae Rusticae 
		if (mapGroup == MAP_GROUP(MAP_SANJO_ROCK_FILLER) && mapNum == MAP_NUM(MAP_SANJO_ROCK_FILLER))
        {
            if (IsSanjoRockFillerSabinaNova(FALSE))
                return StringCopy(dest, sMapName_SABINA_NOVA);
            else
                return StringCopy(dest, sMapName_VILLAE_RVSTICAE);
        }
		//GatoCityParkN - Thermae or Hortus Publicus 
		if (mapGroup == MAP_GROUP(MAP_GATO_CITY_PARK_N) && mapNum == MAP_NUM(MAP_GATO_CITY_PARK_N))
        {
            if (IsGatoCityParkNThermae(FALSE))
                return StringCopy(dest, sMapName_THERMAE);
            else
                return StringCopy(dest, sMapName_HORTVS_PVBLICVS);
        }
		//MareS4 
		if (mapGroup == MAP_GROUP(MAP_MARE_S4) && mapNum == MAP_NUM(MAP_MARE_S4))
        {
			//1: Mare Tropicum
			//2: Mare Tranquillum
			//3: Mare Subtropicum
			//4: Isla Herba Bona
            //5: Isla Hesperia
            //6: Scylla Charybdis
			n = GetDynamicMapSec_MareS4(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_MARE_TROPICVM);
				case 2:
					return StringCopy(dest, sMapName_MARE_TRANQVILLVM);
				case 3:
					return StringCopy(dest, sMapName_MARE_SVBTROPICVM);
				case 4:
					return StringCopy(dest, sMapName_ISLA_HERBA_BONA);
				case 5:
					return StringCopy(dest, sMapName_ISLA_HESPERIA);
				case 6:
					return StringCopy(dest, sMapName_SCYLLA_CHARYBDIS);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//MareS3
		if (mapGroup == MAP_GROUP(MAP_MARE_S3) && mapNum == MAP_NUM(MAP_MARE_S3))
        {
			//1: Mare Tranquillum
			//2: Mare Subtropicum
			//3: Isla Herba Bona
			n = GetDynamicMapSec_MareS3(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_MARE_TRANQVILLVM);
				case 2:
					return StringCopy(dest, sMapName_MARE_SVBTROPICVM);
				case 3:
					return StringCopy(dest, sMapName_ISLA_HERBA_BONA);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//MareS2
		if (mapGroup == MAP_GROUP(MAP_MARE_S2) && mapNum == MAP_NUM(MAP_MARE_S2))
        {
			//1: Mare Tranquillum
			//2: Mare Mortuorum
			//3: Mare Subtropicum
			//4: Isla Herba Bona
			//5: Mortia
			n = GetDynamicMapSec_MareS2(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_MARE_TRANQVILLVM);
				case 2:
					return StringCopy(dest, sMapName_MARE_MORTVORVM);
				case 3:
					return StringCopy(dest, sMapName_MARE_SVBTROPICVM);
				case 4:
					return StringCopy(dest, sMapName_ISLA_HERBA_BONA);
				case 5:
					return StringCopy(dest, sMapName_MORTIA);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//MareS1
		if (mapGroup == MAP_GROUP(MAP_MARE_S1) && mapNum == MAP_NUM(MAP_MARE_S1))
        {
            //1: Mortia
			//2: Mare Mortuorum
			n = GetDynamicMapSec_MareS1(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_MORTIA);
				case 2:
					return StringCopy(dest, sMapName_MARE_MORTVORVM);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//BigIslandN
		if (mapGroup == MAP_GROUP(MAP_BIG_ISLAND_N) && mapNum == MAP_NUM(MAP_BIG_ISLAND_N))
        {
			//1: Mare Mortuorum
            //2: Mare Oriens
            //3: Mare Subtropicum
            //4: Isla Ignifera
			n = GetDynamicMapSec_BigIslandN(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_MARE_MORTVORVM);
				case 2:
					return StringCopy(dest, sMapName_MARE_ORIENS);
				case 3:
					return StringCopy(dest, sMapName_MARE_SVBTROPICVM);
				case 4:
					return StringCopy(dest, sMapName_ISLA_IGNIFERA);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//BigIslandS
		if (mapGroup == MAP_GROUP(MAP_BIG_ISLAND_S) && mapNum == MAP_NUM(MAP_BIG_ISLAND_S))
        {
			//1: Ignis Mons
            //2: Isla Ignifera
            //3: Mare Subtropicum
            //4: Mare Oriens
			n = GetDynamicMapSec_BigIslandS(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_IGNIS_MONS);
				case 2:
					return StringCopy(dest, sMapName_ISLA_IGNIFERA);
				case 3:
					return StringCopy(dest, sMapName_MARE_SVBTROPICVM);
				case 4:
					return StringCopy(dest, sMapName_MARE_ORIENS);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//OceanPerimeterBigIslandS
		if (mapGroup == MAP_GROUP(MAP_OCEAN_PERIMETER_BIG_ISALND_S) && mapNum == MAP_NUM(MAP_OCEAN_PERIMETER_BIG_ISALND_S))
        {
			//1: Isla Ignifera
            //2: Mare Subtropicum
            //3: Mare Oriens 
			n = GetDynamicMapSec_OceanPerimeterBigIslandS(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_ISLA_IGNIFERA);
				case 2:
					return StringCopy(dest, sMapName_MARE_SVBTROPICVM);
				case 3:
					return StringCopy(dest, sMapName_MARE_ORIENS);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//BigIslandFillerW
		if (mapGroup == MAP_GROUP(MAP_BIG_ISLAND_FILLER_W) && mapNum == MAP_NUM(MAP_BIG_ISLAND_FILLER_W))
        {
			//1: Isla Ignifera
            //2: Mare Subtropicum
			n = GetDynamicMapSec_BigIslandFillerW(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_ISLA_IGNIFERA);
				case 2:
					return StringCopy(dest, sMapName_MARE_SVBTROPICVM);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//MareS7
		if (mapGroup == MAP_GROUP(MAP_MARE_S7) && mapNum == MAP_NUM(MAP_MARE_S7))
        {
			//1: Isla Ithaca
			//2: Mare Subtropicum
			//3: Isla Herba Bona
			//4: Isla Arida
			//5: Isla Ignifera
			n = GetDynamicMapSec_MareS7(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_ISLA_ITHACA);
				case 2:
					return StringCopy(dest, sMapName_MARE_SVBTROPICVM);
				case 3:
					return StringCopy(dest, sMapName_ISLA_HERBA_BONA);
				case 4:
					return StringCopy(dest, sMapName_ISLA_ARIDA);
				case 5:
					return StringCopy(dest, sMapName_ISLA_IGNIFERA);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//MareS8
		if (mapGroup == MAP_GROUP(MAP_MARE_S8) && mapNum == MAP_NUM(MAP_MARE_S8))
        {
			//1: Isla Ithaca
			//2: Mare Subtropicum
			//3: Mare Tropicum
			//4: Isla Hesperia
			//5: Isla Tropica
			n = GetDynamicMapSec_MareS8(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_ISLA_ITHACA);
				case 2:
					return StringCopy(dest, sMapName_MARE_SVBTROPICVM);
				case 3:
					return StringCopy(dest, sMapName_MARE_TROPICVM);
				case 4:
					return StringCopy(dest, sMapName_ISLA_HESPERIA);
				case 5:
					return StringCopy(dest, sMapName_ISLA_TROPICA);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//MareS9
		if (mapGroup == MAP_GROUP(MAP_MARE_S9) && mapNum == MAP_NUM(MAP_MARE_S9))
        {
			//1: Isla Tropica 
			//2: Mare Subtropicum
			//3: Mare Tropicum
			//4: Isla Hesperia
			//5: Tropicana
			n = GetDynamicMapSec_MareS9(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_ISLA_TROPICA);
				case 2:
					return StringCopy(dest, sMapName_MARE_SVBTROPICVM);
				case 3:
					return StringCopy(dest, sMapName_MARE_TROPICVM);
				case 4:
					return StringCopy(dest, sMapName_ISLA_HESPERIA);
				case 5:
					return StringCopy(dest, sMapName_TROPICANA);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//MareS10
		if (mapGroup == MAP_GROUP(MAP_MARE_S10) && mapNum == MAP_NUM(MAP_MARE_S10))
        {
			//1 Isla Tropica
			//2 Mare Occidens
			//3 Mare Tropicum
			//4 Isla Solata
			//5 Mare Subtropicum
			n = GetDynamicMapSec_MareS10(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_ISLA_TROPICA);
				case 2:
					return StringCopy(dest, sMapName_MARE_OCCIDENS);
				case 3:
					return StringCopy(dest, sMapName_MARE_TROPICVM);
				case 4:
					return StringCopy(dest, sMapName_ISLA_SOLATA);
				case 5:
					return StringCopy(dest, sMapName_MARE_SVBTROPICVM);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }
		//OceanPerimeter2
		if (mapGroup == MAP_GROUP(MAP_OCEAN_PERIMETER2) && mapNum == MAP_NUM(MAP_OCEAN_PERIMETER2))
        {
			//1 Mare Subtropicum
			//2 Mare Occidens
			n = GetDynamicMapSec_OceanPerimeter2(FALSE);
			switch (n)
			{
				case 1:
					return StringCopy(dest, sMapName_MARE_SVBTROPICVM);
				case 2:
					return StringCopy(dest, sMapName_MARE_OCCIDENS);
				default:
					return StringCopy(dest, gText_Ferry);
			}
        }

		//Default Map - Should never be reached
		else
			return StringCopy(dest, gText_Ferry);
    case MAPSEC_SECRET_BASE:
        return StringCopy(dest, gText_SecretBase);
    default:
        return GetMapName(dest, mapSecId, 0);
    }
}

u8 *GetMapNameHandleAquaHideout(u8 *dest, u16 mapSecId)
{
    if (mapSecId == MAPSEC_AQUA_HIDEOUT_OLD)
        return StringCopy(dest, gText_Hideout);
    else
        return GetMapNameGeneric(dest, mapSecId);
}

static void GetMapSecDimensions(u16 mapSecId, u16 *x, u16 *y, u16 *width, u16 *height)
{
    *x = gRegionMapEntries[mapSecId].x;
    *y = gRegionMapEntries[mapSecId].y;
    *width = gRegionMapEntries[mapSecId].width;
    *height = gRegionMapEntries[mapSecId].height;
}

bool8 IsRegionMapZoomed(void)
{
    return sRegionMap->zoomed;
}

//Cornix neutered because all relevant map secs have been repurposed
bool32 IsEventIslandMapSecId(u8 mapSecId)
{
    //u32 i;

    //for (i = 0; i < ARRAY_COUNT(sMapSecIdsOffMap); i++)
    //{
    //    if (mapSecId == sMapSecIdsOffMap[i])
    //        return TRUE;
    //}
    return FALSE;
}

void CB2_OpenFlyMap(void)
{
    switch (gMain.state)
    {
    case 0:
        SetVBlankCallback(NULL);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        SetGpuReg(REG_OFFSET_BG0HOFS, 0);
        SetGpuReg(REG_OFFSET_BG0VOFS, 0);
        SetGpuReg(REG_OFFSET_BG1HOFS, 0);
        SetGpuReg(REG_OFFSET_BG1VOFS, 0);
        SetGpuReg(REG_OFFSET_BG2VOFS, 0);
        SetGpuReg(REG_OFFSET_BG2HOFS, 0);
        SetGpuReg(REG_OFFSET_BG3HOFS, 0);
        SetGpuReg(REG_OFFSET_BG3VOFS, 0);
        sFlyMap = Alloc(sizeof(*sFlyMap));
        if (sFlyMap == NULL)
        {
            SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);
        }
        else
        {
            ResetPaletteFade();
            ResetSpriteData();
            FreeSpriteTileRanges();
            FreeAllSpritePalettes();
            gMain.state++;
        }
        break;
    case 1:
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(1, sFlyMapBgTemplates, ARRAY_COUNT(sFlyMapBgTemplates));
        gMain.state++;
        break;
    case 2:
        InitWindows(sFlyMapWindowTemplates);
        DeactivateAllTextPrinters();
        gMain.state++;
        break;
    case 3:
        LoadUserWindowBorderGfx(0, 0x65, BG_PLTT_ID(13));
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case 4:
        InitRegionMap(&sFlyMap->regionMap, FALSE);
        CreateRegionMapCursor(TAG_CURSOR, TAG_CURSOR);
        CreateRegionMapPlayerIcon(TAG_PLAYER_ICON, TAG_PLAYER_ICON);
        sFlyMap->mapSecId = sFlyMap->regionMap.mapSecId;
        StringFill(sFlyMap->nameBuffer, CHAR_SPACE, MAP_NAME_LENGTH);
        sDrawFlyDestTextWindow = TRUE;
        DrawFlyDestTextWindow();
        gMain.state++;
        break;
    case 5:
        LZ77UnCompVram(sRegionMapFrameGfxLZ, (u16 *)BG_CHAR_ADDR(3));
        gMain.state++;
        break;
    case 6:
        LZ77UnCompVram(sRegionMapFrameTilemapLZ, (u16 *)BG_SCREEN_ADDR(30));
        gMain.state++;
        break;
    case 7:
        LoadPalette(sRegionMapFramePal, BG_PLTT_ID(1), sizeof(sRegionMapFramePal));
        PutWindowTilemap(WIN_FLY_TO_WHERE);
        FillWindowPixelBuffer(WIN_FLY_TO_WHERE, PIXEL_FILL(0));
        AddTextPrinterParameterized(WIN_FLY_TO_WHERE, FONT_NORMAL, gText_FlyToWhere, 0, 1, 0, NULL);
        ScheduleBgCopyTilemapToVram(0);
        gMain.state++;
        break;
    case 8:
        LoadFlyDestIcons();
        gMain.state++;
        break;
    case 9:
        BlendPalettes(PALETTES_ALL, 16, 0);
        SetVBlankCallback(VBlankCB_FlyMap);
        gMain.state++;
        break;
    case 10:
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
        ShowBg(0);
        ShowBg(1);
        ShowBg(2);
        SetFlyMapCallback(CB_FadeInFlyMap);
        SetMainCallback2(CB2_FlyMap);
        gMain.state++;
        break;
    }
}

static void VBlankCB_FlyMap(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void CB2_FlyMap(void)
{
    sFlyMap->callback();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
}

static void SetFlyMapCallback(void callback(void))
{
    sFlyMap->callback = callback;
    sFlyMap->state = 0;
}

static void DrawFlyDestTextWindow(void)
{
    u16 i;
    bool32 namePrinted;
    const u8 *name;

    if (sFlyMap->regionMap.mapSecType > MAPSECTYPE_NONE && sFlyMap->regionMap.mapSecType < NUM_MAPSEC_TYPES)
    {
        namePrinted = FALSE;
        for (i = 0; i < ARRAY_COUNT(sMultiNameFlyDestinations); i++)
        {
            if (sFlyMap->regionMap.mapSecId == sMultiNameFlyDestinations[i].mapSecId)
            {
                if (FlagGet(sMultiNameFlyDestinations[i].flag))
                {
                    StringLength(sMultiNameFlyDestinations[i].name[sFlyMap->regionMap.posWithinMapSec]);
                    namePrinted = TRUE;
                    ClearStdWindowAndFrameToTransparent(WIN_MAPSEC_NAME, FALSE);
                    DrawStdFrameWithCustomTileAndPalette(WIN_MAPSEC_NAME_TALL, FALSE, 101, 13);
                    AddTextPrinterParameterized(WIN_MAPSEC_NAME_TALL, FONT_NORMAL, sFlyMap->regionMap.mapSecName, 0, 1, 0, NULL);
                    name = sMultiNameFlyDestinations[i].name[sFlyMap->regionMap.posWithinMapSec];
                    AddTextPrinterParameterized(WIN_MAPSEC_NAME_TALL, FONT_NORMAL, name, GetStringRightAlignXOffset(FONT_NORMAL, name, 96), 17, 0, NULL);
                    ScheduleBgCopyTilemapToVram(0);
                    sDrawFlyDestTextWindow = TRUE;
                }
                break;
            }
        }
        if (!namePrinted)
        {
            if (sDrawFlyDestTextWindow == TRUE)
            {
                ClearStdWindowAndFrameToTransparent(WIN_MAPSEC_NAME_TALL, FALSE);
                DrawStdFrameWithCustomTileAndPalette(WIN_MAPSEC_NAME, FALSE, 101, 13);
            }
            else
            {
                // Window is already drawn, just empty it
                FillWindowPixelBuffer(WIN_MAPSEC_NAME, PIXEL_FILL(1));
            }
            AddTextPrinterParameterized(WIN_MAPSEC_NAME, FONT_NORMAL, sFlyMap->regionMap.mapSecName, 0, 1, 0, NULL);
            ScheduleBgCopyTilemapToVram(0);
            sDrawFlyDestTextWindow = FALSE;
        }
    }
    else
    {
        // Selection is on MAPSECTYPE_NONE, draw empty fly destination text window
        if (sDrawFlyDestTextWindow == TRUE)
        {
            ClearStdWindowAndFrameToTransparent(WIN_MAPSEC_NAME_TALL, FALSE);
            DrawStdFrameWithCustomTileAndPalette(WIN_MAPSEC_NAME, FALSE, 101, 13);
        }
        FillWindowPixelBuffer(WIN_MAPSEC_NAME, PIXEL_FILL(1));
        CopyWindowToVram(WIN_MAPSEC_NAME, COPYWIN_GFX);
        ScheduleBgCopyTilemapToVram(0);
        sDrawFlyDestTextWindow = FALSE;
    }
}


static void LoadFlyDestIcons(void)
{
    struct SpriteSheet sheet;

    LZ77UnCompWram(sFlyTargetIcons_Gfx, sFlyMap->tileBuffer);
    sheet.data = sFlyMap->tileBuffer;
    sheet.size = sizeof(sFlyMap->tileBuffer);
    sheet.tag = TAG_FLY_ICON;
    LoadSpriteSheet(&sheet);
    LoadSpritePalette(&sFlyTargetIconsSpritePalette);
    CreateFlyDestIcons();
    TryCreateRedOutlineFlyDestIcons();
}

// Sprite data for SpriteCB_FlyDestIcon
#define sIconMapSec   data[0]
#define sFlickerTimer data[1]

static void CreateFlyDestIcons(void)
{
    u16 canFlyFlag;
    u16 mapSecId;
    u16 x;
    u16 y;
    u16 width;
    u16 height;
    u16 shape;
    u8 spriteId;

    canFlyFlag = FLAG_VISITED_LITTLEROOT_TOWN;
    for (mapSecId = MAPSEC_LITTLEROOT_TOWN; mapSecId <= MAPSEC_EVER_GRANDE_CITY; mapSecId++)
    {
        GetMapSecDimensions(mapSecId, &x, &y, &width, &height);
        x = (x + MAPCURSOR_X_MIN) * 8 + 4;
        y = (y + MAPCURSOR_Y_MIN) * 8 + 4;

        if (width == 2)
            shape = SPRITE_SHAPE(16x8);
        else if (height == 2)
            shape = SPRITE_SHAPE(8x16);
        else
            shape = SPRITE_SHAPE(8x8);

        spriteId = CreateSprite(&sFlyDestIconSpriteTemplate, x, y, 10);
        if (spriteId != MAX_SPRITES)
        {
            gSprites[spriteId].oam.shape = shape;

            if (FlagGet(canFlyFlag))
                gSprites[spriteId].callback = SpriteCB_FlyDestIcon;
            else
                shape += 3;

            StartSpriteAnim(&gSprites[spriteId], shape);
            gSprites[spriteId].sIconMapSec = mapSecId;
        }
        canFlyFlag++;
    }
}

// Draw a red outline box on the mapsec if its corresponding flag has been set
// Only used for Battle Frontier, but set up to handle more
static void TryCreateRedOutlineFlyDestIcons(void)
{
    u16 i;
    u16 x;
    u16 y;
    u16 width;
    u16 height;
    u16 mapSecId;
    u8 spriteId;

    for (i = 0; sRedOutlineFlyDestinations[i][1] != MAPSEC_NONE; i++)
    {
        if (FlagGet(sRedOutlineFlyDestinations[i][0]))
        {
            mapSecId = sRedOutlineFlyDestinations[i][1];
            GetMapSecDimensions(mapSecId, &x, &y, &width, &height);
            x = (x + MAPCURSOR_X_MIN) * 8;
            y = (y + MAPCURSOR_Y_MIN) * 8;
            spriteId = CreateSprite(&sFlyDestIconSpriteTemplate, x, y, 10);
            if (spriteId != MAX_SPRITES)
            {
                gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
                gSprites[spriteId].callback = SpriteCB_FlyDestIcon;
                StartSpriteAnim(&gSprites[spriteId], FLYDESTICON_RED_OUTLINE);
                gSprites[spriteId].sIconMapSec = mapSecId;
            }
        }
    }
}

// Flickers fly destination icon color (by hiding the fly icon sprite) if the cursor is currently on it
static void SpriteCB_FlyDestIcon(struct Sprite *sprite)
{
    if (sFlyMap->regionMap.mapSecId == sprite->sIconMapSec)
    {
        if (++sprite->sFlickerTimer > 16)
        {
            sprite->sFlickerTimer = 0;
            sprite->invisible = sprite->invisible ? FALSE : TRUE;
        }
    }
    else
    {
        sprite->sFlickerTimer = 16;
        sprite->invisible = FALSE;
    }
}

#undef sIconMapSec
#undef sFlickerTimer

static void CB_FadeInFlyMap(void)
{
    switch (sFlyMap->state)
    {
    case 0:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        sFlyMap->state++;
        break;
    case 1:
        if (!UpdatePaletteFade())
        {
            SetFlyMapCallback(CB_HandleFlyMapInput);
        }
        break;
    }
}

static void CB_HandleFlyMapInput(void)
{
    if (sFlyMap->state == 0)
    {
        switch (DoRegionMapInputCallback())
        {
        case MAP_INPUT_NONE:
        case MAP_INPUT_MOVE_START:
        case MAP_INPUT_MOVE_CONT:
            break;
        case MAP_INPUT_MOVE_END:
            DrawFlyDestTextWindow();
            break;
        case MAP_INPUT_A_BUTTON:
            if (sFlyMap->regionMap.mapSecType == MAPSECTYPE_CITY_CANFLY || sFlyMap->regionMap.mapSecType == MAPSECTYPE_BATTLE_FRONTIER)
            {
                m4aSongNumStart(SE_SELECT);
                sFlyMap->choseFlyLocation = TRUE;
                SetFlyMapCallback(CB_ExitFlyMap);
            }
            break;
        case MAP_INPUT_B_BUTTON:
            m4aSongNumStart(SE_SELECT);
            sFlyMap->choseFlyLocation = FALSE;
            SetFlyMapCallback(CB_ExitFlyMap);
            break;
        }
    }
}

static void CB_ExitFlyMap(void)
{
    switch (sFlyMap->state)
    {
    case 0:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        sFlyMap->state++;
        break;
    case 1:
        if (!UpdatePaletteFade())
        {
            FreeRegionMapIconResources();
            if (sFlyMap->choseFlyLocation)
            {
                struct RegionMap* tempRegionMap = &sFlyMap->regionMap;

                SetFlyDestination(tempRegionMap);
                ReturnToFieldFromFlyMapSelect();
            }
            else
            {
                SetMainCallback2(CB2_ReturnToPartyMenuFromFlyMap);
            }
            TRY_FREE_AND_SET_NULL(sFlyMap);
            FreeAllWindowBuffers();
        }
        break;
    }
}

u32 FilterFlyDestination(struct RegionMap* regionMap)
{
    switch (regionMap->mapSecId)
    {
    case MAPSEC_SOUTHERN_ISLAND:
        return HEAL_LOCATION_SOUTHERN_ISLAND_EXTERIOR;
    case MAPSEC_BATTLE_FRONTIER:
        return HEAL_LOCATION_BATTLE_FRONTIER_OUTSIDE_EAST;
    case MAPSEC_LITTLEROOT_TOWN:
        return (gSaveBlock2Ptr->playerGender == MALE ? HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE : HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE);
    case MAPSEC_EVER_GRANDE_CITY:
        return (FlagGet(FLAG_LANDMARK_POKEMON_LEAGUE) && regionMap->posWithinMapSec == 0 ? HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE : HEAL_LOCATION_EVER_GRANDE_CITY);
    default:
        if (sMapHealLocations[regionMap->mapSecId][2] != HEAL_LOCATION_NONE)
            return sMapHealLocations[regionMap->mapSecId][2];
        else
            return WARP_ID_NONE;
    }
}

void SetFlyDestination(struct RegionMap* regionMap)
{
    u32 flyDestination = FilterFlyDestination(regionMap);

    if (flyDestination != WARP_ID_NONE)
        SetWarpDestinationToHealLocation(flyDestination);
    else
        SetWarpDestinationToMapWarp(sMapHealLocations[regionMap->mapSecId][0], sMapHealLocations[regionMap->mapSecId][1], WARP_ID_NONE);
}

//Cornix Custom - Part of a series to determine which part of a map ur on. In this case is Route3 Canelo's Cave or River Delta
bool32 IsRoute3RiverDelta(bool32 useWarpInfo)
{
	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }
	if (
			(x > 61) || //Furthest East
			( (x == 61) && (y < 25 || y > 32) ) || //Delta area above and below Cove penninsula
			( (x == 60) && (y < 24 || y > 35) ) ||
			( (x == 59) && (y < 23 || y > 35) ) ||
			( (x == 58) && (y < 22 || y > 36) ) ||
			( (x == 57) && (y < 21 || y > 37) ) ||
			( (x == 56) && (y < 20 || y > 36) ) ||
			( (x == 55) && (y < 19 || y > 35) ) ||
			( (x == 54) && (y < 18 || y > 34) ) ||
			( (x == 53) && (y < 17 || y > 30) ) ||
			( (x == 52) && (y < 15 || y > 31) ) ||
			( (x == 51) && (y < 14 || y > 32) ) ||
			( (x == 50) && (y < 13 || y > 32) ) ||
			( (x == 49) && (y < 12 || y > 32) ) ||
			( (x == 48) && (y < 11 || y > 32) ) ||
			( (x == 47) && (y <  8 || y > 32) )
	   )
		return TRUE;
	else if ( (x > 42) && (y < 12) ) //Top of River area
		return TRUE;
	else  // Default part of map => Cove
		return FALSE;
}

u32 GetDynamicMapSec_MareWWW(bool32 useWarpInfo) //Obviously not cormplete atm
{
	//0: OOB
	//1: Mare Occidens
	//2: River Delta
	//3: Playa Echona
	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	//Mare Occidens region
	if ( 
			( (y <= 0)  && (x < 81)  ) ||
			( (y == 1)  && (x < 80)  ) ||
			( (y == 2)  && (x < 80)  ) ||
			( (y == 3)  && (x < 80)  ) ||
			( (y == 4)  && (x < 80)  ) ||
			( (y == 5)  && (x < 81)  ) ||
			( (y == 6)  && (x < 82)  ) ||
			( (y == 7)  && (x < 82)  ) ||
			( (y == 8)  && (x < 82)  ) ||
			( (y == 9)  && (x < 81)  ) ||
			( (y == 10) && (x < 81)  ) ||
			( (y == 11) && (x < 81)  ) ||
			( (y == 12) && (x < 81)  ) ||
			( (y == 13) && (x < 80)  ) ||
			( (y == 14) && (x < 80)  ) ||
			( (y == 15) && (x < 83)  ) ||
			( (y == 16) && (x < 85)  ) ||
			( (y == 17) && (x < 89)  ) ||
			( (y == 18) && (x < 95)  ) ||
			( (y == 19) && (x < 96)  ) ||
			( (y == 20) && (x < 102) ) ||
			( (y == 21) && (x < 102) )

	   )
		return 1;
	//River Delta
	else if (
			( (y < 9) ) ||
			( (y == 9)  && (x < 119) ) ||
			( (y == 10) && (x < 119) ) ||
			( (y == 11) && (x < 117) ) ||
			( (y == 12) && (x < 115) ) ||
			( (y == 13) && (x < 113) ) ||
			( (y == 14) && (x < 112) ) ||
			( (y == 15) && (x < 111) ) ||
			( (y == 16) && (x < 110) ) ||
			( (y == 17) && (x < 110) ) ||
			( (y == 18) && (x < 110) ) ||
			( (y == 19) && (x < 110) ) 
			)
		return 2;
	//Playa Echona
	else
		return 3;
}

u32 GetDynamicMapSec_Route17(bool32 useWarpInfo)
{
	//0: OOB
	//1: Lago Draco
	//2: Lago Draco Shores
	//3: Upper Rio Draco
	//4: Lower Rio Draco
	//5: Upper Draco East
	//6: Lower Draco East
	//7: Upper Draco West
	//8: Lower Draco West
	
	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	//Lago Draco = 1
	if (
	    ( (x < 2)  && (y < 23) ) ||
		( (x == 2) && (y < 22) ) ||	
		( (x == 3) && (y < 21) ) ||	
		( (x == 4) && (y < 20) ) ||	
		( (x == 5) && (y < 19) ) 
	   )
		return 1;
	//Lago Draco Shores = 2
	else if (
			  ( (y == 23) && (x < 2)  ) ||
			  ( (y == 24) && (x < 2)  ) ||
			  ( (y == 25) && (x < 3)  ) ||
			  ( (y == 26) && (x < 4)  ) ||
			  ( (y == 27) && (x < 4)  ) ||
			  ( (y == 28) && (x < 5)  ) ||
			  ( (y == 29) && (x < 6)  ) ||
			  ( (y == 30) && ( (x < 9 ) || (x == 18 || x == 19 || x == 20) ) ) ||
			  ( (y == 31) && (x < 8)  ) ||
			  ( (y == 32) && (x < 9)  ) ||
			  ( (y == 33) && (x < 12) ) ||
			  ( (y == 34) && (x < 12) ) ||
			  ( (y == 35) && (x < 12) ) ||
			  ( (y == 36) && (x < 12) ) ||
			  ( (y == 37) && (x < 12) )
			)
		return 2;
	//Upper Rio Draco = 3
	else if (
			//Top area above waterfall
			( (x == 2)  && ( (y > 21) && (y < 25) ) ) ||
			( (x == 3)  && ( (y > 20) && (y < 26) ) ) ||
			( (x == 4)  && ( (y > 19) && (y < 28) ) ) ||
			( (x == 5)  && ( (y > 18) && (y < 29) ) ) ||
			( (x == 6)  && ( (y > 18) && (y < 30) ) ) ||
			( (x == 7)  && ( (y > 19) && (y < 31) ) ) ||
			( (x == 8)  && ( (y > 21) && (y < 32) ) ) ||
			( (x == 9)  && ( (y > 23) && (y < 33) ) ) ||
			( (x == 10) && ( (y > 24) && (y < 33) ) ) ||
			( (x == 11) && ( (y > 24) && (y < 33) ) ) ||
			( (x == 12) && ( (y > 25) && (y < 32) ) ) ||
			( (x == 13) && ( (y > 26) && (y < 32) ) ) ||
			( (x == 14) && ( (y > 26) && (y < 32) ) ) ||
			( (x == 15) && ( (y > 26) && (y < 31) ) ) ||
			( (x == 16) && ( ( (y > 25) && (y < 31) ) || ( (y > 33) && (y < 39) ) ) ) ||  //Up and Down  
			( (x == 17) && ( ( (y > 24) && (y < 31) ) || ( (y > 32) && (y < 39) ) ) ) ||  //Up and Down  
			( (x == 18) && ( ( (y > 23) && (y < 30) ) || ( (y > 32) && (y < 39) ) ) ) ||  //Up and Down  
			( (x == 19) && ( ( (y > 23) && (y < 30) ) || ( (y > 31) && (y < 38) ) ) ) ||  //Up and Down  
			( (x == 20) && ( ( (y > 24) && (y < 30) ) || ( (y > 31) && (y < 37) ) ) ) ||  //Up and Down  
			( (x == 21) && ( (y > 25) && (y < 36) ) ) ||
			( (x == 22) && ( (y > 25) && (y < 35) ) ) ||
			( (x == 23) && ( (y > 26) && (y < 34) ) ) ||
			( (x == 24) && ( (y > 28) && (y < 33) ) ) ||
			//Middle part between waterfalls
			( (y == 42) && ( (x > 14) && ( x < 20) ) ) ||
			( (y == 43) && ( (x > 14) && ( x < 20) ) ) ||
			( (y == 44) && ( (x > 14) && ( x < 20) ) ) ||
			( (y == 45) && ( (x > 14) && ( x < 20) ) ) ||
			( (y == 46) && ( (x > 14) && ( x < 20) ) ) ||
			( (y == 47) && ( (x > 14) && ( x < 21) ) ) ||
			( (y == 48) && ( (x > 15) && ( x < 23) ) ) ||
			( (y == 49) && ( (x > 15) && ( x < 24) ) ) ||
			( (y == 50) && ( (x > 15) && ( x < 24) ) ) ||
			( (y == 51) && ( (x > 15) && ( x < 25) ) ) ||
			( (y == 52) && ( ( (x > 16) && ( x < 18) ) || ( (x > 19) && (x < 26) ) ) ) || //Special Case Left and Right
			( (y == 53) && ( (x > 19) && ( x < 26) ) ) ||
			( (y == 54) && ( (x > 20) && ( x < 28) ) ) ||
			( (y == 55) && ( (x > 21) && ( x < 29) ) ) ||
			( (y == 56) && ( (x > 22) && ( x < 29) ) ) ||
			( (y == 57) && ( (x > 22) && ( x < 29) ) ) ||
			( (y == 58) && ( (x > 22) && ( x < 30) ) ) ||
			( (y == 59) && ( (x > 22) && ( x < 30) ) ) ||
			( (y == 60) && ( (x > 21) && ( x < 29) ) ) ||
			( (y == 61) && ( (x > 19) && ( x < 28) ) ) ||
			( (y == 62) && ( ( (x > 15) && ( x < 18) ) || ( (x > 18) && (x < 28) ) ) ) || //Special Case Left and Right
			( (y == 63) && ( (x > 14) && ( x < 27) ) ) ||
			( (y == 64) && ( (x > 14) && ( x < 24) ) ) ||
			( (y == 65) && ( (x > 13) && ( x < 24) ) ) ||
			( (y == 66) && ( (x > 11) && ( x < 23) ) ) ||
			( (y == 67) && ( (x > 10) && ( x < 21) ) ) ||
			( (y == 68) && ( (x >  9) && ( x < 20) ) ) ||
			( (y == 69) && ( (x >  9) && ( x < 19) ) ) ||
			( (y == 70) && ( (x >  8) && ( x < 18) ) ) ||
			( (y == 71) && ( (x >  8) && ( x < 17) ) ) ||
			( (y == 72) && ( (x >  8) && ( x < 16) ) ) ||
			( (y == 73) && ( (x >  8) && ( x < 16) ) ) ||
			( (y == 74) && ( (x >  8) && ( x < 15) ) ) ||
			( (y == 75) && ( (x >  9) && ( x < 15) ) ) ||
			( (y == 76) && ( (x >  9) && ( x < 16) ) ) ||
			( (y == 77) && ( (x > 10) && ( x < 16) ) ) ||
			( (y == 78) && ( (x > 10) && ( x < 17) ) ) ||
			( (y == 79) && ( (x > 10) && ( x < 19) ) ) ||
			( (y == 80) && ( (x > 10) && ( x < 20) ) ) ||
			( (y == 81) && ( (x > 10) && ( x < 21) ) ) ||
			( (y == 82) && ( (x > 12) && ( x < 22) ) ) ||
			( (y == 83) && ( (x > 16) && ( x < 23) ) ) ||
			( (y == 84) && ( (x > 16) && ( x < 23) ) ) ||
			( (y == 85) && ( (x > 16) && ( x < 22) ) ) ||
			( (y == 86) && ( (x > 15) && ( x < 22) ) ) ||
			( (y == 87) && ( (x > 14) && ( x < 22) ) ) ||
			( (y == 88) && ( (x > 12) && ( x < 20) ) ) ||
			( (y == 89) && ( (x > 12) && ( x < 20) ) ) ||
			( (y == 90) && ( (x > 12) && ( x < 20) ) ) ||
			( (y == 91) && ( (x > 12) && ( x < 20) ) ) ||
			( (y == 92) && ( (x > 12) && ( x < 19) ) ) ||
			( (y == 93) && ( (x > 12) && ( x < 17) ) ) ||
			( (y == 94) && ( (x > 12) && ( x < 17) ) ) ||
			( (y == 95) && ( (x > 12) && ( x < 17) ) ) ||
			( (y == 96) && ( (x > 12) && ( x < 17) ) ) ||
			( (y == 97) && ( (x > 12) && ( x < 17) ) ) ||
			( (y == 98) && ( (x > 12) && ( x < 17) ) ) ||
			( (y == 99) && ( (x > 12) && ( x < 17) ) ) ||
			//Below Tall Falls - Only reachable by sailing down stream
			( (y == 100) && ( (x > 11) && (x < 18) ) ) ||
			( (y == 101) && ( (x > 11) && (x < 18) ) ) ||
			( (y == 102) && ( (x > 10) && (x < 18) ) ) ||
			( (y == 103) && ( (x > 9)  && (x < 17) ) ) ||
			( (y == 104) && ( (x > 9)  && (x < 17) ) ) ||
			( (y == 105) && ( (x > 8)  && (x < 16) ) ) ||
			( (y == 106) && ( (x > 8)  && (x < 16) ) ) ||
			( (y == 107) && ( (x > 8)  && (x < 16) ) ) ||
			( (y == 108) && ( (x > 8)  && (x < 16) ) ) ||
			( (y == 109) && ( (x > 8)  && (x < 16) ) ) ||
			( (y == 110) && ( (x > 8)  && (x < 16) ) ) ||
			( (y == 111) && ( (x > 8)  && (x < 16) ) ) ||
			( (y == 112) && ( (x > 7)  && (x < 16) ) ) ||
			( (y == 113) && ( (x > 7)  && (x < 16) ) ) ||
			( (y == 114) && ( (x > 7)  && (x < 16) ) ) ||
			( (y == 115) && ( (x > 7)  && (x < 17) ) ) ||
			( (y == 116) && ( (x > 9)  && (x < 17) ) ) ||
			( (y == 117) && ( (x > 9)  && (x < 17) ) ) ||
			( (y == 118) && ( (x > 9)  && (x < 18) ) ) ||
			( (y == 119) && ( (x > 10) && (x < 19) ) ) ||
			( (y == 120) && ( (x > 10) && (x < 20) ) ) ||
			( (y == 121) && ( (x > 13) && (x < 21) ) ) ||
			( (y == 122) && ( (x > 13) && (x < 21) ) ) ||
			( (y == 123) && ( (x > 13) && (x < 21) ) ) || //Top of Waterfall
			( (y == 124) && ( (x > 13) && (x < 21) ) ) ||
			( (y == 125) && ( (x > 13) && (x < 21) ) ) ||
			( (y == 126) && ( (x > 13) && (x < 21) ) ) //Last Waterfall Tile
			)
			return 3;
	//Lower Rio Draco = 4
	else if (


			( (y == 127) && ( (x > 12) && (x < 22) ) ) || //Last before Waterfall
			( (y == 128) && ( (x > 12) && (x < 22) ) ) ||
			( (y == 129) && ( (x > 12) && (x < 24) ) ) ||
			( (y == 130) && ( (x > 15) && (x < 24) ) ) ||
			( (y == 131) && ( (x > 17) && (x < 25) ) ) ||
			( (y == 132) && ( (x > 18) && (x < 25) ) ) ||
			( (y == 133) && ( (x > 18) && (x < 26) ) ) ||
			( (y == 134) && ( (x > 19) && (x < 26) ) ) ||
			( (y == 135) && ( (x > 19) && (x < 27) ) ) ||
			( (y == 136) && ( (x > 20) && (x < 28) ) ) ||
			( (y == 137) && ( (x > 20) && (x < 30) ) ) ||
			( (y == 138) && ( (x > 20) && (x < 30) ) ) ||
			( (y == 139) && ( (x > 20) && (x < 30) ) ) ||
			( (y == 140) && ( (x > 20) && (x < 30) ) ) ||
			( (y == 141) && ( (x > 21) && (x < 30) ) ) ||
			( (y == 142) && ( (x > 22) && (x < 31) ) ) ||
			( (y == 143) && ( (x > 23) && (x < 32) ) ) ||
			( (y == 144) && ( (x > 24) && (x < 32) ) ) ||
			( (y == 145) && ( (x > 25) && (x < 32) ) ) ||
			( (y == 146) && ( (x > 25) && (x < 32) ) ) ||
			( (y == 147) && ( (x > 25) && (x < 33) ) ) ||
			( (y == 148) && ( (x > 26) && (x < 33) ) ) ||
			( (y == 149) && ( (x > 26) && (x < 33) ) ) ||
			( (y == 150) && ( (x > 26) && (x < 33) ) ) ||
			( (y == 151) && ( (x > 26) && (x < 33) ) ) ||
			( (y == 152) && ( (x > 26) && (x < 33) ) ) ||
			( (y == 153) && ( (x > 26) && (x < 33) ) ) ||
			( (y == 154) && ( (x > 26) && (x < 34) ) ) ||
			( (y == 155) && ( (x > 26) && (x < 34) ) ) ||
			( (y == 156) && ( (x > 26) && (x < 35) ) ) ||
			( (y == 157) && ( (x > 26) && (x < 35) ) ) ||
			( (y == 158) && ( (x > 26) && (x < 35) ) ) ||
			( (y == 159) && ( (x > 26) && (x < 36) ) ) ||
			( (y == 160) && ( (x > 27) && (x < 36) ) ) ||
			( (y == 161) && ( (x > 27) && (x < 36) ) ) ||
			( (y == 162) && ( (x > 28) && (x < 37) ) ) ||
			( (y == 163) && (x > 28) ) ||
			( (y == 164) &&  (x > 29)  ) ||
			( (y == 165) &&  (x > 29)  ) ||
			( (y == 166) &&  (x > 30)  ) ||
			( (y == 167) &&  (x > 31)  ) ||
			( (y == 168) &&  (x > 33)  ) ||
			( (y == 169) &&  (x > 34)  ) ||
			( (y == 170) &&  (x > 35)  ) ||
			( (y == 171) &&  (x > 36)  )
			)
			return 4;
	//Upper Draco East = 5
	else if (
			//Furthest East
			( (x > 29) && (y < 95) ) ||
			//Top Area
			( (y < 24) && (x > 12) ) ||
			//Here account for everything else
			( (x == 13) && (y < 27) ) || //Only two without multiple instances 
			( (x == 14) && (y < 27) ) || //Only two without multiple instances
			( (x == 15) && ( (y  < 27) || ( (y > 73) && (y < 76) ) ) ) ||
			( (x == 16) && ( (y  < 26) || ( (y > 71) && (y < 78) ) ) ) ||
			( (x == 17) && ( (y  < 25) || ( (y > 70) && (y < 79) ) ) ) ||
			( (x == 18) && ( (y == 30) || ( (y > 69) && (y < 79) ) ) ) || //Ignore TopArea -> Covered by TopArea check
			( (x == 19) && ( (y == 30) || (y == 38) || ( (y > 68) && (y < 80) ) ) ) || //Ignore TopArea -> Covered by TopArea check
			( (x == 20) && ( (y < 25) || (y == 30) || (y == 37) || ( (y > 67) && (y < 81) ) ) ) ||
			( (x == 21) && ( (y < 26) || ( (y > 35) && (y < 48) ) || ( (y > 66) && (y < 82) ) ) ) ||
			( (x == 22) && ( (y < 26) || ( (y > 34) && (y < 48) ) || ( (y > 66) && (y < 83) ) || ( (y > 84) && (y < 95) ) ) ) || //Thrid Area because of split beach
			( (x == 23) && ( (y < 27) || ( (y > 33) && (y < 49) ) || ( (y > 65) && (y < 95) ) ) ) ||
			( (x == 24) && ( (y < 29) || ( (y > 32) && (y < 51) ) || ( (y > 65) && (y < 95) ) ) ) ||
			( (x == 25) && ( (y < 52) || ( (y > 63) && (y < 95) ) ) ) ||
			( (x == 26) && ( (y < 54) || ( (y > 63) && (y < 95) ) ) ) ||
			( (x == 27) && ( (y < 54) || ( (y > 62) && (y < 95) ) ) ) ||
			( (x == 28) && ( (y < 55) || ( (y > 60) && (y < 95) ) ) ) ||
			( (x == 29) && ( (y < 58) || (y > 60) ) )
			)
			return 5;
	//Lower Draco East = 6
	else if (
			( (x == 18) && ( (y > 106) && (y < 118) ) ) ||
			( (x == 19) && ( (y > 94)  && (y < 119) ) ) ||
			( (x == 20) && ( (y > 94)  && (y < 120) ) ) ||
			( (x == 21) && ( (y > 94)  && (y < 120) ) ) ||
			( (x == 22) && ( (y > 94)  && (y < 128) ) ) ||
			( (x == 23) && ( (y > 94)  && (y < 128) ) ) ||
			( (x == 24) && ( (y > 94)  && (y < 130) ) ) ||
			( (x == 25) && ( (y > 94)  && (y < 132) ) ) ||
			( (x == 26) && ( (y > 94)  && (y < 134) ) ) ||
			( (x == 27) && ( (y > 94)  && (y < 135) ) ) ||
			( (x == 28) && ( (y > 94)  && (y < 136) ) ) ||
			( (x == 29) && ( (y > 94)  && (y < 136) ) ) ||
			( (x == 30) && ( (y > 94)  && (y < 141) ) ) ||
			( (x == 31) && ( (y > 94)  && (y < 142) ) ) ||
			( (x == 32) && ( (y > 94)  && (y < 146) ) ) ||
			( (x == 33) && ( (y > 94)  && (y < 153) ) ) ||
			( (x == 34) && ( (y > 94)  && (y < 155) ) ) ||
			( (x == 35) && ( (y > 94)  && (y < 158) ) ) ||
			( (x == 36) && ( (y > 94)  && (y < 161) ) ) ||
			( (x == 37) && ( (y > 94)  && (y < 162) ) ) ||
			( (x == 38) && ( (y > 94)  && (y < 162) ) ) ||
			( (x >= 39) && ( (y > 94)  && (y < 162) ) )
			)
			return 6;
	//Upper Draco West = 7
	else if (
			( (x < 9) && ( (y > 41) && (y < 97) ) ) || //far west
			( (x == 9)  && ( ( (y > 41) && (y < 70) ) || ( (y > 74) && (y < 97) ) ) ) ||
			( (x == 10) && ( ( (y > 41) && (y < 68) ) || ( (y > 76) && (y < 97) ) ) ) ||
			( (x == 11) && ( ( (y > 41) && (y < 67) ) || ( (y > 81) && (y < 97) ) ) ) ||
			( (x == 12) && ( ( (y > 41) && (y < 66) ) || ( (y > 81) && (y < 97) ) ) ) ||
			( (x == 13) && ( ( (y > 41) && (y < 66) ) || ( (y > 82) && (y < 97) ) ) ) ||
			( (x == 14) && ( ( (y > 41) && (y < 65) ) || ( (y > 82) && (y < 97) ) ) ) ||
			( (x == 15) && ( ( (y > 47) && (y < 63) ) || ( (y > 82) && (y < 97) ) ) ) ||
			( (x == 16) && ( ( (y > 51) && (y < 62) ) || ( (y > 82) && (y < 97) ) ) ) ||
			( (x == 17) && ( (y > 52) && (y < 62) ) ) ||
			( (x == 18) && ( (y > 52) && (y < 63) ) ) ||
			( (x == 19) && ( (y > 52) && (y < 62) ) ) ||
			( (x == 20) && ( (y > 53) && (y < 61) ) ) ||
			( (x == 21) && ( (y > 54) && (y < 61) ) ) ||
			( (x == 22) && ( (y > 55) && (y < 60) ) ) 
			)
		return 7;
	//Lower Draco West = 8
	else if (
			//Fare West
			( (x < 8) && (y > 96) ) ||
			( (x == 8)  && ( ( (y > 96) && (y < 112) ) || ( y > 115) ) ) ||
			( (x == 9)  && ( ( (y > 96) && (y < 105) ) || ( y > 115) ) ) ||
			( (x == 10) && ( ( (y > 96) && (y < 103) ) || ( y > 118) ) ) ||
			( (x == 11) && ( ( (y > 96) && (y < 102) ) || ( y > 120) ) ) ||
			( (x == 12) && ( ( (y > 96) && (y < 100) ) || ( y > 120) ) ) ||
			( (x == 13) && (y > 129) ) ||
			( (x == 14) && (y > 129) ) ||
			( (x == 15) && (y > 129) ) ||
			( (x == 16) && (y > 130) ) ||
			( (x == 17) && (y > 130) ) ||
			( (x == 18) && (y > 131) ) ||
			( (x == 19) && (y > 133) ) ||
			( (x == 20) && (y > 135) ) ||
			( (x == 21) && (y > 140) ) ||
			( (x == 22) && (y > 141) ) ||
			( (x == 23) && (y > 142) ) ||
			( (x == 24) && (y > 143) ) ||
			( (x == 25) && (y > 144) ) ||
			( (x == 26) && (y > 147) ) ||
			( (x == 27) && (y > 159) ) ||
			( (x == 28) && (y > 161) ) ||
			( (x == 29) && (y > 163) ) ||
			( (x == 30) && (y > 165) ) 
			)
			return 8;
	//Default
	else
		return 0;
}

u32 GetDynamicMapSec_LakeIra(bool32 useWarpInfo) 
{
	//0: OOB
	//1: Laco Draco
	//2: Laco Draco Shore
	//3: Salix

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }
	//Salix
	if 
		(
		//Start from Top and go down
		( (y == 10) && (x > 66) ) ||
		( (y == 11) && (x > 66) ) ||
		( (y == 12) && (x > 68) ) ||
		( (y == 13) && (x > 69) ) ||
		( (y == 14) && (x > 70) ) ||
		( (y == 15) && (x > 71) ) ||
		( (y == 16) && (x > 72) ) ||
		( (y == 17) && (x > 73) ) ||
		( (y == 18) && (x > 74) ) ||
		( (y == 19) && (x > 75) ) ||
		( (y == 20) && (x > 75) ) ||
		( (y == 21) && (x > 76) ) ||
		( (y == 22) && (x > 77) ) ||
		( (y == 23) && (x > 77) ) ||
		( (y == 24) && (x > 77) ) ||
		( (y == 25) && (x > 78) ) ||
		( (y == 26) && (x > 78) ) ||
		( (y == 27) && (x > 79) ) ||
		( (y == 28) && (x > 79) ) 
		)
		return 3;
	//Shore
	else if 
		(
		//Top Left
		( (x == 7)  && (y < 19) ) ||
		( (x == 9)  && (y < 19) ) ||
		( (x == 10) && (y < 19) ) ||
		( (x == 11) && (y < 18) ) ||
		( (x == 12) && (y < 16) ) ||
		( (x == 13) && (y < 15) ) ||
		( (x == 14) && (y < 15) ) ||
		( (x == 15) && (y < 14) ) ||
		( (x == 15) && (y < 14) ) ||
		( (x == 17) && (y < 14) ) ||
		( (x == 18) && (y < 14) ) ||
		( (x == 19) && (y < 14) ) ||
		( (x == 20) && (y < 15) ) ||
		( (x == 21) && (y < 15) ) ||
		( (x == 22) && (y < 15) ) ||
		( (x == 23) && (y < 15) ) ||
		( (x == 24) && (y < 15) ) ||
		( (x == 25) && (y < 16) ) ||
		( (x == 25) && (y < 16) ) ||
		( (x == 27) && (y < 16) ) ||
		( (x == 28) && (y < 17) ) ||
		( (x == 29) && (y < 17) ) ||
		( (x == 30) && (y < 18) ) ||
		( (x == 31) && (y < 18) ) ||
		( (x == 32) && (y < 18) ) ||
		( (x == 33) && (y < 19) ) ||
		( (x == 34) && (y < 19) ) ||
		( (x == 35) && (y < 19) ) ||
		( (x == 35) && (y < 19) ) ||
		( (x == 37) && (y < 20) ) ||
		( (x == 38) && (y < 20) ) ||
		( (x == 39) && (y < 20) ) ||
		( (x == 40) && (y < 20) ) ||
		( (x == 41) && (y < 21) ) ||
		( (x == 42) && (y < 21) ) ||
		( (x == 43) && (y < 21) ) ||
		( (x == 44) && (y < 20) ) ||
		( (x == 45) && (y < 19) ) ||
		( (x == 45) && (y < 18) ) ||
		( (x == 47) && (y < 16) ) ||
		( (x == 48) && (y < 15) ) ||
	//Bot Left
		( (y == 29) && (x < 12) ) ||
		( (y == 30) && (x < 12) ) ||
		( (y == 31) && (x < 12) ) ||
		( (y == 32) && (x < 13) ) ||
		( (y == 33) && (x < 14) ) ||
		( (y == 34) && (x < 14) ) ||
		( (y == 35) && (x < 15) ) ||
		( (y == 35) && (x < 16) ) ||
		( (y == 37) && (x < 17) ) ||
		( (y == 38) && (x < 18) ) ||
		( (y == 39) && (x < 18) ) ||
		( (y == 40) && (x < 18) ) ||
		( (y == 41) && (x < 19) ) ||
		( (y == 42) && (x < 19) ) ||
		( (y == 43) && (x < 19) ) ||
		( (y == 44) && (x < 19) ) ||
		( (y == 45) && (x < 19) ) ||
		( (y == 45) && (x < 19) ) ||
		( (y == 47) && (x < 19) ) ||
		( (y == 48) && (x < 19) ) ||
		( (y == 49) && (x < 19) ) ||
		( (y == 50) && (x < 19) ) ||
		( (y == 51) && (x < 18) ) ||
		( (y == 52) && (x < 18) ) ||
		( (y == 53) && (x < 18) ) ||
		( (y == 54) && (x < 18) ) ||
		( (y == 55) && (x < 18) ) ||
		( (y == 55) && (x < 18) ) ||
		( (y == 57) && (x < 19) ) ||
		( (y == 58) && (x < 19) ) ||
		( (y == 59) && (x < 20) ) ||
		( (y == 60) && (x < 22) ) ||
		( (y == 61) && (x < 27) ) ||
		( (y == 62) && (x < 27) ) ||
		( (y == 63) && (x < 27) ) ||
	//Top Right
		( (x == 65) && (y < 14) ) ||
		( (x == 66) && (y < 15) ) ||
		( (x == 67) && (y < 17) ) ||
		( (x == 68) && (y < 18) ) ||
		( (x == 69) && (y < 20) ) ||
		( (x == 70) && (y < 21) ) ||
		( (x == 71) && (y < 22) ) ||
		( (x == 72) && (y < 23) ) ||
		( (x == 73) && (y < 24) ) ||
		( (x == 74) && (y < 25) ) ||
		( (x == 75) && (y < 26) ) ||
		( (x == 76) && (y < 28) ) ||
		( (x == 77) && (y < 30) ) ||
		( (x == 78) && (y < 31) ) ||
		( (x == 79) && (y < 32) ) ||
		( (x == 80) && (y < 33) ) ||
		( (x == 81) && (y < 33) ) ||
		( (x == 82) && (y < 34) ) ||
		( (x > 82)  && (y < 34) ) ||
	//Bot Right
		( (x == 52) && (y > 47) ) ||
		( (x == 53) && (y > 48) ) ||
		( (x == 54) && (y > 49) ) ||
		( (x == 55) && (y > 49) ) ||
		( (x == 56) && (y > 50) ) ||
		( (x == 57) && (y > 51) ) ||
		( (x == 58) && (y > 52) ) ||
		( (x == 59) && (y > 53) ) ||
		( (x == 60) && (y > 54) ) ||
		( (x == 61) && (y > 55) ) ||
		( (x == 62) && (y > 57) ) ||
		( (x == 63) && (y > 58) ) ||
		( (x == 64) && (y > 58) ) ||
		( (x == 65) && (y > 59) ) ||
		( (x == 66) && (y > 59) ) ||
		( (x == 67) && (y > 58) ) ||
		( (x == 68) && (y > 57) ) ||
		( (x == 69) && (y > 56) ) ||
		( (x == 70) && (y > 55) ) ||
		( (x == 71) && (y > 54) ) ||
		( (x == 72) && (y > 53) ) ||
		( (x == 73) && (y > 53) ) ||
		( (x == 74) && (y > 52) ) ||
		( (x == 75) && (y > 52) ) ||
		( (x == 76) && (y > 51) ) ||
		( (x == 77) && (y > 51) ) ||
		( (x > 77)  && (y > 50) ) 
		)
		return 2;
	else 
		return 1;
}

bool32 IsLakeIraSouthUpperDracoWest(bool32 useWarpInfo) 
{
	s16 y;
    if (useWarpInfo) 
        y = sWarpDestination.y;
    else
        y = gSaveBlock1Ptr->pos.y;

	if (y < 53)
		return TRUE;
	else
		return FALSE;
}

bool32 IsSilvanWoodsNUpperDracoEast(bool32 useWarpInfo) 
{
	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }
	if 
		(
		( y > 64) ||
		( (x == 6)  && (y < 63) ) ||
		( (x == 7)  && (y < 63) ) ||
		( (x == 8)  && (y < 63) ) ||
		( (x == 9)  && (y < 62) ) ||
		( (x == 10) && (y < 62) ) ||
		( (x == 11) && (y < 62) ) ||
		( (x == 12) && (y < 62) ) ||
		( (x == 13) && (y < 62) ) ||
		( (x == 14) && (y < 61) ) ||
		( (x == 15) && (y < 61) ) ||
		( (x == 16) && (y < 60) ) ||
		( (x == 17) && (y < 59) ) ||
		( (x == 18) && (y < 58) ) ||
		( (x == 19) && (y < 58) ) ||
		( (x == 20) && (y < 57) ) ||
		( (x == 21) && (y < 57) ) ||
		( (x == 22) && (y < 56) ) ||
		( (x == 23) && (y < 56) ) ||
		( (x == 24) && (y < 55) ) ||
		( (x == 25) && (y < 55) ) ||
		( (x == 26) && (y < 54) ) ||
		( (x == 27) && (y < 53) ) 
		)
		return TRUE;
	else
		return FALSE;
}

u32 GetDynamicMapSec_SilvanWoods(bool32 useWarpInfo)
{
	//0: OOB
	//1: Silva
	//2: Dracus Inferior
	//3: Silva Profuga
	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("Silvan Woods\nX %d\nY %d", x, y);

	//Lower Left == Silva
	if 
		(
		( (x <= 0)  && (y > 28) ) || 
		( (x == 1)  && (y > 29) ) || 
		( (x == 2)  && (y > 30) ) || 
		( (x == 3)  && (y > 31) ) || 
		( (x == 4)  && (y > 33) ) || 
		( (x == 5)  && (y > 35) ) || 
		( (x == 6)  && (y > 38) ) || 
		( (x == 7)  && (y > 40) ) || 
		( (x == 8)  && (y > 41) ) || 
		( (x == 9)  && (y > 42) ) || 
		( (x == 10) && (y > 43) ) || 
		( (x == 11) && (y > 44) ) || 
		( (x == 12) && (y > 46) ) || 
		( (x == 13) && (y > 47) ) || 
		( (x == 14) && (y > 49) ) || 
		( (x == 15) && (y > 51) ) || 
		( (x == 16) && (y > 52) ) || 
		( (x == 17) && (y > 53) ) || 
		( (x == 18) && (y > 54) ) 
			)
		return 1;
	//Dracus Inferior
	else if 
		(
 		( (x <= 0)  && (y > 17) ) || 
		( (x == 1)  && (y > 18) ) || 
		( (x == 2)  && (y > 19) ) || 
		( (x == 3)  && (y > 20) ) || 
		( (x == 4)  && (y > 21) ) || 
		( (x == 5)  && (y > 22) ) || 
		( (x == 6)  && (y > 23) ) || 
		( (x == 7)  && (y > 25) ) || 
		( (x == 8)  && (y > 26) ) || 
		( (x == 9)  && (y > 26) ) || 
		( (x == 10) && (y > 27) ) || 
		( (x == 11) && (y > 28) ) || 
		( (x == 12) && (y > 29) ) || 
		( (x == 13) && (y > 31) ) || 
		( (x == 14) && (y > 34) ) || 
		( (x == 15) && (y > 36) ) || 
		( (x == 16) && (y > 37) ) || 
		( (x == 17) && (y > 38) ) || 
		( (x == 18) && (y > 39) ) ||
		( (x == 19) && (y > 40) ) || 
		( (x == 20) && (y > 41) ) || 
		( (x == 21) && (y > 44) ) || 
		( (x == 22) && (y > 45) ) || 
		( (x == 23) && (y > 47) ) || 
		( (x == 24) && (y > 48) ) || 
		( (x == 25) && (y > 49) ) || 
		( (x == 26) && (y > 50) ) || 
		( (x == 27) && (y > 51) ) || 
		( (x == 28) && (y > 52) ) ||
		( (x == 29) && (y > 53) ) || 
		( (x == 30) && (y > 56) ) || 
		( (x == 31) && (y > 58) ) || 
		( (x == 32) && (y > 61) ) || 
		( (x == 33) && (y > 64) ) || 
		( (x == 34) && (y > 65) ) || 
		( (x == 35) && (y > 66) ) 
		)
		return 2;
	//Silva Profuga
	else if
		(
		( (x == 10) && (y < 22) ) || 
		( (x == 11) && (y < 24) ) || 
		( (x == 12) && (y < 24) ) || 
		( (x == 13) && (y < 24) ) || 
		( (x == 14) && (y < 24) ) || 
		( (x == 15) && (y < 24) ) || 
		( (x == 16) && (y < 24) ) || 
		( (x == 17) && (y < 24) ) || 
		( (x == 18) && (y < 24) ) ||
		( (x == 19) && (y < 24) ) || 
		( (x == 20) && (y < 24) ) || 
		( (x == 21) && (y < 27) ) || 
		( (x == 22) && (y < 27) ) || 
		( (x == 23) && (y < 30) ) || 
		( (x == 24) && (y < 31) ) || 
		( (x == 25) && (y < 32) ) || 
		( (x == 26) && (y < 29) ) || 
		( (x == 27) && (y < 29) ) || 
		( (x == 28) && (y < 29) ) ||
		( (x == 29) && (y < 29) ) || 
		( (x == 30) && (y < 30) ) || 
		( (x == 31) && (y < 30) ) || 
		( (x == 32) && (y < 30) ) || 
		( (x == 33) && (y < 30) ) || 
		( (x == 34) && (y < 29) ) || 
		( (x == 35) && (y < 29) ) || 
		( (x == 36) && (y < 29) ) || 
		( (x == 37) && (y < 29) ) || 
		( (x == 38) && (y < 31) ) ||
		( (x == 39) && (y < 31) ) || 
		( (x == 40) && (y < 31) ) || 
		( (x == 41) && (y < 29) ) || 
		( (x == 42) && (y < 29) ) || 
		( (x == 43) && (y < 47) ) || 
		( (x == 44) && (y < 47) ) || 
		( (x == 45) && (y < 47) ) || 
		( (x == 46) && (y < 47) ) || 
		( (x == 47) && (y < 47) ) || 
		( (x == 48) && (y < 47) ) ||
		( (x == 49) && (y < 47) ) || 
		( (x == 50) && (y < 29) ) || 
		( (x == 51) && (y < 29) ) || 
		( (x == 52) && (y < 25) ) || 
		( (x == 53) && (y < 25) ) || 
		( (x == 54) && (y < 27) ) || 
		( (x == 55) && (y < 25) ) || 
		( (x == 56) && (y < 25) ) 
		)
		return 3;
	//Default: Silva
	else 
		return 1;
}
	

u32 GetDynamicMapSec_MareS6(bool32 useWarpInfo)
{
	//0: OOB

	//1: Isla Pina
	//2: Mare Occidens
	//3: Mare Tropicum
    //4: Playa Echona

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("MareS6\nX %d\nY %d", x, y);

	//Isla Pina
	//Define Island left to right x: 13 -> 82 with top and bottom limits
	if 
		(
		( (x == 6)  && ( (y > 58) && (y < 71) ) ) ||
		( (x == 7)  && ( (y > 56) && (y < 73) ) ) ||
		( (x == 8)  && ( (y > 54) && (y < 74) ) ) ||
		( (x == 9)  && ( (y > 52) && (y < 74) ) ) ||
		( (x == 10) && ( (y > 52) && (y < 75) ) ) ||
		( (x == 11) && ( (y > 51) && (y < 75) ) ) ||
		( (x == 12) && ( (y > 50) && (y < 76) ) ) ||
		( (x == 13) && ( (y > 50) && (y < 76) ) ) ||
		( (x == 14) && ( (y > 50) && (y < 76) ) ) ||
		( (x == 15) && ( (y > 47) && (y < 76) ) ) ||
		( (x == 16) && ( (y > 37) && (y < 76) ) ) ||
		( (x == 17) && ( (y > 35) && (y < 76) ) ) ||
		( (x == 18) && ( (y > 34) && (y < 76) ) ) ||
		( (x == 19) && ( (y > 34) && (y < 76) ) ) ||
		( (x == 20) && ( (y > 33) && (y < 76) ) ) ||
		( (x == 21) && ( (y > 33) && (y < 76) ) ) ||
		( (x == 22) && ( (y > 32) && (y < 77) ) ) ||
		( (x == 23) && ( (y > 32) && (y < 77) ) ) ||
		( (x == 24) && ( (y > 31) && (y < 78) ) ) ||
		( (x == 25) && ( (y > 30) && (y < 79) ) ) ||
		( (x == 26) && ( (y > 29) && (y < 79) ) ) ||
		( (x == 27) && ( (y > 29) && (y < 80) ) ) ||
		( (x == 28) && ( (y > 29) && (y < 80) ) ) ||
		( (x == 29) && ( (y > 29) && (y < 81) ) ) ||
		( (x == 30) && ( (y > 29) && (y < 82) ) ) ||
		( (x == 31) && ( (y > 29) && (y < 82) ) ) ||
		( (x == 32) && ( (y > 29) && (y < 83) ) ) ||
		( (x == 33) && ( (y > 29) && (y < 83) ) ) ||
		( (x == 34) && ( (y > 29) && (y < 83) ) ) ||
		( (x == 35) && ( (y > 29) && (y < 83) ) ) ||
		( (x == 36) && ( (y > 29) && (y < 83) ) ) ||
		( (x == 37) && ( (y > 29) && (y < 84) ) ) ||
		( (x == 38) && ( (y > 29) && (y < 84) ) ) ||
		( (x == 39) && ( (y > 29) && (y < 84) ) ) ||
		( (x == 40) && ( (y > 29) && (y < 84) ) ) ||
		( (x == 41) && ( (y > 29) && (y < 84) ) ) ||
		( (x == 42) && ( (y > 27) && (y < 84) ) ) ||
		( (x == 43) && ( (y > 26) && (y < 99) ) ) ||
		( (x == 44) && ( (y > 25) && (y < 99) ) ) ||
		( (x == 45) && ( (y > 25) && (y < 99) ) ) ||
		( (x == 46) && ( (y > 24) && (y < 99) ) ) ||
		( (x == 47) && ( (y > 24) && (y < 99) ) ) ||
		( (x == 48) && ( (y > 23) && (y < 99) ) ) ||
		( (x == 49) && ( (y > 22) && (y < 99) ) ) ||
		( (x == 50) && ( (y > 22) && (y < 99) ) ) ||
		( (x == 51) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 52) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 53) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 54) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 55) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 56) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 57) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 58) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 59) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 60) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 61) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 62) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 63) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 64) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 65) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 66) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 67) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 68) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 69) && ( (y > 21) && (y < 99) ) ) ||
		( (x == 70) && ( (y > 22) && (y < 99) ) ) ||
		( (x == 71) && ( (y > 22) && (y < 99) ) ) ||
		( (x == 72) && ( (y > 22) && (y < 99) ) ) ||
		( (x == 73) && ( (y > 23) && (y < 99) ) ) ||
		( (x == 74) && ( (y > 24) && (y < 99) ) ) ||
		( (x == 75) && ( (y > 24) && (y < 99) ) ) ||
		( (x == 76) && ( (y > 24) && (y < 99) ) ) ||
		( (x == 77) && ( (y > 24) && (y < 99) ) ) ||
		( (x == 78) && ( (y > 24) && (y < 99) ) ) ||
		( (x == 79) && ( (y > 25) && (y < 85) ) ) ||
		( (x == 80) && ( (y > 26) && (y < 85) ) ) ||
		( (x == 81) && ( (y > 27) && (y < 85) ) ) ||
		( (x == 82) && ( (y > 27) && (y < 85) ) ) ||
		( (x == 83) && ( (y > 28) && (y < 85) ) ) ||
		( (x == 84) && ( (y > 29) && (y < 85) ) ) ||
		( (x >= 85) && ( (y > 30) && (y < 63) ) ) 
		)
		return 1;
    //Acta Echona
    else if (
            ( (y <= 0) && (x > 68) ) ||
            ( (y == 1)  && (x > 68) ) ||
            ( (y == 2)  && (x > 68) ) ||
            ( (y == 3)  && (x > 73) ) ||
            ( (y == 4)  && (x > 74) ) 
            )
            return 4;
	//Mare Occidens
	else if (x < 78)
		return 2;
	//Mare Tropicum
	else
		return 3;
}

u32 GetDynamicMapSec_MareWW(bool32 useWarpInfo)
{
	//0: OOB
	//1: River Delta
	//2: Mare Tropicum
	//3: Playa Echona

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	//River Delta
	if 
		(
		 ( (x <= 1) && (y < 19) ) ||
		 ( (x == 2) && (y < 17) ) ||
		 ( (x == 3) && (y < 14) ) ||
		 ( (x == 4) && (y > 5 && y < 12) ) 
		)
		return 1;
	//Mare Tropicum
	else if 
		(
		( (x == 11) && (y > 30) ) ||
		( (x == 12) && (y > 29) ) ||
		( (x == 13) && (y > 28) ) ||
		( (x == 14) && (y > 28) ) ||
		( (x == 15) && (y > 27) ) ||
		( (x == 16) && (y > 26) ) ||
		( (x == 17) && (y > 25) ) ||
		( (x == 18) && (y > 25) ) ||
		( (x == 19) && (y > 24) ) ||
		( (x == 20) && (y > 22) ) ||
		( (x == 21) && (y > 18) ) ||
		( (x == 22) && (y > 17) ) ||
		( (x == 23) && (y > 17) ) ||
		( (x == 24) && (y > 16) ) ||
		( (x == 25) && (y > 15) ) ||
		( (x == 26) && (y > 14) ) ||
		( (x == 27) && (y > 13) ) ||
		( (x == 28) && (y > 12) ) ||
		( (x == 29) && (y > 11) ) ||
		( (x == 30) && (y > 11) ) ||
		( (x == 31) && (y >  9) ) ||
		( (x == 32) && (y >  8) ) ||
		( (x == 33) && (y >  8) ) ||
		( (x == 34) && (y >  8) ) ||
		( (x == 35) && (y >  8) ) ||
		( (x == 36) && (y >  8) ) ||
		( (x == 37) && (y >  8) ) ||
		( (x >= 38) && (y >  8) )
		)
		return 2;
	//Playa Echona
	else
		return 3;
}

u32 GetDynamicMapSec_CityClara(bool32 useWarpInfo)
{
	//0: OOB
	//1: Acta Echona
	//2: Silva Profunda
	//3: Via Fidelium
	//4: Sinus Clarus
	//5: Castalia
	//6: Delta Draci
	
	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	//Deltus Draci
	if (y > 51 &&  x < 2)
		return 6;
	//Acta Echona
	else if (y > 60)
		return 1;
	//Silva 
	else if (x < 8 && y < 52)
		return 2;
	//Via Fidelium
	else if ( (y < 9) && (x > 60))
		return 3;
	//Sinus Clarus
	else if (x > 72)
		return 4;
	//Delta Draci
	else if (x < 2 && y > 51)
		return 6;
	else 
		return 5;
}

u32 GetDynamicMapSec_MareW(bool32 useWarpInfo)
{
	//0: OOB
	//1: Acta Echona
	//2: Mare Internum
	//3: Mare Tranquillum
	//4: Mare Tropicum
	
	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	//Acta Echona
	if 
		(
		( (y <= 3) && (x < 39) ) ||
		( (y == 4) && (x < 34) ) ||
		( (y == 5) && (x < 27) ) ||
		( (y == 6) && (x < 22) ) ||
		( (y == 7) && (x < 16) ) ||
		( (y == 8) && (x < 5) )
		)
			return 1;
	//Mare Internum
	else if
		(
		( (y <= 0) && ( (x < 88) && (x > 51) ) ) ||
		( (y == 1) && ( (x < 87) && (x > 51) ) ) ||
		( (y == 2) && ( (x < 86) && (x > 51) ) ) ||
		( (y == 3) && ( (x < 84) && (x > 52) ) )
		)
			return 2;
	//Mare Tranquillum
	else if
		(
		( (x >= 120) ) ||
		( (x ==  95) && (y < 2) ) ||
		( (x ==  96) && (y < 3) ) ||
		( (x ==  97) && (y < 4) ) ||
		( (x ==  98) && (y < 5) ) ||
		( (x ==  99) && (y < 7) ) ||
		( (x == 100) && (y < 9) ) ||
		( (x == 101) && (y < 10) ) ||
		( (x == 102) && (y < 11) ) ||
		( (x == 103) && (y < 12) ) ||
		( (x == 104) && (y < 14) ) ||
		( (x == 105) && (y < 15) ) ||
		( (x == 106) && (y < 15) ) ||
		( (x == 107) && (y < 16) ) ||
		( (x == 108) && (y < 17) ) ||
		( (x == 109) && (y < 19) ) ||
		( (x == 111) && (y < 20) ) ||
		( (x == 112) && (y < 21) ) ||
		( (x == 113) && (y < 22) ) ||
		( (x == 114) && (y < 24) ) ||
		( (x == 115) && (y < 25) ) ||
		( (x == 116) && (y < 26) ) ||
		( (x == 117) && (y < 27) ) ||
		( (x == 118) && (y < 29) ) ||
		( (x == 119) && (y < 31) ) 
		)
			return 3;
	//Mare Tropica is Default
	else
		return 4;
}

u32 GetDynamicMapSec_SRoute18(bool32 useWarpInfo)
{
	//0: OOB
	//1: Sinus Pacificus
	//2: Castrum
	//3: Sinus Clarus
	//4: Mare Internum
	
	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	//Sinus Pacificus (Top Left)
	if 
		(
		(y <= 6) ||
		( (y == 7)  && (x < 41) ) ||
		( (y == 8)  && (x < 40) ) ||
		( (y == 9)  && (x < 39) ) ||
		( (y == 10) && (x < 38) ) ||
		( (y == 11) && (x < 37) ) ||
		( (y == 12) && (x < 36) ) ||
		( (y == 13) && (x < 35) ) ||
		( (y == 14) && (x < 34) ) ||
		( (y == 15) && (x < 33) ) ||
		( (y == 16) && (x < 32) ) ||
		( (y == 17) && (x < 31) ) ||
		( (y == 18) && (x < 30) ) ||
		( (y == 19) && (x < 29) ) ||
		( (y == 20) && (x < 28) ) ||
		( (y == 21) && (x < 25) ) ||
		( (y == 22) && (x < 23) )
		)
		return 1;
	//Castrum (Bottom Right)
	else if 
		( 
        ( (x > 47) && (y > 109) ) || //East of the wall bottom area
        ( (x > 40) && (y > 113) ) || // East of the Rock bottom area
        ( (x == 40) && (y > 120) ) || //Begin step by step of the rocky penninsula below port
        ( (x == 39) && (y > 120) ) ||
        ( (x ==38) && ( (y < 134) && (y > 120) ) ) ||
        ( (x ==37) && ( (y < 134) && (y > 121) ) ) ||
        ( (x ==36) && ( (y < 133) && (y > 121) ) ) ||
        ( (x ==35) && ( (y < 131) && (y > 121) ) ) ||
        ( (x ==34) && ( (y < 130) && (y > 121) ) ) 
        )
		return 2;
	//Sinus Clarus (Down Left)
	else if
		( (x < 10) && ( (y > 79) && (y < 117) ) )
		return 3;
	//Mare Internum (Default)
	else 
		return 4;
}

bool32 GetDynamicMapSec_MareS5(bool32 useWarpInfo)
{
	//1: Mare Tropicum
	//2: Acta Echona
    //3: Isla Pina
	
    s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }
	
	//Acta Echona - Top Left
	if
		(
        (x < 1 && y < 5) ||
        (x == 1 && y < 5) ||
        (x == 2 && y < 5) ||
        (x == 3 && y < 5) ||
        (x == 4 && y < 5) ||
        (x == 5 && y < 5) ||
        (x == 6 && y < 4) ||
        (x == 7 && y < 3) ||
        (x == 8 && y < 3) ||
        (x == 9 && y < 2) ||
        (x == 10 && y < 2)
		)
		return 2;
    //Isla Pina - 3
    else if
        (
        (x < 1 && y > 30 && y < 57) ||
        (x == 1 && y > 32 && y < 54) ||
        (x == 2 && y > 35 && y < 51) ||
        (x == 3 && y > 37 && y < 49) 
        )
        return 3;
    //Mare Tropicum is Default
	else 
		return 1;
}
	
u32 GetDynamicMapSec_Route4(bool32 useWarpInfo)
{	

	//1: Via Fidelium - South of Mountain and Bay
	//2: Via Litoralis - Include grass patch top left and top road area
	//3: Sinus Pacificus - Include most of mount and top and bottom bay beach

    s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

    //Via Fidelium - Bottom
    if (y > 41)
        return 1;
    //Via Litoralis - Top and top left grassy area
    else if 
        (
        (y < 11)  ||
        ( (x <= 8)  && (y < 21) ) ||
        ( (x == 9)  && (y < 21) ) ||
        ( (x == 10) && (y < 21) ) ||
        ( (x == 11) && (y < 20) ) ||
        ( (x == 12) && (y < 19) ) ||
        ( (x == 13) && (y < 18) ) ||
        ( (x == 14) && (y < 17) ) ||
        ( (x == 15) && (y < 16) ) ||
        ( (x == 16) && (y < 15) ) ||
        ( (x == 17) && (y < 14) ) ||
        ( (x == 18) && (y < 13) ) ||
        ( (x == 19) && (y < 12) ) 
        )
        return 2;
    //Sinus Pacificus = Default
     else
         return 3;

}


u32 GetDynamicMapSec_Route6(bool32 useWarpInfo)
{

    //1: Via Litoralis
    //2: Villa Vivaria
    //3: Sinus Pacificus
    
    s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }


    //1: Via Litoralis - Top Left maybe bottom Right
    if (y < 11 && x < 43)
        return 1;
    //2: Villa Safari - Top Right
    else if (x > 43 || (x == 43 && y < 8) )
        return 2;
    //3: Sinus Pacificus - Default
    else
        return 3;
}

u32 GetDynamicMapSec_Route7(bool32 useWarpInfo)
{
    s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

    //1: Via Litoralis
    //2: Mare Internum
    //3: Montes Vigiliae
    //4: Villa Vallis
    //5: Sabina Nova


    //Via Litoralis
    if (y < 28)
        return 1;
    //Mare Internum
    else if (x < 4 && y < 45)
        return 2;
    //Montes Vigiliae
    else if 
        (
        (y > 74) ||
        ( (y == 74) && (x > 7) ) ||
        ( (y == 73) && (x > 9) ) ||
        ( (y == 72) && (x > 10) ) ||
        ( (y == 71) && (x > 10) ) ||
        ( (y == 70) && (x > 10) ) ||
        ( (y == 69) && (x > 10) ) ||
        ( (y == 68) && (x > 10) ) ||
        ( (y == 67) && (x > 25) ) 
        )
        return 3;
    //Villa Vallis
    else if (y > 46)
        return 4;
    //Sabina Nova
    else
        return 5;
}

u32 GetDynamicMapSec_Route5(bool32 useWarpInfo)
{

	//1: Venator Mons
	//2: Via Litoralis
	//3: Villa Venatorum

    s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("Route5\nx: %d\ny: %d\n", x, y);

	//Venator Mons
	if 
		(
		(x < 18) ||
		(x == 18 && ( (y > 14) && (y < 18) ) ) ||
		(x == 19 && ( y == 16 || y == 17) )
		)
			return 1;
	//Via Litoralis
	else if (x > 44)
		return 2;
	//Villa Venatorum is default
	else 
		return 3;
}

bool32 IsSanjoSabinaNova(bool32 useWarpInfo) 
{

   	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	if (x > 26 && y < 17)
		return FALSE;
	else
		return TRUE;
}

bool32 IsDoakTownRobustica(bool32 useWarpInfo) 
{

   	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	if ( (y > 15 && y < 25) && (x > 24) )
		return FALSE;
	else
		return TRUE;
}

bool32 IsSRoute19MareInternum(bool32 useWarpInfo) 
{

   	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	if 
		(
		( (x == 16) && (y > 83) ) ||
		( (x == 17) && (y > 82) ) ||
		( (x == 18) && (y > 82) ) ||
		( (x == 19) && (y > 82) ) ||
		( (x == 20) && (y > 81) ) ||
		( (x == 21) && (y > 81) ) ||
		( (x == 22) && (y > 81) ) ||
		( (x == 23) && (y > 80) ) ||
		( (x == 24) && (y > 79) ) ||
		( (x == 25) && (y > 78) ) ||
		( (x == 26) && (y > 74) )
		)
		return FALSE;
	else
		return TRUE;
}

bool32 IsRoute9ViaSaxosa(bool32 useWarpInfo)
{
   	
    s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

    if 
        (
        (y > 32) ||
        (x < 6 && y > 26)
        )
        return FALSE;
    else
        return TRUE;
}

bool32 IsRoute16VenatorMons(bool32 useWarpInfo)
{
   	
    s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	if 
		(
		( (y == 11) && (x > 28) ) ||
		( (y == 12) && (x > 23) ) ||
		( (y == 13) && (x > 13) ) ||
		( (y == 14) && (x > 13) ) ||
		( (y == 15) && (x > 13) ) ||
		( (y == 16) && (x > 13) ) ||
		( (y == 17) && (x > 13) ) ||
		( (y == 18) && (x > 13) ) ||
		( (y == 19) && (x > 13) ) ||
		( (y == 20) && (x > 13) ) ||
		( (y == 21) && (x > 13) ) ||
		( (y == 22) && (x > 13) ) ||
		( (y == 23) && (x > 14) ) ||
		( (y == 24) && (x > 14) ) ||
		( (y == 25) && (x > 14) ) ||
		( (y == 26) && (x > 14) ) ||
		( (y == 27) && (x > 14) ) ||
		( (y == 28) && (x > 14) ) ||
		( (y == 29) && (x > 14) ) ||
		( (y == 30) && (x > 14) ) ||
		( (y == 31) && (x > 14) ) ||
		( (y == 32) && (x > 14) ) ||
		( (y == 33) && (x > 14) ) ||
		( (y == 34) && (x > 15) ) ||
		( (y == 35) && ( (x > 15) && (x < 41) ) ) ||
		( (y == 36) && ( (x > 15) && (x < 40) ) ) ||
		( (y == 37) && ( (x > 15) && (x < 39) ) ) ||
		( (y == 38) && ( (x > 15) && (x < 37) ) ) ||
		( (y == 39) && ( (x > 16) && (x < 35) ) ) ||
		( (y == 40) && ( (x > 16) && (x < 34) ) ) ||
		( (y == 41) && ( (x > 16) && (x < 31) ) ) ||
		( (y == 42) && ( (x > 17) && (x < 29) ) ) ||
		( (y == 43) && ( (x > 18) && (x < 26) ) )
		)
		return FALSE;
	else
		return TRUE;
}

u32 GetDynamicMapSec_Tucson(bool32 useWarpInfo)
{
	//1: Via Magna
	//2: Oasis
	//3: Deseret

    s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	//Via Magna
	if 
		(
		(x > 117) && (y > 26)
		)
			return 1;
	//Oasis
	else if ( x > 93 && y < 27)
		return 2;
	//Default return Deseret
	else 
		return 3;
}

bool32 IsPyramidsDCactorum(bool32 useWarpInfo)
{
   	
    s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	if 
		(
        (x > 52 && y < 58) ||
        (x == 52 && y < 47) ||
        (x == 51 && y < 37) ||
        (x == 50 && y < 35) ||
        (x == 49 && y < 35) ||
        (x == 48 && y < 32) ||
        (x == 47 && y < 30) ||
        (x == 46 && y < 27) ||
        (x == 45 && y < 16)
        )
        return FALSE;
    else
        return TRUE;
}

bool32 GetDynamicMapSec_Vegas(bool32 useWarpInfo)
{

	//1: Peccatum
	//2: Via Magna
	//3: D. Columnaris
    s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("GetDynamicMapSec_Vegas\nuseWarpInfo: %d\nx: %d\ny: %d\nsWarpDestination.x: %d\nsWarpDestination.y: %d", useWarpInfo, x, y,sWarpDestination.x, sWarpDestination.x);

	//Via Magna
	if (x > 18 && x < 27 && y > 26)
		return 2;
	//D. Columnaris
	else if (x < 7 && y > 17)
		return 3;
	else
		return 1;
}

bool32 GetDynamicMapSec_EliciusBeach(bool32 useWarpInfo)
{
	//1: Via Saxosa
	//2: Tranquillitas
    //3: Montes  Vigilliae
	//4: Acta Tranquilla
    //5: Mare Tranquiluma
    s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("GetDynamicMapSec_EliciusBeach\nuseWarpInfo: %d\nx: %d\ny: %d\nsWarpDestination.x: %d\nsWarpDestination.y: %d", useWarpInfo, x, y,sWarpDestination.x, sWarpDestination.x);

	//Via Saxosa
    if (x < 5 && y < 14)
        return 1;
	//Tranquilitas
    else if (y < 31)
        return 2;
    //Montes Vigiliae
    else if 
        (
        (x <= 1 && y < 57) ||
        (x == 2 && y < 57) ||
        (x == 3 && y < 57) ||
        (x == 4 && y < 57) ||
        (x == 5 && y < 57) ||
        (x == 6 && y < 57) ||
        (x == 7 && y < 56) ||
        (x == 8 && y < 56 && y > 50)
        )
        return 3;
    //Acta Tranquilla
     else if
		 (
		  (x == 6  && y == 57) ||
		  (x == 7  && y < 58) ||
		  (x == 8  && y < 58) ||
		  (x == 9  && y < 58) ||
		  (x == 10 && y < 58) ||
		  (x == 11 && y < 58) ||
		  (x == 12 && y < 58) ||
		  (x == 13 && y < 58) ||
		  (x == 14 && y < 58) ||
		  (x == 15 && y < 58) ||
		  (x == 16 && y < 58) ||
		  (x == 17 && y < 58) ||
		  (x == 18 && y < 56) ||
		  (x == 19 && y < 55) ||
		  (x == 20 && y < 54) ||
		  (x == 21 && y < 53) ||
		  (x == 22 && y < 52) ||
		  (x == 23 && y < 52) ||
		  (x == 24 && y < 51) ||
		  (x == 25 && y < 50) ||
		  (x == 26 && y < 50) ||
		  (x == 27 && y < 49) ||
		  (x == 28 && y < 49) ||
		  (x == 29 && y < 48) ||
		  (x == 30 && y < 48) ||
		  (x == 31 && y < 48) ||
		  (x == 32 && y < 47) ||
		  (x == 33 && y < 47) ||
		  (x == 34 && y < 47) ||
		  (x == 35 && y < 47) ||
		  (x == 36 && y < 47) ||
		  (x == 37 && y < 46) ||
		  (x == 38 && y < 46) ||
		  (x == 39 && y < 46) ||
		  (x == 40 && y < 46) ||
		  (x >= 41 && y < 46) 
		  )
		  return 4;
	//Default Mare Tranquilum
	else
		return 5;
}

bool32 GetDynamicMapSec_Route10(bool32 useWarpInfo)
{
	//1: Tranquillitas
	//2: Acta Tranquilla
    //3: Mare Tranquiluma
    s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("GetDynamicMapSec_Route10\nuseWarpInfo: %d\nx: %d\ny: %d\nsWarpDestination.x: %d\nsWarpDestination.y: %d", useWarpInfo, x, y,sWarpDestination.x, sWarpDestination.x);

    //Tranquillitas
    if 
        (
        (x < 4 && y < 15) ||
        (x < 9 && y < 11)
        )
        return 1;
    //Mare Tranquillum
    else if 
        (
        (y > 29) ||
        (y == 29 && x > 12 && x < 72) ||
        (y == 28 && x > 16 && x < 25) ||
        (y == 28 && x > 36 && x < 45) ||
        (y == 28 && x > 60 && x < 68) 
        )
        return 3;
    //Default is Acta Tranquilla
    else 
        return 2;
}

bool32 GetDynamicMapSec_Route11(bool32 useWarpInfo)
{
	//1: Portus Urbis
	//2: Acta Tranquilla
    //3: Mare Tranquiluma
    s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("GetDynamicMapSec_Route11\nuseWarpInfo: %d\nx: %d\ny: %d\nsWarpDestination.x: %d\nsWarpDestination.y: %d", useWarpInfo, x, y,sWarpDestination.x, sWarpDestination.x);


	//Left side - Top is all Acta, bottom all Mare
	if (x < 10) {
		if (y < 41)
			return 2;
		else
			return 3;
	}
	//Right / most the map - top is Portus bottom is Mare
	else {
		if (y < 46)
			return 1;
		else
			return 3;
	}

}

bool32 IsPenninsulaECastrum(bool32 useWarpInfo)
{
	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

    if (
       (y == 21 && x > 72) ||
       (y == 22 && x > 43 && x < 58) ||
       (y == 22 && x > 72) ||
       (y == 23 && x > 35) ||
       (y == 24 && x > 34) ||
       (y == 25 && x > 25) ||
       (y == 26 && x > 21) ||
       (y == 27 && x > 21) ||
       (y == 28 && x > 21) ||
       (y == 29 && x > 11) ||
       (y == 30 && x > 11) ||
       (y > 30)
       )
        return FALSE;
    else
        return TRUE;

}

bool32 GetDynamicMapSec_Hippodrome(bool32 useWarpInfo)
{
	//1: Villae Rusticae
	//2: Circus
	//3: Ilium
	//4: Urbia
	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	if (x < 10)
		return 1;
	else if (x > 14 && y > 5 && y < 61)
		return 2;
	else if (y < 1 && x > 20)
		return 3;
	else
		return 4;
}

bool32 IsBikeMapEViaMagna(bool32 useWarpInfo)
{
	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

    if (y > 29 && x < 123)
        return FALSE;
    else
        return TRUE;
}

bool32 IsBikeMapWViaMagna(bool32 useWarpInfo)
{
	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

    if (y > 27 && x > 135)
        return FALSE;
    else
        return TRUE;
}

bool32 IsBikeRouteFarmViaMagna(bool32 useWarpInfo)
{
	s16 x;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
    }

    if (x > 20)
        return FALSE;
    else
        return TRUE;
}

bool32 IsSanjoRockFillerSabinaNova(bool32 useWarpInfo)
{
	s16 y;
    if (useWarpInfo) 
    {
        y = sWarpDestination.y;
    } else
    {
        y = gSaveBlock1Ptr->pos.y;
    }

    if (y > 4)
        return TRUE;
    else
        return FALSE;
}

bool32 IsGatoCityParkNThermae(bool32 useWarpInfo)
{
	s16 y, x;
    if (useWarpInfo) 
    {
        y = sWarpDestination.y;
        x = sWarpDestination.x;
    } else
    {
        y = gSaveBlock1Ptr->pos.y;
        x = gSaveBlock1Ptr->pos.x;
    }

    if 
		(
		(x == 18 && y < 17) ||
		(x == 19 && y < 23) ||
		(x == 20 && y < 25) ||
		(x == 21 && y < 25) ||
		(x == 22 && y < 27) ||
		(x == 23 && y < 27) ||
		(x > 23 && y < 28)
		)
        return TRUE;
    else
        return FALSE;
}

u32 GetDynamicMapSec_MareS4(bool32 useWarpInfo)
{

	//1: Mare Tropicum
	//2: Mare Tranquillum
	//3: Mare Subtropicum
    //4: Isla Herba Bona
    //5: Isla Hesperia
    //6: Scylla Charybdis

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("MareS4\nX %d\nY %d", x, y);

    //Mare Tranquillum
    if
        (
        (x == 75 && y < 1) ||
        (x == 76 && y < 2) ||
        (x == 77 && y < 3) ||
        (x == 78 && y < 4) ||
        (x == 79 && y < 5) ||
        (x == 80 && y < 7) ||
        (x == 81 && y < 8) ||
        (x == 82 && y < 9) ||
        (x == 83 && y < 10) ||
        (x == 84 && y < 10) ||
        (x >= 85 && y < 10)
        )
        return 2;
    //Mare Subtropicum
    else if
        (
        (x == 72 && y > 84) ||
        (x == 73 && y > 82) ||
        (x == 74 && y > 80) ||
        (x == 75 && y > 78) ||
        (x == 76 && y > 75) ||
        (x == 77 && y > 73) ||
        (x == 78 && y > 71) ||
        (x == 79 && y > 68) ||
        (x == 80 && y > 66) ||
        (x == 81 && y > 64) ||
        (x == 82 && y > 62) ||
        (x == 83 && y > 57) ||
        (x == 84 && y > 58) ||
        (x >= 85 && y > 58)
        )
        return 3;
    //Isla Herba Bona
    else if
        (
        (x == 63 && y > 21 && y < 40) ||
        (x == 64 && y > 21 && y < 43) ||
        (x == 65 && y > 18 && y < 45) ||
        (x == 66 && y > 15 && y < 45) ||
        (x == 67 && y > 13 && y < 47) ||
        (x == 68 && y > 13 && y < 47) ||
        (x == 69 && y > 12 && y < 47) ||
        (x == 70 && y > 12 && y < 48) ||
        (x == 71 && y > 12 && y < 48) ||
        (x == 72 && y > 10 && y < 45) ||
        (x == 73 && y > 10 && y < 45) ||
        (x == 74 && y >  9 && y < 46) ||
        (x == 75 && y >  9 && y < 46) ||
        (x == 76 && y >  9 && y < 43) ||
        (x == 77 && y >  9 && y < 46) ||
        (x == 78 && y >  9 && y < 47) ||
        (x == 79 && y >  9 && y < 48) ||
        (x == 80 && y >  9 && y < 48) ||
        (x == 80 && y > 52 && y < 55) || //Special Case near whirlpool
        (x == 81 && y >  9 && y < 56) ||
        (x == 82 && y >  9 && y < 57) ||
        (x == 83 && y >  9 && y < 58) ||
        (x == 84 && y >  9 && y < 59) ||
        (x >= 85 && y >  9 && y < 59)
        )
        return 4;
    //Isla Hesperia
    else if 
        (
        (x == 19 && y > 83) ||
        (x == 20 && y > 82) ||
        (x == 21 && y > 82) ||
        (x == 22 && y > 81) ||
        (x == 23 && y > 81) ||
        (x == 24 && y > 78) ||
        (x == 25 && y > 77) ||
        (x == 26 && y > 75) ||
        (x == 27 && y > 73) ||
        (x == 28 && y > 72) ||
        (x == 29 && y > 71) ||
        (x == 30 && y > 69) ||
        (x == 31 && y > 68) ||
        (x == 32 && y > 67) ||
        (x == 33 && y > 66) ||
        (x == 34 && y > 65) ||
        (x == 35 && y > 64) ||
        (x == 36 && y > 63) ||
        (x == 37 && y > 62) ||
        (x == 38 && y > 61) ||
        (x == 39 && y > 61) ||
        (x == 40 && y > 59) ||
        (x == 41 && y > 58) ||
        (x == 42 && y > 57) ||
        (x == 43 && y > 56) ||
        (x == 44 && y > 55) ||
        (x == 45 && y > 54) ||
        (x == 46 && y > 54) ||
        (x == 47 && y > 53) ||
        (x == 48 && y > 52) ||
        (x == 49 && y > 50) ||
        (x == 50 && y > 49) ||
        (x == 51 && y > 48) ||
        (x == 52 && y > 47) ||
        (x == 53 && y > 47) ||
        (x == 54 && y > 46) ||
        (x == 55 && y > 46) ||
        (x == 56 && y > 46) ||
        (x == 57 && y > 46) ||
        (x == 58 && y > 46) ||
        (x == 59 && y > 46) ||
        (x == 60 && y > 46) ||
        (x == 61 && y > 46) ||
        (x == 62 && y > 46) ||
        (x == 63 && y > 46) ||
        (x == 64 && y > 46) ||
        (x == 65 && y > 46) ||
        (x == 66 && y > 46) ||
        (x == 67 && y > 46) ||
        (x == 68 && y > 46) ||
        (x == 69 && y > 46) ||
        (x == 70 && y > 47 && y != 49) ||
        (x == 71 && y > 52) ||
        (x == 72 && y > 53 && y < 85) ||
        (x == 73 && y > 53 && y < 83) ||
        (x == 74 && y > 55 && y < 81) ||
        (x == 75 && y > 55 && y < 79) ||
        (x == 76 && y > 57 && y < 76) ||
        (x == 77 && y > 57 && y < 74) ||
        (x == 78 && y > 54 && y < 72) ||
        (x == 79 && y > 54 && y < 69) ||
        (x == 80 && y > 54 && y < 67) ||
        (x == 81 && y > 55 && y < 65) ||
        (x == 82 && y > 56 && y < 63) 
        )
        return 5;
    //Scylla Charybdis
    else if
        (
        (x == 69 && y == 49) ||
        (x == 70 && y > 46 && y < 52) ||
        (x == 71 && y > 46 && y < 52) ||
        (x == 72 && y > 45 && y < 53) ||
        (x == 73 && y > 45 && y < 54) ||
        (x == 74 && y > 43 && y < 54) ||
        (x == 75 && y > 43 && y < 56) ||
        (x == 76 && y > 46 && y < 55) ||
        (x == 77 && y > 47 && y < 56) ||
        (x == 78 && y > 48 && y < 55) ||
        (x == 79 && y > 48 && y < 55) ||
        (x == 80 && y == 52)
        )
        return 6;
    //Mare Tropicum is Default
    else 
        return 1;
}

u32 GetDynamicMapSec_MareS3(bool32 useWarpInfo)
{

	//1: Mare Tranquillum
	//2: Mare Subtropicum
	//3: Isla Herba Bona

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("MareS3\nX %d\nY %d", x, y);

    //Mare Tropicum - Top
    if
        (
        (x < 7   && y < 10) ||
        (x == 7  && y < 11) ||
        (x == 8  && y < 12) ||
        (x == 9  && y < 12) ||
        (x == 10 && y < 12) ||
        (x == 11 && y < 13) ||
        (x == 12 && y < 13) ||
        (x == 13 && y < 14) ||
        (x == 14 && y < 14) ||
        (x == 15 && y < 15) ||
        (x == 16 && y < 15) ||
        (x == 17 && y < 16) ||
        (x == 18 && y < 17) ||
        (x == 19 && y < 18) ||
        (x == 20 && y < 19) ||
        (x == 21 && y < 20) ||
        (x == 22 && y < 21) ||
        (x == 23 && y < 22) ||
        (x == 24 && y < 23) ||
        (x == 25 && y < 24) ||
        (x == 26 && y < 25) ||
        (x == 27 && y < 26) ||
        (x == 28 && y < 26) ||
        (x == 29 && y < 26) ||
        (x == 30 && y < 26) ||
        (x == 31 && y < 26) ||
        (x == 32 && y < 25) ||
        (x == 33 && y < 25) ||
        (x == 34 && y < 25) ||
        (x == 35 && y < 25) ||
        (x == 36 && y < 25) ||
        (x == 37 && y < 25) ||
        (x == 38 && y < 25) ||
        (x == 39 && y < 25) ||
        (x == 40 && y < 25) ||
        (x == 41 && y < 25) ||
        (x == 42 && y < 25) ||
        (x == 43 && y < 25) ||
        (x == 44 && y < 25) ||
        (x == 45 && y < 25) ||
        (x == 46 && y < 25) ||
        (x == 47 && y < 25) ||
        (x == 48 && y < 25) ||
        (x == 49 && y < 25) ||
        (x == 50 && y < 25) ||
        (x == 51 && y < 25) ||
        (x == 52 && y < 25) ||
        (x == 53 && y < 25) ||
        (x == 54 && y < 25) ||
        (x == 55 && y < 25) ||
        (x == 56 && y < 25) ||
        (x == 57 && y < 25) ||
        (x == 58 && y < 25) ||
        (x == 59 && y < 25) ||
        (x == 60 && y < 25) ||
        (x == 61 && y < 26) ||
        (x == 62 && y < 26) ||
        (x == 63 && y < 26) ||
        (x == 64 && y < 27) ||
        (x == 65 && y < 28) ||
        (x == 66 && y < 29) ||
        (x == 67 && y < 30) ||
        (x == 68 && y < 30) ||
        (x == 69 && y < 32) ||
        (x == 70 && y < 33) ||
        (x == 71 && y < 34) ||
        (x == 72 && y < 35) ||
        (x == 73 && y < 35) ||
        (x == 74 && y < 36) ||
        (x == 75 && y < 37) ||
        (x == 76 && y < 37) ||
        (x == 77 && y < 38) ||
        (x == 78 && y < 38) ||
        (x == 79 && y < 39) ||
        (x == 80 && y < 39) ||
        (x == 81 && y < 40) ||
        (x == 82 && y < 40) ||
        (x == 83 && y < 40) ||
        (x == 84 && y < 40) ||
        (x >= 85 && y < 40) 
        )
        return 1;
    //Mare Subtropicum
    else if
        (
        (x < 18 && y > 59) ||
        (x == 18 && y > 60) ||
        (x == 19 && y > 73) ||
        (x == 20 && y > 80) ||
        (x == 21 && y > 84) ||
        (x == 51 && y > 84) ||
        (x == 52 && y > 84) ||
        (x == 53 && y > 84) ||
        (x == 54 && y > 84) ||
        (x == 55 && y > 84) ||
        (x == 56 && y > 83) ||
        (x == 57 && y > 83) ||
        (x == 58 && y > 83) ||
        (x == 59 && y > 83) ||
        (x == 60 && y > 83) ||
        (x == 61 && y > 83) ||
        (x == 62 && y > 82) ||
        (x == 63 && y > 82) ||
        (x == 64 && y > 82) ||
        (x == 65 && y > 81) ||
        (x == 66 && y > 81) ||
        (x == 67 && y > 80) ||
        (x == 68 && y > 80) ||
        (x == 69 && y > 79) ||
        (x == 70 && y > 79) ||
        (x == 71 && y > 79) ||
        (x == 72 && y > 79) ||
        (x == 73 && y > 79) ||
        (x == 74 && y > 78) ||
        (x == 75 && y > 78) ||
        (x == 76 && y > 78) ||
        (x == 77 && y > 77) ||
        (x == 78 && y > 77) ||
        (x == 79 && y > 76) ||
        (x == 80 && y > 75) ||
        (x == 81 && y > 75) ||
        (x == 82 && y > 74) ||
        (x == 83 && y > 74) ||
        (x == 84 && y > 73) ||
        (x >= 85 && y > 73)
        )
        return 2;
    //Isla Herba Bona is default
    else
        return 3;
}

u32 GetDynamicMapSec_MareS2(bool32 useWarpInfo)
{

	//1: Mare Tranquillum
	//2: Mare Mortuorum
	//3: Mare Subtropicum
	//4: Isla Herba Bona
	//5: Mortia

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("MareS2\nX %d\nY %d", x, y);

	//Mare Tranquilluma
	if 
		(
		(x  < 7  && y < 41) ||
		(x == 7  && y < 39) ||
		(x == 8  && y < 36) ||
		(x == 9  && y < 33) ||
		(x == 10 && y < 31) ||
		(x == 11 && y < 29) ||
		(x == 12 && y < 27) ||
		(x == 13 && y < 25) ||
		(x == 14 && y < 22) ||
		(x == 15 && y < 20) ||
		(x == 16 && y < 17) ||
		(x == 17 && y < 14) ||
		(x == 18 && y < 12) ||
		(x == 19 && y < 11) ||
		(x == 20 && y < 10) ||
		(x == 21 && y <  8) ||
		(x == 22 && y <  6) ||
		(x == 23 && y <  5) ||
		(x == 24 && y <  4) 
		)
		return 1;
	//3: Mare Subtropicum
	else if 
		(
		(x < 1   && y > 73) ||
		(x == 1  && y > 72) ||
		(x == 2  && y > 70) ||
		(x == 3  && y > 70) ||
		(x == 4  && y > 69) ||
		(x == 5  && y > 74) ||
		(x == 6  && y > 79) ||
		(x == 7  && y > 80) ||
		(x == 8  && y > 81) ||
		(x == 9  && y > 82) ||
		(x == 10 && y > 83) ||
		(x == 11 && y > 83) ||
		(x == 12 && y > 84) ||
		(x == 13 && y > 84) 
		)
		return 3;
	//4: Isla Herba Bona
	else if
		(
		(x  < 1  && y > 40 && y < 74) ||
		(x == 1  && y > 40 && y < 73) ||
		(x == 2  && y > 40 && y < 71) ||
		(x == 3  && y > 40 && y < 71) ||
		(x == 4  && y > 40 && y < 70) ||
		(x == 5  && y > 40 && y < 69) ||
		(x == 6  && y > 40 && y < 68) ||
		(x == 7  && y > 40 && y < 68) ||
		(x == 8  && y > 40 && y < 67) ||
		(x == 9  && y > 42 && y < 66) ||
		(x == 10 && y > 43 && y < 65) ||
		(x == 11 && y > 46 && y < 62) 
		)
		return 4;
	//5: Mortia
	else if (x > 76 && y < 6)
		return 5;
	//Default is 2 = Mare Mortuorum
	else 
		return 2;
}

u32 GetDynamicMapSec_MareS1(bool32 useWarpInfo)
{

    //1: Mortia
	//2: Mare Mortuorum

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("MareS1\nX %d\nY %d", x, y);

	//Mortia
    if
        (
        (y < 14) ||
        (y == 14 && x > 1) ||
        (y == 15 && x > 2) ||
        (y == 16 && x > 2) ||
        (y == 17 && x > 2) ||
        (y == 18 && x > 2) ||
        (y == 19 && x > 2) ||
        (y == 20 && x > 3) ||
        (y == 21 && x > 3) ||
        (y == 22 && x > 4) ||
        (y == 23 && x > 4) ||
        (y == 24 && x > 5) ||
        (y == 25 && x > 5) ||
        (y == 26 && x > 6) ||
        (y == 27 && x > 6) ||
        (y == 28 && x > 6) ||
        (y == 29 && x > 6) ||
        (y == 30 && x > 7) ||
        (y == 31 && x > 7) ||
        (y == 32 && x > 7) ||
        (y == 33 && x > 7) ||
        (y == 34 && x > 7) ||
        (y == 35 && x > 8) ||
        (y == 36 && x > 8) ||
        (y == 37 && x > 8) ||
        (y == 38 && x > 8) ||
        (y == 39 && x > 8) ||
        (y == 40 && x > 9) ||
        (y == 41 && x > 9) ||
        (y == 42 && x > 9) ||
        (y == 43 && x > 9) ||
        (y == 44 && x > 10) ||
        (y == 45 && x > 10) ||
        (y == 46 && x > 10) ||
        (y == 47 && x > 10) ||
        (y == 48 && x > 10) ||
        (y == 49 && x > 10) ||
        (y == 50 && x > 10) ||
        (y == 51 && x > 10) ||
        (y == 52 && x > 10) ||
        (y == 53 && x > 10) ||
        (y == 54 && x > 10) ||
        (y == 55 && x > 10) ||
        (y == 56 && x > 10) ||
        (y == 57 && x > 10) ||
        (y == 58 && x > 10) ||
        (y == 59 && x > 10) ||
        (y == 60 && x > 9 && x != 55 && x != 56) || //Special Case
        (y == 61 && x > 9 && x != 55 && x != 56) || //Special Case
        (y == 62 && x > 9 && x < 52) || //Special Case
        (y == 62 && x > 59) || //Special Case
        (y == 63 && x > 9 && x < 50) || //Special Case
        (y == 64 && x > 10 && x < 49)    //Special Case
        )
            return 1;
        //Mare Mortuorum is default
        else
            return 2;
}

u32 GetDynamicMapSec_BigIslandN(bool32 useWarpInfo)
{

    //1: Mare Mortuorum
    //2: Mare Oriens
    //3: Mare Subtropicum
    //4: Isla Ignifera

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("GetDynamicMapSec_BigIslandN\nX: %d\nY: %d", x, y);

    //1: Mare Mortuorum
    if 
        (
        (y < 1 && x > 14) ||
        (y == 1 && x > 16) ||
        (y == 2 && x > 17) ||
        (y == 3 && x > 18) ||
        (y == 4 && x > 22) ||
        (y == 5 && x > 42 && x < 163) || //Special Case
        (y == 6 && x > 47 && x < 162) || //Special Case
        (y == 7 && x > 68 && x < 79) || //Special Case
        (y == 7 && x > 94 && x < 160) || //Special Case
        (y == 8 && x > 71 && x < 79) || //Special Case
        (y == 8 && x > 94 && x < 123) || //Special Case
        (y == 8 && x > 138 && x < 155) || //Special Case
        (y == 9 && x > 108 && x < 118) || //Special Case
        (y == 9 && x > 139 && x < 151) || //Special Case
        (y == 10 && x > 140 && x < 145) //Special Case
        )
        return 1;
    //2: Mare Oriens
    else if
        (
        (x == 134 && y > 41) ||
        (x == 135 && y > 39) ||
        (x == 136 && y > 36) ||
        (x == 137 && y > 34) ||
        (x == 138 && y > 32) ||
        (x == 139 && y > 30) ||
        (x == 140 && y > 29) ||
        (x == 141 && y > 28) ||
        (x == 142 && y > 26) || // Special Case
        (x == 142 && y > 10 && y < 14) || // Special Case
        (x == 143 && y > 10) ||
        (x == 144 && y > 10) || 
        (x == 145 && y > 9) ||
        (x == 146 && y > 9) ||
        (x == 147 && y > 9) ||
        (x == 148 && y > 9) ||
        (x == 149 && y > 9) ||
        (x == 150 && y > 9) ||
        (x == 151 && y > 8) ||
        (x == 152 && y > 8) ||
        (x == 153 && y > 8) ||
        (x == 154 && y > 8) ||
        (x == 155 && y > 7) ||
        (x == 156 && y > 7) ||
        (x == 157 && y > 7) ||
        (x == 158 && y > 7) ||
        (x == 159 && y > 7) ||
        (x == 160 && y > 6) ||
        (x == 161 && y > 6) ||
        (x == 162 && y > 5) ||
        (x == 163 && y > 5)
        )
        return 2;
    //3: Mare Subtropicum
    //Top
    else if 
        (
        (y < 1 && x < 15) ||
        (y == 1 && x < 17) ||
        (y == 2 && x < 18) ||
        (y == 3 && x < 19) ||
        (y == 4 && x < 6) ||
        (y == 5 && x < 6) ||
        (y == 6 && x < 6) ||
        (y == 7 && x < 6) ||
        (y == 8 && x < 1)
        )
        return 3;
    //Bottom
    else if
        (
        (x < 1 && y > 23) ||
        (x == 1 && y > 24) ||
        (x == 2 && y > 26) ||
        (x == 3 && y > 27) ||
        (x == 4 && y > 27) ||
        (x == 5 && y > 27) ||
        (x == 6 && y > 27) ||
        (x == 7 && y > 27) ||
        (x == 8 && y > 27) ||
        (x == 9 && y > 27) ||
        (x == 10 && y > 27) ||
        (x == 12 && y > 27) ||
        (x == 13 && y > 28) ||
        (x == 14 && y > 28) ||
        (x == 15 && y > 28) ||
        (x == 16 && y > 29) ||
        (x == 17 && y > 30) ||
        (x == 18 && y > 32 && y < 35) //Special Case
        )
        return 3;
    //4: Isla Ignifera is Default
    else
        return 4;
}

u32 GetDynamicMapSec_BigIslandS(bool32 useWarpInfo)
{

    //1: Ignis Mons
    //2: Isla Ignifera
    //3: Mare Subtropicum
    //4: Mare Oriens

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("GetDynamicMapSec_BigIslandS\nX: %d\nY: %d", x, y);

    //1: Ignis Mons
    if
        (
        (x == 32 && y > 6 && y < 35) ||
        (x == 33 && y > 5 && y < 37) ||
        (x == 34 && y > 4 && y < 41) ||
        (x == 35 && y > 4 && y < 41) ||
        (x == 36 && y > 4 && y < 43) ||
        (x == 37 && y > 4 && y < 43) ||
        (x == 38 && y > 4 && y < 45) ||
        (x == 39 && y > 4 && y < 46) ||
        (x == 40 && y < 48) ||
        (x == 41 && y < 48) ||
        (x == 42 && y < 49) ||
        (x == 43 && y < 50) ||
        (x == 44 && y < 51) ||
        (x == 45 && y < 51) ||
        (x == 46 && y < 52) ||
        (x == 47 && y < 52) ||
        (x == 48 && y < 50) ||
        (x == 49 && y < 50) ||
        (x == 50 && y < 50) ||
        (x == 51 && y < 50) ||
        (x == 52 && y < 50) ||
        (x == 53 && y < 48) ||
        (x == 54 && y < 48) ||
        (x == 55 && y < 46) ||
        (x == 56 && y < 46) ||
        (x == 57 && y < 44) ||
        (x == 58 && y < 44) ||
        (x == 59 && y < 40) ||
        (x == 60 && y < 40) 
        )
        return 1;
    //3: Mare Subtropicum
    else if 
        (
        (x < 1 && y > 26) ||
        (x == 1 && y > 26) ||
        (x == 2 && y > 27) ||
        (x == 3 && y > 27) ||
        (x == 4 && y > 28) ||
        (x == 5 && y > 28) ||
        (x == 6 && y > 30) ||
        (x == 7 && y > 30) ||
        (x == 8 && y > 31) ||
        (x == 9 && y > 31) ||
        (x == 10 && y > 32) ||
        (x == 11 && y > 34) ||
        (x == 12 && y > 34) ||
        (x == 13 && y > 34) ||
        (x == 14 && y > 35) ||
        (x == 15 && y > 36) ||
        (x == 16 && y > 37) ||
        (x == 17 && y > 38) ||
        (x == 18 && y > 39) ||
        (x == 19 && y > 39) ||
        (x == 20 && y > 42) ||
        (x == 21 && y > 42) ||
        (x == 22 && y > 43) ||
        (x == 23 && y > 44) ||
        (x == 24 && y > 44) ||
        (x == 25 && y > 45) ||
        (x == 26 && y > 46) ||
        (x == 27 && y > 47) ||
        (x == 28 && y > 48) ||
        (x == 29 && y > 49) ||
        (x == 30 && y > 50) ||
        (x == 31 && y > 52) ||
        (x == 32 && y > 53) ||
        (x == 33 && y > 54) ||
        (x == 34 && y > 56) ||
        (x == 35 && y > 57) ||
        (x == 36 && y > 58) ||
        (x == 37 && y > 58) 
        )
        return 3;
    //4: Mare Oriens
    else if 
        (
        (x == 87 && y > 58) || 
        (x == 88 && y > 58) || 
        (x == 89 && y > 57) || //special case
        (x == 89 && y == 36) || //special case
        (x == 90 && y > 56) || //special case
        (x == 90 && y > 33 && y < 39) || //special case
        (x == 91 && y > 55) || //special case
        (x == 91 && y > 31 && y < 41) || //special case
        (x == 92 && y > 30) || 
        (x == 93 && y > 28) || 
        (x == 94 && y > 27) || 
        (x == 95 && y > 26) || 
        (x == 96 && y > 25) || 
        (x == 97 && y > 24) || 
        (x == 98 && y > 24) || 
        (x == 99 && y > 23) || 
        (x == 100 && y > 22) || 
        (x == 101 && y > 21) || 
        (x == 102 && y > 20) || 
        (x == 103 && y > 19) || 
        (x == 104 && y > 18) || 
        (x == 105 && y > 17) || 
        (x == 106 && y > 15) || 
        (x == 107 && y > 15) || 
        (x == 108 && y > 13) || 
        (x == 109 && y > 12) || 
        (x == 110 && y > 11) || 
        (x == 111 && y > 10) || 
        (x == 112 && y > 9) || 
        (x == 113 && y > 8) || 
        (x == 114 && y > 7) || 
        (x == 115 && y > 4) || 
        (x == 116 && y > 2) || 
        (x == 117 && y > 0) || 
        (x > 117)
        )
        return 4;
    //Default isla ignifera
    else
        return 2;
}

u32 GetDynamicMapSec_OceanPerimeterBigIslandS(bool32 useWarpInfo)
{

    //1: Isla Ignifera 
    //2: Mare Subtropicum
    //3: Mare Oriens 

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("GetDynamicMapSec_OceanPerimeterBigIslandS\nX: %d\nY: %d", x, y);

    //1: Isla Ignifera
    if 
        (
        (y < 1 && x > 59 && x < 78) ||
        (y < 1 && x > 79 && x < 99) ||
        (y == 1 && x > 59 && x < 77) ||
        (y == 1 && x > 80 && x < 98) ||
        (y == 2 && x > 80 && x < 98)
        )
        return 1;
    //2: Mare Subtropicum
    else if (x < 91)
        return 2;
    else
        return 3;
}

u32 GetDynamicMapSec_BigIslandFillerW(bool32 useWarpInfo)
{

    //1: Isla Ignifera 
    //2: Mare Subtropicum

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("GetDynamicMapSec_BigIslandFillerW\nX: %d\nY: %d", x, y);

    //1: Isla Ignifera
    if
        (
        (x == 12 && y > 7 && y < 23) ||
        (x == 13 && y > 4 && y < 25) ||
        (x >= 14 && y < 26)
        )
        return 1;
    //Default Mare Subtropicum = 2
    else
        return 2;
}

u32 GetDynamicMapSec_MareS7(bool32 useWarpInfo)
{

    //1: Isla Ithaca
    //2: Mare Subtropicum - Default
    //3: Isla Herba Bona
    //4: Isla Arida
    //5: Isla Ignifera

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("MareS7\nX %d\nY %d", x, y);

    //1: Isla Ithaca
    if
        (
        (y == 4  && x < 21) ||
        (y == 5  && x < 24) ||
        (y == 6  && x < 26) ||
        (y == 7  && x < 26) ||
        (y == 8  && x < 30) ||
        (y == 9  && x < 30) ||
        (y == 10 && x < 31) ||
        (y == 11 && x < 32) ||
        (y == 12 && x < 33) ||
        (y == 13 && x < 33) ||
        (y == 14 && x < 34) ||
        (y == 15 && x < 34) ||
        (y == 16 && x < 34) ||
        (y == 17 && x < 34) ||
        (y == 18 && x < 34) ||
        (y == 19 && x < 34) ||
        (y == 20 && x < 34) ||
        (y == 21 && x < 34) ||
        (y == 22 && x < 34) ||
        (y == 23 && x < 34) ||
        (y == 24 && x < 34) ||
        (y == 25 && x < 34) ||
        (y == 26 && x < 34) ||
        (y == 27 && x < 34) ||
        (y == 28 && x < 34) ||
        (y == 29 && x < 34) ||
        (y == 30 && x < 34) ||
        (y == 31 && x < 34) ||
        (y == 32 && x < 34) ||
        (y == 33 && x < 33) ||
        (y == 34 && x < 33) ||
        (y == 35 && x < 33) ||
        (y == 36 && x < 32) ||
        (y == 37 && x < 31) ||
        (y == 38 && x < 30) ||
        (y == 39 && x < 29) ||
        (y == 40 && x < 28) ||
        (y == 41 && x < 27) ||
        (y == 42 && x < 26) ||
        (y == 43 && x < 25) ||
        (y == 44 && x < 23) ||
        (y == 45 && x < 20) 
        )
        return 1;
    //3: Isla Herba Bona
	else if
        (
        (y < 1 && x > 21 && x < 48) ||
        (y == 1 && x > 22 && x < 45) ||
        (y == 2 && x > 22 && x < 43)
        )
        return 3;
    //4: Isla Aridaa
	else if
        (
        (y == 42 && x > 44 && x < 61) ||
        (y == 43 && x > 41 && x < 63) ||
        (y == 44 && x > 38 && x < 65) ||
        (y == 45 && x > 36 && x < 67) ||
        (y == 46 && x > 35 && x < 67) ||
        (y == 47 && x > 34 && x < 68) ||
        (y == 48 && x > 32 && x < 69) ||
        (y == 49 && x > 31 && x < 69) ||
        (y == 50 && x > 30 && x < 69) ||
        (y == 51 && x > 29 && x < 69) ||
        (y == 52 && x > 27 && x < 69) ||
        (y == 53 && x > 26 && x < 69) ||
        (y == 54 && x > 25 && x < 69) ||
        (y == 55 && x > 23 && x < 69) ||
        (y == 56 && x > 22 && x < 69) ||
        (y == 57 && x > 21 && x < 70) ||
        (y == 58 && x > 21 && x < 78) ||
        (y == 59 && x > 20 && x < 78) ||
        (y == 60 && x > 20 && x < 78) ||
        (y == 61 && x > 20 && x < 78) ||
        (y == 62 && x > 20 && x < 78) ||
        (y == 63 && x > 20 && x < 78) ||
        (y == 64 && x > 20 && x < 78) ||
        (y == 65 && x > 20 && x < 78) ||
        (y == 66 && x > 20 && x < 78) ||
        (y == 67 && x > 20 && x < 78) ||
        (y == 68 && x > 20 && x < 78) ||
        (y == 69 && x > 20 && x < 78) ||
        (y == 70 && x > 20 && x < 78) ||
        (y == 71 && x > 20 && x < 78) ||
        (y == 72 && x > 20 && x < 77) ||
        (y == 73 && x > 25 && x < 76) ||
        (y == 74 && x > 27 && x < 75) ||
        (y == 75 && x > 27 && x < 63) ||
        (y == 76 && x > 30 && x < 61) ||
        (y == 77 && x > 30 && x < 59) ||
        (y == 78 && x > 31 && x < 59) ||
        (y == 79 && x > 31 && x < 51) ||
        (y == 80 && x > 32 && x < 50)
        )
        return 4;
	//5: Isla Ignifera
	else if 
		(
		(x == 84 && y > 9 && y < 23) ||
		(x > 84 && y > 8 && y < 23)
		)
			return 5;
    //2: Mare Subtropicum - Default
	else
		return 2;
}

u32 GetDynamicMapSec_MareS8(bool32 useWarpInfo)
{

    //1: Isla Ithaca
    //2: Mare Subtropicum - Default
    //3: Mare Tropicum
    //4: Isla Hesperia
    //5: Isla Tropica

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("MareS8\nX %d\nY %d", x, y);

    //1: Isla Ithaca
    if
        (
        (x == 54 && y > 24 && y < 39) ||
        (x == 55 && y > 24 && y < 40) ||
        (x == 56 && y > 21 && y < 41) ||
        (x == 57 && y > 20 && y < 41) ||
        (x == 58 && y > 19 && y < 41) ||
        (x == 59 && y > 18 && y < 41) ||
        (x == 60 && y > 17 && y < 41) ||
        (x == 61 && y > 16 && y < 41) ||
        (x == 62 && y > 16 && y < 41) ||
        (x == 63 && y > 15 && y < 41) ||
        (x == 64 && y > 14 && y < 41) ||
        (x == 65 && y > 14 && y < 41) ||
        (x == 66 && y > 13 && y < 41) ||
        (x == 67 && y > 13 && y < 41) ||
        (x == 68 && y > 13 && y < 41) ||
        (x == 69 && y > 12 && y < 41) ||
        (x == 70 && y > 12 && y < 41) ||
        (x == 71 && y > 12 && y < 41) ||
        (x == 72 && y > 11 && y < 40) ||
        (x == 73 && y > 11 && y < 40) ||
        (x == 74 && y > 10 && y < 39) ||
        (x == 75 && y > 10 && y < 38) ||
        (x == 76 && y > 9 && y < 39) ||
        (x == 77 && y > 9 && y < 43) ||
        (x == 78 && y > 9 && y < 43) ||
        (x == 79 && y > 8 && y < 43) ||
        (x == 80 && y > 8 && y < 43) ||
        (x == 81 && y > 7 && y < 44) ||
        (x == 82 && y > 7 && y < 45) ||
        (x == 83 && y > 6 && y < 46) ||
        (x == 84 && y > 6 && y < 46) ||
        (x >= 85 && y > 5 && y < 46)
        )
        return 1;
        //3: Mare Tropicum
        else if 
            (
            (y  < 3 && x < 18) ||
            (y == 3 && x < 17) ||
            (y == 3 && x < 15) ||
            (y == 3 && x < 15) ||
            (y == 25 && x < 2) ||
            (y == 26 && x < 4) ||
            (y == 27 && x < 5) ||
            (y == 28 && x < 7) ||
            (y == 29 && x < 16) ||
            (y == 30 && x < 16) ||
            (y == 31 && x < 16) ||
            (y == 32 && x < 16) ||
            (y == 33 && x < 16) ||
            (y == 34 && x < 16) ||
            (y == 35 && x < 16) ||
            (y == 36 && x < 16) ||
            (y == 37 && x < 16) ||
            (y == 38 && x < 16) ||
            (y == 39 && x < 16) ||
            (y == 40 && x < 18) ||
            (y == 41 && x < 17) ||
            (y == 42 && x < 16) ||
            (y == 43 && x < 15 && x > 2) || //Special Case
            (y == 44 && x < 14 && x > 4) || //Special Case
            (y == 45 && x < 12 && x > 4) || //Special Case
            (y == 46 && x < 11 && x > 5) || //Special Case
            (y == 47 && x < 10 && x > 5) || //Special Case
            (y == 48 && x < 8 && x > 5)  || //Special Case
            (y == 49 && x == 6)
            )                      
            return 3;
        //4: Isla Hesperia
        else if
            (
            (y  < 1  && x > 17 && x < 71) ||
            (y == 1  && x > 17 && x < 71) ||
            (y == 2  && x > 17 && x < 70) ||
            (y == 3  && x > 16 && x < 69) ||
            (y == 4  && x > 14 && x < 69) ||
            (y == 5  && x > 14 && x < 66) ||
            (y == 6  && x < 65) ||
            (y == 7  && x < 64) ||
            (y == 8  && x < 62) ||
            (y == 9  && x < 61) ||
            (y == 10 && x < 61) ||
            (y == 11 && x < 61) ||
            (y == 12 && x < 60) ||
            (y == 13 && x < 59) ||
            (y == 14 && x < 59) ||
            (y == 15 && x < 57) ||
            (y == 16 && x < 56) ||
            (y == 17 && x < 56) ||
            (y == 18 && x < 55) ||
            (y == 19 && x < 54) ||
            (y == 20 && x < 53) ||
            (y == 21 && x < 52) ||
            (y == 22 && x < 52) ||
            (y == 23 && x < 51) ||
            (y == 24 && x < 51) ||
            (y == 25 && x > 1 && x < 50) ||
            (y == 26 && x > 3 && x < 50) ||
            (y == 27 && x > 4 && x < 49) ||
            (y == 28 && x > 6 && x < 48) ||
            (y == 29 && x > 15 && x < 47) ||
            (y == 30 && x > 15 && x < 46) ||
            (y == 31 && x > 15 && x < 45) ||
            (y == 32 && x > 15 && x < 44) ||
            (y == 33 && x > 15 && x < 43) ||
            (y == 34 && x > 15 && x < 42) ||
            (y == 35 && x > 15 && x < 41) ||
            (y == 36 && x > 15 && x < 40) ||
            (y == 37 && x > 15 && x < 38) ||
            (y == 38 && x > 15 && x < 36) ||
            (y == 39 && x > 15 && x < 34)
            )
            return 4;
        //5: Isla Tropica
        if
            (
            (x < 1 && y > 42 && y < 68) ||
            (x == 1 && y > 42 && y < 68) ||
            (x == 2 && y > 42 && y < 68) ||
            (x == 3 && y > 43 && y < 68) ||
            (x == 4 && y > 43 && y < 66) ||
            (x == 5 && y > 45 && y < 59)
            )
            return 5;
        //2: Mare Subtropicum is Default
        else
            return 2;
}

u32 GetDynamicMapSec_MareS9(bool32 useWarpInfo)
{

    //1: Isla Tropica   - Default
    //2: Mare Subtropicum
    //3: Mare Tropicum
    //4: Isla Hesperia
    //5: Topicana

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("MareS9\nX %d\nY %d", x, y);

    //2: Mare Subtropicum
    if
        (
        (y == 68 && x < 1) ||
        (y == 68 && x > 42 && x < 48) ||
        (y == 68 && x > 76) ||
        (y == 69 && x < 6) ||
        (y == 69 && x > 42 && x < 49) ||
        (y == 69 && x > 75) ||
        (y == 70 && x < 6) ||
        (y == 70 && x > 42 && x < 51) ||
        (y == 70 && x > 74) ||
        (y == 71 && x < 7) ||
        (y == 71 && x > 42 && x < 52) ||
        (y == 71 && x > 73) ||
        (y == 72 && x < 8)  ||
        (y == 72 && x > 42) ||
        (y == 73 && x < 8)  ||
        (y == 73 && x > 42) ||
        (y == 74 && x < 8)  ||
        (y == 74 && x > 42) ||
        (y == 75 && x < 9)  ||
        (y == 75 && x > 40) ||
        (y == 76 && x < 9)  ||
        (y == 76 && x > 38) ||
        (y == 77 && x < 9)  ||
        (y == 77 && x > 36) ||
        (y == 78 && x < 9)  ||
        (y == 78 && x > 35) ||
        (y == 79 && x < 9)  ||
        (y == 79 && x > 34) ||
        (y == 80 && x < 10) ||
        (y == 80 && x > 33) ||
        (y == 81 && x < 10) ||
        (y == 81 && x > 32) ||
        (y > 81)
        )
        return 2;
    //3: Mare Tropicum
    else if 
        (
        (x < 1 && y < 35) ||
        (x == 1 && y < 35) ||
        (x == 2 && y < 35) ||
        (x == 3 && y < 35) ||
        (x == 4 && y < 34) ||
        (x == 5 && y < 34) ||
        (x == 6 && y < 34) ||
        (x == 7 && y < 33) ||
        (x == 8 && y < 33) ||
        (x == 9 && y < 32) ||
        (x == 10 && y < 31) ||
        (x == 11 && y < 30) ||
        (x == 12 && y > 21 && y < 27) || //special case
        (x == 12 && y < 9) || 
        (x == 13 && y < 9) ||
        (x == 14 && y < 9) ||
        (x == 15 && y < 9) ||
        (x == 16 && y < 9) ||
        (x == 17 && y < 9) ||
        (x == 18 && y < 9) ||
        (x == 19 && y < 9) ||
        (x == 20 && y < 9) ||
        (x == 21 && y < 9) ||
        (x == 22 && y < 9) ||
        (x == 23 && y < 9) ||
        (x == 24 && y < 9) ||
        (x == 25 && y < 9) ||
        (x == 26 && y < 9) ||
        (x == 27 && y < 9) ||
        (x == 28 && y < 9) ||
        (x == 29 && y < 9) ||
        (x == 30 && y < 9) ||
        (x == 31 && y < 10) ||
        (x == 32 && y < 10) ||
        (x == 33 && y < 10) ||
        (x == 34 && y < 11) ||
        (x == 35 && y < 12) ||
        (x == 36 && y < 13) ||
        (x == 37 && y < 14) ||
        (x == 38 && y < 14) ||
        (x == 39 && y < 15) ||
        (x == 40 && y < 16) ||
        (x == 41 && y < 16) ||
        (x == 42 && y < 17) ||
        (x == 43 && y < 17) ||
        (x == 44 && y < 17) ||
        (x == 45 && y < 17) ||
        (x == 46 && y < 17) ||
        (x == 47 && y < 18) ||
        (x == 48 && y < 18) ||
        (x == 49 && y < 19) ||
        (x == 50 && y < 19) ||
        (x == 51 && y < 19) ||
        (x == 52 && y < 20) ||
        (x == 53 && y < 20) ||
        (x == 54 && y < 21) ||
        (x == 55 && y < 22) ||
        (x == 56 && y < 23) ||
        (x == 57 && y < 25) ||
        (x == 58 && y < 25) ||
        (x == 59 && y < 25) ||
        (x == 60 && y < 25) ||
        (x == 61 && y < 25) ||
        (x == 62 && y < 25) ||
        (x == 63 && y < 25) ||
        (x == 64 && y < 25) ||
        (x == 65 && y < 25) ||
        (x == 66 && y < 25) ||
        (x == 67 && y < 25) ||
        (x == 68 && y < 25) ||
        (x == 69 && y < 25) ||
        (x == 70 && y < 25) ||
        (x == 71 && y < 25) ||
        (x == 72 && y < 25) ||
        (x == 73 && y < 25) ||
        (x == 74 && y < 25) ||
        (x == 75 && y < 27) ||
        (x == 76 && y < 29) ||
        (x == 77 && y < 30) ||
        (x == 78 && y < 35) ||
        (x == 79 && y < 36) ||
        (x == 80 && y < 7) ||
        (x == 81 && y < 7) ||
        (x == 80 && y > 17 && y < 36) || //Special Case
        (x == 81 && y > 18 && y < 37) || //Special Case
        (x == 82 && y > 19 && y < 37) || //Special Case
        (x == 83 && y > 20 && y < 37) || //Special Case
        (x == 84 && y > 21 && y < 42) || //Special Case
        (x == 85 && y > 22 && y < 43)    //Special Case
        )
        return 3;
    //4: Isla Hesperia
    else if
        (
        (y == 6 && x > 81) ||
        (y > 6 && y < 18 && x > 79) ||
        (y == 18 && x > 80) ||
        (y == 19 && x > 81) ||
        (y == 20 && x > 82) ||
        (y == 21 && x > 83) ||
        (y == 22 && x > 84) 
        )
        return 4;
    //5: Tropicana
    else if
        (
        (x == 7 && y > 56 && y < 63) ||
        (x == 8 && y > 56 && y < 64) ||
        (x == 9 && y > 56 && y < 64) ||
        (x == 10 && y > 55 && y < 64) ||
        (x == 11 && y > 45 && y < 64) ||
        (x == 12 && y > 43 && y < 64) ||
        (x == 13 && y > 43 && y < 66) ||
        (x == 14 && y > 43 && y < 67) ||
        (x == 15 && y > 42 && y < 70) ||
        (x == 16 && y > 42 && y < 75) ||
        (x == 17 && y > 41 && y < 77) ||
        (x == 18 && y > 41 && y < 77) ||
        (x == 19 && y > 40 && y < 77) ||
        (x == 20 && y > 39 && y < 77) ||
        (x == 21 && y > 39 && y < 77) ||
        (x == 22 && y > 38 && y < 77) ||
        (x == 23 && y > 38 && y < 77) ||
        (x == 24 && y > 35 && y < 77) ||
        (x == 25 && y > 36 && y < 77) ||
        (x == 26 && y > 36 && y < 76) ||
        (x == 27 && y > 36 && y < 75) ||
        (x == 28 && y > 38 && y < 56) || //Special Case
        (x == 28 && y > 59 && y < 74) || //Special Case
        (x == 29 && y > 38 && y < 53) || //Special Case
        (x == 29 && y > 63 && y < 73) || //Special Case
        (x == 30 && y > 40 && y < 51) || //Special Case
        (x == 30 && y > 64 && y < 72) || //Special Case
        (x == 31 && y > 41 && y < 50) || //Special Case
        (x == 31 && y > 65 && y < 72) || //Special Case
        (x == 32 && y > 41 && y < 49) || //Special Case
        (x == 32 && y > 66 && y < 71) || //Special Case
        (x == 33 && y > 30 && y < 48) || //Special Case
        (x == 33 && y > 68 && y < 71) || //Special Case
        (x == 34 && y > 30 && y < 48) || //Special Case
        (x == 34 && y > 68 && y < 70) || //Special Case
        (x == 35 && y > 30 && y < 48) ||
        (x == 36 && y > 30 && y < 48) ||
        (x == 37 && y > 33 && y < 48) ||
        (x == 38 && y > 37 && y < 48) ||
        (x == 39 && y > 36 && y < 48) ||
        (x == 40 && y > 37 && y < 48) ||
        (x == 41 && y > 38 && y < 48) ||
        (x == 42 && y > 43 && y < 48) ||
        (x == 43 && y > 43 && y < 48) ||
        (x == 44 && y > 43 && y < 48) ||
        (x == 45 && y > 43 && y < 47)
        )
        return 5;
    //1: Isla Tropica - Default
    else
        return 1;
}

u32 GetDynamicMapSec_MareS10(bool32 useWarpInfo)
{

	//1: Isla Tropica
	//2: Mare occidens
	//3: Mare Tropicum
	//4: Isla Solata
	//5: Mare Subtropicum

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("MareS10\nX %d\nY %d", x, y);

	//1: Isla Tropica
	if 
		(
		(y == 35 && x > 84) ||
		(y == 36 && x > 82) ||
		(y == 37 && x > 77) ||
		(y == 38 && x > 72) ||
		(y == 39 && x > 70) ||
		(y == 40 && x > 68) ||
		(y == 41 && x > 68) ||
		(y == 42 && x > 68) ||
		(y == 43 && x > 68) ||
		(y == 44 && x > 68) ||
		(y == 45 && x > 68) ||
		(y == 46 && x > 68) ||
		(y == 47 && x > 68) ||
		(y == 48 && x > 68) ||
		(y == 49 && x > 68) ||
		(y == 50 && x > 68) ||
		(y == 51 && x > 68) ||
		(y == 52 && x > 68) ||
		(y == 53 && x > 68) ||
		(y == 54 && x > 68) ||
		(y == 55 && x > 69) ||
		(y == 56 && x > 70) ||
		(y == 57 && x > 72) ||
		(y == 58 && x > 81) ||
		(y == 59 && x > 83) ||
		(y == 60 && x > 84) ||
		(y == 61 && x > 84) ||
		(y == 62 && x > 84) ||
		(y == 63 && x > 84) ||
		(y == 64 && x > 84) 
		)
		return 1;
	//4: Isla Solata
	else if
		(
		(x == 15  && y > 58 && y < 74) ||
		(x == 16  && y > 51 && y < 76) ||
		(x == 17  && y > 46 && y < 77) ||
		(x == 18  && y > 44 && y < 78) ||
		(x == 19  && y > 43 && y < 79) ||
		(x == 20  && y > 41 && y < 79) ||
		(x == 20  && y > 15 && y < 30) ||
		(x == 21  && y > 40 && y < 81) ||
		(x == 21  && y > 13 && y < 34) ||
		(x == 22  && y > 37 && y < 81) ||
		(x == 22  && y > 12 && y < 36) ||
		(x == 23  && y > 11 && y < 81) ||
		(x == 24  && y > 10 && y < 81) ||
		(x == 25  && y > 9  && y < 81) ||
		(x == 26  && y > 9  && y < 81) ||
		(x == 27  && y > 8  && y < 81) ||
		(x == 28  && y > 8  && y < 81) ||
		(x == 29  && y > 8  && y < 81) ||
		(x == 30  && y > 8  && y < 81) ||
		(x == 31  && y > 8  && y < 81) ||
		(x == 32  && y > 8  && y < 81) ||
		(x == 33  && y > 8  && y < 81) ||
		(x == 34  && y > 8  && y < 83) ||
		(x == 35  && y > 8  && y < 83) ||
		(x == 36  && y > 8  && y < 83) ||
		(x == 37  && y > 8  && y < 83) ||
		(x == 38  && y > 8  && y < 83) ||
		(x == 39  && y > 8  && y < 84) ||
		(x == 40  && y > 8  && y < 84) ||
		(x == 41  && y > 8  && y < 84) ||
		(x == 42  && y > 8  && y < 84) ||
		(x == 43  && y > 8  && y < 84) ||
		(x == 44  && y > 8  && y < 84) ||
		(x == 45  && y > 8  && y < 84) ||
		(x == 46  && y > 8  && y < 84) ||
		(x == 47  && y > 8  && y < 84) ||
		(x == 48  && y > 8  && y < 84) ||
		(x == 49  && y > 8  && y < 84) ||
		(x == 50  && y > 8  && y < 84) ||
		(x == 51  && y > 8  && y < 84) ||
		(x == 52  && y > 9  && y < 84) ||
		(x == 53  && y > 10 && y < 84) ||
		(x == 54  && y > 10 && y < 84 && y != 60) ||
		(x == 55  && y > 12 && y < 59) ||
		(x == 55  && y > 61 && y < 84) ||
		(x == 56  && y > 16 && y < 33) ||
		(x == 56  && y > 34 && y < 58) ||
		(x == 56  && y > 62 && y < 84) ||
		(x == 57  && y > 19 && y < 32) ||
		(x == 57  && y > 34 && y < 56) ||
		(x == 57  && y > 63 && y < 84) ||
		(x == 58  && y > 36 && y < 54) ||
		(x == 58  && y > 64 && y < 84) ||
		(x == 59  && y > 36 && y < 53) ||
		(x == 59  && y > 64 && y < 84) ||
		(x == 60  && y > 36 && y < 52) ||
		(x == 60  && y > 65 && y < 83) ||
		(x == 61  && y > 66 && y < 82)
		)
		return 4;
	//2 Mare Oriens
	else if (x < 78)
		return 2;
	//5 Mare Subtropicum
	else if (x > 77 && y > 45)
		return 5;
	//3 Mare Tropicum - Default
	else
		return 3;
}

u32 GetDynamicMapSec_OceanPerimeter2(bool32 useWarpInfo)
{

	//1: Mare Subtropicum
	//2: Mare occidens

	s16 x, y;
    if (useWarpInfo) 
    {
        x = sWarpDestination.x;
        y = sWarpDestination.y;
    } else
    {
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
    }

	DebugPrintf("OceanPerimeter2\nX %d\nY %d", x, y);

    if (x > 77)
        return 1;
    else
        return 2;
}
