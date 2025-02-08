MareWWW_MapScripts::
# 5 "data/maps/MareWWW/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareWWW_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareWWW_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/MareWWW/scripts.pory"
	specialvar VAR_RESULT, IsMareWWWRiverDelta
# 12 "data/maps/MareWWW/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MareWWW_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 15 "data/maps/MareWWW/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

MareWWW_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/MareWWW/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

