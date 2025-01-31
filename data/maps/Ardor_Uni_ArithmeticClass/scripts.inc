Ardor_Uni_ArithmeticClass_MapScripts::
	.byte 0


Ardor_Uni_ArithmeticClass_EventScript_Teacher::
# 16 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	lock
# 17 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	faceplayer
# 18 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	checktrainerflag TRAINER_UNI_ARITHMETIC
	goto_if 1, Ardor_Uni_ArithmeticClass_EventScript_Teacher_2
# 21 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Teacher_3
# 24 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	setflag FLAG_ARITHMETIC_INTRO
# 25 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_ClassIntro
# 26 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	closemessage
Ardor_Uni_ArithmeticClass_EventScript_Teacher_1:
# 28 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 29 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	waitmovement 0
# 30 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Teacher_2:
# 19 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_ClassFinished
# 20 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	closemessage
	goto Ardor_Uni_ArithmeticClass_EventScript_Teacher_1

Ardor_Uni_ArithmeticClass_EventScript_Teacher_3:
# 22 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	call Ardor_Uni_ArithmeticClass_EventScript_CheckLessons
	goto Ardor_Uni_ArithmeticClass_EventScript_Teacher_1


Ardor_Uni_ArithmeticClass_EventScript_CheckLessons::
# 35 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	setvar VAR_TEMP_7, 0
# 36 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_2
# 39 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_StudyAddition
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_1:
# 41 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	goto_if_set FLAG_TEMP_2, Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_6
# 44 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_StudySubtraction
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_5:
# 46 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	goto_if_set FLAG_TEMP_3, Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_10
# 49 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_StudyMultiplication
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_9:
# 51 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	goto_if_set FLAG_TEMP_4, Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_14
# 54 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_StudyDivision
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_13:
# 56 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	goto_if_set FLAG_TEMP_5, Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_18
# 59 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_StudyExponents
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_17:
# 61 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	goto_if_set FLAG_TEMP_6, Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_22
# 64 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_StudyRadicals
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_21:
# 66 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	compare VAR_TEMP_7, 6
	goto_if_eq Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_26
Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_25:
	return

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_2:
# 37 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_1

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_6:
# 42 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_5

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_10:
# 47 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_9

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_14:
# 52 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_13

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_18:
# 57 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_17

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_22:
# 62 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_21

Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_26:
# 67 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	call Ardor_Uni_ArithmeticClass_EventScript_Test
	goto Ardor_Uni_ArithmeticClass_EventScript_CheckLessons_25


Ardor_Uni_ArithmeticClass_EventScript_Test::
# 73 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_TestBegin
# 74 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	waitmessage
# 75 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 76 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	waitmessage
# 77 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_ARITHMETIC, Ardor_Uni_ArithmeticClass_Text_TeacherBattleLost
# 78 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 79 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_ClassFinished
# 80 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	closemessage
	return


Ardor_Uni_ArithmeticClass_EventScript_Student1::
# 86 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	lock
# 87 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	faceplayer
# 88 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Student1_2
# 92 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_Student1
Ardor_Uni_ArithmeticClass_EventScript_Student1_1:
# 94 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	closemessage
# 95 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 96 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	waitmovement 0
# 97 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Student1_2:
# 89 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	setflag FLAG_TEMP_1
# 90 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_Lesson1
	goto Ardor_Uni_ArithmeticClass_EventScript_Student1_1


Ardor_Uni_ArithmeticClass_EventScript_Student2::
# 103 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	lock
# 104 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	faceplayer
# 105 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Student2_2
# 109 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_Student2
Ardor_Uni_ArithmeticClass_EventScript_Student2_1:
# 111 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	closemessage
# 112 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 113 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	waitmovement 0
# 114 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Student2_2:
# 106 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	setflag FLAG_TEMP_2
# 107 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_Lesson2
	goto Ardor_Uni_ArithmeticClass_EventScript_Student2_1


Ardor_Uni_ArithmeticClass_EventScript_Student3::
# 120 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	lock
# 121 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	faceplayer
# 122 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Student3_2
# 126 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_Student3
Ardor_Uni_ArithmeticClass_EventScript_Student3_1:
# 128 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	closemessage
# 129 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 130 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	waitmovement 0
# 131 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Student3_2:
# 123 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	setflag FLAG_TEMP_3
# 124 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_Lesson3
	goto Ardor_Uni_ArithmeticClass_EventScript_Student3_1


Ardor_Uni_ArithmeticClass_EventScript_Student4::
# 137 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	lock
# 138 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	faceplayer
# 139 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Student4_2
# 143 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_Student4
Ardor_Uni_ArithmeticClass_EventScript_Student4_1:
# 145 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	closemessage
# 146 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 147 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	waitmovement 0
# 148 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Student4_2:
# 140 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	setflag FLAG_TEMP_4
# 141 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_Lesson4
	goto Ardor_Uni_ArithmeticClass_EventScript_Student4_1


Ardor_Uni_ArithmeticClass_EventScript_Student5::
# 154 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	lock
# 155 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	faceplayer
# 156 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Student5_2
# 160 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_Student5
Ardor_Uni_ArithmeticClass_EventScript_Student5_1:
# 162 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	closemessage
# 163 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 164 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	waitmovement 0
# 165 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Student5_2:
# 157 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	setflag FLAG_TEMP_5
# 158 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_Lesson5
	goto Ardor_Uni_ArithmeticClass_EventScript_Student5_1


Ardor_Uni_ArithmeticClass_EventScript_Student6::
# 171 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	lock
# 172 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	faceplayer
# 173 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	goto_if_set FLAG_ARITHMETIC_INTRO, Ardor_Uni_ArithmeticClass_EventScript_Student6_2
# 177 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_Student6
Ardor_Uni_ArithmeticClass_EventScript_Student6_1:
# 179 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	closemessage
# 180 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 181 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	waitmovement 0
# 182 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	release
	end

Ardor_Uni_ArithmeticClass_EventScript_Student6_2:
# 174 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	setflag FLAG_TEMP_6
# 175 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	msgbox Ardor_Uni_ArithmeticClass_Text_Lesson6
	goto Ardor_Uni_ArithmeticClass_EventScript_Student6_1


Ardor_Uni_ArithmeticClass_Text_ClassIntro::
# 186 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Salve puer. Magistra Sadia sum. Necesse\n"
	.string "est tibi docere arithmeticam. Partes\l"
	.string "arithmeticae sunt sex: additio,\l"
	.string "subtractio, multiplicatio, divisio,\l"
	.string "potentia, et radicis extractio. Stude\l"
	.string "partes sex et reveni.$"

Ardor_Uni_ArithmeticClass_Text_Student1::
# 190 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "$"

Ardor_Uni_ArithmeticClass_Text_Student2::
# 194 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "$"

Ardor_Uni_ArithmeticClass_Text_Student3::
# 198 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "$"

Ardor_Uni_ArithmeticClass_Text_Student4::
# 202 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "$"

Ardor_Uni_ArithmeticClass_Text_Student5::
# 206 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "$"

Ardor_Uni_ArithmeticClass_Text_Student6::
# 210 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "$"

Ardor_Uni_ArithmeticClass_Text_Lesson1::
# 214 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Additio est operatio arithmetica qua\n"
	.string "summa numerorum quantitatumve\l"
	.string "quarundam describitur.$"

Ardor_Uni_ArithmeticClass_Text_Lesson2::
# 218 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Subtractio est operatio arithmetica\n"
	.string "contraria additio. Subtractio est\l"
	.string "additio numeri negativi.$"

Ardor_Uni_ArithmeticClass_Text_Lesson3::
# 222 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Multiplicatio operatio arithmetica est\n"
	.string "inversa divisio.$"

Ardor_Uni_ArithmeticClass_Text_Lesson4::
# 226 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Divisio est operatio quae numerum in\n"
	.string "partes aequales dividit.$"

Ardor_Uni_ArithmeticClass_Text_Lesson5::
# 230 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Potentia multiplicatio est repetita$"

Ardor_Uni_ArithmeticClass_Text_Lesson6::
# 234 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Radicis extractio significat\n"
	.string "aequationem solvere cuius forma est\l"
	.string "(n)(n) = x.$"

Ardor_Uni_ArithmeticClass_Text_TeacherBattleLost::
# 238 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Me subtraxisti.$"

Ardor_Uni_ArithmeticClass_Text_ClassFinished::
# 242 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Iam studuisti arithmeticam.$"

Ardor_Uni_ArithmeticClass_Text_TestBegin::
# 246 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Iam studuisti partes sex.$"

Ardor_Uni_ArithmeticClass_Text_StudyAddition::
# 250 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Stude additionem.$"

Ardor_Uni_ArithmeticClass_Text_StudySubtraction::
# 254 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Stude subtractionem.$"

Ardor_Uni_ArithmeticClass_Text_StudyMultiplication::
# 258 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Stude multiplicationem.$"

Ardor_Uni_ArithmeticClass_Text_StudyDivision::
# 262 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Stude divisionem.$"

Ardor_Uni_ArithmeticClass_Text_StudyExponents::
# 266 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Stude potentias.$"

Ardor_Uni_ArithmeticClass_Text_StudyRadicals::
# 270 "data//maps/Ardor_Uni_ArithmeticClass/scripts.pory"
	.string "Stude radices.$"
