SanjoRockFiller_MapScripts::
# 7 "data/maps/SanjoRockFiller/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SanjoRockFiller_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SanjoRockFiller_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/SanjoRockFiller/scripts.pory"
	specialvar VAR_RESULT, IsSanjoRockFillerSabinaNova_F
# 11 "data/maps/SanjoRockFiller/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SanjoRockFiller_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 14 "data/maps/SanjoRockFiller/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

SanjoRockFiller_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/SanjoRockFiller/scripts.pory"
	setvar VAR_TEMP_5, 1
	return


SanjoRockFiller_Script_Transition_SabinaNova::
# 21 "data/maps/SanjoRockFiller/scripts.pory"
	setvar VAR_TEMP_5, 1
# 22 "data/maps/SanjoRockFiller/scripts.pory"
	special TransitionMapMusic
# 23 "data/maps/SanjoRockFiller/scripts.pory"
	special ShowMapNamePopup
	return

