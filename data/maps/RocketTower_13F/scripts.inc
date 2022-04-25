RocketTower_13F_MapScripts::
	.byte 0


RocketTower_13F_EventScript_CheckPC::
	lockall
	setvar VAR_0x8004, 3
	special DoPCTurnOnEffect
	playse SE_PC_ON
	goto EventScript_PCMainMenu
	waitstate
	releaseall
	end


RocketTower_13F_EventScript_GioTrigger1::
	lock
	setvar VAR_ROCKETTOWER_STATE, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, RocketTower_13F_Movement_PanCamera1
	waitmovement 0
	special RemoveCameraObject
	call RocketTower_13F_EventScript_GioCutscene
	applymovement 3, RocketTower_13F_Movement_Blaine1
	applymovement 5, RocketTower_13F_Movement_Porygon1
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, RocketTower_13F_Movement_PanCamera1B
	waitmovement 0
	special RemoveCameraObject
	release
	end


RocketTower_13F_EventScript_GioTrigger2::
	lock
	setvar VAR_ROCKETTOWER_STATE, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, RocketTower_13F_Movement_PanCamera2
	waitmovement 0
	special RemoveCameraObject
	call RocketTower_13F_EventScript_GioCutscene
	applymovement 3, RocketTower_13F_Movement_Blaine2
	applymovement 5, RocketTower_13F_Movement_Porygon2
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, RocketTower_13F_Movement_PanCamera2B
	waitmovement 0
	special RemoveCameraObject
	release
	end


RocketTower_13F_EventScript_GioCutscene::
	load_field_pic 10, 190, 98
	msgbox RocketTower_13F_Text_Gio1
	closemessage
	destroy_field_pic 10
	delay 5
	load_field_pic 7, 190, 98
	msgbox RocketTower_13F_Text_Blaine1
	closemessage
	destroy_field_pic 7
	delay 5
	load_field_pic 10, 190, 98
	msgbox RocketTower_13F_Text_Gio2
	closemessage
	destroy_field_pic 10
	delay 5
	load_field_pic 11, 190, 98
	msgbox RocketTower_13F_Text_Mewtwo1
	closemessage
	destroy_field_pic 11
	delay 5
	return


RocketTower_13F_Movement_PanCamera1:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	step_end

RocketTower_13F_Movement_PanCamera2:
	walk_slow_right
	walk_slow_right
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	step_end

RocketTower_13F_Movement_PanCamera1B:
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

RocketTower_13F_Movement_PanCamera2B:
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_left
	walk_slow_left
	step_end

RocketTower_13F_Movement_Blaine1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RocketTower_13F_Movement_Blaine2:
	walk_left
	walk_left
	walk_diag_southwest
	walk_left
	step_end

RocketTower_13F_Movement_Porygon1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_diag_northwest
	walk_left
	step_end

RocketTower_13F_Movement_Porygon2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RocketTower_13F_Text_Gio1::
	.string "We stand upon the brink of destruction\n"
	.string "all of our plans will fail if we don't act$"

RocketTower_13F_Text_Blaine1::
	.string "But sir Mewtwo has not proven himself\n"
	.string "in any battle$"

RocketTower_13F_Text_Gio2::
	.string "Blaine we have no choice. The city guard\n"
	.string "has already fallen, the capital itself\l"
	.string "is under siege, and this report\l"
	.string "suggests our own tower has been\l"
	.string "penetrated by rebel spies. I must be\l"
	.string "off! MEWTWO will you obey?$"

RocketTower_13F_Text_Mewtwo1::
	.string "My lord I must obey every command$"
