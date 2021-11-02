Route7_MapScripts::
	.byte 0


Route7_EventScript_RoadBlockA::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement 13, Route7_Movement_RoadBlockA
	waitmovement 0
	msgbox Route7_Text_RoadBlock
	closemessage
	applymovement 13, Route7_Movement_RoadBlockA2
	waitmovement 0
	opendoor 15, 56
	waitdooranim
	applymovement 13, Common_Movement_WalkUp
	waitmovement 0
	removeobject 13
	closedoor 15, 56
	waitdooranim
	setflag FLAG_ROUTE7_HIDEOLDWOMAN
	setvar VAR_ROUTE6_STATE, 2
	release
	end


Route7_EventScript_RoadBlockB::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement 13, Route7_Movement_RoadBlockB
	waitmovement 0
	msgbox Route7_Text_RoadBlock
	closemessage
	applymovement 13, Route7_Movement_RoadBlockB2
	waitmovement 0
	opendoor 15, 56
	waitdooranim
	removeobject 13
	setflag FLAG_ROUTE7_HIDEOLDWOMAN
	setvar VAR_ROUTE6_STATE, 2
	release
	end


Route7_Movement_RoadBlockA:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Route7_Movement_RoadBlockB:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Route7_Movement_RoadBlockA2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

Route7_Movement_RoadBlockB2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

Route7_Text_RoadBlock::
	.string "You poor little young thing! You look\n"
	.string "tired, come rest a while in grandma's\l"
	.string "cabin. We have a bed made specially for\l"
	.string "you!$"
