Hippodrome_MapScripts::
# 11 "data/maps/Hippodrome/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Hippodrome_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Hippodrome_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/Hippodrome/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_Hippodrome_F
	return


Hippodrome_Script_Transition_VillaeRusticae::
# 20 "data/maps/Hippodrome/scripts.pory"
	setvar VAR_TEMP_5, 1
# 21 "data/maps/Hippodrome/scripts.pory"
	special TransitionMapMusic
# 22 "data/maps/Hippodrome/scripts.pory"
	special ShowMapNamePopup
	return


Hippodrome_Script_Transition_Circus::
# 26 "data/maps/Hippodrome/scripts.pory"
	setvar VAR_TEMP_5, 2
# 27 "data/maps/Hippodrome/scripts.pory"
	special TransitionMapMusic
# 28 "data/maps/Hippodrome/scripts.pory"
	special ShowMapNamePopup
	return


Hippodrome_Script_Transition_Urbia::
# 32 "data/maps/Hippodrome/scripts.pory"
	setvar VAR_TEMP_5, 4
# 33 "data/maps/Hippodrome/scripts.pory"
	special TransitionMapMusic
# 34 "data/maps/Hippodrome/scripts.pory"
	special ShowMapNamePopup
	return

