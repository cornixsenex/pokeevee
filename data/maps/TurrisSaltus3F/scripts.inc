TurrisSaltus3F_MapScripts::
# 3 "data/maps/TurrisSaltus3F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TurrisSaltus3F_MapScripts_MAP_SCRIPT_ON_RESUME
# 7 "data/maps/TurrisSaltus3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TurrisSaltus3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TurrisSaltus3F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/TurrisSaltus3F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
	return

TurrisSaltus3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/TurrisSaltus3F/scripts.pory"
	map_script_2 VAR_FALSEFLOOR_WAIT, 1, Common_Script_FalseFloorContinue
	.2byte 0


TurrisSaltus3F_Script_Tyrian8::
# 16 "data/maps/TurrisSaltus3F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 8
	goto_if_le TurrisSaltus3F_Script_Tyrian8_1
# 24 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenPost
	return

TurrisSaltus3F_Script_Tyrian8_1:
# 17 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN8, Common_Movement_FaceUp
# 18 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 19 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 20 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN8, Common_Movement_ExclamationMark
# 21 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 22 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Tyrian9::
# 29 "data/maps/TurrisSaltus3F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 9
	goto_if_le TurrisSaltus3F_Script_Tyrian9_1
# 37 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenPost
	return

TurrisSaltus3F_Script_Tyrian9_1:
# 30 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN9, Common_Movement_FaceRight
# 31 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 32 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 33 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN9, Common_Movement_ExclamationMark
# 34 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 35 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian8A::
# 43 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 45 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 47 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN8, Common_Movement_ExclamationMark
# 48 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 50 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 51 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 53 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN8, Common_Movement_WalkLeft2
# 54 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 56 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian8B::
# 60 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 62 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 64 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN8, Common_Movement_ExclamationMark
# 65 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 67 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 68 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 70 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN8, Common_Movement_WalkLeft
# 71 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 73 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian8C::
# 77 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 79 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 81 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN8, Common_Movement_ExclamationMark
# 82 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 84 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 85 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 88 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian9A::
# 92 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 94 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 96 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN9, Common_Movement_ExclamationMark
# 97 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 99 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 100 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 103 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian9B::
# 107 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 109 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 111 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN9, Common_Movement_ExclamationMark
# 112 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 114 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 115 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 117 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN9, Common_Movement_WalkDown
# 118 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 120 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian10A::
# 124 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 126 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 128 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN10, Common_Movement_ExclamationMark
# 129 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 131 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 132 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 134 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN10, Common_Movement_WalkRight
# 135 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 137 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian10B::
# 141 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 143 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 145 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN10, Common_Movement_ExclamationMark
# 146 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 148 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 149 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 151 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN10, Common_Movement_WalkRight2
# 152 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 154 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return

