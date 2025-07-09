MareS2_MapScripts::
# 18 "data/maps/MareS2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 19 "data/maps/MareS2/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS2_F
	return


MareS2_Script_Transition_MareTranquillum::
# 25 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 1
# 26 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 27 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return


MareS2_Script_Transition_MareMortuorum::
# 31 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 2
# 32 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 33 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return


MareS2_Script_Transition_MareSubtropicum::
# 37 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 3
# 38 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 39 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return


MareS2_Script_Transition_IslaHerbaBona::
# 43 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 4
# 44 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 45 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return


MareS2_Script_Transition_Mortia::
# 49 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 5
# 50 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 51 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return

