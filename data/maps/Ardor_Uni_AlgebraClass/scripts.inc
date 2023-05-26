Ardor_Uni_AlgebraClass_MapScripts::
	.byte 0


Ardor_Uni_AlgebraClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_ALGEBRA
	goto_if 1, Ardor_Uni_AlgebraClass_EventScript_Teacher_2
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Teacher_3
	setflag FLAG_ALGEBRA_INTRO
	msgbox Ardor_Uni_AlgebraClass_Text_ClassIntro
	closemessage
Ardor_Uni_AlgebraClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_AlgebraClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_AlgebraClass_EventScript_Teacher_1

Ardor_Uni_AlgebraClass_EventScript_Teacher_3:
	call Ardor_Uni_AlgebraClass_EventScript_CheckLessons
	goto Ardor_Uni_AlgebraClass_EventScript_Teacher_1


Ardor_Uni_AlgebraClass_EventScript_CheckLessons::
	setvar VAR_TEMP_7, 0
	goto_if_set FLAG_TEMP_1, Ardor_Uni_AlgebraClass_EventScript_CheckLessons_2
	msgbox Ardor_Uni_AlgebraClass_Text_StudyAddition
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_1:
	goto_if_set FLAG_TEMP_2, Ardor_Uni_AlgebraClass_EventScript_CheckLessons_6
	msgbox Ardor_Uni_AlgebraClass_Text_StudySubtraction
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_5:
	goto_if_set FLAG_TEMP_3, Ardor_Uni_AlgebraClass_EventScript_CheckLessons_10
	msgbox Ardor_Uni_AlgebraClass_Text_StudyMultiplication
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_9:
	goto_if_set FLAG_TEMP_4, Ardor_Uni_AlgebraClass_EventScript_CheckLessons_14
	msgbox Ardor_Uni_AlgebraClass_Text_StudyDivision
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_13:
	goto_if_set FLAG_TEMP_5, Ardor_Uni_AlgebraClass_EventScript_CheckLessons_18
	msgbox Ardor_Uni_AlgebraClass_Text_StudyExponents
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_17:
	goto_if_set FLAG_TEMP_6, Ardor_Uni_AlgebraClass_EventScript_CheckLessons_22
	msgbox Ardor_Uni_AlgebraClass_Text_StudyRadicals
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_21:
	compare VAR_TEMP_7, 6
	goto_if_eq Ardor_Uni_AlgebraClass_EventScript_CheckLessons_26
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_25:
	return

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_2:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_1

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_6:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_5

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_10:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_9

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_14:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_13

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_18:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_17

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_22:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_21

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_26:
	call Ardor_Uni_AlgebraClass_EventScript_Test
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_25


Ardor_Uni_AlgebraClass_EventScript_Test::
	msgbox Ardor_Uni_AlgebraClass_Text_TestBegin
	waitmessage
	msgbox Ardor_Uni_Text_TestIntro
	waitmessage
	trainerbattle_no_intro TRAINER_UNI_ALGEBRA, Ardor_Uni_AlgebraClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_IncrementVar
	msgbox Ardor_Uni_AlgebraClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_AlgebraClass_EventScript_Student1::
	lock
	faceplayer
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Student1_2
	msgbox Ardor_Uni_AlgebraClass_Text_Student1
Ardor_Uni_AlgebraClass_EventScript_Student1_1:
	closemessage
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Student1_2:
	setflag FLAG_TEMP_1
	msgbox Ardor_Uni_AlgebraClass_Text_Lesson1
	goto Ardor_Uni_AlgebraClass_EventScript_Student1_1


Ardor_Uni_AlgebraClass_EventScript_Student2::
	lock
	faceplayer
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Student2_2
	msgbox Ardor_Uni_AlgebraClass_Text_Student2
Ardor_Uni_AlgebraClass_EventScript_Student2_1:
	closemessage
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Student2_2:
	setflag FLAG_TEMP_2
	msgbox Ardor_Uni_AlgebraClass_Text_Lesson2
	goto Ardor_Uni_AlgebraClass_EventScript_Student2_1


Ardor_Uni_AlgebraClass_EventScript_Student3::
	lock
	faceplayer
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Student3_2
	msgbox Ardor_Uni_AlgebraClass_Text_Student3
Ardor_Uni_AlgebraClass_EventScript_Student3_1:
	closemessage
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Student3_2:
	setflag FLAG_TEMP_3
	msgbox Ardor_Uni_AlgebraClass_Text_Lesson3
	goto Ardor_Uni_AlgebraClass_EventScript_Student3_1


Ardor_Uni_AlgebraClass_EventScript_Student4::
	lock
	faceplayer
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Student4_2
	msgbox Ardor_Uni_AlgebraClass_Text_Student4
Ardor_Uni_AlgebraClass_EventScript_Student4_1:
	closemessage
	applymovement 5, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Student4_2:
	setflag FLAG_TEMP_4
	msgbox Ardor_Uni_AlgebraClass_Text_Lesson4
	goto Ardor_Uni_AlgebraClass_EventScript_Student4_1


Ardor_Uni_AlgebraClass_EventScript_Student5::
	lock
	faceplayer
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Student5_2
	msgbox Ardor_Uni_AlgebraClass_Text_Student5
Ardor_Uni_AlgebraClass_EventScript_Student5_1:
	closemessage
	applymovement 6, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Student5_2:
	setflag FLAG_TEMP_5
	msgbox Ardor_Uni_AlgebraClass_Text_Lesson5
	goto Ardor_Uni_AlgebraClass_EventScript_Student5_1


Ardor_Uni_AlgebraClass_EventScript_Student6::
	lock
	faceplayer
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Student6_2
	msgbox Ardor_Uni_AlgebraClass_Text_Student6
Ardor_Uni_AlgebraClass_EventScript_Student6_1:
	closemessage
	applymovement 7, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Student6_2:
	setflag FLAG_TEMP_6
	msgbox Ardor_Uni_AlgebraClass_Text_Lesson6
	goto Ardor_Uni_AlgebraClass_EventScript_Student6_1


Ardor_Uni_AlgebraClass_Text_ClassIntro::
	.string "Salve puer. Magistra Camilla sum.\n"
	.string "Necesse est tibi docere algebram.\l"
	.string "Partes algebrae sunt sex: additio,\l"
	.string "subtractio, multiplicatio, divisio,\l"
	.string "theoreticus, et matrices. Stude partes\l"
	.string "sex et reveni.$"

Ardor_Uni_AlgebraClass_Text_Student1::
	.string "$"

Ardor_Uni_AlgebraClass_Text_Student2::
	.string "$"

Ardor_Uni_AlgebraClass_Text_Student3::
	.string "$"

Ardor_Uni_AlgebraClass_Text_Student4::
	.string "$"

Ardor_Uni_AlgebraClass_Text_Student5::
	.string "$"

Ardor_Uni_AlgebraClass_Text_Student6::
	.string "$"

Ardor_Uni_AlgebraClass_Text_Lesson1::
	.string "n et IV est VII, ergo n tres est.$"

Ardor_Uni_AlgebraClass_Text_Lesson2::
	.string "n de CDLXXXIX LXIX est, ergo n est CDXL$"

Ardor_Uni_AlgebraClass_Text_Lesson3::
	.string "Rectangulus cum latitudino XXIX et\n"
	.string "longitudino n tenet area LVIII ergo n\l"
	.string "est II$"

Ardor_Uni_AlgebraClass_Text_Lesson4::
	.string "Rectangulus tenet area MMC et\n"
	.string "longitudino V ergo latitudinum\l"
	.string "rectanguli CDXX est$"

Ardor_Uni_AlgebraClass_Text_Lesson5::
	.string "i est unitas imaginaria quia\n"
	.string "rectangulus cum longitudino i et\l"
	.string "latidudino i tenet aream unum\l"
	.string "negativum.$"

Ardor_Uni_AlgebraClass_Text_Lesson6::
	.string "Matrix in mathematice est tabula\n"
	.string "numerorum formae rectangularis. Tabula\l"
	.string "unam tenet numeros quattor: I, V, X, L\l"
	.string "Tubula dua tenet numeros quattor: V, X,\l"
	.string "L, C. Tabula unam et tabula dua est\l"
	.string "tabula tria quia tenet numeros\l"
	.string "quattor: VI, XV, LX, CL$"

Ardor_Uni_AlgebraClass_Text_TeacherBattleLost::
	.string "Victoria mea imaginaria est.$"

Ardor_Uni_AlgebraClass_Text_ClassFinished::
	.string "Iam studuisti algebram.$"

Ardor_Uni_AlgebraClass_Text_TestBegin::
	.string "Iam studuisti partes sex.$"

Ardor_Uni_AlgebraClass_Text_StudyAddition::
	.string "Stude additionem.$"

Ardor_Uni_AlgebraClass_Text_StudySubtraction::
	.string "Stude subtractionem.$"

Ardor_Uni_AlgebraClass_Text_StudyMultiplication::
	.string "Stude multiplicationem.$"

Ardor_Uni_AlgebraClass_Text_StudyDivision::
	.string "Stude divisionem.$"

Ardor_Uni_AlgebraClass_Text_StudyExponents::
	.string "Stude algebram theoreticam.$"

Ardor_Uni_AlgebraClass_Text_StudyRadicals::
	.string "Stude matrices.$"
