MareS7_MapScripts::
# 13 "data/maps/MareS7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS7_F
	return


MareS7_Script_Transition_IslaIthaca::
# 20 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 1
# 21 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 22 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_MareSubtropicum::
# 26 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 2
# 27 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 28 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaHerbaBona::
# 32 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 3
# 33 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 34 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaArida::
# 38 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 4
# 39 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 40 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaIgnifera::
# 44 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 5
# 45 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 46 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return

