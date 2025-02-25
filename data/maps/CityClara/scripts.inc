CityClara_MapScripts::
# 38 "data//maps/CityClara/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 40 "data//maps/CityClara/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_CityClara
# 41 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 43 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 45 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 47 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 49 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 51 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 56 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 3
	goto_if_lt CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 61 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 0
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
# 63 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
	return

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 42 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 44 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 46 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 48 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 4
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 50 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 5
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 52 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 6
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 57 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_ShowMewScene
	goto CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 62 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_ShowLeafEtScott
	return

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 64 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_ShowLeaf
	return


CityClara_Script_ActaEchonaTransition::
# 73 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 1
# 74 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 75 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SilvaTransition::
# 79 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 2
# 80 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 81 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ViaFideliumTransition::
# 85 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 3
# 86 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 87 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SinusClarusTransition::
# 91 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 4
# 92 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 93 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_CastaliaTransition::
# 97 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 5
# 98 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 99 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_DeltaDraciTransition::
# 103 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 6
# 104 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 105 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ShowMewScene::
# 111 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 1, 62, 10
# 112 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 114 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 3, 65, 10
# 115 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 117 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 14, 34, 22
# 118 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_DOWN
# 120 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 15, 36, 22
# 121 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_DOWN
# 123 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 16, 35, 22
# 124 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_FACE_DOWN
# 126 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 4, 35, 23
# 127 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 129 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 5, 35, 24
# 130 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 132 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 6, 35, 25
# 133 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 135 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 9, 35, 26
# 136 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 138 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 8, 35, 27
# 139 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 141 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 10, 35, 28
# 142 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 144 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 11, 35, 29
# 145 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
# 147 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 12, 35, 30
# 148 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_UP
# 150 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 13, 35, 31
# 151 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_UP
	return


CityClara_Script_ShowLeafEtScott::
# 157 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 26, 30, 37
# 158 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_DOWN
# 160 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 31, 37
# 161 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 163 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 32, 37
# 164 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_ShowLeaf::
# 170 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 32, 31
# 171 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 173 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 31, 31
# 174 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_LeafEtScottSceneA::
# 180 "data//maps/CityClara/scripts.pory"
	lockall
# 181 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 182 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 183 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 185 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottSceneB::
# 190 "data//maps/CityClara/scripts.pory"
	lockall
# 191 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 192 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 193 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 194 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 195 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 197 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottScene::
# 203 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_LeafEtScottScene_Player
# 204 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 206 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 207 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf1
# 208 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 210 "data//maps/CityClara/scripts.pory"
	load_field_pic 33, 190, 98
# 211 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Scott1
# 212 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 33
# 213 "data//maps/CityClara/scripts.pory"
	closemessage
# 215 "data//maps/CityClara/scripts.pory"
	applymovement 26, CityClara_Movement_LeafEtScottScene_ScottExit
# 216 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 218 "data//maps/CityClara/scripts.pory"
	removeobject 26
# 219 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 26, 0, 0
# 220 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_INVISIBLE
# 221 "data//maps/CityClara/scripts.pory"
	addobject 26
# 223 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 224 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf2
# 225 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 226 "data//maps/CityClara/scripts.pory"
	closemessage
# 228 "data//maps/CityClara/scripts.pory"
	applymovement 18, CityClara_Movement_LeafEtScottScene_LeafExit
# 229 "data//maps/CityClara/scripts.pory"
	applymovement 27, CityClara_Movement_LeafEtScottScene_LeafExit
# 230 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 232 "data//maps/CityClara/scripts.pory"
	removeobject 18
# 233 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 32, 31
# 234 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 235 "data//maps/CityClara/scripts.pory"
	addobject 18
# 236 "data//maps/CityClara/scripts.pory"
	showobjectat 18, MAP_CITY_CLARA
# 238 "data//maps/CityClara/scripts.pory"
	removeobject 27
# 239 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 31, 31
# 240 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
# 241 "data//maps/CityClara/scripts.pory"
	addobject 27
# 242 "data//maps/CityClara/scripts.pory"
	showobjectat 27, MAP_CITY_CLARA
# 244 "data//maps/CityClara/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 1
# 246 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_ClubSign::
# 252 "data//maps/CityClara/scripts.pory"
	lock
# 253 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_ClubSign
# 254 "data//maps/CityClara/scripts.pory"
	closemessage
# 255 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_CannaWoman::
# 260 "data//maps/CityClara/scripts.pory"
	lockall
# 261 "data//maps/CityClara/scripts.pory"
	faceplayer
# 262 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_CannaWoman
# 263 "data//maps/CityClara/scripts.pory"
	closemessage
# 264 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_Man2::
# 269 "data//maps/CityClara/scripts.pory"
	lock
# 270 "data//maps/CityClara/scripts.pory"
	faceplayer
# 271 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Man2_2
# 275 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit
CityClara_EventScript_Man2_1:
# 277 "data//maps/CityClara/scripts.pory"
	closemessage
# 278 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Man2_2:
# 272 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit2
	goto CityClara_EventScript_Man2_1


CityClara_EventScript_FatMan::
# 283 "data//maps/CityClara/scripts.pory"
	lock
# 284 "data//maps/CityClara/scripts.pory"
	faceplayer
# 285 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_FatMan_2
# 289 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan
CityClara_EventScript_FatMan_1:
# 291 "data//maps/CityClara/scripts.pory"
	closemessage
# 292 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_FatMan_2:
# 286 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan2
	goto CityClara_EventScript_FatMan_1


CityClara_EventScript_Woman1::
# 297 "data//maps/CityClara/scripts.pory"
	lock
# 298 "data//maps/CityClara/scripts.pory"
	faceplayer
# 299 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman1_2
# 303 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA
CityClara_EventScript_Woman1_1:
# 305 "data//maps/CityClara/scripts.pory"
	closemessage
# 306 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman1_2:
# 300 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA2
	goto CityClara_EventScript_Woman1_1


CityClara_EventScript_Woman5::
# 311 "data//maps/CityClara/scripts.pory"
	lock
# 312 "data//maps/CityClara/scripts.pory"
	faceplayer
# 313 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman5_2
# 317 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman
CityClara_EventScript_Woman5_1:
# 319 "data//maps/CityClara/scripts.pory"
	closemessage
# 320 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman5_2:
# 314 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman2
	goto CityClara_EventScript_Woman5_1


CityClara_EventScript_Woman3::
# 326 "data//maps/CityClara/scripts.pory"
	lock
# 327 "data//maps/CityClara/scripts.pory"
	faceplayer
# 328 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman3_2
# 332 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman
CityClara_EventScript_Woman3_1:
# 334 "data//maps/CityClara/scripts.pory"
	closemessage
# 335 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman3_2:
# 329 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman2
	goto CityClara_EventScript_Woman3_1


CityClara_EventScript_Gentleman::
# 340 "data//maps/CityClara/scripts.pory"
	lock
# 341 "data//maps/CityClara/scripts.pory"
	faceplayer
# 342 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Gentleman_2
# 346 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan
CityClara_EventScript_Gentleman_1:
# 348 "data//maps/CityClara/scripts.pory"
	closemessage
# 349 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Gentleman_2:
# 343 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan2
	goto CityClara_EventScript_Gentleman_1


CityClara_EventScript_OldWoman::
# 354 "data//maps/CityClara/scripts.pory"
	lock
# 355 "data//maps/CityClara/scripts.pory"
	faceplayer
# 356 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_OldWoman_2
# 360 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman
CityClara_EventScript_OldWoman_1:
# 362 "data//maps/CityClara/scripts.pory"
	closemessage
# 363 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldWoman_2:
# 357 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman2
	goto CityClara_EventScript_OldWoman_1


CityClara_EventScript_Lass::
# 368 "data//maps/CityClara/scripts.pory"
	lock
# 369 "data//maps/CityClara/scripts.pory"
	faceplayer
# 370 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Lass_2
# 374 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass
CityClara_EventScript_Lass_1:
# 376 "data//maps/CityClara/scripts.pory"
	closemessage
# 377 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Lass_2:
# 371 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass2
	goto CityClara_EventScript_Lass_1


CityClara_EventScript_LeafBridge::
# 382 "data//maps/CityClara/scripts.pory"
	lock
# 383 "data//maps/CityClara/scripts.pory"
	faceplayer
# 384 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 391 "data//maps/CityClara/scripts.pory"
	closemessage
# 392 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 393 "data//maps/CityClara/scripts.pory"
	applymovement 22, Common_Movement_FaceDown
# 394 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 395 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_TownSign::
# 400 "data//maps/CityClara/scripts.pory"
	lock
# 401 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_TownSign
# 402 "data//maps/CityClara/scripts.pory"
	closemessage
# 403 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_Senex::
# 408 "data//maps/CityClara/scripts.pory"
	lockall
# 409 "data//maps/CityClara/scripts.pory"
	faceplayer
# 410 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex1, MSGBOX_YESNO
# 411 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_EventScript_Senex_2
# 415 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex3
CityClara_EventScript_Senex_1:
# 417 "data//maps/CityClara/scripts.pory"
	closemessage
# 418 "data//maps/CityClara/scripts.pory"
	releaseall
	end

CityClara_EventScript_Senex_2:
# 412 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex2
	goto CityClara_EventScript_Senex_1


CityClara_EventScript_Jessie::
# 423 "data//maps/CityClara/scripts.pory"
	lockall
# 424 "data//maps/CityClara/scripts.pory"
	faceplayer
# 425 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Jessie
# 426 "data//maps/CityClara/scripts.pory"
	closemessage
# 427 "data//maps/CityClara/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 428 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 429 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_James::
# 434 "data//maps/CityClara/scripts.pory"
	lockall
# 435 "data//maps/CityClara/scripts.pory"
	faceplayer
# 436 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_James
# 437 "data//maps/CityClara/scripts.pory"
	closemessage
# 438 "data//maps/CityClara/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 439 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 440 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_RocketBlockA::
# 445 "data//maps/CityClara/scripts.pory"
	lock
# 446 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 447 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 448 "data//maps/CityClara/scripts.pory"
	closemessage
# 449 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 450 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1A
# 451 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2A
# 452 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 453 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 454 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 455 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 456 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 457 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 458 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 459 "data//maps/CityClara/scripts.pory"
	closemessage
# 460 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1A
# 461 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2A
# 462 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 463 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 464 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_RocketBlockB::
# 468 "data//maps/CityClara/scripts.pory"
	lock
# 469 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 470 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 471 "data//maps/CityClara/scripts.pory"
	closemessage
# 472 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 473 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1B
# 474 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2B
# 475 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 476 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 477 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 478 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 479 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 480 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 481 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 482 "data//maps/CityClara/scripts.pory"
	closemessage
# 483 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1B
# 484 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2B
# 485 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 486 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 487 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket1::
# 491 "data//maps/CityClara/scripts.pory"
	lock
# 492 "data//maps/CityClara/scripts.pory"
	faceplayer
# 493 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket1
# 494 "data//maps/CityClara/scripts.pory"
	closemessage
# 495 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket2::
# 499 "data//maps/CityClara/scripts.pory"
	lock
# 500 "data//maps/CityClara/scripts.pory"
	faceplayer
# 501 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket2
# 502 "data//maps/CityClara/scripts.pory"
	closemessage
# 503 "data//maps/CityClara/scripts.pory"
	release
	return


# 506 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1A:
# 507 "data//maps/CityClara/scripts.pory"
	walk_down
# 508 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 511 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2A:
# 512 "data//maps/CityClara/scripts.pory"
	walk_down
# 513 "data//maps/CityClara/scripts.pory"
	walk_left
	step_end

# 516 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceLeft:
# 517 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 520 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceRight:
# 521 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 524 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1A:
# 525 "data//maps/CityClara/scripts.pory"
	walk_up
# 526 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 529 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2A:
# 530 "data//maps/CityClara/scripts.pory"
	walk_right
# 531 "data//maps/CityClara/scripts.pory"
	walk_up
# 532 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 535 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerReturn:
# 536 "data//maps/CityClara/scripts.pory"
	walk_down
# 536 "data//maps/CityClara/scripts.pory"
	walk_down
	step_end

# 539 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1B:
# 540 "data//maps/CityClara/scripts.pory"
	walk_down
# 541 "data//maps/CityClara/scripts.pory"
	walk_right
	step_end

# 544 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2B:
# 545 "data//maps/CityClara/scripts.pory"
	walk_down
# 546 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 549 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1B:
# 550 "data//maps/CityClara/scripts.pory"
	walk_left
# 551 "data//maps/CityClara/scripts.pory"
	walk_up
# 552 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 555 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2B:
# 556 "data//maps/CityClara/scripts.pory"
	walk_up
# 557 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 560 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_Player:
# 561 "data//maps/CityClara/scripts.pory"
	walk_right
# 561 "data//maps/CityClara/scripts.pory"
	walk_right
# 561 "data//maps/CityClara/scripts.pory"
	walk_right
# 562 "data//maps/CityClara/scripts.pory"
	walk_up
	step_end

# 565 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_ScottExit:
# 566 "data//maps/CityClara/scripts.pory"
	walk_down
# 566 "data//maps/CityClara/scripts.pory"
	walk_down
# 566 "data//maps/CityClara/scripts.pory"
	walk_down
# 567 "data//maps/CityClara/scripts.pory"
	walk_left
# 567 "data//maps/CityClara/scripts.pory"
	walk_left
# 567 "data//maps/CityClara/scripts.pory"
	walk_left
# 567 "data//maps/CityClara/scripts.pory"
	walk_left
# 567 "data//maps/CityClara/scripts.pory"
	walk_left
# 567 "data//maps/CityClara/scripts.pory"
	walk_left
# 567 "data//maps/CityClara/scripts.pory"
	walk_left
	step_end

# 570 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_LeafExit:
# 571 "data//maps/CityClara/scripts.pory"
	walk_up
# 571 "data//maps/CityClara/scripts.pory"
	walk_up
# 571 "data//maps/CityClara/scripts.pory"
	walk_up
# 571 "data//maps/CityClara/scripts.pory"
	walk_up
# 571 "data//maps/CityClara/scripts.pory"
	walk_up
	step_end

CityClara_Text_ClubSign::
# 574 "data//maps/CityClara/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_TownSign::
# 578 "data//maps/CityClara/scripts.pory"
	.string "City Saeclara built upon the lake$"

CityClara_Text_CannaWoman::
# 582 "data//maps/CityClara/scripts.pory"
	.string "You see this building here? The Chronic\n"
	.string "Club? They got me so high I can barely\l"
	.string "walk!$"

CityClara_Text_LeafBridge::
# 586 "data//maps/CityClara/scripts.pory"
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
# 590 "data//maps/CityClara/scripts.pory"
	.string "Oh my gosh {PLAYER}! Is that the HM\n"
	.string "CUT? You are the best! Let's sneak into\l"
	.string "the church!$"

CityClara_Text_GreenSuit::
# 594 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_GreenSuit2::
# 598 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_FatMan::
# 602 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_FatMan2::
# 606 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_WomanA::
# 610 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_WomanA2::
# 614 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_RedWoman::
# 618 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_RedWoman2::
# 622 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldMan::
# 626 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldMan2::
# 630 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldWoman::
# 634 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldWoman2::
# 638 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Lass::
# 642 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_Lass2::
# 646 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Senex1::
# 650 "data//maps/CityClara/scripts.pory"
	.string "My boy come here, or no, are you a girl?\n"
	.string "Forgive me for my eyes are old as I have\l"
	.string "grown. Tell me would you ask me to speak\l"
	.string "and tell to you the tale of this city?$"

CityClara_Text_Senex2::
# 654 "data//maps/CityClara/scripts.pory"
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
# 658 "data//maps/CityClara/scripts.pory"
	.string "No one has time for history these\n"
	.string "days...$"

CityClara_Text_RocketBlock1::
# 662 "data//maps/CityClara/scripts.pory"
	.string "Hey You!$"

CityClara_Text_RocketBlock2::
# 666 "data//maps/CityClara/scripts.pory"
	.string "Stop right there! Take not one more\n"
	.string "stop. This road is closed, we shall let\l"
	.string "no one pass.$"

CityClara_Text_RocketBlock3::
# 670 "data//maps/CityClara/scripts.pory"
	.string "By order of the Rocket High Command\n"
	.string "only party business will be allowed\l"
	.string "until our mission has been completed.\l"
	.string "Now get thee gone, noone wants more\l"
	.string "trouble$"

CityClara_Text_Rocket1::
# 674 "data//maps/CityClara/scripts.pory"
	.string "The Rocket Party helped me buy a home!\n"
	.string "Standing watch on the road's the very\l"
	.string "least I can do to pay back our dear\l"
	.string "leader.$"

CityClara_Text_Rocket2::
# 678 "data//maps/CityClara/scripts.pory"
	.string "The party only wants the very best\n"
	.string "people to represent their interests.\l"
	.string "Perhaps with time, and practice, and\l"
	.string "some luck, you could one day wear our\l"
	.string "great uniform. Never forget the party's\l"
	.string "here for you.$"

CityClara_Text_Jessie::
# 682 "data//maps/CityClara/scripts.pory"
	.string "This church is being occupied by the\n"
	.string "Rocket Party and we're watching the\l"
	.string "door. You'll have to get in line and wait\l"
	.string "your turn then pay the entrance fee to\l"
	.string "step inside.$"

CityClara_Text_James::
# 686 "data//maps/CityClara/scripts.pory"
	.string "This town is so antique it's comical.\n"
	.string "Look at all these people waiting in line\l"
	.string "just for a glimpse of some old pokemon.\l"
	.string "The city is a better place to live and\l"
	.string "party people are superior.$"

CityClara_Text_Leaf1::
# 690 "data//maps/CityClara/scripts.pory"
	.string "Looks like we weren't the only ones who\n"
	.string "came to Castalia to catch a glimpse of\l"
	.string "Mew. The line to enter church is super\l"
	.string "long!$"

CityClara_Text_Scott1::
# 694 "data//maps/CityClara/scripts.pory"
	.string "It's not moving either. If you ask me\n"
	.string "it's no use waiting in that line right\l"
	.string "now. We're better off sitting in comfort\l"
	.string "at the Lotus Club until the line dies\l"
	.string "down. That's where I'm going! Why don't\l"
	.string "you join me? I'll buy us all Lotus and\l"
	.string "let time pass.$"

CityClara_Text_Leaf2::
# 698 "data//maps/CityClara/scripts.pory"
	.string "There's no way after travelling out\n"
	.string "here that we're going to go sit in a club\l"
	.string "while Mew herself awaits us in that\l"
	.string "Church! Come with me {PLAYER} we need\l"
	.string "to find a way to get into that Church\l"
	.string "ASAP!$"
