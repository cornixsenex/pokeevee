Route17_MapScripts::
# 17 "data/maps/Route17/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 18 "data/maps/Route17/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Route17
# 19 "data/maps/Route17/scripts.pory"
	switch VAR_RESULT
# 20 "data/maps/Route17/scripts.pory"
	case 1, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 22 "data/maps/Route17/scripts.pory"
	case 2, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 24 "data/maps/Route17/scripts.pory"
	case 3, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 26 "data/maps/Route17/scripts.pory"
	case 4, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 28 "data/maps/Route17/scripts.pory"
	case 5, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 30 "data/maps/Route17/scripts.pory"
	case 6, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 32 "data/maps/Route17/scripts.pory"
	case 7, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 34 "data/maps/Route17/scripts.pory"
	case 8, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 21 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 23 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 25 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 27 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 4
	return

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 29 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 4
	return

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 31 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 6
	return

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 33 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 7
	return

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 35 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 8
	return


Route17_EventScript_Block1::
# 41 "data/maps/Route17/scripts.pory"
	lock
# 42 "data/maps/Route17/scripts.pory"
	faceplayer
# 43 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_Block1
# 44 "data/maps/Route17/scripts.pory"
	closemessage
# 45 "data/maps/Route17/scripts.pory"
	release
	end


Route17_Script_Transition_LagoDraco::
# 50 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 1
# 51 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_LagoDracoShore::
# 55 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 2
# 56 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_UpperRioDraco::
# 60 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 3
# 61 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_LowerRioDraco::
# 65 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 4
# 66 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_UpperDracoEast::
# 70 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 5
# 71 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_LowerDracoEast::
# 75 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 6
# 76 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_UpperDracoWest::
# 80 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 7
# 81 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_LowerDracoWest::
# 85 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 8
# 86 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Text_Block1::
# 92 "data/maps/Route17/scripts.pory"
	.string "This is the Via Fluvia which leads to\n"
	.string "Willow Spring but you cannot go\l"
	.string "through.The storm has destroyed two\l"
	.string "bridges ahead and it will be some time\l"
	.string "before they're fixed.$"
