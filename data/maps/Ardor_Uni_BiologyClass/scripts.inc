Ardor_Uni_BiologyClass_MapScripts::
	.byte 0


Ardor_Uni_BiologyClass_EventScript_Teacher::
# 10 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	lock
# 11 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	faceplayer
# 12 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	checktrainerflag TRAINER_UNI_BIOLOGY
	goto_if 1, Ardor_Uni_BiologyClass_EventScript_Teacher_2
# 15 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	goto_if_set FLAG_BIOLOGY_INTRO, Ardor_Uni_BiologyClass_EventScript_Teacher_3
# 38 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	call Ardor_Uni_BiologyClass_EventScript_ClassIntro
Ardor_Uni_BiologyClass_EventScript_Teacher_1:
# 40 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 41 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	waitmovement 0
# 42 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	release
	end

Ardor_Uni_BiologyClass_EventScript_Teacher_2:
# 13 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	msgbox Ardor_Uni_BiologyClass_Text_ClassFinished
# 14 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	closemessage
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_1

Ardor_Uni_BiologyClass_EventScript_Teacher_3:
# 16 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	specialvar VAR_RESULT, IsAnimalTypeInParty
# 17 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_BiologyClass_EventScript_Teacher_8
# 20 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	msgbox Ardor_Uni_BiologyClass_Text_BringAnimalType
Ardor_Uni_BiologyClass_EventScript_Teacher_7:
# 22 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	specialvar VAR_RESULT, IsPlantTypeInParty
# 23 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_BiologyClass_EventScript_Teacher_12
# 26 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	msgbox Ardor_Uni_BiologyClass_Text_BringPlantType
Ardor_Uni_BiologyClass_EventScript_Teacher_11:
# 28 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	specialvar VAR_RESULT, IsFungusTypeInParty
# 29 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_BiologyClass_EventScript_Teacher_16
# 32 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	msgbox Ardor_Uni_BiologyClass_Text_BringFungusType
Ardor_Uni_BiologyClass_EventScript_Teacher_15:
# 34 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_BiologyClass_EventScript_Teacher_20
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_1

Ardor_Uni_BiologyClass_EventScript_Teacher_8:
# 18 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	setflag FLAG_TEMP_1
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_7

Ardor_Uni_BiologyClass_EventScript_Teacher_12:
# 24 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	setflag FLAG_TEMP_2
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_11

Ardor_Uni_BiologyClass_EventScript_Teacher_16:
# 30 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	setflag FLAG_TEMP_3
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_15

Ardor_Uni_BiologyClass_EventScript_Teacher_19:
# 35 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	call Ardor_Uni_BiologyClass_EventScript_Test
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_1

Ardor_Uni_BiologyClass_EventScript_Teacher_20:
# 34 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	goto_if_set FLAG_TEMP_2, Ardor_Uni_BiologyClass_EventScript_Teacher_22
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_1

Ardor_Uni_BiologyClass_EventScript_Teacher_22:
# 34 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	goto_if_set FLAG_TEMP_3, Ardor_Uni_BiologyClass_EventScript_Teacher_19
	goto Ardor_Uni_BiologyClass_EventScript_Teacher_1


Ardor_Uni_BiologyClass_EventScript_ClassIntro::
# 47 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	setflag FLAG_BIOLOGY_INTRO
# 48 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	msgbox Ardor_Uni_BiologyClass_Text_ClassIntro
# 49 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	closemessage
# 50 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	msgbox Ardor_Uni_BiologyClass_Text_BringAnimalType
# 51 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	closemessage
# 52 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	msgbox Ardor_Uni_BiologyClass_Text_BringPlantType
# 53 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	closemessage
# 54 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	msgbox Ardor_Uni_BiologyClass_Text_BringFungusType
# 55 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	closemessage
	return


Ardor_Uni_BiologyClass_EventScript_Test::
# 61 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	msgbox Ardor_Uni_BiologyClass_Text_LessonComplete
# 62 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	closemessage
# 63 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 64 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	closemessage
# 65 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_BIOLOGY, Ardor_Uni_BiologyClass_Text_TeacherBattleLost
# 66 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 67 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	msgbox Ardor_Uni_BiologyClass_Text_ClassFinished
# 68 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	closemessage
	return


Ardor_Uni_BiologyClass_Text_ClassIntro::
# 72 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	.string "Salve puer. Magistra Philida sum.\n"
	.string "Necesse est tibi docere scientiam\l"
	.string "biologiae. Biologia studium est vitae.\l"
	.string "Vita est omnis divisa in partes tres:\l"
	.string "Animalia, Plantae, Fungique.$"

Ardor_Uni_BiologyClass_Text_BringAnimalType::
# 76 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	.string "Reveni cum monstro animali$"

Ardor_Uni_BiologyClass_Text_BringPlantType::
# 80 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	.string "Reveni cum monstro planta$"

Ardor_Uni_BiologyClass_Text_BringFungusType::
# 84 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	.string "Reveni cum monstro fungo$"

Ardor_Uni_BiologyClass_Text_LessonComplete::
# 88 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	.string "Revenisti cum monstra tribus: uno\n"
	.string "animali, uno planta, et uno fungo.$"

Ardor_Uni_BiologyClass_Text_TeacherBattleLost::
# 92 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	.string "Vita tua magna est.$"

Ardor_Uni_BiologyClass_Text_ClassFinished::
# 96 "data//maps/Ardor_Uni_BiologyClass/scripts.pory"
	.string "Congratulatio! Iam studuisti Biologiam.$"
