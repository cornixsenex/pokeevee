Palmae_RentalHouse_MapScripts::
# 8 "data//maps/Palmae_RentalHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data//maps/Palmae_RentalHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data//maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_UNI_STATE, 10
	goto_if_lt Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 14 "data//maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_ShowLeaf
	return

Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data//maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_ShowLandlady
	return

Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 20 "data//maps/Palmae_RentalHouse/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Palmae_RentalHouse_Script_FaceLandlady
	.2byte 0


Palmae_RentalHouse_Script_ShowLandlady::
# 26 "data//maps/Palmae_RentalHouse/scripts.pory"
	setobjectxyperm 2, 11, 4
# 27 "data//maps/Palmae_RentalHouse/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
	end


Palmae_RentalHouse_Script_ShowLeaf::
# 32 "data//maps/Palmae_RentalHouse/scripts.pory"
	setobjectxyperm 1, 5, 5
# 33 "data//maps/Palmae_RentalHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 35 "data//maps/Palmae_RentalHouse/scripts.pory"
	setobjectxyperm 3, 5, 4
# 36 "data//maps/Palmae_RentalHouse/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	end


Palmae_RentalHouse_Script_FaceLandlady::
# 41 "data//maps/Palmae_RentalHouse/scripts.pory"
	turnobject 2, DIR_EAST
	end


Palmae_RentalHouse_Script_Leaf::
# 46 "data//maps/Palmae_RentalHouse/scripts.pory"
	lock
# 47 "data//maps/Palmae_RentalHouse/scripts.pory"
	faceplayer
# 50 "data//maps/Palmae_RentalHouse/scripts.pory"
	checkitem ITEM_MEWRA_SIGIL
# 51 "data//maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Palmae_RentalHouse_Script_Leaf_2
Palmae_RentalHouse_Script_Leaf_1:
# 60 "data//maps/Palmae_RentalHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 61 "data//maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 63 "data//maps/Palmae_RentalHouse/scripts.pory"
	release
	end

Palmae_RentalHouse_Script_Leaf_2:
# 52 "data//maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf1
# 53 "data//maps/Palmae_RentalHouse/scripts.pory"
	closemessage
	goto Palmae_RentalHouse_Script_Leaf_1


Palmae_RentalHouse_Text_Leaf1::
# 67 "data//maps/Palmae_RentalHouse/scripts.pory"
	.string "This house may not be much, but still I'm\n"
	.string "proud to have a place to call my home.\l"
	.string "It's not easy for a single woman in this\l"
	.string "economy to become sucessful. Please go\l"
	.string "find Indianus! Let's save Mew!$"
