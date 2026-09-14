Route15_DesertCave_MapScripts::
# 3 "data/maps/Route15_DesertCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route15_DesertCave_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route15_DesertCave_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/Route15_DesertCave/scripts.pory"
	goto_if_set FLAG_ROUTE15_DESERTCAVE_OPEN, Route15_DesertCave_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route15_DesertCave_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

Route15_DesertCave_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 5 "data/maps/Route15_DesertCave/scripts.pory"
	call Route15_DesertCave_EventScript_OpenDoor
	goto Route15_DesertCave_MapScripts_MAP_SCRIPT_ON_LOAD_1


Route15_DesertCave_EventScript_DoorTrigger::
# 15 "data/maps/Route15_DesertCave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 16 "data/maps/Route15_DesertCave/scripts.pory"
	checkitem ITEM_ANCIENT_LAMP
# 17 "data/maps/Route15_DesertCave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route15_DesertCave_EventScript_DoorTrigger_3
Route15_DesertCave_EventScript_DoorTrigger_1:
	end

Route15_DesertCave_EventScript_DoorTrigger_2:
# 18 "data/maps/Route15_DesertCave/scripts.pory"
	call Route15_DesertCave_EventScript_ShowOpenDoor
	goto Route15_DesertCave_EventScript_DoorTrigger_1

Route15_DesertCave_EventScript_DoorTrigger_3:
# 17 "data/maps/Route15_DesertCave/scripts.pory"
	goto_if_unset FLAG_ROUTE15_DESERTCAVE_OPEN, Route15_DesertCave_EventScript_DoorTrigger_2
	goto Route15_DesertCave_EventScript_DoorTrigger_1


Route15_DesertCave_EventScript_ShowOpenDoor::
# 24 "data/maps/Route15_DesertCave/scripts.pory"
	lockall
# 25 "data/maps/Route15_DesertCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 26 "data/maps/Route15_DesertCave/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route15_DesertCave/scripts.pory"
	setvar VAR_0x8004, 1
# 28 "data/maps/Route15_DesertCave/scripts.pory"
	setvar VAR_0x8005, 1
# 29 "data/maps/Route15_DesertCave/scripts.pory"
	setvar VAR_0x8006, 8
# 30 "data/maps/Route15_DesertCave/scripts.pory"
	setvar VAR_0x8007, 5
# 31 "data/maps/Route15_DesertCave/scripts.pory"
	special ShakeCamera
# 32 "data/maps/Route15_DesertCave/scripts.pory"
	waitstate
# 33 "data/maps/Route15_DesertCave/scripts.pory"
	msgbox Route15_DesertCave_Text_ShowOpenDoor
# 34 "data/maps/Route15_DesertCave/scripts.pory"
	closemessage
# 35 "data/maps/Route15_DesertCave/scripts.pory"
	setvar VAR_0x8004, 1
# 36 "data/maps/Route15_DesertCave/scripts.pory"
	setvar VAR_0x8005, 1
# 37 "data/maps/Route15_DesertCave/scripts.pory"
	setvar VAR_0x8006, 16
# 38 "data/maps/Route15_DesertCave/scripts.pory"
	setvar VAR_0x8007, 3
# 39 "data/maps/Route15_DesertCave/scripts.pory"
	special ShakeCamera
# 40 "data/maps/Route15_DesertCave/scripts.pory"
	waitstate
# 41 "data/maps/Route15_DesertCave/scripts.pory"
	playse SE_EFFECTIVE
# 42 "data/maps/Route15_DesertCave/scripts.pory"
	waitse
# 43 "data/maps/Route15_DesertCave/scripts.pory"
	call Route15_DesertCave_EventScript_OpenDoor
# 44 "data/maps/Route15_DesertCave/scripts.pory"
	special DrawWholeMapView
# 45 "data/maps/Route15_DesertCave/scripts.pory"
	delay 30
# 46 "data/maps/Route15_DesertCave/scripts.pory"
	setflag FLAG_ROUTE15_DESERTCAVE_OPEN
# 47 "data/maps/Route15_DesertCave/scripts.pory"
	releaseall
	end


Route15_DesertCave_EventScript_OpenDoor::
# 53 "data/maps/Route15_DesertCave/scripts.pory"
	setmetatile 14, 19, METATILE_Cave_CaveType3BottomHole, 0
# 54 "data/maps/Route15_DesertCave/scripts.pory"
	setmetatile 13, 19, METATILE_Cave_CaveType3BottomHoleLeft, 1
# 55 "data/maps/Route15_DesertCave/scripts.pory"
	setmetatile 15, 19, METATILE_Cave_CaveType3BottomHoleRight, 1
# 58 "data/maps/Route15_DesertCave/scripts.pory"
	setmetatile 14, 15, METATILE_Cave_CaveType3EntranceTop, 1
# 59 "data/maps/Route15_DesertCave/scripts.pory"
	setmetatile 14, 16, METATILE_Cave_CaveType3EntranceBottom, 0
	return


Route15_DesertCave_Text_ShowOpenDoor::
# 65 "data/maps/Route15_DesertCave/scripts.pory"
	.string "Oh! The ANCIENT LAMP begins to shake\n"
	.string "and glow!$"
