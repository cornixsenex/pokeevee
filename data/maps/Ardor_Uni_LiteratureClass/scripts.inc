Ardor_Uni_LiteratureClass_MapScripts::
	.byte 0


Ardor_Uni_LiteratureClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_LITERATURE
	goto_if 1, Ardor_Uni_LiteratureClass_EventScript_Teacher_2
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Teacher_3
	setflag FLAG_LITERATURE_INTRO
	msgbox Ardor_Uni_LiteratureClass_Text_ClassIntro
	closemessage
	call Ardor_Uni_LiteratureClass_EventScript_CheckLessons
Ardor_Uni_LiteratureClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_LiteratureClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_LiteratureClass_EventScript_Teacher_1

Ardor_Uni_LiteratureClass_EventScript_Teacher_3:
	call Ardor_Uni_LiteratureClass_EventScript_CheckLessons
	goto Ardor_Uni_LiteratureClass_EventScript_Teacher_1


Ardor_Uni_LiteratureClass_EventScript_CheckLessons::
	setvar VAR_TEMP_7, 0
	goto_if_set FLAG_TEMP_1, Ardor_Uni_LiteratureClass_EventScript_CheckLessons_2
	msgbox Ardor_Uni_LiteratureClass_Text_StudyLesson1
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_1:
	goto_if_set FLAG_TEMP_2, Ardor_Uni_LiteratureClass_EventScript_CheckLessons_6
	msgbox Ardor_Uni_LiteratureClass_Text_StudyLesson2
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_5:
	goto_if_set FLAG_TEMP_3, Ardor_Uni_LiteratureClass_EventScript_CheckLessons_10
	msgbox Ardor_Uni_LiteratureClass_Text_StudyLesson3
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_9:
	goto_if_set FLAG_TEMP_4, Ardor_Uni_LiteratureClass_EventScript_CheckLessons_14
	msgbox Ardor_Uni_LiteratureClass_Text_StudyLesson4
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_13:
	goto_if_set FLAG_TEMP_5, Ardor_Uni_LiteratureClass_EventScript_CheckLessons_18
	msgbox Ardor_Uni_LiteratureClass_Text_StudyLesson5
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_17:
	goto_if_set FLAG_TEMP_6, Ardor_Uni_LiteratureClass_EventScript_CheckLessons_22
	msgbox Ardor_Uni_LiteratureClass_Text_StudyLesson6
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_21:
	compare VAR_TEMP_7, 6
	goto_if_eq Ardor_Uni_LiteratureClass_EventScript_CheckLessons_26
Ardor_Uni_LiteratureClass_EventScript_CheckLessons_25:
	return

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_2:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_1

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_6:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_5

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_10:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_9

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_14:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_13

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_18:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_17

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_22:
	call Ardor_Uni_GrammarClass_EventScript_IncrementVar
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_21

Ardor_Uni_LiteratureClass_EventScript_CheckLessons_26:
	call Ardor_Uni_LiteratureClass_EventScript_Test
	goto Ardor_Uni_LiteratureClass_EventScript_CheckLessons_25


Ardor_Uni_LiteratureClass_EventScript_Test::
	msgbox Ardor_Uni_LiteratureClass_Text_TestBegin
	waitmessage
	msgbox Ardor_Uni_Text_TestIntro
	waitmessage
	trainerbattle_no_intro TRAINER_UNI_LITERATURE, Ardor_Uni_LiteratureClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_Incrementvar
	msgbox Ardor_Uni_LiteratureClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_LiteratureClass_EventScript_Student1::
	lock
	faceplayer
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Student1_2
	msgbox Ardor_Uni_LiteratureClass_Text_Student1
Ardor_Uni_LiteratureClass_EventScript_Student1_1:
	closemessage
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Student1_2:
	setflag FLAG_TEMP_1
	msgbox Ardor_Uni_LiteratureClass_Text_Lesson1
	goto Ardor_Uni_LiteratureClass_EventScript_Student1_1


Ardor_Uni_LiteratureClass_EventScript_Student2::
	lock
	faceplayer
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Student2_2
	msgbox Ardor_Uni_LiteratureClass_Text_Student2
Ardor_Uni_LiteratureClass_EventScript_Student2_1:
	closemessage
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Student2_2:
	setflag FLAG_TEMP_2
	msgbox Ardor_Uni_LiteratureClass_Text_Lesson2
	goto Ardor_Uni_LiteratureClass_EventScript_Student2_1


Ardor_Uni_LiteratureClass_EventScript_Student3::
	lock
	faceplayer
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Student3_2
	msgbox Ardor_Uni_LiteratureClass_Text_Student3
Ardor_Uni_LiteratureClass_EventScript_Student3_1:
	closemessage
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Student3_2:
	setflag FLAG_TEMP_3
	msgbox Ardor_Uni_LiteratureClass_Text_Lesson3
	goto Ardor_Uni_LiteratureClass_EventScript_Student3_1


Ardor_Uni_LiteratureClass_EventScript_Student4::
	lock
	faceplayer
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Student4_2
	msgbox Ardor_Uni_LiteratureClass_Text_Student4
Ardor_Uni_LiteratureClass_EventScript_Student4_1:
	closemessage
	applymovement 5, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Student4_2:
	setflag FLAG_TEMP_4
	msgbox Ardor_Uni_LiteratureClass_Text_Lesson4
	goto Ardor_Uni_LiteratureClass_EventScript_Student4_1


Ardor_Uni_LiteratureClass_EventScript_Student5::
	lock
	faceplayer
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Student5_2
	msgbox Ardor_Uni_LiteratureClass_Text_Student5
Ardor_Uni_LiteratureClass_EventScript_Student5_1:
	closemessage
	applymovement 6, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Student5_2:
	setflag FLAG_TEMP_5
	msgbox Ardor_Uni_LiteratureClass_Text_Lesson5
	goto Ardor_Uni_LiteratureClass_EventScript_Student5_1


Ardor_Uni_LiteratureClass_EventScript_Student6::
	lock
	faceplayer
	goto_if_set FLAG_LITERATURE_INTRO, Ardor_Uni_LiteratureClass_EventScript_Student6_2
	msgbox Ardor_Uni_LiteratureClass_Text_Student6
Ardor_Uni_LiteratureClass_EventScript_Student6_1:
	closemessage
	applymovement 7, Common_Movement_FaceUp
	waitmovement 0
	release
	end

Ardor_Uni_LiteratureClass_EventScript_Student6_2:
	setflag FLAG_TEMP_6
	msgbox Ardor_Uni_LiteratureClass_Text_Lesson6
	goto Ardor_Uni_LiteratureClass_EventScript_Student6_1


Ardor_Uni_LiteratureClass_Text_ClassIntro::
	.string "Salve puer. Magistra Emma sum. Necesse\n"
	.string "est tibi docere litteraturam.$"

Ardor_Uni_LiteratureClass_Text_Student1::
	.string "$"

Ardor_Uni_LiteratureClass_Text_Student2::
	.string "$"

Ardor_Uni_LiteratureClass_Text_Student3::
	.string "$"

Ardor_Uni_LiteratureClass_Text_Student4::
	.string "$"

Ardor_Uni_LiteratureClass_Text_Student5::
	.string "$"

Ardor_Uni_LiteratureClass_Text_Student6::
	.string "$"

Ardor_Uni_LiteratureClass_Text_Student7::
	.string "$"

Ardor_Uni_LiteratureClass_Text_StudyLesson1::
	.string "Stude Caesarem.$"

Ardor_Uni_LiteratureClass_Text_StudyLesson2::
	.string "Stude Livium.$"

Ardor_Uni_LiteratureClass_Text_StudyLesson3::
	.string "Stude Ammianum Marcellinum.$"

Ardor_Uni_LiteratureClass_Text_StudyLesson4::
	.string "Stude Tacitum.$"

Ardor_Uni_LiteratureClass_Text_StudyLesson5::
	.string "Stude Bibliam Sacram.$"

Ardor_Uni_LiteratureClass_Text_StudyLesson6::
	.string "Stude Ciceronem.$"

Ardor_Uni_LiteratureClass_Text_TeacherBattleLost::
	.string "Multos liberos legisti.$"

Ardor_Uni_LiteratureClass_Text_ClassFinished::
	.string "Congratulatio! Iam studuisti\n"
	.string "litteraturam.$"

Ardor_Uni_LiteratureClass_Text_TestBegin::
	.string "Iam studuisti scriptores sex!$"

Ardor_Uni_LiteratureClass_Text_Lesson1::
	.string "Caesar scripsit, 'Gallia est omnis divisa\n"
	.string "in partes tres, quarum unam incolunt\l"
	.string "Belgae, aliam Aquitani, tertiam qui\l"
	.string "ipsorum lingua Celtae, nostra Galli\l"
	.string "appellantur.'$"

Ardor_Uni_LiteratureClass_Text_Lesson2::
	.string "Scripsit Livius, 'Iam primum omnium\n"
	.string "satis constat Troia capta in ceteros\l"
	.string "saevitum esse Troianos, duobus, Aeneae\l"
	.string "Antenorique, et vetusti iure hospitii\l"
	.string "et quia pacis reddendaeque Helenae\l"
	.string "semper auctores fuerant, omne ius belli\l"
	.string "Achivos abstinuisse; casibus deinde\l"
	.string "variis Antenorem cum multitudine\l"
	.string "Enetum, qui seditione ex Paphlagonia\l"
	.string "pulsi et sedes et ducem rege Pylaemene\l"
	.string "ad Troiam amisso quaerebant, venisse\l"
	.string "in intimum maris Hadriatici sinum,\l"
	.string "Euganeisque qui inter mare Alpesque\l"
	.string "incolebant pulsis Enetos Troianosque\l"
	.string "eas tenuisse terras.'$"

Ardor_Uni_LiteratureClass_Text_Lesson3::
	.string "Ammianus Marcellinus, 'Post incensum\n"
	.string "corpus ossaque in argenteam urnam\l"
	.string "conlecta, quae ad gentem humo\l"
	.string "mandanda portari statuerat pater,\l"
	.string "agitata summa consiliorum placuerat\l"
	.string "busto urbis subversae expiare\l"
	.string "perempti iuvenis manes; nec enim\l"
	.string "Grumbates inulta unici pignoris umbra\l"
	.string "ire ultra patiebatur' scripsit.$"

Ardor_Uni_LiteratureClass_Text_Lesson4::
	.string "Scripsit, 'C. Pompeio Q. Veranio\n"
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
	.string "In Biblia Sacra serpens dixit, 'Cur\n"
	.string "praecepit vobis Deus ut non\l"
	.string "comederetis de omni ligno paradisi?\l"
	.string "Nequaquam morte moriemini. Scit enim\l"
	.string "Deus quod in quocumque die comederitis\l"
	.string "ex eo, aperientur oculi vestri, et\l"
	.string "eritis sicut dii, scientes bonum et\l"
	.string "malum.'$"

Ardor_Uni_LiteratureClass_Text_Lesson6::
	.string "'Pauci viri veros amicos habent, et\n"
	.string "pauci sunt digni. Amicitia vera est\l"
	.string "praeclara, et omnia praeclara sunt\l"
	.string "rara. Multi viri stulti de pecunia\l"
	.string "semper cogitant, pauci de amicis; sed\l"
	.string "errant: possumus valere sine multa\l"
	.string "pecunia, sed sine amicitia non valemus\l"
	.string "et vita est nihil' scripsit Cicero.$"
