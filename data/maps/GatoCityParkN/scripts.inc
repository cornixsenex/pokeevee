GatoCityParkN_MapScripts::
# 8 "data/maps/GatoCityParkN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GatoCityParkN_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/GatoCityParkN/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GatoCityParkN_MapScripts_MAP_SCRIPT_ON_RESUME
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

GatoCityParkN_MapScripts_MAP_SCRIPT_ON_RESUME:
# 20 "data/maps/GatoCityParkN/scripts.pory"
	call GatoCityParkN_Script_SetupAshGrass
	return


GatoCityParkN_Script_SetupAshGrass::
# 26 "data/maps/GatoCityParkN/scripts.pory"
	setstepcallback STEP_CB_ASH
	return


GatoCityParkN_Script_Transition_Thermae::
# 31 "data/maps/GatoCityParkN/scripts.pory"
	setvar VAR_TEMP_5, 1
# 32 "data/maps/GatoCityParkN/scripts.pory"
	special TransitionMapMusic
# 33 "data/maps/GatoCityParkN/scripts.pory"
	special ShowMapNamePopup
	return


GatoCityParkN_Script_Transition_HortusPublicus::
# 37 "data/maps/GatoCityParkN/scripts.pory"
	setvar VAR_TEMP_5, 2
# 38 "data/maps/GatoCityParkN/scripts.pory"
	special TransitionMapMusic
# 39 "data/maps/GatoCityParkN/scripts.pory"
	special ShowMapNamePopup
	return

