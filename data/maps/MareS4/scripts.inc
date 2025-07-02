MareS4_MapScripts::
# 14 "data/maps/MareS4/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/MareS4/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS4_F
	return


MareS4_Script_Transition_MareTropicum::
# 22 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 1
# 23 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 24 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_MareTranquillum::
# 28 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 2
# 29 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 30 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_MareSubtropicum::
# 34 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 3
# 35 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 36 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_IslaHerbaBona::
# 40 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 4
# 41 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 42 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_IslaHesperia::
# 46 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 5
# 47 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 48 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_ScyllaCharybdis::
# 52 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 6
# 53 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 54 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return

