TurrisSaltus6F_MapScripts::
# 8 "data/maps/TurrisSaltus6F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/TurrisSaltus6F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 22
	goto_if_lt TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/TurrisSaltus6F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 23
	goto_if_lt TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ShowDoorGuards
	goto TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ShowAeneasScene
	return


TurrisSaltus6F_Script_ShowDoorGuards::
# 21 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_DOORGUARD1, 5, 11
# 22 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_DOORGUARD1, MOVEMENT_TYPE_FACE_DOWN
# 23 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_DOORGUARD2, 9, 11
# 24 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_DOORGUARD2, MOVEMENT_TYPE_FACE_DOWN
	return


TurrisSaltus6F_Script_ShowAeneasScene::
# 29 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_ELISSA, 7, 2
# 30 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_ELISSA, MOVEMENT_TYPE_FACE_DOWN
# 31 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_AENEAS, 7, 2
# 32 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_AENEAS, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return


TurrisSaltus6F_Script_Doorguard1::
# 37 "data/maps/TurrisSaltus6F/scripts.pory"
	faceplayer
# 38 "data/maps/TurrisSaltus6F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 40 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_DoorguardPre1
# 41 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 43 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown
# 44 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 45 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkLeft3
# 46 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 48 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 49 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 50 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_DoorGuardBattle
# 52 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight4
# 53 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkRight4
# 54 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 55 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown
# 56 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 57 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown
# 58 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown
# 59 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 60 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ExeuntDoorGuards
	return


TurrisSaltus6F_Script_Doorguard2::
# 64 "data/maps/TurrisSaltus6F/scripts.pory"
	faceplayer
# 65 "data/maps/TurrisSaltus6F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 67 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_DoorguardPre1
# 68 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 70 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown
# 71 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 72 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight3
# 73 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 75 "data/maps/TurrisSaltus6F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 76 "data/maps/TurrisSaltus6F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq TurrisSaltus6F_Script_Doorguard2_2
# 85 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 86 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
TurrisSaltus6F_Script_Doorguard2_1:
# 88 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_DoorGuardBattle
# 90 "data/maps/TurrisSaltus6F/scripts.pory"
	goto_if_set FLAG_TEMP_A, TurrisSaltus6F_Script_Doorguard2_6
# 97 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkRight
# 98 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 99 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown
# 100 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 101 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown
# 102 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown
# 103 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 104 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight
# 105 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
TurrisSaltus6F_Script_Doorguard2_5:
# 107 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ExeuntDoorGuards
	return

TurrisSaltus6F_Script_Doorguard2_2:
# 77 "data/maps/TurrisSaltus6F/scripts.pory"
	setflag FLAG_TEMP_A
# 78 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight2
# 79 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 80 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_FaceUp
# 81 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 82 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 83 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
	goto TurrisSaltus6F_Script_Doorguard2_1

TurrisSaltus6F_Script_Doorguard2_6:
# 91 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown
# 92 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 93 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown
# 94 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown
# 95 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
	goto TurrisSaltus6F_Script_Doorguard2_5


TurrisSaltus6F_Script_Trigger_DoorguardA::
# 111 "data/maps/TurrisSaltus6F/scripts.pory"
	lockall
# 112 "data/maps/TurrisSaltus6F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 113 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_ExclamationMark
# 114 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_ExclamationMark
# 115 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 116 "data/maps/TurrisSaltus6F/scripts.pory"
	delay 30
# 117 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_FaceRight
# 118 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_FaceLeft
# 119 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 120 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkLeft2
# 121 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 122 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 123 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 125 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_DoorguardPre1
# 126 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 127 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 128 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 129 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_DoorGuardBattle
# 130 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown2
# 131 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown2
# 132 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 133 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight
# 134 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 135 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight3
# 136 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkRight3
# 137 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 138 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ExeuntDoorGuards
	return


TurrisSaltus6F_Script_Trigger_DoorguardB::
# 142 "data/maps/TurrisSaltus6F/scripts.pory"
	lockall
# 143 "data/maps/TurrisSaltus6F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 144 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_ExclamationMark
# 145 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_ExclamationMark
# 146 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 147 "data/maps/TurrisSaltus6F/scripts.pory"
	delay 30
# 148 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_FaceRight
# 149 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_FaceLeft
# 150 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 151 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight
# 152 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkLeft
# 153 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 154 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 155 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 157 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_DoorguardPre1
# 158 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 159 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 160 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 161 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_DoorGuardBattle
# 162 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown2
# 163 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown2
# 164 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 165 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight
# 166 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 167 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight2
# 168 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkRight2
# 169 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 170 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ExeuntDoorGuards
	return


TurrisSaltus6F_Script_Trigger_DoorguardC::
# 174 "data/maps/TurrisSaltus6F/scripts.pory"
	lockall
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
	call TurrisSaltus6F_Script_DoorGuardBattle
# 193 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkDown2
# 194 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkDown2
# 195 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 196 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight
# 197 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 198 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight
# 199 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkRight
# 200 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 201 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ExeuntDoorGuards
	return


TurrisSaltus6F_Script_DoorGuardBattle::
# 207 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_DoorguardPre2
# 208 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 210 "data/maps/TurrisSaltus6F/scripts.pory"
	trainerbattle_two_trainers TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus6F_Text_DoorGuard1Lost, TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus6F_Text_DoorGuard2Lost
# 212 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_DoorguardPost
# 213 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
	return


TurrisSaltus6F_Script_ExeuntDoorGuards::
# 219 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkRight4
# 220 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkRight4
# 221 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 222 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkUp2
# 223 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkUp2
# 224 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 225 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD1, Common_Movement_WalkLeft
# 226 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkLeft
# 227 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 229 "data/maps/TurrisSaltus6F/scripts.pory"
	removeobject LOCALID_TURRISSALTUS6F_DOORGUARD1
# 230 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_DOORGUARD2, Common_Movement_WalkLeft
# 231 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 232 "data/maps/TurrisSaltus6F/scripts.pory"
	removeobject LOCALID_TURRISSALTUS6F_DOORGUARD2
# 233 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_DOORGUARD1, 0, 0
# 234 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_DOORGUARD2, 0, 0
# 235 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_DOORGUARD1, MOVEMENT_TYPE_INVISIBLE
# 236 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_DOORGUARD2, MOVEMENT_TYPE_INVISIBLE
# 238 "data/maps/TurrisSaltus6F/scripts.pory"
	addvar VAR_TURRIS_SALTUS_STATE, 1
# 239 "data/maps/TurrisSaltus6F/scripts.pory"
	setflag FLAG_TURRISSALTUS_HIDETYRIANS
# 241 "data/maps/TurrisSaltus6F/scripts.pory"
	releaseall
	end


TurrisSaltus6F_Script_Trigger_AeneasSceneA::
# 246 "data/maps/TurrisSaltus6F/scripts.pory"
	setvar VAR_TEMP_5, 1
# 247 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_AeneasScene
	return


TurrisSaltus6F_Script_Trigger_AeneasSceneB::
# 251 "data/maps/TurrisSaltus6F/scripts.pory"
	setvar VAR_TEMP_5, 2
# 252 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_AeneasScene
	return


TurrisSaltus6F_Script_Trigger_AeneasSceneC::
# 256 "data/maps/TurrisSaltus6F/scripts.pory"
	setvar VAR_TEMP_5, 3
# 257 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_AeneasScene
	return


TurrisSaltus6F_Script_AeneasScene::
# 261 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp4
# 262 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 263 "data/maps/TurrisSaltus6F/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq TurrisSaltus6F_Script_AeneasScene_2
TurrisSaltus6F_Script_AeneasScene_1:
# 269 "data/maps/TurrisSaltus6F/scripts.pory"
	compare VAR_TEMP_5, 3
	goto_if_eq TurrisSaltus6F_Script_AeneasScene_5
TurrisSaltus6F_Script_AeneasScene_4:
# 275 "data/maps/TurrisSaltus6F/scripts.pory"
	delay 60
# 276 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 277 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 278 "data/maps/TurrisSaltus6F/scripts.pory"
	delay 60
# 279 "data/maps/TurrisSaltus6F/scripts.pory"
	lock
# 280 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_AENEAS, Common_Movement_ExclamationMark
# 281 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 282 "data/maps/TurrisSaltus6F/scripts.pory"
	delay 60
# 284 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_AENEAS, Common_Movement_WalkLeft2
# 285 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 286 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_AENEAS, Common_Movement_WalkDown
# 287 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 289 "data/maps/TurrisSaltus6F/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 290 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_Elissa1
# 292 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_ELISSA, Common_Movement_ExclamationMark
# 293 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 295 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Script_AeneasScene_Text_0
# 298 "data/maps/TurrisSaltus6F/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 299 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 300 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_ELISSA, Common_Movement_WalkRight2
# 301 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 302 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_ELISSA, Common_Movement_WalkDown
# 303 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 304 "data/maps/TurrisSaltus6F/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 305 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_Elissa2
# 306 "data/maps/TurrisSaltus6F/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 307 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_ELISSA, Common_Movement_FaceLeft
# 308 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_AENEAS, Common_Movement_FaceRight
# 309 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 311 "data/maps/TurrisSaltus6F/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 312 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_Aeneas1
# 313 "data/maps/TurrisSaltus6F/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 315 "data/maps/TurrisSaltus6F/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 316 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_ELISSA, Common_Movement_ExclamationMark
# 317 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 319 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_Elissa3
# 320 "data/maps/TurrisSaltus6F/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 322 "data/maps/TurrisSaltus6F/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 323 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_Aeneas2
# 324 "data/maps/TurrisSaltus6F/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 326 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_ELISSA, Common_Movement_FaceDown
# 327 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 328 "data/maps/TurrisSaltus6F/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 329 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_AENEAS, Common_Movement_WalkDown7
# 330 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_Elissa4
# 331 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 334 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_ELISSA, Common_Movement_WalkDown
# 335 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 336 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_ELISSA, Common_Movement_WalkLeft
# 337 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 339 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 340 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 342 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_Elissa5
# 343 "data/maps/TurrisSaltus6F/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 344 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 346 "data/maps/TurrisSaltus6F/scripts.pory"
	trainerbattle_no_intro TRAINER_ELISSA, TurrisSaltus6_Text_ElissaLost
# 348 "data/maps/TurrisSaltus6F/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 349 "data/maps/TurrisSaltus6F/scripts.pory"
	msgbox TurrisSaltus6F_Text_Elissa6
# 350 "data/maps/TurrisSaltus6F/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 351 "data/maps/TurrisSaltus6F/scripts.pory"
	closemessage
# 353 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_ELISSA, Common_Movement_WalkDown5
# 354 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 355 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS6F_ELISSA, Common_Movement_WalkDown2
# 356 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 358 "data/maps/TurrisSaltus6F/scripts.pory"
	removeobject LOCALID_TURRISSALTUS6F_ELISSA
# 359 "data/maps/TurrisSaltus6F/scripts.pory"
	removeobject LOCALID_TURRISSALTUS6F_AENEAS
# 360 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_ELISSA, 0, 0
# 361 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_AENEAS, 0, 0
# 362 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_AENEAS, MOVEMENT_TYPE_INVISIBLE
# 363 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_ELISSA, MOVEMENT_TYPE_INVISIBLE
# 365 "data/maps/TurrisSaltus6F/scripts.pory"
	addvar VAR_TURRIS_SALTUS_STATE, 1
# 367 "data/maps/TurrisSaltus6F/scripts.pory"
	setvar VAR_AENEID_STATE, 2
# 369 "data/maps/TurrisSaltus6F/scripts.pory"
	release
	end

TurrisSaltus6F_Script_AeneasScene_2:
# 264 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 265 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 266 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 267 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
	goto TurrisSaltus6F_Script_AeneasScene_1

TurrisSaltus6F_Script_AeneasScene_5:
# 270 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 271 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
# 272 "data/maps/TurrisSaltus6F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 273 "data/maps/TurrisSaltus6F/scripts.pory"
	waitmovement 0
	goto TurrisSaltus6F_Script_AeneasScene_4


TurrisSaltus6F_Script_AeneasScene_Text_0:
# 295 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "Aaahh!$"

TurrisSaltus6F_Text_DoorguardPre1::
# 373 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "We are Queen Elissa's most trusted\n"
	.string "guards.$"

TurrisSaltus6F_Text_DoorguardPre2::
# 377 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "No one may enter her private chamber\n"
	.string "without getting past us. Prepare to\l"
	.string "fall!$"

TurrisSaltus6F_Text_DoorGuard1Lost::
# 382 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "Turris Saltus has fallen!$"

TurrisSaltus6F_Text_DoorGuard2Lost::
# 386 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "We have failed!$"

TurrisSaltus6F_Text_DoorguardPost::
# 390 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "You have destroyed our way of life\n"
	.string "today and violated our most sacred\l"
	.string "place. The Tyrians you defeated today\l"
	.string "will neither forgive nor forget your\l"
	.string "acts. Disgraced, and defeated, we shall\l"
	.string "depart.$"

TurrisSaltus6F_Text_Elissa1::
# 398 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "Aeneas, prince, what's wrong...$"

TurrisSaltus6F_Text_Elissa2::
# 402 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "What nightmare has disturbed our love\n"
	.string "filled bed? What vagabond would so\l"
	.string "roughly violate our tower and break the\l"
	.string "royal seal of our chamber?$"

TurrisSaltus6F_Text_Elissa3::
# 409 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "This can't be so! How could you scorn\n"
	.string "our love? I'm sure this must be some\l"
	.string "outrageous scheme to pacify this\l"
	.string "violent tresspasser before you waste\l"
	.string "him and return to bed.$"

TurrisSaltus6F_Text_Elissa4::
# 416 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "Aeneas! You will curse this betrayal! I\n"
	.string "name you traitor, enemy of our state,\l"
	.string "and declare bitter war on you and your\l"
	.string "descendants forever! War without end!\l"
	.string "And you!$"

TurrisSaltus6F_Text_Elissa5::
# 424 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "You are the arrow cruelly shot that\n"
	.string "pierced my heart and tore away my love!\l"
	.string "For violating our Turris Saltus,\l"
	.string "befriending the traitor, Aeneas Pig, and\l"
	.string "butchering my love, you die today.$"

TurrisSaltus6_Text_ElissaLost::
# 432 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "I'm fallen! Like my love, I am no more.$"

TurrisSaltus6F_Text_Elissa6::
# 436 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "Too sick to scream, too weak to have\n"
	.string "revenge, too lowly to hope for recovery,\l"
	.string "I persist in this world devoid of light\l"
	.string "like some kind of ghost or fallen angel,\l"
	.string "who once dwelt happily in the glow of\l"
	.string "love, now ripped out and cast down to\l"
	.string "Tartarus. The one and only choice I've\l"
	.string "left to make, this life in hell, or death.\l"
	.string "I choose to die.$"

TurrisSaltus6F_Text_Aeneas1::
# 447 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "This man is my companioin on our quest\n"
	.string "to reach Hesperia and found a new\l"
	.string "mighty city to one day rule the world.\l"
	.string "His arrival reminds me of that quest.\l"
	.string "Elissa, queen, I must be on my way for as\l"
	.string "sweetly as I have come to love your\l"
	.string "royal bed, and all fruits held therin, my\l"
	.string "piety, sacred obedience, and love of\l"
	.string "destiny is stronger yet.$"

TurrisSaltus6F_Text_Aeneas2::
# 459 "data/maps/TurrisSaltus6F/scripts.pory"
	.string "Elissa, by the sun, the moon, and stars,\n"
	.string "I do not lie. I must leave you. Goodbye.$"
