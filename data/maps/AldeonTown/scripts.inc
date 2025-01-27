AldeonTown_MapScripts::
# 14 "data//maps/AldeonTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data//maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 7
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data//maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 8
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data//maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowSnorlaxBlock
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data//maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowBlueLeafBlock
	return


AldeonTown_Script_ShowSnorlaxBlock::
# 26 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 9, 27, 22
# 27 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
# 28 "data//maps/AldeonTown/scripts.pory"
	addobject 9
# 29 "data//maps/AldeonTown/scripts.pory"
	showobjectat 9, MAP_ALDEON_TOWN
# 31 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 1, 25, 21
# 32 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 33 "data//maps/AldeonTown/scripts.pory"
	addobject 1
# 34 "data//maps/AldeonTown/scripts.pory"
	showobjectat 1, MAP_ALDEON_TOWN
	return


AldeonTown_Script_ShowBlueLeafBlock::
# 42 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 21, 22
# 43 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 44 "data//maps/AldeonTown/scripts.pory"
	addobject 8
# 45 "data//maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 47 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 21, 23
# 48 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 49 "data//maps/AldeonTown/scripts.pory"
	addobject 7
# 50 "data//maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 52 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 21, 21
# 53 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 54 "data//maps/AldeonTown/scripts.pory"
	addobject 6
# 55 "data//maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 57 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 21, 24
# 58 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 59 "data//maps/AldeonTown/scripts.pory"
	addobject 5
# 60 "data//maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
	return


AldeonTown_Script_TriggerLeafBattle::
# 66 "data//maps/AldeonTown/scripts.pory"
	lockall
# 68 "data//maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 8
# 70 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 71 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 72 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 73 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 75 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 76 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Script_TriggerLeafBattle_Text_0, MSGBOX_DEFAULT
# 77 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 78 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 80 "data//maps/AldeonTown/scripts.pory"
	removeobject 5
# 81 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 15, 9
# 82 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 83 "data//maps/AldeonTown/scripts.pory"
	addobject 5
# 84 "data//maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
# 86 "data//maps/AldeonTown/scripts.pory"
	removeobject 7
# 87 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 16, 9
# 88 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 89 "data//maps/AldeonTown/scripts.pory"
	addobject 7
# 90 "data//maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 92 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_Leaf1
# 93 "data//maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_Leaf1
# 94 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 95 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 96 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 98 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 99 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf1, MSGBOX_DEFAULT
# 100 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 101 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 103 "data//maps/AldeonTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, AldeonTown_Text_LeafLost
# 105 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 106 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf2, MSGBOX_DEFAULT
# 107 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 108 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 110 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 111 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 112 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 114 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 115 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue1, MSGBOX_DEFAULT
# 116 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 117 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 119 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 120 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 121 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 123 "data//maps/AldeonTown/scripts.pory"
	removeobject 6
# 124 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 0, 9
# 125 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 126 "data//maps/AldeonTown/scripts.pory"
	addobject 6
# 127 "data//maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 129 "data//maps/AldeonTown/scripts.pory"
	removeobject 8
# 130 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 0, 8
# 131 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
# 132 "data//maps/AldeonTown/scripts.pory"
	addobject 8
# 133 "data//maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 135 "data//maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_Blue1
# 136 "data//maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_Blue1
# 137 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 139 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 141 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 142 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue2, MSGBOX_DEFAULT
# 143 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 145 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 146 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 148 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 149 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf3, MSGBOX_DEFAULT
# 150 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 152 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 153 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue3, MSGBOX_DEFAULT
# 154 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 156 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 157 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf4, MSGBOX_DEFAULT
# 158 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 160 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 161 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue4, MSGBOX_DEFAULT
# 162 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 164 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 165 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf5, MSGBOX_DEFAULT
# 166 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 168 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 169 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue5, MSGBOX_DEFAULT
# 170 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 171 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 173 "data//maps/AldeonTown/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 174 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_WalkRight
# 175 "data//maps/AldeonTown/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 176 "data//maps/AldeonTown/scripts.pory"
	applymovement 8, Common_Movement_WalkDown
# 177 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 178 "data//maps/AldeonTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 179 "data//maps/AldeonTown/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 180 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 182 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 183 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue6, MSGBOX_DEFAULT
# 184 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 185 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 187 "data//maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_BlueLeafExeunt
# 188 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_BlueLeafExeunt
# 189 "data//maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_BlueLeafExeunt
# 190 "data//maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_BlueLeafExeunt
# 191 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 193 "data//maps/AldeonTown/scripts.pory"
	removeobject 5
# 194 "data//maps/AldeonTown/scripts.pory"
	removeobject 6
# 195 "data//maps/AldeonTown/scripts.pory"
	removeobject 7
# 196 "data//maps/AldeonTown/scripts.pory"
	removeobject 8
# 198 "data//maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowBlueLeafBlock
# 200 "data//maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_Script_Leaf::
# 205 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf6, MSGBOX_DEFAULT
# 206 "data//maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Blue::
# 211 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue7, MSGBOX_DEFAULT
# 212 "data//maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Zubat::
# 217 "data//maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_ZUBAT, CRY_MODE_NORMAL
# 218 "data//maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_Script_Igglybuff::
# 223 "data//maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_IGGLYBUFF, CRY_MODE_NORMAL
# 224 "data//maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_EventScript_FatMan::
# 229 "data//maps/AldeonTown/scripts.pory"
	lock
# 230 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 231 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan3, MSGBOX_DEFAULT
# 232 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 233 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_DoorWoman::
# 238 "data//maps/AldeonTown/scripts.pory"
	lock
# 239 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 240 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_DoorWoman, MSGBOX_DEFAULT
# 241 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 242 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_TownSign::
# 247 "data//maps/AldeonTown/scripts.pory"
	lock
# 248 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 249 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_TownSign, MSGBOX_DEFAULT
# 250 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 251 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_HouseSign::
# 256 "data//maps/AldeonTown/scripts.pory"
	lock
# 257 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 258 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_HouseSign, MSGBOX_DEFAULT
# 259 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 260 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_OldMan::
# 265 "data//maps/AldeonTown/scripts.pory"
	lock
# 266 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 267 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OldMan, MSGBOX_DEFAULT
# 268 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 269 "data//maps/AldeonTown/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 270 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 271 "data//maps/AldeonTown/scripts.pory"
	release
	end


# 275 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax1:
# 276 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 277 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 278 "data//maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 281 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax2:
# 282 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 283 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 284 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 285 "data//maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 288 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Leaf1:
# 289 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 289 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 289 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 289 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 289 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 289 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 289 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 289 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 290 "data//maps/AldeonTown/scripts.pory"
	face_up
	step_end

# 293 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Blue1:
# 294 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 294 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 294 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 294 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 294 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 294 "data//maps/AldeonTown/scripts.pory"
	walk_right
	step_end

# 297 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_BlueLeafExeunt:
# 298 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 298 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 298 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 298 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 298 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 298 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 298 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 298 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 298 "data//maps/AldeonTown/scripts.pory"
	walk_right
	step_end

AldeonTown_Script_TriggerLeafBattle_Text_0:
# 76 "data//maps/AldeonTown/scripts.pory"
	.string "Hey {PLAYER}!$"

AldeonTown_Text_FatMan_BlockExit::
# 301 "data//maps/AldeonTown/scripts.pory"
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlacis, can be mighty dangerous you\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_FatMan2::
# 305 "data//maps/AldeonTown/scripts.pory"
	.string "See, I told you that Snorlax would move\n"
	.string "eventually.$"

AldeonTown_Text_FatMan3::
# 309 "data//maps/AldeonTown/scripts.pory"
	.string "This town is great cuz the Rocket Party\n"
	.string "rarely ever bothers us!$"

AldeonTown_Text_DoorWoman::
# 313 "data//maps/AldeonTown/scripts.pory"
	.string "I'm sorry but if you no business with Mr.\n"
	.string "Johnson then you need to leave.$"

AldeonTown_Text_TownSign::
# 317 "data//maps/AldeonTown/scripts.pory"
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
# 321 "data//maps/AldeonTown/scripts.pory"
	.string "Johnson Residence\n"
	.string "No Solicitors!$"

AldeonTown_Text_Leaf1::
# 326 "data//maps/AldeonTown/scripts.pory"
	.string "Look! I asked my daddy for a Pokemon to\n"
	.string "protect and keep me safe. Isn't she\l"
	.string "cute? Let's see how strong she is!$"

AldeonTown_Text_LeafLost::
# 330 "data//maps/AldeonTown/scripts.pory"
	.string "Hey! That's enough! You're hurting her,\n"
	.string "please stop!$"

AldeonTown_Text_Leaf2::
# 334 "data//maps/AldeonTown/scripts.pory"
	.string "Looks like I need to learn better\n"
	.string "technique if I am going to keep myself\l"
	.string "safe.$"

AldeonTown_Text_Blue1::
# 338 "data//maps/AldeonTown/scripts.pory"
	.string "So sad...$"

AldeonTown_Text_Blue2::
# 343 "data//maps/AldeonTown/scripts.pory"
	.string "Such savage studies of slaughter\n"
	.string "should supercede a more sound syllabus.$"

AldeonTown_Text_Leaf3::
# 348 "data//maps/AldeonTown/scripts.pory"
	.string "Well pardon me, handsome unknown\n"
	.string "stranger, but truly I do not understand\l"
	.string "you. I thought that by battling\l"
	.string "Pokemon I would grow stronger as a\l"
	.string "trainer and I was planning to attend\l"
	.string "trainer school to better learn and grow\l"
	.string "as one myself.$"

AldeonTown_Text_Blue3::
# 353 "data//maps/AldeonTown/scripts.pory"
	.string "Your Pokemon will grow from battles yes\n"
	.string "but practicing in such a wonton way will\l"
	.string "only yield you diminished results. Those\l"
	.string "stuffy fools wasting away in that\l"
	.string "archaic, tyrannical, place called school\l"
	.string "can only teach you mediocrity. To be\l"
	.string "truly great you must innovate and\l"
	.string "break out of their stifling system.$"

AldeonTown_Text_Leaf4::
# 358 "data//maps/AldeonTown/scripts.pory"
	.string "We may not learn as well unsupervised\n"
	.string "but of the Trainer School, here in our\l"
	.string "midst, many have said we must attend,\l"
	.string "study, and graduate or else never be\l"
	.string "great.$"

AldeonTown_Text_Blue4::
# 363 "data//maps/AldeonTown/scripts.pory"
	.string "The many are not great for few are\n"
	.string "great. The teachers in their school\l"
	.string "have lied to them who lied to you. They\l"
	.string "jelously prevent their students from\l"
	.string "ever becoming great. If you will go with\l"
	.string "me you will be great, greater than all\l"
	.string "the students and teachers. You will\l"
	.string "become as gods among trainers with\l"
	.string "knowledge of both good and bad\l"
	.string "techniques.$"

AldeonTown_Text_Leaf5::
# 368 "data//maps/AldeonTown/scripts.pory"
	.string "Your flavored words and shapely form\n"
	.string "convince me there is truth in all of\l"
	.string "what you say. Therefore I will go with\l"
	.string "you. Please, teach me.$"

AldeonTown_Text_Blue5::
# 373 "data//maps/AldeonTown/scripts.pory"
	.string "Then let us go.$"

AldeonTown_Text_Blue6::
# 378 "data//maps/AldeonTown/scripts.pory"
	.string "Girls only, little bro.$"

AldeonTown_Text_Leaf6::
# 382 "data//maps/AldeonTown/scripts.pory"
	.string "You're so good at this! Wow! I'm learning\n"
	.string "lots!$"

AldeonTown_Text_Blue7::
# 386 "data//maps/AldeonTown/scripts.pory"
	.string "Yeah, just like that! You're doing so\n"
	.string "good girl.$"

AldeonTown_Text_OldMan::
# 390 "data//maps/AldeonTown/scripts.pory"
	.string "Hello, young man, I don't recognize you.\n"
	.string "I live here, in this house, with my\l"
	.string "brother. Go in and see him if you need to\l"
	.string "rest.$"
