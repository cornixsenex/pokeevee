Route5_MapScripts::
# 11 "data//maps/Route5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data//maps/Route5/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Route4
# 13 "data//maps/Route5/scripts.pory"
	switch VAR_RESULT
# 14 "data//maps/Route5/scripts.pory"
	case 1, Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data//maps/Route5/scripts.pory"
	case 2, Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 18 "data//maps/Route5/scripts.pory"
	case 3, Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data//maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data//maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data//maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 3
	return


Route5_Script_Transition_VenatorMons::
# 26 "data//maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 1
# 27 "data//maps/Route5/scripts.pory"
	special TransitionMapMusic
# 28 "data//maps/Route5/scripts.pory"
	special ShowMapNamePopup
	return


Route5_Script_Transition_ViaLitoralis::
# 32 "data//maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 2
# 33 "data//maps/Route5/scripts.pory"
	special TransitionMapMusic
# 34 "data//maps/Route5/scripts.pory"
	special ShowMapNamePopup
	return


Route5_Script_Transition_VillaVenatorum::
# 38 "data//maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 3
# 39 "data//maps/Route5/scripts.pory"
	special TransitionMapMusic
# 40 "data//maps/Route5/scripts.pory"
	special ShowMapNamePopup
	return


Route5_Script_CampLeader::
# 44 "data//maps/Route5/scripts.pory"
	lock
# 45 "data//maps/Route5/scripts.pory"
	faceplayer
# 46 "data//maps/Route5/scripts.pory"
	msgbox Route5_Text_CampLeader
# 47 "data//maps/Route5/scripts.pory"
	closemessage
# 48 "data//maps/Route5/scripts.pory"
	release
	end


Route5_Text_CampLeader::
# 52 "data//maps/Route5/scripts.pory"
	.string "This is terrible! All of the young boys\n"
	.string "who were attending my summer camp have\l"
	.string "run off! What am I gonna tell their\l"
	.string "moms?$"
