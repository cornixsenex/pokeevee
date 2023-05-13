Ardor_Uni_Office_MapScripts::
	.byte 0


Ardor_Uni_Office_EventScript_IncrementVar::
	switch VAR_UNI_STATE
	case 0, Ardor_Uni_Office_EventScript_IncrementVar_3
	case 1, Ardor_Uni_Office_EventScript_IncrementVar_4
	case 2, Ardor_Uni_Office_EventScript_IncrementVar_5
	case 3, Ardor_Uni_Office_EventScript_IncrementVar_6
	case 4, Ardor_Uni_Office_EventScript_IncrementVar_7
	case 5, Ardor_Uni_Office_EventScript_IncrementVar_8
	case 6, Ardor_Uni_Office_EventScript_IncrementVar_9
	case 7, Ardor_Uni_Office_EventScript_IncrementVar_10
	case 8, Ardor_Uni_Office_EventScript_IncrementVar_11
	case 9, Ardor_Uni_Office_EventScript_IncrementVar_12
	case 10, Ardor_Uni_Office_EventScript_IncrementVar_13
	msgbox Ardor_Uni_Office_EventScript_IncrementVar_Text_0
	closemessage
Ardor_Uni_Office_EventScript_IncrementVar_1:
	return

Ardor_Uni_Office_EventScript_IncrementVar_3:
	setvar VAR_UNI_STATE, 1
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_4:
	setvar VAR_UNI_STATE, 2
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_5:
	setvar VAR_UNI_STATE, 3
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_6:
	setvar VAR_UNI_STATE, 4
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_7:
	setvar VAR_UNI_STATE, 5
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_8:
	setvar VAR_UNI_STATE, 6
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_9:
	setvar VAR_UNI_STATE, 7
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_10:
	setvar VAR_UNI_STATE, 8
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_11:
	setvar VAR_UNI_STATE, 9
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_12:
	setvar VAR_UNI_STATE, 10
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_13:
	setvar VAR_UNI_STATE, 11
	goto Ardor_Uni_Office_EventScript_IncrementVar_1


Ardor_Uni_Office_EventScript_ConsulL::
	lock
	faceplayer
	compare VAR_UNI_STATE, 0
	goto_if_gt Ardor_Uni_Office_EventScript_ConsulL_2
	setvar VAR_UNI_STATE, 1
	msgbox Ardor_Uni_Office_Text_ConsulLIntro
	closemessage
	call Ardor_Uni_Office_EventScript_Consul
Ardor_Uni_Office_EventScript_ConsulL_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_Office_EventScript_ConsulL_2:
	call Ardor_Uni_Office_EventScript_Consul
	goto Ardor_Uni_Office_EventScript_ConsulL_1


Ardor_Uni_Office_EventScript_ConsulR::
	lock
	faceplayer
	compare VAR_UNI_STATE, 0
	goto_if_gt Ardor_Uni_Office_EventScript_ConsulR_2
	setvar VAR_UNI_STATE, 1
	msgbox Ardor_Uni_Office_Text_ConsulRIntro
	closemessage
	call Ardor_Uni_Office_EventScript_Consul
Ardor_Uni_Office_EventScript_ConsulR_1:
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_Office_EventScript_ConsulR_2:
	call Ardor_Uni_Office_EventScript_Consul
	goto Ardor_Uni_Office_EventScript_ConsulR_1


Ardor_Uni_TermState_Incrementvar::
	switch VAR_UNI_TERM_STATE
	case 0, Ardor_Uni_TermState_Incrementvar_3
	case 1, Ardor_Uni_TermState_Incrementvar_4
	case 2, Ardor_Uni_TermState_Incrementvar_5
	case 3, Ardor_Uni_TermState_Incrementvar_6
	case 4, Ardor_Uni_TermState_Incrementvar_7
	case 5, Ardor_Uni_TermState_Incrementvar_8
	msgbox Ardor_Uni_TermState_Incrementvar_Text_0
	closemessage
Ardor_Uni_TermState_Incrementvar_1:
	return

Ardor_Uni_TermState_Incrementvar_3:
	setvar VAR_UNI_TERM_STATE, 1
	goto Ardor_Uni_TermState_Incrementvar_1

Ardor_Uni_TermState_Incrementvar_4:
	setvar VAR_UNI_TERM_STATE, 2
	goto Ardor_Uni_TermState_Incrementvar_1

Ardor_Uni_TermState_Incrementvar_5:
	setvar VAR_UNI_TERM_STATE, 3
	goto Ardor_Uni_TermState_Incrementvar_1

Ardor_Uni_TermState_Incrementvar_6:
	setvar VAR_UNI_TERM_STATE, 4
	goto Ardor_Uni_TermState_Incrementvar_1

Ardor_Uni_TermState_Incrementvar_7:
	setvar VAR_UNI_TERM_STATE, 5
	goto Ardor_Uni_TermState_Incrementvar_1

Ardor_Uni_TermState_Incrementvar_8:
	setvar VAR_UNI_TERM_STATE, 6
	goto Ardor_Uni_TermState_Incrementvar_1


Ardor_Uni_Office_EventScript_Consul::
	compare VAR_UNI_TERM_STATE, 4
	goto_if_gt Ardor_Uni_Office_EventScript_Consul_2
	switch VAR_UNI_STATE
	case 0, Ardor_Uni_Office_EventScript_Consul_6
	case 1, Ardor_Uni_Office_EventScript_Consul_7
	case 2, Ardor_Uni_Office_EventScript_Consul_8
	case 3, Ardor_Uni_Office_EventScript_Consul_9
	case 4, Ardor_Uni_Office_EventScript_Consul_10
	case 5, Ardor_Uni_Office_EventScript_Consul_11
	case 6, Ardor_Uni_Office_EventScript_Consul_12
	case 7, Ardor_Uni_Office_EventScript_Consul_13
	case 8, Ardor_Uni_Office_EventScript_Consul_14
	case 9, Ardor_Uni_Office_EventScript_Consul_15
	case 10, Ardor_Uni_Office_EventScript_Consul_15
	msgbox Ardor_Uni_Office_EventScript_Consul_Text_1
	closemessage
Ardor_Uni_Office_EventScript_Consul_1:
	return

Ardor_Uni_Office_EventScript_Consul_2:
	call Ardor_Uni_Office_EventScript_Graduate
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_6:
	msgbox Ardor_Uni_Office_EventScript_Consul_Text_0
	closemessage
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_7:
	call Ardor_Uni_Office_EventScript_ConsulRegister
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_8:
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_9:
	call Ardor_Uni_Office_EventScript_ConsulRegister
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_10:
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_11:
	call Ardor_Uni_Office_EventScript_ConsulRegister
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_12:
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_13:
	call Ardor_Uni_Office_EventScript_ConsulRegister
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_14:
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_15:
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1


Ardor_Uni_Office_EventScript_Graduate::
	setvar VAR_UNI_TERM_STATE, 0
	call Ardor_Uni_Office_EventScript_IncrementVar
	msgbox Ardor_Uni_Office_Text_ConsulCongrats
	closemessage
	compare VAR_UNI_STATE, 9
	goto_if_eq Ardor_Uni_Office_EventScript_Graduate_2
	call Ardor_Uni_Office_EventScript_ConsulRegister
Ardor_Uni_Office_EventScript_Graduate_1:
	return

Ardor_Uni_Office_EventScript_Graduate_2:
	setvar VAR_UNI_STATE, 10
	msgbox Ardor_Uni_Office_Text_ConsulGradutate
	closemessage
	giveitem ITEM_DIPLOMA
	call Ardor_Uni_Office_EventScript_ConsulDonate
	goto Ardor_Uni_Office_EventScript_Graduate_1


Ardor_Uni_Office_EventScript_ConsulDonate::
	showmoneybox 0, 0
	msgbox Ardor_Uni_Office_Text_ConsulDonate, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, NO
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_1
	switch VAR_UNI_TERM_STATE
	case 0, Ardor_Uni_Office_EventScript_ConsulDonate_5
	case 1, Ardor_Uni_Office_EventScript_ConsulDonate_6
	case 2, Ardor_Uni_Office_EventScript_ConsulDonate_7
	case 3, Ardor_Uni_Office_EventScript_ConsulDonate_8
	case 4, Ardor_Uni_Office_EventScript_ConsulDonate_9
	case 5, Ardor_Uni_Office_EventScript_ConsulDonate_10
	checkmoney 999998
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_30
	removemoney 999998
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox Ardor_Uni_Office_Text_ConsulDonated
	closemessage
	return

Ardor_Uni_Office_EventScript_ConsulDonate_1:
	msgbox Ardor_Uni_Office_Text_ConsulDonateNo
	closemessage
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_5:
	checkmoney 1000
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_12
	removemoney 1000
	updatemoneybox
	playse SE_SHOP
	waitse
	setvar VAR_UNI_TERM_STATE, 1
	msgbox Ardor_Uni_Office_Text_ConsulDonated
	closemessage
	return

Ardor_Uni_Office_EventScript_ConsulDonate_6:
	checkmoney 5000
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_15
	removemoney 5000
	updatemoneybox
	playse SE_SHOP
	waitse
	setvar VAR_UNI_TERM_STATE, 2
	msgbox Ardor_Uni_Office_Text_ConsulDonated
	closemessage
	return

Ardor_Uni_Office_EventScript_ConsulDonate_7:
	checkmoney 10000
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_18
	removemoney 10000
	updatemoneybox
	playse SE_SHOP
	waitse
	setvar VAR_UNI_TERM_STATE, 3
	msgbox Ardor_Uni_Office_Text_ConsulDonated
	closemessage
	return

Ardor_Uni_Office_EventScript_ConsulDonate_8:
	checkmoney 50000
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_21
	removemoney 50000
	updatemoneybox
	playse SE_SHOP
	waitse
	setvar VAR_UNI_TERM_STATE, 4
	msgbox Ardor_Uni_Office_Text_ConsulDonated
	closemessage
	return

Ardor_Uni_Office_EventScript_ConsulDonate_9:
	checkmoney 100000
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_24
	removemoney 100000
	updatemoneybox
	playse SE_SHOP
	waitse
	setvar VAR_UNI_TERM_STATE, 5
	msgbox Ardor_Uni_Office_Text_ConsulDonated
	closemessage
	return

Ardor_Uni_Office_EventScript_ConsulDonate_10:
	checkmoney 500000
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_27
	removemoney 1000
	updatemoneybox
	playse SE_SHOP
	waitse
	setvar VAR_UNI_TERM_STATE, 6
	msgbox Ardor_Uni_Office_Text_ConsulDonated
	closemessage
	return

Ardor_Uni_Office_EventScript_ConsulDonate_12:
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
	closemessage
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_15:
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
	closemessage
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_18:
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
	closemessage
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_21:
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
	closemessage
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_24:
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
	closemessage
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_27:
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
	closemessage
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_30:
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
	closemessage
	hidemoneybox
	return


Ardor_Uni_Office_EventScript_ConsulRegister::
	showmoneybox 0, 0
	msgbox Ardor_Uni_Office_Text_ConsulRegister1, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, NO
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulRegister_1
	checkmoney 1000
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulRegister_4
	removemoney 1000
	updatemoneybox
	playse SE_SHOP
	waitse
	call Ardor_Uni_Office_EventScript_IncrementVar
	msgbox Ardor_Uni_Office_Text_ConsulRegisterWelcome
	closemessage
	hidemoneybox
	switch VAR_UNI_STATE
	case 2, Ardor_Uni_Office_EventScript_ConsulRegister_9
	case 4, Ardor_Uni_Office_EventScript_ConsulRegister_10
	case 6, Ardor_Uni_Office_EventScript_ConsulRegister_11
	case 8, Ardor_Uni_Office_EventScript_ConsulRegister_12
	msgbox Ardor_Uni_Office_EventScript_ConsulRegister_Text_0
Ardor_Uni_Office_EventScript_ConsulRegister_7:
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollScience
	return

Ardor_Uni_Office_EventScript_ConsulRegister_1:
	msgbox Ardor_Uni_Office_EventScript_ConsulRegisterNo
	closemessage
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulRegister_4:
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
	closemessage
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulRegister_9:
	setflag FLAG_OPEN_CLASS_GRAMMAR
	setflag FLAG_OPEN_CLASS_ARITHMETIC
	msgbox Ardor_Uni_Office_Text_ClassDefault1
	goto Ardor_Uni_Office_EventScript_ConsulRegister_7

Ardor_Uni_Office_EventScript_ConsulRegister_10:
	setflag FLAG_OPEN_CLASS_ALGEBRA
	setflag FLAG_OPEN_CLASS_LITERATURE
	msgbox Ardor_Uni_Office_Text_ClassDefault2
	goto Ardor_Uni_Office_EventScript_ConsulRegister_7

Ardor_Uni_Office_EventScript_ConsulRegister_11:
	setflag FLAG_OPEN_CLASS_GEOMETRY
	setflag FLAG_OPEN_CLASS_POETRY
	msgbox Ardor_Uni_Office_Text_ClassDefault3
	goto Ardor_Uni_Office_EventScript_ConsulRegister_7

Ardor_Uni_Office_EventScript_ConsulRegister_12:
	setflag FLAG_OPEN_CLASS_CALCULUS
	setflag FLAG_OPEN_CLASS_POETRY
	msgbox Ardor_Uni_Office_Text_ClassDefault4
	goto Ardor_Uni_Office_EventScript_ConsulRegister_7


Ardor_Uni_Office_EventScript_EnrollSocial::
	msgbox Ardor_Uni_Office_Text_EnrollSocialIntro
	multichoice 0, 0, MULTI_ARDOR_CHOOSE_SOCIAL, TRUE
	switch VAR_RESULT
	case 0, Ardor_Uni_Office_EventScript_EnrollSocial_3
	case 1, Ardor_Uni_Office_EventScript_EnrollSocial_4
	case 2, Ardor_Uni_Office_EventScript_EnrollSocial_5
	case 3, Ardor_Uni_Office_EventScript_EnrollSocial_6
	msgbox Ardor_Uni_Office_EventScript_EnrollSocial_Text_0
	closemessage
	end

Ardor_Uni_Office_EventScript_EnrollSocial_1:
	return

Ardor_Uni_Office_EventScript_EnrollSocial_3:
	goto_if_set FLAG_OPEN_CLASS_HISTORY, Ardor_Uni_Office_EventScript_EnrollSocial_8
	setflag FLAG_OPEN_CLASS_HISTORY
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_4:
	goto_if_set FLAG_OPEN_CLASS_ARCHAEOLOGY, Ardor_Uni_Office_EventScript_EnrollSocial_11
	setflag FLAG_OPEN_CLASS_ARCHAEOLOGY
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_5:
	goto_if_set FLAG_OPEN_CLASS_PSYCHOLOGY, Ardor_Uni_Office_EventScript_EnrollSocial_14
	setflag FLAG_OPEN_CLASS_PSYCHOLOGY
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_6:
	goto_if_set FLAG_OPEN_CLASS_PHILOSOPHY, Ardor_Uni_Office_EventScript_EnrollSocial_17
	setflag FLAG_OPEN_CLASS_PHILOSOPHY
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_8:
	msgbox Ardor_Uni_Office_Text_HistoryRepeat
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_11:
	msgbox Ardor_Uni_Office_Text_ArchaeologyRepeat
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_14:
	msgbox Ardor_Uni_Office_Text_PsychologyRepeat
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_17:
	msgbox Ardor_Uni_Office_Text_PhilosophyRepeat
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1


Ardor_Uni_Office_EventScript_EnrollScience::
	msgbox Ardor_Uni_Office_Text_EnrollScienceIntro
	multichoice 0, 0, MULTI_ARDOR_CHOOSE_SCIENCE, TRUE
	switch VAR_RESULT
	case 0, Ardor_Uni_Office_EventScript_EnrollScience_3
	case 1, Ardor_Uni_Office_EventScript_EnrollScience_4
	case 2, Ardor_Uni_Office_EventScript_EnrollScience_5
	case 3, Ardor_Uni_Office_EventScript_EnrollScience_6
	msgbox Ardor_Uni_Office_EventScript_EnrollScience_Text_0
	closemessage
	end

Ardor_Uni_Office_EventScript_EnrollScience_1:
	return

Ardor_Uni_Office_EventScript_EnrollScience_3:
	goto_if_set FLAG_OPEN_CLASS_GEOLOGY, Ardor_Uni_Office_EventScript_EnrollScience_8
	setflag FLAG_OPEN_CLASS_GEOLOGY
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_4:
	goto_if_set FLAG_OPEN_CLASS_BIOLOGY, Ardor_Uni_Office_EventScript_EnrollScience_11
	setflag FLAG_OPEN_CLASS_BIOLOGY
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_5:
	goto_if_set FLAG_OPEN_CLASS_CHEMISTRY, Ardor_Uni_Office_EventScript_EnrollScience_14
	checktrainerflag TRAINER_UNI_BIOLOGY
	goto_if 0, Ardor_Uni_Office_EventScript_EnrollScience_15
	setflag FLAG_OPEN_CLASS_CHEMISTRY
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_6:
	goto_if_set FLAG_OPEN_CLASS_PHYSICS, Ardor_Uni_Office_EventScript_EnrollScience_19
	checktrainerflag TRAINER_UNI_CHEMISTRY
	goto_if 0, Ardor_Uni_Office_EventScript_EnrollScience_20
	setflag FLAG_OPEN_CLASS_PHYSICS
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_8:
	msgbox Ardor_Uni_Office_Text_GeologyRepeat
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollScience
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_11:
	msgbox Ardor_Uni_Office_Text_BiologyRepeat
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollScience
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_14:
	msgbox Ardor_Uni_Office_Text_ChemistryRepeat
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollScience
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_15:
	msgbox Ardor_Uni_Office_Text_ChemistryPrereq
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollScience
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_19:
	msgbox Ardor_Uni_Office_Text_PhysicsRepeat
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollScience
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_20:
	msgbox Ardor_Uni_Office_Text_PhysicsPrereq
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollScience
	goto Ardor_Uni_Office_EventScript_EnrollScience_1


Ardor_Uni_Office_EventScript_EnrollElective::
	msgbox Ardor_Uni_Office_Text_EnrollElectiveIntro
	multichoice 0, 0, MULTI_ARDOR_CHOOSE_ELECTIVE, TRUE
	switch VAR_RESULT
	case 0, Ardor_Uni_Office_EventScript_EnrollElective_3
	case 1, Ardor_Uni_Office_EventScript_EnrollElective_4
	case 2, Ardor_Uni_Office_EventScript_EnrollElective_5
	case 3, Ardor_Uni_Office_EventScript_EnrollElective_6
	msgbox Ardor_Uni_Office_EventScript_EnrollElective_Text_0
	closemessage
	end

Ardor_Uni_Office_EventScript_EnrollElective_1:
	return

Ardor_Uni_Office_EventScript_EnrollElective_3:
	goto_if_set FLAG_OPEN_CLASS_ART, Ardor_Uni_Office_EventScript_EnrollElective_8
	setflag FLAG_OPEN_CLASS_ART
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_4:
	goto_if_set FLAG_OPEN_CLASS_MUSIC, Ardor_Uni_Office_EventScript_EnrollElective_11
	setflag FLAG_OPEN_CLASS_MUSIC
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_5:
	goto_if_set FLAG_OPEN_CLASS_GYM, Ardor_Uni_Office_EventScript_EnrollElective_14
	setflag FLAG_OPEN_CLASS_GYM
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_6:
	goto_if_set FLAG_OPEN_CLASS_COMPUTER, Ardor_Uni_Office_EventScript_EnrollElective_17
	checktrainerflag TRAINER_UNI_ALGEBRA
	goto_if 0, Ardor_Uni_Office_EventScript_EnrollElective_18
	setflag FLAG_OPEN_CLASS_COMPUTER
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_8:
	msgbox Ardor_Uni_Office_Text_ArtRepeat
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_11:
	msgbox Ardor_Uni_Office_Text_MusicRepeat
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_14:
	msgbox Ardor_Uni_Office_Text_GymRepeat
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_17:
	msgbox Ardor_Uni_Office_Text_ComputerRepeat
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_18:
	msgbox Ardor_Uni_Office_Text_ComputerPrereq
	closemessage
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollElective_1


Ardor_Uni_Office_EventScript_ConsulEnrolled::
	switch VAR_UNI_STATE
	case 2, Ardor_Uni_Office_EventScript_ConsulEnrolled_3
	case 4, Ardor_Uni_Office_EventScript_ConsulEnrolled_4
	case 6, Ardor_Uni_Office_EventScript_ConsulEnrolled_5
	case 8, Ardor_Uni_Office_EventScript_ConsulEnrolled_6
	msgbox Ardor_Uni_Office_EventScript_ConsulEnrolled_Text_0
Ardor_Uni_Office_EventScript_ConsulEnrolled_1:
	closemessage
	goto_if_set FLAG_OPEN_CLASS_GRAMMAR, Ardor_Uni_Office_EventScript_ConsulEnrolled_10
Ardor_Uni_Office_EventScript_ConsulEnrolled_8:
	goto_if_set FLAG_OPEN_CLASS_LITERATURE, Ardor_Uni_Office_EventScript_ConsulEnrolled_15
Ardor_Uni_Office_EventScript_ConsulEnrolled_13:
	goto_if_set FLAG_OPEN_CLASS_POETRY, Ardor_Uni_Office_EventScript_ConsulEnrolled_20
Ardor_Uni_Office_EventScript_ConsulEnrolled_18:
	goto_if_set FLAG_OPEN_CLASS_ORATION, Ardor_Uni_Office_EventScript_ConsulEnrolled_25
Ardor_Uni_Office_EventScript_ConsulEnrolled_23:
	goto_if_set FLAG_OPEN_CLASS_ARITHMETIC, Ardor_Uni_Office_EventScript_ConsulEnrolled_30
Ardor_Uni_Office_EventScript_ConsulEnrolled_28:
	goto_if_set FLAG_OPEN_CLASS_ALGEBRA, Ardor_Uni_Office_EventScript_ConsulEnrolled_35
Ardor_Uni_Office_EventScript_ConsulEnrolled_33:
	goto_if_set FLAG_OPEN_CLASS_GEOMETRY, Ardor_Uni_Office_EventScript_ConsulEnrolled_40
Ardor_Uni_Office_EventScript_ConsulEnrolled_38:
	goto_if_set FLAG_OPEN_CLASS_CALCULUS, Ardor_Uni_Office_EventScript_ConsulEnrolled_45
Ardor_Uni_Office_EventScript_ConsulEnrolled_43:
	goto_if_set FLAG_OPEN_CLASS_BIOLOGY, Ardor_Uni_Office_EventScript_ConsulEnrolled_50
Ardor_Uni_Office_EventScript_ConsulEnrolled_48:
	goto_if_set FLAG_OPEN_CLASS_GEOLOGY, Ardor_Uni_Office_EventScript_ConsulEnrolled_55
Ardor_Uni_Office_EventScript_ConsulEnrolled_53:
	goto_if_set FLAG_OPEN_CLASS_CHEMISTRY, Ardor_Uni_Office_EventScript_ConsulEnrolled_60
Ardor_Uni_Office_EventScript_ConsulEnrolled_58:
	goto_if_set FLAG_OPEN_CLASS_PHYSICS, Ardor_Uni_Office_EventScript_ConsulEnrolled_65
Ardor_Uni_Office_EventScript_ConsulEnrolled_63:
	goto_if_set FLAG_OPEN_CLASS_HISTORY, Ardor_Uni_Office_EventScript_ConsulEnrolled_70
Ardor_Uni_Office_EventScript_ConsulEnrolled_68:
	goto_if_set FLAG_OPEN_CLASS_ARCHAEOLOGY, Ardor_Uni_Office_EventScript_ConsulEnrolled_75
Ardor_Uni_Office_EventScript_ConsulEnrolled_73:
	goto_if_set FLAG_OPEN_CLASS_PSYCHOLOGY, Ardor_Uni_Office_EventScript_ConsulEnrolled_80
Ardor_Uni_Office_EventScript_ConsulEnrolled_78:
	goto_if_set FLAG_OPEN_CLASS_PHILOSOPHY, Ardor_Uni_Office_EventScript_ConsulEnrolled_85
Ardor_Uni_Office_EventScript_ConsulEnrolled_83:
	goto_if_set FLAG_OPEN_CLASS_GYM, Ardor_Uni_Office_EventScript_ConsulEnrolled_90
Ardor_Uni_Office_EventScript_ConsulEnrolled_88:
	goto_if_set FLAG_OPEN_CLASS_ART, Ardor_Uni_Office_EventScript_ConsulEnrolled_95
Ardor_Uni_Office_EventScript_ConsulEnrolled_93:
	goto_if_set FLAG_OPEN_CLASS_MUSIC, Ardor_Uni_Office_EventScript_ConsulEnrolled_100
Ardor_Uni_Office_EventScript_ConsulEnrolled_98:
	goto_if_set FLAG_OPEN_CLASS_COMPUTER, Ardor_Uni_Office_EventScript_ConsulEnrolled_105
Ardor_Uni_Office_EventScript_ConsulEnrolled_103:
	return

Ardor_Uni_Office_EventScript_ConsulEnrolled_3:
	msgbox Ardor_Uni_Office_Text_ConsulEnrolled1
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_1

Ardor_Uni_Office_EventScript_ConsulEnrolled_4:
	msgbox Ardor_Uni_Office_Text_ConsulEnrolled2
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_1

Ardor_Uni_Office_EventScript_ConsulEnrolled_5:
	msgbox Ardor_Uni_Office_Text_ConsulEnrolled3
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_1

Ardor_Uni_Office_EventScript_ConsulEnrolled_6:
	msgbox Ardor_Uni_Office_Text_ConsulEnrolled4
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_1

Ardor_Uni_Office_EventScript_ConsulEnrolled_9:
	msgbox Ardor_Uni_Office_Text_FinishGrammar
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_8

Ardor_Uni_Office_EventScript_ConsulEnrolled_10:
	checktrainerflag TRAINER_UNI_GRAMMAR
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_9
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_8

Ardor_Uni_Office_EventScript_ConsulEnrolled_14:
	msgbox Ardor_Uni_Office_Text_FinishLiterature
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_13

Ardor_Uni_Office_EventScript_ConsulEnrolled_15:
	checktrainerflag TRAINER_UNI_LITERATURE
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_14
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_13

Ardor_Uni_Office_EventScript_ConsulEnrolled_19:
	msgbox Ardor_Uni_Office_Text_FinishPoetry
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_18

Ardor_Uni_Office_EventScript_ConsulEnrolled_20:
	checktrainerflag TRAINER_UNI_POETRY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_19
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_18

Ardor_Uni_Office_EventScript_ConsulEnrolled_24:
	msgbox Ardor_Uni_Office_Text_FinishRhetoric
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_23

Ardor_Uni_Office_EventScript_ConsulEnrolled_25:
	checktrainerflag TRAINER_UNI_ORATION
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_24
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_23

Ardor_Uni_Office_EventScript_ConsulEnrolled_29:
	msgbox Ardor_Uni_Office_Text_FinishArithmetic
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_28

Ardor_Uni_Office_EventScript_ConsulEnrolled_30:
	checktrainerflag TRAINER_UNI_ARITHMETIC
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_29
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_28

Ardor_Uni_Office_EventScript_ConsulEnrolled_34:
	msgbox Ardor_Uni_Office_Text_FinishAlgebra
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_33

Ardor_Uni_Office_EventScript_ConsulEnrolled_35:
	checktrainerflag TRAINER_UNI_ALGEBRA
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_34
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_33

Ardor_Uni_Office_EventScript_ConsulEnrolled_39:
	msgbox Ardor_Uni_Office_Text_FinishGeometry
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_38

Ardor_Uni_Office_EventScript_ConsulEnrolled_40:
	checktrainerflag TRAINER_UNI_GEOMETRY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_39
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_38

Ardor_Uni_Office_EventScript_ConsulEnrolled_44:
	msgbox Ardor_Uni_Office_Text_FinishCalculus
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_43

Ardor_Uni_Office_EventScript_ConsulEnrolled_45:
	checktrainerflag TRAINER_UNI_CALCULUS
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_44
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_43

Ardor_Uni_Office_EventScript_ConsulEnrolled_49:
	msgbox Ardor_Uni_Office_Text_FinishBiology
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_48

Ardor_Uni_Office_EventScript_ConsulEnrolled_50:
	checktrainerflag TRAINER_UNI_BIOLOGY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_49
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_48

Ardor_Uni_Office_EventScript_ConsulEnrolled_54:
	msgbox Ardor_Uni_Office_Text_FinishGeology
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_53

Ardor_Uni_Office_EventScript_ConsulEnrolled_55:
	checktrainerflag TRAINER_UNI_GEOLOGY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_54
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_53

Ardor_Uni_Office_EventScript_ConsulEnrolled_59:
	msgbox Ardor_Uni_Office_Text_FinishChemistry
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_58

Ardor_Uni_Office_EventScript_ConsulEnrolled_60:
	checktrainerflag TRAINER_UNI_CHEMISTRY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_59
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_58

Ardor_Uni_Office_EventScript_ConsulEnrolled_64:
	msgbox Ardor_Uni_Office_Text_FinishPhysics
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_63

Ardor_Uni_Office_EventScript_ConsulEnrolled_65:
	checktrainerflag TRAINER_UNI_PHYSICS
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_64
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_63

Ardor_Uni_Office_EventScript_ConsulEnrolled_69:
	msgbox Ardor_Uni_Office_Text_FinishHistory
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_68

Ardor_Uni_Office_EventScript_ConsulEnrolled_70:
	checktrainerflag TRAINER_UNI_HISTORY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_69
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_68

Ardor_Uni_Office_EventScript_ConsulEnrolled_74:
	msgbox Ardor_Uni_Office_Text_FinishArchaeology
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_73

Ardor_Uni_Office_EventScript_ConsulEnrolled_75:
	checktrainerflag TRAINER_UNI_ARCHAEOLOGY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_74
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_73

Ardor_Uni_Office_EventScript_ConsulEnrolled_79:
	msgbox Ardor_Uni_Office_Text_FinishPsychology
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_78

Ardor_Uni_Office_EventScript_ConsulEnrolled_80:
	checktrainerflag TRAINER_UNI_PSYCHOLOGY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_79
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_78

Ardor_Uni_Office_EventScript_ConsulEnrolled_84:
	msgbox Ardor_Uni_Office_Text_FinishPhilosophy
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_83

Ardor_Uni_Office_EventScript_ConsulEnrolled_85:
	checktrainerflag TRAINER_UNI_PHILOSOPHY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_84
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_83

Ardor_Uni_Office_EventScript_ConsulEnrolled_89:
	msgbox Ardor_Uni_Office_Text_FinishGym
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_88

Ardor_Uni_Office_EventScript_ConsulEnrolled_90:
	checktrainerflag TRAINER_UNI_GYM
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_89
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_88

Ardor_Uni_Office_EventScript_ConsulEnrolled_94:
	msgbox Ardor_Uni_Office_Text_FinishArt
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_93

Ardor_Uni_Office_EventScript_ConsulEnrolled_95:
	checktrainerflag TRAINER_UNI_ART
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_94
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_93

Ardor_Uni_Office_EventScript_ConsulEnrolled_99:
	msgbox Ardor_Uni_Office_Text_FinishMusic
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_98

Ardor_Uni_Office_EventScript_ConsulEnrolled_100:
	checktrainerflag TRAINER_UNI_MUSIC
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_99
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_98

Ardor_Uni_Office_EventScript_ConsulEnrolled_104:
	msgbox Ardor_Uni_Office_Text_FinishComputer
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_103

Ardor_Uni_Office_EventScript_ConsulEnrolled_105:
	checktrainerflag TRAINER_UNI_COMPUTER
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_104
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_103


Ardor_Uni_Office_EventScript_IncrementVar_Text_0:
	.string "VAR_UNI_STATE bad in IncVar$"

Ardor_Uni_TermState_Incrementvar_Text_0:
	.string "VAR_UNI_TERM_STATE BAD VALUE$"

Ardor_Uni_Office_EventScript_Consul_Text_0:
	.string "UNI_STATE is 0 in consul$"

Ardor_Uni_Office_EventScript_Consul_Text_1:
	.string "UNI_STATE problemo in consul$"

Ardor_Uni_Office_EventScript_ConsulRegister_Text_0:
	.string "PROBLEM IN UNI_STATE switch in ConsulRegister$"

Ardor_Uni_Office_EventScript_EnrollSocial_Text_0:
	.string "PROBLEMO in enroll social switcher$"

Ardor_Uni_Office_EventScript_EnrollScience_Text_0:
	.string "PROBLEMO in enroll science switcher$"

Ardor_Uni_Office_EventScript_EnrollElective_Text_0:
	.string "PROBLEMO in enroll elective switcher$"

Ardor_Uni_Office_EventScript_ConsulEnrolled_Text_0:
	.string "Bad var in consul enrolled switch$"

Ardor_Uni_Office_Text_ConsulLIntro::
	.string "Te non cognosco. Sum Albinus consulque\n"
	.string "Collegi Ardentis.$"

Ardor_Uni_Office_Text_ConsulRIntro::
	.string "Te non cognosco. Sum Platonus\n"
	.string "consulque Collegi Ardentis.$"

Ardor_Uni_Office_Text_ConsulEnrolled1::
	.string "In sessione prima necesse est studere\n"
	.string "artem gramatici et arithmeticam.$"

Ardor_Uni_Office_Text_ConsulEnrolled2::
	.string "In sessione secunda necesse est\n"
	.string "studere literaturam at algebram.$"

Ardor_Uni_Office_Text_ConsulEnrolled3::
	.string "In sessione tertia necesse est studere\n"
	.string "artem artes poematis et geometriae.$"

Ardor_Uni_Office_Text_ConsulEnrolled4::
	.string "In sessione quarta necesse est\n"
	.string "studere oratum et calculum.$"

Ardor_Uni_Office_Text_FinishGrammar::
	.string "Stude grammaticam in cubiculo quinto in\n"
	.string "tabulatione prima.$"

Ardor_Uni_Office_Text_FinishLiterature::
	.string "Stude litteraturam in cubiculo quarto\n"
	.string "in tabulatione tertia.$"

Ardor_Uni_Office_Text_FinishPoetry::
	.string "Stude poemata in cubiculo sexto in\n"
	.string "tabulatione tertia.$"

Ardor_Uni_Office_Text_FinishRhetoric::
	.string "Stude oratum in cubiculo quinto in\n"
	.string "tabulatione tertia.$"

Ardor_Uni_Office_Text_FinishArithmetic::
	.string "Stude arithmeticum in cubiculo quarto\n"
	.string "in tabulatione prima.$"

Ardor_Uni_Office_Text_FinishAlgebra::
	.string "Stude algebram in cubiculo duo in\n"
	.string "tabulatione secunda.$"

Ardor_Uni_Office_Text_FinishGeometry::
	.string "Stude geometriam in cubiculo tertio in\n"
	.string "tabulatione secunda.$"

Ardor_Uni_Office_Text_FinishCalculus::
	.string "Stude calculum in cubiculo tertio in\n"
	.string "tabulatione tertia.$"

Ardor_Uni_Office_Text_FinishBiology::
	.string "Stude biologiam in cubiculo secundo in\n"
	.string "tabulatione prima.$"

Ardor_Uni_Office_Text_FinishGeology::
	.string "Stude geologiam in cubiculo primo in\n"
	.string "tabulatione prima.$"

Ardor_Uni_Office_Text_FinishChemistry::
	.string "Stude alchemiam in cubiculo tertio in\n"
	.string "tabulatione prima.$"

Ardor_Uni_Office_Text_FinishPhysics::
	.string "Stude physicas in cubiculo secundo in\n"
	.string "tabulatione tertia.$"

Ardor_Uni_Office_Text_FinishHistory::
	.string "Stude historiam in cubiculo quarto in\n"
	.string "tabulatione secunda.$"

Ardor_Uni_Office_Text_FinishArchaeology::
	.string "Stude archaeologiam in cubiculo quinto\n"
	.string "in tabulatione secunda.$"

Ardor_Uni_Office_Text_FinishPsychology::
	.string "Stude psychologiam in cubiculo sexto in\n"
	.string "tabulatione secunda.$"

Ardor_Uni_Office_Text_FinishPhilosophy::
	.string "Stude philosophiam in cubiculo primo in\n"
	.string "tabulatione tertia.$"

Ardor_Uni_Office_Text_FinishGym::
	.string "Stude gymnasium in campo harpasti\n"
	.string "prope Collegium Ardentem in urbe.$"

Ardor_Uni_Office_Text_FinishArt::
	.string "Stude picturam in cubiculo sexto in\n"
	.string "tabulatione prima.$"

Ardor_Uni_Office_Text_FinishMusic::
	.string "Stude musicam prope ascensionem in\n"
	.string "tabulatione prima.$"

Ardor_Uni_Office_Text_FinishComputer::
	.string "Stude computatrum in cubiculo primo in\n"
	.string "tabulatione secunda.$"

Ardor_Uni_Office_EventScript_ConsulRegisterNo::
	.string "Reveni cum lubidine descere. Vale.$"

Ardor_Uni_Office_Text_ConsulRegisterShort::
	.string "Sacculus parvus est tuus. Reveni cum\n"
	.string "sacculo pleno.$"

Ardor_Uni_Office_Text_ConsulRegisterWelcome::
	.string "Satis est nummerus tributi tui.\n"
	.string "Congratulatio! Numerus quinque est\l"
	.string "scholas te studere necesse est.\l"
	.string "Latinam, scientiam, artes, homines,\l"
	.string "matematicasque studebis sessione.\l"
	.string "Sessiones quattor diplomam Ardentis\l"
	.string "accipies post.$"

Ardor_Uni_Office_Text_ClassDefault1::
	.string "In sessione prima necesse est studere\n"
	.string "artes gramatici arithmeticasque.$"

Ardor_Uni_Office_Text_ClassDefault2::
	.string "In sessione secunda necesse est\n"
	.string "studere literaturam et algebram.$"

Ardor_Uni_Office_Text_ClassDefault3::
	.string "In sessione tertia necesse est studere\n"
	.string "artes poematis et geometriae.$"

Ardor_Uni_Office_Text_ClassDefault4::
	.string "In sessione quarta necesse est\n"
	.string "studere oratum et calculum.$"

Ardor_Uni_Office_Text_ConsulRegister1::
	.string "Salve puer, dice sic venisti studere\n"
	.string "Ardente artes. Pretium sessionis\l"
	.string "sestertii mille est. Emesne mille?$"

Ardor_Uni_Office_Text_EnrollScienceIntro::
	.string "Quam scientiam studebis?$"

Ardor_Uni_Office_Text_EnrollSocialIntro::
	.string "Quam scientiam societatis studebis?$"

Ardor_Uni_Office_Text_EnrollElectiveIntro::
	.string "Quam artem otii studebis?$"

Ardor_Uni_Office_Text_GeologyRepeat::
	.string "Scientem geologiae iam studuisti!\n"
	.string "Necesse semper est artes scientiasque\l"
	.string "studere novas.$"

Ardor_Uni_Office_Text_BiologyRepeat::
	.string "Scientem biologiae iam studuisti!\n"
	.string "Necesse semper est artes scientiasque\l"
	.string "studere novas.$"

Ardor_Uni_Office_Text_ChemistryRepeat::
	.string "Scientem alchemiae iam studuisti!\n"
	.string "Necesse semper est artes scientiasque\l"
	.string "studere novas.$"

Ardor_Uni_Office_Text_PhysicsRepeat::
	.string "Scientem physicarum iam studuisti!\n"
	.string "Necesse semper est artes scientiasque\l"
	.string "studere novas.$"

Ardor_Uni_Office_Text_HistoryRepeat::
	.string "Historiam iam studuisti! Necesse semper\n"
	.string "est artes scientiasque studere novas.$"

Ardor_Uni_Office_Text_ArchaeologyRepeat::
	.string "Archaeologiam iam studuisti! Necesse\n"
	.string "semper est artes scientiasque studere\l"
	.string "novas.$"

Ardor_Uni_Office_Text_PsychologyRepeat::
	.string "Psychologiam iam studuisti! Necesse\n"
	.string "semper est artes scientiasque studere\l"
	.string "novas.$"

Ardor_Uni_Office_Text_PhilosophyRepeat::
	.string "Philosophiam iam studuisti! Necesse\n"
	.string "semper est artes scientiasque studere\l"
	.string "novas.$"

Ardor_Uni_Office_Text_GymRepeat::
	.string "Gymnasium iam studuisti! Necesse\n"
	.string "semper est artes scientiasque studere\l"
	.string "novas.$"

Ardor_Uni_Office_Text_ArtRepeat::
	.string "Artem picturae iam studuisti! Necesse\n"
	.string "semper est artes scientiasque studere\l"
	.string "novas.$"

Ardor_Uni_Office_Text_MusicRepeat::
	.string "Artem musicae iam studuisti! Necesse\n"
	.string "semper est artes scientiasque studere\l"
	.string "novas.$"

Ardor_Uni_Office_Text_ComputerRepeat::
	.string "Computatra iam studuisti! Necesse\n"
	.string "semper est artes scientiasque studere\l"
	.string "novas.$"

Ardor_Uni_Office_Text_ChemistryPrereq::
	.string "Necesse est studere scientiam\n"
	.string "biologiae ante alchemiam.$"

Ardor_Uni_Office_Text_PhysicsPrereq::
	.string "Necesse est studere scientiam\n"
	.string "alchemiae ante physicas.$"

Ardor_Uni_Office_Text_ComputerPrereq::
	.string "Necesse est studere algebram ante\n"
	.string "computatra.$"

Ardor_Uni_Office_Text_ConsulCongrats::
	.string "Artes quinque iam studuisti.\n"
	.string "Congratulation! Sessionem perfecisti.$"

Ardor_Uni_Office_Text_ConsulGradutate::
	.string "Omnia artes iam studuisti.\n"
	.string "Congratulatio! Collegium Ardentem\l"
	.string "perfecisti! Accipe hoc diploma.$"

Ardor_Uni_Office_Text_ConsulDonated::
	.string "Gratias tibi ago.$"

Ardor_Uni_Office_Text_ConsulDonate::
	.string "Salve alumne. Venisti donare?$"

Ardor_Uni_Office_Text_ConsulDonateNo::
	.string "Reveni cum lubidine donare. Vale alumne.$"
