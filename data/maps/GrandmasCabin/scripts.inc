GrandmasCabin_MapScripts::
# 12 "data/maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 33 "data/maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME
# 39 "data/maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/GrandmasCabin/scripts.pory"
	switch VAR_GRANNY_STATE
# 14 "data/maps/GrandmasCabin/scripts.pory"
	case 0, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data/maps/GrandmasCabin/scripts.pory"
	case 1, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/GrandmasCabin/scripts.pory"
	case 2, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 18 "data/maps/GrandmasCabin/scripts.pory"
	case 3, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 20 "data/maps/GrandmasCabin/scripts.pory"
	case 4, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 22 "data/maps/GrandmasCabin/scripts.pory"
	case 5, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 24 "data/maps/GrandmasCabin/scripts.pory"
	case 10, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 25 "data/maps/GrandmasCabin/scripts.pory"
	case 11, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 28 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_HideAll
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf1
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 19 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf2
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf3
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 23 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowGranny
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 26 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowStorm
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME:
# 34 "data/maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_FORCE_EEVEE_SLIDE_IN, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 35 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_TryRemoveRattata
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 40 "data/maps/GrandmasCabin/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 2, GrandmasCabin_Script_LeafGame1
	.2byte 0


GrandmasCabin_Script_HideAll::
# 46 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 19, 0
# 47 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 49 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 18, 0
# 50 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 52 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 17, 0
# 53 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 55 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 2, 16, 0
# 56 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 58 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 5, 15, 0
# 59 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
	return


GrandmasCabin_Script_ShowLeaf1::
# 66 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 5, 6
# 67 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
# 69 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 10, 14
# 70 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	return


GrandmasCabin_Script_ShowLeaf2::
# 76 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 16, 28
# 77 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
	return


GrandmasCabin_Script_ShowLeaf3::
# 83 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 10, 30
# 84 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 86 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 5, 11, 30
# 87 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


GrandmasCabin_Script_ShowGranny::
# 93 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 10, 14
# 94 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	return


GrandmasCabin_Script_ShowStorm::
# 100 "data/maps/GrandmasCabin/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 101 "data/maps/GrandmasCabin/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return


GrandmasCabin_Script_TryRemoveRattata::
# 107 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 5
	return


GrandmasCabin_Script_Eevee::
# 112 "data/maps/GrandmasCabin/scripts.pory"
	lock
# 113 "data/maps/GrandmasCabin/scripts.pory"
	faceplayer
# 114 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Eevee, MSGBOX_DEFAULT
# 115 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 116 "data/maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_Leaf::
# 121 "data/maps/GrandmasCabin/scripts.pory"
	lock
# 122 "data/maps/GrandmasCabin/scripts.pory"
	faceplayer
# 124 "data/maps/GrandmasCabin/scripts.pory"
	goto_if_unset FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_Leaf_2
# 130 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf4, MSGBOX_DEFAULT
GrandmasCabin_Script_Leaf_1:
# 132 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 134 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 135 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 137 "data/maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_Leaf_2:
# 125 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_LEAF_HIDEANDSEEK_FOUND
# 126 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 127 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 128 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf3, MSGBOX_DEFAULT
	goto GrandmasCabin_Script_Leaf_1


GrandmasCabin_Script_LeafGame1::
# 143 "data/maps/GrandmasCabin/scripts.pory"
	lockall
# 145 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 3
# 147 "data/maps/GrandmasCabin/scripts.pory"
	setspeaker SP_NAME_LEAF
# 148 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf1, MSGBOX_DEFAULT
# 149 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 151 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_BeginHideAndSeek
# 152 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_BeginHideAndSeek
# 153 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 155 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 156 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 157 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 159 "data/maps/GrandmasCabin/scripts.pory"
	setspeaker SP_NAME_LEAF
# 160 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf2, MSGBOX_DEFAULT
# 161 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 163 "data/maps/GrandmasCabin/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 164 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 165 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf2
# 166 "data/maps/GrandmasCabin/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 168 "data/maps/GrandmasCabin/scripts.pory"
	releaseall
	end


GrandmasCabin_Script_Mew::
# 173 "data/maps/GrandmasCabin/scripts.pory"
	lock
# 175 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 176 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 178 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_HideAll
# 180 "data/maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_AvoidGrass::
# 185 "data/maps/GrandmasCabin/scripts.pory"
	lock
# 186 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_AvoidGrass, MSGBOX_DEFAULT
# 187 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 188 "data/maps/GrandmasCabin/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 189 "data/maps/GrandmasCabin/scripts.pory"
	switch VAR_RESULT
# 190 "data/maps/GrandmasCabin/scripts.pory"
	case DIR_SOUTH, GrandmasCabin_Script_AvoidGrass_3
# 192 "data/maps/GrandmasCabin/scripts.pory"
	case DIR_NORTH, GrandmasCabin_Script_AvoidGrass_4
# 194 "data/maps/GrandmasCabin/scripts.pory"
	case DIR_EAST, GrandmasCabin_Script_AvoidGrass_5
# 196 "data/maps/GrandmasCabin/scripts.pory"
	case DIR_WEST, GrandmasCabin_Script_AvoidGrass_6
# 199 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 200 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_AvoidGrass_Text_0, MSGBOX_DEFAULT
# 201 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
GrandmasCabin_Script_AvoidGrass_1:
# 203 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 204 "data/maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_AvoidGrass_3:
# 191 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_4:
# 193 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_5:
# 195 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_6:
# 197 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	goto GrandmasCabin_Script_AvoidGrass_1


GrandmasCabin_Script_StayHideAndSeek::
# 209 "data/maps/GrandmasCabin/scripts.pory"
	lock
# 210 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_StayHideAndSeek, MSGBOX_DEFAULT
# 211 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 212 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 213 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 214 "data/maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_TryContinueHideAndSeekA::
# 219 "data/maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_TryContinueHideAndSeekA_2
GrandmasCabin_Script_TryContinueHideAndSeekA_1:
# 224 "data/maps/GrandmasCabin/scripts.pory"
	release
	return

GrandmasCabin_Script_TryContinueHideAndSeekA_2:
# 220 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_TEMP_5
# 221 "data/maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_TEMP_6
# 222 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ContinueHideAndSeek
	goto GrandmasCabin_Script_TryContinueHideAndSeekA_1


GrandmasCabin_Script_TryContinueHideAndSeekB::
# 228 "data/maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_TryContinueHideAndSeekB_2
GrandmasCabin_Script_TryContinueHideAndSeekB_1:
# 233 "data/maps/GrandmasCabin/scripts.pory"
	release
	return

GrandmasCabin_Script_TryContinueHideAndSeekB_2:
# 229 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_TEMP_6
# 230 "data/maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_TEMP_5
# 231 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ContinueHideAndSeek
	goto GrandmasCabin_Script_TryContinueHideAndSeekB_1


GrandmasCabin_Script_ContinueHideAndSeek::
# 237 "data/maps/GrandmasCabin/scripts.pory"
	lock
# 238 "data/maps/GrandmasCabin/scripts.pory"
	playse SE_PIN
# 239 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 240 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 241 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf5, MSGBOX_DEFAULT
# 242 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 244 "data/maps/GrandmasCabin/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 245 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 246 "data/maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_TEMP_5, GrandmasCabin_Script_ContinueHideAndSeek_2
# 250 "data/maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_TEMP_6, GrandmasCabin_Script_ContinueHideAndSeek_3
# 255 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 5, 39
# 256 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 257 "data/maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
GrandmasCabin_Script_ContinueHideAndSeek_1:
# 259 "data/maps/GrandmasCabin/scripts.pory"
	addobject 3
# 260 "data/maps/GrandmasCabin/scripts.pory"
	showobjectat 3, MAP_GRANDMAS_CABIN
# 261 "data/maps/GrandmasCabin/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 263 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf6, MSGBOX_DEFAULT
# 264 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 266 "data/maps/GrandmasCabin/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 267 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 268 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf3
# 269 "data/maps/GrandmasCabin/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 271 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 4
# 272 "data/maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_ContinueHideAndSeek_2:
# 247 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 7, 39
# 248 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 249 "data/maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto GrandmasCabin_Script_ContinueHideAndSeek_1

GrandmasCabin_Script_ContinueHideAndSeek_3:
# 251 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 6, 39
# 252 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 253 "data/maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto GrandmasCabin_Script_ContinueHideAndSeek_1


GrandmasCabin_Script_SaveLeafA::
# 277 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 1
# 278 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeafB::
# 282 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 2
# 283 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeafC::
# 287 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 3
# 288 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeaf::
# 293 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 294 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 295 "data/maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 296 "data/maps/GrandmasCabin/scripts.pory"
	playbgm MUS_HELP, TRUE
# 297 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_0, MSGBOX_DEFAULT
# 298 "data/maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 299 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 301 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush1
# 302 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 304 "data/maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 305 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf7, MSGBOX_DEFAULT
# 306 "data/maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 307 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 309 "data/maps/GrandmasCabin/scripts.pory"
	switch VAR_TEMP_5
# 310 "data/maps/GrandmasCabin/scripts.pory"
	case 0, GrandmasCabin_Script_SaveLeaf_3
# 313 "data/maps/GrandmasCabin/scripts.pory"
	case 1, GrandmasCabin_Script_SaveLeaf_4
# 316 "data/maps/GrandmasCabin/scripts.pory"
	case 2, GrandmasCabin_Script_SaveLeaf_5
# 319 "data/maps/GrandmasCabin/scripts.pory"
	case 3, GrandmasCabin_Script_SaveLeaf_6
# 323 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_2, MSGBOX_DEFAULT
# 324 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
GrandmasCabin_Script_SaveLeaf_1:
# 328 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 329 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 330 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 1
# 331 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 2, 31
# 332 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 333 "data/maps/GrandmasCabin/scripts.pory"
	addobject 1
# 334 "data/maps/GrandmasCabin/scripts.pory"
	showobjectat 1, MAP_GRANDMAS_CABIN
# 336 "data/maps/GrandmasCabin/scripts.pory"
	delay 69
# 338 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 339 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 1, GrandmasCabin_Movement_EeveeEnter
# 340 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 342 "data/maps/GrandmasCabin/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_ENCOUNTER
# 343 "data/maps/GrandmasCabin/scripts.pory"
	waitmoncry
# 345 "data/maps/GrandmasCabin/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE, gender = MON_MALE, move1 = MOVE_TACKLE, move2 = MOVE_TAIL_WHIP, move3 = MOVE_SAND_ATTACK, move4 = MOVE_HELPING_HAND
# 346 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 348 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Eevee, MSGBOX_DEFAULT
# 349 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 351 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 352 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 354 "data/maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 355 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf8, MSGBOX_DEFAULT
# 356 "data/maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 357 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 359 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 360 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 361 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 363 "data/maps/GrandmasCabin/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_ENCOUNTER
# 364 "data/maps/GrandmasCabin/scripts.pory"
	waitmoncry
# 367 "data/maps/GrandmasCabin/scripts.pory"
	setwildbattle SPECIES_RATTATA, 3
# 369 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_FORCE_EEVEE_SLIDE_IN
# 370 "data/maps/GrandmasCabin/scripts.pory"
	playbgm MUS_LITTLEROOT, TRUE
# 371 "data/maps/GrandmasCabin/scripts.pory"
	dowildbattle
# 374 "data/maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_FORCE_EEVEE_SLIDE_IN
# 376 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 377 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 378 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 380 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 381 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 382 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 383 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 385 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf9, MSGBOX_DEFAULT
# 386 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 389 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 4
# 390 "data/maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 10, 14
# 391 "data/maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 392 "data/maps/GrandmasCabin/scripts.pory"
	addobject 4
# 393 "data/maps/GrandmasCabin/scripts.pory"
	showobjectat 3, MAP_GRANDMAS_CABIN
# 397 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_EndHideAndSeekA
# 398 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_EndHideAndSeekA
# 399 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 1, GrandmasCabin_Movement_EndHideAndSeekA
# 400 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 402 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 403 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 404 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 406 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_EndHideAndSeekB
# 407 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 1, GrandmasCabin_Movement_EndHideAndSeekB
# 408 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_EndHideAndSeekB
# 409 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 411 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 5
# 414 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 415 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 416 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 417 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 420 "data/maps/GrandmasCabin/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 421 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Granny1, MSGBOX_DEFAULT
# 422 "data/maps/GrandmasCabin/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 423 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 425 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_LeafExitA
# 426 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 427 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 428 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 429 "data/maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 430 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf10, MSGBOX_DEFAULT
# 431 "data/maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 432 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 434 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 436 "data/maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_LeafExitB
# 437 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 439 "data/maps/GrandmasCabin/scripts.pory"
	load_field_pic FIELD_PIC_GRANNY, 190, 98
# 440 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Granny2, MSGBOX_DEFAULT
# 441 "data/maps/GrandmasCabin/scripts.pory"
	destroy_field_pic FIELD_PIC_GRANNY
# 442 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
# 444 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 6
# 445 "data/maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 447 "data/maps/GrandmasCabin/scripts.pory"
	warpsilent MAP_LOONIX_INSIDE_REAL, 4, 8
# 449 "data/maps/GrandmasCabin/scripts.pory"
	releaseall
	end

GrandmasCabin_Script_SaveLeaf_3:
# 311 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_1, MSGBOX_DEFAULT
# 312 "data/maps/GrandmasCabin/scripts.pory"
	closemessage
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_4:
# 314 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2A
# 315 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_5:
# 317 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2B
# 318 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_6:
# 320 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2C
# 321 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1


GrandmasCabin_Script_GameOver::
# 454 "data/maps/GrandmasCabin/scripts.pory"
	lock
# 455 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_GameOver_Text_0, MSGBOX_DEFAULT
# 457 "data/maps/GrandmasCabin/scripts.pory"
	release
	end


# 461 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_BeginHideAndSeek:
# 462 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 462 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 463 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 463 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 463 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 463 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 464 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 464 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 464 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 464 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 464 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 464 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 465 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 465 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 465 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 465 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 465 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 466 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 466 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 466 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 466 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 466 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 466 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 466 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 466 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 467 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 467 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

# 470 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush1:
# 471 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 471 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 471 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 474 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2A:
# 475 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 475 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 475 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 476 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 477 "data/maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 480 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2B:
# 481 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 481 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 481 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 484 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2C:
# 485 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 485 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 485 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 486 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 487 "data/maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 490 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EeveeEnter:
# 491 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 491 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 491 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 491 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 491 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 491 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 491 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 491 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

# 494 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EndHideAndSeekA:
# 495 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 495 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 495 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 495 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 495 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 495 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 495 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 495 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 495 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 495 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 496 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 496 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 496 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 496 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 496 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 496 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 496 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 496 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 496 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 499 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EndHideAndSeekB:
# 500 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 500 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 500 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 500 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 500 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 500 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 501 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 501 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 501 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 501 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 501 "data/maps/GrandmasCabin/scripts.pory"
	walk_up
# 502 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 502 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 502 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 503 "data/maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 506 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_LeafExitA:
# 507 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
# 508 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 508 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 509 "data/maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 512 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_LeafExitB:
# 513 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 513 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 513 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 513 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 513 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 513 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 513 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 513 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

GrandmasCabin_Script_AvoidGrass_Text_0:
# 200 "data/maps/GrandmasCabin/scripts.pory"
	.string "ERROR$"

GrandmasCabin_Script_SaveLeaf_Text_0:
# 297 "data/maps/GrandmasCabin/scripts.pory"
	.string "Help!$"

GrandmasCabin_Script_SaveLeaf_Text_1:
# 311 "data/maps/GrandmasCabin/scripts.pory"
	.string "VAR_TEMP_5 = 0$"

GrandmasCabin_Script_SaveLeaf_Text_2:
# 323 "data/maps/GrandmasCabin/scripts.pory"
	.string "VAR_TEMP_5 = OOB$"

GrandmasCabin_Script_GameOver_Text_0:
# 455 "data/maps/GrandmasCabin/scripts.pory"
	.string "GAME OVER$"

GrandmasCabin_Text_Eevee::
# 516 "data/maps/GrandmasCabin/scripts.pory"
	.string "It's your dad's old Pokemon, Eevee. He's\n"
	.string "looking at you with an unwavering\l"
	.string "intensity.$"

GrandmasCabin_Text_Leaf1::
# 520 "data/maps/GrandmasCabin/scripts.pory"
	.string "Hi {PLAYER}! C'mon lets go play Hide\n"
	.string "and Seek!$"

GrandmasCabin_Text_Leaf2::
# 524 "data/maps/GrandmasCabin/scripts.pory"
	.string "I'll go hide first. Close your eyes for a\n"
	.string "sec.$"

GrandmasCabin_Text_Leaf3::
# 528 "data/maps/GrandmasCabin/scripts.pory"
	.string "You found me! No! Now it's your turn to\n"
	.string "hide.$"

GrandmasCabin_Text_Leaf4::
# 532 "data/maps/GrandmasCabin/scripts.pory"
	.string "Go find somewhere to hide. I'll close my\n"
	.string "eyes!$"

GrandmasCabin_Text_Leaf5::
# 536 "data/maps/GrandmasCabin/scripts.pory"
	.string "Ready or not, watch out {PLAYER}!\n"
	.string "Here I come!$"

GrandmasCabin_Text_Leaf6::
# 540 "data/maps/GrandmasCabin/scripts.pory"
	.string "Haha! I found you, now it's my turn.\n"
	.string "Close your eyes!$"

GrandmasCabin_Text_Leaf7::
# 544 "data/maps/GrandmasCabin/scripts.pory"
	.string "Please help me, {PLAYER}! I'm scared\n"
	.string "of Rattata!$"

GrandmasCabin_Text_AvoidGrass::
# 548 "data/maps/GrandmasCabin/scripts.pory"
	.string "Keep your distance from the tall\n"
	.string "grass...$"

GrandmasCabin_Text_StayHideAndSeek::
# 552 "data/maps/GrandmasCabin/scripts.pory"
	.string "I shouldn't leave {LEAF} behind...$"

GrandmasCabin_Text_HideAndSeek::
# 556 "data/maps/GrandmasCabin/scripts.pory"
	.string "Ready or not, here I come!$"

GrandmasCabin_Text_Leaf8::
# 560 "data/maps/GrandmasCabin/scripts.pory"
	.string "Do it! Eevee and I believe in you.$"

GrandmasCabin_Text_Leaf9::
# 564 "data/maps/GrandmasCabin/scripts.pory"
	.string "That was so scary! {PLAYER} you are\n"
	.string "so brave. I can't believe how strong\l"
	.string "your connection with Eevee is. Now let's\l"
	.string "get out of here.$"

GrandmasCabin_Text_Granny1::
# 568 "data/maps/GrandmasCabin/scripts.pory"
	.string "What's going on? Why did Eevee run off?\n"
	.string "Where have you been? Oh God!\l"
	.string "{PLAYER} are you hurt? I told you to\l"
	.string "stay out of the tall grass!$"

GrandmasCabin_Text_Leaf10::
# 572 "data/maps/GrandmasCabin/scripts.pory"
	.string "Think I should go...sorry...See you\n"
	.string "around.$"

GrandmasCabin_Text_Granny2::
# 576 "data/maps/GrandmasCabin/scripts.pory"
	.string "March your behind inside! Let's have a\n"
	.string "chat...$"
