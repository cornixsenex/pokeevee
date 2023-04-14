SaltySpitoon_2F_MapScripts::
	.byte 0


SaltySpitoon_2F_EventScript_LockDoor::
	setvar VAR_GANG_STATE, 6
	setmetatile 17, 1, METATILE_BrendansMaysHouse_StairsDown, 1
	msgbox SaltySpitoon_2F_Text_LockDoor
	closemessage
	playse SE_PIN
	waitse
	end


SaltySpitoon_2F_EventScript_DoorSign::
	lock
	msgbox SaltySpitoon_2F_Text_DoorSign
	closemessage
	release
	end


SaltySpitoon_2F_Text_LockDoor::
	.string "The door locks behind you.$"

SaltySpitoon_2F_Text_DoorSign::
	.string "The door is locked.$"
