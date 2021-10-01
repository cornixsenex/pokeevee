CityClara_Church_MapScripts::
	.byte 0


CityClara_Church_EventScript_BlainTrigger1::
	lockall
	setvar VAR_CITYCLARA_STATE, 2
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera1A
	waitmovement 0
	special RemoveCameraObject
	call CityClara_Church_EventScript_BlaineCutscene
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera1B
	waitmovement 0
	special RemoveCameraObject
	releaseall
	end


CityClara_Church_EventScript_BlainTrigger2::
	lockall
	setvar VAR_CITYCLARA_STATE, 2
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera2A
	waitmovement 0
	special RemoveCameraObject
	call CityClara_Church_EventScript_BlaineCutscene
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera2B
	waitmovement 0
	special RemoveCameraObject
	releaseall
	end


CityClara_Church_EventScript_BlainTrigger3::
	lockall
	setvar VAR_CITYCLARA_STATE, 2
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera3A
	waitmovement 0
	special RemoveCameraObject
	call CityClara_Church_EventScript_BlaineCutscene
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera3B
	waitmovement 0
	special RemoveCameraObject
	releaseall
	end


CityClara_Church_EventScript_BlainTrigger4::
	lockall
	setvar VAR_CITYCLARA_STATE, 2
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera4A
	waitmovement 0
	special RemoveCameraObject
	call CityClara_Church_EventScript_BlaineCutscene
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera4B
	waitmovement 0
	special RemoveCameraObject
	releaseall
	end


CityClara_Church_EventScript_BlainTrigger5::
	lockall
	setvar VAR_CITYCLARA_STATE, 2
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera5A
	waitmovement 0
	special RemoveCameraObject
	call CityClara_Church_EventScript_BlaineCutscene
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera5B
	waitmovement 0
	special RemoveCameraObject
	releaseall
	end


CityClara_Church_EventScript_BlainTrigger6::
	lockall
	setvar VAR_CITYCLARA_STATE, 2
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera6A
	waitmovement 0
	special RemoveCameraObject
	call CityClara_Church_EventScript_BlaineCutscene
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera6B
	waitmovement 0
	special RemoveCameraObject
	releaseall
	end


CityClara_Church_EventScript_BlaineCutscene::
	load_field_pic 6, 190, 98
	msgbox CityClara_Church_EventScript_Sage1
	destroy_field_pic 6
	closemessage
	return


CityClara_Church_Movement_PanCamera1A:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_diag_northeast
	walk_slow_right
	walk_slow_right
	step_end

CityClara_Church_Movement_PanCamera1B:
	walk_slow_left
	walk_slow_left
	walk_slow_diag_southwest
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

CityClara_Church_Movement_PanCamera2A:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	step_end

CityClara_Church_Movement_PanCamera2B:
	walk_slow_diag_southwest
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

CityClara_Church_Movement_PanCamera3A:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	step_end

CityClara_Church_Movement_PanCamera3B:
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

CityClara_Church_Movement_PanCamera4A:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_diag_northwest
	walk_slow_left
	walk_slow_left
	step_end

CityClara_Church_Movement_PanCamera4B:
	walk_slow_right
	walk_slow_right
	walk_slow_diag_southeast
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

CityClara_Church_Movement_PanCamera5A:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_diag_northwest
	walk_slow_diag_northwest
	step_end

CityClara_Church_Movement_PanCamera5B:
	walk_slow_diag_southeast
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

CityClara_Church_Movement_PanCamera6A:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_diag_northwest
	walk_slow_diag_northwest
	walk_slow_diag_northwest
	step_end

CityClara_Church_Movement_PanCamera6B:
	walk_slow_diag_southeast
	walk_slow_diag_southeast
	walk_slow_diag_southeast
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

CityClara_Church_EventScript_Sage1::
	.string "I beg of you, please, stop what you're\n"
	.string "doing.$"
