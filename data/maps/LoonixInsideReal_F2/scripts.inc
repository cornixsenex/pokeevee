LoonixInsideReal_F2_MapScripts::
	.byte 0


LoonixInsideReal_F2_EventScript_PC::
	lockall
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end


LoonixInsideReal_F2_EventScript_PS2::
	lock
	msgbox LoonixInsideReal_F2_EventScript_PS2_Text_0
	release
	end


LoonixInsideReal_F2_EventScript_PS2_Text_0:
	.string "It's your PS2 and your favorite\n"
	.string "game,Star Wars Battlefront 2!$"
