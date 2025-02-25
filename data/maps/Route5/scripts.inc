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
	special ShowMapNamePopup
	return


Route5_Script_Transition_ViaLitoralis::
# 31 "data/maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 2
# 32 "data/maps/Route5/scripts.pory"
	special ShowMapNamePopup
	return


Route5_Script_Transition_VillaVenatorum::
# 36 "data/maps/Route5/scripts.pory"
	setvar VAR_TEMP_5, 3
# 37 "data/maps/Route5/scripts.pory"
	special ShowMapNamePopup
	return


Route5_EventScript_LeafTrigger1::
# 42 "data/maps/Route5/scripts.pory"
	lock
# 43 "data/maps/Route5/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 8
# 44 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 45 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 47 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route5/scripts.pory"
	addobject 21
# 49 "data/maps/Route5/scripts.pory"
	showobjectat 21, MAP_ROUTE5
# 50 "data/maps/Route5/scripts.pory"
	applymovement 21, Route5_Movement_LeafEnter1
# 51 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 53 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route5/scripts.pory"
	load_field_pic 4, 190, 98
# 55 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_Leaf
# 56 "data/maps/Route5/scripts.pory"
	closemessage
# 57 "data/maps/Route5/scripts.pory"
	destroy_field_pic 4
# 58 "data/maps/Route5/scripts.pory"
	applymovement 21, Route5_Movement_LeafExit1
# 59 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route5/scripts.pory"
	removeobject 21
# 61 "data/maps/Route5/scripts.pory"
	release
	end


Route5_EventScript_LeafTrigger2::
# 66 "data/maps/Route5/scripts.pory"
	lock
# 67 "data/maps/Route5/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 8
# 68 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 69 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 71 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route5/scripts.pory"
	addobject 21
# 73 "data/maps/Route5/scripts.pory"
	showobjectat 21, MAP_ROUTE5
# 74 "data/maps/Route5/scripts.pory"
	applymovement 21, Route5_Movement_LeafEnter2
# 75 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 77 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route5/scripts.pory"
	load_field_pic 4, 190, 98
# 79 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_Leaf
# 80 "data/maps/Route5/scripts.pory"
	closemessage
# 81 "data/maps/Route5/scripts.pory"
	destroy_field_pic 4
# 82 "data/maps/Route5/scripts.pory"
	applymovement 21, Route5_Movement_LeafExit2
# 83 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route5/scripts.pory"
	removeobject 21
# 85 "data/maps/Route5/scripts.pory"
	release
	end


# 90 "data/maps/Route5/scripts.pory"
Route5_Movement_LeafEnter1:
# 91 "data/maps/Route5/scripts.pory"
	walk_up
# 91 "data/maps/Route5/scripts.pory"
	walk_up
# 91 "data/maps/Route5/scripts.pory"
	walk_up
# 91 "data/maps/Route5/scripts.pory"
	walk_up
# 92 "data/maps/Route5/scripts.pory"
	walk_right
# 93 "data/maps/Route5/scripts.pory"
	walk_up
# 93 "data/maps/Route5/scripts.pory"
	walk_up
# 93 "data/maps/Route5/scripts.pory"
	walk_up
# 94 "data/maps/Route5/scripts.pory"
	face_left
	step_end

# 97 "data/maps/Route5/scripts.pory"
Route5_Movement_LeafEnter2:
# 98 "data/maps/Route5/scripts.pory"
	walk_up
# 98 "data/maps/Route5/scripts.pory"
	walk_up
# 98 "data/maps/Route5/scripts.pory"
	walk_up
# 98 "data/maps/Route5/scripts.pory"
	walk_up
# 98 "data/maps/Route5/scripts.pory"
	walk_up
# 98 "data/maps/Route5/scripts.pory"
	walk_up
# 98 "data/maps/Route5/scripts.pory"
	walk_up
# 99 "data/maps/Route5/scripts.pory"
	face_right
	step_end

# 102 "data/maps/Route5/scripts.pory"
Route5_Movement_LeafExit1:
# 103 "data/maps/Route5/scripts.pory"
	walk_up
# 104 "data/maps/Route5/scripts.pory"
	walk_left
# 105 "data/maps/Route5/scripts.pory"
	walk_up
# 105 "data/maps/Route5/scripts.pory"
	walk_up
	step_end

# 108 "data/maps/Route5/scripts.pory"
Route5_Movement_LeafExit2:
# 109 "data/maps/Route5/scripts.pory"
	walk_up
# 109 "data/maps/Route5/scripts.pory"
	walk_up
# 109 "data/maps/Route5/scripts.pory"
	walk_up
	step_end

Route5_Text_Leaf::
# 113 "data/maps/Route5/scripts.pory"
	.string "Good job! You found a way to break the\n"
	.string "rocks now we can travel north and find\l"
	.string "Indy. This tunnel takes us all the way\l"
	.string "up north say bye to the fresh air and\l"
	.string "the blue sky and hurry up! Lets get this\l"
	.string "over with.$"
