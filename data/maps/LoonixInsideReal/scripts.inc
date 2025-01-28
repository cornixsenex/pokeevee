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
# 111 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_SYS_LEVEL_CAP, 8
# 114 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 115 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 116 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 117 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 119 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 120 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 122 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 123 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 125 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 126 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1A, MSGBOX_DEFAULT
# 127 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 128 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 130 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 131 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ApproachPlayer
# 132 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 134 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 135 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1B, MSGBOX_DEFAULT
# 136 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 137 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 139 "data/maps/LoonixInsideReal/scripts.pory"
	special NameLeaf
# 140 "data/maps/LoonixInsideReal/scripts.pory"
	waitstate
# 143 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 144 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1C, MSGBOX_DEFAULT
# 145 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 146 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 148 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ReturnToKitchen
# 149 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 151 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_GrannyScene2::
# 156 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 159 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 7
# 161 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 162 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2A, MSGBOX_DEFAULT
# 163 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 164 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 166 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_ApproachPlayer
# 167 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 171 "data/maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 172 "data/maps/LoonixInsideReal/scripts.pory"
	special SetUnlockedPokedexFlags
# 173 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 174 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 175 "data/maps/LoonixInsideReal/scripts.pory"
	special EnableNationalPokedex
# 176 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 177 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2B, MSGBOX_DEFAULT
# 178 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 179 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 184 "data/maps/LoonixInsideReal/scripts.pory"
	giveitem ITEM_POKE_BALL, 6
# 188 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 189 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2C, MSGBOX_YESNO
# 191 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixInsideReal_Script_GrannyScene2_2
LoonixInsideReal_Script_GrannyScene2_1:
# 196 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2D, MSGBOX_DEFAULT
# 197 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 198 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 205 "data/maps/LoonixInsideReal/scripts.pory"
	removeitem ITEM_POKE_BALL, 1
# 208 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_GrannyToTable
# 209 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_Granny2_PlayerToTable
# 210 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 2, LoonixInsideReal_Movement_Granny2_EeveeToTable
# 211 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 213 "data/maps/LoonixInsideReal/scripts.pory"
	fadescreen FADE_TO_BLACK
# 214 "data/maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_HEAL
# 215 "data/maps/LoonixInsideReal/scripts.pory"
	waitfanfare
# 216 "data/maps/LoonixInsideReal/scripts.pory"
	removeobject 2
# 217 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 2, 11, 0
# 218 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 219 "data/maps/LoonixInsideReal/scripts.pory"
	addobject 2
# 220 "data/maps/LoonixInsideReal/scripts.pory"
	showobjectat 2, MAP_LOONIX_INSIDE_REAL
# 221 "data/maps/LoonixInsideReal/scripts.pory"
	special HealPlayerParty
# 222 "data/maps/LoonixInsideReal/scripts.pory"
	callnative UpdateFollowingPokemon
# 223 "data/maps/LoonixInsideReal/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 226 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 227 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2E, MSGBOX_DEFAULT
# 228 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 229 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 232 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 233 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 235 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_GrannyScene2_2:
# 192 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_0x8004, 0
# 193 "data/maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LoonixInsideReal_Script_GrannyScene2_1


LoonixInsideReal_Script_TV::
# 240 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 242 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 243 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_TV_3
# 244 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_TV_3
# 245 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_TV_3
# 246 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_TV_3
# 247 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_TV_3
# 248 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_TV_3
# 249 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_TV_3
# 251 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_TV_4
# 254 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TVX, MSGBOX_SIGN
LoonixInsideReal_Script_TV_1:
# 256 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 258 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_TV_3:
# 250 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV1, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1

LoonixInsideReal_Script_TV_4:
# 252 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV2, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1


LoonixInsideReal_Script_Statue::
# 263 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 264 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Statue_Text_0
# 265 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Junk::
# 270 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 271 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Junk_Text_0
# 272 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Special::
# 277 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 278 "data/maps/LoonixInsideReal/scripts.pory"
	showmonpic SPECIES_KRABBY, 10, 3
# 279 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Special_Text_0
# 280 "data/maps/LoonixInsideReal/scripts.pory"
	hidemonpic
# 281 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_GrandmaTV::
# 286 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 287 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaUp
# 288 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 289 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 290 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
# 291 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 292 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_0
# 293 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 294 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 295 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_1
# 296 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 297 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_GrandmaTV
# 298 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 299 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 300 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 301 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
# 302 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 303 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
# 304 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 305 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaMono
# 306 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 307 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 308 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 309 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaToBed
# 310 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 311 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
# 312 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
# 313 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 314 "data/maps/LoonixInsideReal/scripts.pory"
	addvar VAR_GRANNY_STATE, 1
# 315 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaBed
# 316 "data/maps/LoonixInsideReal/scripts.pory"
	setrespawn HEAL_LOCATION_GRANDMAS_CABIN
# 317 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 318 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 319 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_PreventExit::
# 325 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 326 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_PreventExit_Text_0
# 327 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
# 328 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 329 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_Grandma::
# 334 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 335 "data/maps/LoonixInsideReal/scripts.pory"
	faceplayer
# 337 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 338 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_Grandma_3
# 339 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_Grandma_3
# 340 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_Grandma_3
# 341 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_Grandma_3
# 342 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_Grandma_3
# 343 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_Grandma_3
# 344 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_Grandma_3
# 346 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_Grandma_4
# 347 "data/maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_Script_Grandma_4
# 350 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_0, MSGBOX_DEFAULT
# 351 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
LoonixInsideReal_Script_Grandma_1:
# 353 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end

LoonixInsideReal_Script_Grandma_3:
# 345 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyKitchen
	goto LoonixInsideReal_Script_Grandma_1

LoonixInsideReal_Script_Grandma_4:
# 348 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyTable
	goto LoonixInsideReal_Script_Grandma_1


LoonixInsideReal_Script_GrannyKitchen::
# 359 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 360 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyKitchen, MSGBOX_DEFAULT
# 361 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 362 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 364 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 365 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyTable::
# 371 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 372 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable1, MSGBOX_DEFAULT
# 373 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 374 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 376 "data/maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 378 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 379 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable2, MSGBOX_DEFAULT
# 380 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 381 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 383 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 384 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


# 390 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PreventExit:
# 391 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
# 392 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 392 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 392 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 392 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 393 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 396 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaTV:
# 397 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 398 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 398 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 401 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaBed:
# 402 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 402 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 403 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 403 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 403 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 404 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 405 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 408 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerBed:
# 409 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 409 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 409 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 410 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 410 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 410 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 411 "data/maps/LoonixInsideReal/scripts.pory"
	face_right
	step_end

# 414 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaUp:
# 415 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 418 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaLeft:
# 419 "data/maps/LoonixInsideReal/scripts.pory"
	face_left
	step_end

# 422 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaMono:
# 423 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 426 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerToGma:
# 427 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 427 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 427 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 430 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ApproachPlayer:
# 431 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 431 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 431 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 434 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ReturnToKitchen:
# 435 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 435 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 435 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 436 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 439 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_ApproachPlayer:
# 440 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 443 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_GrannyToTable:
# 444 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 445 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 445 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 445 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 445 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 445 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 446 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 449 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_PlayerToTable:
# 450 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 450 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 451 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 452 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 452 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 452 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 453 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
	step_end

# 456 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_EeveeToTable:
# 457 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 457 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 457 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 458 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 459 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 459 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 459 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

LoonixInsideReal_Script_Statue_Text_0:
# 264 "data/maps/LoonixInsideReal/scripts.pory"
	.string "This is the statue they sent us after\n"
	.string "Dad left...\p"
	.string "Grandma must have forgotten to polish\n"
	.string "it.$"

LoonixInsideReal_Script_Junk_Text_0:
# 271 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Here's another pile of junk grandma\n"
	.string "left lying around.$"

LoonixInsideReal_Script_Special_Text_0:
# 279 "data/maps/LoonixInsideReal/scripts.pory"
	.string "What's for dinner?$"

LoonixInsideReal_Script_GrandmaTV_Text_0:
# 292 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}!$"

LoonixInsideReal_Script_GrandmaTV_Text_1:
# 295 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come here sweetie.$"

LoonixInsideReal_Script_PreventExit_Text_0:
# 326 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_Script_Grandma_Text_0:
# 350 "data/maps/LoonixInsideReal/scripts.pory"
	.string "DEFAULT$"

LoonixInsideReal_Text_GrandmaTVSpeech::
# 462 "data/maps/LoonixInsideReal/scripts.pory"
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that I\l"
	.string "would ask.$"

LoonixInsideReal_Text_GrandmaMono::
# 466 "data/maps/LoonixInsideReal/scripts.pory"
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Saeclara City is too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
# 470 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'll have to stay.\p"
	.string "{PLAYER} will you help me get into\n"
	.string "bed?$"

LoonixInsideReal_Text_GrandmaBed::
# 474 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Thank you.$"

LoonixInsideReal_Text_Granny1A::
# 478 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Good morning sleepyhead!$"

LoonixInsideReal_Text_Granny1B::
# 482 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'm still cooking breakfast but your\n"
	.string "friend came by earlier. What was her\l"
	.string "name again?$"

LoonixInsideReal_Text_Granny1C::
# 487 "data/maps/LoonixInsideReal/scripts.pory"
	.string "That's right, {LEAF}! She's such a sweet and\n"
	.string "beautiful young girl. I think she's still\l"
	.string "waiting outside for you. Go out, have\l"
	.string "fun, but keep your distance from the\l"
	.string "tall grass where wild pokemon roam.$"

LoonixInsideReal_Text_GrannyKitchen::
# 491 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Go have fun with {LEAF} but please stay safe.$"

LoonixInsideReal_Text_GrannyTable1::
# 495 "data/maps/LoonixInsideReal/scripts.pory"
	.string "So nice to see you {PLAYER}! Sit down\n"
	.string "and rest.$"

LoonixInsideReal_Text_GrannyTable2::
# 499 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come back anytime and good luck at\n"
	.string "school.$"

LoonixInsideReal_Text_TV1::
# 503 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Humans and aliens working together to\n"
	.string "explore new worlds, seek out strange\l"
	.string "new life, and boldly go where no one has\l"
	.string "ever gone before.$"

LoonixInsideReal_Text_TV2::
# 507 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Handsome men in suits discuss\n"
	.string "transportation infrastructure with a\l"
	.string "member of the Restoration Party.$"

LoonixInsideReal_Text_TVX::
# 511 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Looks like the TV is switched off.$"

LoonixInsideReal_Text_Granny2A::
# 529 "data/maps/LoonixInsideReal/scripts.pory"
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
# 533 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Your father would have wanted you to\n"
	.string "have his Pokedex when you were old\l"
	.string "enough. The Pokedex is an electronic\l"
	.string "tool to help record the Pokemon you\l"
	.string "find. And here, take these.$"

LoonixInsideReal_Text_Granny2C::
# 537 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You can keep Pokemon in Pokeballs, but\n"
	.string "Eevee seems to prefer the fresh air. I\l"
	.string "see that you and him have a strong\l"
	.string "bond. Would you like to give Eevee a\l"
	.string "nickname?$"

LoonixInsideReal_Text_Granny2D::
# 541 "data/maps/LoonixInsideReal/scripts.pory"
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
# 545 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Just promise me you'll go to Trainer\n"
	.string "School and come back anytime to rest at\l"
	.string "home.$"
