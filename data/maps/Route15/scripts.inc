Route15_MapScripts::
# 3 "data/maps/Route15/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route15_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route15_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/Route15/scripts.pory"
	goto_if_set FLAG_ROUTE15_DESERTCAVE_OPEN, Route15_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route15_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 5 "data/maps/Route15/scripts.pory"
	call Route15_EventScript_ShowCaveDoor
	return


Route15_EventScript_ShowCaveDoor::
# 12 "data/maps/Route15/scripts.pory"
	setmetatile 43, 38, METATILE_General_CaveEntrance_Bottom, 0
# 13 "data/maps/Route15/scripts.pory"
	setmetatile 43, 37, METATILE_General_CaveEntrance_Top, 1
	end


Route15_EventScript_DesertTempleWarp::
# 18 "data/maps/Route15/scripts.pory"
	lockall
# 19 "data/maps/Route15/scripts.pory"
	delay 20
# 20 "data/maps/Route15/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 21 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route15/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_SetInvisible
# 23 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route15/scripts.pory"
	playse SE_FALL
# 25 "data/maps/Route15/scripts.pory"
	delay 60
# 26 "data/maps/Route15/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_B1F, 9, 9
# 27 "data/maps/Route15/scripts.pory"
	waitstate
	end

