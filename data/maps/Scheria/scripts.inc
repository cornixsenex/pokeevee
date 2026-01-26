Scheria_MapScripts::
# 2 "data/maps/Scheria/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Scheria_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/Scheria/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Scheria_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Scheria_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/Scheria/scripts.pory"
	compare VAR_ULYSSES_STATE, 22
	goto_if_eq Scheria_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Scheria_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/Scheria/scripts.pory"
	call Scheria_Script_SetupUlyssesScene
	return

Scheria_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Scheria/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 22, Scheria_Script_UlyssesScene
	.2byte 0


Scheria_Script_SetupUlyssesScene::
# 14 "data/maps/Scheria/scripts.pory"
	setobjectxyperm LOCALID_SCHERIA_ULYSSES, 4, 5
# 15 "data/maps/Scheria/scripts.pory"
	setobjectmovementtype LOCALID_SCHERIA_ULYSSES, MOVEMENT_TYPE_FACE_UP
# 17 "data/maps/Scheria/scripts.pory"
	setobjectxyperm LOCALID_SCHERIA_NAUSICAA, 3, 4
# 18 "data/maps/Scheria/scripts.pory"
	setobjectmovementtype LOCALID_SCHERIA_NAUSICAA, MOVEMENT_TYPE_FACE_RIGHT
# 20 "data/maps/Scheria/scripts.pory"
	setobjectxyperm LOCALID_SCHERIA_ALCINOUS, 5, 3
# 21 "data/maps/Scheria/scripts.pory"
	setobjectmovementtype LOCALID_SCHERIA_ALCINOUS, MOVEMENT_TYPE_FACE_DOWN
# 23 "data/maps/Scheria/scripts.pory"
	setobjectxyperm LOCALID_SCHERIA_ARETE, 4, 3
# 24 "data/maps/Scheria/scripts.pory"
	setobjectmovementtype LOCALID_SCHERIA_ARETE, MOVEMENT_TYPE_FACE_DOWN
	return


Scheria_Script_UlyssesScene::
# 30 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 31 "data/maps/Scheria/scripts.pory"
	waitmovement 0
# 32 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 33 "data/maps/Scheria/scripts.pory"
	waitmovement 0
# 36 "data/maps/Scheria/scripts.pory"
	load_field_pic FIELD_PIC_ALCINOUS, 190, 98
# 37 "data/maps/Scheria/scripts.pory"
	msgbox Scheria_Text_UlyssesScene_Alcinous1
# 38 "data/maps/Scheria/scripts.pory"
	destroy_field_pic FIELD_PIC_ALCINOUS
# 40 "data/maps/Scheria/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 41 "data/maps/Scheria/scripts.pory"
	msgbox Scheria_Text_UlyssesScene_Ulysses1
# 42 "data/maps/Scheria/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 44 "data/maps/Scheria/scripts.pory"
	load_field_pic FIELD_PIC_ARETE, 190, 98
# 45 "data/maps/Scheria/scripts.pory"
	msgbox Scheria_Text_UlyssesScene_Arete1
# 46 "data/maps/Scheria/scripts.pory"
	destroy_field_pic FIELD_PIC_ARETE
# 47 "data/maps/Scheria/scripts.pory"
	closemessage
# 49 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_SCHERIA_ULYSSES, Common_Movement_ExclamationMark
# 50 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_SCHERIA_NAUSICAA, Common_Movement_ExclamationMark
# 51 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_SCHERIA_ARETE, Common_Movement_ExclamationMark
# 52 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_SCHERIA_ALCINOUS, Common_Movement_ExclamationMark
# 53 "data/maps/Scheria/scripts.pory"
	waitmovement 0
# 55 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_SCHERIA_ULYSSES, Common_Movement_FaceDown
# 56 "data/maps/Scheria/scripts.pory"
	waitmovement 0
# 58 "data/maps/Scheria/scripts.pory"
	load_field_pic FIELD_PIC_ALCINOUS, 190, 98
# 59 "data/maps/Scheria/scripts.pory"
	msgbox Scheria_Text_UlyssesScene_Alcinous2
# 60 "data/maps/Scheria/scripts.pory"
	destroy_field_pic FIELD_PIC_ALCINOUS
# 62 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_SCHERIA_ULYSSES, Common_Movement_FaceUp
# 63 "data/maps/Scheria/scripts.pory"
	waitmovement 0
# 65 "data/maps/Scheria/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 66 "data/maps/Scheria/scripts.pory"
	msgbox Scheria_Text_UlyssesScene_Ulysses2
# 67 "data/maps/Scheria/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 69 "data/maps/Scheria/scripts.pory"
	load_field_pic FIELD_PIC_ALCINOUS, 190, 98
# 70 "data/maps/Scheria/scripts.pory"
	msgbox Scheria_Text_UlyssesScene_Alcinous3
# 71 "data/maps/Scheria/scripts.pory"
	destroy_field_pic FIELD_PIC_ALCINOUS
# 72 "data/maps/Scheria/scripts.pory"
	closemessage
# 74 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 75 "data/maps/Scheria/scripts.pory"
	waitmovement 0
# 77 "data/maps/Scheria/scripts.pory"
	load_field_pic FIELD_PIC_ALCINOUS, 190, 98
# 78 "data/maps/Scheria/scripts.pory"
	msgbox Scheria_Text_UlyssesScene_Alcinous4
# 79 "data/maps/Scheria/scripts.pory"
	destroy_field_pic FIELD_PIC_ALCINOUS
# 86 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_SCHERIA_ULYSSES, Common_Movement_FaceRight
# 87 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 88 "data/maps/Scheria/scripts.pory"
	waitmovement 0
# 91 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_SCHERIA_ULYSSES, Common_Movement_WalkDown2
# 92 "data/maps/Scheria/scripts.pory"
	waitmovement 0
# 93 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_SCHERIA_ULYSSES, Common_Movement_WalkInPlaceFasterDown
# 94 "data/maps/Scheria/scripts.pory"
	waitmovement 0
# 96 "data/maps/Scheria/scripts.pory"
	removeobject LOCALID_SCHERIA_ULYSSES
# 97 "data/maps/Scheria/scripts.pory"
	setobjectxyperm LOCALID_SCHERIA_ULYSSES, 0, 0
# 98 "data/maps/Scheria/scripts.pory"
	setobjectmovementtype LOCALID_SCHERIA_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 99 "data/maps/Scheria/scripts.pory"
	addobject LOCALID_SCHERIA_ULYSSES
# 101 "data/maps/Scheria/scripts.pory"
	setvar VAR_ULYSSES_STATE, 23
	end


Scheria_Script_Arete::
	return


Scheria_Script_Alcinous::
	return


Scheria_Script_Nausicaa::
	return


Scheria_Text_UlyssesScene_Alcinous1::
# 118 "data/maps/Scheria/scripts.pory"
	.string "Now come, weary stranger, your strength\n"
	.string "returns and I would have your name, and\l"
	.string "what business brought you to my island.$"

Scheria_Text_UlyssesScene_Ulysses1::
# 124 "data/maps/Scheria/scripts.pory"
	.string "I'm Ulysses, Lord of Ithaca. I was lost\n"
	.string "at sea and shipwrecked while I\l"
	.string "journeyed to the house of Nestor where\l"
	.string "my friend will be married.$"

Scheria_Text_UlyssesScene_Arete1::
# 131 "data/maps/Scheria/scripts.pory"
	.string "It was a miracle that you survived and\n"
	.string "washed ashore on our friendly isle\l"
	.string "where Nausicaa found you...$"

Scheria_Text_UlyssesScene_Alcinous2::
# 137 "data/maps/Scheria/scripts.pory"
	.string "Who dares enter the house of Alcinous\n"
	.string "unbidden?$"

Scheria_Text_UlyssesScene_Ulysses2::
# 142 "data/maps/Scheria/scripts.pory"
	.string "Great lord, he is my friend and\n"
	.string "companion on the long, wayward journey\l"
	.string "that brought me through perils to the\l"
	.string "mercy of your house.$"

Scheria_Text_UlyssesScene_Alcinous3::
# 148 "data/maps/Scheria/scripts.pory"
	.string "Very well, friend, approach! Stand\n"
	.string "before me!$"

Scheria_Text_UlyssesScene_Alcinous4::
# 152 "data/maps/Scheria/scripts.pory"
	.string "$"
