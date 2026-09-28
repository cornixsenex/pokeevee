TurrisSaltus5F_MapScripts::
# 3 "data/maps/TurrisSaltus5F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TurrisSaltus5F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

TurrisSaltus5F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/TurrisSaltus5F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
	return


TurrisSaltus5F_Script_Tyrian14::
# 11 "data/maps/TurrisSaltus5F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 14
	goto_if_le TurrisSaltus5F_Script_Tyrian14_1
# 19 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenPost
	return

TurrisSaltus5F_Script_Tyrian14_1:
# 12 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_FaceRight
# 13 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 14 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 15 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_ExclamationMark
# 16 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 17 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Tyrian19::
# 24 "data/maps/TurrisSaltus5F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 19
	goto_if_le TurrisSaltus5F_Script_Tyrian19_1
# 32 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenPost
	return

TurrisSaltus5F_Script_Tyrian19_1:
# 25 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN19, Common_Movement_FaceUp
# 26 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 27 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 28 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN19, Common_Movement_ExclamationMark
# 29 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 30 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian14A::
# 37 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 38 "data/maps/TurrisSaltus5F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 40 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 42 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_ExclamationMark
# 43 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 45 "data/maps/TurrisSaltus5F/scripts.pory"
	delay 30
# 46 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 47 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 49 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_WalkUp4
# 50 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 52 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian14B::
# 56 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 57 "data/maps/TurrisSaltus5F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 59 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 61 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_ExclamationMark
# 62 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 64 "data/maps/TurrisSaltus5F/scripts.pory"
	delay 30
# 65 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 66 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 68 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_WalkUp3
# 69 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 71 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian14C::
# 75 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 76 "data/maps/TurrisSaltus5F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 78 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 80 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_ExclamationMark
# 81 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 83 "data/maps/TurrisSaltus5F/scripts.pory"
	delay 30
# 84 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 85 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 87 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_WalkUp2
# 88 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 90 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian14D::
# 94 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 95 "data/maps/TurrisSaltus5F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 97 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 99 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_ExclamationMark
# 100 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 102 "data/maps/TurrisSaltus5F/scripts.pory"
	delay 30
# 103 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 104 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 106 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_WalkUp
# 107 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 109 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian14E::
# 113 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 114 "data/maps/TurrisSaltus5F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 116 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 118 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN14, Common_Movement_ExclamationMark
# 119 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 121 "data/maps/TurrisSaltus5F/scripts.pory"
	delay 30
# 122 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 123 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 126 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian15A::
# 130 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 131 "data/maps/TurrisSaltus5F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 133 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 135 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN15, Common_Movement_ExclamationMark
# 136 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 138 "data/maps/TurrisSaltus5F/scripts.pory"
	delay 30
# 139 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 140 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 142 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN15, Common_Movement_WalkRight3
# 143 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 145 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian15B::
# 149 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 150 "data/maps/TurrisSaltus5F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 152 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 154 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN15, Common_Movement_ExclamationMark
# 155 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 157 "data/maps/TurrisSaltus5F/scripts.pory"
	delay 30
# 158 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 159 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 161 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN15, Common_Movement_WalkRight4
# 162 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 164 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian19A::
# 168 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 169 "data/maps/TurrisSaltus5F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 171 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 173 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN19, Common_Movement_ExclamationMark
# 174 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 176 "data/maps/TurrisSaltus5F/scripts.pory"
	delay 30
# 177 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 178 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 181 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian19B::
# 185 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 186 "data/maps/TurrisSaltus5F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 188 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 190 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN19, Common_Movement_ExclamationMark
# 191 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 193 "data/maps/TurrisSaltus5F/scripts.pory"
	delay 30
# 194 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 195 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 197 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN19, Common_Movement_WalkRight
# 198 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 200 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian20A::
# 204 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 205 "data/maps/TurrisSaltus5F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 207 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 209 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN20, Common_Movement_ExclamationMark
# 210 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 212 "data/maps/TurrisSaltus5F/scripts.pory"
	delay 30
# 213 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 214 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 216 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN20, Common_Movement_WalkDown
# 217 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 219 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus5F_Script_Trigger_Tyrian20B::
# 223 "data/maps/TurrisSaltus5F/scripts.pory"
	lockall
# 224 "data/maps/TurrisSaltus5F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 226 "data/maps/TurrisSaltus5F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 228 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN20, Common_Movement_ExclamationMark
# 229 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 231 "data/maps/TurrisSaltus5F/scripts.pory"
	delay 30
# 232 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 233 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 235 "data/maps/TurrisSaltus5F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS5F_TYRIAN20, Common_Movement_WalkDown2
# 236 "data/maps/TurrisSaltus5F/scripts.pory"
	waitmovement 0
# 238 "data/maps/TurrisSaltus5F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return

