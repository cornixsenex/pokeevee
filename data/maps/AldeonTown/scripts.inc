AldeonTown_MapScripts::
# 15 "data/maps/AldeonTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 41 "data/maps/AldeonTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AldeonTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_lt AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 20 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 23 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 10
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 23 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 11
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 27 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 15
	goto_if_gt AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 31 "data/maps/AldeonTown/scripts.pory"
	compare VAR_ORESTES_STATE, 7
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 35 "data/maps/AldeonTown/scripts.pory"
	compare VAR_ORESTES_STATE, 10
	goto_if_gt AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowSnorlaxBlock
# 18 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowScottBlock
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 21 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_SetupStorm1
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 24 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_SetupStorm2
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 28 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_HideOldMan
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 32 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowOrestes
	goto AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 36 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_HideMaid
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 42 "data/maps/AldeonTown/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 9, AldeonTown_Script_Storm
	.2byte 0


AldeonTown_Script_ShowScottBlock::
# 48 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 10, 22, 8
# 49 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 50 "data/maps/AldeonTown/scripts.pory"
	addobject 10
# 51 "data/maps/AldeonTown/scripts.pory"
	showobjectat 10, MAP_ALDEON_TOWN
	return


AldeonTown_Script_ShowSnorlaxBlock::
# 57 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 9, 27, 22
# 58 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
# 59 "data/maps/AldeonTown/scripts.pory"
	addobject 9
# 60 "data/maps/AldeonTown/scripts.pory"
	showobjectat 9, MAP_ALDEON_TOWN
# 62 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 1, 25, 21
# 63 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/AldeonTown/scripts.pory"
	addobject 1
# 65 "data/maps/AldeonTown/scripts.pory"
	showobjectat 1, MAP_ALDEON_TOWN
	return


AldeonTown_Script_HideOldMan::
# 71 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 4, 0, 0
# 72 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
	return


AldeonTown_Script_ShowBlueLeaf::
# 79 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 23, 15
# 80 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 81 "data/maps/AldeonTown/scripts.pory"
	addobject 8
# 82 "data/maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 84 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 24, 15
# 85 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 86 "data/maps/AldeonTown/scripts.pory"
	addobject 7
# 87 "data/maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 89 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 22, 15
# 90 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 91 "data/maps/AldeonTown/scripts.pory"
	addobject 6
# 92 "data/maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 94 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 25, 15
# 95 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 96 "data/maps/AldeonTown/scripts.pory"
	addobject 5
# 97 "data/maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
	return


AldeonTown_Script_SetupStorm1::
# 104 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 4, 14, 8
# 105 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 106 "data/maps/AldeonTown/scripts.pory"
	addobject 4
# 107 "data/maps/AldeonTown/scripts.pory"
	showobjectat 4, MAP_ALDEON_TOWN
# 109 "data/maps/AldeonTown/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 110 "data/maps/AldeonTown/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return


AldeonTown_Script_SetupStorm2::
# 117 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 4, 8, 8
# 118 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 119 "data/maps/AldeonTown/scripts.pory"
	addobject 4
# 120 "data/maps/AldeonTown/scripts.pory"
	showobjectat 4, MAP_ALDEON_TOWN
# 122 "data/maps/AldeonTown/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 123 "data/maps/AldeonTown/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return


AldeonTown_Script_ShowOrestes::
# 129 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm LOCALID_ALDEON_ORESTES, 9, 20
# 130 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype LOCALID_ALDEON_ORESTES, MOVEMENT_TYPE_FACE_DOWN
	return


AldeonTown_Script_HideMaid::
# 135 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm LOCALID_ALDEON_MAID, 0, 0
# 136 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype LOCALID_ALDEON_MAID, MOVEMENT_TYPE_INVISIBLE
	return


AldeonTown_Script_TriggerLeafBattle::
# 141 "data/maps/AldeonTown/scripts.pory"
	lockall
# 143 "data/maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 8
# 145 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 146 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 148 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 150 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 151 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Script_TriggerLeafBattle_Text_0, MSGBOX_DEFAULT
# 152 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 153 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 155 "data/maps/AldeonTown/scripts.pory"
	removeobject 5
# 156 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 15, 9
# 157 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 158 "data/maps/AldeonTown/scripts.pory"
	addobject 5
# 159 "data/maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
# 161 "data/maps/AldeonTown/scripts.pory"
	removeobject 7
# 162 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 16, 9
# 163 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 164 "data/maps/AldeonTown/scripts.pory"
	addobject 7
# 165 "data/maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 167 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_Leaf1
# 168 "data/maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_Leaf1
# 169 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 170 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 171 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 173 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 174 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf1, MSGBOX_DEFAULT
# 175 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 176 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 178 "data/maps/AldeonTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, AldeonTown_Text_LeafLost
# 180 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 181 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf2, MSGBOX_DEFAULT
# 182 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 183 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 185 "data/maps/AldeonTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, TRUE
# 186 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 187 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 188 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 190 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 191 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue1, MSGBOX_DEFAULT
# 192 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 193 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 195 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 196 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 197 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 199 "data/maps/AldeonTown/scripts.pory"
	removeobject 6
# 200 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 0, 9
# 201 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 202 "data/maps/AldeonTown/scripts.pory"
	addobject 6
# 203 "data/maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 205 "data/maps/AldeonTown/scripts.pory"
	removeobject 8
# 206 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 0, 8
# 207 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
# 208 "data/maps/AldeonTown/scripts.pory"
	addobject 8
# 209 "data/maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 211 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_Blue1
# 212 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_Blue1
# 213 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 215 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 217 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 218 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue2, MSGBOX_DEFAULT
# 219 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 221 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 222 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 224 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 225 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf3, MSGBOX_DEFAULT
# 226 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 228 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 229 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue3, MSGBOX_DEFAULT
# 230 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 232 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 233 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf4, MSGBOX_DEFAULT
# 234 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 236 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 237 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue4, MSGBOX_DEFAULT
# 238 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 240 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 241 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf5, MSGBOX_DEFAULT
# 242 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 244 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 245 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue5, MSGBOX_DEFAULT
# 246 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 247 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 249 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 250 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 251 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 252 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue6, MSGBOX_DEFAULT
# 253 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 254 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 256 "data/maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_BlueLeafExeuntL
# 257 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_BlueLeafExeuntL
# 258 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_BlueLeafExeuntL
# 259 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_BlueLeafExeuntL
# 260 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 262 "data/maps/AldeonTown/scripts.pory"
	hideobjectat 5, MAP_ALDEON_TOWN
# 263 "data/maps/AldeonTown/scripts.pory"
	hideobjectat 6, MAP_ALDEON_TOWN
# 264 "data/maps/AldeonTown/scripts.pory"
	hideobjectat 7, MAP_ALDEON_TOWN
# 265 "data/maps/AldeonTown/scripts.pory"
	hideobjectat 8, MAP_ALDEON_TOWN
# 267 "data/maps/AldeonTown/scripts.pory"
	removeobject 5
# 268 "data/maps/AldeonTown/scripts.pory"
	removeobject 6
# 269 "data/maps/AldeonTown/scripts.pory"
	removeobject 7
# 270 "data/maps/AldeonTown/scripts.pory"
	removeobject 8
# 272 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 0, 0
# 273 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 0, 0
# 274 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 0, 0
# 275 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 0, 0
# 277 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 278 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 279 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 280 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 282 "data/maps/AldeonTown/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 284 "data/maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_Script_Storm::
# 289 "data/maps/AldeonTown/scripts.pory"
	lockall
# 292 "data/maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 10
# 294 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 295 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 297 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 298 "data/maps/AldeonTown/scripts.pory"
	applymovement 4, AldeonTown_Movement_StormBlock1
# 299 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 301 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_StormBlock1, MSGBOX_DEFAULT
# 303 "data/maps/AldeonTown/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 304 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 305 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 307 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_Leaf::
# 312 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf6, MSGBOX_DEFAULT
# 313 "data/maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Blue::
# 318 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue7, MSGBOX_DEFAULT
# 319 "data/maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Zubat::
# 324 "data/maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_ZUBAT, CRY_MODE_NORMAL
# 325 "data/maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_Script_Igglybuff::
# 330 "data/maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_IGGLYBUFF, CRY_MODE_NORMAL
# 331 "data/maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_EventScript_FatMan::
# 336 "data/maps/AldeonTown/scripts.pory"
	lock
# 337 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 338 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_lt AldeonTown_EventScript_FatMan_2
# 345 "data/maps/AldeonTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 346 "data/maps/AldeonTown/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_gt AldeonTown_EventScript_FatMan_6
# 349 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan2, MSGBOX_DEFAULT
AldeonTown_EventScript_FatMan_5:
# 351 "data/maps/AldeonTown/scripts.pory"
	closemessage
AldeonTown_EventScript_FatMan_1:
# 353 "data/maps/AldeonTown/scripts.pory"
	release
	end

AldeonTown_EventScript_FatMan_2:
# 339 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatManBlock, MSGBOX_DEFAULT
# 340 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 341 "data/maps/AldeonTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 342 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
	goto AldeonTown_EventScript_FatMan_1

AldeonTown_EventScript_FatMan_6:
# 347 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan1, MSGBOX_DEFAULT
	goto AldeonTown_EventScript_FatMan_5


AldeonTown_Script_Lass::
# 358 "data/maps/AldeonTown/scripts.pory"
	lock
# 359 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 360 "data/maps/AldeonTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 361 "data/maps/AldeonTown/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_gt AldeonTown_Script_Lass_2
# 364 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Lass1, MSGBOX_DEFAULT
AldeonTown_Script_Lass_1:
# 366 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 367 "data/maps/AldeonTown/scripts.pory"
	release
	end

AldeonTown_Script_Lass_2:
# 362 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Lass2, MSGBOX_DEFAULT
	goto AldeonTown_Script_Lass_1


AldeonTown_EventScript_DoorWoman::
# 372 "data/maps/AldeonTown/scripts.pory"
	lock
# 373 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 374 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_DoorWoman, MSGBOX_DEFAULT
# 375 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 376 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_TownSign::
# 381 "data/maps/AldeonTown/scripts.pory"
	lock
# 382 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 383 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_TownSign, MSGBOX_DEFAULT
# 384 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 385 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_HouseSign::
# 390 "data/maps/AldeonTown/scripts.pory"
	lock
# 391 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 392 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_HouseSign, MSGBOX_DEFAULT
# 393 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 394 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_OldMan::
# 399 "data/maps/AldeonTown/scripts.pory"
	lock
# 400 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 401 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OldMan, MSGBOX_DEFAULT
# 402 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 403 "data/maps/AldeonTown/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 404 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 405 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_SnorlaxBlock::
# 410 "data/maps/AldeonTown/scripts.pory"
	lock
# 411 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 412 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 413 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 414 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 415 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatManBlock, MSGBOX_DEFAULT
# 416 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 417 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 418 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 419 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_TriggerStormBlock::
# 424 "data/maps/AldeonTown/scripts.pory"
	lock
# 425 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 426 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 427 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_StormBlock2, MSGBOX_DEFAULT
# 428 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 429 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 430 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 431 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_Scott::
# 436 "data/maps/AldeonTown/scripts.pory"
	lock
# 437 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 438 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Scott, MSGBOX_DEFAULT
# 439 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 440 "data/maps/AldeonTown/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 441 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 442 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_Orestes::
# 447 "data/maps/AldeonTown/scripts.pory"
	lockall
# 448 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 451 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OrestesReady, MSGBOX_YESNO
# 453 "data/maps/AldeonTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq AldeonTown_Script_Orestes_2
# 459 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OrestesYesReady
# 460 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 462 "data/maps/AldeonTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 463 "data/maps/AldeonTown/scripts.pory"
	switch VAR_RESULT
# 464 "data/maps/AldeonTown/scripts.pory"
	case DIR_NORTH, AldeonTown_Script_Orestes_7
# 471 "data/maps/AldeonTown/scripts.pory"
	case DIR_WEST, AldeonTown_Script_Orestes_8
# 475 "data/maps/AldeonTown/scripts.pory"
	case DIR_EAST, AldeonTown_Script_Orestes_9
# 486 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Script_Orestes_Text_0
# 487 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 488 "data/maps/AldeonTown/scripts.pory"
	release
	end

AldeonTown_Script_Orestes_1:
	end

AldeonTown_Script_Orestes_2:
# 454 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OrestesNotReady
# 455 "data/maps/AldeonTown/scripts.pory"
	closemessage
	end

AldeonTown_Script_Orestes_5:
# 492 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkInPlaceFasterUp
# 493 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 494 "data/maps/AldeonTown/scripts.pory"
	opendoor 3, 19
# 495 "data/maps/AldeonTown/scripts.pory"
	waitdooranim
# 496 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkInPlaceFasterUp
# 497 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 498 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkUp
# 499 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 500 "data/maps/AldeonTown/scripts.pory"
	removeobject LOCALID_ALDEON_ORESTES
# 501 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm LOCALID_ALDEON_ORESTES, 0, 0
# 502 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype LOCALID_ALDEON_ORESTES, MOVEMENT_TYPE_INVISIBLE
# 503 "data/maps/AldeonTown/scripts.pory"
	addobject LOCALID_ALDEON_ORESTES
# 504 "data/maps/AldeonTown/scripts.pory"
	closedoor 3, 19
# 505 "data/maps/AldeonTown/scripts.pory"
	waitdooranim
# 507 "data/maps/AldeonTown/scripts.pory"
	setvar VAR_ORESTES_STATE, 8
# 509 "data/maps/AldeonTown/scripts.pory"
	releaseall
	goto AldeonTown_Script_Orestes_1

AldeonTown_Script_Orestes_7:
# 465 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkLeft
# 466 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 467 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 468 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkLeft4
# 469 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft4
# 470 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
	goto AldeonTown_Script_Orestes_5

AldeonTown_Script_Orestes_8:
# 472 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkLeft5
# 473 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft5
# 474 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
	goto AldeonTown_Script_Orestes_5

AldeonTown_Script_Orestes_9:
# 476 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkDown
# 477 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 478 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkLeft2
# 479 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 480 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkUp
# 481 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 482 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkLeft5
# 483 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft5
# 484 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
	goto AldeonTown_Script_Orestes_5


# 514 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax1:
# 515 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 516 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 517 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 520 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax2:
# 521 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 522 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 523 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 524 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 527 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Leaf1:
# 528 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 528 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 528 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 528 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 528 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 528 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 528 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 528 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 529 "data/maps/AldeonTown/scripts.pory"
	face_up
	step_end

# 532 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Blue1:
# 533 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 533 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 533 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 533 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 533 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 533 "data/maps/AldeonTown/scripts.pory"
	walk_right
	step_end

# 536 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_BlueLeafExeunt:
# 537 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 537 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 537 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 537 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 537 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 537 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 537 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 537 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 537 "data/maps/AldeonTown/scripts.pory"
	walk_right
	step_end

# 540 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_BlueLeafExeuntL:
# 541 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 541 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 541 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 541 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 541 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 541 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 541 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 541 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 541 "data/maps/AldeonTown/scripts.pory"
	walk_left
	step_end

# 544 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_StormBlock1:
# 545 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 545 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 545 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 545 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 545 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 545 "data/maps/AldeonTown/scripts.pory"
	walk_left
	step_end

AldeonTown_Script_TriggerLeafBattle_Text_0:
# 151 "data/maps/AldeonTown/scripts.pory"
	.string "Hey {PLAYER}!$"

AldeonTown_Script_Orestes_Text_0:
# 486 "data/maps/AldeonTown/scripts.pory"
	.string "ERROR: GetPlayer\nFacingDirection OOB$"

AldeonTown_Text_FatManBlock::
# 548 "data/maps/AldeonTown/scripts.pory"
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlaci, can be mighty dangerous. You\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_StormBlock1::
# 552 "data/maps/AldeonTown/scripts.pory"
	.string "This is a very serious deluge, the likes\n"
	.string "of which I've not seen since my youth!\l"
	.string "You must go home! Seek shelter from\l"
	.string "this storm! Please don't get lost! We've\l"
	.string "already lost {LEAF}!$"

AldeonTown_Text_StormBlock2::
# 556 "data/maps/AldeonTown/scripts.pory"
	.string "Go home! It isn't safe out! {LEAF} is lost!$"

AldeonTown_Text_FatMan1::
# 560 "data/maps/AldeonTown/scripts.pory"
	.string "Even after we were forced to join the\n"
	.string "Republic the government still mostly\l"
	.string "leaves us alone. Still, we miss the old\l"
	.string "days of the independant merchant guild\l"
	.string "running things around here. All those\l"
	.string "taxes we spend and what do we have to\l"
	.string "show for it? A whole lot of nothing!$"

AldeonTown_Text_FatMan2::
# 564 "data/maps/AldeonTown/scripts.pory"
	.string "Snorlax wandered off...told you he would\n"
	.string "leave!$"

AldeonTown_Text_DoorWoman::
# 569 "data/maps/AldeonTown/scripts.pory"
	.string "Me sorry but if no business with Master\n"
	.string "you havin' then leavin' you needin'.$"

AldeonTown_Text_TownSign::
# 573 "data/maps/AldeonTown/scripts.pory"
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
# 577 "data/maps/AldeonTown/scripts.pory"
	.string "House of Atreus\n"
	.string "No Solicitors!$"

AldeonTown_Text_Leaf1::
# 582 "data/maps/AldeonTown/scripts.pory"
	.string "Look! I asked my daddy for a Pokemon to\n"
	.string "protect and keep me safe. Isn't she\l"
	.string "cute? Let's see how strong she is!$"

AldeonTown_Text_LeafLost::
# 586 "data/maps/AldeonTown/scripts.pory"
	.string "Hey! That's enough! You're hurting her,\n"
	.string "please stop!$"

AldeonTown_Text_Leaf2::
# 590 "data/maps/AldeonTown/scripts.pory"
	.string "Looks like I need to learn better\n"
	.string "technique if I am going to keep myself\l"
	.string "safe.$"

AldeonTown_Text_Blue1::
# 594 "data/maps/AldeonTown/scripts.pory"
	.string "So sad...$"

AldeonTown_Text_Blue2::
# 599 "data/maps/AldeonTown/scripts.pory"
	.string "Such savage studies of slaughter\n"
	.string "should supercede a more sound syllabus.$"

AldeonTown_Text_Leaf3::
# 604 "data/maps/AldeonTown/scripts.pory"
	.string "Well pardon me, handsome unknown\n"
	.string "stranger, but truly I do not understand\l"
	.string "you. I thought that by battling\l"
	.string "Pokemon I would grow stronger as a\l"
	.string "trainer and I was planning to attend\l"
	.string "trainer school to better learn and grow\l"
	.string "as one myself.$"

AldeonTown_Text_Blue3::
# 609 "data/maps/AldeonTown/scripts.pory"
	.string "Your Pokemon will grow from battles yes\n"
	.string "but practicing in such a wonton way will\l"
	.string "only yield you diminished results. Those\l"
	.string "stuffy fools wasting away in that\l"
	.string "archaic, tyrannical, place called school\l"
	.string "can only teach you mediocrity. To be\l"
	.string "truly great you must innovate and\l"
	.string "break out of their stifling system.$"

AldeonTown_Text_Leaf4::
# 614 "data/maps/AldeonTown/scripts.pory"
	.string "We may not learn as well unsupervised\n"
	.string "but of the Trainer School, here in our\l"
	.string "midst, many have said we must attend,\l"
	.string "study, and graduate or else never be\l"
	.string "great.$"

AldeonTown_Text_Blue4::
# 619 "data/maps/AldeonTown/scripts.pory"
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
# 624 "data/maps/AldeonTown/scripts.pory"
	.string "Your flavored words and shapely form\n"
	.string "convince me there is truth in all of\l"
	.string "what you say. Therefore I will go with\l"
	.string "you. Please, teach me.$"

AldeonTown_Text_Blue5::
# 629 "data/maps/AldeonTown/scripts.pory"
	.string "Then let us go.$"

AldeonTown_Text_Blue6::
# 634 "data/maps/AldeonTown/scripts.pory"
	.string "Girls only, little bro.$"

AldeonTown_Text_Leaf6::
# 638 "data/maps/AldeonTown/scripts.pory"
	.string "You're so good at this! Wow! I'm learning\n"
	.string "lots!$"

AldeonTown_Text_Blue7::
# 642 "data/maps/AldeonTown/scripts.pory"
	.string "Yeah, just like that! You're doing so\n"
	.string "good girl.$"

AldeonTown_Text_OldMan::
# 646 "data/maps/AldeonTown/scripts.pory"
	.string "Hello, young man, I don't recognize you.\n"
	.string "I live here, in this house, with my\l"
	.string "brother. Go in and see him if you need to\l"
	.string "rest.$"

AldeonTown_Text_Scott::
# 650 "data/maps/AldeonTown/scripts.pory"
	.string "My daughter left for her first day of\n"
	.string "school and I am overwhelmed by\l"
	.string "emotions. I'm fixing a hole in my doorway\l"
	.string "where the wind gets in. It helps to\l"
	.string "soothe my mind.$"

AldeonTown_Text_Lass1::
# 654 "data/maps/AldeonTown/scripts.pory"
	.string "This garden is where I come to relax.$"

AldeonTown_Text_Lass2::
# 658 "data/maps/AldeonTown/scripts.pory"
	.string "The Big House was here, before the\n"
	.string "fires.$"

AldeonTown_Text_OrestesReady::
# 662 "data/maps/AldeonTown/scripts.pory"
	.string "Are you ready to save Agamemnon?$"

AldeonTown_Text_OrestesNotReady::
# 666 "data/maps/AldeonTown/scripts.pory"
	.string "Come back when you're ready. Please\n"
	.string "don't delay!$"

AldeonTown_Text_OrestesYesReady::
# 670 "data/maps/AldeonTown/scripts.pory"
	.string "Follow me, we can't just go in the main\n"
	.string "entrance. My mother, Klytmnestra, has\l"
	.string "it guarded well. We'll have to go in\l"
	.string "through the servant's tunnel to save\l"
	.string "my father.$"
