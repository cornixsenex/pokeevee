CityClara_School_MapScripts::
	.byte 0


CityClara_School_EventScript_Karlye::
	lock
	call CityClara_School_EventScript_IncrementSchoolVar
	trainerbattle_single TRAINER_KARLYE, CityClara_School_Text_KarlyeIntro, CityClara_School_Text_KarlyeLost
	msgbox CityClara_School_Text_KarlyePost
	release
	return


CityClara_School_EventScript_IncrementSchoolVar::
	switch VAR_CITYCLARA_SCHOOL_STATE
	case 0, CityClara_School_EventScript_IncrementSchoolVar_2
	case 1, CityClara_School_EventScript_IncrementSchoolVar_3
	case 2, CityClara_School_EventScript_IncrementSchoolVar_4
	case 3, CityClara_School_EventScript_IncrementSchoolVar_5
	case 4, CityClara_School_EventScript_IncrementSchoolVar_6
	return

CityClara_School_EventScript_IncrementSchoolVar_2:
	setvar VAR_CITYCLARA_SCHOOL_STATE, 1
	return

CityClara_School_EventScript_IncrementSchoolVar_3:
	setvar VAR_CITYCLARA_SCHOOL_STATE, 2
	return

CityClara_School_EventScript_IncrementSchoolVar_4:
	setvar VAR_CITYCLARA_SCHOOL_STATE, 3
	return

CityClara_School_EventScript_IncrementSchoolVar_5:
	setvar VAR_CITYCLARA_SCHOOL_STATE, 4
	return

CityClara_School_EventScript_IncrementSchoolVar_6:
	setvar VAR_CITYCLARA_SCHOOL_STATE, 5
	return


CityClara_School_EventScript_Mrs_Sully::
	lockall
	goto_if_unset FLAG_RECEIVED_CUT, CityClara_School_EventScript_Mrs_Sully_2
CityClara_School_EventScript_Mrs_Sully_1:
	msgbox CityClara_School_Text_Mrs_SullyPost
	closemessage
	releaseall
	end

CityClara_School_EventScript_Mrs_Sully_2:
	faceplayer
	msgbox CityClara_School_Text_Mrs_SullyIntroA
	closemessage
	trainerbattle_no_intro TRAINER_MRS_SULLY, CityClara_School_Text_Mrs_SullyLost
	call CityClara_School_EventScript_GiveCut
	goto CityClara_School_EventScript_Mrs_Sully_1


CityClara_School_EventScript_GiveCut::
	lock
	setflag FLAG_BADGE01_GET
	msgbox CityClara_School_Text_Mrs_SullyDefeat
	giveitem ITEM_HM01
	msgbox CityClara_School_Text_ExplainCut
	setflag FLAG_RECEIVED_CUT
	release
	end


CityClara_School_EventScript_GradeTrigger1::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	msgbox CityClara_School_Text_PeevesGrade1
	closemessage
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_School_Movement_PlayerGrade
	applymovement 7, CityClara_School_Movement_PeevesGrade1
	waitmovement 0
	msgbox CityClara_School_Text_PeevesGrade2
	closemessage
	applymovement 7, CityClara_School_Movement_PeevesGrade1Return
	waitmovement 0
	release
	return


CityClara_School_EventScript_GradeTrigger2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	msgbox CityClara_School_Text_PeevesGrade1
	waitmovement 0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_School_Movement_PlayerGrade
	applymovement 7, CityClara_School_Movement_PeevesGrade2
	waitmovement 0
	msgbox CityClara_School_Text_PeevesGrade2
	closemessage
	applymovement 7, CityClara_School_Movement_PeevesGrade2Return
	waitmovement 0
	release
	return


CityClara_School_Movement_PlayerGrade:
	walk_left
	face_right
	step_end

CityClara_School_Movement_PeevesGrade1:
	walk_down
	face_left
	step_end

CityClara_School_Movement_PeevesGrade2:
	walk_down
	walk_down
	face_left
	step_end

CityClara_School_Movement_PeevesGrade1Return:
	walk_up
	face_down
	step_end

CityClara_School_Movement_PeevesGrade2Return:
	walk_up
	walk_up
	face_down
	step_end

CityClara_School_Text_KarlyeIntro::
	.string "Watch out I'm going to give you coodies!$"

CityClara_School_Text_KarlyeLost::
	.string "Looks like you just gave your coodies\n"
	.string "to me.$"

CityClara_School_Text_KarlyePost::
	.string "Sometimes I hang out after school\n"
	.string "behind the school and sell my cudies to\l"
	.string "the boys.$"

CityClara_School_Text_PeevesGrade1::
	.string "Hey you! Where do you think that you're\n"
	.string "going?$"

CityClara_School_Text_PeevesGrade2::
	.string "This class is only for the older kids,\n"
	.string "Come back when you've graduated first\l"
	.string "grade.$"

CityClara_School_Text_Mrs_SullyIntroA::
	.string "I've not seen you before you some\n"
	.string "truant?$"

CityClara_School_Text_Mrs_SullyIntro::
	.string "Win this battle and I'll give you cut$"

CityClara_School_Text_Mrs_SullyLost::
	.string "I can't believe a kid like you just won$"

CityClara_School_Text_Mrs_SullyDefeat::
	.string "That was a thrill! {PLAYER} you are so\n"
	.string "advanced. I've never had a student\l"
	.string "make me feel like they were the one who\l"
	.string "was in control.$"

CityClara_School_Text_Mrs_SullyPost::
	.string "You can come back anytime to study$"

CityClara_School_Text_ExplainCut::
	.string "This is a Hidden Move, HM for short,\n"
	.string "which will allow you to cut down small\l"
	.string "trees.$"
