Capital_MapScripts::
	.byte 0


Capital_EventScript_GioTrigger1::
	lock
	setvar VAR_CAPITAL_STATE, 1
	call Capital_EventScript_GioPresident
	release
	return


Capital_EventScript_GioTrigger2::
	lock
	setvar VAR_CAPITAL_STATE, 2
	call Capital_EventScript_GioPresident
	release
	return


Capital_EventScript_GioTrigger3::
	lock
	setvar VAR_CAPITAL_STATE, 3
	call Capital_EventScript_GioPresident
	release
	return


Capital_EventScript_GioTrigger4::
	lock
	setvar VAR_CAPITAL_STATE, 4
	call Capital_EventScript_GioPresident
	release
	return


Capital_EventScript_GioPresident::
	switch VAR_CAPITAL_STATE
	case 1, Capital_EventScript_GioPresident_3
	case 2, Capital_EventScript_GioPresident_3
	case 3, Capital_EventScript_GioPresident_4
	case 4, Capital_EventScript_GioPresident_4
Capital_EventScript_GioPresident_1:
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	special SpawnCameraObject
	switch VAR_CAPITAL_STATE
	case 1, Capital_EventScript_GioPresident_7
	case 2, Capital_EventScript_GioPresident_8
	case 3, Capital_EventScript_GioPresident_9
	case 4, Capital_EventScript_GioPresident_10
Capital_EventScript_GioPresident_5:
	waitmovement 0
	special RemoveCameraObject
	return

Capital_EventScript_GioPresident_3:
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	goto Capital_EventScript_GioPresident_1

Capital_EventScript_GioPresident_4:
	applymovement 3, Common_Movement_FaceRight
	waitmovement 0
	goto Capital_EventScript_GioPresident_1

Capital_EventScript_GioPresident_7:
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PanCamera1
	applymovement OBJ_EVENT_ID_FOLLOWER, Capital_Movement_PanCamera1
	goto Capital_EventScript_GioPresident_5

Capital_EventScript_GioPresident_8:
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera2
	goto Capital_EventScript_GioPresident_5

Capital_EventScript_GioPresident_9:
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera3
	goto Capital_EventScript_GioPresident_5

Capital_EventScript_GioPresident_10:
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera4
	goto Capital_EventScript_GioPresident_5


Capital_Movement_PanCamera1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Capital_Movement_PanCamera2:
	walk_diag_northeast
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Capital_Movement_PanCamera3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Capital_Movement_PanCamera4:
	walk_diag_northwest
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
