Route15_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route15_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route15_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_ROUTE15_DESERTCAVE_OPEN, Route15_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route15_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	call Route15_EventScript_ShowCaveDoor
	return


Route15_EventScript_ShowCaveDoor::
	setmetatile 43, 38, METATILE_General_CaveEntrance_Bottom, 0
	setmetatile 43, 37, METATILE_General_CaveEntrance_Top, 1
	end


Route15_EventScript_DesertTempleWarp::
	lockall
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_SetInvisible
	waitmovement 0
	playse SE_FALL
	delay 60
	warpsilent MAP_DESERT_TEMPLE_B1F, 9, 9
	waitstate
	end

