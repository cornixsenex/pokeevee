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


Ardor_Uni_Office_EventScript_Consul::
	switch VAR_UNI_STATE
	case 0, Ardor_Uni_Office_EventScript_Consul_3
	case 1, Ardor_Uni_Office_EventScript_Consul_4
	case 2, Ardor_Uni_Office_EventScript_Consul_5
	case 3, Ardor_Uni_Office_EventScript_Consul_6
	case 4, Ardor_Uni_Office_EventScript_Consul_7
	case 5, Ardor_Uni_Office_EventScript_Consul_8
	case 6, Ardor_Uni_Office_EventScript_Consul_9
	case 7, Ardor_Uni_Office_EventScript_Consul_10
	case 8, Ardor_Uni_Office_EventScript_Consul_11
	case 9, Ardor_Uni_Office_EventScript_Consul_12
	case 10, Ardor_Uni_Office_EventScript_Consul_12
	msgbox Ardor_Uni_Office_EventScript_Consul_Text_1
	closemessage
Ardor_Uni_Office_EventScript_Consul_1:
	return

Ardor_Uni_Office_EventScript_Consul_3:
	msgbox Ardor_Uni_Office_EventScript_Consul_Text_0
	closemessage
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_4:
	call Ardor_Uni_Office_EventScript_ConsulRegister
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_5:
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_6:
	call Ardor_Uni_Office_EventScript_ConsulRegister
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_7:
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_8:
	call Ardor_Uni_Office_EventScript_ConsulRegister
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_9:
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_10:
	call Ardor_Uni_Office_EventScript_ConsulRegister
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_11:
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_12:
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1


Ardor_Uni_Office_EventScript_ConsulRegister::
	return


Ardor_Uni_Office_EventScript_ConsulEnrolled::
	switch VAR_UNI_STATE
	case 2, Ardor_Uni_Office_EventScript_ConsulEnrolled_3
	case 4, Ardor_Uni_Office_EventScript_ConsulEnrolled_4
	case 6, Ardor_Uni_Office_EventScript_ConsulEnrolled_5
	case 8, Ardor_Uni_Office_EventScript_ConsulEnrolled_6
	msgbox Ardor_Uni_Office_EventScript_ConsulEnrolled_Text_0
Ardor_Uni_Office_EventScript_ConsulEnrolled_1:
	closemessage
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


Ardor_Uni_Office_EventScript_IncrementVar_Text_0:
	.string "VAR_UNI_STATE bad in IncVar$"

Ardor_Uni_Office_EventScript_Consul_Text_0:
	.string "UNI_STATE is 0 in consul$"

Ardor_Uni_Office_EventScript_Consul_Text_1:
	.string "UNI_STATE problemo in consul$"

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
