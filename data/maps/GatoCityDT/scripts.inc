GatoCityDT_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, GatoCityDT_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GatoCityDT_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GatoCityDT_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_SALTYSPITOON_STATE, 5, GatoCityDT_EventScript_HidePlayer
	map_script_2 VAR_SALTYSPITOON_STATE, 6, GatoCityDT_EventScript_HidePlayer
	map_script_2 VAR_SALTYSPITOON_STATE, 7, GatoCityDT_EventScript_HidePlayer
	map_script_2 VAR_SALTYSPITOON_STATE, 15, GatoCityDT_EventScript_HidePlayer
	map_script_2 VAR_SALTYSPITOON_STATE, 16, GatoCityDT_EventScript_HidePlayer
	map_script_2 VAR_SALTYSPITOON_STATE, 17, GatoCityDT_EventScript_HidePlayer
	.2byte 0

GatoCityDT_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SALTYSPITOON_STATE, 5, GatoCityDT_EventScript_ShowWHJ5
	map_script_2 VAR_SALTYSPITOON_STATE, 6, GatoCityDT_EventScript_ShowWHJ6
	map_script_2 VAR_SALTYSPITOON_STATE, 7, GatoCityDT_EventScript_ShowWHJ7
	map_script_2 VAR_SALTYSPITOON_STATE, 15, GatoCityDT_EventScript_ShowWHJ15
	map_script_2 VAR_SALTYSPITOON_STATE, 16, GatoCityDT_EventScript_ShowWHJ16
	map_script_2 VAR_SALTYSPITOON_STATE, 17, GatoCityDT_EventScript_ShowWHJ17
	.2byte 0


GatoCityDT_EventScript_HidePlayer::
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_GATO_CITY_DT
	end


GatoCityDT_EventScript_ShowWHJ5::
	setvar VAR_SALTYSPITOON_STATE, 25
	msgbox GatoCityDT_EventScript_ShowWHJ5_Text_0
	closemessage
	warp MAP_GATO_CITY_S, 36, 8
	return


GatoCityDT_EventScript_ShowWHJ6::
	setvar VAR_SALTYSPITOON_STATE, 26
	msgbox GatoCityDT_EventScript_ShowWHJ5_Text_0
	closemessage
	warp MAP_GATO_CITY_S, 37, 9
	return


GatoCityDT_EventScript_ShowWHJ7::
	setvar VAR_SALTYSPITOON_STATE, 27
	msgbox GatoCityDT_EventScript_ShowWHJ5_Text_0
	closemessage
	warp MAP_GATO_CITY_S, 38, 8
	return


GatoCityDT_EventScript_ShowWHJ15::
	setvar VAR_SALTYSPITOON_STATE, 35
	msgbox GatoCityDT_EventScript_ShowWHJ5_Text_0
	closemessage
	warp MAP_GATO_CITY_S, 36, 8
	return


GatoCityDT_EventScript_ShowWHJ16::
	setvar VAR_SALTYSPITOON_STATE, 36
	msgbox GatoCityDT_EventScript_ShowWHJ5_Text_0
	closemessage
	warp MAP_GATO_CITY_S, 37, 9
	return


GatoCityDT_EventScript_ShowWHJ17::
	setvar VAR_SALTYSPITOON_STATE, 37
	msgbox GatoCityDT_EventScript_ShowWHJ5_Text_0
	closemessage
	warp MAP_GATO_CITY_S, 38, 8
	return


GatoCityDT_EventScript_ShowWHJ5_Text_0:
	.string "---WEENIE HUT JR'S---$"
