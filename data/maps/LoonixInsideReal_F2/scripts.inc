LoonixInsideReal_F2_MapScripts::
# 6 "data//maps/LoonixInsideReal_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data//maps/LoonixInsideReal_F2/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 12, LoonixInsideReal_F2_Script_MewNews
	.2byte 0


LoonixInsideReal_F2_Script_PC::
# 15 "data//maps/LoonixInsideReal_F2/scripts.pory"
	lockall
# 17 "data//maps/LoonixInsideReal_F2/scripts.pory"
	playse SE_PC_ON
# 18 "data//maps/LoonixInsideReal_F2/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 19 "data//maps/LoonixInsideReal_F2/scripts.pory"
	special BedroomPC
# 20 "data//maps/LoonixInsideReal_F2/scripts.pory"
	waitstate
# 21 "data//maps/LoonixInsideReal_F2/scripts.pory"
	releaseall
	end


LoonixInsideReal_F2_Script_PS2::
# 26 "data//maps/LoonixInsideReal_F2/scripts.pory"
	lock
# 27 "data//maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Script_PS2_Text_0
# 28 "data//maps/LoonixInsideReal_F2/scripts.pory"
	release
	end


LoonixInsideReal_F2_Script_Bed::
# 33 "data//maps/LoonixInsideReal_F2/scripts.pory"
	lockall
# 34 "data//maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_Bed, MSGBOX_YESNO
# 35 "data//maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixInsideReal_F2_Script_Bed_2
LoonixInsideReal_F2_Script_Bed_1:
# 50 "data//maps/LoonixInsideReal_F2/scripts.pory"
	releaseall
	end

LoonixInsideReal_F2_Script_Bed_2:
# 36 "data//maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 37 "data//maps/LoonixInsideReal_F2/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, LoonixInsideReal_F2_Script_Bed_4
# 44 "data//maps/LoonixInsideReal_F2/scripts.pory"
	playfanfare MUS_HEAL
# 45 "data//maps/LoonixInsideReal_F2/scripts.pory"
	fadescreen 1
# 46 "data//maps/LoonixInsideReal_F2/scripts.pory"
	waitfanfare
# 47 "data//maps/LoonixInsideReal_F2/scripts.pory"
	fadescreen 0
	goto LoonixInsideReal_F2_Script_Bed_1

LoonixInsideReal_F2_Script_Bed_4:
# 38 "data//maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_GRANNY_STATE, 11
	goto_if_ne LoonixInsideReal_F2_Script_Bed_7
# 41 "data//maps/LoonixInsideReal_F2/scripts.pory"
	call LoonixInsideReal_F2_Script_MewDream
	goto LoonixInsideReal_F2_Script_Bed_1

LoonixInsideReal_F2_Script_Bed_7:
# 39 "data//maps/LoonixInsideReal_F2/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto LoonixInsideReal_F2_Script_Bed_1


LoonixInsideReal_F2_Script_Book::
# 55 "data//maps/LoonixInsideReal_F2/scripts.pory"
	lock
# 56 "data//maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_Book, MSGBOX_SIGN
# 57 "data//maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 58 "data//maps/LoonixInsideReal_F2/scripts.pory"
	release
	end


LoonixInsideReal_F2_Script_TV::
# 63 "data//maps/LoonixInsideReal_F2/scripts.pory"
	lock
# 64 "data//maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_GRANNY_STATE, 13
	goto_if_ne LoonixInsideReal_F2_Script_TV_4
LoonixInsideReal_F2_Script_TV_3:
# 67 "data//maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_TV2, MSGBOX_DEFAULT
LoonixInsideReal_F2_Script_TV_1:
# 69 "data//maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 70 "data//maps/LoonixInsideReal_F2/scripts.pory"
	release
	end

LoonixInsideReal_F2_Script_TV_2:
# 65 "data//maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_TV1, MSGBOX_DEFAULT
	goto LoonixInsideReal_F2_Script_TV_1

LoonixInsideReal_F2_Script_TV_4:
# 64 "data//maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_GRANNY_STATE, 14
	goto_if_ne LoonixInsideReal_F2_Script_TV_2
	goto LoonixInsideReal_F2_Script_TV_3


LoonixInsideReal_F2_Script_MewDream::
# 75 "data//maps/LoonixInsideReal_F2/scripts.pory"
	warpsilent MAP_LOONIX_SNOW, 10, 10
# 77 "data//maps/LoonixInsideReal_F2/scripts.pory"
	waitstate
	return


LoonixInsideReal_F2_Script_MewNews::
# 82 "data//maps/LoonixInsideReal_F2/scripts.pory"
	lockall
# 83 "data//maps/LoonixInsideReal_F2/scripts.pory"
	setvar VAR_GRANNY_STATE, 13
# 85 "data//maps/LoonixInsideReal_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 86 "data//maps/LoonixInsideReal_F2/scripts.pory"
	waitmovement 0
# 88 "data//maps/LoonixInsideReal_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_F2_Movement_PlayerToTV
# 89 "data//maps/LoonixInsideReal_F2/scripts.pory"
	waitmovement 0
# 91 "data//maps/LoonixInsideReal_F2/scripts.pory"
	load_field_pic 32, 190, 98
# 92 "data//maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_MewNews
# 93 "data//maps/LoonixInsideReal_F2/scripts.pory"
	destroy_field_pic 32
# 94 "data//maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 96 "data//maps/LoonixInsideReal_F2/scripts.pory"
	release
	end


# 100 "data//maps/LoonixInsideReal_F2/scripts.pory"
LoonixInsideReal_F2_Movement_PlayerToTV:
# 101 "data//maps/LoonixInsideReal_F2/scripts.pory"
	walk_right
# 101 "data//maps/LoonixInsideReal_F2/scripts.pory"
	walk_right
# 101 "data//maps/LoonixInsideReal_F2/scripts.pory"
	walk_right
# 102 "data//maps/LoonixInsideReal_F2/scripts.pory"
	walk_up
# 102 "data//maps/LoonixInsideReal_F2/scripts.pory"
	walk_up
# 102 "data//maps/LoonixInsideReal_F2/scripts.pory"
	walk_up
	step_end

LoonixInsideReal_F2_Script_PS2_Text_0:
# 27 "data//maps/LoonixInsideReal_F2/scripts.pory"
	.string "It's your PS2 and your favorite\n"
	.string "game,Star Wars Battlefront 2!$"

LoonixInsideReal_F2_Text_Bed::
# 105 "data//maps/LoonixInsideReal_F2/scripts.pory"
	.string "It's your old bed!\p"
	.string "Would you like to take a rest?$"

LoonixInsideReal_F2_Text_Book::
# 109 "data//maps/LoonixInsideReal_F2/scripts.pory"
	.string "ARMA VIRUMQUE CANO...\n"
	.string "What does this even mean?$"

LoonixInsideReal_F2_Text_TV1::
# 113 "data//maps/LoonixInsideReal_F2/scripts.pory"
	.string "There's never anything interesting on\n"
	.string "TV. Better go!$"

LoonixInsideReal_F2_Text_TV2::
# 117 "data//maps/LoonixInsideReal_F2/scripts.pory"
	.string "The news people are interviewing\n"
	.string "townspeople of Clara City about what\l"
	.string "they say they saw last night.$"

LoonixInsideReal_F2_Text_MewNews::
# 121 "data//maps/LoonixInsideReal_F2/scripts.pory"
	.string "In an unusual turn of events several\n"
	.string "cities in the upstate region are\l"
	.string "reporting sightings of a strange being\l"
	.string "last night during a thunderstorm. The\l"
	.string "sightings, which began last night, have\l"
	.string "captured the attention of both\l"
	.string "residents and local authorities.\l"
	.string "Eyewitnesses in Clara reported seeing a\l"
	.string "small pink creature, possibly a Pokemon,\l"
	.string "appearing over the city, in the streets,\l"
	.string "and even inside their houses. The\l"
	.string "Rocket Party has issued a statement\l"
	.string "acknowledging the reports but\l"
	.string "refrained from speculation on the\l"
	.string "nature of the objects. 'We are\l"
	.string "monitoring the situation closely.\l"
	.string "Currently there is no threat to public\l"
	.string "safety, but we do advise the general\l"
	.string "public to avoid the area around the\l"
	.string "Church and City of Clara while the\l"
	.string "investigation remains open.' noted one\l"
	.string "party boss. Stay tuned for more\l"
	.string "updates as this story develops, and now\l"
	.string "a word from our sponsors...$"
