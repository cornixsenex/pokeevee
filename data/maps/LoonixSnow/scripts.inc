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
	load_field_pic 48, 190, 98
# 53 "data/maps/LoonixSnow/scripts.pory"
	msgbox LoonixSnow_Script_TestFieldPic_Text_0
# 54 "data/maps/LoonixSnow/scripts.pory"
	destroy_field_pic 48
# 55 "data/maps/LoonixSnow/scripts.pory"
	closemessage
	end


LoonixSnow_Script_TestFieldPic_Text_0:
# 53 "data/maps/LoonixSnow/scripts.pory"
	.string "TEST$"
