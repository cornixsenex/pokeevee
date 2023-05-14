Ardor_Uni_ChemistryClass_MapScripts::
	.byte 0


Ardor_Uni_ChemistryClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_CHEMISTRY
	goto_if 1, Ardor_Uni_ChemistryClass_EventScript_Teacher_2
	goto_if_set FLAG_CHEMISTRY_INTRO, Ardor_Uni_ChemistryClass_EventScript_Teacher_3
	call Ardor_Uni_ChemistryClass_EventScript_ClassIntro
Ardor_Uni_ChemistryClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_ChemistryClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_ChemistryClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_1

Ardor_Uni_ChemistryClass_EventScript_Teacher_3:
	specialvar VAR_RESULT, IsFireTypeInParty
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_ChemistryClass_EventScript_Teacher_8
	msgbox Ardor_Uni_ChemistryClass_Text_BringFireType
Ardor_Uni_ChemistryClass_EventScript_Teacher_7:
	specialvar VAR_RESULT, IsWaterTypeInParty
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_ChemistryClass_EventScript_Teacher_12
	msgbox Ardor_Uni_ChemistryClass_Text_BringWaterType
Ardor_Uni_ChemistryClass_EventScript_Teacher_11:
	specialvar VAR_RESULT, IsGroundTypeInParty
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_ChemistryClass_EventScript_Teacher_16
	msgbox Ardor_Uni_ChemistryClass_Text_BringGroundType
Ardor_Uni_ChemistryClass_EventScript_Teacher_15:
	specialvar VAR_RESULT, IsFlyingTypeInParty
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_ChemistryClass_EventScript_Teacher_20
	msgbox Ardor_Uni_ChemistryClass_Text_BringFlyingType
Ardor_Uni_ChemistryClass_EventScript_Teacher_19:
	goto_if_set FLAG_TEMP_1, Ardor_Uni_ChemistryClass_EventScript_Teacher_24
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_1

Ardor_Uni_ChemistryClass_EventScript_Teacher_8:
	setflag FLAG_TEMP_1
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_7

Ardor_Uni_ChemistryClass_EventScript_Teacher_12:
	setflag FLAG_TEMP_2
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_11

Ardor_Uni_ChemistryClass_EventScript_Teacher_16:
	setflag FLAG_TEMP_3
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_15

Ardor_Uni_ChemistryClass_EventScript_Teacher_20:
	setflag FLAG_TEMP_4
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_19

Ardor_Uni_ChemistryClass_EventScript_Teacher_23:
	call Ardor_Uni_ChemistryClass_EventScript_Test
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_1

Ardor_Uni_ChemistryClass_EventScript_Teacher_24:
	goto_if_set FLAG_TEMP_2, Ardor_Uni_ChemistryClass_EventScript_Teacher_26
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_1

Ardor_Uni_ChemistryClass_EventScript_Teacher_26:
	goto_if_set FLAG_TEMP_3, Ardor_Uni_ChemistryClass_EventScript_Teacher_28
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_1

Ardor_Uni_ChemistryClass_EventScript_Teacher_28:
	goto_if_set FLAG_TEMP_4, Ardor_Uni_ChemistryClass_EventScript_Teacher_23
	goto Ardor_Uni_ChemistryClass_EventScript_Teacher_1


Ardor_Uni_ChemistryClass_EventScript_ClassIntro::
	setflag FLAG_CHEMISTRY_INTRO
	msgbox Ardor_Uni_ChemistryClass_Text_ClassIntro
	closemessage
	msgbox Ardor_Uni_ChemistryClass_Text_BringFireType
	closemessage
	msgbox Ardor_Uni_ChemistryClass_Text_BringWaterType
	closemessage
	msgbox Ardor_Uni_ChemistryClass_Text_BringGroundType
	closemessage
	msgbox Ardor_Uni_ChemistryClass_Text_BringFlyingType
	closemessage
	return


Ardor_Uni_ChemistryClass_EventScript_Test::
	msgbox Ardor_Uni_ChemistryClass_Text_LessonComplete
	closemessage
	msgbox Ardor_Uni_Text_TestIntro
	closemessage
	trainerbattle_no_intro TRAINER_UNI_CHEMISTRY, Ardor_Uni_ChemistryClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_Incrementvar
	msgbox Ardor_Uni_ChemistryClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_ChemistryClass_Text_ClassIntro::
	.string "Salve puer. Magister Severus sum.\n"
	.string "Necesse est tibi docere scientiam\l"
	.string "alchemiae. Alchemia studium\l"
	.string "elementorum est. Numerus elementorum\l"
	.string "est quattor: ignis, aqua, tellus, et aer.$"

Ardor_Uni_ChemistryClass_Text_BringFireType::
	.string "Reveni cum monstro ignis.$"

Ardor_Uni_ChemistryClass_Text_BringWaterType::
	.string "Reveni cum monstro aquae.$"

Ardor_Uni_ChemistryClass_Text_BringGroundType::
	.string "Reveni cum monstro telluris.$"

Ardor_Uni_ChemistryClass_Text_BringFlyingType::
	.string "Reveni cum monstro aeris.$"

Ardor_Uni_ChemistryClass_Text_LessonComplete::
	.string "Revenisti cum monstra quattor: uno\n"
	.string "ignis, uno aquae, uno telluris, et uno\l"
	.string "aeris.$"

Ardor_Uni_ChemistryClass_Text_TeacherBattleLost::
	.string "Sic aurum es plumbum sum.$"

Ardor_Uni_ChemistryClass_Text_ClassFinished::
	.string "Congratulatio! Iam studuisti alchemiam.\n"
	.string "Usa machinam quando volas.$"
