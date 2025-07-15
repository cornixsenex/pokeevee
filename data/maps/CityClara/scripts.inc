CityClara_MapScripts::
# 39 "data/maps/CityClara/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 83 "data/maps/CityClara/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 41 "data/maps/CityClara/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_CityClara_F
# 42 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 44 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 46 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 48 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 50 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 52 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 57 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_lt CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 62 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 0
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
# 64 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 69 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CASTALIA_GARDEN_COMPLETE, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 72 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_B, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_26
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 77 "data/maps/CityClara/scripts.pory"
	compare VAR_LEAF_ROAD_TO_ARDOR, 1
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_28
	return

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 43 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 45 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 47 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 49 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 4
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 51 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 5
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 53 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 6
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 58 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_ShowMewScene
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 63 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_ShowLeafEtScott
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 65 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_ShowLeaf
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 70 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_OpenGarden
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_22

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 73 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_DuringGarden
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_25

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 78 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_ShowLeafOnTheRoad
	return

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME:
# 84 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_9, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_2
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 87 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_3, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_5
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 90 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_A, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_8
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_7:
# 93 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_12, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_11
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 96 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_D, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_14
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 99 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_C, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_16
	return

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 85 "data/maps/CityClara/scripts.pory"
	removeobject 31
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_1

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 88 "data/maps/CityClara/scripts.pory"
	removeobject 32
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_4

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_8:
# 91 "data/maps/CityClara/scripts.pory"
	removeobject 33
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_7

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_11:
# 94 "data/maps/CityClara/scripts.pory"
	removeobject 34
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_10

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 97 "data/maps/CityClara/scripts.pory"
	removeobject 35
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_13

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_16:
# 100 "data/maps/CityClara/scripts.pory"
	removeobject 36
	return


CityClara_Script_ActaEchonaTransition::
# 109 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 1
# 110 "data/maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 111 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SilvaTransition::
# 115 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 2
# 116 "data/maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 117 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ViaFideliumTransition::
# 121 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 3
# 122 "data/maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 123 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SinusClarusTransition::
# 127 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 4
# 128 "data/maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 129 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_CastaliaTransition::
# 133 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 5
# 134 "data/maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 135 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_DeltaDraciTransition::
# 139 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 6
# 140 "data/maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 141 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ShowMewScene::
# 147 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 1, 62, 10
# 148 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 150 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 3, 65, 10
# 151 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 153 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 14, 34, 22
# 154 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_DOWN
# 156 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 15, 36, 22
# 157 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_DOWN
# 159 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 16, 35, 22
# 160 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_FACE_DOWN
# 162 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 4, 35, 23
# 163 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 165 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 5, 35, 24
# 166 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 168 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 6, 35, 25
# 169 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 171 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 9, 35, 26
# 172 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 174 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 8, 35, 27
# 175 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 177 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 10, 35, 28
# 178 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
	return


CityClara_Script_ShowLeafEtScott::
# 184 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 26, 30, 37
# 185 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_DOWN
# 187 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 18, 31, 37
# 188 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 190 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 27, 32, 37
# 191 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_ShowLeaf::
# 197 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 18, 32, 31
# 198 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 200 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 27, 31, 31
# 201 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_OpenGarden::
# 208 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 21, 47, 40
# 209 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 21, MOVEMENT_TYPE_FACE_UP
# 212 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 28, 0, 0
# 213 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 215 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 29, 0, 0
# 216 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 218 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 30, 0, 0
# 219 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 221 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 31, 0, 0
# 222 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 224 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 32, 0, 0
# 225 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 227 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 33, 0, 0
# 228 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 230 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 34, 0, 0
# 231 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 233 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 35, 0, 0
# 234 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 236 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 36, 0, 0
# 237 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
	return


CityClara_Script_ShowLeafOnTheRoad::
# 243 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 18, 64, 13
# 244 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 246 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 27, 63, 13
# 247 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_DuringGarden::
# 255 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 21, 48, 40
# 256 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 21, MOVEMENT_TYPE_FACE_UP
	return


CityClara_Script_LeafEtScottSceneA::
# 262 "data/maps/CityClara/scripts.pory"
	lockall
# 263 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 264 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 265 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 267 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottSceneB::
# 272 "data/maps/CityClara/scripts.pory"
	lockall
# 273 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 274 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 275 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 276 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 277 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 279 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottScene::
# 285 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_LeafEtScottScene_Player
# 286 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 288 "data/maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 289 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf1
# 290 "data/maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 292 "data/maps/CityClara/scripts.pory"
	load_field_pic FIELD_PIC_SCOTT, 190, 98
# 293 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Scott1
# 294 "data/maps/CityClara/scripts.pory"
	destroy_field_pic FIELD_PIC_SCOTT
# 295 "data/maps/CityClara/scripts.pory"
	closemessage
# 297 "data/maps/CityClara/scripts.pory"
	applymovement 26, CityClara_Movement_LeafEtScottScene_ScottExit
# 298 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 300 "data/maps/CityClara/scripts.pory"
	removeobject 26
# 301 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 26, 0, 0
# 302 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_INVISIBLE
# 303 "data/maps/CityClara/scripts.pory"
	addobject 26
# 305 "data/maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 306 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf2
# 307 "data/maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 308 "data/maps/CityClara/scripts.pory"
	closemessage
# 310 "data/maps/CityClara/scripts.pory"
	applymovement 18, CityClara_Movement_LeafEtScottScene_LeafExit
# 311 "data/maps/CityClara/scripts.pory"
	applymovement 27, CityClara_Movement_LeafEtScottScene_LeafExit
# 312 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 314 "data/maps/CityClara/scripts.pory"
	removeobject 18
# 315 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 18, 32, 31
# 316 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 317 "data/maps/CityClara/scripts.pory"
	addobject 18
# 318 "data/maps/CityClara/scripts.pory"
	showobjectat 18, MAP_CITY_CLARA
# 320 "data/maps/CityClara/scripts.pory"
	removeobject 27
# 321 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 27, 31, 31
# 322 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
# 323 "data/maps/CityClara/scripts.pory"
	addobject 27
# 324 "data/maps/CityClara/scripts.pory"
	showobjectat 27, MAP_CITY_CLARA
# 326 "data/maps/CityClara/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 1
# 328 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_ClubSign::
# 334 "data/maps/CityClara/scripts.pory"
	lock
# 335 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_ClubSign
# 336 "data/maps/CityClara/scripts.pory"
	closemessage
# 337 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_CannaWoman::
# 342 "data/maps/CityClara/scripts.pory"
	lockall
# 343 "data/maps/CityClara/scripts.pory"
	faceplayer
# 344 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_CannaWoman
# 345 "data/maps/CityClara/scripts.pory"
	closemessage
# 346 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_Man2::
# 351 "data/maps/CityClara/scripts.pory"
	lock
# 352 "data/maps/CityClara/scripts.pory"
	faceplayer
# 353 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Man2_2
# 357 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit
CityClara_EventScript_Man2_1:
# 359 "data/maps/CityClara/scripts.pory"
	closemessage
# 360 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Man2_2:
# 354 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit2
	goto CityClara_EventScript_Man2_1


CityClara_EventScript_FatMan::
# 365 "data/maps/CityClara/scripts.pory"
	lock
# 366 "data/maps/CityClara/scripts.pory"
	faceplayer
# 367 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_FatMan_2
# 371 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan
CityClara_EventScript_FatMan_1:
# 373 "data/maps/CityClara/scripts.pory"
	closemessage
# 374 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_FatMan_2:
# 368 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan2
	goto CityClara_EventScript_FatMan_1


CityClara_EventScript_Woman1::
# 379 "data/maps/CityClara/scripts.pory"
	lock
# 380 "data/maps/CityClara/scripts.pory"
	faceplayer
# 381 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman1_2
# 385 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA
CityClara_EventScript_Woman1_1:
# 387 "data/maps/CityClara/scripts.pory"
	closemessage
# 388 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman1_2:
# 382 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA2
	goto CityClara_EventScript_Woman1_1


CityClara_EventScript_Woman5::
# 393 "data/maps/CityClara/scripts.pory"
	lock
# 394 "data/maps/CityClara/scripts.pory"
	faceplayer
# 395 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman5_2
# 399 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman
CityClara_EventScript_Woman5_1:
# 401 "data/maps/CityClara/scripts.pory"
	closemessage
# 402 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman5_2:
# 396 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman2
	goto CityClara_EventScript_Woman5_1


CityClara_EventScript_Woman3::
# 407 "data/maps/CityClara/scripts.pory"
	lock
# 408 "data/maps/CityClara/scripts.pory"
	faceplayer
# 409 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman3_2
# 413 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Woman3_1
CityClara_EventScript_Woman3_1:
# 415 "data/maps/CityClara/scripts.pory"
	closemessage
# 416 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman3_2:
# 410 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Woman3_2
	goto CityClara_EventScript_Woman3_1


CityClara_EventScript_Gentleman::
# 421 "data/maps/CityClara/scripts.pory"
	lock
# 422 "data/maps/CityClara/scripts.pory"
	faceplayer
# 423 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Gentleman_2
# 427 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan
CityClara_EventScript_Gentleman_1:
# 429 "data/maps/CityClara/scripts.pory"
	closemessage
# 430 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Gentleman_2:
# 424 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan2
	goto CityClara_EventScript_Gentleman_1


CityClara_EventScript_OldWoman::
# 435 "data/maps/CityClara/scripts.pory"
	lock
# 436 "data/maps/CityClara/scripts.pory"
	faceplayer
# 437 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_OldWoman_2
# 441 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman
CityClara_EventScript_OldWoman_1:
# 443 "data/maps/CityClara/scripts.pory"
	closemessage
# 444 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldWoman_2:
# 438 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman2
	goto CityClara_EventScript_OldWoman_1


CityClara_EventScript_Lass::
# 450 "data/maps/CityClara/scripts.pory"
	lock
# 451 "data/maps/CityClara/scripts.pory"
	faceplayer
# 452 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Lass_2
# 456 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass
CityClara_EventScript_Lass_1:
# 458 "data/maps/CityClara/scripts.pory"
	closemessage
# 459 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Lass_2:
# 453 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass2
	goto CityClara_EventScript_Lass_1


CityClara_Script_Gardener::
# 465 "data/maps/CityClara/scripts.pory"
	lock
# 466 "data/maps/CityClara/scripts.pory"
	faceplayer
# 468 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_B, CityClara_Script_Gardener_2
# 480 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_RECEIVED_SCYTHE, CityClara_Script_Gardener_3
# 485 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenIntro
# 486 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 487 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 488 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenBeginYN, MSGBOX_YESNO
# 489 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CityClara_Script_Gardener_10
# 494 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_B
# 496 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenBegin
# 498 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerBeginGarden1
# 499 "data/maps/CityClara/scripts.pory"
	applymovement 21, CityClara_Movement_GardenerBeginGarden1
# 500 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 502 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeginGarden1
# 503 "data/maps/CityClara/scripts.pory"
	closemessage
# 505 "data/maps/CityClara/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 506 "data/maps/CityClara/scripts.pory"
	giveitem ITEM_SCYTHE, 1
# 508 "data/maps/CityClara/scripts.pory"
	setflag FLAG_RECEIVED_SCYTHE
# 510 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeginGarden2
# 511 "data/maps/CityClara/scripts.pory"
	closemessage
# 513 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 514 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerBeginGarden2
# 515 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 516 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceUp
# 517 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 519 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_DuringGarden
CityClara_Script_Gardener_1:
# 522 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_Script_Gardener_2:
# 470 "data/maps/CityClara/scripts.pory"
	compare VAR_TEMP_9, 9
	goto_if_eq CityClara_Script_Gardener_7
# 473 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_DuringGarden
# 474 "data/maps/CityClara/scripts.pory"
	closemessage
# 475 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceUp
# 476 "data/maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_3:
# 481 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_AfterGarden
# 482 "data/maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_7:
# 471 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_FinishGarden
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_10:
# 490 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenDecline
# 491 "data/maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_Gardener_1


CityClara_Script_FinishGarden::
# 528 "data/maps/CityClara/scripts.pory"
	clearflag FLAG_TEMP_B
# 530 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 531 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 533 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_FinishGarden1
# 534 "data/maps/CityClara/scripts.pory"
	closemessage
# 536 "data/maps/CityClara/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 537 "data/maps/CityClara/scripts.pory"
	switch VAR_RESULT
# 538 "data/maps/CityClara/scripts.pory"
	case DIR_NORTH, CityClara_Script_FinishGarden_3
# 541 "data/maps/CityClara/scripts.pory"
	case DIR_WEST, CityClara_Script_FinishGarden_4
# 551 "data/maps/CityClara/scripts.pory"
	case DIR_SOUTH, CityClara_Script_FinishGarden_5
# 561 "data/maps/CityClara/scripts.pory"
	case DIR_EAST, CityClara_Script_FinishGarden_6
# 572 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Script_FinishGarden_Text_1
# 573 "data/maps/CityClara/scripts.pory"
	closemessage
CityClara_Script_FinishGarden_1:
# 576 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_FinishGarden2
# 577 "data/maps/CityClara/scripts.pory"
	closemessage
# 579 "data/maps/CityClara/scripts.pory"
	applymovement 21, CityClara_Movement_GardenerFinishGarden
# 580 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 582 "data/maps/CityClara/scripts.pory"
	setflag FLAG_CASTALIA_GARDEN_COMPLETE
# 584 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_OpenGarden
# 585 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_Script_FinishGarden_3:
# 539 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Script_FinishGarden_Text_0
# 540 "data/maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_FinishGarden_1

CityClara_Script_FinishGarden_4:
# 542 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 543 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkLeft
# 544 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 545 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 546 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 547 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 548 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 549 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 550 "data/maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_FinishGarden_1

CityClara_Script_FinishGarden_5:
# 552 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 553 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkLeft
# 554 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 555 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 556 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 557 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 558 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 559 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 560 "data/maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_FinishGarden_1

CityClara_Script_FinishGarden_6:
# 562 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 563 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 564 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 565 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 566 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkLeft
# 567 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 568 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 569 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 570 "data/maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_FinishGarden_1


CityClara_EventScript_Leaf::
# 590 "data/maps/CityClara/scripts.pory"
	lock
# 591 "data/maps/CityClara/scripts.pory"
	faceplayer
# 592 "data/maps/CityClara/scripts.pory"
	compare VAR_LEAF_ROAD_TO_ARDOR, 1
	goto_if_lt CityClara_EventScript_Leaf_2
# 595 "data/maps/CityClara/scripts.pory"
	call CityClara_EventScript_LeafOnTheRoad
CityClara_EventScript_Leaf_1:
# 597 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Leaf_2:
# 593 "data/maps/CityClara/scripts.pory"
	call CityClara_EventScript_LeafBridge
	goto CityClara_EventScript_Leaf_1


CityClara_EventScript_LeafBridge::
# 602 "data/maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 603 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_LeafBridge
# 604 "data/maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 605 "data/maps/CityClara/scripts.pory"
	closemessage
# 606 "data/maps/CityClara/scripts.pory"
	applymovement 18, Common_Movement_FaceDown
# 607 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 608 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_LeafOnTheRoad::
# 613 "data/maps/CityClara/scripts.pory"
	setvar VAR_LEAF_ROAD_TO_ARDOR, 2
# 614 "data/maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 615 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_LeafOnTheRoad
# 616 "data/maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 617 "data/maps/CityClara/scripts.pory"
	closemessage
# 618 "data/maps/CityClara/scripts.pory"
	applymovement 18, Common_Movement_WalkUp6
# 619 "data/maps/CityClara/scripts.pory"
	applymovement 27, Common_Movement_WalkUp6
# 620 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 622 "data/maps/CityClara/scripts.pory"
	removeobject 18
# 623 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 18, 0, 0
# 624 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_INVISIBLE
# 625 "data/maps/CityClara/scripts.pory"
	addobject 18
# 626 "data/maps/CityClara/scripts.pory"
	showobjectat 18, MAP_CITY_CLARA
# 627 "data/maps/CityClara/scripts.pory"
	removeobject 27
# 628 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 27, 0, 0
# 629 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_INVISIBLE
# 630 "data/maps/CityClara/scripts.pory"
	addobject 27
# 631 "data/maps/CityClara/scripts.pory"
	showobjectat 27, MAP_CITY_CLARA
# 632 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_TownSign::
# 637 "data/maps/CityClara/scripts.pory"
	lock
# 638 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_TownSign
# 639 "data/maps/CityClara/scripts.pory"
	closemessage
# 640 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_Senex::
# 645 "data/maps/CityClara/scripts.pory"
	lockall
# 646 "data/maps/CityClara/scripts.pory"
	faceplayer
# 647 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex1, MSGBOX_YESNO
# 648 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_EventScript_Senex_2
# 652 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex3
CityClara_EventScript_Senex_1:
# 654 "data/maps/CityClara/scripts.pory"
	closemessage
# 655 "data/maps/CityClara/scripts.pory"
	releaseall
	end

CityClara_EventScript_Senex_2:
# 649 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex2
	goto CityClara_EventScript_Senex_1


CityClara_EventScript_Jessie::
# 660 "data/maps/CityClara/scripts.pory"
	lockall
# 661 "data/maps/CityClara/scripts.pory"
	faceplayer
# 662 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Jessie
# 663 "data/maps/CityClara/scripts.pory"
	closemessage
# 664 "data/maps/CityClara/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 665 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 666 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_James::
# 671 "data/maps/CityClara/scripts.pory"
	lockall
# 672 "data/maps/CityClara/scripts.pory"
	faceplayer
# 673 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_James
# 674 "data/maps/CityClara/scripts.pory"
	closemessage
# 675 "data/maps/CityClara/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 676 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 677 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_RocketBlockA::
# 682 "data/maps/CityClara/scripts.pory"
	lock
# 683 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 684 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 685 "data/maps/CityClara/scripts.pory"
	closemessage
# 686 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 687 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1A
# 688 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2A
# 689 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 690 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 691 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 692 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 693 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 694 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 695 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 696 "data/maps/CityClara/scripts.pory"
	closemessage
# 697 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1A
# 698 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2A
# 699 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 700 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 701 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_RocketBlockB::
# 705 "data/maps/CityClara/scripts.pory"
	lock
# 706 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 707 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 708 "data/maps/CityClara/scripts.pory"
	closemessage
# 709 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 710 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1B
# 711 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2B
# 712 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 713 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 714 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 715 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 716 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 717 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 718 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 719 "data/maps/CityClara/scripts.pory"
	closemessage
# 720 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1B
# 721 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2B
# 722 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 723 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 724 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket1::
# 728 "data/maps/CityClara/scripts.pory"
	lock
# 729 "data/maps/CityClara/scripts.pory"
	faceplayer
# 730 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket1
# 731 "data/maps/CityClara/scripts.pory"
	closemessage
# 732 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket2::
# 736 "data/maps/CityClara/scripts.pory"
	lock
# 737 "data/maps/CityClara/scripts.pory"
	faceplayer
# 738 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket2
# 739 "data/maps/CityClara/scripts.pory"
	closemessage
# 740 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_Script_GardenTree::
# 744 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 745 "data/maps/CityClara/scripts.pory"
	call EventScript_ScytheTree
	end


CityClara_Script_Nincada::
# 750 "data/maps/CityClara/scripts.pory"
	lock
# 751 "data/maps/CityClara/scripts.pory"
	faceplayer
# 752 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 753 "data/maps/CityClara/scripts.pory"
	playmoncry SPECIES_NINCADA, CRY_MODE_ENCOUNTER
# 754 "data/maps/CityClara/scripts.pory"
	waitmoncry
# 755 "data/maps/CityClara/scripts.pory"
	setwildbattle SPECIES_NINCADA, 23
# 756 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_9
# 757 "data/maps/CityClara/scripts.pory"
	dowildbattle
# 758 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Weedle::
# 763 "data/maps/CityClara/scripts.pory"
	lock
# 764 "data/maps/CityClara/scripts.pory"
	faceplayer
# 765 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 766 "data/maps/CityClara/scripts.pory"
	playmoncry SPECIES_WEEDLE, CRY_MODE_ENCOUNTER
# 767 "data/maps/CityClara/scripts.pory"
	waitmoncry
# 768 "data/maps/CityClara/scripts.pory"
	setwildbattle SPECIES_WEEDLE, 23
# 769 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_C
# 770 "data/maps/CityClara/scripts.pory"
	dowildbattle
# 771 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Wurmple::
# 776 "data/maps/CityClara/scripts.pory"
	lock
# 777 "data/maps/CityClara/scripts.pory"
	faceplayer
# 778 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 779 "data/maps/CityClara/scripts.pory"
	playmoncry SPECIES_WURMPLE, CRY_MODE_ENCOUNTER
# 780 "data/maps/CityClara/scripts.pory"
	waitmoncry
# 781 "data/maps/CityClara/scripts.pory"
	setwildbattle SPECIES_WURMPLE, 23
# 782 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_3
# 783 "data/maps/CityClara/scripts.pory"
	dowildbattle
# 784 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Caterpie::
# 789 "data/maps/CityClara/scripts.pory"
	lock
# 790 "data/maps/CityClara/scripts.pory"
	faceplayer
# 791 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 792 "data/maps/CityClara/scripts.pory"
	playmoncry SPECIES_CATERPIE, CRY_MODE_ENCOUNTER
# 793 "data/maps/CityClara/scripts.pory"
	waitmoncry
# 794 "data/maps/CityClara/scripts.pory"
	setwildbattle SPECIES_CATERPIE, 23
# 795 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_12
# 796 "data/maps/CityClara/scripts.pory"
	dowildbattle
# 797 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Paras::
# 802 "data/maps/CityClara/scripts.pory"
	lock
# 803 "data/maps/CityClara/scripts.pory"
	faceplayer
# 804 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 805 "data/maps/CityClara/scripts.pory"
	playmoncry SPECIES_PARAS, CRY_MODE_ENCOUNTER
# 806 "data/maps/CityClara/scripts.pory"
	waitmoncry
# 807 "data/maps/CityClara/scripts.pory"
	setwildbattle SPECIES_PARAS, 23
# 808 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_A
# 809 "data/maps/CityClara/scripts.pory"
	dowildbattle
# 810 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Venonat::
# 815 "data/maps/CityClara/scripts.pory"
	lock
# 816 "data/maps/CityClara/scripts.pory"
	faceplayer
# 817 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 818 "data/maps/CityClara/scripts.pory"
	playmoncry SPECIES_VENONAT, CRY_MODE_ENCOUNTER
# 819 "data/maps/CityClara/scripts.pory"
	waitmoncry
# 820 "data/maps/CityClara/scripts.pory"
	setwildbattle SPECIES_VENONAT, 23
# 821 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_D
# 822 "data/maps/CityClara/scripts.pory"
	dowildbattle
# 823 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_IncrementGardenVar::
# 829 "data/maps/CityClara/scripts.pory"
	switch VAR_TEMP_9
# 830 "data/maps/CityClara/scripts.pory"
	case 0, CityClara_Script_IncrementGardenVar_3
# 832 "data/maps/CityClara/scripts.pory"
	case 1, CityClara_Script_IncrementGardenVar_4
# 834 "data/maps/CityClara/scripts.pory"
	case 2, CityClara_Script_IncrementGardenVar_5
# 836 "data/maps/CityClara/scripts.pory"
	case 3, CityClara_Script_IncrementGardenVar_6
# 838 "data/maps/CityClara/scripts.pory"
	case 4, CityClara_Script_IncrementGardenVar_7
# 840 "data/maps/CityClara/scripts.pory"
	case 5, CityClara_Script_IncrementGardenVar_8
# 842 "data/maps/CityClara/scripts.pory"
	case 6, CityClara_Script_IncrementGardenVar_9
# 844 "data/maps/CityClara/scripts.pory"
	case 7, CityClara_Script_IncrementGardenVar_10
# 846 "data/maps/CityClara/scripts.pory"
	case 8, CityClara_Script_IncrementGardenVar_11
# 849 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Script_IncrementGardenVar_Text_0
# 850 "data/maps/CityClara/scripts.pory"
	closemessage
CityClara_Script_IncrementGardenVar_1:
	return

CityClara_Script_IncrementGardenVar_3:
# 831 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 1
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_4:
# 833 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 2
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_5:
# 835 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 3
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_6:
# 837 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 4
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_7:
# 839 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 5
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_8:
# 841 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 6
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_9:
# 843 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 7
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_10:
# 845 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 8
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_11:
# 847 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 9
	goto CityClara_Script_IncrementGardenVar_1


# 855 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1A:
# 856 "data/maps/CityClara/scripts.pory"
	walk_down
# 857 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 860 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2A:
# 861 "data/maps/CityClara/scripts.pory"
	walk_down
# 862 "data/maps/CityClara/scripts.pory"
	walk_left
	step_end

# 865 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceLeft:
# 866 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 869 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceRight:
# 870 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 873 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1A:
# 874 "data/maps/CityClara/scripts.pory"
	walk_up
# 875 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 878 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2A:
# 879 "data/maps/CityClara/scripts.pory"
	walk_right
# 880 "data/maps/CityClara/scripts.pory"
	walk_up
# 881 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 884 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerReturn:
# 885 "data/maps/CityClara/scripts.pory"
	walk_down
# 885 "data/maps/CityClara/scripts.pory"
	walk_down
	step_end

# 888 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1B:
# 889 "data/maps/CityClara/scripts.pory"
	walk_down
# 890 "data/maps/CityClara/scripts.pory"
	walk_right
	step_end

# 893 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2B:
# 894 "data/maps/CityClara/scripts.pory"
	walk_down
# 895 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 898 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1B:
# 899 "data/maps/CityClara/scripts.pory"
	walk_left
# 900 "data/maps/CityClara/scripts.pory"
	walk_up
# 901 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 904 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2B:
# 905 "data/maps/CityClara/scripts.pory"
	walk_up
# 906 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 909 "data/maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_Player:
# 910 "data/maps/CityClara/scripts.pory"
	walk_right
# 910 "data/maps/CityClara/scripts.pory"
	walk_right
# 910 "data/maps/CityClara/scripts.pory"
	walk_right
# 911 "data/maps/CityClara/scripts.pory"
	walk_up
	step_end

# 914 "data/maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_ScottExit:
# 915 "data/maps/CityClara/scripts.pory"
	walk_down
# 915 "data/maps/CityClara/scripts.pory"
	walk_down
# 915 "data/maps/CityClara/scripts.pory"
	walk_down
# 916 "data/maps/CityClara/scripts.pory"
	walk_left
# 916 "data/maps/CityClara/scripts.pory"
	walk_left
# 916 "data/maps/CityClara/scripts.pory"
	walk_left
# 916 "data/maps/CityClara/scripts.pory"
	walk_left
# 916 "data/maps/CityClara/scripts.pory"
	walk_left
# 916 "data/maps/CityClara/scripts.pory"
	walk_left
# 916 "data/maps/CityClara/scripts.pory"
	walk_left
	step_end

# 919 "data/maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_LeafExit:
# 920 "data/maps/CityClara/scripts.pory"
	walk_up
# 920 "data/maps/CityClara/scripts.pory"
	walk_up
# 920 "data/maps/CityClara/scripts.pory"
	walk_up
# 920 "data/maps/CityClara/scripts.pory"
	walk_up
# 920 "data/maps/CityClara/scripts.pory"
	walk_up
	step_end

# 923 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerBeginGarden1:
# 924 "data/maps/CityClara/scripts.pory"
	walk_up
# 924 "data/maps/CityClara/scripts.pory"
	walk_up
# 925 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 928 "data/maps/CityClara/scripts.pory"
CityClara_Movement_GardenerBeginGarden1:
# 929 "data/maps/CityClara/scripts.pory"
	walk_up
# 930 "data/maps/CityClara/scripts.pory"
	walk_left
# 931 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 934 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerBeginGarden2:
# 935 "data/maps/CityClara/scripts.pory"
	walk_right
# 936 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 939 "data/maps/CityClara/scripts.pory"
CityClara_Movement_GardenerFinishGarden:
# 940 "data/maps/CityClara/scripts.pory"
	walk_left
# 941 "data/maps/CityClara/scripts.pory"
	face_up
	step_end

CityClara_Script_FinishGarden_Text_0:
# 539 "data/maps/CityClara/scripts.pory"
	.string "VAR_RESULT DIR_NORTH$"

CityClara_Script_FinishGarden_Text_1:
# 572 "data/maps/CityClara/scripts.pory"
	.string "VAR_RESULT OOB$"

CityClara_Script_IncrementGardenVar_Text_0:
# 849 "data/maps/CityClara/scripts.pory"
	.string "VAR_TEMP_9 OOB$"

CityClara_Text_ClubSign::
# 944 "data/maps/CityClara/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_TownSign::
# 948 "data/maps/CityClara/scripts.pory"
	.string "City Saeclara built upon the lake$"

CityClara_Text_CannaWoman::
# 952 "data/maps/CityClara/scripts.pory"
	.string "You see this building here? The Chronic\n"
	.string "Club? They got me so high I can barely\l"
	.string "walk!$"

CityClara_Text_LeafBridge::
# 956 "data/maps/CityClara/scripts.pory"
	.string "This line is so long and it's not moving!\n"
	.string "We need to find a way inside, and fast.$"

CityClara_Text_GreenSuit::
# 960 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_GreenSuit2::
# 964 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_FatMan::
# 968 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_FatMan2::
# 972 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_WomanA::
# 976 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_WomanA2::
# 980 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_RedWoman::
# 984 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_RedWoman2::
# 988 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldMan::
# 992 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldMan2::
# 996 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldWoman::
# 1000 "data/maps/CityClara/scripts.pory"
	.string "Is Mew really here? Am I really here?\n"
	.string "This life feels like reflections on\l"
	.string "water...$"

CityClara_Text_OldWoman2::
# 1004 "data/maps/CityClara/scripts.pory"
	.string "Am I still here, or am I an echo?$"

CityClara_Text_Lass::
# 1008 "data/maps/CityClara/scripts.pory"
	.string "I want to go play in the garden but the\n"
	.string "gardener says it's dangerous now.$"

CityClara_Text_Lass2::
# 1012 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Senex1::
# 1016 "data/maps/CityClara/scripts.pory"
	.string "My boy come here, or no, are you a girl?\n"
	.string "Forgive me for my eyes are old as I have\l"
	.string "grown. Tell me would you ask me to speak\l"
	.string "and tell to you the tale of this city?$"

CityClara_Text_Senex2::
# 1020 "data/maps/CityClara/scripts.pory"
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
# 1024 "data/maps/CityClara/scripts.pory"
	.string "No one has time for history these\n"
	.string "days...$"

CityClara_Text_RocketBlock1::
# 1028 "data/maps/CityClara/scripts.pory"
	.string "Hey You!$"

CityClara_Text_RocketBlock2::
# 1032 "data/maps/CityClara/scripts.pory"
	.string "Stop right there! Take not one more\n"
	.string "stop. This road is closed, we shall let\l"
	.string "no one pass.$"

CityClara_Text_RocketBlock3::
# 1036 "data/maps/CityClara/scripts.pory"
	.string "By order of the Rocket High Command\n"
	.string "only party business will be allowed\l"
	.string "until our mission has been completed.\l"
	.string "Now get thee gone, noone wants more\l"
	.string "trouble$"

CityClara_Text_Rocket1::
# 1040 "data/maps/CityClara/scripts.pory"
	.string "The Rocket Party helped me buy a home!\n"
	.string "Standing watch on the road's the very\l"
	.string "least I can do to pay back our dear\l"
	.string "leader.$"

CityClara_Text_Rocket2::
# 1044 "data/maps/CityClara/scripts.pory"
	.string "The party only wants the very best\n"
	.string "people to represent their interests.\l"
	.string "Perhaps with time, and practice, and\l"
	.string "some luck, you could one day wear our\l"
	.string "great uniform. Never forget the party's\l"
	.string "here for you.$"

CityClara_Text_Jessie::
# 1048 "data/maps/CityClara/scripts.pory"
	.string "This church is being occupied by the\n"
	.string "Rocket Party and we're watching the\l"
	.string "door. You'll have to get in line and wait\l"
	.string "your turn then pay the entrance fee to\l"
	.string "step inside.$"

CityClara_Text_James::
# 1052 "data/maps/CityClara/scripts.pory"
	.string "This town is so antique it's comical.\n"
	.string "Look at all these people waiting in line\l"
	.string "just for a glimpse of some old pokemon.\l"
	.string "The city is a better place to live and\l"
	.string "party people are superior.$"

CityClara_Text_Leaf1::
# 1056 "data/maps/CityClara/scripts.pory"
	.string "Looks like we weren't the only ones who\n"
	.string "came to Castalia to catch a glimpse of\l"
	.string "Mew. The line to enter church is super\l"
	.string "long!$"

CityClara_Text_Scott1::
# 1060 "data/maps/CityClara/scripts.pory"
	.string "It's not moving either. Those\n"
	.string "government stooges have it blocked up!\l"
	.string "If you ask me it's no use waiting in that\l"
	.string "line right now. We're better off sitting\l"
	.string "in comfort at the Lotus Club until the\l"
	.string "line dies down. That's where I'm going!\l"
	.string "Why don't you join me? I'll buy us all\l"
	.string "Lotus and let time pass.$"

CityClara_Text_Leaf2::
# 1064 "data/maps/CityClara/scripts.pory"
	.string "There's no way after traveling out here\n"
	.string "that we're going to go sit in a club\l"
	.string "while Mew herself awaits us in that\l"
	.string "Church! Come with me {PLAYER} we need\l"
	.string "to find a way to get into that Church\l"
	.string "ASAP!$"

CityClara_Text_Woman3_1::
# 1068 "data/maps/CityClara/scripts.pory"
	.string "The line is long, but the wait is worth\n"
	.string "it.$"

CityClara_Text_Woman3_2::
# 1072 "data/maps/CityClara/scripts.pory"
	.string "I can't believe how fast time's flying\n"
	.string "by! I still feel like that same little\l"
	.string "school girl...$"

CityClara_Text_Gardener_BeforeGardenIntro::
# 1076 "data/maps/CityClara/scripts.pory"
	.string "Oh no! My garden has been overrun by\n"
	.string "pests and weeds! I don't know what to\l"
	.string "do!$"

CityClara_Text_Gardener_BeforeGardenBeginYN::
# 1080 "data/maps/CityClara/scripts.pory"
	.string "Oh hey! You're a young, fit, capable boy.\n"
	.string "Will you help me clean up the garden?\l"
	.string "Please?$"

CityClara_Text_Gardener_BeforeGardenDecline::
# 1084 "data/maps/CityClara/scripts.pory"
	.string "I understand. It's not your job. Take\n"
	.string "care.$"

CityClara_Text_Gardener_BeforeGardenBegin::
# 1088 "data/maps/CityClara/scripts.pory"
	.string "Thank you so much! Let me show you\n"
	.string "inside.$"

CityClara_Text_Gardener_BeginGarden1::
# 1092 "data/maps/CityClara/scripts.pory"
	.string "Welcome to the Castalia Garden! In\n"
	.string "better times we grow beautiful things\l"
	.string "but now the garden looks like such a\l"
	.string "mess. Please get rid of the pests that\l"
	.string "have moved in and use this Scythe to\l"
	.string "cut down the small trees.$"

CityClara_Text_Gardener_BeginGarden2::
# 1096 "data/maps/CityClara/scripts.pory"
	.string "Now get to work! Good luck! You can do\n"
	.string "it!$"

CityClara_Text_Gardener_DuringGarden::
# 1100 "data/maps/CityClara/scripts.pory"
	.string "You're not done yet. The garden's still a\n"
	.string "mess!$"

CityClara_Text_Gardener_AfterGarden::
# 1104 "data/maps/CityClara/scripts.pory"
	.string "Thank you again for cleaining the\n"
	.string "garden.$"

CityClara_Text_Gardener_FinishGarden1::
# 1108 "data/maps/CityClara/scripts.pory"
	.string "You did it! You cut down every weed and\n"
	.string "fully resolved the infestation! As\l"
	.string "thanks I want you to keep that Sharp\l"
	.string "Scythe.$"

CityClara_Text_Gardener_FinishGarden2::
# 1112 "data/maps/CityClara/scripts.pory"
	.string "Come back and visit the garden later.$"

CityClara_Text_LeafOnTheRoad::
# 1116 "data/maps/CityClara/scripts.pory"
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
