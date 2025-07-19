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
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
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
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
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
# 90 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 92 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN1, Common_Movement_ExclamationMark
# 93 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 95 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 96 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 99 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian1B::
# 103 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 105 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 107 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN1, Common_Movement_ExclamationMark
# 108 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 110 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 111 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 113 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN1, Common_Movement_WalkDown
# 114 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 116 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian2A::
# 120 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 122 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 124 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN2, Common_Movement_ExclamationMark
# 125 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 127 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 128 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 130 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN2, Common_Movement_WalkUp
# 131 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 133 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian2B::
# 137 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 139 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 141 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN2, Common_Movement_ExclamationMark
# 142 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 144 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 145 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 148 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian3A::
# 152 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 154 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 156 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN3, Common_Movement_ExclamationMark
# 157 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 159 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 160 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 163 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian3B::
# 167 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 169 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 171 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN3, Common_Movement_ExclamationMark
# 172 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 174 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 175 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 177 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN3, Common_Movement_WalkRight
# 178 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 180 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian4A::
# 184 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 186 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 188 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN4, Common_Movement_ExclamationMark
# 189 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 191 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 192 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 194 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN4, Common_Movement_WalkRight
# 195 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 197 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus1F_Script_Trigger_Tyrian4B::
# 201 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 203 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 205 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN4, Common_Movement_ExclamationMark
# 206 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 208 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 209 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 211 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN4, Common_Movement_WalkRight2
# 212 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 214 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus_Script_HandmaidenBattle::
# 220 "data/maps/TurrisSaltus1F/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 221 "data/maps/TurrisSaltus1F/scripts.pory"
	switch VAR_RESULT
# 222 "data/maps/TurrisSaltus1F/scripts.pory"
	case 0, TurrisSaltus_Script_HandmaidenBattle_3
# 224 "data/maps/TurrisSaltus1F/scripts.pory"
	case 1, TurrisSaltus_Script_HandmaidenBattle_4
# 226 "data/maps/TurrisSaltus1F/scripts.pory"
	case 2, TurrisSaltus_Script_HandmaidenBattle_5
# 228 "data/maps/TurrisSaltus1F/scripts.pory"
	case 3, TurrisSaltus_Script_HandmaidenBattle_6
# 230 "data/maps/TurrisSaltus1F/scripts.pory"
	case 4, TurrisSaltus_Script_HandmaidenBattle_7
# 232 "data/maps/TurrisSaltus1F/scripts.pory"
	case 5, TurrisSaltus_Script_HandmaidenBattle_8
# 234 "data/maps/TurrisSaltus1F/scripts.pory"
	case 6, TurrisSaltus_Script_HandmaidenBattle_9
# 236 "data/maps/TurrisSaltus1F/scripts.pory"
	case 7, TurrisSaltus_Script_HandmaidenBattle_10
# 238 "data/maps/TurrisSaltus1F/scripts.pory"
	case 8, TurrisSaltus_Script_HandmaidenBattle_11
# 240 "data/maps/TurrisSaltus1F/scripts.pory"
	case 9, TurrisSaltus_Script_HandmaidenBattle_12
# 243 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Script_HandmaidenBattle_Text_0
# 244 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 245 "data/maps/TurrisSaltus1F/scripts.pory"
	releaseall
	end

TurrisSaltus_Script_HandmaidenBattle_1:
# 248 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 250 "data/maps/TurrisSaltus1F/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 251 "data/maps/TurrisSaltus1F/scripts.pory"
	switch VAR_RESULT
# 252 "data/maps/TurrisSaltus1F/scripts.pory"
	case 0, TurrisSaltus_Script_HandmaidenBattle_16
# 254 "data/maps/TurrisSaltus1F/scripts.pory"
	case 1, TurrisSaltus_Script_HandmaidenBattle_17
# 256 "data/maps/TurrisSaltus1F/scripts.pory"
	case 2, TurrisSaltus_Script_HandmaidenBattle_18
# 258 "data/maps/TurrisSaltus1F/scripts.pory"
	case 3, TurrisSaltus_Script_HandmaidenBattle_19
# 260 "data/maps/TurrisSaltus1F/scripts.pory"
	case 4, TurrisSaltus_Script_HandmaidenBattle_20
# 262 "data/maps/TurrisSaltus1F/scripts.pory"
	case 5, TurrisSaltus_Script_HandmaidenBattle_21
# 264 "data/maps/TurrisSaltus1F/scripts.pory"
	case 6, TurrisSaltus_Script_HandmaidenBattle_22
# 266 "data/maps/TurrisSaltus1F/scripts.pory"
	case 7, TurrisSaltus_Script_HandmaidenBattle_23
# 268 "data/maps/TurrisSaltus1F/scripts.pory"
	case 8, TurrisSaltus_Script_HandmaidenBattle_24
# 270 "data/maps/TurrisSaltus1F/scripts.pory"
	case 9, TurrisSaltus_Script_HandmaidenBattle_25
# 273 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Script_HandmaidenBattle_Text_0
# 274 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 275 "data/maps/TurrisSaltus1F/scripts.pory"
	releaseall
	end

TurrisSaltus_Script_HandmaidenBattle_3:
# 223 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre10
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_4:
# 225 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre1
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_5:
# 227 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre2
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_6:
# 229 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre3
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_7:
# 231 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre4
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_8:
# 233 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre5
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_9:
# 235 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre6
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_10:
# 237 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre7
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_11:
# 239 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre8
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_12:
# 241 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPre9
	goto TurrisSaltus_Script_HandmaidenBattle_1

TurrisSaltus_Script_HandmaidenBattle_14:
# 279 "data/maps/TurrisSaltus1F/scripts.pory"
	addvar VAR_TURRIS_SALTUS_STATE, 1
# 281 "data/maps/TurrisSaltus1F/scripts.pory"
	releaseall
	end

TurrisSaltus_Script_HandmaidenBattle_16:
# 253 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost10
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_17:
# 255 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost1
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_18:
# 257 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost2
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_19:
# 259 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost3
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_20:
# 261 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost4
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_21:
# 263 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost5
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_22:
# 265 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost6
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_23:
# 267 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost7
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_24:
# 269 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost8
	goto TurrisSaltus_Script_HandmaidenBattle_14

TurrisSaltus_Script_HandmaidenBattle_25:
# 271 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus_Text_HandmaidenLost9
	goto TurrisSaltus_Script_HandmaidenBattle_14


TurrisSaltus_Script_HandmaidenPost::
# 286 "data/maps/TurrisSaltus1F/scripts.pory"
	faceplayer
# 288 "data/maps/TurrisSaltus1F/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 289 "data/maps/TurrisSaltus1F/scripts.pory"
	switch VAR_RESULT
# 290 "data/maps/TurrisSaltus1F/scripts.pory"
	case 0, TurrisSaltus_Script_HandmaidenPost_3
# 292 "data/maps/TurrisSaltus1F/scripts.pory"
	case 1, TurrisSaltus_Script_HandmaidenPost_4
# 294 "data/maps/TurrisSaltus1F/scripts.pory"
	case 2, TurrisSaltus_Script_HandmaidenPost_5
# 296 "data/maps/TurrisSaltus1F/scripts.pory"
	case 3, TurrisSaltus_Script_HandmaidenPost_6
# 298 "data/maps/TurrisSaltus1F/scripts.pory"
	case 4, TurrisSaltus_Script_HandmaidenPost_7
# 300 "data/maps/TurrisSaltus1F/scripts.pory"
	case 5, TurrisSaltus_Script_HandmaidenPost_8
# 302 "data/maps/TurrisSaltus1F/scripts.pory"
	case 6, TurrisSaltus_Script_HandmaidenPost_9
# 304 "data/maps/TurrisSaltus1F/scripts.pory"
	case 7, TurrisSaltus_Script_HandmaidenPost_10
# 306 "data/maps/TurrisSaltus1F/scripts.pory"
	case 8, TurrisSaltus_Script_HandmaidenPost_11
# 308 "data/maps/TurrisSaltus1F/scripts.pory"
	case 9, TurrisSaltus_Script_HandmaidenPost_12
# 311 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Script_HandmaidenBattle_Text_0
# 312 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 313 "data/maps/TurrisSaltus1F/scripts.pory"
	releaseall
	end

TurrisSaltus_Script_HandmaidenPost_1:
# 316 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 317 "data/maps/TurrisSaltus1F/scripts.pory"
	call Common_Script_Unfaceplayer
	end

TurrisSaltus_Script_HandmaidenPost_3:
# 291 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost10
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_4:
# 293 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost1
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_5:
# 295 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost2
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_6:
# 297 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost3
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_7:
# 299 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost4
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_8:
# 301 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost5
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_9:
# 303 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost6
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_10:
# 305 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost7
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_11:
# 307 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost8
	goto TurrisSaltus_Script_HandmaidenPost_1

TurrisSaltus_Script_HandmaidenPost_12:
# 309 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus_Text_HandmaidenPost9
	goto TurrisSaltus_Script_HandmaidenPost_1


TurrisSaltus_Script_HandmaidenBattle_Text_0:
# 243 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "ERROR RandDigit OOB$"

TurrisSaltus1F_Text_DoorGuardPre::
# 321 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Halt!\p"
	.string "Stop right there!\p"
	.string "This tower is private property of the\n"
	.string "Tyrian Maidens.\p"
	.string "Since you were not invited by our queen,\n"
	.string "but somehow managed to gain entrance\l"
	.string "here, we must kill you.\p"
	.string "A dead man tells no tales.$"

TurrisSaltus1F_Text_DoorGuard1Lost::
# 329 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Defeated...how?$"

TurrisSaltus1F_Text_DoorGuard2Lost::
# 333 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "We have failed you our queen!$"

TurrisSaltus1F_Text_DoorGuardPost::
# 337 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "You will pay for attacking our tower.$"

TurrisSaltus1F_Text_DoorGuardExit::
# 341 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Come, sister, let's arouse the tower\n"
	.string "guard.$"

TurrisSaltus_Text_HandmaidenPre1::
# 347 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Your intrustion is over.$"

TurrisSaltus_Text_HandmaidenPre2::
# 351 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Stop right there!$"

TurrisSaltus_Text_HandmaidenPre3::
# 355 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "None may enter but at the queen's\n"
	.string "pleasure.$"

TurrisSaltus_Text_HandmaidenPre4::
# 359 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "You never should have come here,\n"
	.string "outsider.$"

TurrisSaltus_Text_HandmaidenPre5::
# 363 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "This tower belongs to the Tyrians!$"

TurrisSaltus_Text_HandmaidenPre6::
# 367 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Intruder alert!$"

TurrisSaltus_Text_HandmaidenPre7::
# 371 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Stop, criminal scum!$"

TurrisSaltus_Text_HandmaidenPre8::
# 375 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "The queen will thank me for defeating\n"
	.string "you.$"

TurrisSaltus_Text_HandmaidenPre9::
# 379 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "You won't get past me! I'm a Tyrian.$"

TurrisSaltus_Text_HandmaidenPre10::
# 383 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Turris Saltus is not open to you.$"

TurrisSaltus_Text_HandmaidenLost1::
# 387 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Queen Elissa! I failed you...forgive me.$"

TurrisSaltus_Text_HandmaidenLost2::
# 391 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Impressive. Most impressive.$"

TurrisSaltus_Text_HandmaidenLost3::
# 395 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Aargh!$"

TurrisSaltus_Text_HandmaidenLost4::
# 399 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Ack!$"

TurrisSaltus_Text_HandmaidenLost5::
# 403 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "I'll never live this down.$"

TurrisSaltus_Text_HandmaidenLost6::
# 407 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "I'm so ashamed!$"

TurrisSaltus_Text_HandmaidenLost7::
# 411 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "This was my first time battling a boy.$"

TurrisSaltus_Text_HandmaidenLost8::
# 415 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "You're stronger than you look.$"

TurrisSaltus_Text_HandmaidenLost9::
# 419 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "I yield! I yield!$"

TurrisSaltus_Text_HandmaidenLost10::
# 423 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "You got lucky this time. It was just\n"
	.string "luck.$"

TurrisSaltus_Text_HandmaidenPost1::
# 427 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "I can't compel you, but still I must say,\n"
	.string "you must leave now. You are not welcome\l"
	.string "here.$"

TurrisSaltus_Text_HandmaidenPost2::
# 431 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Be gone! Trouble the Tyrians no more.$"

TurrisSaltus_Text_HandmaidenPost3::
# 435 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Our tower has never been so abused.$"

TurrisSaltus_Text_HandmaidenPost4::
# 439 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "I may have failed, but someone will stop\n"
	.string "you.$"

TurrisSaltus_Text_HandmaidenPost5::
# 443 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Turris Saltus was built to be our home\n"
	.string "and keep our all intruders, such as you.$"

TurrisSaltus_Text_HandmaidenPost6::
# 447 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "The Tropic people despise our tower,\n"
	.string "and say we built it by dishonest means.$"

TurrisSaltus_Text_HandmaidenPost7::
# 451 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Turris Saltus is the tallest building on\n"
	.string "the islands. It was built as high as our\l"
	.string "queen Elissa's Magikarp could jumpm$"

TurrisSaltus_Text_HandmaidenPost8::
# 455 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "We will stop you. We will have our\n"
	.string "revenge.$"

TurrisSaltus_Text_HandmaidenPost9::
# 459 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "It's not polite to gloat. You won, be\n"
	.string "off.$"

TurrisSaltus_Text_HandmaidenPost10::
# 463 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "You're anti-Tyrian! You don't respect\n"
	.string "the Tyrian women's right to exist.$"
