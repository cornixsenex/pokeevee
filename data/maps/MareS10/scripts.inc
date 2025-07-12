MareS10_MapScripts::
# 11 "data/maps/MareS10/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS10_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS10_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/MareS10/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS9_F
# 15 "data/maps/MareS10/scripts.pory"
	compare VAR_TEMP_5, 4
	goto_if_eq MareS10_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MareS10_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/MareS10/scripts.pory"
	setweather WEATHER_DROUGHT
# 17 "data/maps/MareS10/scripts.pory"
	doweather
	return


MareS10_Script_Transition_MareTropicum::
# 24 "data/maps/MareS10/scripts.pory"
	setvar VAR_TEMP_5, 3
# 25 "data/maps/MareS10/scripts.pory"
	special TransitionMapMusic
# 26 "data/maps/MareS10/scripts.pory"
	special ShowMapNamePopup
	return


MareS10_Script_Transition_MareOccidens::
# 30 "data/maps/MareS10/scripts.pory"
	compare VAR_TEMP_5, 4
	goto_if_eq MareS10_Script_Transition_MareOccidens_2
MareS10_Script_Transition_MareOccidens_1:
# 34 "data/maps/MareS10/scripts.pory"
	setvar VAR_TEMP_5, 2
# 35 "data/maps/MareS10/scripts.pory"
	special TransitionMapMusic
# 36 "data/maps/MareS10/scripts.pory"
	special ShowMapNamePopup
	return

MareS10_Script_Transition_MareOccidens_2:
# 31 "data/maps/MareS10/scripts.pory"
	setweather WEATHER_NONE
# 32 "data/maps/MareS10/scripts.pory"
	doweather
	goto MareS10_Script_Transition_MareOccidens_1


MareS10_Script_Transition_MareSubtropicum::
# 40 "data/maps/MareS10/scripts.pory"
	setvar VAR_TEMP_5, 5
# 41 "data/maps/MareS10/scripts.pory"
	special TransitionMapMusic
# 42 "data/maps/MareS10/scripts.pory"
	special ShowMapNamePopup
	return


MareS10_Script_Transition_IslaSolata::
# 46 "data/maps/MareS10/scripts.pory"
	setvar VAR_TEMP_5, 4
# 47 "data/maps/MareS10/scripts.pory"
	setweather WEATHER_DROUGHT
# 48 "data/maps/MareS10/scripts.pory"
	doweather
# 49 "data/maps/MareS10/scripts.pory"
	special TransitionMapMusic
# 50 "data/maps/MareS10/scripts.pory"
	special ShowMapNamePopup
	return


MareS10_Script_Transition_IslaTropica::
# 54 "data/maps/MareS10/scripts.pory"
	setvar VAR_TEMP_5, 1
# 55 "data/maps/MareS10/scripts.pory"
	special TransitionMapMusic
# 56 "data/maps/MareS10/scripts.pory"
	special ShowMapNamePopup
	return

