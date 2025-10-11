CasaAtrei_MapScripts::
# 3 "data/maps/CasaAtrei/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 9
	goto_if_eq CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 10
	goto_if_eq CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 11
	goto_if_eq CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_ShowOrestesBeforeIphigeniaFight
	goto CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 9 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_ShowOrestesDuringIphigeniaFight
	goto CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	return


CasaAtrei_Script_ShowOrestesBeforeIphigeniaFight::
# 21 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 8
# 22 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_LOOK_AROUND
# 23 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 15
# 24 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 25 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 15, 18
# 26 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_FACE_DOWN
# 27 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 13, 20
# 28 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_FACE_DOWN
	return


CasaAtrei_Script_ShowOrestesDuringIphigeniaFight::
# 33 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 8
# 34 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_RUN_IN_PLACE_DOWN
# 35 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 9
# 36 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 37 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 15, 18
# 38 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_FACE_DOWN
# 39 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 13, 20
# 40 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_FACE_DOWN
	return


CasaAtrei_Script_OrestesIphigeniaTriggerA::
# 45 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 47 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 48 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 50 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 51 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 52 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 53 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 55 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphigeniaTriggerB::
# 59 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 61 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 62 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 64 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 65 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 67 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphigeniaTriggerC::
# 71 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 73 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 74 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 76 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 77 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 79 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphegeniaFightScene::
# 84 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 85 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 87 "data/maps/CasaAtrei/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 88 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq CasaAtrei_Script_OrestesIphegeniaFightScene_2
# 91 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceLeft
CasaAtrei_Script_OrestesIphegeniaFightScene_1:
# 93 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 95 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 96 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight1, MSGBOX_YESNO
# 97 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 99 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 100 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight1, MSGBOX_YESNO
# 101 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 102 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 104 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 105 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 106 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 108 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 109 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 110 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 112 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkUp6
# 113 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 115 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 116 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight2, MSGBOX_YESNO
# 117 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 119 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq CasaAtrei_Script_OrestesIphegeniaFightScene_6
# 123 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceLeft
# 124 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
CasaAtrei_Script_OrestesIphegeniaFightScene_5:
# 126 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 128 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 129 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight2, MSGBOX_YESNO
# 131 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 132 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 133 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 135 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight3, MSGBOX_YESNO
# 136 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 138 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 139 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight3, MSGBOX_YESNO
# 140 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 141 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 143 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_RUN_IN_PLACE_DOWN
# 144 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 146 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 10
# 148 "data/maps/CasaAtrei/scripts.pory"
	releaseall
	end

CasaAtrei_Script_OrestesIphegeniaFightScene_2:
# 89 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceUp
	goto CasaAtrei_Script_OrestesIphegeniaFightScene_1

CasaAtrei_Script_OrestesIphegeniaFightScene_6:
# 120 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceUp
# 121 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	goto CasaAtrei_Script_OrestesIphegeniaFightScene_5


CasaAtrei_Script_Orestes::
	return


CasaAtrei_Script_Iphigenia::
	return


CasaAtrei_Script_Agamemnon::
	return


CasaAtrei_Text_OrestesBeforeIphegeniaFight1::
# 165 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight1::
# 169 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight2::
# 173 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight2::
# 177 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight3::
# 181 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight3::
# 185 "data/maps/CasaAtrei/scripts.pory"
	.string "$"
