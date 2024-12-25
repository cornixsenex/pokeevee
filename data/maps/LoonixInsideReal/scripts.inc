LoonixInsideReal_MapScripts::
# 9 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 33 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 37 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 12 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 13 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 14 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 17 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 19 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 21 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 23 "data/maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 25 "data/maps/LoonixInsideReal/scripts.pory"
	case 9, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 28 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_HideGranny
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyKitchen
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 20 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyDoorway
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 22 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyTable
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 24 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyTV
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 26 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyBed
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 34 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 6, LoonixInsideReal_Script_FacePlayerUp
	.2byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 38 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 0, LoonixInsideReal_Script_GrannyScene1
# 39 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 6, LoonixInsideReal_Script_GrannyScene2
	.2byte 0


LoonixInsideReal_Script_HideGranny::
# 45 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 12, 10
# 46 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
	end


LoonixInsideReal_Script_ShowGrannyKitchen::
# 53 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 1, 3
# 54 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	end


LoonixInsideReal_Script_ShowGrannyDoorway::
# 60 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 4, 6
# 61 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 63 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 2, 3, 8
# 64 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	end


LoonixInsideReal_Script_ShowGrannyTable::
# 70 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 9, 7
# 71 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	end


LoonixInsideReal_Script_ShowGrannyTV::
# 77 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 8, 6
# 78 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	end


LoonixInsideReal_Script_ShowGrannyBed::
# 83 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 11, 3
# 84 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	end


LoonixInsideReal_Script_FacePlayerUp::
# 90 "data/maps/LoonixInsideReal/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


LoonixInsideReal_Script_PrepareLeafGame::
# 96 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 2
	end


LoonixInsideReal_Script_ClearLeafGame::
# 101 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
	end


LoonixInsideReal_Script_GrannyScene1::
# 106 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 108 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
# 109 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 110 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 113 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 114 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 115 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 116 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 118 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 119 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 121 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 122 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 124 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 125 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1A, MSGBOX_DEFAULT
# 126 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 127 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 129 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 130 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ApproachPlayer
# 131 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 133 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 134 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1B, MSGBOX_DEFAULT
# 135 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 136 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 138 "data/maps/LoonixInsideReal/scripts.pory"
	special NameLeaf
# 139 "data/maps/LoonixInsideReal/scripts.pory"
	waitstate
# 142 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 143 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1C, MSGBOX_DEFAULT
# 144 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 145 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 147 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ReturnToKitchen
# 148 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 150 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_GrannyScene2::
# 155 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 158 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 7
# 160 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 161 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2A, MSGBOX_DEFAULT
# 162 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 163 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 165 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_ApproachPlayer
# 166 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 170 "data/maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 171 "data/maps/LoonixInsideReal/scripts.pory"
	special SetUnlockedPokedexFlags
# 172 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 173 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 174 "data/maps/LoonixInsideReal/scripts.pory"
	special EnableNationalPokedex
# 175 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 176 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2B, MSGBOX_DEFAULT
# 177 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 178 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 183 "data/maps/LoonixInsideReal/scripts.pory"
	giveitem ITEM_POKE_BALL, 6
# 187 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 188 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2C, MSGBOX_YESNO
# 190 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixInsideReal_Script_GrannyScene2_2
LoonixInsideReal_Script_GrannyScene2_1:
# 195 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2D, MSGBOX_DEFAULT
# 196 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 197 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 204 "data/maps/LoonixInsideReal/scripts.pory"
	removeitem ITEM_POKE_BALL, 1
# 207 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_GrannyToTable
# 208 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_Granny2_PlayerToTable
# 209 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 2, LoonixInsideReal_Movement_Granny2_EeveeToTable
# 210 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 215 "data/maps/LoonixInsideReal/scripts.pory"
	fadescreen FADE_TO_BLACK
# 216 "data/maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_HEAL
# 217 "data/maps/LoonixInsideReal/scripts.pory"
	waitfanfare
# 218 "data/maps/LoonixInsideReal/scripts.pory"
	removeobject 2
# 219 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 2, 11, 0
# 220 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 221 "data/maps/LoonixInsideReal/scripts.pory"
	addobject 2
# 222 "data/maps/LoonixInsideReal/scripts.pory"
	showobjectat 2, MAP_LOONIX_INSIDE_REAL
# 223 "data/maps/LoonixInsideReal/scripts.pory"
	special HealPlayerParty
# 224 "data/maps/LoonixInsideReal/scripts.pory"
	callnative UpdateFollowingPokemon
# 225 "data/maps/LoonixInsideReal/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 235 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 236 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2E, MSGBOX_DEFAULT
# 237 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 238 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 242 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 243 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 245 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_GrannyScene2_2:
# 191 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_0x8004, 0
# 192 "data/maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LoonixInsideReal_Script_GrannyScene2_1


LoonixInsideReal_Script_TV::
# 250 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 252 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 253 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_TV_3
# 254 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_TV_3
# 255 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_TV_3
# 256 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_TV_3
# 257 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_TV_3
# 258 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_TV_3
# 259 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_TV_3
# 261 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_TV_4
# 264 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TVX, MSGBOX_SIGN
LoonixInsideReal_Script_TV_1:
# 266 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 268 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_TV_3:
# 260 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV1, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1

LoonixInsideReal_Script_TV_4:
# 262 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV2, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1


LoonixInsideReal_Script_Statue::
# 273 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 274 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Statue_Text_0
# 275 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Junk::
# 280 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 281 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Junk_Text_0
# 282 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Special::
# 287 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 288 "data/maps/LoonixInsideReal/scripts.pory"
	showmonpic SPECIES_KRABBY, 10, 3
# 289 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Special_Text_0
# 290 "data/maps/LoonixInsideReal/scripts.pory"
	hidemonpic
# 291 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_GrandmaTV::
# 296 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 297 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaUp
# 298 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 299 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 300 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
# 301 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 302 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_0
# 303 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 304 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 305 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_1
# 306 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 307 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_GrandmaTV
# 308 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 309 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 310 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 311 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
# 312 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 313 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
# 314 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 315 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaMono
# 316 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 317 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 318 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 319 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaToBed
# 320 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 321 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
# 322 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
# 323 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 324 "data/maps/LoonixInsideReal/scripts.pory"
	addvar VAR_GRANNY_STATE, 1
# 325 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaBed
# 326 "data/maps/LoonixInsideReal/scripts.pory"
	setrespawn HEAL_LOCATION_GRANDMAS_CABIN
# 327 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 328 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 329 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_PreventExit::
# 335 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 336 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_PreventExit_Text_0
# 337 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
# 338 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 339 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_Grandma::
# 344 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 345 "data/maps/LoonixInsideReal/scripts.pory"
	faceplayer
# 347 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 348 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_Grandma_3
# 349 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_Grandma_3
# 350 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_Grandma_3
# 351 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_Grandma_3
# 352 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_Grandma_3
# 353 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_Grandma_3
# 354 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_Grandma_3
# 356 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_Grandma_4
# 357 "data/maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_Script_Grandma_4
# 360 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_0, MSGBOX_DEFAULT
# 361 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
LoonixInsideReal_Script_Grandma_1:
# 363 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end

LoonixInsideReal_Script_Grandma_3:
# 355 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyKitchen
	goto LoonixInsideReal_Script_Grandma_1

LoonixInsideReal_Script_Grandma_4:
# 358 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyTable
	goto LoonixInsideReal_Script_Grandma_1


LoonixInsideReal_Script_GrannyKitchen::
# 369 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 370 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyKitchen, MSGBOX_DEFAULT
# 371 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 372 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 374 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 375 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyTable::
# 381 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 382 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable1, MSGBOX_DEFAULT
# 383 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 384 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 386 "data/maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 388 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 389 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable2, MSGBOX_DEFAULT
# 390 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 391 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 393 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 394 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


# 400 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PreventExit:
# 401 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
# 402 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 402 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 402 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 402 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 403 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 406 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaTV:
# 407 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 408 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 408 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 411 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaBed:
# 412 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 412 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 413 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 413 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 413 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 414 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 415 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 418 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerBed:
# 419 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 419 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 419 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 420 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 420 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 420 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 421 "data/maps/LoonixInsideReal/scripts.pory"
	face_right
	step_end

# 424 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaUp:
# 425 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 428 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaLeft:
# 429 "data/maps/LoonixInsideReal/scripts.pory"
	face_left
	step_end

# 432 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaMono:
# 433 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 436 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerToGma:
# 437 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 437 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 437 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 440 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ApproachPlayer:
# 441 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 441 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 441 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 444 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ReturnToKitchen:
# 445 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 445 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 445 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 446 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 449 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_ApproachPlayer:
# 450 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 453 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_GrannyToTable:
# 454 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 455 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 455 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 455 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 455 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 455 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 456 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 459 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_PlayerToTable:
# 460 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 460 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 461 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 462 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 462 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 462 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 463 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
	step_end

# 466 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_EeveeToTable:
# 467 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 467 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 467 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 468 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 469 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 469 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 469 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

LoonixInsideReal_Script_Statue_Text_0:
# 274 "data/maps/LoonixInsideReal/scripts.pory"
	.string "This is the statue they sent us after\n"
	.string "Dad left...\p"
	.string "Grandma must have forgotten to polish\n"
	.string "it.$"

LoonixInsideReal_Script_Junk_Text_0:
# 281 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Here's another pile of junk grandma\n"
	.string "left lying around.$"

LoonixInsideReal_Script_Special_Text_0:
# 289 "data/maps/LoonixInsideReal/scripts.pory"
	.string "What's for dinner?$"

LoonixInsideReal_Script_GrandmaTV_Text_0:
# 302 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}!$"

LoonixInsideReal_Script_GrandmaTV_Text_1:
# 305 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come here sweetie.$"

LoonixInsideReal_Script_PreventExit_Text_0:
# 336 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_Script_Grandma_Text_0:
# 360 "data/maps/LoonixInsideReal/scripts.pory"
	.string "DEFAULT$"

LoonixInsideReal_Text_GrandmaTVSpeech::
# 472 "data/maps/LoonixInsideReal/scripts.pory"
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that I\l"
	.string "would ask.$"

LoonixInsideReal_Text_GrandmaMono::
# 476 "data/maps/LoonixInsideReal/scripts.pory"
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Saeclara City is too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
# 480 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'll have to stay.\p"
	.string "{PLAYER} will you help me get into\n"
	.string "bed?$"

LoonixInsideReal_Text_GrandmaBed::
# 484 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Thank you.$"

LoonixInsideReal_Text_Granny1A::
# 488 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Good morning sleepyhead!$"

LoonixInsideReal_Text_Granny1B::
# 492 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'm still cooking breakfast but your\n"
	.string "friend came by earlier. What was her\l"
	.string "name again?$"

LoonixInsideReal_Text_Granny1C::
# 497 "data/maps/LoonixInsideReal/scripts.pory"
	.string "That's right, {LEAF}! She's such a sweet and\n"
	.string "beautiful young girl. I think she's still\l"
	.string "waiting outside for you. Go out, have\l"
	.string "fun, but keep your distance from the\l"
	.string "tall grass where wild pokemon roam.$"

LoonixInsideReal_Text_GrannyKitchen::
# 501 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Go have fun with {LEAF} but please stay safe.$"

LoonixInsideReal_Text_GrannyTable1::
# 505 "data/maps/LoonixInsideReal/scripts.pory"
	.string "So nice to see you {PLAYER}! Sit down\n"
	.string "and rest.$"

LoonixInsideReal_Text_GrannyTable2::
# 509 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come back anytime and good luck at\n"
	.string "school.$"

LoonixInsideReal_Text_TV1::
# 513 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Humans and aliens working together to\n"
	.string "explore new worlds, seek out strange\l"
	.string "new life, and boldly go where no one has\l"
	.string "ever gone before.$"

LoonixInsideReal_Text_TV2::
# 517 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Handsome men in suits discuss\n"
	.string "transportation infrastructure with a\l"
	.string "member of the Restoration Party.$"

LoonixInsideReal_Text_TVX::
# 521 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Looks like the TV is switched off.$"

LoonixInsideReal_Text_Granny2A::
# 539 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I told you to keep out of the tall\n"
	.string "grass! Oh {PLAYER}, what can I say?\l"
	.string "I'm worried sick, so scared for you, for\l"
	.string "me. I still see you as that rambunctious\l"
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

LoonixInsideReal_Text_Granny2B::
# 543 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Your father would have wanted you to\n"
	.string "have his Pokedex when you were old\l"
	.string "enough. The Pokedex is an electronic\l"
	.string "tool to help record the Pokemon you\l"
	.string "find. And here, take these.$"

LoonixInsideReal_Text_Granny2C::
# 547 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You can keep Pokemon in Pokeballs, but\n"
	.string "Eevee seems to prefer the fresh air. I\l"
	.string "see that you and him have a strong\l"
	.string "bond. Would you like to give Eevee a\l"
	.string "nickname?$"

LoonixInsideReal_Text_Granny2D::
# 551 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Your father left when you were both\n"
	.string "infants and I raised you and him here\l"
	.string "together, so I know he will always be\l"
	.string "loyal, but if you want to be a strong\l"
	.string "trainer then you will need to train many\l"
	.string "different kinds of Pokemon who may not\l"
	.string "obey an untrained trainer so you ought\l"
	.string "to go to Trainer School and learn the\l"
	.string "right technique. There's one in Albion\l"
	.string "just down the road. Now come sit down\l"
	.string "and get something to eat.$"

LoonixInsideReal_Text_Granny2E::
# 555 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Just promise me you'll go to Trainer\n"
	.string "School and come back anytime to rest at\l"
	.string "home.$"
