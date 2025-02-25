Route7_MapScripts::
# 11 "data/maps/Route7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route7_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route7_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/Route7/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Route7
# 13 "data/maps/Route7/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/Route7/scripts.pory"
	case 1, Route7_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/Route7/scripts.pory"
	case 2, Route7_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 18 "data/maps/Route7/scripts.pory"
	case 3, Route7_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 20 "data/maps/Route7/scripts.pory"
	case 4, Route7_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 22 "data/maps/Route7/scripts.pory"
	case 5, Route7_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

Route7_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/Route7/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route7_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data/maps/Route7/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route7_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data/maps/Route7/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

Route7_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/Route7/scripts.pory"
	setvar VAR_TEMP_5, 4
	return

Route7_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 23 "data/maps/Route7/scripts.pory"
	setvar VAR_TEMP_5, 5
	return


Route7_Script_Transition_ViaLitoralis::
# 30 "data/maps/Route7/scripts.pory"
	setvar VAR_TEMP_5, 1
# 31 "data/maps/Route7/scripts.pory"
	special ShowMapNamePopup
	return


Route7_Script_Transition_MareInternum::
# 35 "data/maps/Route7/scripts.pory"
	setvar VAR_TEMP_5, 2
# 36 "data/maps/Route7/scripts.pory"
	special ShowMapNamePopup
	return


Route7_Script_Transition_VillaVallis::
# 40 "data/maps/Route7/scripts.pory"
	setvar VAR_TEMP_5, 4
# 41 "data/maps/Route7/scripts.pory"
	special ShowMapNamePopup
	return


Route7_Script_Transition_SabinaNova::
# 45 "data/maps/Route7/scripts.pory"
	setvar VAR_TEMP_5, 5
# 46 "data/maps/Route7/scripts.pory"
	special ShowMapNamePopup
	return


Route7_EventScript_RoadBlockA::
# 56 "data/maps/Route7/scripts.pory"
	lock
# 57 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 58 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_Movement_RoadBlockA
# 59 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route7/scripts.pory"
	msgbox Route7_Text_RoadBlock
# 61 "data/maps/Route7/scripts.pory"
	closemessage
# 62 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_Movement_RoadBlockA2
# 63 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route7/scripts.pory"
	opendoor 15, 56
# 65 "data/maps/Route7/scripts.pory"
	waitdooranim
# 66 "data/maps/Route7/scripts.pory"
	applymovement 13, Common_Movement_WalkUp
# 67 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route7/scripts.pory"
	removeobject 13
# 69 "data/maps/Route7/scripts.pory"
	closedoor 15, 56
# 70 "data/maps/Route7/scripts.pory"
	waitdooranim
# 71 "data/maps/Route7/scripts.pory"
	setflag FLAG_ROUTE7_HIDEOLDWOMAN
# 72 "data/maps/Route7/scripts.pory"
	setvar VAR_ROUTE6_STATE, 2
# 73 "data/maps/Route7/scripts.pory"
	release
	end


Route7_EventScript_RoadBlockB::
# 78 "data/maps/Route7/scripts.pory"
	lock
# 79 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 80 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_Movement_RoadBlockB
# 81 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route7/scripts.pory"
	msgbox Route7_Text_RoadBlock
# 83 "data/maps/Route7/scripts.pory"
	closemessage
# 84 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_Movement_RoadBlockB2
# 85 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route7/scripts.pory"
	opendoor 15, 56
# 87 "data/maps/Route7/scripts.pory"
	waitdooranim
# 88 "data/maps/Route7/scripts.pory"
	removeobject 13
# 89 "data/maps/Route7/scripts.pory"
	setflag FLAG_ROUTE7_HIDEOLDWOMAN
# 90 "data/maps/Route7/scripts.pory"
	setvar VAR_ROUTE6_STATE, 2
# 91 "data/maps/Route7/scripts.pory"
	release
	end


# 98 "data/maps/Route7/scripts.pory"
Route7_Movement_RoadBlockA:
# 99 "data/maps/Route7/scripts.pory"
	walk_right
# 99 "data/maps/Route7/scripts.pory"
	walk_right
# 99 "data/maps/Route7/scripts.pory"
	walk_right
# 99 "data/maps/Route7/scripts.pory"
	walk_right
# 99 "data/maps/Route7/scripts.pory"
	walk_right
# 100 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 103 "data/maps/Route7/scripts.pory"
Route7_Movement_RoadBlockB:
# 104 "data/maps/Route7/scripts.pory"
	walk_right
# 104 "data/maps/Route7/scripts.pory"
	walk_right
# 104 "data/maps/Route7/scripts.pory"
	walk_right
# 104 "data/maps/Route7/scripts.pory"
	walk_right
# 104 "data/maps/Route7/scripts.pory"
	walk_right
# 104 "data/maps/Route7/scripts.pory"
	walk_right
# 105 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 108 "data/maps/Route7/scripts.pory"
Route7_Movement_RoadBlockA2:
# 109 "data/maps/Route7/scripts.pory"
	walk_left
# 109 "data/maps/Route7/scripts.pory"
	walk_left
# 109 "data/maps/Route7/scripts.pory"
	walk_left
# 109 "data/maps/Route7/scripts.pory"
	walk_left
# 109 "data/maps/Route7/scripts.pory"
	walk_left
# 109 "data/maps/Route7/scripts.pory"
	walk_left
# 110 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 113 "data/maps/Route7/scripts.pory"
Route7_Movement_RoadBlockB2:
# 114 "data/maps/Route7/scripts.pory"
	walk_left
# 114 "data/maps/Route7/scripts.pory"
	walk_left
# 114 "data/maps/Route7/scripts.pory"
	walk_left
# 114 "data/maps/Route7/scripts.pory"
	walk_left
# 114 "data/maps/Route7/scripts.pory"
	walk_left
# 114 "data/maps/Route7/scripts.pory"
	walk_left
# 114 "data/maps/Route7/scripts.pory"
	walk_left
# 115 "data/maps/Route7/scripts.pory"
	face_up
	step_end

Route7_Text_RoadBlock::
# 123 "data/maps/Route7/scripts.pory"
	.string "You poor little young thing! You look\n"
	.string "tired, come rest a while in grandma's\l"
	.string "cabin. We have a bed made specially for\l"
	.string "you!$"
