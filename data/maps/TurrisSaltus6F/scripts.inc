TurrisSaltus6F_MapScripts::
# 6 "data/maps/TurrisSaltus6F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/TurrisSaltus6F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 22
	goto_if_lt TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/TurrisSaltus6F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 23
	goto_if_lt TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ShowDoorGuards
	goto TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ShowAeneasScene
	return


TurrisSaltus6F_Script_ShowDoorGuards::
# 19 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_DOORGUARD1, 5, 11
# 20 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_DOORGUARD1, MOVEMENT_TYPE_FACE_DOWN
# 21 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_DOORGUARD2, 9, 11
# 22 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_DOORGUARD2, MOVEMENT_TYPE_FACE_DOWN
	return


TurrisSaltus6F_Script_ShowAeneasScene::
# 27 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_CYNTHIA, 7, 2
# 28 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_CYNTHIA, MOVEMENT_TYPE_FACE_DOWN
# 29 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_AENEAS, 7, 2
# 30 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_AENEAS, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return


TurrisSaltus6F_Script_Doorguard1::
# 35 "data/maps/TurrisSaltus6F/scripts.pory"
	faceplayer
# 36 "data/maps/TurrisSaltus6F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 38 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_DoorguardPre1
# 39 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 41 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown
# 42 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 43 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkLeft3
# 44 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 46 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 47 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 48 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_DoorGuardBattle
# 50 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight4
# 51 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkRight4
# 52 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 53 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown
# 54 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 55 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown
# 56 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown
# 57 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 58 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ExeuntDoorGuards
	return


TurrisSaltus6F_Script_Doorguard2::
# 62 "data/maps/TurrisSaltus6F/scripts.pory"
	faceplayer
# 63 "data/maps/TurrisSaltus6F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 65 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_DoorguardPre1
# 66 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 68 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown
# 69 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 70 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight3
# 71 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 73 "data/maps/TurrisSaltus6F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 74 "data/maps/TurrisSaltus6F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq TurrisSaltus6F_Script_Doorguard2_2
# 83 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 84 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
TurrisSaltus6F_Script_Doorguard2_1:
# 86 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_DoorGuardBattle
# 88 "data/maps/TurrisSaltus6F/scripts.pory"
	goto_if_set FLAG_TEMP_A, TurrisSaltus6F_Script_Doorguard2_6
# 95 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkRight
# 96 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 97 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown
# 98 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 99 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight
# 100 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
TurrisSaltus6F_Script_Doorguard2_5:
# 102 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ExeuntDoorGuards
	return

TurrisSaltus6F_Script_Doorguard2_2:
# 75 "data/maps/TurrisSaltus6F/scripts.pory"
	setflag FLAG_TEMP_A
# 76 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight
# 77 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 78 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkUp
# 79 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 80 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 81 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
	goto TurrisSaltus6F_Script_Doorguard2_1

TurrisSaltus6F_Script_Doorguard2_6:
# 89 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown
# 90 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 91 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown
# 92 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown
# 93 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
	goto TurrisSaltus6F_Script_Doorguard2_5


TurrisSaltus6F_Script_Trigger_DoorguardA::
# 106 "data/maps/TurrisSaltus6F/scripts.pory"
	lockall
# 107 "data/maps/TurrisSaltus6F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 108 "data/maps/TurrisSaltus6F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 109 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_ExclamationMark
# 110 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_ExclamationMark
# 111 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 112 "data/maps/TurrisSaltus6F/scripts.pory"
	delay 30
# 113 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_FaceRight
# 114 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_FaceLeft
# 115 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 116 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkLeft2
# 117 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 118 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 119 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 121 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_DoorguardPre1
# 122 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 123 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 124 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 125 "data/maps/TurrisSaltus6F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 126 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_DoorGuardBattle
# 127 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown2
# 128 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown2
# 129 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 130 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight
# 131 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 132 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight3
# 133 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkRight3
# 134 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 135 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ExeuntDoorGuards
	return


TurrisSaltus6F_Script_Trigger_DoorguardB::
# 139 "data/maps/TurrisSaltus6F/scripts.pory"
	lockall
# 140 "data/maps/TurrisSaltus6F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 141 "data/maps/TurrisSaltus6F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 142 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_ExclamationMark
# 143 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_ExclamationMark
# 144 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 145 "data/maps/TurrisSaltus6F/scripts.pory"
	delay 30
# 146 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_FaceRight
# 147 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_FaceLeft
# 148 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 149 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight
# 150 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkLeft
# 151 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 152 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 153 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 155 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_DoorguardPre1
# 156 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 157 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 158 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 159 "data/maps/TurrisSaltus6F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 160 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_DoorGuardBattle
# 161 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown2
# 162 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown2
# 163 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 164 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight
# 165 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 166 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight2
# 167 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkRight2
# 168 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 169 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ExeuntDoorGuards
	return


TurrisSaltus6F_Script_Trigger_DoorguardC::
# 173 "data/maps/TurrisSaltus6F/scripts.pory"
	lockall
# 174 "data/maps/TurrisSaltus6F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 175 "data/maps/TurrisSaltus6F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 176 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_ExclamationMark
# 177 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_ExclamationMark
# 178 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 179 "data/maps/TurrisSaltus6F/scripts.pory"
	delay 30
# 180 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_FaceRight
# 181 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_FaceLeft
# 182 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 183 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight2
# 184 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 185 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 186 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 188 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_DoorguardPre1
# 189 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 190 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 191 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 192 "data/maps/TurrisSaltus6F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 193 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_DoorGuardBattle
# 194 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown2
# 195 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown2
# 196 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 197 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight
# 198 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 199 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight
# 200 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkRight
# 201 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 202 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ExeuntDoorGuards
	return


TurrisSaltus6F_Script_DoorGuardBattle::
# 208 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_DoorguardPre2
# 209 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 211 "data/maps/TurrisSaltus6F/scripts.pory"
	trainerbattle_two_trainers TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus6F_Text_DoorGuard1Lost, TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus6F_Text_DoorGuard2Lost
# 213 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_DoorguardPost
# 214 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
	return


TurrisSaltus6F_Script_ExeuntDoorGuards::
# 220 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight4
# 221 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkRight4
# 222 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 223 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkUp2
# 224 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkUp2
# 225 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 226 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkLeft
# 227 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkLeft
# 228 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 230 "data/maps/TurrisSaltus6F/scripts.pory"
	removeobject LOCALID_TURRISSALTUS6F_DOORGUARD1
# 231 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkLeft
# 232 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 233 "data/maps/TurrisSaltus6F/scripts.pory"
	removeobject LOCALID_TURRISSALTUS6F_DOORGUARD2
# 234 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_DOORGUARD1, 0, 0
# 235 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_DOORGUARD2, 0, 0
# 236 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_DOORGUARD1, MOVEMENT_TYPE_INVISIBLE
# 237 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_DOORGUARD2, MOVEMENT_TYPE_INVISIBLE
# 239 "data/maps/TurrisSaltus6F/scripts.pory"
	addvar VAR_TURRIS_SALTUS_STATE, 1
	end


TurrisSaltus6F_Text_DoorguardPre1::
# 244 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "We are Queen Elissa's most trusted\n"
	.string "guards.$"

TurrisSaltus6F_Text_DoorguardPre2::
# 248 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "No one may enter her private chamber\n"
	.string "without getting past us. Prepare to\l"
	.string "fall!$"

TurrisSaltus6F_Text_DoorGuard1Lost::
# 253 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "Turris Saltus has fallen!$"

TurrisSaltus6F_Text_DoorGuard2Lost::
# 257 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "We have failed!$"

TurrisSaltus6F_Text_DoorguardPost::
# 261 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "You have destroyed our way of life\n"
	.string "today and violated our most sacred\l"
	.string "place. The Tyrians you defeated today\l"
	.string "will neither forgive nor forget your\l"
	.string "acts. Disgraced, and defeated, we shall\l"
	.string "depart.$"
