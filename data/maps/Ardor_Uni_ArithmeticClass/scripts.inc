Ardor_Uni_ArithmeticClass_MapScripts::
	.byte 0


Ardor_Uni_ArithmeticClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_ARITHMETIC
	goto_if 1, Ardor_Uni_ArithmeticClass_EventScript_Teacher_2
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Teacher_3
	setflag FLAG_ARITHMETIC_INTRO
	msgbox Ardor_Uni_ArithmeticClass_Text_ClassIntro
	closemessage
Ardor_Uni_ArithmeticClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_ArithmeticClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_ArithmeticClass_EventScript_Teacher_1

Ardor_Uni_ArithmeticClass_EventScript_Teacher_3:
	call Ardor_Uni_ArithmeticClass_EventScript_CheckLessons
	goto Ardor_Uni_ArithmeticClass_EventScript_Teacher_1


Ardor_Uni_ArithmeticClass_EventScript_CheckLessons::
	setvar VAR_TEMP_7, 0
	goto_if_set FLAG_TEMP_1, Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_2
	msgbox Ardor_Uni_ArithmeticClass_Text_StudyAddition
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_1:
	goto_if_set FLAG_TEMP_2, Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_6
	msgbox Ardor_Uni_ArithmeticClass_Text_StudySubtraction
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_5:
	goto_if_set FLAG_TEMP_3, Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_10
	msgbox Ardor_Uni_ArithmeticClass_Text_StudyMultiplication
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_9:
	goto_if_set FLAG_TEMP_4, Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_14
	msgbox Ardor_Uni_ArithmeticClass_Text_StudyDivision
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_13:
	goto_if_set FLAG_TEMP_5, Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_18
	msgbox Ardor_Uni_ArithmeticClass_Text_StudyExponents
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_17:
	goto_if_set FLAG_TEMP_6, Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_22
	msgbox Ardor_Uni_ArithmeticClass_Text_StudyRadicals
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_21:
	compare VAR_TEMP_7, 6
	goto_if_eq Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_26
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_25:
	return

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_2:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_1

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_6:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_5

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_10:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_9

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_14:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_13

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_18:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_17

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_22:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_21

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_26:
	call Ardor_Uni_ArithmeticClass_EventScript_Test
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_25


Ardor_Uni_ArithmeticClass_EventScript_Test::
	msgbox Ardor_Uni_ArithmeticClass_Text_TestBegin
	waitmessage
	msgbox Ardor_Uni_Text_TestIntro
	waitmessage
	trainerbattle_no_intro TRAINER_UNI_ARITHMETIC, Ardor_Uni_ArithmeticClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_Incrementvar
	msgbox Ardor_Uni_ArithmeticClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_ArithmeticClass_EventScript_Student1::
	lock
	faceplayer
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Student1_2
	msgbox Ardor_Uni_ArithmeticClass_Text_Student1
Ardor_Uni_ArithmeticClass_EventScript_Student1_1:
	closemessage
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Student1_2:
	setflag FLAG_TEMP_1
	msgbox Ardor_Uni_ArithmeticClass_Text_Lesson1
	goto Ardor_Uni_ArithmeticClass_EventScript_Student1_1


Ardor_Uni_ArithmeticClass_EventScript_Student2::
	lock
	faceplayer
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Student2_2
	msgbox Ardor_Uni_ArithmeticClass_Text_Student2
Ardor_Uni_ArithmeticClass_EventScript_Student2_1:
	closemessage
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Student2_2:
	setflag FLAG_TEMP_2
	msgbox Ardor_Uni_ArithmeticClass_Text_Lesson2
	goto Ardor_Uni_ArithmeticClass_EventScript_Student2_1


Ardor_Uni_ArithmeticClass_EventScript_Student3::
	lock
	faceplayer
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Student3_2
	msgbox Ardor_Uni_ArithmeticClass_Text_Student3
Ardor_Uni_ArithmeticClass_EventScript_Student3_1:
	closemessage
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Student3_2:
	setflag FLAG_TEMP_3
	msgbox Ardor_Uni_ArithmeticClass_Text_Lesson3
	goto Ardor_Uni_ArithmeticClass_EventScript_Student3_1


Ardor_Uni_ArithmeticClass_EventScript_Student4::
	lock
	faceplayer
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Student4_2
	msgbox Ardor_Uni_ArithmeticClass_Text_Student4
Ardor_Uni_ArithmeticClass_EventScript_Student4_1:
	closemessage
	applymovement 5, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Student4_2:
	setflag FLAG_TEMP_4
	msgbox Ardor_Uni_ArithmeticClass_Text_Lesson4
	goto Ardor_Uni_ArithmeticClass_EventScript_Student4_1


Ardor_Uni_ArithmeticClass_EventScript_Student5::
	lock
	faceplayer
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Student5_2
	msgbox Ardor_Uni_ArithmeticClass_Text_Student5
Ardor_Uni_ArithmeticClass_EventScript_Student5_1:
	closemessage
	applymovement 6, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Student5_2:
	setflag FLAG_TEMP_5
	msgbox Ardor_Uni_ArithmeticClass_Text_Lesson5
	goto Ardor_Uni_ArithmeticClass_EventScript_Student5_1


Ardor_Uni_ArithmeticClass_EventScript_Student6::
	lock
	faceplayer
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Student6_2
	msgbox Ardor_Uni_ArithmeticClass_Text_Student6
Ardor_Uni_ArithmeticClass_EventScript_Student6_1:
	closemessage
	applymovement 7, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Student6_2:
	setflag FLAG_TEMP_6
	msgbox Ardor_Uni_ArithmeticClass_Text_Lesson6
	goto Ardor_Uni_ArithmeticClass_EventScript_Student6_1


Ardor_Uni_ArithmeticClass_Text_ClassIntro::
	.string "Salve puer. Magistra Sadia sum. Necesse\n"
	.string "est tibi docere arithmeticam. Partes\l"
	.string "arithmeticae sunt sex: additio,\l"
	.string "subtractio, multiplicatio, divisio,\l"
	.string "potentia, et radicis extractio. Stude\l"
	.string "partes sex et reveni.$"

Ardor_Uni_ArithmeticClass_Text_Student1::
	.string "$"

Ardor_Uni_ArithmeticClass_Text_Student2::
	.string "$"

Ardor_Uni_ArithmeticClass_Text_Student3::
	.string "$"

Ardor_Uni_ArithmeticClass_Text_Student4::
	.string "$"

Ardor_Uni_ArithmeticClass_Text_Student5::
	.string "$"

Ardor_Uni_ArithmeticClass_Text_Student6::
	.string "$"

Ardor_Uni_ArithmeticClass_Text_Lesson1::
	.string "Additio est operatio arithmetica qua\n"
	.string "summa numerorum quantitatumve\l"
	.string "quarundam describitur.$"

Ardor_Uni_ArithmeticClass_Text_Lesson2::
	.string "Subtractio est operatio arithmetica\n"
	.string "contraria additio. Subtractio est\l"
	.string "additio numeri negativi.$"

Ardor_Uni_ArithmeticClass_Text_Lesson3::
	.string "Multiplicatio operatio arithmetica est\n"
	.string "inversa divisio.$"

Ardor_Uni_ArithmeticClass_Text_Lesson4::
	.string "Divisio est operatio quae numerum in\n"
	.string "partes aequales dividit.$"

Ardor_Uni_ArithmeticClass_Text_Lesson5::
	.string "Potentia multiplicatio est repetita$"

Ardor_Uni_ArithmeticClass_Text_Lesson6::
	.string "Radicis extractio significat\n"
	.string "aequationem solvere cuius forma est\l"
	.string "(n)(n) = x.$"

Ardor_Uni_ArithmeticClass_Text_TeacherBattleLost::
	.string "Me subtraxisti.$"

Ardor_Uni_ArithmeticClass_Text_ClassFinished::
	.string "Iam studuisti arithmeticam.$"

Ardor_Uni_ArithmeticClass_Text_TestBegin::
	.string "Iam studuisti partes sex.$"

Ardor_Uni_ArithmeticClass_Text_StudyAddition::
	.string "Stude additionem.$"

Ardor_Uni_ArithmeticClass_Text_StudySubtraction::
	.string "Stude subtractionem.$"

Ardor_Uni_ArithmeticClass_Text_StudyMultiplication::
	.string "Stude multiplicationem.$"

Ardor_Uni_ArithmeticClass_Text_StudyDivision::
	.string "Stude divisionem.$"

Ardor_Uni_ArithmeticClass_Text_StudyExponents::
	.string "Stude potentias.$"

Ardor_Uni_ArithmeticClass_Text_StudyRadicals::
	.string "Stude radices.$"
