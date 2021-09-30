CityClara_School_MapScripts::
	.byte 0


CityClara_School_EventScript_Karlye::
	lock
	faceplayer
	checktrainerflag TRAINER_KARLYE
	goto_if 0, CityClara_School_EventScript_Karlye_2
CityClara_School_EventScript_Karlye_1:
	msgbox CityClara_School_Text_KarlyePost
	release
	return

CityClara_School_EventScript_Karlye_2:
	call CityClara_School_EventScript_IncrementSchoolVar
	trainerbattle_single TRAINER_KARLYE, CityClara_School_Text_KarlyeIntro, CityClara_School_Text_KarlyeLost
	goto CityClara_School_EventScript_Karlye_1


CityClara_School_EventScript_Ricky::
	lock
	faceplayer
	checktrainerflag TRAINER_RICKY
	goto_if 0, CityClara_School_EventScript_Ricky_2
CityClara_School_EventScript_Ricky_1:
	msgbox CityClara_School_Text_RickyPost
	release
	return

CityClara_School_EventScript_Ricky_2:
	call CityClara_School_EventScript_IncrementSchoolVar
	trainerbattle_single TRAINER_RICKY, CityClara_School_Text_RickyIntro, CityClara_School_Text_RickyLost
	goto CityClara_School_EventScript_Ricky_1


CityClara_School_EventScript_Peter::
	lock
	faceplayer
	checktrainerflag TRAINER_PETER
	goto_if 0, CityClara_School_EventScript_Peter_2
CityClara_School_EventScript_Peter_1:
	msgbox CityClara_School_Text_PeterPost
	release
	return

CityClara_School_EventScript_Peter_2:
	call CityClara_School_EventScript_IncrementSchoolVar
	trainerbattle_single TRAINER_PETER, CityClara_School_Text_PeterIntro, CityClara_School_Text_PeterLost
	goto CityClara_School_EventScript_Peter_1


CityClara_School_EventScript_Danny::
	lock
	faceplayer
	checktrainerflag TRAINER_DANNY
	goto_if 0, CityClara_School_EventScript_Danny_2
CityClara_School_EventScript_Danny_1:
	msgbox CityClara_School_Text_DannyPost
	release
	return

CityClara_School_EventScript_Danny_2:
	call CityClara_School_EventScript_IncrementSchoolVar
	trainerbattle_single TRAINER_DANNY, CityClara_School_Text_DannyIntro, CityClara_School_Text_DannyLost
	goto CityClara_School_EventScript_Danny_1


CityClara_School_EventScript_Ethan::
	trainerbattle_single TRAINER_ETHAN, CityClara_School_Text_EthanIntro, CityClara_School_Text_EthanLost
	msgbox CityClara_School_Text_EthanPost
	closemessage
	return


CityClara_School_EventScript_Sagis::
	trainerbattle_single TRAINER_SAGIS, CityClara_School_Text_SagisIntro, CityClara_School_Text_SagisLost
	msgbox CityClara_School_Text_SagisPost
	closemessage
	return


CityClara_School_EventScript_Emily::
	trainerbattle_single TRAINER_EMILY, CityClara_School_Text_EmilyIntro, CityClara_School_Text_EmilyLost
	msgbox CityClara_School_Text_EmilyPost
	closemessage
	return


CityClara_School_EventScript_Mr_Glasman::
	lock
	faceplayer
	compare VAR_CITYCLARA_SCHOOL_STATE, 4
	goto_if_lt CityClara_School_EventScript_Mr_Glasman_2
	compare VAR_CITYCLARA_SCHOOL_STATE, 4
	goto_if_eq CityClara_School_EventScript_Mr_Glasman_3
	msgbox CityClara_School_Text_Mr_GlasmanPost
CityClara_School_EventScript_Mr_Glasman_1:
	release
	return

CityClara_School_EventScript_Mr_Glasman_2:
	msgbox CityClara_School_Text_Mr_Glasman1
	closemessage
	goto CityClara_School_EventScript_Mr_Glasman_1

CityClara_School_EventScript_Mr_Glasman_3:
	call CityClara_School_EventScript_IncrementSchoolVar
	trainerbattle_single TRAINER_MR_GLASMAN, CityClara_School_Text_Mr_GlasmanIntro, CityClara_School_Text_Mr_GlasmanLost
	goto CityClara_School_EventScript_Mr_Glasman_1


CityClara_School_EventScript_Peeves::
	lock
	faceplayer
	msgbox CityClara_School_Text_PeevesPost
	closemessage
	release
	end


CityClara_School_EventScript_IncrementSchoolVar::
	switch VAR_CITYCLARA_SCHOOL_STATE
	case 0, CityClara_School_EventScript_IncrementSchoolVar_2
	case 1, CityClara_School_EventScript_IncrementSchoolVar_3
	case 2, CityClara_School_EventScript_IncrementSchoolVar_4
	case 3, CityClara_School_EventScript_IncrementSchoolVar_5
	case 4, CityClara_School_EventScript_IncrementSchoolVar_6
	case 5, CityClara_School_EventScript_IncrementSchoolVar_7
	case 6, CityClara_School_EventScript_IncrementSchoolVar_8
	case 7, CityClara_School_EventScript_IncrementSchoolVar_9
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

CityClara_School_EventScript_IncrementSchoolVar_7:
	setvar VAR_CITYCLARA_SCHOOL_STATE, 6
	return

CityClara_School_EventScript_IncrementSchoolVar_8:
	setvar VAR_CITYCLARA_SCHOOL_STATE, 7
	return

CityClara_School_EventScript_IncrementSchoolVar_9:
	setvar VAR_CITYCLARA_SCHOOL_STATE, 8
	return


CityClara_School_EventScript_Mrs_Sully::
	lockall
	faceplayer
	goto_if_unset FLAG_RECEIVED_CUT, CityClara_School_EventScript_Mrs_Sully_2
CityClara_School_EventScript_Mrs_Sully_1:
	msgbox CityClara_School_Text_Mrs_SullyPost
	closemessage
	releaseall
	end

CityClara_School_EventScript_Mrs_Sully_2:
	call CityClara_School_EventScript_IncrementSchoolVar
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


CityClara_School_EventScript_PeevesFight1::
	lock
	call CityClara_School_EventScript_IncrementSchoolVar
	applymovement 7, Common_Movement_ExclamationMark
	waitmovement 0
	trainerbattle_single TRAINER_PEEVES, CityClara_School_Text_PeevesIntro, CityClara_School_Text_PeevesLost
	release
	return


CityClara_School_EventScript_PeevesFight2::
	lock
	call CityClara_School_EventScript_IncrementSchoolVar
	applymovement 7, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 7, CityClara_School_Movement_Peeves_WalkDown
	waitmovement 0
	trainerbattle_single TRAINER_PEEVES, CityClara_School_Text_PeevesIntro, CityClara_School_Text_PeevesLost
	release
	return


CityClara_School_EventScript_Tyler::
	trainerbattle_double TRAINER_TYLER_AND_GABE, CityClara_School_Text_TylerIntro, CityClara_School_Text_TylerLost, Route104_Text_GinaNotEnoughMons
	msgbox CityClara_School_Text_TylerPost
	closemessage
	return


CityClara_School_EventScript_Gabe::
	trainerbattle_double TRAINER_TYLER_AND_GABE, CityClara_School_Text_GabeIntro, CityClara_School_Text_GabeLost, Route104_Text_GinaNotEnoughMons
	msgbox CityClara_School_Text_GabePost
	closemessage
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

CityClara_School_Movement_Peeves_FaceUp:
	face_up
	step_end

CityClara_School_Movement_Peeves_FaceDown:
	face_down
	step_end

CityClara_School_Movement_Peeves_WalkDown:
	walk_down
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

CityClara_School_Text_RickyIntro::
	.string "Will you vote for me as class president?$"

CityClara_School_Text_RickyLost::
	.string "I'm the most popular kid at this school!$"

CityClara_School_Text_RickyPost::
	.string "Everyone's coming over to my house\n"
	.string "today except for you. You're not\l"
	.string "allowed.$"

CityClara_School_Text_PeterIntro::
	.string "It's disgusting they let the common\n"
	.string "trash mingle with the elite at public\l"
	.string "school.$"

CityClara_School_Text_PeterLost::
	.string "Unhand me you vulgar barbarian!$"

CityClara_School_Text_PeterPost::
	.string "My daddy owns the inn across the\n"
	.string "street$"

CityClara_School_Text_DannyIntro::
	.string "Leave me alone, I want to play my game.$"

CityClara_School_Text_DannyLost::
	.string "I think you might have broke my GBA!$"

CityClara_School_Text_DannyPost::
	.string "Mommy gave me that toy that you just\n"
	.string "broke.$"

CityClara_School_Text_EthanIntro::
	.string "Wait, who are you? I only talk to girls!$"

CityClara_School_Text_EthanLost::
	.string "And that's exactly why we shouldn't\n"
	.string "speak.$"

CityClara_School_Text_EthanPost::
	.string "Dude, quit trying to stare into my eyes!$"

CityClara_School_Text_SagisIntro::
	.string "Wait bro, are you for real? We're gonna\n"
	.string "fight?$"

CityClara_School_Text_SagisLost::
	.string "Whatever dude, I heard you were crazy.$"

CityClara_School_Text_SagisPost::
	.string "Did I ever tell you about the time I\n"
	.string "hung out in a crack den in Gato?$"

CityClara_School_Text_EmilyIntro::
	.string "I think most of us are still practicing\n"
	.string "but I can hold my own among the best.$"

CityClara_School_Text_EmilyLost::
	.string "That isn't fair! You're gonna make me\n"
	.string "cry!$"

CityClara_School_Text_EmilyPost::
	.string "If I had a boyfriend he'd kick your ass.$"

CityClara_School_Text_Mr_Glasman1::
	.string "Before we start why don't you all\n"
	.string "review, among yourselves, in groups,\l"
	.string "for five minutes$"

CityClara_School_Text_Mr_GlasmanIntro::
	.string "Sheket Bevakasha, that means shut up!\n"
	.string "I need you to show me some more\l"
	.string "respect and recognize my doctorate.\l"
	.string "Now time for you to take a test...to\l"
	.string "pass or fail.$"

CityClara_School_Text_Mr_GlasmanLost::
	.string "I told you this before, it's DOCTOR G!$"

CityClara_School_Text_Mr_GlasmanPost::
	.string "You've proven yourself a brilliant pupil.\n"
	.string "Good luck in your education.$"

CityClara_School_Text_PeevesGrade1::
	.string "Hey you! Where do you think that you're\n"
	.string "going?$"

CityClara_School_Text_PeevesGrade2::
	.string "This class is only for the older kids,\n"
	.string "Come back when you've graduated first\l"
	.string "grade.$"

CityClara_School_Text_PeevesIntro::
	.string "Well looky here looks like there's a new\n"
	.string "kid. You think you're so grown up well\l"
	.string "time to learn what guys like me do to\l"
	.string "freshmeat like you.$"

CityClara_School_Text_PeevesLost::
	.string "I'll let you keep my lunch money this\n"
	.string "time...$"

CityClara_School_Text_PeevesPost::
	.string "Teacher made me monitor of the halls!$"

CityClara_School_Text_TylerIntro::
	.string "Get in looser, we're riding on the bus!$"

CityClara_School_Text_TylerLost::
	.string "Well go thy way. Thou shalt not from\n"
	.string "this grove!$"

CityClara_School_Text_TylerPost::
	.string "I'll see you in the morning...on the bus!$"

CityClara_School_Text_GabeIntro::
	.string "There is no reason for this senseless\n"
	.string "duel.$"

CityClara_School_Text_GabeLost::
	.string "Much wasted blood but none of it was\n"
	.string "mine.$"

CityClara_School_Text_GabePost::
	.string "Your history, the sum of all your crimes,\n"
	.string "will ever bring you, till you repent.$"

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
