MareS2_MapScripts::
# 18 "data/maps/MareS2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 19 "data/maps/MareS2/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS2_F
	return


MareS2_Script_Transition_MareTranquillum::
# 25 "data/maps/MareS2/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq MareS2_Script_Transition_MareTranquillum_2
MareS2_Script_Transition_MareTranquillum_1:
# 30 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 1
# 31 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 32 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return

MareS2_Script_Transition_MareTranquillum_2:
# 26 "data/maps/MareS2/scripts.pory"
	clearflag FLAG_MANUAL_WEATHER
# 27 "data/maps/MareS2/scripts.pory"
	setweather WEATHER_NONE
# 28 "data/maps/MareS2/scripts.pory"
	doweather
	goto MareS2_Script_Transition_MareTranquillum_1


MareS2_Script_Transition_MareMortuorum::
# 36 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 2
# 37 "data/maps/MareS2/scripts.pory"
	setflag FLAG_MANUAL_WEATHER
# 38 "data/maps/MareS2/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 39 "data/maps/MareS2/scripts.pory"
	doweather
# 40 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 41 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return


MareS2_Script_Transition_MareSubtropicum::
# 45 "data/maps/MareS2/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq MareS2_Script_Transition_MareSubtropicum_2
MareS2_Script_Transition_MareSubtropicum_1:
# 50 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 3
# 51 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 52 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return

MareS2_Script_Transition_MareSubtropicum_2:
# 46 "data/maps/MareS2/scripts.pory"
	clearflag FLAG_MANUAL_WEATHER
# 47 "data/maps/MareS2/scripts.pory"
	setweather WEATHER_NONE
# 48 "data/maps/MareS2/scripts.pory"
	doweather
	goto MareS2_Script_Transition_MareSubtropicum_1


MareS2_Script_Transition_IslaHerbaBona::
# 56 "data/maps/MareS2/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq MareS2_Script_Transition_IslaHerbaBona_2
MareS2_Script_Transition_IslaHerbaBona_1:
# 61 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 4
# 62 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 63 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return

MareS2_Script_Transition_IslaHerbaBona_2:
# 57 "data/maps/MareS2/scripts.pory"
	clearflag FLAG_MANUAL_WEATHER
# 58 "data/maps/MareS2/scripts.pory"
	setweather WEATHER_NONE
# 59 "data/maps/MareS2/scripts.pory"
	doweather
	goto MareS2_Script_Transition_IslaHerbaBona_1


MareS2_Script_Transition_Mortia::
# 67 "data/maps/MareS2/scripts.pory"
	setvar VAR_TEMP_5, 5
# 68 "data/maps/MareS2/scripts.pory"
	special TransitionMapMusic
# 69 "data/maps/MareS2/scripts.pory"
	special ShowMapNamePopup
	return

