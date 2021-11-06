Route5_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route5_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Route5_OnTransition
	return


Route5_OnTransition::
	removeobject 21
	end


Route5_EventScript_LeafTrigger1::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	addobject 21
	applymovement 21, Route5_Movement_LeafEnter1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox Route5_Text_Leaf
	closemessage
	destroy_field_pic 4
	applymovement 21, Route5_Movement_LeafExit1
	waitmovement 0
	removeobject 21
	release
	end


Route5_EventScript_LeafTrigger2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	addobject 21
	applymovement 21, Route5_Movement_LeafEnter2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox Route5_Text_Leaf
	closemessage
	destroy_field_pic 4
	applymovement 21, Route5_Movement_LeafExit2
	waitmovement 0
	removeobject 21
	release
	end


Route5_Movement_LeafEnter1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	face_left
	step_end

Route5_Movement_LeafEnter2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_right
	step_end

Route5_Movement_LeafExit1:
	walk_up
	walk_left
	walk_up
	walk_up
	step_end

Route5_Movement_LeafExit2:
	walk_up
	walk_up
	walk_up
	step_end

Route5_Text_Leaf::
	.string "Good job! You found a way to break the\n"
	.string "rocks now we can travel north and find\l"
	.string "Indy. This tunnel takes us all the way\l"
	.string "up north say bye to the fresh air and\l"
	.string "the blue sky and hurry up! Lets get\l"
	.string "this over with.$"
