GrandmasCabin_MapScripts::
# 13 "data//maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 34 "data//maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME
# 40 "data//maps/GrandmasCabin/scripts.pory"
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
# 25 "data//maps/GrandmasCabin/scripts.pory"
	case 10, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 26 "data//maps/GrandmasCabin/scripts.pory"
	case 11, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 29 "data//maps/GrandmasCabin/scripts.pory"
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

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 27 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowStorm
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME:
# 35 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 36 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_TryRemoveRattata
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 41 "data//maps/GrandmasCabin/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 2, GrandmasCabin_Script_LeafGame1
	.2byte 0


GrandmasCabin_Script_HideAll::
# 47 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 19, 0
# 48 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 50 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 18, 0
# 51 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 53 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 17, 0
# 54 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 56 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 2, 16, 0
# 57 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 59 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 5, 15, 0
# 60 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
	return


GrandmasCabin_Script_ShowLeaf1::
# 67 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 5, 6
# 68 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
# 70 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 10, 14
# 71 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	return


GrandmasCabin_Script_ShowLeaf2::
# 77 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 16, 28
# 78 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
	return


GrandmasCabin_Script_ShowLeaf3::
# 84 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 10, 30
# 85 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 87 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 5, 11, 30
# 88 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


GrandmasCabin_Script_ShowGranny::
# 94 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 10, 14
# 95 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	return


GrandmasCabin_Script_ShowStorm::
# 101 "data//maps/GrandmasCabin/scripts.pory"
	setweather WEATHER_DOWNPOUR
	return


GrandmasCabin_Script_TryRemoveRattata::
# 107 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 5
	return


GrandmasCabin_Script_Eevee::
# 112 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 113 "data//maps/GrandmasCabin/scripts.pory"
	faceplayer
# 114 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Eevee, MSGBOX_DEFAULT
# 115 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 116 "data//maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_Leaf::
# 121 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 122 "data//maps/GrandmasCabin/scripts.pory"
	faceplayer
# 124 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_unset FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_Leaf_2
# 130 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf4, MSGBOX_DEFAULT
GrandmasCabin_Script_Leaf_1:
# 132 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 134 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 135 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 137 "data//maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_Leaf_2:
# 125 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_LEAF_HIDEANDSEEK_FOUND
# 126 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 127 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 128 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf3, MSGBOX_DEFAULT
	goto GrandmasCabin_Script_Leaf_1


GrandmasCabin_Script_LeafGame1::
# 143 "data//maps/GrandmasCabin/scripts.pory"
	lockall
# 145 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 3
# 147 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf1, MSGBOX_DEFAULT
# 148 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 150 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_BeginHideAndSeek
# 151 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_BeginHideAndSeek
# 152 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 154 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 155 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 156 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 158 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf2, MSGBOX_DEFAULT
# 159 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 161 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 162 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 163 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf2
# 164 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 166 "data//maps/GrandmasCabin/scripts.pory"
	releaseall
	end


GrandmasCabin_Script_Mew::
# 171 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 173 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 174 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 176 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_HideAll
# 178 "data//maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_AvoidGrass::
# 183 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 184 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_AvoidGrass, MSGBOX_DEFAULT
# 185 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 186 "data//maps/GrandmasCabin/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 187 "data//maps/GrandmasCabin/scripts.pory"
	switch VAR_RESULT
# 188 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_SOUTH, GrandmasCabin_Script_AvoidGrass_3
# 190 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_NORTH, GrandmasCabin_Script_AvoidGrass_4
# 192 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_EAST, GrandmasCabin_Script_AvoidGrass_5
# 194 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_WEST, GrandmasCabin_Script_AvoidGrass_6
# 197 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 198 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_AvoidGrass_Text_0, MSGBOX_DEFAULT
# 199 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
GrandmasCabin_Script_AvoidGrass_1:
# 201 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 202 "data//maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_AvoidGrass_3:
# 189 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_4:
# 191 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_5:
# 193 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_6:
# 195 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	goto GrandmasCabin_Script_AvoidGrass_1


GrandmasCabin_Script_StayHideAndSeek::
# 207 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 208 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_StayHideAndSeek, MSGBOX_DEFAULT
# 209 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 210 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 211 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 212 "data//maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_TryContinueHideAndSeekA::
# 217 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_TryContinueHideAndSeekA_2
GrandmasCabin_Script_TryContinueHideAndSeekA_1:
# 222 "data//maps/GrandmasCabin/scripts.pory"
	release
	return

GrandmasCabin_Script_TryContinueHideAndSeekA_2:
# 218 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_TEMP_5
# 219 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_TEMP_6
# 220 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ContinueHideAndSeek
	goto GrandmasCabin_Script_TryContinueHideAndSeekA_1


GrandmasCabin_Script_TryContinueHideAndSeekB::
# 226 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_TryContinueHideAndSeekB_2
GrandmasCabin_Script_TryContinueHideAndSeekB_1:
# 231 "data//maps/GrandmasCabin/scripts.pory"
	release
	return

GrandmasCabin_Script_TryContinueHideAndSeekB_2:
# 227 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_TEMP_6
# 228 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_TEMP_5
# 229 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ContinueHideAndSeek
	goto GrandmasCabin_Script_TryContinueHideAndSeekB_1


GrandmasCabin_Script_ContinueHideAndSeek::
# 235 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 236 "data//maps/GrandmasCabin/scripts.pory"
	playse SE_EFFECTIVE
# 237 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf5, MSGBOX_DEFAULT
# 238 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 240 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 241 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 242 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_TEMP_5, GrandmasCabin_Script_ContinueHideAndSeek_2
# 246 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_TEMP_6, GrandmasCabin_Script_ContinueHideAndSeek_3
# 251 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 5, 39
# 252 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 253 "data//maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
GrandmasCabin_Script_ContinueHideAndSeek_1:
# 255 "data//maps/GrandmasCabin/scripts.pory"
	addobject 3
# 256 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 3, MAP_GRANDMAS_CABIN
# 257 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 259 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf6, MSGBOX_DEFAULT
# 260 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 262 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 263 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 264 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf3
# 265 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 267 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 4
# 268 "data//maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_ContinueHideAndSeek_2:
# 243 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 7, 39
# 244 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 245 "data//maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto GrandmasCabin_Script_ContinueHideAndSeek_1

GrandmasCabin_Script_ContinueHideAndSeek_3:
# 247 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 6, 39
# 248 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 249 "data//maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto GrandmasCabin_Script_ContinueHideAndSeek_1


GrandmasCabin_Script_SaveLeafA::
# 273 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 1
# 274 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeafB::
# 278 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 2
# 279 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeafC::
# 283 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 3
# 284 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeaf::
# 289 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 290 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 291 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 292 "data//maps/GrandmasCabin/scripts.pory"
	playbgm MUS_HELP, TRUE
# 293 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_0, MSGBOX_DEFAULT
# 294 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 295 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 297 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush1
# 298 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 300 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 301 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf7, MSGBOX_DEFAULT
# 302 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 303 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 305 "data//maps/GrandmasCabin/scripts.pory"
	switch VAR_TEMP_5
# 306 "data//maps/GrandmasCabin/scripts.pory"
	case 0, GrandmasCabin_Script_SaveLeaf_3
# 309 "data//maps/GrandmasCabin/scripts.pory"
	case 1, GrandmasCabin_Script_SaveLeaf_4
# 312 "data//maps/GrandmasCabin/scripts.pory"
	case 2, GrandmasCabin_Script_SaveLeaf_5
# 315 "data//maps/GrandmasCabin/scripts.pory"
	case 3, GrandmasCabin_Script_SaveLeaf_6
# 319 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_2, MSGBOX_DEFAULT
# 320 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
GrandmasCabin_Script_SaveLeaf_1:
# 324 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 325 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 326 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 1
# 327 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 2, 31
# 328 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 329 "data//maps/GrandmasCabin/scripts.pory"
	addobject 1
# 330 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 1, MAP_GRANDMAS_CABIN
# 332 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 333 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 1, GrandmasCabin_Movement_EeveeEnter
# 334 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 336 "data//maps/GrandmasCabin/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_ENCOUNTER
# 337 "data//maps/GrandmasCabin/scripts.pory"
	waitmoncry
# 339 "data//maps/GrandmasCabin/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 340 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 342 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Eevee, MSGBOX_DEFAULT
# 343 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 345 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 346 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 348 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 349 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf8, MSGBOX_DEFAULT
# 350 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 351 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 353 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 354 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 356 "data//maps/GrandmasCabin/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_ENCOUNTER
# 357 "data//maps/GrandmasCabin/scripts.pory"
	waitmoncry
# 360 "data//maps/GrandmasCabin/scripts.pory"
	setwildbattle SPECIES_RATTATA, 3
# 361 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 362 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_FORCE_EEVEE_SLIDE_IN
# 363 "data//maps/GrandmasCabin/scripts.pory"
	dowildbattle
# 364 "data//maps/GrandmasCabin/scripts.pory"
	playbgm MUS_LITTLEROOT, TRUE
# 365 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 366 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_FORCE_EEVEE_SLIDE_IN
# 368 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 369 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 370 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 373 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 1
# 374 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 15, 0
# 375 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 376 "data//maps/GrandmasCabin/scripts.pory"
	addobject 1
# 377 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 1, MAP_GRANDMAS_CABIN
# 379 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 380 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 381 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 382 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 384 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf9, MSGBOX_DEFAULT
# 385 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 388 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 4
# 389 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 10, 14
# 390 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 391 "data//maps/GrandmasCabin/scripts.pory"
	addobject 4
# 392 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 3, MAP_GRANDMAS_CABIN
# 395 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 396 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_EndHideAndSeekA
# 397 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_EndHideAndSeekA
# 398 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 400 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 401 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 403 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_EndHideAndSeekB
# 404 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_EndHideAndSeekB
# 405 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 407 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 5
# 410 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 411 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 412 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 413 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 416 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 30, 190, 98
# 417 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Granny1, MSGBOX_DEFAULT
# 418 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 30
# 419 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 421 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_LeafExitA
# 422 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 423 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 424 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 425 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 426 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf10, MSGBOX_DEFAULT
# 427 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 428 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 430 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 432 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_LeafExitB
# 433 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 435 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 30, 190, 98
# 436 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Granny2, MSGBOX_DEFAULT
# 437 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 30
# 438 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 440 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 6
# 441 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 443 "data//maps/GrandmasCabin/scripts.pory"
	warpsilent MAP_LOONIX_INSIDE_REAL, 4, 8
# 445 "data//maps/GrandmasCabin/scripts.pory"
	releaseall
	end

GrandmasCabin_Script_SaveLeaf_3:
# 307 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_1, MSGBOX_DEFAULT
# 308 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_4:
# 310 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2A
# 311 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_5:
# 313 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2B
# 314 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_6:
# 316 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2C
# 317 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1


# 449 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_BeginHideAndSeek:
# 450 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 450 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 451 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 451 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 451 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 451 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 452 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 452 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 452 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 452 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 452 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 452 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 453 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 453 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 453 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 453 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 453 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 454 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 454 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 454 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 454 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 454 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 454 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 454 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 454 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 455 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 455 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

# 458 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush1:
# 459 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 459 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 459 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 462 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2A:
# 463 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 463 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 463 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 464 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 465 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 468 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2B:
# 469 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 469 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 469 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 472 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2C:
# 473 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 473 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 473 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 475 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 478 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EeveeEnter:
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
# 479 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 479 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

# 482 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EndHideAndSeekA:
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 484 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 484 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 484 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 484 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 484 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 484 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 484 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 484 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 484 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 487 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EndHideAndSeekB:
# 488 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 488 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 488 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 488 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 488 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 488 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 489 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 489 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 489 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 489 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 489 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 490 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 490 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 490 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 491 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 494 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_LeafExitA:
# 495 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 496 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 496 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 497 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 500 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_LeafExitB:
# 501 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 501 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 501 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 501 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 501 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 501 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 501 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 501 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

GrandmasCabin_Script_AvoidGrass_Text_0:
# 198 "data//maps/GrandmasCabin/scripts.pory"
	.string "ERROR$"

GrandmasCabin_Script_SaveLeaf_Text_0:
# 293 "data//maps/GrandmasCabin/scripts.pory"
	.string "Help!$"

GrandmasCabin_Script_SaveLeaf_Text_1:
# 307 "data//maps/GrandmasCabin/scripts.pory"
	.string "VAR_TEMP_5 = 0$"

GrandmasCabin_Script_SaveLeaf_Text_2:
# 319 "data//maps/GrandmasCabin/scripts.pory"
	.string "VAR_TEMP_5 = OOB$"

GrandmasCabin_Text_Eevee::
# 504 "data//maps/GrandmasCabin/scripts.pory"
	.string "It's your dad's old Pokemon, Eevee. He's\n"
	.string "looking at you with an unwavering\l"
	.string "intensity.$"

GrandmasCabin_Text_Leaf1::
# 508 "data//maps/GrandmasCabin/scripts.pory"
	.string "Hi {PLAYER}! C'mon lets go play Hide\n"
	.string "and Seek!$"

GrandmasCabin_Text_Leaf2::
# 512 "data//maps/GrandmasCabin/scripts.pory"
	.string "I'll go hide first. Close your eyes for a\n"
	.string "sec.$"

GrandmasCabin_Text_Leaf3::
# 516 "data//maps/GrandmasCabin/scripts.pory"
	.string "You found me! No! Now it's your turn to\n"
	.string "hide.$"

GrandmasCabin_Text_Leaf4::
# 520 "data//maps/GrandmasCabin/scripts.pory"
	.string "Go find somewhere to hide. I'll close my\n"
	.string "eyes!$"

GrandmasCabin_Text_Leaf5::
# 524 "data//maps/GrandmasCabin/scripts.pory"
	.string "Ready or not, watch out {PLAYER}!\n"
	.string "Here I come!$"

GrandmasCabin_Text_Leaf6::
# 528 "data//maps/GrandmasCabin/scripts.pory"
	.string "Haha! I found you, now it's my turn.\n"
	.string "Close your eyes!$"

GrandmasCabin_Text_Leaf7::
# 532 "data//maps/GrandmasCabin/scripts.pory"
	.string "Please help me, {PLAYER}! I'm scared\n"
	.string "of Rattata!$"

GrandmasCabin_Text_AvoidGrass::
# 536 "data//maps/GrandmasCabin/scripts.pory"
	.string "Keep your distance from the tall\n"
	.string "grass...$"

GrandmasCabin_Text_StayHideAndSeek::
# 540 "data//maps/GrandmasCabin/scripts.pory"
	.string "I shouldn't leave {LEAF} behind...$"

GrandmasCabin_Text_HideAndSeek::
# 544 "data//maps/GrandmasCabin/scripts.pory"
	.string "Ready or not, here I come!$"

GrandmasCabin_Text_Leaf8::
# 548 "data//maps/GrandmasCabin/scripts.pory"
	.string "Do it! Eevee and I believe in you.$"

GrandmasCabin_Text_Leaf9::
# 552 "data//maps/GrandmasCabin/scripts.pory"
	.string "That was so scary! {PLAYER} you are\n"
	.string "so brave. I can't believe how strong\l"
	.string "your connection with Eevee is. Now let's\l"
	.string "get out of here.$"

GrandmasCabin_Text_Granny1::
# 556 "data//maps/GrandmasCabin/scripts.pory"
	.string "What's going on? Why did Eevee run off?\n"
	.string "Where have you been? Oh God!\l"
	.string "{PLAYER} are you hurt? I told you to\l"
	.string "stay out of the tall grass!$"

GrandmasCabin_Text_Leaf10::
# 560 "data//maps/GrandmasCabin/scripts.pory"
	.string "Think I should go...sorry...See you\n"
	.string "around.$"

GrandmasCabin_Text_Granny2::
# 564 "data//maps/GrandmasCabin/scripts.pory"
	.string "March your behind inside! Let's have a\n"
	.string "chat...$"
