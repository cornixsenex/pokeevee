CasaAtrei_MapScripts::
# 3 "data/maps/CasaAtrei/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/CasaAtrei/scripts.pory"
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
	goto_if_eq CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 16 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 12
	goto_if_eq CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_ShowOrestesBeforeIphigeniaFight
	goto CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 9 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_ShowOrestesDuringIphigeniaFight
	goto CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 13 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_SetupAgamemnonKitchen
	goto CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 17 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_ShowAgamemnonKitchen
	return

CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME:
# 26 "data/maps/CasaAtrei/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 27 "data/maps/CasaAtrei/scripts.pory"
	hideobjectat LOCALID_CASAATREI_KLYTMNESTRA, MAP_CASA_ATREI
# 28 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_KLYTMNESTRA
	return


CasaAtrei_Script_ShowOrestesBeforeIphigeniaFight::
# 34 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 8
# 35 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_LOOK_AROUND
# 36 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 15
# 37 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 38 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 15, 18
# 39 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_FACE_DOWN
# 40 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 13, 20
# 41 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_FACE_DOWN
	return


CasaAtrei_Script_ShowOrestesDuringIphigeniaFight::
# 46 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 8
# 47 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_RUN_IN_PLACE_DOWN
# 48 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 9
# 49 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 50 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 15, 18
# 51 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_FACE_DOWN
# 52 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 13, 20
# 53 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_FACE_DOWN
	return


CasaAtrei_Script_SetupAgamemnonKitchen::
# 59 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 12
# 61 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_ShowAgamemnonKitchen
	return


CasaAtrei_Script_ShowAgamemnonKitchen::
# 66 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 6, 4
# 67 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_FACE_LEFT
# 68 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 6, 5
# 69 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_FACE_LEFT
# 70 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 14, 4
# 71 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 72 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_MAID, 9, 7
# 73 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_MAID, MOVEMENT_TYPE_WANDER_AROUND
	return


CasaAtrei_Script_OrestesIphigeniaTriggerA::
# 79 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 81 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 82 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 84 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 85 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 86 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 87 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 89 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphigeniaTriggerB::
# 93 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 95 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 96 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 98 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 99 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 101 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphigeniaTriggerC::
# 105 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 107 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 108 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 110 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 111 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 113 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphegeniaFightScene::
# 118 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 119 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 121 "data/maps/CasaAtrei/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 122 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq CasaAtrei_Script_OrestesIphegeniaFightScene_2
# 125 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceLeft
CasaAtrei_Script_OrestesIphegeniaFightScene_1:
# 127 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 129 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 130 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight1, MSGBOX_YESNO
# 131 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 133 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 134 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight1, MSGBOX_YESNO
# 135 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 136 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 138 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 139 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 140 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 142 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 143 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 144 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 146 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkUp6
# 147 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 149 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 150 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight2, MSGBOX_YESNO
# 151 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 152 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 153 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight2, MSGBOX_YESNO
# 155 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq CasaAtrei_Script_OrestesIphegeniaFightScene_6
# 159 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceLeft
# 160 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
CasaAtrei_Script_OrestesIphegeniaFightScene_5:
# 162 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 164 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 165 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight3, MSGBOX_YESNO
# 167 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 168 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 169 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 171 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight4, MSGBOX_YESNO
# 172 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 174 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 175 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight3, MSGBOX_YESNO
# 176 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 177 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 179 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_RUN_IN_PLACE_DOWN
# 180 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 182 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 10
# 184 "data/maps/CasaAtrei/scripts.pory"
	releaseall
	end

CasaAtrei_Script_OrestesIphegeniaFightScene_2:
# 123 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceUp
	goto CasaAtrei_Script_OrestesIphegeniaFightScene_1

CasaAtrei_Script_OrestesIphegeniaFightScene_6:
# 156 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceUp
# 157 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	goto CasaAtrei_Script_OrestesIphegeniaFightScene_5


CasaAtrei_Script_TriggerKlytmnestraSceneA::
# 190 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 191 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 192 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 193 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 195 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_TriggerKlytmnestraSceneB::
# 200 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 201 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 202 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 203 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 205 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_TriggerKlytmnestraSceneC::
# 210 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 211 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 212 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 213 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 215 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_KlytmnestraScene::
# 220 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 221 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 223 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_KLYTMNESTRA, 190, 98
# 224 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_Klytmnestra1
# 225 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_KLYTMNESTRA
# 226 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 228 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 229 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 231 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_KLYTMNESTRA, Common_Movement_FaceLeft
# 232 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 234 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_KLYTMNESTRA, 190, 98
# 235 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_Klytmnestra2
# 236 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_KLYTMNESTRA
# 237 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 239 "data/maps/CasaAtrei/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 241 "data/maps/CasaAtrei/scripts.pory"
	trainerbattle_no_intro TRAINER_KLYTMNESTRA, CasaAtrei_Text_KlytmnestraLost
# 243 "data/maps/CasaAtrei/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 244 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_KLYTMNESTRA
# 245 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 0, 0
# 246 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_INVISIBLE
# 247 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_KLYTMNESTRA
# 249 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 250 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene1, MSGBOX_YESNO
# 251 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 252 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 254 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_ORESTES
# 255 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 14
# 256 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_FACE_DOWN
# 257 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_ORESTES
# 259 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkDown6
# 260 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 262 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 263 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 264 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 266 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 267 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene2, MSGBOX_YESNO
# 268 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 270 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 271 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene1, MSGBOX_YESNO
# 272 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 274 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 275 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene3, MSGBOX_YESNO
# 276 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 277 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 279 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkRight3
# 280 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 281 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 282 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkUp2
# 283 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 284 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 285 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 287 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 288 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene2, MSGBOX_YESNO
# 289 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 291 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 292 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene4, MSGBOX_YESNO
# 293 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 295 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 296 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene3, MSGBOX_YESNO
# 297 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 299 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 300 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene5, MSGBOX_YESNO
# 301 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 303 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 304 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene4, MSGBOX_YESNO
# 305 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 307 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 308 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaKlytmnestraScene1, MSGBOX_YESNO
# 309 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 310 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 312 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 313 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_AGAMEMNON, Common_Movement_ExclamationMark
# 314 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 315 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 317 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_IPHIGENIA
# 318 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 14
# 319 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 320 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_IPHIGENIA
# 322 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkDown6
# 323 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 324 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkRight2
# 325 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 327 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 328 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 329 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 331 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 332 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene5, MSGBOX_YESNO
# 333 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 335 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 336 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaKlytmnestraScene2, MSGBOX_YESNO
# 337 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 339 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 340 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene6, MSGBOX_YESNO
# 341 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 343 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 344 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene6, MSGBOX_YESNO
# 345 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 347 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 348 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaKlytmnestraScene3, MSGBOX_YESNO
# 349 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 350 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 352 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkLeft2
# 353 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 354 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkUp6
# 355 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 357 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_IPHIGENIA
# 358 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 14, 4
# 359 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 360 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_IPHIGENIA
# 362 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 363 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 364 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 366 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 367 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene7, MSGBOX_YESNO
# 368 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 370 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 371 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene7, MSGBOX_YESNO
# 372 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 374 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 375 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene8, MSGBOX_YESNO
# 376 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 377 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 379 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 380 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 381 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 382 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 383 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 384 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 387 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 99
# 388 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene9, MSGBOX_YESNO
# 389 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 391 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 392 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene8, MSGBOX_YESNO
# 393 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 394 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 396 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 397 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkDown2
# 398 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 399 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft5
# 400 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkLeft5
# 401 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 402 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp8
# 403 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkUp8
# 404 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 406 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 407 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 409 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 410 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 412 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 413 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene9, MSGBOX_YESNO
# 414 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 415 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 417 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 418 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 420 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 11
	return


CasaAtrei_Script_OrestesBlockAgamemnonRest::
# 428 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 429 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 431 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 432 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBlock, MSGBOX_YESNO
# 433 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 434 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	return


CasaAtrei_Script_Orestes::
# 443 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 10
	goto_if_eq CasaAtrei_Script_Orestes_1
	return

CasaAtrei_Script_Orestes_1:
# 444 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 445 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesDuringIphigeniaFight
# 446 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 447 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	return


CasaAtrei_Script_Iphigenia::
# 453 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 10
	goto_if_eq CasaAtrei_Script_Iphigenia_1
	return

CasaAtrei_Script_Iphigenia_1:
# 454 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 455 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaDuringIphigeniaFight
# 456 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 457 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	return


CasaAtrei_Script_Agamemnon::
	return


CasaAtrei_Text_OrestesBeforeIphegeniaFight1::
# 467 "data/maps/CasaAtrei/scripts.pory"
	.string "Oh, {PLAYER}! You made it, good! The\n"
	.string "coast seems clear but I'm not sure\l"
	.string "where 4everyone has gone. I already\l"
	.string "checked my sister's room and saw no\l"
	.string "trace of...$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight1::
# 474 "data/maps/CasaAtrei/scripts.pory"
	.string "Orestes! Stop right there!$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight2::
# 478 "data/maps/CasaAtrei/scripts.pory"
	.string "I know you come to stop our mother! I\n"
	.string "will not allow you to revive father!$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight2::
# 483 "data/maps/CasaAtrei/scripts.pory"
	.string "My purpose, Iphigenia, is plain for all\n"
	.string "to see. I will see dad rescued but fear\l"
	.string "not, I won't touch a single hair upon\l"
	.string "the foul head of that wicked witch.$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight3::
# 490 "data/maps/CasaAtrei/scripts.pory"
	.string "Be quick! Go on! Find Klytmnestra! I'll\n"
	.string "keep my sister occupied here with me.$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight4::
# 495 "data/maps/CasaAtrei/scripts.pory"
	.string "This is your final warning, dear sister,\n"
	.string "I do not wish to come to blows with you\l"
	.string "but I will do what I must in order to see\l"
	.string "mother defeated, father saved.$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight3::
# 502 "data/maps/CasaAtrei/scripts.pory"
	.string "The die is cast, foul brother Orestes. I\n"
	.string "won't let you bring harm to our mother!$"

CasaAtrei_Text_OrestesDuringIphigeniaFight::
# 507 "data/maps/CasaAtrei/scripts.pory"
	.string "Gah! What animal fights with spit, nails,\n"
	.string "and teeth?$"

CasaAtrei_Text_IphigeniaDuringIphigeniaFight::
# 511 "data/maps/CasaAtrei/scripts.pory"
	.string "What monster fights his own mom and\n"
	.string "sister?$"

CasaAtrei_Text_Klytmnestra1::
# 515 "data/maps/CasaAtrei/scripts.pory"
	.string "I've been expecting you. Come closer,\n"
	.string "boy.$"

CasaAtrei_Text_Klytmnestra2::
# 519 "data/maps/CasaAtrei/scripts.pory"
	.string "I've known for some time my son would\n"
	.string "betray the woman who birthed, raised,\l"
	.string "clothed, and fed him. While this attack\l"
	.string "has long been foreseen I must admit\l"
	.string "that he would entrust the task of\l"
	.string "confronting me to someone like you is\l"
	.string "quite a shock. Perhaps I did not raise\l"
	.string "the boy as well as I had once believed. I\l"
	.string "am Klytmnestra, the enchantress. While\l"
	.string "typically I like to play with my food\l"
	.string "before I eat it, this is different. Since\l"
	.string "my very own life is threatened, I must\l"
	.string "make an exception and quickly see your\l"
	.string "soul dispatched to hell. Prepare to die!$"

CasaAtrei_Text_KlytmnestraLost::
# 535 "data/maps/CasaAtrei/scripts.pory"
	.string "My soul is being severed from the world!$"

CasaAtrei_Text_OrestesKlytmnestraScene1::
# 539 "data/maps/CasaAtrei/scripts.pory"
	.string "You did it {PLAYER}!$"

CasaAtrei_Text_OrestesKlytmnestraScene2::
# 543 "data/maps/CasaAtrei/scripts.pory"
	.string "You broke the witch's spell and lifted\n"
	.string "the curse!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene1::
# 548 "data/maps/CasaAtrei/scripts.pory"
	.string "Where am I?$"

CasaAtrei_Text_OrestesKlytmnestraScene3::
# 552 "data/maps/CasaAtrei/scripts.pory"
	.string "Father!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene2::
# 556 "data/maps/CasaAtrei/scripts.pory"
	.string "Orestes! What happened? I feel so cold\n"
	.string "like the winds of winter howl in my\l"
	.string "bones. My head aches, I must have had a\l"
	.string "bad dream...$"

CasaAtrei_Text_OrestesKlytmnestraScene4::
# 562 "data/maps/CasaAtrei/scripts.pory"
	.string "Rest now father, your nightmare's at\n"
	.string "it's end. You have been several months\l"
	.string "under a spell but your son, and the\l"
	.string "young heroic {PLAYER}, have rescued\l"
	.string "you.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene3::
# 569 "data/maps/CasaAtrei/scripts.pory"
	.string "A spell? Impossible? How could this be?\n"
	.string "I was just getting into bed with your\l"
	.string "mother, then I don't know... My memories\l"
	.string "are confusing, icy cold and jet black....\l"
	.string "What evil witch could have done this to\l"
	.string "me?$"

CasaAtrei_Text_OrestesKlytmnestraScene5::
# 577 "data/maps/CasaAtrei/scripts.pory"
	.string "Your own wife, my mother, Klytmnestra\n"
	.string "was none other than that accursed\l"
	.string "witch who held you here entranced for\l"
	.string "all this time.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene4::
# 583 "data/maps/CasaAtrei/scripts.pory"
	.string "Klytmnestra? My wife, did this? I can't\n"
	.string "believe it! She was the love of my life!\l"
	.string "Mother of my two children...$"

CasaAtrei_Text_IphigeniaKlytmnestraScene1::
# 589 "data/maps/CasaAtrei/scripts.pory"
	.string "Orestes!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene5::
# 593 "data/maps/CasaAtrei/scripts.pory"
	.string "Iphigenia!$"

CasaAtrei_Text_IphigeniaKlytmnestraScene2::
# 597 "data/maps/CasaAtrei/scripts.pory"
	.string "How could you do this? You killed your\n"
	.string "own mother! Have you no shame?$"

CasaAtrei_Text_OrestesKlytmnestraScene6::
# 602 "data/maps/CasaAtrei/scripts.pory"
	.string "I did no such thing! My hands are\n"
	.string "blameless in mother's tragic, but well\l"
	.string "deserved, death.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene6::
# 607 "data/maps/CasaAtrei/scripts.pory"
	.string "My dearest firstborn daughter, please\n"
	.string "don't cry for losing your treacherous\l"
	.string "mother but smile for regaining your lost\l"
	.string "father. Though you have ever been more\l"
	.string "like her in similar mind, body, spirit and\l"
	.string "soul, think not that her sins must be\l"
	.string "passed to you, nor that you must do\l"
	.string "penance for the way you sided with her\l"
	.string "while I was poisoned. Instead, rejoice\l"
	.string "to see your father well, and take cheer\l"
	.string "in the restoration of your life's\l"
	.string "genitor, of your family's king.$"

CasaAtrei_Text_IphigeniaKlytmnestraScene3::
# 621 "data/maps/CasaAtrei/scripts.pory"
	.string "I'll never honor you, mother was right!\n"
	.string "We women ought to be in charge of\l"
	.string "things and one day I will see mother\l"
	.string "avenged. Until then I will curse you and\l"
	.string "your son from the oppressive prison of\l"
	.string "my room!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene7::
# 629 "data/maps/CasaAtrei/scripts.pory"
	.string "Let her grieve in peace. She will come\n"
	.string "around eventually. Now tell me, son how\l"
	.string "did you manage to break Klytmnestra's\l"
	.string "spell, and tell me of {PLAYER} who\l"
	.string "helped you do it.$"

CasaAtrei_Text_OrestesKlytmnestraScene7::
# 636 "data/maps/CasaAtrei/scripts.pory"
	.string "At first, I believed what mother told\n"
	.string "me, that you had fallen ill, but over\l"
	.string "time I grew restless and couldn't\l"
	.string "understand why I wasn't allowed to\l"
	.string "visit you. One day I heard Iphigenia\l"
	.string "boast that female sex was supreme in\l"
	.string "our house and my impatience turned to\l"
	.string "suspicion. I krept out one night, unable\l"
	.string "to sleep, and snuck into this very same\l"
	.string "bedroom where I witnessed that witch,\l"
	.string "Klytmnestra, casting black spells over\l"
	.string "your limp body. That was when I realized\l"
	.string "what had been done. For weeks I\l"
	.string "wondered what I ought to do. I knew I\l"
	.string "had to help you, but how could I justify\l"
	.string "crossing my own mother? The torment of\l"
	.string "my confusion led me to run away from\l"
	.string "home. It drove mad even to the near\l"
	.string "edge of suicide when I heard the voice\l"
	.string "of the divine call me to consult the\l"
	.string "oracle. I went upstream to the Aedes\l"
	.string "Trivis where I presented my problem to\l"
	.string "the Slowking who told me I must help you\l"
	.string "be revived but that my hand could not\l"
	.string "strike my mother's. I met young\l"
	.string "{PLAYER} there, he agreed to help, and\l"
	.string "it was him who sent Klytmnestra down to\l"
	.string "the pits of Hell and saved your life.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene8::
# 666 "data/maps/CasaAtrei/scripts.pory"
	.string "A horrible story! I'm so sorry that you\n"
	.string "were put in that position, son, but in\l"
	.string "the darkest nights do heroic actions\l"
	.string "shine brightest. Thank you, thank you\l"
	.string "both for waking me from that most\l"
	.string "deathlike sleep. Now {PLAYER}, please\l"
	.string "come here. I would introduce myself and\l"
	.string "give you my most sincere thanks.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene9::
# 676 "data/maps/CasaAtrei/scripts.pory"
	.string "Apologies for remaining in bed when I\n"
	.string "first shake your hand but the effects\l"
	.string "of the late witch's spell still linger on\l"
	.string "and make more strenuous activity\l"
	.string "impossible for now but still I must\l"
	.string "introduce myself to the one who's life I\l"
	.string "am indebted to for my freedom before I\l"
	.string "close my eyes again. I am Agamemnon,\l"
	.string "lord of the Commerce Guild, father of\l"
	.string "Orestes and resident of Albion. It is my\l"
	.string "great pleasure to meet you and I offer\l"
	.string "you my deep, sincere, heartfelt, eternal\l"
	.string "gratitude. Thank you for defeating\l"
	.string "Klytmnestra, breaking the witch's spell,\l"
	.string "and waking me I must regain my strengh,\l"
	.string "but please return after I've rested I\l"
	.string "will give to you the princely gift you've\l"
	.string "earned by your valor. Now please,\l"
	.string "excuse me boys, and let me rest.$"

CasaAtrei_Text_OrestesKlytmnestraScene8::
# 698 "data/maps/CasaAtrei/scripts.pory"
	.string "Very well, father, we'll leave and let you\n"
	.string "rest. C'mon {PLAYER}, let's leave my\l"
	.string "father alone.$"

CasaAtrei_Text_OrestesKlytmnestraScene9::
# 703 "data/maps/CasaAtrei/scripts.pory"
	.string "Thank you again, but father needs his\n"
	.string "rest. I'm sure he'll be up and feeling\l"
	.string "well soon and doubltess he will give you\l"
	.string "your gift then but until then why not\l"
	.string "let him alone, let him rest up but please\l"
	.string "do come back soon.$"

CasaAtrei_Text_OrestesBlock::
# 711 "data/maps/CasaAtrei/scripts.pory"
	.string "Father must rest now to regain his\n"
	.string "strength. Please come back later to\l"
	.string "recieve your gift.$"
