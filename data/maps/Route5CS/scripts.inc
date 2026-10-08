Route5CS_MapScripts::
# 11 "data/maps/Route5CS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route5CS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route5CS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/Route5CS/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Route4CS_F
# 13 "data/maps/Route5CS/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/Route5CS/scripts.pory"
	case 1, Route5CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/Route5CS/scripts.pory"
	case 2, Route5CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 18 "data/maps/Route5CS/scripts.pory"
	case 3, Route5CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Route5CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/Route5CS/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route5CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data/maps/Route5CS/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route5CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data/maps/Route5CS/scripts.pory"
	setvar VAR_TEMP_5, 3
	return


Route5CS_Script_Transition_VenatorMons::
# 26 "data/maps/Route5CS/scripts.pory"
	setvar VAR_TEMP_5, 1
# 27 "data/maps/Route5CS/scripts.pory"
	special TransitionMapMusic
# 28 "data/maps/Route5CS/scripts.pory"
	special ShowMapNamePopup
	return


Route5CS_Script_Transition_ViaLitoralis::
# 32 "data/maps/Route5CS/scripts.pory"
	setvar VAR_TEMP_5, 2
# 33 "data/maps/Route5CS/scripts.pory"
	special TransitionMapMusic
# 34 "data/maps/Route5CS/scripts.pory"
	special ShowMapNamePopup
	return


Route5CS_Script_Transition_VillaVenatorum::
# 38 "data/maps/Route5CS/scripts.pory"
	setvar VAR_TEMP_5, 3
# 39 "data/maps/Route5CS/scripts.pory"
	special TransitionMapMusic
# 40 "data/maps/Route5CS/scripts.pory"
	special ShowMapNamePopup
	return


Route5CS_Script_CampLeader::
# 44 "data/maps/Route5CS/scripts.pory"
	lock
# 45 "data/maps/Route5CS/scripts.pory"
	faceplayer
# 46 "data/maps/Route5CS/scripts.pory"
	msgbox Route5CS_Text_CampLeader
# 47 "data/maps/Route5CS/scripts.pory"
	closemessage
# 48 "data/maps/Route5CS/scripts.pory"
	release
	end


Route5CS_Text_CampLeader::
# 52 "data/maps/Route5CS/scripts.pory"
	.string "This is terrible! All of the young boys\n"
	.string "who were attending my summer camp have\l"
	.string "run off! What am I gonna tell their\l"
	.string "moms?$"
