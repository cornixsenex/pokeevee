MareS6_MapScripts::
# 14 "data/maps/MareS6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_MareS6_F
# 17 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/MareS6/scripts.pory"
	case 1, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 20 "data/maps/MareS6/scripts.pory"
	case 2, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 22 "data/maps/MareS6/scripts.pory"
	case 3, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 24 "data/maps/MareS6/scripts.pory"
	case 4, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 19 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 21 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 23 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 25 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 4
	return


MareS6_Script_IslaPinaTransition::
# 32 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
# 33 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 34 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_MareOccidensTransition::
# 38 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
# 39 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 40 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_MareTropicumTransition::
# 44 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
# 45 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 46 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_PlayaEchonaTransition::
# 51 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 4
# 52 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_MareOccidensTransitionSilent::
# 57 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
	return


MareS6_Script_MareTropicumTransitionSilent::
# 61 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

