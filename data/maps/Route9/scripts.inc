Route9_MapScripts::
	.byte 0


Route9_EventScript_RoadBlocker1::
# 9 "data//maps/Route9/scripts.pory"
	lock
# 10 "data//maps/Route9/scripts.pory"
	faceplayer
# 11 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 12 "data//maps/Route9/scripts.pory"
	closemessage
# 13 "data//maps/Route9/scripts.pory"
	applymovement 13, Common_Movement_FaceDown
# 14 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 15 "data//maps/Route9/scripts.pory"
	release
	end


Route9_EventScript_RoadBlocker2::
# 20 "data//maps/Route9/scripts.pory"
	lock
# 21 "data//maps/Route9/scripts.pory"
	faceplayer
# 22 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 23 "data//maps/Route9/scripts.pory"
	closemessage
# 24 "data//maps/Route9/scripts.pory"
	applymovement 14, Common_Movement_FaceUp
# 25 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 26 "data//maps/Route9/scripts.pory"
	release
	end


Route9_EventScript_RoadBlocker3::
# 31 "data//maps/Route9/scripts.pory"
	lock
# 32 "data//maps/Route9/scripts.pory"
	faceplayer
# 33 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 34 "data//maps/Route9/scripts.pory"
	closemessage
# 35 "data//maps/Route9/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 36 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 37 "data//maps/Route9/scripts.pory"
	release
	end


Route9_EventScript_RoadBlocker4::
# 42 "data//maps/Route9/scripts.pory"
	lock
# 43 "data//maps/Route9/scripts.pory"
	faceplayer
# 44 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 45 "data//maps/Route9/scripts.pory"
	closemessage
# 46 "data//maps/Route9/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 47 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 48 "data//maps/Route9/scripts.pory"
	release
	end


Route9_EventScript_RoadBlock1::
# 53 "data//maps/Route9/scripts.pory"
	lock
# 54 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 55 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 56 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 57 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 58 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 59 "data//maps/Route9/scripts.pory"
	closemessage
# 60 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 61 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 62 "data//maps/Route9/scripts.pory"
	release
	return


Route9_EventScript_RoadBlock2::
# 66 "data//maps/Route9/scripts.pory"
	lock
# 67 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 68 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 69 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 70 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 71 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 72 "data//maps/Route9/scripts.pory"
	closemessage
# 73 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 74 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 75 "data//maps/Route9/scripts.pory"
	release
	return


Route9_EventScript_RoadBlock3::
# 79 "data//maps/Route9/scripts.pory"
	lock
# 80 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 81 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 82 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 83 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 84 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 85 "data//maps/Route9/scripts.pory"
	closemessage
# 86 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 87 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 88 "data//maps/Route9/scripts.pory"
	release
	return


Route9_EventScript_RoadBlock4::
# 92 "data//maps/Route9/scripts.pory"
	lock
# 93 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 94 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 95 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 96 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 97 "data//maps/Route9/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 98 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 99 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 100 "data//maps/Route9/scripts.pory"
	closemessage
# 101 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 102 "data//maps/Route9/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 103 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 104 "data//maps/Route9/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 105 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 106 "data//maps/Route9/scripts.pory"
	release
	return


Route9_EventScript_RoadBlock5::
# 110 "data//maps/Route9/scripts.pory"
	lock
# 111 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 112 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 113 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 114 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 115 "data//maps/Route9/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 116 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 117 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 118 "data//maps/Route9/scripts.pory"
	closemessage
# 119 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 120 "data//maps/Route9/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 121 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 122 "data//maps/Route9/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 123 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 124 "data//maps/Route9/scripts.pory"
	release
	return


Route9_EventScript_RoadBlock6::
# 128 "data//maps/Route9/scripts.pory"
	lock
# 129 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 130 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 131 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 132 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 133 "data//maps/Route9/scripts.pory"
	msgbox Route9_Text_RoadBlocker
# 134 "data//maps/Route9/scripts.pory"
	closemessage
# 135 "data//maps/Route9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 136 "data//maps/Route9/scripts.pory"
	waitmovement 0
# 137 "data//maps/Route9/scripts.pory"
	release
	return


Route9_Text_RoadBlocker::
# 140 "data//maps/Route9/scripts.pory"
	.string "You must turn back! The hill has fallen\n"
	.string "down and men are hard at work to clear\l"
	.string "the road.$"
