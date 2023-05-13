Ardor_Uni_GrammarClass_MapScripts::
	.byte 0


Ardor_Uni_GrammarClass_EventScript_IncrementVar::
	switch VAR_TEMP_7
	case 0, Ardor_Uni_GrammarClass_EventScript_IncrementVar_3
	case 1, Ardor_Uni_GrammarClass_EventScript_IncrementVar_4
	case 2, Ardor_Uni_GrammarClass_EventScript_IncrementVar_5
	case 3, Ardor_Uni_GrammarClass_EventScript_IncrementVar_6
	case 4, Ardor_Uni_GrammarClass_EventScript_IncrementVar_7
	case 5, Ardor_Uni_GrammarClass_EventScript_IncrementVar_8
	case 6, Ardor_Uni_GrammarClass_EventScript_IncrementVar_9
	case 7, Ardor_Uni_GrammarClass_EventScript_IncrementVar_10
	case 8, Ardor_Uni_GrammarClass_EventScript_IncrementVar_11
	setvar VAR_TEMP_7, 8
Ardor_Uni_GrammarClass_EventScript_IncrementVar_1:
	return

Ardor_Uni_GrammarClass_EventScript_IncrementVar_3:
	setvar VAR_TEMP_7, 1
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_4:
	setvar VAR_TEMP_7, 2
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_5:
	setvar VAR_TEMP_7, 3
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_6:
	setvar VAR_TEMP_7, 4
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_7:
	setvar VAR_TEMP_7, 5
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_8:
	setvar VAR_TEMP_7, 6
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_9:
	setvar VAR_TEMP_7, 7
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_10:
	setvar VAR_TEMP_7, 8
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_11:
	setvar VAR_TEMP_7, 8
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1


Ardor_Uni_GrammarClass_EventScript_CheckLessons::
	setvar VAR_TEMP_7, 0
	goto_if_set FLAG_TEMP_1, Ardor_Uni_GrammarClass_EventScript_CheckLessons_2
	msgbox Ardor_Uni_GrammarClass_Text_StudyNouns
Ardor_Uni_GrammarClass_EventScript_CheckLessons_1:
	goto_if_set FLAG_TEMP_2, Ardor_Uni_GrammarClass_EventScript_CheckLessons_6
	msgbox Ardor_Uni_GrammarClass_Text_StudyPronouns
Ardor_Uni_GrammarClass_EventScript_CheckLessons_5:
	goto_if_set FLAG_TEMP_3, Ardor_Uni_GrammarClass_EventScript_CheckLessons_10
	msgbox Ardor_Uni_GrammarClass_Text_StudyVerbs
Ardor_Uni_GrammarClass_EventScript_CheckLessons_9:
	goto_if_set FLAG_TEMP_4, Ardor_Uni_GrammarClass_EventScript_CheckLessons_14
	msgbox Ardor_Uni_GrammarClass_Text_StudyAdverbs
Ardor_Uni_GrammarClass_EventScript_CheckLessons_13:
	goto_if_set FLAG_TEMP_5, Ardor_Uni_GrammarClass_EventScript_CheckLessons_18
	msgbox Ardor_Uni_GrammarClass_Text_StudyParticiples
Ardor_Uni_GrammarClass_EventScript_CheckLessons_17:
	goto_if_set FLAG_TEMP_6, Ardor_Uni_GrammarClass_EventScript_CheckLessons_22
	msgbox Ardor_Uni_GrammarClass_Text_StudyConjunctions
Ardor_Uni_GrammarClass_EventScript_CheckLessons_21:
	goto_if_set FLAG_TEMP_7, Ardor_Uni_GrammarClass_EventScript_CheckLessons_26
	msgbox Ardor_Uni_GrammarClass_Text_StudyPrepositions
Ardor_Uni_GrammarClass_EventScript_CheckLessons_25:
	goto_if_set FLAG_TEMP_8, Ardor_Uni_GrammarClass_EventScript_CheckLessons_30
	msgbox Ardor_Uni_GrammarClass_Text_StudyInterjections
Ardor_Uni_GrammarClass_EventScript_CheckLessons_29:
	compare VAR_TEMP_7, 8
	goto_if_eq Ardor_Uni_GrammarClass_EventScript_CheckLessons_34
Ardor_Uni_GrammarClass_EventScript_CheckLessons_33:
	return

Ardor_Uni_GrammarClass_EventScript_CheckLessons_2:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_1

Ardor_Uni_GrammarClass_EventScript_CheckLessons_6:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_5

Ardor_Uni_GrammarClass_EventScript_CheckLessons_10:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_9

Ardor_Uni_GrammarClass_EventScript_CheckLessons_14:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_13

Ardor_Uni_GrammarClass_EventScript_CheckLessons_18:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_17

Ardor_Uni_GrammarClass_EventScript_CheckLessons_22:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_21

Ardor_Uni_GrammarClass_EventScript_CheckLessons_26:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_25

Ardor_Uni_GrammarClass_EventScript_CheckLessons_30:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_29

Ardor_Uni_GrammarClass_EventScript_CheckLessons_34:
	call Ardor_Uni_GrammarClass_EventScript_Test
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_33


Ardor_Uni_GrammarClass_EventScript_Test::
	msgbox Ardor_Uni_GrammarClass_Text_TestBegin
	waitmessage
	msgbox Ardor_Uni_Text_TestIntro
	waitmessage
	trainerbattle_no_intro TRAINER_UNI_GRAMMAR, Ardor_Uni_GrammarClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_Incrementvar
	msgbox Ardor_Uni_GrammarClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_GrammarClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_GRAMMAR
	goto_if 1, Ardor_Uni_GrammarClass_EventScript_Teacher_2
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Teacher_3
	setflag FLAG_GRAMMAR_INTRO
	msgbox Ardor_Uni_GrammarClass_Text_ClassIntro
	closemessage
Ardor_Uni_GrammarClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_GrammarClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_GrammarClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_GrammarClass_EventScript_Teacher_1

Ardor_Uni_GrammarClass_EventScript_Teacher_3:
	call Ardor_Uni_GrammarClass_EventScript_CheckLessons
	goto Ardor_Uni_GrammarClass_EventScript_Teacher_1


Ardor_Uni_GrammarClass_EventScript_Student1::
	lock
	faceplayer
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student1_2
	msgbox Ardor_Uni_GrammarClass_Text_Student1
Ardor_Uni_GrammarClass_EventScript_Student1_1:
	closemessage
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student1_2:
	setflag FLAG_TEMP_1
	msgbox Ardor_Uni_GrammarClass_Text_Lesson1
	goto Ardor_Uni_GrammarClass_EventScript_Student1_1


Ardor_Uni_GrammarClass_EventScript_Student2::
	lock
	faceplayer
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student2_2
	msgbox Ardor_Uni_GrammarClass_Text_Student2
Ardor_Uni_GrammarClass_EventScript_Student2_1:
	closemessage
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student2_2:
	setflag FLAG_TEMP_2
	msgbox Ardor_Uni_GrammarClass_Text_Lesson2
	goto Ardor_Uni_GrammarClass_EventScript_Student2_1


Ardor_Uni_GrammarClass_EventScript_Student3::
	lock
	faceplayer
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student3_2
	msgbox Ardor_Uni_GrammarClass_Text_Student3
Ardor_Uni_GrammarClass_EventScript_Student3_1:
	closemessage
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student3_2:
	setflag FLAG_TEMP_3
	msgbox Ardor_Uni_GrammarClass_Text_Lesson3
	goto Ardor_Uni_GrammarClass_EventScript_Student3_1


Ardor_Uni_GrammarClass_EventScript_Student4::
	lock
	faceplayer
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student4_2
	msgbox Ardor_Uni_GrammarClass_Text_Student4
Ardor_Uni_GrammarClass_EventScript_Student4_1:
	closemessage
	applymovement 5, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student4_2:
	setflag FLAG_TEMP_4
	msgbox Ardor_Uni_GrammarClass_Text_Lesson4
	goto Ardor_Uni_GrammarClass_EventScript_Student4_1


Ardor_Uni_GrammarClass_EventScript_Student5::
	lock
	faceplayer
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student5_2
	msgbox Ardor_Uni_GrammarClass_Text_Student5
Ardor_Uni_GrammarClass_EventScript_Student5_1:
	closemessage
	applymovement 6, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student5_2:
	setflag FLAG_TEMP_5
	msgbox Ardor_Uni_GrammarClass_Text_Lesson5
	goto Ardor_Uni_GrammarClass_EventScript_Student5_1


Ardor_Uni_GrammarClass_EventScript_Student6::
	lock
	faceplayer
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student6_2
	msgbox Ardor_Uni_GrammarClass_Text_Student6
Ardor_Uni_GrammarClass_EventScript_Student6_1:
	closemessage
	applymovement 7, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student6_2:
	setflag FLAG_TEMP_6
	msgbox Ardor_Uni_GrammarClass_Text_Lesson6
	goto Ardor_Uni_GrammarClass_EventScript_Student6_1


Ardor_Uni_GrammarClass_EventScript_Student7::
	lock
	faceplayer
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student7_2
	msgbox Ardor_Uni_GrammarClass_Text_Student7
Ardor_Uni_GrammarClass_EventScript_Student7_1:
	closemessage
	applymovement 8, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student7_2:
	setflag FLAG_TEMP_7
	msgbox Ardor_Uni_GrammarClass_Text_Lesson7
	goto Ardor_Uni_GrammarClass_EventScript_Student7_1


Ardor_Uni_GrammarClass_EventScript_Student8::
	lock
	faceplayer
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student8_2
	msgbox Ardor_Uni_GrammarClass_Text_Student8
Ardor_Uni_GrammarClass_EventScript_Student8_1:
	closemessage
	applymovement 9, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student8_2:
	setflag FLAG_TEMP_8
	msgbox Ardor_Uni_GrammarClass_Text_Lesson8
	goto Ardor_Uni_GrammarClass_EventScript_Student8_1


Ardor_Uni_GrammarClass_Text_StudyNouns::
	.string "Stude nomina$"

Ardor_Uni_GrammarClass_Text_StudyPronouns::
	.string "Stude pronomina$"

Ardor_Uni_GrammarClass_Text_StudyVerbs::
	.string "Stude verba$"

Ardor_Uni_GrammarClass_Text_StudyAdverbs::
	.string "Stude adverba$"

Ardor_Uni_GrammarClass_Text_StudyParticiples::
	.string "Stude participia$"

Ardor_Uni_GrammarClass_Text_StudyConjunctions::
	.string "Stude conjunctiones$"

Ardor_Uni_GrammarClass_Text_StudyPrepositions::
	.string "Stude praepositiones$"

Ardor_Uni_GrammarClass_Text_StudyInterjections::
	.string "Stude interjectiones$"

Ardor_Uni_GrammarClass_Text_Lesson1::
	.string "Nomen pars orationis est cum casu.$"

Ardor_Uni_GrammarClass_Text_Lesson2::
	.string "Pronomen pars orationis est quae pro\n"
	.string "nomine posita tantundem paene\l"
	.string "significat personamque terdum recipit.$"

Ardor_Uni_GrammarClass_Text_Lesson3::
	.string "Verbum pars orationis est cum tempore\n"
	.string "et persona.$"

Ardor_Uni_GrammarClass_Text_Lesson4::
	.string "Adverbium pars orationis est quae\n"
	.string "adjecta verbum.$"

Ardor_Uni_GrammarClass_Text_Lesson5::
	.string "Participium est pars orationis partem\n"
	.string "capiens nominis, partem verbi.$"

Ardor_Uni_GrammarClass_Text_Lesson6::
	.string "Conjunctio est pars orationis\n"
	.string "adnectens ordinasque sententiam.$"

Ardor_Uni_GrammarClass_Text_Lesson7::
	.string "Praepositio pars orationis est quae\n"
	.string "praeposita aliis partes orationis.$"

Ardor_Uni_GrammarClass_Text_Lesson8::
	.string "Mea Hercule! Interjectiones sunt\n"
	.string "partes orationis significans mentis\l"
	.string "affectum voce incondita.$"

Ardor_Uni_GrammarClass_Text_Student1::
	.string "$"

Ardor_Uni_GrammarClass_Text_Student2::
	.string "$"

Ardor_Uni_GrammarClass_Text_Student3::
	.string "$"

Ardor_Uni_GrammarClass_Text_Student4::
	.string "$"

Ardor_Uni_GrammarClass_Text_Student5::
	.string "$"

Ardor_Uni_GrammarClass_Text_Student6::
	.string "$"

Ardor_Uni_GrammarClass_Text_Student7::
	.string "$"

Ardor_Uni_GrammarClass_Text_Student8::
	.string "$"

Ardor_Uni_GrammarClass_Text_ClassFinished::
	.string "Congratulatio! Iam studuisti\n"
	.string "grammaticam.$"

Ardor_Uni_GrammarClass_Text_ClassIntro::
	.string "Salve puer. Magistra Smytha sum.\n"
	.string "Necesse est tibi docere grammaticam.\l"
	.string "Partes orationis sunt octo: nomina,\l"
	.string "pronomina, verba, adverbia, participia,\l"
	.string "conjunctiones, praepositiones, et\l"
	.string "interjectiones. Stude partes octo et\l"
	.string "reveni.$"

Ardor_Uni_GrammarClass_Text_TestBegin::
	.string "Iam studuisti partes octo orationis!$"

Ardor_Uni_GrammarClass_Text_TeacherBattleLost::
	.string "Speciosus es.$"
