CityClara_MapScripts::
# 40 "data//maps/CityClara/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION
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
	compare VAR_CITYCLARA_STATE, 3
	goto_if_lt CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 63 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 0
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
# 65 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
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

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 64 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_ShowLeafEtScott
	return

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 66 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_ShowLeaf
	return


CityClara_Script_ActaEchonaTransition::
# 75 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 1
# 76 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 77 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SilvaTransition::
# 81 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 2
# 82 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 83 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ViaFideliumTransition::
# 87 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 3
# 88 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 89 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SinusClarusTransition::
# 93 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 4
# 94 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 95 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_CastaliaTransition::
# 99 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 5
# 100 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 101 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_DeltaDraciTransition::
# 105 "data//maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 6
# 106 "data//maps/CityClara/scripts.pory"
	special TransitionMapMusic
# 107 "data//maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ShowMewScene::
# 113 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 1, 62, 10
# 114 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 116 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 3, 65, 10
# 117 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 119 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 14, 34, 22
# 120 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_DOWN
# 122 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 15, 36, 22
# 123 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_DOWN
# 125 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 16, 35, 22
# 126 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_FACE_DOWN
# 128 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 4, 35, 23
# 129 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 131 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 5, 35, 24
# 132 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 134 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 6, 35, 25
# 135 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 137 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 9, 35, 26
# 138 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 140 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 8, 35, 27
# 141 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 143 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 10, 35, 28
# 144 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 146 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 11, 35, 29
# 147 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
	return


CityClara_Script_ShowLeafEtScott::
# 153 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 26, 30, 37
# 154 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_DOWN
# 156 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 31, 37
# 157 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 159 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 32, 37
# 160 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_ShowLeaf::
# 166 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 32, 31
# 167 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 169 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 31, 31
# 170 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_LeafEtScottSceneA::
# 176 "data//maps/CityClara/scripts.pory"
	lockall
# 177 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 178 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 179 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 181 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottSceneB::
# 186 "data//maps/CityClara/scripts.pory"
	lockall
# 187 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 188 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 189 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 190 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 191 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 193 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottScene::
# 199 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_LeafEtScottScene_Player
# 200 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 202 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 203 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf1
# 204 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 206 "data//maps/CityClara/scripts.pory"
	load_field_pic 33, 190, 98
# 207 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Scott1
# 208 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 33
# 209 "data//maps/CityClara/scripts.pory"
	closemessage
# 211 "data//maps/CityClara/scripts.pory"
	applymovement 26, CityClara_Movement_LeafEtScottScene_ScottExit
# 212 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 214 "data//maps/CityClara/scripts.pory"
	removeobject 26
# 215 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 26, 0, 0
# 216 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_INVISIBLE
# 217 "data//maps/CityClara/scripts.pory"
	addobject 26
# 219 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 220 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf2
# 221 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 222 "data//maps/CityClara/scripts.pory"
	closemessage
# 224 "data//maps/CityClara/scripts.pory"
	applymovement 18, CityClara_Movement_LeafEtScottScene_LeafExit
# 225 "data//maps/CityClara/scripts.pory"
	applymovement 27, CityClara_Movement_LeafEtScottScene_LeafExit
# 226 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 228 "data//maps/CityClara/scripts.pory"
	removeobject 18
# 229 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 32, 31
# 230 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 231 "data//maps/CityClara/scripts.pory"
	addobject 18
# 232 "data//maps/CityClara/scripts.pory"
	showobjectat 18, MAP_CITY_CLARA
# 234 "data//maps/CityClara/scripts.pory"
	removeobject 27
# 235 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 31, 31
# 236 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
# 237 "data//maps/CityClara/scripts.pory"
	addobject 27
# 238 "data//maps/CityClara/scripts.pory"
	showobjectat 27, MAP_CITY_CLARA
# 240 "data//maps/CityClara/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 1
# 242 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_ClubSign::
# 248 "data//maps/CityClara/scripts.pory"
	lock
# 249 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_ClubSign
# 250 "data//maps/CityClara/scripts.pory"
	closemessage
# 251 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_CannaWoman::
# 256 "data//maps/CityClara/scripts.pory"
	lockall
# 257 "data//maps/CityClara/scripts.pory"
	faceplayer
# 258 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_CannaWoman
# 259 "data//maps/CityClara/scripts.pory"
	closemessage
# 260 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_Man2::
# 265 "data//maps/CityClara/scripts.pory"
	lock
# 266 "data//maps/CityClara/scripts.pory"
	faceplayer
# 267 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Man2_2
# 271 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit
CityClara_EventScript_Man2_1:
# 273 "data//maps/CityClara/scripts.pory"
	closemessage
# 274 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Man2_2:
# 268 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit2
	goto CityClara_EventScript_Man2_1


CityClara_EventScript_FatMan::
# 279 "data//maps/CityClara/scripts.pory"
	lock
# 280 "data//maps/CityClara/scripts.pory"
	faceplayer
# 281 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_FatMan_2
# 285 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan
CityClara_EventScript_FatMan_1:
# 287 "data//maps/CityClara/scripts.pory"
	closemessage
# 288 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_FatMan_2:
# 282 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan2
	goto CityClara_EventScript_FatMan_1


CityClara_EventScript_Woman1::
# 293 "data//maps/CityClara/scripts.pory"
	lock
# 294 "data//maps/CityClara/scripts.pory"
	faceplayer
# 295 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman1_2
# 299 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA
CityClara_EventScript_Woman1_1:
# 301 "data//maps/CityClara/scripts.pory"
	closemessage
# 302 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman1_2:
# 296 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA2
	goto CityClara_EventScript_Woman1_1


CityClara_EventScript_Woman5::
# 307 "data//maps/CityClara/scripts.pory"
	lock
# 308 "data//maps/CityClara/scripts.pory"
	faceplayer
# 309 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman5_2
# 313 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman
CityClara_EventScript_Woman5_1:
# 315 "data//maps/CityClara/scripts.pory"
	closemessage
# 316 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman5_2:
# 310 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman2
	goto CityClara_EventScript_Woman5_1


CityClara_EventScript_Woman3::
# 321 "data//maps/CityClara/scripts.pory"
	lock
# 322 "data//maps/CityClara/scripts.pory"
	faceplayer
# 323 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman3_2
# 327 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Woman3_1
CityClara_EventScript_Woman3_1:
# 329 "data//maps/CityClara/scripts.pory"
	closemessage
# 330 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman3_2:
# 324 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Woman3_2
	goto CityClara_EventScript_Woman3_1


CityClara_EventScript_Gentleman::
# 335 "data//maps/CityClara/scripts.pory"
	lock
# 336 "data//maps/CityClara/scripts.pory"
	faceplayer
# 337 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Gentleman_2
# 341 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan
CityClara_EventScript_Gentleman_1:
# 343 "data//maps/CityClara/scripts.pory"
	closemessage
# 344 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Gentleman_2:
# 338 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan2
	goto CityClara_EventScript_Gentleman_1


CityClara_EventScript_OldWoman::
# 349 "data//maps/CityClara/scripts.pory"
	lock
# 350 "data//maps/CityClara/scripts.pory"
	faceplayer
# 351 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_OldWoman_2
# 355 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman
CityClara_EventScript_OldWoman_1:
# 357 "data//maps/CityClara/scripts.pory"
	closemessage
# 358 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldWoman_2:
# 352 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman2
	goto CityClara_EventScript_OldWoman_1


CityClara_EventScript_Lass::
# 364 "data//maps/CityClara/scripts.pory"
	lock
# 365 "data//maps/CityClara/scripts.pory"
	faceplayer
# 366 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Lass_2
# 370 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass
CityClara_EventScript_Lass_1:
# 372 "data//maps/CityClara/scripts.pory"
	closemessage
# 373 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Lass_2:
# 367 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass2
	goto CityClara_EventScript_Lass_1


CityClara_Script_Gardener::
# 379 "data//maps/CityClara/scripts.pory"
	lock
# 380 "data//maps/CityClara/scripts.pory"
	faceplayer
# 382 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_B, CityClara_Script_Gardener_2
# 389 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_RECEIVED_SCYTHE, CityClara_Script_Gardener_3
# 394 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenIntro
# 395 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 396 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 397 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenBeginYN, MSGBOX_YESNO
# 398 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CityClara_Script_Gardener_7
# 403 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_B
# 405 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenBegin
# 407 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerBeginGarden1
# 408 "data//maps/CityClara/scripts.pory"
	applymovement 21, CityClara_Movement_GardenerBeginGarden1
# 409 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 411 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeginGarden1
# 412 "data//maps/CityClara/scripts.pory"
	closemessage
# 415 "data//maps/CityClara/scripts.pory"
	setflag FLAG_RECEIVED_SCYTHE
# 417 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeginGarden2
# 418 "data//maps/CityClara/scripts.pory"
	closemessage
# 420 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 421 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerBeginGarden2
# 422 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 423 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceUp
# 424 "data//maps/CityClara/scripts.pory"
	waitmovement 0
CityClara_Script_Gardener_1:
# 428 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_Script_Gardener_2:
# 384 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_DuringGarden
# 385 "data//maps/CityClara/scripts.pory"
	closemessage
# 386 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceUp
# 387 "data//maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_3:
# 390 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_AfterGarden
# 391 "data//maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_7:
# 399 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenDecline
# 400 "data//maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_Gardener_1


CityClara_EventScript_LeafBridge::
# 433 "data//maps/CityClara/scripts.pory"
	lock
# 434 "data//maps/CityClara/scripts.pory"
	faceplayer
# 435 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 442 "data//maps/CityClara/scripts.pory"
	closemessage
# 443 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 444 "data//maps/CityClara/scripts.pory"
	applymovement 22, Common_Movement_FaceDown
# 445 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 446 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_TownSign::
# 451 "data//maps/CityClara/scripts.pory"
	lock
# 452 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_TownSign
# 453 "data//maps/CityClara/scripts.pory"
	closemessage
# 454 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_Senex::
# 459 "data//maps/CityClara/scripts.pory"
	lockall
# 460 "data//maps/CityClara/scripts.pory"
	faceplayer
# 461 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex1, MSGBOX_YESNO
# 462 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_EventScript_Senex_2
# 466 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex3
CityClara_EventScript_Senex_1:
# 468 "data//maps/CityClara/scripts.pory"
	closemessage
# 469 "data//maps/CityClara/scripts.pory"
	releaseall
	end

CityClara_EventScript_Senex_2:
# 463 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex2
	goto CityClara_EventScript_Senex_1


CityClara_EventScript_Jessie::
# 474 "data//maps/CityClara/scripts.pory"
	lockall
# 475 "data//maps/CityClara/scripts.pory"
	faceplayer
# 476 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Jessie
# 477 "data//maps/CityClara/scripts.pory"
	closemessage
# 478 "data//maps/CityClara/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 479 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 480 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_James::
# 485 "data//maps/CityClara/scripts.pory"
	lockall
# 486 "data//maps/CityClara/scripts.pory"
	faceplayer
# 487 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_James
# 488 "data//maps/CityClara/scripts.pory"
	closemessage
# 489 "data//maps/CityClara/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 490 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 491 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_RocketBlockA::
# 496 "data//maps/CityClara/scripts.pory"
	lock
# 497 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 498 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 499 "data//maps/CityClara/scripts.pory"
	closemessage
# 500 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 501 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1A
# 502 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2A
# 503 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 504 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 505 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 506 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 507 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 508 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 509 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 510 "data//maps/CityClara/scripts.pory"
	closemessage
# 511 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1A
# 512 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2A
# 513 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 514 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 515 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_RocketBlockB::
# 519 "data//maps/CityClara/scripts.pory"
	lock
# 520 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 521 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 522 "data//maps/CityClara/scripts.pory"
	closemessage
# 523 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 524 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1B
# 525 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2B
# 526 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 527 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 528 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 529 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 530 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 531 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 532 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 533 "data//maps/CityClara/scripts.pory"
	closemessage
# 534 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1B
# 535 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2B
# 536 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 537 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 538 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket1::
# 542 "data//maps/CityClara/scripts.pory"
	lock
# 543 "data//maps/CityClara/scripts.pory"
	faceplayer
# 544 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket1
# 545 "data//maps/CityClara/scripts.pory"
	closemessage
# 546 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket2::
# 550 "data//maps/CityClara/scripts.pory"
	lock
# 551 "data//maps/CityClara/scripts.pory"
	faceplayer
# 552 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket2
# 553 "data//maps/CityClara/scripts.pory"
	closemessage
# 554 "data//maps/CityClara/scripts.pory"
	release
	return


# 557 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1A:
# 558 "data//maps/CityClara/scripts.pory"
	walk_down
# 559 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 562 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2A:
# 563 "data//maps/CityClara/scripts.pory"
	walk_down
# 564 "data//maps/CityClara/scripts.pory"
	walk_left
	step_end

# 567 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceLeft:
# 568 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 571 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceRight:
# 572 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 575 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1A:
# 576 "data//maps/CityClara/scripts.pory"
	walk_up
# 577 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 580 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2A:
# 581 "data//maps/CityClara/scripts.pory"
	walk_right
# 582 "data//maps/CityClara/scripts.pory"
	walk_up
# 583 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 586 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerReturn:
# 587 "data//maps/CityClara/scripts.pory"
	walk_down
# 587 "data//maps/CityClara/scripts.pory"
	walk_down
	step_end

# 590 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1B:
# 591 "data//maps/CityClara/scripts.pory"
	walk_down
# 592 "data//maps/CityClara/scripts.pory"
	walk_right
	step_end

# 595 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2B:
# 596 "data//maps/CityClara/scripts.pory"
	walk_down
# 597 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 600 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1B:
# 601 "data//maps/CityClara/scripts.pory"
	walk_left
# 602 "data//maps/CityClara/scripts.pory"
	walk_up
# 603 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 606 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2B:
# 607 "data//maps/CityClara/scripts.pory"
	walk_up
# 608 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 611 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_Player:
# 612 "data//maps/CityClara/scripts.pory"
	walk_right
# 612 "data//maps/CityClara/scripts.pory"
	walk_right
# 612 "data//maps/CityClara/scripts.pory"
	walk_right
# 613 "data//maps/CityClara/scripts.pory"
	walk_up
	step_end

# 616 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_ScottExit:
# 617 "data//maps/CityClara/scripts.pory"
	walk_down
# 617 "data//maps/CityClara/scripts.pory"
	walk_down
# 617 "data//maps/CityClara/scripts.pory"
	walk_down
# 618 "data//maps/CityClara/scripts.pory"
	walk_left
# 618 "data//maps/CityClara/scripts.pory"
	walk_left
# 618 "data//maps/CityClara/scripts.pory"
	walk_left
# 618 "data//maps/CityClara/scripts.pory"
	walk_left
# 618 "data//maps/CityClara/scripts.pory"
	walk_left
# 618 "data//maps/CityClara/scripts.pory"
	walk_left
# 618 "data//maps/CityClara/scripts.pory"
	walk_left
	step_end

# 621 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_LeafExit:
# 622 "data//maps/CityClara/scripts.pory"
	walk_up
# 622 "data//maps/CityClara/scripts.pory"
	walk_up
# 622 "data//maps/CityClara/scripts.pory"
	walk_up
# 622 "data//maps/CityClara/scripts.pory"
	walk_up
# 622 "data//maps/CityClara/scripts.pory"
	walk_up
	step_end

# 625 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerBeginGarden1:
# 626 "data//maps/CityClara/scripts.pory"
	walk_up
# 626 "data//maps/CityClara/scripts.pory"
	walk_up
# 627 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 630 "data//maps/CityClara/scripts.pory"
CityClara_Movement_GardenerBeginGarden1:
# 631 "data//maps/CityClara/scripts.pory"
	walk_up
# 632 "data//maps/CityClara/scripts.pory"
	walk_left
# 633 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 636 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerBeginGarden2:
# 637 "data//maps/CityClara/scripts.pory"
	walk_right
# 638 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

CityClara_Text_ClubSign::
# 641 "data//maps/CityClara/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_TownSign::
# 645 "data//maps/CityClara/scripts.pory"
	.string "City Saeclara built upon the lake$"

CityClara_Text_CannaWoman::
# 649 "data//maps/CityClara/scripts.pory"
	.string "You see this building here? The Chronic\n"
	.string "Club? They got me so high I can barely\l"
	.string "walk!$"

CityClara_Text_LeafBridge::
# 653 "data//maps/CityClara/scripts.pory"
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
# 657 "data//maps/CityClara/scripts.pory"
	.string "Oh my gosh {PLAYER}! Is that the HM\n"
	.string "CUT? You are the best! Let's sneak into\l"
	.string "the church!$"

CityClara_Text_GreenSuit::
# 661 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_GreenSuit2::
# 665 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_FatMan::
# 669 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_FatMan2::
# 673 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_WomanA::
# 677 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_WomanA2::
# 681 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_RedWoman::
# 685 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_RedWoman2::
# 689 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldMan::
# 693 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldMan2::
# 697 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldWoman::
# 701 "data//maps/CityClara/scripts.pory"
	.string "Is Mew really here? Am I really here?\n"
	.string "This life feels like reflections on\l"
	.string "water...$"

CityClara_Text_OldWoman2::
# 705 "data//maps/CityClara/scripts.pory"
	.string "Am I still here, or am I an echo?$"

CityClara_Text_Lass::
# 709 "data//maps/CityClara/scripts.pory"
	.string "I want to go play in the garden but the\n"
	.string "gardener says it's dangerous now.$"

CityClara_Text_Lass2::
# 713 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Senex1::
# 717 "data//maps/CityClara/scripts.pory"
	.string "My boy come here, or no, are you a girl?\n"
	.string "Forgive me for my eyes are old as I have\l"
	.string "grown. Tell me would you ask me to speak\l"
	.string "and tell to you the tale of this city?$"

CityClara_Text_Senex2::
# 721 "data//maps/CityClara/scripts.pory"
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
# 725 "data//maps/CityClara/scripts.pory"
	.string "No one has time for history these\n"
	.string "days...$"

CityClara_Text_RocketBlock1::
# 729 "data//maps/CityClara/scripts.pory"
	.string "Hey You!$"

CityClara_Text_RocketBlock2::
# 733 "data//maps/CityClara/scripts.pory"
	.string "Stop right there! Take not one more\n"
	.string "stop. This road is closed, we shall let\l"
	.string "no one pass.$"

CityClara_Text_RocketBlock3::
# 737 "data//maps/CityClara/scripts.pory"
	.string "By order of the Rocket High Command\n"
	.string "only party business will be allowed\l"
	.string "until our mission has been completed.\l"
	.string "Now get thee gone, noone wants more\l"
	.string "trouble$"

CityClara_Text_Rocket1::
# 741 "data//maps/CityClara/scripts.pory"
	.string "The Rocket Party helped me buy a home!\n"
	.string "Standing watch on the road's the very\l"
	.string "least I can do to pay back our dear\l"
	.string "leader.$"

CityClara_Text_Rocket2::
# 745 "data//maps/CityClara/scripts.pory"
	.string "The party only wants the very best\n"
	.string "people to represent their interests.\l"
	.string "Perhaps with time, and practice, and\l"
	.string "some luck, you could one day wear our\l"
	.string "great uniform. Never forget the party's\l"
	.string "here for you.$"

CityClara_Text_Jessie::
# 749 "data//maps/CityClara/scripts.pory"
	.string "This church is being occupied by the\n"
	.string "Rocket Party and we're watching the\l"
	.string "door. You'll have to get in line and wait\l"
	.string "your turn then pay the entrance fee to\l"
	.string "step inside.$"

CityClara_Text_James::
# 753 "data//maps/CityClara/scripts.pory"
	.string "This town is so antique it's comical.\n"
	.string "Look at all these people waiting in line\l"
	.string "just for a glimpse of some old pokemon.\l"
	.string "The city is a better place to live and\l"
	.string "party people are superior.$"

CityClara_Text_Leaf1::
# 757 "data//maps/CityClara/scripts.pory"
	.string "Looks like we weren't the only ones who\n"
	.string "came to Castalia to catch a glimpse of\l"
	.string "Mew. The line to enter church is super\l"
	.string "long!$"

CityClara_Text_Scott1::
# 761 "data//maps/CityClara/scripts.pory"
	.string "It's not moving either. If you ask me\n"
	.string "it's no use waiting in that line right\l"
	.string "now. We're better off sitting in comfort\l"
	.string "at the Lotus Club until the line dies\l"
	.string "down. That's where I'm going! Why don't\l"
	.string "you join me? I'll buy us all Lotus and\l"
	.string "let time pass.$"

CityClara_Text_Leaf2::
# 765 "data//maps/CityClara/scripts.pory"
	.string "There's no way after travelling out\n"
	.string "here that we're going to go sit in a club\l"
	.string "while Mew herself awaits us in that\l"
	.string "Church! Come with me {PLAYER} we need\l"
	.string "to find a way to get into that Church\l"
	.string "ASAP!$"

CityClara_Text_Woman3_1::
# 769 "data//maps/CityClara/scripts.pory"
	.string "The line is long, but the wait is worth\n"
	.string "it.$"

CityClara_Text_Woman3_2::
# 773 "data//maps/CityClara/scripts.pory"
	.string "I can't believe how fast time's flying\n"
	.string "by! I still feel like that same little\l"
	.string "school girl...$"

CityClara_Text_Gardener_BeforeGardenIntro::
# 777 "data//maps/CityClara/scripts.pory"
	.string "Oh no! My garden has been overrun by\n"
	.string "pests and weeds! I don't know what to\l"
	.string "do!$"

CityClara_Text_Gardener_BeforeGardenBeginYN::
# 781 "data//maps/CityClara/scripts.pory"
	.string "Oh hey! You're a young, fit, capable boy.\n"
	.string "Will you help me clean up the garden?\l"
	.string "Please?$"

CityClara_Text_Gardener_BeforeGardenDecline::
# 785 "data//maps/CityClara/scripts.pory"
	.string "I understand. It's not your job. Take\n"
	.string "care.$"

CityClara_Text_Gardener_BeforeGardenBegin::
# 789 "data//maps/CityClara/scripts.pory"
	.string "Thank you so much! Let me show you\n"
	.string "inside.$"

CityClara_Text_Gardener_BeginGarden1::
# 793 "data//maps/CityClara/scripts.pory"
	.string "Welcome to the Castalia Garden! In\n"
	.string "better times we grow beautiful things\l"
	.string "but now the garden looks like such a\l"
	.string "mess. Please get rid of the pests that\l"
	.string "have moved in and use this Scythe to\l"
	.string "cut down the small trees.$"

CityClara_Text_Gardener_BeginGarden2::
# 797 "data//maps/CityClara/scripts.pory"
	.string "Now get to work! Good luck! You can do\n"
	.string "it!$"

CityClara_Text_Gardener_DuringGarden::
# 801 "data//maps/CityClara/scripts.pory"
	.string "You're not done yet. The garden's still a\n"
	.string "mess!$"

CityClara_Text_Gardener_AfterGarden::
# 805 "data//maps/CityClara/scripts.pory"
	.string "Thank you again for cleaining the\n"
	.string "garden.$"
