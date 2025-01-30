AldeonTown_MapScripts::
# 15 "data/maps/AldeonTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_lt AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 8
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 22 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_lt AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 25 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowSnorlaxBlock
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 20 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowBlueLeaf
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 23 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowScottBlock
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 26 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_SetupStorm
	return


AldeonTown_Script_ShowScottBlock::
# 33 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 10, 22, 8
# 34 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 35 "data/maps/AldeonTown/scripts.pory"
	addobject 10
# 36 "data/maps/AldeonTown/scripts.pory"
	showobjectat 10, MAP_ALDEON_TOWN
	return


AldeonTown_Script_ShowSnorlaxBlock::
# 42 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 9, 27, 22
# 43 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
# 44 "data/maps/AldeonTown/scripts.pory"
	addobject 9
# 45 "data/maps/AldeonTown/scripts.pory"
	showobjectat 9, MAP_ALDEON_TOWN
# 47 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 1, 25, 21
# 48 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 49 "data/maps/AldeonTown/scripts.pory"
	addobject 1
# 50 "data/maps/AldeonTown/scripts.pory"
	showobjectat 1, MAP_ALDEON_TOWN
	return


AldeonTown_Script_ShowBlueLeaf::
# 56 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 23, 15
# 57 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 58 "data/maps/AldeonTown/scripts.pory"
	addobject 8
# 59 "data/maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 61 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 24, 15
# 62 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 63 "data/maps/AldeonTown/scripts.pory"
	addobject 7
# 64 "data/maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 66 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 22, 15
# 67 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 68 "data/maps/AldeonTown/scripts.pory"
	addobject 6
# 69 "data/maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 71 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 25, 15
# 72 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 73 "data/maps/AldeonTown/scripts.pory"
	addobject 5
# 74 "data/maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
	return


AldeonTown_Script_SetupStorm::
# 81 "data/maps/AldeonTown/scripts.pory"
	setweather WEATHER_DOWNPOUR
	return


AldeonTown_Script_TriggerLeafBattle::
# 87 "data/maps/AldeonTown/scripts.pory"
	lockall
# 89 "data/maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 8
# 91 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 92 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 94 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 96 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 97 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Script_TriggerLeafBattle_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 99 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 101 "data/maps/AldeonTown/scripts.pory"
	removeobject 5
# 102 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 15, 9
# 103 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 104 "data/maps/AldeonTown/scripts.pory"
	addobject 5
# 105 "data/maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
# 107 "data/maps/AldeonTown/scripts.pory"
	removeobject 7
# 108 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 16, 9
# 109 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 110 "data/maps/AldeonTown/scripts.pory"
	addobject 7
# 111 "data/maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 113 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_Leaf1
# 114 "data/maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_Leaf1
# 115 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 116 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 117 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 119 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 120 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf1, MSGBOX_DEFAULT
# 121 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 122 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 124 "data/maps/AldeonTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, AldeonTown_Text_LeafLost
# 126 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 127 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf2, MSGBOX_DEFAULT
# 128 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 129 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 131 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 132 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 133 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 135 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 136 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue1, MSGBOX_DEFAULT
# 137 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 138 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 140 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 141 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 142 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 144 "data/maps/AldeonTown/scripts.pory"
	removeobject 6
# 145 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 0, 9
# 146 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 147 "data/maps/AldeonTown/scripts.pory"
	addobject 6
# 148 "data/maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 150 "data/maps/AldeonTown/scripts.pory"
	removeobject 8
# 151 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 0, 8
# 152 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
# 153 "data/maps/AldeonTown/scripts.pory"
	addobject 8
# 154 "data/maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 156 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_Blue1
# 157 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_Blue1
# 158 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 162 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 163 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue2, MSGBOX_DEFAULT
# 164 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 166 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 167 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 169 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 170 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf3, MSGBOX_DEFAULT
# 171 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 173 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 174 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue3, MSGBOX_DEFAULT
# 175 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 177 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 178 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf4, MSGBOX_DEFAULT
# 179 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 181 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 182 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue4, MSGBOX_DEFAULT
# 183 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 185 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 186 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf5, MSGBOX_DEFAULT
# 187 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 189 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 190 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue5, MSGBOX_DEFAULT
# 191 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 192 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 194 "data/maps/AldeonTown/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 195 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_WalkRight
# 196 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 197 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, Common_Movement_WalkDown
# 198 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 199 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 200 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 201 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 203 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 204 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue6, MSGBOX_DEFAULT
# 205 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 206 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 208 "data/maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_BlueLeafExeunt
# 209 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_BlueLeafExeunt
# 210 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_BlueLeafExeunt
# 211 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_BlueLeafExeunt
# 212 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 214 "data/maps/AldeonTown/scripts.pory"
	removeobject 5
# 215 "data/maps/AldeonTown/scripts.pory"
	removeobject 6
# 216 "data/maps/AldeonTown/scripts.pory"
	removeobject 7
# 217 "data/maps/AldeonTown/scripts.pory"
	removeobject 8
# 219 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowBlueLeaf
# 221 "data/maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_Script_Leaf::
# 226 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf6, MSGBOX_DEFAULT
# 227 "data/maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Blue::
# 232 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue7, MSGBOX_DEFAULT
# 233 "data/maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Zubat::
# 238 "data/maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_ZUBAT, CRY_MODE_NORMAL
# 239 "data/maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_Script_Igglybuff::
# 244 "data/maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_IGGLYBUFF, CRY_MODE_NORMAL
# 245 "data/maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_EventScript_FatMan::
# 250 "data/maps/AldeonTown/scripts.pory"
	lock
# 251 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 252 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_lt AldeonTown_EventScript_FatMan_2
# 259 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan, MSGBOX_DEFAULT
# 260 "data/maps/AldeonTown/scripts.pory"
	closemessage
AldeonTown_EventScript_FatMan_1:
# 262 "data/maps/AldeonTown/scripts.pory"
	release
	end

AldeonTown_EventScript_FatMan_2:
# 253 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatManBlock, MSGBOX_DEFAULT
# 254 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 255 "data/maps/AldeonTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 256 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
	goto AldeonTown_EventScript_FatMan_1


AldeonTown_EventScript_DoorWoman::
# 267 "data/maps/AldeonTown/scripts.pory"
	lock
# 268 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 269 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_DoorWoman, MSGBOX_DEFAULT
# 270 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 271 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_TownSign::
# 276 "data/maps/AldeonTown/scripts.pory"
	lock
# 277 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 278 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_TownSign, MSGBOX_DEFAULT
# 279 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 280 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_HouseSign::
# 285 "data/maps/AldeonTown/scripts.pory"
	lock
# 286 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 287 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_HouseSign, MSGBOX_DEFAULT
# 288 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 289 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_OldMan::
# 294 "data/maps/AldeonTown/scripts.pory"
	lock
# 295 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 296 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OldMan, MSGBOX_DEFAULT
# 297 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 298 "data/maps/AldeonTown/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 299 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 300 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_SnorlaxBlock::
# 305 "data/maps/AldeonTown/scripts.pory"
	lock
# 306 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 307 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 308 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatManBlock, MSGBOX_DEFAULT
# 309 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 310 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 311 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 312 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_Scott::
# 317 "data/maps/AldeonTown/scripts.pory"
	lock
# 318 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 319 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Scott, MSGBOX_DEFAULT
# 320 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 321 "data/maps/AldeonTown/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 322 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 323 "data/maps/AldeonTown/scripts.pory"
	release
	end


# 327 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax1:
# 328 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 329 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 330 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 333 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax2:
# 334 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 335 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 336 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 337 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 340 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Leaf1:
# 341 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 341 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 341 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 341 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 341 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 341 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 341 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 341 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 342 "data/maps/AldeonTown/scripts.pory"
	face_up
	step_end

# 345 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Blue1:
# 346 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 346 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 346 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 346 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 346 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 346 "data/maps/AldeonTown/scripts.pory"
	walk_right
	step_end

# 349 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_BlueLeafExeunt:
# 350 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 350 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 350 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 350 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 350 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 350 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 350 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 350 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 350 "data/maps/AldeonTown/scripts.pory"
	walk_right
	step_end

AldeonTown_Script_TriggerLeafBattle_Text_0:
# 97 "data/maps/AldeonTown/scripts.pory"
	.string "Hey {PLAYER}!$"

AldeonTown_Text_FatManBlock::
# 353 "data/maps/AldeonTown/scripts.pory"
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlaci, can be mighty dangerous. You\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_FatMan::
# 357 "data/maps/AldeonTown/scripts.pory"
	.string "Even after we were forced to join the\n"
	.string "Republic the government still mostly\l"
	.string "leaves us alone. Still, we miss the old\l"
	.string "days of the independant merchant guild\l"
	.string "running things around here. All those\l"
	.string "taxes we spend and what do we have to\l"
	.string "show for it? A whole lot of nothing!$"

AldeonTown_Text_DoorWoman::
# 362 "data/maps/AldeonTown/scripts.pory"
	.string "Me sorry but if no business with Master\n"
	.string "you havin' then leavin' you needin'.$"

AldeonTown_Text_TownSign::
# 366 "data/maps/AldeonTown/scripts.pory"
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
# 370 "data/maps/AldeonTown/scripts.pory"
	.string "House of Atreus\n"
	.string "No Solicitors!$"

AldeonTown_Text_Leaf1::
# 375 "data/maps/AldeonTown/scripts.pory"
	.string "Look! I asked my daddy for a Pokemon to\n"
	.string "protect and keep me safe. Isn't she\l"
	.string "cute? Let's see how strong she is!$"

AldeonTown_Text_LeafLost::
# 379 "data/maps/AldeonTown/scripts.pory"
	.string "Hey! That's enough! You're hurting her,\n"
	.string "please stop!$"

AldeonTown_Text_Leaf2::
# 383 "data/maps/AldeonTown/scripts.pory"
	.string "Looks like I need to learn better\n"
	.string "technique if I am going to keep myself\l"
	.string "safe.$"

AldeonTown_Text_Blue1::
# 387 "data/maps/AldeonTown/scripts.pory"
	.string "So sad...$"

AldeonTown_Text_Blue2::
# 392 "data/maps/AldeonTown/scripts.pory"
	.string "Such savage studies of slaughter\n"
	.string "should supercede a more sound syllabus.$"

AldeonTown_Text_Leaf3::
# 397 "data/maps/AldeonTown/scripts.pory"
	.string "Well pardon me, handsome unknown\n"
	.string "stranger, but truly I do not understand\l"
	.string "you. I thought that by battling\l"
	.string "Pokemon I would grow stronger as a\l"
	.string "trainer and I was planning to attend\l"
	.string "trainer school to better learn and grow\l"
	.string "as one myself.$"

AldeonTown_Text_Blue3::
# 402 "data/maps/AldeonTown/scripts.pory"
	.string "Your Pokemon will grow from battles yes\n"
	.string "but practicing in such a wonton way will\l"
	.string "only yield you diminished results. Those\l"
	.string "stuffy fools wasting away in that\l"
	.string "archaic, tyrannical, place called school\l"
	.string "can only teach you mediocrity. To be\l"
	.string "truly great you must innovate and\l"
	.string "break out of their stifling system.$"

AldeonTown_Text_Leaf4::
# 407 "data/maps/AldeonTown/scripts.pory"
	.string "We may not learn as well unsupervised\n"
	.string "but of the Trainer School, here in our\l"
	.string "midst, many have said we must attend,\l"
	.string "study, and graduate or else never be\l"
	.string "great.$"

AldeonTown_Text_Blue4::
# 412 "data/maps/AldeonTown/scripts.pory"
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
# 417 "data/maps/AldeonTown/scripts.pory"
	.string "Your flavored words and shapely form\n"
	.string "convince me there is truth in all of\l"
	.string "what you say. Therefore I will go with\l"
	.string "you. Please, teach me.$"

AldeonTown_Text_Blue5::
# 422 "data/maps/AldeonTown/scripts.pory"
	.string "Then let us go.$"

AldeonTown_Text_Blue6::
# 427 "data/maps/AldeonTown/scripts.pory"
	.string "Girls only, little bro.$"

AldeonTown_Text_Leaf6::
# 431 "data/maps/AldeonTown/scripts.pory"
	.string "You're so good at this! Wow! I'm learning\n"
	.string "lots!$"

AldeonTown_Text_Blue7::
# 435 "data/maps/AldeonTown/scripts.pory"
	.string "Yeah, just like that! You're doing so\n"
	.string "good girl.$"

AldeonTown_Text_OldMan::
# 439 "data/maps/AldeonTown/scripts.pory"
	.string "Hello, young man, I don't recognize you.\n"
	.string "I live here, in this house, with my\l"
	.string "brother. Go in and see him if you need to\l"
	.string "rest.$"

AldeonTown_Text_Scott::
# 443 "data/maps/AldeonTown/scripts.pory"
	.string "My daughter left for her first day of\n"
	.string "school and I am overwhelmed by\l"
	.string "emotions. I'm fixing a hole in my doorway\l"
	.string "where the wind gets in. It helps to\l"
	.string "soothe my mind.$"
