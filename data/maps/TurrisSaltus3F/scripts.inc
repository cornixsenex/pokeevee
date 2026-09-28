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
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
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
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 33 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN9, Common_Movement_ExclamationMark
# 34 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 35 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Tyrian17::
# 42 "data/maps/TurrisSaltus3F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 17
	goto_if_le TurrisSaltus3F_Script_Tyrian17_1
# 50 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenPost
	return

TurrisSaltus3F_Script_Tyrian17_1:
# 43 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN17, Common_Movement_FaceUp
# 44 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 45 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 46 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN17, Common_Movement_ExclamationMark
# 47 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 48 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian8A::
# 56 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 57 "data/maps/TurrisSaltus3F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 59 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 61 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN8, Common_Movement_ExclamationMark
# 62 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 64 "data/maps/TurrisSaltus3F/scripts.pory"
	delay 30
# 65 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 66 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 68 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN8, Common_Movement_WalkLeft2
# 69 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 71 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian8B::
# 75 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 76 "data/maps/TurrisSaltus3F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 78 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 80 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN8, Common_Movement_ExclamationMark
# 81 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 83 "data/maps/TurrisSaltus3F/scripts.pory"
	delay 30
# 84 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 85 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 87 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN8, Common_Movement_WalkLeft
# 88 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 90 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian8C::
# 94 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 95 "data/maps/TurrisSaltus3F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 97 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 99 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN8, Common_Movement_ExclamationMark
# 100 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 102 "data/maps/TurrisSaltus3F/scripts.pory"
	delay 30
# 103 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 104 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 107 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian9A::
# 111 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 112 "data/maps/TurrisSaltus3F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 114 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 116 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN9, Common_Movement_ExclamationMark
# 117 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 119 "data/maps/TurrisSaltus3F/scripts.pory"
	delay 30
# 120 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 121 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 124 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian9B::
# 128 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 129 "data/maps/TurrisSaltus3F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 131 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 133 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN9, Common_Movement_ExclamationMark
# 134 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 136 "data/maps/TurrisSaltus3F/scripts.pory"
	delay 30
# 137 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 138 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 140 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN9, Common_Movement_WalkDown
# 141 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 143 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian10A::
# 147 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 148 "data/maps/TurrisSaltus3F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 150 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 152 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN10, Common_Movement_ExclamationMark
# 153 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 155 "data/maps/TurrisSaltus3F/scripts.pory"
	delay 30
# 156 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 157 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 159 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN10, Common_Movement_WalkRight
# 160 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 162 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian10B::
# 166 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 167 "data/maps/TurrisSaltus3F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 169 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 171 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN10, Common_Movement_ExclamationMark
# 172 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 174 "data/maps/TurrisSaltus3F/scripts.pory"
	delay 30
# 175 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 176 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 178 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN10, Common_Movement_WalkRight2
# 179 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 181 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian17A::
# 185 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 186 "data/maps/TurrisSaltus3F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 188 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 190 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN17, Common_Movement_ExclamationMark
# 191 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 193 "data/maps/TurrisSaltus3F/scripts.pory"
	delay 30
# 194 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 195 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 198 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian17B::
# 202 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 203 "data/maps/TurrisSaltus3F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 205 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 207 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN17, Common_Movement_ExclamationMark
# 208 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 210 "data/maps/TurrisSaltus3F/scripts.pory"
	delay 30
# 211 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 212 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 214 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN17, Common_Movement_WalkRight
# 215 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 217 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian17C::
# 221 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 222 "data/maps/TurrisSaltus3F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 224 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 226 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN17, Common_Movement_ExclamationMark
# 227 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 229 "data/maps/TurrisSaltus3F/scripts.pory"
	delay 30
# 230 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 231 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 233 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN17, Common_Movement_WalkRight2
# 234 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 236 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus3F_Script_Trigger_Tyrian17D::
# 240 "data/maps/TurrisSaltus3F/scripts.pory"
	lockall
# 241 "data/maps/TurrisSaltus3F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 243 "data/maps/TurrisSaltus3F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 245 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN17, Common_Movement_ExclamationMark
# 246 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 248 "data/maps/TurrisSaltus3F/scripts.pory"
	delay 30
# 249 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 250 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 252 "data/maps/TurrisSaltus3F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS3F_TYRIAN17, Common_Movement_WalkRight3
# 253 "data/maps/TurrisSaltus3F/scripts.pory"
	waitmovement 0
# 255 "data/maps/TurrisSaltus3F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return

