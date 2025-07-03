MareS4_MapScripts::
# 18 "data/maps/MareS4/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/MareS4/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS4_F
	return


MareS4_Script_Transition_MareTropicum::
# 26 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 1
# 27 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 28 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_MareTranquillum::
# 32 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 2
# 33 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 34 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_MareSubtropicum::
# 38 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 3
# 39 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 40 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_IslaHerbaBona::
# 44 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 4
# 45 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 46 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_IslaHesperia::
# 50 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 5
# 51 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 52 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_ScyllaCharybdis::
# 56 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 6
# 57 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 58 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return

