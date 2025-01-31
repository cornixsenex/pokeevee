AldeonTown_MapScripts::
# 15 "data/maps/AldeonTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 29 "data/maps/AldeonTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AldeonTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_lt AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 20 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 23 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 10
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 23 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 11
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 17 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowSnorlaxBlock
# 18 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowScottBlock
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 21 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_SetupStorm1
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 24 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_SetupStorm2
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 30 "data/maps/AldeonTown/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 9, AldeonTown_Script_Storm
	.2byte 0


AldeonTown_Script_ShowScottBlock::
# 36 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 10, 22, 8
# 37 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 38 "data/maps/AldeonTown/scripts.pory"
	addobject 10
# 39 "data/maps/AldeonTown/scripts.pory"
	showobjectat 10, MAP_ALDEON_TOWN
	return


AldeonTown_Script_ShowSnorlaxBlock::
# 45 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 9, 27, 22
# 46 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
# 47 "data/maps/AldeonTown/scripts.pory"
	addobject 9
# 48 "data/maps/AldeonTown/scripts.pory"
	showobjectat 9, MAP_ALDEON_TOWN
# 50 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 1, 25, 21
# 51 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 52 "data/maps/AldeonTown/scripts.pory"
	addobject 1
# 53 "data/maps/AldeonTown/scripts.pory"
	showobjectat 1, MAP_ALDEON_TOWN
	return


AldeonTown_Script_ShowBlueLeaf::
# 59 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 23, 15
# 60 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 61 "data/maps/AldeonTown/scripts.pory"
	addobject 8
# 62 "data/maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 64 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 24, 15
# 65 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 66 "data/maps/AldeonTown/scripts.pory"
	addobject 7
# 67 "data/maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 69 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 22, 15
# 70 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 71 "data/maps/AldeonTown/scripts.pory"
	addobject 6
# 72 "data/maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 74 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 25, 15
# 75 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 76 "data/maps/AldeonTown/scripts.pory"
	addobject 5
# 77 "data/maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
	return


AldeonTown_Script_SetupStorm1::
# 84 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 4, 14, 8
# 85 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 86 "data/maps/AldeonTown/scripts.pory"
	addobject 4
# 87 "data/maps/AldeonTown/scripts.pory"
	showobjectat 4, MAP_ALDEON_TOWN
# 89 "data/maps/AldeonTown/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 90 "data/maps/AldeonTown/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return


AldeonTown_Script_SetupStorm2::
# 97 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 4, 8, 8
# 98 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 99 "data/maps/AldeonTown/scripts.pory"
	addobject 4
# 100 "data/maps/AldeonTown/scripts.pory"
	showobjectat 4, MAP_ALDEON_TOWN
# 102 "data/maps/AldeonTown/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 103 "data/maps/AldeonTown/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return


AldeonTown_Script_TriggerLeafBattle::
# 109 "data/maps/AldeonTown/scripts.pory"
	lockall
# 111 "data/maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 8
# 113 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 114 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 115 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 116 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 118 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 119 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Script_TriggerLeafBattle_Text_0, MSGBOX_DEFAULT
# 120 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 121 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 123 "data/maps/AldeonTown/scripts.pory"
	removeobject 5
# 124 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 15, 9
# 125 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 126 "data/maps/AldeonTown/scripts.pory"
	addobject 5
# 127 "data/maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
# 129 "data/maps/AldeonTown/scripts.pory"
	removeobject 7
# 130 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 16, 9
# 131 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 132 "data/maps/AldeonTown/scripts.pory"
	addobject 7
# 133 "data/maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 135 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_Leaf1
# 136 "data/maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_Leaf1
# 137 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 138 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 139 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 141 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 142 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf1, MSGBOX_DEFAULT
# 143 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 144 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 146 "data/maps/AldeonTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, AldeonTown_Text_LeafLost
# 148 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 149 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf2, MSGBOX_DEFAULT
# 150 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 151 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 153 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 154 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 155 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 158 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue1, MSGBOX_DEFAULT
# 159 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 160 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 162 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 163 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 164 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/AldeonTown/scripts.pory"
	removeobject 6
# 167 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 0, 9
# 168 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 169 "data/maps/AldeonTown/scripts.pory"
	addobject 6
# 170 "data/maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 172 "data/maps/AldeonTown/scripts.pory"
	removeobject 8
# 173 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 0, 8
# 174 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
# 175 "data/maps/AldeonTown/scripts.pory"
	addobject 8
# 176 "data/maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 178 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_Blue1
# 179 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_Blue1
# 180 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 182 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 184 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 185 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue2, MSGBOX_DEFAULT
# 186 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 188 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 189 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 191 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 192 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf3, MSGBOX_DEFAULT
# 193 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 195 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 196 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue3, MSGBOX_DEFAULT
# 197 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 199 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 200 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf4, MSGBOX_DEFAULT
# 201 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 203 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 204 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue4, MSGBOX_DEFAULT
# 205 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 207 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 208 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf5, MSGBOX_DEFAULT
# 209 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 211 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 212 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue5, MSGBOX_DEFAULT
# 213 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 214 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 225 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 226 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 227 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 228 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue6, MSGBOX_DEFAULT
# 229 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 230 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 232 "data/maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_BlueLeafExeuntL
# 233 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_BlueLeafExeuntL
# 234 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_BlueLeafExeuntL
# 235 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_BlueLeafExeuntL
# 236 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 238 "data/maps/AldeonTown/scripts.pory"
	hideobjectat 5, MAP_ALDEON_TOWN
# 239 "data/maps/AldeonTown/scripts.pory"
	hideobjectat 6, MAP_ALDEON_TOWN
# 240 "data/maps/AldeonTown/scripts.pory"
	hideobjectat 7, MAP_ALDEON_TOWN
# 241 "data/maps/AldeonTown/scripts.pory"
	hideobjectat 8, MAP_ALDEON_TOWN
# 243 "data/maps/AldeonTown/scripts.pory"
	removeobject 5
# 244 "data/maps/AldeonTown/scripts.pory"
	removeobject 6
# 245 "data/maps/AldeonTown/scripts.pory"
	removeobject 7
# 246 "data/maps/AldeonTown/scripts.pory"
	removeobject 8
# 248 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 0, 0
# 249 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 0, 0
# 250 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 0, 0
# 251 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 0, 0
# 253 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 254 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 255 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 256 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 260 "data/maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_Script_Storm::
# 265 "data/maps/AldeonTown/scripts.pory"
	lockall
# 268 "data/maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 10
# 270 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 271 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 273 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 274 "data/maps/AldeonTown/scripts.pory"
	applymovement 4, AldeonTown_Movement_StormBlock1
# 275 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 277 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_StormBlock1, MSGBOX_DEFAULT
# 279 "data/maps/AldeonTown/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 280 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 281 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 283 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_Leaf::
# 288 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf6, MSGBOX_DEFAULT
# 289 "data/maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Blue::
# 294 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue7, MSGBOX_DEFAULT
# 295 "data/maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Zubat::
# 300 "data/maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_ZUBAT, CRY_MODE_NORMAL
# 301 "data/maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_Script_Igglybuff::
# 306 "data/maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_IGGLYBUFF, CRY_MODE_NORMAL
# 307 "data/maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_EventScript_FatMan::
# 312 "data/maps/AldeonTown/scripts.pory"
	lock
# 313 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 314 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_lt AldeonTown_EventScript_FatMan_2
# 321 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan, MSGBOX_DEFAULT
# 322 "data/maps/AldeonTown/scripts.pory"
	closemessage
AldeonTown_EventScript_FatMan_1:
# 324 "data/maps/AldeonTown/scripts.pory"
	release
	end

AldeonTown_EventScript_FatMan_2:
# 315 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatManBlock, MSGBOX_DEFAULT
# 316 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 317 "data/maps/AldeonTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 318 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
	goto AldeonTown_EventScript_FatMan_1


AldeonTown_Script_Lass::
# 329 "data/maps/AldeonTown/scripts.pory"
	lock
# 330 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 331 "data/maps/AldeonTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 332 "data/maps/AldeonTown/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_gt AldeonTown_Script_Lass_2
# 335 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Lass1, MSGBOX_DEFAULT
AldeonTown_Script_Lass_1:
# 337 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 338 "data/maps/AldeonTown/scripts.pory"
	release
	end

AldeonTown_Script_Lass_2:
# 333 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Lass2, MSGBOX_DEFAULT
	goto AldeonTown_Script_Lass_1


AldeonTown_EventScript_DoorWoman::
# 343 "data/maps/AldeonTown/scripts.pory"
	lock
# 344 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 345 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_DoorWoman, MSGBOX_DEFAULT
# 346 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 347 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_TownSign::
# 352 "data/maps/AldeonTown/scripts.pory"
	lock
# 353 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 354 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_TownSign, MSGBOX_DEFAULT
# 355 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 356 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_HouseSign::
# 361 "data/maps/AldeonTown/scripts.pory"
	lock
# 362 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 363 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_HouseSign, MSGBOX_DEFAULT
# 364 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 365 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_OldMan::
# 370 "data/maps/AldeonTown/scripts.pory"
	lock
# 371 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 372 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OldMan, MSGBOX_DEFAULT
# 373 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 374 "data/maps/AldeonTown/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 375 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 376 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_SnorlaxBlock::
# 381 "data/maps/AldeonTown/scripts.pory"
	lock
# 382 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 383 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 384 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatManBlock, MSGBOX_DEFAULT
# 385 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 386 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 387 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 388 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_TriggerStormBlock::
# 393 "data/maps/AldeonTown/scripts.pory"
	lock
# 394 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 395 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 396 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_StormBlock2, MSGBOX_DEFAULT
# 397 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 398 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 399 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 400 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_Scott::
# 405 "data/maps/AldeonTown/scripts.pory"
	lock
# 406 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 407 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Scott, MSGBOX_DEFAULT
# 408 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 409 "data/maps/AldeonTown/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 410 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 411 "data/maps/AldeonTown/scripts.pory"
	release
	end


# 415 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax1:
# 416 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 417 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 418 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 421 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax2:
# 422 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 423 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 424 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 425 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 428 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Leaf1:
# 429 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 429 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 429 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 429 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 429 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 429 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 429 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 429 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 430 "data/maps/AldeonTown/scripts.pory"
	face_up
	step_end

# 433 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Blue1:
# 434 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 434 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 434 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 434 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 434 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 434 "data/maps/AldeonTown/scripts.pory"
	walk_right
	step_end

# 437 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_BlueLeafExeunt:
# 438 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 438 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 438 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 438 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 438 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 438 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 438 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 438 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 438 "data/maps/AldeonTown/scripts.pory"
	walk_right
	step_end

# 441 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_BlueLeafExeuntL:
# 442 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 442 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 442 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 442 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 442 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 442 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 442 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 442 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 442 "data/maps/AldeonTown/scripts.pory"
	walk_left
	step_end

# 445 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_StormBlock1:
# 446 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 446 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 446 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 446 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 446 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 446 "data/maps/AldeonTown/scripts.pory"
	walk_left
	step_end

AldeonTown_Script_TriggerLeafBattle_Text_0:
# 119 "data/maps/AldeonTown/scripts.pory"
	.string "Hey {PLAYER}!$"

AldeonTown_Text_FatManBlock::
# 450 "data/maps/AldeonTown/scripts.pory"
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlaci, can be mighty dangerous. You\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_StormBlock1::
# 454 "data/maps/AldeonTown/scripts.pory"
	.string "This is a very serious deluge, the likes\n"
	.string "of which I've not seen since my youth!\l"
	.string "You must go home! Seek shelter from\l"
	.string "this storm! Please don't get lost! We've\l"
	.string "already lost {LEAF}!$"

AldeonTown_Text_StormBlock2::
# 458 "data/maps/AldeonTown/scripts.pory"
	.string "Go home! It isn't safe out! {LEAF} is lost!$"

AldeonTown_Text_FatMan::
# 462 "data/maps/AldeonTown/scripts.pory"
	.string "Even after we were forced to join the\n"
	.string "Republic the government still mostly\l"
	.string "leaves us alone. Still, we miss the old\l"
	.string "days of the independant merchant guild\l"
	.string "running things around here. All those\l"
	.string "taxes we spend and what do we have to\l"
	.string "show for it? A whole lot of nothing!$"

AldeonTown_Text_DoorWoman::
# 467 "data/maps/AldeonTown/scripts.pory"
	.string "Me sorry but if no business with Master\n"
	.string "you havin' then leavin' you needin'.$"

AldeonTown_Text_TownSign::
# 471 "data/maps/AldeonTown/scripts.pory"
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
# 475 "data/maps/AldeonTown/scripts.pory"
	.string "House of Atreus\n"
	.string "No Solicitors!$"

AldeonTown_Text_Leaf1::
# 480 "data/maps/AldeonTown/scripts.pory"
	.string "Look! I asked my daddy for a Pokemon to\n"
	.string "protect and keep me safe. Isn't she\l"
	.string "cute? Let's see how strong she is!$"

AldeonTown_Text_LeafLost::
# 484 "data/maps/AldeonTown/scripts.pory"
	.string "Hey! That's enough! You're hurting her,\n"
	.string "please stop!$"

AldeonTown_Text_Leaf2::
# 488 "data/maps/AldeonTown/scripts.pory"
	.string "Looks like I need to learn better\n"
	.string "technique if I am going to keep myself\l"
	.string "safe.$"

AldeonTown_Text_Blue1::
# 492 "data/maps/AldeonTown/scripts.pory"
	.string "So sad...$"

AldeonTown_Text_Blue2::
# 497 "data/maps/AldeonTown/scripts.pory"
	.string "Such savage studies of slaughter\n"
	.string "should supercede a more sound syllabus.$"

AldeonTown_Text_Leaf3::
# 502 "data/maps/AldeonTown/scripts.pory"
	.string "Well pardon me, handsome unknown\n"
	.string "stranger, but truly I do not understand\l"
	.string "you. I thought that by battling\l"
	.string "Pokemon I would grow stronger as a\l"
	.string "trainer and I was planning to attend\l"
	.string "trainer school to better learn and grow\l"
	.string "as one myself.$"

AldeonTown_Text_Blue3::
# 507 "data/maps/AldeonTown/scripts.pory"
	.string "Your Pokemon will grow from battles yes\n"
	.string "but practicing in such a wonton way will\l"
	.string "only yield you diminished results. Those\l"
	.string "stuffy fools wasting away in that\l"
	.string "archaic, tyrannical, place called school\l"
	.string "can only teach you mediocrity. To be\l"
	.string "truly great you must innovate and\l"
	.string "break out of their stifling system.$"

AldeonTown_Text_Leaf4::
# 512 "data/maps/AldeonTown/scripts.pory"
	.string "We may not learn as well unsupervised\n"
	.string "but of the Trainer School, here in our\l"
	.string "midst, many have said we must attend,\l"
	.string "study, and graduate or else never be\l"
	.string "great.$"

AldeonTown_Text_Blue4::
# 517 "data/maps/AldeonTown/scripts.pory"
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
# 522 "data/maps/AldeonTown/scripts.pory"
	.string "Your flavored words and shapely form\n"
	.string "convince me there is truth in all of\l"
	.string "what you say. Therefore I will go with\l"
	.string "you. Please, teach me.$"

AldeonTown_Text_Blue5::
# 527 "data/maps/AldeonTown/scripts.pory"
	.string "Then let us go.$"

AldeonTown_Text_Blue6::
# 532 "data/maps/AldeonTown/scripts.pory"
	.string "Girls only, little bro.$"

AldeonTown_Text_Leaf6::
# 536 "data/maps/AldeonTown/scripts.pory"
	.string "You're so good at this! Wow! I'm learning\n"
	.string "lots!$"

AldeonTown_Text_Blue7::
# 540 "data/maps/AldeonTown/scripts.pory"
	.string "Yeah, just like that! You're doing so\n"
	.string "good girl.$"

AldeonTown_Text_OldMan::
# 544 "data/maps/AldeonTown/scripts.pory"
	.string "Hello, young man, I don't recognize you.\n"
	.string "I live here, in this house, with my\l"
	.string "brother. Go in and see him if you need to\l"
	.string "rest.$"

AldeonTown_Text_Scott::
# 548 "data/maps/AldeonTown/scripts.pory"
	.string "My daughter left for her first day of\n"
	.string "school and I am overwhelmed by\l"
	.string "emotions. I'm fixing a hole in my doorway\l"
	.string "where the wind gets in. It helps to\l"
	.string "soothe my mind.$"

AldeonTown_Text_Lass1::
# 552 "data/maps/AldeonTown/scripts.pory"
	.string "This garden is where I come to relax.$"

AldeonTown_Text_Lass2::
# 556 "data/maps/AldeonTown/scripts.pory"
	.string "The Big House was here, before the\n"
	.string "fires.$"
