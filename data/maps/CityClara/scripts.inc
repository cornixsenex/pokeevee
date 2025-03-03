CityClara_MapScripts::
# 40 "data//maps/CityClara/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 80 "data//maps/CityClara/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 42 "data//maps/CityClara/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_CityClara
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
# 71 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_CASTALIA_GARDEN_COMPLETE, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 74 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_B, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
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
# 72 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_OpenGarden
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_22

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 75 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_DuringGarden
	return

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME:
# 81 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_9, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_2
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 84 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_3, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_5
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 87 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_A, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_8
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_7:
# 90 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_E, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_11
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 93 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_D, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_14
CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 96 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_C, CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_16
	return

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 82 "data//maps/CityClara/scripts.pory"
	removeobject 31
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_1

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 85 "data//maps/CityClara/scripts.pory"
	removeobject 32
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_4

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_8:
# 88 "data//maps/CityClara/scripts.pory"
	removeobject 33
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_7

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_11:
# 91 "data//maps/CityClara/scripts.pory"
	removeobject 34
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_10

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 94 "data//maps/CityClara/scripts.pory"
	removeobject 35
	goto CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_13

CityClara_MapScripts_MAP_SCRIPT_ON_RESUME_16:
# 97 "data//maps/CityClara/scripts.pory"
	removeobject 36
	return


CityClara_Script_ActaEchonaTransition::
# 106 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 1
# 107 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 108 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SilvaTransition::
# 112 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 2
# 113 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 114 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ViaFideliumTransition::
# 118 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 3
# 119 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 120 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SinusClarusTransition::
# 124 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 4
# 125 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 126 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_CastaliaTransition::
# 130 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 5
# 131 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 132 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_DeltaDraciTransition::
# 136 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 6
# 137 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 138 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ShowMewScene::
# 144 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 1, 62, 10
# 145 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 147 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 3, 65, 10
# 148 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 150 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 14, 34, 22
# 151 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_DOWN
# 153 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 15, 36, 22
# 154 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_DOWN
# 156 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 16, 35, 22
# 157 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_FACE_DOWN
# 159 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 4, 35, 23
# 160 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 162 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 5, 35, 24
# 163 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 165 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 6, 35, 25
# 166 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 168 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 9, 35, 26
# 169 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 171 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 8, 35, 27
# 172 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 174 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 10, 35, 28
# 175 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
	return


CityClara_Script_ShowLeafEtScott::
# 181 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 26, 30, 37
# 182 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_DOWN
# 184 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 31, 37
# 185 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 187 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 32, 37
# 188 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_ShowLeaf::
# 194 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 32, 31
# 195 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 197 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 31, 31
# 198 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_OpenGarden::
# 205 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 21, 47, 40
# 206 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 21, MOVEMENT_TYPE_FACE_UP
# 209 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 28, 0, 0
# 210 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 212 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 29, 0, 0
# 213 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 215 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 30, 0, 0
# 216 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 218 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 31, 0, 0
# 219 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 221 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 32, 0, 0
# 222 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 224 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 33, 0, 0
# 225 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 227 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 34, 0, 0
# 228 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 230 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 35, 0, 0
# 231 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 233 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 36, 0, 0
# 234 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
	return


CityClara_Script_DuringGarden::
# 240 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 21, 48, 40
# 241 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 21, MOVEMENT_TYPE_FACE_UP
	return


CityClara_Script_LeafEtScottSceneA::
# 247 "data//maps/CityClara/scripts.pory"
	lockall
# 248 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 249 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 250 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 252 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottSceneB::
# 257 "data//maps/CityClara/scripts.pory"
	lockall
# 258 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 259 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 260 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 261 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 262 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 264 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottScene::
# 270 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_LeafEtScottScene_Player
# 271 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 273 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 274 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf1
# 275 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 277 "data//maps/CityClara/scripts.pory"
	load_field_pic 33, 190, 98
# 278 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Scott1
# 279 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 33
# 280 "data//maps/CityClara/scripts.pory"
	closemessage
# 282 "data//maps/CityClara/scripts.pory"
	applymovement 26, CityClara_Movement_LeafEtScottScene_ScottExit
# 283 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 285 "data//maps/CityClara/scripts.pory"
	removeobject 26
# 286 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 26, 0, 0
# 287 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_INVISIBLE
# 288 "data//maps/CityClara/scripts.pory"
	addobject 26
# 290 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 291 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf2
# 292 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 293 "data//maps/CityClara/scripts.pory"
	closemessage
# 295 "data//maps/CityClara/scripts.pory"
	applymovement 18, CityClara_Movement_LeafEtScottScene_LeafExit
# 296 "data//maps/CityClara/scripts.pory"
	applymovement 27, CityClara_Movement_LeafEtScottScene_LeafExit
# 297 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 299 "data//maps/CityClara/scripts.pory"
	removeobject 18
# 300 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 32, 31
# 301 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 302 "data//maps/CityClara/scripts.pory"
	addobject 18
# 303 "data//maps/CityClara/scripts.pory"
	showobjectat 18, MAP_CITY_CLARA
# 305 "data//maps/CityClara/scripts.pory"
	removeobject 27
# 306 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 31, 31
# 307 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
# 308 "data//maps/CityClara/scripts.pory"
	addobject 27
# 309 "data//maps/CityClara/scripts.pory"
	showobjectat 27, MAP_CITY_CLARA
# 311 "data//maps/CityClara/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 1
# 313 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_ClubSign::
# 319 "data//maps/CityClara/scripts.pory"
	lock
# 320 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_ClubSign
# 321 "data//maps/CityClara/scripts.pory"
	closemessage
# 322 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_CannaWoman::
# 327 "data//maps/CityClara/scripts.pory"
	lockall
# 328 "data//maps/CityClara/scripts.pory"
	faceplayer
# 329 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_CannaWoman
# 330 "data//maps/CityClara/scripts.pory"
	closemessage
# 331 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_Man2::
# 336 "data//maps/CityClara/scripts.pory"
	lock
# 337 "data//maps/CityClara/scripts.pory"
	faceplayer
# 338 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Man2_2
# 342 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit
CityClara_EventScript_Man2_1:
# 344 "data//maps/CityClara/scripts.pory"
	closemessage
# 345 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Man2_2:
# 339 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit2
	goto CityClara_EventScript_Man2_1


CityClara_EventScript_FatMan::
# 350 "data//maps/CityClara/scripts.pory"
	lock
# 351 "data//maps/CityClara/scripts.pory"
	faceplayer
# 352 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_FatMan_2
# 356 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan
CityClara_EventScript_FatMan_1:
# 358 "data//maps/CityClara/scripts.pory"
	closemessage
# 359 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_FatMan_2:
# 353 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan2
	goto CityClara_EventScript_FatMan_1


CityClara_EventScript_Woman1::
# 364 "data//maps/CityClara/scripts.pory"
	lock
# 365 "data//maps/CityClara/scripts.pory"
	faceplayer
# 366 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman1_2
# 370 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA
CityClara_EventScript_Woman1_1:
# 372 "data//maps/CityClara/scripts.pory"
	closemessage
# 373 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman1_2:
# 367 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA2
	goto CityClara_EventScript_Woman1_1


CityClara_EventScript_Woman5::
# 378 "data//maps/CityClara/scripts.pory"
	lock
# 379 "data//maps/CityClara/scripts.pory"
	faceplayer
# 380 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman5_2
# 384 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman
CityClara_EventScript_Woman5_1:
# 386 "data//maps/CityClara/scripts.pory"
	closemessage
# 387 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman5_2:
# 381 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman2
	goto CityClara_EventScript_Woman5_1


CityClara_EventScript_Woman3::
# 392 "data//maps/CityClara/scripts.pory"
	lock
# 393 "data//maps/CityClara/scripts.pory"
	faceplayer
# 394 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman3_2
# 398 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Woman3_1
CityClara_EventScript_Woman3_1:
# 400 "data//maps/CityClara/scripts.pory"
	closemessage
# 401 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman3_2:
# 395 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Woman3_2
	goto CityClara_EventScript_Woman3_1


CityClara_EventScript_Gentleman::
# 406 "data//maps/CityClara/scripts.pory"
	lock
# 407 "data//maps/CityClara/scripts.pory"
	faceplayer
# 408 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Gentleman_2
# 412 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan
CityClara_EventScript_Gentleman_1:
# 414 "data//maps/CityClara/scripts.pory"
	closemessage
# 415 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Gentleman_2:
# 409 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan2
	goto CityClara_EventScript_Gentleman_1


CityClara_EventScript_OldWoman::
# 420 "data//maps/CityClara/scripts.pory"
	lock
# 421 "data//maps/CityClara/scripts.pory"
	faceplayer
# 422 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_OldWoman_2
# 426 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman
CityClara_EventScript_OldWoman_1:
# 428 "data//maps/CityClara/scripts.pory"
	closemessage
# 429 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldWoman_2:
# 423 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman2
	goto CityClara_EventScript_OldWoman_1


CityClara_EventScript_Lass::
# 435 "data//maps/CityClara/scripts.pory"
	lock
# 436 "data//maps/CityClara/scripts.pory"
	faceplayer
# 437 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Lass_2
# 441 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass
CityClara_EventScript_Lass_1:
# 443 "data//maps/CityClara/scripts.pory"
	closemessage
# 444 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Lass_2:
# 438 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass2
	goto CityClara_EventScript_Lass_1


CityClara_Script_Gardener::
# 450 "data//maps/CityClara/scripts.pory"
	lock
# 451 "data//maps/CityClara/scripts.pory"
	faceplayer
# 453 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_B, CityClara_Script_Gardener_2
# 465 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_RECEIVED_SCYTHE, CityClara_Script_Gardener_3
# 470 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenIntro
# 471 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 472 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 473 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenBeginYN, MSGBOX_YESNO
# 474 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CityClara_Script_Gardener_10
# 479 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_B
# 481 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenBegin
# 483 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerBeginGarden1
# 484 "data//maps/CityClara/scripts.pory"
	applymovement 21, CityClara_Movement_GardenerBeginGarden1
# 485 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 487 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeginGarden1
# 488 "data//maps/CityClara/scripts.pory"
	closemessage
# 490 "data//maps/CityClara/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 491 "data//maps/CityClara/scripts.pory"
	giveitem ITEM_SCYTHE, 1
# 493 "data//maps/CityClara/scripts.pory"
	setflag FLAG_RECEIVED_SCYTHE
# 495 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeginGarden2
# 496 "data//maps/CityClara/scripts.pory"
	closemessage
# 498 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 499 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerBeginGarden2
# 500 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 501 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceUp
# 502 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 504 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_DuringGarden
CityClara_Script_Gardener_1:
# 507 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_Script_Gardener_2:
# 455 "data//maps/CityClara/scripts.pory"
	compare VAR_TEMP_9, 9
	goto_if_eq CityClara_Script_Gardener_7
# 458 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_DuringGarden
# 459 "data//maps/CityClara/scripts.pory"
	closemessage
# 460 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceUp
# 461 "data//maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_3:
# 466 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_AfterGarden
# 467 "data//maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_7:
# 456 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_FinishGarden
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_10:
# 475 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenDecline
# 476 "data//maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_Gardener_1


CityClara_Script_FinishGarden::
# 513 "data//maps/CityClara/scripts.pory"
	clearflag FLAG_TEMP_B
# 515 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 516 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 518 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_FinishGarden1
# 519 "data//maps/CityClara/scripts.pory"
	closemessage
# 521 "data//maps/CityClara/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 522 "data//maps/CityClara/scripts.pory"
	switch VAR_RESULT
# 523 "data//maps/CityClara/scripts.pory"
	case DIR_NORTH, CityClara_Script_FinishGarden_3
# 526 "data//maps/CityClara/scripts.pory"
	case DIR_WEST, CityClara_Script_FinishGarden_4
# 536 "data//maps/CityClara/scripts.pory"
	case DIR_SOUTH, CityClara_Script_FinishGarden_5
# 546 "data//maps/CityClara/scripts.pory"
	case DIR_EAST, CityClara_Script_FinishGarden_6
# 557 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Script_FinishGarden_Text_1
# 558 "data//maps/CityClara/scripts.pory"
	closemessage
CityClara_Script_FinishGarden_1:
# 561 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_FinishGarden2
# 562 "data//maps/CityClara/scripts.pory"
	closemessage
# 564 "data//maps/CityClara/scripts.pory"
	applymovement 21, CityClara_Movement_GardenerFinishGarden
# 565 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 567 "data//maps/CityClara/scripts.pory"
	setflag FLAG_CASTALIA_GARDEN_COMPLETE
# 569 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_OpenGarden
# 570 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_Script_FinishGarden_3:
# 524 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Script_FinishGarden_Text_0
# 525 "data//maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_FinishGarden_1

CityClara_Script_FinishGarden_4:
# 527 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 528 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkLeft
# 529 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 530 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 531 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 532 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 533 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 534 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 535 "data//maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_FinishGarden_1

CityClara_Script_FinishGarden_5:
# 537 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 538 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkLeft
# 539 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 540 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 541 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 542 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 543 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 544 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 545 "data//maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_FinishGarden_1

CityClara_Script_FinishGarden_6:
# 547 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 548 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 549 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 550 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 551 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkLeft
# 552 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 553 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 554 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 555 "data//maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_FinishGarden_1


CityClara_EventScript_LeafBridge::
# 575 "data//maps/CityClara/scripts.pory"
	lock
# 576 "data//maps/CityClara/scripts.pory"
	faceplayer
# 577 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 584 "data//maps/CityClara/scripts.pory"
	closemessage
# 585 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 586 "data//maps/CityClara/scripts.pory"
	applymovement 22, Common_Movement_FaceDown
# 587 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 588 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_TownSign::
# 593 "data//maps/CityClara/scripts.pory"
	lock
# 594 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_TownSign
# 595 "data//maps/CityClara/scripts.pory"
	closemessage
# 596 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_Senex::
# 601 "data//maps/CityClara/scripts.pory"
	lockall
# 602 "data//maps/CityClara/scripts.pory"
	faceplayer
# 603 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex1, MSGBOX_YESNO
# 604 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_EventScript_Senex_2
# 608 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex3
CityClara_EventScript_Senex_1:
# 610 "data//maps/CityClara/scripts.pory"
	closemessage
# 611 "data//maps/CityClara/scripts.pory"
	releaseall
	end

CityClara_EventScript_Senex_2:
# 605 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex2
	goto CityClara_EventScript_Senex_1


CityClara_EventScript_Jessie::
# 616 "data//maps/CityClara/scripts.pory"
	lockall
# 617 "data//maps/CityClara/scripts.pory"
	faceplayer
# 618 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Jessie
# 619 "data//maps/CityClara/scripts.pory"
	closemessage
# 620 "data//maps/CityClara/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 621 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 622 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_James::
# 627 "data//maps/CityClara/scripts.pory"
	lockall
# 628 "data//maps/CityClara/scripts.pory"
	faceplayer
# 629 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_James
# 630 "data//maps/CityClara/scripts.pory"
	closemessage
# 631 "data//maps/CityClara/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 632 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 633 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_RocketBlockA::
# 638 "data//maps/CityClara/scripts.pory"
	lock
# 639 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 640 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 641 "data//maps/CityClara/scripts.pory"
	closemessage
# 642 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 643 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1A
# 644 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2A
# 645 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 646 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 647 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 648 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 649 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 650 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 651 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 652 "data//maps/CityClara/scripts.pory"
	closemessage
# 653 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1A
# 654 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2A
# 655 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 656 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 657 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_RocketBlockB::
# 661 "data//maps/CityClara/scripts.pory"
	lock
# 662 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 663 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 664 "data//maps/CityClara/scripts.pory"
	closemessage
# 665 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 666 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1B
# 667 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2B
# 668 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 669 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 670 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 671 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 672 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 673 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 674 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 675 "data//maps/CityClara/scripts.pory"
	closemessage
# 676 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1B
# 677 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2B
# 678 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 679 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 680 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket1::
# 684 "data//maps/CityClara/scripts.pory"
	lock
# 685 "data//maps/CityClara/scripts.pory"
	faceplayer
# 686 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket1
# 687 "data//maps/CityClara/scripts.pory"
	closemessage
# 688 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket2::
# 692 "data//maps/CityClara/scripts.pory"
	lock
# 693 "data//maps/CityClara/scripts.pory"
	faceplayer
# 694 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket2
# 695 "data//maps/CityClara/scripts.pory"
	closemessage
# 696 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_Script_GardenTree::
# 700 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 701 "data//maps/CityClara/scripts.pory"
	call EventScript_ScytheTree
	end


CityClara_Script_Nincada::
# 706 "data//maps/CityClara/scripts.pory"
	lock
# 707 "data//maps/CityClara/scripts.pory"
	faceplayer
# 708 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 709 "data//maps/CityClara/scripts.pory"
	playmoncry SPECIES_NINCADA, CRY_MODE_ENCOUNTER
# 710 "data//maps/CityClara/scripts.pory"
	waitmoncry
# 711 "data//maps/CityClara/scripts.pory"
	setwildbattle SPECIES_NINCADA, 23
# 712 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_9
# 713 "data//maps/CityClara/scripts.pory"
	dowildbattle
# 714 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Weedle::
# 719 "data//maps/CityClara/scripts.pory"
	lock
# 720 "data//maps/CityClara/scripts.pory"
	faceplayer
# 721 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 722 "data//maps/CityClara/scripts.pory"
	playmoncry SPECIES_WEEDLE, CRY_MODE_ENCOUNTER
# 723 "data//maps/CityClara/scripts.pory"
	waitmoncry
# 724 "data//maps/CityClara/scripts.pory"
	setwildbattle SPECIES_WEEDLE, 23
# 725 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_C
# 726 "data//maps/CityClara/scripts.pory"
	dowildbattle
# 727 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Wurmple::
# 732 "data//maps/CityClara/scripts.pory"
	lock
# 733 "data//maps/CityClara/scripts.pory"
	faceplayer
# 734 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 735 "data//maps/CityClara/scripts.pory"
	playmoncry SPECIES_WURMPLE, CRY_MODE_ENCOUNTER
# 736 "data//maps/CityClara/scripts.pory"
	waitmoncry
# 737 "data//maps/CityClara/scripts.pory"
	setwildbattle SPECIES_WURMPLE, 23
# 738 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_3
# 739 "data//maps/CityClara/scripts.pory"
	dowildbattle
# 740 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Caterpie::
# 745 "data//maps/CityClara/scripts.pory"
	lock
# 746 "data//maps/CityClara/scripts.pory"
	faceplayer
# 747 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 748 "data//maps/CityClara/scripts.pory"
	playmoncry SPECIES_CATERPIE, CRY_MODE_ENCOUNTER
# 749 "data//maps/CityClara/scripts.pory"
	waitmoncry
# 750 "data//maps/CityClara/scripts.pory"
	setwildbattle SPECIES_CATERPIE, 23
# 751 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_E
# 752 "data//maps/CityClara/scripts.pory"
	dowildbattle
# 753 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Paras::
# 758 "data//maps/CityClara/scripts.pory"
	lock
# 759 "data//maps/CityClara/scripts.pory"
	faceplayer
# 760 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 761 "data//maps/CityClara/scripts.pory"
	playmoncry SPECIES_PARAS, CRY_MODE_ENCOUNTER
# 762 "data//maps/CityClara/scripts.pory"
	waitmoncry
# 763 "data//maps/CityClara/scripts.pory"
	setwildbattle SPECIES_PARAS, 23
# 764 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_A
# 765 "data//maps/CityClara/scripts.pory"
	dowildbattle
# 766 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Venonat::
# 771 "data//maps/CityClara/scripts.pory"
	lock
# 772 "data//maps/CityClara/scripts.pory"
	faceplayer
# 773 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 774 "data//maps/CityClara/scripts.pory"
	playmoncry SPECIES_VENONAT, CRY_MODE_ENCOUNTER
# 775 "data//maps/CityClara/scripts.pory"
	waitmoncry
# 776 "data//maps/CityClara/scripts.pory"
	setwildbattle SPECIES_VENONAT, 23
# 777 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_D
# 778 "data//maps/CityClara/scripts.pory"
	dowildbattle
# 779 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_IncrementGardenVar::
# 785 "data//maps/CityClara/scripts.pory"
	switch VAR_TEMP_9
# 786 "data//maps/CityClara/scripts.pory"
	case 0, CityClara_Script_IncrementGardenVar_3
# 788 "data//maps/CityClara/scripts.pory"
	case 1, CityClara_Script_IncrementGardenVar_4
# 790 "data//maps/CityClara/scripts.pory"
	case 2, CityClara_Script_IncrementGardenVar_5
# 792 "data//maps/CityClara/scripts.pory"
	case 3, CityClara_Script_IncrementGardenVar_6
# 794 "data//maps/CityClara/scripts.pory"
	case 4, CityClara_Script_IncrementGardenVar_7
# 796 "data//maps/CityClara/scripts.pory"
	case 5, CityClara_Script_IncrementGardenVar_8
# 798 "data//maps/CityClara/scripts.pory"
	case 6, CityClara_Script_IncrementGardenVar_9
# 800 "data//maps/CityClara/scripts.pory"
	case 7, CityClara_Script_IncrementGardenVar_10
# 802 "data//maps/CityClara/scripts.pory"
	case 8, CityClara_Script_IncrementGardenVar_11
# 805 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Script_IncrementGardenVar_Text_0
# 806 "data//maps/CityClara/scripts.pory"
	closemessage
CityClara_Script_IncrementGardenVar_1:
	return

CityClara_Script_IncrementGardenVar_3:
# 787 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 1
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_4:
# 789 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 2
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_5:
# 791 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 3
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_6:
# 793 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 4
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_7:
# 795 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 5
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_8:
# 797 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 6
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_9:
# 799 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 7
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_10:
# 801 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 8
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_11:
# 803 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 9
	goto CityClara_Script_IncrementGardenVar_1


# 812 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1A:
# 813 "data//maps/CityClara/scripts.pory"
	walk_down
# 814 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 817 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2A:
# 818 "data//maps/CityClara/scripts.pory"
	walk_down
# 819 "data//maps/CityClara/scripts.pory"
	walk_left
	step_end

# 822 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceLeft:
# 823 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 826 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceRight:
# 827 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 830 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1A:
# 831 "data//maps/CityClara/scripts.pory"
	walk_up
# 832 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 835 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2A:
# 836 "data//maps/CityClara/scripts.pory"
	walk_right
# 837 "data//maps/CityClara/scripts.pory"
	walk_up
# 838 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 841 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerReturn:
# 842 "data//maps/CityClara/scripts.pory"
	walk_down
# 842 "data//maps/CityClara/scripts.pory"
	walk_down
	step_end

# 845 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1B:
# 846 "data//maps/CityClara/scripts.pory"
	walk_down
# 847 "data//maps/CityClara/scripts.pory"
	walk_right
	step_end

# 850 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2B:
# 851 "data//maps/CityClara/scripts.pory"
	walk_down
# 852 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 855 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1B:
# 856 "data//maps/CityClara/scripts.pory"
	walk_left
# 857 "data//maps/CityClara/scripts.pory"
	walk_up
# 858 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 861 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2B:
# 862 "data//maps/CityClara/scripts.pory"
	walk_up
# 863 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 866 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_Player:
# 867 "data//maps/CityClara/scripts.pory"
	walk_right
# 867 "data//maps/CityClara/scripts.pory"
	walk_right
# 867 "data//maps/CityClara/scripts.pory"
	walk_right
# 868 "data//maps/CityClara/scripts.pory"
	walk_up
	step_end

# 871 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_ScottExit:
# 872 "data//maps/CityClara/scripts.pory"
	walk_down
# 872 "data//maps/CityClara/scripts.pory"
	walk_down
# 872 "data//maps/CityClara/scripts.pory"
	walk_down
# 873 "data//maps/CityClara/scripts.pory"
	walk_left
# 873 "data//maps/CityClara/scripts.pory"
	walk_left
# 873 "data//maps/CityClara/scripts.pory"
	walk_left
# 873 "data//maps/CityClara/scripts.pory"
	walk_left
# 873 "data//maps/CityClara/scripts.pory"
	walk_left
# 873 "data//maps/CityClara/scripts.pory"
	walk_left
# 873 "data//maps/CityClara/scripts.pory"
	walk_left
	step_end

# 876 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_LeafExit:
# 877 "data//maps/CityClara/scripts.pory"
	walk_up
# 877 "data//maps/CityClara/scripts.pory"
	walk_up
# 877 "data//maps/CityClara/scripts.pory"
	walk_up
# 877 "data//maps/CityClara/scripts.pory"
	walk_up
# 877 "data//maps/CityClara/scripts.pory"
	walk_up
	step_end

# 880 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerBeginGarden1:
# 881 "data//maps/CityClara/scripts.pory"
	walk_up
# 881 "data//maps/CityClara/scripts.pory"
	walk_up
# 882 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 885 "data//maps/CityClara/scripts.pory"
CityClara_Movement_GardenerBeginGarden1:
# 886 "data//maps/CityClara/scripts.pory"
	walk_up
# 887 "data//maps/CityClara/scripts.pory"
	walk_left
# 888 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 891 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerBeginGarden2:
# 892 "data//maps/CityClara/scripts.pory"
	walk_right
# 893 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 896 "data//maps/CityClara/scripts.pory"
CityClara_Movement_GardenerFinishGarden:
# 897 "data//maps/CityClara/scripts.pory"
	walk_left
# 898 "data//maps/CityClara/scripts.pory"
	face_up
	step_end

CityClara_Script_FinishGarden_Text_0:
# 524 "data//maps/CityClara/scripts.pory"
	.string "VAR_RESULT DIR_NORTH$"

CityClara_Script_FinishGarden_Text_1:
# 557 "data//maps/CityClara/scripts.pory"
	.string "VAR_RESULT OOB$"

CityClara_Script_IncrementGardenVar_Text_0:
# 805 "data//maps/CityClara/scripts.pory"
	.string "VAR_TEMP_9 OOB$"

CityClara_Text_ClubSign::
# 901 "data//maps/CityClara/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_TownSign::
# 905 "data//maps/CityClara/scripts.pory"
	.string "City Saeclara built upon the lake$"

CityClara_Text_CannaWoman::
# 909 "data//maps/CityClara/scripts.pory"
	.string "You see this building here? The Chronic\n"
	.string "Club? They got me so high I can barely\l"
	.string "walk!$"

CityClara_Text_LeafBridge::
# 913 "data//maps/CityClara/scripts.pory"
	.string "I can't believe how long this line\n"
	.string "appears! We'll wait all day and night to\l"
	.string "move halfway up to the top. Oh\l"
	.string "{PLAYER} I bet you could find another\l"
	.string "way we could sneak around. Maybe you\l"
	.string "could learn how to cut down trees and\l"
	.string "we could sneak in, go around the back! I\l"
	.string "bet they teach you how to cut down\l"
	.string "trees and things like that if you go to\l"
	.string "the school! I've never been myself but\l"
	.string "you should go! The school is that\l"
	.string "orange building over there on the\l"
	.string "corner of the south eastern street.$"

CityClara_Text_LeafBridge2::
# 917 "data//maps/CityClara/scripts.pory"
	.string "Oh my gosh {PLAYER}! Is that the HM\n"
	.string "CUT? You are the best! Let's sneak into\l"
	.string "the church!$"

CityClara_Text_GreenSuit::
# 921 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_GreenSuit2::
# 925 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_FatMan::
# 929 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_FatMan2::
# 933 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_WomanA::
# 937 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_WomanA2::
# 941 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_RedWoman::
# 945 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_RedWoman2::
# 949 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldMan::
# 953 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldMan2::
# 957 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldWoman::
# 961 "data//maps/CityClara/scripts.pory"
	.string "Is Mew really here? Am I really here?\n"
	.string "This life feels like reflections on\l"
	.string "water...$"

CityClara_Text_OldWoman2::
# 965 "data//maps/CityClara/scripts.pory"
	.string "Am I still here, or am I an echo?$"

CityClara_Text_Lass::
# 969 "data//maps/CityClara/scripts.pory"
	.string "I want to go play in the garden but the\n"
	.string "gardener says it's dangerous now.$"

CityClara_Text_Lass2::
# 973 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Senex1::
# 977 "data//maps/CityClara/scripts.pory"
	.string "My boy come here, or no, are you a girl?\n"
	.string "Forgive me for my eyes are old as I have\l"
	.string "grown. Tell me would you ask me to speak\l"
	.string "and tell to you the tale of this city?$"

CityClara_Text_Senex2::
# 981 "data//maps/CityClara/scripts.pory"
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
# 985 "data//maps/CityClara/scripts.pory"
	.string "No one has time for history these\n"
	.string "days...$"

CityClara_Text_RocketBlock1::
# 989 "data//maps/CityClara/scripts.pory"
	.string "Hey You!$"

CityClara_Text_RocketBlock2::
# 993 "data//maps/CityClara/scripts.pory"
	.string "Stop right there! Take not one more\n"
	.string "stop. This road is closed, we shall let\l"
	.string "no one pass.$"

CityClara_Text_RocketBlock3::
# 997 "data//maps/CityClara/scripts.pory"
	.string "By order of the Rocket High Command\n"
	.string "only party business will be allowed\l"
	.string "until our mission has been completed.\l"
	.string "Now get thee gone, noone wants more\l"
	.string "trouble$"

CityClara_Text_Rocket1::
# 1001 "data//maps/CityClara/scripts.pory"
	.string "The Rocket Party helped me buy a home!\n"
	.string "Standing watch on the road's the very\l"
	.string "least I can do to pay back our dear\l"
	.string "leader.$"

CityClara_Text_Rocket2::
# 1005 "data//maps/CityClara/scripts.pory"
	.string "The party only wants the very best\n"
	.string "people to represent their interests.\l"
	.string "Perhaps with time, and practice, and\l"
	.string "some luck, you could one day wear our\l"
	.string "great uniform. Never forget the party's\l"
	.string "here for you.$"

CityClara_Text_Jessie::
# 1009 "data//maps/CityClara/scripts.pory"
	.string "This church is being occupied by the\n"
	.string "Rocket Party and we're watching the\l"
	.string "door. You'll have to get in line and wait\l"
	.string "your turn then pay the entrance fee to\l"
	.string "step inside.$"

CityClara_Text_James::
# 1013 "data//maps/CityClara/scripts.pory"
	.string "This town is so antique it's comical.\n"
	.string "Look at all these people waiting in line\l"
	.string "just for a glimpse of some old pokemon.\l"
	.string "The city is a better place to live and\l"
	.string "party people are superior.$"

CityClara_Text_Leaf1::
# 1017 "data//maps/CityClara/scripts.pory"
	.string "Looks like we weren't the only ones who\n"
	.string "came to Castalia to catch a glimpse of\l"
	.string "Mew. The line to enter church is super\l"
	.string "long!$"

CityClara_Text_Scott1::
# 1021 "data//maps/CityClara/scripts.pory"
	.string "It's not moving either. Those\n"
	.string "government stooges have it blocked up!\l"
	.string "If you ask me it's no use waiting in that\l"
	.string "line right now. We're better off sitting\l"
	.string "in comfort at the Lotus Club until the\l"
	.string "line dies down. That's where I'm going!\l"
	.string "Why don't you join me? I'll buy us all\l"
	.string "Lotus and let time pass.$"

CityClara_Text_Leaf2::
# 1025 "data//maps/CityClara/scripts.pory"
	.string "There's no way after traveling out here\n"
	.string "that we're going to go sit in a club\l"
	.string "while Mew herself awaits us in that\l"
	.string "Church! Come with me {PLAYER} we need\l"
	.string "to find a way to get into that Church\l"
	.string "ASAP!$"

CityClara_Text_Woman3_1::
# 1029 "data//maps/CityClara/scripts.pory"
	.string "The line is long, but the wait is worth\n"
	.string "it.$"

CityClara_Text_Woman3_2::
# 1033 "data//maps/CityClara/scripts.pory"
	.string "I can't believe how fast time's flying\n"
	.string "by! I still feel like that same little\l"
	.string "school girl...$"

CityClara_Text_Gardener_BeforeGardenIntro::
# 1037 "data//maps/CityClara/scripts.pory"
	.string "Oh no! My garden has been overrun by\n"
	.string "pests and weeds! I don't know what to\l"
	.string "do!$"

CityClara_Text_Gardener_BeforeGardenBeginYN::
# 1041 "data//maps/CityClara/scripts.pory"
	.string "Oh hey! You're a young, fit, capable boy.\n"
	.string "Will you help me clean up the garden?\l"
	.string "Please?$"

CityClara_Text_Gardener_BeforeGardenDecline::
# 1045 "data//maps/CityClara/scripts.pory"
	.string "I understand. It's not your job. Take\n"
	.string "care.$"

CityClara_Text_Gardener_BeforeGardenBegin::
# 1049 "data//maps/CityClara/scripts.pory"
	.string "Thank you so much! Let me show you\n"
	.string "inside.$"

CityClara_Text_Gardener_BeginGarden1::
# 1053 "data//maps/CityClara/scripts.pory"
	.string "Welcome to the Castalia Garden! In\n"
	.string "better times we grow beautiful things\l"
	.string "but now the garden looks like such a\l"
	.string "mess. Please get rid of the pests that\l"
	.string "have moved in and use this Scythe to\l"
	.string "cut down the small trees.$"

CityClara_Text_Gardener_BeginGarden2::
# 1057 "data//maps/CityClara/scripts.pory"
	.string "Now get to work! Good luck! You can do\n"
	.string "it!$"

CityClara_Text_Gardener_DuringGarden::
# 1061 "data//maps/CityClara/scripts.pory"
	.string "You're not done yet. The garden's still a\n"
	.string "mess!$"

CityClara_Text_Gardener_AfterGarden::
# 1065 "data//maps/CityClara/scripts.pory"
	.string "Thank you again for cleaining the\n"
	.string "garden.$"

CityClara_Text_Gardener_FinishGarden1::
# 1069 "data//maps/CityClara/scripts.pory"
	.string "You did it! You cut down every weed and\n"
	.string "fully resolved the infestation! As\l"
	.string "thanks I want you to keep that Sharp\l"
	.string "Scythe.$"

CityClara_Text_Gardener_FinishGarden2::
# 1073 "data//maps/CityClara/scripts.pory"
	.string "Come back and visit the garden later.$"
