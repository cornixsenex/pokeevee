MareWWW_MapScripts::
# 5 "data/maps/MareWWW/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareWWW_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareWWW_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/MareWWW/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_MareWWW
# 13 "data/maps/MareWWW/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MareWWW_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 15 "data/maps/MareWWW/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MareWWW_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 19 "data/maps/MareWWW/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

MareWWW_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/MareWWW/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

MareWWW_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/MareWWW/scripts.pory"
	setvar VAR_TEMP_5, 1
	return


MareWWW_Script_RiverDeltaTransition::
# 29 "data/maps/MareWWW/scripts.pory"
	setvar VAR_TEMP_5, 2
# 30 "data/maps/MareWWW/scripts.pory"
	special ShowMapNamePopup
	return


MareWWW_Script_MareOccidensTransition::
# 37 "data/maps/MareWWW/scripts.pory"
	setvar VAR_TEMP_5, 1
# 38 "data/maps/MareWWW/scripts.pory"
	special ShowMapNamePopup
	return


MareWWW_Script_LitusFalxTransition::
# 42 "data/maps/MareWWW/scripts.pory"
	setvar VAR_TEMP_5, 3
# 43 "data/maps/MareWWW/scripts.pory"
	special ShowMapNamePopup
	return

