Route9_MapScripts::
# 11 "data/maps/Route9/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route9_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route9_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/Route9/scripts.pory"
	goto_if_set FLAG_ROUTE9_CLEARBLOCK, Route9_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route9_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/Route9/scripts.pory"
	call Route9_Script_ClearRoadBlock
	return


Route9_Script_ClearRoadBlock::
# 23 "data/maps/Route9/scripts.pory"
	setvar VAR_TEMP_4, 1
# 26 "data/maps/Route9/scripts.pory"
	setobjectxyperm 9, 28, 23
# 27 "data/maps/Route9/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
# 28 "data/maps/Route9/scripts.pory"
	addobject 9
# 29 "data/maps/Route9/scripts.pory"
	showobjectat 9, MAP_ROUTE9
# 31 "data/maps/Route9/scripts.pory"
	setobjectxyperm 10, 56, 17
# 32 "data/maps/Route9/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
# 33 "data/maps/Route9/scripts.pory"
	addobject 10
# 34 "data/maps/Route9/scripts.pory"
	showobjectat 10, MAP_ROUTE9
	return


Route9_EventScript_RoadBlocker::
# 40 "data/maps/Route9/scripts.pory"
	lock
# 41 "data/maps/Route9/scripts.pory"
	faceplayer
# 42 "data/maps/Route9/scripts.pory"
	goto_if_unset FLAG_ROUTE9_CLEARBLOCK, Route9_EventScript_RoadBlocker_2
# 45 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlockCleared
Route9_EventScript_RoadBlocker_1:
# 47 "data/maps/Route9/scripts.pory"
	closemessage
# 48 "data/maps/Route9/scripts.pory"
	goto_if_set FLAG_ROUTE9_CLEARBLOCK, Route9_EventScript_RoadBlocker_6
Route9_EventScript_RoadBlocker_5:
# 52 "data/maps/Route9/scripts.pory"
	release
	end

Route9_EventScript_RoadBlocker_2:
# 43 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
	goto Route9_EventScript_RoadBlocker_1

Route9_EventScript_RoadBlocker_6:
# 49 "data/maps/Route9/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 50 "data/maps/Route9/scripts.pory"
	waitmovement 0
	goto Route9_EventScript_RoadBlocker_5


Route9_EventScript_RoadBlocker3::
# 57 "data/maps/Route9/scripts.pory"
	lock
# 58 "data/maps/Route9/scripts.pory"
	faceplayer
# 59 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 60 "data/maps/Route9/scripts.pory"
	closemessage
# 61 "data/maps/Route9/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 62 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route9/scripts.pory"
	release
	end


Route9_EventScript_RoadBlocker4::
# 68 "data/maps/Route9/scripts.pory"
	lock
# 69 "data/maps/Route9/scripts.pory"
	faceplayer
# 70 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 71 "data/maps/Route9/scripts.pory"
	closemessage
# 72 "data/maps/Route9/scripts.pory"
	applymovement 12, Common_Movement_FaceDown
# 73 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route9/scripts.pory"
	release
	end


Route9_EventScript_RoadBlockA::
# 79 "data/maps/Route9/scripts.pory"
	lock
# 80 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 81 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 83 "data/maps/Route9/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 84 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 86 "data/maps/Route9/scripts.pory"
	closemessage
# 87 "data/maps/Route9/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 88 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 89 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route9/scripts.pory"
	release
	return


Route9_EventScript_RoadBlockB::
# 94 "data/maps/Route9/scripts.pory"
	lock
# 95 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 96 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 98 "data/maps/Route9/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 99 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 100 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 101 "data/maps/Route9/scripts.pory"
	closemessage
# 102 "data/maps/Route9/scripts.pory"
	applymovement 12, Common_Movement_FaceDown
# 103 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 104 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route9/scripts.pory"
	release
	return


Route9_Text_RoadBlocker::
# 109 "data/maps/Route9/scripts.pory"
	.string "You must turn back! The hill has fallen\n"
	.string "down and men are hard at work to clear\l"
	.string "the road.$"

Route9_Text_RoadBlockCleared::
# 113 "data/maps/Route9/scripts.pory"
	.string "We've finally finished! The road is now\n"
	.string "re-opened but be careful. There are\l"
	.string "still many rocks laying along the\l"
	.string "roadside and there's a chance the hill\l"
	.string "could slide again.$"
