Farm_MapScripts::
# 7 "data/maps/Farm/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Farm_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/Farm/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Farm_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Farm_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/Farm/scripts.pory"
	compare VAR_ULYSSES_STATE, 24
	goto_if_ne Farm_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Farm_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/Farm/scripts.pory"
	call Farm_Script_HideArgus
	return

Farm_MapScripts_MAP_SCRIPT_ON_RESUME:
# 14 "data/maps/Farm/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Farm_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

Farm_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 15 "data/maps/Farm/scripts.pory"
	hideobjectat LOCALID_FARM_WOLF, MAP_FARM
	return


Farm_Script_HideArgus::
# 21 "data/maps/Farm/scripts.pory"
	setobjectxyperm LOCALID_FARM_ARGUS, 64, 33
# 22 "data/maps/Farm/scripts.pory"
	setobjectmovementtype LOCALID_FARM_ARGUS, MOVEMENT_TYPE_INVISIBLE
# 23 "data/maps/Farm/scripts.pory"
	setobjectxyperm LOCALID_FARM_WOLF, 64, 33
# 24 "data/maps/Farm/scripts.pory"
	setobjectmovementtype LOCALID_FARM_WOLF, MOVEMENT_TYPE_INVISIBLE
	return


Farm_Script_ArgusSceneA::
# 29 "data/maps/Farm/scripts.pory"
	setflag FLAG_TEMP_A
# 30 "data/maps/Farm/scripts.pory"
	call Farm_Script_ArgusScene
	return


Farm_Script_ArgusScene::
# 34 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 35 "data/maps/Farm/scripts.pory"
	waitmovement 0
# 36 "data/maps/Farm/scripts.pory"
	goto_if_set FLAG_TEMP_A, Farm_Script_ArgusScene_2
Farm_Script_ArgusScene_1:
# 40 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_FARM_ARGUS, Common_Movement_ExclamationMark
# 41 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_FARM_WOLF, Common_Movement_ExclamationMark
# 42 "data/maps/Farm/scripts.pory"
	waitmovement 0
# 43 "data/maps/Farm/scripts.pory"
	lockall
# 44 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_FARM_WOLF, Common_Movement_WalkLeft
# 45 "data/maps/Farm/scripts.pory"
	waitmovement 0
# 46 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_FARM_WOLF, Common_Movement_WalkUp
# 47 "data/maps/Farm/scripts.pory"
	waitmovement 0
# 48 "data/maps/Farm/scripts.pory"
	goto_if_set FLAG_TEMP_A, Farm_Script_ArgusScene_5
# 52 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 53 "data/maps/Farm/scripts.pory"
	waitmovement 0
Farm_Script_ArgusScene_4:
# 55 "data/maps/Farm/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 56 "data/maps/Farm/scripts.pory"
	waitmoncry
# 57 "data/maps/Farm/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 58 "data/maps/Farm/scripts.pory"
	setwildbattle SPECIES_MIGHTYENA, 13
# 59 "data/maps/Farm/scripts.pory"
	dowildbattle
# 60 "data/maps/Farm/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 61 "data/maps/Farm/scripts.pory"
	removeobject LOCALID_FARM_WOLF
# 62 "data/maps/Farm/scripts.pory"
	setobjectxyperm LOCALID_FARM_WOLF, 64, 33
# 63 "data/maps/Farm/scripts.pory"
	setobjectmovementtype LOCALID_FARM_WOLF, MOVEMENT_TYPE_INVISIBLE
# 64 "data/maps/Farm/scripts.pory"
	addobject LOCALID_FARM_WOLF
# 65 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_FARM_ARGUS, Common_Movement_WalkLeft2
# 66 "data/maps/Farm/scripts.pory"
	waitmovement 0
# 67 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_FARM_ARGUS, Common_Movement_WalkUp
# 68 "data/maps/Farm/scripts.pory"
	waitmovement 0
# 69 "data/maps/Farm/scripts.pory"
	goto_if_set FLAG_TEMP_A, Farm_Script_ArgusScene_9
Farm_Script_ArgusScene_8:
# 73 "data/maps/Farm/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_ENCOUNTER
# 74 "data/maps/Farm/scripts.pory"
	waitmoncry
# 76 "data/maps/Farm/scripts.pory"
	goto_if_set FLAG_TEMP_A, Farm_Script_ArgusScene_12
# 79 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_FARM_ARGUS, Common_Movement_WalkLeft
# 80 "data/maps/Farm/scripts.pory"
	waitmovement 0
# 81 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_FARM_ARGUS, Common_Movement_WalkUp7
Farm_Script_ArgusScene_11:
# 83 "data/maps/Farm/scripts.pory"
	waitmovement 0
# 84 "data/maps/Farm/scripts.pory"
	removeobject LOCALID_FARM_ARGUS
# 85 "data/maps/Farm/scripts.pory"
	setobjectxyperm LOCALID_FARM_ARGUS, 64, 33
# 86 "data/maps/Farm/scripts.pory"
	setobjectmovementtype LOCALID_FARM_ARGUS, MOVEMENT_TYPE_INVISIBLE
# 87 "data/maps/Farm/scripts.pory"
	addobject LOCALID_FARM_ARGUS
# 88 "data/maps/Farm/scripts.pory"
	setvar VAR_ULYSSES_STATE, 25
# 89 "data/maps/Farm/scripts.pory"
	releaseall
	end

Farm_Script_ArgusScene_2:
# 37 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 38 "data/maps/Farm/scripts.pory"
	waitmovement 0
	goto Farm_Script_ArgusScene_1

Farm_Script_ArgusScene_5:
# 49 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_FARM_WOLF, Common_Movement_FaceLeft
# 50 "data/maps/Farm/scripts.pory"
	waitmovement 0
	goto Farm_Script_ArgusScene_4

Farm_Script_ArgusScene_9:
# 70 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_FARM_ARGUS, Common_Movement_FaceLeft
# 71 "data/maps/Farm/scripts.pory"
	waitmovement 0
	goto Farm_Script_ArgusScene_8

Farm_Script_ArgusScene_12:
# 77 "data/maps/Farm/scripts.pory"
	applymovement LOCALID_FARM_ARGUS, Common_Movement_WalkUp6
	goto Farm_Script_ArgusScene_11

