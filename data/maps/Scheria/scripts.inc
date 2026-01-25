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
# 41 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 42 "data/maps/Scheria/scripts.pory"
	waitmovement 0
# 50 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_SCHERIA_ULYSSES, Common_Movement_FaceRight
# 51 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 52 "data/maps/Scheria/scripts.pory"
	waitmovement 0
# 55 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_SCHERIA_ULYSSES, Common_Movement_WalkDown2
# 56 "data/maps/Scheria/scripts.pory"
	waitmovement 0
# 57 "data/maps/Scheria/scripts.pory"
	applymovement LOCALID_SCHERIA_ULYSSES, Common_Movement_WalkInPlaceFasterDown
# 58 "data/maps/Scheria/scripts.pory"
	waitmovement 0
# 60 "data/maps/Scheria/scripts.pory"
	removeobject LOCALID_SCHERIA_ULYSSES
# 61 "data/maps/Scheria/scripts.pory"
	setobjectxyperm LOCALID_SCHERIA_ULYSSES, 0, 0
# 62 "data/maps/Scheria/scripts.pory"
	setobjectmovementtype LOCALID_SCHERIA_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 63 "data/maps/Scheria/scripts.pory"
	addobject LOCALID_SCHERIA_ULYSSES
# 65 "data/maps/Scheria/scripts.pory"
	setvar VAR_ULYSSES_STATE, 23
	end


Scheria_Script_Arete::
	return


Scheria_Script_Alcinous::
	return


Scheria_Script_Nausicaa::
	return

