Ardor_Uni_GeometryClass_MapScripts::
	.byte 0


Ardor_Uni_GeometryClass_EventScript_Teacher::
# 17 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	lock
# 18 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	faceplayer
# 19 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	checktrainerflag TRAINER_UNI_GEOMETRY
	goto_if 1, Ardor_Uni_GeometryClass_EventScript_Teacher_2
# 22 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	goto_if_set FLAG_GEOMETRY_INTRO, Ardor_Uni_GeometryClass_EventScript_Teacher_3
# 25 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	setflag FLAG_GEOMETRY_INTRO
# 26 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_ClassIntro
# 27 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	closemessage
# 28 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	call Ardor_Uni_GeometryClass_EventScript_CheckLessons
Ardor_Uni_GeometryClass_EventScript_Teacher_1:
# 30 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 31 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	waitmovement 0
# 32 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	release
	end

Ardor_Uni_GeometryClass_EventScript_Teacher_2:
# 20 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_ClassFinished
# 21 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	closemessage
	goto Ardor_Uni_GeometryClass_EventScript_Teacher_1

Ardor_Uni_GeometryClass_EventScript_Teacher_3:
# 23 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	call Ardor_Uni_GeometryClass_EventScript_CheckLessons
	goto Ardor_Uni_GeometryClass_EventScript_Teacher_1


Ardor_Uni_GeometryClass_EventScript_CheckLessons::
# 38 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	setvar VAR_TEMP_7, 0
# 39 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_GeometryClass_EventScript_CheckLessons_2
# 42 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_StudyLesson1
Ardor_Uni_GeometryClass_EventScript_CheckLessons_1:
# 44 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	goto_if_set FLAG_TEMP_2, Ardor_Uni_GeometryClass_EventScript_CheckLessons_6
# 47 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_StudyLesson2
Ardor_Uni_GeometryClass_EventScript_CheckLessons_5:
# 49 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	goto_if_set FLAG_TEMP_3, Ardor_Uni_GeometryClass_EventScript_CheckLessons_10
# 52 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_StudyLesson3
Ardor_Uni_GeometryClass_EventScript_CheckLessons_9:
# 54 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	goto_if_set FLAG_TEMP_4, Ardor_Uni_GeometryClass_EventScript_CheckLessons_14
# 57 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_StudyLesson4
Ardor_Uni_GeometryClass_EventScript_CheckLessons_13:
# 59 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	compare VAR_TEMP_7, 4
	goto_if_eq Ardor_Uni_GeometryClass_EventScript_CheckLessons_18
Ardor_Uni_GeometryClass_EventScript_CheckLessons_17:
	return

Ardor_Uni_GeometryClass_EventScript_CheckLessons_2:
# 40 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GeometryClass_EventScript_CheckLessons_1

Ardor_Uni_GeometryClass_EventScript_CheckLessons_6:
# 45 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GeometryClass_EventScript_CheckLessons_5

Ardor_Uni_GeometryClass_EventScript_CheckLessons_10:
# 50 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GeometryClass_EventScript_CheckLessons_9

Ardor_Uni_GeometryClass_EventScript_CheckLessons_14:
# 55 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GeometryClass_EventScript_CheckLessons_13

Ardor_Uni_GeometryClass_EventScript_CheckLessons_18:
# 60 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	call Ardor_Uni_GeometryClass_EventScript_Test
	goto Ardor_Uni_GeometryClass_EventScript_CheckLessons_17


Ardor_Uni_GeometryClass_EventScript_Test::
# 66 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_TestBegin
# 67 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	waitmessage
# 68 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 69 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	waitmessage
# 70 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_GEOMETRY, Ardor_Uni_GeometryClass_Text_TeacherBattleLost
# 71 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 72 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_ClassFinished
# 73 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	closemessage
	return


Ardor_Uni_GeometryClass_EventScript_Student1::
# 79 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	lock
# 80 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	faceplayer
# 81 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	goto_if_set FLAG_GEOMETRY_INTRO, Ardor_Uni_GeometryClass_EventScript_Student1_2
# 85 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_Student1
Ardor_Uni_GeometryClass_EventScript_Student1_1:
# 87 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	closemessage
# 88 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 89 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	waitmovement 0
# 90 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	release
	end

Ardor_Uni_GeometryClass_EventScript_Student1_2:
# 82 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	setflag FLAG_TEMP_1
# 83 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_Lesson1
	goto Ardor_Uni_GeometryClass_EventScript_Student1_1


Ardor_Uni_GeometryClass_EventScript_Student2::
# 96 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	lock
# 97 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	faceplayer
# 98 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	goto_if_set FLAG_GEOMETRY_INTRO, Ardor_Uni_GeometryClass_EventScript_Student2_2
# 106 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_Student2
Ardor_Uni_GeometryClass_EventScript_Student2_1:
# 108 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	closemessage
# 109 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 110 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	waitmovement 0
# 111 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	release
	end

Ardor_Uni_GeometryClass_EventScript_Student2_2:
# 99 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_GeometryClass_EventScript_Student2_5
# 103 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_StudyLesson1
	goto Ardor_Uni_GeometryClass_EventScript_Student2_1

Ardor_Uni_GeometryClass_EventScript_Student2_5:
# 100 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	setflag FLAG_TEMP_2
# 101 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_Lesson2
	goto Ardor_Uni_GeometryClass_EventScript_Student2_1


Ardor_Uni_GeometryClass_EventScript_Student3::
# 117 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	lock
# 118 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	faceplayer
# 119 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	goto_if_set FLAG_GEOMETRY_INTRO, Ardor_Uni_GeometryClass_EventScript_Student3_2
# 127 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_Student3
Ardor_Uni_GeometryClass_EventScript_Student3_1:
# 129 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	closemessage
# 130 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 131 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	waitmovement 0
# 132 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	release
	end

Ardor_Uni_GeometryClass_EventScript_Student3_2:
# 120 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	goto_if_set FLAG_TEMP_2, Ardor_Uni_GeometryClass_EventScript_Student3_5
# 124 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_StudyLesson2
	goto Ardor_Uni_GeometryClass_EventScript_Student3_1

Ardor_Uni_GeometryClass_EventScript_Student3_5:
# 121 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	setflag FLAG_TEMP_3
# 122 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_Lesson3
	goto Ardor_Uni_GeometryClass_EventScript_Student3_1


Ardor_Uni_GeometryClass_EventScript_Student4::
# 138 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	lock
# 139 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	faceplayer
# 140 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	goto_if_set FLAG_GEOMETRY_INTRO, Ardor_Uni_GeometryClass_EventScript_Student4_2
# 148 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_Student4
Ardor_Uni_GeometryClass_EventScript_Student4_1:
# 150 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	closemessage
# 151 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 152 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	waitmovement 0
# 153 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	release
	end

Ardor_Uni_GeometryClass_EventScript_Student4_2:
# 141 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	goto_if_set FLAG_TEMP_3, Ardor_Uni_GeometryClass_EventScript_Student4_5
# 145 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_StudyLesson3
	goto Ardor_Uni_GeometryClass_EventScript_Student4_1

Ardor_Uni_GeometryClass_EventScript_Student4_5:
# 142 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	setflag FLAG_TEMP_4
# 143 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	msgbox Ardor_Uni_GeometryClass_Text_Lesson4
	goto Ardor_Uni_GeometryClass_EventScript_Student4_1


Ardor_Uni_GeometryClass_Text_ClassIntro::
# 158 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "Salve puer! Magister Jefferson novus\n"
	.string "sum. Iam non docui geometriam sed\l"
	.string "necesse est tibi docere geometriam.\l"
	.string "Numerus formarum facilium est quattor:\l"
	.string "Linea, Triangulum, Quadrum, et Circulus.\l"
	.string "Stude formas quattor.$"

Ardor_Uni_GeometryClass_Text_Student1::
# 162 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "$"

Ardor_Uni_GeometryClass_Text_Student2::
# 166 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "$"

Ardor_Uni_GeometryClass_Text_Student3::
# 170 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "$"

Ardor_Uni_GeometryClass_Text_Student4::
# 174 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "$"

Ardor_Uni_GeometryClass_Text_StudyLesson1::
# 178 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "Stude lineas.$"

Ardor_Uni_GeometryClass_Text_StudyLesson2::
# 182 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "Stude triangula.$"

Ardor_Uni_GeometryClass_Text_StudyLesson3::
# 186 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "Stude quadra.$"

Ardor_Uni_GeometryClass_Text_StudyLesson4::
# 190 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "Stude circulos.$"

Ardor_Uni_GeometryClass_Text_TeacherBattleLost::
# 194 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "Examen primum perdidi.$"

Ardor_Uni_GeometryClass_Text_ClassFinished::
# 198 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "Congratulatio! Iam studuisti\n"
	.string "geometriam.$"

Ardor_Uni_GeometryClass_Text_TestBegin::
# 202 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "Iam studuisti formas quattor!?$"

Ardor_Uni_GeometryClass_Text_Lesson1::
# 206 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "Linea est forma cum longitudine, sed\n"
	.string "latitudine expers.$"

Ardor_Uni_GeometryClass_Text_Lesson2::
# 210 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "Triangulum est figura geometrica plana\n"
	.string "cui sunt tria latera et tres anguli.$"

Ardor_Uni_GeometryClass_Text_Lesson3::
# 214 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "Quadrum est rectangulum cui sunt\n"
	.string "quattuor latera aequalis longitudinis.$"

Ardor_Uni_GeometryClass_Text_Lesson4::
# 218 "data//maps/Ardor_Uni_GeometryClass/scripts.pory"
	.string "Circulus est forma, quae ex punctis in\n"
	.string "plano descriptis constat quae pari\l"
	.string "intervallo, quod radius (r) vocatur, a\l"
	.string "dato puncto, centro appellato, distant.$"
