LoonixInsideReal_F2_MapScripts::
# 5 "data/maps/LoonixInsideReal_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/LoonixInsideReal_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_GRANNY_STATE, 11
	goto_if_eq LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/LoonixInsideReal_F2/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return

LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/LoonixInsideReal_F2/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 12, LoonixInsideReal_F2_Script_MewNews
	.2byte 0


LoonixInsideReal_F2_Script_PC::
# 20 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lockall
# 22 "data/maps/LoonixInsideReal_F2/scripts.pory"
	playse SE_PC_ON
# 23 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 24 "data/maps/LoonixInsideReal_F2/scripts.pory"
	special BedroomPC
# 25 "data/maps/LoonixInsideReal_F2/scripts.pory"
	waitstate
# 26 "data/maps/LoonixInsideReal_F2/scripts.pory"
	releaseall
	end


LoonixInsideReal_F2_Script_PS2::
# 31 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lock
# 32 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Script_PS2_Text_0
# 33 "data/maps/LoonixInsideReal_F2/scripts.pory"
	release
	end


LoonixInsideReal_F2_Script_Bed::
# 38 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lockall
# 39 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_Bed, MSGBOX_YESNO
# 40 "data/maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixInsideReal_F2_Script_Bed_2
LoonixInsideReal_F2_Script_Bed_1:
# 55 "data/maps/LoonixInsideReal_F2/scripts.pory"
	releaseall
	end

LoonixInsideReal_F2_Script_Bed_2:
# 41 "data/maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 42 "data/maps/LoonixInsideReal_F2/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, LoonixInsideReal_F2_Script_Bed_4
# 49 "data/maps/LoonixInsideReal_F2/scripts.pory"
	playfanfare MUS_HEAL
# 50 "data/maps/LoonixInsideReal_F2/scripts.pory"
	fadescreen 1
# 51 "data/maps/LoonixInsideReal_F2/scripts.pory"
	waitfanfare
# 52 "data/maps/LoonixInsideReal_F2/scripts.pory"
	fadescreen 0
	goto LoonixInsideReal_F2_Script_Bed_1

LoonixInsideReal_F2_Script_Bed_4:
# 43 "data/maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_GRANNY_STATE, 11
	goto_if_ne LoonixInsideReal_F2_Script_Bed_7
# 46 "data/maps/LoonixInsideReal_F2/scripts.pory"
	call LoonixInsideReal_F2_Script_MewDream
	goto LoonixInsideReal_F2_Script_Bed_1

LoonixInsideReal_F2_Script_Bed_7:
# 44 "data/maps/LoonixInsideReal_F2/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto LoonixInsideReal_F2_Script_Bed_1


LoonixInsideReal_F2_Script_Book::
# 60 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lock
# 61 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_Book, MSGBOX_SIGN
# 62 "data/maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 63 "data/maps/LoonixInsideReal_F2/scripts.pory"
	release
	end


LoonixInsideReal_F2_Script_TV::
# 68 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lock
# 69 "data/maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_GRANNY_STATE, 13
	goto_if_ne LoonixInsideReal_F2_Script_TV_4
LoonixInsideReal_F2_Script_TV_3:
# 72 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_TV2, MSGBOX_DEFAULT
LoonixInsideReal_F2_Script_TV_1:
# 74 "data/maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 75 "data/maps/LoonixInsideReal_F2/scripts.pory"
	release
	end

LoonixInsideReal_F2_Script_TV_2:
# 70 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_TV1, MSGBOX_DEFAULT
	goto LoonixInsideReal_F2_Script_TV_1

LoonixInsideReal_F2_Script_TV_4:
# 69 "data/maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_GRANNY_STATE, 14
	goto_if_ne LoonixInsideReal_F2_Script_TV_2
	goto LoonixInsideReal_F2_Script_TV_3


LoonixInsideReal_F2_Script_MewDream::
# 80 "data/maps/LoonixInsideReal_F2/scripts.pory"
	warpsilent MAP_LOONIX_SNOW, 10, 10
# 82 "data/maps/LoonixInsideReal_F2/scripts.pory"
	waitstate
	return


LoonixInsideReal_F2_Script_MewNews::
# 87 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lockall
# 88 "data/maps/LoonixInsideReal_F2/scripts.pory"
	setvar VAR_GRANNY_STATE, 13
# 90 "data/maps/LoonixInsideReal_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 91 "data/maps/LoonixInsideReal_F2/scripts.pory"
	waitmovement 0
# 93 "data/maps/LoonixInsideReal_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_F2_Movement_PlayerToTV
# 94 "data/maps/LoonixInsideReal_F2/scripts.pory"
	waitmovement 0
# 96 "data/maps/LoonixInsideReal_F2/scripts.pory"
	load_field_pic 32, 190, 98
# 97 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_MewNews
# 98 "data/maps/LoonixInsideReal_F2/scripts.pory"
	destroy_field_pic 32
# 99 "data/maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 101 "data/maps/LoonixInsideReal_F2/scripts.pory"
	release
	end


# 105 "data/maps/LoonixInsideReal_F2/scripts.pory"
LoonixInsideReal_F2_Movement_PlayerToTV:
# 106 "data/maps/LoonixInsideReal_F2/scripts.pory"
	walk_right
# 106 "data/maps/LoonixInsideReal_F2/scripts.pory"
	walk_right
# 106 "data/maps/LoonixInsideReal_F2/scripts.pory"
	walk_right
# 107 "data/maps/LoonixInsideReal_F2/scripts.pory"
	walk_up
# 107 "data/maps/LoonixInsideReal_F2/scripts.pory"
	walk_up
# 107 "data/maps/LoonixInsideReal_F2/scripts.pory"
	walk_up
	step_end

LoonixInsideReal_F2_Script_PS2_Text_0:
# 32 "data/maps/LoonixInsideReal_F2/scripts.pory"
	.string "It's your PS2 and your favorite\n"
	.string "game,Star Wars Battlefront 2!$"

LoonixInsideReal_F2_Text_Bed::
# 110 "data/maps/LoonixInsideReal_F2/scripts.pory"
	.string "It's your old bed!\p"
	.string "Would you like to take a rest?$"

LoonixInsideReal_F2_Text_Book::
# 114 "data/maps/LoonixInsideReal_F2/scripts.pory"
	.string "ARMA VIRUMQUE CANO...\n"
	.string "What does this even mean?$"

LoonixInsideReal_F2_Text_TV1::
# 118 "data/maps/LoonixInsideReal_F2/scripts.pory"
	.string "There's never anything interesting on\n"
	.string "TV. Better go!$"

LoonixInsideReal_F2_Text_TV2::
# 122 "data/maps/LoonixInsideReal_F2/scripts.pory"
	.string "The news people are interviewing\n"
	.string "townspeople of Clara City about what\l"
	.string "they say they saw last night.$"

LoonixInsideReal_F2_Text_MewNews::
# 126 "data/maps/LoonixInsideReal_F2/scripts.pory"
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
