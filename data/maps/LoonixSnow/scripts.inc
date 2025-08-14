LoonixSnow_MapScripts::
# 7 "data/maps/LoonixSnow/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LoonixSnow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 11 "data/maps/LoonixSnow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LoonixSnow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LoonixSnow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 8 "data/maps/LoonixSnow/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 11, LoonixSnow_EventScript_HidePlayer
	.2byte 0

LoonixSnow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/LoonixSnow/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 11, LoonixSnow_Script_MewDream
	.2byte 0


LoonixSnow_EventScript_HidePlayer::
# 18 "data/maps/LoonixSnow/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LOONIX_SNOW
# 19 "data/maps/LoonixSnow/scripts.pory"
	hideobjectat OBJ_EVENT_ID_FOLLOWER, MAP_LOONIX_SNOW
	end


LoonixSnow_Script_MewDream::
# 24 "data/maps/LoonixSnow/scripts.pory"
	lockall
# 25 "data/maps/LoonixSnow/scripts.pory"
	setvar VAR_GRANNY_STATE, 12
# 27 "data/maps/LoonixSnow/scripts.pory"
	playfanfare MUS_HEAL
# 28 "data/maps/LoonixSnow/scripts.pory"
	waitfanfare
# 29 "data/maps/LoonixSnow/scripts.pory"
	special HealPlayerParty
# 30 "data/maps/LoonixSnow/scripts.pory"
	callnative UpdateFollowingPokemon
# 32 "data/maps/LoonixSnow/scripts.pory"
	setobjectxyperm 1, 10, 10
# 33 "data/maps/LoonixSnow/scripts.pory"
	addobject 1
# 34 "data/maps/LoonixSnow/scripts.pory"
	showobjectat 1, MAP_LOONIX_SNOW
# 36 "data/maps/LoonixSnow/scripts.pory"
	delay 69
# 38 "data/maps/LoonixSnow/scripts.pory"
	load_field_pic 31, 120, 80
# 39 "data/maps/LoonixSnow/scripts.pory"
	delay 69
# 40 "data/maps/LoonixSnow/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 41 "data/maps/LoonixSnow/scripts.pory"
	waitmoncry
# 42 "data/maps/LoonixSnow/scripts.pory"
	delay 69
# 43 "data/maps/LoonixSnow/scripts.pory"
	destroy_field_pic 31
# 44 "data/maps/LoonixSnow/scripts.pory"
	warpsilent MAP_LOONIX_INSIDE_REAL_F2, 1, 5
# 46 "data/maps/LoonixSnow/scripts.pory"
	waitstate
# 47 "data/maps/LoonixSnow/scripts.pory"
	releaseall
	end


LoonixSnow_Script_TestFieldPic::
# 52 "data/maps/LoonixSnow/scripts.pory"
	load_field_pic 64, 190, 98
# 53 "data/maps/LoonixSnow/scripts.pory"
	msgbox LoonixSnow_Script_TestFieldPic_Text_0
# 54 "data/maps/LoonixSnow/scripts.pory"
	destroy_field_pic 64
# 55 "data/maps/LoonixSnow/scripts.pory"
	closemessage
	end


LoonixSnow_Script_TestAgatha::
# 61 "data/maps/LoonixSnow/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 62 "data/maps/LoonixSnow/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/LoonixSnow/scripts.pory"
	case DIR_NORTH, LoonixSnow_Script_TestAgatha_3
# 65 "data/maps/LoonixSnow/scripts.pory"
	case DIR_SOUTH, LoonixSnow_Script_TestAgatha_4
# 67 "data/maps/LoonixSnow/scripts.pory"
	case DIR_WEST, LoonixSnow_Script_TestAgatha_5
# 69 "data/maps/LoonixSnow/scripts.pory"
	case DIR_EAST, LoonixSnow_Script_TestAgatha_6
LoonixSnow_Script_TestAgatha_1:
# 72 "data/maps/LoonixSnow/scripts.pory"
	waitmovement 0
# 73 "data/maps/LoonixSnow/scripts.pory"
	load_field_pic 59, 190, 98
# 74 "data/maps/LoonixSnow/scripts.pory"
	msgbox LoonixSnow_Script_TestFieldPic_Text_0
# 75 "data/maps/LoonixSnow/scripts.pory"
	destroy_field_pic 59
# 76 "data/maps/LoonixSnow/scripts.pory"
	closemessage
	end

LoonixSnow_Script_TestAgatha_3:
# 64 "data/maps/LoonixSnow/scripts.pory"
	applymovement LOCALID_LOONIXSNOW_AGATHA, Common_Movement_FaceDown
	goto LoonixSnow_Script_TestAgatha_1

LoonixSnow_Script_TestAgatha_4:
# 66 "data/maps/LoonixSnow/scripts.pory"
	applymovement LOCALID_LOONIXSNOW_AGATHA, Common_Movement_FaceUp
	goto LoonixSnow_Script_TestAgatha_1

LoonixSnow_Script_TestAgatha_5:
# 68 "data/maps/LoonixSnow/scripts.pory"
	applymovement LOCALID_LOONIXSNOW_AGATHA, Common_Movement_FaceRight
	goto LoonixSnow_Script_TestAgatha_1

LoonixSnow_Script_TestAgatha_6:
# 70 "data/maps/LoonixSnow/scripts.pory"
	applymovement LOCALID_LOONIXSNOW_AGATHA, Common_Movement_FaceLeft
	goto LoonixSnow_Script_TestAgatha_1


LoonixSnow_Script_TestFieldPic_Text_0:
# 53 "data/maps/LoonixSnow/scripts.pory"
	.string "TEST$"
