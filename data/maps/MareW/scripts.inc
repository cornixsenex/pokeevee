MareW_MapScripts::
# 10 "data/maps/MareW/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareW_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareW_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/MareW/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_MareW_F
# 13 "data/maps/MareW/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MareW_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 15 "data/maps/MareW/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MareW_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 17 "data/maps/MareW/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MareW_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 19 "data/maps/MareW/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MareW_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

MareW_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/MareW/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

MareW_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/MareW/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

MareW_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 18 "data/maps/MareW/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

MareW_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 20 "data/maps/MareW/scripts.pory"
	setvar VAR_TEMP_5, 4
	return


MareW_Script_ActaEchonaTransition::
# 26 "data/maps/MareW/scripts.pory"
	setvar VAR_TEMP_5, 1
# 27 "data/maps/MareW/scripts.pory"
	special TransitionMapMusic
# 28 "data/maps/MareW/scripts.pory"
	special ShowMapNamePopup
	return


MareW_Script_MareInternumTransition::
# 32 "data/maps/MareW/scripts.pory"
	setvar VAR_TEMP_5, 2
# 33 "data/maps/MareW/scripts.pory"
	special TransitionMapMusic
# 34 "data/maps/MareW/scripts.pory"
	special ShowMapNamePopup
	return


MareW_Script_MareTranquillumTransition::
# 38 "data/maps/MareW/scripts.pory"
	setvar VAR_TEMP_5, 3
# 39 "data/maps/MareW/scripts.pory"
	special TransitionMapMusic
# 40 "data/maps/MareW/scripts.pory"
	special ShowMapNamePopup
	return


MareW_Script_MareTropicumTransition::
# 44 "data/maps/MareW/scripts.pory"
	setvar VAR_TEMP_5, 4
# 45 "data/maps/MareW/scripts.pory"
	special TransitionMapMusic
# 46 "data/maps/MareW/scripts.pory"
	special ShowMapNamePopup
	return

