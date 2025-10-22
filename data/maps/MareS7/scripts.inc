MareS7_MapScripts::
# 13 "data/maps/MareS7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS7_F
	return


MareS7_Script_Transition_IslaIthaca::
# 23 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 1
# 24 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 25 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_MareSubtropicum::
# 29 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 2
# 30 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 31 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaHerbaBona::
# 35 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 3
# 36 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 37 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaArida::
# 41 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 4
# 42 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 43 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaIgnifera::
# 47 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 5
# 48 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 49 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return

