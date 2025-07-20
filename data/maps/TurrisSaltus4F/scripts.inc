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
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 19 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN11, Common_Movement_ExclamationMark
# 20 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 21 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Tyrian18::
# 28 "data/maps/TurrisSaltus4F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 18
	goto_if_le TurrisSaltus4F_Script_Tyrian18_1
# 36 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenPost
	return

TurrisSaltus4F_Script_Tyrian18_1:
# 29 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN18, Common_Movement_FaceRight
# 30 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 31 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 32 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN18, Common_Movement_ExclamationMark
# 33 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 34 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian11A::
# 42 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 43 "data/maps/TurrisSaltus4F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 45 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 47 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN11, Common_Movement_ExclamationMark
# 48 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 50 "data/maps/TurrisSaltus4F/scripts.pory"
	delay 30
# 51 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 52 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 55 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian11B::
# 59 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 60 "data/maps/TurrisSaltus4F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 62 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 64 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN11, Common_Movement_ExclamationMark
# 65 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 67 "data/maps/TurrisSaltus4F/scripts.pory"
	delay 30
# 68 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 69 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 71 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN11, Common_Movement_WalkDown
# 72 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 74 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian11C::
# 78 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 79 "data/maps/TurrisSaltus4F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 81 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 83 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN11, Common_Movement_ExclamationMark
# 84 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 86 "data/maps/TurrisSaltus4F/scripts.pory"
	delay 30
# 87 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 88 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 90 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN11, Common_Movement_WalkDown2
# 91 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 93 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian12A::
# 97 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 98 "data/maps/TurrisSaltus4F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 100 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 102 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_ExclamationMark
# 103 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 105 "data/maps/TurrisSaltus4F/scripts.pory"
	delay 30
# 106 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 107 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 109 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_WalkLeft3
# 110 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 112 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian12B::
# 116 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 117 "data/maps/TurrisSaltus4F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 119 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 121 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_ExclamationMark
# 122 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 124 "data/maps/TurrisSaltus4F/scripts.pory"
	delay 30
# 125 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 126 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 128 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_WalkLeft2
# 129 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 131 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian12C::
# 135 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 136 "data/maps/TurrisSaltus4F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 138 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 140 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_ExclamationMark
# 141 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 143 "data/maps/TurrisSaltus4F/scripts.pory"
	delay 30
# 144 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 145 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 147 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_WalkLeft
# 148 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 150 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian12D::
# 154 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 155 "data/maps/TurrisSaltus4F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 157 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 159 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN12, Common_Movement_ExclamationMark
# 160 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 162 "data/maps/TurrisSaltus4F/scripts.pory"
	delay 30
# 163 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 164 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 167 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian13A::
# 171 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 172 "data/maps/TurrisSaltus4F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 174 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 176 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN13, Common_Movement_ExclamationMark
# 177 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 179 "data/maps/TurrisSaltus4F/scripts.pory"
	delay 30
# 180 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 181 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 183 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN13, Common_Movement_WalkRight3
# 184 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 186 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian13B::
# 190 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 191 "data/maps/TurrisSaltus4F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 193 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 195 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN13, Common_Movement_ExclamationMark
# 196 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 198 "data/maps/TurrisSaltus4F/scripts.pory"
	delay 30
# 199 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 200 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 202 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN13, Common_Movement_WalkRight4
# 203 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 205 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian18A::
# 209 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 210 "data/maps/TurrisSaltus4F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 212 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 214 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN18, Common_Movement_ExclamationMark
# 215 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 217 "data/maps/TurrisSaltus4F/scripts.pory"
	delay 30
# 218 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 219 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 221 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN18, Common_Movement_WalkUp
# 222 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 224 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus4F_Script_Trigger_Tyrian18B::
# 228 "data/maps/TurrisSaltus4F/scripts.pory"
	lockall
# 229 "data/maps/TurrisSaltus4F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 231 "data/maps/TurrisSaltus4F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 233 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS4F_TYRIAN18, Common_Movement_ExclamationMark
# 234 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 236 "data/maps/TurrisSaltus4F/scripts.pory"
	delay 30
# 237 "data/maps/TurrisSaltus4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 238 "data/maps/TurrisSaltus4F/scripts.pory"
	waitmovement 0
# 241 "data/maps/TurrisSaltus4F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return

