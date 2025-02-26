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
	return


CityClara_Script_ShowLeafEtScott::
# 150 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 26, 30, 37
# 151 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_DOWN
# 153 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 31, 37
# 154 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 156 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 32, 37
# 157 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_ShowLeaf::
# 163 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 32, 31
# 164 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 166 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 31, 31
# 167 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Script_LeafEtScottSceneA::
# 173 "data//maps/CityClara/scripts.pory"
	lockall
# 174 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 175 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 176 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 178 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottSceneB::
# 183 "data//maps/CityClara/scripts.pory"
	lockall
# 184 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 185 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 186 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 187 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 188 "data//maps/CityClara/scripts.pory"
	call CityClara_Script_LeafEtScottScene
# 190 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_Script_LeafEtScottScene::
# 196 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_LeafEtScottScene_Player
# 197 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 199 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 200 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf1
# 201 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 203 "data//maps/CityClara/scripts.pory"
	load_field_pic 33, 190, 98
# 204 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Scott1
# 205 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 33
# 206 "data//maps/CityClara/scripts.pory"
	closemessage
# 208 "data//maps/CityClara/scripts.pory"
	applymovement 26, CityClara_Movement_LeafEtScottScene_ScottExit
# 209 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 211 "data//maps/CityClara/scripts.pory"
	removeobject 26
# 212 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 26, 0, 0
# 213 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_INVISIBLE
# 214 "data//maps/CityClara/scripts.pory"
	addobject 26
# 216 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 217 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Leaf2
# 218 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 219 "data//maps/CityClara/scripts.pory"
	closemessage
# 221 "data//maps/CityClara/scripts.pory"
	applymovement 18, CityClara_Movement_LeafEtScottScene_LeafExit
# 222 "data//maps/CityClara/scripts.pory"
	applymovement 27, CityClara_Movement_LeafEtScottScene_LeafExit
# 223 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 225 "data//maps/CityClara/scripts.pory"
	removeobject 18
# 226 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 18, 32, 31
# 227 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 228 "data//maps/CityClara/scripts.pory"
	addobject 18
# 229 "data//maps/CityClara/scripts.pory"
	showobjectat 18, MAP_CITY_CLARA
# 231 "data//maps/CityClara/scripts.pory"
	removeobject 27
# 232 "data//maps/CityClara/scripts.pory"
	setobjectxyperm 27, 31, 31
# 233 "data//maps/CityClara/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
# 234 "data//maps/CityClara/scripts.pory"
	addobject 27
# 235 "data//maps/CityClara/scripts.pory"
	showobjectat 27, MAP_CITY_CLARA
# 237 "data//maps/CityClara/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 1
# 239 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_ClubSign::
# 245 "data//maps/CityClara/scripts.pory"
	lock
# 246 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_ClubSign
# 247 "data//maps/CityClara/scripts.pory"
	closemessage
# 248 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_CannaWoman::
# 253 "data//maps/CityClara/scripts.pory"
	lockall
# 254 "data//maps/CityClara/scripts.pory"
	faceplayer
# 255 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_CannaWoman
# 256 "data//maps/CityClara/scripts.pory"
	closemessage
# 257 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_Man2::
# 262 "data//maps/CityClara/scripts.pory"
	lock
# 263 "data//maps/CityClara/scripts.pory"
	faceplayer
# 264 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Man2_2
# 268 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit
CityClara_EventScript_Man2_1:
# 270 "data//maps/CityClara/scripts.pory"
	closemessage
# 271 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Man2_2:
# 265 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit2
	goto CityClara_EventScript_Man2_1


CityClara_EventScript_FatMan::
# 276 "data//maps/CityClara/scripts.pory"
	lock
# 277 "data//maps/CityClara/scripts.pory"
	faceplayer
# 278 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_FatMan_2
# 282 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan
CityClara_EventScript_FatMan_1:
# 284 "data//maps/CityClara/scripts.pory"
	closemessage
# 285 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_FatMan_2:
# 279 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan2
	goto CityClara_EventScript_FatMan_1


CityClara_EventScript_Woman1::
# 290 "data//maps/CityClara/scripts.pory"
	lock
# 291 "data//maps/CityClara/scripts.pory"
	faceplayer
# 292 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman1_2
# 296 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA
CityClara_EventScript_Woman1_1:
# 298 "data//maps/CityClara/scripts.pory"
	closemessage
# 299 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman1_2:
# 293 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA2
	goto CityClara_EventScript_Woman1_1


CityClara_EventScript_Woman5::
# 304 "data//maps/CityClara/scripts.pory"
	lock
# 305 "data//maps/CityClara/scripts.pory"
	faceplayer
# 306 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman5_2
# 310 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman
CityClara_EventScript_Woman5_1:
# 312 "data//maps/CityClara/scripts.pory"
	closemessage
# 313 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman5_2:
# 307 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman2
	goto CityClara_EventScript_Woman5_1


CityClara_EventScript_Woman3::
# 318 "data//maps/CityClara/scripts.pory"
	lock
# 319 "data//maps/CityClara/scripts.pory"
	faceplayer
# 320 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Woman3_2
# 324 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Woman3_1
CityClara_EventScript_Woman3_1:
# 326 "data//maps/CityClara/scripts.pory"
	closemessage
# 327 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Woman3_2:
# 321 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Woman3_2
	goto CityClara_EventScript_Woman3_1


CityClara_EventScript_Gentleman::
# 332 "data//maps/CityClara/scripts.pory"
	lock
# 333 "data//maps/CityClara/scripts.pory"
	faceplayer
# 334 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Gentleman_2
# 338 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan
CityClara_EventScript_Gentleman_1:
# 340 "data//maps/CityClara/scripts.pory"
	closemessage
# 341 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Gentleman_2:
# 335 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan2
	goto CityClara_EventScript_Gentleman_1


CityClara_EventScript_OldWoman::
# 346 "data//maps/CityClara/scripts.pory"
	lock
# 347 "data//maps/CityClara/scripts.pory"
	faceplayer
# 348 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_OldWoman_2
# 352 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman
CityClara_EventScript_OldWoman_1:
# 354 "data//maps/CityClara/scripts.pory"
	closemessage
# 355 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldWoman_2:
# 349 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman2
	goto CityClara_EventScript_OldWoman_1


CityClara_EventScript_Lass::
# 361 "data//maps/CityClara/scripts.pory"
	lock
# 362 "data//maps/CityClara/scripts.pory"
	faceplayer
# 363 "data//maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_gt CityClara_EventScript_Lass_2
# 367 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass
CityClara_EventScript_Lass_1:
# 369 "data//maps/CityClara/scripts.pory"
	closemessage
# 370 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Lass_2:
# 364 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass2
	goto CityClara_EventScript_Lass_1


CityClara_Script_Gardener::
# 376 "data//maps/CityClara/scripts.pory"
	lock
# 377 "data//maps/CityClara/scripts.pory"
	faceplayer
# 379 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_TEMP_B, CityClara_Script_Gardener_2
# 386 "data//maps/CityClara/scripts.pory"
	goto_if_set FLAG_RECEIVED_SCYTHE, CityClara_Script_Gardener_3
# 391 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenIntro
# 392 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 393 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 394 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenBeginYN, MSGBOX_YESNO
# 395 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CityClara_Script_Gardener_7
# 400 "data//maps/CityClara/scripts.pory"
	setflag FLAG_TEMP_B
# 402 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenBegin
# 404 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerBeginGarden1
# 405 "data//maps/CityClara/scripts.pory"
	applymovement 21, CityClara_Movement_GardenerBeginGarden1
# 406 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 408 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeginGarden1
# 409 "data//maps/CityClara/scripts.pory"
	closemessage
# 412 "data//maps/CityClara/scripts.pory"
	setflag FLAG_RECEIVED_SCYTHE
# 414 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeginGarden2
# 415 "data//maps/CityClara/scripts.pory"
	closemessage
# 417 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_WalkRight
# 418 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerBeginGarden2
# 419 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 420 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceUp
# 421 "data//maps/CityClara/scripts.pory"
	waitmovement 0
CityClara_Script_Gardener_1:
# 425 "data//maps/CityClara/scripts.pory"
	release
	end

CityClara_Script_Gardener_2:
# 381 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_DuringGarden
# 382 "data//maps/CityClara/scripts.pory"
	closemessage
# 383 "data//maps/CityClara/scripts.pory"
	applymovement 21, Common_Movement_FaceUp
# 384 "data//maps/CityClara/scripts.pory"
	waitmovement 0
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_3:
# 387 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_AfterGarden
# 388 "data//maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_Gardener_1

CityClara_Script_Gardener_7:
# 396 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Gardener_BeforeGardenDecline
# 397 "data//maps/CityClara/scripts.pory"
	closemessage
	goto CityClara_Script_Gardener_1


CityClara_EventScript_LeafBridge::
# 430 "data//maps/CityClara/scripts.pory"
	lock
# 431 "data//maps/CityClara/scripts.pory"
	faceplayer
# 432 "data//maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 439 "data//maps/CityClara/scripts.pory"
	closemessage
# 440 "data//maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 441 "data//maps/CityClara/scripts.pory"
	applymovement 22, Common_Movement_FaceDown
# 442 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 443 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_TownSign::
# 448 "data//maps/CityClara/scripts.pory"
	lock
# 449 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_TownSign
# 450 "data//maps/CityClara/scripts.pory"
	closemessage
# 451 "data//maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_Senex::
# 456 "data//maps/CityClara/scripts.pory"
	lockall
# 457 "data//maps/CityClara/scripts.pory"
	faceplayer
# 458 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex1, MSGBOX_YESNO
# 459 "data//maps/CityClara/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_EventScript_Senex_2
# 463 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex3
CityClara_EventScript_Senex_1:
# 465 "data//maps/CityClara/scripts.pory"
	closemessage
# 466 "data//maps/CityClara/scripts.pory"
	releaseall
	end

CityClara_EventScript_Senex_2:
# 460 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex2
	goto CityClara_EventScript_Senex_1


CityClara_EventScript_Jessie::
# 471 "data//maps/CityClara/scripts.pory"
	lockall
# 472 "data//maps/CityClara/scripts.pory"
	faceplayer
# 473 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Jessie
# 474 "data//maps/CityClara/scripts.pory"
	closemessage
# 475 "data//maps/CityClara/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 476 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 477 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_James::
# 482 "data//maps/CityClara/scripts.pory"
	lockall
# 483 "data//maps/CityClara/scripts.pory"
	faceplayer
# 484 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_James
# 485 "data//maps/CityClara/scripts.pory"
	closemessage
# 486 "data//maps/CityClara/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 487 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 488 "data//maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_RocketBlockA::
# 493 "data//maps/CityClara/scripts.pory"
	lock
# 494 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 495 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 496 "data//maps/CityClara/scripts.pory"
	closemessage
# 497 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 498 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1A
# 499 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2A
# 500 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 501 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 502 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 503 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 504 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 505 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 506 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 507 "data//maps/CityClara/scripts.pory"
	closemessage
# 508 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1A
# 509 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2A
# 510 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 511 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 512 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_RocketBlockB::
# 516 "data//maps/CityClara/scripts.pory"
	lock
# 517 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 518 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 519 "data//maps/CityClara/scripts.pory"
	closemessage
# 520 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 521 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1B
# 522 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2B
# 523 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 524 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 525 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 526 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 527 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 528 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 529 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 530 "data//maps/CityClara/scripts.pory"
	closemessage
# 531 "data//maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1B
# 532 "data//maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2B
# 533 "data//maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 534 "data//maps/CityClara/scripts.pory"
	waitmovement 0
# 535 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket1::
# 539 "data//maps/CityClara/scripts.pory"
	lock
# 540 "data//maps/CityClara/scripts.pory"
	faceplayer
# 541 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket1
# 542 "data//maps/CityClara/scripts.pory"
	closemessage
# 543 "data//maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket2::
# 547 "data//maps/CityClara/scripts.pory"
	lock
# 548 "data//maps/CityClara/scripts.pory"
	faceplayer
# 549 "data//maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket2
# 550 "data//maps/CityClara/scripts.pory"
	closemessage
# 551 "data//maps/CityClara/scripts.pory"
	release
	return


# 554 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1A:
# 555 "data//maps/CityClara/scripts.pory"
	walk_down
# 556 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 559 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2A:
# 560 "data//maps/CityClara/scripts.pory"
	walk_down
# 561 "data//maps/CityClara/scripts.pory"
	walk_left
	step_end

# 564 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceLeft:
# 565 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 568 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceRight:
# 569 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 572 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1A:
# 573 "data//maps/CityClara/scripts.pory"
	walk_up
# 574 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 577 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2A:
# 578 "data//maps/CityClara/scripts.pory"
	walk_right
# 579 "data//maps/CityClara/scripts.pory"
	walk_up
# 580 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 583 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerReturn:
# 584 "data//maps/CityClara/scripts.pory"
	walk_down
# 584 "data//maps/CityClara/scripts.pory"
	walk_down
	step_end

# 587 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1B:
# 588 "data//maps/CityClara/scripts.pory"
	walk_down
# 589 "data//maps/CityClara/scripts.pory"
	walk_right
	step_end

# 592 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2B:
# 593 "data//maps/CityClara/scripts.pory"
	walk_down
# 594 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 597 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1B:
# 598 "data//maps/CityClara/scripts.pory"
	walk_left
# 599 "data//maps/CityClara/scripts.pory"
	walk_up
# 600 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 603 "data//maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2B:
# 604 "data//maps/CityClara/scripts.pory"
	walk_up
# 605 "data//maps/CityClara/scripts.pory"
	face_down
	step_end

# 608 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_Player:
# 609 "data//maps/CityClara/scripts.pory"
	walk_right
# 609 "data//maps/CityClara/scripts.pory"
	walk_right
# 609 "data//maps/CityClara/scripts.pory"
	walk_right
# 610 "data//maps/CityClara/scripts.pory"
	walk_up
	step_end

# 613 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_ScottExit:
# 614 "data//maps/CityClara/scripts.pory"
	walk_down
# 614 "data//maps/CityClara/scripts.pory"
	walk_down
# 614 "data//maps/CityClara/scripts.pory"
	walk_down
# 615 "data//maps/CityClara/scripts.pory"
	walk_left
# 615 "data//maps/CityClara/scripts.pory"
	walk_left
# 615 "data//maps/CityClara/scripts.pory"
	walk_left
# 615 "data//maps/CityClara/scripts.pory"
	walk_left
# 615 "data//maps/CityClara/scripts.pory"
	walk_left
# 615 "data//maps/CityClara/scripts.pory"
	walk_left
# 615 "data//maps/CityClara/scripts.pory"
	walk_left
	step_end

# 618 "data//maps/CityClara/scripts.pory"
CityClara_Movement_LeafEtScottScene_LeafExit:
# 619 "data//maps/CityClara/scripts.pory"
	walk_up
# 619 "data//maps/CityClara/scripts.pory"
	walk_up
# 619 "data//maps/CityClara/scripts.pory"
	walk_up
# 619 "data//maps/CityClara/scripts.pory"
	walk_up
# 619 "data//maps/CityClara/scripts.pory"
	walk_up
	step_end

# 622 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerBeginGarden1:
# 623 "data//maps/CityClara/scripts.pory"
	walk_up
# 623 "data//maps/CityClara/scripts.pory"
	walk_up
# 624 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

# 627 "data//maps/CityClara/scripts.pory"
CityClara_Movement_GardenerBeginGarden1:
# 628 "data//maps/CityClara/scripts.pory"
	walk_up
# 629 "data//maps/CityClara/scripts.pory"
	walk_left
# 630 "data//maps/CityClara/scripts.pory"
	face_right
	step_end

# 633 "data//maps/CityClara/scripts.pory"
CityClara_Movement_PlayerBeginGarden2:
# 634 "data//maps/CityClara/scripts.pory"
	walk_right
# 635 "data//maps/CityClara/scripts.pory"
	face_left
	step_end

CityClara_Text_ClubSign::
# 638 "data//maps/CityClara/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_TownSign::
# 642 "data//maps/CityClara/scripts.pory"
	.string "City Saeclara built upon the lake$"

CityClara_Text_CannaWoman::
# 646 "data//maps/CityClara/scripts.pory"
	.string "You see this building here? The Chronic\n"
	.string "Club? They got me so high I can barely\l"
	.string "walk!$"

CityClara_Text_LeafBridge::
# 650 "data//maps/CityClara/scripts.pory"
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
# 654 "data//maps/CityClara/scripts.pory"
	.string "Oh my gosh {PLAYER}! Is that the HM\n"
	.string "CUT? You are the best! Let's sneak into\l"
	.string "the church!$"

CityClara_Text_GreenSuit::
# 658 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_GreenSuit2::
# 662 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_FatMan::
# 666 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_FatMan2::
# 670 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_WomanA::
# 674 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_WomanA2::
# 678 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_RedWoman::
# 682 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_RedWoman2::
# 686 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldMan::
# 690 "data//maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldMan2::
# 694 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldWoman::
# 698 "data//maps/CityClara/scripts.pory"
	.string "Is Mew really here? Am I really here?\n"
	.string "This life feels like reflections on\l"
	.string "water...$"

CityClara_Text_OldWoman2::
# 702 "data//maps/CityClara/scripts.pory"
	.string "Am I still here, or am I an echo?$"

CityClara_Text_Lass::
# 706 "data//maps/CityClara/scripts.pory"
	.string "I want to go play in the garden but the\n"
	.string "gardener says it's dangerous now.$"

CityClara_Text_Lass2::
# 710 "data//maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Senex1::
# 714 "data//maps/CityClara/scripts.pory"
	.string "My boy come here, or no, are you a girl?\n"
	.string "Forgive me for my eyes are old as I have\l"
	.string "grown. Tell me would you ask me to speak\l"
	.string "and tell to you the tale of this city?$"

CityClara_Text_Senex2::
# 718 "data//maps/CityClara/scripts.pory"
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
# 722 "data//maps/CityClara/scripts.pory"
	.string "No one has time for history these\n"
	.string "days...$"

CityClara_Text_RocketBlock1::
# 726 "data//maps/CityClara/scripts.pory"
	.string "Hey You!$"

CityClara_Text_RocketBlock2::
# 730 "data//maps/CityClara/scripts.pory"
	.string "Stop right there! Take not one more\n"
	.string "stop. This road is closed, we shall let\l"
	.string "no one pass.$"

CityClara_Text_RocketBlock3::
# 734 "data//maps/CityClara/scripts.pory"
	.string "By order of the Rocket High Command\n"
	.string "only party business will be allowed\l"
	.string "until our mission has been completed.\l"
	.string "Now get thee gone, noone wants more\l"
	.string "trouble$"

CityClara_Text_Rocket1::
# 738 "data//maps/CityClara/scripts.pory"
	.string "The Rocket Party helped me buy a home!\n"
	.string "Standing watch on the road's the very\l"
	.string "least I can do to pay back our dear\l"
	.string "leader.$"

CityClara_Text_Rocket2::
# 742 "data//maps/CityClara/scripts.pory"
	.string "The party only wants the very best\n"
	.string "people to represent their interests.\l"
	.string "Perhaps with time, and practice, and\l"
	.string "some luck, you could one day wear our\l"
	.string "great uniform. Never forget the party's\l"
	.string "here for you.$"

CityClara_Text_Jessie::
# 746 "data//maps/CityClara/scripts.pory"
	.string "This church is being occupied by the\n"
	.string "Rocket Party and we're watching the\l"
	.string "door. You'll have to get in line and wait\l"
	.string "your turn then pay the entrance fee to\l"
	.string "step inside.$"

CityClara_Text_James::
# 750 "data//maps/CityClara/scripts.pory"
	.string "This town is so antique it's comical.\n"
	.string "Look at all these people waiting in line\l"
	.string "just for a glimpse of some old pokemon.\l"
	.string "The city is a better place to live and\l"
	.string "party people are superior.$"

CityClara_Text_Leaf1::
# 754 "data//maps/CityClara/scripts.pory"
	.string "Looks like we weren't the only ones who\n"
	.string "came to Castalia to catch a glimpse of\l"
	.string "Mew. The line to enter church is super\l"
	.string "long!$"

CityClara_Text_Scott1::
# 758 "data//maps/CityClara/scripts.pory"
	.string "It's not moving either. Those\n"
	.string "government stooges have it blocked up!\l"
	.string "If you ask me it's no use waiting in that\l"
	.string "line right now. We're better off sitting\l"
	.string "in comfort at the Lotus Club until the\l"
	.string "line dies down. That's where I'm going!\l"
	.string "Why don't you join me? I'll buy us all\l"
	.string "Lotus and let time pass.$"

CityClara_Text_Leaf2::
# 762 "data//maps/CityClara/scripts.pory"
	.string "There's no way after traveling out here\n"
	.string "that we're going to go sit in a club\l"
	.string "while Mew herself awaits us in that\l"
	.string "Church! Come with me {PLAYER} we need\l"
	.string "to find a way to get into that Church\l"
	.string "ASAP!$"

CityClara_Text_Woman3_1::
# 766 "data//maps/CityClara/scripts.pory"
	.string "The line is long, but the wait is worth\n"
	.string "it.$"

CityClara_Text_Woman3_2::
# 770 "data//maps/CityClara/scripts.pory"
	.string "I can't believe how fast time's flying\n"
	.string "by! I still feel like that same little\l"
	.string "school girl...$"

CityClara_Text_Gardener_BeforeGardenIntro::
# 774 "data//maps/CityClara/scripts.pory"
	.string "Oh no! My garden has been overrun by\n"
	.string "pests and weeds! I don't know what to\l"
	.string "do!$"

CityClara_Text_Gardener_BeforeGardenBeginYN::
# 778 "data//maps/CityClara/scripts.pory"
	.string "Oh hey! You're a young, fit, capable boy.\n"
	.string "Will you help me clean up the garden?\l"
	.string "Please?$"

CityClara_Text_Gardener_BeforeGardenDecline::
# 782 "data//maps/CityClara/scripts.pory"
	.string "I understand. It's not your job. Take\n"
	.string "care.$"

CityClara_Text_Gardener_BeforeGardenBegin::
# 786 "data//maps/CityClara/scripts.pory"
	.string "Thank you so much! Let me show you\n"
	.string "inside.$"

CityClara_Text_Gardener_BeginGarden1::
# 790 "data//maps/CityClara/scripts.pory"
	.string "Welcome to the Castalia Garden! In\n"
	.string "better times we grow beautiful things\l"
	.string "but now the garden looks like such a\l"
	.string "mess. Please get rid of the pests that\l"
	.string "have moved in and use this Scythe to\l"
	.string "cut down the small trees.$"

CityClara_Text_Gardener_BeginGarden2::
# 794 "data//maps/CityClara/scripts.pory"
	.string "Now get to work! Good luck! You can do\n"
	.string "it!$"

CityClara_Text_Gardener_DuringGarden::
# 798 "data//maps/CityClara/scripts.pory"
	.string "You're not done yet. The garden's still a\n"
	.string "mess!$"

CityClara_Text_Gardener_AfterGarden::
# 802 "data//maps/CityClara/scripts.pory"
	.string "Thank you again for cleaining the\n"
	.string "garden.$"
