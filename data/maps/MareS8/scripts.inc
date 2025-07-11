MareS8_MapScripts::
# 13 "data/maps/MareS8/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/MareS8/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS8_F
	return


MareS8_Script_Transition_MareTropicum::
# 21 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 3
# 22 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 23 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_MareSubtropicum::
# 27 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 2
# 28 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 29 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaIthaca::
# 33 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 1
# 34 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 35 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaHesperia::
# 39 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 4
# 40 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 41 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaTropica::
# 45 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 5
# 46 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 47 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return

