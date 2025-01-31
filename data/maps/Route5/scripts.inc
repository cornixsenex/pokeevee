Route5_MapScripts::
	.byte 0


Route5_EventScript_LeafTrigger1::
# 7 "data//maps/Route5/scripts.pory"
	lock
# 8 "data//maps/Route5/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 8
# 9 "data//maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 10 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 11 "data//maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 12 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 13 "data//maps/Route5/scripts.pory"
	addobject 21
# 14 "data//maps/Route5/scripts.pory"
	showobjectat 21, MAP_ROUTE5
# 15 "data//maps/Route5/scripts.pory"
	applymovement 21, Route5_Movement_LeafEnter1
# 16 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 17 "data//maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 18 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 19 "data//maps/Route5/scripts.pory"
	load_field_pic 4, 190, 98
# 20 "data//maps/Route5/scripts.pory"
	msgbox Route5_Text_Leaf
# 21 "data//maps/Route5/scripts.pory"
	closemessage
# 22 "data//maps/Route5/scripts.pory"
	destroy_field_pic 4
# 23 "data//maps/Route5/scripts.pory"
	applymovement 21, Route5_Movement_LeafExit1
# 24 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 25 "data//maps/Route5/scripts.pory"
	removeobject 21
# 26 "data//maps/Route5/scripts.pory"
	release
	end


Route5_EventScript_LeafTrigger2::
# 31 "data//maps/Route5/scripts.pory"
	lock
# 32 "data//maps/Route5/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 8
# 33 "data//maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 34 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 35 "data//maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 36 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 37 "data//maps/Route5/scripts.pory"
	addobject 21
# 38 "data//maps/Route5/scripts.pory"
	showobjectat 21, MAP_ROUTE5
# 39 "data//maps/Route5/scripts.pory"
	applymovement 21, Route5_Movement_LeafEnter2
# 40 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 41 "data//maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 42 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 43 "data//maps/Route5/scripts.pory"
	load_field_pic 4, 190, 98
# 44 "data//maps/Route5/scripts.pory"
	msgbox Route5_Text_Leaf
# 45 "data//maps/Route5/scripts.pory"
	closemessage
# 46 "data//maps/Route5/scripts.pory"
	destroy_field_pic 4
# 47 "data//maps/Route5/scripts.pory"
	applymovement 21, Route5_Movement_LeafExit2
# 48 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 49 "data//maps/Route5/scripts.pory"
	removeobject 21
# 50 "data//maps/Route5/scripts.pory"
	release
	end


# 55 "data//maps/Route5/scripts.pory"
Route5_Movement_LeafEnter1:
# 56 "data//maps/Route5/scripts.pory"
	walk_up
# 56 "data//maps/Route5/scripts.pory"
	walk_up
# 56 "data//maps/Route5/scripts.pory"
	walk_up
# 56 "data//maps/Route5/scripts.pory"
	walk_up
# 57 "data//maps/Route5/scripts.pory"
	walk_right
# 58 "data//maps/Route5/scripts.pory"
	walk_up
# 58 "data//maps/Route5/scripts.pory"
	walk_up
# 58 "data//maps/Route5/scripts.pory"
	walk_up
# 59 "data//maps/Route5/scripts.pory"
	face_left
	step_end

# 62 "data//maps/Route5/scripts.pory"
Route5_Movement_LeafEnter2:
# 63 "data//maps/Route5/scripts.pory"
	walk_up
# 63 "data//maps/Route5/scripts.pory"
	walk_up
# 63 "data//maps/Route5/scripts.pory"
	walk_up
# 63 "data//maps/Route5/scripts.pory"
	walk_up
# 63 "data//maps/Route5/scripts.pory"
	walk_up
# 63 "data//maps/Route5/scripts.pory"
	walk_up
# 63 "data//maps/Route5/scripts.pory"
	walk_up
# 64 "data//maps/Route5/scripts.pory"
	face_right
	step_end

# 67 "data//maps/Route5/scripts.pory"
Route5_Movement_LeafExit1:
# 68 "data//maps/Route5/scripts.pory"
	walk_up
# 69 "data//maps/Route5/scripts.pory"
	walk_left
# 70 "data//maps/Route5/scripts.pory"
	walk_up
# 70 "data//maps/Route5/scripts.pory"
	walk_up
	step_end

# 73 "data//maps/Route5/scripts.pory"
Route5_Movement_LeafExit2:
# 74 "data//maps/Route5/scripts.pory"
	walk_up
# 74 "data//maps/Route5/scripts.pory"
	walk_up
# 74 "data//maps/Route5/scripts.pory"
	walk_up
	step_end

Route5_Text_Leaf::
# 78 "data//maps/Route5/scripts.pory"
	.string "Good job! You found a way to break the\n"
	.string "rocks now we can travel north and find\l"
	.string "Indy. This tunnel takes us all the way\l"
	.string "up north say bye to the fresh air and\l"
	.string "the blue sky and hurry up! Lets get this\l"
	.string "over with.$"
