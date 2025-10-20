CasaAtrei_MapScripts::
# 6 "data/maps/CasaAtrei/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 34 "data/maps/CasaAtrei/scripts.pory"
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
	goto_if_eq CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 27 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 12
	goto_if_eq CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
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

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 24 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_ShowAgamemnonKitchen
	goto CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

CasaAtrei_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 28 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_ShowAgamemnonDeparted
	return

CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME:
# 35 "data/maps/CasaAtrei/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

CasaAtrei_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 36 "data/maps/CasaAtrei/scripts.pory"
	hideobjectat LOCALID_CASAATREI_KLYTMNESTRA, MAP_CASA_ATREI
# 37 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_KLYTMNESTRA
	return


CasaAtrei_Script_ShowOrestesBeforeIphigeniaFight::
# 43 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 8
# 44 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_LOOK_AROUND
# 45 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 15
# 46 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 47 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 15, 18
# 48 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_FACE_DOWN
# 49 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 13, 20
# 50 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_FACE_DOWN
	return


CasaAtrei_Script_ShowOrestesDuringIphigeniaFight::
# 55 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 8
# 56 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_RUN_IN_PLACE_DOWN
# 57 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 9
# 58 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 59 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 15, 18
# 60 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_FACE_DOWN
# 61 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 13, 20
# 62 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_FACE_DOWN
	return


CasaAtrei_Script_SetupAgamemnonKitchen::
# 68 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 12
# 70 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_ShowAgamemnonKitchen
	return


CasaAtrei_Script_ShowAgamemnonKitchen::
# 75 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 6, 4
# 76 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_FACE_LEFT
# 77 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 6, 5
# 78 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_FACE_LEFT
# 79 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 14, 4
# 80 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 81 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_MAID, 9, 7
# 82 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_MAID, MOVEMENT_TYPE_WANDER_AROUND
	return


CasaAtrei_Script_ShowAgamemnonDeparted::
# 87 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 6, 5
# 88 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_FACE_LEFT
# 89 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 14, 4
# 90 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 91 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_MAID, 9, 7
# 92 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_MAID, MOVEMENT_TYPE_WANDER_AROUND
	return


CasaAtrei_Script_OrestesIphigeniaTriggerA::
# 97 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 99 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 100 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 102 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 103 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 104 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 105 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 107 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphigeniaTriggerB::
# 111 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 113 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 114 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 116 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 117 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 119 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphigeniaTriggerC::
# 123 "data/maps/CasaAtrei/scripts.pory"
	lockall
# 125 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 126 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 128 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 129 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 131 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_OrestesIphegeniaFightScene
	return


CasaAtrei_Script_OrestesIphegeniaFightScene::
# 136 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 137 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 139 "data/maps/CasaAtrei/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 140 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq CasaAtrei_Script_OrestesIphegeniaFightScene_2
# 143 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceLeft
CasaAtrei_Script_OrestesIphegeniaFightScene_1:
# 145 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 147 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 148 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight1, MSGBOX_YESNO
# 149 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 151 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 152 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight1, MSGBOX_YESNO
# 153 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 154 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 156 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 157 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 158 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 160 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 161 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 162 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 164 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkUp6
# 165 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 167 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 168 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight2, MSGBOX_YESNO
# 169 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 170 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 171 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight2, MSGBOX_YESNO
# 173 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq CasaAtrei_Script_OrestesIphegeniaFightScene_6
# 177 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceLeft
# 178 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
CasaAtrei_Script_OrestesIphegeniaFightScene_5:
# 180 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 182 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 183 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight3, MSGBOX_YESNO
# 185 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 186 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 187 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 189 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBeforeIphegeniaFight4, MSGBOX_YESNO
# 190 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 192 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 193 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaBeforeIphegeniaFight3, MSGBOX_YESNO
# 194 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 195 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 197 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_RUN_IN_PLACE_DOWN
# 198 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 200 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 10
# 202 "data/maps/CasaAtrei/scripts.pory"
	releaseall
	end

CasaAtrei_Script_OrestesIphegeniaFightScene_2:
# 141 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceUp
	goto CasaAtrei_Script_OrestesIphegeniaFightScene_1

CasaAtrei_Script_OrestesIphegeniaFightScene_6:
# 174 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceUp
# 175 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	goto CasaAtrei_Script_OrestesIphegeniaFightScene_5


CasaAtrei_Script_TriggerKlytmnestraSceneA::
# 208 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 209 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 210 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 211 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 213 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_TriggerKlytmnestraSceneB::
# 218 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 219 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 220 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 221 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 223 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_TriggerKlytmnestraSceneC::
# 228 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 229 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 230 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 231 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 233 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_KlytmnestraScene
	return


CasaAtrei_Script_KlytmnestraScene::
# 238 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 239 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 241 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_KLYTMNESTRA, 190, 98
# 242 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_Klytmnestra1
# 243 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_KLYTMNESTRA
# 244 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 246 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 247 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 249 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_KLYTMNESTRA, Common_Movement_FaceLeft
# 250 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 252 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_KLYTMNESTRA, 190, 98
# 253 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_Klytmnestra2
# 254 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_KLYTMNESTRA
# 255 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 257 "data/maps/CasaAtrei/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 259 "data/maps/CasaAtrei/scripts.pory"
	trainerbattle_no_intro TRAINER_KLYTMNESTRA, CasaAtrei_Text_KlytmnestraLost
# 261 "data/maps/CasaAtrei/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 262 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_KLYTMNESTRA
# 263 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_KLYTMNESTRA, 0, 0
# 264 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_KLYTMNESTRA, MOVEMENT_TYPE_INVISIBLE
# 265 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_KLYTMNESTRA
# 267 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 268 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene1, MSGBOX_YESNO
# 269 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 270 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 272 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_ORESTES
# 273 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_ORESTES, 11, 14
# 274 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_ORESTES, MOVEMENT_TYPE_FACE_DOWN
# 275 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_ORESTES
# 277 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkDown6
# 278 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 280 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 281 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 282 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 284 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 285 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene2, MSGBOX_YESNO
# 286 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 288 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 289 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene1, MSGBOX_YESNO
# 290 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 292 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 293 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene3, MSGBOX_YESNO
# 294 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 295 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 297 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkRight3
# 298 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 299 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 300 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkUp2
# 301 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 302 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 303 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 305 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 306 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene2, MSGBOX_YESNO
# 307 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 309 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 310 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene4, MSGBOX_YESNO
# 311 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 313 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 314 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene3, MSGBOX_YESNO
# 315 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 317 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 318 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene5, MSGBOX_YESNO
# 319 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 321 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 322 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene4, MSGBOX_YESNO
# 323 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 325 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 326 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaKlytmnestraScene1, MSGBOX_YESNO
# 327 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 328 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 330 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_ExclamationMark
# 331 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_AGAMEMNON, Common_Movement_ExclamationMark
# 332 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 333 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 335 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_IPHIGENIA
# 336 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 11, 14
# 337 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 338 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_IPHIGENIA
# 340 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkDown6
# 341 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 342 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkRight2
# 343 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 345 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceDown
# 346 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 347 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 349 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 350 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene5, MSGBOX_YESNO
# 351 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 353 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 354 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaKlytmnestraScene2, MSGBOX_YESNO
# 355 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 357 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 358 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene6, MSGBOX_YESNO
# 359 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 361 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 362 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene6, MSGBOX_YESNO
# 363 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 365 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 366 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaKlytmnestraScene3, MSGBOX_YESNO
# 367 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 368 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 370 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkLeft2
# 371 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 372 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_WalkUp6
# 373 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 375 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_IPHIGENIA
# 376 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_IPHIGENIA, 14, 4
# 377 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_IPHIGENIA, MOVEMENT_TYPE_FACE_DOWN
# 378 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_IPHIGENIA
# 380 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 381 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 382 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 384 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 385 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene7, MSGBOX_YESNO
# 386 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 388 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 389 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene7, MSGBOX_YESNO
# 390 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 392 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 393 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene8, MSGBOX_YESNO
# 394 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 395 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 397 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 398 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 399 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 400 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 401 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 402 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 405 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 99
# 406 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonKlytmnestraScene9, MSGBOX_YESNO
# 407 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 409 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 410 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene8, MSGBOX_YESNO
# 411 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 412 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 414 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_MAID
# 415 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_MAID, 9, 7
# 416 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_MAID, MOVEMENT_TYPE_WANDER_AROUND
# 417 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_MAID
# 419 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_TEMP_D, 0
# 421 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 422 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkDown2
# 423 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 424 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft5
# 425 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkLeft5
# 426 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 427 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp8
# 428 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_WalkUp8
# 429 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 431 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 432 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 434 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_ORESTES, Common_Movement_FaceRight
# 435 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 437 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 438 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesKlytmnestraScene9, MSGBOX_YESNO
# 439 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 440 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 442 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 443 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 445 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 11
	return


CasaAtrei_Script_OrestesBlockAgamemnonRest::
# 453 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 454 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 456 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 457 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBlock, MSGBOX_YESNO
# 458 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 459 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	return


CasaAtrei_Script_DoorBlock::
# 467 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 468 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 470 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_DoorBlock
# 471 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 473 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 474 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
	end


CasaAtrei_Script_Orestes::
# 480 "data/maps/CasaAtrei/scripts.pory"
	switch VAR_ORESTES_STATE
# 482 "data/maps/CasaAtrei/scripts.pory"
	case 10, CasaAtrei_Script_Orestes_3
# 488 "data/maps/CasaAtrei/scripts.pory"
	case 11, CasaAtrei_Script_Orestes_4
# 500 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Script_Orestes_Text_0
# 501 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	end

CasaAtrei_Script_Orestes_1:
	end

CasaAtrei_Script_Orestes_3:
# 483 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 484 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesDuringIphigeniaFight
# 485 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 486 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	goto CasaAtrei_Script_Orestes_1

CasaAtrei_Script_Orestes_4:
# 489 "data/maps/CasaAtrei/scripts.pory"
	faceplayer
# 490 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 491 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesBlock
# 492 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 493 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	goto CasaAtrei_Script_Orestes_1


CasaAtrei_Script_Iphigenia::
# 508 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 510 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 10
	goto_if_eq CasaAtrei_Script_Iphigenia_2
# 515 "data/maps/CasaAtrei/scripts.pory"
	faceplayer
# 516 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaInRoom
# 517 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_IPHIGENIA, Common_Movement_FaceDown
# 518 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
CasaAtrei_Script_Iphigenia_1:
# 520 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 521 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	end

CasaAtrei_Script_Iphigenia_2:
# 511 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaDuringIphigeniaFight
	goto CasaAtrei_Script_Iphigenia_1


CasaAtrei_Script_Agamemnon::
# 526 "data/maps/CasaAtrei/scripts.pory"
	faceplayer
# 527 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 529 "data/maps/CasaAtrei/scripts.pory"
	goto_if_unset FLAG_CASAATREI_AGAMEMNONGIFT, CasaAtrei_Script_Agamemnon_1
# 551 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonAfterGift
# 552 "data/maps/CasaAtrei/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_AGAMEMNON
# 553 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasaAtrei_Script_Agamemnon_7
# 556 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 557 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	end

CasaAtrei_Script_Agamemnon_1:
# 531 "data/maps/CasaAtrei/scripts.pory"
	setflag FLAG_CASAATREI_AGAMEMNONGIFT
# 533 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonGift1, MSGBOX_YESNO
# 534 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 536 "data/maps/CasaAtrei/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 538 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 539 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonGift2
# 541 "data/maps/CasaAtrei/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_AGAMEMNON
# 542 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasaAtrei_Script_Agamemnon_4
# 546 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 547 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	end

CasaAtrei_Script_Agamemnon_4:
# 543 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_AgamemnonInvite
	return

CasaAtrei_Script_Agamemnon_7:
# 554 "data/maps/CasaAtrei/scripts.pory"
	call CasaAtrei_Script_AgamemnonInvite
	return


CasaAtrei_Script_AgamemnonInvite::
# 565 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonInvite1
# 566 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 568 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_GaveInvite
# 570 "data/maps/CasaAtrei/scripts.pory"
	removeitem ITEM_WEDDING_INVITATION_AGAMEMNON
# 572 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_AGAMEMNON, Common_Movement_ExclamationMark
# 573 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 575 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_AGAMEMNON, 190, 98
# 576 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_AgamemnonInvite1
# 577 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_AGAMEMNON
# 578 "data/maps/CasaAtrei/scripts.pory"
	closemessage
# 580 "data/maps/CasaAtrei/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 581 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq CasaAtrei_Script_AgamemnonInvite_2
# 593 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_AGAMEMNON, Common_Movement_WalkDown5
# 594 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 595 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_AGAMEMNON, Common_Movement_WalkLeft
# 596 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 597 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_AGAMEMNON, Common_Movement_WalkDown
# 598 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
CasaAtrei_Script_AgamemnonInvite_1:
# 600 "data/maps/CasaAtrei/scripts.pory"
	removeobject LOCALID_CASAATREI_AGAMEMNON
# 601 "data/maps/CasaAtrei/scripts.pory"
	setobjectxyperm LOCALID_CASAATREI_AGAMEMNON, 0, 0
# 602 "data/maps/CasaAtrei/scripts.pory"
	setobjectmovementtype LOCALID_CASAATREI_AGAMEMNON, MOVEMENT_TYPE_INVISIBLE
# 603 "data/maps/CasaAtrei/scripts.pory"
	addobject LOCALID_CASAATREI_AGAMEMNON
# 605 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 13
	end

CasaAtrei_Script_AgamemnonInvite_2:
# 582 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_AGAMEMNON, Common_Movement_WalkUp2
# 583 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 584 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_AGAMEMNON, Common_Movement_WalkRight
# 585 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 586 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_AGAMEMNON, Common_Movement_WalkDown5
# 587 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 588 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_AGAMEMNON, Common_Movement_WalkLeft2
# 589 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
# 590 "data/maps/CasaAtrei/scripts.pory"
	applymovement LOCALID_CASAATREI_AGAMEMNON, Common_Movement_WalkDown2
# 591 "data/maps/CasaAtrei/scripts.pory"
	waitmovement 0
	goto CasaAtrei_Script_AgamemnonInvite_1


CasaAtrei_Script_Maid::
# 611 "data/maps/CasaAtrei/scripts.pory"
	switch VAR_ORESTES_STATE
# 613 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Script_Orestes_Text_0
# 614 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	end


CasaAtrei_Script_Orestes_Text_0:
# 500 "data/maps/CasaAtrei/scripts.pory"
	.string "ERROR VAR_ORESTES_STATE OOB$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight1::
# 622 "data/maps/CasaAtrei/scripts.pory"
	.string "Oh, {PLAYER}! You made it, good! The\n"
	.string "coast seems clear but I'm not sure\l"
	.string "where 4everyone has gone. I already\l"
	.string "checked my sister's room and saw no\l"
	.string "trace of...$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight1::
# 629 "data/maps/CasaAtrei/scripts.pory"
	.string "Orestes! Stop right there!$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight2::
# 633 "data/maps/CasaAtrei/scripts.pory"
	.string "I know you come to stop our mother! I\n"
	.string "will not allow you to revive father!$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight2::
# 638 "data/maps/CasaAtrei/scripts.pory"
	.string "My purpose, Iphigenia, is plain for all\n"
	.string "to see. I will see dad rescued but fear\l"
	.string "not, I won't touch a single hair upon\l"
	.string "the foul head of that wicked witch.$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight3::
# 645 "data/maps/CasaAtrei/scripts.pory"
	.string "Be quick! Go on! Find Klytmnestra! I'll\n"
	.string "keep my sister occupied here with me.$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight4::
# 650 "data/maps/CasaAtrei/scripts.pory"
	.string "This is your final warning, dear sister,\n"
	.string "I do not wish to come to blows with you\l"
	.string "but I will do what I must in order to see\l"
	.string "mother defeated, father saved.$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight3::
# 657 "data/maps/CasaAtrei/scripts.pory"
	.string "The die is cast, foul brother Orestes. I\n"
	.string "won't let you bring harm to our mother!$"

CasaAtrei_Text_OrestesDuringIphigeniaFight::
# 662 "data/maps/CasaAtrei/scripts.pory"
	.string "Gah! What animal fights with spit, nails,\n"
	.string "and teeth?$"

CasaAtrei_Text_IphigeniaDuringIphigeniaFight::
# 666 "data/maps/CasaAtrei/scripts.pory"
	.string "What monster fights his own mom and\n"
	.string "sister?$"

CasaAtrei_Text_Klytmnestra1::
# 670 "data/maps/CasaAtrei/scripts.pory"
	.string "I've been expecting you. Come closer,\n"
	.string "boy.$"

CasaAtrei_Text_Klytmnestra2::
# 674 "data/maps/CasaAtrei/scripts.pory"
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
# 690 "data/maps/CasaAtrei/scripts.pory"
	.string "My soul is being severed from the world!$"

CasaAtrei_Text_OrestesKlytmnestraScene1::
# 694 "data/maps/CasaAtrei/scripts.pory"
	.string "You did it {PLAYER}!$"

CasaAtrei_Text_OrestesKlytmnestraScene2::
# 698 "data/maps/CasaAtrei/scripts.pory"
	.string "You broke the witch's spell and lifted\n"
	.string "the curse!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene1::
# 703 "data/maps/CasaAtrei/scripts.pory"
	.string "Where am I?$"

CasaAtrei_Text_OrestesKlytmnestraScene3::
# 707 "data/maps/CasaAtrei/scripts.pory"
	.string "Father!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene2::
# 711 "data/maps/CasaAtrei/scripts.pory"
	.string "Orestes! What happened? I feel so cold\n"
	.string "like the winds of winter howl in my\l"
	.string "bones. My head aches, I must have had a\l"
	.string "bad dream...$"

CasaAtrei_Text_OrestesKlytmnestraScene4::
# 717 "data/maps/CasaAtrei/scripts.pory"
	.string "Rest now father, your nightmare's at\n"
	.string "it's end. You have been several months\l"
	.string "under a spell but your son, and the\l"
	.string "young heroic {PLAYER}, have rescued\l"
	.string "you.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene3::
# 724 "data/maps/CasaAtrei/scripts.pory"
	.string "A spell? Impossible? How could this be?\n"
	.string "I was just getting into bed with your\l"
	.string "mother, then I don't know... My memories\l"
	.string "are confusing, icy cold and jet black....\l"
	.string "What evil witch could have done this to\l"
	.string "me?$"

CasaAtrei_Text_OrestesKlytmnestraScene5::
# 732 "data/maps/CasaAtrei/scripts.pory"
	.string "Your own wife, my mother, Klytmnestra\n"
	.string "was none other than that accursed\l"
	.string "witch who held you here entranced for\l"
	.string "all this time.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene4::
# 738 "data/maps/CasaAtrei/scripts.pory"
	.string "Klytmnestra? My wife, did this? I can't\n"
	.string "believe it! She was the love of my life!\l"
	.string "Mother of my two children...$"

CasaAtrei_Text_IphigeniaKlytmnestraScene1::
# 744 "data/maps/CasaAtrei/scripts.pory"
	.string "Orestes!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene5::
# 748 "data/maps/CasaAtrei/scripts.pory"
	.string "Iphigenia!$"

CasaAtrei_Text_IphigeniaKlytmnestraScene2::
# 752 "data/maps/CasaAtrei/scripts.pory"
	.string "How could you do this? You killed your\n"
	.string "own mother! Have you no shame?$"

CasaAtrei_Text_OrestesKlytmnestraScene6::
# 757 "data/maps/CasaAtrei/scripts.pory"
	.string "I did no such thing! My hands are\n"
	.string "blameless in mother's tragic, but well\l"
	.string "deserved, death.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene6::
# 762 "data/maps/CasaAtrei/scripts.pory"
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
# 776 "data/maps/CasaAtrei/scripts.pory"
	.string "I'll never honor you, mother was right!\n"
	.string "We women ought to be in charge of\l"
	.string "things and one day I will see mother\l"
	.string "avenged. Until then I will curse you and\l"
	.string "your son from the oppressive prison of\l"
	.string "my room!$"

CasaAtrei_Text_AgamemnonKlytmnestraScene7::
# 784 "data/maps/CasaAtrei/scripts.pory"
	.string "Let her grieve in peace. She will come\n"
	.string "around eventually. Now tell me, son how\l"
	.string "did you manage to break Klytmnestra's\l"
	.string "spell, and tell me of {PLAYER} who\l"
	.string "helped you do it.$"

CasaAtrei_Text_OrestesKlytmnestraScene7::
# 791 "data/maps/CasaAtrei/scripts.pory"
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
# 821 "data/maps/CasaAtrei/scripts.pory"
	.string "A horrible story! I'm so sorry that you\n"
	.string "were put in that position, son, but in\l"
	.string "the darkest nights do heroic actions\l"
	.string "shine brightest. Thank you, thank you\l"
	.string "both for waking me from that most\l"
	.string "deathlike sleep. Now {PLAYER}, please\l"
	.string "come here. I would introduce myself and\l"
	.string "give you my most sincere thanks.$"

CasaAtrei_Text_AgamemnonKlytmnestraScene9::
# 831 "data/maps/CasaAtrei/scripts.pory"
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
# 853 "data/maps/CasaAtrei/scripts.pory"
	.string "Very well, father, we'll leave and let you\n"
	.string "rest. C'mon {PLAYER}, let's leave my\l"
	.string "father alone.$"

CasaAtrei_Text_OrestesKlytmnestraScene9::
# 858 "data/maps/CasaAtrei/scripts.pory"
	.string "Thank you again, but father needs his\n"
	.string "rest. I'm sure he'll be up and feeling\l"
	.string "well soon and doubltess he will give you\l"
	.string "your gift then but until then why not\l"
	.string "let him alone, let him rest up but please\l"
	.string "do come back soon.$"

CasaAtrei_Text_OrestesBlock::
# 866 "data/maps/CasaAtrei/scripts.pory"
	.string "Father must rest now to regain his\n"
	.string "strength. Please come back later to\l"
	.string "recieve your gift.$"

CasaAtrei_Text_DoorBlock::
# 871 "data/maps/CasaAtrei/scripts.pory"
	.string "The door is blocked from the outside.$"

CasaAtrei_Text_IphigeniaInRoom::
# 875 "data/maps/CasaAtrei/scripts.pory"
	.string "You men are all the same, ignorant pigs!\n"
	.string "One day I'll run away and go somewhere\l"
	.string "without any men, a real paradise!$"

CasaAtrei_Text_AgamemnonGift1::
# 881 "data/maps/CasaAtrei/scripts.pory"
	.string "Hello again, {PLAYER}, it's great to\n"
	.string "see you. I'm pleased you have come back.\l"
	.string "Forgive me for having to rest before,\l"
	.string "but now I am feeling myself again. I\l"
	.string "have a gift I'd like to give you for\l"
	.string "saving my life.$"

CasaAtrei_Text_AgamemnonGift2::
# 889 "data/maps/CasaAtrei/scripts.pory"
	.string "That Amulet Coin was my lucky charm. I\n"
	.string "carried it while building my business. I\l"
	.string "hope it brings you good luck and\l"
	.string "fortune.$"

CasaAtrei_Text_AgamemnonAfterGift::
# 895 "data/maps/CasaAtrei/scripts.pory"
	.string "Hello and thank you once again, my\n"
	.string "friend.$"

CasaAtrei_Text_AgamemnonInvite1::
# 899 "data/maps/CasaAtrei/scripts.pory"
	.string "What's that? You brought something to\n"
	.string "give to me?$"

CasaAtrei_Text_GaveInvite::
# 903 "data/maps/CasaAtrei/scripts.pory"
	.string "{PLAYER} gave the Wedding Invitation\n"
	.string "to Agamemnon.$"

CasaAtrei_Text_AgamemnonInvite2::
# 907 "data/maps/CasaAtrei/scripts.pory"
	.string "My brother, Menelaus, is getting married\n"
	.string "at Nestors house! I'm invited to attend\l"
	.string "this spectacular event. I must make\l"
	.string "haste, to delay would be rude!$"
