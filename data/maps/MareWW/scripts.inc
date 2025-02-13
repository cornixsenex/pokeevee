MareWW_MapScripts::
# 11 "data/maps/MareWW/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareWW_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareWW_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/MareWW/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_MareWW
# 13 "data/maps/MareWW/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MareWW_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 15 "data/maps/MareWW/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MareWW_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 17 "data/maps/MareWW/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MareWW_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

MareWW_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/MareWW/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

MareWW_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/MareWW/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

MareWW_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 18 "data/maps/MareWW/scripts.pory"
	setvar VAR_TEMP_5, 3
	return


MareWW_Script_RiverDeltaTransition::
# 26 "data/maps/MareWW/scripts.pory"
	setvar VAR_TEMP_5, 1
# 27 "data/maps/MareWW/scripts.pory"
	special ShowMapNamePopup
	return


MareWW_Script_MareTropicumTransition::
# 31 "data/maps/MareWW/scripts.pory"
	setvar VAR_TEMP_5, 2
# 32 "data/maps/MareWW/scripts.pory"
	special ShowMapNamePopup
	return


MareWW_Script_PlayaEchonaTransition::
# 36 "data/maps/MareWW/scripts.pory"
	setvar VAR_TEMP_5, 3
# 37 "data/maps/MareWW/scripts.pory"
	special ShowMapNamePopup
	return

