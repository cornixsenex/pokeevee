GatoCityE_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, GatoCityE_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GatoCityE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GatoCityE_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_SALTYSPITOON_STATE, 35, GatoCityE_EventScript_HidePlayer
	map_script_2 VAR_SALTYSPITOON_STATE, 36, GatoCityE_EventScript_HidePlayer
	map_script_2 VAR_SALTYSPITOON_STATE, 37, GatoCityE_EventScript_HidePlayer
	.2byte 0

GatoCityE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SALTYSPITOON_STATE, 35, GatoCityE_EventScript_ShowSWHJ35
	map_script_2 VAR_SALTYSPITOON_STATE, 36, GatoCityE_EventScript_ShowSWHJ36
	map_script_2 VAR_SALTYSPITOON_STATE, 37, GatoCityE_EventScript_ShowSWHJ37
	.2byte 0


GatoCityE_EventScript_HidePlayer::
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_GATO_CITY_E
	end


GatoCityE_EventScript_ShowSWHJ35::
	setvar VAR_SALTYSPITOON_STATE, 25
	msgbox GatoCityE_EventScript_ShowSWHJ35_Text_0
	closemessage
	warp MAP_GATO_CITY_S, 36, 8
	return


GatoCityE_EventScript_ShowSWHJ36::
	setvar VAR_SALTYSPITOON_STATE, 26
	msgbox GatoCityE_EventScript_ShowSWHJ35_Text_0
	closemessage
	warp MAP_GATO_CITY_S, 37, 9
	return


GatoCityE_EventScript_ShowSWHJ37::
	setvar VAR_SALTYSPITOON_STATE, 27
	msgbox GatoCityE_EventScript_ShowSWHJ35_Text_0
	closemessage
	warp MAP_GATO_CITY_S, 38, 8
	return


GatoCityE_EventScript_ShowSWHJ35_Text_0:
	.string "---SUPER WEENIE HUT JR'S---$"
