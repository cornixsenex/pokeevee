Ardor_Uni_HistoryClass_MapScripts::
	.byte 0


Ardor_Uni_HistoryClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_HISTORY
	goto_if 1, Ardor_Uni_HistoryClass_EventScript_Teacher_2
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Teacher_3
	setflag FLAG_HISTORY_INTRO
	msgbox Ardor_Uni_HistoryClass_Text_ClassIntro
	closemessage
	call Ardor_Uni_HistoryClass_EventScript_CheckLessons
Ardor_Uni_HistoryClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_HistoryClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_HistoryClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_HistoryClass_EventScript_Teacher_1

Ardor_Uni_HistoryClass_EventScript_Teacher_3:
	call Ardor_Uni_HistoryClass_EventScript_CheckLessons
	goto Ardor_Uni_HistoryClass_EventScript_Teacher_1


Ardor_Uni_HistoryClass_EventScript_CheckLessons::
	setvar VAR_TEMP_7, 0
	goto_if_set FLAG_TEMP_1, Ardor_Uni_HistoryClass_EventScript_CheckLessons_2
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson1
Ardor_Uni_HistoryClass_EventScript_CheckLessons_1:
	goto_if_set FLAG_TEMP_2, Ardor_Uni_HistoryClass_EventScript_CheckLessons_6
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson2
Ardor_Uni_HistoryClass_EventScript_CheckLessons_5:
	goto_if_set FLAG_TEMP_3, Ardor_Uni_HistoryClass_EventScript_CheckLessons_10
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson3
Ardor_Uni_HistoryClass_EventScript_CheckLessons_9:
	goto_if_set FLAG_TEMP_4, Ardor_Uni_HistoryClass_EventScript_CheckLessons_14
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson4
Ardor_Uni_HistoryClass_EventScript_CheckLessons_13:
	goto_if_set FLAG_TEMP_5, Ardor_Uni_HistoryClass_EventScript_CheckLessons_18
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson5
Ardor_Uni_HistoryClass_EventScript_CheckLessons_17:
	goto_if_set FLAG_TEMP_6, Ardor_Uni_HistoryClass_EventScript_CheckLessons_22
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson6
Ardor_Uni_HistoryClass_EventScript_CheckLessons_21:
	goto_if_set FLAG_TEMP_7, Ardor_Uni_HistoryClass_EventScript_CheckLessons_26
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson7
Ardor_Uni_HistoryClass_EventScript_CheckLessons_25:
	compare VAR_TEMP_7, 7
	goto_if_eq Ardor_Uni_HistoryClass_EventScript_CheckLessons_30
Ardor_Uni_HistoryClass_EventScript_CheckLessons_29:
	return

Ardor_Uni_HistoryClass_EventScript_CheckLessons_2:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_1

Ardor_Uni_HistoryClass_EventScript_CheckLessons_6:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_5

Ardor_Uni_HistoryClass_EventScript_CheckLessons_10:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_9

Ardor_Uni_HistoryClass_EventScript_CheckLessons_14:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_13

Ardor_Uni_HistoryClass_EventScript_CheckLessons_18:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_17

Ardor_Uni_HistoryClass_EventScript_CheckLessons_22:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_21

Ardor_Uni_HistoryClass_EventScript_CheckLessons_26:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_25

Ardor_Uni_HistoryClass_EventScript_CheckLessons_30:
	call Ardor_Uni_HistoryClass_EventScript_Test
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_29


Ardor_Uni_HistoryClass_EventScript_Test::
	msgbox Ardor_Uni_HistoryClass_Text_TestBegin
	waitmessage
	msgbox Ardor_Uni_Text_TestIntro
	waitmessage
	trainerbattle_no_intro TRAINER_UNI_HISTORY, Ardor_Uni_HistoryClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_Incrementvar
	msgbox Ardor_Uni_HistoryClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_HistoryClass_EventScript_Student1::
	lock
	faceplayer
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student1_2
	msgbox Ardor_Uni_HistoryClass_Text_Student1
Ardor_Uni_HistoryClass_EventScript_Student1_1:
	closemessage
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student1_2:
	setflag FLAG_TEMP_1
	msgbox Ardor_Uni_HistoryClass_Text_Lesson1
	goto Ardor_Uni_HistoryClass_EventScript_Student1_1


Ardor_Uni_HistoryClass_EventScript_Student2::
	lock
	faceplayer
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student2_2
	msgbox Ardor_Uni_HistoryClass_Text_Student2
Ardor_Uni_HistoryClass_EventScript_Student2_1:
	closemessage
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student2_2:
	goto_if_set FLAG_TEMP_1, Ardor_Uni_HistoryClass_EventScript_Student2_5
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson1
	goto Ardor_Uni_HistoryClass_EventScript_Student2_1

Ardor_Uni_HistoryClass_EventScript_Student2_5:
	setflag FLAG_TEMP_2
	msgbox Ardor_Uni_HistoryClass_Text_Lesson2
	goto Ardor_Uni_HistoryClass_EventScript_Student2_1


Ardor_Uni_HistoryClass_EventScript_Student3::
	lock
	faceplayer
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student3_2
	msgbox Ardor_Uni_HistoryClass_Text_Student3
Ardor_Uni_HistoryClass_EventScript_Student3_1:
	closemessage
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student3_2:
	goto_if_set FLAG_TEMP_2, Ardor_Uni_HistoryClass_EventScript_Student3_5
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson2
	goto Ardor_Uni_HistoryClass_EventScript_Student3_1

Ardor_Uni_HistoryClass_EventScript_Student3_5:
	setflag FLAG_TEMP_3
	msgbox Ardor_Uni_HistoryClass_Text_Lesson3
	goto Ardor_Uni_HistoryClass_EventScript_Student3_1


Ardor_Uni_HistoryClass_EventScript_Student4::
	lock
	faceplayer
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student4_2
	msgbox Ardor_Uni_HistoryClass_Text_Student4
Ardor_Uni_HistoryClass_EventScript_Student4_1:
	closemessage
	applymovement 5, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student4_2:
	goto_if_set FLAG_TEMP_3, Ardor_Uni_HistoryClass_EventScript_Student4_5
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson3
	goto Ardor_Uni_HistoryClass_EventScript_Student4_1

Ardor_Uni_HistoryClass_EventScript_Student4_5:
	setflag FLAG_TEMP_4
	msgbox Ardor_Uni_HistoryClass_Text_Lesson4
	goto Ardor_Uni_HistoryClass_EventScript_Student4_1


Ardor_Uni_HistoryClass_EventScript_Student5::
	lock
	faceplayer
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student5_2
	msgbox Ardor_Uni_HistoryClass_Text_Student5
Ardor_Uni_HistoryClass_EventScript_Student5_1:
	closemessage
	applymovement 6, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student5_2:
	goto_if_set FLAG_TEMP_4, Ardor_Uni_HistoryClass_EventScript_Student5_5
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson4
	goto Ardor_Uni_HistoryClass_EventScript_Student5_1

Ardor_Uni_HistoryClass_EventScript_Student5_5:
	setflag FLAG_TEMP_5
	msgbox Ardor_Uni_HistoryClass_Text_Lesson5
	goto Ardor_Uni_HistoryClass_EventScript_Student5_1


Ardor_Uni_HistoryClass_EventScript_Student6::
	lock
	faceplayer
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student6_2
	msgbox Ardor_Uni_HistoryClass_Text_Student6
Ardor_Uni_HistoryClass_EventScript_Student6_1:
	closemessage
	applymovement 7, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student6_2:
	goto_if_set FLAG_TEMP_5, Ardor_Uni_HistoryClass_EventScript_Student6_5
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson5
	goto Ardor_Uni_HistoryClass_EventScript_Student6_1

Ardor_Uni_HistoryClass_EventScript_Student6_5:
	setflag FLAG_TEMP_6
	msgbox Ardor_Uni_HistoryClass_Text_Lesson6
	goto Ardor_Uni_HistoryClass_EventScript_Student6_1


Ardor_Uni_HistoryClass_EventScript_Student7::
	lock
	faceplayer
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student7_2
	msgbox Ardor_Uni_HistoryClass_Text_Student7
Ardor_Uni_HistoryClass_EventScript_Student7_1:
	closemessage
	applymovement 7, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student7_2:
	goto_if_set FLAG_TEMP_6, Ardor_Uni_HistoryClass_EventScript_Student7_5
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson6
	goto Ardor_Uni_HistoryClass_EventScript_Student7_1

Ardor_Uni_HistoryClass_EventScript_Student7_5:
	setflag FLAG_TEMP_7
	msgbox Ardor_Uni_HistoryClass_Text_Lesson7
	goto Ardor_Uni_HistoryClass_EventScript_Student7_1


Ardor_Uni_HistoryClass_Text_ClassIntro::
	.string "Tace puer! Doctor, non magister tantum,\n"
	.string "Virtreus sum. Necesse est tibi docere\l"
	.string "historiam. Epochae historiae sunt\l"
	.string "septem: Historia Antiqua, Historia\l"
	.string "Classica, Historia Aevorum Mediorum,\l"
	.string "Historia Colonia, Historia Industria,\l"
	.string "Historia Belli, et Historia Nova.$"

Ardor_Uni_HistoryClass_Text_Student1::
	.string "$"

Ardor_Uni_HistoryClass_Text_Student2::
	.string "$"

Ardor_Uni_HistoryClass_Text_Student3::
	.string "$"

Ardor_Uni_HistoryClass_Text_Student4::
	.string "$"

Ardor_Uni_HistoryClass_Text_Student5::
	.string "$"

Ardor_Uni_HistoryClass_Text_Student6::
	.string "$"

Ardor_Uni_HistoryClass_Text_Student7::
	.string "$"

Ardor_Uni_HistoryClass_Text_StudyLesson1::
	.string "Stude historiam antiquam.$"

Ardor_Uni_HistoryClass_Text_StudyLesson2::
	.string "Stude historiam classicam.$"

Ardor_Uni_HistoryClass_Text_StudyLesson3::
	.string "Stude historiam aevorum mediorum.$"

Ardor_Uni_HistoryClass_Text_StudyLesson4::
	.string "Stude historiam coloniam.$"

Ardor_Uni_HistoryClass_Text_StudyLesson5::
	.string "Stude historiam industriam$"

Ardor_Uni_HistoryClass_Text_StudyLesson6::
	.string "Stude historiam bellum$"

Ardor_Uni_HistoryClass_Text_StudyLesson7::
	.string "Stude historiam novum$"

Ardor_Uni_HistoryClass_Text_TeacherBattleLost::
	.string "Tempus meus iam cessit.$"

Ardor_Uni_HistoryClass_Text_ClassFinished::
	.string "Iam studuisti historiam.$"

Ardor_Uni_HistoryClass_Text_TestBegin::
	.string "Iam studuisti partes septem.$"

Ardor_Uni_HistoryClass_Text_Lesson1::
	.string "In temporibus antiquis viri in cavernis\n"
	.string "vixerunt.$"

Ardor_Uni_HistoryClass_Text_Lesson2::
	.string "In temporibus classicis viri prope mare\n"
	.string "oppidum erexerunt.$"

Ardor_Uni_HistoryClass_Text_Lesson3::
	.string "In temporibus aevorum mediorum magnus\n"
	.string "fuit numerus regum, equorum, et\l"
	.string "castellorum.$"

Ardor_Uni_HistoryClass_Text_Lesson4::
	.string "In temporibus colonicis viri oppidorum\n"
	.string "montes transierunt et viros feroces\l"
	.string "caperunt$"

Ardor_Uni_HistoryClass_Text_Lesson5::
	.string "In temporibus industriis viri\n"
	.string "invenerunt motrum et creaverunt\l"
	.string "vehicula multa.$"

Ardor_Uni_HistoryClass_Text_Lesson6::
	.string "In temporibus belli magni multi viri\n"
	.string "occiderunt.$"

Ardor_Uni_HistoryClass_Text_Lesson7::
	.string "Post bellum magnum factio Rocheta\n"
	.string "republicam viri cepit.$"
