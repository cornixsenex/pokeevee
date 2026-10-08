LoonixSnow_MapScripts::
# 6 "data/maps/LoonixSnow/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LoonixSnow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 10 "data/maps/LoonixSnow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LoonixSnow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LoonixSnow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/LoonixSnow/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 11, LoonixSnow_EventScript_HidePlayer
	.2byte 0

LoonixSnow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/LoonixSnow/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 11, LoonixSnow_Script_MewDream
	.2byte 0


LoonixSnow_EventScript_HidePlayer::
# 17 "data/maps/LoonixSnow/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LOONIX_SNOW
# 18 "data/maps/LoonixSnow/scripts.pory"
	hideobjectat OBJ_EVENT_ID_FOLLOWER, MAP_LOONIX_SNOW
	end


LoonixSnow_Script_MewDream::
# 23 "data/maps/LoonixSnow/scripts.pory"
	lockall
# 24 "data/maps/LoonixSnow/scripts.pory"
	setvar VAR_GRANNY_STATE, 12
# 26 "data/maps/LoonixSnow/scripts.pory"
	playfanfare MUS_HEAL
# 27 "data/maps/LoonixSnow/scripts.pory"
	waitfanfare
# 28 "data/maps/LoonixSnow/scripts.pory"
	special HealPlayerParty
# 29 "data/maps/LoonixSnow/scripts.pory"
	callnative UpdateFollowingPokemon
# 31 "data/maps/LoonixSnow/scripts.pory"
	setobjectxyperm 1, 10, 10
# 32 "data/maps/LoonixSnow/scripts.pory"
	addobject 1
# 33 "data/maps/LoonixSnow/scripts.pory"
	showobjectat 1, MAP_LOONIX_SNOW
# 35 "data/maps/LoonixSnow/scripts.pory"
	delay 69
# 37 "data/maps/LoonixSnow/scripts.pory"
	load_field_pic 31, 120, 80
# 38 "data/maps/LoonixSnow/scripts.pory"
	delay 69
# 39 "data/maps/LoonixSnow/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 40 "data/maps/LoonixSnow/scripts.pory"
	waitmoncry
# 41 "data/maps/LoonixSnow/scripts.pory"
	delay 69
# 42 "data/maps/LoonixSnow/scripts.pory"
	destroy_field_pic 31
# 43 "data/maps/LoonixSnow/scripts.pory"
	warpsilent MAP_LOONIX_INSIDE_REAL_F2, 1, 5
# 45 "data/maps/LoonixSnow/scripts.pory"
	waitstate
# 46 "data/maps/LoonixSnow/scripts.pory"
	releaseall
	end

