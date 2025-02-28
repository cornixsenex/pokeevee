MareS6_MapScripts::
# 15 "data/maps/MareS6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_MareS6
# 18 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 19 "data/maps/MareS6/scripts.pory"
	case 1, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 21 "data/maps/MareS6/scripts.pory"
	case 2, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 23 "data/maps/MareS6/scripts.pory"
	case 3, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 25 "data/maps/MareS6/scripts.pory"
	case 4, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 20 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 22 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 24 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 26 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 4
	return


MareS6_Script_IslaPinaTransition::
# 33 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
# 34 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 35 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_MareOccidensTransition::
# 39 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
# 40 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 41 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_MareTropicumTransition::
# 45 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
# 46 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 47 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_PlayaEchonaTransition::
# 52 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 4
# 53 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_MareOccidensTransitionSilent::
# 58 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
	return


MareS6_Script_MareTropicumTransitionSilent::
# 62 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

