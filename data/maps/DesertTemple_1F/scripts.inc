DesertTemple_1F_MapScripts::
	.byte 0


DesertTemple_1F_EventScript_FloorTrigger::
# 10 "data/maps/DesertTemple_1F/scripts.pory"
	lockall
# 11 "data/maps/DesertTemple_1F/scripts.pory"
	delay 20
# 12 "data/maps/DesertTemple_1F/scripts.pory"
	special DesertTemple_FalseFloor
# 13 "data/maps/DesertTemple_1F/scripts.pory"
	special DrawWholeMapView
# 14 "data/maps/DesertTemple_1F/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 15 "data/maps/DesertTemple_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 16 "data/maps/DesertTemple_1F/scripts.pory"
	waitmovement 0
# 17 "data/maps/DesertTemple_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_SetInvisible
# 18 "data/maps/DesertTemple_1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/DesertTemple_1F/scripts.pory"
	playse SE_FALL
# 20 "data/maps/DesertTemple_1F/scripts.pory"
	delay 60
# 21 "data/maps/DesertTemple_1F/scripts.pory"
	switch VAR_RESULT
# 22 "data/maps/DesertTemple_1F/scripts.pory"
	case 0, DesertTemple_1F_EventScript_FloorTrigger_3
# 24 "data/maps/DesertTemple_1F/scripts.pory"
	case 1, DesertTemple_1F_EventScript_FloorTrigger_4
# 26 "data/maps/DesertTemple_1F/scripts.pory"
	case 2, DesertTemple_1F_EventScript_FloorTrigger_5
# 28 "data/maps/DesertTemple_1F/scripts.pory"
	case 3, DesertTemple_1F_EventScript_FloorTrigger_6
# 30 "data/maps/DesertTemple_1F/scripts.pory"
	case 4, DesertTemple_1F_EventScript_FloorTrigger_7
# 32 "data/maps/DesertTemple_1F/scripts.pory"
	case 5, DesertTemple_1F_EventScript_FloorTrigger_8
# 34 "data/maps/DesertTemple_1F/scripts.pory"
	case 6, DesertTemple_1F_EventScript_FloorTrigger_9
# 36 "data/maps/DesertTemple_1F/scripts.pory"
	case 7, DesertTemple_1F_EventScript_FloorTrigger_10
# 38 "data/maps/DesertTemple_1F/scripts.pory"
	case 8, DesertTemple_1F_EventScript_FloorTrigger_11
# 40 "data/maps/DesertTemple_1F/scripts.pory"
	case 9, DesertTemple_1F_EventScript_FloorTrigger_12
# 43 "data/maps/DesertTemple_1F/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_B1F, 9, 9
DesertTemple_1F_EventScript_FloorTrigger_1:
# 45 "data/maps/DesertTemple_1F/scripts.pory"
	waitstate
	end

DesertTemple_1F_EventScript_FloorTrigger_3:
# 23 "data/maps/DesertTemple_1F/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_B1F, 9, 9
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_4:
# 25 "data/maps/DesertTemple_1F/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_B1F, 9, 9
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_5:
# 27 "data/maps/DesertTemple_1F/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_B1F, 17, 21
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_6:
# 29 "data/maps/DesertTemple_1F/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_B1F, 37, 14
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_7:
# 31 "data/maps/DesertTemple_1F/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_B1F, 45, 33
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_8:
# 33 "data/maps/DesertTemple_1F/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_B1F, 34, 18
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_9:
# 35 "data/maps/DesertTemple_1F/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_B1F, 36, 5
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_10:
# 37 "data/maps/DesertTemple_1F/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_B1F, 26, 11
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_11:
# 39 "data/maps/DesertTemple_1F/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_B1F, 7, 21
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_12:
# 41 "data/maps/DesertTemple_1F/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_B1F, 13, 7
	goto DesertTemple_1F_EventScript_FloorTrigger_1

