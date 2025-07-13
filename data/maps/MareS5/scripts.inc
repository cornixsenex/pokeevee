MareS5_MapScripts::
# 10 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/MareS5/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS5_F
	return


MareS5_Script_Transition_IslaPina::
# 19 "data/maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 3
# 20 "data/maps/MareS5/scripts.pory"
	special TransitionMapMusic
# 21 "data/maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return


MareS5_Script_MareTropicumTransition::
# 25 "data/maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 1
# 26 "data/maps/MareS5/scripts.pory"
	special TransitionMapMusic
# 27 "data/maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return


MareS5_Script_ActaEchonaTransition::
# 31 "data/maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 2
# 32 "data/maps/MareS5/scripts.pory"
	special TransitionMapMusic
# 33 "data/maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return

