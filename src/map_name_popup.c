#include "global.h"
#include "battle_pyramid.h"
#include "bg.h"
#include "event_data.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "international_string_util.h"
#include "main.h"
#include "menu.h"
#include "map_name_popup.h"
#include "palette.h"
#include "region_map.h"
#include "rtc.h"
#include "start_menu.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "constants/battle_frontier.h"
#include "constants/layouts.h"
#include "constants/region_map_sections.h"
#include "constants/weather.h"
#include "config/general.h"
#include "config/overworld.h"

// enums
enum MapPopUp_Themes
{
    MAPPOPUP_THEME_WOOD,
    MAPPOPUP_THEME_MARBLE,
    MAPPOPUP_THEME_STONE,
    MAPPOPUP_THEME_BRICK,
    MAPPOPUP_THEME_UNDERWATER,
    MAPPOPUP_THEME_STONE2,
};

enum MapPopUp_Themes_BW
{
    MAPPOPUP_THEME_BW_DEFAULT,
};

// static functions
static void Task_MapNamePopUpWindow(u8 taskId);
static void ShowMapNamePopUpWindow(void);
static void LoadMapNamePopUpWindowBg(void);

// EWRAM
EWRAM_DATA u8 gPopupTaskId = 0;

// .rodata
static const u8 sMapPopUp_Table[][960] =
{
    [MAPPOPUP_THEME_WOOD]       = INCBIN_U8("graphics/map_popup/wood.4bpp"),
    [MAPPOPUP_THEME_MARBLE]     = INCBIN_U8("graphics/map_popup/marble.4bpp"),
    [MAPPOPUP_THEME_STONE]      = INCBIN_U8("graphics/map_popup/stone.4bpp"),
    [MAPPOPUP_THEME_BRICK]      = INCBIN_U8("graphics/map_popup/brick.4bpp"),
    [MAPPOPUP_THEME_UNDERWATER] = INCBIN_U8("graphics/map_popup/underwater.4bpp"),
    [MAPPOPUP_THEME_STONE2]     = INCBIN_U8("graphics/map_popup/stone2.4bpp"),
};

static const u8 sMapPopUp_OutlineTable[][960] =
{
    [MAPPOPUP_THEME_WOOD]       = INCBIN_U8("graphics/map_popup/wood_outline.4bpp"),
    [MAPPOPUP_THEME_MARBLE]     = INCBIN_U8("graphics/map_popup/marble_outline.4bpp"),
    [MAPPOPUP_THEME_STONE]      = INCBIN_U8("graphics/map_popup/stone_outline.4bpp"),
    [MAPPOPUP_THEME_BRICK]      = INCBIN_U8("graphics/map_popup/brick_outline.4bpp"),
    [MAPPOPUP_THEME_UNDERWATER] = INCBIN_U8("graphics/map_popup/underwater_outline.4bpp"),
    [MAPPOPUP_THEME_STONE2]     = INCBIN_U8("graphics/map_popup/stone2_outline.4bpp"),
};

static const u16 sMapPopUp_PaletteTable[][16] =
{
    [MAPPOPUP_THEME_WOOD]       = INCBIN_U16("graphics/map_popup/wood.gbapal"),
    [MAPPOPUP_THEME_MARBLE]     = INCBIN_U16("graphics/map_popup/marble_outline.gbapal"),
    [MAPPOPUP_THEME_STONE]      = INCBIN_U16("graphics/map_popup/stone_outline.gbapal"),
    [MAPPOPUP_THEME_BRICK]      = INCBIN_U16("graphics/map_popup/brick_outline.gbapal"),
    [MAPPOPUP_THEME_UNDERWATER] = INCBIN_U16("graphics/map_popup/underwater_outline.gbapal"),
    [MAPPOPUP_THEME_STONE2]     = INCBIN_U16("graphics/map_popup/stone2_outline.gbapal"),
};

static const u16 sMapPopUp_Palette_Underwater[16] = INCBIN_U16("graphics/map_popup/underwater.gbapal");

static const u8 sRegionMapSectionId_To_PopUpThemeIdMapping[] =
{
    [MAPSEC_LITTLEROOT_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_OLDALE_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_DEWFORD_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_LAVARIDGE_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_FALLARBOR_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_VERDANTURF_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_PACIFIDLOG_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_PETALBURG_CITY] = MAPPOPUP_THEME_BRICK,
    [MAPSEC_SLATEPORT_CITY] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_MAUVILLE_CITY] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_RUSTBORO_CITY] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_FORTREE_CITY] = MAPPOPUP_THEME_BRICK,
    [MAPSEC_LILYCOVE_CITY] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_MOSSDEEP_CITY] = MAPPOPUP_THEME_BRICK,
    [MAPSEC_SOOTOPOLIS_CITY] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_EVER_GRANDE_CITY] = MAPPOPUP_THEME_BRICK,
    [MAPSEC_ROUTE_101] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_102] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_103] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_104] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_105] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_106] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_107] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_108] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_109] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_110] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_111] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_112] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_113] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_114] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_115] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_116] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_117] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_118] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_119] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_120] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_121] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_122] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_123] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_124] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_125] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_126] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_127] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_128] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_129] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_130] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_131] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_132] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_133] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_134] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_UNDERWATER_124] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_UNDERWATER_126] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_UNDERWATER_127] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_UNDERWATER_128] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_UNDERWATER_SOOTOPOLIS] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_GRANITE_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MT_CHIMNEY] = MAPPOPUP_THEME_STONE,
    [MAPSEC_SAFARI_ZONE] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_BATTLE_FRONTIER] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_PETALBURG_WOODS] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_RUSTURF_TUNNEL] = MAPPOPUP_THEME_STONE,
    [MAPSEC_ABANDONED_SHIP] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_NEW_MAUVILLE] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_METEOR_FALLS] = MAPPOPUP_THEME_STONE,
    [MAPSEC_METEOR_FALLS2] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MT_PYRE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_AQUA_HIDEOUT_OLD] = MAPPOPUP_THEME_STONE,
    [MAPSEC_SHOAL_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_SEAFLOOR_CAVERN] = MAPPOPUP_THEME_STONE,
    [MAPSEC_UNDERWATER_SEAFLOOR_CAVERN] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_VICTORY_ROAD] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MIRAGE_ISLAND] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_CAVE_OF_ORIGIN] = MAPPOPUP_THEME_STONE,
    [MAPSEC_SOUTHERN_ISLAND] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_FIERY_PATH] = MAPPOPUP_THEME_STONE,
    [MAPSEC_FIERY_PATH2] = MAPPOPUP_THEME_STONE,
    [MAPSEC_JAGGED_PASS] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_JAGGED_PASS2] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_SEALED_CHAMBER] = MAPPOPUP_THEME_STONE,
    [MAPSEC_UNDERWATER_SEALED_CHAMBER] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_SCORCHED_SLAB] = MAPPOPUP_THEME_STONE,
    [MAPSEC_ISLAND_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_DESERT_RUINS] = MAPPOPUP_THEME_STONE,
    [MAPSEC_ANCIENT_TOMB] = MAPPOPUP_THEME_STONE,
    [MAPSEC_INSIDE_OF_TRUCK] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_SKY_PILLAR] = MAPPOPUP_THEME_STONE,
    [MAPSEC_SECRET_BASE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_DYNAMIC] = MAPPOPUP_THEME_MARBLE,
	//Begin kanto mapsecs
	
	[MAPSEC_PALLET_TOWN] =                  MAPPOPUP_THEME_BRICK, 
	[MAPSEC_VIRIDIAN_CITY] =                MAPPOPUP_THEME_BRICK, 
	[MAPSEC_PEWTER_CITY] =                  MAPPOPUP_THEME_BRICK, 
	[MAPSEC_CERULEAN_CITY] =                MAPPOPUP_THEME_BRICK, 
	[MAPSEC_LAVENDER_TOWN] =                MAPPOPUP_THEME_BRICK, 
	[MAPSEC_VERMILION_CITY] =               MAPPOPUP_THEME_BRICK, 
	[MAPSEC_CELADON_CITY] =                 MAPPOPUP_THEME_BRICK, 
	[MAPSEC_FUCHSIA_CITY] =                 MAPPOPUP_THEME_BRICK, 
	[MAPSEC_CINNABAR_ISLAND] =              MAPPOPUP_THEME_BRICK, 
	[MAPSEC_INDIGO_PLATEAU] =               MAPPOPUP_THEME_BRICK, 
	[MAPSEC_SAFFRON_CITY] =                 MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_4_POKECENTER] =           MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_10_POKECENTER] =          MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_1] =                      MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_2] =                      MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_3] =                      MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_4] =                      MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_5] =                      MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_6] =                      MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_7] =                      MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_8] =                      MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_9] =                      MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_10] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_11] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_12] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_13] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_14] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_15] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_16] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_17] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_18] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_19] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_20] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_21] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_22] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_23] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_24] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROUTE_25] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_VIRIDIAN_FOREST] =              MAPPOPUP_THEME_BRICK, 
	[MAPSEC_MT_MOON] =                      MAPPOPUP_THEME_BRICK, 
	[MAPSEC_S_S_ANNE] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_UNDERGROUND_PATH] =             MAPPOPUP_THEME_BRICK, 
	[MAPSEC_UNDERGROUND_PATH_2] =           MAPPOPUP_THEME_BRICK, 
	[MAPSEC_DIGLETTS_CAVE] =                MAPPOPUP_THEME_BRICK, 
	[MAPSEC_KANTO_VICTORY_ROAD] =           MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROCKET_HIDEOUT] =               MAPPOPUP_THEME_BRICK, 
	[MAPSEC_SILPH_CO] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_POKEMON_MANSION] =              MAPPOPUP_THEME_BRICK, 
	[MAPSEC_KANTO_SAFARI_ZONE] =            MAPPOPUP_THEME_BRICK, 
	[MAPSEC_POKEMON_LEAGUE] =               MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROCK_TUNNEL] =                  MAPPOPUP_THEME_BRICK, 
	[MAPSEC_SEAFOAM_ISLANDS] =              MAPPOPUP_THEME_BRICK, 
	[MAPSEC_POKEMON_TOWER] =                MAPPOPUP_THEME_BRICK, 
	[MAPSEC_CERULEAN_CAVE] =                MAPPOPUP_THEME_BRICK, 
	[MAPSEC_POWER_PLANT] =                  MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ONE_ISLAND] =                   MAPPOPUP_THEME_BRICK, 
	[MAPSEC_TWO_ISLAND] =                   MAPPOPUP_THEME_BRICK, 
	[MAPSEC_THREE_ISLAND] =                 MAPPOPUP_THEME_BRICK, 
	[MAPSEC_FOUR_ISLAND] =                  MAPPOPUP_THEME_BRICK, 
	[MAPSEC_FIVE_ISLAND] =                  MAPPOPUP_THEME_BRICK, 
	[MAPSEC_SEVEN_ISLAND] =                 MAPPOPUP_THEME_BRICK, 
	[MAPSEC_SIX_ISLAND] =                   MAPPOPUP_THEME_BRICK, 
	[MAPSEC_KINDLE_ROAD] =                  MAPPOPUP_THEME_BRICK, 
	[MAPSEC_TREASURE_BEACH] =               MAPPOPUP_THEME_BRICK, 
	[MAPSEC_CAPE_BRINK] =                   MAPPOPUP_THEME_BRICK, 
	[MAPSEC_BOND_BRIDGE] =                  MAPPOPUP_THEME_BRICK, 
	[MAPSEC_THREE_ISLE_PORT] =              MAPPOPUP_THEME_BRICK, 
	[MAPSEC_SEVII_ISLE_6] =                 MAPPOPUP_THEME_BRICK, 
	[MAPSEC_SEVII_ISLE_7] =                 MAPPOPUP_THEME_BRICK, 
	[MAPSEC_SEVII_ISLE_8] =                 MAPPOPUP_THEME_BRICK, 
	[MAPSEC_SEVII_ISLE_9] =                 MAPPOPUP_THEME_BRICK, 
	[MAPSEC_RESORT_GORGEOUS] =              MAPPOPUP_THEME_BRICK, 
	[MAPSEC_WATER_LABYRINTH] =              MAPPOPUP_THEME_BRICK, 
	[MAPSEC_FIVE_ISLE_MEADOW] =             MAPPOPUP_THEME_BRICK, 
	[MAPSEC_MEMORIAL_PILLAR] =              MAPPOPUP_THEME_BRICK, 
	[MAPSEC_OUTCAST_ISLAND] =               MAPPOPUP_THEME_BRICK, 
	[MAPSEC_GREEN_PATH] =                   MAPPOPUP_THEME_BRICK, 
	[MAPSEC_WATER_PATH] =                   MAPPOPUP_THEME_BRICK, 
	[MAPSEC_RUIN_VALLEY] =                  MAPPOPUP_THEME_BRICK, 
	[MAPSEC_TRAINER_TOWER] =                MAPPOPUP_THEME_BRICK, 
	[MAPSEC_CANYON_ENTRANCE] =              MAPPOPUP_THEME_BRICK, 
	[MAPSEC_SEVAULT_CANYON] =               MAPPOPUP_THEME_BRICK, 
	[MAPSEC_TANOBY_RUINS] =                 MAPPOPUP_THEME_BRICK, 
	[MAPSEC_SEVII_ISLE_22] =                MAPPOPUP_THEME_BRICK, 
	[MAPSEC_SEVII_ISLE_23] =                MAPPOPUP_THEME_BRICK, 
	[MAPSEC_SEVII_ISLE_24] =                MAPPOPUP_THEME_BRICK, 
	[MAPSEC_NAVEL_ROCK_FRLG] =              MAPPOPUP_THEME_BRICK, 
	[MAPSEC_MT_EMBER] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_BERRY_FOREST] =                 MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ICEFALL_CAVE] =                 MAPPOPUP_THEME_BRICK, 
	[MAPSEC_ROCKET_WAREHOUSE] =             MAPPOPUP_THEME_BRICK, 
	[MAPSEC_TRAINER_TOWER_2] =              MAPPOPUP_THEME_BRICK, 
	[MAPSEC_DOTTED_HOLE] =                  MAPPOPUP_THEME_BRICK, 

	//BREAK BELOW ALTERED
	[MAPSEC_PECCADUM] =                     MAPPOPUP_THEME_STONE, 
	[MAPSEC_VIA_POSTERIOR] =                MAPPOPUP_THEME_STONE, 
	[MAPSEC_CACNORUM] =                     MAPPOPUP_THEME_BRICK, 
	[MAPSEC_VIA_SAXOSA] =                   MAPPOPUP_THEME_STONE, 
	[MAPSEC_VIA_MAGNA] =                    MAPPOPUP_THEME_STONE2, 
	[MAPSEC_ROBUSTICA] =                    MAPPOPUP_THEME_MARBLE, 
	[MAPSEC_VENATOR_MONS] =                 MAPPOPUP_THEME_STONE, 
	[MAPSEC_VILLA_VENATORUM] =              MAPPOPUP_THEME_WOOD, 
	[MAPSEC_SABINA_NOVA] =                  MAPPOPUP_THEME_WOOD, 
	[MAPSEC_VILLA_VALLIS] =                 MAPPOPUP_THEME_WOOD, 
	[MAPSEC_MONTES_VIGILIAE] =              MAPPOPUP_THEME_STONE, 
	[MAPSEC_VILLA_VIVARIA] =                MAPPOPUP_THEME_WOOD, 
	[MAPSEC_VIA_LITORALIS] =                MAPPOPUP_THEME_MARBLE, 
	[MAPSEC_CASTRUM] =  					MAPPOPUP_THEME_BRICK,                      
	[MAPSEC_SINUS_PACIFICUS] =              MAPPOPUP_THEME_MARBLE,
	//BREAK ABOVE ALTERED
	
	//End kanto mapsecs
    [MAPSEC_AQUA_HIDEOUT] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MAGMA_HIDEOUT] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MIRAGE_TOWER] = MAPPOPUP_THEME_STONE,
    [MAPSEC_BIRTH_ISLAND] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_FARAWAY_ISLAND] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ARTISAN_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MARINE_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_UNDERWATER_MARINE_CAVE] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_TERRA_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_UNDERWATER_105] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_UNDERWATER_125] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_UNDERWATER_129] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_DESERT_UNDERPASS] = MAPPOPUP_THEME_STONE,
    [MAPSEC_ALTERING_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_NAVEL_ROCK] = MAPPOPUP_THEME_STONE,
    [MAPSEC_TRAINER_HILL] = MAPPOPUP_THEME_MARBLE,
	//Cornix Customs
    [MAPSEC_ELICIUS_BEACH] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_VILLA_FLOREA  ] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_VIA_FLOREA]    = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ALBION]        = MAPPOPUP_THEME_WOOD,
    [MAPSEC_VIA_ARBUSTA]   = MAPPOPUP_THEME_WOOD,
    [MAPSEC_PORTUS_PRIMUS]    = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_SINUS_CAMELUS]  = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_DELTA_DRACI]  = MAPPOPUP_THEME_WOOD,
    [MAPSEC_MARE_OCCIDENS]       = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_MARE_ORIENS]         = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_MARE_INTERNUM]       = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_MARE_TRANQUILLUM]    = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_MARE_TROPICUM]       = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_MARE_SUBTROPICUM]    = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_MARE_MORTUORUM]          = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ISLA_IGNIFERA]       = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ISLA_YERBA_BUENA]    = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ISLA_TROPICA]      = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ISLA_PINEA]           = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ISLA_LAVINIA]        = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ISLA_ITHACA]         = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ISLA_SOLATA]           = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ISLA_ARIDA]          = MAPPOPUP_THEME_STONE,
    [MAPSEC_ACTA_ECHONA]        = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_SILVA]        = MAPPOPUP_THEME_WOOD,
    [MAPSEC_SILVA_PROFUNDA]    = MAPPOPUP_THEME_WOOD,
    [MAPSEC_SALIX]               = MAPPOPUP_THEME_WOOD,
    [MAPSEC_LACUS_DRACUS]          = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_LITUS_LACUS]    = MAPPOPUP_THEME_WOOD,
    [MAPSEC_DRACUS_SUPERIOR]     = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_DRACUS_INFERIOR]     = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_UPPER_EAST_DRAKE]    = MAPPOPUP_THEME_WOOD,
    [MAPSEC_LOWER_EAST_DRAKE]    = MAPPOPUP_THEME_WOOD,
    [MAPSEC_UPPER_WEST_DRAKE]    = MAPPOPUP_THEME_WOOD,
    [MAPSEC_LOWER_WEST_DRAKE]    = MAPPOPUP_THEME_WOOD,
    [MAPSEC_CASTALIA]            = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_SINUS_CLARUS]        = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_VIA_FIDELIUM]        = MAPPOPUP_THEME_WOOD
	
};

#if OW_POPUP_GENERATION == GEN_5
// Gen5 assets
static const u8 sMapPopUpTilesPrimary_BW[] = INCBIN_U8("graphics/map_popup/bw/bw_primary.4bpp");
static const u8 sMapPopUpTilesSecondary_BW[] = INCBIN_U8("graphics/map_popup/bw/bw_secondary.4bpp");
static const u16 sMapPopUpTilesPalette_BW_Black[16] = INCBIN_U16("graphics/map_popup/bw/black.gbapal");
static const u16 sMapPopUpTilesPalette_BW_White[16] = INCBIN_U16("graphics/map_popup/bw/white.gbapal");
#else
static const u8 sMapPopUpTilesPrimary_BW[] = {0};
static const u8 sMapPopUpTilesSecondary_BW[] = {0};
static const u16 sMapPopUpTilesPalette_BW_Black[] = {0};
static const u16 sMapPopUpTilesPalette_BW_White[] = {0};
#endif

static const u8 sRegionMapSectionId_To_PopUpThemeIdMapping_BW[] =
{
    [MAPSEC_LITTLEROOT_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_OLDALE_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_DEWFORD_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_LAVARIDGE_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_FALLARBOR_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_VERDANTURF_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_PACIFIDLOG_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_PETALBURG_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SLATEPORT_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MAUVILLE_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_RUSTBORO_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_FORTREE_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_LILYCOVE_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MOSSDEEP_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SOOTOPOLIS_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_EVER_GRANDE_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_101] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_102] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_103] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_104] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_105] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_106] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_107] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_108] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_109] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_110] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_111] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_112] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_113] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_114] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_115] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_116] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_117] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_118] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_119] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_120] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_121] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_122] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_123] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_124] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_125] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_126] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_127] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_128] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_129] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_130] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_131] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_132] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_133] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_134] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_124] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_126] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_127] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_128] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_SOOTOPOLIS] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_GRANITE_CAVE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MT_CHIMNEY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SAFARI_ZONE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_BATTLE_FRONTIER] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_PETALBURG_WOODS] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_RUSTURF_TUNNEL] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ABANDONED_SHIP] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_NEW_MAUVILLE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_METEOR_FALLS] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_METEOR_FALLS2] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MT_PYRE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_AQUA_HIDEOUT_OLD] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SHOAL_CAVE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SEAFLOOR_CAVERN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_SEAFLOOR_CAVERN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_VICTORY_ROAD] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MIRAGE_ISLAND] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_CAVE_OF_ORIGIN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SOUTHERN_ISLAND] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_FIERY_PATH] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_FIERY_PATH2] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_JAGGED_PASS] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_JAGGED_PASS2] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SEALED_CHAMBER] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_SEALED_CHAMBER] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SCORCHED_SLAB] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ISLAND_CAVE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_DESERT_RUINS] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ANCIENT_TOMB] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_INSIDE_OF_TRUCK] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SKY_PILLAR] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SECRET_BASE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_DYNAMIC] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_AQUA_HIDEOUT - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MAGMA_HIDEOUT - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MIRAGE_TOWER - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_BIRTH_ISLAND - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_FARAWAY_ISLAND - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ARTISAN_CAVE - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MARINE_CAVE - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_MARINE_CAVE - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_TERRA_CAVE - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_105 - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_125 - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_129 - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_DESERT_UNDERPASS - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ALTERING_CAVE - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_NAVEL_ROCK - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_TRAINER_HILL - KANTO_MAPSEC_COUNT] = MAPPOPUP_THEME_BW_DEFAULT,
};

static const u8 sText_PyramidFloor1[] = _("PYRAMID FLOOR 1");
static const u8 sText_PyramidFloor2[] = _("PYRAMID FLOOR 2");
static const u8 sText_PyramidFloor3[] = _("PYRAMID FLOOR 3");
static const u8 sText_PyramidFloor4[] = _("PYRAMID FLOOR 4");
static const u8 sText_PyramidFloor5[] = _("PYRAMID FLOOR 5");
static const u8 sText_PyramidFloor6[] = _("PYRAMID FLOOR 6");
static const u8 sText_PyramidFloor7[] = _("PYRAMID FLOOR 7");
static const u8 sText_Pyramid[] = _("PYRAMID");

static const u8 *const sBattlePyramid_MapHeaderStrings[FRONTIER_STAGES_PER_CHALLENGE + 1] =
{
    sText_PyramidFloor1,
    sText_PyramidFloor2,
    sText_PyramidFloor3,
    sText_PyramidFloor4,
    sText_PyramidFloor5,
    sText_PyramidFloor6,
    sText_PyramidFloor7,
    sText_Pyramid,
};

static bool8 UNUSED StartMenu_ShowMapNamePopup(void)
{
    HideStartMenu();
    ShowMapNamePopup();
    return TRUE;
}

// States and data defines for Task_MapNamePopUpWindow
enum {
    STATE_SLIDE_IN,
    STATE_WAIT,
    STATE_SLIDE_OUT,
    STATE_UNUSED,
    STATE_ERASE,
    STATE_END,
    STATE_PRINT, // For some reason the first state is numerically last.
};

#define POPUP_OFFSCREEN_Y  ((OW_POPUP_GENERATION == GEN_5) ? 24 : 40)
#define POPUP_SLIDE_SPEED  2

#define tState         data[0]
#define tOnscreenTimer data[1]
#define tYOffset       data[2]
#define tIncomingPopUp data[3]
#define tPrintTimer    data[4]

void ShowMapNamePopup(void)
{
    if (FlagGet(FLAG_HIDE_MAP_NAME_POPUP) != TRUE)
    {
        if (!FuncIsActiveTask(Task_MapNamePopUpWindow))
        {
            // New pop up window
            if (OW_POPUP_GENERATION == GEN_5)
            {
                gPopupTaskId = CreateTask(Task_MapNamePopUpWindow, 100);

                if (OW_POPUP_BW_ALPHA_BLEND && !IsWeatherAlphaBlend())
                    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_TGT2_ALL | BLDCNT_EFFECT_BLEND);
            }
            else
            {
                gPopupTaskId = CreateTask(Task_MapNamePopUpWindow, 90);
                SetGpuReg(REG_OFFSET_BG0VOFS, POPUP_OFFSCREEN_Y);
            }

            gTasks[gPopupTaskId].tState = STATE_PRINT;
            gTasks[gPopupTaskId].tYOffset = POPUP_OFFSCREEN_Y;
        }
        else
        {
            // There's already a pop up window running.
            // Hurry the old pop up offscreen so the new one can appear.
            if (gTasks[gPopupTaskId].tState != STATE_SLIDE_OUT)
                gTasks[gPopupTaskId].tState = STATE_SLIDE_OUT;
            gTasks[gPopupTaskId].tIncomingPopUp = TRUE;
        }
    }
}

static void Task_MapNamePopUpWindow(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->tState)
    {
    case STATE_PRINT:
        // Wait, then create and print the pop up window
        if (++task->tPrintTimer > 30)
        {
            task->tState = STATE_SLIDE_IN;
            task->tPrintTimer = 0;
            ShowMapNamePopUpWindow();
            if (OW_POPUP_GENERATION == GEN_5)
            {
                EnableInterrupts(INTR_FLAG_HBLANK);
                SetHBlankCallback(HBlankCB_DoublePopupWindow);
            }
        }
        break;
    case STATE_SLIDE_IN:
        // Slide the window onscreen.
        task->tYOffset -= POPUP_SLIDE_SPEED;
        if (task->tYOffset <= 0 )
        {
            task->tYOffset = 0;
            task->tState = STATE_WAIT;
            gTasks[gPopupTaskId].tOnscreenTimer = 0;
        }
        break;
    case STATE_WAIT:
        // Wait while the window is fully onscreen.
        if (++task->tOnscreenTimer > 120)
        {
            task->tOnscreenTimer = 0;
            task->tState = STATE_SLIDE_OUT;
        }
        break;
    case STATE_SLIDE_OUT:
        // Slide the window offscreen.
        task->tYOffset += POPUP_SLIDE_SPEED;
        if (task->tYOffset >= POPUP_OFFSCREEN_Y)
        {
            task->tYOffset = POPUP_OFFSCREEN_Y;
            if (task->tIncomingPopUp)
            {
                // A new pop up window is incoming,
                // return to the first state to show it.
                task->tState = STATE_PRINT;
                task->tPrintTimer = 0;
                task->tIncomingPopUp = FALSE;
            }
            else
            {
                task->tState = STATE_ERASE;
                return;
            }
        }
        break;
    case STATE_ERASE:
        ClearStdWindowAndFrame(GetMapNamePopUpWindowId(), TRUE);
        if (OW_POPUP_GENERATION == GEN_5)
            ClearStdWindowAndFrame(GetSecondaryPopUpWindowId(), TRUE);
        task->tState = STATE_END;
        break;
    case STATE_END:
        HideMapNamePopUpWindow();
        return;
    }
    if (OW_POPUP_GENERATION != GEN_5)
        SetGpuReg(REG_OFFSET_BG0VOFS, task->tYOffset);
}

void HideMapNamePopUpWindow(void)
{
    if (FuncIsActiveTask(Task_MapNamePopUpWindow))
    {
    #ifdef UBFIX
        if (GetMapNamePopUpWindowId() != WINDOW_NONE)
    #endif // UBFIX
        {
            ClearStdWindowAndFrame(GetMapNamePopUpWindowId(), TRUE);
            RemoveMapNamePopUpWindow();
        }

        if (OW_POPUP_GENERATION == GEN_5)
        {
            if (GetSecondaryPopUpWindowId() != WINDOW_NONE)
            {
                ClearStdWindowAndFrame(GetSecondaryPopUpWindowId(), TRUE);
                RemoveSecondaryPopUpWindow();
            }

            DisableInterrupts(INTR_FLAG_HBLANK);
            SetHBlankCallback(NULL);

            if (OW_POPUP_BW_ALPHA_BLEND && !IsWeatherAlphaBlend())
            {
                SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_OBJ | WININ_WIN1_BG_ALL | WININ_WIN1_OBJ);
                SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_BG1 | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ | BLDCNT_EFFECT_BLEND);
                SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(8, 10));
            }
        }

        SetGpuReg_ForcedBlank(REG_OFFSET_BG0VOFS, 0);
        DestroyTask(gPopupTaskId);
    }
}

static void ShowMapNamePopUpWindow(void)
{
    u8 mapDisplayHeader[24];
    u8 *withoutPrefixPtr;
    u8 x;
    const u8 *mapDisplayHeaderSource;
    u8 mapNamePopUpWindowId, secondaryPopUpWindowId;

    if (InBattlePyramid())
    {
        if (gMapHeader.mapLayoutId == LAYOUT_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP)
        {
            withoutPrefixPtr = &(mapDisplayHeader[3]);
            mapDisplayHeaderSource = sBattlePyramid_MapHeaderStrings[FRONTIER_STAGES_PER_CHALLENGE];
        }
        else
        {
            withoutPrefixPtr = &(mapDisplayHeader[3]);
            mapDisplayHeaderSource = sBattlePyramid_MapHeaderStrings[gSaveBlock2Ptr->frontier.curChallengeBattleNum];
        }
        StringCopy(withoutPrefixPtr, mapDisplayHeaderSource);
    }
	else if (gMapHeader.regionMapSectionId == MAPSEC_DYNAMIC)
	{
        withoutPrefixPtr = &(mapDisplayHeader[3]);
        GetMapNameGeneric(withoutPrefixPtr, gMapHeader.regionMapSectionId);
	}
    else
    {
        withoutPrefixPtr = &(mapDisplayHeader[3]);
        GetMapName(withoutPrefixPtr, gMapHeader.regionMapSectionId, 0);
    }

    if (OW_POPUP_GENERATION == GEN_5)
    {
        if (OW_POPUP_BW_ALPHA_BLEND && !IsWeatherAlphaBlend())
            SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);

        mapNamePopUpWindowId = AddMapNamePopUpWindow();
        secondaryPopUpWindowId = AddSecondaryPopUpWindow();
    }
    else
    {
        AddMapNamePopUpWindow();
    }

    LoadMapNamePopUpWindowBg();

    mapDisplayHeader[0] = EXT_CTRL_CODE_BEGIN;
    mapDisplayHeader[1] = EXT_CTRL_CODE_HIGHLIGHT;
    mapDisplayHeader[2] = TEXT_COLOR_TRANSPARENT;

    if (OW_POPUP_GENERATION == GEN_5)
    {
        AddTextPrinterParameterized(mapNamePopUpWindowId, FONT_SHORT, mapDisplayHeader, 8, 2, TEXT_SKIP_DRAW, NULL);

        if (OW_POPUP_BW_TIME_MODE != OW_POPUP_BW_TIME_NONE)
        {
            RtcCalcLocalTime();
            FormatDecimalTimeWithoutSeconds(withoutPrefixPtr, gLocalTime.hours, gLocalTime.minutes, OW_POPUP_BW_TIME_MODE == OW_POPUP_BW_TIME_24_HR);
            AddTextPrinterParameterized(secondaryPopUpWindowId, FONT_SMALL, mapDisplayHeader, GetStringRightAlignXOffset(FONT_SMALL, mapDisplayHeader, DISPLAY_WIDTH) - 5, 8, TEXT_SKIP_DRAW, NULL);
        }

        CopyWindowToVram(mapNamePopUpWindowId, COPYWIN_FULL);
        CopyWindowToVram(secondaryPopUpWindowId, COPYWIN_FULL);
    }
    else
    {
        x = GetStringCenterAlignXOffset(FONT_NARROW, withoutPrefixPtr, 80);
        AddTextPrinterParameterized(GetMapNamePopUpWindowId(), FONT_NARROW, mapDisplayHeader, x, 3, TEXT_SKIP_DRAW, NULL);
        CopyWindowToVram(GetMapNamePopUpWindowId(), COPYWIN_FULL);
    }
}

#define TILE_TOP_EDGE_START 0x21D
#define TILE_TOP_EDGE_END   0x228
#define TILE_LEFT_EDGE_TOP  0x229
#define TILE_RIGHT_EDGE_TOP 0x22A
#define TILE_LEFT_EDGE_MID  0x22B
#define TILE_RIGHT_EDGE_MID 0x22C
#define TILE_LEFT_EDGE_BOT  0x22D
#define TILE_RIGHT_EDGE_BOT 0x22E
#define TILE_BOT_EDGE_START 0x22F
#define TILE_BOT_EDGE_END   0x23A

static void DrawMapNamePopUpFrame(u8 bg, u8 x, u8 y, u8 deltaX, u8 deltaY, u8 unused)
{
    s32 i;

    // Draw top edge
    for (i = 0; i < 1 + TILE_TOP_EDGE_END - TILE_TOP_EDGE_START; i++)
        FillBgTilemapBufferRect(bg, TILE_TOP_EDGE_START + i, i - 1 + x, y - 1, 1, 1, 14);

    // Draw sides
    FillBgTilemapBufferRect(bg, TILE_LEFT_EDGE_TOP,       x - 1,     y, 1, 1, 14);
    FillBgTilemapBufferRect(bg, TILE_RIGHT_EDGE_TOP, deltaX + x,     y, 1, 1, 14);
    FillBgTilemapBufferRect(bg, TILE_LEFT_EDGE_MID,       x - 1, y + 1, 1, 1, 14);
    FillBgTilemapBufferRect(bg, TILE_RIGHT_EDGE_MID, deltaX + x, y + 1, 1, 1, 14);
    FillBgTilemapBufferRect(bg, TILE_LEFT_EDGE_BOT,       x - 1, y + 2, 1, 1, 14);
    FillBgTilemapBufferRect(bg, TILE_RIGHT_EDGE_BOT, deltaX + x, y + 2, 1, 1, 14);

    // Draw bottom edge
    for (i = 0; i < 1 + TILE_BOT_EDGE_END - TILE_BOT_EDGE_START; i++)
        FillBgTilemapBufferRect(bg, TILE_BOT_EDGE_START + i, i - 1 + x, y + deltaY, 1, 1, 14);
}

static void LoadMapNamePopUpWindowBg(void)
{

	s32 mapGroup, mapNum;
	u32 n;
    u8 popUpThemeId;
    u8 popupWindowId = GetMapNamePopUpWindowId();
    u16 regionMapSectionId = gMapHeader.regionMapSectionId;
    u8 secondaryPopUpWindowId;

	//Handle Dyanmic Map Popup Themes
	if (regionMapSectionId == MAPSEC_DYNAMIC)
	{
		mapGroup = gSaveBlock1Ptr->location.mapGroup;
		mapNum   = gSaveBlock1Ptr->location.mapNum;
		//Route 3 - Canelos Cove(Marble), River Delta (Wood)
		if (mapGroup == MAP_GROUP(ROUTE3) && mapNum == MAP_NUM(ROUTE3))
		{
			if (IsRoute3RiverDelta())
				regionMapSectionId = MAPSEC_DELTA_DRACI;
			else
				regionMapSectionId = MAPSEC_SINUS_CAMELUS;
		} 
		//MareWWW - Mare Occidens or River Delta
		if (mapGroup == MAP_GROUP(MARE_WWW) && mapNum == MAP_NUM(MARE_WWW))
		{
			n = GetDynamicMapSec_MareWWW();
			if (n == 2) 
				regionMapSectionId = MAPSEC_DELTA_DRACI;
			else if (n == 1)
				regionMapSectionId = MAPSEC_MARE_OCCIDENS;
			else if (n == 3)
				regionMapSectionId = MAPSEC_ACTA_ECHONA;
			else
				regionMapSectionId = MAPSEC_DYNAMIC;
		}
		//Route 17
		if (mapGroup == MAP_GROUP(ROUTE17) && mapNum == MAP_NUM(ROUTE17))
		{
			n = GetDynamicMapSec_Route17();
			switch (n)
			{
				case 0:
					regionMapSectionId = MAPSEC_DYNAMIC;
					break;
				case 1:
					regionMapSectionId = MAPSEC_LACUS_DRACUS;
					break;
				case 2:
					regionMapSectionId = MAPSEC_LITUS_LACUS;
					break;
				case 3:
					regionMapSectionId = MAPSEC_DRACUS_SUPERIOR;
					break;
				case 4:
					regionMapSectionId = MAPSEC_DRACUS_INFERIOR;
					break;
				case 5:
					regionMapSectionId = MAPSEC_UPPER_EAST_DRAKE;
					break;
				case 6:
					regionMapSectionId = MAPSEC_LOWER_EAST_DRAKE;
					break;
				case 7:
					regionMapSectionId = MAPSEC_UPPER_WEST_DRAKE;
					break;
				case 8:
					regionMapSectionId = MAPSEC_LOWER_WEST_DRAKE;
					break;
				default:
					regionMapSectionId = MAPSEC_DYNAMIC;
			}
		}
		//Lake Ira
		if (mapGroup == MAP_GROUP(LAKE_IRA) && mapNum == MAP_NUM(LAKE_IRA))
		{
			n = GetDynamicMapSec_LakeIra();
			switch (n)
			{
				case 0:
					regionMapSectionId = MAPSEC_DYNAMIC;
					break;
				case 1:
					regionMapSectionId = MAPSEC_LACUS_DRACUS;
					break;
				case 2:
					regionMapSectionId = MAPSEC_LITUS_LACUS;
					break;
				case 3:
					regionMapSectionId = MAPSEC_SALIX;
					break;
				default:
					regionMapSectionId = MAPSEC_DYNAMIC;
			}
		}
		//LakeIraSouth
		if (mapGroup == MAP_GROUP(LAKE_IRA_SOUTH) && mapNum == MAP_NUM(LAKE_IRA_SOUTH)) 	
		{
			if (IsLakeIraSouthUpperDracoWest())
					regionMapSectionId = MAPSEC_UPPER_WEST_DRAKE;
			else  // Default part of map => Cove
					regionMapSectionId = MAPSEC_LOWER_WEST_DRAKE;
		}
		//SilvanWoodsN
		if (mapGroup == MAP_GROUP(SILVAN_WOODS_N) && mapNum == MAP_NUM(SILVAN_WOODS_N)) 	
		{		
			if (IsSilvanWoodsNUpperDracoEast())
					regionMapSectionId = MAPSEC_UPPER_EAST_DRAKE;
			else  // Default part of map => Cove
					regionMapSectionId = MAPSEC_LOWER_EAST_DRAKE;
		}
		//Silvan Woods
		if (mapGroup == MAP_GROUP(SILVAN_WOODS) && mapNum == MAP_NUM(SILVAN_WOODS))
		{
			n = GetDynamicMapSec_SilvanWoods();
			DebugPrintf ("Dynamic BG Theme, Silvan Woods\nn: %d", n);
			switch (n) {
				case 0:
					regionMapSectionId = MAPSEC_DYNAMIC;
					break;
				case 1:
					regionMapSectionId = MAPSEC_SILVA;
					break;
				case 2:
					regionMapSectionId = MAPSEC_DRACUS_INFERIOR;
					break;
				case 3:
					regionMapSectionId = MAPSEC_SILVA_PROFUNDA;
					break;
				default:
					regionMapSectionId = MAPSEC_DYNAMIC;
			}
		}
		//MareS6
		if (mapGroup == MAP_GROUP(MARE_S6) && mapNum == MAP_NUM(MARE_S6))
		{
			n = GetDynamicMapSec_MareS6();
			switch (n) {
				case 0:
					regionMapSectionId = MAPSEC_DYNAMIC;
					break;
				case 1:
					regionMapSectionId = MAPSEC_ISLA_PINEA;
					break;
				case 2:
					regionMapSectionId = MAPSEC_MARE_OCCIDENS;
					break;
				case 3:
					regionMapSectionId = MAPSEC_MARE_TROPICUM;
					break;
                case 4:
                    regionMapSectionId = MAPSEC_ACTA_ECHONA;
					break;
				default:
					regionMapSectionId = MAPSEC_DYNAMIC;
			}
		}
		//MareWW 
		if (mapGroup == MAP_GROUP(MARE_WW) && mapNum == MAP_NUM(MARE_WW))
		{
			n = GetDynamicMapSec_MareWW();
			switch (n) {
				case 0:
					regionMapSectionId = MAPSEC_DYNAMIC;
					break;
				case 1:
					regionMapSectionId = MAPSEC_DELTA_DRACI;
					break;
				case 2:
					regionMapSectionId = MAPSEC_MARE_TROPICUM;
					break;
				case 3:
					regionMapSectionId = MAPSEC_ACTA_ECHONA;
					break;
				default:
					regionMapSectionId = MAPSEC_DYNAMIC;
			}
		}
		//CityClara 
		if (mapGroup == MAP_GROUP(CITY_CLARA) && mapNum == MAP_NUM(CITY_CLARA))
		{
			n = GetDynamicMapSec_CityClara();
			switch (n) {
				case 0:
					regionMapSectionId = MAPSEC_DYNAMIC;
					break;
				case 1:
					regionMapSectionId = MAPSEC_ACTA_ECHONA;
					break;
				case 2:
					regionMapSectionId = MAPSEC_SILVA;
					break;
				case 3:
					regionMapSectionId = MAPSEC_VIA_FIDELIUM;
					break;
				case 4:
					regionMapSectionId = MAPSEC_SINUS_CLARUS;
					break;
				case 5:
					regionMapSectionId = MAPSEC_CASTALIA;
					break;
				default:
					regionMapSectionId = MAPSEC_DYNAMIC;
			}
		}
		//MareW
		if (mapGroup == MAP_GROUP(MARE_W) && mapNum == MAP_NUM(MARE_W))
		{
			n = GetDynamicMapSec_MareW();
			switch (n) {
				case 0:
					regionMapSectionId = MAPSEC_DYNAMIC;
					break;
				case 1:
					regionMapSectionId = MAPSEC_ACTA_ECHONA;
					break;
				case 2:
					regionMapSectionId = MAPSEC_MARE_INTERNUM;
					break;
				case 3:
					regionMapSectionId = MAPSEC_MARE_TRANQUILLUM;
					break;
				case 4:
					regionMapSectionId = MAPSEC_MARE_TROPICUM;
					break;
				default:
					regionMapSectionId = MAPSEC_DYNAMIC;
			}
		}
		//SRoute18
		if (mapGroup == MAP_GROUP(SROUTE18) && mapNum == MAP_NUM(SROUTE18))
		{
			n = GetDynamicMapSec_SRoute18();
			switch (n) {
				case 0:
					regionMapSectionId = MAPSEC_DYNAMIC;
					break;
				case 1:
					regionMapSectionId = MAPSEC_SINUS_PACIFICUS;
					break;
				case 2:
					regionMapSectionId = MAPSEC_CASTRUM;
					break;
				case 3:
					regionMapSectionId = MAPSEC_SINUS_CLARUS;
					break;
				case 4:
					regionMapSectionId = MAPSEC_MARE_INTERNUM;
					break;
				default:
					regionMapSectionId = MAPSEC_DYNAMIC;
			}
		}
        //MareS5
		if (mapGroup == MAP_GROUP(MARE_S5) && mapNum == MAP_NUM(MARE_S5))
		{
			if (IsMareS5MareTropicum())
				regionMapSectionId = MAPSEC_MARE_TROPICUM;
			else
				regionMapSectionId = MAPSEC_ACTA_ECHONA;
		} 
		//Route4
		if (mapGroup == MAP_GROUP(ROUTE4) && mapNum == MAP_NUM(ROUTE4))
		{
			n = GetDynamicMapSec_Route4();
			switch (n) {
				case 0:
					regionMapSectionId = MAPSEC_DYNAMIC;
					break;
				case 1:
					regionMapSectionId = MAPSEC_VIA_LITORALIS;
					break;
				case 2:
					regionMapSectionId = MAPSEC_VIA_FIDELIUM;
					break;
				case 3:
					regionMapSectionId = MAPSEC_SINUS_PACIFICUS;
					break;
				default:
					regionMapSectionId = MAPSEC_DYNAMIC;
			}
		}
		//Route6
		if (mapGroup == MAP_GROUP(ROUTE6) && mapNum == MAP_NUM(ROUTE6))
		{
			n = GetDynamicMapSec_Route6();
			switch (n) {
				case 0:
					regionMapSectionId = MAPSEC_DYNAMIC;
					break;
				case 1:
					regionMapSectionId = MAPSEC_VIA_LITORALIS;
					break;
				case 2:
					regionMapSectionId = MAPSEC_VILLA_VIVARIA;
					break;
				case 3:
					regionMapSectionId = MAPSEC_SINUS_PACIFICUS;
					break;
				default:
					regionMapSectionId = MAPSEC_DYNAMIC;
			}
		}
		//Route7
		if (mapGroup == MAP_GROUP(ROUTE7) && mapNum == MAP_NUM(ROUTE7))
		{
			n = GetDynamicMapSec_Route7();
			switch (n) {
				//Via Litoralis
				case 1:
					regionMapSectionId = MAPSEC_VIA_LITORALIS;
					break;
				//Mare Internum
				case 2:
					regionMapSectionId = MAPSEC_MARE_INTERNUM;
					break;
				//Montes Vigiliae
				case 3:
					regionMapSectionId = MAPSEC_MONTES_VIGILIAE;
					break;
				//Villla Vallis
				case 4:
					regionMapSectionId = MAPSEC_VILLA_VALLIS;
					break;
				//Sabina Nova
				case 5:
					regionMapSectionId = MAPSEC_SABINA_NOVA;
					break;
				default:
					regionMapSectionId = MAPSEC_DYNAMIC;
			}
		}
		//Route5
		if (mapGroup == MAP_GROUP(ROUTE5) && mapNum == MAP_NUM(ROUTE5))
		{
			n = GetDynamicMapSec_Route5();
			switch (n) {
				//Venator Mons
				case 1:
					regionMapSectionId = MAPSEC_VENATOR_MONS;
					break;
				//Via Litoralis
				case 2:
					regionMapSectionId = MAPSEC_VIA_LITORALIS;
					break;
				//Villa Venatorum
				case 3:
					regionMapSectionId = MAPSEC_VILLA_VENATORUM;
					break;
				default:
					regionMapSectionId = MAPSEC_DYNAMIC;
			}
		}
		//Sanjo - Sabina Nova or Via Magna
		if (mapGroup == MAP_GROUP(SANJO) && mapNum == MAP_NUM(SANJO)) 
		{
			//Sabina Nova or Via Magna
			if (IsSanjoSabinaNova())
				regionMapSectionId = MAPSEC_SABINA_NOVA;
			else 
				regionMapSectionId = MAPSEC_VIA_MAGNA;
		}
		//DoakTown - Robustica or Via Magna
		if (mapGroup == MAP_GROUP(DOAK_TOWN) && mapNum == MAP_NUM(DOAK_TOWN)) 
		{
			//Robustica or Via Magna
			if (IsDoakTownRobustica())
				regionMapSectionId = MAPSEC_ROBUSTICA;
			else 
				regionMapSectionId = MAPSEC_VIA_MAGNA;
		}
		//SRoute19 - Mare Internum or Montes Vigiliae
		if (mapGroup == MAP_GROUP(SROUTE19) && mapNum == MAP_NUM(SROUTE19)) 
		{
			//Mare Internum or Montes Vigiliae
			if (IsSRoute19MareInternum())
				regionMapSectionId = MAPSEC_MARE_INTERNUM;
			else 
				regionMapSectionId = MAPSEC_MONTES_VIGILIAE;
		}
		//Route9 - Via Saxosa or Montes Vigiliae
		if (mapGroup == MAP_GROUP(ROUTE9) && mapNum == MAP_NUM(ROUTE9)) 
		{
			if (IsRoute9ViaSaxosa())
				regionMapSectionId = MAPSEC_VIA_SAXOSA;
			else 
				regionMapSectionId = MAPSEC_MONTES_VIGILIAE;
		}
		//Route16 - Venator Mons or Cacnorum 
		if (mapGroup == MAP_GROUP(ROUTE16) && mapNum == MAP_NUM(ROUTE16)) 
		{
			if (IsRoute16VenatorMons())
				regionMapSectionId = MAPSEC_VENATOR_MONS;
			else 
				regionMapSectionId = MAPSEC_CACNORUM;
		}
		DebugPrintf("\nBottom of Dynamic BG Theme\nregionMapSectionId: %d", regionMapSectionId);
	}

    if (OW_POPUP_GENERATION == GEN_5)
        secondaryPopUpWindowId = GetSecondaryPopUpWindowId();

    //if (regionMapSectionId >= KANTO_MAPSEC_START)
    //{
    //    if (regionMapSectionId > KANTO_MAPSEC_END)
    //        regionMapSectionId -= KANTO_MAPSEC_COUNT;
    //    else
    //        regionMapSectionId = 0; // Discard kanto region sections;
    //}

    if (OW_POPUP_GENERATION == GEN_5)
    {
        popUpThemeId = sRegionMapSectionId_To_PopUpThemeIdMapping_BW[regionMapSectionId];
        switch (popUpThemeId)
        {
            // add additional gen 5-style pop-up themes as cases here
            default: // MAPPOPUP_THEME_BW_DEFAULT
                if (OW_POPUP_BW_COLOR == OW_POPUP_BW_COLOR_WHITE)
                    LoadPalette(sMapPopUpTilesPalette_BW_White, BG_PLTT_ID(14), sizeof(sMapPopUpTilesPalette_BW_White));
                else
                    LoadPalette(sMapPopUpTilesPalette_BW_Black, BG_PLTT_ID(14), sizeof(sMapPopUpTilesPalette_BW_Black));

                CopyToWindowPixelBuffer(popupWindowId, sMapPopUpTilesPrimary_BW, sizeof(sMapPopUpTilesPrimary_BW), 0);
                CopyToWindowPixelBuffer(secondaryPopUpWindowId, sMapPopUpTilesSecondary_BW, sizeof(sMapPopUpTilesSecondary_BW), 0);
                break;
        }

        PutWindowTilemap(popupWindowId);
        PutWindowTilemap(secondaryPopUpWindowId);
    }
    else
    {
        popUpThemeId = sRegionMapSectionId_To_PopUpThemeIdMapping[regionMapSectionId];
        LoadBgTiles(GetWindowAttribute(popupWindowId, WINDOW_BG), sMapPopUp_OutlineTable[popUpThemeId], 0x400, 0x21D);
        CallWindowFunction(popupWindowId, DrawMapNamePopUpFrame);
        PutWindowTilemap(popupWindowId);
        if (gMapHeader.weather == WEATHER_UNDERWATER_BUBBLES)
            LoadPalette(&sMapPopUp_Palette_Underwater, BG_PLTT_ID(14), sizeof(sMapPopUp_Palette_Underwater));
        else
            LoadPalette(sMapPopUp_PaletteTable[popUpThemeId], BG_PLTT_ID(14), sizeof(sMapPopUp_PaletteTable[0]));
        BlitBitmapToWindow(popupWindowId, sMapPopUp_Table[popUpThemeId], 0, 0, 80, 24);
    }
}
