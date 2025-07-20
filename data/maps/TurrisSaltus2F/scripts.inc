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
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
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
# 31 "data/maps/TurrisSaltus2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 33 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 35 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN5, Common_Movement_ExclamationMark
# 36 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 38 "data/maps/TurrisSaltus2F/scripts.pory"
	delay 30
# 39 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 40 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian5B::
# 47 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 48 "data/maps/TurrisSaltus2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 50 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 52 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN5, Common_Movement_ExclamationMark
# 53 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 55 "data/maps/TurrisSaltus2F/scripts.pory"
	delay 30
# 56 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 57 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN5, Common_Movement_WalkDown
# 60 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 62 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian6A::
# 66 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 67 "data/maps/TurrisSaltus2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 69 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 71 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN6, Common_Movement_ExclamationMark
# 72 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/TurrisSaltus2F/scripts.pory"
	delay 30
# 75 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 76 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN6, Common_Movement_WalkLeft
# 79 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian6B::
# 85 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 86 "data/maps/TurrisSaltus2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 88 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 90 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN6, Common_Movement_ExclamationMark
# 91 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 93 "data/maps/TurrisSaltus2F/scripts.pory"
	delay 30
# 94 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 95 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 98 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian7A::
# 102 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 103 "data/maps/TurrisSaltus2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 105 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 107 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN7, Common_Movement_ExclamationMark
# 108 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/TurrisSaltus2F/scripts.pory"
	delay 30
# 111 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 112 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 114 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN7, Common_Movement_WalkUp3
# 115 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 117 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian7B::
# 121 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 122 "data/maps/TurrisSaltus2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 124 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 126 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN7, Common_Movement_ExclamationMark
# 127 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 129 "data/maps/TurrisSaltus2F/scripts.pory"
	delay 30
# 130 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 131 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 133 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN7, Common_Movement_WalkUp2
# 134 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 136 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian7C::
# 140 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 141 "data/maps/TurrisSaltus2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 143 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 145 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN7, Common_Movement_ExclamationMark
# 146 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 148 "data/maps/TurrisSaltus2F/scripts.pory"
	delay 30
# 149 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 150 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 152 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN7, Common_Movement_WalkUp
# 153 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 155 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian16A::
# 159 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 160 "data/maps/TurrisSaltus2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 162 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 164 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN16, Common_Movement_ExclamationMark
# 165 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 167 "data/maps/TurrisSaltus2F/scripts.pory"
	delay 30
# 168 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 169 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 172 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus2F_Script_Trigger_Tyrian16B::
# 176 "data/maps/TurrisSaltus2F/scripts.pory"
	lockall
# 177 "data/maps/TurrisSaltus2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 179 "data/maps/TurrisSaltus2F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 181 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN16, Common_Movement_ExclamationMark
# 182 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 184 "data/maps/TurrisSaltus2F/scripts.pory"
	delay 30
# 185 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 186 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 188 "data/maps/TurrisSaltus2F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS2F_TYRIAN16, Common_Movement_WalkDown
# 189 "data/maps/TurrisSaltus2F/scripts.pory"
	waitmovement 0
# 191 "data/maps/TurrisSaltus2F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return

