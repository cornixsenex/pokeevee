GatoCityParkN_MapScripts::
# 8 "data/maps/GatoCityParkN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GatoCityParkN_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GatoCityParkN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/GatoCityParkN/scripts.pory"
	specialvar VAR_RESULT, IsGatoCityParkNThermae_F
# 12 "data/maps/GatoCityParkN/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GatoCityParkN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 15 "data/maps/GatoCityParkN/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

GatoCityParkN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/GatoCityParkN/scripts.pory"
	setvar VAR_TEMP_5, 1
	return


GatoCityParkN_Script_Transition_Thermae::
# 22 "data/maps/GatoCityParkN/scripts.pory"
	setvar VAR_TEMP_5, 1
# 23 "data/maps/GatoCityParkN/scripts.pory"
	special TransitionMapMusic
# 24 "data/maps/GatoCityParkN/scripts.pory"
	special ShowMapNamePopup
	return


GatoCityParkN_Script_Transition_HortusPublicus::
# 28 "data/maps/GatoCityParkN/scripts.pory"
	setvar VAR_TEMP_5, 2
# 29 "data/maps/GatoCityParkN/scripts.pory"
	special TransitionMapMusic
# 30 "data/maps/GatoCityParkN/scripts.pory"
	special ShowMapNamePopup
	return

