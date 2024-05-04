Ardor_Uni_LiteratureClass_MapScripts::
	.byte 0


Ardor_Uni_LiteratureClass_EventScript_Teacher::
# 15 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	lock
# 16 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	faceplayer
# 17 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	checktrainerflag TRAINER_UNI_LITERATURE
	goto_if 1, Ardor_Uni_LiteratureClass_EventScript_Teacher_2
# 20 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Teacher_3
# 23 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	setflag FLAG_LITERATURE_INTRO
# 24 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_ClassIntro
# 25 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	closemessage
# 26 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	call Ardor_Uni_LiteratureClass_EventScript_CheckLessons
Ardor_Uni_LiteratureClass_EventScript_Teacher_1:
# 28 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 29 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	waitmovement 0
# 30 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Teacher_2:
# 18 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_ClassFinished
# 19 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	closemessage
	goto Ardor_Uni_LiteratureClass_EventScript_Teacher_1

Ardor_Uni_LiteratureClass_EventScript_Teacher_3:
# 21 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	call Ardor_Uni_LiteratureClass_EventScript_CheckLessons
	goto Ardor_Uni_LiteratureClass_EventScript_Teacher_1


Ardor_Uni_LiteratureClass_EventScript_CheckLessons::
# 35 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	setvar VAR_TEMP_7, 0
# 36 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_LiteratureClass_EventScript_CheckLessons_2
# 39 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_StudyLesson1
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_1:
# 41 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	goto_if_set FLAG_TEMP_2, Ardor_Uni_LiteratureClass_EventScript_CheckLessons_6
# 44 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_StudyLesson2
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_5:
# 46 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	goto_if_set FLAG_TEMP_3, Ardor_Uni_LiteratureClass_EventScript_CheckLessons_10
# 49 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_StudyLesson3
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_9:
# 51 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	goto_if_set FLAG_TEMP_4, Ardor_Uni_LiteratureClass_EventScript_CheckLessons_14
# 54 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_StudyLesson4
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_13:
# 56 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	goto_if_set FLAG_TEMP_5, Ardor_Uni_LiteratureClass_EventScript_CheckLessons_18
# 59 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_StudyLesson5
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_17:
# 61 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	goto_if_set FLAG_TEMP_6, Ardor_Uni_LiteratureClass_EventScript_CheckLessons_22
# 64 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_StudyLesson6
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_21:
# 66 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	compare VAR_TEMP_7, 6
	goto_if_eq Ardor_Uni_LiteratureClass_EventScript_CheckLessons_26
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_25:
	return

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_2:
# 37 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_1

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_6:
# 42 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_5

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_10:
# 47 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_9

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_14:
# 52 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_13

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_18:
# 57 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_17

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_22:
# 62 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_21

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_26:
# 67 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	call Ardor_Uni_LiteratureClass_EventScript_Test
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_25


Ardor_Uni_LiteratureClass_EventScript_Test::
# 73 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_TestBegin
# 74 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	waitmessage
# 75 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 76 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	waitmessage
# 77 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_LITERATURE, Ardor_Uni_LiteratureClass_Text_TeacherBattleLost
# 78 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 79 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_ClassFinished
# 80 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	closemessage
	return


Ardor_Uni_LiteratureClass_EventScript_Student1::
# 86 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	lock
# 87 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	faceplayer
# 88 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Student1_2
# 92 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_Student1
Ardor_Uni_LiteratureClass_EventScript_Student1_1:
# 94 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	closemessage
# 95 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 96 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	waitmovement 0
# 97 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Student1_2:
# 89 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	setflag FLAG_TEMP_1
# 90 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_Lesson1
	goto Ardor_Uni_LiteratureClass_EventScript_Student1_1


Ardor_Uni_LiteratureClass_EventScript_Student2::
# 103 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	lock
# 104 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	faceplayer
# 105 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Student2_2
# 109 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_Student2
Ardor_Uni_LiteratureClass_EventScript_Student2_1:
# 111 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	closemessage
# 112 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 113 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	waitmovement 0
# 114 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Student2_2:
# 106 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	setflag FLAG_TEMP_2
# 107 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_Lesson2
	goto Ardor_Uni_LiteratureClass_EventScript_Student2_1


Ardor_Uni_LiteratureClass_EventScript_Student3::
# 120 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	lock
# 121 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	faceplayer
# 122 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Student3_2
# 126 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_Student3
Ardor_Uni_LiteratureClass_EventScript_Student3_1:
# 128 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	closemessage
# 129 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 130 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	waitmovement 0
# 131 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Student3_2:
# 123 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	setflag FLAG_TEMP_3
# 124 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_Lesson3
	goto Ardor_Uni_LiteratureClass_EventScript_Student3_1


Ardor_Uni_LiteratureClass_EventScript_Student4::
# 137 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	lock
# 138 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	faceplayer
# 139 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Student4_2
# 143 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_Student4
Ardor_Uni_LiteratureClass_EventScript_Student4_1:
# 145 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	closemessage
# 146 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 147 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	waitmovement 0
# 148 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Student4_2:
# 140 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	setflag FLAG_TEMP_4
# 141 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_Lesson4
	goto Ardor_Uni_LiteratureClass_EventScript_Student4_1


Ardor_Uni_LiteratureClass_EventScript_Student5::
# 154 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	lock
# 155 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	faceplayer
# 156 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Student5_2
# 160 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_Student5
Ardor_Uni_LiteratureClass_EventScript_Student5_1:
# 162 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	closemessage
# 163 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 164 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	waitmovement 0
# 165 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Student5_2:
# 157 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	setflag FLAG_TEMP_5
# 158 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_Lesson5
	goto Ardor_Uni_LiteratureClass_EventScript_Student5_1


Ardor_Uni_LiteratureClass_EventScript_Student6::
# 171 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	lock
# 172 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	faceplayer
# 173 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Student6_2
# 177 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_Student6
Ardor_Uni_LiteratureClass_EventScript_Student6_1:
# 179 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	closemessage
# 180 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 181 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	waitmovement 0
# 182 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Student6_2:
# 174 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	setflag FLAG_TEMP_6
# 175 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	msgbox Ardor_Uni_LiteratureClass_Text_Lesson6
	goto Ardor_Uni_LiteratureClass_EventScript_Student6_1


Ardor_Uni_LiteratureClass_Text_ClassIntro::
# 187 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Salve puer. Magistra Aemilia sum.\l"
	.string "Necesse est tibi docere litteraturam.$"

Ardor_Uni_LiteratureClass_Text_Student1::
# 191 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "$"

Ardor_Uni_LiteratureClass_Text_Student2::
# 195 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "$"

Ardor_Uni_LiteratureClass_Text_Student3::
# 199 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "$"

Ardor_Uni_LiteratureClass_Text_Student4::
# 203 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "$"

Ardor_Uni_LiteratureClass_Text_Student5::
# 207 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "$"

Ardor_Uni_LiteratureClass_Text_Student6::
# 211 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "$"

Ardor_Uni_LiteratureClass_Text_Student7::
# 215 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "$"

Ardor_Uni_LiteratureClass_Text_StudyLesson1::
# 219 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Stude Caesarem.$"

Ardor_Uni_LiteratureClass_Text_StudyLesson2::
# 223 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Stude Livium.$"

Ardor_Uni_LiteratureClass_Text_StudyLesson3::
# 227 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Stude Ammianum Marcellinum.$"

Ardor_Uni_LiteratureClass_Text_StudyLesson4::
# 231 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Stude Tacitum.$"

Ardor_Uni_LiteratureClass_Text_StudyLesson5::
# 235 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Stude Bibliam Sacram.$"

Ardor_Uni_LiteratureClass_Text_StudyLesson6::
# 239 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Stude Ciceronem.$"

Ardor_Uni_LiteratureClass_Text_TeacherBattleLost::
# 243 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Multos liberos legisti.$"

Ardor_Uni_LiteratureClass_Text_ClassFinished::
# 247 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Congratulatio! Iam studuisti\l"
	.string "litteraturam.$"

Ardor_Uni_LiteratureClass_Text_TestBegin::
# 251 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Iam studuisti scriptores sex!$"

Ardor_Uni_LiteratureClass_Text_Lesson1::
# 255 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Caesar scripsit, 'Gallia est omnis divisa\l"
	.string "in partes tres, quarum unam incolunt\l"
	.string "Belgae, aliam Aquitani, tertiam qui\l"
	.string "ipsorum lingua Celtae, nostra Galli\l"
	.string "appellantur.'$"

Ardor_Uni_LiteratureClass_Text_Lesson2::
# 259 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Scripsit Livius, 'Iam primum omnium\l"
	.string "satis constat Troia capta in ceteros\l"
	.string "saevitum esse Troianos, duobus, Aeneae\l"
	.string "Antenorique, et vetusti iure hospitii et\l"
	.string "quia pacis reddendaeque Helenae semper\l"
	.string "auctores fuerant, omne ius belli\l"
	.string "Achivos abstinuisse; casibus deinde\l"
	.string "variis Antenorem cum multitudine\l"
	.string "Enetum, qui seditione ex Paphlagonia\l"
	.string "pulsi et sedes et ducem rege Pylaemene\l"
	.string "ad Troiam amisso quaerebant, venisse in\l"
	.string "intimum maris Hadriatici sinum,\l"
	.string "Euganeisque qui inter mare Alpesque\l"
	.string "incolebant pulsis Enetos Troianosque\l"
	.string "eas tenuisse terras.'$"

Ardor_Uni_LiteratureClass_Text_Lesson3::
# 263 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Ammianus Marcellinus, 'Post incensum\l"
	.string "corpus ossaque in argenteam urnam\l"
	.string "conlecta, quae ad gentem humo mandanda\l"
	.string "portari statuerat pater, agitata summa\l"
	.string "consiliorum placuerat busto urbis\l"
	.string "subversae expiare perempti iuvenis\l"
	.string "manes; nec enim Grumbates inulta unici\l"
	.string "pignoris umbra ire ultra patiebatur'\l"
	.string "scripsit.$"

Ardor_Uni_LiteratureClass_Text_Lesson4::
# 267 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "Scripsit, 'C. Pompeio Q. Veranio\l"
	.string "consulibus pactum inter Claudium et\l"
	.string "Agrippinam matrimonium iam fama, iam\l"
	.string "amore inlicito firmabatur; necdum\l"
	.string "celebrare sollemnia nuptiarum\l"
	.string "audebant, nullo exemplo deductae in\l"
	.string "domum patrui fratris filiae: quin et\l"
	.string "incestum ac, si sperneretur, ne in malum\l"
	.string "publicum erumperet metuebatur. nec\l"
	.string "ante omissa cunctatio quam Vitellius\l"
	.string "suis artibus id perpetrandum sumpsit'\l"
	.string "Tacitus.$"

Ardor_Uni_LiteratureClass_Text_Lesson5::
# 271 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "In Biblia Sacra serpens dixit, 'Cur\l"
	.string "praecepit vobis Deus ut non\l"
	.string "comederetis de omni ligno paradisi?\l"
	.string "Nequaquam morte moriemini. Scit enim\l"
	.string "Deus quod in quocumque die comederitis\l"
	.string "ex eo, aperientur oculi vestri, et eritis\l"
	.string "sicut dii, scientes bonum et malum.'$"

Ardor_Uni_LiteratureClass_Text_Lesson6::
# 275 "data/maps/Ardor_Uni_LiteratureClass/scripts.pory"
	.string "'Pauci viri veros amicos habent, et\l"
	.string "pauci sunt digni. Amicitia vera est\l"
	.string "praeclara, et omnia praeclara sunt rara.\l"
	.string "Multi viri stulti de pecunia semper\l"
	.string "cogitant, pauci de amicis; sed errant:\l"
	.string "possumus valere sine multa pecunia, sed\l"
	.string "sine amicitia non valemus et vita est\l"
	.string "nihil' scripsit Cicero.$"
