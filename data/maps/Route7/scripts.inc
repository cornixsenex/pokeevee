Route7_MapScripts::
	.byte 0


Route7_EventScript_RoadBlockA::
# 6 "data/maps/Route7/scripts.pory"
	lock
# 7 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 8 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_Movement_RoadBlockA
# 9 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 10 "data/maps/Route7/scripts.pory"
	msgbox Route7_Text_RoadBlock
# 11 "data/maps/Route7/scripts.pory"
	closemessage
# 12 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_Movement_RoadBlockA2
# 13 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 14 "data/maps/Route7/scripts.pory"
	opendoor 15, 56
# 15 "data/maps/Route7/scripts.pory"
	waitdooranim
# 16 "data/maps/Route7/scripts.pory"
	applymovement 13, Common_Movement_WalkUp
# 17 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route7/scripts.pory"
	removeobject 13
# 19 "data/maps/Route7/scripts.pory"
	closedoor 15, 56
# 20 "data/maps/Route7/scripts.pory"
	waitdooranim
# 21 "data/maps/Route7/scripts.pory"
	setflag FLAG_ROUTE7_HIDEOLDWOMAN
# 22 "data/maps/Route7/scripts.pory"
	setvar VAR_ROUTE6_STATE, 2
# 23 "data/maps/Route7/scripts.pory"
	release
	end


Route7_EventScript_RoadBlockB::
# 28 "data/maps/Route7/scripts.pory"
	lock
# 29 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 30 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_Movement_RoadBlockB
# 31 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route7/scripts.pory"
	msgbox Route7_Text_RoadBlock
# 33 "data/maps/Route7/scripts.pory"
	closemessage
# 34 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_Movement_RoadBlockB2
# 35 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route7/scripts.pory"
	opendoor 15, 56
# 37 "data/maps/Route7/scripts.pory"
	waitdooranim
# 38 "data/maps/Route7/scripts.pory"
	removeobject 13
# 39 "data/maps/Route7/scripts.pory"
	setflag FLAG_ROUTE7_HIDEOLDWOMAN
# 40 "data/maps/Route7/scripts.pory"
	setvar VAR_ROUTE6_STATE, 2
# 41 "data/maps/Route7/scripts.pory"
	release
	end


# 48 "data/maps/Route7/scripts.pory"
Route7_Movement_RoadBlockA:
# 49 "data/maps/Route7/scripts.pory"
	walk_right
# 49 "data/maps/Route7/scripts.pory"
	walk_right
# 49 "data/maps/Route7/scripts.pory"
	walk_right
# 49 "data/maps/Route7/scripts.pory"
	walk_right
# 49 "data/maps/Route7/scripts.pory"
	walk_right
# 50 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 53 "data/maps/Route7/scripts.pory"
Route7_Movement_RoadBlockB:
# 54 "data/maps/Route7/scripts.pory"
	walk_right
# 54 "data/maps/Route7/scripts.pory"
	walk_right
# 54 "data/maps/Route7/scripts.pory"
	walk_right
# 54 "data/maps/Route7/scripts.pory"
	walk_right
# 54 "data/maps/Route7/scripts.pory"
	walk_right
# 54 "data/maps/Route7/scripts.pory"
	walk_right
# 55 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 58 "data/maps/Route7/scripts.pory"
Route7_Movement_RoadBlockA2:
# 59 "data/maps/Route7/scripts.pory"
	walk_left
# 59 "data/maps/Route7/scripts.pory"
	walk_left
# 59 "data/maps/Route7/scripts.pory"
	walk_left
# 59 "data/maps/Route7/scripts.pory"
	walk_left
# 59 "data/maps/Route7/scripts.pory"
	walk_left
# 59 "data/maps/Route7/scripts.pory"
	walk_left
# 60 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 63 "data/maps/Route7/scripts.pory"
Route7_Movement_RoadBlockB2:
# 64 "data/maps/Route7/scripts.pory"
	walk_left
# 64 "data/maps/Route7/scripts.pory"
	walk_left
# 64 "data/maps/Route7/scripts.pory"
	walk_left
# 64 "data/maps/Route7/scripts.pory"
	walk_left
# 64 "data/maps/Route7/scripts.pory"
	walk_left
# 64 "data/maps/Route7/scripts.pory"
	walk_left
# 64 "data/maps/Route7/scripts.pory"
	walk_left
# 65 "data/maps/Route7/scripts.pory"
	face_up
	step_end

Route7_Text_RoadBlock::
# 73 "data/maps/Route7/scripts.pory"
	.string "You poor little young thing! You look\n"
	.string "tired, come rest a while in grandma's\l"
	.string "cabin. We have a bed made specially for\l"
	.string "you!$"
