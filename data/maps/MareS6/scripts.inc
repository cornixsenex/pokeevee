MareS6_MapScripts::
# 11 "data//maps/MareS6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data//maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_MareS6
# 14 "data//maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 15 "data//maps/MareS6/scripts.pory"
	case 1, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 17 "data//maps/MareS6/scripts.pory"
	case 2, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 19 "data//maps/MareS6/scripts.pory"
	case 3, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 22 "data//maps/MareS6/scripts.pory"
	msgbox MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_Text_0
# 23 "data//maps/MareS6/scripts.pory"
	closemessage
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data//maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 18 "data//maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 20 "data//maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
	return


Route3_Script_IslaPinaTransition::
# 29 "data//maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
# 30 "data//maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


Route3_Script_MareOccidensTransition::
# 34 "data//maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
# 35 "data//maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


Route3_Script_MareTropicanumTransition::
# 39 "data//maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
# 40 "data//maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_Text_0:
# 22 "data//maps/MareS6/scripts.pory"
	.string "ERROR VAR5 OOB$"
