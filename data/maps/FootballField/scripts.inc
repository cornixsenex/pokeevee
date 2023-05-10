FootballField_MapScripts::
	.byte 0


FootballField_EventScript_RunningTest::
	call FootballField_EventScript_SetupRunningTest
	call FootballField_EventScript_StartRunningTest
	return


FootballField_EventScript_SetupRunningTest::
	fadescreen 1
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 27
	setobjectxyperm OBJ_EVENT_ID_PLAYER, 13, 27
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	setobjectxy 1, 13, 7
	setobjectxyperm 1, 13, 7
	setobjectmovementtype 1, MOVEMENT_TYPE_CHASE_PLAYER
	fadescreen 0
	special ResetCamera
	return


FootballField_EventScript_StartRunningTest::
	msgbox FootballField_Text_BeginRunningTest
	closemessage
	setvar VAR_TEMP_1, 1
	return


FootballField_EventScript_FieldTrigger1::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger1_1
	call FootballField_EventScript_FootballCoach
	return

FootballField_EventScript_FieldTrigger1_1:
	call FootballField_EventScript_FieldClosed
	return


FootballField_EventScript_FieldTrigger2::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger2_1
	call FootballField_EventScript_FootballCoach
	return

FootballField_EventScript_FieldTrigger2_1:
	call FootballField_EventScript_FieldClosed
	return


FootballField_EventScript_FieldTrigger3::
	lockall
	msgbox FootballField_EventScript_FieldTrigger3_Text_0
	closemessage
	releaseall
	end


FootballField_EventScript_FootballCoach::
	lockall
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FootballCoach_2
	call FootballField_EventScript_GymClass
FootballField_EventScript_FootballCoach_1:
	release
	end

FootballField_EventScript_FootballCoach_2:
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FootballCoach_1


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


FootballField_EventScript_FieldClosed::
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox FootballField_Text_FieldClosed
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	return


FootballField_EventScript_FieldTrigger3_Text_0:
	.string "THIS 3 TRIGGER$"

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
	.string "run.$"
