LoonixInsideReal_MapScripts::
# 9 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 41 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 45 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 12 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 13 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 14 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 15 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 16 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 17 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 19 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 21 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 22 "data/maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 23 "data/maps/LoonixInsideReal/scripts.pory"
	case 9, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 24 "data/maps/LoonixInsideReal/scripts.pory"
	case 10, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 25 "data/maps/LoonixInsideReal/scripts.pory"
	case 11, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 27 "data/maps/LoonixInsideReal/scripts.pory"
	case 13, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 29 "data/maps/LoonixInsideReal/scripts.pory"
	case 14, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 32 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_HideGranny
LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 35 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_GRANNY_STATE, 10
	goto_if_eq LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 35 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_GRANNY_STATE, 11
	goto_if_eq LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 18 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyKitchen
	goto LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 20 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyDoorway
	goto LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 26 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyTable
	goto LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 28 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyTV
	goto LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 30 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyBed
	goto LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 36 "data/maps/LoonixInsideReal/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 42 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 6, LoonixInsideReal_Script_FacePlayerUp
	.2byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 46 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 0, LoonixInsideReal_Script_GrannyScene1
# 47 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 6, LoonixInsideReal_Script_GrannyScene2
# 48 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 10, LoonixInsideReal_Script_GrannyScene3
	.2byte 0


LoonixInsideReal_Script_HideGranny::
# 54 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 12, 10
# 55 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
	return


LoonixInsideReal_Script_ShowGrannyKitchen::
# 61 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 1, 3
# 62 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


LoonixInsideReal_Script_ShowGrannyDoorway::
# 68 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 4, 6
# 69 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 71 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 2, 3, 8
# 72 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


LoonixInsideReal_Script_ShowGrannyTable::
# 78 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 9, 7
# 79 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	return


LoonixInsideReal_Script_ShowGrannyTV::
# 85 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 8, 6
# 86 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


LoonixInsideReal_Script_ShowGrannyBed::
# 91 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 11, 3
# 92 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


LoonixInsideReal_Script_FacePlayerUp::
# 98 "data/maps/LoonixInsideReal/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return


LoonixInsideReal_Script_PrepareLeafGame::
# 104 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 2
	return


LoonixInsideReal_Script_ClearLeafGame::
# 109 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
	return


LoonixInsideReal_Script_GrannyScene1::
# 114 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 116 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
# 117 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 118 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 119 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_SYS_LEVEL_CAP, 8
# 122 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 123 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 124 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 125 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 127 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 128 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 130 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 131 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 133 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 134 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1A, MSGBOX_DEFAULT
# 135 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 136 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 138 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 139 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ApproachPlayer
# 140 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 142 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 143 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1B, MSGBOX_DEFAULT
# 144 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 145 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 147 "data/maps/LoonixInsideReal/scripts.pory"
	special NameLeaf
# 148 "data/maps/LoonixInsideReal/scripts.pory"
	waitstate
# 151 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 152 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1C, MSGBOX_DEFAULT
# 153 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 154 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 156 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ReturnToKitchen
# 157 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 159 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_GrannyScene2::
# 164 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 167 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 7
# 169 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 170 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2A, MSGBOX_DEFAULT
# 171 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 172 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 174 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_ApproachPlayer
# 175 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 179 "data/maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 180 "data/maps/LoonixInsideReal/scripts.pory"
	special SetUnlockedPokedexFlags
# 181 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 182 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 183 "data/maps/LoonixInsideReal/scripts.pory"
	special EnableNationalPokedex
# 184 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 185 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2B, MSGBOX_DEFAULT
# 186 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 187 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 192 "data/maps/LoonixInsideReal/scripts.pory"
	giveitem ITEM_POKE_BALL, 6
# 196 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 197 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2C, MSGBOX_YESNO
# 199 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixInsideReal_Script_GrannyScene2_2
LoonixInsideReal_Script_GrannyScene2_1:
# 204 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2D, MSGBOX_DEFAULT
# 205 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 206 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 213 "data/maps/LoonixInsideReal/scripts.pory"
	removeitem ITEM_POKE_BALL, 1
# 216 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_GrannyToTable
# 217 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_Granny2_PlayerToTable
# 218 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 2, LoonixInsideReal_Movement_Granny2_EeveeToTable
# 219 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 221 "data/maps/LoonixInsideReal/scripts.pory"
	fadescreen FADE_TO_BLACK
# 222 "data/maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_HEAL
# 223 "data/maps/LoonixInsideReal/scripts.pory"
	waitfanfare
# 224 "data/maps/LoonixInsideReal/scripts.pory"
	removeobject 2
# 225 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 2, 11, 0
# 226 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 227 "data/maps/LoonixInsideReal/scripts.pory"
	addobject 2
# 228 "data/maps/LoonixInsideReal/scripts.pory"
	showobjectat 2, MAP_LOONIX_INSIDE_REAL
# 229 "data/maps/LoonixInsideReal/scripts.pory"
	special HealPlayerParty
# 230 "data/maps/LoonixInsideReal/scripts.pory"
	callnative UpdateFollowingPokemon
# 231 "data/maps/LoonixInsideReal/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 234 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 235 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2E, MSGBOX_DEFAULT
# 236 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 237 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 240 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 241 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 243 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_GrannyScene2_2:
# 200 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_0x8004, 0
# 201 "data/maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LoonixInsideReal_Script_GrannyScene2_1


LoonixInsideReal_Script_GrannyScene3::
# 248 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 249 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 11
# 251 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 252 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 253 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 254 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 256 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 257 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm1, MSGBOX_DEFAULT
# 258 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 259 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 261 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_Granny3_PlayerToTable
# 262 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 264 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 265 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm2, MSGBOX_DEFAULT
# 266 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 267 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 268 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_TV::
# 273 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 275 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 276 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_TV_3
# 277 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_TV_3
# 278 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_TV_3
# 279 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_TV_3
# 280 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_TV_3
# 281 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_TV_3
# 282 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_TV_3
# 284 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_TV_4
# 287 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TVX, MSGBOX_SIGN
LoonixInsideReal_Script_TV_1:
# 289 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 291 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_TV_3:
# 283 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV1, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1

LoonixInsideReal_Script_TV_4:
# 285 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV2, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1


LoonixInsideReal_Script_Statue::
# 296 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 297 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Statue_Text_0
# 298 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Junk::
# 303 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 304 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Junk_Text_0
# 305 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Special::
# 310 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 311 "data/maps/LoonixInsideReal/scripts.pory"
	showmonpic SPECIES_KRABBY, 10, 3
# 312 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Special_Text_0
# 313 "data/maps/LoonixInsideReal/scripts.pory"
	hidemonpic
# 314 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_GrandmaTV::
# 319 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 320 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaUp
# 321 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 322 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 323 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
# 324 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 325 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_0
# 326 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 327 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 328 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_1
# 329 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 330 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_GrandmaTV
# 331 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 332 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 333 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 334 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
# 335 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 336 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
# 337 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 338 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaMono
# 339 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 340 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 341 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 342 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaToBed
# 343 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 344 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
# 345 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
# 346 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 347 "data/maps/LoonixInsideReal/scripts.pory"
	addvar VAR_GRANNY_STATE, 1
# 348 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaBed
# 349 "data/maps/LoonixInsideReal/scripts.pory"
	setrespawn HEAL_LOCATION_GRANDMAS_CABIN
# 350 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 351 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 352 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_PreventExit::
# 358 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 359 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_PreventExit_Text_0
# 360 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
# 361 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 362 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_Grandma::
# 367 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 368 "data/maps/LoonixInsideReal/scripts.pory"
	faceplayer
# 370 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 371 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_Grandma_3
# 372 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_Grandma_3
# 373 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_Grandma_3
# 374 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_Grandma_3
# 375 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_Grandma_3
# 376 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_Grandma_3
# 377 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_Grandma_3
# 379 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_Grandma_4
# 380 "data/maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_Script_Grandma_4
# 381 "data/maps/LoonixInsideReal/scripts.pory"
	case 9, LoonixInsideReal_Script_Grandma_4
# 383 "data/maps/LoonixInsideReal/scripts.pory"
	case 11, LoonixInsideReal_Script_Grandma_5
# 387 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_0, MSGBOX_DEFAULT
# 388 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
LoonixInsideReal_Script_Grandma_1:
# 390 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end

LoonixInsideReal_Script_Grandma_3:
# 378 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyKitchen
	goto LoonixInsideReal_Script_Grandma_1

LoonixInsideReal_Script_Grandma_4:
# 382 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyTable
	goto LoonixInsideReal_Script_Grandma_1

LoonixInsideReal_Script_Grandma_5:
# 384 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyStorm
	goto LoonixInsideReal_Script_Grandma_1


LoonixInsideReal_Script_GrannyKitchen::
# 396 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 397 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyKitchen, MSGBOX_DEFAULT
# 398 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 399 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 401 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 402 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyTable::
# 408 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 409 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable1, MSGBOX_DEFAULT
# 410 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 411 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 413 "data/maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 415 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 416 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable2, MSGBOX_DEFAULT
# 417 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 418 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 420 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 421 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyStorm::
# 428 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 429 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm3, MSGBOX_DEFAULT
# 430 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 431 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 433 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 434 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


# 439 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PreventExit:
# 440 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
# 441 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 441 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 441 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 441 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 442 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 445 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaTV:
# 446 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 447 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 447 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 450 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaBed:
# 451 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 451 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 452 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 452 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 452 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 453 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 454 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 457 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerBed:
# 458 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 458 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 458 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 459 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 459 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 459 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 460 "data/maps/LoonixInsideReal/scripts.pory"
	face_right
	step_end

# 463 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaUp:
# 464 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 467 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaLeft:
# 468 "data/maps/LoonixInsideReal/scripts.pory"
	face_left
	step_end

# 471 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaMono:
# 472 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 475 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerToGma:
# 476 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 476 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 476 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 479 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ApproachPlayer:
# 480 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 480 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 480 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 483 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ReturnToKitchen:
# 484 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 484 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 484 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 485 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 488 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_ApproachPlayer:
# 489 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 492 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_GrannyToTable:
# 493 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 494 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 494 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 494 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 494 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 494 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 495 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 498 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_PlayerToTable:
# 499 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 499 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 500 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 501 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 501 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 501 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 502 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
	step_end

# 505 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_EeveeToTable:
# 506 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 506 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 506 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 507 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 508 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 508 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 508 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 511 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny3_PlayerToTable:
# 512 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 513 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 513 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 513 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 513 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 513 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 514 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
	step_end

LoonixInsideReal_Script_Statue_Text_0:
# 297 "data/maps/LoonixInsideReal/scripts.pory"
	.string "This is the statue they sent us after\n"
	.string "Dad left...\p"
	.string "Grandma must have forgotten to polish\n"
	.string "it.$"

LoonixInsideReal_Script_Junk_Text_0:
# 304 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Here's another pile of junk grandma\n"
	.string "left lying around.$"

LoonixInsideReal_Script_Special_Text_0:
# 312 "data/maps/LoonixInsideReal/scripts.pory"
	.string "What's for dinner?$"

LoonixInsideReal_Script_GrandmaTV_Text_0:
# 325 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}!$"

LoonixInsideReal_Script_GrandmaTV_Text_1:
# 328 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come here sweetie.$"

LoonixInsideReal_Script_PreventExit_Text_0:
# 359 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_Script_Grandma_Text_0:
# 387 "data/maps/LoonixInsideReal/scripts.pory"
	.string "DEFAULT$"

LoonixInsideReal_Text_GrandmaTVSpeech::
# 517 "data/maps/LoonixInsideReal/scripts.pory"
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that I\l"
	.string "would ask.$"

LoonixInsideReal_Text_GrandmaMono::
# 521 "data/maps/LoonixInsideReal/scripts.pory"
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Saeclara City is too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
# 525 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'll have to stay.\p"
	.string "{PLAYER} will you help me get into\n"
	.string "bed?$"

LoonixInsideReal_Text_GrandmaBed::
# 529 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Thank you.$"

LoonixInsideReal_Text_Granny1A::
# 533 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Good morning sleepyhead!$"

LoonixInsideReal_Text_Granny1B::
# 537 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'm still cooking breakfast but your\n"
	.string "friend came by earlier. What was her\l"
	.string "name again?$"

LoonixInsideReal_Text_Granny1C::
# 542 "data/maps/LoonixInsideReal/scripts.pory"
	.string "That's right, {LEAF}! She's such a sweet and\n"
	.string "beautiful young girl. I think she's still\l"
	.string "waiting outside for you. Go out, have\l"
	.string "fun, but keep your distance from the\l"
	.string "tall grass where wild pokemon roam.$"

LoonixInsideReal_Text_GrannyKitchen::
# 546 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Go have fun with {LEAF} but please stay safe.$"

LoonixInsideReal_Text_GrannyTable1::
# 550 "data/maps/LoonixInsideReal/scripts.pory"
	.string "So nice to see you {PLAYER}! Sit down\n"
	.string "and rest.$"

LoonixInsideReal_Text_GrannyTable2::
# 554 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come back anytime and good luck at\n"
	.string "school.$"

LoonixInsideReal_Text_TV1::
# 558 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Humans and aliens working together to\n"
	.string "explore new worlds, seek out strange\l"
	.string "new life, and boldly go where no one has\l"
	.string "ever gone before.$"

LoonixInsideReal_Text_TV2::
# 562 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Handsome men in suits discuss\n"
	.string "transportation infrastructure with a\l"
	.string "member of the Restoration Party.$"

LoonixInsideReal_Text_TVX::
# 566 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Looks like the TV is switched off.$"

LoonixInsideReal_Text_Granny2A::
# 584 "data/maps/LoonixInsideReal/scripts.pory"
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
# 588 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Your father would have wanted you to\n"
	.string "have his Pokedex when you were old\l"
	.string "enough. The Pokedex is an electronic\l"
	.string "tool to help record the Pokemon you\l"
	.string "find. And here, take these.$"

LoonixInsideReal_Text_Granny2C::
# 592 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You can keep Pokemon in Pokeballs, but\n"
	.string "Eevee seems to prefer the fresh air. I\l"
	.string "see that you and him have a strong\l"
	.string "bond. Would you like to give Eevee a\l"
	.string "nickname?$"

LoonixInsideReal_Text_Granny2D::
# 596 "data/maps/LoonixInsideReal/scripts.pory"
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
# 600 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Just promise me you'll go to Trainer\n"
	.string "School and come back anytime to rest at\l"
	.string "home.$"

LoonixInsideReal_Text_GrannyStorm1::
# 604 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}! I was so worried! Thank\n"
	.string "goodness that you're ok! Come here. Let\l"
	.string "me see you.$"

LoonixInsideReal_Text_GrannyStorm2::
# 608 "data/maps/LoonixInsideReal/scripts.pory"
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
# 612 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You'll be ok as long as you're with me. Go\n"
	.string "up to bed and let the weather pass.$"
