Ardor_Uni_HistoryClass_MapScripts::
	.byte 0


Ardor_Uni_HistoryClass_EventScript_Teacher::
# 17 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	lock
# 18 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	faceplayer
# 19 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	checktrainerflag TRAINER_UNI_HISTORY
	goto_if 1, Ardor_Uni_HistoryClass_EventScript_Teacher_2
# 22 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Teacher_3
# 25 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	setflag FLAG_HISTORY_INTRO
# 26 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_ClassIntro
# 27 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	closemessage
# 28 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	call Ardor_Uni_HistoryClass_EventScript_CheckLessons
Ardor_Uni_HistoryClass_EventScript_Teacher_1:
# 30 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 31 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	waitmovement 0
# 32 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	release
	end

Ardor_Uni_HistoryClass_EventScript_Teacher_2:
# 20 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_ClassFinished
# 21 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	closemessage
	goto Ardor_Uni_HistoryClass_EventScript_Teacher_1

Ardor_Uni_HistoryClass_EventScript_Teacher_3:
# 23 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	call Ardor_Uni_HistoryClass_EventScript_CheckLessons
	goto Ardor_Uni_HistoryClass_EventScript_Teacher_1


Ardor_Uni_HistoryClass_EventScript_CheckLessons::
# 37 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	setvar VAR_TEMP_7, 0
# 38 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_HistoryClass_EventScript_CheckLessons_2
# 41 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson1
Ardor_Uni_HistoryClass_EventScript_CheckLessons_1:
# 43 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_TEMP_2, Ardor_Uni_HistoryClass_EventScript_CheckLessons_6
# 46 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson2
Ardor_Uni_HistoryClass_EventScript_CheckLessons_5:
# 48 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_TEMP_3, Ardor_Uni_HistoryClass_EventScript_CheckLessons_10
# 51 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson3
Ardor_Uni_HistoryClass_EventScript_CheckLessons_9:
# 53 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_TEMP_4, Ardor_Uni_HistoryClass_EventScript_CheckLessons_14
# 56 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson4
Ardor_Uni_HistoryClass_EventScript_CheckLessons_13:
# 58 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_TEMP_5, Ardor_Uni_HistoryClass_EventScript_CheckLessons_18
# 61 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson5
Ardor_Uni_HistoryClass_EventScript_CheckLessons_17:
# 63 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_TEMP_6, Ardor_Uni_HistoryClass_EventScript_CheckLessons_22
# 66 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson6
Ardor_Uni_HistoryClass_EventScript_CheckLessons_21:
# 68 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_TEMP_7, Ardor_Uni_HistoryClass_EventScript_CheckLessons_26
# 71 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson7
Ardor_Uni_HistoryClass_EventScript_CheckLessons_25:
# 73 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	compare VAR_TEMP_7, 7
	goto_if_eq Ardor_Uni_HistoryClass_EventScript_CheckLessons_30
Ardor_Uni_HistoryClass_EventScript_CheckLessons_29:
	return

Ardor_Uni_HistoryClass_EventScript_CheckLessons_2:
# 39 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_1

Ardor_Uni_HistoryClass_EventScript_CheckLessons_6:
# 44 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_5

Ardor_Uni_HistoryClass_EventScript_CheckLessons_10:
# 49 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_9

Ardor_Uni_HistoryClass_EventScript_CheckLessons_14:
# 54 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_13

Ardor_Uni_HistoryClass_EventScript_CheckLessons_18:
# 59 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_17

Ardor_Uni_HistoryClass_EventScript_CheckLessons_22:
# 64 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_21

Ardor_Uni_HistoryClass_EventScript_CheckLessons_26:
# 69 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_25

Ardor_Uni_HistoryClass_EventScript_CheckLessons_30:
# 74 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	call Ardor_Uni_HistoryClass_EventScript_Test
	goto Ardor_Uni_HistoryClass_EventScript_CheckLessons_29


Ardor_Uni_HistoryClass_EventScript_Test::
# 80 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_TestBegin
# 81 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	waitmessage
# 82 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 83 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	waitmessage
# 84 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_HISTORY, Ardor_Uni_HistoryClass_Text_TeacherBattleLost
# 85 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 86 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_ClassFinished
# 87 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	closemessage
	return


Ardor_Uni_HistoryClass_EventScript_Student1::
# 93 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	lock
# 94 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	faceplayer
# 95 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student1_2
# 99 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Student1
Ardor_Uni_HistoryClass_EventScript_Student1_1:
# 101 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	closemessage
# 102 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 103 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	waitmovement 0
# 104 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student1_2:
# 96 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	setflag FLAG_TEMP_1
# 97 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Lesson1
	goto Ardor_Uni_HistoryClass_EventScript_Student1_1


Ardor_Uni_HistoryClass_EventScript_Student2::
# 110 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	lock
# 111 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	faceplayer
# 112 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student2_2
# 120 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Student2
Ardor_Uni_HistoryClass_EventScript_Student2_1:
# 122 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	closemessage
# 123 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 124 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	waitmovement 0
# 125 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student2_2:
# 113 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_HistoryClass_EventScript_Student2_5
# 117 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson1
	goto Ardor_Uni_HistoryClass_EventScript_Student2_1

Ardor_Uni_HistoryClass_EventScript_Student2_5:
# 114 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	setflag FLAG_TEMP_2
# 115 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Lesson2
	goto Ardor_Uni_HistoryClass_EventScript_Student2_1


Ardor_Uni_HistoryClass_EventScript_Student3::
# 131 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	lock
# 132 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	faceplayer
# 133 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student3_2
# 141 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Student3
Ardor_Uni_HistoryClass_EventScript_Student3_1:
# 143 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	closemessage
# 144 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 145 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	waitmovement 0
# 146 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student3_2:
# 134 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_TEMP_2, Ardor_Uni_HistoryClass_EventScript_Student3_5
# 138 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson2
	goto Ardor_Uni_HistoryClass_EventScript_Student3_1

Ardor_Uni_HistoryClass_EventScript_Student3_5:
# 135 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	setflag FLAG_TEMP_3
# 136 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Lesson3
	goto Ardor_Uni_HistoryClass_EventScript_Student3_1


Ardor_Uni_HistoryClass_EventScript_Student4::
# 152 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	lock
# 153 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	faceplayer
# 154 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student4_2
# 162 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Student4
Ardor_Uni_HistoryClass_EventScript_Student4_1:
# 164 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	closemessage
# 165 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 166 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	waitmovement 0
# 167 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student4_2:
# 155 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_TEMP_3, Ardor_Uni_HistoryClass_EventScript_Student4_5
# 159 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson3
	goto Ardor_Uni_HistoryClass_EventScript_Student4_1

Ardor_Uni_HistoryClass_EventScript_Student4_5:
# 156 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	setflag FLAG_TEMP_4
# 157 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Lesson4
	goto Ardor_Uni_HistoryClass_EventScript_Student4_1


Ardor_Uni_HistoryClass_EventScript_Student5::
# 173 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	lock
# 174 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	faceplayer
# 175 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student5_2
# 183 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Student5
Ardor_Uni_HistoryClass_EventScript_Student5_1:
# 185 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	closemessage
# 186 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 187 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	waitmovement 0
# 188 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student5_2:
# 176 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_TEMP_4, Ardor_Uni_HistoryClass_EventScript_Student5_5
# 180 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson4
	goto Ardor_Uni_HistoryClass_EventScript_Student5_1

Ardor_Uni_HistoryClass_EventScript_Student5_5:
# 177 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	setflag FLAG_TEMP_5
# 178 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Lesson5
	goto Ardor_Uni_HistoryClass_EventScript_Student5_1


Ardor_Uni_HistoryClass_EventScript_Student6::
# 194 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	lock
# 195 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	faceplayer
# 196 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student6_2
# 204 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Student6
Ardor_Uni_HistoryClass_EventScript_Student6_1:
# 206 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	closemessage
# 207 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 208 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	waitmovement 0
# 209 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student6_2:
# 197 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_TEMP_5, Ardor_Uni_HistoryClass_EventScript_Student6_5
# 201 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson5
	goto Ardor_Uni_HistoryClass_EventScript_Student6_1

Ardor_Uni_HistoryClass_EventScript_Student6_5:
# 198 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	setflag FLAG_TEMP_6
# 199 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Lesson6
	goto Ardor_Uni_HistoryClass_EventScript_Student6_1


Ardor_Uni_HistoryClass_EventScript_Student7::
# 215 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	lock
# 216 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	faceplayer
# 217 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_HISTORY_INTRO, Ardor_Uni_HistoryClass_EventScript_Student7_2
# 225 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Student7
Ardor_Uni_HistoryClass_EventScript_Student7_1:
# 227 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	closemessage
# 228 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 229 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	waitmovement 0
# 230 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	release
	end

Ardor_Uni_HistoryClass_EventScript_Student7_2:
# 218 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	goto_if_set FLAG_TEMP_6, Ardor_Uni_HistoryClass_EventScript_Student7_5
# 222 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_StudyLesson6
	goto Ardor_Uni_HistoryClass_EventScript_Student7_1

Ardor_Uni_HistoryClass_EventScript_Student7_5:
# 219 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	setflag FLAG_TEMP_7
# 220 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	msgbox Ardor_Uni_HistoryClass_Text_Lesson7
	goto Ardor_Uni_HistoryClass_EventScript_Student7_1


Ardor_Uni_HistoryClass_Text_ClassIntro::
# 234 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "Tace puer! Doctor, non magister tantum,\l"
	.string "Virtreus sum. Necesse est tibi docere\l"
	.string "historiam. Epochae historiae sunt\l"
	.string "septem: Historia Antiqua, Historia\l"
	.string "Classica, Historia Aevorum Mediorum,\l"
	.string "Historia Colonia, Historia Industria,\l"
	.string "Historia Belli, et Historia Nova.$"

Ardor_Uni_HistoryClass_Text_Student1::
# 238 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "$"

Ardor_Uni_HistoryClass_Text_Student2::
# 242 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "$"

Ardor_Uni_HistoryClass_Text_Student3::
# 246 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "$"

Ardor_Uni_HistoryClass_Text_Student4::
# 250 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "$"

Ardor_Uni_HistoryClass_Text_Student5::
# 254 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "$"

Ardor_Uni_HistoryClass_Text_Student6::
# 258 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "$"

Ardor_Uni_HistoryClass_Text_Student7::
# 262 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "$"

Ardor_Uni_HistoryClass_Text_StudyLesson1::
# 266 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "Stude historiam antiquam.$"

Ardor_Uni_HistoryClass_Text_StudyLesson2::
# 270 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "Stude historiam classicam.$"

Ardor_Uni_HistoryClass_Text_StudyLesson3::
# 274 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "Stude historiam aevorum mediorum.$"

Ardor_Uni_HistoryClass_Text_StudyLesson4::
# 278 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "Stude historiam coloniam.$"

Ardor_Uni_HistoryClass_Text_StudyLesson5::
# 282 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "Stude historiam industriam$"

Ardor_Uni_HistoryClass_Text_StudyLesson6::
# 286 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "Stude historiam bellum$"

Ardor_Uni_HistoryClass_Text_StudyLesson7::
# 290 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "Stude historiam novum$"

Ardor_Uni_HistoryClass_Text_TeacherBattleLost::
# 294 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "Tempus meus iam cessit.$"

Ardor_Uni_HistoryClass_Text_ClassFinished::
# 298 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "Iam studuisti historiam.$"

Ardor_Uni_HistoryClass_Text_TestBegin::
# 302 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "Iam studuisti partes septem.$"

Ardor_Uni_HistoryClass_Text_Lesson1::
# 306 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "In temporibus antiquis viri in cavernis\l"
	.string "vixerunt.$"

Ardor_Uni_HistoryClass_Text_Lesson2::
# 310 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "In temporibus classicis viri prope mare\l"
	.string "oppidum erexerunt.$"

Ardor_Uni_HistoryClass_Text_Lesson3::
# 314 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "In temporibus aevorum mediorum magnus\l"
	.string "fuit numerus regum, equorum, et\l"
	.string "castellorum.$"

Ardor_Uni_HistoryClass_Text_Lesson4::
# 318 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "In temporibus colonicis viri oppidorum\l"
	.string "montes transierunt et viros feroces\l"
	.string "caperunt$"

Ardor_Uni_HistoryClass_Text_Lesson5::
# 322 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "In temporibus industriis viri\l"
	.string "invenerunt motrum et creaverunt\l"
	.string "vehicula multa.$"

Ardor_Uni_HistoryClass_Text_Lesson6::
# 326 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "In temporibus belli magni multi viri\l"
	.string "occiderunt.$"

Ardor_Uni_HistoryClass_Text_Lesson7::
# 330 "data/maps/Ardor_Uni_HistoryClass/scripts.pory"
	.string "Post bellum magnum factio Rocheta\l"
	.string "republicam virorum cepit.$"
