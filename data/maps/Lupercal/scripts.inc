Lupercal_MapScripts::
# 5 "data/maps/Lupercal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Lupercal_MapScripts_MAP_SCRIPT_ON_TRANSITION
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


Lupercal_Script_ShowLupercalScene::
# 15 "data/maps/Lupercal/scripts.pory"
	setobjectxyperm LOCALID_LUPERCAL_LUPA, 6, 4
# 16 "data/maps/Lupercal/scripts.pory"
	setobjectxyperm LOCALID_LUPERCAL_ROMULUS, 7, 4
# 17 "data/maps/Lupercal/scripts.pory"
	setobjectxyperm LOCALID_LUPERCAL_REMUS, 5, 4
# 18 "data/maps/Lupercal/scripts.pory"
	setobjectmovementtype LOCALID_LUPERCAL_LUPA, MOVEMENT_TYPE_FACE_UP
# 19 "data/maps/Lupercal/scripts.pory"
	setobjectmovementtype LOCALID_LUPERCAL_ROMULUS, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 20 "data/maps/Lupercal/scripts.pory"
	setobjectmovementtype LOCALID_LUPERCAL_REMUS, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	return


Lupercal_Script_LupercalSceneA::
# 26 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 27 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 28 "data/maps/Lupercal/scripts.pory"
	call Lupercal_Script_LupercalScene
	return


Lupercal_Script_LupercalSceneB::
# 32 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 33 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 34 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 35 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 36 "data/maps/Lupercal/scripts.pory"
	call Lupercal_Script_LupercalScene
	return


Lupercal_Script_LupercalScene::
# 41 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 42 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 44 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 45 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 47 "data/maps/Lupercal/scripts.pory"
	delay 45
# 49 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_LUPA, Common_Movement_ExclamationMark
# 50 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 52 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_LUPA, Common_Movement_FaceDown
# 53 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 54 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_LUPA, Common_Movement_ExclamationMark
# 55 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 57 "data/maps/Lupercal/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 58 "data/maps/Lupercal/scripts.pory"
	delay 40
# 59 "data/maps/Lupercal/scripts.pory"
	waitmoncry
# 61 "data/maps/Lupercal/scripts.pory"
	lockall
# 62 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_ROMULUS, Common_Movement_ExclamationMark
# 63 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_REMUS, Common_Movement_ExclamationMark
# 64 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 66 "data/maps/Lupercal/scripts.pory"
	applymovement LOCALID_LUPERCAL_LUPA, Common_Movement_WalkDown
# 67 "data/maps/Lupercal/scripts.pory"
	waitmovement 0
# 69 "data/maps/Lupercal/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 70 "data/maps/Lupercal/scripts.pory"
	waitmoncry
# 71 "data/maps/Lupercal/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 72 "data/maps/Lupercal/scripts.pory"
	special DoLupaBattle
# 73 "data/maps/Lupercal/scripts.pory"
	waitstate
# 74 "data/maps/Lupercal/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 75 "data/maps/Lupercal/scripts.pory"
	removeobject LOCALID_LUPERCAL_LUPA
# 83 "data/maps/Lupercal/scripts.pory"
	releaseall
	end

