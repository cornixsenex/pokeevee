Route9_MapScripts::
	.byte 0


Route9_EventScript_RoadBlocker1::
# 6 "data/maps/Route9/scripts.pory"
	lock
# 7 "data/maps/Route9/scripts.pory"
	faceplayer
# 8 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 9 "data/maps/Route9/scripts.pory"
	closemessage
# 10 "data/maps/Route9/scripts.pory"
	applymovement 13, Common_Movement_FaceDown
# 11 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 12 "data/maps/Route9/scripts.pory"
	release
	end


Route9_EventScript_RoadBlocker2::
# 17 "data/maps/Route9/scripts.pory"
	lock
# 18 "data/maps/Route9/scripts.pory"
	faceplayer
# 19 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 20 "data/maps/Route9/scripts.pory"
	closemessage
# 21 "data/maps/Route9/scripts.pory"
	applymovement 14, Common_Movement_FaceUp
# 22 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route9/scripts.pory"
	release
	end


Route9_EventScript_RoadBlocker3::
# 28 "data/maps/Route9/scripts.pory"
	lock
# 29 "data/maps/Route9/scripts.pory"
	faceplayer
# 30 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 31 "data/maps/Route9/scripts.pory"
	closemessage
# 32 "data/maps/Route9/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 33 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route9/scripts.pory"
	release
	end


Route9_EventScript_RoadBlocker4::
# 39 "data/maps/Route9/scripts.pory"
	lock
# 40 "data/maps/Route9/scripts.pory"
	faceplayer
# 41 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 42 "data/maps/Route9/scripts.pory"
	closemessage
# 43 "data/maps/Route9/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 44 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route9/scripts.pory"
	release
	end


Route9_EventScript_RoadBlock1::
# 50 "data/maps/Route9/scripts.pory"
	lock
# 51 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 52 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 54 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 56 "data/maps/Route9/scripts.pory"
	closemessage
# 57 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 58 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route9/scripts.pory"
	release
	return


Route9_EventScript_RoadBlock2::
# 63 "data/maps/Route9/scripts.pory"
	lock
# 64 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 65 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 67 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 69 "data/maps/Route9/scripts.pory"
	closemessage
# 70 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 71 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route9/scripts.pory"
	release
	return


Route9_EventScript_RoadBlock3::
# 76 "data/maps/Route9/scripts.pory"
	lock
# 77 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 78 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 80 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 82 "data/maps/Route9/scripts.pory"
	closemessage
# 83 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 84 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route9/scripts.pory"
	release
	return


Route9_EventScript_RoadBlock4::
# 89 "data/maps/Route9/scripts.pory"
	lock
# 90 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 91 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 93 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route9/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 95 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 97 "data/maps/Route9/scripts.pory"
	closemessage
# 98 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 99 "data/maps/Route9/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 100 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route9/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 102 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route9/scripts.pory"
	release
	return


Route9_EventScript_RoadBlock5::
# 107 "data/maps/Route9/scripts.pory"
	lock
# 108 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 109 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 111 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route9/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 113 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 115 "data/maps/Route9/scripts.pory"
	closemessage
# 116 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 117 "data/maps/Route9/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 118 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route9/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 120 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route9/scripts.pory"
	release
	return


Route9_EventScript_RoadBlock6::
# 125 "data/maps/Route9/scripts.pory"
	lock
# 126 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 127 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 129 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 131 "data/maps/Route9/scripts.pory"
	closemessage
# 132 "data/maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 133 "data/maps/Route9/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route9/scripts.pory"
	release
	return


Route9_Text_RoadBlocker::
# 137 "data/maps/Route9/scripts.pory"
	.string "You must turn back! The hill has fallen\n"
	.string "down and men are hard at work to clear\l"
	.string "the road.$"
