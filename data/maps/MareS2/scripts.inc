MareS2_MapScripts::
# 18 "data/maps/MareS2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/MareS2/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS2_F
# 22 "data/maps/MareS2/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq MareS2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

MareS2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 23 "data/maps/MareS2/scripts.pory"
	setflag FLAG_MANUAL_WEATHER
# 24 "data/maps/MareS2/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 25 "data/maps/MareS2/scripts.pory"
	doweather
	return

MareS2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 22 "data/maps/MareS2/scripts.pory"
	goto_if_unset FLAG_MANUAL_WEATHER, MareS2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return


MareS2_Script_Transition_MareTranquillum::
# 33 "data/maps/MareS2/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq MareS2_Script_Transition_MareTranquillum_2
MareS2_Script_Transition_MareTranquillum_1:
# 38 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 1
# 39 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 40 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return

MareS2_Script_Transition_MareTranquillum_2:
# 34 "data/maps/MareS2/scripts.pory"
	clearflag FLAG_MANUAL_WEATHER
# 35 "data/maps/MareS2/scripts.pory"
	setweather WEATHER_NONE
# 36 "data/maps/MareS2/scripts.pory"
	doweather
	goto MareS2_Script_Transition_MareTranquillum_1


MareS2_Script_Transition_MareMortuorum::
# 44 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 2
# 45 "data/maps/MareS2/scripts.pory"
	setflag FLAG_MANUAL_WEATHER
# 46 "data/maps/MareS2/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 47 "data/maps/MareS2/scripts.pory"
	doweather
# 48 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 49 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return


MareS2_Script_Transition_MareSubtropicum::
# 53 "data/maps/MareS2/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq MareS2_Script_Transition_MareSubtropicum_2
MareS2_Script_Transition_MareSubtropicum_1:
# 58 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 3
# 59 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 60 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return

MareS2_Script_Transition_MareSubtropicum_2:
# 54 "data/maps/MareS2/scripts.pory"
	clearflag FLAG_MANUAL_WEATHER
# 55 "data/maps/MareS2/scripts.pory"
	setweather WEATHER_NONE
# 56 "data/maps/MareS2/scripts.pory"
	doweather
	goto MareS2_Script_Transition_MareSubtropicum_1


MareS2_Script_Transition_IslaHerbaBona::
# 64 "data/maps/MareS2/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq MareS2_Script_Transition_IslaHerbaBona_2
MareS2_Script_Transition_IslaHerbaBona_1:
# 69 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 4
# 70 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 71 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return

MareS2_Script_Transition_IslaHerbaBona_2:
# 65 "data/maps/MareS2/scripts.pory"
	clearflag FLAG_MANUAL_WEATHER
# 66 "data/maps/MareS2/scripts.pory"
	setweather WEATHER_NONE
# 67 "data/maps/MareS2/scripts.pory"
	doweather
	goto MareS2_Script_Transition_IslaHerbaBona_1


MareS2_Script_Transition_Mortia::
# 75 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 5
# 76 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 77 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return

