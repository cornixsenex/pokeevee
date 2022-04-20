RocketTower_6F_MapScripts::
	.byte 0


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
