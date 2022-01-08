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


LoonixInsideReal_F2_EventScript_Bed::
	lockall
	msgbox LoonixInsideReal_F2_Text_Bed, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LoonixInsideReal_F2_EventScript_Bed_2
LoonixInsideReal_F2_EventScript_Bed_1:
	releaseall
	end

LoonixInsideReal_F2_EventScript_Bed_2:
	closemessage
	goto_if_set FLAG_SYS_POKEMON_GET, LoonixInsideReal_F2_EventScript_Bed_4
	playfanfare MUS_HEAL
	fadescreen 1
	waitfanfare
	fadescreen 0
	goto LoonixInsideReal_F2_EventScript_Bed_1

LoonixInsideReal_F2_EventScript_Bed_4:
	call Common_EventScript_OutOfCenterPartyHeal
	goto LoonixInsideReal_F2_EventScript_Bed_1


LoonixInsideReal_F2_EventScript_PS2_Text_0:
	.string "It's your PS2 and your favorite\n"
	.string "game,Star Wars Battlefront 2!$"

LoonixInsideReal_F2_Text_Bed::
	.string "It's your old bed!\p"
	.string "Would you like to take a rest?$"
