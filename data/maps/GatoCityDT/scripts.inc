GatoCityDT_MapScripts::
# 4 "data/maps/GatoCityDT/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, GatoCityDT_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 12 "data/maps/GatoCityDT/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GatoCityDT_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GatoCityDT_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/GatoCityDT/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 5, GatoCityDT_EventScript_HidePlayer
# 6 "data/maps/GatoCityDT/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 6, GatoCityDT_EventScript_HidePlayer
# 7 "data/maps/GatoCityDT/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 7, GatoCityDT_EventScript_HidePlayer
# 8 "data/maps/GatoCityDT/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 15, GatoCityDT_EventScript_HidePlayer
# 9 "data/maps/GatoCityDT/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 16, GatoCityDT_EventScript_HidePlayer
# 10 "data/maps/GatoCityDT/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 17, GatoCityDT_EventScript_HidePlayer
	.2byte 0

GatoCityDT_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/GatoCityDT/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 5, GatoCityDT_EventScript_ShowWHJ5
# 14 "data/maps/GatoCityDT/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 6, GatoCityDT_EventScript_ShowWHJ6
# 15 "data/maps/GatoCityDT/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 7, GatoCityDT_EventScript_ShowWHJ7
# 16 "data/maps/GatoCityDT/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 15, GatoCityDT_EventScript_ShowWHJ15
# 17 "data/maps/GatoCityDT/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 16, GatoCityDT_EventScript_ShowWHJ16
# 18 "data/maps/GatoCityDT/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 17, GatoCityDT_EventScript_ShowWHJ17
	.2byte 0


GatoCityDT_EventScript_HidePlayer::
# 23 "data/maps/GatoCityDT/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_GATO_CITY_DT
	end


GatoCityDT_EventScript_ShowWHJ5::
# 28 "data/maps/GatoCityDT/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 25
# 29 "data/maps/GatoCityDT/scripts.pory"
	msgbox GatoCityDT_EventScript_ShowWHJ5_Text_0
# 30 "data/maps/GatoCityDT/scripts.pory"
	closemessage
# 31 "data/maps/GatoCityDT/scripts.pory"
	warp MAP_GATO_CITY_S, 36, 8
	return


GatoCityDT_EventScript_ShowWHJ6::
# 36 "data/maps/GatoCityDT/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 26
# 37 "data/maps/GatoCityDT/scripts.pory"
	msgbox GatoCityDT_EventScript_ShowWHJ5_Text_0
# 38 "data/maps/GatoCityDT/scripts.pory"
	closemessage
# 39 "data/maps/GatoCityDT/scripts.pory"
	warp MAP_GATO_CITY_S, 37, 9
	return


GatoCityDT_EventScript_ShowWHJ7::
# 44 "data/maps/GatoCityDT/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 27
# 45 "data/maps/GatoCityDT/scripts.pory"
	msgbox GatoCityDT_EventScript_ShowWHJ5_Text_0
# 46 "data/maps/GatoCityDT/scripts.pory"
	closemessage
# 47 "data/maps/GatoCityDT/scripts.pory"
	warp MAP_GATO_CITY_S, 38, 8
	return


GatoCityDT_EventScript_ShowWHJ15::
# 52 "data/maps/GatoCityDT/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 35
# 53 "data/maps/GatoCityDT/scripts.pory"
	msgbox GatoCityDT_EventScript_ShowWHJ5_Text_0
# 54 "data/maps/GatoCityDT/scripts.pory"
	closemessage
# 55 "data/maps/GatoCityDT/scripts.pory"
	warp MAP_GATO_CITY_S, 36, 8
	return


GatoCityDT_EventScript_ShowWHJ16::
# 60 "data/maps/GatoCityDT/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 36
# 61 "data/maps/GatoCityDT/scripts.pory"
	msgbox GatoCityDT_EventScript_ShowWHJ5_Text_0
# 62 "data/maps/GatoCityDT/scripts.pory"
	closemessage
# 63 "data/maps/GatoCityDT/scripts.pory"
	warp MAP_GATO_CITY_S, 37, 9
	return


GatoCityDT_EventScript_ShowWHJ17::
# 68 "data/maps/GatoCityDT/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 37
# 69 "data/maps/GatoCityDT/scripts.pory"
	msgbox GatoCityDT_EventScript_ShowWHJ5_Text_0
# 70 "data/maps/GatoCityDT/scripts.pory"
	closemessage
# 71 "data/maps/GatoCityDT/scripts.pory"
	warp MAP_GATO_CITY_S, 38, 8
	return


GatoCityDT_EventScript_ShowWHJ5_Text_0:
# 29 "data/maps/GatoCityDT/scripts.pory"
	.string "---WEENIE HUT JR'S---$"
