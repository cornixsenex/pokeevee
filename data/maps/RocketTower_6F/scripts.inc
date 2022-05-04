RocketTower_6F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_6F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_6F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call RocketTower_6F_OnResume
	return


RocketTower_6F_OnResume::
	call RocketTower_6F_EventScript_SetFloor6
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_6F_OnResume_2
RocketTower_6F_OnResume_1:
	end

RocketTower_6F_OnResume_2:
	call RocketTower_6F_EventScript_OpenElevator
	goto RocketTower_6F_OnResume_1


RocketTower_6F_EventScript_SetFloor6::
	setvar VAR_ROCKETTOWER_FLOOR, 6
	return


RocketTower_6F_EventScript_OpenElevator::
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return


RocketTower_6F_EventScript_Door1::
	lock
	goto_if_set FLAG_RECEIVED_CARD_KEY, RocketTower_6F_EventScript_Door1_2
	msgbox RocketTower_6F_Text_DoorIsLocked
	closemessage
RocketTower_6F_EventScript_Door1_1:
	release
	end

RocketTower_6F_EventScript_Door1_2:
	msgbox RocketTower_6F_Text_OpenDoor
	closemessage
	setmetatile 4, 9, METATILE_SilphCo_FloorShade, 0
	setmetatile 4, 10, METATILE_SilphCo_FloorShade, 0
	setmetatile 5, 9, METATILE_SilphCo_FloorLight, 0
	setmetatile 5, 10, METATILE_SilphCo_FloorLight, 0
	playfanfare MUS_LEVEL_UP
	special DrawWholeMapView
	goto RocketTower_6F_EventScript_Door1_1


RocketTower_6F_Text_OpenDoor::
	.string "Bingo!\n"
	.string "The CARD KEY opened the door!$"

RocketTower_6F_Text_DoorIsLocked::
	.string "You need a CARD KEY to open this door!$"
