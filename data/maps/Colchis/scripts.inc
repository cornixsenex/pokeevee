Colchis_MapScripts::
# 76 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 87 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
# 77 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_2
Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 81 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 78 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_IntroSetup
	goto Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 82 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_IntroDeclinedSetup
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 88 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
	.2byte 0


Colchis_TempScript_SetupTestMedeaDance::
# 97 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 98 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 104 "data/maps/Colchis/scripts.pory"
	lockall
# 105 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 106 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_IntroSetup::
# 112 "data/maps/Colchis/scripts.pory"
	removeobject 25
# 113 "data/maps/Colchis/scripts.pory"
	removeobject 26
# 115 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 25, 10, 59
# 116 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 26, 12, 59
# 118 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 25, MOVEMENT_TYPE_FACE_RIGHT
# 119 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_LEFT
# 121 "data/maps/Colchis/scripts.pory"
	addobject 25
# 122 "data/maps/Colchis/scripts.pory"
	addobject 26
# 124 "data/maps/Colchis/scripts.pory"
	showobjectat 25, MAP_COLCHIS
# 125 "data/maps/Colchis/scripts.pory"
	showobjectat 26, MAP_COLCHIS
	end


Colchis_Script_IntroDeclinedSetup::
# 132 "data/maps/Colchis/scripts.pory"
	removeobject 25
# 133 "data/maps/Colchis/scripts.pory"
	removeobject 26
# 134 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 136 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 25, 10, 59
# 137 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 26, 12, 59
# 138 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 11, 59
# 140 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 141 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 25, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 142 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
# 144 "data/maps/Colchis/scripts.pory"
	addobject 25
# 145 "data/maps/Colchis/scripts.pory"
	addobject 26
# 146 "data/maps/Colchis/scripts.pory"
	addobject 54
# 148 "data/maps/Colchis/scripts.pory"
	showobjectat 25, MAP_COLCHIS
# 149 "data/maps/Colchis/scripts.pory"
	showobjectat 26, MAP_COLCHIS
# 150 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	return


Colchis_Script_Jason::
# 156 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 157 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 158 "data/maps/Colchis/scripts.pory"
	closemessage
# 159 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 167 "data/maps/Colchis/scripts.pory"
	lockall
# 169 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 170 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 171 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 172 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 173 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 174 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 175 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 178 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 179 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 180 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 182 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 183 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 186 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 187 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 188 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 190 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 191 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 194 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 195 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 196 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 198 "data/maps/Colchis/scripts.pory"
	closemessage
# 201 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 202 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 203 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 204 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_YESNO
# 205 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 208 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Intro_2
# 216 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_FORCED_BATTLE
# 217 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 218 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDecline, MSGBOX_DEFAULT
# 219 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 220 "data/maps/Colchis/scripts.pory"
	closemessage
# 221 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 222 "data/maps/Colchis/scripts.pory"
	releaseall
# 223 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_IntroDeclinedSetup
Colchis_Script_Intro_1:
	end

Colchis_Script_Intro_2:
# 209 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroAccept, MSGBOX_DEFAULT
# 210 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 211 "data/maps/Colchis/scripts.pory"
	closemessage
# 212 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	goto Colchis_Script_Intro_1


Colchis_Script_EnterThroneRoom::
# 232 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 233 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom
# 234 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom
# 235 "data/maps/Colchis/scripts.pory"
	applymovement 25, Colchis_Movement_EnterThroneRoom
# 236 "data/maps/Colchis/scripts.pory"
	applymovement 26, Colchis_Movement_EnterThroneRoom
# 237 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 238 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 239 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 240 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 244 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 287 "data/maps/Colchis/scripts.pory"
	lockall
# 288 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 290 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 298 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 299 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 300 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 302 "data/maps/Colchis/scripts.pory"
	addobject 23
# 303 "data/maps/Colchis/scripts.pory"
	addobject 24
# 305 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 306 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 310 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 311 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 313 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 314 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 315 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_MedeaDance::
# 337 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 338 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 339 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 344 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 345 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 346 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 347 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 348 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 349 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 350 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 351 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 352 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 353 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 354 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 355 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 356 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 357 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 358 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 359 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 360 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 361 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 370 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 371 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 372 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 373 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 374 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 375 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 376 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 378 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 380 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 381 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 382 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 384 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 386 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 387 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 388 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 390 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 396 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 397 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 398 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 399 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 400 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 401 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 402 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 404 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 406 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 407 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 408 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 409 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 410 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 412 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 414 "data/maps/Colchis/scripts.pory"
	delay 25
# 416 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 417 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 418 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 419 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 420 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 422 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 429 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 430 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 431 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 432 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 433 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 434 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 435 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 437 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 439 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 440 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 441 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 442 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 443 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 444 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 446 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 448 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 449 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 450 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 451 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 452 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 454 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 456 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 457 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 458 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 459 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 460 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 462 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 464 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 465 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 466 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 467 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 468 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 470 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 472 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 473 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 474 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 475 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 476 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 478 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 484 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 485 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 486 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 487 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 488 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 489 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 490 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 492 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 494 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 495 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 496 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 497 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 498 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 500 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 506 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 512 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 513 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 514 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 515 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 516 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 517 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 518 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 520 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 525 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 531 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 532 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 533 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 534 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 535 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 536 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 537 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 539 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 545 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 548 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 557 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 558 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 559 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 560 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 561 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 562 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 563 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 565 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 567 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 568 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 569 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 570 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 572 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 573 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 575 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 580 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 584 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 585 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 586 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 587 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 588 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 589 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 590 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 592 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 594 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 595 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 596 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 597 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 598 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 599 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 600 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 602 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 604 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 608 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 609 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 610 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 611 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 612 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 613 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 614 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 616 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 618 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 619 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 620 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 621 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 622 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 623 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 624 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 626 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 628 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 632 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 633 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 634 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 635 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 636 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 637 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 638 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 640 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 642 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 643 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 644 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 645 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 646 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 647 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 648 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 650 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 652 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 662 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 663 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 664 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 665 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 666 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 667 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 668 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 669 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 671 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 673 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 675 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 676 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 677 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 678 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 679 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 680 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 681 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 682 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 684 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 686 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 688 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 689 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 690 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 691 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 692 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 693 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 694 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 695 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 697 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 699 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 706 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 707 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 708 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 709 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 710 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 711 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 712 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 713 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 715 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 716 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 718 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 719 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 722 "data/maps/Colchis/scripts.pory"
	delay 25
# 726 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 727 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 731 "data/maps/Colchis/scripts.pory"
	delay 25
# 733 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 734 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 738 "data/maps/Colchis/scripts.pory"
	delay 25
# 740 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 741 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 745 "data/maps/Colchis/scripts.pory"
	delay 25
# 747 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 748 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 749 "data/maps/Colchis/scripts.pory"
	delay 25
# 754 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 755 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 756 "data/maps/Colchis/scripts.pory"
	delay 25
# 758 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 759 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 760 "data/maps/Colchis/scripts.pory"
	delay 25
# 765 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 766 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 767 "data/maps/Colchis/scripts.pory"
	delay 25
# 769 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 770 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 771 "data/maps/Colchis/scripts.pory"
	delay 25
# 773 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 774 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 775 "data/maps/Colchis/scripts.pory"
	delay 25
# 777 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 778 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 779 "data/maps/Colchis/scripts.pory"
	delay 25
# 784 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 785 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 786 "data/maps/Colchis/scripts.pory"
	delay 25
# 788 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 789 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 790 "data/maps/Colchis/scripts.pory"
	delay 25
# 792 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 793 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 794 "data/maps/Colchis/scripts.pory"
	delay 25
# 796 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 797 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 798 "data/maps/Colchis/scripts.pory"
	delay 25
# 800 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 802 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 803 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 804 "data/maps/Colchis/scripts.pory"
	delay 25
# 809 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 810 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 811 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 812 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 813 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 814 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 815 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 816 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 818 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 829 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 830 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 831 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 832 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 833 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 834 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 835 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 836 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 837 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 842 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 843 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 844 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 845 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 846 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 847 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 848 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 849 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 850 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 855 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 856 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 857 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 858 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 859 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 860 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 861 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 862 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 863 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 868 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 869 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 870 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 871 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 872 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 873 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 874 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 875 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 876 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 881 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 882 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 883 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 884 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 885 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 886 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 887 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 888 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 889 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 894 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 895 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 896 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 897 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 898 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 899 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 900 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 901 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 902 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 907 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 908 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 909 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 910 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 911 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 912 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 913 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 914 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 915 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 920 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 921 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 922 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 923 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 924 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 925 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 926 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 927 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 928 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 933 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 934 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 935 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 936 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 937 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 938 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 939 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 940 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 941 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 943 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 944 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 945 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 946 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 947 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 948 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 949 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 950 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 951 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 953 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 954 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 955 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 956 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 957 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 958 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 959 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 960 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 961 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 963 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 964 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 965 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 966 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 967 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 969 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 970 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 971 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 976 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 977 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 984 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 985 "data/maps/Colchis/scripts.pory"
	closemessage
# 989 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 990 "data/maps/Colchis/scripts.pory"
	closemessage
# 1049 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_0
# 1050 "data/maps/Colchis/scripts.pory"
	closemessage
# 1061 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
	return


Colchis_Script_MedeaDance_SpinAll::
# 1067 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1071 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1072 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1073 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1074 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1079 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1080 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1081 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1082 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1083 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1084 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1085 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1086 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1087 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1088 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1089 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1090 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1091 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1092 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1093 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1094 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1095 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1100 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1101 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1102 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1103 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1104 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1105 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1106 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1107 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1108 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1109 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1110 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1111 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1112 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1113 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1114 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1115 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1116 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1117 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1118 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1119 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1120 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1121 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1122 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1123 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1124 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1125 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1126 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1127 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1128 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1129 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1130 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1131 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1132 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1133 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1134 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1135 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1136 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1137 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1138 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1139 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1140 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1141 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1142 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1143 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1144 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1145 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1146 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1147 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1148 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1149 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1150 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1151 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1152 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1153 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1154 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1155 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1156 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


# 1160 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 1161 "data/maps/Colchis/scripts.pory"
	walk_up
# 1161 "data/maps/Colchis/scripts.pory"
	walk_up
# 1161 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1164 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 1165 "data/maps/Colchis/scripts.pory"
	walk_down
# 1165 "data/maps/Colchis/scripts.pory"
	walk_down
# 1165 "data/maps/Colchis/scripts.pory"
	walk_down
# 1165 "data/maps/Colchis/scripts.pory"
	walk_down
# 1165 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1168 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 1169 "data/maps/Colchis/scripts.pory"
	walk_up
# 1169 "data/maps/Colchis/scripts.pory"
	walk_up
# 1169 "data/maps/Colchis/scripts.pory"
	walk_up
# 1169 "data/maps/Colchis/scripts.pory"
	walk_up
# 1169 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1172 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1173 "data/maps/Colchis/scripts.pory"
	walk_up
# 1174 "data/maps/Colchis/scripts.pory"
	walk_right
# 1174 "data/maps/Colchis/scripts.pory"
	walk_right
# 1174 "data/maps/Colchis/scripts.pory"
	walk_right
# 1174 "data/maps/Colchis/scripts.pory"
	walk_right
# 1174 "data/maps/Colchis/scripts.pory"
	walk_right
# 1175 "data/maps/Colchis/scripts.pory"
	walk_up
# 1175 "data/maps/Colchis/scripts.pory"
	walk_up
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1176 "data/maps/Colchis/scripts.pory"
	walk_right
# 1177 "data/maps/Colchis/scripts.pory"
	walk_up
# 1177 "data/maps/Colchis/scripts.pory"
	walk_up
# 1177 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1180 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 1181 "data/maps/Colchis/scripts.pory"
	walk_up
# 1181 "data/maps/Colchis/scripts.pory"
	walk_up
# 1181 "data/maps/Colchis/scripts.pory"
	walk_up
# 1181 "data/maps/Colchis/scripts.pory"
	walk_up
# 1181 "data/maps/Colchis/scripts.pory"
	walk_up
# 1181 "data/maps/Colchis/scripts.pory"
	walk_up
# 1181 "data/maps/Colchis/scripts.pory"
	walk_up
# 1181 "data/maps/Colchis/scripts.pory"
	walk_up
# 1181 "data/maps/Colchis/scripts.pory"
	walk_up
# 1181 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1184 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 1185 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1188 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 1189 "data/maps/Colchis/scripts.pory"
	face_right
# 1190 "data/maps/Colchis/scripts.pory"
	face_up
# 1191 "data/maps/Colchis/scripts.pory"
	face_left
# 1192 "data/maps/Colchis/scripts.pory"
	face_down
# 1193 "data/maps/Colchis/scripts.pory"
	face_right
# 1194 "data/maps/Colchis/scripts.pory"
	face_up
# 1195 "data/maps/Colchis/scripts.pory"
	face_left
# 1196 "data/maps/Colchis/scripts.pory"
	face_down
# 1197 "data/maps/Colchis/scripts.pory"
	face_right
# 1198 "data/maps/Colchis/scripts.pory"
	face_up
# 1199 "data/maps/Colchis/scripts.pory"
	face_left
# 1200 "data/maps/Colchis/scripts.pory"
	face_down
# 1201 "data/maps/Colchis/scripts.pory"
	face_right
# 1202 "data/maps/Colchis/scripts.pory"
	face_up
# 1203 "data/maps/Colchis/scripts.pory"
	face_left
# 1204 "data/maps/Colchis/scripts.pory"
	face_down
# 1205 "data/maps/Colchis/scripts.pory"
	face_right
# 1206 "data/maps/Colchis/scripts.pory"
	face_up
# 1207 "data/maps/Colchis/scripts.pory"
	face_left
# 1208 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1211 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 1212 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1212 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1213 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1216 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 1217 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1217 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1218 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1221 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 1222 "data/maps/Colchis/scripts.pory"
	walk_left
# 1223 "data/maps/Colchis/scripts.pory"
	walk_up
# 1223 "data/maps/Colchis/scripts.pory"
	walk_up
# 1224 "data/maps/Colchis/scripts.pory"
	walk_right
# 1224 "data/maps/Colchis/scripts.pory"
	walk_right
# 1225 "data/maps/Colchis/scripts.pory"
	walk_down
# 1225 "data/maps/Colchis/scripts.pory"
	walk_down
# 1226 "data/maps/Colchis/scripts.pory"
	walk_left
# 1227 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1230 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 1231 "data/maps/Colchis/scripts.pory"
	walk_left
# 1232 "data/maps/Colchis/scripts.pory"
	walk_up
# 1232 "data/maps/Colchis/scripts.pory"
	walk_up
# 1233 "data/maps/Colchis/scripts.pory"
	walk_right
# 1233 "data/maps/Colchis/scripts.pory"
	walk_right
# 1234 "data/maps/Colchis/scripts.pory"
	walk_down
# 1234 "data/maps/Colchis/scripts.pory"
	walk_down
# 1235 "data/maps/Colchis/scripts.pory"
	walk_left
# 1236 "data/maps/Colchis/scripts.pory"
	face_down
# 1237 "data/maps/Colchis/scripts.pory"
	walk_left
# 1238 "data/maps/Colchis/scripts.pory"
	walk_up
# 1238 "data/maps/Colchis/scripts.pory"
	walk_up
# 1239 "data/maps/Colchis/scripts.pory"
	walk_right
# 1239 "data/maps/Colchis/scripts.pory"
	walk_right
# 1240 "data/maps/Colchis/scripts.pory"
	walk_down
# 1240 "data/maps/Colchis/scripts.pory"
	walk_down
# 1241 "data/maps/Colchis/scripts.pory"
	walk_left
# 1242 "data/maps/Colchis/scripts.pory"
	face_down
# 1243 "data/maps/Colchis/scripts.pory"
	walk_left
# 1244 "data/maps/Colchis/scripts.pory"
	walk_up
# 1244 "data/maps/Colchis/scripts.pory"
	walk_up
# 1245 "data/maps/Colchis/scripts.pory"
	walk_right
# 1245 "data/maps/Colchis/scripts.pory"
	walk_right
# 1246 "data/maps/Colchis/scripts.pory"
	walk_down
# 1246 "data/maps/Colchis/scripts.pory"
	walk_down
# 1247 "data/maps/Colchis/scripts.pory"
	walk_left
# 1248 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1251 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 1252 "data/maps/Colchis/scripts.pory"
	walk_down
# 1252 "data/maps/Colchis/scripts.pory"
	walk_down
# 1252 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1255 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 1256 "data/maps/Colchis/scripts.pory"
	walk_right
# 1256 "data/maps/Colchis/scripts.pory"
	walk_right
# 1257 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1260 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 1261 "data/maps/Colchis/scripts.pory"
	walk_left
# 1261 "data/maps/Colchis/scripts.pory"
	walk_left
# 1262 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1265 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 1266 "data/maps/Colchis/scripts.pory"
	walk_down
# 1267 "data/maps/Colchis/scripts.pory"
	face_left
# 1268 "data/maps/Colchis/scripts.pory"
	face_up
# 1269 "data/maps/Colchis/scripts.pory"
	face_right
# 1270 "data/maps/Colchis/scripts.pory"
	face_down
# 1271 "data/maps/Colchis/scripts.pory"
	walk_down
# 1272 "data/maps/Colchis/scripts.pory"
	face_left
# 1273 "data/maps/Colchis/scripts.pory"
	face_up
# 1274 "data/maps/Colchis/scripts.pory"
	face_right
# 1275 "data/maps/Colchis/scripts.pory"
	face_down
# 1276 "data/maps/Colchis/scripts.pory"
	walk_down
# 1277 "data/maps/Colchis/scripts.pory"
	face_left
# 1278 "data/maps/Colchis/scripts.pory"
	face_up
# 1279 "data/maps/Colchis/scripts.pory"
	face_right
# 1280 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1283 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1285 "data/maps/Colchis/scripts.pory"
	walk_up
# 1286 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1287 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1290 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 1291 "data/maps/Colchis/scripts.pory"
	walk_left
# 1292 "data/maps/Colchis/scripts.pory"
	walk_up
# 1293 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1294 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1297 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 1298 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1299 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1302 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 1303 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1304 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1307 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 1308 "data/maps/Colchis/scripts.pory"
	walk_left
# 1309 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1312 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 1313 "data/maps/Colchis/scripts.pory"
	walk_right
# 1314 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1317 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 1318 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1319 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1322 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 1323 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1324 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1327 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 1328 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1331 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 1332 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 1335 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 1336 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 1340 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 1341 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

Colchis_Script_MedeaDance_Text_0:
# 1049 "data/maps/Colchis/scripts.pory"
	.string "END$"

Colchis_Text_JasonIntro1::
# 1344 "data/maps/Colchis/scripts.pory"
	.string "We've been ambushed but they do not\n"
	.string "attack.$"

Colchis_Text_GruntIntro1::
# 1349 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 1354 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntro2::
# 1358 "data/maps/Colchis/scripts.pory"
	.string "I think they say they'll take us to\n"
	.string "their king. We're hopelessly\l"
	.string "outnumbered so I think we should agree\l"
	.string "to go but what say you?$"

Colchis_Text_JasonIntroAccept::
# 1362 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 1366 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 1370 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 1379 "data/maps/Colchis/scripts.pory"
	.string "Ethay oddessgay oughthray emay\n"
	.string "eakspay ofay ingsthay otay omecay.\l"
	.string "Amongay usay erethay illway omecay aay\l"
	.string "anmay, Asonjay, owhay aveledtray\l"
	.string "erehay omfray arfay eyondbay ethay\l"
	.string "easay, anday anyay anmay owhay\l"
	.string "ingsbray armhay untoay imhay illway\l"
	.string "urelysay ingbray aboutay Olchiscay\l"
	.string "uinray.$"

Colchis_Text_Aeetes1::
# 1384 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"
