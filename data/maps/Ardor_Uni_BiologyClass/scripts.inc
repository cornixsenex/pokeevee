Ardor_Uni_BiologyClass_MapScripts::
	.byte 0


Ardor_Uni_BiologyClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_BIOLOGY
	goto_if 1, Ardor_Uni_BiologyClass_EventScript_Teacher_2
	goto_if_set FLAG_BIOLOGY_INTRO, Ardor_Uni_BiologyClass_EventScript_Teacher_3
	call Ardor_Uni_BiologyClass_EventScript_ClassIntro
Ardor_Uni_BiologyClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_BiologyClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_BiologyClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_1

Ardor_Uni_BiologyClass_EventScript_Teacher_3:
	specialvar VAR_RESULT, IsAnimalTypeInParty
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_BiologyClass_EventScript_Teacher_8
	msgbox Ardor_Uni_BiologyClass_Text_BringAnimalType
Ardor_Uni_BiologyClass_EventScript_Teacher_7:
	specialvar VAR_RESULT, IsPlantTypeInParty
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_BiologyClass_EventScript_Teacher_12
	msgbox Ardor_Uni_BiologyClass_Text_BringPlantType
Ardor_Uni_BiologyClass_EventScript_Teacher_11:
	specialvar VAR_RESULT, IsFungusTypeInParty
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_BiologyClass_EventScript_Teacher_16
	msgbox Ardor_Uni_BiologyClass_Text_BringFungusType
Ardor_Uni_BiologyClass_EventScript_Teacher_15:
	goto_if_set FLAG_TEMP_1, Ardor_Uni_BiologyClass_EventScript_Teacher_20
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_1

Ardor_Uni_BiologyClass_EventScript_Teacher_8:
	setflag FLAG_TEMP_1
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_7

Ardor_Uni_BiologyClass_EventScript_Teacher_12:
	setflag FLAG_TEMP_2
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_11

Ardor_Uni_BiologyClass_EventScript_Teacher_16:
	setflag FLAG_TEMP_3
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_15

Ardor_Uni_BiologyClass_EventScript_Teacher_19:
	call Ardor_Uni_BiologyClass_EventScript_Test
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_1

Ardor_Uni_BiologyClass_EventScript_Teacher_20:
	goto_if_set FLAG_TEMP_2, Ardor_Uni_BiologyClass_EventScript_Teacher_22
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_1

Ardor_Uni_BiologyClass_EventScript_Teacher_22:
	goto_if_set FLAG_TEMP_3, Ardor_Uni_BiologyClass_EventScript_Teacher_19
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_1


Ardor_Uni_BiologyClass_EventScript_ClassIntro::
	setflag FLAG_BIOLOGY_INTRO
	msgbox Ardor_Uni_BiologyClass_Text_ClassIntro
	closemessage
	msgbox Ardor_Uni_BiologyClass_Text_BringAnimalType
	closemessage
	msgbox Ardor_Uni_BiologyClass_Text_BringPlantType
	closemessage
	msgbox Ardor_Uni_BiologyClass_Text_BringFungusType
	closemessage
	return


Ardor_Uni_BiologyClass_EventScript_Test::
	msgbox Ardor_Uni_BiologyClass_Text_LessonComplete
	closemessage
	msgbox Ardor_Uni_Text_TestIntro
	closemessage
	trainerbattle_no_intro TRAINER_UNI_BIOLOGY, Ardor_Uni_BiologyClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_IncrementVar
	msgbox Ardor_Uni_BiologyClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_BiologyClass_Text_ClassIntro::
	.string "Salve puer. Magistra Philida sum.\n"
	.string "Necesse est tibi docere scientiam\l"
	.string "biologiae. Biologia studium est vitae.\l"
	.string "Vita est omnis divisa in partes tres:\l"
	.string "Animalia, Plantae, Fungique.$"

Ardor_Uni_BiologyClass_Text_BringAnimalType::
	.string "Reveni cum monstro animali$"

Ardor_Uni_BiologyClass_Text_BringPlantType::
	.string "Reveni cum monstro planta$"

Ardor_Uni_BiologyClass_Text_BringFungusType::
	.string "Reveni cum monstro fungo$"

Ardor_Uni_BiologyClass_Text_LessonComplete::
	.string "Revenisti cum monstra tribus: uno\n"
	.string "animali, uno planta, et uno fungo.$"

Ardor_Uni_BiologyClass_Text_TeacherBattleLost::
	.string "Vita tua magna est.$"

Ardor_Uni_BiologyClass_Text_ClassFinished::
	.string "Congratulatio! Iam studuisti Biologiam.$"
