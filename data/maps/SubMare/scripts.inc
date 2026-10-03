SubMare_MapScripts::
# 3 "data/maps/SubMare/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SubMare_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/SubMare/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SubMare_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SubMare_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SubMare/scripts.pory"
	goto_if_set FLAG_SUBMARE_HIDESUBS, SubMare_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SubMare_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/SubMare/scripts.pory"
	call SubMare_Script_ShowFossil
	return

SubMare_MapScripts_MAP_SCRIPT_ON_LOAD:
# 12 "data/maps/SubMare/scripts.pory"
	goto_if_set FLAG_SUBMARE_HIDESUBS, SubMare_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SubMare_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 13 "data/maps/SubMare/scripts.pory"
	call SubMare_Script_HideSubs
	return


SubMare_Script_ShowFossil::
# 21 "data/maps/SubMare/scripts.pory"
	setobjectxyperm LOCALID_SUBMARE_FOSSIL_L, 12, 3
# 22 "data/maps/SubMare/scripts.pory"
	setobjectmovementtype LOCALID_SUBMARE_FOSSIL_L, MOVEMENT_TYPE_FACE_DOWN
# 24 "data/maps/SubMare/scripts.pory"
	goto_if_unset FLAG_SUBMARE_HIDEFOSSIL, SubMare_Script_ShowFossil_2
SubMare_Script_ShowFossil_1:
	return

SubMare_Script_ShowFossil_2:
# 25 "data/maps/SubMare/scripts.pory"
	setobjectxyperm LOCALID_SUBMARE_FOSSIL_R, 41, 6
# 26 "data/maps/SubMare/scripts.pory"
	setobjectmovementtype LOCALID_SUBMARE_FOSSIL_R, MOVEMENT_TYPE_FACE_DOWN
	goto SubMare_Script_ShowFossil_1


SubMare_Script_HideSubs::
# 33 "data/maps/SubMare/scripts.pory"
	setmetatile 10, 2, METATILE_Underwater_UnderwaterWallSouth, FALSE
# 34 "data/maps/SubMare/scripts.pory"
	setmetatile 11, 2, METATILE_Underwater_UnderwaterWallSouth, FALSE
# 35 "data/maps/SubMare/scripts.pory"
	setmetatile 12, 2, METATILE_Underwater_UnderwaterWallSouth, FALSE
# 36 "data/maps/SubMare/scripts.pory"
	setmetatile 13, 2, METATILE_Underwater_UnderwaterWallSouth, FALSE
# 37 "data/maps/SubMare/scripts.pory"
	setmetatile 10, 3, METATILE_Underwater_UnderwaterFloor, FALSE
# 38 "data/maps/SubMare/scripts.pory"
	setmetatile 11, 3, METATILE_Underwater_UnderwaterFloor, FALSE
# 39 "data/maps/SubMare/scripts.pory"
	setmetatile 12, 3, METATILE_Underwater_UnderwaterFloor, FALSE
# 40 "data/maps/SubMare/scripts.pory"
	setmetatile 13, 3, METATILE_Underwater_UnderwaterFloor, FALSE
# 41 "data/maps/SubMare/scripts.pory"
	setmetatile 10, 4, METATILE_Underwater_UnderwaterFloor, FALSE
# 42 "data/maps/SubMare/scripts.pory"
	setmetatile 11, 4, METATILE_Underwater_UnderwaterFloor, FALSE
# 43 "data/maps/SubMare/scripts.pory"
	setmetatile 12, 4, METATILE_Underwater_UnderwaterFloor, FALSE
# 44 "data/maps/SubMare/scripts.pory"
	setmetatile 13, 4, METATILE_Underwater_UnderwaterFloor, FALSE
# 46 "data/maps/SubMare/scripts.pory"
	setmetatile 40, 5, METATILE_Underwater_UnderwaterWallSouth, FALSE
# 47 "data/maps/SubMare/scripts.pory"
	setmetatile 41, 5, METATILE_Underwater_UnderwaterWallSouth, FALSE
# 48 "data/maps/SubMare/scripts.pory"
	setmetatile 42, 5, METATILE_Underwater_UnderwaterWallSouth, FALSE
# 49 "data/maps/SubMare/scripts.pory"
	setmetatile 43, 5, METATILE_Underwater_UnderwaterWallSouth, FALSE
# 50 "data/maps/SubMare/scripts.pory"
	setmetatile 40, 5, METATILE_Underwater_UnderwaterFloor, FALSE
# 51 "data/maps/SubMare/scripts.pory"
	setmetatile 41, 5, METATILE_Underwater_UnderwaterFloor, FALSE
# 52 "data/maps/SubMare/scripts.pory"
	setmetatile 42, 5, METATILE_Underwater_UnderwaterFloor, FALSE
# 53 "data/maps/SubMare/scripts.pory"
	setmetatile 43, 5, METATILE_Underwater_UnderwaterFloor, FALSE
# 54 "data/maps/SubMare/scripts.pory"
	setmetatile 40, 6, METATILE_Underwater_UnderwaterFloor, FALSE
# 55 "data/maps/SubMare/scripts.pory"
	setmetatile 41, 6, METATILE_Underwater_UnderwaterFloor, FALSE
# 56 "data/maps/SubMare/scripts.pory"
	setmetatile 42, 6, METATILE_Underwater_UnderwaterFloor, FALSE
# 57 "data/maps/SubMare/scripts.pory"
	setmetatile 43, 6, METATILE_Underwater_UnderwaterFloor, FALSE
	return


SubMare_Script_Fossil::
# 64 "data/maps/SubMare/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 65 "data/maps/SubMare/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt SubMare_Script_Fossil_2
# 68 "data/maps/SubMare/scripts.pory"
	giveitem ITEM_HELIX_FOSSIL
SubMare_Script_Fossil_1:
# 71 "data/maps/SubMare/scripts.pory"
	removeobject LOCALID_SUBMARE_FOSSIL_R
# 72 "data/maps/SubMare/scripts.pory"
	setobjectxyperm LOCALID_SUBMARE_FOSSIL_R, 0, 0
# 73 "data/maps/SubMare/scripts.pory"
	setobjectmovementtype LOCALID_SUBMARE_FOSSIL_R, MOVEMENT_TYPE_INVISIBLE
# 74 "data/maps/SubMare/scripts.pory"
	addobject LOCALID_SUBMARE_FOSSIL_R
# 76 "data/maps/SubMare/scripts.pory"
	setflag FLAG_SUBMARE_HIDEFOSSIL
	end

SubMare_Script_Fossil_2:
# 66 "data/maps/SubMare/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
	goto SubMare_Script_Fossil_1


SubMare_Script_CharybdisA::
# 81 "data/maps/SubMare/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 82 "data/maps/SubMare/scripts.pory"
	waitmovement 0
# 83 "data/maps/SubMare/scripts.pory"
	call SubMare_Script_CharybdisScene
	return


SubMare_Script_CharybdisB::
# 87 "data/maps/SubMare/scripts.pory"
	call SubMare_Script_CharybdisScene
	return


SubMare_Script_CharybdisC::
# 91 "data/maps/SubMare/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 92 "data/maps/SubMare/scripts.pory"
	waitmovement 0
# 93 "data/maps/SubMare/scripts.pory"
	call SubMare_Script_CharybdisScene
	return


SubMare_Script_CharybdisScene::
# 97 "data/maps/SubMare/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 98 "data/maps/SubMare/scripts.pory"
	waitmovement 0
# 99 "data/maps/SubMare/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 100 "data/maps/SubMare/scripts.pory"
	waitmovement 0
# 101 "data/maps/SubMare/scripts.pory"
	playmoncry SPECIES_WAILORD, CRY_MODE_ENCOUNTER
# 102 "data/maps/SubMare/scripts.pory"
	waitmoncry
# 103 "data/maps/SubMare/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 104 "data/maps/SubMare/scripts.pory"
	callnative DoCharybdisBattle
# 105 "data/maps/SubMare/scripts.pory"
	waitstate
# 106 "data/maps/SubMare/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 107 "data/maps/SubMare/scripts.pory"
	removeobject LOCALID_SUBMARE_CHARYBDIS
# 108 "data/maps/SubMare/scripts.pory"
	setobjectxyperm LOCALID_SUBMARE_CHARYBDIS, 0, 0
# 109 "data/maps/SubMare/scripts.pory"
	setobjectmovementtype LOCALID_SUBMARE_CHARYBDIS, MOVEMENT_TYPE_INVISIBLE
# 110 "data/maps/SubMare/scripts.pory"
	addobject LOCALID_SUBMARE_CHARYBDIS
# 112 "data/maps/SubMare/scripts.pory"
	setvar VAR_ULYSSES_STATE, 19
# 113 "data/maps/SubMare/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 114 "data/maps/SubMare/scripts.pory"
	waitmovement 0
# 115 "data/maps/SubMare/scripts.pory"
	applymovement LOCALID_PLAYER, Ardor_Uni_ArchaeologyClass_Movement_Spin
# 116 "data/maps/SubMare/scripts.pory"
	waitmovement 0
# 117 "data/maps/SubMare/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_SetInvisible
# 118 "data/maps/SubMare/scripts.pory"
	waitmovement 0
# 119 "data/maps/SubMare/scripts.pory"
	playse SE_M_WHIRLPOOL
# 120 "data/maps/SubMare/scripts.pory"
	waitse
# 121 "data/maps/SubMare/scripts.pory"
	playse SE_M_DIVE
# 122 "data/maps/SubMare/scripts.pory"
	waitse
# 123 "data/maps/SubMare/scripts.pory"
	warpsilent MAP_MARE_S4, 59, 10
	end

