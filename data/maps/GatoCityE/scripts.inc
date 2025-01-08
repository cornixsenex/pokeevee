GatoCityE_MapScripts::
# 2 "data/maps/GatoCityE/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, GatoCityE_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/GatoCityE/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GatoCityE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GatoCityE_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/GatoCityE/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 35, GatoCityE_EventScript_HidePlayer
# 4 "data/maps/GatoCityE/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 36, GatoCityE_EventScript_HidePlayer
# 5 "data/maps/GatoCityE/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 37, GatoCityE_EventScript_HidePlayer
	.2byte 0

GatoCityE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/GatoCityE/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 35, GatoCityE_EventScript_ShowSWHJ35
# 10 "data/maps/GatoCityE/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 36, GatoCityE_EventScript_ShowSWHJ36
# 11 "data/maps/GatoCityE/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 37, GatoCityE_EventScript_ShowSWHJ37
	.2byte 0


GatoCityE_EventScript_HidePlayer::
# 16 "data/maps/GatoCityE/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_GATO_CITY_E
	end


GatoCityE_EventScript_ShowSWHJ35::
# 21 "data/maps/GatoCityE/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 25
# 22 "data/maps/GatoCityE/scripts.pory"
	msgbox GatoCityE_EventScript_ShowSWHJ35_Text_0
# 23 "data/maps/GatoCityE/scripts.pory"
	closemessage
# 24 "data/maps/GatoCityE/scripts.pory"
	warp MAP_GATO_CITY_S, 36, 8
	return


GatoCityE_EventScript_ShowSWHJ36::
# 29 "data/maps/GatoCityE/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 26
# 30 "data/maps/GatoCityE/scripts.pory"
	msgbox GatoCityE_EventScript_ShowSWHJ35_Text_0
# 31 "data/maps/GatoCityE/scripts.pory"
	closemessage
# 32 "data/maps/GatoCityE/scripts.pory"
	warp MAP_GATO_CITY_S, 37, 9
	return


GatoCityE_EventScript_ShowSWHJ37::
# 37 "data/maps/GatoCityE/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 27
# 38 "data/maps/GatoCityE/scripts.pory"
	msgbox GatoCityE_EventScript_ShowSWHJ35_Text_0
# 39 "data/maps/GatoCityE/scripts.pory"
	closemessage
# 40 "data/maps/GatoCityE/scripts.pory"
	warp MAP_GATO_CITY_S, 38, 8
	return


GatoCityE_EventScript_ShowSWHJ35_Text_0:
# 22 "data/maps/GatoCityE/scripts.pory"
	.string "---SUPER WEENIE HUT JR'S---$"
