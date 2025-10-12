CasaAtrei_MapScripts::
# 3 "data/maps/CasaAtrei/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/CasaAtrei/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME
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

CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME:
# 20 "data/maps/CasaAtrei/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 21 "data/maps/CasaAtrei/scripts.pory"
	hideobjectat LOCALID_CASAATREI_KLYTMNESTRA, MAP_CASA_ATREI
# 22 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_KLYTMNESTRA
	return


CasaAtrei_Script_ShowOrestesBeforeIphigeniaFight::
# 28 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 8
# 29 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_LOOK_AROUND
# 30 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 15
# 31 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 32 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 15, 18
# 33 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_FACE_DOWN
# 34 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 13, 20
# 35 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_FACE_DOWN
	return


CasaAtrei_Script_ShowOrestesDuringIphigeniaFight::
# 40 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 8
# 41 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_RUN_IN_PLACE_DOWN
# 42 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 9
# 43 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 44 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 15, 18
# 45 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_FACE_DOWN
# 46 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 13, 20
# 47 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_FACE_DOWN
	return


CasaAtrei_Script_OrestesIphigeniaTriggerA::
# 52 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 54 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 55 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 57 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 58 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 59 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 60 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 62 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphigeniaTriggerB::
# 66 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 68 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 69 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 71 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 72 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 74 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphigeniaTriggerC::
# 78 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 80 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 81 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 83 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 84 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 86 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphegeniaFightScene::
# 91 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 92 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 94 "data/maps/CasaAtrei/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 95 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq CasaAtrei_Script_OrestesIphegeniaFightScene_2
# 98 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceLeft
CasaAtrei_Script_OrestesIphegeniaFightScene_1:
# 100 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 102 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 103 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight1, MSGBOX_YESNO
# 104 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 106 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 107 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight1, MSGBOX_YESNO
# 108 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 109 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 111 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 112 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 113 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 115 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 116 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 117 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 119 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkUp6
# 120 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 122 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 123 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight2, MSGBOX_YESNO
# 124 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 126 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq CasaAtrei_Script_OrestesIphegeniaFightScene_6
# 130 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceLeft
# 131 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
CasaAtrei_Script_OrestesIphegeniaFightScene_5:
# 133 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 135 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 136 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight2, MSGBOX_YESNO
# 138 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 139 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 140 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 142 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight3, MSGBOX_YESNO
# 143 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 145 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 146 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight3, MSGBOX_YESNO
# 147 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 148 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 150 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_RUN_IN_PLACE_DOWN
# 151 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 153 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 10
# 155 "data/maps/CasaAtrei/scripts.pory"
	releaseall
	end

CasaAtrei_Script_OrestesIphegeniaFightScene_2:
# 96 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceUp
	goto CasaAtrei_Script_OrestesIphegeniaFightScene_1

CasaAtrei_Script_OrestesIphegeniaFightScene_6:
# 127 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceUp
# 128 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	goto CasaAtrei_Script_OrestesIphegeniaFightScene_5


CasaAtrei_Script_TriggerKlytmnestraSceneA::
# 161 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 162 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 163 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 164 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 166 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_TriggerKlytmnestraSceneB::
# 171 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 172 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 173 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 174 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 176 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_TriggerKlytmnestraSceneC::
# 181 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 182 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 183 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 184 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 186 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_KlytmnestraScene::
# 191 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 192 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 194 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_KLYTMNESTRA, 190, 98
# 195 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_Klytmnestra1
# 196 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_KLYTMNESTRA
# 197 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 199 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 200 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 202 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_KLYTMNESTRA, Common_Movement_FaceLeft
# 203 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 205 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_KLYTMNESTRA, 190, 98
# 206 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_Klytmnestra2
# 207 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_KLYTMNESTRA
# 208 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 210 "data/maps/CasaAtrei/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 212 "data/maps/CasaAtrei/scripts.pory"
	trainerbattle_no_intro TRAINER_KLYTMNESTRA, CasaAtrei_Text_KlytmnestraLost
# 214 "data/maps/CasaAtrei/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 215 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_KLYTMNESTRA
# 216 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 0, 0
# 217 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_INVISIBLE
# 218 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_KLYTMNESTRA
	return


CasaAtrei_Script_Orestes::
	return


CasaAtrei_Script_Iphigenia::
	return


CasaAtrei_Script_Agamemnon::
	return


CasaAtrei_Text_OrestesBeforeIphegeniaFight1::
# 265 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight1::
# 269 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight2::
# 273 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight2::
# 277 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight3::
# 281 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight3::
# 285 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_Klytmnestra1::
# 289 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_Klytmnestra2::
# 293 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_KlytmnestraLost::
# 297 "data/maps/CasaAtrei/scripts.pory"
	.string "$"
