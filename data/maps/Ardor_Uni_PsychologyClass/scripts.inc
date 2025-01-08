Ardor_Uni_PsychologyClass_MapScripts::
	.byte 0


Ardor_Uni_PsychologyClass_EventScript_Teacher::
# 7 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	lock
# 8 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	faceplayer
# 9 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	checktrainerflag TRAINER_UNI_PSYCHOLOGY
	goto_if 1, Ardor_Uni_PsychologyClass_EventScript_Teacher_2
# 12 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	goto_if_set FLAG_PSYCHOLOGY_INTRO, Ardor_Uni_PsychologyClass_EventScript_Teacher_3
# 21 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	setflag FLAG_PSYCHOLOGY_INTRO
# 22 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	msgbox Ardor_Uni_PsychologyClass_Text_Intro
# 23 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	closemessage
# 24 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	msgbox Ardor_Uni_PsychologyClass_Text_BringPsychicType
# 25 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	closemessage
Ardor_Uni_PsychologyClass_EventScript_Teacher_1:
# 27 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 28 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	waitmovement 0
# 29 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	release
	end

Ardor_Uni_PsychologyClass_EventScript_Teacher_2:
# 10 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	msgbox Ardor_Uni_PsychologyClass_Text_ClassFinished
# 11 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	closemessage
	goto Ardor_Uni_PsychologyClass_EventScript_Teacher_1

Ardor_Uni_PsychologyClass_EventScript_Teacher_3:
# 13 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	specialvar VAR_RESULT, IsPsychicTypeInParty
# 14 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_PsychologyClass_EventScript_Teacher_7
# 17 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	msgbox Ardor_Uni_PsychologyClass_Text_BringPsychicType
# 18 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	closemessage
	goto Ardor_Uni_PsychologyClass_EventScript_Teacher_1

Ardor_Uni_PsychologyClass_EventScript_Teacher_7:
# 15 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	call Ardor_Uni_PsychologyClass_EventScript_Test
	goto Ardor_Uni_PsychologyClass_EventScript_Teacher_1


Ardor_Uni_PsychologyClass_EventScript_Test::
# 35 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	msgbox Ardor_Uni_PsychologyClass_Text_LessonComplete
# 36 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	closemessage
# 37 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 38 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	closemessage
# 39 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_PSYCHOLOGY, Ardor_Uni_PsychologyClass_Text_TeacherBattleLost
# 40 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 41 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	msgbox Ardor_Uni_PsychologyClass_Text_ClassFinished
# 42 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	closemessage
	return


Ardor_Uni_PsychologyClass_Text_Intro::
# 46 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	.string "Salve puer. Magistra Linda sum. Necesse\n"
	.string "est tibi docere psychologiam. Necesse\l"
	.string "est portare mihi quod me delectat.$"

Ardor_Uni_PsychologyClass_Text_BringPsychicType::
# 50 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	.string "Reveni cum monstro psychologiae.$"

Ardor_Uni_PsychologyClass_Text_LessonComplete::
# 54 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	.string "Revenisti cum monstro psychologiae.$"

Ardor_Uni_PsychologyClass_Text_TeacherBattleLost::
# 58 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	.string "Melinda sum! Melinda!$"

Ardor_Uni_PsychologyClass_Text_ClassFinished::
# 62 "data/maps/Ardor_Uni_PsychologyClass/scripts.pory"
	.string "Congratulatio! Iam studuisti\n"
	.string "psychologiam.$"
