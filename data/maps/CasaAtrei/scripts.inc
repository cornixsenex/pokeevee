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
# 125 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 126 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight2, MSGBOX_YESNO
# 128 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq CasaAtrei_Script_OrestesIphegeniaFightScene_6
# 132 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceLeft
# 133 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
CasaAtrei_Script_OrestesIphegeniaFightScene_5:
# 135 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 137 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 138 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight3, MSGBOX_YESNO
# 140 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 141 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 142 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 144 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight4, MSGBOX_YESNO
# 145 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 147 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 148 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight3, MSGBOX_YESNO
# 149 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 150 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 152 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_RUN_IN_PLACE_DOWN
# 153 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 155 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 10
# 157 "data/maps/CasaAtrei/scripts.pory"
	releaseall
	end

CasaAtrei_Script_OrestesIphegeniaFightScene_2:
# 96 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceUp
	goto CasaAtrei_Script_OrestesIphegeniaFightScene_1

CasaAtrei_Script_OrestesIphegeniaFightScene_6:
# 129 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceUp
# 130 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	goto CasaAtrei_Script_OrestesIphegeniaFightScene_5


CasaAtrei_Script_TriggerKlytmnestraSceneA::
# 163 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 164 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 165 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 166 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 168 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_TriggerKlytmnestraSceneB::
# 173 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 174 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 175 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 176 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 178 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_TriggerKlytmnestraSceneC::
# 183 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 184 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 185 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 186 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 188 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_KlytmnestraScene::
# 193 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 194 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 196 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_KLYTMNESTRA, 190, 98
# 197 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_Klytmnestra1
# 198 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_KLYTMNESTRA
# 199 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 201 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 202 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 204 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_KLYTMNESTRA, Common_Movement_FaceLeft
# 205 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 207 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_KLYTMNESTRA, 190, 98
# 208 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_Klytmnestra2
# 209 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_KLYTMNESTRA
# 210 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 212 "data/maps/CasaAtrei/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 214 "data/maps/CasaAtrei/scripts.pory"
	trainerbattle_no_intro TRAINER_KLYTMNESTRA, CasaAtrei_Text_KlytmnestraLost
# 216 "data/maps/CasaAtrei/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 217 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_KLYTMNESTRA
# 218 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 0, 0
# 219 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_INVISIBLE
# 220 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_KLYTMNESTRA
# 222 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 223 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene1, MSGBOX_YESNO
# 224 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 225 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 227 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_ORESTES
# 228 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 14
# 229 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_FACE_DOWN
# 230 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_ORESTES
# 232 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkDown6
# 233 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 235 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 236 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 237 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 239 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 240 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene2, MSGBOX_YESNO
# 241 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 243 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 244 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene1, MSGBOX_YESNO
# 245 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 247 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 248 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene3, MSGBOX_YESNO
# 249 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 250 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 252 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkRight3
# 253 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 254 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 255 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkUp2
# 256 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 257 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 258 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 260 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 261 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene2, MSGBOX_YESNO
# 262 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 264 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 265 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene4, MSGBOX_YESNO
# 266 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 268 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 269 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene3, MSGBOX_YESNO
# 270 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 272 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 273 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene5, MSGBOX_YESNO
# 274 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 276 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 277 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene4, MSGBOX_YESNO
# 278 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 280 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 281 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaKlytmnestraScene1, MSGBOX_YESNO
# 282 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 283 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 285 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 286 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_AGAMEMNON, Common_Movement_ExclamationMark
# 287 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 288 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 290 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_IPHIGENIA
# 291 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 14
# 292 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 293 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_IPHIGENIA
# 295 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkDown6
# 296 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 297 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkRight2
# 298 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 300 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 301 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 302 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 304 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 305 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene5, MSGBOX_YESNO
# 306 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 308 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 309 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaKlytmnestraScene2, MSGBOX_YESNO
# 310 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 312 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 313 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene6, MSGBOX_YESNO
# 314 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 316 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 317 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene6, MSGBOX_YESNO
# 318 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 320 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 321 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaKlytmnestraScene3, MSGBOX_YESNO
# 322 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 323 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 325 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkLeft2
# 326 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 327 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkUp6
# 328 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 330 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_IPHIGENIA
# 331 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 14, 4
# 332 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 333 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_IPHIGENIA
# 335 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 336 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 337 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 339 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 340 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene7, MSGBOX_YESNO
# 341 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 343 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 344 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene7, MSGBOX_YESNO
# 345 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 347 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 348 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene8, MSGBOX_YESNO
# 349 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 350 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 352 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 353 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 354 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 355 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 356 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 357 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 360 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 99
# 361 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene9, MSGBOX_YESNO
# 362 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 364 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 365 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene8, MSGBOX_YESNO
# 366 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 367 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 369 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 370 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkDown2
# 371 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 372 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft5
# 373 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkLeft5
# 374 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 375 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp8
# 376 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkUp8
# 377 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 379 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 380 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 382 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 383 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 385 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 386 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene9, MSGBOX_YESNO
# 387 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 388 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 390 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 391 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 393 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 11
	return


CasaAtrei_Script_OrestesBlockAgamemnonRest::
# 401 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 402 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 404 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 405 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBlock, MSGBOX_YESNO
# 406 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 407 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	return


CasaAtrei_Script_Orestes::
# 416 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 10
	goto_if_eq CasaAtrei_Script_Orestes_1
	return

CasaAtrei_Script_Orestes_1:
# 417 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 418 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesDuringIphigeniaFight
# 419 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 420 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	return


CasaAtrei_Script_Iphigenia::
# 426 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 10
	goto_if_eq CasaAtrei_Script_Iphigenia_1
	return

CasaAtrei_Script_Iphigenia_1:
# 427 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 428 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaDuringIphigeniaFight
# 429 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 430 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	return


CasaAtrei_Script_Agamemnon::
	return


CasaAtrei_Text_OrestesBeforeIphegeniaFight1::
# 440 "data/maps/CasaAtrei/scripts.pory"
	.string "Oh, {PLAYER}! You made it, good! The\n"
	.string "coast seems clear but I'm not sure\l"
	.string "where 4everyone has gone. I already\l"
	.string "checked my sister's room and saw no\l"
	.string "trace of...$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight1::
# 447 "data/maps/CasaAtrei/scripts.pory"
	.string "Orestes! Stop right there!$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight2::
# 451 "data/maps/CasaAtrei/scripts.pory"
	.string "I know you come to stop our mother! I\n"
	.string "will not allow you to revive father!$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight2::
# 456 "data/maps/CasaAtrei/scripts.pory"
	.string "My purpose, Iphigenia, is plain for all\n"
	.string "to see. I will see dad rescued but fear\l"
	.string "not, I won't touch a single hair upon\l"
	.string "the foul head of that wicked witch.$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight3::
# 463 "data/maps/CasaAtrei/scripts.pory"
	.string "Be quick! Go on! Find Klytmnestra! I'll\n"
	.string "keep my sister occupied here with me.$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight4::
# 468 "data/maps/CasaAtrei/scripts.pory"
	.string "This is your final warning, dear sister,\n"
	.string "I do not wish to come to blows with you\l"
	.string "but I will do what I must in order to see\l"
	.string "mother defeated, father saved.$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight3::
# 475 "data/maps/CasaAtrei/scripts.pory"
	.string "The die is cast, foul brother Orestes. I\n"
	.string "won't let you bring harm to our mother!$"

CasaAtrei_Text_OrestesDuringIphigeniaFight::
# 480 "data/maps/CasaAtrei/scripts.pory"
	.string "Gah! What animal fights with spit, nails,\n"
	.string "and teeth?$"

CasaAtrei_Text_IphigeniaDuringIphigeniaFight::
# 484 "data/maps/CasaAtrei/scripts.pory"
	.string "What monster fights his own mom and\n"
	.string "sister?$"

CasaAtrei_Text_Klytmnestra1::
# 488 "data/maps/CasaAtrei/scripts.pory"
	.string "I've been expecting you. Come closer,\n"
	.string "boy.$"

CasaAtrei_Text_Klytmnestra2::
# 492 "data/maps/CasaAtrei/scripts.pory"
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
# 508 "data/maps/CasaAtrei/scripts.pory"
	.string "My soul is being severed from the world!$"

CasaAtrei_Text_OrestesKlytmnestraScene1::
# 512 "data/maps/CasaAtrei/scripts.pory"
	.string "You did it {PLAYER}!$"

CasaAtrei_Text_OrestesKlytmnestraScene2::
# 516 "data/maps/CasaAtrei/scripts.pory"
	.string "You broke the witch's spell and lifted\n"
	.string "the curse!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene1::
# 521 "data/maps/CasaAtrei/scripts.pory"
	.string "Where am I?$"

CasaAtrei_Text_OrestesKlytmnestraScene3::
# 525 "data/maps/CasaAtrei/scripts.pory"
	.string "Father!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene2::
# 529 "data/maps/CasaAtrei/scripts.pory"
	.string "Orestes! What happened? I feel so cold\n"
	.string "like the winds of winter howl in my\l"
	.string "bones. My head aches, I must have had a\l"
	.string "bad dream...$"

CasaAtrei_Text_OrestesKlytmnestraScene4::
# 535 "data/maps/CasaAtrei/scripts.pory"
	.string "Rest now father, your nightmare's at\n"
	.string "it's end. You have been several months\l"
	.string "under a spell but your son, and the\l"
	.string "young heroic {PLAYER}, have rescued\l"
	.string "you.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene3::
# 542 "data/maps/CasaAtrei/scripts.pory"
	.string "A spell? Impossible? How could this be?\n"
	.string "I was just getting into bed with your\l"
	.string "mother, then I don't know... My memories\l"
	.string "are confusing, icy cold and jet black....\l"
	.string "What evil witch could have done this to\l"
	.string "me?$"

CasaAtrei_Text_OrestesKlytmnestraScene5::
# 550 "data/maps/CasaAtrei/scripts.pory"
	.string "Your own wife, my mother, Klytmnestra\n"
	.string "was none other than that accursed\l"
	.string "witch who held you here entranced for\l"
	.string "all this time.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene4::
# 556 "data/maps/CasaAtrei/scripts.pory"
	.string "Klytmnestra? My wife, did this? I can't\n"
	.string "believe it! She was the love of my life!\l"
	.string "Mother of my two children...$"

CasaAtrei_Text_IphigeniaKlytmnestraScene1::
# 562 "data/maps/CasaAtrei/scripts.pory"
	.string "Orestes!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene5::
# 566 "data/maps/CasaAtrei/scripts.pory"
	.string "Iphigenia!$"

CasaAtrei_Text_IphigeniaKlytmnestraScene2::
# 570 "data/maps/CasaAtrei/scripts.pory"
	.string "How could you do this? You killed your\n"
	.string "own mother! Have you no shame?$"

CasaAtrei_Text_OrestesKlytmnestraScene6::
# 575 "data/maps/CasaAtrei/scripts.pory"
	.string "I did no such thing! My hands are\n"
	.string "blameless in mother's tragic, but well\l"
	.string "deserved, death.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene6::
# 580 "data/maps/CasaAtrei/scripts.pory"
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
# 594 "data/maps/CasaAtrei/scripts.pory"
	.string "I'll never honor you, mother was right!\n"
	.string "We women ought to be in charge of\l"
	.string "things and one day I will see mother\l"
	.string "avenged. Until then I will curse you and\l"
	.string "your son from the oppressive prison of\l"
	.string "my room!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene7::
# 602 "data/maps/CasaAtrei/scripts.pory"
	.string "Let her grieve in peace. She will come\n"
	.string "around eventually. Now tell me, son how\l"
	.string "did you manage to break Klytmnestra's\l"
	.string "spell, and tell me of {PLAYER} who\l"
	.string "helped you do it.$"

CasaAtrei_Text_OrestesKlytmnestraScene7::
# 609 "data/maps/CasaAtrei/scripts.pory"
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
# 639 "data/maps/CasaAtrei/scripts.pory"
	.string "A horrible story! I'm so sorry that you\n"
	.string "were put in that position, son, but in\l"
	.string "the darkest nights do heroic actions\l"
	.string "shine brightest. Thank you, thank you\l"
	.string "both for waking me from that most\l"
	.string "deathlike sleep. Now {PLAYER}, please\l"
	.string "come here. I would introduce myself and\l"
	.string "give you my most sincere thanks.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene9::
# 649 "data/maps/CasaAtrei/scripts.pory"
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
# 671 "data/maps/CasaAtrei/scripts.pory"
	.string "Very well, father, we'll leave and let you\n"
	.string "rest. C'mon {PLAYER}, let's leave my\l"
	.string "father alone.$"

CasaAtrei_Text_OrestesKlytmnestraScene9::
# 676 "data/maps/CasaAtrei/scripts.pory"
	.string "Thank you again, but father needs his\n"
	.string "rest. I'm sure he'll be up and feeling\l"
	.string "well soon and doubltess he will give you\l"
	.string "your gift then but until then why not\l"
	.string "let him alone, let him rest up but please\l"
	.string "do come back soon.$"

CasaAtrei_Text_OrestesBlock::
# 684 "data/maps/CasaAtrei/scripts.pory"
	.string "Father must rest now to regain his\n"
	.string "strength. Please come back later to\l"
	.string "recieve your gift.$"
