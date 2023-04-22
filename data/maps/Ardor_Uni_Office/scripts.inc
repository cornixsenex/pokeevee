Ardor_Uni_Office_MapScripts::
	.byte 0


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
	return


Ardor_Uni_Office_Text_ConsulLIntro::
	.string "Te non cognosco. Sum Albinus consulque\n"
	.string "Collegi Ardentis.$"

Ardor_Uni_Office_Text_ConsulRIntro::
	.string "Te non cognosco. Sum Platonus\n"
	.string "consulque Collegi Ardentis.$"
