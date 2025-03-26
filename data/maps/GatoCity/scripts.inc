GatoCity_MapScripts::
# 3 "data//maps/GatoCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GatoCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GatoCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data//maps/GatoCity/scripts.pory"
	goto_if_set FLAG_PECCADUM_TRUCK_READY, GatoCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

GatoCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data//maps/GatoCity/scripts.pory"
	clearflag FLAG_PECCADUM_TRUCK_READY
	return

