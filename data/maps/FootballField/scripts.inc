FootballField_MapScripts::
	.byte 0


FootballField_EventScript_FieldTrigger1::
	lockall
	setvar VAR_TEMP_0, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
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
	setvar VAR_TEMP_0, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger2_1
	call FootballField_EventScript_FootballCoach
	return

FootballField_EventScript_FieldTrigger2_1:
	call FootballField_EventScript_FieldClosed
	return


FootballField_EventScript_FootballCoach::
	lockall
	faceplayer
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
	msgbox FootballField_Text_GymIntro
	closemessage
	call FootballField_EventScript_BeginRunningTest
	return

FootballField_EventScript_GymClass_2:
	msgbox FootballField_Text_NoFollowersAllowed
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	return


FootballField_EventScript_BeginRunningTest::
	fadescreen 0
	setobjectxyperm OBJ_EVENT_ID_PLAYER, 13, 31
	setobjectxyperm 1, 13, 5
	fadescreen 1
	return


FootballField_EventScript_FieldClosed::
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox FootballField_Text_FieldClosed
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	return


FootballField_Text_FieldClosed::
	.string "Hey you! Field's closed! We only want\n"
	.string "student atheletes touching this\l"
	.string "grass.$"

FootballField_Text_GymIntro::
	.string "Wait. Whats that? You're here from the\n"
	.string "college? Oh shit!\l"
	.string "Uhh...Ellohey....uhh...elcomeway...to...uhhh...assclay..uhhh.\l"
	.string "Look, here's the thing. Out here we\l"
	.string "don't speak that fancy academic talk\l"
	.string "we only speak championships. If you\l"
	.string "mention this to those stuffy bearded\l"
	.string "academics we'll beat the pulp out of\l"
	.string "you. Anyway I need to win this\l"
	.string "championship and if you're enrolled in\l"
	.string "Gym class I need you to help me.$"

FootballField_Text_NoFollowersAllowed::
	.string "Hey! We don't let those animals on our\n"
	.string "grass. Your Pokemon, it has to wait\l"
	.string "outside we don't want it here.$"

FootballField_Text_BeginRunningTest::
	.string "First things first let's see if you can\n"
	.string "run.$"
