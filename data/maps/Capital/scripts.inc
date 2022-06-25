Capital_MapScripts::
	.byte 0


Capital_EventScript_DeskTest::
	lock
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_DeskTest_2
	msgbox Capital_Text_DeskTestNo
Capital_EventScript_DeskTest_1:
	closemessage
	release
	end

Capital_EventScript_DeskTest_2:
	msgbox Capital_Text_DeskTestYes
	goto Capital_EventScript_DeskTest_1


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
	waitmovement 0
	switch VAR_CAPITAL_STATE
	case 1, Capital_EventScript_GioPresident_7
	case 2, Capital_EventScript_GioPresident_7
	case 3, Capital_EventScript_GioPresident_8
	case 4, Capital_EventScript_GioPresident_8
Capital_EventScript_GioPresident_5:
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	special SpawnCameraObject
	switch VAR_CAPITAL_STATE
	case 1, Capital_EventScript_GioPresident_11
	case 2, Capital_EventScript_GioPresident_12
	case 3, Capital_EventScript_GioPresident_13
	case 4, Capital_EventScript_GioPresident_14
Capital_EventScript_GioPresident_9:
	waitmovement 0
	special RemoveCameraObject
	load_field_pic 12, 190, 98
	msgbox Capital_Text_Cicero1
	closemessage
	destroy_field_pic 12
	delay 5
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio1
	closemessage
	destroy_field_pic 10
	delay 5
	compare VAR_CAPITAL_STATE, 2
	goto_if_gt Capital_EventScript_GioPresident_16
Capital_EventScript_GioPresident_15:
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio2
	closemessage
	destroy_field_pic 10
	delay 5
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	load_field_pic 12, 190, 98
	msgbox Capital_Text_Cicero2
	closemessage
	applymovement 3, Common_Movement_FaceRight
	waitmovement 0
	msgbox Capital_Text_Cicero3
	closemessage
	destroy_field_pic 12
	delay 5
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio3
	closemessage
	destroy_field_pic 10
	delay 5
	applymovement 5, Capital_Movement_Soldier2A
	applymovement 6, Capital_Movement_Soldier3A
	waitmovement 0
	load_field_pic 13, 190, 98
	msgbox Capital_Text_Soldier1
	closemessage
	destroy_field_pic 13
	delay 5
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	load_field_pic 12, 190, 98
	msgbox Capital_Text_Cicero4
	closemessage
	destroy_field_pic 12
	delay 5
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio4
	closemessage
	destroy_field_pic 10
	delay 5
	load_field_pic 12, 190, 98
	msgbox Capital_Text_Cicero5
	closemessage
	destroy_field_pic 12
	delay 5
	applymovement 3, Common_Movement_FaceDown
	applymovement 5, Common_Movement_FaceDown
	waitmovement 0
	load_field_pic 13, 190, 98
	msgbox Capital_Text_Soldier2
	closemessage
	destroy_field_pic 13
	delay 5
	load_field_pic 12, 190, 98
	msgbox Capital_Text_Cicero6
	closemessage
	destroy_field_pic 12
	delay 5
	switch VAR_CAPITAL_STATE
	case 1, Capital_EventScript_GioPresident_20
	case 2, Capital_EventScript_GioPresident_20
	case 3, Capital_EventScript_GioPresident_21
	case 4, Capital_EventScript_GioPresident_21
Capital_EventScript_GioPresident_18:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	load_field_pic 12, 190, 98
	msgbox Capital_Text_Cicero7
	closemessage
	destroy_field_pic 12
	delay 5
	load_field_pic 13, 190, 98
	msgbox Capital_Text_Soldier3
	closemessage
	destroy_field_pic 13
	delay 5
	switch VAR_CAPITAL_STATE
	case 1, Capital_EventScript_GioPresident_24
	case 2, Capital_EventScript_GioPresident_24
	case 3, Capital_EventScript_GioPresident_25
	case 4, Capital_EventScript_GioPresident_25
Capital_EventScript_GioPresident_22:
	load_field_pic 12, 190, 98
	msgbox Capital_Text_Cicero8
	closemessage
	destroy_field_pic 12
	delay 5
	waitmovement 0
	return

Capital_EventScript_GioPresident_3:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Capital_EventScript_GioPresident_1

Capital_EventScript_GioPresident_4:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_1

Capital_EventScript_GioPresident_7:
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	goto Capital_EventScript_GioPresident_5

Capital_EventScript_GioPresident_8:
	applymovement 3, Common_Movement_FaceRight
	waitmovement 0
	goto Capital_EventScript_GioPresident_5

Capital_EventScript_GioPresident_11:
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera1
	goto Capital_EventScript_GioPresident_9

Capital_EventScript_GioPresident_12:
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera2
	goto Capital_EventScript_GioPresident_9

Capital_EventScript_GioPresident_13:
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera3
	goto Capital_EventScript_GioPresident_9

Capital_EventScript_GioPresident_14:
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera4
	goto Capital_EventScript_GioPresident_9

Capital_EventScript_GioPresident_16:
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	goto Capital_EventScript_GioPresident_15

Capital_EventScript_GioPresident_20:
	applymovement 3, Capital_Movement_CiceroR1
	applymovement 5, Capital_Movement_Soldier2R1
	applymovement 6, Capital_Movement_Soldier3R1
	goto Capital_EventScript_GioPresident_18

Capital_EventScript_GioPresident_21:
	applymovement 3, Capital_Movement_CiceroL1
	applymovement 5, Capital_Movement_Soldier2L1
	applymovement 6, Capital_Movement_Soldier3L1
	goto Capital_EventScript_GioPresident_18

Capital_EventScript_GioPresident_24:
	applymovement 3, Capital_Movement_CiceroR2
	applymovement 5, Capital_Movement_CiceroR2
	applymovement 6, Capital_Movement_CiceroR2
	goto Capital_EventScript_GioPresident_22

Capital_EventScript_GioPresident_25:
	applymovement 3, Capital_Movement_CiceroL2
	applymovement 5, Capital_Movement_CiceroL2
	applymovement 6, Capital_Movement_CiceroL2
	goto Capital_EventScript_GioPresident_22


Capital_EventScript_GioSouth::
	setflag FLAG_FOLLOWER_ALT_APPROACH
	end


Capital_EventScript_GioApproach::
	clearflag FLAG_FOLLOWER_ALT_APPROACH
	end


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

Capital_Movement_Soldier2A:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	face_up
	step_end

Capital_Movement_Soldier3A:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

Capital_Movement_CiceroR1:
	walk_down
	walk_right
	walk_right
	walk_up
	walk_right
	face_up
	step_end

Capital_Movement_Soldier2R1:
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	step_end

Capital_Movement_Soldier3R1:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_up
	face_right
	step_end

Capital_Movement_CiceroL1:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	face_down
	step_end

Capital_Movement_Soldier2L1:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	step_end

Capital_Movement_Soldier3L1:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_up
	face_left
	step_end

Capital_Movement_CiceroR2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Capital_Movement_CiceroL2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Capital_Text_DeskTestYes::
	.string "Yup you have a follower rn$"

Capital_Text_DeskTestNo::
	.string "Nope you aint got a follwer rn$"

Capital_Text_Cicero1::
	.string "My god! Giovanni! They're here!$"

Capital_Text_Gio1::
	.string "You fool...$"

Capital_Text_Gio2::
	.string "You call yourself a man, old Cicero,\n"
	.string "shaking and crying at merely the sight\l"
	.string "of this child? You're can't master your\l"
	.string "own emotions let alone this rebellion.\l"
	.string "Thererfore I relieve you of your duties\l"
	.string "and resume my title as head of state.$"

Capital_Text_Cicero2::
	.string "You can't do that! It's treason!$"

Capital_Text_Cicero3::
	.string "Guards! Treason!$"

Capital_Text_Gio3::
	.string "You still don't understand there is a\n"
	.string "new power rising.$"

Capital_Text_Soldier1::
	.string "We serve Giovanni.$"

Capital_Text_Cicero4::
	.string "You traitor! Can't you see this is...$"

Capital_Text_Gio4::
	.string "Enough! Old fool, can't you see this is\n"
	.string "my hour? Be gone and lament your\l"
	.string "failures in vain.$"

Capital_Text_Cicero5::
	.string "You can't do this!$"

Capital_Text_Soldier2::
	.string "Let's go.$"

Capital_Text_Cicero6::
	.string "I'm still the president!$"

Capital_Text_Cicero7::
	.string "I was elected by the senators$"

Capital_Text_Soldier3::
	.string "Enough of that.$"

Capital_Text_Cicero8::
	.string "Democracy!$"
