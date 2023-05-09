Route15_DesertCave_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route15_DesertCave_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route15_DesertCave_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_ROUTE15_DESERTCAVE_OPEN, Route15_DesertCave_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route15_DesertCave_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

Route15_DesertCave_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	call Route15_DesertCave_EventScript_OpenDoor
	goto Route15_DesertCave_MapScripts_MAP_SCRIPT_ON_LOAD_1


Route15_DesertCave_EventScript_DoorTrigger::
	setvar VAR_TEMP_0, 1
	checkitem ITEM_ANCIENT_LAMP
	compare VAR_RESULT, TRUE
	goto_if_eq Route15_DesertCave_EventScript_DoorTrigger_3
Route15_DesertCave_EventScript_DoorTrigger_1:
	end

Route15_DesertCave_EventScript_DoorTrigger_2:
	call Route15_DesertCave_EventScript_ShowOpenDoor
	goto Route15_DesertCave_EventScript_DoorTrigger_1

Route15_DesertCave_EventScript_DoorTrigger_3:
	goto_if_unset FLAG_ROUTE15_DESERTCAVE_OPEN, Route15_DesertCave_EventScript_DoorTrigger_2
	goto Route15_DesertCave_EventScript_DoorTrigger_1


Route15_DesertCave_EventScript_ShowOpenDoor::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	msgbox Route15_DesertCave_Text_ShowOpenDoor
	closemessage
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 16
	setvar VAR_0x8007, 3
	special ShakeCamera
	waitstate
	playse SE_EFFECTIVE
	waitse
	call Route15_DesertCave_EventScript_OpenDoor
	special DrawWholeMapView
	delay 30
	setflag FLAG_ROUTE15_DESERTCAVE_OPEN
	releaseall
	end


Route15_DesertCave_EventScript_OpenDoor::
	setmetatile 14, 19, METATILE_Cave_CaveType3BottomHole, 0
	setmetatile 13, 19, METATILE_Cave_CaveType3BottomHoleLeft, 1
	setmetatile 15, 19, METATILE_Cave_CaveType3BottomHoleRight, 1
	return


Route15_DesertCave_Text_ShowOpenDoor::
	.string "Oh! The ANCIENT LAMP begins to shake\n"
	.string "and glow!$"
