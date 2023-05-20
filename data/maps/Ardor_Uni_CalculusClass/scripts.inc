Ardor_Uni_CalculusClass_MapScripts::
	.byte 0


Ardor_Uni_CalculusClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_CALCULUS
	goto_if 1, Ardor_Uni_CalculusClass_EventScript_Teacher_2
	goto_if_set FLAG_CALCULUS_INTRO, Ardor_Uni_CalculusClass_EventScript_Teacher_3
	setflag FLAG_CALCULUS_INTRO
	msgbox Ardor_Uni_CalculusClass_Text_ClassIntro
	closemessage
	call Ardor_Uni_CalculusClass_EventScript_CheckLessons
Ardor_Uni_CalculusClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_CalculusClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_CalculusClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_CalculusClass_EventScript_Teacher_1

Ardor_Uni_CalculusClass_EventScript_Teacher_3:
	call Ardor_Uni_CalculusClass_EventScript_CheckLessons
	goto Ardor_Uni_CalculusClass_EventScript_Teacher_1


Ardor_Uni_CalculusClass_EventScript_CheckLessons::
	setvar VAR_TEMP_7, 0
	goto_if_set FLAG_TEMP_1, Ardor_Uni_CalculusClass_EventScript_CheckLessons_2
	msgbox Ardor_Uni_CalculusClass_Text_StudyLesson1
Ardor_Uni_CalculusClass_EventScript_CheckLessons_1:
	goto_if_set FLAG_TEMP_2, Ardor_Uni_CalculusClass_EventScript_CheckLessons_6
	msgbox Ardor_Uni_CalculusClass_Text_StudyLesson2
Ardor_Uni_CalculusClass_EventScript_CheckLessons_5:
	compare VAR_TEMP_7, 2
	goto_if_eq Ardor_Uni_CalculusClass_EventScript_CheckLessons_10
Ardor_Uni_CalculusClass_EventScript_CheckLessons_9:
	return

Ardor_Uni_CalculusClass_EventScript_CheckLessons_2:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_CalculusClass_EventScript_CheckLessons_1

Ardor_Uni_CalculusClass_EventScript_CheckLessons_6:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_CalculusClass_EventScript_CheckLessons_5

Ardor_Uni_CalculusClass_EventScript_CheckLessons_10:
	call Ardor_Uni_CalculusClass_EventScript_Test
	goto Ardor_Uni_CalculusClass_EventScript_CheckLessons_9


Ardor_Uni_CalculusClass_EventScript_Test::
	msgbox Ardor_Uni_CalculusClass_Text_TestBegin
	waitmessage
	msgbox Ardor_Uni_Text_TestIntro
	waitmessage
	trainerbattle_no_intro TRAINER_UNI_CALCULUS, Ardor_Uni_CalculusClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_Incrementvar
	msgbox Ardor_Uni_CalculusClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_CalculusClass_EventScript_Student1::
	lock
	faceplayer
	goto_if_set FLAG_CALCULUS_INTRO, Ardor_Uni_CalculusClass_EventScript_Student1_2
	msgbox Ardor_Uni_CalculusClass_Text_Student1
Ardor_Uni_CalculusClass_EventScript_Student1_1:
	closemessage
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_CalculusClass_EventScript_Student1_2:
	setflag FLAG_TEMP_1
	msgbox Ardor_Uni_CalculusClass_Text_Lesson1
	goto Ardor_Uni_CalculusClass_EventScript_Student1_1


Ardor_Uni_CalculusClass_EventScript_Student2::
	lock
	faceplayer
	goto_if_set FLAG_CALCULUS_INTRO, Ardor_Uni_CalculusClass_EventScript_Student2_2
	msgbox Ardor_Uni_CalculusClass_Text_Student2
Ardor_Uni_CalculusClass_EventScript_Student2_1:
	closemessage
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_CalculusClass_EventScript_Student2_2:
	goto_if_set FLAG_TEMP_1, Ardor_Uni_CalculusClass_EventScript_Student2_5
	msgbox Ardor_Uni_CalculusClass_Text_StudyLesson1
	goto Ardor_Uni_CalculusClass_EventScript_Student2_1

Ardor_Uni_CalculusClass_EventScript_Student2_5:
	setflag FLAG_TEMP_2
	msgbox Ardor_Uni_CalculusClass_Text_Lesson2
	goto Ardor_Uni_CalculusClass_EventScript_Student2_1


Ardor_Uni_CalculusClass_EventScript_PhiloTest::
	lock
	special NamePhilosophy
	waitstate
	specialvar VAR_RESULT, IsPhilosophyPhrase
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_CalculusClass_EventScript_PhiloTest_2
	msgbox Ardor_Uni_CalculusClass_EventScript_PhiloTest_Text_1
Ardor_Uni_CalculusClass_EventScript_PhiloTest_1:
	closemessage
	release
	end

Ardor_Uni_CalculusClass_EventScript_PhiloTest_2:
	msgbox Ardor_Uni_CalculusClass_EventScript_PhiloTest_Text_0
	goto Ardor_Uni_CalculusClass_EventScript_PhiloTest_1


Ardor_Uni_CalculusClass_EventScript_PhiloTest_Text_0:
	.string "Yes$"

Ardor_Uni_CalculusClass_EventScript_PhiloTest_Text_1:
	.string "No$"

Ardor_Uni_CalculusClass_Text_ClassIntro::
	.string "Salve puer! Magister Hagus sum. Necesse\n"
	.string "est tibi docere calculum. Calculus duas\l"
	.string "partes, derivativa integraliaque,\l"
	.string "habet. Stude partes duas et reveni.$"

Ardor_Uni_CalculusClass_Text_Student1::
	.string "$"

Ardor_Uni_CalculusClass_Text_Student2::
	.string "$"

Ardor_Uni_CalculusClass_Text_StudyLesson1::
	.string "Stude calculum derivativum.$"

Ardor_Uni_CalculusClass_Text_StudyLesson2::
	.string "Stude calculum integralem.$"

Ardor_Uni_CalculusClass_Text_TeacherBattleLost::
	.string "Calculum scis.$"

Ardor_Uni_CalculusClass_Text_ClassFinished::
	.string "Congratulatio! Iam studuisti calculum.$"

Ardor_Uni_CalculusClass_Text_TestBegin::
	.string "Iam studuisti partes duas calculi.$"

Ardor_Uni_CalculusClass_Text_Lesson1::
	.string "Derivativi sunt devexum linamenti\n"
	.string "tangentis puncto dativo functioni.$"

Ardor_Uni_CalculusClass_Text_Lesson2::
	.string "Integrale est area sub curvum fine\n"
	.string "puncto dativo functioni.$"
