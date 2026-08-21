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
	map_script_2 VAR_GRANNY_STATE, 6, Common_Script_FacePlayerUp
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


LoonixInsideReal_Script_PrepareLeafGame::
# 97 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 2
	return


LoonixInsideReal_Script_ClearLeafGame::
# 102 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
	return


LoonixInsideReal_Script_GrannyScene1::
# 107 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 109 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
# 110 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 111 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 112 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_SYS_LEVEL_CAP, 8
# 117 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 118 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 119 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 120 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 122 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 123 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 125 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 126 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 128 "data/maps/LoonixInsideReal/scripts.pory"
	setspeaker LoonixInsideReal_Script_GrannyScene1_Text_0
# 129 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 130 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1A, MSGBOX_DEFAULT
# 131 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 132 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 134 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 135 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ApproachPlayer
# 136 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 138 "data/maps/LoonixInsideReal/scripts.pory"
	setspeaker LoonixInsideReal_Script_GrannyScene1_Text_0
# 139 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 140 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1B, MSGBOX_DEFAULT
# 141 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 142 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 144 "data/maps/LoonixInsideReal/scripts.pory"
	special NameLeaf
# 145 "data/maps/LoonixInsideReal/scripts.pory"
	waitstate
# 148 "data/maps/LoonixInsideReal/scripts.pory"
	setspeaker LoonixInsideReal_Script_GrannyScene1_Text_0
# 149 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 150 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1C, MSGBOX_DEFAULT
# 151 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 152 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 154 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ReturnToKitchen
# 155 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 157 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_GrannyScene2::
# 162 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 165 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 7
# 167 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 168 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2A, MSGBOX_DEFAULT
# 169 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 170 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 172 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_ApproachPlayer
# 173 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 177 "data/maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 178 "data/maps/LoonixInsideReal/scripts.pory"
	special SetUnlockedPokedexFlags
# 179 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 180 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 181 "data/maps/LoonixInsideReal/scripts.pory"
	special EnableNationalPokedex
# 182 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 183 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2B, MSGBOX_DEFAULT
# 184 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 185 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 190 "data/maps/LoonixInsideReal/scripts.pory"
	giveitem ITEM_POKE_BALL, 6
# 194 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 195 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2C, MSGBOX_YESNO
# 197 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixInsideReal_Script_GrannyScene2_2
LoonixInsideReal_Script_GrannyScene2_1:
# 202 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2D, MSGBOX_DEFAULT
# 203 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 204 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 211 "data/maps/LoonixInsideReal/scripts.pory"
	removeitem ITEM_POKE_BALL, 1
# 214 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny2_GrannyToTable
# 215 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_Granny2_PlayerToTable
# 216 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 2, LoonixInsideReal_Movement_Granny2_EeveeToTable
# 217 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 219 "data/maps/LoonixInsideReal/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 220 "data/maps/LoonixInsideReal/scripts.pory"
	playfanfare MUS_HEAL
# 221 "data/maps/LoonixInsideReal/scripts.pory"
	waitfanfare
# 222 "data/maps/LoonixInsideReal/scripts.pory"
	removeobject 2
# 223 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 2, 11, 0
# 224 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 225 "data/maps/LoonixInsideReal/scripts.pory"
	addobject 2
# 226 "data/maps/LoonixInsideReal/scripts.pory"
	showobjectat 2, MAP_LOONIX_INSIDE_REAL
# 227 "data/maps/LoonixInsideReal/scripts.pory"
	special HealPlayerParty
# 228 "data/maps/LoonixInsideReal/scripts.pory"
	callnative UpdateFollowingPokemon
# 229 "data/maps/LoonixInsideReal/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 232 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 233 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny2E, MSGBOX_DEFAULT
# 234 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 235 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 238 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 239 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 241 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_GrannyScene2_2:
# 198 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_0x8004, 0
# 199 "data/maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LoonixInsideReal_Script_GrannyScene2_1


LoonixInsideReal_Script_GrannyScene3::
# 246 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 247 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 11
# 249 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 250 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 251 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 252 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 254 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 255 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm1, MSGBOX_DEFAULT
# 256 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 257 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 259 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_Granny3_PlayerToTable
# 260 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 262 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 263 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm2, MSGBOX_DEFAULT
# 264 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 265 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 266 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_TV::
# 271 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 273 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 274 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_TV_3
# 275 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_TV_3
# 276 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_TV_3
# 277 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_TV_3
# 278 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_TV_3
# 279 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_TV_3
# 280 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_TV_3
# 282 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_TV_4
# 285 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TVX, MSGBOX_SIGN
LoonixInsideReal_Script_TV_1:
# 287 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 289 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end

LoonixInsideReal_Script_TV_3:
# 281 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV1, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1

LoonixInsideReal_Script_TV_4:
# 283 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_TV2, MSGBOX_SIGN
	goto LoonixInsideReal_Script_TV_1


LoonixInsideReal_Script_Statue::
# 294 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 295 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Statue_Text_0
# 296 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Junk::
# 301 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 302 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Junk_Text_0
# 303 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Special::
# 308 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 309 "data/maps/LoonixInsideReal/scripts.pory"
	showmonpic SPECIES_KRABBY, 10, 3
# 310 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Special_Text_0
# 311 "data/maps/LoonixInsideReal/scripts.pory"
	hidemonpic
# 312 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_GrannyScene4::
# 317 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 318 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 14
# 319 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 320 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 321 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 322 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny4A, MSGBOX_DEFAULT
# 323 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 324 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 325 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
# 326 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 327 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 328 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 329 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 330 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
# 331 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
# 332 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 333 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaMono
# 334 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 335 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 336 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaToBed
# 337 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 338 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 339 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
# 340 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
# 341 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 342 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 343 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 344 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 345 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaBed
# 346 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 347 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 348 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 349 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 350 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_PreventExit::
# 356 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 357 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_PreventExit_Text_0
# 358 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
# 359 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 360 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_Grandma::
# 365 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 367 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_GRANNY_STATE, 14
	goto_if_ne LoonixInsideReal_Script_Grandma_2
LoonixInsideReal_Script_Grandma_1:
# 371 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 372 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_Script_Grandma_6
# 373 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_Script_Grandma_6
# 374 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_Script_Grandma_6
# 375 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_Script_Grandma_6
# 376 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_Script_Grandma_6
# 377 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_Script_Grandma_6
# 378 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_Script_Grandma_6
# 380 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_Script_Grandma_7
# 381 "data/maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_Script_Grandma_7
# 382 "data/maps/LoonixInsideReal/scripts.pory"
	case 9, LoonixInsideReal_Script_Grandma_7
# 384 "data/maps/LoonixInsideReal/scripts.pory"
	case 11, LoonixInsideReal_Script_Grandma_8
# 386 "data/maps/LoonixInsideReal/scripts.pory"
	case 14, LoonixInsideReal_Script_Grandma_9
# 389 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_0, MSGBOX_DEFAULT
# 390 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
LoonixInsideReal_Script_Grandma_4:
# 392 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end

LoonixInsideReal_Script_Grandma_2:
# 368 "data/maps/LoonixInsideReal/scripts.pory"
	faceplayer
	goto LoonixInsideReal_Script_Grandma_1

LoonixInsideReal_Script_Grandma_6:
# 379 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyKitchen
	goto LoonixInsideReal_Script_Grandma_4

LoonixInsideReal_Script_Grandma_7:
# 383 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyTable
	goto LoonixInsideReal_Script_Grandma_4

LoonixInsideReal_Script_Grandma_8:
# 385 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyStorm
	goto LoonixInsideReal_Script_Grandma_4

LoonixInsideReal_Script_Grandma_9:
# 387 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_GrannyBed
	goto LoonixInsideReal_Script_Grandma_4


LoonixInsideReal_Script_GrannyKitchen::
# 398 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 399 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyKitchen, MSGBOX_DEFAULT
# 400 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 401 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 403 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 404 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyTable::
# 410 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 411 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable1, MSGBOX_DEFAULT
# 412 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 413 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 415 "data/maps/LoonixInsideReal/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 417 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 418 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyTable2, MSGBOX_DEFAULT
# 419 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 420 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 422 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 423 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyStorm::
# 430 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 431 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyStorm3, MSGBOX_DEFAULT
# 432 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 433 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 435 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 436 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
	return


LoonixInsideReal_Script_GrannyBed::
# 442 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 443 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrannyBed, MSGBOX_DEFAULT
# 444 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 445 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


# 449 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PreventExit:
# 450 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
# 451 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 451 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 451 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 451 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 452 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 455 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaTV:
# 456 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 457 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 457 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 460 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaBed:
# 461 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 461 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 462 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 462 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 462 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 463 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 464 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 467 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerBed:
# 468 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 468 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 468 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 469 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 469 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 469 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 470 "data/maps/LoonixInsideReal/scripts.pory"
	face_right
	step_end

# 473 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaUp:
# 474 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 477 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaMono:
# 478 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 481 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerToGma:
# 482 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 483 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 483 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 483 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 483 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 484 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 484 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 487 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ApproachPlayer:
# 488 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 488 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 488 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 491 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ReturnToKitchen:
# 492 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 492 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 492 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 493 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 496 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_ApproachPlayer:
# 497 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 500 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_GrannyToTable:
# 501 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 502 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 502 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 502 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 502 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 502 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 503 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 506 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_PlayerToTable:
# 507 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 507 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 508 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 509 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 509 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 509 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 510 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
	step_end

# 513 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny2_EeveeToTable:
# 514 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 514 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 514 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 515 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 516 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 516 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 516 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 519 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny3_PlayerToTable:
# 520 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 521 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 521 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 521 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 521 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 521 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 522 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
	step_end

LoonixInsideReal_Script_GrannyScene1_Text_0:
# 128 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Granny$"

LoonixInsideReal_Script_Statue_Text_0:
# 295 "data/maps/LoonixInsideReal/scripts.pory"
	.string "This is the statue they sent us after\n"
	.string "Dad left...$"

LoonixInsideReal_Script_Junk_Text_0:
# 302 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Here's another pile of junk left lying\n"
	.string "around...$"

LoonixInsideReal_Script_Special_Text_0:
# 310 "data/maps/LoonixInsideReal/scripts.pory"
	.string "What's for dinner?$"

LoonixInsideReal_Script_PreventExit_Text_0:
# 357 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_Script_Grandma_Text_0:
# 389 "data/maps/LoonixInsideReal/scripts.pory"
	.string "DEFAULT$"

LoonixInsideReal_Text_GrandmaTVSpeech::
# 525 "data/maps/LoonixInsideReal/scripts.pory"
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that I\l"
	.string "would ask.$"

LoonixInsideReal_Text_GrandmaMono::
# 529 "data/maps/LoonixInsideReal/scripts.pory"
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Castalia is just too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
# 533 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'll have to stay.\p"
	.string "{PLAYER}, will you help me into bed?$"

LoonixInsideReal_Text_GrandmaBed::
# 537 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Thank you.$"

LoonixInsideReal_Text_Granny1A::
# 541 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Good morning sleepyhead!$"

LoonixInsideReal_Text_Granny1B::
# 545 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'm still cooking breakfast but your\n"
	.string "friend came by earlier. What was her\l"
	.string "name again?$"

LoonixInsideReal_Text_Granny1C::
# 550 "data/maps/LoonixInsideReal/scripts.pory"
	.string "That's right, {LEAF}! She's such a sweet and\n"
	.string "beautiful young girl. I think she's still\l"
	.string "waiting outside for you. Go out, have\l"
	.string "fun, but keep your distance from the\l"
	.string "tall grass where wild pokemon roam.$"

LoonixInsideReal_Text_GrannyKitchen::
# 554 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Go have fun with {LEAF} but please stay safe.$"

LoonixInsideReal_Text_GrannyTable1::
# 558 "data/maps/LoonixInsideReal/scripts.pory"
	.string "So nice to see you {PLAYER}! Sit down\n"
	.string "and rest.$"

LoonixInsideReal_Text_GrannyTable2::
# 562 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come back anytime and good luck at\n"
	.string "school.$"

LoonixInsideReal_Text_TV1::
# 566 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Humans and aliens working together to\n"
	.string "explore new worlds, seek out strange\l"
	.string "new life, and boldly go where no one has\l"
	.string "ever gone before.$"

LoonixInsideReal_Text_TV2::
# 570 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Handsome men in suits discuss\n"
	.string "transportation infrastructure with a\l"
	.string "member of the Restoration Party.$"

LoonixInsideReal_Text_TVX::
# 574 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Looks like the TV is switched off.$"

LoonixInsideReal_Text_Granny2A::
# 592 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I told you to keep out of the tall\n"
	.string "grass! Oh {PLAYER}, what can I say? I'm\l"
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

LoonixInsideReal_Text_Granny2B::
# 596 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Your father would have wanted you to\n"
	.string "have his Pokedex when you were old\l"
	.string "enough. The Pokedex is an electronic\l"
	.string "tool to help record the Pokemon you\l"
	.string "find. And here, take these.$"

LoonixInsideReal_Text_Granny2C::
# 600 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You can keep Pokemon in Pokeballs, but\n"
	.string "Eevee seems to prefer the fresh air. I\l"
	.string "see that you and him have a strong\l"
	.string "bond. Would you like to give Eevee a\l"
	.string "nickname?$"

LoonixInsideReal_Text_Granny2D::
# 604 "data/maps/LoonixInsideReal/scripts.pory"
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
# 608 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Just promise me you'll go to Trainer\n"
	.string "School and come back anytime to rest at\l"
	.string "home.$"

LoonixInsideReal_Text_GrannyStorm1::
# 612 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}! I was so worried! Thank\n"
	.string "goodness that you're ok! Come here. Let\l"
	.string "me see you.$"

LoonixInsideReal_Text_GrannyStorm2::
# 616 "data/maps/LoonixInsideReal/scripts.pory"
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
# 620 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You'll be ok as long as you're with me. Go\n"
	.string "up to bed and let the weather pass.$"

LoonixInsideReal_Text_Granny4A::
# 624 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}! Come here sweetie.$"

LoonixInsideReal_Text_GrannyBed::
# 628 "data/maps/LoonixInsideReal/scripts.pory"
	.string "She must be sleeping...$"
