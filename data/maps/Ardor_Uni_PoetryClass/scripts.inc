Ardor_Uni_PoetryClass_MapScripts::
	.byte 0


Ardor_Uni_PoetryClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_POETRY
	goto_if 1, Ardor_Uni_PoetryClass_EventScript_Teacher_2
	goto_if_set FLAG_POETRY_INTRO, Ardor_Uni_PoetryClass_EventScript_Teacher_3
	setflag FLAG_POETRY_INTRO
	msgbox Ardor_Uni_PoetryClass_Text_ClassIntro
	closemessage
	call Ardor_Uni_PoetryClass_EventScript_CheckLessons
Ardor_Uni_PoetryClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_PoetryClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_PoetryClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_PoetryClass_EventScript_Teacher_1

Ardor_Uni_PoetryClass_EventScript_Teacher_3:
	call Ardor_Uni_PoetryClass_EventScript_CheckLessons
	goto Ardor_Uni_PoetryClass_EventScript_Teacher_1


Ardor_Uni_PoetryClass_EventScript_CheckLessons::
	setvar VAR_TEMP_7, 0
	goto_if_set FLAG_TEMP_1, Ardor_Uni_PoetryClass_EventScript_CheckLessons_2
	msgbox Ardor_Uni_PoetryClass_Text_StudyLesson1
Ardor_Uni_PoetryClass_EventScript_CheckLessons_1:
	goto_if_set FLAG_TEMP_2, Ardor_Uni_PoetryClass_EventScript_CheckLessons_6
	msgbox Ardor_Uni_PoetryClass_Text_StudyLesson2
Ardor_Uni_PoetryClass_EventScript_CheckLessons_5:
	goto_if_set FLAG_TEMP_3, Ardor_Uni_PoetryClass_EventScript_CheckLessons_10
	msgbox Ardor_Uni_PoetryClass_Text_StudyLesson3
Ardor_Uni_PoetryClass_EventScript_CheckLessons_9:
	goto_if_set FLAG_TEMP_4, Ardor_Uni_PoetryClass_EventScript_CheckLessons_14
	msgbox Ardor_Uni_PoetryClass_Text_StudyLesson4
Ardor_Uni_PoetryClass_EventScript_CheckLessons_13:
	compare VAR_TEMP_7, 4
	goto_if_eq Ardor_Uni_PoetryClass_EventScript_CheckLessons_18
Ardor_Uni_PoetryClass_EventScript_CheckLessons_17:
	return

Ardor_Uni_PoetryClass_EventScript_CheckLessons_2:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_PoetryClass_EventScript_CheckLessons_1

Ardor_Uni_PoetryClass_EventScript_CheckLessons_6:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_PoetryClass_EventScript_CheckLessons_5

Ardor_Uni_PoetryClass_EventScript_CheckLessons_10:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_PoetryClass_EventScript_CheckLessons_9

Ardor_Uni_PoetryClass_EventScript_CheckLessons_14:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_PoetryClass_EventScript_CheckLessons_13

Ardor_Uni_PoetryClass_EventScript_CheckLessons_18:
	call Ardor_Uni_PoetryClass_EventScript_Test
	goto Ardor_Uni_PoetryClass_EventScript_CheckLessons_17


Ardor_Uni_PoetryClass_EventScript_Test::
	msgbox Ardor_Uni_PoetryClass_Text_TestBegin
	waitmessage
	msgbox Ardor_Uni_Text_TestIntro
	waitmessage
	trainerbattle_no_intro TRAINER_UNI_POETRY, Ardor_Uni_PoetryClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_Incrementvar
	msgbox Ardor_Uni_PoetryClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_PoetryClass_EventScript_Student1::
	lock
	faceplayer
	goto_if_set FLAG_POETRY_INTRO, Ardor_Uni_PoetryClass_EventScript_Student1_2
	msgbox Ardor_Uni_PoetryClass_Text_Student1
Ardor_Uni_PoetryClass_EventScript_Student1_1:
	closemessage
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_PoetryClass_EventScript_Student1_2:
	setflag FLAG_TEMP_1
	msgbox Ardor_Uni_PoetryClass_Text_Lesson1
	goto Ardor_Uni_PoetryClass_EventScript_Student1_1


Ardor_Uni_PoetryClass_EventScript_Student2::
	lock
	faceplayer
	goto_if_set FLAG_POETRY_INTRO, Ardor_Uni_PoetryClass_EventScript_Student2_2
	msgbox Ardor_Uni_PoetryClass_Text_Student2
Ardor_Uni_PoetryClass_EventScript_Student2_1:
	closemessage
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_PoetryClass_EventScript_Student2_2:
	setflag FLAG_TEMP_2
	msgbox Ardor_Uni_PoetryClass_Text_Lesson2
	goto Ardor_Uni_PoetryClass_EventScript_Student2_1


Ardor_Uni_PoetryClass_EventScript_Student3::
	lock
	faceplayer
	goto_if_set FLAG_POETRY_INTRO, Ardor_Uni_PoetryClass_EventScript_Student3_2
	msgbox Ardor_Uni_PoetryClass_Text_Student3
Ardor_Uni_PoetryClass_EventScript_Student3_1:
	closemessage
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_PoetryClass_EventScript_Student3_2:
	setflag FLAG_TEMP_3
	msgbox Ardor_Uni_PoetryClass_Text_Lesson3
	goto Ardor_Uni_PoetryClass_EventScript_Student3_1


Ardor_Uni_PoetryClass_EventScript_Student4::
	lock
	faceplayer
	goto_if_set FLAG_POETRY_INTRO, Ardor_Uni_PoetryClass_EventScript_Student4_2
	msgbox Ardor_Uni_PoetryClass_Text_Student4
Ardor_Uni_PoetryClass_EventScript_Student4_1:
	closemessage
	applymovement 5, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_PoetryClass_EventScript_Student4_2:
	setflag FLAG_TEMP_4
	msgbox Ardor_Uni_PoetryClass_Text_Lesson4
	goto Ardor_Uni_PoetryClass_EventScript_Student4_1


Ardor_Uni_PoetryClass_Text_ClassIntro::
	.string "Salve puer. Magistra$"

Ardor_Uni_PoetryClass_Text_Student1::
	.string "$"

Ardor_Uni_PoetryClass_Text_Student2::
	.string "$"

Ardor_Uni_PoetryClass_Text_Student3::
	.string "$"

Ardor_Uni_PoetryClass_Text_Student4::
	.string "$"

Ardor_Uni_PoetryClass_Text_StudyLesson1::
	.string "$"

Ardor_Uni_PoetryClass_Text_StudyLesson2::
	.string "$"

Ardor_Uni_PoetryClass_Text_StudyLesson3::
	.string "$"

Ardor_Uni_PoetryClass_Text_StudyLesson4::
	.string "$"

Ardor_Uni_PoetryClass_Text_TeacherBattleLost::
	.string "$"

Ardor_Uni_PoetryClass_Text_ClassFinished::
	.string "$"

Ardor_Uni_PoetryClass_Text_TestBegin::
	.string "$"

Ardor_Uni_PoetryClass_Text_Lesson1::
	.string "$"

Ardor_Uni_PoetryClass_Text_Lesson2::
	.string "$"

Ardor_Uni_PoetryClass_Text_Lesson3::
	.string "$"

Ardor_Uni_PoetryClass_Text_Lesson4::
	.string "$"
