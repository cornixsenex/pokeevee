Lupercal_MapScripts::
# 5 "data/maps/Lupercal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Lupercal_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/Lupercal/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Lupercal_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Lupercal_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/Lupercal/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq Lupercal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Lupercal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/Lupercal/scripts.pory"
	call Lupercal_Script_ShowLupercalScene
	return

Lupercal_MapScripts_MAP_SCRIPT_ON_RESUME:
# 12 "data/maps/Lupercal/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Lupercal_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

Lupercal_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 13 "data/maps/Lupercal/scripts.pory"
	hideobjectat LOCALID_LUPERCAL_LUPA, MAP_LUPERCAL
# 14 "data/maps/Lupercal/scripts.pory"
	removeobject LOCALID_LUPERCAL_LUPA
	return


Lupercal_Script_ShowLupercalScene::
# 21 "data/maps/Lupercal/scripts.pory"
	setobjectxyperm LOCALID_LUPERCAL_LUPA, 6, 4
# 22 "data/maps/Lupercal/scripts.pory"
	setobjectxyperm LOCALID_LUPERCAL_ROMULUS, 7, 4
# 23 "data/maps/Lupercal/scripts.pory"
	setobjectxyperm LOCALID_LUPERCAL_REMUS, 5, 4
# 24 "data/maps/Lupercal/scripts.pory"
	setobjectmovementtype LOCALID_LUPERCAL_LUPA, MOVEMENT_TYPE_FACE_UP
# 25 "data/maps/Lupercal/scripts.pory"
	setobjectmovementtype LOCALID_LUPERCAL_ROMULUS, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 26 "data/maps/Lupercal/scripts.pory"
	setobjectmovementtype LOCALID_LUPERCAL_REMUS, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	return


Lupercal_Script_LupercalSceneA::
# 32 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 33 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 34 "data/maps/Lupercal/scripts.pory"
	call Lupercal_Script_LupercalScene
	return


Lupercal_Script_LupercalSceneB::
# 38 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 39 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 40 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 41 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 42 "data/maps/Lupercal/scripts.pory"
	call Lupercal_Script_LupercalScene
	return


Lupercal_Script_LupercalScene::
# 47 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 48 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 50 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 51 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 53 "data/maps/Lupercal/scripts.pory"
	delay 45
# 55 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_LUPA, Common_Movement_ExclamationMark
# 56 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 58 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_LUPA, Common_Movement_FaceDown
# 59 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 60 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_LUPA, Common_Movement_ExclamationMark
# 61 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 63 "data/maps/Lupercal/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 64 "data/maps/Lupercal/scripts.pory"
	delay 40
# 65 "data/maps/Lupercal/scripts.pory"
	waitmoncry
# 67 "data/maps/Lupercal/scripts.pory"
	lockall
# 68 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_ROMULUS, Common_Movement_ExclamationMark
# 69 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_REMUS, Common_Movement_ExclamationMark
# 70 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 72 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_LUPA, Common_Movement_WalkDown
# 73 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 75 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_ROMULUS, Common_Movement_FaceDown
# 76 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_REMUS, Common_Movement_FaceDown
# 77 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 79 "data/maps/Lupercal/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 80 "data/maps/Lupercal/scripts.pory"
	waitmoncry
# 81 "data/maps/Lupercal/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 82 "data/maps/Lupercal/scripts.pory"
	special DoLupaBattle
# 83 "data/maps/Lupercal/scripts.pory"
	waitstate
# 84 "data/maps/Lupercal/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 86 "data/maps/Lupercal/scripts.pory"
	removeobject LOCALID_LUPERCAL_LUPA
# 87 "data/maps/Lupercal/scripts.pory"
	setobjectxyperm LOCALID_LUPERCAL_LUPA, 0, 0
# 88 "data/maps/Lupercal/scripts.pory"
	setobjectmovementtype LOCALID_LUPERCAL_LUPA, MOVEMENT_TYPE_INVISIBLE
# 89 "data/maps/Lupercal/scripts.pory"
	addobject LOCALID_LUPERCAL_LUPA
# 91 "data/maps/Lupercal/scripts.pory"
	removeobject LOCALID_LUPERCAL_FAUSTULUS
# 92 "data/maps/Lupercal/scripts.pory"
	setobjectxyperm LOCALID_LUPERCAL_FAUSTULUS, 6, 12
# 93 "data/maps/Lupercal/scripts.pory"
	setobjectmovementtype LOCALID_LUPERCAL_FAUSTULUS, MOVEMENT_TYPE_FACE_UP
# 94 "data/maps/Lupercal/scripts.pory"
	addobject LOCALID_LUPERCAL_FAUSTULUS
# 96 "data/maps/Lupercal/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 97 "data/maps/Lupercal/scripts.pory"
	msgbox Lupercal_Text_Faustulus1
# 98 "data/maps/Lupercal/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 99 "data/maps/Lupercal/scripts.pory"
	closemessage
# 101 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_ROMULUS, Common_Movement_ExclamationMark
# 102 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 103 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_REMUS, Common_Movement_ExclamationMark
# 104 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 106 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 107 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 109 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_FAUSTULUS, Common_Movement_WalkUp4
# 110 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 112 "data/maps/Lupercal/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 113 "data/maps/Lupercal/scripts.pory"
	msgbox Lupercal_Text_Faustulus2
# 114 "data/maps/Lupercal/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 115 "data/maps/Lupercal/scripts.pory"
	closemessage
# 117 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_ROMULUS, Common_Movement_WalkDown5
# 118 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_REMUS, Common_Movement_WalkDown5
# 119 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 120 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_FAUSTULUS, Common_Movement_WalkDown
# 121 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_ROMULUS, Common_Movement_WalkRight
# 122 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_REMUS, Common_Movement_WalkDown
# 123 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 124 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_FAUSTULUS, Common_Movement_WalkDown4
# 125 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_ROMULUS, Common_Movement_WalkDown4
# 126 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_REMUS, Common_Movement_WalkDown4
# 127 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 129 "data/maps/Lupercal/scripts.pory"
	removeobject LOCALID_LUPERCAL_ROMULUS
# 130 "data/maps/Lupercal/scripts.pory"
	setobjectxyperm LOCALID_LUPERCAL_ROMULUS, 0, 0
# 131 "data/maps/Lupercal/scripts.pory"
	setobjectmovementtype LOCALID_LUPERCAL_ROMULUS, MOVEMENT_TYPE_INVISIBLE
# 132 "data/maps/Lupercal/scripts.pory"
	addobject LOCALID_LUPERCAL_ROMULUS
# 133 "data/maps/Lupercal/scripts.pory"
	removeobject LOCALID_LUPERCAL_REMUS
# 134 "data/maps/Lupercal/scripts.pory"
	setobjectxyperm LOCALID_LUPERCAL_REMUS, 0, 0
# 135 "data/maps/Lupercal/scripts.pory"
	setobjectmovementtype LOCALID_LUPERCAL_REMUS, MOVEMENT_TYPE_INVISIBLE
# 136 "data/maps/Lupercal/scripts.pory"
	addobject LOCALID_LUPERCAL_REMUS
# 137 "data/maps/Lupercal/scripts.pory"
	removeobject LOCALID_LUPERCAL_FAUSTULUS
# 138 "data/maps/Lupercal/scripts.pory"
	setobjectxyperm LOCALID_LUPERCAL_FAUSTULUS, 0, 0
# 139 "data/maps/Lupercal/scripts.pory"
	setobjectmovementtype LOCALID_LUPERCAL_FAUSTULUS, MOVEMENT_TYPE_INVISIBLE
# 140 "data/maps/Lupercal/scripts.pory"
	addobject LOCALID_LUPERCAL_FAUSTULUS
# 142 "data/maps/Lupercal/scripts.pory"
	addvar VAR_AENEID_STATE, 1
# 144 "data/maps/Lupercal/scripts.pory"
	releaseall
	end


Lupercal_Text_Faustulus1::
# 149 "data/maps/Lupercal/scripts.pory"
	.string "Romulus! Remus!$"

Lupercal_Text_Faustulus2::
# 154 "data/maps/Lupercal/scripts.pory"
	.string "Oh boys safe tabe! Tahere mafind relief\n"
	.string "isya! To safety wagoya, tafather\l"
	.string "saworried badya.$"
