Ardor_Uni_PsychologyClass_MapScripts::
	.byte 0


Ardor_Uni_PsychologyClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_PSYCHOLOGY
	goto_if 1, Ardor_Uni_PsychologyClass_EventScript_Teacher_2
	goto_if_set FLAG_PSYCHOLOGY_INTRO, Ardor_Uni_PsychologyClass_EventScript_Teacher_3
	setflag FLAG_PSYCHOLOGY_INTRO
	msgbox Ardor_Uni_PsychologyClass_Text_Intro
	closemessage
	msgbox Ardor_Uni_PsychologyClass_Text_BringPsychicType
	closemessage
Ardor_Uni_PsychologyClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_PsychologyClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_PsychologyClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_PsychologyClass_EventScript_Teacher_1

Ardor_Uni_PsychologyClass_EventScript_Teacher_3:
	specialvar VAR_RESULT, IsPsychicTypeInParty
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_PsychologyClass_EventScript_Teacher_7
	msgbox Ardor_Uni_PsychologyClass_Text_BringPsychicType
	closemessage
	goto Ardor_Uni_PsychologyClass_EventScript_Teacher_1

Ardor_Uni_PsychologyClass_EventScript_Teacher_7:
	call Ardor_Uni_PsychologyClass_EventScript_Test
	goto Ardor_Uni_PsychologyClass_EventScript_Teacher_1


Ardor_Uni_PsychologyClass_EventScript_Test::
	msgbox Ardor_Uni_PsychologyClass_Text_LessonComplete
	closemessage
	msgbox Ardor_Uni_Text_TestIntro
	closemessage
	trainerbattle_no_intro TRAINER_UNI_PSYCHOLOGY, Ardor_Uni_PsychologyClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_IncrementVar
	msgbox Ardor_Uni_PsychologyClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_PsychologyClass_Text_Intro::
	.string "Salve puer. Magistra Linda sum. Necesse\n"
	.string "est tibi docere psychologiam. Necesse\l"
	.string "est portare mihi quod me delectat.$"

Ardor_Uni_PsychologyClass_Text_BringPsychicType::
	.string "Reveni cum monstro psychologiae.$"

Ardor_Uni_PsychologyClass_Text_LessonComplete::
	.string "Revenisti cum monstro psychologiae.$"

Ardor_Uni_PsychologyClass_Text_TeacherBattleLost::
	.string "Melinda sum! Melinda!$"

Ardor_Uni_PsychologyClass_Text_ClassFinished::
	.string "Congratulatio! Iam studuisti\n"
	.string "psychologiam.$"
