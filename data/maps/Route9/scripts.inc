Route9_MapScripts::
# 11 "data//maps/Route9/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route9_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route9_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data//maps/Route9/scripts.pory"
	goto_if_set FLAG_ROUTE9_CLEARBLOCK, Route9_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route9_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data//maps/Route9/scripts.pory"
	call Route9_Script_ClearRoadBlock
	return


Route9_Script_ClearRoadBlock::
# 23 "data//maps/Route9/scripts.pory"
	setvar VAR_TEMP_4, 1
# 26 "data//maps/Route9/scripts.pory"
	setobjectxy 12, 28, 23
# 27 "data//maps/Route9/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_DOWN
# 29 "data//maps/Route9/scripts.pory"
	setobjectxy 13, 56, 17
# 30 "data//maps/Route9/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
	return


Route9_EventScript_RoadBlocker::
# 36 "data//maps/Route9/scripts.pory"
	lock
# 37 "data//maps/Route9/scripts.pory"
	goto_if_unset FLAG_ROUTE9_CLEARBLOCK, Route9_EventScript_RoadBlocker_2
# 40 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlockCleared
Route9_EventScript_RoadBlocker_1:
# 42 "data//maps/Route9/scripts.pory"
	closemessage
# 43 "data//maps/Route9/scripts.pory"
	goto_if_set FLAG_ROUTE9_CLEARBLOCK, Route9_EventScript_RoadBlocker_6
Route9_EventScript_RoadBlocker_5:
# 47 "data//maps/Route9/scripts.pory"
	release
	end

Route9_EventScript_RoadBlocker_2:
# 38 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
	goto Route9_EventScript_RoadBlocker_1

Route9_EventScript_RoadBlocker_6:
# 44 "data//maps/Route9/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 45 "data//maps/Route9/scripts.pory"
	waitmovement 0
	goto Route9_EventScript_RoadBlocker_5


Route9_EventScript_RoadBlocker3::
# 52 "data//maps/Route9/scripts.pory"
	lock
# 53 "data//maps/Route9/scripts.pory"
	faceplayer
# 54 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 55 "data//maps/Route9/scripts.pory"
	closemessage
# 56 "data//maps/Route9/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 57 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 58 "data//maps/Route9/scripts.pory"
	release
	end


Route9_EventScript_RoadBlocker4::
# 63 "data//maps/Route9/scripts.pory"
	lock
# 64 "data//maps/Route9/scripts.pory"
	faceplayer
# 65 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 66 "data//maps/Route9/scripts.pory"
	closemessage
# 67 "data//maps/Route9/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 68 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 69 "data//maps/Route9/scripts.pory"
	release
	end


Route9_EventScript_RoadBlockA::
# 74 "data//maps/Route9/scripts.pory"
	lock
# 75 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 76 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 77 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 78 "data//maps/Route9/scripts.pory"
	applymovement 14, Common_Movement_FaceRight
# 79 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 80 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 81 "data//maps/Route9/scripts.pory"
	closemessage
# 82 "data//maps/Route9/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 83 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 84 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 85 "data//maps/Route9/scripts.pory"
	release
	return


Route9_EventScript_RoadBlockB::
# 89 "data//maps/Route9/scripts.pory"
	lock
# 90 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 91 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 92 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 93 "data//maps/Route9/scripts.pory"
	applymovement 15, Common_Movement_FaceLeft
# 94 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 95 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 96 "data//maps/Route9/scripts.pory"
	closemessage
# 97 "data//maps/Route9/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 98 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 99 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 100 "data//maps/Route9/scripts.pory"
	release
	return


Route9_Text_RoadBlocker::
# 104 "data//maps/Route9/scripts.pory"
	.string "You must turn back! The hill has fallen\n"
	.string "down and men are hard at work to clear\l"
	.string "the road.$"

Route9_Text_RoadBlockCleared::
# 108 "data//maps/Route9/scripts.pory"
	.string "We've finally finished! The road is now\n"
	.string "re-opened but be careful. There are\l"
	.string "still many rocks laying along the\l"
	.string "roadside and there's a chance the hill\l"
	.string "could slide again.$"
