AedesTerra_BossRoom_MapScripts::
# 8 "data/maps/AedesTerra_BossRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/AedesTerra_BossRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/AedesTerra_BossRoom/scripts.pory"
	goto_if_unset FLAG_AEDESTERRA_GANONDORF, AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setvar VAR_TEMP_B, 1
	return

AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/AedesTerra_BossRoom/scripts.pory"
	map_script_2 VAR_TEMP_B, 1, AedesTerra_BossRoom_Script_GanondorfScene
	.2byte 0


AedesTerra_BossRoom_Script_GanondorfScene::
	return

