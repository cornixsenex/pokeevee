Route16_MapScripts::
# 10 "data/maps/Route16/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/Route16/scripts.pory"
	specialvar VAR_RESULT, IsRoute16VenatorMons_F
# 14 "data/maps/Route16/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 17 "data/maps/Route16/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/Route16/scripts.pory"
	setvar VAR_TEMP_5, 1
	return


Route16_Script_VenatorMonsTransition::
# 24 "data/maps/Route16/scripts.pory"
	setvar VAR_TEMP_5, 1
# 25 "data/maps/Route16/scripts.pory"
	special TransitionMapMusic
# 26 "data/maps/Route16/scripts.pory"
	special ShowMapNamePopup
	return


Route16_Script_CacnorumTransition::
# 30 "data/maps/Route16/scripts.pory"
	setvar VAR_TEMP_5, 2
# 31 "data/maps/Route16/scripts.pory"
	special TransitionMapMusic
# 32 "data/maps/Route16/scripts.pory"
	special ShowMapNamePopup
	return

