RocketTower_13F_MapScripts::
	.byte 0


RocketTower_13F_EventScript_CheckPC::
	lockall
	setvar VAR_0x8004, 3
	special DoPCTurnOnEffect
	playse SE_PC_ON
	goto EventScript_PCMainMenu
	waitstate
	releaseall
	end


RocketTower_13F_EventScript_GioTrigger1::
	lock
	setvar VAR_ROCKETTOWER_STATE, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	call RocketTower_13F_EventScript_GioCutscene
	release
	end


RocketTower_13F_EventScript_GioCutscene::
	load_field_pic 10, 190, 98
	msgbox RocketTower_13F_Text_Gio1
	destroy_field_pic 10
	closemessage
	load_field_pic 7, 190, 98
	msgbox RocketTower_13F_Text_Blaine1
	destroy_field_pic 7
	closemessage
	load_field_pic 10, 190, 98
	msgbox RocketTower_13F_Text_Gio2
	destroy_field_pic 10
	closemessage
	return


RocketTower_13F_Text_Gio1::
	.string "We stand upon the brink of destruction\n"
	.string "all of our plans will fail if we don't act$"

RocketTower_13F_Text_Blaine1::
	.string "But sir Mewtwo has not proven himself\n"
	.string "in any battle$"

RocketTower_13F_Text_Gio2::
	.string "Blaine we have no choice. The city guard\n"
	.string "has already fallen, the capital itself\l"
	.string "is under siege, and this report\l"
	.string "suggests our own tower has been\l"
	.string "penetrated by rebel spies.$"
