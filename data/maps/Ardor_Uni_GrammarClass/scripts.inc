Ardor_Uni_GrammarClass_MapScripts::
	.byte 0


Ardor_Uni_GrammarClass_EventScript_IncrementVar::
# 19 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	switch VAR_TEMP_7
# 20 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	case 0, Ardor_Uni_GrammarClass_EventScript_IncrementVar_3
# 22 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	case 1, Ardor_Uni_GrammarClass_EventScript_IncrementVar_4
# 24 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	case 2, Ardor_Uni_GrammarClass_EventScript_IncrementVar_5
# 26 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	case 3, Ardor_Uni_GrammarClass_EventScript_IncrementVar_6
# 28 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	case 4, Ardor_Uni_GrammarClass_EventScript_IncrementVar_7
# 30 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	case 5, Ardor_Uni_GrammarClass_EventScript_IncrementVar_8
# 32 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	case 6, Ardor_Uni_GrammarClass_EventScript_IncrementVar_9
# 34 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	case 7, Ardor_Uni_GrammarClass_EventScript_IncrementVar_10
# 36 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	case 8, Ardor_Uni_GrammarClass_EventScript_IncrementVar_11
# 39 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setvar VAR_TEMP_7, 8
Ardor_Uni_GrammarClass_EventScript_IncrementVar_1:
	return

Ardor_Uni_GrammarClass_EventScript_IncrementVar_3:
# 21 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setvar VAR_TEMP_7, 1
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_4:
# 23 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setvar VAR_TEMP_7, 2
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_5:
# 25 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setvar VAR_TEMP_7, 3
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_6:
# 27 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setvar VAR_TEMP_7, 4
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_7:
# 29 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setvar VAR_TEMP_7, 5
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_8:
# 31 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setvar VAR_TEMP_7, 6
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_9:
# 33 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setvar VAR_TEMP_7, 7
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_10:
# 35 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setvar VAR_TEMP_7, 8
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1

Ardor_Uni_GrammarClass_EventScript_IncrementVar_11:
# 37 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setvar VAR_TEMP_7, 8
	goto Ardor_Uni_GrammarClass_EventScript_IncrementVar_1


Ardor_Uni_GrammarClass_EventScript_CheckLessons::
# 45 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setvar VAR_TEMP_7, 0
# 46 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_GrammarClass_EventScript_CheckLessons_2
# 49 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_StudyNouns
Ardor_Uni_GrammarClass_EventScript_CheckLessons_1:
# 51 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_TEMP_2, Ardor_Uni_GrammarClass_EventScript_CheckLessons_6
# 54 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_StudyPronouns
Ardor_Uni_GrammarClass_EventScript_CheckLessons_5:
# 56 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_TEMP_3, Ardor_Uni_GrammarClass_EventScript_CheckLessons_10
# 59 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_StudyVerbs
Ardor_Uni_GrammarClass_EventScript_CheckLessons_9:
# 61 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_TEMP_4, Ardor_Uni_GrammarClass_EventScript_CheckLessons_14
# 64 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_StudyAdverbs
Ardor_Uni_GrammarClass_EventScript_CheckLessons_13:
# 66 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_TEMP_5, Ardor_Uni_GrammarClass_EventScript_CheckLessons_18
# 69 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_StudyParticiples
Ardor_Uni_GrammarClass_EventScript_CheckLessons_17:
# 71 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_TEMP_6, Ardor_Uni_GrammarClass_EventScript_CheckLessons_22
# 74 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_StudyConjunctions
Ardor_Uni_GrammarClass_EventScript_CheckLessons_21:
# 76 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_TEMP_7, Ardor_Uni_GrammarClass_EventScript_CheckLessons_26
# 79 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_StudyPrepositions
Ardor_Uni_GrammarClass_EventScript_CheckLessons_25:
# 81 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_TEMP_8, Ardor_Uni_GrammarClass_EventScript_CheckLessons_30
# 84 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_StudyInterjections
Ardor_Uni_GrammarClass_EventScript_CheckLessons_29:
# 86 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	compare VAR_TEMP_7, 8
	goto_if_eq Ardor_Uni_GrammarClass_EventScript_CheckLessons_34
Ardor_Uni_GrammarClass_EventScript_CheckLessons_33:
	return

Ardor_Uni_GrammarClass_EventScript_CheckLessons_2:
# 47 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_1

Ardor_Uni_GrammarClass_EventScript_CheckLessons_6:
# 52 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_5

Ardor_Uni_GrammarClass_EventScript_CheckLessons_10:
# 57 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_9

Ardor_Uni_GrammarClass_EventScript_CheckLessons_14:
# 62 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_13

Ardor_Uni_GrammarClass_EventScript_CheckLessons_18:
# 67 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_17

Ardor_Uni_GrammarClass_EventScript_CheckLessons_22:
# 72 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_21

Ardor_Uni_GrammarClass_EventScript_CheckLessons_26:
# 77 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_25

Ardor_Uni_GrammarClass_EventScript_CheckLessons_30:
# 82 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_29

Ardor_Uni_GrammarClass_EventScript_CheckLessons_34:
# 87 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_Test
	goto Ardor_Uni_GrammarClass_EventScript_CheckLessons_33


Ardor_Uni_GrammarClass_EventScript_Test::
# 93 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_TestBegin
# 94 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	waitmessage
# 95 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 96 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	waitmessage
# 97 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_GRAMMAR, Ardor_Uni_GrammarClass_Text_TeacherBattleLost
# 98 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 99 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_ClassFinished
# 100 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	closemessage
	return


Ardor_Uni_GrammarClass_EventScript_Teacher::
# 105 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	lock
# 106 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	faceplayer
# 107 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	checktrainerflag TRAINER_UNI_GRAMMAR
	goto_if 1, Ardor_Uni_GrammarClass_EventScript_Teacher_2
# 110 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Teacher_3
# 113 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setflag FLAG_GRAMMAR_INTRO
# 114 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_ClassIntro
# 115 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	closemessage
Ardor_Uni_GrammarClass_EventScript_Teacher_1:
# 117 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 118 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	waitmovement 0
# 119 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	release
	end

Ardor_Uni_GrammarClass_EventScript_Teacher_2:
# 108 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_ClassFinished
# 109 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	closemessage
	goto Ardor_Uni_GrammarClass_EventScript_Teacher_1

Ardor_Uni_GrammarClass_EventScript_Teacher_3:
# 111 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_CheckLessons
	goto Ardor_Uni_GrammarClass_EventScript_Teacher_1


Ardor_Uni_GrammarClass_EventScript_Student1::
# 125 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	lock
# 126 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	faceplayer
# 127 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student1_2
# 131 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Student1
Ardor_Uni_GrammarClass_EventScript_Student1_1:
# 133 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	closemessage
# 134 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 135 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	waitmovement 0
# 136 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student1_2:
# 128 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setflag FLAG_TEMP_1
# 129 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Lesson1
	goto Ardor_Uni_GrammarClass_EventScript_Student1_1


Ardor_Uni_GrammarClass_EventScript_Student2::
# 142 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	lock
# 143 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	faceplayer
# 144 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student2_2
# 148 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Student2
Ardor_Uni_GrammarClass_EventScript_Student2_1:
# 150 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	closemessage
# 151 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 152 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	waitmovement 0
# 153 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student2_2:
# 145 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setflag FLAG_TEMP_2
# 146 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Lesson2
	goto Ardor_Uni_GrammarClass_EventScript_Student2_1


Ardor_Uni_GrammarClass_EventScript_Student3::
# 159 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	lock
# 160 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	faceplayer
# 161 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student3_2
# 165 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Student3
Ardor_Uni_GrammarClass_EventScript_Student3_1:
# 167 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	closemessage
# 168 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 169 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	waitmovement 0
# 170 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student3_2:
# 162 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setflag FLAG_TEMP_3
# 163 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Lesson3
	goto Ardor_Uni_GrammarClass_EventScript_Student3_1


Ardor_Uni_GrammarClass_EventScript_Student4::
# 176 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	lock
# 177 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	faceplayer
# 178 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student4_2
# 182 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Student4
Ardor_Uni_GrammarClass_EventScript_Student4_1:
# 184 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	closemessage
# 185 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 186 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	waitmovement 0
# 187 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student4_2:
# 179 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setflag FLAG_TEMP_4
# 180 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Lesson4
	goto Ardor_Uni_GrammarClass_EventScript_Student4_1


Ardor_Uni_GrammarClass_EventScript_Student5::
# 193 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	lock
# 194 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	faceplayer
# 195 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student5_2
# 199 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Student5
Ardor_Uni_GrammarClass_EventScript_Student5_1:
# 201 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	closemessage
# 202 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 203 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	waitmovement 0
# 204 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student5_2:
# 196 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setflag FLAG_TEMP_5
# 197 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Lesson5
	goto Ardor_Uni_GrammarClass_EventScript_Student5_1


Ardor_Uni_GrammarClass_EventScript_Student6::
# 210 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	lock
# 211 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	faceplayer
# 212 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student6_2
# 216 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Student6
Ardor_Uni_GrammarClass_EventScript_Student6_1:
# 218 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	closemessage
# 219 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 220 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	waitmovement 0
# 221 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student6_2:
# 213 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setflag FLAG_TEMP_6
# 214 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Lesson6
	goto Ardor_Uni_GrammarClass_EventScript_Student6_1


Ardor_Uni_GrammarClass_EventScript_Student7::
# 227 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	lock
# 228 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	faceplayer
# 229 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student7_2
# 233 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Student7
Ardor_Uni_GrammarClass_EventScript_Student7_1:
# 235 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	closemessage
# 236 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 237 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	waitmovement 0
# 238 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student7_2:
# 230 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setflag FLAG_TEMP_7
# 231 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Lesson7
	goto Ardor_Uni_GrammarClass_EventScript_Student7_1


Ardor_Uni_GrammarClass_EventScript_Student8::
# 244 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	lock
# 245 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	faceplayer
# 246 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	goto_if_set FLAG_GRAMMAR_INTRO, Ardor_Uni_GrammarClass_EventScript_Student8_2
# 250 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Student8
Ardor_Uni_GrammarClass_EventScript_Student8_1:
# 252 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	closemessage
# 253 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 254 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	waitmovement 0
# 255 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	release
	end

Ardor_Uni_GrammarClass_EventScript_Student8_2:
# 247 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	setflag FLAG_TEMP_8
# 248 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	msgbox Ardor_Uni_GrammarClass_Text_Lesson8
	goto Ardor_Uni_GrammarClass_EventScript_Student8_1


Ardor_Uni_GrammarClass_Text_StudyNouns::
# 259 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Stude nomina$"

Ardor_Uni_GrammarClass_Text_StudyPronouns::
# 263 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Stude pronomina$"

Ardor_Uni_GrammarClass_Text_StudyVerbs::
# 267 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Stude verba$"

Ardor_Uni_GrammarClass_Text_StudyAdverbs::
# 271 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Stude adverba$"

Ardor_Uni_GrammarClass_Text_StudyParticiples::
# 275 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Stude participia$"

Ardor_Uni_GrammarClass_Text_StudyConjunctions::
# 279 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Stude conjunctiones$"

Ardor_Uni_GrammarClass_Text_StudyPrepositions::
# 283 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Stude praepositiones$"

Ardor_Uni_GrammarClass_Text_StudyInterjections::
# 287 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Stude interjectiones$"

Ardor_Uni_GrammarClass_Text_Lesson1::
# 291 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Nomen pars orationis est cum casu.$"

Ardor_Uni_GrammarClass_Text_Lesson2::
# 295 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Pronomen pars orationis est quae pro\l"
	.string "nomine posita tantundem paene\l"
	.string "significat personamque terdum recipit.$"

Ardor_Uni_GrammarClass_Text_Lesson3::
# 299 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Verbum pars orationis est cum tempore\l"
	.string "et persona.$"

Ardor_Uni_GrammarClass_Text_Lesson4::
# 303 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Adverbium pars orationis est quae\l"
	.string "adjecta verbum.$"

Ardor_Uni_GrammarClass_Text_Lesson5::
# 307 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Participium est pars orationis partem\l"
	.string "capiens nominis, partem verbi.$"

Ardor_Uni_GrammarClass_Text_Lesson6::
# 311 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Conjunctio est pars orationis\l"
	.string "adnectens ordinasque sententiam.$"

Ardor_Uni_GrammarClass_Text_Lesson7::
# 315 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Praepositio pars orationis est quae\l"
	.string "praeposita aliis partes orationis.$"

Ardor_Uni_GrammarClass_Text_Lesson8::
# 319 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Mea Hercule! Interjectiones sunt\l"
	.string "partes orationis significans mentis\l"
	.string "affectum voce incondita.$"

Ardor_Uni_GrammarClass_Text_Student1::
# 323 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "$"

Ardor_Uni_GrammarClass_Text_Student2::
# 327 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "$"

Ardor_Uni_GrammarClass_Text_Student3::
# 331 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "$"

Ardor_Uni_GrammarClass_Text_Student4::
# 335 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "$"

Ardor_Uni_GrammarClass_Text_Student5::
# 339 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "$"

Ardor_Uni_GrammarClass_Text_Student6::
# 343 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "$"

Ardor_Uni_GrammarClass_Text_Student7::
# 347 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "$"

Ardor_Uni_GrammarClass_Text_Student8::
# 351 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "$"

Ardor_Uni_GrammarClass_Text_ClassFinished::
# 355 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Congratulatio! Iam studuisti\l"
	.string "grammaticam.$"

Ardor_Uni_GrammarClass_Text_ClassIntro::
# 359 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Salve puer. Magistra Smytha sum.\l"
	.string "Necesse est tibi docere grammaticam.\l"
	.string "Partes orationis sunt octo: nomina,\l"
	.string "pronomina, verba, adverbia, participia,\l"
	.string "conjunctiones, praepositiones, et\l"
	.string "interjectiones. Stude partes octo et\l"
	.string "reveni.$"

Ardor_Uni_GrammarClass_Text_TestBegin::
# 363 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Iam studuisti partes octo orationis!$"

Ardor_Uni_GrammarClass_Text_TeacherBattleLost::
# 367 "data/maps/Ardor_Uni_GrammarClass/scripts.pory"
	.string "Speciosus es.$"
