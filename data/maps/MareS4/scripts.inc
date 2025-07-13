MareS4_MapScripts::
# 18 "data/maps/MareS4/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/MareS4/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS4_F
# 22 "data/maps/MareS4/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 23 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ARGO, 0, 0
	return


MareS4_Script_Transition_MareTropicum::
# 29 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 1
# 30 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 31 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_MareTranquillum::
# 35 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 2
# 36 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 37 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_MareSubtropicum::
# 41 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 3
# 42 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 43 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_IslaHerbaBona::
# 47 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 4
# 48 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 49 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_IslaHesperia::
# 53 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 5
# 54 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 55 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_ScyllaCharybdis::
# 59 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 6
# 60 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 61 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return

