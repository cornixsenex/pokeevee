AldeonTown_MapScripts::
# 15 "data/maps/AldeonTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 37 "data/maps/AldeonTown/scripts.pory"
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
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
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

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 32 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowOrestes
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 38 "data/maps/AldeonTown/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 9, AldeonTown_Script_Storm
	.2byte 0


AldeonTown_Script_ShowScottBlock::
# 44 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 10, 22, 8
# 45 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 46 "data/maps/AldeonTown/scripts.pory"
	addobject 10
# 47 "data/maps/AldeonTown/scripts.pory"
	showobjectat 10, MAP_ALDEON_TOWN
	return


AldeonTown_Script_ShowSnorlaxBlock::
# 53 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 9, 27, 22
# 54 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
# 55 "data/maps/AldeonTown/scripts.pory"
	addobject 9
# 56 "data/maps/AldeonTown/scripts.pory"
	showobjectat 9, MAP_ALDEON_TOWN
# 58 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 1, 25, 21
# 59 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 60 "data/maps/AldeonTown/scripts.pory"
	addobject 1
# 61 "data/maps/AldeonTown/scripts.pory"
	showobjectat 1, MAP_ALDEON_TOWN
	return


AldeonTown_Script_HideOldMan::
# 67 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 4, 0, 0
# 68 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
	return


AldeonTown_Script_ShowBlueLeaf::
# 75 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 23, 15
# 76 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 77 "data/maps/AldeonTown/scripts.pory"
	addobject 8
# 78 "data/maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 80 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 24, 15
# 81 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 82 "data/maps/AldeonTown/scripts.pory"
	addobject 7
# 83 "data/maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 85 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 22, 15
# 86 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 87 "data/maps/AldeonTown/scripts.pory"
	addobject 6
# 88 "data/maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 90 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 25, 15
# 91 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 92 "data/maps/AldeonTown/scripts.pory"
	addobject 5
# 93 "data/maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
	return


AldeonTown_Script_SetupStorm1::
# 100 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 4, 14, 8
# 101 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 102 "data/maps/AldeonTown/scripts.pory"
	addobject 4
# 103 "data/maps/AldeonTown/scripts.pory"
	showobjectat 4, MAP_ALDEON_TOWN
# 105 "data/maps/AldeonTown/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 106 "data/maps/AldeonTown/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return


AldeonTown_Script_SetupStorm2::
# 113 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 4, 8, 8
# 114 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 115 "data/maps/AldeonTown/scripts.pory"
	addobject 4
# 116 "data/maps/AldeonTown/scripts.pory"
	showobjectat 4, MAP_ALDEON_TOWN
# 118 "data/maps/AldeonTown/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 119 "data/maps/AldeonTown/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return


AldeonTown_Script_ShowOrestes::
# 125 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm LOCALID_ALDEON_ORESTES, 21, 20
# 126 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype LOCALID_ALDEON_ORESTES, MOVEMENT_TYPE_FACE_DOWN
	return


AldeonTown_Script_TriggerLeafBattle::
# 131 "data/maps/AldeonTown/scripts.pory"
	lockall
# 133 "data/maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 8
# 135 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 136 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 137 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 138 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 140 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 141 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Script_TriggerLeafBattle_Text_0, MSGBOX_DEFAULT
# 142 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 143 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 145 "data/maps/AldeonTown/scripts.pory"
	removeobject 5
# 146 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 15, 9
# 147 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 148 "data/maps/AldeonTown/scripts.pory"
	addobject 5
# 149 "data/maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
# 151 "data/maps/AldeonTown/scripts.pory"
	removeobject 7
# 152 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 16, 9
# 153 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 154 "data/maps/AldeonTown/scripts.pory"
	addobject 7
# 155 "data/maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 157 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_Leaf1
# 158 "data/maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_Leaf1
# 159 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 161 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 164 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf1, MSGBOX_DEFAULT
# 165 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 166 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 168 "data/maps/AldeonTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, AldeonTown_Text_LeafLost
# 170 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 171 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf2, MSGBOX_DEFAULT
# 172 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 173 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 175 "data/maps/AldeonTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, TRUE
# 176 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 177 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 178 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 180 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 181 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue1, MSGBOX_DEFAULT
# 182 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 183 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 185 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 186 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 187 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 189 "data/maps/AldeonTown/scripts.pory"
	removeobject 6
# 190 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 0, 9
# 191 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 192 "data/maps/AldeonTown/scripts.pory"
	addobject 6
# 193 "data/maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 195 "data/maps/AldeonTown/scripts.pory"
	removeobject 8
# 196 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 0, 8
# 197 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
# 198 "data/maps/AldeonTown/scripts.pory"
	addobject 8
# 199 "data/maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 201 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_Blue1
# 202 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_Blue1
# 203 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 205 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 207 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 208 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue2, MSGBOX_DEFAULT
# 209 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 211 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 212 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 214 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 215 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf3, MSGBOX_DEFAULT
# 216 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 218 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 219 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue3, MSGBOX_DEFAULT
# 220 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 222 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 223 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf4, MSGBOX_DEFAULT
# 224 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 226 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 227 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue4, MSGBOX_DEFAULT
# 228 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 230 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 231 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf5, MSGBOX_DEFAULT
# 232 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 234 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 235 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue5, MSGBOX_DEFAULT
# 236 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 237 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 239 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 240 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 241 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 242 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue6, MSGBOX_DEFAULT
# 243 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 244 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 246 "data/maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_BlueLeafExeuntL
# 247 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_BlueLeafExeuntL
# 248 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_BlueLeafExeuntL
# 249 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_BlueLeafExeuntL
# 250 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 252 "data/maps/AldeonTown/scripts.pory"
	hideobjectat 5, MAP_ALDEON_TOWN
# 253 "data/maps/AldeonTown/scripts.pory"
	hideobjectat 6, MAP_ALDEON_TOWN
# 254 "data/maps/AldeonTown/scripts.pory"
	hideobjectat 7, MAP_ALDEON_TOWN
# 255 "data/maps/AldeonTown/scripts.pory"
	hideobjectat 8, MAP_ALDEON_TOWN
# 257 "data/maps/AldeonTown/scripts.pory"
	removeobject 5
# 258 "data/maps/AldeonTown/scripts.pory"
	removeobject 6
# 259 "data/maps/AldeonTown/scripts.pory"
	removeobject 7
# 260 "data/maps/AldeonTown/scripts.pory"
	removeobject 8
# 262 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 0, 0
# 263 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 0, 0
# 264 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 0, 0
# 265 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 0, 0
# 267 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 268 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 269 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 270 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 272 "data/maps/AldeonTown/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 274 "data/maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_Script_Storm::
# 279 "data/maps/AldeonTown/scripts.pory"
	lockall
# 282 "data/maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 10
# 284 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 285 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 287 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 288 "data/maps/AldeonTown/scripts.pory"
	applymovement 4, AldeonTown_Movement_StormBlock1
# 289 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 291 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_StormBlock1, MSGBOX_DEFAULT
# 293 "data/maps/AldeonTown/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 294 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 295 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 297 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_Leaf::
# 302 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf6, MSGBOX_DEFAULT
# 303 "data/maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Blue::
# 308 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue7, MSGBOX_DEFAULT
# 309 "data/maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Zubat::
# 314 "data/maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_ZUBAT, CRY_MODE_NORMAL
# 315 "data/maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_Script_Igglybuff::
# 320 "data/maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_IGGLYBUFF, CRY_MODE_NORMAL
# 321 "data/maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_EventScript_FatMan::
# 326 "data/maps/AldeonTown/scripts.pory"
	lock
# 327 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 328 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 9
	goto_if_lt AldeonTown_EventScript_FatMan_2
# 335 "data/maps/AldeonTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 336 "data/maps/AldeonTown/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_gt AldeonTown_EventScript_FatMan_6
# 339 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan2, MSGBOX_DEFAULT
AldeonTown_EventScript_FatMan_5:
# 341 "data/maps/AldeonTown/scripts.pory"
	closemessage
AldeonTown_EventScript_FatMan_1:
# 343 "data/maps/AldeonTown/scripts.pory"
	release
	end

AldeonTown_EventScript_FatMan_2:
# 329 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatManBlock, MSGBOX_DEFAULT
# 330 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 331 "data/maps/AldeonTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 332 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
	goto AldeonTown_EventScript_FatMan_1

AldeonTown_EventScript_FatMan_6:
# 337 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan1, MSGBOX_DEFAULT
	goto AldeonTown_EventScript_FatMan_5


AldeonTown_Script_Lass::
# 348 "data/maps/AldeonTown/scripts.pory"
	lock
# 349 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 350 "data/maps/AldeonTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 351 "data/maps/AldeonTown/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_gt AldeonTown_Script_Lass_2
# 354 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Lass1, MSGBOX_DEFAULT
AldeonTown_Script_Lass_1:
# 356 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 357 "data/maps/AldeonTown/scripts.pory"
	release
	end

AldeonTown_Script_Lass_2:
# 352 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Lass2, MSGBOX_DEFAULT
	goto AldeonTown_Script_Lass_1


AldeonTown_EventScript_DoorWoman::
# 362 "data/maps/AldeonTown/scripts.pory"
	lock
# 363 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 364 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_DoorWoman, MSGBOX_DEFAULT
# 365 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 366 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_TownSign::
# 371 "data/maps/AldeonTown/scripts.pory"
	lock
# 372 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 373 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_TownSign, MSGBOX_DEFAULT
# 374 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 375 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_HouseSign::
# 380 "data/maps/AldeonTown/scripts.pory"
	lock
# 381 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 382 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_HouseSign, MSGBOX_DEFAULT
# 383 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 384 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_OldMan::
# 389 "data/maps/AldeonTown/scripts.pory"
	lock
# 390 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 391 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OldMan, MSGBOX_DEFAULT
# 392 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 393 "data/maps/AldeonTown/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 394 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 395 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_SnorlaxBlock::
# 400 "data/maps/AldeonTown/scripts.pory"
	lock
# 401 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 402 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 403 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 404 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 405 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatManBlock, MSGBOX_DEFAULT
# 406 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 407 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 408 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 409 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_TriggerStormBlock::
# 414 "data/maps/AldeonTown/scripts.pory"
	lock
# 415 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 416 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 417 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_StormBlock2, MSGBOX_DEFAULT
# 418 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 419 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 420 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 421 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_Scott::
# 426 "data/maps/AldeonTown/scripts.pory"
	lock
# 427 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 428 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Scott, MSGBOX_DEFAULT
# 429 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 430 "data/maps/AldeonTown/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 431 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 432 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_Orestes::
# 437 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 439 "data/maps/AldeonTown/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 440 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OrestesReady, MSGBOX_YESNO
# 442 "data/maps/AldeonTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq AldeonTown_Script_Orestes_2
# 449 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OrestesYesReady
# 450 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 451 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 453 "data/maps/AldeonTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 454 "data/maps/AldeonTown/scripts.pory"
	switch VAR_RESULT
# 455 "data/maps/AldeonTown/scripts.pory"
	case DIR_NORTH, AldeonTown_Script_Orestes_7
# 463 "data/maps/AldeonTown/scripts.pory"
	case DIR_SOUTH, AldeonTown_Script_Orestes_8
# 473 "data/maps/AldeonTown/scripts.pory"
	case DIR_EAST, AldeonTown_Script_Orestes_9
# 482 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Script_Orestes_Text_0
# 483 "data/maps/AldeonTown/scripts.pory"
	closemessage
	end

AldeonTown_Script_Orestes_1:
	end

AldeonTown_Script_Orestes_2:
# 443 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OrestesNotReady
# 444 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 445 "data/maps/AldeonTown/scripts.pory"
	closemessage
	end

AldeonTown_Script_Orestes_5:
# 486 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, AldeonTown_Movement_OrestesToServantHouse
# 487 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_PLAYER, AldeonTown_Movement_OrestesToServantHouse
# 488 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 489 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkUp
# 490 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 491 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 494 "data/maps/AldeonTown/scripts.pory"
	setvar VAR_ORESTES_STATE, 8
	goto AldeonTown_Script_Orestes_1

AldeonTown_Script_Orestes_7:
# 456 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkLeft
# 457 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 458 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkDown
# 459 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 460 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkLeft
# 461 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 462 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
	goto AldeonTown_Script_Orestes_5

AldeonTown_Script_Orestes_8:
# 464 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkDown
# 465 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 466 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 467 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkLeft
# 468 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 469 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 470 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkLeft
# 471 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 472 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
	goto AldeonTown_Script_Orestes_5

AldeonTown_Script_Orestes_9:
# 474 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkDown
# 475 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 476 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkLeft
# 477 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 478 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_ALDEON_ORESTES, Common_Movement_WalkLeft
# 479 "data/maps/AldeonTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 480 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
	goto AldeonTown_Script_Orestes_5


# 501 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax1:
# 502 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 503 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 504 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 507 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax2:
# 508 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 509 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 510 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 511 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 514 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Leaf1:
# 515 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 515 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 515 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 515 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 515 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 515 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 515 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 515 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 516 "data/maps/AldeonTown/scripts.pory"
	face_up
	step_end

# 519 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Blue1:
# 520 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 520 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 520 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 520 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 520 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 520 "data/maps/AldeonTown/scripts.pory"
	walk_right
	step_end

# 523 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_BlueLeafExeunt:
# 524 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 524 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 524 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 524 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 524 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 524 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 524 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 524 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 524 "data/maps/AldeonTown/scripts.pory"
	walk_right
	step_end

# 527 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_BlueLeafExeuntL:
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
# 528 "data/maps/AldeonTown/scripts.pory"
	walk_left
	step_end

# 531 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_StormBlock1:
# 532 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 532 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 532 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 532 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 532 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 532 "data/maps/AldeonTown/scripts.pory"
	walk_left
	step_end

# 535 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_OrestesToServantHouse:
# 536 "data/maps/AldeonTown/scripts.pory"
	walk_right
	step_end

AldeonTown_Script_TriggerLeafBattle_Text_0:
# 141 "data/maps/AldeonTown/scripts.pory"
	.string "Hey {PLAYER}!$"

AldeonTown_Script_Orestes_Text_0:
# 482 "data/maps/AldeonTown/scripts.pory"
	.string "ERROR: GetPlayer\nFacingDirection OOB$"

AldeonTown_Text_FatManBlock::
# 540 "data/maps/AldeonTown/scripts.pory"
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlaci, can be mighty dangerous. You\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_StormBlock1::
# 544 "data/maps/AldeonTown/scripts.pory"
	.string "This is a very serious deluge, the likes\n"
	.string "of which I've not seen since my youth!\l"
	.string "You must go home! Seek shelter from\l"
	.string "this storm! Please don't get lost! We've\l"
	.string "already lost {LEAF}!$"

AldeonTown_Text_StormBlock2::
# 548 "data/maps/AldeonTown/scripts.pory"
	.string "Go home! It isn't safe out! {LEAF} is lost!$"

AldeonTown_Text_FatMan1::
# 552 "data/maps/AldeonTown/scripts.pory"
	.string "Even after we were forced to join the\n"
	.string "Republic the government still mostly\l"
	.string "leaves us alone. Still, we miss the old\l"
	.string "days of the independant merchant guild\l"
	.string "running things around here. All those\l"
	.string "taxes we spend and what do we have to\l"
	.string "show for it? A whole lot of nothing!$"

AldeonTown_Text_FatMan2::
# 556 "data/maps/AldeonTown/scripts.pory"
	.string "Snorlax wandered off...told you he would\n"
	.string "leave!$"

AldeonTown_Text_DoorWoman::
# 561 "data/maps/AldeonTown/scripts.pory"
	.string "Me sorry but if no business with Master\n"
	.string "you havin' then leavin' you needin'.$"

AldeonTown_Text_TownSign::
# 565 "data/maps/AldeonTown/scripts.pory"
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
# 569 "data/maps/AldeonTown/scripts.pory"
	.string "House of Atreus\n"
	.string "No Solicitors!$"

AldeonTown_Text_Leaf1::
# 574 "data/maps/AldeonTown/scripts.pory"
	.string "Look! I asked my daddy for a Pokemon to\n"
	.string "protect and keep me safe. Isn't she\l"
	.string "cute? Let's see how strong she is!$"

AldeonTown_Text_LeafLost::
# 578 "data/maps/AldeonTown/scripts.pory"
	.string "Hey! That's enough! You're hurting her,\n"
	.string "please stop!$"

AldeonTown_Text_Leaf2::
# 582 "data/maps/AldeonTown/scripts.pory"
	.string "Looks like I need to learn better\n"
	.string "technique if I am going to keep myself\l"
	.string "safe.$"

AldeonTown_Text_Blue1::
# 586 "data/maps/AldeonTown/scripts.pory"
	.string "So sad...$"

AldeonTown_Text_Blue2::
# 591 "data/maps/AldeonTown/scripts.pory"
	.string "Such savage studies of slaughter\n"
	.string "should supercede a more sound syllabus.$"

AldeonTown_Text_Leaf3::
# 596 "data/maps/AldeonTown/scripts.pory"
	.string "Well pardon me, handsome unknown\n"
	.string "stranger, but truly I do not understand\l"
	.string "you. I thought that by battling\l"
	.string "Pokemon I would grow stronger as a\l"
	.string "trainer and I was planning to attend\l"
	.string "trainer school to better learn and grow\l"
	.string "as one myself.$"

AldeonTown_Text_Blue3::
# 601 "data/maps/AldeonTown/scripts.pory"
	.string "Your Pokemon will grow from battles yes\n"
	.string "but practicing in such a wonton way will\l"
	.string "only yield you diminished results. Those\l"
	.string "stuffy fools wasting away in that\l"
	.string "archaic, tyrannical, place called school\l"
	.string "can only teach you mediocrity. To be\l"
	.string "truly great you must innovate and\l"
	.string "break out of their stifling system.$"

AldeonTown_Text_Leaf4::
# 606 "data/maps/AldeonTown/scripts.pory"
	.string "We may not learn as well unsupervised\n"
	.string "but of the Trainer School, here in our\l"
	.string "midst, many have said we must attend,\l"
	.string "study, and graduate or else never be\l"
	.string "great.$"

AldeonTown_Text_Blue4::
# 611 "data/maps/AldeonTown/scripts.pory"
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
# 616 "data/maps/AldeonTown/scripts.pory"
	.string "Your flavored words and shapely form\n"
	.string "convince me there is truth in all of\l"
	.string "what you say. Therefore I will go with\l"
	.string "you. Please, teach me.$"

AldeonTown_Text_Blue5::
# 621 "data/maps/AldeonTown/scripts.pory"
	.string "Then let us go.$"

AldeonTown_Text_Blue6::
# 626 "data/maps/AldeonTown/scripts.pory"
	.string "Girls only, little bro.$"

AldeonTown_Text_Leaf6::
# 630 "data/maps/AldeonTown/scripts.pory"
	.string "You're so good at this! Wow! I'm learning\n"
	.string "lots!$"

AldeonTown_Text_Blue7::
# 634 "data/maps/AldeonTown/scripts.pory"
	.string "Yeah, just like that! You're doing so\n"
	.string "good girl.$"

AldeonTown_Text_OldMan::
# 638 "data/maps/AldeonTown/scripts.pory"
	.string "Hello, young man, I don't recognize you.\n"
	.string "I live here, in this house, with my\l"
	.string "brother. Go in and see him if you need to\l"
	.string "rest.$"

AldeonTown_Text_Scott::
# 642 "data/maps/AldeonTown/scripts.pory"
	.string "My daughter left for her first day of\n"
	.string "school and I am overwhelmed by\l"
	.string "emotions. I'm fixing a hole in my doorway\l"
	.string "where the wind gets in. It helps to\l"
	.string "soothe my mind.$"

AldeonTown_Text_Lass1::
# 646 "data/maps/AldeonTown/scripts.pory"
	.string "This garden is where I come to relax.$"

AldeonTown_Text_Lass2::
# 650 "data/maps/AldeonTown/scripts.pory"
	.string "The Big House was here, before the\n"
	.string "fires.$"

AldeonTown_Text_OrestesReady::
# 654 "data/maps/AldeonTown/scripts.pory"
	.string "Are you ready to save Agamemnon?$"

AldeonTown_Text_OrestesNotReady::
# 658 "data/maps/AldeonTown/scripts.pory"
	.string "Come back when you're ready. Please\n"
	.string "don't delay!$"

AldeonTown_Text_OrestesYesReady::
# 662 "data/maps/AldeonTown/scripts.pory"
	.string "Follow me, we can't just go in the main\n"
	.string "entrance. My mother, Klytmnestra, has\l"
	.string "it guarded well. We'll have to go in\l"
	.string "through the servant's tunnel to save\l"
	.string "my father.$"
