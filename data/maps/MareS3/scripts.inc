MareS3_MapScripts::
# 14 "data/maps/MareS3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/MareS3/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS3_F
	return


MareS3_Script_Transition_MareTranquillum::
# 21 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 1
# 22 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 23 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_Transition_MareSubtropicum::
# 27 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 2
# 28 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 29 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_Transition_IslaHerbaBona::
# 33 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 3
# 34 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 35 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return

