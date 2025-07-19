TurrisSaltus2F_MapScripts::
# 3 "data/maps/TurrisSaltus2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TurrisSaltus2F_MapScripts_MAP_SCRIPT_ON_RESUME
# 7 "data/maps/TurrisSaltus2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TurrisSaltus2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TurrisSaltus2F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/TurrisSaltus2F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
	return

TurrisSaltus2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/TurrisSaltus2F/scripts.pory"
	map_script_2 VAR_FALSEFLOOR_WAIT, 1, Common_Script_FalseFloorContinue
	.2byte 0


TurrisSaltus2F_Script_Tyrian5::
# 15 "data/maps/TurrisSaltus2F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 5
	goto_if_le TurrisSaltus2F_Script_Tyrian5_1
# 24 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenPost
	return

TurrisSaltus2F_Script_Tyrian5_1:
# 16 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN5, Common_Movement_FaceRight
# 17 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 18 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 19 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN5, Common_Movement_ExclamationMark
# 20 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 21 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian5A::
# 30 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 32 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 34 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN5, Common_Movement_ExclamationMark
# 35 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 38 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 41 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian5B::
# 45 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 47 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 49 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN5, Common_Movement_ExclamationMark
# 50 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 52 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 53 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 55 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN5, Common_Movement_WalkDown
# 56 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 58 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian6A::
# 62 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 64 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 66 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN6, Common_Movement_ExclamationMark
# 67 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 70 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN6, Common_Movement_WalkLeft
# 73 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 75 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian6B::
# 79 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 81 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 83 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN6, Common_Movement_ExclamationMark
# 84 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 86 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 87 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 90 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian7A::
# 94 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 96 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 98 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN7, Common_Movement_ExclamationMark
# 99 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 102 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 104 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN7, Common_Movement_WalkUp3
# 105 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian7B::
# 111 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 113 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 115 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN7, Common_Movement_ExclamationMark
# 116 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 119 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 121 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN7, Common_Movement_WalkUp2
# 122 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian7C::
# 128 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 130 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 132 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN7, Common_Movement_ExclamationMark
# 133 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 135 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 136 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 138 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN7, Common_Movement_WalkUp
# 139 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 141 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return

