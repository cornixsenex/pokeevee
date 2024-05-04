Ardor_Uni_ChemistryClass_MapScripts::
	.byte 0


Ardor_Uni_ChemistryClass_EventScript_Teacher::
# 7 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	lock
# 8 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	faceplayer
# 9 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	checktrainerflag TRAINER_UNI_CHEMISTRY
	goto_if 1, Ardor_Uni_ChemistryClass_EventScript_Teacher_2
# 12 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	goto_if_set FLAG_CHEMISTRY_INTRO, Ardor_Uni_ChemistryClass_EventScript_Teacher_3
# 41 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	call Ardor_Uni_ChemistryClass_EventScript_ClassIntro
Ardor_Uni_ChemistryClass_EventScript_Teacher_1:
# 43 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 44 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	waitmovement 0
# 45 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	release
	end

Ardor_Uni_ChemistryClass_EventScript_Teacher_2:
# 10 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	msgbox Ardor_Uni_ChemistryClass_Text_ClassFinished
# 11 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	closemessage
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_1

Ardor_Uni_ChemistryClass_EventScript_Teacher_3:
# 13 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	specialvar VAR_RESULT, IsFireTypeInParty
# 14 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_ChemistryClass_EventScript_Teacher_8
# 17 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	msgbox Ardor_Uni_ChemistryClass_Text_BringFireType
Ardor_Uni_ChemistryClass_EventScript_Teacher_7:
# 19 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	specialvar VAR_RESULT, IsWaterTypeInParty
# 20 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_ChemistryClass_EventScript_Teacher_12
# 23 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	msgbox Ardor_Uni_ChemistryClass_Text_BringWaterType
Ardor_Uni_ChemistryClass_EventScript_Teacher_11:
# 25 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	specialvar VAR_RESULT, IsGroundTypeInParty
# 26 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_ChemistryClass_EventScript_Teacher_16
# 29 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	msgbox Ardor_Uni_ChemistryClass_Text_BringGroundType
Ardor_Uni_ChemistryClass_EventScript_Teacher_15:
# 31 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	specialvar VAR_RESULT, IsFlyingTypeInParty
# 32 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_ChemistryClass_EventScript_Teacher_20
# 35 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	msgbox Ardor_Uni_ChemistryClass_Text_BringFlyingType
Ardor_Uni_ChemistryClass_EventScript_Teacher_19:
# 37 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_ChemistryClass_EventScript_Teacher_24
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_1

Ardor_Uni_ChemistryClass_EventScript_Teacher_8:
# 15 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	setflag FLAG_TEMP_1
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_7

Ardor_Uni_ChemistryClass_EventScript_Teacher_12:
# 21 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	setflag FLAG_TEMP_2
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_11

Ardor_Uni_ChemistryClass_EventScript_Teacher_16:
# 27 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	setflag FLAG_TEMP_3
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_15

Ardor_Uni_ChemistryClass_EventScript_Teacher_20:
# 33 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	setflag FLAG_TEMP_4
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_19

Ardor_Uni_ChemistryClass_EventScript_Teacher_23:
# 38 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	call Ardor_Uni_ChemistryClass_EventScript_Test
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_1

Ardor_Uni_ChemistryClass_EventScript_Teacher_24:
# 37 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	goto_if_set FLAG_TEMP_2, Ardor_Uni_ChemistryClass_EventScript_Teacher_26
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_1

Ardor_Uni_ChemistryClass_EventScript_Teacher_26:
# 37 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	goto_if_set FLAG_TEMP_3, Ardor_Uni_ChemistryClass_EventScript_Teacher_28
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_1

Ardor_Uni_ChemistryClass_EventScript_Teacher_28:
# 37 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	goto_if_set FLAG_TEMP_4, Ardor_Uni_ChemistryClass_EventScript_Teacher_23
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_1


Ardor_Uni_ChemistryClass_EventScript_ClassIntro::
# 50 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	setflag FLAG_CHEMISTRY_INTRO
# 51 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	msgbox Ardor_Uni_ChemistryClass_Text_ClassIntro
# 52 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	closemessage
# 53 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	msgbox Ardor_Uni_ChemistryClass_Text_BringFireType
# 54 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	closemessage
# 55 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	msgbox Ardor_Uni_ChemistryClass_Text_BringWaterType
# 56 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	closemessage
# 57 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	msgbox Ardor_Uni_ChemistryClass_Text_BringGroundType
# 58 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	closemessage
# 59 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	msgbox Ardor_Uni_ChemistryClass_Text_BringFlyingType
# 60 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	closemessage
	return


Ardor_Uni_ChemistryClass_EventScript_Test::
# 66 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	msgbox Ardor_Uni_ChemistryClass_Text_LessonComplete
# 67 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	closemessage
# 68 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 69 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	closemessage
# 70 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_CHEMISTRY, Ardor_Uni_ChemistryClass_Text_TeacherBattleLost
# 71 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 72 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	msgbox Ardor_Uni_ChemistryClass_Text_ClassFinished
# 73 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	closemessage
	return


Ardor_Uni_ChemistryClass_Text_ClassIntro::
# 77 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	.string "Salve puer. Magister Severus sum.\l"
	.string "Necesse est tibi docere scientiam\l"
	.string "alchemiae. Alchemia studium\l"
	.string "elementorum est. Numerus elementorum\l"
	.string "est quattor: ignis, aqua, tellus, et aer.$"

Ardor_Uni_ChemistryClass_Text_BringFireType::
# 81 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	.string "Reveni cum monstro ignis.$"

Ardor_Uni_ChemistryClass_Text_BringWaterType::
# 85 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	.string "Reveni cum monstro aquae.$"

Ardor_Uni_ChemistryClass_Text_BringGroundType::
# 89 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	.string "Reveni cum monstro telluris.$"

Ardor_Uni_ChemistryClass_Text_BringFlyingType::
# 93 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	.string "Reveni cum monstro aeris.$"

Ardor_Uni_ChemistryClass_Text_LessonComplete::
# 97 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	.string "Revenisti cum monstra quattor: uno\l"
	.string "ignis, uno aquae, uno telluris, et uno\l"
	.string "aeris.$"

Ardor_Uni_ChemistryClass_Text_TeacherBattleLost::
# 101 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	.string "Sic aurum es plumbum sum.$"

Ardor_Uni_ChemistryClass_Text_ClassFinished::
# 105 "data/maps/Ardor_Uni_ChemistryClass/scripts.pory"
	.string "Congratulatio! Iam studuisti alchemiam.\l"
	.string "Usa machinam quando volas.$"
