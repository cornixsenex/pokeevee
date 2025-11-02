CasaCirces_MapScripts::
# 4 "data/maps/CasaCirces/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 24 "data/maps/CasaCirces/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CasaCirces_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/CasaCirces/scripts.pory"
	compare VAR_ULYSSES_STATE, 7
	goto_if_eq CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/CasaCirces/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/CasaCirces/scripts.pory"
	compare VAR_ULYSSES_STATE, 9
	goto_if_eq CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 18 "data/maps/CasaCirces/scripts.pory"
	compare VAR_ULYSSES_STATE, 10
	goto_if_eq CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/CasaCirces/scripts.pory"
	call CasaCirces_Script_ShowUlyssesConfrontCirce
	goto CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/CasaCirces/scripts.pory"
	call CasaCirces_Script_ShowUlyssesWithCirce
	goto CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 15 "data/maps/CasaCirces/scripts.pory"
	call CasaCirces_Script_ShowPlayerConfrontCirce
	goto CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 19 "data/maps/CasaCirces/scripts.pory"
	call CasaCirces_Script_ShowUlyssesAfterCirce
	return

CasaCirces_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/CasaCirces/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 7, CasaCirces_Script_UlyssesConfrontCirce
# 28 "data/maps/CasaCirces/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 9, CasaCirces_Script_PlayerConfrontCirce
	.2byte 0


CasaCirces_Script_ShowUlyssesConfrontCirce::
# 35 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_CIRCE, 4, 2
# 36 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_CIRCE, MOVEMENT_TYPE_FACE_DOWN
# 38 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_MISMAGIUS, 5, 2
# 39 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_MISMAGIUS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 41 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_ULYSSES, 4, 4
# 42 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_ULYSSES, MOVEMENT_TYPE_FACE_UP
	return


CasaCirces_Script_ShowUlyssesWithCirce::
# 48 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_CIRCE, 6, 3
# 49 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_CIRCE, MOVEMENT_TYPE_FACE_DOWN
# 51 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_MISMAGIUS, 7, 3
# 52 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_MISMAGIUS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 54 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_ULYSSES, 6, 3
# 55 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_ULYSSES, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return


CasaCirces_Script_ShowPlayerConfrontCirce::
# 61 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_CIRCE, 4, 2
# 62 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_CIRCE, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_MISMAGIUS, 5, 2
# 65 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_MISMAGIUS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 67 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_TEDDIURSA, 4, 2
# 68 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_TEDDIURSA, MOVEMENT_TYPE_LOOK_AROUND
	return


CasaCirces_Script_ShowUlyssesAfterCirce::
# 74 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_TEDDIURSA, 4, 2
# 75 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_TEDDIURSA, MOVEMENT_TYPE_LOOK_AROUND
	return


CasaCirces_Script_UlyssesConfrontCirce::
# 82 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 83 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 85 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 86 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 88 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 89 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce1
# 90 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 92 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 93 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontUlysses1
# 94 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 107 "data/maps/CasaCirces/scripts.pory"
	closemessage
# 110 "data/maps/CasaCirces/scripts.pory"
	setvar VAR_ULYSSES_STATE, 8
	end


CasaCirces_Script_PlayerConfrontCirce::
	return


CasaCirces_Text_Ulysses_ConfrontCirce1::
# 122 "data/maps/CasaCirces/scripts.pory"
	.string "Behold! The wicked witch of the forest!\n"
	.string "We've got you cornered now!$"

CasaCirces_Text_Circe_ConfrontUlysses1::
# 127 "data/maps/CasaCirces/scripts.pory"
	.string "Hi! Here I am! You've really got me now,\n"
	.string "but I wonder, who is this handsome man\l"
	.string "who will take me?$"
