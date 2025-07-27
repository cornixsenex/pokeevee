CasaTurni_MapScripts::
# 3 "data/maps/CasaTurni/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CasaTurni_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CasaTurni_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/CasaTurni/scripts.pory"
	map_script_2 VAR_AENEID_STATE, 8, CasaTurni_Script_TurnusScene
	.2byte 0


CasaTurni_Script_TurnusScene::
# 10 "data/maps/CasaTurni/scripts.pory"
	lockall
# 11 "data/maps/CasaTurni/scripts.pory"
	setvar VAR_AENEID_STATE, 9
# 13 "data/maps/CasaTurni/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 15 "data/maps/CasaTurni/scripts.pory"
	call CasaTurni_Script_AlertRutuli
# 17 "data/maps/CasaTurni/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 18 "data/maps/CasaTurni/scripts.pory"
	waitmovement 0
# 20 "data/maps/CasaTurni/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 21 "data/maps/CasaTurni/scripts.pory"
	msgbox CasaTurni_Text_RutuliPre
# 22 "data/maps/CasaTurni/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 24 "data/maps/CasaTurni/scripts.pory"
	load_field_pic FIELD_PIC_TURNUS, 190, 98
# 25 "data/maps/CasaTurni/scripts.pory"
	msgbox CasaTurni_Text_TurnusPre1
# 26 "data/maps/CasaTurni/scripts.pory"
	call CasaTurni_Script_AlertRutuli
# 27 "data/maps/CasaTurni/scripts.pory"
	msgbox CasaTurni_Text_TurnusPre2
# 28 "data/maps/CasaTurni/scripts.pory"
	destroy_field_pic FIELD_PIC_TURNUS
# 29 "data/maps/CasaTurni/scripts.pory"
	closemessage
# 31 "data/maps/CasaTurni/scripts.pory"
	applymovement LOCALID_CASATURNI_TURNUS, Common_Movement_WalkDown2
# 32 "data/maps/CasaTurni/scripts.pory"
	waitmovement 0
# 34 "data/maps/CasaTurni/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 35 "data/maps/CasaTurni/scripts.pory"
	applymovement LOCALID_CASATURNI_TURNUS, Common_Movement_FaceRight
# 36 "data/maps/CasaTurni/scripts.pory"
	waitmovement 0
# 38 "data/maps/CasaTurni/scripts.pory"
	load_field_pic FIELD_PIC_TURNUS, 190, 98
# 39 "data/maps/CasaTurni/scripts.pory"
	msgbox CasaTurni_Text_TurnusPre3
# 40 "data/maps/CasaTurni/scripts.pory"
	destroy_field_pic FIELD_PIC_TURNUS
# 41 "data/maps/CasaTurni/scripts.pory"
	closemessage
# 43 "data/maps/CasaTurni/scripts.pory"
	trainerbattle_no_intro TRAINER_TURNUS, CasaTurni_Text_TurnusLost
# 45 "data/maps/CasaTurni/scripts.pory"
	load_field_pic FIELD_PIC_TURNUS, 190, 98
# 46 "data/maps/CasaTurni/scripts.pory"
	msgbox CasaTurni_Text_TurnusPost
# 47 "data/maps/CasaTurni/scripts.pory"
	destroy_field_pic FIELD_PIC_TURNUS
# 48 "data/maps/CasaTurni/scripts.pory"
	closemessage
# 50 "data/maps/CasaTurni/scripts.pory"
	applymovement LOCALID_CASATURNI_TURNUS, Common_Movement_WalkDown3
# 51 "data/maps/CasaTurni/scripts.pory"
	waitmovement 0
# 53 "data/maps/CasaTurni/scripts.pory"
	removeobject LOCALID_CASATURNI_TURNUS
# 54 "data/maps/CasaTurni/scripts.pory"
	setobjectxyperm LOCALID_CASATURNI_TURNUS, 0, 0
# 55 "data/maps/CasaTurni/scripts.pory"
	setobjectmovementtype LOCALID_CASATURNI_TURNUS, MOVEMENT_TYPE_INVISIBLE
# 56 "data/maps/CasaTurni/scripts.pory"
	addobject LOCALID_CASATURNI_TURNUS
# 57 "data/maps/CasaTurni/scripts.pory"
	call CasaTurni_Script_AlertRutuli
# 59 "data/maps/CasaTurni/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 60 "data/maps/CasaTurni/scripts.pory"
	msgbox CasaTurni_Text_RutuliPost
# 61 "data/maps/CasaTurni/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 62 "data/maps/CasaTurni/scripts.pory"
	closemessage
# 64 "data/maps/CasaTurni/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 65 "data/maps/CasaTurni/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 66 "data/maps/CasaTurni/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 67 "data/maps/CasaTurni/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 68 "data/maps/CasaTurni/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 69 "data/maps/CasaTurni/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 70 "data/maps/CasaTurni/scripts.pory"
	waitmovement 0
# 71 "data/maps/CasaTurni/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 72 "data/maps/CasaTurni/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 73 "data/maps/CasaTurni/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 74 "data/maps/CasaTurni/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 75 "data/maps/CasaTurni/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 76 "data/maps/CasaTurni/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 77 "data/maps/CasaTurni/scripts.pory"
	waitmovement 0
# 78 "data/maps/CasaTurni/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 79 "data/maps/CasaTurni/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 80 "data/maps/CasaTurni/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 81 "data/maps/CasaTurni/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 82 "data/maps/CasaTurni/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 83 "data/maps/CasaTurni/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 84 "data/maps/CasaTurni/scripts.pory"
	waitmovement 0
# 86 "data/maps/CasaTurni/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 87 "data/maps/CasaTurni/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 88 "data/maps/CasaTurni/scripts.pory"
	waitmovement 0
# 89 "data/maps/CasaTurni/scripts.pory"
	removeobject 7
# 90 "data/maps/CasaTurni/scripts.pory"
	setobjectxyperm 7, 0, 0
# 91 "data/maps/CasaTurni/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 92 "data/maps/CasaTurni/scripts.pory"
	addobject 7
# 93 "data/maps/CasaTurni/scripts.pory"
	removeobject 6
# 94 "data/maps/CasaTurni/scripts.pory"
	setobjectxyperm 6, 0, 0
# 95 "data/maps/CasaTurni/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 96 "data/maps/CasaTurni/scripts.pory"
	addobject 6
# 98 "data/maps/CasaTurni/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 99 "data/maps/CasaTurni/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 100 "data/maps/CasaTurni/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 101 "data/maps/CasaTurni/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 102 "data/maps/CasaTurni/scripts.pory"
	waitmovement 0
# 104 "data/maps/CasaTurni/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 105 "data/maps/CasaTurni/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 106 "data/maps/CasaTurni/scripts.pory"
	waitmovement 0
# 107 "data/maps/CasaTurni/scripts.pory"
	removeobject 5
# 108 "data/maps/CasaTurni/scripts.pory"
	setobjectxyperm 5, 0, 0
# 109 "data/maps/CasaTurni/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 110 "data/maps/CasaTurni/scripts.pory"
	addobject 5
# 111 "data/maps/CasaTurni/scripts.pory"
	removeobject 4
# 112 "data/maps/CasaTurni/scripts.pory"
	setobjectxyperm 4, 0, 0
# 113 "data/maps/CasaTurni/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 114 "data/maps/CasaTurni/scripts.pory"
	addobject 4
# 116 "data/maps/CasaTurni/scripts.pory"
	applymovement 2, Common_Movement_WalkDown3
# 117 "data/maps/CasaTurni/scripts.pory"
	applymovement 3, Common_Movement_WalkDown3
# 118 "data/maps/CasaTurni/scripts.pory"
	waitmovement 0
# 120 "data/maps/CasaTurni/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 121 "data/maps/CasaTurni/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 122 "data/maps/CasaTurni/scripts.pory"
	waitmovement 0
# 123 "data/maps/CasaTurni/scripts.pory"
	removeobject 3
# 124 "data/maps/CasaTurni/scripts.pory"
	setobjectxyperm 3, 0, 0
# 125 "data/maps/CasaTurni/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 126 "data/maps/CasaTurni/scripts.pory"
	addobject 3
# 127 "data/maps/CasaTurni/scripts.pory"
	removeobject 2
# 128 "data/maps/CasaTurni/scripts.pory"
	setobjectxyperm 2, 0, 0
# 129 "data/maps/CasaTurni/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 130 "data/maps/CasaTurni/scripts.pory"
	addobject 2
# 132 "data/maps/CasaTurni/scripts.pory"
	setflag FLAG_CASATURNI_HIDERUTULI
# 134 "data/maps/CasaTurni/scripts.pory"
	releaseall
	end


CasaTurni_Script_AlertRutuli::
# 139 "data/maps/CasaTurni/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 140 "data/maps/CasaTurni/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 141 "data/maps/CasaTurni/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 142 "data/maps/CasaTurni/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 143 "data/maps/CasaTurni/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 144 "data/maps/CasaTurni/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 145 "data/maps/CasaTurni/scripts.pory"
	waitmovement 0
	return


CasaTurni_Text_RutuliPre::
# 153 "data/maps/CasaTurni/scripts.pory"
	.string "Satresspass!\p"
	.string "Sa-arms salook!\p"
	.string "Saget!$"

CasaTurni_Text_TurnusPre1::
# 158 "data/maps/CasaTurni/scripts.pory"
	.string "Saworms! Saback!$"

CasaTurni_Text_TurnusPre2::
# 163 "data/maps/CasaTurni/scripts.pory"
	.string "Turnus glory sadenyya?$"

CasaTurni_Text_TurnusPre3::
# 168 "data/maps/CasaTurni/scripts.pory"
	.string "Mathrone assailna neverya. Why making\n"
	.string "Hesperia tashowya.$"

CasaTurni_Text_TurnusLost::
# 173 "data/maps/CasaTurni/scripts.pory"
	.string "Macrown breakya.$"

CasaTurni_Text_TurnusPost::
# 178 "data/maps/CasaTurni/scripts.pory"
	.string "Makingdom and malife doneya.$"

CasaTurni_Text_RutuliPost::
# 185 "data/maps/CasaTurni/scripts.pory"
	.string "Katurnus! Kadefeatya?\p"
	.string "All lostya!\p"
	.string "For talife tarunya!$"
