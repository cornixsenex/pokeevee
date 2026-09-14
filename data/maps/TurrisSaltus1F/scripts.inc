TurrisSaltus1F_MapScripts::
# 3 "data/maps/TurrisSaltus1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TurrisSaltus1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TurrisSaltus1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/TurrisSaltus1F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 1
	goto_if_lt TurrisSaltus1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

TurrisSaltus1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus1F_Script_ShowDoorGuard
	return


TurrisSaltus1F_Script_ShowDoorGuard::
# 14 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS1F_DOORGUARD1, 19, 13
# 15 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS1F_DOORGUARD1, MOVEMENT_TYPE_FACE_DOWN
# 16 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS1F_DOORGUARD2, 20, 13
# 17 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS1F_DOORGUARD2, MOVEMENT_TYPE_FACE_DOWN
	return


TurrisSaltus1F_Script_DoorGuard::
# 24 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus1F_Text_DoorGuardPre
# 25 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 26 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_two_trainers TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus1F_Text_DoorGuard1Lost, TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus1F_Text_DoorGuard2Lost
# 28 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus1F_Text_DoorGuardPost
# 30 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_DOORGUARD1, Common_Movement_FaceRight
# 31 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_DOORGUARD2, Common_Movement_FaceLeft
# 32 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus1F_Text_DoorGuardExit
# 35 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 37 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_DOORGUARD1, Common_Movement_WalkUp2
# 38 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_DOORGUARD2, Common_Movement_WalkUp2
# 39 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_DOORGUARD1, Common_Movement_WalkLeft9
# 41 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_DOORGUARD2, Common_Movement_WalkLeft9
# 42 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/TurrisSaltus1F/scripts.pory"
	removeobject LOCALID_TURRISSALTUS1F_DOORGUARD1
# 45 "data/maps/TurrisSaltus1F/scripts.pory"
	removeobject LOCALID_TURRISSALTUS1F_DOORGUARD2
# 46 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS1F_DOORGUARD1, 0, 0
# 47 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS1F_DOORGUARD2 0, 0
# 48 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS1F_DOORGUARD1, MOVEMENT_TYPE_INVISIBLE
# 49 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS1F_DOORGUARD2, MOVEMENT_TYPE_INVISIBLE
# 50 "data/maps/TurrisSaltus1F/scripts.pory"
	addobject LOCALID_TURRISSALTUS1F_DOORGUARD1
# 51 "data/maps/TurrisSaltus1F/scripts.pory"
	addobject LOCALID_TURRISSALTUS1F_DOORGUARD2
# 53 "data/maps/TurrisSaltus1F/scripts.pory"
	addvar VAR_TURRIS_SALTUS_STATE, 1
# 55 "data/maps/TurrisSaltus1F/scripts.pory"
	release
	end


TurrisSaltus1F_Script_Tyrian2::
# 61 "data/maps/TurrisSaltus1F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 2
	goto_if_le TurrisSaltus1F_Script_Tyrian2_1
# 69 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenPost
	return

TurrisSaltus1F_Script_Tyrian2_1:
# 62 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN2, Common_Movement_FaceRight
# 63 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 64 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 65 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN2, Common_Movement_ExclamationMark
# 66 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 67 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Tyrian3::
# 74 "data/maps/TurrisSaltus1F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 3
	goto_if_le TurrisSaltus1F_Script_Tyrian3_1
# 82 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenPost
	return

TurrisSaltus1F_Script_Tyrian3_1:
# 75 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN3, Common_Movement_FaceDown
# 76 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 77 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 78 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN3, Common_Movement_ExclamationMark
# 79 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 80 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian1A::
# 88 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 89 "data/maps/TurrisSaltus1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 91 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 93 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN1, Common_Movement_ExclamationMark
# 94 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 96 "data/maps/TurrisSaltus1F/scripts.pory"
	delay 30
# 97 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 98 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian1B::
# 105 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 106 "data/maps/TurrisSaltus1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 108 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 110 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN1, Common_Movement_ExclamationMark
# 111 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 113 "data/maps/TurrisSaltus1F/scripts.pory"
	delay 30
# 114 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 115 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 117 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN1, Common_Movement_WalkDown
# 118 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 120 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian2A::
# 124 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 125 "data/maps/TurrisSaltus1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 127 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 129 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN2, Common_Movement_ExclamationMark
# 130 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 132 "data/maps/TurrisSaltus1F/scripts.pory"
	delay 30
# 133 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 134 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 136 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN2, Common_Movement_WalkUp
# 137 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 139 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian2B::
# 143 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 144 "data/maps/TurrisSaltus1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 146 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 148 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN2, Common_Movement_ExclamationMark
# 149 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 151 "data/maps/TurrisSaltus1F/scripts.pory"
	delay 30
# 152 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 153 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 156 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian3A::
# 160 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 161 "data/maps/TurrisSaltus1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 163 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 165 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN3, Common_Movement_ExclamationMark
# 166 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 168 "data/maps/TurrisSaltus1F/scripts.pory"
	delay 30
# 169 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 170 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 173 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian3B::
# 177 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 178 "data/maps/TurrisSaltus1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 180 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 182 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN3, Common_Movement_ExclamationMark
# 183 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 185 "data/maps/TurrisSaltus1F/scripts.pory"
	delay 30
# 186 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 187 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 189 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN3, Common_Movement_WalkRight
# 190 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 192 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian4A::
# 196 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 197 "data/maps/TurrisSaltus1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 199 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 201 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN4, Common_Movement_ExclamationMark
# 202 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 204 "data/maps/TurrisSaltus1F/scripts.pory"
	delay 30
# 205 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 206 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 208 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN4, Common_Movement_WalkRight
# 209 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 211 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian4B::
# 215 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 216 "data/maps/TurrisSaltus1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 218 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 220 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN4, Common_Movement_ExclamationMark
# 221 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 223 "data/maps/TurrisSaltus1F/scripts.pory"
	delay 30
# 224 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 225 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 227 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN4, Common_Movement_WalkRight2
# 228 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 230 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus_Script_HandmaidenBattle::
# 235 "data/maps/TurrisSaltus1F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 237 "data/maps/TurrisSaltus1F/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 238 "data/maps/TurrisSaltus1F/scripts.pory"
	switch VAR_RESULT
# 239 "data/maps/TurrisSaltus1F/scripts.pory"
	case 0, TurrisSaltus_Script_HandmaidenBattle_3
# 241 "data/maps/TurrisSaltus1F/scripts.pory"
	case 1, TurrisSaltus_Script_HandmaidenBattle_4
# 243 "data/maps/TurrisSaltus1F/scripts.pory"
	case 2, TurrisSaltus_Script_HandmaidenBattle_5
# 245 "data/maps/TurrisSaltus1F/scripts.pory"
	case 3, TurrisSaltus_Script_HandmaidenBattle_6
# 247 "data/maps/TurrisSaltus1F/scripts.pory"
	case 4, TurrisSaltus_Script_HandmaidenBattle_7
# 249 "data/maps/TurrisSaltus1F/scripts.pory"
	case 5, TurrisSaltus_Script_HandmaidenBattle_8
# 251 "data/maps/TurrisSaltus1F/scripts.pory"
	case 6, TurrisSaltus_Script_HandmaidenBattle_9
# 253 "data/maps/TurrisSaltus1F/scripts.pory"
	case 7, TurrisSaltus_Script_HandmaidenBattle_10
# 255 "data/maps/TurrisSaltus1F/scripts.pory"
	case 8, TurrisSaltus_Script_HandmaidenBattle_11
# 257 "data/maps/TurrisSaltus1F/scripts.pory"
	case 9, TurrisSaltus_Script_HandmaidenBattle_12
# 260 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Script_HandmaidenBattle_Text_0
# 261 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 262 "data/maps/TurrisSaltus1F/scripts.pory"
	releaseall
	end

TurrisSaltus_Script_HandmaidenBattle_1:
# 265 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 267 "data/maps/TurrisSaltus1F/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 268 "data/maps/TurrisSaltus1F/scripts.pory"
	switch VAR_RESULT
# 269 "data/maps/TurrisSaltus1F/scripts.pory"
	case 0, TurrisSaltus_Script_HandmaidenBattle_16
# 271 "data/maps/TurrisSaltus1F/scripts.pory"
	case 1, TurrisSaltus_Script_HandmaidenBattle_17
# 273 "data/maps/TurrisSaltus1F/scripts.pory"
	case 2, TurrisSaltus_Script_HandmaidenBattle_18
# 275 "data/maps/TurrisSaltus1F/scripts.pory"
	case 3, TurrisSaltus_Script_HandmaidenBattle_19
# 277 "data/maps/TurrisSaltus1F/scripts.pory"
	case 4, TurrisSaltus_Script_HandmaidenBattle_20
# 279 "data/maps/TurrisSaltus1F/scripts.pory"
	case 5, TurrisSaltus_Script_HandmaidenBattle_21
# 281 "data/maps/TurrisSaltus1F/scripts.pory"
	case 6, TurrisSaltus_Script_HandmaidenBattle_22
# 283 "data/maps/TurrisSaltus1F/scripts.pory"
	case 7, TurrisSaltus_Script_HandmaidenBattle_23
# 285 "data/maps/TurrisSaltus1F/scripts.pory"
	case 8, TurrisSaltus_Script_HandmaidenBattle_24
# 287 "data/maps/TurrisSaltus1F/scripts.pory"
	case 9, TurrisSaltus_Script_HandmaidenBattle_25
# 290 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Script_HandmaidenBattle_Text_0
# 291 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 292 "data/maps/TurrisSaltus1F/scripts.pory"
	releaseall
	end

TurrisSaltus_Script_HandmaidenBattle_3:
# 240 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre10
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_4:
# 242 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre1
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_5:
# 244 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre2
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_6:
# 246 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre3
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_7:
# 248 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre4
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_8:
# 250 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre5
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_9:
# 252 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre6
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_10:
# 254 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre7
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_11:
# 256 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre8
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_12:
# 258 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre9
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_14:
# 296 "data/maps/TurrisSaltus1F/scripts.pory"
	addvar VAR_TURRIS_SALTUS_STATE, 1
# 298 "data/maps/TurrisSaltus1F/scripts.pory"
	releaseall
	end

TurrisSaltus_Script_HandmaidenBattle_16:
# 270 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost10
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_17:
# 272 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost1
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_18:
# 274 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost2
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_19:
# 276 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost3
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_20:
# 278 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost4
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_21:
# 280 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost5
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_22:
# 282 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost6
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_23:
# 284 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost7
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_24:
# 286 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost8
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_25:
# 288 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost9
	goto TurrisSaltus_Script_HandmaidenBattle_14


TurrisSaltus_Script_HandmaidenPost::
# 303 "data/maps/TurrisSaltus1F/scripts.pory"
	faceplayer
# 305 "data/maps/TurrisSaltus1F/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 306 "data/maps/TurrisSaltus1F/scripts.pory"
	switch VAR_RESULT
# 307 "data/maps/TurrisSaltus1F/scripts.pory"
	case 0, TurrisSaltus_Script_HandmaidenPost_3
# 309 "data/maps/TurrisSaltus1F/scripts.pory"
	case 1, TurrisSaltus_Script_HandmaidenPost_4
# 311 "data/maps/TurrisSaltus1F/scripts.pory"
	case 2, TurrisSaltus_Script_HandmaidenPost_5
# 313 "data/maps/TurrisSaltus1F/scripts.pory"
	case 3, TurrisSaltus_Script_HandmaidenPost_6
# 315 "data/maps/TurrisSaltus1F/scripts.pory"
	case 4, TurrisSaltus_Script_HandmaidenPost_7
# 317 "data/maps/TurrisSaltus1F/scripts.pory"
	case 5, TurrisSaltus_Script_HandmaidenPost_8
# 319 "data/maps/TurrisSaltus1F/scripts.pory"
	case 6, TurrisSaltus_Script_HandmaidenPost_9
# 321 "data/maps/TurrisSaltus1F/scripts.pory"
	case 7, TurrisSaltus_Script_HandmaidenPost_10
# 323 "data/maps/TurrisSaltus1F/scripts.pory"
	case 8, TurrisSaltus_Script_HandmaidenPost_11
# 325 "data/maps/TurrisSaltus1F/scripts.pory"
	case 9, TurrisSaltus_Script_HandmaidenPost_12
# 328 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Script_HandmaidenBattle_Text_0
# 329 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 330 "data/maps/TurrisSaltus1F/scripts.pory"
	releaseall
	end

TurrisSaltus_Script_HandmaidenPost_1:
# 333 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 334 "data/maps/TurrisSaltus1F/scripts.pory"
	call Common_Script_Unfaceplayer
	end

TurrisSaltus_Script_HandmaidenPost_3:
# 308 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost10
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_4:
# 310 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost1
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_5:
# 312 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost2
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_6:
# 314 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost3
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_7:
# 316 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost4
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_8:
# 318 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost5
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_9:
# 320 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost6
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_10:
# 322 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost7
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_11:
# 324 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost8
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_12:
# 326 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost9
	goto TurrisSaltus_Script_HandmaidenPost_1


TurrisSaltus_Script_HandmaidenBattle_Text_0:
# 260 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "ERROR RandDigit OOB$"

TurrisSaltus1F_Text_DoorGuardPre::
# 338 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Halt!\p"
	.string "Stop right there!\p"
	.string "This tower is private property of the\n"
	.string "Tyrian Maidens.\p"
	.string "Since you were not invited by our queen,\n"
	.string "but somehow managed to gain entrance\l"
	.string "here, we must kill you.\p"
	.string "A dead man tells no tales.$"

TurrisSaltus1F_Text_DoorGuard1Lost::
# 346 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Defeated...how?$"

TurrisSaltus1F_Text_DoorGuard2Lost::
# 350 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "We have failed you our queen!$"

TurrisSaltus1F_Text_DoorGuardPost::
# 354 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "You will pay for attacking our tower.$"

TurrisSaltus1F_Text_DoorGuardExit::
# 358 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Come, sister, let's arouse the tower\n"
	.string "guard.$"

TurrisSaltus_Text_HandmaidenPre1::
# 364 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Your intrustion is over.$"

TurrisSaltus_Text_HandmaidenPre2::
# 368 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Stop right there!$"

TurrisSaltus_Text_HandmaidenPre3::
# 372 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "None may enter but at the queen's\n"
	.string "pleasure.$"

TurrisSaltus_Text_HandmaidenPre4::
# 376 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "You never should have come here,\n"
	.string "outsider.$"

TurrisSaltus_Text_HandmaidenPre5::
# 380 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "This tower belongs to the Tyrians!$"

TurrisSaltus_Text_HandmaidenPre6::
# 384 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Intruder alert!$"

TurrisSaltus_Text_HandmaidenPre7::
# 388 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Stop, criminal scum!$"

TurrisSaltus_Text_HandmaidenPre8::
# 392 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "The queen will thank me for defeating\n"
	.string "you.$"

TurrisSaltus_Text_HandmaidenPre9::
# 396 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "You won't get past me! I'm a Tyrian.$"

TurrisSaltus_Text_HandmaidenPre10::
# 400 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Turris Saltus is not open to you.$"

TurrisSaltus_Text_HandmaidenLost1::
# 404 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Queen Elissa! I failed you...forgive me.$"

TurrisSaltus_Text_HandmaidenLost2::
# 408 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Impressive. Most impressive.$"

TurrisSaltus_Text_HandmaidenLost3::
# 412 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Aargh!$"

TurrisSaltus_Text_HandmaidenLost4::
# 416 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Ack!$"

TurrisSaltus_Text_HandmaidenLost5::
# 420 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "I'll never live this down.$"

TurrisSaltus_Text_HandmaidenLost6::
# 424 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "I'm so ashamed!$"

TurrisSaltus_Text_HandmaidenLost7::
# 428 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "This was my first time battling a boy.$"

TurrisSaltus_Text_HandmaidenLost8::
# 432 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "You're stronger than you look.$"

TurrisSaltus_Text_HandmaidenLost9::
# 436 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "I yield! I yield!$"

TurrisSaltus_Text_HandmaidenLost10::
# 440 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "You got lucky this time. It was just\n"
	.string "luck.$"

TurrisSaltus_Text_HandmaidenPost1::
# 444 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "I can't compel you, but still I must say,\n"
	.string "you must leave now. You are not welcome\l"
	.string "here.$"

TurrisSaltus_Text_HandmaidenPost2::
# 448 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Be gone! Trouble the Tyrians no more.$"

TurrisSaltus_Text_HandmaidenPost3::
# 452 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Our tower has never been so abused.$"

TurrisSaltus_Text_HandmaidenPost4::
# 456 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "I may have failed, but someone will stop\n"
	.string "you.$"

TurrisSaltus_Text_HandmaidenPost5::
# 460 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Turris Saltus was built to be our home\n"
	.string "and keep out all intruders, such as you.$"

TurrisSaltus_Text_HandmaidenPost6::
# 464 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "The Tropic people despise our tower,\n"
	.string "and say we built it by dishonest means.$"

TurrisSaltus_Text_HandmaidenPost7::
# 468 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Turris Saltus is the tallest building on\n"
	.string "the islands. It was built as high as our\l"
	.string "queen Elissa's Magikarp could jumpm$"

TurrisSaltus_Text_HandmaidenPost8::
# 472 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "We will stop you. We will have our\n"
	.string "revenge.$"

TurrisSaltus_Text_HandmaidenPost9::
# 476 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "It's not polite to gloat. You won, be\n"
	.string "off.$"

TurrisSaltus_Text_HandmaidenPost10::
# 480 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "You're anti-Tyrian! You don't respect\n"
	.string "the Tyrian women's right to exist.$"
