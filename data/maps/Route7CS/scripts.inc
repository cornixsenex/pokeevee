Route7CS_MapScripts::
# 11 "data/maps/Route7CS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route7CS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route7CS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/Route7CS/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Route7CS_F
# 13 "data/maps/Route7CS/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/Route7CS/scripts.pory"
	case 1, Route7CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/Route7CS/scripts.pory"
	case 2, Route7CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 18 "data/maps/Route7CS/scripts.pory"
	case 3, Route7CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 20 "data/maps/Route7CS/scripts.pory"
	case 4, Route7CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 22 "data/maps/Route7CS/scripts.pory"
	case 5, Route7CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

Route7CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/Route7CS/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route7CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data/maps/Route7CS/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route7CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data/maps/Route7CS/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

Route7CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/Route7CS/scripts.pory"
	setvar VAR_TEMP_5, 4
	return

Route7CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 23 "data/maps/Route7CS/scripts.pory"
	setvar VAR_TEMP_5, 5
	return


Route7CS_Script_Transition_ViaLitoralis::
# 30 "data/maps/Route7CS/scripts.pory"
	setvar VAR_TEMP_5, 1
# 31 "data/maps/Route7CS/scripts.pory"
	special TransitionMapMusic
# 32 "data/maps/Route7CS/scripts.pory"
	special ShowMapNamePopup
	return


Route7CS_Script_Transition_MareInternum::
# 36 "data/maps/Route7CS/scripts.pory"
	setvar VAR_TEMP_5, 2
# 37 "data/maps/Route7CS/scripts.pory"
	special TransitionMapMusic
# 38 "data/maps/Route7CS/scripts.pory"
	special ShowMapNamePopup
	return


Route7CS_Script_Transition_VillaVallis::
# 42 "data/maps/Route7CS/scripts.pory"
	setvar VAR_TEMP_5, 4
# 43 "data/maps/Route7CS/scripts.pory"
	special TransitionMapMusic
# 44 "data/maps/Route7CS/scripts.pory"
	special ShowMapNamePopup
	return


Route7CS_Script_Transition_SabinaNova::
# 48 "data/maps/Route7CS/scripts.pory"
	setvar VAR_TEMP_5, 5
# 49 "data/maps/Route7CS/scripts.pory"
	special TransitionMapMusic
# 50 "data/maps/Route7CS/scripts.pory"
	special ShowMapNamePopup
	return


Route7CS_EventScript_RoadBlockA::
# 60 "data/maps/Route7CS/scripts.pory"
	lock
# 61 "data/maps/Route7CS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 62 "data/maps/Route7CS/scripts.pory"
	applymovement 13, Route7CS_Movement_RoadBlockA
# 63 "data/maps/Route7CS/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route7CS/scripts.pory"
	msgbox Route7CS_Text_RoadBlock
# 65 "data/maps/Route7CS/scripts.pory"
	closemessage
# 66 "data/maps/Route7CS/scripts.pory"
	applymovement 13, Route7CS_Movement_RoadBlockA2
# 67 "data/maps/Route7CS/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route7CS/scripts.pory"
	opendoor 15, 56
# 69 "data/maps/Route7CS/scripts.pory"
	waitdooranim
# 70 "data/maps/Route7CS/scripts.pory"
	applymovement 13, Common_Movement_WalkUp
# 71 "data/maps/Route7CS/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route7CS/scripts.pory"
	removeobject 13
# 73 "data/maps/Route7CS/scripts.pory"
	closedoor 15, 56
# 74 "data/maps/Route7CS/scripts.pory"
	waitdooranim
# 75 "data/maps/Route7CS/scripts.pory"
	setflag FLAG_ROUTE7CS_HIDEOLDWOMAN
# 76 "data/maps/Route7CS/scripts.pory"
	release
	end


Route7CS_EventScript_RoadBlockB::
# 81 "data/maps/Route7CS/scripts.pory"
	lock
# 82 "data/maps/Route7CS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 83 "data/maps/Route7CS/scripts.pory"
	applymovement 13, Route7CS_Movement_RoadBlockB
# 84 "data/maps/Route7CS/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route7CS/scripts.pory"
	msgbox Route7CS_Text_RoadBlock
# 86 "data/maps/Route7CS/scripts.pory"
	closemessage
# 87 "data/maps/Route7CS/scripts.pory"
	applymovement 13, Route7CS_Movement_RoadBlockB2
# 88 "data/maps/Route7CS/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route7CS/scripts.pory"
	opendoor 15, 56
# 90 "data/maps/Route7CS/scripts.pory"
	waitdooranim
# 91 "data/maps/Route7CS/scripts.pory"
	removeobject 13
# 92 "data/maps/Route7CS/scripts.pory"
	setflag FLAG_ROUTE7CS_HIDEOLDWOMAN
# 93 "data/maps/Route7CS/scripts.pory"
	release
	end


# 100 "data/maps/Route7CS/scripts.pory"
Route7CS_Movement_RoadBlockA:
# 101 "data/maps/Route7CS/scripts.pory"
	walk_right
# 101 "data/maps/Route7CS/scripts.pory"
	walk_right
# 101 "data/maps/Route7CS/scripts.pory"
	walk_right
# 101 "data/maps/Route7CS/scripts.pory"
	walk_right
# 101 "data/maps/Route7CS/scripts.pory"
	walk_right
# 102 "data/maps/Route7CS/scripts.pory"
	face_up
	step_end

# 105 "data/maps/Route7CS/scripts.pory"
Route7CS_Movement_RoadBlockB:
# 106 "data/maps/Route7CS/scripts.pory"
	walk_right
# 106 "data/maps/Route7CS/scripts.pory"
	walk_right
# 106 "data/maps/Route7CS/scripts.pory"
	walk_right
# 106 "data/maps/Route7CS/scripts.pory"
	walk_right
# 106 "data/maps/Route7CS/scripts.pory"
	walk_right
# 106 "data/maps/Route7CS/scripts.pory"
	walk_right
# 107 "data/maps/Route7CS/scripts.pory"
	face_up
	step_end

# 110 "data/maps/Route7CS/scripts.pory"
Route7CS_Movement_RoadBlockA2:
# 111 "data/maps/Route7CS/scripts.pory"
	walk_left
# 111 "data/maps/Route7CS/scripts.pory"
	walk_left
# 111 "data/maps/Route7CS/scripts.pory"
	walk_left
# 111 "data/maps/Route7CS/scripts.pory"
	walk_left
# 111 "data/maps/Route7CS/scripts.pory"
	walk_left
# 111 "data/maps/Route7CS/scripts.pory"
	walk_left
# 112 "data/maps/Route7CS/scripts.pory"
	face_up
	step_end

# 115 "data/maps/Route7CS/scripts.pory"
Route7CS_Movement_RoadBlockB2:
# 116 "data/maps/Route7CS/scripts.pory"
	walk_left
# 116 "data/maps/Route7CS/scripts.pory"
	walk_left
# 116 "data/maps/Route7CS/scripts.pory"
	walk_left
# 116 "data/maps/Route7CS/scripts.pory"
	walk_left
# 116 "data/maps/Route7CS/scripts.pory"
	walk_left
# 116 "data/maps/Route7CS/scripts.pory"
	walk_left
# 116 "data/maps/Route7CS/scripts.pory"
	walk_left
# 117 "data/maps/Route7CS/scripts.pory"
	face_up
	step_end

Route7CS_Text_RoadBlock::
# 125 "data/maps/Route7CS/scripts.pory"
	.string "You poor little young thing! You look\n"
	.string "tired, come rest a while in grandma's\l"
	.string "cabin. We have a bed made specially for\l"
	.string "you!$"
