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


Capital_EventScript_RemoveRockets::
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 31
	removeobject 32
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 25
	removeobject 29
	removeobject 26
	removeobject 27
	removeobject 30
	removeobject 28
	return


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
	load_field_pic 13, 190, 98
	msgbox Capital_Text_Soldier2
	closemessage
	destroy_field_pic 13
	delay 5
	applymovement 3, Common_Movement_FaceDown
	applymovement 5, Common_Movement_FaceDown
	waitmovement 0
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
	compare VAR_CAPITAL_STATE, 2
	goto_if_gt Capital_EventScript_GioPresident_23
	applymovement 3, Common_Movement_FaceLeft
Capital_EventScript_GioPresident_22:
	load_field_pic 13, 190, 98
	msgbox Capital_Text_Soldier3
	closemessage
	destroy_field_pic 13
	delay 5
	waitmovement 0
	switch VAR_CAPITAL_STATE
	case 1, Capital_EventScript_GioPresident_28
	case 2, Capital_EventScript_GioPresident_28
	case 3, Capital_EventScript_GioPresident_29
	case 4, Capital_EventScript_GioPresident_29
Capital_EventScript_GioPresident_26:
	load_field_pic 12, 190, 98
	msgbox Capital_Text_Cicero8
	closemessage
	destroy_field_pic 12
	delay 5
	waitmovement 0
	switch VAR_CAPITAL_STATE
	case 1, Capital_EventScript_GioPresident_32
	case 2, Capital_EventScript_GioPresident_32
	case 3, Capital_EventScript_GioPresident_33
	case 4, Capital_EventScript_GioPresident_33
Capital_EventScript_GioPresident_30:
	waitmovement 0
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio5
	closemessage
	destroy_field_pic 10
	delay 5
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_35
	applymovement 1, Capital_Movement_GioL1
	applymovement 31, Capital_Movement_PersianL1
Capital_EventScript_GioPresident_34:
	waitmovement 0
	switch VAR_CAPITAL_STATE
	case 1, Capital_EventScript_GioPresident_40
	case 2, Capital_EventScript_GioPresident_41
	case 3, Capital_EventScript_GioPresident_42
	case 4, Capital_EventScript_GioPresident_43
Capital_EventScript_GioPresident_38:
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio6
	closemessage
	destroy_field_pic 10
	delay 5
	waitmovement 0
	msgbox Capital_Text_PlayerJoinGio, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Capital_EventScript_GioPresident_45
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio7Yes
	closemessage
	destroy_field_pic 10
	delay 5
Capital_EventScript_GioPresident_44:
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio8
	closemessage
	destroy_field_pic 10
	delay 5
	load_field_pic 11, 190, 98
	msgbox Capital_Text_Mewtwo1
	closemessage
	destroy_field_pic 11
	delay 5
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_57
	applymovement 1, Common_Movement_FaceLeft
Capital_EventScript_GioPresident_56:
	waitmovement 0
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio9
	closemessage
	destroy_field_pic 10
	delay 5
	load_field_pic 11, 190, 98
	msgbox Capital_Text_Mewtwo2
	closemessage
	destroy_field_pic 11
	delay 5
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio10
	closemessage
	destroy_field_pic 10
	delay 5
	load_field_pic 11, 190, 98
	msgbox Capital_Text_Mewtwo3
	closemessage
	destroy_field_pic 11
	delay 5
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio11
	closemessage
	destroy_field_pic 10
	delay 5
	load_field_pic 11, 190, 98
	msgbox Capital_Text_Mewtwo4
	closemessage
	destroy_field_pic 11
	delay 5
	compare VAR_CAPITAL_STATE, 2
	goto_if_gt Capital_EventScript_GioPresident_61
Capital_EventScript_GioPresident_60:
	removeobject 2
	clearflag FLAG_ROUTE4_HIDEROCKETS
	addobject 32
	showobjectat 32, MAP_CAPITAL
	load_field_pic 15, 190, 98
	msgbox Capital_Text_Mewtwo5
	closemessage
	destroy_field_pic 15
	delay 5
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_64
	applymovement 32, Common_Movement_FaceRight
Capital_EventScript_GioPresident_63:
	load_field_pic 15, 190, 98
	msgbox Capital_Text_Mewtwo6
	closemessage
	destroy_field_pic 15
	delay 5
	applymovement 32, Common_Movement_FaceDown
	load_field_pic 15, 190, 98
	msgbox Capital_Text_Mewtwo7
	closemessage
	destroy_field_pic 15
	delay 5
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio12
	closemessage
	destroy_field_pic 10
	delay 5
	fadescreen 1
	setflag FLAG_ROUTE4_HIDEROCKETS
	removeobject 32
	fadescreen 0
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_68
	applymovement 1, Common_Movement_FaceRight
Capital_EventScript_GioPresident_67:
	waitmovement 0
	load_field_pic 10, 190, 98
	msgbox Capital_Text_GioIntro
	closemessage
	destroy_field_pic 10
	delay 5
	trainerbattle_no_intro TRAINER_GIO1, Capital_Text_GioLost
	load_field_pic 10, 190, 98
	msgbox Capital_Text_GioDefeat
	closemessage
	destroy_field_pic 10
	delay 5
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_72
	setobjectxy 30, 13, 5
	applymovement 30, Capital_Movement_SurgeL1
	applymovement 1, Common_Movement_FaceLeft
Capital_EventScript_GioPresident_71:
	load_field_pic 14, 190, 98
	msgbox Capital_Text_Surge1
	closemessage
	waitmovement 0
	msgbox Capital_Text_Surge2
	closemessage
	destroy_field_pic 14
	delay 5
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio13
	closemessage
	destroy_field_pic 10
	delay 5
	load_field_pic 14, 190, 98
	msgbox Capital_Text_Surge3
	closemessage
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Capital_Text_Surge4
	closemessage
	destroy_field_pic 14
	delay 5
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio14
	closemessage
	destroy_field_pic 10
	delay 5
	load_field_pic 14, 190, 98
	applymovement 30, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Capital_Text_Surge5
	closemessage
	destroy_field_pic 14
	delay 5
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio15
	closemessage
	destroy_field_pic 10
	delay 5
	compare VAR_CAPITAL_STATE, 3
	goto_if_gt Capital_EventScript_GioPresident_76
	applymovement 1, Capital_Movement_RE
	applymovement 31, Capital_Movement_RE
	applymovement 30, Capital_Movement_RE
Capital_EventScript_GioPresident_75:
	setflag FLAG_CAPITAL_HIDE_ROCKETS
	call Capital_EventScript_RemoveRockets
	special RemoveCameraObject
	setvar VAR_CAPITAL_STATE, 5
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
	applymovement 4, Capital_Movement_Soldier1L1
	applymovement 5, Capital_Movement_Soldier2L1
	applymovement 6, Capital_Movement_Soldier3L1
	goto Capital_EventScript_GioPresident_18

Capital_EventScript_GioPresident_23:
	applymovement 3, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_22

Capital_EventScript_GioPresident_28:
	applymovement 3, Capital_Movement_CiceroR2
	applymovement 5, Capital_Movement_CiceroR2
	applymovement 6, Capital_Movement_CiceroR2
	applymovement 4, Capital_Movement_CiceroR2
	goto Capital_EventScript_GioPresident_26

Capital_EventScript_GioPresident_29:
	applymovement 3, Capital_Movement_CiceroL2
	applymovement 5, Capital_Movement_CiceroL2
	applymovement 6, Capital_Movement_CiceroL2
	applymovement 4, Capital_Movement_CiceroL2
	goto Capital_EventScript_GioPresident_26

Capital_EventScript_GioPresident_32:
	applymovement 1, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_30

Capital_EventScript_GioPresident_33:
	applymovement 1, Common_Movement_FaceRight
	goto Capital_EventScript_GioPresident_30

Capital_EventScript_GioPresident_35:
	load_field_pic 10, 190, 98
	msgbox Capital_Text_GioMewtwoMove
	closemessage
	destroy_field_pic 10
	delay 5
	applymovement 2, Capital_Movement_MewtwoR1
	waitmovement 0
	applymovement 1, Capital_Movement_GioR1
	applymovement 31, Capital_Movement_PersianR1
	applymovement 2, Capital_Movement_MewtwoR2
	waitmovement 0
	applymovement 1, Capital_Movement_GioR2
	applymovement 31, Capital_Movement_PersianR2
	applymovement 2, Capital_Movement_MewtwoR3
	goto Capital_EventScript_GioPresident_34

Capital_EventScript_GioPresident_40:
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PanCamera1
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_GioPresident_48
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_41:
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PanCamera2
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_GioPresident_50
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_42:
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PanCamera3
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_GioPresident_52
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_43:
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PanCamera4
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_GioPresident_54
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_45:
	load_field_pic 10, 190, 98
	msgbox Capital_Text_Gio7No
	closemessage
	destroy_field_pic 10
	delay 5
	goto Capital_EventScript_GioPresident_44

Capital_EventScript_GioPresident_48:
	applymovement OBJ_EVENT_ID_FOLLOWER, Capital_Movement_PanCamera1
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_50:
	applymovement OBJ_EVENT_ID_FOLLOWER, Capital_Movement_Follower2A
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_52:
	applymovement OBJ_EVENT_ID_FOLLOWER, Capital_Movement_PanCamera3
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_54:
	applymovement OBJ_EVENT_ID_FOLLOWER, Capital_Movement_Follower4A
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_57:
	applymovement 1, Common_Movement_FaceRight
	goto Capital_EventScript_GioPresident_56

Capital_EventScript_GioPresident_61:
	setobjectxy 32, 17, 5
	goto Capital_EventScript_GioPresident_60

Capital_EventScript_GioPresident_64:
	applymovement 32, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_63

Capital_EventScript_GioPresident_68:
	applymovement 1, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_67

Capital_EventScript_GioPresident_72:
	setobjectxy 30, 28, 5
	applymovement 30, Capital_Movement_SurgeR1
	applymovement 1, Common_Movement_FaceRight
	goto Capital_EventScript_GioPresident_71

Capital_EventScript_GioPresident_76:
	applymovement 1, Capital_Movement_LE
	applymovement 31, Capital_Movement_LE
	applymovement 30, Capital_Movement_LE
	goto Capital_EventScript_GioPresident_75


Capital_EventScript_GioSouth::
	setflag FLAG_FOLLOWER_ALT_APPROACH
	end


Capital_EventScript_GioApproach::
	clearflag FLAG_FOLLOWER_ALT_APPROACH
	end


Capital_EventScript_MaxieTrigger1::
	lock
	setvar VAR_CAPITAL_STATE, 6
	call Capital_EventScript_MaxiePlaceR
	call Capital_EventScript_MaxieScene
	release
	return


Capital_EventScript_MaxieTrigger2::
	lock
	setvar VAR_CAPITAL_STATE, 7
	call Capital_EventScript_MaxiePlaceR
	call Capital_EventScript_MaxieScene
	release
	return


Capital_EventScript_MaxieTrigger3::
	lock
	setvar VAR_CAPITAL_STATE, 8
	call Capital_EventScript_MaxiePlaceL
	call Capital_EventScript_MaxieScene
	release
	return


Capital_EventScript_MaxieTrigger4::
	lock
	setvar VAR_CAPITAL_STATE, 9
	call Capital_EventScript_MaxiePlaceL
	call Capital_EventScript_MaxieScene
	release
	return


Capital_EventScript_RebelsScenePlace::
	removeobject 22
	setobjectxy 23, 18, 37
	setobjectxy 19, 18, 36
	setobjectxy 24, 23, 37
	setobjectxy 21, 23, 36
	return


Capital_EventScript_MaxiePlaceL::
	setobjectxy 20, 20, 35
	return


Capital_EventScript_MaxiePlaceR::
	setobjectxy 20, 21, 35
	return


Capital_EventScript_MaxieScene::
	call Capital_EventScript_RebelsScenePlace
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxieIntro
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_MaxieScene_2
Capital_EventScript_MaxieScene_1:
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	load_field_pic 9, 190, 98
	msgbox Capital_Text_Maxie1
	closemessage
	destroy_field_pic 9
	delay 5
	switch VAR_CAPITAL_STATE
	case 6, Capital_EventScript_MaxieScene_6
	case 7, Capital_EventScript_MaxieScene_7
	case 8, Capital_EventScript_MaxieScene_8
	case 9, Capital_EventScript_MaxieScene_9
Capital_EventScript_MaxieScene_4:
	compare VAR_CAPITAL_STATE, 8
	goto_if_lt Capital_EventScript_MaxieScene_11
	applymovement 20, Capital_Movement_Maxie1L
Capital_EventScript_MaxieScene_10:
	waitmovement 0
	load_field_pic 9, 190, 98
	msgbox Capital_Text_Maxie2
	closemessage
	destroy_field_pic 9
	delay 5
	applymovement 20, Common_Movement_FaceUp
	waitmovement 0
	load_field_pic 9, 190, 98
	msgbox Capital_Text_Maxie3
	closemessage
	destroy_field_pic 9
	delay 5
	applymovement 20, Common_Movement_FaceLeft
	waitmovement 0
	load_field_pic 9, 190, 98
	msgbox Capital_Text_Maxie4
	closemessage
	destroy_field_pic 9
	delay 5
	applymovement 20, Common_Movement_FaceUp
	waitmovement 0
	load_field_pic 9, 190, 98
	msgbox Capital_Text_Maxie5
	closemessage
	destroy_field_pic 9
	delay 5
	applymovement 20, Capital_Movement_MaxieE
	applymovement 23, Capital_Movement_Rebel1E
	applymovement 19, Capital_Movement_Rebel2E
	applymovement 24, Capital_Movement_Rebel3E
	applymovement 21, Capital_Movement_Rebel4E
	waitmovement 0
	setvar VAR_CAPITAL_STATE, 10
	return

Capital_EventScript_MaxieScene_2:
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxieIntro
	goto Capital_EventScript_MaxieScene_1

Capital_EventScript_MaxieScene_6:
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie1
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_MaxieScene_14
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_7:
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie2
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_MaxieScene_16
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_8:
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie3
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_MaxieScene_18
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_9:
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie4
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_MaxieScene_20
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_11:
	applymovement 20, Capital_Movement_Maxie1R
	goto Capital_EventScript_MaxieScene_10

Capital_EventScript_MaxieScene_14:
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie1
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_16:
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie2
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_18:
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie3
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_20:
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie4
	goto Capital_EventScript_MaxieScene_4


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

Capital_Movement_Soldier1L1:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_left
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
	walk_up
	face_left
	step_end

Capital_Movement_CiceroR2:
	walk_right
	walk_right
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
	walk_left
	walk_left
	step_end

Capital_Movement_MewtwoR1:
	walk_right
	walk_right
	step_end

Capital_Movement_GioR1:
	walk_right
	face_up
	step_end

Capital_Movement_PersianR1:
	walk_down
	step_end

Capital_Movement_MewtwoR2:
	walk_right
	walk_right
	step_end

Capital_Movement_GioR2:
	walk_up
	face_left
	step_end

Capital_Movement_PersianR2:
	walk_right
	face_left
	step_end

Capital_Movement_MewtwoR3:
	walk_right
	walk_right
	walk_right
	face_down
	step_end

Capital_Movement_GioL1:
	walk_up
	face_right
	step_end

Capital_Movement_PersianL1:
	walk_down
	face_right
	step_end

Capital_Movement_Follower2A:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Capital_Movement_Follower4A:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Capital_Movement_SurgeR1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Capital_Movement_SurgeL1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Capital_Movement_RE:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Capital_Movement_LE:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Capital_Movement_PlayerMaxieIntro:
	walk_down
	walk_down
	walk_down
	step_end

Capital_Movement_PlayerMaxie1:
	walk_down
	walk_down
	walk_right
	step_end

Capital_Movement_PlayerMaxie2:
	walk_down
	walk_down
	face_right
	step_end

Capital_Movement_PlayerMaxie3:
	walk_down
	walk_down
	face_left
	step_end

Capital_Movement_PlayerMaxie4:
	walk_down
	walk_down
	walk_left
	step_end

Capital_Movement_Maxie1R:
	walk_up
	walk_up
	face_left
	step_end

Capital_Movement_Maxie1L:
	walk_up
	walk_up
	face_right
	step_end

Capital_Movement_MaxieE:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Capital_Movement_Rebel1E:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Capital_Movement_Rebel2E:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Capital_Movement_Rebel3E:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Capital_Movement_Rebel4E:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
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
	.string "We've heard enough of that.$"

Capital_Text_Cicero8::
	.string "Democracy!$"

Capital_Text_Gio5::
	.string "You've done well {PLAYER} now you may\n"
	.string "approach me.$"

Capital_Text_GioMewtwoMove::
	.string "and stand aside Mewtwo permit he pass$"

Capital_Text_Gio6::
	.string "You must be powerful to destroy Blaine\n"
	.string "and find your way to our coronation.\l"
	.string "I've heard many rumours about you\l"
	.string "{PLAYER} and now I see you with my\l"
	.string "own two eyes. I am Giovanni your tyrant\l"
	.string "king. You may be great but Mewtwo far\l"
	.string "greater. I'm giving you the choice, you\l"
	.string "may join me or be destroyed. Now speak.\l"
	.string "What will we do?$"

Capital_Text_PlayerJoinGio::
	.string "Will you surrender to Giovanni?$"

Capital_Text_Gio7Yes::
	.string "You are more foolish than I had assumed\n"
	.string "if you believed that I would let you\l"
	.string "live.$"

Capital_Text_Gio7No::
	.string "Then your journey ends here you foolish\n"
	.string "boy.$"

Capital_Text_Gio8::
	.string "Mewtwo the time has come. Destroy the\n"
	.string "boy and then put a swift end to this\l"
	.string "revolt.$"

Capital_Text_Mewtwo1::
	.string "No.$"

Capital_Text_Gio9::
	.string "Mewtwo! I command you!$"

Capital_Text_Mewtwo2::
	.string "I won't obey. I am no slave of yours\n"
	.string "Giovanni.$"

Capital_Text_Gio10::
	.string "Mewtwo even you cannot break those\n"
	.string "cuffs$"

Capital_Text_Mewtwo3::
	.string "I am MEWTWO and I can break these\n"
	.string "cuffs.$"

Capital_Text_Gio11::
	.string "Don't try it!$"

Capital_Text_Mewtwo4::
	.string "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA!$"

Capital_Text_Mewtwo5::
	.string "At last I take a breath free from those\n"
	.string "chains. My strength is made ten fold\l"
	.string "now that I'm free!$"

Capital_Text_Mewtwo6::
	.string "You're wrong if you think you can\n"
	.string "control me, you're nothing more than a\l"
	.string "worthless human. What's more I cannot\l"
	.string "foresee a future where you will rule\l"
	.string "anything as a king, for you only misery\l"
	.string "and defeat.$"

Capital_Text_Mewtwo7::
	.string "I'm leaving now. Don't try and follow me.$"

Capital_Text_Gio12::
	.string "Mewtwo!$"

Capital_Text_GioIntro::
	.string "You bastard! This is all your fault!\n"
	.string "Looks like I'll have to deal with you\l"
	.string "myself...$"

Capital_Text_GioLost::
	.string "Alas! Fortuna has abandoned me.$"

Capital_Text_GioDefeat::
	.string "Betrayed, forsaken, and surrounded I\n"
	.string "am sure to perish on this damned\l"
	.string "day...My coronation become funeral.$"

Capital_Text_Surge1::
	.string "My lord!$"

Capital_Text_Surge2::
	.string "We must evacuate at once! The rebels\n"
	.string "have...$"

Capital_Text_Gio13::
	.string "Lieutenant Surge, be done, we're\n"
	.string "finished here, Mewtwo abandoned us the\l"
	.string "day is lost...$"

Capital_Text_Surge3::
	.string "Yes sir, but hope remains.$"

Capital_Text_Surge4::
	.string "The military remains faithfully\n"
	.string "obedient to you. If we retreat...if we\l"
	.string "regroup, return, counterattack, we\l"
	.string "might...$"

Capital_Text_Gio14::
	.string "I see no hope in this retreat, only a\n"
	.string "cowardly delay of death. Mewtwo is\l"
	.string "gone, we must...$"

Capital_Text_Surge5::
	.string "We need to leave! I'm going to bring you\n"
	.string "back to our fort or leave you here to\l"
	.string "die!$"

Capital_Text_Gio15::
	.string "OK, lead on.$"

Capital_Text_Maxie1::
	.string "To vicory and a better new world!$"

Capital_Text_Maxie2::
	.string "With your help {PLAYER} we've won the\n"
	.string "capital but Giovanni managed to\l"
	.string "escape! They must be headed to Fort\l"
	.string "Montgomery. You've demonstrated your\l"
	.string "ability to infiltrate well defended\l"
	.string "spaces but without the ability to\l"
	.string "change your very face I doubt you will\l"
	.string "succeed to penetrate the armor walls\l"
	.string "of Fort Montgomery.$"

Capital_Text_Maxie3::
	.string "And {PLAYER} I must repeat what I\n"
	.string "just said$"

Capital_Text_Maxie4::
	.string "To your credit we owe our newborn state\n"
	.string "and I thank you on behalf of us all.$"

Capital_Text_Maxie5::
	.string "Now forward to proclaim our nation!$"
