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
# 49 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 13, LoonixInsideReal_Script_GrannyScene4
	.2byte 0


LoonixInsideReal_Script_HideGranny::
# 55 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 12, 10
# 56 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
	return


LoonixInsideReal_Script_ShowGrannyKitchen::
# 62 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 1, 3
# 63 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


LoonixInsideReal_Script_ShowGrannyDoorway::
# 69 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 4, 6
# 70 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 72 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 2, 3, 8
# 73 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


LoonixInsideReal_Script_ShowGrannyTable::
# 79 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 9, 7
# 80 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	return


LoonixInsideReal_Script_ShowGrannyTV::
# 86 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 8, 6
# 87 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


LoonixInsideReal_Script_ShowGrannyBed::
# 92 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 11, 3
# 93 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


LoonixInsideReal_Script_FacePlayerUp::
# 99 "data/maps/LoonixInsideReal/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return


LoonixInsideReal_Script_PrepareLeafGame::
# 105 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 2
	return


LoonixInsideReal_Script_ClearLeafGame::
# 110 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
	return


LoonixInsideReal_Script_GrannyScene1::
# 115 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 117 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
# 118 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 119 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 120 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_SYS_LEVEL_CAP, 8
# 121 "data/maps/LoonixInsideReal/scripts.pory"
	setrespawn HEAL_LOCATION_GRANDMAS_CABIN
# 124 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 125 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 126 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 127 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 129 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 130 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 132 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 133 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 135 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 136 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1A, MSGBOX_DEFAULT
# 137 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 138 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 140 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 141 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ApproachPlayer
# 142 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 144 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 145 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1B, MSGBOX_DEFAULT
# 146 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 147 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 149 "data/maps/LoonixInsideReal/scripts.pory"
	special NameLeaf
# 150 "data/maps/LoonixInsideReal/scripts.pory"
	waitstate
# 153 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 154 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1C, MSGBOX_DEFAULT
# 155 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 156 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 158 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ReturnToKitchen
# 159 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 161 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_GrannyScene2::
# 166 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 169 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 7
# 171 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 172 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2A, MSGBOX_DEFAULT
# 173 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 174 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 176 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_ApproachPlayer
# 177 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 181 "data/maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 182 "data/maps/LoonixInsideReal/scripts.pory"
	special SetUnlockedPokedexFlags
# 183 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 184 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 185 "data/maps/LoonixInsideReal/scripts.pory"
	special EnableNationalPokedex
# 186 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 187 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2B, MSGBOX_DEFAULT
# 188 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 189 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 194 "data/maps/LoonixInsideReal/scripts.pory"
	giveitem ITEM_POKE_BALL, 6
# 198 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 199 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2C, MSGBOX_YESNO
# 201 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixInsideReal_Script_GrannyScene2_2
LoonixInsideReal_Script_GrannyScene2_1:
# 206 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2D, MSGBOX_DEFAULT
# 207 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 208 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 215 "data/maps/LoonixInsideReal/scripts.pory"
	removeitem ITEM_POKE_BALL, 1
# 218 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_GrannyToTable
# 219 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_Granny2_PlayerToTable
# 220 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 2, LoonixInsideReal_Movement_Granny2_EeveeToTable
# 221 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 223 "data/maps/LoonixInsideReal/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_HEAL
# 225 "data/maps/LoonixInsideReal/scripts.pory"
	waitfanfare
# 226 "data/maps/LoonixInsideReal/scripts.pory"
	removeobject 2
# 227 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 2, 11, 0
# 228 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 229 "data/maps/LoonixInsideReal/scripts.pory"
	addobject 2
# 230 "data/maps/LoonixInsideReal/scripts.pory"
	showobjectat 2, MAP_LOONIX_INSIDE_REAL
# 231 "data/maps/LoonixInsideReal/scripts.pory"
	special HealPlayerParty
# 232 "data/maps/LoonixInsideReal/scripts.pory"
	callnative UpdateFollowingPokemon
# 233 "data/maps/LoonixInsideReal/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 236 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 237 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2E, MSGBOX_DEFAULT
# 238 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 239 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 242 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 243 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 245 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_GrannyScene2_2:
# 202 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_0x8004, 0
# 203 "data/maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LoonixInsideReal_Script_GrannyScene2_1


LoonixInsideReal_Script_GrannyScene3::
# 250 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 251 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 11
# 253 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 254 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 255 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 256 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 258 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 259 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm1, MSGBOX_DEFAULT
# 260 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 261 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 263 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_Granny3_PlayerToTable
# 264 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 266 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 267 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm2, MSGBOX_DEFAULT
# 268 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 269 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 270 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_TV::
# 275 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 277 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 278 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_TV_3
# 279 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_TV_3
# 280 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_TV_3
# 281 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_TV_3
# 282 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_TV_3
# 283 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_TV_3
# 284 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_TV_3
# 286 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_TV_4
# 289 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TVX, MSGBOX_SIGN
LoonixInsideReal_Script_TV_1:
# 291 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 293 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_TV_3:
# 285 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV1, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1

LoonixInsideReal_Script_TV_4:
# 287 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV2, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1


LoonixInsideReal_Script_Statue::
# 298 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 299 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Statue_Text_0
# 300 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Junk::
# 305 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 306 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Junk_Text_0
# 307 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Special::
# 312 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 313 "data/maps/LoonixInsideReal/scripts.pory"
	showmonpic SPECIES_KRABBY, 10, 3
# 314 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Special_Text_0
# 315 "data/maps/LoonixInsideReal/scripts.pory"
	hidemonpic
# 316 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_GrannyScene4::
# 321 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 322 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 14
# 323 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 324 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 325 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 326 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 327 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny4A, MSGBOX_DEFAULT
# 328 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 329 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 330 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
# 331 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 332 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 333 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 334 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 335 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
# 336 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
# 337 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 338 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaMono
# 339 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 340 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 341 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaToBed
# 342 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 343 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 344 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
# 345 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
# 346 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 347 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 348 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 349 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 350 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaBed
# 351 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 352 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 353 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 354 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 355 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_PreventExit::
# 361 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 362 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_PreventExit_Text_0
# 363 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
# 364 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 365 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_Grandma::
# 370 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 372 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_GRANNY_STATE, 14
	goto_if_ne LoonixInsideReal_Script_Grandma_2
LoonixInsideReal_Script_Grandma_1:
# 376 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 377 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_Grandma_6
# 378 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_Grandma_6
# 379 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_Grandma_6
# 380 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_Grandma_6
# 381 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_Grandma_6
# 382 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_Grandma_6
# 383 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_Grandma_6
# 385 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_Grandma_7
# 386 "data/maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_Script_Grandma_7
# 387 "data/maps/LoonixInsideReal/scripts.pory"
	case 9, LoonixInsideReal_Script_Grandma_7
# 389 "data/maps/LoonixInsideReal/scripts.pory"
	case 11, LoonixInsideReal_Script_Grandma_8
# 391 "data/maps/LoonixInsideReal/scripts.pory"
	case 14, LoonixInsideReal_Script_Grandma_9
# 394 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_0, MSGBOX_DEFAULT
# 395 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
LoonixInsideReal_Script_Grandma_4:
# 397 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end

LoonixInsideReal_Script_Grandma_2:
# 373 "data/maps/LoonixInsideReal/scripts.pory"
	faceplayer
	goto LoonixInsideReal_Script_Grandma_1

LoonixInsideReal_Script_Grandma_6:
# 384 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyKitchen
	goto LoonixInsideReal_Script_Grandma_4

LoonixInsideReal_Script_Grandma_7:
# 388 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyTable
	goto LoonixInsideReal_Script_Grandma_4

LoonixInsideReal_Script_Grandma_8:
# 390 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyStorm
	goto LoonixInsideReal_Script_Grandma_4

LoonixInsideReal_Script_Grandma_9:
# 392 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyBed
	goto LoonixInsideReal_Script_Grandma_4


LoonixInsideReal_Script_GrannyKitchen::
# 403 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 404 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyKitchen, MSGBOX_DEFAULT
# 405 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 406 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 408 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 409 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyTable::
# 415 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 416 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable1, MSGBOX_DEFAULT
# 417 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 418 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 420 "data/maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 422 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 423 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable2, MSGBOX_DEFAULT
# 424 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 425 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 427 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 428 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyStorm::
# 435 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 30, 190, 98
# 436 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm3, MSGBOX_DEFAULT
# 437 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 30
# 438 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 440 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 441 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyBed::
# 447 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 448 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyBed, MSGBOX_DEFAULT
# 449 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 450 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


# 454 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PreventExit:
# 455 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
# 456 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 456 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 456 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 456 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 457 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 460 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaTV:
# 461 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 462 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 462 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 465 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaBed:
# 466 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 466 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 467 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 467 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 467 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 468 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 469 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 472 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerBed:
# 473 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 473 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 473 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 474 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 474 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 474 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 475 "data/maps/LoonixInsideReal/scripts.pory"
	face_right
	step_end

# 478 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaUp:
# 479 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 482 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaMono:
# 483 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 486 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerToGma:
# 487 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 488 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 488 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 488 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 488 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 489 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 489 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 492 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ApproachPlayer:
# 493 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 493 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 493 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 496 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ReturnToKitchen:
# 497 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 497 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 497 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 498 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 501 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_ApproachPlayer:
# 502 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 505 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_GrannyToTable:
# 506 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 507 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 507 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 507 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 507 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 507 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 508 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 511 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_PlayerToTable:
# 512 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 512 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 513 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 514 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 514 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 514 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 515 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
	step_end

# 518 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_EeveeToTable:
# 519 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 519 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 519 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 520 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 521 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 521 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 521 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 524 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny3_PlayerToTable:
# 525 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 526 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 526 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 526 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 526 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 526 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 527 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
	step_end

LoonixInsideReal_Script_Statue_Text_0:
# 299 "data/maps/LoonixInsideReal/scripts.pory"
	.string "This is the statue they sent us after\n"
	.string "Dad left...$"

LoonixInsideReal_Script_Junk_Text_0:
# 306 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Here's another pile of junk left lying\n"
	.string "around...$"

LoonixInsideReal_Script_Special_Text_0:
# 314 "data/maps/LoonixInsideReal/scripts.pory"
	.string "What's for dinner?$"

LoonixInsideReal_Script_PreventExit_Text_0:
# 362 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_Script_Grandma_Text_0:
# 394 "data/maps/LoonixInsideReal/scripts.pory"
	.string "DEFAULT$"

LoonixInsideReal_Text_GrandmaTVSpeech::
# 530 "data/maps/LoonixInsideReal/scripts.pory"
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that I\l"
	.string "would ask.$"

LoonixInsideReal_Text_GrandmaMono::
# 534 "data/maps/LoonixInsideReal/scripts.pory"
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Saeclara City is too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
# 538 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'll have to stay.\p"
	.string "{PLAYER} will you help me get into\n"
	.string "bed?$"

LoonixInsideReal_Text_GrandmaBed::
# 542 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Thank you.$"

LoonixInsideReal_Text_Granny1A::
# 546 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Good morning sleepyhead!$"

LoonixInsideReal_Text_Granny1B::
# 550 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'm still cooking breakfast but your\n"
	.string "friend came by earlier. What was her\l"
	.string "name again?$"

LoonixInsideReal_Text_Granny1C::
# 555 "data/maps/LoonixInsideReal/scripts.pory"
	.string "That's right, {LEAF}! She's such a sweet and\n"
	.string "beautiful young girl. I think she's still\l"
	.string "waiting outside for you. Go out, have\l"
	.string "fun, but keep your distance from the\l"
	.string "tall grass where wild pokemon roam.$"

LoonixInsideReal_Text_GrannyKitchen::
# 559 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Go have fun with {LEAF} but please stay safe.$"

LoonixInsideReal_Text_GrannyTable1::
# 563 "data/maps/LoonixInsideReal/scripts.pory"
	.string "So nice to see you {PLAYER}! Sit down\n"
	.string "and rest.$"

LoonixInsideReal_Text_GrannyTable2::
# 567 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come back anytime and good luck at\n"
	.string "school.$"

LoonixInsideReal_Text_TV1::
# 571 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Humans and aliens working together to\n"
	.string "explore new worlds, seek out strange\l"
	.string "new life, and boldly go where no one has\l"
	.string "ever gone before.$"

LoonixInsideReal_Text_TV2::
# 575 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Handsome men in suits discuss\n"
	.string "transportation infrastructure with a\l"
	.string "member of the Restoration Party.$"

LoonixInsideReal_Text_TVX::
# 579 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Looks like the TV is switched off.$"

LoonixInsideReal_Text_Granny2A::
# 597 "data/maps/LoonixInsideReal/scripts.pory"
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
# 601 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Your father would have wanted you to\n"
	.string "have his Pokedex when you were old\l"
	.string "enough. The Pokedex is an electronic\l"
	.string "tool to help record the Pokemon you\l"
	.string "find. And here, take these.$"

LoonixInsideReal_Text_Granny2C::
# 605 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You can keep Pokemon in Pokeballs, but\n"
	.string "Eevee seems to prefer the fresh air. I\l"
	.string "see that you and him have a strong\l"
	.string "bond. Would you like to give Eevee a\l"
	.string "nickname?$"

LoonixInsideReal_Text_Granny2D::
# 609 "data/maps/LoonixInsideReal/scripts.pory"
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
# 613 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Just promise me you'll go to Trainer\n"
	.string "School and come back anytime to rest at\l"
	.string "home.$"

LoonixInsideReal_Text_GrannyStorm1::
# 617 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}! I was so worried! Thank\n"
	.string "goodness that you're ok! Come here. Let\l"
	.string "me see you.$"

LoonixInsideReal_Text_GrannyStorm2::
# 621 "data/maps/LoonixInsideReal/scripts.pory"
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
# 625 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You'll be ok as long as you're with me. Go\n"
	.string "up to bed and let the weather pass.$"

LoonixInsideReal_Text_Granny4A::
# 629 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}! Come here sweetie.$"

LoonixInsideReal_Text_GrannyBed::
# 633 "data/maps/LoonixInsideReal/scripts.pory"
	.string "She must be sleeping...$"
