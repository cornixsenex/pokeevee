CityClara_MapScripts::
# 40 "data//maps/CityClara/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 84 "data//maps/CityClara/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 42 "data//maps/CityClara/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_CityClara_F
# 43 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 45 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 47 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 49 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 51 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 53 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 58 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_lt CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 63 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 0
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
# 65 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 70 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_CASTALIA_GARDEN_COMPLETE, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 73 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_B, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_26
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 78 "data//maps/CityClara/scripts.pory"
	compare VAR_LEAF_ROAD_TO_ARDOR, 1
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_28
	return

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 44 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 46 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 48 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 50 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 4
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 52 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 5
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 54 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 6
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 59 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_ShowMewScene
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 64 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_ShowLeafEtScott
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 66 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_ShowLeaf
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 71 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_OpenGarden
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_22

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 74 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_DuringGarden
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_25

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 79 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_ShowLeafOnTheRoad
	return

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME:
# 85 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_9, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_2
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 88 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_3, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_5
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 91 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_A, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_8
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_7:
# 94 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_12, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_11
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 97 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_D, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_14
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 100 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_C, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_16
	return

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 86 "data//maps/CityClara/scripts.pory"
	removeobject 31
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_1

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 89 "data//maps/CityClara/scripts.pory"
	removeobject 32
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_4

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_8:
# 92 "data//maps/CityClara/scripts.pory"
	removeobject 33
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_7

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_11:
# 95 "data//maps/CityClara/scripts.pory"
	removeobject 34
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_10

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 98 "data//maps/CityClara/scripts.pory"
	removeobject 35
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_13

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_16:
# 101 "data//maps/CityClara/scripts.pory"
	removeobject 36
	return


CityClara_Script_ActaEchonaTransition::
# 110 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 1
# 111 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 112 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SilvaTransition::
# 116 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 2
# 117 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 118 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ViaFideliumTransition::
# 122 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 3
# 123 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 124 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SinusClarusTransition::
# 128 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 4
# 129 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 130 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_CastaliaTransition::
# 134 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 5
# 135 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 136 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_DeltaDraciTransition::
# 140 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 6
# 141 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 142 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ShowMewScene::
# 148 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 1, 62, 10
# 149 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 151 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 3, 65, 10
# 152 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 154 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 14, 34, 22
# 155 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_DOWN
# 157 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 15, 36, 22
# 158 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_DOWN
# 160 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 16, 35, 22
# 161 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_FACE_DOWN
# 163 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 4, 35, 23
# 164 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 166 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 5, 35, 24
# 167 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 169 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 6, 35, 25
# 170 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 172 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 9, 35, 26
# 173 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 175 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 8, 35, 27
# 176 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 178 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 10, 35, 28
# 179 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
	return


CityClara_Script_ShowLeafEtScott::
# 185 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 26, 30, 37
# 186 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_DOWN
# 188 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 31, 37
# 189 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 191 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 32, 37
# 192 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_ShowLeaf::
# 198 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 32, 31
# 199 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 201 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 31, 31
# 202 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_OpenGarden::
# 209 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 21, 47, 40
# 210 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 21, MOVEMENT_TYPE_FACE_UP
# 213 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 28, 0, 0
# 214 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 216 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 29, 0, 0
# 217 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 219 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 30, 0, 0
# 220 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 222 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 31, 0, 0
# 223 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 225 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 32, 0, 0
# 226 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 228 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 33, 0, 0
# 229 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 231 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 34, 0, 0
# 232 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 234 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 35, 0, 0
# 235 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 237 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 36, 0, 0
# 238 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
	return


CityClara_Script_ShowLeafOnTheRoad::
# 244 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 64, 13
# 245 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 247 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 63, 13
# 248 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_DuringGarden::
# 256 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 21, 48, 40
# 257 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 21, MOVEMENT_TYPE_FACE_UP
	return


CityClara_Script_LeafEtScottSceneA::
# 263 "data//maps/CityClara/scripts.pory"
	lockall
# 264 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 265 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 266 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 268 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottSceneB::
# 273 "data//maps/CityClara/scripts.pory"
	lockall
# 274 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 275 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 276 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 277 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 278 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 280 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottScene::
# 286 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_LeafEtScottScene_Player
# 287 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 289 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 290 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf1
# 291 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 293 "data//maps/CityClara/scripts.pory"
	load_field_pic 33, 190, 98
# 294 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Scott1
# 295 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 33
# 296 "data//maps/CityClara/scripts.pory"
	closemessage
# 298 "data//maps/CityClara/scripts.pory"
	applymovement 26, CityClara_Movement_LeafEtScottScene_ScottExit
# 299 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 301 "data//maps/CityClara/scripts.pory"
	removeobject 26
# 302 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 26, 0, 0
# 303 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_INVISIBLE
# 304 "data//maps/CityClara/scripts.pory"
	addobject 26
# 306 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 307 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf2
# 308 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 309 "data//maps/CityClara/scripts.pory"
	closemessage
# 311 "data//maps/CityClara/scripts.pory"
	applymovement 18, CityClara_Movement_LeafEtScottScene_LeafExit
# 312 "data//maps/CityClara/scripts.pory"
	applymovement 27, CityClara_Movement_LeafEtScottScene_LeafExit
# 313 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 315 "data//maps/CityClara/scripts.pory"
	removeobject 18
# 316 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 32, 31
# 317 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 318 "data//maps/CityClara/scripts.pory"
	addobject 18
# 319 "data//maps/CityClara/scripts.pory"
	showobjectat 18, MAP_CITY_CLARA
# 321 "data//maps/CityClara/scripts.pory"
	removeobject 27
# 322 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 31, 31
# 323 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
# 324 "data//maps/CityClara/scripts.pory"
	addobject 27
# 325 "data//maps/CityClara/scripts.pory"
	showobjectat 27, MAP_CITY_CLARA
# 327 "data//maps/CityClara/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 1
# 329 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_ClubSign::
# 335 "data//maps/CityClara/scripts.pory"
	lock
# 336 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_ClubSign
# 337 "data//maps/CityClara/scripts.pory"
	closemessage
# 338 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_CannaWoman::
# 343 "data//maps/CityClara/scripts.pory"
	lockall
# 344 "data//maps/CityClara/scripts.pory"
	faceplayer
# 345 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_CannaWoman
# 346 "data//maps/CityClara/scripts.pory"
	closemessage
# 347 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_Man2::
# 352 "data//maps/CityClara/scripts.pory"
	lock
# 353 "data//maps/CityClara/scripts.pory"
	faceplayer
# 354 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Man2_2
# 358 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit
CityClara_EventScript_Man2_1:
# 360 "data//maps/CityClara/scripts.pory"
	closemessage
# 361 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Man2_2:
# 355 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit2
	goto CityClara_EventScript_Man2_1


CityClara_EventScript_FatMan::
# 366 "data//maps/CityClara/scripts.pory"
	lock
# 367 "data//maps/CityClara/scripts.pory"
	faceplayer
# 368 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_FatMan_2
# 372 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan
CityClara_EventScript_FatMan_1:
# 374 "data//maps/CityClara/scripts.pory"
	closemessage
# 375 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_FatMan_2:
# 369 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan2
	goto CityClara_EventScript_FatMan_1


CityClara_EventScript_Woman1::
# 380 "data//maps/CityClara/scripts.pory"
	lock
# 381 "data//maps/CityClara/scripts.pory"
	faceplayer
# 382 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman1_2
# 386 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA
CityClara_EventScript_Woman1_1:
# 388 "data//maps/CityClara/scripts.pory"
	closemessage
# 389 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman1_2:
# 383 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA2
	goto CityClara_EventScript_Woman1_1


CityClara_EventScript_Woman5::
# 394 "data//maps/CityClara/scripts.pory"
	lock
# 395 "data//maps/CityClara/scripts.pory"
	faceplayer
# 396 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman5_2
# 400 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman
CityClara_EventScript_Woman5_1:
# 402 "data//maps/CityClara/scripts.pory"
	closemessage
# 403 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman5_2:
# 397 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman2
	goto CityClara_EventScript_Woman5_1


CityClara_EventScript_Woman3::
# 408 "data//maps/CityClara/scripts.pory"
	lock
# 409 "data//maps/CityClara/scripts.pory"
	faceplayer
# 410 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman3_2
# 414 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Woman3_1
CityClara_EventScript_Woman3_1:
# 416 "data//maps/CityClara/scripts.pory"
	closemessage
# 417 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman3_2:
# 411 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Woman3_2
	goto CityClara_EventScript_Woman3_1


CityClara_EventScript_Gentleman::
# 422 "data//maps/CityClara/scripts.pory"
	lock
# 423 "data//maps/CityClara/scripts.pory"
	faceplayer
# 424 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Gentleman_2
# 428 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan
CityClara_EventScript_Gentleman_1:
# 430 "data//maps/CityClara/scripts.pory"
	closemessage
# 431 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Gentleman_2:
# 425 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan2
	goto CityClara_EventScript_Gentleman_1


CityClara_EventScript_OldWoman::
# 436 "data//maps/CityClara/scripts.pory"
	lock
# 437 "data//maps/CityClara/scripts.pory"
	faceplayer
# 438 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_OldWoman_2
# 442 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman
CityClara_EventScript_OldWoman_1:
# 444 "data//maps/CityClara/scripts.pory"
	closemessage
# 445 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldWoman_2:
# 439 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman2
	goto CityClara_EventScript_OldWoman_1


CityClara_EventScript_Lass::
# 451 "data//maps/CityClara/scripts.pory"
	lock
# 452 "data//maps/CityClara/scripts.pory"
	faceplayer
# 453 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Lass_2
# 457 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass
CityClara_EventScript_Lass_1:
# 459 "data//maps/CityClara/scripts.pory"
	closemessage
# 460 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Lass_2:
# 454 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass2
	goto CityClara_EventScript_Lass_1


CityClara_Script_Gardener::
# 466 "data//maps/CityClara/scripts.pory"
	lock
# 467 "data//maps/CityClara/scripts.pory"
	faceplayer
# 469 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_B, CityClara_Script_Gardener_2
# 481 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_RECEIVED_SCYTHE, CityClara_Script_Gardener_3
# 486 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenIntro
# 487 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 488 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 489 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenBeginYN, MSGBOX_YESNO
# 490 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CityClara_Script_Gardener_10
# 495 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_B
# 497 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenBegin
# 499 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerBeginGarden1
# 500 "data//maps/CityClara/scripts.pory"
	applymovement 21, CityClara_Movement_GardenerBeginGarden1
# 501 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 503 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeginGarden1
# 504 "data//maps/CityClara/scripts.pory"
	closemessage
# 506 "data//maps/CityClara/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 507 "data//maps/CityClara/scripts.pory"
	giveitem ITEM_SCYTHE, 1
# 509 "data//maps/CityClara/scripts.pory"
	setflag FLAG_RECEIVED_SCYTHE
# 511 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeginGarden2
# 512 "data//maps/CityClara/scripts.pory"
	closemessage
# 514 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 515 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerBeginGarden2
# 516 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 517 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceUp
# 518 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 520 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_DuringGarden
CityClara_Script_Gardener_1:
# 523 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_Script_Gardener_2:
# 471 "data//maps/CityClara/scripts.pory"
	compare VAR_TEMP_9, 9
	goto_if_eq CityClara_Script_Gardener_7
# 474 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_DuringGarden
# 475 "data//maps/CityClara/scripts.pory"
	closemessage
# 476 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceUp
# 477 "data//maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_3:
# 482 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_AfterGarden
# 483 "data//maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_7:
# 472 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_FinishGarden
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_10:
# 491 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenDecline
# 492 "data//maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_Gardener_1


CityClara_Script_FinishGarden::
# 529 "data//maps/CityClara/scripts.pory"
	clearflag FLAG_TEMP_B
# 531 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 532 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 534 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_FinishGarden1
# 535 "data//maps/CityClara/scripts.pory"
	closemessage
# 537 "data//maps/CityClara/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 538 "data//maps/CityClara/scripts.pory"
	switch VAR_RESULT
# 539 "data//maps/CityClara/scripts.pory"
	case DIR_NORTH, CityClara_Script_FinishGarden_3
# 542 "data//maps/CityClara/scripts.pory"
	case DIR_WEST, CityClara_Script_FinishGarden_4
# 552 "data//maps/CityClara/scripts.pory"
	case DIR_SOUTH, CityClara_Script_FinishGarden_5
# 562 "data//maps/CityClara/scripts.pory"
	case DIR_EAST, CityClara_Script_FinishGarden_6
# 573 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Script_FinishGarden_Text_1
# 574 "data//maps/CityClara/scripts.pory"
	closemessage
CityClara_Script_FinishGarden_1:
# 577 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_FinishGarden2
# 578 "data//maps/CityClara/scripts.pory"
	closemessage
# 580 "data//maps/CityClara/scripts.pory"
	applymovement 21, CityClara_Movement_GardenerFinishGarden
# 581 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 583 "data//maps/CityClara/scripts.pory"
	setflag FLAG_CASTALIA_GARDEN_COMPLETE
# 585 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_OpenGarden
# 586 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_Script_FinishGarden_3:
# 540 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Script_FinishGarden_Text_0
# 541 "data//maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_FinishGarden_1

CityClara_Script_FinishGarden_4:
# 543 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 544 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkLeft
# 545 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 546 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 547 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 548 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 549 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 550 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 551 "data//maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_FinishGarden_1

CityClara_Script_FinishGarden_5:
# 553 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 554 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkLeft
# 555 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 556 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 557 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 558 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 559 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 560 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 561 "data//maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_FinishGarden_1

CityClara_Script_FinishGarden_6:
# 563 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 564 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 565 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 566 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 567 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkLeft
# 568 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 569 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 570 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 571 "data//maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_FinishGarden_1


CityClara_EventScript_Leaf::
# 591 "data//maps/CityClara/scripts.pory"
	lock
# 592 "data//maps/CityClara/scripts.pory"
	faceplayer
# 593 "data//maps/CityClara/scripts.pory"
	compare VAR_LEAF_ROAD_TO_ARDOR, 1
	goto_if_lt CityClara_EventScript_Leaf_2
# 596 "data//maps/CityClara/scripts.pory"
	call CityClara_EventScript_LeafOnTheRoad
CityClara_EventScript_Leaf_1:
# 598 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Leaf_2:
# 594 "data//maps/CityClara/scripts.pory"
	call CityClara_EventScript_LeafBridge
	goto CityClara_EventScript_Leaf_1


CityClara_EventScript_LeafBridge::
# 603 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 604 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_LeafBridge
# 605 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 606 "data//maps/CityClara/scripts.pory"
	closemessage
# 607 "data//maps/CityClara/scripts.pory"
	applymovement 18, Common_Movement_FaceDown
# 608 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 609 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_LeafOnTheRoad::
# 614 "data//maps/CityClara/scripts.pory"
	setvar VAR_LEAF_ROAD_TO_ARDOR, 2
# 615 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 616 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_LeafOnTheRoad
# 617 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 618 "data//maps/CityClara/scripts.pory"
	closemessage
# 619 "data//maps/CityClara/scripts.pory"
	applymovement 18, Common_Movement_WalkUp6
# 620 "data//maps/CityClara/scripts.pory"
	applymovement 27, Common_Movement_WalkUp6
# 621 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 623 "data//maps/CityClara/scripts.pory"
	removeobject 18
# 624 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 0, 0
# 625 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_INVISIBLE
# 626 "data//maps/CityClara/scripts.pory"
	addobject 18
# 627 "data//maps/CityClara/scripts.pory"
	showobjectat 18, MAP_CITY_CLARA
# 628 "data//maps/CityClara/scripts.pory"
	removeobject 27
# 629 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 0, 0
# 630 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_INVISIBLE
# 631 "data//maps/CityClara/scripts.pory"
	addobject 27
# 632 "data//maps/CityClara/scripts.pory"
	showobjectat 27, MAP_CITY_CLARA
# 633 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_TownSign::
# 638 "data//maps/CityClara/scripts.pory"
	lock
# 639 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_TownSign
# 640 "data//maps/CityClara/scripts.pory"
	closemessage
# 641 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_Senex::
# 646 "data//maps/CityClara/scripts.pory"
	lockall
# 647 "data//maps/CityClara/scripts.pory"
	faceplayer
# 648 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex1, MSGBOX_YESNO
# 649 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_EventScript_Senex_2
# 653 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex3
CityClara_EventScript_Senex_1:
# 655 "data//maps/CityClara/scripts.pory"
	closemessage
# 656 "data//maps/CityClara/scripts.pory"
	releaseall
	end

CityClara_EventScript_Senex_2:
# 650 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex2
	goto CityClara_EventScript_Senex_1


CityClara_EventScript_Jessie::
# 661 "data//maps/CityClara/scripts.pory"
	lockall
# 662 "data//maps/CityClara/scripts.pory"
	faceplayer
# 663 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Jessie
# 664 "data//maps/CityClara/scripts.pory"
	closemessage
# 665 "data//maps/CityClara/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 666 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 667 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_James::
# 672 "data//maps/CityClara/scripts.pory"
	lockall
# 673 "data//maps/CityClara/scripts.pory"
	faceplayer
# 674 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_James
# 675 "data//maps/CityClara/scripts.pory"
	closemessage
# 676 "data//maps/CityClara/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 677 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 678 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_RocketBlockA::
# 683 "data//maps/CityClara/scripts.pory"
	lock
# 684 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 685 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 686 "data//maps/CityClara/scripts.pory"
	closemessage
# 687 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 688 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1A
# 689 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2A
# 690 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 691 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 692 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 693 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 694 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 695 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 696 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 697 "data//maps/CityClara/scripts.pory"
	closemessage
# 698 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1A
# 699 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2A
# 700 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 701 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 702 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_RocketBlockB::
# 706 "data//maps/CityClara/scripts.pory"
	lock
# 707 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 708 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 709 "data//maps/CityClara/scripts.pory"
	closemessage
# 710 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 711 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1B
# 712 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2B
# 713 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 714 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 715 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 716 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 717 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 718 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 719 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 720 "data//maps/CityClara/scripts.pory"
	closemessage
# 721 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1B
# 722 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2B
# 723 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 724 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 725 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket1::
# 729 "data//maps/CityClara/scripts.pory"
	lock
# 730 "data//maps/CityClara/scripts.pory"
	faceplayer
# 731 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket1
# 732 "data//maps/CityClara/scripts.pory"
	closemessage
# 733 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket2::
# 737 "data//maps/CityClara/scripts.pory"
	lock
# 738 "data//maps/CityClara/scripts.pory"
	faceplayer
# 739 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket2
# 740 "data//maps/CityClara/scripts.pory"
	closemessage
# 741 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_Script_GardenTree::
# 745 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 746 "data//maps/CityClara/scripts.pory"
	call EventScript_ScytheTree
	end


CityClara_Script_Nincada::
# 751 "data//maps/CityClara/scripts.pory"
	lock
# 752 "data//maps/CityClara/scripts.pory"
	faceplayer
# 753 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 754 "data//maps/CityClara/scripts.pory"
	playmoncry SPECIES_NINCADA, CRY_MODE_ENCOUNTER
# 755 "data//maps/CityClara/scripts.pory"
	waitmoncry
# 756 "data//maps/CityClara/scripts.pory"
	setwildbattle SPECIES_NINCADA, 23
# 757 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_9
# 758 "data//maps/CityClara/scripts.pory"
	dowildbattle
# 759 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Weedle::
# 764 "data//maps/CityClara/scripts.pory"
	lock
# 765 "data//maps/CityClara/scripts.pory"
	faceplayer
# 766 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 767 "data//maps/CityClara/scripts.pory"
	playmoncry SPECIES_WEEDLE, CRY_MODE_ENCOUNTER
# 768 "data//maps/CityClara/scripts.pory"
	waitmoncry
# 769 "data//maps/CityClara/scripts.pory"
	setwildbattle SPECIES_WEEDLE, 23
# 770 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_C
# 771 "data//maps/CityClara/scripts.pory"
	dowildbattle
# 772 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Wurmple::
# 777 "data//maps/CityClara/scripts.pory"
	lock
# 778 "data//maps/CityClara/scripts.pory"
	faceplayer
# 779 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 780 "data//maps/CityClara/scripts.pory"
	playmoncry SPECIES_WURMPLE, CRY_MODE_ENCOUNTER
# 781 "data//maps/CityClara/scripts.pory"
	waitmoncry
# 782 "data//maps/CityClara/scripts.pory"
	setwildbattle SPECIES_WURMPLE, 23
# 783 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_3
# 784 "data//maps/CityClara/scripts.pory"
	dowildbattle
# 785 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Caterpie::
# 790 "data//maps/CityClara/scripts.pory"
	lock
# 791 "data//maps/CityClara/scripts.pory"
	faceplayer
# 792 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 793 "data//maps/CityClara/scripts.pory"
	playmoncry SPECIES_CATERPIE, CRY_MODE_ENCOUNTER
# 794 "data//maps/CityClara/scripts.pory"
	waitmoncry
# 795 "data//maps/CityClara/scripts.pory"
	setwildbattle SPECIES_CATERPIE, 23
# 796 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_12
# 797 "data//maps/CityClara/scripts.pory"
	dowildbattle
# 798 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Paras::
# 803 "data//maps/CityClara/scripts.pory"
	lock
# 804 "data//maps/CityClara/scripts.pory"
	faceplayer
# 805 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 806 "data//maps/CityClara/scripts.pory"
	playmoncry SPECIES_PARAS, CRY_MODE_ENCOUNTER
# 807 "data//maps/CityClara/scripts.pory"
	waitmoncry
# 808 "data//maps/CityClara/scripts.pory"
	setwildbattle SPECIES_PARAS, 23
# 809 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_A
# 810 "data//maps/CityClara/scripts.pory"
	dowildbattle
# 811 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Venonat::
# 816 "data//maps/CityClara/scripts.pory"
	lock
# 817 "data//maps/CityClara/scripts.pory"
	faceplayer
# 818 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 819 "data//maps/CityClara/scripts.pory"
	playmoncry SPECIES_VENONAT, CRY_MODE_ENCOUNTER
# 820 "data//maps/CityClara/scripts.pory"
	waitmoncry
# 821 "data//maps/CityClara/scripts.pory"
	setwildbattle SPECIES_VENONAT, 23
# 822 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_D
# 823 "data//maps/CityClara/scripts.pory"
	dowildbattle
# 824 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_IncrementGardenVar::
# 830 "data//maps/CityClara/scripts.pory"
	switch VAR_TEMP_9
# 831 "data//maps/CityClara/scripts.pory"
	case 0, CityClara_Script_IncrementGardenVar_3
# 833 "data//maps/CityClara/scripts.pory"
	case 1, CityClara_Script_IncrementGardenVar_4
# 835 "data//maps/CityClara/scripts.pory"
	case 2, CityClara_Script_IncrementGardenVar_5
# 837 "data//maps/CityClara/scripts.pory"
	case 3, CityClara_Script_IncrementGardenVar_6
# 839 "data//maps/CityClara/scripts.pory"
	case 4, CityClara_Script_IncrementGardenVar_7
# 841 "data//maps/CityClara/scripts.pory"
	case 5, CityClara_Script_IncrementGardenVar_8
# 843 "data//maps/CityClara/scripts.pory"
	case 6, CityClara_Script_IncrementGardenVar_9
# 845 "data//maps/CityClara/scripts.pory"
	case 7, CityClara_Script_IncrementGardenVar_10
# 847 "data//maps/CityClara/scripts.pory"
	case 8, CityClara_Script_IncrementGardenVar_11
# 850 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Script_IncrementGardenVar_Text_0
# 851 "data//maps/CityClara/scripts.pory"
	closemessage
CityClara_Script_IncrementGardenVar_1:
	return

CityClara_Script_IncrementGardenVar_3:
# 832 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 1
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_4:
# 834 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 2
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_5:
# 836 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 3
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_6:
# 838 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 4
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_7:
# 840 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 5
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_8:
# 842 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 6
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_9:
# 844 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 7
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_10:
# 846 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 8
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_11:
# 848 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 9
	goto CityClara_Script_IncrementGardenVar_1


# 857 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1A:
# 858 "data//maps/CityClara/scripts.pory"
	walk_down
# 859 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 862 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2A:
# 863 "data//maps/CityClara/scripts.pory"
	walk_down
# 864 "data//maps/CityClara/scripts.pory"
	walk_left
	step_end

# 867 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceLeft:
# 868 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 871 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceRight:
# 872 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 875 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1A:
# 876 "data//maps/CityClara/scripts.pory"
	walk_up
# 877 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 880 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2A:
# 881 "data//maps/CityClara/scripts.pory"
	walk_right
# 882 "data//maps/CityClara/scripts.pory"
	walk_up
# 883 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 886 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerReturn:
# 887 "data//maps/CityClara/scripts.pory"
	walk_down
# 887 "data//maps/CityClara/scripts.pory"
	walk_down
	step_end

# 890 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1B:
# 891 "data//maps/CityClara/scripts.pory"
	walk_down
# 892 "data//maps/CityClara/scripts.pory"
	walk_right
	step_end

# 895 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2B:
# 896 "data//maps/CityClara/scripts.pory"
	walk_down
# 897 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 900 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1B:
# 901 "data//maps/CityClara/scripts.pory"
	walk_left
# 902 "data//maps/CityClara/scripts.pory"
	walk_up
# 903 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 906 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2B:
# 907 "data//maps/CityClara/scripts.pory"
	walk_up
# 908 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 911 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_Player:
# 912 "data//maps/CityClara/scripts.pory"
	walk_right
# 912 "data//maps/CityClara/scripts.pory"
	walk_right
# 912 "data//maps/CityClara/scripts.pory"
	walk_right
# 913 "data//maps/CityClara/scripts.pory"
	walk_up
	step_end

# 916 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_ScottExit:
# 917 "data//maps/CityClara/scripts.pory"
	walk_down
# 917 "data//maps/CityClara/scripts.pory"
	walk_down
# 917 "data//maps/CityClara/scripts.pory"
	walk_down
# 918 "data//maps/CityClara/scripts.pory"
	walk_left
# 918 "data//maps/CityClara/scripts.pory"
	walk_left
# 918 "data//maps/CityClara/scripts.pory"
	walk_left
# 918 "data//maps/CityClara/scripts.pory"
	walk_left
# 918 "data//maps/CityClara/scripts.pory"
	walk_left
# 918 "data//maps/CityClara/scripts.pory"
	walk_left
# 918 "data//maps/CityClara/scripts.pory"
	walk_left
	step_end

# 921 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_LeafExit:
# 922 "data//maps/CityClara/scripts.pory"
	walk_up
# 922 "data//maps/CityClara/scripts.pory"
	walk_up
# 922 "data//maps/CityClara/scripts.pory"
	walk_up
# 922 "data//maps/CityClara/scripts.pory"
	walk_up
# 922 "data//maps/CityClara/scripts.pory"
	walk_up
	step_end

# 925 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerBeginGarden1:
# 926 "data//maps/CityClara/scripts.pory"
	walk_up
# 926 "data//maps/CityClara/scripts.pory"
	walk_up
# 927 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 930 "data//maps/CityClara/scripts.pory"
CityClara_Movement_GardenerBeginGarden1:
# 931 "data//maps/CityClara/scripts.pory"
	walk_up
# 932 "data//maps/CityClara/scripts.pory"
	walk_left
# 933 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 936 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerBeginGarden2:
# 937 "data//maps/CityClara/scripts.pory"
	walk_right
# 938 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 941 "data//maps/CityClara/scripts.pory"
CityClara_Movement_GardenerFinishGarden:
# 942 "data//maps/CityClara/scripts.pory"
	walk_left
# 943 "data//maps/CityClara/scripts.pory"
	face_up
	step_end

CityClara_Script_FinishGarden_Text_0:
# 540 "data//maps/CityClara/scripts.pory"
	.string "VAR_RESULT DIR_NORTH$"

CityClara_Script_FinishGarden_Text_1:
# 573 "data//maps/CityClara/scripts.pory"
	.string "VAR_RESULT OOB$"

CityClara_Script_IncrementGardenVar_Text_0:
# 850 "data//maps/CityClara/scripts.pory"
	.string "VAR_TEMP_9 OOB$"

CityClara_Text_ClubSign::
# 946 "data//maps/CityClara/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_TownSign::
# 950 "data//maps/CityClara/scripts.pory"
	.string "City Saeclara built upon the lake$"

CityClara_Text_CannaWoman::
# 954 "data//maps/CityClara/scripts.pory"
	.string "You see this building here? The Chronic\n"
	.string "Club? They got me so high I can barely\l"
	.string "walk!$"

CityClara_Text_LeafBridge::
# 958 "data//maps/CityClara/scripts.pory"
	.string "This line is so long and it's not moving!\n"
	.string "We need to find a way inside, and fast.$"

CityClara_Text_GreenSuit::
# 962 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_GreenSuit2::
# 966 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_FatMan::
# 970 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_FatMan2::
# 974 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_WomanA::
# 978 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_WomanA2::
# 982 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_RedWoman::
# 986 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_RedWoman2::
# 990 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldMan::
# 994 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldMan2::
# 998 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldWoman::
# 1002 "data//maps/CityClara/scripts.pory"
	.string "Is Mew really here? Am I really here?\n"
	.string "This life feels like reflections on\l"
	.string "water...$"

CityClara_Text_OldWoman2::
# 1006 "data//maps/CityClara/scripts.pory"
	.string "Am I still here, or am I an echo?$"

CityClara_Text_Lass::
# 1010 "data//maps/CityClara/scripts.pory"
	.string "I want to go play in the garden but the\n"
	.string "gardener says it's dangerous now.$"

CityClara_Text_Lass2::
# 1014 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Senex1::
# 1018 "data//maps/CityClara/scripts.pory"
	.string "My boy come here, or no, are you a girl?\n"
	.string "Forgive me for my eyes are old as I have\l"
	.string "grown. Tell me would you ask me to speak\l"
	.string "and tell to you the tale of this city?$"

CityClara_Text_Senex2::
# 1022 "data//maps/CityClara/scripts.pory"
	.string "This place is ancient, older than I am.\n"
	.string "They say that people first lived on the\l"
	.string "lake thousands of years ago. Escpaing\l"
	.string "drought the elder race escaped across\l"
	.string "the sea and here observed a certain\l"
	.string "sign of fate. Upon the crystal clear\l"
	.string "basin surface a Charizard devoured it's\l"
	.string "own tail. The elders knew their fate: To\l"
	.string "build a town upon the lake in reverence\l"
	.string "of their god. And now thousands of\l"
	.string "years in the future is it coincedance\l"
	.string "that Mew is here?$"

CityClara_Text_Senex3::
# 1026 "data//maps/CityClara/scripts.pory"
	.string "No one has time for history these\n"
	.string "days...$"

CityClara_Text_RocketBlock1::
# 1030 "data//maps/CityClara/scripts.pory"
	.string "Hey You!$"

CityClara_Text_RocketBlock2::
# 1034 "data//maps/CityClara/scripts.pory"
	.string "Stop right there! Take not one more\n"
	.string "stop. This road is closed, we shall let\l"
	.string "no one pass.$"

CityClara_Text_RocketBlock3::
# 1038 "data//maps/CityClara/scripts.pory"
	.string "By order of the Rocket High Command\n"
	.string "only party business will be allowed\l"
	.string "until our mission has been completed.\l"
	.string "Now get thee gone, noone wants more\l"
	.string "trouble$"

CityClara_Text_Rocket1::
# 1042 "data//maps/CityClara/scripts.pory"
	.string "The Rocket Party helped me buy a home!\n"
	.string "Standing watch on the road's the very\l"
	.string "least I can do to pay back our dear\l"
	.string "leader.$"

CityClara_Text_Rocket2::
# 1046 "data//maps/CityClara/scripts.pory"
	.string "The party only wants the very best\n"
	.string "people to represent their interests.\l"
	.string "Perhaps with time, and practice, and\l"
	.string "some luck, you could one day wear our\l"
	.string "great uniform. Never forget the party's\l"
	.string "here for you.$"

CityClara_Text_Jessie::
# 1050 "data//maps/CityClara/scripts.pory"
	.string "This church is being occupied by the\n"
	.string "Rocket Party and we're watching the\l"
	.string "door. You'll have to get in line and wait\l"
	.string "your turn then pay the entrance fee to\l"
	.string "step inside.$"

CityClara_Text_James::
# 1054 "data//maps/CityClara/scripts.pory"
	.string "This town is so antique it's comical.\n"
	.string "Look at all these people waiting in line\l"
	.string "just for a glimpse of some old pokemon.\l"
	.string "The city is a better place to live and\l"
	.string "party people are superior.$"

CityClara_Text_Leaf1::
# 1058 "data//maps/CityClara/scripts.pory"
	.string "Looks like we weren't the only ones who\n"
	.string "came to Castalia to catch a glimpse of\l"
	.string "Mew. The line to enter church is super\l"
	.string "long!$"

CityClara_Text_Scott1::
# 1062 "data//maps/CityClara/scripts.pory"
	.string "It's not moving either. Those\n"
	.string "government stooges have it blocked up!\l"
	.string "If you ask me it's no use waiting in that\l"
	.string "line right now. We're better off sitting\l"
	.string "in comfort at the Lotus Club until the\l"
	.string "line dies down. That's where I'm going!\l"
	.string "Why don't you join me? I'll buy us all\l"
	.string "Lotus and let time pass.$"

CityClara_Text_Leaf2::
# 1066 "data//maps/CityClara/scripts.pory"
	.string "There's no way after traveling out here\n"
	.string "that we're going to go sit in a club\l"
	.string "while Mew herself awaits us in that\l"
	.string "Church! Come with me {PLAYER} we need\l"
	.string "to find a way to get into that Church\l"
	.string "ASAP!$"

CityClara_Text_Woman3_1::
# 1070 "data//maps/CityClara/scripts.pory"
	.string "The line is long, but the wait is worth\n"
	.string "it.$"

CityClara_Text_Woman3_2::
# 1074 "data//maps/CityClara/scripts.pory"
	.string "I can't believe how fast time's flying\n"
	.string "by! I still feel like that same little\l"
	.string "school girl...$"

CityClara_Text_Gardener_BeforeGardenIntro::
# 1078 "data//maps/CityClara/scripts.pory"
	.string "Oh no! My garden has been overrun by\n"
	.string "pests and weeds! I don't know what to\l"
	.string "do!$"

CityClara_Text_Gardener_BeforeGardenBeginYN::
# 1082 "data//maps/CityClara/scripts.pory"
	.string "Oh hey! You're a young, fit, capable boy.\n"
	.string "Will you help me clean up the garden?\l"
	.string "Please?$"

CityClara_Text_Gardener_BeforeGardenDecline::
# 1086 "data//maps/CityClara/scripts.pory"
	.string "I understand. It's not your job. Take\n"
	.string "care.$"

CityClara_Text_Gardener_BeforeGardenBegin::
# 1090 "data//maps/CityClara/scripts.pory"
	.string "Thank you so much! Let me show you\n"
	.string "inside.$"

CityClara_Text_Gardener_BeginGarden1::
# 1094 "data//maps/CityClara/scripts.pory"
	.string "Welcome to the Castalia Garden! In\n"
	.string "better times we grow beautiful things\l"
	.string "but now the garden looks like such a\l"
	.string "mess. Please get rid of the pests that\l"
	.string "have moved in and use this Scythe to\l"
	.string "cut down the small trees.$"

CityClara_Text_Gardener_BeginGarden2::
# 1098 "data//maps/CityClara/scripts.pory"
	.string "Now get to work! Good luck! You can do\n"
	.string "it!$"

CityClara_Text_Gardener_DuringGarden::
# 1102 "data//maps/CityClara/scripts.pory"
	.string "You're not done yet. The garden's still a\n"
	.string "mess!$"

CityClara_Text_Gardener_AfterGarden::
# 1106 "data//maps/CityClara/scripts.pory"
	.string "Thank you again for cleaining the\n"
	.string "garden.$"

CityClara_Text_Gardener_FinishGarden1::
# 1110 "data//maps/CityClara/scripts.pory"
	.string "You did it! You cut down every weed and\n"
	.string "fully resolved the infestation! As\l"
	.string "thanks I want you to keep that Sharp\l"
	.string "Scythe.$"

CityClara_Text_Gardener_FinishGarden2::
# 1114 "data//maps/CityClara/scripts.pory"
	.string "Come back and visit the garden later.$"

CityClara_Text_LeafOnTheRoad::
# 1118 "data//maps/CityClara/scripts.pory"
	.string "The way to Deseret is not direct. The\n"
	.string "fastest was is north: Fidelium up to\l"
	.string "Robustica. The road curves around the\l"
	.string "Pacific Sine and then diverges at\l"
	.string "Litoralis. Take the western path and\l"
	.string "stay to the right and you should arrive\l"
	.string "in Robustica. Once there we will arrange\l"
	.string "transportation along Via Magna to\l"
	.string "Deseret. There is no time to lose. C'mon.\l"
	.string "Let's go!$"
