Ardor_Uni_CalculusClass_MapScripts::
	.byte 0


Ardor_Uni_CalculusClass_EventScript_Teacher::
# 17 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	lock
# 18 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	faceplayer
# 19 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	checktrainerflag TRAINER_UNI_CALCULUS
	goto_if 1, Ardor_Uni_CalculusClass_EventScript_Teacher_2
# 22 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	goto_if_set FLAG_CALCULUS_INTRO, Ardor_Uni_CalculusClass_EventScript_Teacher_3
# 25 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	setflag FLAG_CALCULUS_INTRO
# 26 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	msgbox Ardor_Uni_CalculusClass_Text_ClassIntro
# 27 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	closemessage
# 28 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	call Ardor_Uni_CalculusClass_EventScript_CheckLessons
Ardor_Uni_CalculusClass_EventScript_Teacher_1:
# 30 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 31 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	waitmovement 0
# 32 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	release
	end

Ardor_Uni_CalculusClass_EventScript_Teacher_2:
# 20 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	msgbox Ardor_Uni_CalculusClass_Text_ClassFinished
# 21 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	closemessage
	goto Ardor_Uni_CalculusClass_EventScript_Teacher_1

Ardor_Uni_CalculusClass_EventScript_Teacher_3:
# 23 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	call Ardor_Uni_CalculusClass_EventScript_CheckLessons
	goto Ardor_Uni_CalculusClass_EventScript_Teacher_1


Ardor_Uni_CalculusClass_EventScript_CheckLessons::
# 38 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	setvar VAR_TEMP_7, 0
# 39 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_CalculusClass_EventScript_CheckLessons_2
# 42 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	msgbox Ardor_Uni_CalculusClass_Text_StudyLesson1
Ardor_Uni_CalculusClass_EventScript_CheckLessons_1:
# 44 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	goto_if_set FLAG_TEMP_2, Ardor_Uni_CalculusClass_EventScript_CheckLessons_6
# 47 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	msgbox Ardor_Uni_CalculusClass_Text_StudyLesson2
Ardor_Uni_CalculusClass_EventScript_CheckLessons_5:
# 49 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	compare VAR_TEMP_7, 2
	goto_if_eq Ardor_Uni_CalculusClass_EventScript_CheckLessons_10
Ardor_Uni_CalculusClass_EventScript_CheckLessons_9:
	return

Ardor_Uni_CalculusClass_EventScript_CheckLessons_2:
# 40 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_CalculusClass_EventScript_CheckLessons_1

Ardor_Uni_CalculusClass_EventScript_CheckLessons_6:
# 45 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_CalculusClass_EventScript_CheckLessons_5

Ardor_Uni_CalculusClass_EventScript_CheckLessons_10:
# 50 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	call Ardor_Uni_CalculusClass_EventScript_Test
	goto Ardor_Uni_CalculusClass_EventScript_CheckLessons_9


Ardor_Uni_CalculusClass_EventScript_Test::
# 56 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	msgbox Ardor_Uni_CalculusClass_Text_TestBegin
# 57 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	waitmessage
# 58 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 59 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	waitmessage
# 60 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_CALCULUS, Ardor_Uni_CalculusClass_Text_TeacherBattleLost
# 61 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 62 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	msgbox Ardor_Uni_CalculusClass_Text_ClassFinished
# 63 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	closemessage
	return


Ardor_Uni_CalculusClass_EventScript_Student1::
# 69 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	lock
# 70 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	faceplayer
# 71 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	goto_if_set FLAG_CALCULUS_INTRO, Ardor_Uni_CalculusClass_EventScript_Student1_2
# 75 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	msgbox Ardor_Uni_CalculusClass_Text_Student1
Ardor_Uni_CalculusClass_EventScript_Student1_1:
# 77 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	closemessage
# 78 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 79 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	waitmovement 0
# 80 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	release
	end

Ardor_Uni_CalculusClass_EventScript_Student1_2:
# 72 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	setflag FLAG_TEMP_1
# 73 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	msgbox Ardor_Uni_CalculusClass_Text_Lesson1
	goto Ardor_Uni_CalculusClass_EventScript_Student1_1


Ardor_Uni_CalculusClass_EventScript_Student2::
# 86 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	lock
# 87 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	faceplayer
# 88 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	goto_if_set FLAG_CALCULUS_INTRO, Ardor_Uni_CalculusClass_EventScript_Student2_2
# 96 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	msgbox Ardor_Uni_CalculusClass_Text_Student2
Ardor_Uni_CalculusClass_EventScript_Student2_1:
# 98 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	closemessage
# 99 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 100 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	waitmovement 0
# 101 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	release
	end

Ardor_Uni_CalculusClass_EventScript_Student2_2:
# 89 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_CalculusClass_EventScript_Student2_5
# 93 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	msgbox Ardor_Uni_CalculusClass_Text_StudyLesson1
	goto Ardor_Uni_CalculusClass_EventScript_Student2_1

Ardor_Uni_CalculusClass_EventScript_Student2_5:
# 90 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	setflag FLAG_TEMP_2
# 91 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	msgbox Ardor_Uni_CalculusClass_Text_Lesson2
	goto Ardor_Uni_CalculusClass_EventScript_Student2_1


Ardor_Uni_CalculusClass_Text_ClassIntro::
# 105 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	.string "Salve puer! Magister Hagus sum. Necesse\l"
	.string "est tibi docere calculum. Calculus duas\l"
	.string "partes, derivativa integraliaque,\l"
	.string "habet. Stude partes duas et reveni.$"

Ardor_Uni_CalculusClass_Text_Student1::
# 109 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	.string "$"

Ardor_Uni_CalculusClass_Text_Student2::
# 113 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	.string "$"

Ardor_Uni_CalculusClass_Text_StudyLesson1::
# 117 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	.string "Stude calculum derivativum.$"

Ardor_Uni_CalculusClass_Text_StudyLesson2::
# 121 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	.string "Stude calculum integralem.$"

Ardor_Uni_CalculusClass_Text_TeacherBattleLost::
# 125 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	.string "Calculum scis.$"

Ardor_Uni_CalculusClass_Text_ClassFinished::
# 129 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	.string "Congratulatio! Iam studuisti calculum.$"

Ardor_Uni_CalculusClass_Text_TestBegin::
# 133 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	.string "Iam studuisti partes duas calculi.$"

Ardor_Uni_CalculusClass_Text_Lesson1::
# 137 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	.string "Derivativi sunt devexum linamenti\l"
	.string "tangentis puncto dativo functioni.$"

Ardor_Uni_CalculusClass_Text_Lesson2::
# 141 "data/maps/Ardor_Uni_CalculusClass/scripts.pory"
	.string "Integrale est area sub curvum fine\l"
	.string "puncto dativo functioni.$"
