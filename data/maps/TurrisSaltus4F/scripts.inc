TurrisSaltus4F_MapScripts::
# 3 "data/maps/TurrisSaltus4F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TurrisSaltus4F_MapScripts_MAP_SCRIPT_ON_RESUME
# 7 "data/maps/TurrisSaltus4F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TurrisSaltus4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TurrisSaltus4F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/TurrisSaltus4F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
	return

TurrisSaltus4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/TurrisSaltus4F/scripts.pory"
	map_script_2 VAR_FALSEFLOOR_WAIT, 1, Common_Script_FalseFloorContinue
	.2byte 0


TurrisSaltus4F_Script_Tyrian11::
# 15 "data/maps/TurrisSaltus4F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 11
	goto_if_le TurrisSaltus4F_Script_Tyrian11_1
# 23 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenPost
	return

TurrisSaltus4F_Script_Tyrian11_1:
# 16 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN11, Common_Movement_FaceLeft
# 17 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 18 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 19 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN11, Common_Movement_ExclamationMark
# 20 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 21 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian11A::
# 29 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 31 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 33 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN11, Common_Movement_ExclamationMark
# 34 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 36 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 37 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 40 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian11B::
# 44 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 46 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 48 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN11, Common_Movement_ExclamationMark
# 49 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 51 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 52 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 54 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN11, Common_Movement_WalkDown
# 55 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 57 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian11C::
# 61 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 63 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 65 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN11, Common_Movement_ExclamationMark
# 66 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 68 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 69 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 71 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN11, Common_Movement_WalkDown2
# 72 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 74 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian12A::
# 78 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 80 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 82 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_ExclamationMark
# 83 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 85 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 86 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 88 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_WalkLeft3
# 89 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 91 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian12B::
# 95 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 97 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 99 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_ExclamationMark
# 100 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 102 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 103 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 105 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_WalkLeft2
# 106 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 108 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian12C::
# 112 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 114 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 116 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_ExclamationMark
# 117 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 119 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 120 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 122 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_WalkLeft
# 123 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 125 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian12D::
# 129 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 131 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 133 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_ExclamationMark
# 134 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 136 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 137 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 140 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian13A::
# 144 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 146 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 148 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN13, Common_Movement_ExclamationMark
# 149 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 151 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 152 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 154 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN13, Common_Movement_WalkRight3
# 155 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 157 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian13B::
# 161 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 163 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 165 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN13, Common_Movement_ExclamationMark
# 166 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 168 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 169 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 171 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN13, Common_Movement_WalkRight4
# 172 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 174 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return

