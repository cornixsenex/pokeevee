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
# 106 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 1
# 107 "data/maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 108 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SilvaTransition::
# 112 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 2
# 113 "data/maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 114 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ViaFideliumTransition::
# 118 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 3
# 119 "data/maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 120 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SinusClarusTransition::
# 124 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 4
# 125 "data/maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 126 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_CastaliaTransition::
# 130 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 5
# 131 "data/maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 132 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_DeltaDraciTransition::
# 136 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 6
# 137 "data/maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 138 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ShowMewScene::
# 144 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 1, 62, 10
# 145 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 147 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 3, 65, 10
# 148 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 150 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 14, 34, 22
# 151 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_DOWN
# 153 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 15, 36, 22
# 154 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_DOWN
# 156 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 16, 35, 22
# 157 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_FACE_DOWN
# 159 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 4, 35, 23
# 160 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 162 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 5, 35, 24
# 163 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 165 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 6, 35, 25
# 166 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 168 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 9, 35, 26
# 169 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 171 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 8, 35, 27
# 172 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 174 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 10, 35, 28
# 175 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
	return


CityClara_Script_ShowLeafEtScott::
# 181 "data/maps/CityClara/scripts.pory"
	setobjectxyperm LOCALID_CASTALIA_SCOTT, 30, 37
# 182 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype LOCALID_CASTALIA_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 184 "data/maps/CityClara/scripts.pory"
	setobjectxyperm LOCALID_CASTALIA_LEAF, 31, 37
# 185 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype LOCALID_CASTALIA_LEAF, MOVEMENT_TYPE_FACE_DOWN
# 187 "data/maps/CityClara/scripts.pory"
	setobjectxyperm LOCALID_CASTALIA_JIGGLYPUFF, 32, 37
# 188 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype LOCALID_CASTALIA_JIGGLYPUFF, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_ShowLeaf::
# 194 "data/maps/CityClara/scripts.pory"
	setobjectxyperm LOCALID_CASTALIA_LEAF, 32, 31
# 195 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype LOCALID_CASTALIA_LEAF, MOVEMENT_TYPE_FACE_DOWN
# 197 "data/maps/CityClara/scripts.pory"
	setobjectxyperm LOCALID_CASTALIA_JIGGLYPUFF, 31, 31
# 198 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype LOCALID_CASTALIA_JIGGLYPUFF, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_OpenGarden::
# 205 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 21, 47, 40
# 206 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 21, MOVEMENT_TYPE_FACE_UP
# 209 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 28, 0, 0
# 210 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 212 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 29, 0, 0
# 213 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 215 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 30, 0, 0
# 216 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 218 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 31, 0, 0
# 219 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 221 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 32, 0, 0
# 222 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 224 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 33, 0, 0
# 225 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 227 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 34, 0, 0
# 228 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 230 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 35, 0, 0
# 231 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
# 233 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 36, 0, 0
# 234 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_INVISIBLE
	return


CityClara_Script_ShowLeafOnTheRoad::
# 240 "data/maps/CityClara/scripts.pory"
	setobjectxyperm LOCALID_CASTALIA_LEAF, 64, 13
# 241 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype LOCALID_CASTALIA_LEAF, MOVEMENT_TYPE_FACE_DOWN
# 243 "data/maps/CityClara/scripts.pory"
	setobjectxyperm LOCALID_CASTALIA_JIGGLYPUFF, 63, 13
# 244 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype LOCALID_CASTALIA_JIGGLYPUFF, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_DuringGarden::
# 252 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 21, 48, 40
# 253 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 21, MOVEMENT_TYPE_FACE_UP
	return


CityClara_Script_LeafEtScottSceneA::
# 259 "data/maps/CityClara/scripts.pory"
	lockall
# 260 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 261 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 262 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 264 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottSceneB::
# 269 "data/maps/CityClara/scripts.pory"
	lockall
# 270 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 271 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 272 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 273 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 274 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 276 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottScene::
# 282 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_LeafEtScottScene_Player
# 283 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 285 "data/maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 286 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf1
# 287 "data/maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 289 "data/maps/CityClara/scripts.pory"
	load_field_pic FIELD_PIC_SCOTT, 190, 98
# 290 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Scott1
# 291 "data/maps/CityClara/scripts.pory"
	destroy_field_pic FIELD_PIC_SCOTT
# 292 "data/maps/CityClara/scripts.pory"
	closemessage
# 294 "data/maps/CityClara/scripts.pory"
	applymovement LOCALID_CASTALIA_SCOTT, CityClara_Movement_LeafEtScottScene_ScottExit
# 295 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 297 "data/maps/CityClara/scripts.pory"
	removeobject LOCALID_CASTALIA_SCOTT
# 298 "data/maps/CityClara/scripts.pory"
	setobjectxyperm LOCALID_CASTALIA_SCOTT, 0, 0
# 299 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype LOCALID_CASTALIA_SCOTT, MOVEMENT_TYPE_INVISIBLE
# 300 "data/maps/CityClara/scripts.pory"
	addobject LOCALID_CASTALIA_SCOTT
# 302 "data/maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 303 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf2
# 304 "data/maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 305 "data/maps/CityClara/scripts.pory"
	closemessage
# 307 "data/maps/CityClara/scripts.pory"
	applymovement LOCALID_CASTALIA_LEAF, CityClara_Movement_LeafEtScottScene_LeafExit
# 308 "data/maps/CityClara/scripts.pory"
	applymovement LOCALID_CASTALIA_JIGGLYPUFF, CityClara_Movement_LeafEtScottScene_LeafExit
# 309 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 311 "data/maps/CityClara/scripts.pory"
	removeobject LOCALID_CASTALIA_LEAF
# 312 "data/maps/CityClara/scripts.pory"
	setobjectxyperm LOCALID_CASTALIA_LEAF, 32, 31
# 313 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype LOCALID_CASTALIA_LEAF, MOVEMENT_TYPE_FACE_DOWN
# 314 "data/maps/CityClara/scripts.pory"
	addobject LOCALID_CASTALIA_LEAF
# 315 "data/maps/CityClara/scripts.pory"
	showobjectat LOCALID_CASTALIA_LEAF, MAP_CITY_CLARA
# 317 "data/maps/CityClara/scripts.pory"
	removeobject LOCALID_CASTALIA_JIGGLYPUFF
# 318 "data/maps/CityClara/scripts.pory"
	setobjectxyperm LOCALID_CASTALIA_JIGGLYPUFF, 31, 31
# 319 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype LOCALID_CASTALIA_JIGGLYPUFF, MOVEMENT_TYPE_FACE_DOWN
# 320 "data/maps/CityClara/scripts.pory"
	addobject LOCALID_CASTALIA_JIGGLYPUFF
# 321 "data/maps/CityClara/scripts.pory"
	showobjectat LOCALID_CASTALIA_JIGGLYPUFF, MAP_CITY_CLARA
# 323 "data/maps/CityClara/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 1
# 325 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_ClubSign::
# 331 "data/maps/CityClara/scripts.pory"
	lock
# 332 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_ClubSign
# 333 "data/maps/CityClara/scripts.pory"
	closemessage
# 334 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_CannaWoman::
# 339 "data/maps/CityClara/scripts.pory"
	lockall
# 340 "data/maps/CityClara/scripts.pory"
	faceplayer
# 341 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_CannaWoman
# 342 "data/maps/CityClara/scripts.pory"
	closemessage
# 343 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_Man2::
# 348 "data/maps/CityClara/scripts.pory"
	lock
# 349 "data/maps/CityClara/scripts.pory"
	faceplayer
# 350 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Man2_2
# 354 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit
CityClara_EventScript_Man2_1:
# 356 "data/maps/CityClara/scripts.pory"
	closemessage
# 357 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Man2_2:
# 351 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit2
	goto CityClara_EventScript_Man2_1


CityClara_EventScript_FatMan::
# 362 "data/maps/CityClara/scripts.pory"
	lock
# 363 "data/maps/CityClara/scripts.pory"
	faceplayer
# 364 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_FatMan_2
# 368 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan
CityClara_EventScript_FatMan_1:
# 370 "data/maps/CityClara/scripts.pory"
	closemessage
# 371 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_FatMan_2:
# 365 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan2
	goto CityClara_EventScript_FatMan_1


CityClara_EventScript_Woman1::
# 376 "data/maps/CityClara/scripts.pory"
	lock
# 377 "data/maps/CityClara/scripts.pory"
	faceplayer
# 378 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman1_2
# 382 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA
CityClara_EventScript_Woman1_1:
# 384 "data/maps/CityClara/scripts.pory"
	closemessage
# 385 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman1_2:
# 379 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA2
	goto CityClara_EventScript_Woman1_1


CityClara_EventScript_Woman5::
# 390 "data/maps/CityClara/scripts.pory"
	lock
# 391 "data/maps/CityClara/scripts.pory"
	faceplayer
# 392 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman5_2
# 396 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman
CityClara_EventScript_Woman5_1:
# 398 "data/maps/CityClara/scripts.pory"
	closemessage
# 399 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman5_2:
# 393 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman2
	goto CityClara_EventScript_Woman5_1


CityClara_EventScript_Woman3::
# 404 "data/maps/CityClara/scripts.pory"
	lock
# 405 "data/maps/CityClara/scripts.pory"
	faceplayer
# 406 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman3_2
# 410 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Woman3_1
CityClara_EventScript_Woman3_1:
# 412 "data/maps/CityClara/scripts.pory"
	closemessage
# 413 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman3_2:
# 407 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Woman3_2
	goto CityClara_EventScript_Woman3_1


CityClara_EventScript_Gentleman::
# 418 "data/maps/CityClara/scripts.pory"
	lock
# 419 "data/maps/CityClara/scripts.pory"
	faceplayer
# 420 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Gentleman_2
# 424 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan
CityClara_EventScript_Gentleman_1:
# 426 "data/maps/CityClara/scripts.pory"
	closemessage
# 427 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Gentleman_2:
# 421 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan2
	goto CityClara_EventScript_Gentleman_1


CityClara_EventScript_OldWoman::
# 432 "data/maps/CityClara/scripts.pory"
	lock
# 433 "data/maps/CityClara/scripts.pory"
	faceplayer
# 434 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_OldWoman_2
# 438 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman
CityClara_EventScript_OldWoman_1:
# 440 "data/maps/CityClara/scripts.pory"
	closemessage
# 441 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldWoman_2:
# 435 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman2
	goto CityClara_EventScript_OldWoman_1


CityClara_EventScript_Lass::
# 447 "data/maps/CityClara/scripts.pory"
	lock
# 448 "data/maps/CityClara/scripts.pory"
	faceplayer
# 449 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Lass_2
# 453 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass
CityClara_EventScript_Lass_1:
# 455 "data/maps/CityClara/scripts.pory"
	closemessage
# 456 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Lass_2:
# 450 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass2
	goto CityClara_EventScript_Lass_1


CityClara_Script_Gardener::
# 462 "data/maps/CityClara/scripts.pory"
	lock
# 463 "data/maps/CityClara/scripts.pory"
	faceplayer
# 465 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_B, CityClara_Script_Gardener_2
# 477 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_RECEIVED_SCYTHE, CityClara_Script_Gardener_3
# 482 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenIntro
# 483 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 484 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 485 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenBeginYN, MSGBOX_YESNO
# 486 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CityClara_Script_Gardener_10
# 491 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_B
# 493 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenBegin
# 495 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerBeginGarden1
# 496 "data/maps/CityClara/scripts.pory"
	applymovement 21, CityClara_Movement_GardenerBeginGarden1
# 497 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 499 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeginGarden1
# 500 "data/maps/CityClara/scripts.pory"
	closemessage
# 502 "data/maps/CityClara/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 503 "data/maps/CityClara/scripts.pory"
	giveitem ITEM_SCYTHE, 1
# 505 "data/maps/CityClara/scripts.pory"
	setflag FLAG_RECEIVED_SCYTHE
# 507 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeginGarden2
# 508 "data/maps/CityClara/scripts.pory"
	closemessage
# 510 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 511 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerBeginGarden2
# 512 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 513 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceUp
# 514 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 516 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_DuringGarden
CityClara_Script_Gardener_1:
# 519 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_Script_Gardener_2:
# 467 "data/maps/CityClara/scripts.pory"
	compare VAR_TEMP_9, 9
	goto_if_eq CityClara_Script_Gardener_7
# 470 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_DuringGarden
# 471 "data/maps/CityClara/scripts.pory"
	closemessage
# 472 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceUp
# 473 "data/maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_3:
# 478 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_AfterGarden
# 479 "data/maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_7:
# 468 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_FinishGarden
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_10:
# 487 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenDecline
# 488 "data/maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_Gardener_1


CityClara_Script_FinishGarden::
# 525 "data/maps/CityClara/scripts.pory"
	clearflag FLAG_TEMP_B
# 527 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 528 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 530 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_FinishGarden1
# 531 "data/maps/CityClara/scripts.pory"
	closemessage
# 533 "data/maps/CityClara/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 534 "data/maps/CityClara/scripts.pory"
	switch VAR_RESULT
# 535 "data/maps/CityClara/scripts.pory"
	case DIR_NORTH, CityClara_Script_FinishGarden_3
# 538 "data/maps/CityClara/scripts.pory"
	case DIR_WEST, CityClara_Script_FinishGarden_4
# 548 "data/maps/CityClara/scripts.pory"
	case DIR_SOUTH, CityClara_Script_FinishGarden_5
# 558 "data/maps/CityClara/scripts.pory"
	case DIR_EAST, CityClara_Script_FinishGarden_6
# 569 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Script_FinishGarden_Text_1
# 570 "data/maps/CityClara/scripts.pory"
	closemessage
CityClara_Script_FinishGarden_1:
# 573 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_FinishGarden2
# 574 "data/maps/CityClara/scripts.pory"
	closemessage
# 576 "data/maps/CityClara/scripts.pory"
	applymovement 21, CityClara_Movement_GardenerFinishGarden
# 577 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 579 "data/maps/CityClara/scripts.pory"
	setflag FLAG_CASTALIA_GARDEN_COMPLETE
# 581 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_OpenGarden
# 582 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_Script_FinishGarden_3:
# 536 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Script_FinishGarden_Text_0
# 537 "data/maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_FinishGarden_1

CityClara_Script_FinishGarden_4:
# 539 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 540 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkLeft
# 541 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 542 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 543 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 544 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 545 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 546 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 547 "data/maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_FinishGarden_1

CityClara_Script_FinishGarden_5:
# 549 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 550 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkLeft
# 551 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 552 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 553 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 554 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 555 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 556 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 557 "data/maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_FinishGarden_1

CityClara_Script_FinishGarden_6:
# 559 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 560 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 561 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 562 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 563 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkLeft
# 564 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 565 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 566 "data/maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 567 "data/maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_FinishGarden_1


CityClara_EventScript_Leaf::
# 587 "data/maps/CityClara/scripts.pory"
	lock
# 588 "data/maps/CityClara/scripts.pory"
	faceplayer
# 589 "data/maps/CityClara/scripts.pory"
	compare VAR_LEAF_ROAD_TO_ARDOR, 1
	goto_if_lt CityClara_EventScript_Leaf_2
# 592 "data/maps/CityClara/scripts.pory"
	call CityClara_EventScript_LeafOnTheRoad
CityClara_EventScript_Leaf_1:
# 594 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Leaf_2:
# 590 "data/maps/CityClara/scripts.pory"
	call CityClara_EventScript_LeafBridge
	goto CityClara_EventScript_Leaf_1


CityClara_EventScript_LeafBridge::
# 599 "data/maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 600 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_LeafBridge
# 601 "data/maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 602 "data/maps/CityClara/scripts.pory"
	closemessage
# 603 "data/maps/CityClara/scripts.pory"
	applymovement LOCALID_CASTALIA_LEAF, Common_Movement_FaceDown
# 604 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 605 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_LeafOnTheRoad::
# 610 "data/maps/CityClara/scripts.pory"
	setvar VAR_LEAF_ROAD_TO_ARDOR, 2
# 611 "data/maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 612 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_LeafOnTheRoad
# 613 "data/maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 614 "data/maps/CityClara/scripts.pory"
	closemessage
# 615 "data/maps/CityClara/scripts.pory"
	applymovement LOCALID_CASTALIA_LEAF, Common_Movement_WalkUp6
# 616 "data/maps/CityClara/scripts.pory"
	applymovement LOCALID_CASTALIA_JIGGLYPUFF, Common_Movement_WalkUp6
# 617 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 619 "data/maps/CityClara/scripts.pory"
	removeobject LOCALID_CASTALIA_LEAF
# 620 "data/maps/CityClara/scripts.pory"
	setobjectxyperm LOCALID_CASTALIA_LEAF, 0, 0
# 621 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype LOCALID_CASTALIA_LEAF, MOVEMENT_TYPE_INVISIBLE
# 622 "data/maps/CityClara/scripts.pory"
	addobject LOCALID_CASTALIA_LEAF
# 623 "data/maps/CityClara/scripts.pory"
	showobjectat LOCALID_CASTALIA_LEAF, MAP_CITY_CLARA
# 624 "data/maps/CityClara/scripts.pory"
	removeobject LOCALID_CASTALIA_JIGGLYPUFF
# 625 "data/maps/CityClara/scripts.pory"
	setobjectxyperm LOCALID_CASTALIA_JIGGLYPUFF, 0, 0
# 626 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype LOCALID_CASTALIA_JIGGLYPUFF, MOVEMENT_TYPE_INVISIBLE
# 627 "data/maps/CityClara/scripts.pory"
	addobject LOCALID_CASTALIA_JIGGLYPUFF
# 628 "data/maps/CityClara/scripts.pory"
	showobjectat LOCALID_CASTALIA_JIGGLYPUFF, MAP_CITY_CLARA
# 629 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_TownSign::
# 634 "data/maps/CityClara/scripts.pory"
	lock
# 635 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_TownSign
# 636 "data/maps/CityClara/scripts.pory"
	closemessage
# 637 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_Senex::
# 642 "data/maps/CityClara/scripts.pory"
	lockall
# 643 "data/maps/CityClara/scripts.pory"
	faceplayer
# 644 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex1, MSGBOX_YESNO
# 645 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_EventScript_Senex_2
# 649 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex3
CityClara_EventScript_Senex_1:
# 651 "data/maps/CityClara/scripts.pory"
	closemessage
# 652 "data/maps/CityClara/scripts.pory"
	releaseall
	end

CityClara_EventScript_Senex_2:
# 646 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex2
	goto CityClara_EventScript_Senex_1


CityClara_EventScript_Jessie::
# 657 "data/maps/CityClara/scripts.pory"
	lockall
# 658 "data/maps/CityClara/scripts.pory"
	faceplayer
# 659 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Jessie
# 660 "data/maps/CityClara/scripts.pory"
	closemessage
# 661 "data/maps/CityClara/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 662 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 663 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_James::
# 668 "data/maps/CityClara/scripts.pory"
	lockall
# 669 "data/maps/CityClara/scripts.pory"
	faceplayer
# 670 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_James
# 671 "data/maps/CityClara/scripts.pory"
	closemessage
# 672 "data/maps/CityClara/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 673 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 674 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_RocketBlockA::
# 679 "data/maps/CityClara/scripts.pory"
	lock
# 680 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 681 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 682 "data/maps/CityClara/scripts.pory"
	closemessage
# 683 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 684 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1A
# 685 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2A
# 686 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 687 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 688 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 689 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 690 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 691 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 692 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 693 "data/maps/CityClara/scripts.pory"
	closemessage
# 694 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1A
# 695 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2A
# 696 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 697 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 698 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_RocketBlockB::
# 702 "data/maps/CityClara/scripts.pory"
	lock
# 703 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 704 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 705 "data/maps/CityClara/scripts.pory"
	closemessage
# 706 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 707 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1B
# 708 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2B
# 709 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 710 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 711 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 712 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 713 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 714 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 715 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 716 "data/maps/CityClara/scripts.pory"
	closemessage
# 717 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1B
# 718 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2B
# 719 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 720 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 721 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket1::
# 725 "data/maps/CityClara/scripts.pory"
	lock
# 726 "data/maps/CityClara/scripts.pory"
	faceplayer
# 727 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket1
# 728 "data/maps/CityClara/scripts.pory"
	closemessage
# 729 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket2::
# 733 "data/maps/CityClara/scripts.pory"
	lock
# 734 "data/maps/CityClara/scripts.pory"
	faceplayer
# 735 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket2
# 736 "data/maps/CityClara/scripts.pory"
	closemessage
# 737 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_Script_GardenTree::
# 741 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 742 "data/maps/CityClara/scripts.pory"
	call EventScript_ScytheTree
	end


CityClara_Script_Nincada::
# 747 "data/maps/CityClara/scripts.pory"
	lock
# 748 "data/maps/CityClara/scripts.pory"
	faceplayer
# 749 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 750 "data/maps/CityClara/scripts.pory"
	playmoncry SPECIES_NINCADA, CRY_MODE_ENCOUNTER
# 751 "data/maps/CityClara/scripts.pory"
	waitmoncry
# 752 "data/maps/CityClara/scripts.pory"
	setwildbattle SPECIES_NINCADA, 23
# 753 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_9
# 754 "data/maps/CityClara/scripts.pory"
	dowildbattle
# 755 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Weedle::
# 760 "data/maps/CityClara/scripts.pory"
	lock
# 761 "data/maps/CityClara/scripts.pory"
	faceplayer
# 762 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 763 "data/maps/CityClara/scripts.pory"
	playmoncry SPECIES_WEEDLE, CRY_MODE_ENCOUNTER
# 764 "data/maps/CityClara/scripts.pory"
	waitmoncry
# 765 "data/maps/CityClara/scripts.pory"
	setwildbattle SPECIES_WEEDLE, 23
# 766 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_C
# 767 "data/maps/CityClara/scripts.pory"
	dowildbattle
# 768 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Wurmple::
# 773 "data/maps/CityClara/scripts.pory"
	lock
# 774 "data/maps/CityClara/scripts.pory"
	faceplayer
# 775 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 776 "data/maps/CityClara/scripts.pory"
	playmoncry SPECIES_WURMPLE, CRY_MODE_ENCOUNTER
# 777 "data/maps/CityClara/scripts.pory"
	waitmoncry
# 778 "data/maps/CityClara/scripts.pory"
	setwildbattle SPECIES_WURMPLE, 23
# 779 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_3
# 780 "data/maps/CityClara/scripts.pory"
	dowildbattle
# 781 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Caterpie::
# 786 "data/maps/CityClara/scripts.pory"
	lock
# 787 "data/maps/CityClara/scripts.pory"
	faceplayer
# 788 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 789 "data/maps/CityClara/scripts.pory"
	playmoncry SPECIES_CATERPIE, CRY_MODE_ENCOUNTER
# 790 "data/maps/CityClara/scripts.pory"
	waitmoncry
# 791 "data/maps/CityClara/scripts.pory"
	setwildbattle SPECIES_CATERPIE, 23
# 792 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_12
# 793 "data/maps/CityClara/scripts.pory"
	dowildbattle
# 794 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Paras::
# 799 "data/maps/CityClara/scripts.pory"
	lock
# 800 "data/maps/CityClara/scripts.pory"
	faceplayer
# 801 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 802 "data/maps/CityClara/scripts.pory"
	playmoncry SPECIES_PARAS, CRY_MODE_ENCOUNTER
# 803 "data/maps/CityClara/scripts.pory"
	waitmoncry
# 804 "data/maps/CityClara/scripts.pory"
	setwildbattle SPECIES_PARAS, 23
# 805 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_A
# 806 "data/maps/CityClara/scripts.pory"
	dowildbattle
# 807 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_Venonat::
# 812 "data/maps/CityClara/scripts.pory"
	lock
# 813 "data/maps/CityClara/scripts.pory"
	faceplayer
# 814 "data/maps/CityClara/scripts.pory"
	call CityClara_Script_IncrementGardenVar
# 815 "data/maps/CityClara/scripts.pory"
	playmoncry SPECIES_VENONAT, CRY_MODE_ENCOUNTER
# 816 "data/maps/CityClara/scripts.pory"
	waitmoncry
# 817 "data/maps/CityClara/scripts.pory"
	setwildbattle SPECIES_VENONAT, 23
# 818 "data/maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_D
# 819 "data/maps/CityClara/scripts.pory"
	dowildbattle
# 820 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_Script_IncrementGardenVar::
# 826 "data/maps/CityClara/scripts.pory"
	switch VAR_TEMP_9
# 827 "data/maps/CityClara/scripts.pory"
	case 0, CityClara_Script_IncrementGardenVar_3
# 829 "data/maps/CityClara/scripts.pory"
	case 1, CityClara_Script_IncrementGardenVar_4
# 831 "data/maps/CityClara/scripts.pory"
	case 2, CityClara_Script_IncrementGardenVar_5
# 833 "data/maps/CityClara/scripts.pory"
	case 3, CityClara_Script_IncrementGardenVar_6
# 835 "data/maps/CityClara/scripts.pory"
	case 4, CityClara_Script_IncrementGardenVar_7
# 837 "data/maps/CityClara/scripts.pory"
	case 5, CityClara_Script_IncrementGardenVar_8
# 839 "data/maps/CityClara/scripts.pory"
	case 6, CityClara_Script_IncrementGardenVar_9
# 841 "data/maps/CityClara/scripts.pory"
	case 7, CityClara_Script_IncrementGardenVar_10
# 843 "data/maps/CityClara/scripts.pory"
	case 8, CityClara_Script_IncrementGardenVar_11
# 846 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Script_IncrementGardenVar_Text_0
# 847 "data/maps/CityClara/scripts.pory"
	closemessage
CityClara_Script_IncrementGardenVar_1:
	return

CityClara_Script_IncrementGardenVar_3:
# 828 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 1
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_4:
# 830 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 2
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_5:
# 832 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 3
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_6:
# 834 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 4
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_7:
# 836 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 5
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_8:
# 838 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 6
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_9:
# 840 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 7
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_10:
# 842 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 8
	goto CityClara_Script_IncrementGardenVar_1

CityClara_Script_IncrementGardenVar_11:
# 844 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_9, 9
	goto CityClara_Script_IncrementGardenVar_1


# 852 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1A:
# 853 "data/maps/CityClara/scripts.pory"
	walk_down
# 854 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 857 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2A:
# 858 "data/maps/CityClara/scripts.pory"
	walk_down
# 859 "data/maps/CityClara/scripts.pory"
	walk_left
	step_end

# 862 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceLeft:
# 863 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 866 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceRight:
# 867 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 870 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1A:
# 871 "data/maps/CityClara/scripts.pory"
	walk_up
# 872 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 875 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2A:
# 876 "data/maps/CityClara/scripts.pory"
	walk_right
# 877 "data/maps/CityClara/scripts.pory"
	walk_up
# 878 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 881 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerReturn:
# 882 "data/maps/CityClara/scripts.pory"
	walk_down
# 882 "data/maps/CityClara/scripts.pory"
	walk_down
	step_end

# 885 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1B:
# 886 "data/maps/CityClara/scripts.pory"
	walk_down
# 887 "data/maps/CityClara/scripts.pory"
	walk_right
	step_end

# 890 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2B:
# 891 "data/maps/CityClara/scripts.pory"
	walk_down
# 892 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 895 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1B:
# 896 "data/maps/CityClara/scripts.pory"
	walk_left
# 897 "data/maps/CityClara/scripts.pory"
	walk_up
# 898 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 901 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2B:
# 902 "data/maps/CityClara/scripts.pory"
	walk_up
# 903 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 906 "data/maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_Player:
# 907 "data/maps/CityClara/scripts.pory"
	walk_right
# 907 "data/maps/CityClara/scripts.pory"
	walk_right
# 907 "data/maps/CityClara/scripts.pory"
	walk_right
# 908 "data/maps/CityClara/scripts.pory"
	walk_up
	step_end

# 911 "data/maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_ScottExit:
# 912 "data/maps/CityClara/scripts.pory"
	walk_down
# 912 "data/maps/CityClara/scripts.pory"
	walk_down
# 912 "data/maps/CityClara/scripts.pory"
	walk_down
# 913 "data/maps/CityClara/scripts.pory"
	walk_left
# 913 "data/maps/CityClara/scripts.pory"
	walk_left
# 913 "data/maps/CityClara/scripts.pory"
	walk_left
# 913 "data/maps/CityClara/scripts.pory"
	walk_left
# 913 "data/maps/CityClara/scripts.pory"
	walk_left
# 913 "data/maps/CityClara/scripts.pory"
	walk_left
# 913 "data/maps/CityClara/scripts.pory"
	walk_left
	step_end

# 916 "data/maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_LeafExit:
# 917 "data/maps/CityClara/scripts.pory"
	walk_up
# 917 "data/maps/CityClara/scripts.pory"
	walk_up
# 917 "data/maps/CityClara/scripts.pory"
	walk_up
# 917 "data/maps/CityClara/scripts.pory"
	walk_up
# 917 "data/maps/CityClara/scripts.pory"
	walk_up
	step_end

# 920 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerBeginGarden1:
# 921 "data/maps/CityClara/scripts.pory"
	walk_up
# 921 "data/maps/CityClara/scripts.pory"
	walk_up
# 922 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 925 "data/maps/CityClara/scripts.pory"
CityClara_Movement_GardenerBeginGarden1:
# 926 "data/maps/CityClara/scripts.pory"
	walk_up
# 927 "data/maps/CityClara/scripts.pory"
	walk_left
# 928 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 931 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerBeginGarden2:
# 932 "data/maps/CityClara/scripts.pory"
	walk_right
# 933 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 936 "data/maps/CityClara/scripts.pory"
CityClara_Movement_GardenerFinishGarden:
# 937 "data/maps/CityClara/scripts.pory"
	walk_left
# 938 "data/maps/CityClara/scripts.pory"
	face_up
	step_end

CityClara_Script_FinishGarden_Text_0:
# 536 "data/maps/CityClara/scripts.pory"
	.string "VAR_RESULT DIR_NORTH$"

CityClara_Script_FinishGarden_Text_1:
# 569 "data/maps/CityClara/scripts.pory"
	.string "VAR_RESULT OOB$"

CityClara_Script_IncrementGardenVar_Text_0:
# 846 "data/maps/CityClara/scripts.pory"
	.string "VAR_TEMP_9 OOB$"

CityClara_Text_ClubSign::
# 941 "data/maps/CityClara/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_TownSign::
# 945 "data/maps/CityClara/scripts.pory"
	.string "City Saeclara built upon the lake$"

CityClara_Text_CannaWoman::
# 949 "data/maps/CityClara/scripts.pory"
	.string "You see this building here? The Chronic\n"
	.string "Club? They got me so high I can barely\l"
	.string "walk!$"

CityClara_Text_LeafBridge::
# 953 "data/maps/CityClara/scripts.pory"
	.string "This line is so long and it's not moving!\n"
	.string "We need to find a way inside, and fast.$"

CityClara_Text_GreenSuit::
# 957 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_GreenSuit2::
# 961 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_FatMan::
# 965 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_FatMan2::
# 969 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_WomanA::
# 973 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_WomanA2::
# 977 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_RedWoman::
# 981 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_RedWoman2::
# 985 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldMan::
# 989 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldMan2::
# 993 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldWoman::
# 997 "data/maps/CityClara/scripts.pory"
	.string "Is Mew really here? Am I really here?\n"
	.string "This life feels like reflections on\l"
	.string "water...$"

CityClara_Text_OldWoman2::
# 1001 "data/maps/CityClara/scripts.pory"
	.string "Am I still here, or am I an echo?$"

CityClara_Text_Lass::
# 1005 "data/maps/CityClara/scripts.pory"
	.string "I want to go play in the garden but the\n"
	.string "gardener says it's dangerous now.$"

CityClara_Text_Lass2::
# 1009 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Senex1::
# 1013 "data/maps/CityClara/scripts.pory"
	.string "My boy come here, or no, are you a girl?\n"
	.string "Forgive me for my eyes are old as I have\l"
	.string "grown. Tell me would you ask me to speak\l"
	.string "and tell to you the tale of this city?$"

CityClara_Text_Senex2::
# 1017 "data/maps/CityClara/scripts.pory"
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
# 1021 "data/maps/CityClara/scripts.pory"
	.string "No one has time for history these\n"
	.string "days...$"

CityClara_Text_RocketBlock1::
# 1025 "data/maps/CityClara/scripts.pory"
	.string "Hey You!$"

CityClara_Text_RocketBlock2::
# 1029 "data/maps/CityClara/scripts.pory"
	.string "Stop right there! Take not one more\n"
	.string "stop. This road is closed, we shall let\l"
	.string "no one pass.$"

CityClara_Text_RocketBlock3::
# 1033 "data/maps/CityClara/scripts.pory"
	.string "By order of the Rocket High Command\n"
	.string "only party business will be allowed\l"
	.string "until our mission has been completed.\l"
	.string "Now get thee gone, noone wants more\l"
	.string "trouble$"

CityClara_Text_Rocket1::
# 1037 "data/maps/CityClara/scripts.pory"
	.string "The Rocket Party helped me buy a home!\n"
	.string "Standing watch on the road's the very\l"
	.string "least I can do to pay back our dear\l"
	.string "leader.$"

CityClara_Text_Rocket2::
# 1041 "data/maps/CityClara/scripts.pory"
	.string "The party only wants the very best\n"
	.string "people to represent their interests.\l"
	.string "Perhaps with time, and practice, and\l"
	.string "some luck, you could one day wear our\l"
	.string "great uniform. Never forget the party's\l"
	.string "here for you.$"

CityClara_Text_Jessie::
# 1045 "data/maps/CityClara/scripts.pory"
	.string "This church is being occupied by the\n"
	.string "Rocket Party and we're watching the\l"
	.string "door. You'll have to get in line and wait\l"
	.string "your turn then pay the entrance fee to\l"
	.string "step inside.$"

CityClara_Text_James::
# 1049 "data/maps/CityClara/scripts.pory"
	.string "This town is so antique it's comical.\n"
	.string "Look at all these people waiting in line\l"
	.string "just for a glimpse of some old pokemon.\l"
	.string "The city is a better place to live and\l"
	.string "party people are superior.$"

CityClara_Text_Leaf1::
# 1053 "data/maps/CityClara/scripts.pory"
	.string "Looks like we weren't the only ones who\n"
	.string "came to Castalia to catch a glimpse of\l"
	.string "Mew. The line to enter church is super\l"
	.string "long!$"

CityClara_Text_Scott1::
# 1057 "data/maps/CityClara/scripts.pory"
	.string "It's not moving either. Those\n"
	.string "government stooges have it blocked up!\l"
	.string "If you ask me it's no use waiting in that\l"
	.string "line right now. We're better off sitting\l"
	.string "in comfort at the Lotus Club until the\l"
	.string "line dies down. That's where I'm going!\l"
	.string "Why don't you join me? I'll buy us all\l"
	.string "Lotus and let time pass.$"

CityClara_Text_Leaf2::
# 1061 "data/maps/CityClara/scripts.pory"
	.string "There's no way after traveling out here\n"
	.string "that we're going to go sit in a club\l"
	.string "while Mew herself awaits us in that\l"
	.string "Church! Come with me {PLAYER} we need\l"
	.string "to find a way to get into that Church\l"
	.string "ASAP!$"

CityClara_Text_Woman3_1::
# 1065 "data/maps/CityClara/scripts.pory"
	.string "The line is long, but the wait is worth\n"
	.string "it.$"

CityClara_Text_Woman3_2::
# 1069 "data/maps/CityClara/scripts.pory"
	.string "I can't believe how fast time's flying\n"
	.string "by! I still feel like that same little\l"
	.string "school girl...$"

CityClara_Text_Gardener_BeforeGardenIntro::
# 1073 "data/maps/CityClara/scripts.pory"
	.string "Oh no! My garden has been overrun by\n"
	.string "pests and weeds! I don't know what to\l"
	.string "do!$"

CityClara_Text_Gardener_BeforeGardenBeginYN::
# 1077 "data/maps/CityClara/scripts.pory"
	.string "Oh hey! You're a young, fit, capable boy.\n"
	.string "Will you help me clean up the garden?\l"
	.string "Please?$"

CityClara_Text_Gardener_BeforeGardenDecline::
# 1081 "data/maps/CityClara/scripts.pory"
	.string "I understand. It's not your job. Take\n"
	.string "care.$"

CityClara_Text_Gardener_BeforeGardenBegin::
# 1085 "data/maps/CityClara/scripts.pory"
	.string "Thank you so much! Let me show you\n"
	.string "inside.$"

CityClara_Text_Gardener_BeginGarden1::
# 1089 "data/maps/CityClara/scripts.pory"
	.string "Welcome to the Castalia Garden! In\n"
	.string "better times we grow beautiful things\l"
	.string "but now the garden looks like such a\l"
	.string "mess. Please get rid of the pests that\l"
	.string "have moved in and use this Scythe to\l"
	.string "cut down the small trees.$"

CityClara_Text_Gardener_BeginGarden2::
# 1093 "data/maps/CityClara/scripts.pory"
	.string "Now get to work! Good luck! You can do\n"
	.string "it!$"

CityClara_Text_Gardener_DuringGarden::
# 1097 "data/maps/CityClara/scripts.pory"
	.string "You're not done yet. The garden's still a\n"
	.string "mess!$"

CityClara_Text_Gardener_AfterGarden::
# 1101 "data/maps/CityClara/scripts.pory"
	.string "Thank you again for cleaining the\n"
	.string "garden.$"

CityClara_Text_Gardener_FinishGarden1::
# 1105 "data/maps/CityClara/scripts.pory"
	.string "You did it! You cut down every weed and\n"
	.string "fully resolved the infestation! As\l"
	.string "thanks I want you to keep that Sharp\l"
	.string "Scythe.$"

CityClara_Text_Gardener_FinishGarden2::
# 1109 "data/maps/CityClara/scripts.pory"
	.string "Come back and visit the garden later.$"

CityClara_Text_LeafOnTheRoad::
# 1113 "data/maps/CityClara/scripts.pory"
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
