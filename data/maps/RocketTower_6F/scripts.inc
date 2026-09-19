RocketTower_6F_MapScripts::
# 3 "data/maps/RocketTower_6F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_6F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_6F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/RocketTower_6F/scripts.pory"
	call RocketTower_6F_OnResume
	return


RocketTower_6F_OnResume::
# 10 "data/maps/RocketTower_6F/scripts.pory"
	call RocketTower_6F_EventScript_SetFloor6
# 11 "data/maps/RocketTower_6F/scripts.pory"
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_6F_OnResume_2
RocketTower_6F_OnResume_1:
	end

RocketTower_6F_OnResume_2:
# 12 "data/maps/RocketTower_6F/scripts.pory"
	call RocketTower_6F_EventScript_OpenElevator
	goto RocketTower_6F_OnResume_1


RocketTower_6F_EventScript_SetFloor6::
# 18 "data/maps/RocketTower_6F/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 6
	return


RocketTower_6F_EventScript_OpenElevator::
# 23 "data/maps/RocketTower_6F/scripts.pory"
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return


RocketTower_6F_EventScript_Door1::
# 28 "data/maps/RocketTower_6F/scripts.pory"
	lock
# 29 "data/maps/RocketTower_6F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CARD_KEY, RocketTower_6F_EventScript_Door1_2
# 39 "data/maps/RocketTower_6F/scripts.pory"
	msgbox RocketTower_6F_Text_DoorIsLocked
# 40 "data/maps/RocketTower_6F/scripts.pory"
	closemessage
RocketTower_6F_EventScript_Door1_1:
# 42 "data/maps/RocketTower_6F/scripts.pory"
	release
	end

RocketTower_6F_EventScript_Door1_2:
# 30 "data/maps/RocketTower_6F/scripts.pory"
	msgbox RocketTower_6F_Text_OpenDoor
# 31 "data/maps/RocketTower_6F/scripts.pory"
	closemessage
# 32 "data/maps/RocketTower_6F/scripts.pory"
	setmetatile 4, 9, METATILE_SilphCo_FloorShade, 0
# 33 "data/maps/RocketTower_6F/scripts.pory"
	setmetatile 4, 10, METATILE_SilphCo_FloorShade, 0
# 34 "data/maps/RocketTower_6F/scripts.pory"
	setmetatile 5, 9, METATILE_SilphCo_FloorLight, 0
# 35 "data/maps/RocketTower_6F/scripts.pory"
	setmetatile 5, 10, METATILE_SilphCo_FloorLight, 0
# 36 "data/maps/RocketTower_6F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 37 "data/maps/RocketTower_6F/scripts.pory"
	special DrawWholeMapView
	goto RocketTower_6F_EventScript_Door1_1


RocketTower_6F_Text_OpenDoor::
# 47 "data/maps/RocketTower_6F/scripts.pory"
	.string "Bingo!\n"
	.string "The CARD KEY opened the door!$"

RocketTower_6F_Text_DoorIsLocked::
# 51 "data/maps/RocketTower_6F/scripts.pory"
	.string "You need a CARD KEY to open this door!$"
