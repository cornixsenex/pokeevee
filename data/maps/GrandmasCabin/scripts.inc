GrandmasCabin_MapScripts::
# 13 "data//maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 31 "data//maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME
# 37 "data//maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data//maps/GrandmasCabin/scripts.pory"
	switch VAR_GRANNY_STATE
# 15 "data//maps/GrandmasCabin/scripts.pory"
	case 0, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data//maps/GrandmasCabin/scripts.pory"
	case 1, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 17 "data//maps/GrandmasCabin/scripts.pory"
	case 2, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 19 "data//maps/GrandmasCabin/scripts.pory"
	case 3, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 21 "data//maps/GrandmasCabin/scripts.pory"
	case 4, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 23 "data//maps/GrandmasCabin/scripts.pory"
	case 5, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 26 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_HideAll
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf1
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 20 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf2
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 22 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf3
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 24 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowGranny
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME:
# 32 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 33 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_TryRemoveRattata
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 38 "data//maps/GrandmasCabin/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 2, GrandmasCabin_Script_LeafGame1
	.2byte 0


GrandmasCabin_Script_HideAll::
# 44 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 19, 0
# 45 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 47 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 18, 0
# 48 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 50 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 17, 0
# 51 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 53 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 2, 16, 0
# 54 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 56 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 5, 15, 0
# 57 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
	return


GrandmasCabin_Script_ShowLeaf1::
# 64 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 5, 6
# 65 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
# 67 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 10, 14
# 68 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	return


GrandmasCabin_Script_ShowLeaf2::
# 74 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 16, 28
# 75 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
	return


GrandmasCabin_Script_ShowLeaf3::
# 81 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 10, 30
# 82 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 84 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 5, 11, 30
# 85 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


GrandmasCabin_Script_ShowGranny::
# 91 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 10, 14
# 92 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	return


GrandmasCabin_Script_TryRemoveRattata::
# 98 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 5
	return


GrandmasCabin_Script_Eevee::
# 103 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 104 "data//maps/GrandmasCabin/scripts.pory"
	faceplayer
# 105 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Eevee, MSGBOX_DEFAULT
# 106 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 107 "data//maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_Leaf::
# 112 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 113 "data//maps/GrandmasCabin/scripts.pory"
	faceplayer
# 115 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_unset FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_Leaf_2
# 121 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf4, MSGBOX_DEFAULT
GrandmasCabin_Script_Leaf_1:
# 123 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 125 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 126 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 128 "data//maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_Leaf_2:
# 116 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_LEAF_HIDEANDSEEK_FOUND
# 117 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 118 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 119 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf3, MSGBOX_DEFAULT
	goto GrandmasCabin_Script_Leaf_1


GrandmasCabin_Script_LeafGame1::
# 134 "data//maps/GrandmasCabin/scripts.pory"
	lockall
# 136 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 3
# 138 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf1, MSGBOX_DEFAULT
# 139 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 141 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_BeginHideAndSeek
# 142 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_BeginHideAndSeek
# 143 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 145 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 146 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 147 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 149 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf2, MSGBOX_DEFAULT
# 150 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 152 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 153 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 154 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf2
# 155 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 157 "data//maps/GrandmasCabin/scripts.pory"
	releaseall
	end


GrandmasCabin_Script_Mew::
# 162 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 164 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 165 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 167 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_HideAll
# 169 "data//maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_AvoidGrass::
# 174 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 175 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_AvoidGrass, MSGBOX_DEFAULT
# 176 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 177 "data//maps/GrandmasCabin/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 178 "data//maps/GrandmasCabin/scripts.pory"
	switch VAR_RESULT
# 179 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_SOUTH, GrandmasCabin_Script_AvoidGrass_3
# 181 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_NORTH, GrandmasCabin_Script_AvoidGrass_4
# 183 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_EAST, GrandmasCabin_Script_AvoidGrass_5
# 185 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_WEST, GrandmasCabin_Script_AvoidGrass_6
# 188 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 189 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_AvoidGrass_Text_0, MSGBOX_DEFAULT
# 190 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
GrandmasCabin_Script_AvoidGrass_1:
# 192 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 193 "data//maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_AvoidGrass_3:
# 180 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_4:
# 182 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_5:
# 184 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_6:
# 186 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	goto GrandmasCabin_Script_AvoidGrass_1


GrandmasCabin_Script_StayHideAndSeek::
# 198 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 199 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_StayHideAndSeek, MSGBOX_DEFAULT
# 200 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 201 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 202 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 203 "data//maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_TryContinueHideAndSeekA::
# 208 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_TryContinueHideAndSeekA_2
GrandmasCabin_Script_TryContinueHideAndSeekA_1:
# 213 "data//maps/GrandmasCabin/scripts.pory"
	release
	return

GrandmasCabin_Script_TryContinueHideAndSeekA_2:
# 209 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_TEMP_5
# 210 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_TEMP_6
# 211 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ContinueHideAndSeek
	goto GrandmasCabin_Script_TryContinueHideAndSeekA_1


GrandmasCabin_Script_TryContinueHideAndSeekB::
# 217 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_TryContinueHideAndSeekB_2
GrandmasCabin_Script_TryContinueHideAndSeekB_1:
# 222 "data//maps/GrandmasCabin/scripts.pory"
	release
	return

GrandmasCabin_Script_TryContinueHideAndSeekB_2:
# 218 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_TEMP_6
# 219 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_TEMP_5
# 220 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ContinueHideAndSeek
	goto GrandmasCabin_Script_TryContinueHideAndSeekB_1


GrandmasCabin_Script_ContinueHideAndSeek::
# 226 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 227 "data//maps/GrandmasCabin/scripts.pory"
	playse SE_EFFECTIVE
# 228 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf5, MSGBOX_DEFAULT
# 229 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 231 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 232 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 233 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_TEMP_5, GrandmasCabin_Script_ContinueHideAndSeek_2
# 237 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_TEMP_6, GrandmasCabin_Script_ContinueHideAndSeek_3
# 242 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 5, 39
# 243 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 244 "data//maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
GrandmasCabin_Script_ContinueHideAndSeek_1:
# 246 "data//maps/GrandmasCabin/scripts.pory"
	addobject 3
# 247 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 3, MAP_GRANDMAS_CABIN
# 248 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 250 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf6, MSGBOX_DEFAULT
# 251 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 253 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 254 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 255 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf3
# 256 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 258 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 4
# 259 "data//maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_ContinueHideAndSeek_2:
# 234 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 7, 39
# 235 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 236 "data//maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto GrandmasCabin_Script_ContinueHideAndSeek_1

GrandmasCabin_Script_ContinueHideAndSeek_3:
# 238 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 6, 39
# 239 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 240 "data//maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto GrandmasCabin_Script_ContinueHideAndSeek_1


GrandmasCabin_Script_SaveLeafA::
# 264 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 1
# 265 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeafB::
# 269 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 2
# 270 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeafC::
# 274 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 3
# 275 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeaf::
# 280 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 281 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 282 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 283 "data//maps/GrandmasCabin/scripts.pory"
	playbgm MUS_HELP, TRUE
# 284 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_0, MSGBOX_DEFAULT
# 285 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 286 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 288 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush1
# 289 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 291 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 292 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf7, MSGBOX_DEFAULT
# 293 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 294 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 296 "data//maps/GrandmasCabin/scripts.pory"
	switch VAR_TEMP_5
# 297 "data//maps/GrandmasCabin/scripts.pory"
	case 0, GrandmasCabin_Script_SaveLeaf_3
# 300 "data//maps/GrandmasCabin/scripts.pory"
	case 1, GrandmasCabin_Script_SaveLeaf_4
# 303 "data//maps/GrandmasCabin/scripts.pory"
	case 2, GrandmasCabin_Script_SaveLeaf_5
# 306 "data//maps/GrandmasCabin/scripts.pory"
	case 3, GrandmasCabin_Script_SaveLeaf_6
# 310 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_2, MSGBOX_DEFAULT
# 311 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
GrandmasCabin_Script_SaveLeaf_1:
# 315 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 316 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 317 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 1
# 318 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 2, 31
# 319 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 320 "data//maps/GrandmasCabin/scripts.pory"
	addobject 1
# 321 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 1, MAP_GRANDMAS_CABIN
# 323 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 324 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 1, GrandmasCabin_Movement_EeveeEnter
# 325 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 327 "data//maps/GrandmasCabin/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_ENCOUNTER
# 328 "data//maps/GrandmasCabin/scripts.pory"
	waitmoncry
# 330 "data//maps/GrandmasCabin/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 331 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 333 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Eevee, MSGBOX_DEFAULT
# 334 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 336 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 337 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 339 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 340 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf8, MSGBOX_DEFAULT
# 341 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 342 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 344 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 345 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 347 "data//maps/GrandmasCabin/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_ENCOUNTER
# 348 "data//maps/GrandmasCabin/scripts.pory"
	waitmoncry
# 351 "data//maps/GrandmasCabin/scripts.pory"
	setwildbattle SPECIES_RATTATA, 3
# 352 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 353 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_FORCE_EEVEE_SLIDE_IN
# 354 "data//maps/GrandmasCabin/scripts.pory"
	dowildbattle
# 355 "data//maps/GrandmasCabin/scripts.pory"
	playbgm MUS_LITTLEROOT, TRUE
# 356 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 357 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_FORCE_EEVEE_SLIDE_IN
# 359 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 360 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 361 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 364 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 1
# 365 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 15, 0
# 366 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 367 "data//maps/GrandmasCabin/scripts.pory"
	addobject 1
# 368 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 1, MAP_GRANDMAS_CABIN
# 370 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 371 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 372 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 373 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 375 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf9, MSGBOX_DEFAULT
# 376 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 379 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 4
# 380 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 10, 14
# 381 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 382 "data//maps/GrandmasCabin/scripts.pory"
	addobject 4
# 383 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 3, MAP_GRANDMAS_CABIN
# 386 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 387 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_EndHideAndSeekA
# 388 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_EndHideAndSeekA
# 389 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 391 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 392 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 394 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_EndHideAndSeekB
# 395 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_EndHideAndSeekB
# 396 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 398 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 5
# 401 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 402 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 403 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 404 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 407 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 30, 190, 98
# 408 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Granny1, MSGBOX_DEFAULT
# 409 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 30
# 410 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 412 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_LeafExitA
# 413 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 414 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 415 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 416 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 417 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf10, MSGBOX_DEFAULT
# 418 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 419 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 421 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 423 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_LeafExitB
# 424 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 426 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 30, 190, 98
# 427 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Granny2, MSGBOX_DEFAULT
# 428 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 30
# 429 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 431 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 6
# 432 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 434 "data//maps/GrandmasCabin/scripts.pory"
	warpsilent MAP_LOONIX_INSIDE_REAL, 4, 8
# 436 "data//maps/GrandmasCabin/scripts.pory"
	releaseall
	end

GrandmasCabin_Script_SaveLeaf_3:
# 298 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_1, MSGBOX_DEFAULT
# 299 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_4:
# 301 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2A
# 302 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_5:
# 304 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2B
# 305 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_6:
# 307 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2C
# 308 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1


# 440 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_BeginHideAndSeek:
# 441 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 441 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 442 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 442 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 442 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 442 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 443 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 443 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 443 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 443 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 443 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 443 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 444 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 444 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 444 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 444 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 444 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 445 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 445 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 445 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 445 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 445 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 445 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 445 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 445 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 446 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 446 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

# 449 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush1:
# 450 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 450 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 450 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 453 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2A:
# 454 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 454 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 454 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 455 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 456 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 459 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2B:
# 460 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 460 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 460 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 463 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2C:
# 464 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 464 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 464 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 465 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 466 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 469 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EeveeEnter:
# 470 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 470 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 470 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 470 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 470 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 470 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 470 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 470 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

# 473 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EndHideAndSeekA:
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 475 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 475 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 475 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 475 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 475 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 475 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 475 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 475 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 475 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 478 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EndHideAndSeekB:
# 479 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 479 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 479 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 479 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 479 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 479 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 480 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 480 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 480 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 480 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 480 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 481 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 481 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 481 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 482 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 485 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_LeafExitA:
# 486 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 487 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 487 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 488 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 491 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_LeafExitB:
# 492 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 492 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 492 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 492 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 492 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 492 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 492 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 492 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

GrandmasCabin_Script_AvoidGrass_Text_0:
# 189 "data//maps/GrandmasCabin/scripts.pory"
	.string "ERROR$"

GrandmasCabin_Script_SaveLeaf_Text_0:
# 284 "data//maps/GrandmasCabin/scripts.pory"
	.string "Help!$"

GrandmasCabin_Script_SaveLeaf_Text_1:
# 298 "data//maps/GrandmasCabin/scripts.pory"
	.string "VAR_TEMP_5 = 0$"

GrandmasCabin_Script_SaveLeaf_Text_2:
# 310 "data//maps/GrandmasCabin/scripts.pory"
	.string "VAR_TEMP_5 = OOB$"

GrandmasCabin_Text_Eevee::
# 495 "data//maps/GrandmasCabin/scripts.pory"
	.string "It's your dad's old Pokemon, Eevee. He's\n"
	.string "looking at you with an unwavering\l"
	.string "intensity.$"

GrandmasCabin_Text_Leaf1::
# 499 "data//maps/GrandmasCabin/scripts.pory"
	.string "Hi {PLAYER}! C'mon lets go play Hide\n"
	.string "and Seek!$"

GrandmasCabin_Text_Leaf2::
# 503 "data//maps/GrandmasCabin/scripts.pory"
	.string "I'll go hide first. Close your eyes for a\n"
	.string "sec.$"

GrandmasCabin_Text_Leaf3::
# 507 "data//maps/GrandmasCabin/scripts.pory"
	.string "You found me! No! Now it's your turn to\n"
	.string "hide.$"

GrandmasCabin_Text_Leaf4::
# 511 "data//maps/GrandmasCabin/scripts.pory"
	.string "Go find somewhere to hide. I'll close my\n"
	.string "eyes!$"

GrandmasCabin_Text_Leaf5::
# 515 "data//maps/GrandmasCabin/scripts.pory"
	.string "Ready or not, watch out {PLAYER}!\n"
	.string "Here I come!$"

GrandmasCabin_Text_Leaf6::
# 519 "data//maps/GrandmasCabin/scripts.pory"
	.string "Haha! I found you, now it's my turn.\n"
	.string "Close your eyes!$"

GrandmasCabin_Text_Leaf7::
# 523 "data//maps/GrandmasCabin/scripts.pory"
	.string "Please help me, {PLAYER}! I'm scared\n"
	.string "of Rattata!$"

GrandmasCabin_Text_AvoidGrass::
# 527 "data//maps/GrandmasCabin/scripts.pory"
	.string "Keep your distance from the tall\n"
	.string "grass...$"

GrandmasCabin_Text_StayHideAndSeek::
# 531 "data//maps/GrandmasCabin/scripts.pory"
	.string "I shouldn't leave {LEAF} behind...$"

GrandmasCabin_Text_HideAndSeek::
# 535 "data//maps/GrandmasCabin/scripts.pory"
	.string "Ready or not, here I come!$"

GrandmasCabin_Text_Leaf8::
# 539 "data//maps/GrandmasCabin/scripts.pory"
	.string "Do it! Eevee and I believe in you.$"

GrandmasCabin_Text_Leaf9::
# 543 "data//maps/GrandmasCabin/scripts.pory"
	.string "That was so scary! {PLAYER} you are\n"
	.string "so brave. I can't believe how strong\l"
	.string "your connection with Eevee is. Now let's\l"
	.string "get out of here.$"

GrandmasCabin_Text_Granny1::
# 547 "data//maps/GrandmasCabin/scripts.pory"
	.string "What's going on? Why did Eevee run off?\n"
	.string "Where have you been? Oh God!\l"
	.string "{PLAYER} are you hurt? I told you to\l"
	.string "stay out of the tall grass!$"

GrandmasCabin_Text_Leaf10::
# 551 "data//maps/GrandmasCabin/scripts.pory"
	.string "Think I should go...sorry...See you\n"
	.string "around.$"

GrandmasCabin_Text_Granny2::
# 555 "data//maps/GrandmasCabin/scripts.pory"
	.string "March your behind inside! Let's have a\n"
	.string "chat...$"
