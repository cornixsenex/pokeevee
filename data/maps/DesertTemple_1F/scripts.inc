DesertTemple_1F_MapScripts::
	.byte 0


DesertTemple_1F_EventScript_FloorTrigger::
	lockall
	delay 20
	special FalseFloor
	special DrawWholeMapView
	specialvar VAR_RESULT, RandDigit
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_SetInvisible
	waitmovement 0
	playse SE_FALL
	delay 60
	switch VAR_RESULT
	case 0, DesertTemple_1F_EventScript_FloorTrigger_3
	case 1, DesertTemple_1F_EventScript_FloorTrigger_4
	case 2, DesertTemple_1F_EventScript_FloorTrigger_5
	case 3, DesertTemple_1F_EventScript_FloorTrigger_6
	case 4, DesertTemple_1F_EventScript_FloorTrigger_7
	case 5, DesertTemple_1F_EventScript_FloorTrigger_8
	case 6, DesertTemple_1F_EventScript_FloorTrigger_9
	case 7, DesertTemple_1F_EventScript_FloorTrigger_10
	case 8, DesertTemple_1F_EventScript_FloorTrigger_11
	case 9, DesertTemple_1F_EventScript_FloorTrigger_12
	warpsilent MAP_DESERT_TEMPLE_B1F, 9, 9
DesertTemple_1F_EventScript_FloorTrigger_1:
	waitstate
	end

DesertTemple_1F_EventScript_FloorTrigger_3:
	warpsilent MAP_DESERT_TEMPLE_B1F, 9, 9
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_4:
	warpsilent MAP_DESERT_TEMPLE_B1F, 9, 9
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_5:
	warpsilent MAP_DESERT_TEMPLE_B1F, 17, 21
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_6:
	warpsilent MAP_DESERT_TEMPLE_B1F, 37, 14
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_7:
	warpsilent MAP_DESERT_TEMPLE_B1F, 45, 33
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_8:
	warpsilent MAP_DESERT_TEMPLE_B1F, 34, 18
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_9:
	warpsilent MAP_DESERT_TEMPLE_B1F, 36, 5
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_10:
	warpsilent MAP_DESERT_TEMPLE_B1F, 26, 11
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_11:
	warpsilent MAP_DESERT_TEMPLE_B1F, 7, 21
	goto DesertTemple_1F_EventScript_FloorTrigger_1

DesertTemple_1F_EventScript_FloorTrigger_12:
	warpsilent MAP_DESERT_TEMPLE_B1F, 13, 7
	goto DesertTemple_1F_EventScript_FloorTrigger_1

