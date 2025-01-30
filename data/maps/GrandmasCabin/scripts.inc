GrandmasCabin_MapScripts::
# 13 "data//maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 33 "data//maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME
# 39 "data//maps/GrandmasCabin/scripts.pory"
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
# 28 "data//maps/GrandmasCabin/scripts.pory"
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
# 26 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowStorm
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME:
# 34 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 35 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_TryRemoveRattata
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 40 "data//maps/GrandmasCabin/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 2, GrandmasCabin_Script_LeafGame1
	.2byte 0


GrandmasCabin_Script_HideAll::
# 46 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 19, 0
# 47 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 49 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 18, 0
# 50 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 52 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 17, 0
# 53 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 55 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 2, 16, 0
# 56 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 58 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 5, 15, 0
# 59 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
	return


GrandmasCabin_Script_ShowLeaf1::
# 66 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 5, 6
# 67 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
# 69 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 10, 14
# 70 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	return


GrandmasCabin_Script_ShowLeaf2::
# 76 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 16, 28
# 77 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
	return


GrandmasCabin_Script_ShowLeaf3::
# 83 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 10, 30
# 84 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 86 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 5, 11, 30
# 87 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


GrandmasCabin_Script_ShowGranny::
# 93 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 10, 14
# 94 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	return


GrandmasCabin_Script_ShowStorm::
# 100 "data//maps/GrandmasCabin/scripts.pory"
	setweather WEATHER_DOWNPOUR
	return


GrandmasCabin_Script_TryRemoveRattata::
# 106 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 5
	return


GrandmasCabin_Script_Eevee::
# 111 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 112 "data//maps/GrandmasCabin/scripts.pory"
	faceplayer
# 113 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Eevee, MSGBOX_DEFAULT
# 114 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 115 "data//maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_Leaf::
# 120 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 121 "data//maps/GrandmasCabin/scripts.pory"
	faceplayer
# 123 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_unset FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_Leaf_2
# 129 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf4, MSGBOX_DEFAULT
GrandmasCabin_Script_Leaf_1:
# 131 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 133 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 134 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 136 "data//maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_Leaf_2:
# 124 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_LEAF_HIDEANDSEEK_FOUND
# 125 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 126 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 127 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf3, MSGBOX_DEFAULT
	goto GrandmasCabin_Script_Leaf_1


GrandmasCabin_Script_LeafGame1::
# 142 "data//maps/GrandmasCabin/scripts.pory"
	lockall
# 144 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 3
# 146 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf1, MSGBOX_DEFAULT
# 147 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 149 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_BeginHideAndSeek
# 150 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_BeginHideAndSeek
# 151 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 153 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 154 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 155 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 157 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf2, MSGBOX_DEFAULT
# 158 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 160 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 161 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 162 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf2
# 163 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 165 "data//maps/GrandmasCabin/scripts.pory"
	releaseall
	end


GrandmasCabin_Script_Mew::
# 170 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 172 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 173 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 175 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_HideAll
# 177 "data//maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_AvoidGrass::
# 182 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 183 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_AvoidGrass, MSGBOX_DEFAULT
# 184 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 185 "data//maps/GrandmasCabin/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 186 "data//maps/GrandmasCabin/scripts.pory"
	switch VAR_RESULT
# 187 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_SOUTH, GrandmasCabin_Script_AvoidGrass_3
# 189 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_NORTH, GrandmasCabin_Script_AvoidGrass_4
# 191 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_EAST, GrandmasCabin_Script_AvoidGrass_5
# 193 "data//maps/GrandmasCabin/scripts.pory"
	case DIR_WEST, GrandmasCabin_Script_AvoidGrass_6
# 196 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 197 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_AvoidGrass_Text_0, MSGBOX_DEFAULT
# 198 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
GrandmasCabin_Script_AvoidGrass_1:
# 200 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 201 "data//maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_AvoidGrass_3:
# 188 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_4:
# 190 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_5:
# 192 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	goto GrandmasCabin_Script_AvoidGrass_1

GrandmasCabin_Script_AvoidGrass_6:
# 194 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	goto GrandmasCabin_Script_AvoidGrass_1


GrandmasCabin_Script_StayHideAndSeek::
# 206 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 207 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_StayHideAndSeek, MSGBOX_DEFAULT
# 208 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 209 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 210 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 211 "data//maps/GrandmasCabin/scripts.pory"
	release
	end


GrandmasCabin_Script_TryContinueHideAndSeekA::
# 216 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_TryContinueHideAndSeekA_2
GrandmasCabin_Script_TryContinueHideAndSeekA_1:
# 221 "data//maps/GrandmasCabin/scripts.pory"
	release
	return

GrandmasCabin_Script_TryContinueHideAndSeekA_2:
# 217 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_TEMP_5
# 218 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_TEMP_6
# 219 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ContinueHideAndSeek
	goto GrandmasCabin_Script_TryContinueHideAndSeekA_1


GrandmasCabin_Script_TryContinueHideAndSeekB::
# 225 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_LEAF_HIDEANDSEEK_FOUND, GrandmasCabin_Script_TryContinueHideAndSeekB_2
GrandmasCabin_Script_TryContinueHideAndSeekB_1:
# 230 "data//maps/GrandmasCabin/scripts.pory"
	release
	return

GrandmasCabin_Script_TryContinueHideAndSeekB_2:
# 226 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_TEMP_6
# 227 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_TEMP_5
# 228 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ContinueHideAndSeek
	goto GrandmasCabin_Script_TryContinueHideAndSeekB_1


GrandmasCabin_Script_ContinueHideAndSeek::
# 234 "data//maps/GrandmasCabin/scripts.pory"
	lock
# 235 "data//maps/GrandmasCabin/scripts.pory"
	playse SE_EFFECTIVE
# 236 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf5, MSGBOX_DEFAULT
# 237 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 239 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 240 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 241 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_TEMP_5, GrandmasCabin_Script_ContinueHideAndSeek_2
# 245 "data//maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_TEMP_6, GrandmasCabin_Script_ContinueHideAndSeek_3
# 250 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 5, 39
# 251 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 252 "data//maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
GrandmasCabin_Script_ContinueHideAndSeek_1:
# 254 "data//maps/GrandmasCabin/scripts.pory"
	addobject 3
# 255 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 3, MAP_GRANDMAS_CABIN
# 256 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 258 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf6, MSGBOX_DEFAULT
# 259 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 261 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_TO_BLACK
# 262 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 3
# 263 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_ShowLeaf3
# 264 "data//maps/GrandmasCabin/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 266 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 4
# 267 "data//maps/GrandmasCabin/scripts.pory"
	release
	end

GrandmasCabin_Script_ContinueHideAndSeek_2:
# 242 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 7, 39
# 243 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 244 "data//maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto GrandmasCabin_Script_ContinueHideAndSeek_1

GrandmasCabin_Script_ContinueHideAndSeek_3:
# 246 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 3, 6, 39
# 247 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 248 "data//maps/GrandmasCabin/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto GrandmasCabin_Script_ContinueHideAndSeek_1


GrandmasCabin_Script_SaveLeafA::
# 272 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 1
# 273 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeafB::
# 277 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 2
# 278 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeafC::
# 282 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_TEMP_5, 3
# 283 "data//maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_Script_SaveLeaf
	return


GrandmasCabin_Script_SaveLeaf::
# 288 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 289 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 290 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 291 "data//maps/GrandmasCabin/scripts.pory"
	playbgm MUS_HELP, TRUE
# 292 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_0, MSGBOX_DEFAULT
# 293 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 294 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 296 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush1
# 297 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 299 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 300 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf7, MSGBOX_DEFAULT
# 301 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 302 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 304 "data//maps/GrandmasCabin/scripts.pory"
	switch VAR_TEMP_5
# 305 "data//maps/GrandmasCabin/scripts.pory"
	case 0, GrandmasCabin_Script_SaveLeaf_3
# 308 "data//maps/GrandmasCabin/scripts.pory"
	case 1, GrandmasCabin_Script_SaveLeaf_4
# 311 "data//maps/GrandmasCabin/scripts.pory"
	case 2, GrandmasCabin_Script_SaveLeaf_5
# 314 "data//maps/GrandmasCabin/scripts.pory"
	case 3, GrandmasCabin_Script_SaveLeaf_6
# 318 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_2, MSGBOX_DEFAULT
# 319 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
GrandmasCabin_Script_SaveLeaf_1:
# 323 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 324 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 325 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 1
# 326 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 2, 31
# 327 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 328 "data//maps/GrandmasCabin/scripts.pory"
	addobject 1
# 329 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 1, MAP_GRANDMAS_CABIN
# 331 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 332 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 1, GrandmasCabin_Movement_EeveeEnter
# 333 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 335 "data//maps/GrandmasCabin/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_ENCOUNTER
# 336 "data//maps/GrandmasCabin/scripts.pory"
	waitmoncry
# 338 "data//maps/GrandmasCabin/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 339 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 341 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Eevee, MSGBOX_DEFAULT
# 342 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 344 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 345 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 347 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 348 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf8, MSGBOX_DEFAULT
# 349 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 350 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 352 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 353 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 355 "data//maps/GrandmasCabin/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_ENCOUNTER
# 356 "data//maps/GrandmasCabin/scripts.pory"
	waitmoncry
# 359 "data//maps/GrandmasCabin/scripts.pory"
	setwildbattle SPECIES_RATTATA, 3
# 360 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 361 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_FORCE_EEVEE_SLIDE_IN
# 362 "data//maps/GrandmasCabin/scripts.pory"
	dowildbattle
# 363 "data//maps/GrandmasCabin/scripts.pory"
	playbgm MUS_LITTLEROOT, TRUE
# 364 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 365 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_FORCE_EEVEE_SLIDE_IN
# 367 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 368 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 369 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 372 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 1
# 373 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 1, 15, 0
# 374 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 375 "data//maps/GrandmasCabin/scripts.pory"
	addobject 1
# 376 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 1, MAP_GRANDMAS_CABIN
# 378 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 379 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 380 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 381 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 383 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf9, MSGBOX_DEFAULT
# 384 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 387 "data//maps/GrandmasCabin/scripts.pory"
	removeobject 4
# 388 "data//maps/GrandmasCabin/scripts.pory"
	setobjectxyperm 4, 10, 14
# 389 "data//maps/GrandmasCabin/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 390 "data//maps/GrandmasCabin/scripts.pory"
	addobject 4
# 391 "data//maps/GrandmasCabin/scripts.pory"
	showobjectat 3, MAP_GRANDMAS_CABIN
# 394 "data//maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 395 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_EndHideAndSeekA
# 396 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_EndHideAndSeekA
# 397 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 399 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 400 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 402 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_EndHideAndSeekB
# 403 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_EndHideAndSeekB
# 404 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 406 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 5
# 409 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 410 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 411 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 412 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 415 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 30, 190, 98
# 416 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Granny1, MSGBOX_DEFAULT
# 417 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 30
# 418 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 420 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_LeafExitA
# 421 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 422 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 423 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 424 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 4, 190, 98
# 425 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Leaf10, MSGBOX_DEFAULT
# 426 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 4
# 427 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 429 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 431 "data//maps/GrandmasCabin/scripts.pory"
	applymovement 3, GrandmasCabin_Movement_LeafExitB
# 432 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 434 "data//maps/GrandmasCabin/scripts.pory"
	load_field_pic 30, 190, 98
# 435 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Text_Granny2, MSGBOX_DEFAULT
# 436 "data//maps/GrandmasCabin/scripts.pory"
	destroy_field_pic 30
# 437 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
# 439 "data//maps/GrandmasCabin/scripts.pory"
	setvar VAR_GRANNY_STATE, 6
# 440 "data//maps/GrandmasCabin/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 442 "data//maps/GrandmasCabin/scripts.pory"
	warpsilent MAP_LOONIX_INSIDE_REAL, 4, 8
# 444 "data//maps/GrandmasCabin/scripts.pory"
	releaseall
	end

GrandmasCabin_Script_SaveLeaf_3:
# 306 "data//maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_Script_SaveLeaf_Text_1, MSGBOX_DEFAULT
# 307 "data//maps/GrandmasCabin/scripts.pory"
	closemessage
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_4:
# 309 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2A
# 310 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_5:
# 312 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2B
# 313 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1

GrandmasCabin_Script_SaveLeaf_6:
# 315 "data//maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GrandmasCabin_Movement_ApproachLeafAmbush2C
# 316 "data//maps/GrandmasCabin/scripts.pory"
	waitmovement 0
	goto GrandmasCabin_Script_SaveLeaf_1


# 448 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_BeginHideAndSeek:
# 449 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 449 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 450 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 450 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 450 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 450 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 451 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 451 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 451 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 451 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 451 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 451 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 452 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 452 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 452 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 452 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 452 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 453 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 453 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 453 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 453 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 453 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 453 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 453 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 453 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 454 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 454 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

# 457 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush1:
# 458 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 458 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 458 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 461 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2A:
# 462 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 462 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 462 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 463 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 464 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 467 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2B:
# 468 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 468 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 468 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 471 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_ApproachLeafAmbush2C:
# 472 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 472 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 472 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 473 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 474 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 477 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EeveeEnter:
# 478 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 478 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 478 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 478 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 478 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 478 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 478 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 478 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

# 481 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EndHideAndSeekA:
# 482 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 482 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 482 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 482 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 482 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 482 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 482 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 482 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 482 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 482 "data//maps/GrandmasCabin/scripts.pory"
	walk_left
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 483 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
	step_end

# 486 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_EndHideAndSeekB:
# 487 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 487 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 487 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 487 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 487 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 487 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 488 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 488 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 488 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 488 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 488 "data//maps/GrandmasCabin/scripts.pory"
	walk_up
# 489 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 489 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 489 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 490 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 493 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_LeafExitA:
# 494 "data//maps/GrandmasCabin/scripts.pory"
	walk_down
# 495 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 495 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 496 "data//maps/GrandmasCabin/scripts.pory"
	face_up
	step_end

# 499 "data//maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_LeafExitB:
# 500 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 500 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 500 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 500 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 500 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 500 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 500 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
# 500 "data//maps/GrandmasCabin/scripts.pory"
	walk_right
	step_end

GrandmasCabin_Script_AvoidGrass_Text_0:
# 197 "data//maps/GrandmasCabin/scripts.pory"
	.string "ERROR$"

GrandmasCabin_Script_SaveLeaf_Text_0:
# 292 "data//maps/GrandmasCabin/scripts.pory"
	.string "Help!$"

GrandmasCabin_Script_SaveLeaf_Text_1:
# 306 "data//maps/GrandmasCabin/scripts.pory"
	.string "VAR_TEMP_5 = 0$"

GrandmasCabin_Script_SaveLeaf_Text_2:
# 318 "data//maps/GrandmasCabin/scripts.pory"
	.string "VAR_TEMP_5 = OOB$"

GrandmasCabin_Text_Eevee::
# 503 "data//maps/GrandmasCabin/scripts.pory"
	.string "It's your dad's old Pokemon, Eevee. He's\n"
	.string "looking at you with an unwavering\l"
	.string "intensity.$"

GrandmasCabin_Text_Leaf1::
# 507 "data//maps/GrandmasCabin/scripts.pory"
	.string "Hi {PLAYER}! C'mon lets go play Hide\n"
	.string "and Seek!$"

GrandmasCabin_Text_Leaf2::
# 511 "data//maps/GrandmasCabin/scripts.pory"
	.string "I'll go hide first. Close your eyes for a\n"
	.string "sec.$"

GrandmasCabin_Text_Leaf3::
# 515 "data//maps/GrandmasCabin/scripts.pory"
	.string "You found me! No! Now it's your turn to\n"
	.string "hide.$"

GrandmasCabin_Text_Leaf4::
# 519 "data//maps/GrandmasCabin/scripts.pory"
	.string "Go find somewhere to hide. I'll close my\n"
	.string "eyes!$"

GrandmasCabin_Text_Leaf5::
# 523 "data//maps/GrandmasCabin/scripts.pory"
	.string "Ready or not, watch out {PLAYER}!\n"
	.string "Here I come!$"

GrandmasCabin_Text_Leaf6::
# 527 "data//maps/GrandmasCabin/scripts.pory"
	.string "Haha! I found you, now it's my turn.\n"
	.string "Close your eyes!$"

GrandmasCabin_Text_Leaf7::
# 531 "data//maps/GrandmasCabin/scripts.pory"
	.string "Please help me, {PLAYER}! I'm scared\n"
	.string "of Rattata!$"

GrandmasCabin_Text_AvoidGrass::
# 535 "data//maps/GrandmasCabin/scripts.pory"
	.string "Keep your distance from the tall\n"
	.string "grass...$"

GrandmasCabin_Text_StayHideAndSeek::
# 539 "data//maps/GrandmasCabin/scripts.pory"
	.string "I shouldn't leave {LEAF} behind...$"

GrandmasCabin_Text_HideAndSeek::
# 543 "data//maps/GrandmasCabin/scripts.pory"
	.string "Ready or not, here I come!$"

GrandmasCabin_Text_Leaf8::
# 547 "data//maps/GrandmasCabin/scripts.pory"
	.string "Do it! Eevee and I believe in you.$"

GrandmasCabin_Text_Leaf9::
# 551 "data//maps/GrandmasCabin/scripts.pory"
	.string "That was so scary! {PLAYER} you are\n"
	.string "so brave. I can't believe how strong\l"
	.string "your connection with Eevee is. Now let's\l"
	.string "get out of here.$"

GrandmasCabin_Text_Granny1::
# 555 "data//maps/GrandmasCabin/scripts.pory"
	.string "What's going on? Why did Eevee run off?\n"
	.string "Where have you been? Oh God!\l"
	.string "{PLAYER} are you hurt? I told you to\l"
	.string "stay out of the tall grass!$"

GrandmasCabin_Text_Leaf10::
# 559 "data//maps/GrandmasCabin/scripts.pory"
	.string "Think I should go...sorry...See you\n"
	.string "around.$"

GrandmasCabin_Text_Granny2::
# 563 "data//maps/GrandmasCabin/scripts.pory"
	.string "March your behind inside! Let's have a\n"
	.string "chat...$"
