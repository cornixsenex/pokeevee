LoonixInsideReal_MapScripts::
# 7 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 39 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 43 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 10 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 11 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 12 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 13 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 14 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 15 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 17 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 19 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 20 "data/maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 21 "data/maps/LoonixInsideReal/scripts.pory"
	case 9, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 22 "data/maps/LoonixInsideReal/scripts.pory"
	case 10, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 23 "data/maps/LoonixInsideReal/scripts.pory"
	case 11, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 25 "data/maps/LoonixInsideReal/scripts.pory"
	case 13, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 27 "data/maps/LoonixInsideReal/scripts.pory"
	case 14, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 30 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_HideGranny
LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 33 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_GRANNY_STATE, 10
	goto_if_eq LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 33 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_GRANNY_STATE, 11
	goto_if_eq LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 16 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyKitchen
	goto LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyDoorway
	goto LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 24 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyTable
	goto LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 26 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyTV
	goto LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 28 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyBed
	goto LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 34 "data/maps/LoonixInsideReal/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 40 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 6, LoonixInsideReal_Script_FacePlayerUp
	.2byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 44 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 0, LoonixInsideReal_Script_GrannyScene1
# 45 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 6, LoonixInsideReal_Script_GrannyScene2
# 46 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 10, LoonixInsideReal_Script_GrannyScene3
# 47 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 13, LoonixInsideReal_Script_GrannyScene4
	.2byte 0


LoonixInsideReal_Script_HideGranny::
# 53 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 12, 10
# 54 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
	return


LoonixInsideReal_Script_ShowGrannyKitchen::
# 60 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 1, 3
# 61 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


LoonixInsideReal_Script_ShowGrannyDoorway::
# 67 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 4, 6
# 68 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 70 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 2, 3, 8
# 71 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


LoonixInsideReal_Script_ShowGrannyTable::
# 77 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 9, 7
# 78 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	return


LoonixInsideReal_Script_ShowGrannyTV::
# 84 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 8, 6
# 85 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


LoonixInsideReal_Script_ShowGrannyBed::
# 90 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 11, 3
# 91 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


LoonixInsideReal_Script_FacePlayerUp::
# 97 "data/maps/LoonixInsideReal/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return


LoonixInsideReal_Script_PrepareLeafGame::
# 103 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 2
	return


LoonixInsideReal_Script_ClearLeafGame::
# 108 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
	return


LoonixInsideReal_Script_GrannyScene1::
# 113 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 115 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
# 116 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 117 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 118 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_SYS_LEVEL_CAP, 8
# 123 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 124 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 125 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 126 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 128 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 129 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 131 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 132 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 134 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 135 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1A, MSGBOX_DEFAULT
# 136 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 137 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 139 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 140 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ApproachPlayer
# 141 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 143 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 144 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1B, MSGBOX_DEFAULT
# 145 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 146 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 148 "data/maps/LoonixInsideReal/scripts.pory"
	special NameLeaf
# 149 "data/maps/LoonixInsideReal/scripts.pory"
	waitstate
# 152 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 153 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1C, MSGBOX_DEFAULT
# 154 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 155 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 157 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ReturnToKitchen
# 158 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 160 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_GrannyScene2::
# 165 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 168 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 7
# 170 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 171 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2A, MSGBOX_DEFAULT
# 172 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 173 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 175 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_ApproachPlayer
# 176 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 180 "data/maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 181 "data/maps/LoonixInsideReal/scripts.pory"
	special SetUnlockedPokedexFlags
# 182 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 183 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 184 "data/maps/LoonixInsideReal/scripts.pory"
	special EnableNationalPokedex
# 185 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 186 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2B, MSGBOX_DEFAULT
# 187 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 188 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 193 "data/maps/LoonixInsideReal/scripts.pory"
	giveitem ITEM_POKE_BALL, 6
# 197 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 198 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2C, MSGBOX_YESNO
# 200 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixInsideReal_Script_GrannyScene2_2
LoonixInsideReal_Script_GrannyScene2_1:
# 205 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2D, MSGBOX_DEFAULT
# 206 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 207 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 214 "data/maps/LoonixInsideReal/scripts.pory"
	removeitem ITEM_POKE_BALL, 1
# 217 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_GrannyToTable
# 218 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_Granny2_PlayerToTable
# 219 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 2, LoonixInsideReal_Movement_Granny2_EeveeToTable
# 220 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 222 "data/maps/LoonixInsideReal/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 223 "data/maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_HEAL
# 224 "data/maps/LoonixInsideReal/scripts.pory"
	waitfanfare
# 225 "data/maps/LoonixInsideReal/scripts.pory"
	removeobject 2
# 226 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 2, 11, 0
# 227 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 228 "data/maps/LoonixInsideReal/scripts.pory"
	addobject 2
# 229 "data/maps/LoonixInsideReal/scripts.pory"
	showobjectat 2, MAP_LOONIX_INSIDE_REAL
# 230 "data/maps/LoonixInsideReal/scripts.pory"
	special HealPlayerParty
# 231 "data/maps/LoonixInsideReal/scripts.pory"
	callnative UpdateFollowingPokemon
# 232 "data/maps/LoonixInsideReal/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 235 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 236 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2E, MSGBOX_DEFAULT
# 237 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 238 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 241 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 242 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 244 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_GrannyScene2_2:
# 201 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_0x8004, 0
# 202 "data/maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LoonixInsideReal_Script_GrannyScene2_1


LoonixInsideReal_Script_GrannyScene3::
# 249 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 250 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 11
# 252 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 253 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 254 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 255 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 257 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 258 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm1, MSGBOX_DEFAULT
# 259 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 260 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 262 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_Granny3_PlayerToTable
# 263 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 265 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 266 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm2, MSGBOX_DEFAULT
# 267 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 268 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 269 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_TV::
# 274 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 276 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 277 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_TV_3
# 278 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_TV_3
# 279 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_TV_3
# 280 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_TV_3
# 281 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_TV_3
# 282 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_TV_3
# 283 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_TV_3
# 285 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_TV_4
# 288 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TVX, MSGBOX_SIGN
LoonixInsideReal_Script_TV_1:
# 290 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 292 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_TV_3:
# 284 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV1, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1

LoonixInsideReal_Script_TV_4:
# 286 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV2, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1


LoonixInsideReal_Script_Statue::
# 297 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 298 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Statue_Text_0
# 299 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Junk::
# 304 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 305 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Junk_Text_0
# 306 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Special::
# 311 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 312 "data/maps/LoonixInsideReal/scripts.pory"
	showmonpic SPECIES_KRABBY, 10, 3
# 313 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Special_Text_0
# 314 "data/maps/LoonixInsideReal/scripts.pory"
	hidemonpic
# 315 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_GrannyScene4::
# 320 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 321 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 14
# 322 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 323 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 324 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 325 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny4A, MSGBOX_DEFAULT
# 326 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 327 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 328 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
# 329 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 330 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 331 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 332 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 333 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
# 334 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
# 335 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 336 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaMono
# 337 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 338 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 339 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaToBed
# 340 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 341 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 342 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
# 343 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
# 344 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 345 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 346 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 347 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 348 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaBed
# 349 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 350 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 351 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 352 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 353 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_PreventExit::
# 359 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 360 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_PreventExit_Text_0
# 361 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
# 362 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 363 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_Grandma::
# 368 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 370 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_GRANNY_STATE, 14
	goto_if_ne LoonixInsideReal_Script_Grandma_2
LoonixInsideReal_Script_Grandma_1:
# 374 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 375 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_Grandma_6
# 376 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_Grandma_6
# 377 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_Grandma_6
# 378 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_Grandma_6
# 379 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_Grandma_6
# 380 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_Grandma_6
# 381 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_Grandma_6
# 383 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_Grandma_7
# 384 "data/maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_Script_Grandma_7
# 385 "data/maps/LoonixInsideReal/scripts.pory"
	case 9, LoonixInsideReal_Script_Grandma_7
# 387 "data/maps/LoonixInsideReal/scripts.pory"
	case 11, LoonixInsideReal_Script_Grandma_8
# 389 "data/maps/LoonixInsideReal/scripts.pory"
	case 14, LoonixInsideReal_Script_Grandma_9
# 392 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_0, MSGBOX_DEFAULT
# 393 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
LoonixInsideReal_Script_Grandma_4:
# 395 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end

LoonixInsideReal_Script_Grandma_2:
# 371 "data/maps/LoonixInsideReal/scripts.pory"
	faceplayer
	goto LoonixInsideReal_Script_Grandma_1

LoonixInsideReal_Script_Grandma_6:
# 382 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyKitchen
	goto LoonixInsideReal_Script_Grandma_4

LoonixInsideReal_Script_Grandma_7:
# 386 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyTable
	goto LoonixInsideReal_Script_Grandma_4

LoonixInsideReal_Script_Grandma_8:
# 388 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyStorm
	goto LoonixInsideReal_Script_Grandma_4

LoonixInsideReal_Script_Grandma_9:
# 390 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyBed
	goto LoonixInsideReal_Script_Grandma_4


LoonixInsideReal_Script_GrannyKitchen::
# 401 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 402 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyKitchen, MSGBOX_DEFAULT
# 403 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 404 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 406 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 407 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyTable::
# 413 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 414 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable1, MSGBOX_DEFAULT
# 415 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 416 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 418 "data/maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 420 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 421 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable2, MSGBOX_DEFAULT
# 422 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 423 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 425 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 426 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyStorm::
# 433 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 434 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm3, MSGBOX_DEFAULT
# 435 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 436 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 438 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 439 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyBed::
# 445 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 446 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyBed, MSGBOX_DEFAULT
# 447 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 448 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


# 452 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PreventExit:
# 453 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
# 454 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 454 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 454 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 454 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 455 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 458 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaTV:
# 459 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 460 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 460 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 463 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaBed:
# 464 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 464 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 465 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 465 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 465 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 466 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 467 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 470 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerBed:
# 471 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 471 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 471 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 472 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 472 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 472 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 473 "data/maps/LoonixInsideReal/scripts.pory"
	face_right
	step_end

# 476 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaUp:
# 477 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 480 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaMono:
# 481 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 484 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerToGma:
# 485 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 486 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 486 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 486 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 486 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 487 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 487 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 490 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ApproachPlayer:
# 491 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 491 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 491 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 494 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ReturnToKitchen:
# 495 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 495 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 495 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 496 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 499 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_ApproachPlayer:
# 500 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 503 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_GrannyToTable:
# 504 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 505 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 505 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 505 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 505 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 505 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 506 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 509 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_PlayerToTable:
# 510 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 510 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 511 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 512 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 512 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 512 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 513 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
	step_end

# 516 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_EeveeToTable:
# 517 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 517 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 517 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 518 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 519 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 519 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 519 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 522 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny3_PlayerToTable:
# 523 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 524 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 524 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 524 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 524 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 524 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 525 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
	step_end

LoonixInsideReal_Script_Statue_Text_0:
# 298 "data/maps/LoonixInsideReal/scripts.pory"
	.string "This is the statue they sent us after\n"
	.string "Dad left...$"

LoonixInsideReal_Script_Junk_Text_0:
# 305 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Here's another pile of junk left lying\n"
	.string "around...$"

LoonixInsideReal_Script_Special_Text_0:
# 313 "data/maps/LoonixInsideReal/scripts.pory"
	.string "What's for dinner?$"

LoonixInsideReal_Script_PreventExit_Text_0:
# 360 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_Script_Grandma_Text_0:
# 392 "data/maps/LoonixInsideReal/scripts.pory"
	.string "DEFAULT$"

LoonixInsideReal_Text_GrandmaTVSpeech::
# 528 "data/maps/LoonixInsideReal/scripts.pory"
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that I\l"
	.string "would ask.$"

LoonixInsideReal_Text_GrandmaMono::
# 532 "data/maps/LoonixInsideReal/scripts.pory"
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Castalia is just too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
# 536 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'll have to stay.\p"
	.string "{PLAYER}, will you help me into bed?$"

LoonixInsideReal_Text_GrandmaBed::
# 540 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Thank you.$"

LoonixInsideReal_Text_Granny1A::
# 544 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Good morning sleepyhead!$"

LoonixInsideReal_Text_Granny1B::
# 548 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'm still cooking breakfast but your\n"
	.string "friend came by earlier. What was her\l"
	.string "name again?$"

LoonixInsideReal_Text_Granny1C::
# 553 "data/maps/LoonixInsideReal/scripts.pory"
	.string "That's right, {LEAF}! She's such a sweet and\n"
	.string "beautiful young girl. I think she's still\l"
	.string "waiting outside for you. Go out, have\l"
	.string "fun, but keep your distance from the\l"
	.string "tall grass where wild pokemon roam.$"

LoonixInsideReal_Text_GrannyKitchen::
# 557 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Go have fun with {LEAF} but please stay safe.$"

LoonixInsideReal_Text_GrannyTable1::
# 561 "data/maps/LoonixInsideReal/scripts.pory"
	.string "So nice to see you {PLAYER}! Sit down\n"
	.string "and rest.$"

LoonixInsideReal_Text_GrannyTable2::
# 565 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come back anytime and good luck at\n"
	.string "school.$"

LoonixInsideReal_Text_TV1::
# 569 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Humans and aliens working together to\n"
	.string "explore new worlds, seek out strange\l"
	.string "new life, and boldly go where no one has\l"
	.string "ever gone before.$"

LoonixInsideReal_Text_TV2::
# 573 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Handsome men in suits discuss\n"
	.string "transportation infrastructure with a\l"
	.string "member of the Restoration Party.$"

LoonixInsideReal_Text_TVX::
# 577 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Looks like the TV is switched off.$"

LoonixInsideReal_Text_Granny2A::
# 595 "data/maps/LoonixInsideReal/scripts.pory"
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
# 599 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Your father would have wanted you to\n"
	.string "have his Pokedex when you were old\l"
	.string "enough. The Pokedex is an electronic\l"
	.string "tool to help record the Pokemon you\l"
	.string "find. And here, take these.$"

LoonixInsideReal_Text_Granny2C::
# 603 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You can keep Pokemon in Pokeballs, but\n"
	.string "Eevee seems to prefer the fresh air. I\l"
	.string "see that you and him have a strong\l"
	.string "bond. Would you like to give Eevee a\l"
	.string "nickname?$"

LoonixInsideReal_Text_Granny2D::
# 607 "data/maps/LoonixInsideReal/scripts.pory"
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
# 611 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Just promise me you'll go to Trainer\n"
	.string "School and come back anytime to rest at\l"
	.string "home.$"

LoonixInsideReal_Text_GrannyStorm1::
# 615 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}! I was so worried! Thank\n"
	.string "goodness that you're ok! Come here. Let\l"
	.string "me see you.$"

LoonixInsideReal_Text_GrannyStorm2::
# 619 "data/maps/LoonixInsideReal/scripts.pory"
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
# 623 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You'll be ok as long as you're with me. Go\n"
	.string "up to bed and let the weather pass.$"

LoonixInsideReal_Text_Granny4A::
# 627 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}! Come here sweetie.$"

LoonixInsideReal_Text_GrannyBed::
# 631 "data/maps/LoonixInsideReal/scripts.pory"
	.string "She must be sleeping...$"
