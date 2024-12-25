GrandmasCabin_MapScripts::
# 13 "data/maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 30 "data/maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/GrandmasCabin/scripts.pory"
	switch VAR_GRANNY_STATE
# 15 "data/maps/GrandmasCabin/scripts.pory"
	case 0, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/GrandmasCabin/scripts.pory"
	case 1, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 17 "data/maps/GrandmasCabin/scripts.pory"
	case 2, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 19 "data/maps/GrandmasCabin/scripts.pory"
	case 3, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 21 "data/maps/GrandmasCabin/scripts.pory"
	case 4, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 23 "data/maps/GrandmasCabin/scripts.pory"
	case 5, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 26 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_HideAll
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf1
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 20 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf2
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 22 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf3
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 24 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowGranny
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 31 "data/maps/GrandmasCabin/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 2, GrandmasCabin_Script_LeafGame1
	.2byte 0


GrandmasCabin_Script_HideAll::
# 37 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 19, 0
# 38 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 40 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 18, 0
# 41 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 43 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 17, 0
# 44 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 46 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 2, 16, 0
# 47 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 49 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 5, 15, 0
# 50 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
	return


GrandmasCabin_Script_ShowLeaf1::
# 57 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 5, 6
# 58 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
# 60 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 10, 14
# 61 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	return


GrandmasCabin_Script_ShowLeaf2::
# 67 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 16, 28
# 68 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
	return


GrandmasCabin_Script_ShowLeaf3::
# 74 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 10, 30
# 75 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 77 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 5, 11, 30
# 78 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


GrandmasCabin_Script_ShowGranny::
# 84 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 10, 14
# 85 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	return


GrandmasCabin_Script_Eevee::
# 91 "data/maps/GrandmasCabin/scripts.pory"
	lock
# 92 "data/maps/GrandmasCabin/scripts.pory"
	faceplayer
# 93 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Eevee, MSGBOX_DEFAULT
# 94 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 95 "data/maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_Leaf::
# 100 "data/maps/GrandmasCabin/scripts.pory"
	lock
# 101 "data/maps/GrandmasCabin/scripts.pory"
	faceplayer
# 103 "data/maps/GrandmasCabin/scripts.pory"
	goto_if_unset FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_Leaf_2
# 109 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf4, MSGBOX_DEFAULT
GrandmasCabin_Script_Leaf_1:
# 111 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 113 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 114 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 116 "data/maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_Leaf_2:
# 104 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_LEAF_HIDEANDSEEK_FOUND
# 105 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 106 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 107 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf3, MSGBOX_DEFAULT
	goto GrandmasCabin_Script_Leaf_1


GrandmasCabin_Script_LeafGame1::
# 122 "data/maps/GrandmasCabin/scripts.pory"
	lockall
# 124 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 3
# 126 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf1, MSGBOX_DEFAULT
# 127 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 129 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_BeginHideAndSeek
# 130 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_BeginHideAndSeek
# 131 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 133 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 134 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 135 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 137 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf2, MSGBOX_DEFAULT
# 138 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 140 "data/maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 141 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 142 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf2
# 143 "data/maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 145 "data/maps/GrandmasCabin/scripts.pory"
	releaseall
	end


GrandmasCabin_Script_Mew::
# 150 "data/maps/GrandmasCabin/scripts.pory"
	lock
# 152 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 153 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 155 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_HideAll
# 157 "data/maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_AvoidGrass::
# 162 "data/maps/GrandmasCabin/scripts.pory"
	lock
# 163 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_AvoidGrass, MSGBOX_DEFAULT
# 164 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 165 "data/maps/GrandmasCabin/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 166 "data/maps/GrandmasCabin/scripts.pory"
	switch VAR_RESULT
# 167 "data/maps/GrandmasCabin/scripts.pory"
	case DIR_SOUTH, GrandmasCabin_Script_AvoidGrass_3
# 169 "data/maps/GrandmasCabin/scripts.pory"
	case DIR_NORTH, GrandmasCabin_Script_AvoidGrass_4
# 171 "data/maps/GrandmasCabin/scripts.pory"
	case DIR_EAST, GrandmasCabin_Script_AvoidGrass_5
# 173 "data/maps/GrandmasCabin/scripts.pory"
	case DIR_WEST, GrandmasCabin_Script_AvoidGrass_6
# 176 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 177 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_AvoidGrass_Text_0, MSGBOX_DEFAULT
# 178 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
GrandmasCabin_Script_AvoidGrass_1:
# 180 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 181 "data/maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_AvoidGrass_3:
# 168 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_4:
# 170 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_5:
# 172 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_6:
# 174 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	goto GrandmasCabin_Script_AvoidGrass_1


GrandmasCabin_Script_StayHideAndSeek::
# 186 "data/maps/GrandmasCabin/scripts.pory"
	lock
# 187 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_StayHideAndSeek, MSGBOX_DEFAULT
# 188 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 189 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 190 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 191 "data/maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_TryContinueHideAndSeekA::
# 196 "data/maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_TryContinueHideAndSeekA_2
GrandmasCabin_Script_TryContinueHideAndSeekA_1:
# 201 "data/maps/GrandmasCabin/scripts.pory"
	release
	return

GrandmasCabin_Script_TryContinueHideAndSeekA_2:
# 197 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_TEMP_5
# 198 "data/maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_TEMP_6
# 199 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ContinueHideAndSeek
	goto GrandmasCabin_Script_TryContinueHideAndSeekA_1


GrandmasCabin_Script_TryContinueHideAndSeekB::
# 205 "data/maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_TryContinueHideAndSeekB_2
GrandmasCabin_Script_TryContinueHideAndSeekB_1:
# 210 "data/maps/GrandmasCabin/scripts.pory"
	release
	return

GrandmasCabin_Script_TryContinueHideAndSeekB_2:
# 206 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_TEMP_6
# 207 "data/maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_TEMP_5
# 208 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ContinueHideAndSeek
	goto GrandmasCabin_Script_TryContinueHideAndSeekB_1


GrandmasCabin_Script_ContinueHideAndSeek::
# 214 "data/maps/GrandmasCabin/scripts.pory"
	lock
# 215 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf5, MSGBOX_DEFAULT
# 216 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 218 "data/maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 219 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 220 "data/maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_TEMP_5, GrandmasCabin_Script_ContinueHideAndSeek_2
# 224 "data/maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_TEMP_6, GrandmasCabin_Script_ContinueHideAndSeek_3
# 229 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 5, 39
# 230 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 231 "data/maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
GrandmasCabin_Script_ContinueHideAndSeek_1:
# 233 "data/maps/GrandmasCabin/scripts.pory"
	addobject 3
# 234 "data/maps/GrandmasCabin/scripts.pory"
	showobjectat 3, MAP_GRANDMAS_CABIN
# 235 "data/maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 237 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf6, MSGBOX_DEFAULT
# 238 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 240 "data/maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 241 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 242 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf3
# 243 "data/maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 245 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 4
# 246 "data/maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_ContinueHideAndSeek_2:
# 221 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 7, 39
# 222 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 223 "data/maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto GrandmasCabin_Script_ContinueHideAndSeek_1

GrandmasCabin_Script_ContinueHideAndSeek_3:
# 225 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 6, 39
# 226 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 227 "data/maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto GrandmasCabin_Script_ContinueHideAndSeek_1


GrandmasCabin_Script_SaveLeafA::
# 251 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 1
# 252 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeafB::
# 256 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 2
# 257 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeafC::
# 261 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 3
# 262 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeaf::
# 267 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 268 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 269 "data/maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 270 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_0, MSGBOX_DEFAULT
# 271 "data/maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 272 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 274 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush1
# 275 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 277 "data/maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 278 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf7, MSGBOX_DEFAULT
# 279 "data/maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 280 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 282 "data/maps/GrandmasCabin/scripts.pory"
	switch VAR_TEMP_5
# 283 "data/maps/GrandmasCabin/scripts.pory"
	case 0, GrandmasCabin_Script_SaveLeaf_3
# 286 "data/maps/GrandmasCabin/scripts.pory"
	case 1, GrandmasCabin_Script_SaveLeaf_4
# 289 "data/maps/GrandmasCabin/scripts.pory"
	case 2, GrandmasCabin_Script_SaveLeaf_5
# 292 "data/maps/GrandmasCabin/scripts.pory"
	case 3, GrandmasCabin_Script_SaveLeaf_6
# 296 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_2, MSGBOX_DEFAULT
# 297 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
GrandmasCabin_Script_SaveLeaf_1:
# 301 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 302 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 303 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 1
# 304 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 2, 31
# 305 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 306 "data/maps/GrandmasCabin/scripts.pory"
	addobject 1
# 307 "data/maps/GrandmasCabin/scripts.pory"
	showobjectat 1, MAP_GRANDMAS_CABIN
# 309 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 310 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 1, GrandmasCabin_Movement_EeveeEnter
# 311 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 313 "data/maps/GrandmasCabin/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_ENCOUNTER
# 314 "data/maps/GrandmasCabin/scripts.pory"
	waitmoncry
# 316 "data/maps/GrandmasCabin/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 317 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 319 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Eevee, MSGBOX_DEFAULT
# 320 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 322 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 323 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 325 "data/maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 326 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf8, MSGBOX_DEFAULT
# 327 "data/maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 328 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 330 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 331 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 333 "data/maps/GrandmasCabin/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_ENCOUNTER
# 334 "data/maps/GrandmasCabin/scripts.pory"
	waitmoncry
# 337 "data/maps/GrandmasCabin/scripts.pory"
	setwildbattle SPECIES_RATTATA, 3
# 338 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 339 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_FORCE_EEVEE_SLIDE_IN
# 340 "data/maps/GrandmasCabin/scripts.pory"
	dowildbattle
# 341 "data/maps/GrandmasCabin/scripts.pory"
	waitstate
# 342 "data/maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 343 "data/maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_FORCE_EEVEE_SLIDE_IN
# 345 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 346 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 347 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 348 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 349 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 350 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 351 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf9, MSGBOX_DEFAULT
# 352 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 354 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 4
# 355 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 10, 14
# 356 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 357 "data/maps/GrandmasCabin/scripts.pory"
	addobject 4
# 358 "data/maps/GrandmasCabin/scripts.pory"
	showobjectat 3, MAP_GRANDMAS_CABIN
# 360 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_EndHideAndSeek
# 361 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_EndHideAndSeek
# 362 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 364 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 5
# 367 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 368 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 369 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 370 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 373 "data/maps/GrandmasCabin/scripts.pory"
	load_field_pic 30, 190, 98
# 374 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Granny1, MSGBOX_DEFAULT
# 375 "data/maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 30
# 376 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 378 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 379 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 380 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 381 "data/maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 382 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf10, MSGBOX_DEFAULT
# 383 "data/maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 384 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 385 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 386 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_LeafExit
# 387 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 389 "data/maps/GrandmasCabin/scripts.pory"
	load_field_pic 30, 190, 98
# 390 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Granny2, MSGBOX_DEFAULT
# 391 "data/maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 30
# 392 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 394 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 6
# 396 "data/maps/GrandmasCabin/scripts.pory"
	warpsilent MAP_LOONIX_INSIDE_REAL, 4, 8
# 398 "data/maps/GrandmasCabin/scripts.pory"
	releaseall
	end

GrandmasCabin_Script_SaveLeaf_3:
# 284 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_1, MSGBOX_DEFAULT
# 285 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_4:
# 287 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2A
# 288 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_5:
# 290 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2B
# 291 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_6:
# 293 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2C
# 294 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1


# 402 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_BeginHideAndSeek:
# 403 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 403 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 404 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 404 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 404 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 404 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 405 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 405 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 405 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 405 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 405 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 405 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 406 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 406 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 406 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 406 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 406 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 407 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 407 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 407 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 407 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 407 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 407 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 407 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 407 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 408 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 408 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

# 411 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush1:
# 412 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 412 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 412 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 415 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2A:
# 416 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 416 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 416 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 417 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 418 "data/maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 421 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2B:
# 422 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 422 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 422 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 425 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2C:
# 426 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 426 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 426 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 427 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 428 "data/maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 431 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EeveeEnter:
# 432 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 432 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 432 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 432 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 432 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 432 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 432 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 432 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

# 435 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EndHideAndSeek:
# 436 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 436 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 436 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 436 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 436 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 436 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 436 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 436 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 436 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 436 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 437 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 437 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 437 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 437 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 437 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 437 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 437 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 437 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 437 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 438 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 438 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 438 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 438 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 438 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 438 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 439 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 439 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 439 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 439 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 439 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 440 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 440 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 440 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 441 "data/maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 444 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_LeafExit:
# 445 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 446 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 446 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 446 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 447 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 448 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 448 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 448 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 448 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 448 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 448 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 448 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 448 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

GrandmasCabin_Script_AvoidGrass_Text_0:
# 177 "data/maps/GrandmasCabin/scripts.pory"
	.string "ERROR$"

GrandmasCabin_Script_SaveLeaf_Text_0:
# 270 "data/maps/GrandmasCabin/scripts.pory"
	.string "Help!$"

GrandmasCabin_Script_SaveLeaf_Text_1:
# 284 "data/maps/GrandmasCabin/scripts.pory"
	.string "VAR_TEMP_5 = 0$"

GrandmasCabin_Script_SaveLeaf_Text_2:
# 296 "data/maps/GrandmasCabin/scripts.pory"
	.string "VAR_TEMP_5 = OOB$"

GrandmasCabin_Text_Eevee::
# 451 "data/maps/GrandmasCabin/scripts.pory"
	.string "It's your dad's old Pokemon, Eevee. He's\n"
	.string "looking at you with an unwavering\l"
	.string "intensity.$"

GrandmasCabin_Text_Leaf1::
# 455 "data/maps/GrandmasCabin/scripts.pory"
	.string "Hi {PLAYER}! C'mon lets go play Hide\n"
	.string "and Seek!$"

GrandmasCabin_Text_Leaf2::
# 459 "data/maps/GrandmasCabin/scripts.pory"
	.string "I'll go hide first. Close your eyes for a\n"
	.string "sec.$"

GrandmasCabin_Text_Leaf3::
# 463 "data/maps/GrandmasCabin/scripts.pory"
	.string "You found me! No! Now it's your turn to\n"
	.string "hide.$"

GrandmasCabin_Text_Leaf4::
# 467 "data/maps/GrandmasCabin/scripts.pory"
	.string "Go find somewhere to hide. I'll close my\n"
	.string "eyes!$"

GrandmasCabin_Text_Leaf5::
# 471 "data/maps/GrandmasCabin/scripts.pory"
	.string "Ready or not, watch out {PLAYER}!\n"
	.string "Here I come!$"

GrandmasCabin_Text_Leaf6::
# 475 "data/maps/GrandmasCabin/scripts.pory"
	.string "Haha! I found you, now it's my turn.\n"
	.string "Close your eyes!$"

GrandmasCabin_Text_Leaf7::
# 479 "data/maps/GrandmasCabin/scripts.pory"
	.string "Please help me, {PLAYER}! I'm scared\n"
	.string "of Rattata!$"

GrandmasCabin_Text_AvoidGrass::
# 483 "data/maps/GrandmasCabin/scripts.pory"
	.string "Keep your distance from the tall\n"
	.string "grass...$"

GrandmasCabin_Text_StayHideAndSeek::
# 487 "data/maps/GrandmasCabin/scripts.pory"
	.string "I shouldn't leave {LEAF} behind...$"

GrandmasCabin_Text_HideAndSeek::
# 491 "data/maps/GrandmasCabin/scripts.pory"
	.string "Ready or not, here I come!$"

GrandmasCabin_Text_Leaf8::
# 495 "data/maps/GrandmasCabin/scripts.pory"
	.string "Do it! Eevee and I believe in you.$"

GrandmasCabin_Text_Leaf9::
# 499 "data/maps/GrandmasCabin/scripts.pory"
	.string "That was so scary! {PLAYER} you are\n"
	.string "so brave. I can't believe how strong\l"
	.string "your connection with Eevee is. Now let's\l"
	.string "get out of here.$"

GrandmasCabin_Text_Granny1::
# 503 "data/maps/GrandmasCabin/scripts.pory"
	.string "What's going on? Why did Eevee run off?\n"
	.string "Where have you been? Oh God!\l"
	.string "{PLAYER} are you hurt? I told you to\l"
	.string "stay out of the tall grass!$"

GrandmasCabin_Text_Leaf10::
# 507 "data/maps/GrandmasCabin/scripts.pory"
	.string "Think I should go...sorry...See you\n"
	.string "around.$"

GrandmasCabin_Text_Granny2::
# 511 "data/maps/GrandmasCabin/scripts.pory"
	.string "March your behind inside! Let's have a\n"
	.string "chat...$"
