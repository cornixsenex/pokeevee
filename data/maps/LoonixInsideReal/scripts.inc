LoonixInsideReal_MapScripts::
# 8 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 32 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 36 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 11 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 12 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 13 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 14 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 18 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 20 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 22 "data/maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 24 "data/maps/LoonixInsideReal/scripts.pory"
	case 9, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 27 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_HideGranny
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyKitchen
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 19 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyDoorway
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyTable
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 23 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyTV
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 25 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyBed
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 33 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 6, LoonixInsideReal_Script_FacePlayerUp
	.2byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 37 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 0, LoonixInsideReal_Script_GrannyScene1
# 38 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 6, LoonixInsideReal_Script_GrannyScene2
	.2byte 0


LoonixInsideReal_Script_HideGranny::
# 44 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 12, 10
# 45 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
	end


LoonixInsideReal_Script_ShowGrannyKitchen::
# 52 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 1, 3
# 53 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	end


LoonixInsideReal_Script_ShowGrannyDoorway::
# 59 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 3, 6
# 60 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	end


LoonixInsideReal_Script_ShowGrannyTable::
# 66 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 9, 7
# 67 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	end


LoonixInsideReal_Script_ShowGrannyTV::
# 73 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 8, 6
# 74 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	end


LoonixInsideReal_Script_ShowGrannyBed::
# 79 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 11, 3
# 80 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	end


LoonixInsideReal_Script_FacePlayerUp::
# 86 "data/maps/LoonixInsideReal/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


LoonixInsideReal_Script_PrepareLeafGame::
# 92 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 2
	end


LoonixInsideReal_Script_ClearLeafGame::
# 97 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
	end


LoonixInsideReal_Script_GrannyScene1::
# 102 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 104 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
# 105 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 106 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 109 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 110 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 111 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 112 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 114 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 115 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 117 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 118 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 120 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1A, MSGBOX_DEFAULT
# 121 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 123 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 124 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ApproachPlayer
# 125 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 127 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1B, MSGBOX_DEFAULT
# 128 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 130 "data/maps/LoonixInsideReal/scripts.pory"
	special NameLeaf
# 131 "data/maps/LoonixInsideReal/scripts.pory"
	waitstate
# 134 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1C, MSGBOX_DEFAULT
# 135 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 137 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ReturnToKitchen
# 138 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 140 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_GrannyScene2::
# 145 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 147 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 7
# 149 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 150 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 151 "data/maps/LoonixInsideReal/scripts.pory"
	special SetUnlockedPokedexFlags
# 152 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 153 "data/maps/LoonixInsideReal/scripts.pory"
	special EnableNationalPokedex
# 155 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 156 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2A, MSGBOX_DEFAULT
# 157 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 158 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 188 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_TV::
# 193 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 195 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 196 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_TV_3
# 197 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_TV_3
# 198 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_TV_3
# 199 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_TV_3
# 200 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_TV_3
# 201 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_TV_3
# 202 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_TV_3
# 204 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_TV_4
# 207 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TVX, MSGBOX_SIGN
LoonixInsideReal_Script_TV_1:
# 209 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 211 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_TV_3:
# 203 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV1, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1

LoonixInsideReal_Script_TV_4:
# 205 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV2, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1


LoonixInsideReal_Script_Statue::
# 216 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 217 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Statue_Text_0
# 218 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Junk::
# 223 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 224 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Junk_Text_0
# 225 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Special::
# 230 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 231 "data/maps/LoonixInsideReal/scripts.pory"
	showmonpic SPECIES_KRABBY, 10, 3
# 232 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Special_Text_0
# 233 "data/maps/LoonixInsideReal/scripts.pory"
	hidemonpic
# 234 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_GrandmaTV::
# 239 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 240 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaUp
# 241 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 242 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 243 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
# 244 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 245 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_0
# 246 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 247 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 248 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_1
# 249 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 250 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_GrandmaTV
# 251 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 252 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 253 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 254 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
# 255 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 256 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
# 257 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 258 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaMono
# 259 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 260 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 261 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 262 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaToBed
# 263 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 264 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
# 265 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
# 266 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 267 "data/maps/LoonixInsideReal/scripts.pory"
	addvar VAR_GRANNY_STATE, 1
# 268 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaBed
# 269 "data/maps/LoonixInsideReal/scripts.pory"
	setrespawn HEAL_LOCATION_GRANDMAS_CABIN
# 270 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 271 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 272 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_PreventExit::
# 278 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 279 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_PreventExit_Text_0
# 280 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
# 281 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 282 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_Grandma::
# 287 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 288 "data/maps/LoonixInsideReal/scripts.pory"
	faceplayer
# 290 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 291 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_Grandma_3
# 292 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_Grandma_3
# 293 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_Grandma_3
# 294 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_Grandma_3
# 295 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_Grandma_3
# 296 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_Grandma_3
# 297 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_Grandma_3
# 299 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_Grandma_4
# 300 "data/maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_Script_Grandma_4
# 303 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_0, MSGBOX_DEFAULT
# 304 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
LoonixInsideReal_Script_Grandma_1:
# 306 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end

LoonixInsideReal_Script_Grandma_3:
# 298 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyKitchen
	goto LoonixInsideReal_Script_Grandma_1

LoonixInsideReal_Script_Grandma_4:
# 301 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyTable
	goto LoonixInsideReal_Script_Grandma_1


LoonixInsideReal_Script_GrannyKitchen::
# 312 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 313 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyKitchen, MSGBOX_DEFAULT
# 314 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 315 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 317 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 318 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyTable::
# 324 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable1, MSGBOX_DEFAULT
# 325 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 327 "data/maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 329 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable2, MSGBOX_DEFAULT
# 330 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 332 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 333 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


# 339 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PreventExit:
# 340 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
# 341 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 341 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 341 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 341 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 342 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 345 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaTV:
# 346 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 347 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 347 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 350 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaBed:
# 351 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 351 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 352 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 352 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 352 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 353 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 354 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 357 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerBed:
# 358 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 358 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 358 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 359 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 359 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 359 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 360 "data/maps/LoonixInsideReal/scripts.pory"
	face_right
	step_end

# 363 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaUp:
# 364 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 367 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaLeft:
# 368 "data/maps/LoonixInsideReal/scripts.pory"
	face_left
	step_end

# 371 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaMono:
# 372 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 375 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerToGma:
# 376 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 376 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 376 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 379 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ApproachPlayer:
# 380 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 380 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 380 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 383 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ReturnToKitchen:
# 384 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 384 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 384 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 385 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

LoonixInsideReal_Script_Statue_Text_0:
# 217 "data/maps/LoonixInsideReal/scripts.pory"
	.string "This is the statue they sent us after\n"
	.string "Dad left...\p"
	.string "Grandma must have forgotten to polish\n"
	.string "it.$"

LoonixInsideReal_Script_Junk_Text_0:
# 224 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Here's another pile of junk grandma\n"
	.string "left lying around.$"

LoonixInsideReal_Script_Special_Text_0:
# 232 "data/maps/LoonixInsideReal/scripts.pory"
	.string "What's for dinner?$"

LoonixInsideReal_Script_GrandmaTV_Text_0:
# 245 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}!$"

LoonixInsideReal_Script_GrandmaTV_Text_1:
# 248 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come here sweetie.$"

LoonixInsideReal_Script_PreventExit_Text_0:
# 279 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_Script_Grandma_Text_0:
# 303 "data/maps/LoonixInsideReal/scripts.pory"
	.string "DEFAULT$"

LoonixInsideReal_Text_GrandmaTVSpeech::
# 388 "data/maps/LoonixInsideReal/scripts.pory"
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that I\l"
	.string "would ask.$"

LoonixInsideReal_Text_GrandmaMono::
# 392 "data/maps/LoonixInsideReal/scripts.pory"
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Saeclara City is too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
# 396 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'll have to stay.\p"
	.string "{PLAYER} will you help me get into\n"
	.string "bed?$"

LoonixInsideReal_Text_GrandmaBed::
# 400 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Thank you.$"

LoonixInsideReal_Text_Granny1A::
# 404 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Good morning sleepyhead!$"

LoonixInsideReal_Text_Granny1B::
# 408 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'm still cooking breakfast but your\n"
	.string "friend came by earlier. What was her\l"
	.string "name again?$"

LoonixInsideReal_Text_Granny1C::
# 413 "data/maps/LoonixInsideReal/scripts.pory"
	.string "That's right, {LEAF}! She's such a sweet and\n"
	.string "beautiful young girl. I think she's still\l"
	.string "waiting outside for you. Go out, have\l"
	.string "fun, but keep your distance from the\l"
	.string "tall grass where wild pokemon roam.$"

LoonixInsideReal_Text_GrannyKitchen::
# 417 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Go have fun with {LEAF} but please stay safe.$"

LoonixInsideReal_Text_GrannyTable1::
# 421 "data/maps/LoonixInsideReal/scripts.pory"
	.string "So nice to see you {PLAYER}! Sit down\n"
	.string "and rest.$"

LoonixInsideReal_Text_GrannyTable2::
# 425 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come back anytime and good luck at\n"
	.string "school.$"

LoonixInsideReal_Text_TV1::
# 429 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Humans and aliens working together to\n"
	.string "explore new worlds, seek out strange\l"
	.string "new life, and boldly go where no one has\l"
	.string "ever gone before.$"

LoonixInsideReal_Text_TV2::
# 433 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Handsome men in suits discuss\n"
	.string "transportation infrastructure with a\l"
	.string "member of the Restoration Party.$"

LoonixInsideReal_Text_TVX::
# 437 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Looks like the TV is switched off.$"

LoonixInsideReal_Text_Granny2A::
# 455 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I told you to keep out of the tall\n"
	.string "grass! Oh Sneed, what can I say? I'm\l"
	.string "worried sick, so scared for you, for me.\l"
	.string "I still see you as that rambunctious\l"
	.string "boy you used to be but now you're\l"
	.string "growing up and I'm afraid of losing you\l"
	.string "like I lost your father. I long to keep\l"
	.string "you here forever safe but as your\l"
	.string "strength flowers my own decays. I\l"
	.string "often asked myself if what I did was\l"
	.string "the right thing to do to raise you best\l"
	.string "but now I see that choice is yours to\l"
	.string "make. The time has come for me to set\l"
	.string "you free for even though my heart\l"
	.string "betrays these words I trust you and I\l"
	.string "know it's for the best.$"
