LoonixInsideReal_F2_MapScripts::
# 5 "data/maps/LoonixInsideReal_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/LoonixInsideReal_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_GRANNY_STATE, 11
	goto_if_eq LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 9 "data/maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_GRANNY_STATE, 12
	goto_if_eq LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/LoonixInsideReal_F2/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return

LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/LoonixInsideReal_F2/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
	return

LoonixInsideReal_F2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/LoonixInsideReal_F2/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 12, LoonixInsideReal_F2_Script_MewNews
	.2byte 0


LoonixInsideReal_F2_Script_PC::
# 23 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lockall
# 25 "data/maps/LoonixInsideReal_F2/scripts.pory"
	playse SE_PC_ON
# 26 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 27 "data/maps/LoonixInsideReal_F2/scripts.pory"
	special BedroomPC
# 28 "data/maps/LoonixInsideReal_F2/scripts.pory"
	waitstate
# 29 "data/maps/LoonixInsideReal_F2/scripts.pory"
	releaseall
	end


LoonixInsideReal_F2_Script_PS2::
# 34 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lock
# 35 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Script_PS2_Text_0
# 36 "data/maps/LoonixInsideReal_F2/scripts.pory"
	release
	end


LoonixInsideReal_F2_Script_Bed::
# 41 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lockall
# 42 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_Bed, MSGBOX_YESNO
# 43 "data/maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixInsideReal_F2_Script_Bed_2
LoonixInsideReal_F2_Script_Bed_1:
# 58 "data/maps/LoonixInsideReal_F2/scripts.pory"
	releaseall
	end

LoonixInsideReal_F2_Script_Bed_2:
# 44 "data/maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 45 "data/maps/LoonixInsideReal_F2/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, LoonixInsideReal_F2_Script_Bed_4
# 52 "data/maps/LoonixInsideReal_F2/scripts.pory"
	playfanfare MUS_HEAL
# 53 "data/maps/LoonixInsideReal_F2/scripts.pory"
	fadescreen 1
# 54 "data/maps/LoonixInsideReal_F2/scripts.pory"
	waitfanfare
# 55 "data/maps/LoonixInsideReal_F2/scripts.pory"
	fadescreen 0
	goto LoonixInsideReal_F2_Script_Bed_1

LoonixInsideReal_F2_Script_Bed_4:
# 46 "data/maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_GRANNY_STATE, 11
	goto_if_ne LoonixInsideReal_F2_Script_Bed_7
# 49 "data/maps/LoonixInsideReal_F2/scripts.pory"
	call LoonixInsideReal_F2_Script_MewDream
	goto LoonixInsideReal_F2_Script_Bed_1

LoonixInsideReal_F2_Script_Bed_7:
# 47 "data/maps/LoonixInsideReal_F2/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto LoonixInsideReal_F2_Script_Bed_1


LoonixInsideReal_F2_Script_Book::
# 63 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lock
# 64 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_Book, MSGBOX_SIGN
# 65 "data/maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 66 "data/maps/LoonixInsideReal_F2/scripts.pory"
	release
	end


LoonixInsideReal_F2_Script_TV::
# 71 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lock
# 72 "data/maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_GRANNY_STATE, 13
	goto_if_ne LoonixInsideReal_F2_Script_TV_4
LoonixInsideReal_F2_Script_TV_3:
# 75 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_TV2, MSGBOX_DEFAULT
LoonixInsideReal_F2_Script_TV_1:
# 77 "data/maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 78 "data/maps/LoonixInsideReal_F2/scripts.pory"
	release
	end

LoonixInsideReal_F2_Script_TV_2:
# 73 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_TV1, MSGBOX_DEFAULT
	goto LoonixInsideReal_F2_Script_TV_1

LoonixInsideReal_F2_Script_TV_4:
# 72 "data/maps/LoonixInsideReal_F2/scripts.pory"
	compare VAR_GRANNY_STATE, 14
	goto_if_ne LoonixInsideReal_F2_Script_TV_2
	goto LoonixInsideReal_F2_Script_TV_3


LoonixInsideReal_F2_Script_MewDream::
# 83 "data/maps/LoonixInsideReal_F2/scripts.pory"
	warpsilent MAP_LOONIX_SNOW, 10, 10
# 85 "data/maps/LoonixInsideReal_F2/scripts.pory"
	waitstate
	return


LoonixInsideReal_F2_Script_MewNews::
# 90 "data/maps/LoonixInsideReal_F2/scripts.pory"
	lockall
# 91 "data/maps/LoonixInsideReal_F2/scripts.pory"
	setvar VAR_GRANNY_STATE, 13
# 93 "data/maps/LoonixInsideReal_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 94 "data/maps/LoonixInsideReal_F2/scripts.pory"
	waitmovement 0
# 96 "data/maps/LoonixInsideReal_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_F2_Movement_PlayerToTV
# 97 "data/maps/LoonixInsideReal_F2/scripts.pory"
	waitmovement 0
# 99 "data/maps/LoonixInsideReal_F2/scripts.pory"
	load_field_pic 32, 190, 98
# 100 "data/maps/LoonixInsideReal_F2/scripts.pory"
	msgbox LoonixInsideReal_F2_Text_MewNews
# 101 "data/maps/LoonixInsideReal_F2/scripts.pory"
	destroy_field_pic 32
# 102 "data/maps/LoonixInsideReal_F2/scripts.pory"
	closemessage
# 104 "data/maps/LoonixInsideReal_F2/scripts.pory"
	playbgm MUS_LITTLEROOT, TRUE
# 106 "data/maps/LoonixInsideReal_F2/scripts.pory"
	release
	end


# 110 "data/maps/LoonixInsideReal_F2/scripts.pory"
LoonixInsideReal_F2_Movement_PlayerToTV:
# 111 "data/maps/LoonixInsideReal_F2/scripts.pory"
	walk_right
# 111 "data/maps/LoonixInsideReal_F2/scripts.pory"
	walk_right
# 111 "data/maps/LoonixInsideReal_F2/scripts.pory"
	walk_right
# 112 "data/maps/LoonixInsideReal_F2/scripts.pory"
	walk_up
# 112 "data/maps/LoonixInsideReal_F2/scripts.pory"
	walk_up
# 112 "data/maps/LoonixInsideReal_F2/scripts.pory"
	walk_up
	step_end

LoonixInsideReal_F2_Script_PS2_Text_0:
# 35 "data/maps/LoonixInsideReal_F2/scripts.pory"
	.string "It's your PS2 and your favorite\n"
	.string "game,Star Wars Battlefront 2!$"

LoonixInsideReal_F2_Text_Bed::
# 115 "data/maps/LoonixInsideReal_F2/scripts.pory"
	.string "It's your old bed!\p"
	.string "Would you like to take a rest?$"

LoonixInsideReal_F2_Text_Book::
# 119 "data/maps/LoonixInsideReal_F2/scripts.pory"
	.string "ARMA VIRUMQUE CANO...\n"
	.string "What does this even mean?$"

LoonixInsideReal_F2_Text_TV1::
# 123 "data/maps/LoonixInsideReal_F2/scripts.pory"
	.string "There's never anything interesting on\n"
	.string "TV. Better go!$"

LoonixInsideReal_F2_Text_TV2::
# 127 "data/maps/LoonixInsideReal_F2/scripts.pory"
	.string "The news people are interviewing\n"
	.string "townspeople of Clara City about what\l"
	.string "they say they saw last night.$"

LoonixInsideReal_F2_Text_MewNews::
# 131 "data/maps/LoonixInsideReal_F2/scripts.pory"
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
