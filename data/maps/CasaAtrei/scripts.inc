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
# 251 "data/maps/CasaAtrei/scripts.pory"
	setvar VAR_ORESTES_STATE, 11
	return


CasaAtrei_Script_Orestes::
# 257 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 10
	goto_if_eq CasaAtrei_Script_Orestes_1
	return

CasaAtrei_Script_Orestes_1:
# 258 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 259 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_OrestesDuringIphigeniaFight
# 260 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 261 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	return


CasaAtrei_Script_Iphigenia::
# 267 "data/maps/CasaAtrei/scripts.pory"
	compare VAR_ORESTES_STATE, 10
	goto_if_eq CasaAtrei_Script_Iphigenia_1
	return

CasaAtrei_Script_Iphigenia_1:
# 268 "data/maps/CasaAtrei/scripts.pory"
	load_field_pic FIELD_PIC_IPHIGENIA, 190, 98
# 269 "data/maps/CasaAtrei/scripts.pory"
	msgbox CasaAtrei_Text_IphigeniaDuringIphigeniaFight
# 270 "data/maps/CasaAtrei/scripts.pory"
	destroy_field_pic FIELD_PIC_IPHIGENIA
# 271 "data/maps/CasaAtrei/scripts.pory"
	closemessage
	return


CasaAtrei_Script_Agamemnon::
	return


CasaAtrei_Text_OrestesBeforeIphegeniaFight1::
# 281 "data/maps/CasaAtrei/scripts.pory"
	.string "Oh, {PLAYER}! You made it, good! The\n"
	.string "coast seems clear but I'm not sure\l"
	.string "where 4everyone has gone. I already\l"
	.string "checked my sister's room and saw no\l"
	.string "trace of...$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight1::
# 288 "data/maps/CasaAtrei/scripts.pory"
	.string "Orestes! Stop right there!$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight2::
# 292 "data/maps/CasaAtrei/scripts.pory"
	.string "I know you come to stop our mother! I\n"
	.string "will not allow you to revive father!$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight2::
# 297 "data/maps/CasaAtrei/scripts.pory"
	.string "My purpose, Iphigenia, is plain for all\n"
	.string "to see. I will see dad rescued but fear\l"
	.string "not, I won't touch a single hair upon\l"
	.string "the foul head of that wicked witch.$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight3::
# 304 "data/maps/CasaAtrei/scripts.pory"
	.string "Be quick! Go on! Find Klytmnestra! I'll\n"
	.string "keep my sister occuped here with me.$"

CasaAtrei_Text_OrestesBeforeIphegeniaFight4::
# 309 "data/maps/CasaAtrei/scripts.pory"
	.string "This is your final warning, dear sister,\n"
	.string "I do not wish to come to blows with you\l"
	.string "but I will do what I must in order to see\l"
	.string "mother defeated, father saved.$"

CasaAtrei_Text_IphigeniaBeforeIphegeniaFight3::
# 316 "data/maps/CasaAtrei/scripts.pory"
	.string "The die is cast, foul brother Orestes. I\n"
	.string "won't let you bring harm to our mother!$"

CasaAtrei_Text_OrestesDuringIphigeniaFight::
# 321 "data/maps/CasaAtrei/scripts.pory"
	.string "Gah! What animal fights with spit, nails,\n"
	.string "and teeth?$"

CasaAtrei_Text_IphigeniaDuringIphigeniaFight::
# 325 "data/maps/CasaAtrei/scripts.pory"
	.string "What monster fights his own mom and\n"
	.string "sister?$"

CasaAtrei_Text_Klytmnestra1::
# 329 "data/maps/CasaAtrei/scripts.pory"
	.string "I've been expecting you. Come closer,\n"
	.string "boy.$"

CasaAtrei_Text_Klytmnestra2::
# 333 "data/maps/CasaAtrei/scripts.pory"
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
# 349 "data/maps/CasaAtrei/scripts.pory"
	.string "My soul is being severed from the world!$"
