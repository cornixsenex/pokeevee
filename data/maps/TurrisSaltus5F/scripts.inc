TurrisSaltus5F_MapScripts::
# 3 "data/maps/TurrisSaltus5F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TurrisSaltus5F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

TurrisSaltus5F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/TurrisSaltus5F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
	return


TurrisSaltus5F_Script_Tyrian14::
# 10 "data/maps/TurrisSaltus5F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 14
	goto_if_le TurrisSaltus5F_Script_Tyrian14_1
# 18 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenPost
	return

TurrisSaltus5F_Script_Tyrian14_1:
# 11 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_FaceUp
# 12 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 13 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 14 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_ExclamationMark
# 15 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 16 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian14A::
# 23 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 25 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 27 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_ExclamationMark
# 28 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 30 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 31 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 33 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_WalkUp4
# 34 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 36 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian14B::
# 40 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 42 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 44 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_ExclamationMark
# 45 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 47 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 48 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 50 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_WalkUp3
# 51 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 53 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian14C::
# 57 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 59 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 61 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_ExclamationMark
# 62 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 64 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 65 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 67 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_WalkUp2
# 68 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 70 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian14D::
# 74 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 76 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 78 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_ExclamationMark
# 79 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 81 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 82 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 84 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_WalkUp
# 85 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 87 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian14E::
# 91 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 93 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 95 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_ExclamationMark
# 96 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 98 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 99 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 102 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian15A::
# 106 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 108 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 110 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN15, Common_Movement_ExclamationMark
# 111 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 113 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 114 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 116 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN15, Common_Movement_WalkRight3
# 117 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 119 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian15B::
# 123 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 125 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 127 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN15, Common_Movement_ExclamationMark
# 128 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 130 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 131 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 133 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN15, Common_Movement_WalkRight4
# 134 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 136 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return

