FootballField_MapScripts::
	.byte 0


FootballField_EventScript_RunningTest::
	call FootballField_EventScript_SetupRunningTest
	call FootballField_EventScript_StartRunningTest
	return


FootballField_EventScript_FinishClass::
	msgbox FootballField_Text_ClassFinished
	closemessage
	fadescreen 1
	setobjectxy OBJ_EVENT_ID_PLAYER, 14, 36
	setobjectxyperm OBJ_EVENT_ID_PLAYER, 14, 36
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	setobjectxy 1, 14, 35
	setobjectxyperm 1, 14, 35
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	turnobject 1, DIR_SOUTH
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	special ResetCamera
	fadescreen 0
	msgbox FootballField_Text_CoachIntro
	closemessage
	trainerbattle_no_intro TRAINER_UNI_GYM, FootballField_Text_CoachLost
	msgbox FootballField_Text_CoachPost
	closemessage
	clearflag FLAG_OPEN_CLASS_GYM
	warpsilent MAP_FOOTBALL_FIELD, 14, 36
	end


FootballField_EventScript_CatchingTest::
	call FootballField_EventScript_FinishClass
	return


FootballField_EventScript_SetupRunningTest::
	fadescreen 1
	lockall
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 33
	setobjectxyperm OBJ_EVENT_ID_PLAYER, 13, 33
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	setobjectxy 1, 13, 7
	setobjectxyperm 1, 13, 7
	setobjectmovementtype 1, MOVEMENT_TYPE_CHASE_PLAYER
	setobjectxy 7, 10, 9
	setobjectxyperm 7, 10, 9
	setobjectmovementtype 7, MOVEMENT_TYPE_CHASE_PLAYER
	setobjectxy 8, 17, 9
	setobjectxyperm 8, 17, 9
	setobjectmovementtype 8, MOVEMENT_TYPE_CHASE_PLAYER
	setobjectxy 9, 13, 29
	setobjectxyperm 9, 13, 29
	setobjectmovementtype 9, MOVEMENT_TYPE_CHASE_PLAYER
	setobjectxy 10, 8, 25
	setobjectxyperm 10, 8, 25
	setobjectmovementtype 10, MOVEMENT_TYPE_CHASE_PLAYER
	removeobject 11
	setobjectxy 11, 7, 27
	setobjectxyperm 11, 7, 27
	setobjectmovementtype 11, MOVEMENT_TYPE_CHASE_PLAYER
	addobject 11
	setobjectxy 2, 17, 26
	setobjectxyperm 2, 17, 26
	setobjectmovementtype 2, MOVEMENT_TYPE_CHASE_PLAYER
	setobjectxy 3, 13, 21
	setobjectxyperm 3, 13, 21
	setobjectmovementtype 3, MOVEMENT_TYPE_CHASE_PLAYER
	setobjectxy 4, 9, 17
	setobjectxyperm 4, 9, 17
	setobjectmovementtype 4, MOVEMENT_TYPE_CHASE_PLAYER
	setobjectxy 5, 17, 17
	setobjectxyperm 5, 17, 17
	setobjectmovementtype 5, MOVEMENT_TYPE_CHASE_PLAYER
	setobjectxy 6, 17, 12
	setobjectxyperm 6, 17, 12
	setobjectmovementtype 6, MOVEMENT_TYPE_CHASE_PLAYER
	turnobject 7, DIR_SOUTH
	turnobject 8, DIR_SOUTH
	turnobject 9, DIR_SOUTH
	turnobject 10, DIR_SOUTH
	turnobject 11, DIR_SOUTH
	turnobject 2, DIR_SOUTH
	turnobject 3, DIR_SOUTH
	turnobject 4, DIR_SOUTH
	turnobject 5, DIR_SOUTH
	turnobject 6, DIR_SOUTH
	special ResetCamera
	fadescreen 0
	return


FootballField_EventScript_StartRunningTest::
	lockall
	msgbox FootballField_Text_BeginRunningTest
	closemessage
	setvar VAR_TEMP_1, 1
	releaseall
	return


FootballField_EventScript_DoNotLeaveField::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox FootballField_Text_DoNotLeaveField
	closemessage
	switch VAR_TEMP_1
	case 1, FootballField_EventScript_DoNotLeaveField_2
	return

FootballField_EventScript_DoNotLeaveField_2:
	call FootballField_EventScript_RunningTest
	return


FootballField_EventScript_FieldTrigger1::
	lockall
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger1_2
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger1_1:
	releaseall
	end

FootballField_EventScript_FieldTrigger1_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FieldTrigger1_5
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger1_6
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger1_1

FootballField_EventScript_FieldTrigger1_5:
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FieldTrigger1_1

FootballField_EventScript_FieldTrigger1_6:
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger1_1


FootballField_EventScript_FieldTrigger2::
	lockall
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger2_2
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger2_1:
	releaseall
	end

FootballField_EventScript_FieldTrigger2_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FieldTrigger2_5
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger2_6
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger2_1

FootballField_EventScript_FieldTrigger2_5:
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FieldTrigger2_1

FootballField_EventScript_FieldTrigger2_6:
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger2_1


FootballField_EventScript_FieldTrigger3::
	lockall
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger3_2
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger3_1:
	releaseall
	end

FootballField_EventScript_FieldTrigger3_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger3_5
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger3_1

FootballField_EventScript_FieldTrigger3_5:
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger3_1


FootballField_EventScript_EndZoneTrigger::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	call FootballField_EventScript_EndZone
	releaseall
	end


FootballField_EventScript_EndZone::
	switch VAR_TEMP_1
	case 0, FootballField_EventScript_EndZone_2
	case 1, FootballField_EventScript_EndZone_3
	return

FootballField_EventScript_EndZone_2:
	msgbox FootballField_EventScript_EndZone_Text_0
	closemessage
	return

FootballField_EventScript_EndZone_3:
	setvar VAR_TEMP_1, 2
	call FootballField_EventScript_CatchingTest
	return


FootballField_EventScript_FootballCoach::
	lockall
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FootballCoach_2
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FootballCoach_3
	call FootballField_EventScript_GymClass
FootballField_EventScript_FootballCoach_1:
	release
	end

FootballField_EventScript_FootballCoach_2:
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FootballCoach_1

FootballField_EventScript_FootballCoach_3:
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FootballCoach_1


FootballField_EventScript_ClassFinished::
	msgbox FootballField_Text_CoachComplete
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	return


FootballField_EventScript_GymClass::
	goto_if_set FLAG_FOLLOWER_ACTIVE, FootballField_EventScript_GymClass_2
	msgbox FootballField_Text_FieldClosed
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox FootballField_Text_GymIntro
	closemessage
	delay 30
	call FootballField_EventScript_RunningTest
	return

FootballField_EventScript_GymClass_2:
	msgbox FootballField_Text_NoFollowersAllowed
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	return


FootballField_EventScript_CollisionYoungster::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox FootballField_Text_RunningTestFail
	closemessage
	call FootballField_EventScript_SetupRunningTest
	call FootballField_EventScript_StartRunningTest
	releaseall
	return


FootballField_EventScript_FieldClosed::
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox FootballField_Text_FieldClosed
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	return


FootballField_EventScript_EndZone_Text_0:
	.string "EndZone Trigger Var 0$"

FootballField_Text_FieldClosed::
	.string "Hey you! Field's closed! We only want\n"
	.string "student atheletes touching this\l"
	.string "grass.$"

FootballField_Text_GymIntro::
	.string "Wait. Whats that? You're here from the\n"
	.string "college? Oh shit! Uhh... Ellohey.... uhh...\l"
	.string "elcomeway... to... uhhh... assclay.. uhhh.\l"
	.string "Oh fuck it! Look, here's the thing. Out\l"
	.string "here we don't speak that fancy\l"
	.string "academic talk we only speak\l"
	.string "championships. If you mention this to\l"
	.string "those stuffy bearded academics we'll\l"
	.string "beat the pulp out of you. Anyway I need\l"
	.string "to win this championship and if you're\l"
	.string "enrolled in Gym class I need you to help\l"
	.string "me.$"

FootballField_Text_NoFollowersAllowed::
	.string "Hey! We don't let those filthy animals\n"
	.string "on our grass. Your Pokemon, it has to\l"
	.string "wait outside we don't want it here.$"

FootballField_Text_BeginRunningTest::
	.string "First things first let's see if you can\n"
	.string "run. Try to make it to the other side of\l"
	.string "the field without letting any of my\l"
	.string "boys hit you first.$"

FootballField_Text_DoNotLeaveField::
	.string "Hey! Where do you think you're going?\n"
	.string "Get your lazy ass back on the field and\l"
	.string "finish the drill!$"

FootballField_Text_ClassFinished::
	.string "Hey what do you think you're doing? You\n"
	.string "call that running? Get off my field!$"

FootballField_Text_CoachIntro::
	.string "We can't use some useless slug like you.\n"
	.string "I'll teach you how to hustle. Come here!$"

FootballField_Text_CoachLost::
	.string "I think I broke something...$"

FootballField_Text_CoachPost::
	.string "I'll be alright. Get out of here kid you\n"
	.string "passed the class.$"

FootballField_Text_CoachComplete::
	.string "I told you already you passed the class\n"
	.string "now get out of here.$"

FootballField_Text_RunningTestFail::
	.string "Hey! One of my boys got ya! You're too\n"
	.string "slow out there do it again!$"
