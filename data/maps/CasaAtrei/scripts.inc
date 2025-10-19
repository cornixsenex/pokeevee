CasaAtrei_MapScripts::
# 6 "data/maps/CasaAtrei/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 32 "data/maps/CasaAtrei/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 11
	goto_if_lt CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 9
	goto_if_eq CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 10
	goto_if_eq CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 11
	goto_if_eq CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 23 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 12
	goto_if_eq CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_TEMP_D, 1
	goto CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_ShowOrestesBeforeIphigeniaFight
	goto CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 16 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_ShowOrestesDuringIphigeniaFight
	goto CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 20 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_SetupAgamemnonKitchen
	goto CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 24 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_ShowAgamemnonKitchen
	return

CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME:
# 33 "data/maps/CasaAtrei/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 34 "data/maps/CasaAtrei/scripts.pory"
	hideobjectat LOCALID_CASAATREI_KLYTMNESTRA, MAP_CASA_ATREI
# 35 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_KLYTMNESTRA
	return


CasaAtrei_Script_ShowOrestesBeforeIphigeniaFight::
# 41 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 8
# 42 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_LOOK_AROUND
# 43 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 15
# 44 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 45 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 15, 18
# 46 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_FACE_DOWN
# 47 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 13, 20
# 48 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_FACE_DOWN
	return


CasaAtrei_Script_ShowOrestesDuringIphigeniaFight::
# 53 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 8
# 54 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_RUN_IN_PLACE_DOWN
# 55 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 9
# 56 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 57 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 15, 18
# 58 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_FACE_DOWN
# 59 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 13, 20
# 60 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_FACE_DOWN
	return


CasaAtrei_Script_SetupAgamemnonKitchen::
# 66 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 12
# 68 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_ShowAgamemnonKitchen
	return


CasaAtrei_Script_ShowAgamemnonKitchen::
# 73 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 6, 4
# 74 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_FACE_LEFT
# 75 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 6, 5
# 76 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_FACE_LEFT
# 77 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 14, 4
# 78 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 79 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_MAID, 9, 7
# 80 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_MAID, MOVEMENT_TYPE_WANDER_AROUND
	return


CasaAtrei_Script_OrestesIphigeniaTriggerA::
# 86 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 88 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 89 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 91 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 92 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 93 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 94 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 96 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphigeniaTriggerB::
# 100 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 102 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 103 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 105 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 106 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 108 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphigeniaTriggerC::
# 112 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 114 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 115 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 117 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 118 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 120 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphegeniaFightScene::
# 125 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 126 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 128 "data/maps/CasaAtrei/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 129 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq CasaAtrei_Script_OrestesIphegeniaFightScene_2
# 132 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceLeft
CasaAtrei_Script_OrestesIphegeniaFightScene_1:
# 134 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 136 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 137 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight1, MSGBOX_YESNO
# 138 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 140 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 141 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight1, MSGBOX_YESNO
# 142 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 143 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 145 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 146 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 147 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 149 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 150 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 151 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 153 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkUp6
# 154 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 156 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 157 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight2, MSGBOX_YESNO
# 158 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 159 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 160 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight2, MSGBOX_YESNO
# 162 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq CasaAtrei_Script_OrestesIphegeniaFightScene_6
# 166 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceLeft
# 167 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
CasaAtrei_Script_OrestesIphegeniaFightScene_5:
# 169 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 171 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 172 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight3, MSGBOX_YESNO
# 174 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 175 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 176 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 178 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight4, MSGBOX_YESNO
# 179 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 181 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 182 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight3, MSGBOX_YESNO
# 183 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 184 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 186 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_RUN_IN_PLACE_DOWN
# 187 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 189 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 10
# 191 "data/maps/CasaAtrei/scripts.pory"
	releaseall
	end

CasaAtrei_Script_OrestesIphegeniaFightScene_2:
# 130 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceUp
	goto CasaAtrei_Script_OrestesIphegeniaFightScene_1

CasaAtrei_Script_OrestesIphegeniaFightScene_6:
# 163 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceUp
# 164 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	goto CasaAtrei_Script_OrestesIphegeniaFightScene_5


CasaAtrei_Script_TriggerKlytmnestraSceneA::
# 197 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 198 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 199 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 200 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 202 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_TriggerKlytmnestraSceneB::
# 207 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 208 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 209 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 210 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 212 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_TriggerKlytmnestraSceneC::
# 217 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 218 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 219 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 220 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 222 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_KlytmnestraScene::
# 227 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 228 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 230 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_KLYTMNESTRA, 190, 98
# 231 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_Klytmnestra1
# 232 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_KLYTMNESTRA
# 233 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 235 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 236 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 238 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_KLYTMNESTRA, Common_Movement_FaceLeft
# 239 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 241 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_KLYTMNESTRA, 190, 98
# 242 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_Klytmnestra2
# 243 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_KLYTMNESTRA
# 244 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 246 "data/maps/CasaAtrei/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 248 "data/maps/CasaAtrei/scripts.pory"
	trainerbattle_no_intro TRAINER_KLYTMNESTRA, CasaAtrei_Text_KlytmnestraLost
# 250 "data/maps/CasaAtrei/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 251 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_KLYTMNESTRA
# 252 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 0, 0
# 253 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_INVISIBLE
# 254 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_KLYTMNESTRA
# 256 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 257 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene1, MSGBOX_YESNO
# 258 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 259 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 261 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_ORESTES
# 262 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 14
# 263 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_FACE_DOWN
# 264 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_ORESTES
# 266 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkDown6
# 267 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 269 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 270 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 271 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 273 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 274 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene2, MSGBOX_YESNO
# 275 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 277 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 278 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene1, MSGBOX_YESNO
# 279 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 281 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 282 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene3, MSGBOX_YESNO
# 283 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 284 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 286 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkRight3
# 287 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 288 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 289 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkUp2
# 290 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 291 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 292 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 294 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 295 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene2, MSGBOX_YESNO
# 296 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 298 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 299 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene4, MSGBOX_YESNO
# 300 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 302 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 303 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene3, MSGBOX_YESNO
# 304 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 306 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 307 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene5, MSGBOX_YESNO
# 308 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 310 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 311 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene4, MSGBOX_YESNO
# 312 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 314 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 315 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaKlytmnestraScene1, MSGBOX_YESNO
# 316 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 317 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 319 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 320 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_AGAMEMNON, Common_Movement_ExclamationMark
# 321 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 322 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 324 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_IPHIGENIA
# 325 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 14
# 326 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 327 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_IPHIGENIA
# 329 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkDown6
# 330 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 331 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkRight2
# 332 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 334 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 335 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 336 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 338 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 339 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene5, MSGBOX_YESNO
# 340 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 342 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 343 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaKlytmnestraScene2, MSGBOX_YESNO
# 344 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 346 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 347 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene6, MSGBOX_YESNO
# 348 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 350 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 351 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene6, MSGBOX_YESNO
# 352 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 354 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 355 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaKlytmnestraScene3, MSGBOX_YESNO
# 356 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 357 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 359 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkLeft2
# 360 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 361 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkUp6
# 362 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 364 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_IPHIGENIA
# 365 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 14, 4
# 366 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 367 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_IPHIGENIA
# 369 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 370 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 371 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 373 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 374 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene7, MSGBOX_YESNO
# 375 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 377 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 378 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene7, MSGBOX_YESNO
# 379 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 381 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 382 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene8, MSGBOX_YESNO
# 383 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 384 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 386 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 387 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 388 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 389 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 390 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 391 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 394 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 99
# 395 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene9, MSGBOX_YESNO
# 396 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 398 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 399 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene8, MSGBOX_YESNO
# 400 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 401 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 403 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_MAID
# 404 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_MAID, 9, 7
# 405 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_MAID, MOVEMENT_TYPE_WANDER_AROUND
# 406 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_MAID
# 408 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_TEMP_D, 0
# 410 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 411 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkDown2
# 412 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 413 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft5
# 414 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkLeft5
# 415 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 416 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp8
# 417 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkUp8
# 418 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 420 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 421 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 423 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 424 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 426 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 427 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene9, MSGBOX_YESNO
# 428 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 429 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 431 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 432 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 434 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 11
	return


CasaAtrei_Script_OrestesBlockAgamemnonRest::
# 442 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 443 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 445 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 446 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBlock, MSGBOX_YESNO
# 447 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 448 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	return


CasaAtrei_Script_DoorBlock::
# 456 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 457 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 459 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_DoorBlock
# 460 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 462 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 463 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
	end


CasaAtrei_Script_Orestes::
# 469 "data/maps/CasaAtrei/scripts.pory"
	switch VAR_ORESTES_STATE
# 471 "data/maps/CasaAtrei/scripts.pory"
	case 10, CasaAtrei_Script_Orestes_3
# 477 "data/maps/CasaAtrei/scripts.pory"
	case 11, CasaAtrei_Script_Orestes_4
# 489 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Script_Orestes_Text_0
# 490 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	end

CasaAtrei_Script_Orestes_1:
	end

CasaAtrei_Script_Orestes_3:
# 472 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 473 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesDuringIphigeniaFight
# 474 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 475 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	goto CasaAtrei_Script_Orestes_1

CasaAtrei_Script_Orestes_4:
# 478 "data/maps/CasaAtrei/scripts.pory"
	faceplayer
# 479 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 480 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBlock
# 481 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 482 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	goto CasaAtrei_Script_Orestes_1


CasaAtrei_Script_Iphigenia::
# 497 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 499 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 10
	goto_if_eq CasaAtrei_Script_Iphigenia_2
# 504 "data/maps/CasaAtrei/scripts.pory"
	faceplayer
# 505 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaInRoom
# 506 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_FaceDown
# 507 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
CasaAtrei_Script_Iphigenia_1:
# 509 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 510 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	end

CasaAtrei_Script_Iphigenia_2:
# 500 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaDuringIphigeniaFight
	goto CasaAtrei_Script_Iphigenia_1


CasaAtrei_Script_Agamemnon::
# 516 "data/maps/CasaAtrei/scripts.pory"
	goto_if_unset FLAG_CASAATREI_AGAMEMNONGIFT, CasaAtrei_Script_Agamemnon_1
	return

CasaAtrei_Script_Agamemnon_1:
# 518 "data/maps/CasaAtrei/scripts.pory"
	setflag FLAG_CASAATREI_AGAMEMNONGIFT
# 520 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 521 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonGift1, MSGBOX_YESNO
# 522 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 524 "data/maps/CasaAtrei/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 526 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 527 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonGift2, MSGBOX_YESNO
# 528 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 530 "data/maps/CasaAtrei/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_AGAMEMNON
# 531 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasaAtrei_Script_Agamemnon_3
	return

CasaAtrei_Script_Agamemnon_3:
# 532 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_AgamemnonInvite
	return


CasaAtrei_Script_AgamemnonInvite::
	return


CasaAtrei_Script_Maid::
# 545 "data/maps/CasaAtrei/scripts.pory"
	switch VAR_ORESTES_STATE
# 547 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Script_Orestes_Text_0
# 548 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	end


CasaAtrei_Script_Orestes_Text_0:
# 489 "data/maps/CasaAtrei/scripts.pory"
	.string "ERROR VAR_ORESTES_STATE OOB$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight1::
# 556 "data/maps/CasaAtrei/scripts.pory"
	.string "Oh, {PLAYER}! You made it, good! The\n"
	.string "coast seems clear but I'm not sure\l"
	.string "where 4everyone has gone. I already\l"
	.string "checked my sister's room and saw no\l"
	.string "trace of...$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight1::
# 563 "data/maps/CasaAtrei/scripts.pory"
	.string "Orestes! Stop right there!$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight2::
# 567 "data/maps/CasaAtrei/scripts.pory"
	.string "I know you come to stop our mother! I\n"
	.string "will not allow you to revive father!$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight2::
# 572 "data/maps/CasaAtrei/scripts.pory"
	.string "My purpose, Iphigenia, is plain for all\n"
	.string "to see. I will see dad rescued but fear\l"
	.string "not, I won't touch a single hair upon\l"
	.string "the foul head of that wicked witch.$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight3::
# 579 "data/maps/CasaAtrei/scripts.pory"
	.string "Be quick! Go on! Find Klytmnestra! I'll\n"
	.string "keep my sister occupied here with me.$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight4::
# 584 "data/maps/CasaAtrei/scripts.pory"
	.string "This is your final warning, dear sister,\n"
	.string "I do not wish to come to blows with you\l"
	.string "but I will do what I must in order to see\l"
	.string "mother defeated, father saved.$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight3::
# 591 "data/maps/CasaAtrei/scripts.pory"
	.string "The die is cast, foul brother Orestes. I\n"
	.string "won't let you bring harm to our mother!$"

CasaAtrei_Text_OrestesDuringIphigeniaFight::
# 596 "data/maps/CasaAtrei/scripts.pory"
	.string "Gah! What animal fights with spit, nails,\n"
	.string "and teeth?$"

CasaAtrei_Text_IphigeniaDuringIphigeniaFight::
# 600 "data/maps/CasaAtrei/scripts.pory"
	.string "What monster fights his own mom and\n"
	.string "sister?$"

CasaAtrei_Text_Klytmnestra1::
# 604 "data/maps/CasaAtrei/scripts.pory"
	.string "I've been expecting you. Come closer,\n"
	.string "boy.$"

CasaAtrei_Text_Klytmnestra2::
# 608 "data/maps/CasaAtrei/scripts.pory"
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
# 624 "data/maps/CasaAtrei/scripts.pory"
	.string "My soul is being severed from the world!$"

CasaAtrei_Text_OrestesKlytmnestraScene1::
# 628 "data/maps/CasaAtrei/scripts.pory"
	.string "You did it {PLAYER}!$"

CasaAtrei_Text_OrestesKlytmnestraScene2::
# 632 "data/maps/CasaAtrei/scripts.pory"
	.string "You broke the witch's spell and lifted\n"
	.string "the curse!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene1::
# 637 "data/maps/CasaAtrei/scripts.pory"
	.string "Where am I?$"

CasaAtrei_Text_OrestesKlytmnestraScene3::
# 641 "data/maps/CasaAtrei/scripts.pory"
	.string "Father!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene2::
# 645 "data/maps/CasaAtrei/scripts.pory"
	.string "Orestes! What happened? I feel so cold\n"
	.string "like the winds of winter howl in my\l"
	.string "bones. My head aches, I must have had a\l"
	.string "bad dream...$"

CasaAtrei_Text_OrestesKlytmnestraScene4::
# 651 "data/maps/CasaAtrei/scripts.pory"
	.string "Rest now father, your nightmare's at\n"
	.string "it's end. You have been several months\l"
	.string "under a spell but your son, and the\l"
	.string "young heroic {PLAYER}, have rescued\l"
	.string "you.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene3::
# 658 "data/maps/CasaAtrei/scripts.pory"
	.string "A spell? Impossible? How could this be?\n"
	.string "I was just getting into bed with your\l"
	.string "mother, then I don't know... My memories\l"
	.string "are confusing, icy cold and jet black....\l"
	.string "What evil witch could have done this to\l"
	.string "me?$"

CasaAtrei_Text_OrestesKlytmnestraScene5::
# 666 "data/maps/CasaAtrei/scripts.pory"
	.string "Your own wife, my mother, Klytmnestra\n"
	.string "was none other than that accursed\l"
	.string "witch who held you here entranced for\l"
	.string "all this time.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene4::
# 672 "data/maps/CasaAtrei/scripts.pory"
	.string "Klytmnestra? My wife, did this? I can't\n"
	.string "believe it! She was the love of my life!\l"
	.string "Mother of my two children...$"

CasaAtrei_Text_IphigeniaKlytmnestraScene1::
# 678 "data/maps/CasaAtrei/scripts.pory"
	.string "Orestes!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene5::
# 682 "data/maps/CasaAtrei/scripts.pory"
	.string "Iphigenia!$"

CasaAtrei_Text_IphigeniaKlytmnestraScene2::
# 686 "data/maps/CasaAtrei/scripts.pory"
	.string "How could you do this? You killed your\n"
	.string "own mother! Have you no shame?$"

CasaAtrei_Text_OrestesKlytmnestraScene6::
# 691 "data/maps/CasaAtrei/scripts.pory"
	.string "I did no such thing! My hands are\n"
	.string "blameless in mother's tragic, but well\l"
	.string "deserved, death.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene6::
# 696 "data/maps/CasaAtrei/scripts.pory"
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
# 710 "data/maps/CasaAtrei/scripts.pory"
	.string "I'll never honor you, mother was right!\n"
	.string "We women ought to be in charge of\l"
	.string "things and one day I will see mother\l"
	.string "avenged. Until then I will curse you and\l"
	.string "your son from the oppressive prison of\l"
	.string "my room!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene7::
# 718 "data/maps/CasaAtrei/scripts.pory"
	.string "Let her grieve in peace. She will come\n"
	.string "around eventually. Now tell me, son how\l"
	.string "did you manage to break Klytmnestra's\l"
	.string "spell, and tell me of {PLAYER} who\l"
	.string "helped you do it.$"

CasaAtrei_Text_OrestesKlytmnestraScene7::
# 725 "data/maps/CasaAtrei/scripts.pory"
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
# 755 "data/maps/CasaAtrei/scripts.pory"
	.string "A horrible story! I'm so sorry that you\n"
	.string "were put in that position, son, but in\l"
	.string "the darkest nights do heroic actions\l"
	.string "shine brightest. Thank you, thank you\l"
	.string "both for waking me from that most\l"
	.string "deathlike sleep. Now {PLAYER}, please\l"
	.string "come here. I would introduce myself and\l"
	.string "give you my most sincere thanks.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene9::
# 765 "data/maps/CasaAtrei/scripts.pory"
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
# 787 "data/maps/CasaAtrei/scripts.pory"
	.string "Very well, father, we'll leave and let you\n"
	.string "rest. C'mon {PLAYER}, let's leave my\l"
	.string "father alone.$"

CasaAtrei_Text_OrestesKlytmnestraScene9::
# 792 "data/maps/CasaAtrei/scripts.pory"
	.string "Thank you again, but father needs his\n"
	.string "rest. I'm sure he'll be up and feeling\l"
	.string "well soon and doubltess he will give you\l"
	.string "your gift then but until then why not\l"
	.string "let him alone, let him rest up but please\l"
	.string "do come back soon.$"

CasaAtrei_Text_OrestesBlock::
# 800 "data/maps/CasaAtrei/scripts.pory"
	.string "Father must rest now to regain his\n"
	.string "strength. Please come back later to\l"
	.string "recieve your gift.$"

CasaAtrei_Text_DoorBlock::
# 805 "data/maps/CasaAtrei/scripts.pory"
	.string "The door is blocked from the outside.$"

CasaAtrei_Text_IphigeniaInRoom::
# 809 "data/maps/CasaAtrei/scripts.pory"
	.string "You men are all the same, ignorant pigs!\n"
	.string "One day I'll run away and go somewhere\l"
	.string "without any men, a real paradise!$"

CasaAtrei_Text_AgamemnonGift1::
# 815 "data/maps/CasaAtrei/scripts.pory"
	.string "$"

CasaAtrei_Text_AgamemnonGift2::
# 819 "data/maps/CasaAtrei/scripts.pory"
	.string "$"
