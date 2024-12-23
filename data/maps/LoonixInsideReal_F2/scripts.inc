LoonixInsideReal_F2_MapScripts::
	.byte 0


LoonixInsideReal_F2_Script_PC::
# 6 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lockall
# 8 "data/maps/LoonixInsideReal_F2/scripts.pory"
	playse SE_PC_ON
# 9 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 10 "data/maps/LoonixInsideReal_F2/scripts.pory"
	special BedroomPC
# 11 "data/maps/LoonixInsideReal_F2/scripts.pory"
	waitstate
# 12 "data/maps/LoonixInsideReal_F2/scripts.pory"
	releaseall
	end


LoonixInsideReal_F2_Script_PS2::
# 17 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lock
# 18 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Script_PS2_Text_0
# 19 "data/maps/LoonixInsideReal_F2/scripts.pory"
	release
	end


LoonixInsideReal_F2_Script_Bed::
# 24 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lockall
# 25 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_Bed, MSGBOX_YESNO
# 26 "data/maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixInsideReal_F2_Script_Bed_2
LoonixInsideReal_F2_Script_Bed_1:
# 37 "data/maps/LoonixInsideReal_F2/scripts.pory"
	releaseall
	end

LoonixInsideReal_F2_Script_Bed_2:
# 27 "data/maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 28 "data/maps/LoonixInsideReal_F2/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, LoonixInsideReal_F2_Script_Bed_4
# 31 "data/maps/LoonixInsideReal_F2/scripts.pory"
	playfanfare MUS_HEAL
# 32 "data/maps/LoonixInsideReal_F2/scripts.pory"
	fadescreen 1
# 33 "data/maps/LoonixInsideReal_F2/scripts.pory"
	waitfanfare
# 34 "data/maps/LoonixInsideReal_F2/scripts.pory"
	fadescreen 0
	goto LoonixInsideReal_F2_Script_Bed_1

LoonixInsideReal_F2_Script_Bed_4:
# 29 "data/maps/LoonixInsideReal_F2/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto LoonixInsideReal_F2_Script_Bed_1


LoonixInsideReal_F2_Script_Book::
# 42 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lock
# 43 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_Book, MSGBOX_SIGN
# 44 "data/maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 45 "data/maps/LoonixInsideReal_F2/scripts.pory"
	release
	end


LoonixInsideReal_F2_Script_PS2_Text_0:
# 18 "data/maps/LoonixInsideReal_F2/scripts.pory"
	.string "It's your PS2 and your favorite\n"
	.string "game,Star Wars Battlefront 2!$"

LoonixInsideReal_F2_Text_Bed::
# 49 "data/maps/LoonixInsideReal_F2/scripts.pory"
	.string "It's your old bed!\p"
	.string "Would you like to take a rest?$"

LoonixInsideReal_F2_Text_Book::
# 53 "data/maps/LoonixInsideReal_F2/scripts.pory"
	.string "ARMA VIRUMQUE CANO...\n"
	.string "What does this even mean?$"
