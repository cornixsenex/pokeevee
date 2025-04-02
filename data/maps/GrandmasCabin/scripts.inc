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
	goto_if_set FLAG_FORCE_EEVEE_SLIDE_IN, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME_1
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
# 102 "data//maps/GrandmasCabin/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return


GrandmasCabin_Script_TryRemoveRattata::
# 108 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 5
	return


GrandmasCabin_Script_Eevee::
# 113 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 114 "data//maps/GrandmasCabin/scripts.pory"
	faceplayer
# 115 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Eevee, MSGBOX_DEFAULT
# 116 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 117 "data//maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_Leaf::
# 122 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 123 "data//maps/GrandmasCabin/scripts.pory"
	faceplayer
# 125 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_unset FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_Leaf_2
# 131 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf4, MSGBOX_DEFAULT
GrandmasCabin_Script_Leaf_1:
# 133 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 135 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 136 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 138 "data//maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_Leaf_2:
# 126 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_LEAF_HIDEANDSEEK_FOUND
# 127 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 128 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 129 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf3, MSGBOX_DEFAULT
	goto GrandmasCabin_Script_Leaf_1


GrandmasCabin_Script_LeafGame1::
# 144 "data//maps/GrandmasCabin/scripts.pory"
	lockall
# 146 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 3
# 148 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf1, MSGBOX_DEFAULT
# 149 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 151 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_BeginHideAndSeek
# 152 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_BeginHideAndSeek
# 153 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 155 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 156 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 157 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 159 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf2, MSGBOX_DEFAULT
# 160 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 162 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 163 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 164 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf2
# 165 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 167 "data//maps/GrandmasCabin/scripts.pory"
	releaseall
	end


GrandmasCabin_Script_Mew::
# 172 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 174 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 175 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 177 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_HideAll
# 179 "data//maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_AvoidGrass::
# 184 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 185 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_AvoidGrass, MSGBOX_DEFAULT
# 186 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 187 "data//maps/GrandmasCabin/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 188 "data//maps/GrandmasCabin/scripts.pory"
	switch VAR_RESULT
# 189 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_SOUTH, GrandmasCabin_Script_AvoidGrass_3
# 191 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_NORTH, GrandmasCabin_Script_AvoidGrass_4
# 193 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_EAST, GrandmasCabin_Script_AvoidGrass_5
# 195 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_WEST, GrandmasCabin_Script_AvoidGrass_6
# 198 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 199 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_AvoidGrass_Text_0, MSGBOX_DEFAULT
# 200 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
GrandmasCabin_Script_AvoidGrass_1:
# 202 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 203 "data//maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_AvoidGrass_3:
# 190 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_4:
# 192 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_5:
# 194 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_6:
# 196 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	goto GrandmasCabin_Script_AvoidGrass_1


GrandmasCabin_Script_StayHideAndSeek::
# 208 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 209 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_StayHideAndSeek, MSGBOX_DEFAULT
# 210 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 211 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 212 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 213 "data//maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_TryContinueHideAndSeekA::
# 218 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_TryContinueHideAndSeekA_2
GrandmasCabin_Script_TryContinueHideAndSeekA_1:
# 223 "data//maps/GrandmasCabin/scripts.pory"
	release
	return

GrandmasCabin_Script_TryContinueHideAndSeekA_2:
# 219 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_TEMP_5
# 220 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_TEMP_6
# 221 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ContinueHideAndSeek
	goto GrandmasCabin_Script_TryContinueHideAndSeekA_1


GrandmasCabin_Script_TryContinueHideAndSeekB::
# 227 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_TryContinueHideAndSeekB_2
GrandmasCabin_Script_TryContinueHideAndSeekB_1:
# 232 "data//maps/GrandmasCabin/scripts.pory"
	release
	return

GrandmasCabin_Script_TryContinueHideAndSeekB_2:
# 228 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_TEMP_6
# 229 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_TEMP_5
# 230 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ContinueHideAndSeek
	goto GrandmasCabin_Script_TryContinueHideAndSeekB_1


GrandmasCabin_Script_ContinueHideAndSeek::
# 236 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 237 "data//maps/GrandmasCabin/scripts.pory"
	playse SE_PIN
# 238 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 239 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 240 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf5, MSGBOX_DEFAULT
# 241 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 243 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 244 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 245 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_TEMP_5, GrandmasCabin_Script_ContinueHideAndSeek_2
# 249 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_TEMP_6, GrandmasCabin_Script_ContinueHideAndSeek_3
# 254 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 5, 39
# 255 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 256 "data//maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
GrandmasCabin_Script_ContinueHideAndSeek_1:
# 258 "data//maps/GrandmasCabin/scripts.pory"
	addobject 3
# 259 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 3, MAP_GRANDMAS_CABIN
# 260 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 262 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf6, MSGBOX_DEFAULT
# 263 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 265 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 266 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 267 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf3
# 268 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 270 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 4
# 271 "data//maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_ContinueHideAndSeek_2:
# 246 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 7, 39
# 247 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 248 "data//maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto GrandmasCabin_Script_ContinueHideAndSeek_1

GrandmasCabin_Script_ContinueHideAndSeek_3:
# 250 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 6, 39
# 251 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 252 "data//maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto GrandmasCabin_Script_ContinueHideAndSeek_1


GrandmasCabin_Script_SaveLeafA::
# 276 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 1
# 277 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeafB::
# 281 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 2
# 282 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeafC::
# 286 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 3
# 287 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeaf::
# 292 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 293 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 294 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 295 "data//maps/GrandmasCabin/scripts.pory"
	playbgm MUS_HELP, TRUE
# 296 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_0, MSGBOX_DEFAULT
# 297 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 298 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 300 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush1
# 301 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 303 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 304 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf7, MSGBOX_DEFAULT
# 305 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 306 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 308 "data//maps/GrandmasCabin/scripts.pory"
	switch VAR_TEMP_5
# 309 "data//maps/GrandmasCabin/scripts.pory"
	case 0, GrandmasCabin_Script_SaveLeaf_3
# 312 "data//maps/GrandmasCabin/scripts.pory"
	case 1, GrandmasCabin_Script_SaveLeaf_4
# 315 "data//maps/GrandmasCabin/scripts.pory"
	case 2, GrandmasCabin_Script_SaveLeaf_5
# 318 "data//maps/GrandmasCabin/scripts.pory"
	case 3, GrandmasCabin_Script_SaveLeaf_6
# 322 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_2, MSGBOX_DEFAULT
# 323 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
GrandmasCabin_Script_SaveLeaf_1:
# 327 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 328 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 329 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 1
# 330 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 2, 31
# 331 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 332 "data//maps/GrandmasCabin/scripts.pory"
	addobject 1
# 333 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 1, MAP_GRANDMAS_CABIN
# 335 "data//maps/GrandmasCabin/scripts.pory"
	delay 69
# 337 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 338 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 1, GrandmasCabin_Movement_EeveeEnter
# 339 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 341 "data//maps/GrandmasCabin/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_ENCOUNTER
# 342 "data//maps/GrandmasCabin/scripts.pory"
	waitmoncry
# 344 "data//maps/GrandmasCabin/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE, gender = MON_MALE, move1 = MOVE_TACKLE, move2 = MOVE_TAIL_WHIP, move3 = MOVE_SAND_ATTACK, move4 = MOVE_HELPING_HAND
# 345 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 347 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Eevee, MSGBOX_DEFAULT
# 348 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 350 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 351 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 353 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 354 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf8, MSGBOX_DEFAULT
# 355 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 356 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 358 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 359 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 360 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 362 "data//maps/GrandmasCabin/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_ENCOUNTER
# 363 "data//maps/GrandmasCabin/scripts.pory"
	waitmoncry
# 366 "data//maps/GrandmasCabin/scripts.pory"
	setwildbattle SPECIES_RATTATA, 3
# 368 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_FORCE_EEVEE_SLIDE_IN
# 369 "data//maps/GrandmasCabin/scripts.pory"
	playbgm MUS_LITTLEROOT, TRUE
# 370 "data//maps/GrandmasCabin/scripts.pory"
	dowildbattle
# 373 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_FORCE_EEVEE_SLIDE_IN
# 375 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 376 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 377 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
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
# 396 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_EndHideAndSeekA
# 397 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_EndHideAndSeekA
# 398 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 1, GrandmasCabin_Movement_EndHideAndSeekA
# 399 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 401 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 402 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 403 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 405 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_EndHideAndSeekB
# 406 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 1, GrandmasCabin_Movement_EndHideAndSeekB
# 407 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_EndHideAndSeekB
# 408 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 410 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 5
# 413 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 414 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 415 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 416 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 419 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 30, 190, 98
# 420 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Granny1, MSGBOX_DEFAULT
# 421 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 30
# 422 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 424 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_LeafExitA
# 425 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 426 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 427 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 428 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 429 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf10, MSGBOX_DEFAULT
# 430 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 431 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 433 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 435 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_LeafExitB
# 436 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 438 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 30, 190, 98
# 439 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Granny2, MSGBOX_DEFAULT
# 440 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 30
# 441 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 443 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 6
# 444 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 446 "data//maps/GrandmasCabin/scripts.pory"
	warpsilent MAP_LOONIX_INSIDE_REAL, 4, 8
# 448 "data//maps/GrandmasCabin/scripts.pory"
	releaseall
	end

GrandmasCabin_Script_SaveLeaf_3:
# 310 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_1, MSGBOX_DEFAULT
# 311 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_4:
# 313 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2A
# 314 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_5:
# 316 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2B
# 317 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_6:
# 319 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2C
# 320 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1


GrandmasCabin_Script_GameOver::
# 453 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 454 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_GameOver_Text_0, MSGBOX_DEFAULT
# 456 "data//maps/GrandmasCabin/scripts.pory"
	release
	end


# 460 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_BeginHideAndSeek:
# 461 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 461 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 462 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 462 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 462 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 462 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 463 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 463 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 463 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 463 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 463 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 463 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 464 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 464 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 464 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 464 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 464 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 465 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 465 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 465 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 465 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 465 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 465 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 465 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 465 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 466 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 466 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

# 469 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush1:
# 470 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 470 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 470 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 473 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2A:
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 474 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 475 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 476 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 479 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2B:
# 480 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 480 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 480 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 483 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2C:
# 484 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 484 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 484 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 485 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 486 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 489 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EeveeEnter:
# 490 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 490 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 490 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 490 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 490 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 490 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 490 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 490 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

# 493 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EndHideAndSeekA:
# 494 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 494 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 494 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 494 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 494 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 494 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 494 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 494 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 494 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 494 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 495 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 495 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 495 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 495 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 495 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 495 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 495 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 495 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 495 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 498 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EndHideAndSeekB:
# 499 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 499 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 499 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 499 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 499 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 499 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 500 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 500 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 500 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 500 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 500 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 501 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 501 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 501 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 502 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 505 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_LeafExitA:
# 506 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 507 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 507 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 508 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 511 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_LeafExitB:
# 512 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 512 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 512 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 512 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 512 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 512 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 512 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 512 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

GrandmasCabin_Script_AvoidGrass_Text_0:
# 199 "data//maps/GrandmasCabin/scripts.pory"
	.string "ERROR$"

GrandmasCabin_Script_SaveLeaf_Text_0:
# 296 "data//maps/GrandmasCabin/scripts.pory"
	.string "Help!$"

GrandmasCabin_Script_SaveLeaf_Text_1:
# 310 "data//maps/GrandmasCabin/scripts.pory"
	.string "VAR_TEMP_5 = 0$"

GrandmasCabin_Script_SaveLeaf_Text_2:
# 322 "data//maps/GrandmasCabin/scripts.pory"
	.string "VAR_TEMP_5 = OOB$"

GrandmasCabin_Script_GameOver_Text_0:
# 454 "data//maps/GrandmasCabin/scripts.pory"
	.string "GAME OVER$"

GrandmasCabin_Text_Eevee::
# 515 "data//maps/GrandmasCabin/scripts.pory"
	.string "It's your dad's old Pokemon, Eevee. He's\n"
	.string "looking at you with an unwavering\l"
	.string "intensity.$"

GrandmasCabin_Text_Leaf1::
# 519 "data//maps/GrandmasCabin/scripts.pory"
	.string "Hi {PLAYER}! C'mon lets go play Hide\n"
	.string "and Seek!$"

GrandmasCabin_Text_Leaf2::
# 523 "data//maps/GrandmasCabin/scripts.pory"
	.string "I'll go hide first. Close your eyes for a\n"
	.string "sec.$"

GrandmasCabin_Text_Leaf3::
# 527 "data//maps/GrandmasCabin/scripts.pory"
	.string "You found me! No! Now it's your turn to\n"
	.string "hide.$"

GrandmasCabin_Text_Leaf4::
# 531 "data//maps/GrandmasCabin/scripts.pory"
	.string "Go find somewhere to hide. I'll close my\n"
	.string "eyes!$"

GrandmasCabin_Text_Leaf5::
# 535 "data//maps/GrandmasCabin/scripts.pory"
	.string "Ready or not, watch out {PLAYER}!\n"
	.string "Here I come!$"

GrandmasCabin_Text_Leaf6::
# 539 "data//maps/GrandmasCabin/scripts.pory"
	.string "Haha! I found you, now it's my turn.\n"
	.string "Close your eyes!$"

GrandmasCabin_Text_Leaf7::
# 543 "data//maps/GrandmasCabin/scripts.pory"
	.string "Please help me, {PLAYER}! I'm scared\n"
	.string "of Rattata!$"

GrandmasCabin_Text_AvoidGrass::
# 547 "data//maps/GrandmasCabin/scripts.pory"
	.string "Keep your distance from the tall\n"
	.string "grass...$"

GrandmasCabin_Text_StayHideAndSeek::
# 551 "data//maps/GrandmasCabin/scripts.pory"
	.string "I shouldn't leave {LEAF} behind...$"

GrandmasCabin_Text_HideAndSeek::
# 555 "data//maps/GrandmasCabin/scripts.pory"
	.string "Ready or not, here I come!$"

GrandmasCabin_Text_Leaf8::
# 559 "data//maps/GrandmasCabin/scripts.pory"
	.string "Do it! Eevee and I believe in you.$"

GrandmasCabin_Text_Leaf9::
# 563 "data//maps/GrandmasCabin/scripts.pory"
	.string "That was so scary! {PLAYER} you are\n"
	.string "so brave. I can't believe how strong\l"
	.string "your connection with Eevee is. Now let's\l"
	.string "get out of here.$"

GrandmasCabin_Text_Granny1::
# 567 "data//maps/GrandmasCabin/scripts.pory"
	.string "What's going on? Why did Eevee run off?\n"
	.string "Where have you been? Oh God!\l"
	.string "{PLAYER} are you hurt? I told you to\l"
	.string "stay out of the tall grass!$"

GrandmasCabin_Text_Leaf10::
# 571 "data//maps/GrandmasCabin/scripts.pory"
	.string "Think I should go...sorry...See you\n"
	.string "around.$"

GrandmasCabin_Text_Granny2::
# 575 "data//maps/GrandmasCabin/scripts.pory"
	.string "March your behind inside! Let's have a\n"
	.string "chat...$"
