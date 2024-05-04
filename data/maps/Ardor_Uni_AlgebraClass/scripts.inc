Ardor_Uni_AlgebraClass_MapScripts::
	.byte 0


Ardor_Uni_AlgebraClass_EventScript_Teacher::
# 17 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	lock
# 18 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	faceplayer
# 19 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	checktrainerflag TRAINER_UNI_ALGEBRA
	goto_if 1, Ardor_Uni_AlgebraClass_EventScript_Teacher_2
# 22 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Teacher_3
# 25 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	setflag FLAG_ALGEBRA_INTRO
# 26 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_ClassIntro
# 27 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	closemessage
Ardor_Uni_AlgebraClass_EventScript_Teacher_1:
# 29 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 30 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	waitmovement 0
# 31 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Teacher_2:
# 20 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_ClassFinished
# 21 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	closemessage
	goto Ardor_Uni_AlgebraClass_EventScript_Teacher_1

Ardor_Uni_AlgebraClass_EventScript_Teacher_3:
# 23 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	call Ardor_Uni_AlgebraClass_EventScript_CheckLessons
	goto Ardor_Uni_AlgebraClass_EventScript_Teacher_1


Ardor_Uni_AlgebraClass_EventScript_CheckLessons::
# 36 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	setvar VAR_TEMP_7, 0
# 37 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_AlgebraClass_EventScript_CheckLessons_2
# 40 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_StudyAddition
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_1:
# 42 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	goto_if_set FLAG_TEMP_2, Ardor_Uni_AlgebraClass_EventScript_CheckLessons_6
# 45 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_StudySubtraction
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_5:
# 47 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	goto_if_set FLAG_TEMP_3, Ardor_Uni_AlgebraClass_EventScript_CheckLessons_10
# 50 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_StudyMultiplication
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_9:
# 52 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	goto_if_set FLAG_TEMP_4, Ardor_Uni_AlgebraClass_EventScript_CheckLessons_14
# 55 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_StudyDivision
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_13:
# 57 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	goto_if_set FLAG_TEMP_5, Ardor_Uni_AlgebraClass_EventScript_CheckLessons_18
# 60 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_StudyExponents
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_17:
# 62 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	goto_if_set FLAG_TEMP_6, Ardor_Uni_AlgebraClass_EventScript_CheckLessons_22
# 65 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_StudyRadicals
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_21:
# 67 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	compare VAR_TEMP_7, 6
	goto_if_eq Ardor_Uni_AlgebraClass_EventScript_CheckLessons_26
Ardor_Uni_AlgebraClass_EventScript_CheckLessons_25:
	return

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_2:
# 38 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_1

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_6:
# 43 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_5

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_10:
# 48 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_9

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_14:
# 53 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_13

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_18:
# 58 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_17

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_22:
# 63 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_21

Ardor_Uni_AlgebraClass_EventScript_CheckLessons_26:
# 68 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	call Ardor_Uni_AlgebraClass_EventScript_Test
	goto Ardor_Uni_AlgebraClass_EventScript_CheckLessons_25


Ardor_Uni_AlgebraClass_EventScript_Test::
# 74 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_TestBegin
# 75 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	waitmessage
# 76 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 77 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	waitmessage
# 78 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_ALGEBRA, Ardor_Uni_AlgebraClass_Text_TeacherBattleLost
# 79 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 80 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_ClassFinished
# 81 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	closemessage
	return


Ardor_Uni_AlgebraClass_EventScript_Student1::
# 87 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	lock
# 88 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	faceplayer
# 89 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Student1_2
# 93 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_Student1
Ardor_Uni_AlgebraClass_EventScript_Student1_1:
# 95 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	closemessage
# 96 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 97 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	waitmovement 0
# 98 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Student1_2:
# 90 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	setflag FLAG_TEMP_1
# 91 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_Lesson1
	goto Ardor_Uni_AlgebraClass_EventScript_Student1_1


Ardor_Uni_AlgebraClass_EventScript_Student2::
# 104 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	lock
# 105 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	faceplayer
# 106 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Student2_2
# 110 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_Student2
Ardor_Uni_AlgebraClass_EventScript_Student2_1:
# 112 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	closemessage
# 113 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 114 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	waitmovement 0
# 115 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Student2_2:
# 107 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	setflag FLAG_TEMP_2
# 108 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_Lesson2
	goto Ardor_Uni_AlgebraClass_EventScript_Student2_1


Ardor_Uni_AlgebraClass_EventScript_Student3::
# 121 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	lock
# 122 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	faceplayer
# 123 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Student3_2
# 127 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_Student3
Ardor_Uni_AlgebraClass_EventScript_Student3_1:
# 129 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	closemessage
# 130 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 131 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	waitmovement 0
# 132 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Student3_2:
# 124 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	setflag FLAG_TEMP_3
# 125 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_Lesson3
	goto Ardor_Uni_AlgebraClass_EventScript_Student3_1


Ardor_Uni_AlgebraClass_EventScript_Student4::
# 138 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	lock
# 139 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	faceplayer
# 140 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Student4_2
# 144 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_Student4
Ardor_Uni_AlgebraClass_EventScript_Student4_1:
# 146 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	closemessage
# 147 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 148 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	waitmovement 0
# 149 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Student4_2:
# 141 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	setflag FLAG_TEMP_4
# 142 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_Lesson4
	goto Ardor_Uni_AlgebraClass_EventScript_Student4_1


Ardor_Uni_AlgebraClass_EventScript_Student5::
# 155 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	lock
# 156 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	faceplayer
# 157 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Student5_2
# 161 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_Student5
Ardor_Uni_AlgebraClass_EventScript_Student5_1:
# 163 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	closemessage
# 164 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 165 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	waitmovement 0
# 166 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Student5_2:
# 158 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	setflag FLAG_TEMP_5
# 159 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_Lesson5
	goto Ardor_Uni_AlgebraClass_EventScript_Student5_1


Ardor_Uni_AlgebraClass_EventScript_Student6::
# 172 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	lock
# 173 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	faceplayer
# 174 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	goto_if_set FLAG_ALGEBRA_INTRO, Ardor_Uni_AlgebraClass_EventScript_Student6_2
# 178 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_Student6
Ardor_Uni_AlgebraClass_EventScript_Student6_1:
# 180 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	closemessage
# 181 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 182 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	waitmovement 0
# 183 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	release
	end

Ardor_Uni_AlgebraClass_EventScript_Student6_2:
# 175 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	setflag FLAG_TEMP_6
# 176 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	msgbox Ardor_Uni_AlgebraClass_Text_Lesson6
	goto Ardor_Uni_AlgebraClass_EventScript_Student6_1


Ardor_Uni_AlgebraClass_Text_ClassIntro::
# 187 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "Salve puer. Magistra Camilla sum.\l"
	.string "Necesse est tibi docere algebram.\l"
	.string "Partes algebrae sunt sex: additio,\l"
	.string "subtractio, multiplicatio, divisio,\l"
	.string "theoreticus, et matrices. Stude partes\l"
	.string "sex et reveni.$"

Ardor_Uni_AlgebraClass_Text_Student1::
# 191 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "$"

Ardor_Uni_AlgebraClass_Text_Student2::
# 195 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "$"

Ardor_Uni_AlgebraClass_Text_Student3::
# 199 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "$"

Ardor_Uni_AlgebraClass_Text_Student4::
# 203 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "$"

Ardor_Uni_AlgebraClass_Text_Student5::
# 207 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "$"

Ardor_Uni_AlgebraClass_Text_Student6::
# 211 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "$"

Ardor_Uni_AlgebraClass_Text_Lesson1::
# 215 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "n et IV est VII, ergo n tres est.$"

Ardor_Uni_AlgebraClass_Text_Lesson2::
# 219 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "n de CDLXXXIX LXIX est, ergo n est CDXL$"

Ardor_Uni_AlgebraClass_Text_Lesson3::
# 223 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "Rectangulus cum latitudino XXIX et\l"
	.string "longitudino n tenet area LVIII ergo n\l"
	.string "est II$"

Ardor_Uni_AlgebraClass_Text_Lesson4::
# 227 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "Rectangulus tenet area MMC et\l"
	.string "longitudino V ergo latitudinum\l"
	.string "rectanguli CDXX est$"

Ardor_Uni_AlgebraClass_Text_Lesson5::
# 231 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "i est unitas imaginaria quia\l"
	.string "rectangulus cum longitudino i et\l"
	.string "latidudino i tenet aream unum\l"
	.string "negativum.$"

Ardor_Uni_AlgebraClass_Text_Lesson6::
# 235 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "Matrix in mathematice est tabula\l"
	.string "numerorum formae rectangularis. Tabula\l"
	.string "unam tenet numeros quattor: I, V, X, L\l"
	.string "Tubula dua tenet numeros quattor: V, X,\l"
	.string "L, C. Tabula unam et tabula dua est\l"
	.string "tabula tria quia tenet numeros\l"
	.string "quattor: VI, XV, LX, CL$"

Ardor_Uni_AlgebraClass_Text_TeacherBattleLost::
# 239 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "Victoria mea imaginaria est.$"

Ardor_Uni_AlgebraClass_Text_ClassFinished::
# 243 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "Iam studuisti algebram.$"

Ardor_Uni_AlgebraClass_Text_TestBegin::
# 247 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "Iam studuisti partes sex.$"

Ardor_Uni_AlgebraClass_Text_StudyAddition::
# 251 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "Stude additionem.$"

Ardor_Uni_AlgebraClass_Text_StudySubtraction::
# 255 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "Stude subtractionem.$"

Ardor_Uni_AlgebraClass_Text_StudyMultiplication::
# 259 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "Stude multiplicationem.$"

Ardor_Uni_AlgebraClass_Text_StudyDivision::
# 263 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "Stude divisionem.$"

Ardor_Uni_AlgebraClass_Text_StudyExponents::
# 267 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "Stude algebram theoreticam.$"

Ardor_Uni_AlgebraClass_Text_StudyRadicals::
# 271 "data/maps/Ardor_Uni_AlgebraClass/scripts.pory"
	.string "Stude matrices.$"
