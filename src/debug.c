
//THANKS TO
//TheXaman:             https://github.com/TheXaman/pokeemerald/tree/tx_debug_system
//CODE USED FROM:
//ketsuban:             https://github.com/pret/pokeemerald/wiki/Add-a-debug-menu
//Pyredrid:             https://github.com/Pyredrid/pokeemerald/tree/debugmenu
//AsparagusEduardo:     https://github.com/AsparagusEduardo/pokeemerald/tree/InfusedEmerald_v2
//Ghoulslash:           https://github.com/ghoulslash/pokeemerald

//HEADERS
#include "global.h"
#include "credits.h"
#include "data.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_message_box.h"
#include "field_screen_effect.h"
#include "international_string_util.h"
#include "item.h"
#include "item_icon.h"
#include "list_menu.h"
#include "main.h"
#include "main_menu.h"
#include "malloc.h"
#include "map_name_popup.h"
#include "menu.h"
#include "naming_screen.h"
#include "new_game.h"
#include "overworld.h"
#include "pokedex.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "region_map.h"
#include "reset_rtc_screen.h"
#include "script.h"
#include "script_pokemon_util.h"
#include "sound.h"
#include "strings.h"
#include "string_util.h"
#include "task.h"
#include "pokemon_summary_screen.h"
#include "constants/abilities.h"
#include "constants/flags.h"
#include "constants/items.h"
#include "constants/map_groups.h"
#include "constants/songs.h"
#include "constants/species.h"

//CONSTANTS
#define DEBUG_MAIN_MENU_HEIGHT 8
#define DEBUG_MAIN_MENU_WIDTH 13

#define DEBUG_NUMBER_DISPLAY_WIDTH 10
#define DEBUG_NUMBER_DISPLAY_HEIGHT 4

#define DEBUG_NUMBER_DIGITS_FLAGS 4
#define DEBUG_NUMBER_DIGITS_ITEMS 4
#define DEBUG_NUMBER_DIGITS_ITEM_QUANTITY 2

#define DEBUG_NUMBER_ICON_X 210
#define DEBUG_NUMBER_ICON_Y 50

// EWRAM 
static EWRAM_DATA struct DebugMonData *sDebugMonData = NULL;

//FUNCTIONS

static void Debug_ShowMenu(void (*HandleInput)(u8), struct ListMenuTemplate LMtemplate);
void Debug_ShowMainMenu(void);
static void Debug_DestroyMenu(u8);
static void Debug_DestroyExtraWindow(u8 taskId);

static void DebugAction_Cancel(u8);
static void DebugAction_OpenUtilitiesMenu(u8);
static void DebugAction_OpenFlagsMenu(u8);
static void DebugAction_OpenGiveMenu(u8);

static void DebugTask_HandleMenuInput_Main(u8);
static void DebugTask_HandleMenuInput_Utilities(u8);
static void DebugTask_HandleMenuInput_Flags(u8);
static void DebugTask_HandleMenuInput_Give(u8);

static void DebugAction_Util_HealParty(u8 taskId);
static void DebugAction_Util_Fly(u8 taskId);
static void DebugAction_Util_Warp_Warp(u8 taskId);
static void DebugAction_Util_Warp_SelectMapGroup(u8 taskId);
static void DebugAction_Util_Warp_SelectMap(u8 taskId);
static void DebugAction_Util_Warp_SelectWarp(u8 taskId);
static void DebugAction_Util_CheckSaveBlock(u8);
static void DebugAction_Util_CheckWallClock(u8);
//static void DebugAction_Util_CheckWeekDay(u8);
static void DebugAction_Util_SetWallClock(u8);
static void DebugAction_Util_WatchCredits(u8);

static void DebugAction_Flags_Flags(u8 taskId);
static void DebugAction_Flags_FlagsSelect(u8 taskId);

static void DebugAction_Flags_SetPokedexFlags(u8);
static void DebugAction_Flags_SwitchDex(u8);
static void DebugAction_Flags_SwitchNatDex(u8);
static void DebugAction_Flags_ToggleFlyFlags(u8);
static void DebugAction_Flags_ToggleBadgeFlags(u8);
static void DebugAction_Flags_CollisionOnOff(u8);
static void DebugAction_Flags_EncounterOnOff(u8);
static void DebugAction_Flags_TrainerSeeOnOff(u8);

static void DebugAction_Give_Pokemon(u8 taskId);
static void DebugAction_Give_Pokemon_SelectId(u8 taskId);
static void DebugAction_Give_Pokemon_SelectLevel(u8 taskId);

static void DebugAction_Give_Item_Item(u8 taskId);
static void DebugAction_Give_Item_SelectId(u8 taskId);
static void DebugAction_Give_Item_SelectQuantity(u8 taskId);
static void DebugAction_Give_Item_AllTMs(u8);

static void DebugTask_HandleMenuInput(u8 taskId, void(*HandleInput)(u8));
static void DebugAction_OpenSubMenu(u8 taskId, struct ListMenuTemplate LMtemplate);

extern u8 Debug_ShowFieldMessageStringVar4[];
extern u8 PlayersHouse_2F_EventScript_SetWallClock[];
extern u8 PlayersHouse_2F_EventScript_CheckWallClock[];


 static const u8 MAP_GROUP_COUNT[] = {59, 5, 5, 6, 7, 8, 9, 7, 7, 14, 8, 17, 10, 23, 13, 15, 15, 2, 2, 2, 3, 1, 1, 1, 108, 61, 89, 2, 1, 13, 1, 1, 3, 49, 0};

struct DebugMonData
{
	u16 mon_speciesId;
	u8	mon_level;
};

//TEXT

//Main Menu
static const u8 gDebugText_Utilities[] =        _("Utilities");
static const u8 gDebugText_Flags[] =            _("Flags");
static const u8 gDebugText_Give[] =             _("Give");
static const u8 gDebugText_Cancel[] = 		    _("Cancel");

//Util Menu
static const u8 gDebugText_Util_HealParty[] =				 _("Heal Party");
static const u8 gDebugText_Util_Fly[] =						 _("Fly to map");
static const u8 gDebugText_Util_WarpToMap[] =				 _("Warp to map warp");
static const u8 gDebugText_Util_WarpToMap_SelectMapGroup[] = _("Group: {STR_VAR_1}          \n                 \n\n{STR_VAR_3}     ");
static const u8 gDebugText_Util_WarpToMap_SelectMap[] = 	 _("Map: {STR_VAR_1}            \nMapSec:          \n{STR_VAR_2}                       \n{STR_VAR_3}     ");
static const u8 gDebugText_Util_WarpToMap_SelectWarp[] =	 _("Warp:             \n{STR_VAR_1}                \n                                  \n{STR_VAR_3}     ");
static const u8 gDebugText_Util_WarpToMap_SelMax[] =	     _("{STR_VAR_1} / {STR_VAR_2}");
static const u8 gDebugText_Util_SaveBlockSpace[] =	         _("SaveBlock Space");
static const u8 gDebugText_Util_CheckWallClock[] =	         _("Check Wall Clock");
//static const u8 gDebugText_Util_CheckWeekDay[] =	         _("Check Week Day");
static const u8 gDebugText_Util_SetWallClock[] =	         _("Set Wall Clock");
static const u8 gDebugText_Util_WatchCredits[] =	         _("Watch Credits");

//Flags Menu
static const u8 gDebugText_Flags_Flags[] =            _("Set Flag XXXX");
static const u8 gDebugText_FlagHex[] =                    _("{STR_VAR_1}           \n0x{STR_VAR_2}             ");
static const u8 gDebugText_FlagSet[] =                    _("TRUE");
static const u8 gDebugText_FlagUnset[] =                  _("FALSE");
static const u8 gDebugText_Flags_SetPokedexFlags[] =            _("All Pokedex Flags");

static const u8 gDebugText_Flags_SwitchDex[] =            _("All Pokedex Flags");
static const u8 gDebugText_Flags_SwitchNationalDex[] =            _("National Dex ON/OFF");
static const u8 gDebugText_Flags_FlyAnywhere[] =       _("Fly Flags ON/OFF");
static const u8 gDebugText_Flags_ToggleAllBadges[] =      _("All badges ON/OFF");
static const u8 gDebugText_Flags_SwitchCollision[] =            _("Collision ON/OFF");
static const u8 gDebugText_Flags_SwitchEncounter[] =            _("Encounter ON/OFF");
static const u8 gDebugText_Flags_SwitchTrainerSee[] =            _("TrainerSee ON/OFF");

//Give Menu
static const u8 gDebugText_Give_GiveItem[] =            _("Give item XXXX");
static const u8 gDebugText_ItemQuantity[] =             _("Quantity:       \n{STR_VAR_1}    \n\n{STR_VAR_2}");
static const u8 gDebugText_ItemID[] =                   _("Item Id: {STR_VAR_3}\n{STR_VAR_1}    \n\n{STR_VAR_2}");
static const u8 gDebugText_Give_AllTMs[] = _("Give All TMs");
static const u8 gDebugText_Give_Pokemon[] =            _("Give Pokemon(ID/LV");
static const u8 gDebugText_PokemonID[] =               _("Species: {STR_VAR_3}\n{STR_VAR_1}    \n\n{STR_VAR_2}");
static const u8 gDebugText_PokemonLevel[] =             _("Level:                   \n{STR_VAR_1}           \n          \n{STR_VAR_2}");

static const u8 digitInidicator_1[] =               _("{LEFT_ARROW}+1{RIGHT_ARROW}        ");
static const u8 digitInidicator_10[] =              _("{LEFT_ARROW}+10{RIGHT_ARROW}       ");
static const u8 digitInidicator_100[] =             _("{LEFT_ARROW}+100{RIGHT_ARROW}      ");
static const u8 digitInidicator_1000[] =            _("{LEFT_ARROW}+1000{RIGHT_ARROW}     ");
static const u8 digitInidicator_10000[] =           _("{LEFT_ARROW}+10000{RIGHT_ARROW}    ");
static const u8 digitInidicator_100000[] =          _("{LEFT_ARROW}+100000{RIGHT_ARROW}   ");
static const u8 digitInidicator_1000000[] =         _("{LEFT_ARROW}+1000000{RIGHT_ARROW}  ");
static const u8 digitInidicator_10000000[] =        _("{LEFT_ARROW}+10000000{RIGHT_ARROW} ");

const u8 * const gText_DigitIndicator[] =
{
	digitInidicator_1,
    digitInidicator_10,
    digitInidicator_100,
    digitInidicator_1000,
    digitInidicator_10000,
    digitInidicator_100000,
    digitInidicator_1000000,
    digitInidicator_10000000
};

static const s32 sPowersOfTen[] =
{
             1,
            10,
           100,
          1000,
         10000,
        100000,
       1000000,
      10000000,
     100000000,
    1000000000,
};


//ENUMS

enum { //Main
	DEBUG_MENU_ITEM_UTILITIES,
	DEBUG_MENU_ITEM_FLAGS,
	DEBUG_MENU_ITEM_GIVE,
	DEBUG_MENU_ITEM_CANCEL,
};

enum { //Utils
	DEBUG_UTIL_MENU_ITEM_HEAL_PARTY,
	DEBUG_UTIL_MENU_ITEM_FLY,
	DEBUG_UTIL_MENU_ITEM_WARP_WARP,
	DEBUG_UTIL_MENU_ITEM_SAVEBLOCK,
	DEBUG_UTIL_MENU_ITEM_CHECKWALLCLOCK,
	DEBUG_UTIL_MENU_ITEM_SETWALLCLOCK,
//	DEBUG_UTIL_MENU_ITEM_CHECKWEEKDAY,
	DEBUG_UTIL_MENU_ITEM_WATCHCREDITS,
};

enum { //Flags
	DEBUG_FLAGS_MENU_ITEM_FLAGS,
	DEBUG_FLAGS_MENU_ITEM_POKEDEXFLAGS,
	DEBUG_FLAGS_MENU_ITEM_POKEDEXONOFF,
	DEBUG_FLAGS_MENU_ITEM_NATDEXONOFF,
	DEBUG_FLAGS_MENU_ITEM_FLYANYWHERE,
	DEBUG_FLAGS_MENU_ITEM_GETALLBADGES,
	DEBUG_FLAGS_MENU_ITEM_COLLISION_ONOFF,
	DEBUG_FLAGS_MENU_ITEM_ENCOUNTER_ONOFF,
	DEBUG_FLAGS_MENU_ITEM_TRAINER_SEE_ONOFF,
};

enum { //Give
	DEBUG_GIVE_MENU_ITEM_ITEM,
	DEBUG_GIVE_MENU_ITEM_ALLTMS,
	DEBUG_GIVE_MENU_ITEM_POKEMON,
};

//LIST MENU ITEMS

static const struct ListMenuItem sDebugMenu_Items_Main[] =
{
	[DEBUG_MENU_ITEM_UTILITIES] = {gDebugText_Utilities, DEBUG_MENU_ITEM_UTILITIES},
	[DEBUG_MENU_ITEM_FLAGS] = {gDebugText_Flags, DEBUG_MENU_ITEM_FLAGS},
	[DEBUG_MENU_ITEM_GIVE] = {gDebugText_Give, DEBUG_MENU_ITEM_GIVE},
	[DEBUG_MENU_ITEM_CANCEL] = {gDebugText_Cancel, DEBUG_MENU_ITEM_CANCEL},
};

static const struct ListMenuItem sDebugMenu_Items_Utilities[] =
{
	[DEBUG_UTIL_MENU_ITEM_HEAL_PARTY]     = {gDebugText_Util_HealParty,        DEBUG_UTIL_MENU_ITEM_HEAL_PARTY},
	[DEBUG_UTIL_MENU_ITEM_FLY]		      = {gDebugText_Util_Fly,			   DEBUG_UTIL_MENU_ITEM_FLY},
	[DEBUG_UTIL_MENU_ITEM_WARP_WARP]	  = {gDebugText_Util_WarpToMap, 	   DEBUG_UTIL_MENU_ITEM_WARP_WARP},
	[DEBUG_UTIL_MENU_ITEM_SAVEBLOCK]      = {gDebugText_Util_SaveBlockSpace,   DEBUG_UTIL_MENU_ITEM_SAVEBLOCK},
	[DEBUG_UTIL_MENU_ITEM_CHECKWALLCLOCK] = {gDebugText_Util_CheckWallClock,   DEBUG_UTIL_MENU_ITEM_CHECKWALLCLOCK},
	[DEBUG_UTIL_MENU_ITEM_SETWALLCLOCK]   = {gDebugText_Util_SetWallClock,     DEBUG_UTIL_MENU_ITEM_SETWALLCLOCK},
	//[DEBUG_UTIL_MENU_ITEM_CHECKWEEKDAY]   = {gGebugText_Util_CheckWeekDay,     DEBUG_UTIL_MENU_CHECKWEEKDAY},
	[DEBUG_UTIL_MENU_ITEM_WATCHCREDITS]   = {gDebugText_Util_WatchCredits,     DEBUG_UTIL_MENU_ITEM_WATCHCREDITS},
};

static const struct ListMenuItem sDebugMenu_Items_Flags[] =
{
	[DEBUG_FLAGS_MENU_ITEM_FLAGS]          	  = {gDebugText_Flags_Flags,				     DEBUG_FLAGS_MENU_ITEM_FLAGS},
	[DEBUG_FLAGS_MENU_ITEM_POKEDEXFLAGS]      = {gDebugText_Flags_SetPokedexFlags,		     DEBUG_FLAGS_MENU_ITEM_POKEDEXFLAGS},
	[DEBUG_FLAGS_MENU_ITEM_POKEDEXONOFF]      = {gDebugText_Flags_SwitchDex,	  	    	 DEBUG_FLAGS_MENU_ITEM_NATDEXONOFF},
	[DEBUG_FLAGS_MENU_ITEM_NATDEXONOFF]       = {gDebugText_Flags_SwitchNationalDex,	     DEBUG_FLAGS_MENU_ITEM_NATDEXONOFF},
	[DEBUG_FLAGS_MENU_ITEM_FLYANYWHERE]       = {gDebugText_Flags_FlyAnywhere,	   			 DEBUG_FLAGS_MENU_ITEM_FLYANYWHERE},
	[DEBUG_FLAGS_MENU_ITEM_GETALLBADGES]      = {gDebugText_Flags_ToggleAllBadges,	    	 DEBUG_FLAGS_MENU_ITEM_GETALLBADGES},
	[DEBUG_FLAGS_MENU_ITEM_COLLISION_ONOFF]   = {gDebugText_Flags_SwitchCollision,  	     DEBUG_FLAGS_MENU_ITEM_COLLISION_ONOFF},
	[DEBUG_FLAGS_MENU_ITEM_ENCOUNTER_ONOFF]   = {gDebugText_Flags_SwitchEncounter,           DEBUG_FLAGS_MENU_ITEM_ENCOUNTER_ONOFF},
	[DEBUG_FLAGS_MENU_ITEM_TRAINER_SEE_ONOFF] = {gDebugText_Flags_SwitchTrainerSee,          DEBUG_FLAGS_MENU_ITEM_TRAINER_SEE_ONOFF},
};
static const struct ListMenuItem sDebugMenu_Items_Give[] =
{
	[DEBUG_GIVE_MENU_ITEM_ITEM]	    = {gDebugText_Give_GiveItem,   DEBUG_GIVE_MENU_ITEM_ITEM},
	[DEBUG_GIVE_MENU_ITEM_ALLTMS]   = {gDebugText_Give_AllTMs,		DEBUG_GIVE_MENU_ITEM_ALLTMS},
	[DEBUG_GIVE_MENU_ITEM_POKEMON]	= {gDebugText_Give_Pokemon,		DEBUG_GIVE_MENU_ITEM_POKEMON},
};


//MENU ACTIONS
static void (*const sDebugMenu_Actions_Main[])(u8) =
{
	[DEBUG_MENU_ITEM_UTILITIES] = DebugAction_OpenUtilitiesMenu,
	[DEBUG_MENU_ITEM_FLAGS]    = DebugAction_OpenFlagsMenu,
	[DEBUG_MENU_ITEM_GIVE]     = DebugAction_OpenGiveMenu,
	[DEBUG_MENU_ITEM_CANCEL] = DebugAction_Cancel,
};

static void (*const sDebugMenu_Actions_Utilities[])(u8) =
{
	[DEBUG_UTIL_MENU_ITEM_HEAL_PARTY]     = DebugAction_Util_HealParty,
	[DEBUG_UTIL_MENU_ITEM_FLY] 		      = DebugAction_Util_Fly,
	[DEBUG_UTIL_MENU_ITEM_WARP_WARP]      = DebugAction_Util_Warp_Warp,
	[DEBUG_UTIL_MENU_ITEM_SAVEBLOCK]      = DebugAction_Util_CheckSaveBlock,
	[DEBUG_UTIL_MENU_ITEM_CHECKWALLCLOCK] = DebugAction_Util_CheckWallClock,
	[DEBUG_UTIL_MENU_ITEM_SETWALLCLOCK]   = DebugAction_Util_SetWallClock,
	//[DEBUG_UTIL_MENU_ITEM_CHECKWEEKDAY]   = DebugAction_Util_CheckWeekDay,
	[DEBUG_UTIL_MENU_ITEM_WATCHCREDITS]   = DebugAction_Util_WatchCredits,
};

static void (*const sDebugMenu_Actions_Flags[])(u8) =
{
	[DEBUG_FLAGS_MENU_ITEM_FLAGS] 			 = DebugAction_Flags_Flags,
	[DEBUG_FLAGS_MENU_ITEM_POKEDEXFLAGS]      = DebugAction_Flags_SetPokedexFlags,
	[DEBUG_FLAGS_MENU_ITEM_POKEDEXONOFF]       = DebugAction_Flags_SwitchDex,
	[DEBUG_FLAGS_MENU_ITEM_NATDEXONOFF]       = DebugAction_Flags_SwitchNatDex,
	[DEBUG_FLAGS_MENU_ITEM_FLYANYWHERE]       = DebugAction_Flags_ToggleFlyFlags,
	[DEBUG_FLAGS_MENU_ITEM_GETALLBADGES]      = DebugAction_Flags_ToggleBadgeFlags,
	[DEBUG_FLAGS_MENU_ITEM_COLLISION_ONOFF]   = DebugAction_Flags_CollisionOnOff,
	[DEBUG_FLAGS_MENU_ITEM_ENCOUNTER_ONOFF]   = DebugAction_Flags_EncounterOnOff,
	[DEBUG_FLAGS_MENU_ITEM_TRAINER_SEE_ONOFF] = DebugAction_Flags_TrainerSeeOnOff,
};

static void (*const sDebugMenu_Actions_Give[])(u8) =
{
	[DEBUG_GIVE_MENU_ITEM_ITEM]    = DebugAction_Give_Item_Item,
	[DEBUG_GIVE_MENU_ITEM_ALLTMS]  = DebugAction_Give_Item_AllTMs,
	[DEBUG_GIVE_MENU_ITEM_POKEMON] = DebugAction_Give_Pokemon,
};


/*
static void (*const sDebugMenuActions[])(u8) =
{
	[DEBUG_MENU_GIVE_ALLTMS] = DebugAction_Give_AllTMs,
	[DEBUG_MENU_ITEM_CANCEL] = DebugAction_Cancel,
};
*/

//WINDOWS
static const struct WindowTemplate sDebugMenuWindowTemplate = 
{
	.bg = 0,
	.tilemapLeft = 1,
	.tilemapTop = 1,
	.width = DEBUG_MAIN_MENU_WIDTH,
	.height = 2 * DEBUG_MAIN_MENU_HEIGHT,
	.paletteNum = 15,
	.baseBlock = 1,
};
static const struct WindowTemplate sDebugNumberDisplayWindowTemplate = 
{
	.bg = 0,
	.tilemapLeft = 6 + DEBUG_MAIN_MENU_WIDTH,
	.tilemapTop = 1,
	.width = DEBUG_NUMBER_DISPLAY_WIDTH,
	.height = 2 * DEBUG_NUMBER_DISPLAY_HEIGHT,
	.paletteNum = 15,
	.baseBlock = 1,
};

//List Menu Templates
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Main =
{
	.items = sDebugMenu_Items_Main,
	.moveCursorFunc = ListMenuDefaultCursorMoveFunc,
	.totalItems = ARRAY_COUNT(sDebugMenu_Items_Main),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Utilities =
{
	.items = sDebugMenu_Items_Utilities,
	.moveCursorFunc = ListMenuDefaultCursorMoveFunc,
	.totalItems = ARRAY_COUNT(sDebugMenu_Items_Main),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Flags =
{
	.items = sDebugMenu_Items_Flags,
	.moveCursorFunc = ListMenuDefaultCursorMoveFunc,
	.totalItems = ARRAY_COUNT(sDebugMenu_Items_Main),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Give =
{
	.items = sDebugMenu_Items_Give,
	.moveCursorFunc = ListMenuDefaultCursorMoveFunc,
	.totalItems = ARRAY_COUNT(sDebugMenu_Items_Give),
};



/*
static const struct ListMenuTemplate sDebugMenuListTemplate = 
{
	.items = sDebugMenuItems,
	.moveCursorFunc = ListMenuDefaultCursorMoveFunc,
	.totalItems = ARRAY_COUNT(sDebugMenuItems),
	.maxShowed = DEBUG_MAIN_MENU_HEIGHT,
	.windowId = 0,
	.header_X = 0,
	.item_X = 8,
	.cursor_X = 0,
	.upText_Y = 1,
	.cursorPal = 2,
	.fillValue = 1,
	.cursorShadowPal = 3,
	.lettersSpacing = 1,
	.itemVerticalPadding = 0,
	.scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
	.fontId = 1,
	.cursorKind = 0
};
*/

//UNIVERSAL FUNCTIONS

void Debug_ShowMainMenu(void)
{
	Debug_ShowMenu(DebugTask_HandleMenuInput_Main, sDebugMenu_ListTemplate_Main);
}

static void Debug_ShowMenu(void (*HandleInput)(u8), struct ListMenuTemplate LMtemplate)
{
	struct ListMenuTemplate menuTemplate;
	u8 windowId;
	u8 menuTaskId;
	u8 inputTaskId;

	//create window
	HideMapNamePopUpWindow();
	LoadMessageBoxAndBorderGfx();
	windowId = AddWindow(&sDebugMenuWindowTemplate);
	DrawStdWindowFrame(windowId, FALSE);

	//create list menu
	menuTemplate = LMtemplate;
	menuTemplate.windowId = windowId;
	menuTemplate.maxShowed = DEBUG_MAIN_MENU_HEIGHT;
	menuTemplate.header_X = 0;
	menuTemplate.item_X = 8;
	menuTemplate.cursor_X = 0;
	menuTemplate.upText_Y =1;
	menuTemplate.cursorPal = 2;
	menuTemplate.fillValue = 1;
	menuTemplate.cursorShadowPal = 3;
	menuTemplate.lettersSpacing = 1;
	menuTemplate.itemVerticalPadding = 0;
	menuTemplate.scrollMultiple = LIST_NO_MULTIPLE_SCROLL;
	menuTemplate.fontId = 1;
	menuTemplate.cursorKind = 0;
	menuTaskId = ListMenuInit(&menuTemplate, 0, 0);

	//draw everything
	CopyWindowToVram(windowId, 3);

	//create input handler task
	inputTaskId = CreateTask(HandleInput, 3);
	gTasks[inputTaskId].data[0] = menuTaskId;
	gTasks[inputTaskId].data[1] = windowId;
}

static void Debug_DestroyMenu(u8 taskId)
{
	DestroyListMenuTask(gTasks[taskId].data[0], NULL, NULL);
	ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
	RemoveWindow(gTasks[taskId].data[1]);
	DestroyTask(taskId);
}

static void DebugAction_Cancel(u8 taskId)
{
	Debug_DestroyMenu(taskId);
	EnableBothScriptContexts();
}

static void DebugAction_DestroyExtraWindow(u8 taskId)
{
	ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
	RemoveWindow(gTasks[taskId].data[1]);

	ClearStdWindowAndFrame(gTasks[taskId].data[2], TRUE);
	RemoveWindow(gTasks[taskId].data[2]);

	DestroyTask(taskId);
	EnableBothScriptContexts();
}


//HANDLE INPUT
static void DebugTask_HandleMenuInput_Main(u8 taskId)
{
	void (*func)(u8);
	u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

	if (gMain.newKeys & A_BUTTON)
	{
		PlaySE(SE_SELECT);
		if ((func = sDebugMenu_Actions_Main[input]) != NULL)
			func(taskId);
	}
	else if (gMain.newKeys & B_BUTTON)
	{
		PlaySE(SE_SELECT);
		Debug_DestroyMenu(taskId);
		EnableBothScriptContexts();
	}
}

static void DebugTask_HandleMenuInput_Utilities(u8 taskId)
{
	void (*func)(u8);
	u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

	if (gMain.newKeys & A_BUTTON)
	{
		PlaySE(SE_SELECT);
		if ((func = sDebugMenu_Actions_Utilities[input]) != NULL)
			func(taskId);
	}
	else if (gMain.newKeys & B_BUTTON)
	{
		PlaySE(SE_SELECT);
		Debug_DestroyMenu(taskId);
		EnableBothScriptContexts();
	}
}

static void DebugTask_HandleMenuInput_Flags(u8 taskId)
{
	void (*func)(u8);
	u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

	if (gMain.newKeys & A_BUTTON)
	{
		PlaySE(SE_SELECT);
		if ((func = sDebugMenu_Actions_Flags[input]) != NULL)
			func(taskId);
	}
	else if (gMain.newKeys & B_BUTTON)
	{
		PlaySE(SE_SELECT);
		Debug_DestroyMenu(taskId);
		EnableBothScriptContexts();
	}
}

static void DebugTask_HandleMenuInput_Give(u8 taskId)
{
	void (*func)(u8);
	u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

	if (gMain.newKeys & A_BUTTON)
	{
		PlaySE(SE_SELECT);
		if ((func = sDebugMenu_Actions_Give[input]) != NULL)
			func(taskId);
	}
	else if (gMain.newKeys & B_BUTTON)
	{
		PlaySE(SE_SELECT);
		Debug_DestroyMenu(taskId);
		EnableBothScriptContexts();
	}
}

//OPEN SUB-MENUS
static void DebugAction_OpenUtilitiesMenu(u8 taskId) 
{
	Debug_DestroyMenu(taskId);
	Debug_ShowMenu(DebugTask_HandleMenuInput_Utilities, sDebugMenu_ListTemplate_Utilities);
}
static void DebugAction_OpenFlagsMenu(u8 taskId) 
{
	Debug_DestroyMenu(taskId);
	Debug_ShowMenu(DebugTask_HandleMenuInput_Flags, sDebugMenu_ListTemplate_Flags);
}
static void DebugAction_OpenGiveMenu(u8 taskId) 
{
	Debug_DestroyMenu(taskId);
	Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
}

//ACTIONS UTILITIES

static void DebugAction_Util_HealParty(u8 taskId)
{
	PlaySE(SE_USE_ITEM);
	HealPlayerParty();
	EnableBothScriptContexts();
	Debug_DestroyMenu(taskId);
}

static void DebugAction_Util_Fly(u8 taskId)
{
    FlagSet(FLAG_VISITED_LITTLEROOT_TOWN);
    FlagSet(FLAG_VISITED_OLDALE_TOWN);
    FlagSet(FLAG_VISITED_DEWFORD_TOWN);
    FlagSet(FLAG_VISITED_LAVARIDGE_TOWN);
    FlagSet(FLAG_VISITED_FALLARBOR_TOWN);
    FlagSet(FLAG_VISITED_VERDANTURF_TOWN);
    FlagSet(FLAG_VISITED_PACIFIDLOG_TOWN);
    FlagSet(FLAG_VISITED_PETALBURG_CITY);
    FlagSet(FLAG_VISITED_SLATEPORT_CITY);
    FlagSet(FLAG_VISITED_MAUVILLE_CITY);
    FlagSet(FLAG_VISITED_RUSTBORO_CITY);
    FlagSet(FLAG_VISITED_FORTREE_CITY);
    FlagSet(FLAG_VISITED_LILYCOVE_CITY);
    FlagSet(FLAG_VISITED_MOSSDEEP_CITY);
    FlagSet(FLAG_VISITED_SOOTOPOLIS_CITY);
    FlagSet(FLAG_VISITED_EVER_GRANDE_CITY);
    FlagSet(FLAG_LANDMARK_POKEMON_LEAGUE);
    FlagSet(FLAG_LANDMARK_BATTLE_FRONTIER);
    Debug_DestroyMenu(taskId);
    SetMainCallback2(CB2_OpenFlyMap);
}

static void DebugAction_Util_Warp_Warp(u8 taskId)   
{	
	u8 windowId;

	ClearStdWindowAndFrame(gTasks[taskId].data[1], 	TRUE);
	RemoveWindow(gTasks[taskId].data[1]);

	HideMapNamePopUpWindow();
	LoadMessageBoxAndBorderGfx();
	windowId = AddWindow(&sDebugNumberDisplayWindowTemplate);
	DrawStdWindowFrame(windowId, FALSE);

	CopyWindowToVram(windowId, 3);

	ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
	ConvertIntToDecimalStringN(gStringVar2, MAP_GROUPS_COUNT-1, STR_CONV_MODE_LEADING_ZEROS, 2);
	StringExpandPlaceholders(gStringVar1, gDebugText_Util_WarpToMap_SelMax);
	StringCopy(gStringVar3, gText_DigitIndicator[0]);
	StringExpandPlaceholders(gStringVar4, gDebugText_Util_WarpToMap_SelectMapGroup);
	AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);

    gTasks[taskId].func = DebugAction_Util_Warp_SelectMapGroup;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 0;            //Current Flag
    gTasks[taskId].data[4] = 0;            //Digit Selected
    gTasks[taskId].data[5] = 0; //Map Group
    gTasks[taskId].data[6] = 0; //Map
    gTasks[taskId].data[7] = 0; //warp
}

static void DebugAction_Util_Warp_SelectMapGroup(u8 taskId)
{
	if (gMain.newKeys & DPAD_ANY)
	{
		PlaySE(SE_SELECT);
		if (gMain.newKeys & DPAD_UP)
		{
			gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
			if (gTasks[taskId].data[3] > MAP_GROUPS_COUNT-1)
				gTasks[taskId].data[3] = MAP_GROUPS_COUNT-1;
		}
		if (gMain.newKeys & DPAD_DOWN)
		{
			gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
			if (gTasks[taskId].data[3] < 0)
				gTasks[taskId].data[3] = 0;
		}
		if (gMain.newKeys & DPAD_LEFT)
		{
			if(gTasks[taskId].data[4] > 0)
				gTasks[taskId].data[4] -= 1;
		}
		if (gMain.newKeys & DPAD_RIGHT)
		{
			if(gTasks[taskId].data[4] < 2)
				gTasks[taskId].data[4] += 1;
		}

		ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
		ConvertIntToDecimalStringN(gStringVar2, MAP_GROUPS_COUNT-1, STR_CONV_MODE_LEADING_ZEROS, 2);
		StringExpandPlaceholders(gStringVar1, gDebugText_Util_WarpToMap_SelMax);
		StringCopy(gStringVar3, gText_DigitIndicator[0]);
		StringExpandPlaceholders(gStringVar4, gDebugText_Util_WarpToMap_SelectMapGroup);
		AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
	}

	if (gMain.newKeys & A_BUTTON)
	{
		gTasks[taskId].data[5] = gTasks[taskId].data[3];
		gTasks[taskId].data[3] = 0;
		gTasks[taskId].data[4] = 0;

	ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
	ConvertIntToDecimalStringN(gStringVar2, MAP_GROUP_COUNT[gTasks[taskId].data[5]]-1, STR_CONV_MODE_LEADING_ZEROS, 2);
	StringExpandPlaceholders(gStringVar1, gDebugText_Util_WarpToMap_SelMax);
	GetMapName(gStringVar2, Overworld_GetMapHeaderByGroupAndId(gTasks[taskId].data[5], gTasks[taskId].data[3])->regionMapSectionId, 0);
	StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
	StringExpandPlaceholders(gStringVar4, gDebugText_Util_WarpToMap_SelectMap);
	AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

	gTasks[taskId].func = DebugAction_Util_Warp_SelectMap;
	}

	else if (gMain.newKeys & B_BUTTON)
	{
		PlaySE(SE_SELECT);
		DebugAction_DestroyExtraWindow(taskId);
	}
}

static void DebugAction_Util_Warp_SelectMap(u8 taskId)
{
    u8 max_value = MAP_GROUP_COUNT[gTasks[taskId].data[5]]; //maps in the selected map group

    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);
        if(gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if(gTasks[taskId].data[3] > max_value-1)
                gTasks[taskId].data[3] = max_value-1;
        }
        if(gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if(gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }
        if(gMain.newKeys & DPAD_LEFT)
        {
            if(gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if(gMain.newKeys & DPAD_RIGHT)
        {
            if(gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        ConvertIntToDecimalStringN(gStringVar2, MAP_GROUP_COUNT[gTasks[taskId].data[5]]-1, STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(gStringVar1, gDebugText_Util_WarpToMap_SelMax);
        GetMapName(gStringVar2, Overworld_GetMapHeaderByGroupAndId(gTasks[taskId].data[5], gTasks[taskId].data[3])->regionMapSectionId, 0);
        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringExpandPlaceholders(gStringVar4, gDebugText_Util_WarpToMap_SelectMap);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        gTasks[taskId].data[6] = gTasks[taskId].data[3];
        gTasks[taskId].data[3] = 0;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(gStringVar4, gDebugText_Util_WarpToMap_SelectWarp);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
        gTasks[taskId].func = DebugAction_Util_Warp_SelectWarp;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

static void DebugAction_Util_Warp_SelectWarp(u8 taskId)
{
	if (gMain.newKeys & DPAD_ANY)
	{
		PlaySE(SE_SELECT);
		if (gMain.newKeys & DPAD_UP)
		{
			gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
			if (gTasks[taskId].data[3] > 10)
				gTasks[taskId].data[3] = 10;
		}
		if (gMain.newKeys & DPAD_DOWN)
		{
			gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
			if (gTasks[taskId].data[3] < 0)
				gTasks[taskId].data[3] = 0;
		}

        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(gStringVar4, gDebugText_Util_WarpToMap_SelectWarp);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
	}

	if (gMain.newKeys & A_BUTTON)
	{
		gTasks[taskId].data[7] = gTasks[taskId].data[3];

		SetWarpDestinationToMapWarp(gTasks[taskId].data[5], gTasks[taskId].data[6], gTasks[taskId].data[7]);
		DoWarp();
		ResetInitialPlayerAvatarState();
		DebugAction_DestroyExtraWindow(taskId);
	}
	else if (gMain.newKeys & B_BUTTON)
	{
		PlaySE(SE_SELECT);
		DebugAction_DestroyExtraWindow(taskId);
	}
}

static void DebugAction_Util_CheckSaveBlock(u8 taskId)
{

    static const u8 gDebugText_SaveBlockSize[] =  _("SaveBlock1 is {STR_VAR_1} bytes long.\nMax size is 16336 bytes.\pSaveBlock2 is {STR_VAR_2} bytes long.\nMax size is 4084 bytes.\pPokemonStorage is {STR_VAR_3} bytes long.\nMax size is 35712 bytes.");

	ConvertIntToDecimalStringN(gStringVar1, sizeof(struct SaveBlock1), STR_CONV_MODE_LEFT_ALIGN, 6);
	ConvertIntToDecimalStringN(gStringVar2, sizeof(struct SaveBlock2), STR_CONV_MODE_LEFT_ALIGN, 6);
	ConvertIntToDecimalStringN(gStringVar3, sizeof(struct PokemonStorage), STR_CONV_MODE_LEFT_ALIGN,6);
	StringExpandPlaceholders(gStringVar4, gDebugText_SaveBlockSize);

	Debug_DestroyMenu(taskId);
	ScriptContext2_Enable();
	ScriptContext1_SetupScript(Debug_ShowFieldMessageStringVar4);
}

static void DebugAction_Util_CheckWallClock(u8 taskId)
{
	Debug_DestroyMenu(taskId);
	ScriptContext2_Enable();
	ScriptContext1_SetupScript(PlayersHouse_2F_EventScript_CheckWallClock);
}

static void DebugAction_Util_SetWallClock(u8 taskId)
{
	Debug_DestroyMenu(taskId);
	ScriptContext2_Enable();
    ScriptContext1_SetupScript(PlayersHouse_2F_EventScript_CheckWallClock);
}

static void DebugAction_Util_WatchCredits(u8 taskId)  
{
	struct Task* task = &gTasks[taskId];
	Debug_DestroyMenu(taskId);
	SetMainCallback2(CB2_StartCreditsSequence);
}

//ACTIONS FLAGS
static void DebugAction_Flags_Flags(u8 taskId)
{
	u8 windowId;

	ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
	RemoveWindow(gTasks[taskId].data[1]);

	HideMapNamePopUpWindow();
	LoadMessageBoxAndBorderGfx();
	windowId = AddWindow(&sDebugNumberDisplayWindowTemplate);
	DrawStdWindowFrame(windowId, FALSE);

	CopyWindowToVram(windowId, 3);

	ConvertIntToDecimalStringN(gStringVar1, 0, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_FLAGS);
	ConvertIntToHexStringN(gStringVar2, 0, STR_CONV_MODE_LEFT_ALIGN, 3);
	StringExpandPlaceholders(gStringVar1, gDebugText_FlagHex);
	if (FlagGet(0) == TRUE)
		StringCopyPadded(gStringVar2, gDebugText_FlagSet, CHAR_SPACE, 15);
	else
		StringCopyPadded(gStringVar2, gDebugText_FlagUnset, CHAR_SPACE, 15);
	StringCopy(gStringVar3, gText_DigitIndicator[0]);
	StringExpandPlaceholders(gStringVar4, gDebugText_Flags_Flags);
	AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);

	gTasks[taskId].func = DebugAction_Flags_FlagsSelect;
	gTasks[taskId].data[2] = windowId;
	gTasks[taskId].data[3] = 0;
	gTasks[taskId].data[4] = 0;
}

static void DebugAction_Flags_FlagsSelect(u8 taskId)
{
	if (gMain.newKeys & A_BUTTON)
		FlagToggle(gTasks[taskId].data[3]);
	else if (gMain.newKeys & B_BUTTON)
	{
		PlaySE(SE_SELECT);
		DebugAction_DestroyExtraWindow(taskId);
		return;
	}

	if(gMain.newKeys & DPAD_UP)
	{
		PlaySE(SE_SELECT);
		gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
		if (gTasks[taskId].data[3] >= FLAGS_COUNT)
			gTasks[taskId].data[3] = FLAGS_COUNT - 1;
	}
	if (gMain.newKeys & DPAD_DOWN)
	{
		PlaySE(SE_SELECT);
		gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
		if(gTasks[taskId].data[3] < 0) 
			gTasks[taskId].data[3] = 0;
	}
	if (gMain.newKeys & DPAD_LEFT)
	{
		PlaySE(SE_SELECT);
		gTasks[taskId].data[4] -= 1;
		if (gTasks[taskId].data[4] < 0)
			gTasks[taskId].data[4] = 0;
	}
    if(gMain.newKeys & DPAD_RIGHT)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].data[4] += 1;
        if(gTasks[taskId].data[4] > DEBUG_NUMBER_DIGITS_FLAGS-1)
            gTasks[taskId].data[4] = DEBUG_NUMBER_DIGITS_FLAGS-1;
    }

	if (gMain.newKeys & DPAD_ANY || gMain.newKeys & A_BUTTON)
	{
		ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_FLAGS);
		ConvertIntToHexStringN(gStringVar2, gTasks[taskId].data[3], STR_CONV_MODE_LEFT_ALIGN, 3);
		StringExpandPlaceholders(gStringVar1, gDebugText_FlagHex);
		if (FlagGet(gTasks[taskId].data[3]) == TRUE)
			StringCopyPadded(gStringVar2, gDebugText_FlagSet, CHAR_SPACE, 15);
		else
			StringCopyPadded(gStringVar2, gDebugText_FlagUnset, CHAR_SPACE, 15);
		StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
		StringExpandPlaceholders(gStringVar4, gDebugText_Flags_Flags);
		AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
	}
}

static void DebugAction_Flags_SetPokedexFlags(u8 taskId)
{
	u16 i;
	for (i=0; i < NATIONAL_DEX_COUNT; i++)
	{
		GetSetPokedexFlag(i+1, FLAG_SET_CAUGHT);
		GetSetPokedexFlag(i+1, FLAG_SET_SEEN);
	}
	Debug_DestroyMenu(taskId);
	EnableBothScriptContexts();
}

static void DebugAction_Flags_SwitchDex(u8 taskId)
{
	if (FlagGet(FLAG_SYS_POKEDEX_GET))
	{
		FlagClear(FLAG_SYS_POKEDEX_GET);
		PlaySE(SE_PC_OFF);
	} else {
		FlagSet(FLAG_SYS_POKEDEX_GET);
		PlaySE(SE_PC_LOGIN);
	}
}

static void DebugAction_Flags_SwitchNatDex(u8 taskId)
{
	if (IsNationalPokedexEnabled())
	{
		DisableNationalPokedex();
		PlaySE(SE_PC_OFF);
	} else {
		EnableNationalPokedex();
		PlaySE(SE_PC_LOGIN);
	}
}

static void DebugAction_Flags_ToggleFlyFlags(u8 taskId)
{
	if (FlagGet(FLAG_LANDMARK_BATTLE_FRONTIER))
		PlaySE(SE_PC_OFF);
	else
		PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_VISITED_LITTLEROOT_TOWN);
    FlagToggle(FLAG_VISITED_OLDALE_TOWN);
    FlagToggle(FLAG_VISITED_DEWFORD_TOWN);
    FlagToggle(FLAG_VISITED_LAVARIDGE_TOWN);
    FlagToggle(FLAG_VISITED_FALLARBOR_TOWN);
    FlagToggle(FLAG_VISITED_VERDANTURF_TOWN);
    FlagToggle(FLAG_VISITED_PACIFIDLOG_TOWN);
    FlagToggle(FLAG_VISITED_PETALBURG_CITY);
    FlagToggle(FLAG_VISITED_SLATEPORT_CITY);
    FlagToggle(FLAG_VISITED_MAUVILLE_CITY);
    FlagToggle(FLAG_VISITED_RUSTBORO_CITY);
    FlagToggle(FLAG_VISITED_FORTREE_CITY);
    FlagToggle(FLAG_VISITED_LILYCOVE_CITY);
    FlagToggle(FLAG_VISITED_MOSSDEEP_CITY);
    FlagToggle(FLAG_VISITED_SOOTOPOLIS_CITY);
    FlagToggle(FLAG_VISITED_EVER_GRANDE_CITY);
    FlagToggle(FLAG_LANDMARK_POKEMON_LEAGUE);
    FlagToggle(FLAG_LANDMARK_BATTLE_FRONTIER);
}

static void DebugAction_Flags_ToggleBadgeFlags(u8 taskId)
{
	if (FlagGet(FLAG_BADGE08_GET))
		PlaySE(SE_PC_OFF);
	else
		PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_BADGE01_GET);
    FlagToggle(FLAG_BADGE02_GET);
    FlagToggle(FLAG_BADGE03_GET);
    FlagToggle(FLAG_BADGE04_GET);
    FlagToggle(FLAG_BADGE05_GET);
    FlagToggle(FLAG_BADGE06_GET);
    FlagToggle(FLAG_BADGE07_GET);
    FlagToggle(FLAG_BADGE08_GET);
}
static void DebugAction_Flags_CollisionOnOff(u8 taskId)
{
    if(FlagGet(FLAG_SYS_NO_COLLISION))
    {
        FlagClear(FLAG_SYS_NO_COLLISION);
        PlaySE(SE_PC_OFF);
    }else{
        FlagSet(FLAG_SYS_NO_COLLISION);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_EncounterOnOff(u8 taskId)
{
    if(FlagGet(FLAG_SYS_NO_ENCOUNTER))
    {
        FlagClear(FLAG_SYS_NO_ENCOUNTER);
        PlaySE(SE_PC_OFF);
    }else{
        FlagSet(FLAG_SYS_NO_ENCOUNTER);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_TrainerSeeOnOff(u8 taskId)
{
    if(FlagGet(FLAG_SYS_NO_TRAINER_SEE))
    {
        FlagClear(FLAG_SYS_NO_TRAINER_SEE);
        PlaySE(SE_PC_OFF);
    }else{
        FlagSet(FLAG_SYS_NO_TRAINER_SEE);
        PlaySE(SE_PC_LOGIN);
    }
}


//ACTIONS GIVE
#define ITEM_TAG 0xFDF3

static void DebugAction_Give_Item_Item(u8 taskId)
{
    u8 windowId;

    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugNumberDisplayWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, 3);

    //Display initial ID
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
    CopyItemName(1, gStringVar1);
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar4, gDebugText_ItemID);
    AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);

    gTasks[taskId].func = DebugAction_Give_Item_SelectId;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 1;            //Current ID
    gTasks[taskId].data[4] = 0;            //Digit Selected
    gTasks[taskId].data[6] = AddItemIconSprite(ITEM_TAG, ITEM_TAG, gTasks[taskId].data[3]);
    gSprites[gTasks[taskId].data[6]].pos2.x = DEBUG_NUMBER_ICON_X+10;
    gSprites[gTasks[taskId].data[6]].pos2.y = DEBUG_NUMBER_ICON_Y+10;
    gSprites[gTasks[taskId].data[6]].oam.priority = 0;
}

static void DebugAction_Give_Item_SelectId(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if(gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if(gTasks[taskId].data[3] >= ITEMS_COUNT)
                gTasks[taskId].data[3] = ITEMS_COUNT - 1;
        }
        if(gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if(gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if(gMain.newKeys & DPAD_LEFT)
        {
            if(gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if(gMain.newKeys & DPAD_RIGHT)
        {
            if(gTasks[taskId].data[4] < DEBUG_NUMBER_DIGITS_ITEMS-1)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        CopyItemName(gTasks[taskId].data[3], gStringVar1);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
        StringExpandPlaceholders(gStringVar4, gDebugText_ItemID);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

        FreeSpriteTilesByTag(ITEM_TAG);                         //Destroy item icon
        FreeSpritePaletteByTag(ITEM_TAG);                       //Destroy item icon
        FreeSpriteOamMatrix(&gSprites[gTasks[taskId].data[6]]); //Destroy item icon
        DestroySprite(&gSprites[gTasks[taskId].data[6]]);       //Destroy item icon
        gTasks[taskId].data[6] = AddItemIconSprite(ITEM_TAG, ITEM_TAG, gTasks[taskId].data[3]);
        gSprites[gTasks[taskId].data[6]].pos2.x = DEBUG_NUMBER_ICON_X+10;
        gSprites[gTasks[taskId].data[6]].pos2.y = DEBUG_NUMBER_ICON_Y+10;
        gSprites[gTasks[taskId].data[6]].oam.priority = 0;
    }

    if (gMain.newKeys & A_BUTTON)
    {
        gTasks[taskId].data[5] = gTasks[taskId].data[3];
        gTasks[taskId].data[3] = 1;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEM_QUANTITY);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar4, gDebugText_ItemQuantity);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

        gTasks[taskId].func = DebugAction_Give_Item_SelectQuantity;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        FreeSpriteTilesByTag(ITEM_TAG);                         //Destroy item icon
        FreeSpritePaletteByTag(ITEM_TAG);                       //Destroy item icon
        FreeSpriteOamMatrix(&gSprites[gTasks[taskId].data[6]]); //Destroy item icon
        DestroySprite(&gSprites[gTasks[taskId].data[6]]);       //Destroy item icon

        PlaySE(SE_SELECT);
        DebugAction_DestroyExtraWindow(taskId);
    }
}
static void DebugAction_Give_Item_SelectQuantity(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if(gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if(gTasks[taskId].data[3] >= 100)
                gTasks[taskId].data[3] = 99;
        }
        if(gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if(gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if(gMain.newKeys & DPAD_LEFT)
        {
            if(gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if(gMain.newKeys & DPAD_RIGHT)
        {
            if(gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEM_QUANTITY);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar4, gDebugText_ItemQuantity);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        FreeSpriteTilesByTag(ITEM_TAG);                         //Destroy item icon
        FreeSpritePaletteByTag(ITEM_TAG);                       //Destroy item icon
        FreeSpriteOamMatrix(&gSprites[gTasks[taskId].data[6]]); //Destroy item icon
        DestroySprite(&gSprites[gTasks[taskId].data[6]]);       //Destroy item icon

        PlaySE(MUS_OBTAIN_ITEM);
        AddBagItem(gTasks[taskId].data[5], gTasks[taskId].data[3]);
        DebugAction_DestroyExtraWindow(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        FreeSpriteTilesByTag(ITEM_TAG);                         //Destroy item icon
        FreeSpritePaletteByTag(ITEM_TAG);                       //Destroy item icon
        FreeSpriteOamMatrix(&gSprites[gTasks[taskId].data[6]]); //Destroy item icon
        DestroySprite(&gSprites[gTasks[taskId].data[6]]);       //Destroy item icon

        PlaySE(SE_SELECT);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

static void DebugAction_Give_Item_AllTMs(u8 taskId)
{
	u16 i;
	PlayFanfare(MUS_OBTAIN_TMHM);
	for (i = ITEM_TM01; i <= ITEM_TM50; i++)
		if (!CheckBagHasItem(i, 1))
			AddBagItem(i, 1);
	for (i = ITEM_HM01; i <= ITEM_HM08; i++)
		if (!CheckBagHasItem(i, 1))
			AddBagItem(i, 1);
	Debug_DestroyMenu(taskId);
	EnableBothScriptContexts();
}
//Pokemon
static void ResetMonDataStruct(struct DebugMonData *sDebugMonData)
{
	sDebugMonData->mon_speciesId	=1;
	sDebugMonData->mon_level		=1;
}

static void DebugAction_Give_Pokemon(u8 taskId)
{
	u8 windowId;

	sDebugMonData = AllocZeroed(sizeof(struct DebugMonData));
	ResetMonDataStruct(sDebugMonData);

	ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
	RemoveWindow(gTasks[taskId].data[1]);

	HideMapNamePopUpWindow();
	LoadMessageBoxAndBorderGfx();
	windowId = AddWindow(&sDebugNumberDisplayWindowTemplate);
	DrawStdWindowFrame(windowId, FALSE);

	CopyWindowToVram(windowId, 3);

	StringCopy(gStringVar2, gText_DigitIndicator[0]);
	ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, 3);
	StringCopy(gStringVar1, gSpeciesNames[1]);
	StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
	StringExpandPlaceholders(gStringVar4, gDebugText_PokemonID);
	AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);

	gTasks[taskId].func = DebugAction_Give_Pokemon_SelectId;
	gTasks[taskId].data[2] = windowId;
	gTasks[taskId].data[3] = 1;
	gTasks[taskId].data[4] - 0;
	gTasks[taskId].data[5] = 0;
	FreeMonIconPalettes();
	LoadMonIconPalette(gTasks[taskId].data[3]);
	gSprites[gTasks[taskId].data[6]].oam.priority = 0;
}

static void DebugAction_Give_Pokemon_SelectId(u8 taskId)
{
	if (gMain.newKeys & DPAD_ANY)
	{
		PlaySE(SE_SELECT);

		if (gMain.newKeys & DPAD_UP) 
		{
			gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
			if (gTasks[taskId].data[3] > SPECIES_CELEBI && gTasks[taskId].data[3] < SPECIES_TREECKO)
				gTasks[taskId].data[3] = SPECIES_TREECKO;
			if (gTasks[taskId].data[3] >= NUM_SPECIES - 1)
				gTasks[taskId].data[3] = NUM_SPECIES - 2;
		}
		if (gMain.newKeys & DPAD_DOWN)
		{
			gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
			if(gTasks[taskId].data[3] < SPECIES_TREECKO && gTasks[taskId].data[3] > SPECIES_CELEBI)
				gTasks[taskId].data[3] = SPECIES_CELEBI;
			if (gTasks[taskId].data[3] < 1)
				gTasks[3].data[3] = 1;
		}
        if(gMain.newKeys & DPAD_LEFT)
        {
            if(gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if(gMain.newKeys & DPAD_RIGHT)
        {
            if(gTasks[taskId].data[4] < DEBUG_NUMBER_DIGITS_ITEMS-1)
                gTasks[taskId].data[4] += 1;
        }

		StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
		StringCopy(gStringVar1, gSpeciesNames[gTasks[taskId].data[3]]);
		StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
		ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 4);
		StringExpandPlaceholders(gStringVar4, gDebugText_PokemonID);
		AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

		FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]);
		FreeMonIconPalettes();
		LoadMonIconPalette(gTasks[taskId].data[3]);
		gSprites[gTasks[taskId].data[6]].oam.priority = 0;
	}

	if (gMain.newKeys & A_BUTTON)
	{
		sDebugMonData->mon_speciesId = gTasks[taskId].data[3];
		gTasks[taskId].data[3] = 1;
		gTasks[taskId].data[4] = 0;

		StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
		ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 3);
		StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
		StringExpandPlaceholders(gStringVar4, gDebugText_PokemonLevel);
		AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

		gTasks[taskId].func = DebugAction_Give_Pokemon_SelectLevel;
	}
	else if (gMain.newKeys & B_BUTTON)
	{
		PlaySE(SE_SELECT);
		Free(sDebugMonData);
		FreeMonIconPalettes();
		FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]);
		DebugAction_DestroyExtraWindow(taskId);
	}
}

static void DebugAction_Give_Pokemon_SelectLevel(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if(gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += 10;
            if(gTasks[taskId].data[3] > 100)
                gTasks[taskId].data[3] = 100;
        }
        if(gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= 10;
            if(gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if(gMain.newKeys & DPAD_LEFT)
        {
            if(gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if(gMain.newKeys & DPAD_RIGHT)
        {
            if(gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 3);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar4, gDebugText_PokemonLevel);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]); //Destroy pokemon sprite
		PlaySE(MUS_LEVEL_UP);
		ScriptGiveMon(sDebugMonData->mon_speciesId, gTasks[taskId].data[3], ITEM_NONE, 0,0,0);
		Free(sDebugMonData); //Frees EWRAM of MonData Struct
		DebugAction_DestroyExtraWindow(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]); //Destroy pokemon sprite
        DebugAction_DestroyExtraWindow(taskId);
    }
}

