AldeonTown_MapScripts::
# 15 "data//maps/AldeonTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 33 "data//maps/AldeonTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AldeonTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data//maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_lt AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 20 "data//maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 23 "data//maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 10
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 23 "data//maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 11
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 27 "data//maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 15
	goto_if_gt AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data//maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowSnorlaxBlock
# 18 "data//maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowScottBlock
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 21 "data//maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_SetupStorm1
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 24 "data//maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_SetupStorm2
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 28 "data//maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_HideOldMan
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 34 "data//maps/AldeonTown/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 9, AldeonTown_Script_Storm
	.2byte 0


AldeonTown_Script_ShowScottBlock::
# 40 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 10, 22, 8
# 41 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 42 "data//maps/AldeonTown/scripts.pory"
	addobject 10
# 43 "data//maps/AldeonTown/scripts.pory"
	showobjectat 10, MAP_ALDEON_TOWN
	return


AldeonTown_Script_ShowSnorlaxBlock::
# 49 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 9, 27, 22
# 50 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
# 51 "data//maps/AldeonTown/scripts.pory"
	addobject 9
# 52 "data//maps/AldeonTown/scripts.pory"
	showobjectat 9, MAP_ALDEON_TOWN
# 54 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 1, 25, 21
# 55 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 56 "data//maps/AldeonTown/scripts.pory"
	addobject 1
# 57 "data//maps/AldeonTown/scripts.pory"
	showobjectat 1, MAP_ALDEON_TOWN
	return


AldeonTown_Script_HideOldMan::
# 63 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 4, 0, 0
# 64 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
	return


AldeonTown_Script_ShowBlueLeaf::
# 71 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 23, 15
# 72 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 73 "data//maps/AldeonTown/scripts.pory"
	addobject 8
# 74 "data//maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 76 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 24, 15
# 77 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 78 "data//maps/AldeonTown/scripts.pory"
	addobject 7
# 79 "data//maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 81 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 22, 15
# 82 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 83 "data//maps/AldeonTown/scripts.pory"
	addobject 6
# 84 "data//maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 86 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 25, 15
# 87 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 88 "data//maps/AldeonTown/scripts.pory"
	addobject 5
# 89 "data//maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
	return


AldeonTown_Script_SetupStorm1::
# 96 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 4, 14, 8
# 97 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 98 "data//maps/AldeonTown/scripts.pory"
	addobject 4
# 99 "data//maps/AldeonTown/scripts.pory"
	showobjectat 4, MAP_ALDEON_TOWN
# 101 "data//maps/AldeonTown/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 102 "data//maps/AldeonTown/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return


AldeonTown_Script_SetupStorm2::
# 109 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 4, 8, 8
# 110 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 111 "data//maps/AldeonTown/scripts.pory"
	addobject 4
# 112 "data//maps/AldeonTown/scripts.pory"
	showobjectat 4, MAP_ALDEON_TOWN
# 114 "data//maps/AldeonTown/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 115 "data//maps/AldeonTown/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return


AldeonTown_Script_TriggerLeafBattle::
# 121 "data//maps/AldeonTown/scripts.pory"
	lockall
# 123 "data//maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 8
# 125 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 126 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 127 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 128 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 130 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 131 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Script_TriggerLeafBattle_Text_0, MSGBOX_DEFAULT
# 132 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 133 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 135 "data//maps/AldeonTown/scripts.pory"
	removeobject 5
# 136 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 15, 9
# 137 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 138 "data//maps/AldeonTown/scripts.pory"
	addobject 5
# 139 "data//maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
# 141 "data//maps/AldeonTown/scripts.pory"
	removeobject 7
# 142 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 16, 9
# 143 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 144 "data//maps/AldeonTown/scripts.pory"
	addobject 7
# 145 "data//maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 147 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_Leaf1
# 148 "data//maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_Leaf1
# 149 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 150 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 151 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 153 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 154 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf1, MSGBOX_DEFAULT
# 155 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 156 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 158 "data//maps/AldeonTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, AldeonTown_Text_LeafLost
# 160 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 161 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf2, MSGBOX_DEFAULT
# 162 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 163 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 165 "data//maps/AldeonTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, TRUE
# 166 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 167 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 168 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 170 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 171 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue1, MSGBOX_DEFAULT
# 172 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 173 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 175 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 176 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 177 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 179 "data//maps/AldeonTown/scripts.pory"
	removeobject 6
# 180 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 0, 9
# 181 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 182 "data//maps/AldeonTown/scripts.pory"
	addobject 6
# 183 "data//maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 185 "data//maps/AldeonTown/scripts.pory"
	removeobject 8
# 186 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 0, 8
# 187 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
# 188 "data//maps/AldeonTown/scripts.pory"
	addobject 8
# 189 "data//maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 191 "data//maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_Blue1
# 192 "data//maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_Blue1
# 193 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 195 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 197 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 198 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue2, MSGBOX_DEFAULT
# 199 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 201 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 202 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 204 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 205 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf3, MSGBOX_DEFAULT
# 206 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 208 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 209 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue3, MSGBOX_DEFAULT
# 210 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 212 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 213 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf4, MSGBOX_DEFAULT
# 214 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 216 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 217 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue4, MSGBOX_DEFAULT
# 218 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 220 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 221 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf5, MSGBOX_DEFAULT
# 222 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 224 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 225 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue5, MSGBOX_DEFAULT
# 226 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 227 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 229 "data//maps/AldeonTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 230 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 231 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 232 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue6, MSGBOX_DEFAULT
# 233 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 234 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 236 "data//maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_BlueLeafExeuntL
# 237 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_BlueLeafExeuntL
# 238 "data//maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_BlueLeafExeuntL
# 239 "data//maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_BlueLeafExeuntL
# 240 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 242 "data//maps/AldeonTown/scripts.pory"
	hideobjectat 5, MAP_ALDEON_TOWN
# 243 "data//maps/AldeonTown/scripts.pory"
	hideobjectat 6, MAP_ALDEON_TOWN
# 244 "data//maps/AldeonTown/scripts.pory"
	hideobjectat 7, MAP_ALDEON_TOWN
# 245 "data//maps/AldeonTown/scripts.pory"
	hideobjectat 8, MAP_ALDEON_TOWN
# 247 "data//maps/AldeonTown/scripts.pory"
	removeobject 5
# 248 "data//maps/AldeonTown/scripts.pory"
	removeobject 6
# 249 "data//maps/AldeonTown/scripts.pory"
	removeobject 7
# 250 "data//maps/AldeonTown/scripts.pory"
	removeobject 8
# 252 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 0, 0
# 253 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 0, 0
# 254 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 0, 0
# 255 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 0, 0
# 257 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 258 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 259 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 260 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 262 "data//maps/AldeonTown/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 264 "data//maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_Script_Storm::
# 269 "data//maps/AldeonTown/scripts.pory"
	lockall
# 272 "data//maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 10
# 274 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 275 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 277 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 278 "data//maps/AldeonTown/scripts.pory"
	applymovement 4, AldeonTown_Movement_StormBlock1
# 279 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 281 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_StormBlock1, MSGBOX_DEFAULT
# 283 "data//maps/AldeonTown/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 284 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 285 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 287 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_Leaf::
# 292 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf6, MSGBOX_DEFAULT
# 293 "data//maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Blue::
# 298 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue7, MSGBOX_DEFAULT
# 299 "data//maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Zubat::
# 304 "data//maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_ZUBAT, CRY_MODE_NORMAL
# 305 "data//maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_Script_Igglybuff::
# 310 "data//maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_IGGLYBUFF, CRY_MODE_NORMAL
# 311 "data//maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_EventScript_FatMan::
# 316 "data//maps/AldeonTown/scripts.pory"
	lock
# 317 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 318 "data//maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_lt AldeonTown_EventScript_FatMan_2
# 325 "data//maps/AldeonTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 326 "data//maps/AldeonTown/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_gt AldeonTown_EventScript_FatMan_6
# 329 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan2, MSGBOX_DEFAULT
AldeonTown_EventScript_FatMan_5:
# 331 "data//maps/AldeonTown/scripts.pory"
	closemessage
AldeonTown_EventScript_FatMan_1:
# 333 "data//maps/AldeonTown/scripts.pory"
	release
	end

AldeonTown_EventScript_FatMan_2:
# 319 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatManBlock, MSGBOX_DEFAULT
# 320 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 321 "data//maps/AldeonTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 322 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
	goto AldeonTown_EventScript_FatMan_1

AldeonTown_EventScript_FatMan_6:
# 327 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan1, MSGBOX_DEFAULT
	goto AldeonTown_EventScript_FatMan_5


AldeonTown_Script_Lass::
# 338 "data//maps/AldeonTown/scripts.pory"
	lock
# 339 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 340 "data//maps/AldeonTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 341 "data//maps/AldeonTown/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_gt AldeonTown_Script_Lass_2
# 344 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Lass1, MSGBOX_DEFAULT
AldeonTown_Script_Lass_1:
# 346 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 347 "data//maps/AldeonTown/scripts.pory"
	release
	end

AldeonTown_Script_Lass_2:
# 342 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Lass2, MSGBOX_DEFAULT
	goto AldeonTown_Script_Lass_1


AldeonTown_EventScript_DoorWoman::
# 352 "data//maps/AldeonTown/scripts.pory"
	lock
# 353 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 354 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_DoorWoman, MSGBOX_DEFAULT
# 355 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 356 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_TownSign::
# 361 "data//maps/AldeonTown/scripts.pory"
	lock
# 362 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 363 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_TownSign, MSGBOX_DEFAULT
# 364 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 365 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_HouseSign::
# 370 "data//maps/AldeonTown/scripts.pory"
	lock
# 371 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 372 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_HouseSign, MSGBOX_DEFAULT
# 373 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 374 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_OldMan::
# 379 "data//maps/AldeonTown/scripts.pory"
	lock
# 380 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 381 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OldMan, MSGBOX_DEFAULT
# 382 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 383 "data//maps/AldeonTown/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 384 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 385 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_SnorlaxBlock::
# 390 "data//maps/AldeonTown/scripts.pory"
	lock
# 391 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 392 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 393 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatManBlock, MSGBOX_DEFAULT
# 394 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 395 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 396 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 397 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_TriggerStormBlock::
# 402 "data//maps/AldeonTown/scripts.pory"
	lock
# 403 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 404 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 405 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_StormBlock2, MSGBOX_DEFAULT
# 406 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 407 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 408 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 409 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_Scott::
# 414 "data//maps/AldeonTown/scripts.pory"
	lock
# 415 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 416 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Scott, MSGBOX_DEFAULT
# 417 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 418 "data//maps/AldeonTown/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 419 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 420 "data//maps/AldeonTown/scripts.pory"
	release
	end


# 424 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax1:
# 425 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 426 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 427 "data//maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 430 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax2:
# 431 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 432 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 433 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 434 "data//maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 437 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Leaf1:
# 438 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 438 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 438 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 438 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 438 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 438 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 438 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 438 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 439 "data//maps/AldeonTown/scripts.pory"
	face_up
	step_end

# 442 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Blue1:
# 443 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 443 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 443 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 443 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 443 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 443 "data//maps/AldeonTown/scripts.pory"
	walk_right
	step_end

# 446 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_BlueLeafExeunt:
# 447 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 447 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 447 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 447 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 447 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 447 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 447 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 447 "data//maps/AldeonTown/scripts.pory"
	walk_right
# 447 "data//maps/AldeonTown/scripts.pory"
	walk_right
	step_end

# 450 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_BlueLeafExeuntL:
# 451 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 451 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 451 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 451 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 451 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 451 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 451 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 451 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 451 "data//maps/AldeonTown/scripts.pory"
	walk_left
	step_end

# 454 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_StormBlock1:
# 455 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 455 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 455 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 455 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 455 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 455 "data//maps/AldeonTown/scripts.pory"
	walk_left
	step_end

AldeonTown_Script_TriggerLeafBattle_Text_0:
# 131 "data//maps/AldeonTown/scripts.pory"
	.string "Hey {PLAYER}!$"

AldeonTown_Text_FatManBlock::
# 459 "data//maps/AldeonTown/scripts.pory"
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlaci, can be mighty dangerous. You\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_StormBlock1::
# 463 "data//maps/AldeonTown/scripts.pory"
	.string "This is a very serious deluge, the likes\n"
	.string "of which I've not seen since my youth!\l"
	.string "You must go home! Seek shelter from\l"
	.string "this storm! Please don't get lost! We've\l"
	.string "already lost {LEAF}!$"

AldeonTown_Text_StormBlock2::
# 467 "data//maps/AldeonTown/scripts.pory"
	.string "Go home! It isn't safe out! {LEAF} is lost!$"

AldeonTown_Text_FatMan1::
# 471 "data//maps/AldeonTown/scripts.pory"
	.string "Even after we were forced to join the\n"
	.string "Republic the government still mostly\l"
	.string "leaves us alone. Still, we miss the old\l"
	.string "days of the independant merchant guild\l"
	.string "running things around here. All those\l"
	.string "taxes we spend and what do we have to\l"
	.string "show for it? A whole lot of nothing!$"

AldeonTown_Text_FatMan2::
# 475 "data//maps/AldeonTown/scripts.pory"
	.string "Snorlax wandered off...told you he would\n"
	.string "leave!$"

AldeonTown_Text_DoorWoman::
# 480 "data//maps/AldeonTown/scripts.pory"
	.string "Me sorry but if no business with Master\n"
	.string "you havin' then leavin' you needin'.$"

AldeonTown_Text_TownSign::
# 484 "data//maps/AldeonTown/scripts.pory"
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
# 488 "data//maps/AldeonTown/scripts.pory"
	.string "House of Atreus\n"
	.string "No Solicitors!$"

AldeonTown_Text_Leaf1::
# 493 "data//maps/AldeonTown/scripts.pory"
	.string "Look! I asked my daddy for a Pokemon to\n"
	.string "protect and keep me safe. Isn't she\l"
	.string "cute? Let's see how strong she is!$"

AldeonTown_Text_LeafLost::
# 497 "data//maps/AldeonTown/scripts.pory"
	.string "Hey! That's enough! You're hurting her,\n"
	.string "please stop!$"

AldeonTown_Text_Leaf2::
# 501 "data//maps/AldeonTown/scripts.pory"
	.string "Looks like I need to learn better\n"
	.string "technique if I am going to keep myself\l"
	.string "safe.$"

AldeonTown_Text_Blue1::
# 505 "data//maps/AldeonTown/scripts.pory"
	.string "So sad...$"

AldeonTown_Text_Blue2::
# 510 "data//maps/AldeonTown/scripts.pory"
	.string "Such savage studies of slaughter\n"
	.string "should supercede a more sound syllabus.$"

AldeonTown_Text_Leaf3::
# 515 "data//maps/AldeonTown/scripts.pory"
	.string "Well pardon me, handsome unknown\n"
	.string "stranger, but truly I do not understand\l"
	.string "you. I thought that by battling\l"
	.string "Pokemon I would grow stronger as a\l"
	.string "trainer and I was planning to attend\l"
	.string "trainer school to better learn and grow\l"
	.string "as one myself.$"

AldeonTown_Text_Blue3::
# 520 "data//maps/AldeonTown/scripts.pory"
	.string "Your Pokemon will grow from battles yes\n"
	.string "but practicing in such a wonton way will\l"
	.string "only yield you diminished results. Those\l"
	.string "stuffy fools wasting away in that\l"
	.string "archaic, tyrannical, place called school\l"
	.string "can only teach you mediocrity. To be\l"
	.string "truly great you must innovate and\l"
	.string "break out of their stifling system.$"

AldeonTown_Text_Leaf4::
# 525 "data//maps/AldeonTown/scripts.pory"
	.string "We may not learn as well unsupervised\n"
	.string "but of the Trainer School, here in our\l"
	.string "midst, many have said we must attend,\l"
	.string "study, and graduate or else never be\l"
	.string "great.$"

AldeonTown_Text_Blue4::
# 530 "data//maps/AldeonTown/scripts.pory"
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
# 535 "data//maps/AldeonTown/scripts.pory"
	.string "Your flavored words and shapely form\n"
	.string "convince me there is truth in all of\l"
	.string "what you say. Therefore I will go with\l"
	.string "you. Please, teach me.$"

AldeonTown_Text_Blue5::
# 540 "data//maps/AldeonTown/scripts.pory"
	.string "Then let us go.$"

AldeonTown_Text_Blue6::
# 545 "data//maps/AldeonTown/scripts.pory"
	.string "Girls only, little bro.$"

AldeonTown_Text_Leaf6::
# 549 "data//maps/AldeonTown/scripts.pory"
	.string "You're so good at this! Wow! I'm learning\n"
	.string "lots!$"

AldeonTown_Text_Blue7::
# 553 "data//maps/AldeonTown/scripts.pory"
	.string "Yeah, just like that! You're doing so\n"
	.string "good girl.$"

AldeonTown_Text_OldMan::
# 557 "data//maps/AldeonTown/scripts.pory"
	.string "Hello, young man, I don't recognize you.\n"
	.string "I live here, in this house, with my\l"
	.string "brother. Go in and see him if you need to\l"
	.string "rest.$"

AldeonTown_Text_Scott::
# 561 "data//maps/AldeonTown/scripts.pory"
	.string "My daughter left for her first day of\n"
	.string "school and I am overwhelmed by\l"
	.string "emotions. I'm fixing a hole in my doorway\l"
	.string "where the wind gets in. It helps to\l"
	.string "soothe my mind.$"

AldeonTown_Text_Lass1::
# 565 "data//maps/AldeonTown/scripts.pory"
	.string "This garden is where I come to relax.$"

AldeonTown_Text_Lass2::
# 569 "data//maps/AldeonTown/scripts.pory"
	.string "The Big House was here, before the\n"
	.string "fires.$"
