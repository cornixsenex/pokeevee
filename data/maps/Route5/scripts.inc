Route5_MapScripts::
# 11 "data/maps/Route5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/Route5/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Route4
# 13 "data/maps/Route5/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/Route5/scripts.pory"
	case 1, Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/Route5/scripts.pory"
	case 2, Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 18 "data/maps/Route5/scripts.pory"
	case 3, Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data/maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data/maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 3
	return


Route5_Script_Transition_VenatorMons::
# 26 "data/maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 1
# 27 "data/maps/Route5/scripts.pory"
	special TransitionMapMusic
# 28 "data/maps/Route5/scripts.pory"
	special ShowMapNamePopup
	return


Route5_Script_Transition_ViaLitoralis::
# 32 "data/maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 2
# 33 "data/maps/Route5/scripts.pory"
	special TransitionMapMusic
# 34 "data/maps/Route5/scripts.pory"
	special ShowMapNamePopup
	return


Route5_Script_Transition_VillaVenatorum::
# 38 "data/maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 3
# 39 "data/maps/Route5/scripts.pory"
	special TransitionMapMusic
# 40 "data/maps/Route5/scripts.pory"
	special ShowMapNamePopup
	return


Route5_EventScript_LeafTrigger1::
# 45 "data/maps/Route5/scripts.pory"
	lock
# 46 "data/maps/Route5/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 8
# 47 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 48 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 50 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route5/scripts.pory"
	addobject 21
# 52 "data/maps/Route5/scripts.pory"
	showobjectat 21, MAP_ROUTE5
# 53 "data/maps/Route5/scripts.pory"
	applymovement 21, Route5_Movement_LeafEnter1
# 54 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 56 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route5/scripts.pory"
	load_field_pic 4, 190, 98
# 58 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_Leaf
# 59 "data/maps/Route5/scripts.pory"
	closemessage
# 60 "data/maps/Route5/scripts.pory"
	destroy_field_pic 4
# 61 "data/maps/Route5/scripts.pory"
	applymovement 21, Route5_Movement_LeafExit1
# 62 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route5/scripts.pory"
	removeobject 21
# 64 "data/maps/Route5/scripts.pory"
	release
	end


Route5_EventScript_LeafTrigger2::
# 69 "data/maps/Route5/scripts.pory"
	lock
# 70 "data/maps/Route5/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 8
# 71 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 72 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 74 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route5/scripts.pory"
	addobject 21
# 76 "data/maps/Route5/scripts.pory"
	showobjectat 21, MAP_ROUTE5
# 77 "data/maps/Route5/scripts.pory"
	applymovement 21, Route5_Movement_LeafEnter2
# 78 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 80 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route5/scripts.pory"
	load_field_pic 4, 190, 98
# 82 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_Leaf
# 83 "data/maps/Route5/scripts.pory"
	closemessage
# 84 "data/maps/Route5/scripts.pory"
	destroy_field_pic 4
# 85 "data/maps/Route5/scripts.pory"
	applymovement 21, Route5_Movement_LeafExit2
# 86 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route5/scripts.pory"
	removeobject 21
# 88 "data/maps/Route5/scripts.pory"
	release
	end


# 93 "data/maps/Route5/scripts.pory"
Route5_Movement_LeafEnter1:
# 94 "data/maps/Route5/scripts.pory"
	walk_up
# 94 "data/maps/Route5/scripts.pory"
	walk_up
# 94 "data/maps/Route5/scripts.pory"
	walk_up
# 94 "data/maps/Route5/scripts.pory"
	walk_up
# 95 "data/maps/Route5/scripts.pory"
	walk_right
# 96 "data/maps/Route5/scripts.pory"
	walk_up
# 96 "data/maps/Route5/scripts.pory"
	walk_up
# 96 "data/maps/Route5/scripts.pory"
	walk_up
# 97 "data/maps/Route5/scripts.pory"
	face_left
	step_end

# 100 "data/maps/Route5/scripts.pory"
Route5_Movement_LeafEnter2:
# 101 "data/maps/Route5/scripts.pory"
	walk_up
# 101 "data/maps/Route5/scripts.pory"
	walk_up
# 101 "data/maps/Route5/scripts.pory"
	walk_up
# 101 "data/maps/Route5/scripts.pory"
	walk_up
# 101 "data/maps/Route5/scripts.pory"
	walk_up
# 101 "data/maps/Route5/scripts.pory"
	walk_up
# 101 "data/maps/Route5/scripts.pory"
	walk_up
# 102 "data/maps/Route5/scripts.pory"
	face_right
	step_end

# 105 "data/maps/Route5/scripts.pory"
Route5_Movement_LeafExit1:
# 106 "data/maps/Route5/scripts.pory"
	walk_up
# 107 "data/maps/Route5/scripts.pory"
	walk_left
# 108 "data/maps/Route5/scripts.pory"
	walk_up
# 108 "data/maps/Route5/scripts.pory"
	walk_up
	step_end

# 111 "data/maps/Route5/scripts.pory"
Route5_Movement_LeafExit2:
# 112 "data/maps/Route5/scripts.pory"
	walk_up
# 112 "data/maps/Route5/scripts.pory"
	walk_up
# 112 "data/maps/Route5/scripts.pory"
	walk_up
	step_end

Route5_Text_Leaf::
# 116 "data/maps/Route5/scripts.pory"
	.string "Good job! You found a way to break the\n"
	.string "rocks now we can travel north and find\l"
	.string "Indy. This tunnel takes us all the way\l"
	.string "up north say bye to the fresh air and\l"
	.string "the blue sky and hurry up! Lets get this\l"
	.string "over with.$"
