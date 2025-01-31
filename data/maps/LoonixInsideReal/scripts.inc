LoonixInsideReal_MapScripts::
# 9 "data//maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 37 "data//maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 41 "data//maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data//maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 12 "data//maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 13 "data//maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 14 "data//maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data//maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data//maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 17 "data//maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 19 "data//maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 21 "data//maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 22 "data//maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 23 "data//maps/LoonixInsideReal/scripts.pory"
	case 9, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 24 "data//maps/LoonixInsideReal/scripts.pory"
	case 10, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 25 "data//maps/LoonixInsideReal/scripts.pory"
	case 11, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 27 "data//maps/LoonixInsideReal/scripts.pory"
	case 13, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 29 "data//maps/LoonixInsideReal/scripts.pory"
	case 14, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 32 "data//maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_HideGranny
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data//maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyKitchen
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 20 "data//maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyDoorway
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 26 "data//maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyTable
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 28 "data//maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyTV
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 30 "data//maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyBed
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 38 "data//maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 6, LoonixInsideReal_Script_FacePlayerUp
	.2byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 42 "data//maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 0, LoonixInsideReal_Script_GrannyScene1
# 43 "data//maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 6, LoonixInsideReal_Script_GrannyScene2
# 44 "data//maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 10, LoonixInsideReal_Script_GrannyScene3
	.2byte 0


LoonixInsideReal_Script_HideGranny::
# 50 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 12, 10
# 51 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
	end


LoonixInsideReal_Script_ShowGrannyKitchen::
# 57 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 1, 3
# 58 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	end


LoonixInsideReal_Script_ShowGrannyDoorway::
# 64 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 4, 6
# 65 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 67 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 2, 3, 8
# 68 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	end


LoonixInsideReal_Script_ShowGrannyTable::
# 74 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 9, 7
# 75 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	end


LoonixInsideReal_Script_ShowGrannyTV::
# 81 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 8, 6
# 82 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	end


LoonixInsideReal_Script_ShowGrannyBed::
# 87 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 11, 3
# 88 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	end


LoonixInsideReal_Script_FacePlayerUp::
# 94 "data//maps/LoonixInsideReal/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


LoonixInsideReal_Script_PrepareLeafGame::
# 100 "data//maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 2
	end


LoonixInsideReal_Script_ClearLeafGame::
# 105 "data//maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
	end


LoonixInsideReal_Script_GrannyScene1::
# 110 "data//maps/LoonixInsideReal/scripts.pory"
	lockall
# 112 "data//maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
# 113 "data//maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 114 "data//maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 115 "data//maps/LoonixInsideReal/scripts.pory"
	setvar VAR_SYS_LEVEL_CAP, 8
# 118 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 119 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 120 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 121 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 123 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 124 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 126 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 127 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 129 "data//maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 130 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1A, MSGBOX_DEFAULT
# 131 "data//maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 132 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 134 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 135 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ApproachPlayer
# 136 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 138 "data//maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 139 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1B, MSGBOX_DEFAULT
# 140 "data//maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 141 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 143 "data//maps/LoonixInsideReal/scripts.pory"
	special NameLeaf
# 144 "data//maps/LoonixInsideReal/scripts.pory"
	waitstate
# 147 "data//maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 148 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1C, MSGBOX_DEFAULT
# 149 "data//maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 150 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 152 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ReturnToKitchen
# 153 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 155 "data//maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_GrannyScene2::
# 160 "data//maps/LoonixInsideReal/scripts.pory"
	lockall
# 163 "data//maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 7
# 165 "data//maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 166 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2A, MSGBOX_DEFAULT
# 167 "data//maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 168 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 170 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_ApproachPlayer
# 171 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 175 "data//maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 176 "data//maps/LoonixInsideReal/scripts.pory"
	special SetUnlockedPokedexFlags
# 177 "data//maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 178 "data//maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 179 "data//maps/LoonixInsideReal/scripts.pory"
	special EnableNationalPokedex
# 180 "data//maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 181 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2B, MSGBOX_DEFAULT
# 182 "data//maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 183 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 188 "data//maps/LoonixInsideReal/scripts.pory"
	giveitem ITEM_POKE_BALL, 6
# 192 "data//maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 193 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2C, MSGBOX_YESNO
# 195 "data//maps/LoonixInsideReal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixInsideReal_Script_GrannyScene2_2
LoonixInsideReal_Script_GrannyScene2_1:
# 200 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2D, MSGBOX_DEFAULT
# 201 "data//maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 202 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 209 "data//maps/LoonixInsideReal/scripts.pory"
	removeitem ITEM_POKE_BALL, 1
# 212 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_GrannyToTable
# 213 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_Granny2_PlayerToTable
# 214 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 2, LoonixInsideReal_Movement_Granny2_EeveeToTable
# 215 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 217 "data//maps/LoonixInsideReal/scripts.pory"
	fadescreen FADE_TO_BLACK
# 218 "data//maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_HEAL
# 219 "data//maps/LoonixInsideReal/scripts.pory"
	waitfanfare
# 220 "data//maps/LoonixInsideReal/scripts.pory"
	removeobject 2
# 221 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 2, 11, 0
# 222 "data//maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 223 "data//maps/LoonixInsideReal/scripts.pory"
	addobject 2
# 224 "data//maps/LoonixInsideReal/scripts.pory"
	showobjectat 2, MAP_LOONIX_INSIDE_REAL
# 225 "data//maps/LoonixInsideReal/scripts.pory"
	special HealPlayerParty
# 226 "data//maps/LoonixInsideReal/scripts.pory"
	callnative UpdateFollowingPokemon
# 227 "data//maps/LoonixInsideReal/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 230 "data//maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 231 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2E, MSGBOX_DEFAULT
# 232 "data//maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 233 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 236 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 237 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 239 "data//maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_GrannyScene2_2:
# 196 "data//maps/LoonixInsideReal/scripts.pory"
	setvar VAR_0x8004, 0
# 197 "data//maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LoonixInsideReal_Script_GrannyScene2_1


LoonixInsideReal_Script_GrannyScene3::
# 244 "data//maps/LoonixInsideReal/scripts.pory"
	lockall
# 245 "data//maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 11
# 247 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 248 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 249 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 250 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 252 "data//maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 253 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm1, MSGBOX_DEFAULT
# 254 "data//maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 255 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 257 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_Granny3_PlayerToTable
# 258 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 260 "data//maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 261 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm2, MSGBOX_DEFAULT
# 262 "data//maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 263 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 264 "data//maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_TV::
# 269 "data//maps/LoonixInsideReal/scripts.pory"
	lock
# 271 "data//maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 272 "data//maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_TV_3
# 273 "data//maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_TV_3
# 274 "data//maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_TV_3
# 275 "data//maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_TV_3
# 276 "data//maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_TV_3
# 277 "data//maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_TV_3
# 278 "data//maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_TV_3
# 280 "data//maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_TV_4
# 283 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TVX, MSGBOX_SIGN
LoonixInsideReal_Script_TV_1:
# 285 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 287 "data//maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_TV_3:
# 279 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV1, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1

LoonixInsideReal_Script_TV_4:
# 281 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV2, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1


LoonixInsideReal_Script_Statue::
# 292 "data//maps/LoonixInsideReal/scripts.pory"
	lock
# 293 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Statue_Text_0
# 294 "data//maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Junk::
# 299 "data//maps/LoonixInsideReal/scripts.pory"
	lock
# 300 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Junk_Text_0
# 301 "data//maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Special::
# 306 "data//maps/LoonixInsideReal/scripts.pory"
	lock
# 307 "data//maps/LoonixInsideReal/scripts.pory"
	showmonpic SPECIES_KRABBY, 10, 3
# 308 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Special_Text_0
# 309 "data//maps/LoonixInsideReal/scripts.pory"
	hidemonpic
# 310 "data//maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_GrandmaTV::
# 315 "data//maps/LoonixInsideReal/scripts.pory"
	lockall
# 316 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaUp
# 317 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 318 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 319 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
# 320 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 321 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_0
# 322 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 323 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 324 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_1
# 325 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 326 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_GrandmaTV
# 327 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 328 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 329 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 330 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
# 331 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 332 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
# 333 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 334 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaMono
# 335 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 336 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 337 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 338 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaToBed
# 339 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 340 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
# 341 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
# 342 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 343 "data//maps/LoonixInsideReal/scripts.pory"
	addvar VAR_GRANNY_STATE, 1
# 344 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaBed
# 345 "data//maps/LoonixInsideReal/scripts.pory"
	setrespawn HEAL_LOCATION_GRANDMAS_CABIN
# 346 "data//maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 347 "data//maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 348 "data//maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_PreventExit::
# 354 "data//maps/LoonixInsideReal/scripts.pory"
	lockall
# 355 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_PreventExit_Text_0
# 356 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
# 357 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 358 "data//maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_Grandma::
# 363 "data//maps/LoonixInsideReal/scripts.pory"
	lockall
# 364 "data//maps/LoonixInsideReal/scripts.pory"
	faceplayer
# 366 "data//maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 367 "data//maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_Grandma_3
# 368 "data//maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_Grandma_3
# 369 "data//maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_Grandma_3
# 370 "data//maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_Grandma_3
# 371 "data//maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_Grandma_3
# 372 "data//maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_Grandma_3
# 373 "data//maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_Grandma_3
# 375 "data//maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_Grandma_4
# 376 "data//maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_Script_Grandma_4
# 377 "data//maps/LoonixInsideReal/scripts.pory"
	case 9, LoonixInsideReal_Script_Grandma_4
# 379 "data//maps/LoonixInsideReal/scripts.pory"
	case 11, LoonixInsideReal_Script_Grandma_5
# 383 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_0, MSGBOX_DEFAULT
# 384 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
LoonixInsideReal_Script_Grandma_1:
# 386 "data//maps/LoonixInsideReal/scripts.pory"
	releaseall
	end

LoonixInsideReal_Script_Grandma_3:
# 374 "data//maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyKitchen
	goto LoonixInsideReal_Script_Grandma_1

LoonixInsideReal_Script_Grandma_4:
# 378 "data//maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyTable
	goto LoonixInsideReal_Script_Grandma_1

LoonixInsideReal_Script_Grandma_5:
# 380 "data//maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyStorm
	goto LoonixInsideReal_Script_Grandma_1


LoonixInsideReal_Script_GrannyKitchen::
# 392 "data//maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 393 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyKitchen, MSGBOX_DEFAULT
# 394 "data//maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 395 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 397 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 398 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyTable::
# 404 "data//maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 405 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable1, MSGBOX_DEFAULT
# 406 "data//maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 407 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 409 "data//maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 411 "data//maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 412 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable2, MSGBOX_DEFAULT
# 413 "data//maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 414 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 416 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 417 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyStorm::
# 424 "data//maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 425 "data//maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm3, MSGBOX_DEFAULT
# 426 "data//maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 427 "data//maps/LoonixInsideReal/scripts.pory"
	closemessage
# 429 "data//maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 430 "data//maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


# 435 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PreventExit:
# 436 "data//maps/LoonixInsideReal/scripts.pory"
	face_up
# 437 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
# 437 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
# 437 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
# 437 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
# 438 "data//maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 441 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaTV:
# 442 "data//maps/LoonixInsideReal/scripts.pory"
	walk_down
# 443 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 443 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 446 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaBed:
# 447 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 447 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 448 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
# 448 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
# 448 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
# 449 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 450 "data//maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 453 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerBed:
# 454 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 454 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 454 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 455 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
# 455 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
# 455 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
# 456 "data//maps/LoonixInsideReal/scripts.pory"
	face_right
	step_end

# 459 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaUp:
# 460 "data//maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 463 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaLeft:
# 464 "data//maps/LoonixInsideReal/scripts.pory"
	face_left
	step_end

# 467 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaMono:
# 468 "data//maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 471 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerToGma:
# 472 "data//maps/LoonixInsideReal/scripts.pory"
	walk_down
# 472 "data//maps/LoonixInsideReal/scripts.pory"
	walk_down
# 472 "data//maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 475 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ApproachPlayer:
# 476 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 476 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 476 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 479 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ReturnToKitchen:
# 480 "data//maps/LoonixInsideReal/scripts.pory"
	walk_left
# 480 "data//maps/LoonixInsideReal/scripts.pory"
	walk_left
# 480 "data//maps/LoonixInsideReal/scripts.pory"
	walk_left
# 481 "data//maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 484 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_ApproachPlayer:
# 485 "data//maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 488 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_GrannyToTable:
# 489 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
# 490 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 490 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 490 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 490 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 490 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 491 "data//maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 494 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_PlayerToTable:
# 495 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 495 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 496 "data//maps/LoonixInsideReal/scripts.pory"
	walk_down
# 497 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 497 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 497 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 498 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
	step_end

# 501 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_EeveeToTable:
# 502 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 502 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 502 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 503 "data//maps/LoonixInsideReal/scripts.pory"
	walk_down
# 504 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 504 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 504 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 507 "data//maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny3_PlayerToTable:
# 508 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
# 509 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 509 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 509 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 509 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 509 "data//maps/LoonixInsideReal/scripts.pory"
	walk_right
# 510 "data//maps/LoonixInsideReal/scripts.pory"
	walk_up
	step_end

LoonixInsideReal_Script_Statue_Text_0:
# 293 "data//maps/LoonixInsideReal/scripts.pory"
	.string "This is the statue they sent us after\n"
	.string "Dad left...\p"
	.string "Grandma must have forgotten to polish\n"
	.string "it.$"

LoonixInsideReal_Script_Junk_Text_0:
# 300 "data//maps/LoonixInsideReal/scripts.pory"
	.string "Here's another pile of junk grandma\n"
	.string "left lying around.$"

LoonixInsideReal_Script_Special_Text_0:
# 308 "data//maps/LoonixInsideReal/scripts.pory"
	.string "What's for dinner?$"

LoonixInsideReal_Script_GrandmaTV_Text_0:
# 321 "data//maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}!$"

LoonixInsideReal_Script_GrandmaTV_Text_1:
# 324 "data//maps/LoonixInsideReal/scripts.pory"
	.string "Come here sweetie.$"

LoonixInsideReal_Script_PreventExit_Text_0:
# 355 "data//maps/LoonixInsideReal/scripts.pory"
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_Script_Grandma_Text_0:
# 383 "data//maps/LoonixInsideReal/scripts.pory"
	.string "DEFAULT$"

LoonixInsideReal_Text_GrandmaTVSpeech::
# 513 "data//maps/LoonixInsideReal/scripts.pory"
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that I\l"
	.string "would ask.$"

LoonixInsideReal_Text_GrandmaMono::
# 517 "data//maps/LoonixInsideReal/scripts.pory"
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Saeclara City is too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
# 521 "data//maps/LoonixInsideReal/scripts.pory"
	.string "I'll have to stay.\p"
	.string "{PLAYER} will you help me get into\n"
	.string "bed?$"

LoonixInsideReal_Text_GrandmaBed::
# 525 "data//maps/LoonixInsideReal/scripts.pory"
	.string "Thank you.$"

LoonixInsideReal_Text_Granny1A::
# 529 "data//maps/LoonixInsideReal/scripts.pory"
	.string "Good morning sleepyhead!$"

LoonixInsideReal_Text_Granny1B::
# 533 "data//maps/LoonixInsideReal/scripts.pory"
	.string "I'm still cooking breakfast but your\n"
	.string "friend came by earlier. What was her\l"
	.string "name again?$"

LoonixInsideReal_Text_Granny1C::
# 538 "data//maps/LoonixInsideReal/scripts.pory"
	.string "That's right, {LEAF}! She's such a sweet and\n"
	.string "beautiful young girl. I think she's still\l"
	.string "waiting outside for you. Go out, have\l"
	.string "fun, but keep your distance from the\l"
	.string "tall grass where wild pokemon roam.$"

LoonixInsideReal_Text_GrannyKitchen::
# 542 "data//maps/LoonixInsideReal/scripts.pory"
	.string "Go have fun with {LEAF} but please stay safe.$"

LoonixInsideReal_Text_GrannyTable1::
# 546 "data//maps/LoonixInsideReal/scripts.pory"
	.string "So nice to see you {PLAYER}! Sit down\n"
	.string "and rest.$"

LoonixInsideReal_Text_GrannyTable2::
# 550 "data//maps/LoonixInsideReal/scripts.pory"
	.string "Come back anytime and good luck at\n"
	.string "school.$"

LoonixInsideReal_Text_TV1::
# 554 "data//maps/LoonixInsideReal/scripts.pory"
	.string "Humans and aliens working together to\n"
	.string "explore new worlds, seek out strange\l"
	.string "new life, and boldly go where no one has\l"
	.string "ever gone before.$"

LoonixInsideReal_Text_TV2::
# 558 "data//maps/LoonixInsideReal/scripts.pory"
	.string "Handsome men in suits discuss\n"
	.string "transportation infrastructure with a\l"
	.string "member of the Restoration Party.$"

LoonixInsideReal_Text_TVX::
# 562 "data//maps/LoonixInsideReal/scripts.pory"
	.string "Looks like the TV is switched off.$"

LoonixInsideReal_Text_Granny2A::
# 580 "data//maps/LoonixInsideReal/scripts.pory"
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
# 584 "data//maps/LoonixInsideReal/scripts.pory"
	.string "Your father would have wanted you to\n"
	.string "have his Pokedex when you were old\l"
	.string "enough. The Pokedex is an electronic\l"
	.string "tool to help record the Pokemon you\l"
	.string "find. And here, take these.$"

LoonixInsideReal_Text_Granny2C::
# 588 "data//maps/LoonixInsideReal/scripts.pory"
	.string "You can keep Pokemon in Pokeballs, but\n"
	.string "Eevee seems to prefer the fresh air. I\l"
	.string "see that you and him have a strong\l"
	.string "bond. Would you like to give Eevee a\l"
	.string "nickname?$"

LoonixInsideReal_Text_Granny2D::
# 592 "data//maps/LoonixInsideReal/scripts.pory"
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
# 596 "data//maps/LoonixInsideReal/scripts.pory"
	.string "Just promise me you'll go to Trainer\n"
	.string "School and come back anytime to rest at\l"
	.string "home.$"

LoonixInsideReal_Text_GrannyStorm1::
# 600 "data//maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}! I was so worried! Thank\n"
	.string "goodness that you're ok! Come here. Let\l"
	.string "me see you.$"

LoonixInsideReal_Text_GrannyStorm2::
# 604 "data//maps/LoonixInsideReal/scripts.pory"
	.string "This storm feels almost supernatural,\n"
	.string "like it was sent from heaven with\l"
	.string "purpose. I'm overjoyed to see you back\l"
	.string "home safe. I know I had to let you go\l"
	.string "grow up but trust me one more time to\l"
	.string "keep you safe and sleep in your old bed\l"
	.string "through the tempest. I promise that\l"
	.string "when you wake up again the storm will\l"
	.string "have passed and all will be good.$"

LoonixInsideReal_Text_GrannyStorm3::
# 608 "data//maps/LoonixInsideReal/scripts.pory"
	.string "You'll be ok as long as you're with me. Go\n"
	.string "up to bed and let the weather pass.$"
