Ardor_Uni_PoetryClass_MapScripts::
	.byte 0


Ardor_Uni_PoetryClass_EventScript_Teacher::
# 15 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	lock
# 16 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	faceplayer
# 17 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	checktrainerflag TRAINER_UNI_POETRY
	goto_if 1, Ardor_Uni_PoetryClass_EventScript_Teacher_2
# 20 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	goto_if_set FLAG_POETRY_INTRO, Ardor_Uni_PoetryClass_EventScript_Teacher_3
# 23 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	setflag FLAG_POETRY_INTRO
# 24 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_ClassIntro
# 25 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	closemessage
# 26 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	call Ardor_Uni_PoetryClass_EventScript_CheckLessons
Ardor_Uni_PoetryClass_EventScript_Teacher_1:
# 28 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 29 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	waitmovement 0
# 30 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	release
	end

Ardor_Uni_PoetryClass_EventScript_Teacher_2:
# 18 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_ClassFinished
# 19 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	closemessage
	goto Ardor_Uni_PoetryClass_EventScript_Teacher_1

Ardor_Uni_PoetryClass_EventScript_Teacher_3:
# 21 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	call Ardor_Uni_PoetryClass_EventScript_CheckLessons
	goto Ardor_Uni_PoetryClass_EventScript_Teacher_1


Ardor_Uni_PoetryClass_EventScript_CheckLessons::
# 35 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	setvar VAR_TEMP_7, 0
# 36 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_PoetryClass_EventScript_CheckLessons_2
# 39 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_StudyLesson1
Ardor_Uni_PoetryClass_EventScript_CheckLessons_1:
# 41 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	goto_if_set FLAG_TEMP_2, Ardor_Uni_PoetryClass_EventScript_CheckLessons_6
# 44 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_StudyLesson2
Ardor_Uni_PoetryClass_EventScript_CheckLessons_5:
# 46 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	goto_if_set FLAG_TEMP_3, Ardor_Uni_PoetryClass_EventScript_CheckLessons_10
# 49 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_StudyLesson3
Ardor_Uni_PoetryClass_EventScript_CheckLessons_9:
# 51 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	goto_if_set FLAG_TEMP_4, Ardor_Uni_PoetryClass_EventScript_CheckLessons_14
# 54 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_StudyLesson4
Ardor_Uni_PoetryClass_EventScript_CheckLessons_13:
# 56 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	compare VAR_TEMP_7, 4
	goto_if_eq Ardor_Uni_PoetryClass_EventScript_CheckLessons_18
Ardor_Uni_PoetryClass_EventScript_CheckLessons_17:
	return

Ardor_Uni_PoetryClass_EventScript_CheckLessons_2:
# 37 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_PoetryClass_EventScript_CheckLessons_1

Ardor_Uni_PoetryClass_EventScript_CheckLessons_6:
# 42 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_PoetryClass_EventScript_CheckLessons_5

Ardor_Uni_PoetryClass_EventScript_CheckLessons_10:
# 47 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_PoetryClass_EventScript_CheckLessons_9

Ardor_Uni_PoetryClass_EventScript_CheckLessons_14:
# 52 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_PoetryClass_EventScript_CheckLessons_13

Ardor_Uni_PoetryClass_EventScript_CheckLessons_18:
# 57 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	call Ardor_Uni_PoetryClass_EventScript_Test
	goto Ardor_Uni_PoetryClass_EventScript_CheckLessons_17


Ardor_Uni_PoetryClass_EventScript_Test::
# 63 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_TestBegin
# 64 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	waitmessage
# 65 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 66 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	waitmessage
# 67 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_POETRY, Ardor_Uni_PoetryClass_Text_TeacherBattleLost
# 68 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 69 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_ClassFinished
# 70 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	closemessage
	return


Ardor_Uni_PoetryClass_EventScript_Student1::
# 76 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	lock
# 77 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	faceplayer
# 78 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	goto_if_set FLAG_POETRY_INTRO, Ardor_Uni_PoetryClass_EventScript_Student1_2
# 82 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_Student1
Ardor_Uni_PoetryClass_EventScript_Student1_1:
# 84 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	closemessage
# 85 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 86 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	waitmovement 0
# 87 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	release
	end

Ardor_Uni_PoetryClass_EventScript_Student1_2:
# 79 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	setflag FLAG_TEMP_1
# 80 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_Lesson1
	goto Ardor_Uni_PoetryClass_EventScript_Student1_1


Ardor_Uni_PoetryClass_EventScript_Student2::
# 93 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	lock
# 94 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	faceplayer
# 95 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	goto_if_set FLAG_POETRY_INTRO, Ardor_Uni_PoetryClass_EventScript_Student2_2
# 99 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_Student2
Ardor_Uni_PoetryClass_EventScript_Student2_1:
# 101 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	closemessage
# 102 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 103 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	waitmovement 0
# 104 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	release
	end

Ardor_Uni_PoetryClass_EventScript_Student2_2:
# 96 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	setflag FLAG_TEMP_2
# 97 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_Lesson2
	goto Ardor_Uni_PoetryClass_EventScript_Student2_1


Ardor_Uni_PoetryClass_EventScript_Student3::
# 110 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	lock
# 111 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	faceplayer
# 112 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	goto_if_set FLAG_POETRY_INTRO, Ardor_Uni_PoetryClass_EventScript_Student3_2
# 116 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_Student3
Ardor_Uni_PoetryClass_EventScript_Student3_1:
# 118 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	closemessage
# 119 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 120 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	waitmovement 0
# 121 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	release
	end

Ardor_Uni_PoetryClass_EventScript_Student3_2:
# 113 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	setflag FLAG_TEMP_3
# 114 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_Lesson3
	goto Ardor_Uni_PoetryClass_EventScript_Student3_1


Ardor_Uni_PoetryClass_EventScript_Student4::
# 127 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	lock
# 128 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	faceplayer
# 129 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	goto_if_set FLAG_POETRY_INTRO, Ardor_Uni_PoetryClass_EventScript_Student4_2
# 133 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_Student4
Ardor_Uni_PoetryClass_EventScript_Student4_1:
# 135 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	closemessage
# 136 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 137 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	waitmovement 0
# 138 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	release
	end

Ardor_Uni_PoetryClass_EventScript_Student4_2:
# 130 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	setflag FLAG_TEMP_4
# 131 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	msgbox Ardor_Uni_PoetryClass_Text_Lesson4
	goto Ardor_Uni_PoetryClass_EventScript_Student4_1


Ardor_Uni_PoetryClass_Text_ClassIntro::
# 143 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "Salve puer. Magistra Anna sum. Necesse\n"
	.string "est tibi docere poemata.$"

Ardor_Uni_PoetryClass_Text_Student1::
# 147 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "$"

Ardor_Uni_PoetryClass_Text_Student2::
# 151 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "$"

Ardor_Uni_PoetryClass_Text_Student3::
# 155 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "$"

Ardor_Uni_PoetryClass_Text_Student4::
# 159 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "$"

Ardor_Uni_PoetryClass_Text_StudyLesson1::
# 163 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "Stude Virgilium.$"

Ardor_Uni_PoetryClass_Text_StudyLesson2::
# 167 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "Stude Ovidium.$"

Ardor_Uni_PoetryClass_Text_StudyLesson3::
# 171 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "Stude Horatium.$"

Ardor_Uni_PoetryClass_Text_StudyLesson4::
# 175 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "Stude Martialem.$"

Ardor_Uni_PoetryClass_Text_TeacherBattleLost::
# 179 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "Lacrimae clademque cano!$"

Ardor_Uni_PoetryClass_Text_ClassFinished::
# 183 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "Congratulatio! Iam studuisti poemata.$"

Ardor_Uni_PoetryClass_Text_TestBegin::
# 187 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "Iam studuisti poetas quattor.$"

Ardor_Uni_PoetryClass_Text_Lesson1::
# 191 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "Virgilius cecinit,\n"
	.string "'Arma virumque cano, Troiae qui primus\l"
	.string "ab oris\p"
	.string "Italiam, fato profugus, Laviniaque\n"
	.string "venit\p"
	.string "litora, multum ille et terris iactatus et\n"
	.string "alto\p"
	.string "vi superum saevae memorem Iunonis ob\n"
	.string "iram;\p"
	.string "multa quoque et bello passus, dum\n"
	.string "conderet urbem,\p"
	.string "inferretque deos Latio, genus unde\n"
	.string "Latinum,\p"
	.string "Albanique patres, atque altae moenia\n"
	.string "Romae.'$"

Ardor_Uni_PoetryClass_Text_Lesson2::
# 195 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "Cecinit Ovidius, 'In nova fert animus\n"
	.string "mutatas dicere formas\p"
	.string "corpora; di, coeptis (nam vos mutastis\n"
	.string "et illas)\n"
	.string "adspirate meis primaque ab origine\l"
	.string "mundi\p"
	.string "ad mea perpetuum deducite tempora\n"
	.string "carmen!'$"

Ardor_Uni_PoetryClass_Text_Lesson3::
# 199 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "Cecinit,\n"
	.string "'Dulce et decorum est pro patria mori:\p"
	.string "mors et fugacem persequitur virum\n"
	.string "nec parcit in bellis iuventae\p"
	.string "poplitibus timidove tergo.\n"
	.string "' Horatius.$"

Ardor_Uni_PoetryClass_Text_Lesson4::
# 203 "data/maps/Ardor_Uni_PoetryClass/scripts.pory"
	.string "'Fetere multo Myrtale solet uino,\n"
	.string "sed fallat ut nos, folia deuorat lauri\p"
	.string "merumque cauta fronde, non aqua,\n"
	.string "miscet.\n"
	.string "Hanc tu rubentem prominentibus uenis\p"
	.string "quotiens uenire, Paule, uideris contra,\n"
	.string "dicas licebit Myrtale bibit laurum.'\p"
	.string "Martialis cecinit.$"
