AldeonTown_MapScripts::
# 15 "data//maps/AldeonTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data//maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_lt AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data//maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 8
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 22 "data//maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_lt AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data//maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowSnorlaxBlock
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 20 "data//maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowBlueLeafBlock
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 23 "data//maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowScottBlock
	return


AldeonTown_Script_ShowScottBlock::
# 30 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 10, 22, 8
# 31 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 32 "data//maps/AldeonTown/scripts.pory"
	addobject 10
# 33 "data//maps/AldeonTown/scripts.pory"
	showobjectat 10, MAP_ALDEON_TOWN
	return


AldeonTown_Script_ShowSnorlaxBlock::
# 39 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 9, 27, 22
# 40 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
# 41 "data//maps/AldeonTown/scripts.pory"
	addobject 9
# 42 "data//maps/AldeonTown/scripts.pory"
	showobjectat 9, MAP_ALDEON_TOWN
# 44 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 1, 25, 21
# 45 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 46 "data//maps/AldeonTown/scripts.pory"
	addobject 1
# 47 "data//maps/AldeonTown/scripts.pory"
	showobjectat 1, MAP_ALDEON_TOWN
	return


AldeonTown_Script_ShowBlueLeafBlock::
# 53 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 21, 22
# 54 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 55 "data//maps/AldeonTown/scripts.pory"
	addobject 8
# 56 "data//maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 58 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 21, 23
# 59 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 60 "data//maps/AldeonTown/scripts.pory"
	addobject 7
# 61 "data//maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 63 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 21, 21
# 64 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 65 "data//maps/AldeonTown/scripts.pory"
	addobject 6
# 66 "data//maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 68 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 21, 24
# 69 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 70 "data//maps/AldeonTown/scripts.pory"
	addobject 5
# 71 "data//maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
	return


AldeonTown_Script_TriggerLeafBattle::
# 77 "data//maps/AldeonTown/scripts.pory"
	lockall
# 79 "data//maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 8
# 81 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 82 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 83 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 84 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 86 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 87 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Script_TriggerLeafBattle_Text_0, MSGBOX_DEFAULT
# 88 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 89 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 91 "data//maps/AldeonTown/scripts.pory"
	removeobject 5
# 92 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 15, 9
# 93 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 94 "data//maps/AldeonTown/scripts.pory"
	addobject 5
# 95 "data//maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
# 97 "data//maps/AldeonTown/scripts.pory"
	removeobject 7
# 98 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 16, 9
# 99 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 100 "data//maps/AldeonTown/scripts.pory"
	addobject 7
# 101 "data//maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 103 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_Leaf1
# 104 "data//maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_Leaf1
# 105 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 106 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 107 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 109 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 110 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf1, MSGBOX_DEFAULT
# 111 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 112 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 114 "data//maps/AldeonTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, AldeonTown_Text_LeafLost
# 116 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 117 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf2, MSGBOX_DEFAULT
# 118 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 119 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 121 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 122 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 123 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 125 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 126 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue1, MSGBOX_DEFAULT
# 127 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 128 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 130 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 131 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 132 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 134 "data//maps/AldeonTown/scripts.pory"
	removeobject 6
# 135 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 0, 9
# 136 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 137 "data//maps/AldeonTown/scripts.pory"
	addobject 6
# 138 "data//maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 140 "data//maps/AldeonTown/scripts.pory"
	removeobject 8
# 141 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 0, 8
# 142 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
# 143 "data//maps/AldeonTown/scripts.pory"
	addobject 8
# 144 "data//maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 146 "data//maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_Blue1
# 147 "data//maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_Blue1
# 148 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 150 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 152 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 153 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue2, MSGBOX_DEFAULT
# 154 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 156 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 157 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 159 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 160 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf3, MSGBOX_DEFAULT
# 161 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 163 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 164 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue3, MSGBOX_DEFAULT
# 165 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 167 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 168 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf4, MSGBOX_DEFAULT
# 169 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 171 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 172 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue4, MSGBOX_DEFAULT
# 173 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 175 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 176 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf5, MSGBOX_DEFAULT
# 177 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 179 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 180 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue5, MSGBOX_DEFAULT
# 181 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 182 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 184 "data//maps/AldeonTown/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 185 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_WalkRight
# 186 "data//maps/AldeonTown/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 187 "data//maps/AldeonTown/scripts.pory"
	applymovement 8, Common_Movement_WalkDown
# 188 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 189 "data//maps/AldeonTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 190 "data//maps/AldeonTown/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 191 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 193 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 194 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue6, MSGBOX_DEFAULT
# 195 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 196 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 198 "data//maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_BlueLeafExeunt
# 199 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_BlueLeafExeunt
# 200 "data//maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_BlueLeafExeunt
# 201 "data//maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_BlueLeafExeunt
# 202 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 204 "data//maps/AldeonTown/scripts.pory"
	removeobject 5
# 205 "data//maps/AldeonTown/scripts.pory"
	removeobject 6
# 206 "data//maps/AldeonTown/scripts.pory"
	removeobject 7
# 207 "data//maps/AldeonTown/scripts.pory"
	removeobject 8
# 209 "data//maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowBlueLeafBlock
# 211 "data//maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_Script_Leaf::
# 216 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf6, MSGBOX_DEFAULT
# 217 "data//maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Blue::
# 222 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue7, MSGBOX_DEFAULT
# 223 "data//maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Zubat::
# 228 "data//maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_ZUBAT, CRY_MODE_NORMAL
# 229 "data//maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_Script_Igglybuff::
# 234 "data//maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_IGGLYBUFF, CRY_MODE_NORMAL
# 235 "data//maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_EventScript_FatMan::
# 240 "data//maps/AldeonTown/scripts.pory"
	lock
# 241 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 242 "data//maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_lt AldeonTown_EventScript_FatMan_2
# 249 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan, MSGBOX_DEFAULT
# 250 "data//maps/AldeonTown/scripts.pory"
	closemessage
AldeonTown_EventScript_FatMan_1:
# 252 "data//maps/AldeonTown/scripts.pory"
	release
	end

AldeonTown_EventScript_FatMan_2:
# 243 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatManBlock, MSGBOX_DEFAULT
# 244 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 245 "data//maps/AldeonTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 246 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
	goto AldeonTown_EventScript_FatMan_1


AldeonTown_EventScript_DoorWoman::
# 257 "data//maps/AldeonTown/scripts.pory"
	lock
# 258 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 259 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_DoorWoman, MSGBOX_DEFAULT
# 260 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 261 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_TownSign::
# 266 "data//maps/AldeonTown/scripts.pory"
	lock
# 267 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 268 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_TownSign, MSGBOX_DEFAULT
# 269 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 270 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_HouseSign::
# 275 "data//maps/AldeonTown/scripts.pory"
	lock
# 276 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 277 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_HouseSign, MSGBOX_DEFAULT
# 278 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 279 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_OldMan::
# 284 "data//maps/AldeonTown/scripts.pory"
	lock
# 285 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 286 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OldMan, MSGBOX_DEFAULT
# 287 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 288 "data//maps/AldeonTown/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 289 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 290 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_SnorlaxBlock::
# 295 "data//maps/AldeonTown/scripts.pory"
	lock
# 296 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 297 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 298 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatManBlock, MSGBOX_DEFAULT
# 299 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 300 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 301 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 302 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_Scott::
# 307 "data//maps/AldeonTown/scripts.pory"
	lock
# 308 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 309 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Scott, MSGBOX_DEFAULT
# 310 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 311 "data//maps/AldeonTown/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 312 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 313 "data//maps/AldeonTown/scripts.pory"
	release
	end


# 317 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax1:
# 318 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 319 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 320 "data//maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 323 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax2:
# 324 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 325 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 326 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 327 "data//maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 330 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Leaf1:
# 331 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 331 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 331 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 331 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 331 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 331 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 331 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 331 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 332 "data//maps/AldeonTown/scripts.pory"
	face_up
	step_end

# 335 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Blue1:
# 336 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 336 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 336 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 336 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 336 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 336 "data//maps/AldeonTown/scripts.pory"
	walk_right
	step_end

# 339 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_BlueLeafExeunt:
# 340 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 340 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 340 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 340 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 340 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 340 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 340 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 340 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 340 "data//maps/AldeonTown/scripts.pory"
	walk_right
	step_end

AldeonTown_Script_TriggerLeafBattle_Text_0:
# 87 "data//maps/AldeonTown/scripts.pory"
	.string "Hey {PLAYER}!$"

AldeonTown_Text_FatManBlock::
# 343 "data//maps/AldeonTown/scripts.pory"
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlaci, can be mighty dangerous. You\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_FatMan::
# 347 "data//maps/AldeonTown/scripts.pory"
	.string "Even after we were forced to join the\n"
	.string "Republic the government still mostly\l"
	.string "leaves us alone. Still, we miss the old\l"
	.string "days of the independant merchant guild\l"
	.string "running things around here. All those\l"
	.string "taxes we spend and what do we have to\l"
	.string "show for it? A whole lot of nothing!$"

AldeonTown_Text_DoorWoman::
# 352 "data//maps/AldeonTown/scripts.pory"
	.string "Me sorry but if no business with Master\n"
	.string "you havin' then leavin' you needin'.$"

AldeonTown_Text_TownSign::
# 356 "data//maps/AldeonTown/scripts.pory"
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
# 360 "data//maps/AldeonTown/scripts.pory"
	.string "House of Atreus\n"
	.string "No Solicitors!$"

AldeonTown_Text_Leaf1::
# 365 "data//maps/AldeonTown/scripts.pory"
	.string "Look! I asked my daddy for a Pokemon to\n"
	.string "protect and keep me safe. Isn't she\l"
	.string "cute? Let's see how strong she is!$"

AldeonTown_Text_LeafLost::
# 369 "data//maps/AldeonTown/scripts.pory"
	.string "Hey! That's enough! You're hurting her,\n"
	.string "please stop!$"

AldeonTown_Text_Leaf2::
# 373 "data//maps/AldeonTown/scripts.pory"
	.string "Looks like I need to learn better\n"
	.string "technique if I am going to keep myself\l"
	.string "safe.$"

AldeonTown_Text_Blue1::
# 377 "data//maps/AldeonTown/scripts.pory"
	.string "So sad...$"

AldeonTown_Text_Blue2::
# 382 "data//maps/AldeonTown/scripts.pory"
	.string "Such savage studies of slaughter\n"
	.string "should supercede a more sound syllabus.$"

AldeonTown_Text_Leaf3::
# 387 "data//maps/AldeonTown/scripts.pory"
	.string "Well pardon me, handsome unknown\n"
	.string "stranger, but truly I do not understand\l"
	.string "you. I thought that by battling\l"
	.string "Pokemon I would grow stronger as a\l"
	.string "trainer and I was planning to attend\l"
	.string "trainer school to better learn and grow\l"
	.string "as one myself.$"

AldeonTown_Text_Blue3::
# 392 "data//maps/AldeonTown/scripts.pory"
	.string "Your Pokemon will grow from battles yes\n"
	.string "but practicing in such a wonton way will\l"
	.string "only yield you diminished results. Those\l"
	.string "stuffy fools wasting away in that\l"
	.string "archaic, tyrannical, place called school\l"
	.string "can only teach you mediocrity. To be\l"
	.string "truly great you must innovate and\l"
	.string "break out of their stifling system.$"

AldeonTown_Text_Leaf4::
# 397 "data//maps/AldeonTown/scripts.pory"
	.string "We may not learn as well unsupervised\n"
	.string "but of the Trainer School, here in our\l"
	.string "midst, many have said we must attend,\l"
	.string "study, and graduate or else never be\l"
	.string "great.$"

AldeonTown_Text_Blue4::
# 402 "data//maps/AldeonTown/scripts.pory"
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
# 407 "data//maps/AldeonTown/scripts.pory"
	.string "Your flavored words and shapely form\n"
	.string "convince me there is truth in all of\l"
	.string "what you say. Therefore I will go with\l"
	.string "you. Please, teach me.$"

AldeonTown_Text_Blue5::
# 412 "data//maps/AldeonTown/scripts.pory"
	.string "Then let us go.$"

AldeonTown_Text_Blue6::
# 417 "data//maps/AldeonTown/scripts.pory"
	.string "Girls only, little bro.$"

AldeonTown_Text_Leaf6::
# 421 "data//maps/AldeonTown/scripts.pory"
	.string "You're so good at this! Wow! I'm learning\n"
	.string "lots!$"

AldeonTown_Text_Blue7::
# 425 "data//maps/AldeonTown/scripts.pory"
	.string "Yeah, just like that! You're doing so\n"
	.string "good girl.$"

AldeonTown_Text_OldMan::
# 429 "data//maps/AldeonTown/scripts.pory"
	.string "Hello, young man, I don't recognize you.\n"
	.string "I live here, in this house, with my\l"
	.string "brother. Go in and see him if you need to\l"
	.string "rest.$"

AldeonTown_Text_Scott::
# 433 "data//maps/AldeonTown/scripts.pory"
	.string "My daughter left for her first day of\n"
	.string "school and I am overwhelmed by\l"
	.string "emotions. I'm fixing a hole in my doorway\l"
	.string "where the wind gets in. It helps to\l"
	.string "soothe my mind.$"
