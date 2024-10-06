Colchis_MapScripts::
# 80 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 91 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 92 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
	.2byte 0


Colchis_TempScript_SetupTestMedeaDance::
# 101 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 102 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 108 "data/maps/Colchis/scripts.pory"
	lockall
# 109 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 110 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_Jason::
# 115 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 116 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 117 "data/maps/Colchis/scripts.pory"
	closemessage
# 118 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 126 "data/maps/Colchis/scripts.pory"
	lockall
# 128 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 130 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 131 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 132 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 133 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 134 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 135 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 138 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 139 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 140 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 143 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 144 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 145 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 150 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 151 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 152 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 155 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 156 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 157 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 158 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 159 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 160 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 161 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 162 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 163 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 164 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 165 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 166 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 167 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 168 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 169 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 170 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 171 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 174 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 175 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 176 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 177 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 178 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 179 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 180 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 181 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 182 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 183 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 184 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 185 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 186 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 189 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 190 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 191 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 194 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 195 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 196 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 200 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 201 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 202 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 203 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 204 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 205 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 206 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 207 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 208 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 209 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 211 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 219 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 220 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 221 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 222 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 223 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 224 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 225 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 226 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 227 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_CheckForcedBattle::
# 274 "data/maps/Colchis/scripts.pory"
	lockall
# 275 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 277 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 285 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 286 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 287 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 289 "data/maps/Colchis/scripts.pory"
	addobject 23
# 290 "data/maps/Colchis/scripts.pory"
	addobject 24
# 292 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 293 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 297 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 298 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 300 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 301 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 302 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_MedeaDance::
# 324 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 325 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 326 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 331 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 332 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 333 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 334 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 335 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 336 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 337 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 338 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 339 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 340 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 341 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 342 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 343 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 344 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 345 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 346 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 347 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 348 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 357 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 358 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 359 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 360 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 361 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 362 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 363 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 365 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 367 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 368 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 369 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 371 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 373 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 374 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 375 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 377 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 383 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 384 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 385 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 386 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 387 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 388 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 389 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 391 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 393 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 394 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 395 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 396 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 397 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 399 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 401 "data/maps/Colchis/scripts.pory"
	delay 25
# 403 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 404 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 405 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 406 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 407 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 409 "data/maps/Colchis/scripts.pory"
	waitmovement 16
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
# 421 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 422 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 424 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 426 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 427 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 429 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 430 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 431 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 433 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 435 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 436 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 437 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 438 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 439 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 441 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 443 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 444 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 445 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 446 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 447 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 449 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 451 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 452 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 453 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 454 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 455 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 457 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 459 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 460 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 461 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 462 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 463 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 465 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 471 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 472 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 473 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 474 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 475 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 476 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 477 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 479 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 481 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 482 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 483 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 484 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 485 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 487 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 493 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 499 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 500 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 501 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 502 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 503 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 504 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 505 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 507 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 512 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 518 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 519 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 520 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 522 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 523 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 524 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 526 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 532 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 535 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 544 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 545 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 546 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 547 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 548 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 549 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 550 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 552 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 554 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 555 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 556 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 557 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 558 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 559 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 560 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 562 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 567 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 572 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 573 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 574 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 575 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 576 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 577 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 579 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 581 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 582 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 583 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 584 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 585 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 586 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 587 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 589 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 591 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 595 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 596 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 597 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 598 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 599 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 600 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 601 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 603 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 605 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 606 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 607 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 608 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 609 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 610 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 611 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 613 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 615 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 619 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 620 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 621 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 622 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 623 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 624 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 625 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 627 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 629 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 630 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 631 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 632 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 633 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 634 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 635 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 637 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 639 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 649 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 650 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 651 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 652 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 653 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 654 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 655 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 656 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 658 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 660 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 662 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 663 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 664 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 665 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 666 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 667 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 668 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 669 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 671 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 673 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 675 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 676 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 677 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 678 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 679 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 680 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 681 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 682 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 684 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 686 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 693 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 694 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 695 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 696 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 697 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 698 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 699 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 700 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 702 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 703 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 705 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 706 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 709 "data/maps/Colchis/scripts.pory"
	delay 25
# 713 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 714 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 718 "data/maps/Colchis/scripts.pory"
	delay 25
# 720 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 721 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 725 "data/maps/Colchis/scripts.pory"
	delay 25
# 727 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 728 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 732 "data/maps/Colchis/scripts.pory"
	delay 25
# 734 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 735 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 736 "data/maps/Colchis/scripts.pory"
	delay 25
# 741 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 742 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 743 "data/maps/Colchis/scripts.pory"
	delay 25
# 745 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 746 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 747 "data/maps/Colchis/scripts.pory"
	delay 25
# 752 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 753 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 754 "data/maps/Colchis/scripts.pory"
	delay 25
# 756 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 757 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 758 "data/maps/Colchis/scripts.pory"
	delay 25
# 760 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 761 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 762 "data/maps/Colchis/scripts.pory"
	delay 25
# 764 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 765 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 766 "data/maps/Colchis/scripts.pory"
	delay 25
# 771 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 772 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 773 "data/maps/Colchis/scripts.pory"
	delay 25
# 775 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 776 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 777 "data/maps/Colchis/scripts.pory"
	delay 25
# 779 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 780 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 781 "data/maps/Colchis/scripts.pory"
	delay 25
# 783 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 784 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 785 "data/maps/Colchis/scripts.pory"
	delay 25
# 787 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 789 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 790 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 791 "data/maps/Colchis/scripts.pory"
	delay 25
# 796 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 797 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 798 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 799 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 800 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 801 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 802 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 803 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 805 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 816 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 817 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 818 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 819 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 820 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 821 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 822 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 823 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 824 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 829 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 830 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 831 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 832 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 833 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 834 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 835 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 836 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 837 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 842 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 843 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 844 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 845 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 846 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 847 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 848 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 849 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 850 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 855 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 856 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 857 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 858 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 859 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 860 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 861 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 862 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 863 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 868 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 869 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 870 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 871 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 872 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 873 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 874 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 875 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 876 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 881 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 882 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 883 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 884 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 885 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 886 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 887 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 888 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 889 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 894 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 895 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 896 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 897 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 898 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 899 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 900 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 901 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 902 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 907 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 908 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 909 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 910 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 911 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 912 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 913 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 914 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 915 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 920 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 921 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 922 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 923 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 924 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 925 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 926 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 927 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 928 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 930 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 931 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 932 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 933 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 934 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 935 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 936 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 937 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 938 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 940 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 941 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 942 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 943 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 944 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 945 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 946 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 947 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 948 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 950 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 951 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 952 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 953 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 954 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 956 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 957 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 958 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 963 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 964 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 971 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 972 "data/maps/Colchis/scripts.pory"
	closemessage
# 976 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 977 "data/maps/Colchis/scripts.pory"
	closemessage
# 1036 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_0
# 1037 "data/maps/Colchis/scripts.pory"
	closemessage
# 1048 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
	return


Colchis_Script_MedeaDance_SpinAll::
# 1054 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1055 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1056 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1057 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1058 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1059 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1060 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1061 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1066 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1067 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1071 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1072 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1073 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1074 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1075 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1076 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1077 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1078 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1079 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1080 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1081 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1082 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1087 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1088 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1089 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1090 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1091 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1092 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1093 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1094 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1095 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1096 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1097 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1098 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1099 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1100 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1101 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1102 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1103 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1104 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1105 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1106 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1107 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1108 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1109 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1110 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1111 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1112 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1113 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1114 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1115 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1116 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1117 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1118 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1119 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1120 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1121 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1122 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1123 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1124 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1125 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1126 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1127 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1128 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1129 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1130 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1131 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1132 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1133 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1134 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1135 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1136 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1137 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1138 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1139 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1140 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1141 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1142 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1143 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


# 1147 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 1148 "data/maps/Colchis/scripts.pory"
	walk_up
# 1148 "data/maps/Colchis/scripts.pory"
	walk_up
# 1148 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1151 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 1152 "data/maps/Colchis/scripts.pory"
	walk_down
# 1152 "data/maps/Colchis/scripts.pory"
	walk_down
# 1152 "data/maps/Colchis/scripts.pory"
	walk_down
# 1152 "data/maps/Colchis/scripts.pory"
	walk_down
# 1152 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1155 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 1156 "data/maps/Colchis/scripts.pory"
	walk_up
# 1156 "data/maps/Colchis/scripts.pory"
	walk_up
# 1156 "data/maps/Colchis/scripts.pory"
	walk_up
# 1156 "data/maps/Colchis/scripts.pory"
	walk_up
# 1156 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1159 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1160 "data/maps/Colchis/scripts.pory"
	walk_up
# 1161 "data/maps/Colchis/scripts.pory"
	walk_right
# 1161 "data/maps/Colchis/scripts.pory"
	walk_right
# 1161 "data/maps/Colchis/scripts.pory"
	walk_right
# 1161 "data/maps/Colchis/scripts.pory"
	walk_right
# 1161 "data/maps/Colchis/scripts.pory"
	walk_right
# 1162 "data/maps/Colchis/scripts.pory"
	walk_up
# 1162 "data/maps/Colchis/scripts.pory"
	walk_up
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1163 "data/maps/Colchis/scripts.pory"
	walk_right
# 1164 "data/maps/Colchis/scripts.pory"
	walk_up
# 1164 "data/maps/Colchis/scripts.pory"
	walk_up
# 1164 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1167 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 1168 "data/maps/Colchis/scripts.pory"
	walk_up
# 1168 "data/maps/Colchis/scripts.pory"
	walk_up
# 1168 "data/maps/Colchis/scripts.pory"
	walk_up
# 1168 "data/maps/Colchis/scripts.pory"
	walk_up
# 1168 "data/maps/Colchis/scripts.pory"
	walk_up
# 1168 "data/maps/Colchis/scripts.pory"
	walk_up
# 1168 "data/maps/Colchis/scripts.pory"
	walk_up
# 1168 "data/maps/Colchis/scripts.pory"
	walk_up
# 1168 "data/maps/Colchis/scripts.pory"
	walk_up
# 1168 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1171 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 1172 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1175 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 1176 "data/maps/Colchis/scripts.pory"
	face_right
# 1177 "data/maps/Colchis/scripts.pory"
	face_up
# 1178 "data/maps/Colchis/scripts.pory"
	face_left
# 1179 "data/maps/Colchis/scripts.pory"
	face_down
# 1180 "data/maps/Colchis/scripts.pory"
	face_right
# 1181 "data/maps/Colchis/scripts.pory"
	face_up
# 1182 "data/maps/Colchis/scripts.pory"
	face_left
# 1183 "data/maps/Colchis/scripts.pory"
	face_down
# 1184 "data/maps/Colchis/scripts.pory"
	face_right
# 1185 "data/maps/Colchis/scripts.pory"
	face_up
# 1186 "data/maps/Colchis/scripts.pory"
	face_left
# 1187 "data/maps/Colchis/scripts.pory"
	face_down
# 1188 "data/maps/Colchis/scripts.pory"
	face_right
# 1189 "data/maps/Colchis/scripts.pory"
	face_up
# 1190 "data/maps/Colchis/scripts.pory"
	face_left
# 1191 "data/maps/Colchis/scripts.pory"
	face_down
# 1192 "data/maps/Colchis/scripts.pory"
	face_right
# 1193 "data/maps/Colchis/scripts.pory"
	face_up
# 1194 "data/maps/Colchis/scripts.pory"
	face_left
# 1195 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1198 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 1199 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1199 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1200 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1203 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 1204 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1204 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1205 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1208 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 1209 "data/maps/Colchis/scripts.pory"
	walk_left
# 1210 "data/maps/Colchis/scripts.pory"
	walk_up
# 1210 "data/maps/Colchis/scripts.pory"
	walk_up
# 1211 "data/maps/Colchis/scripts.pory"
	walk_right
# 1211 "data/maps/Colchis/scripts.pory"
	walk_right
# 1212 "data/maps/Colchis/scripts.pory"
	walk_down
# 1212 "data/maps/Colchis/scripts.pory"
	walk_down
# 1213 "data/maps/Colchis/scripts.pory"
	walk_left
# 1214 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1217 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 1218 "data/maps/Colchis/scripts.pory"
	walk_left
# 1219 "data/maps/Colchis/scripts.pory"
	walk_up
# 1219 "data/maps/Colchis/scripts.pory"
	walk_up
# 1220 "data/maps/Colchis/scripts.pory"
	walk_right
# 1220 "data/maps/Colchis/scripts.pory"
	walk_right
# 1221 "data/maps/Colchis/scripts.pory"
	walk_down
# 1221 "data/maps/Colchis/scripts.pory"
	walk_down
# 1222 "data/maps/Colchis/scripts.pory"
	walk_left
# 1223 "data/maps/Colchis/scripts.pory"
	face_down
# 1224 "data/maps/Colchis/scripts.pory"
	walk_left
# 1225 "data/maps/Colchis/scripts.pory"
	walk_up
# 1225 "data/maps/Colchis/scripts.pory"
	walk_up
# 1226 "data/maps/Colchis/scripts.pory"
	walk_right
# 1226 "data/maps/Colchis/scripts.pory"
	walk_right
# 1227 "data/maps/Colchis/scripts.pory"
	walk_down
# 1227 "data/maps/Colchis/scripts.pory"
	walk_down
# 1228 "data/maps/Colchis/scripts.pory"
	walk_left
# 1229 "data/maps/Colchis/scripts.pory"
	face_down
# 1230 "data/maps/Colchis/scripts.pory"
	walk_left
# 1231 "data/maps/Colchis/scripts.pory"
	walk_up
# 1231 "data/maps/Colchis/scripts.pory"
	walk_up
# 1232 "data/maps/Colchis/scripts.pory"
	walk_right
# 1232 "data/maps/Colchis/scripts.pory"
	walk_right
# 1233 "data/maps/Colchis/scripts.pory"
	walk_down
# 1233 "data/maps/Colchis/scripts.pory"
	walk_down
# 1234 "data/maps/Colchis/scripts.pory"
	walk_left
# 1235 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1238 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 1239 "data/maps/Colchis/scripts.pory"
	walk_down
# 1239 "data/maps/Colchis/scripts.pory"
	walk_down
# 1239 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1242 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 1243 "data/maps/Colchis/scripts.pory"
	walk_right
# 1243 "data/maps/Colchis/scripts.pory"
	walk_right
# 1244 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1247 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 1248 "data/maps/Colchis/scripts.pory"
	walk_left
# 1248 "data/maps/Colchis/scripts.pory"
	walk_left
# 1249 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1252 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 1253 "data/maps/Colchis/scripts.pory"
	walk_down
# 1254 "data/maps/Colchis/scripts.pory"
	face_left
# 1255 "data/maps/Colchis/scripts.pory"
	face_up
# 1256 "data/maps/Colchis/scripts.pory"
	face_right
# 1257 "data/maps/Colchis/scripts.pory"
	face_down
# 1258 "data/maps/Colchis/scripts.pory"
	walk_down
# 1259 "data/maps/Colchis/scripts.pory"
	face_left
# 1260 "data/maps/Colchis/scripts.pory"
	face_up
# 1261 "data/maps/Colchis/scripts.pory"
	face_right
# 1262 "data/maps/Colchis/scripts.pory"
	face_down
# 1263 "data/maps/Colchis/scripts.pory"
	walk_down
# 1264 "data/maps/Colchis/scripts.pory"
	face_left
# 1265 "data/maps/Colchis/scripts.pory"
	face_up
# 1266 "data/maps/Colchis/scripts.pory"
	face_right
# 1267 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1270 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 1271 "data/maps/Colchis/scripts.pory"
	walk_right
# 1272 "data/maps/Colchis/scripts.pory"
	walk_up
# 1273 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1274 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1277 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 1278 "data/maps/Colchis/scripts.pory"
	walk_left
# 1279 "data/maps/Colchis/scripts.pory"
	walk_up
# 1280 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1281 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1284 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 1285 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1286 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1289 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 1290 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1291 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1294 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 1295 "data/maps/Colchis/scripts.pory"
	walk_left
# 1296 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1299 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 1300 "data/maps/Colchis/scripts.pory"
	walk_right
# 1301 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1304 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 1305 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1306 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1309 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 1310 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1311 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1314 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 1315 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1318 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 1319 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 1322 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 1323 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 1327 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 1328 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 1331 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 1332 "data/maps/Colchis/scripts.pory"
	walk_up
# 1332 "data/maps/Colchis/scripts.pory"
	walk_up
# 1332 "data/maps/Colchis/scripts.pory"
	walk_up
# 1332 "data/maps/Colchis/scripts.pory"
	walk_up
# 1332 "data/maps/Colchis/scripts.pory"
	walk_up
# 1332 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1335 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 1336 "data/maps/Colchis/scripts.pory"
	walk_right
# 1336 "data/maps/Colchis/scripts.pory"
	walk_right
# 1336 "data/maps/Colchis/scripts.pory"
	walk_right
# 1336 "data/maps/Colchis/scripts.pory"
	walk_right
# 1336 "data/maps/Colchis/scripts.pory"
	walk_right
# 1336 "data/maps/Colchis/scripts.pory"
	walk_right
# 1336 "data/maps/Colchis/scripts.pory"
	walk_right
# 1336 "data/maps/Colchis/scripts.pory"
	walk_right
# 1337 "data/maps/Colchis/scripts.pory"
	walk_down
# 1337 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1340 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 1341 "data/maps/Colchis/scripts.pory"
	walk_right
# 1341 "data/maps/Colchis/scripts.pory"
	walk_right
# 1341 "data/maps/Colchis/scripts.pory"
	walk_right
# 1341 "data/maps/Colchis/scripts.pory"
	walk_right
# 1341 "data/maps/Colchis/scripts.pory"
	walk_right
# 1341 "data/maps/Colchis/scripts.pory"
	walk_right
# 1341 "data/maps/Colchis/scripts.pory"
	walk_right
# 1342 "data/maps/Colchis/scripts.pory"
	walk_down
# 1342 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1345 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 1346 "data/maps/Colchis/scripts.pory"
	walk_right
# 1346 "data/maps/Colchis/scripts.pory"
	walk_right
# 1346 "data/maps/Colchis/scripts.pory"
	walk_right
# 1346 "data/maps/Colchis/scripts.pory"
	walk_right
# 1346 "data/maps/Colchis/scripts.pory"
	walk_right
# 1346 "data/maps/Colchis/scripts.pory"
	walk_right
# 1347 "data/maps/Colchis/scripts.pory"
	walk_down
# 1347 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1350 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 1351 "data/maps/Colchis/scripts.pory"
	walk_right
# 1351 "data/maps/Colchis/scripts.pory"
	walk_right
# 1351 "data/maps/Colchis/scripts.pory"
	walk_right
# 1351 "data/maps/Colchis/scripts.pory"
	walk_right
# 1351 "data/maps/Colchis/scripts.pory"
	walk_right
# 1351 "data/maps/Colchis/scripts.pory"
	walk_right
# 1351 "data/maps/Colchis/scripts.pory"
	walk_right
# 1351 "data/maps/Colchis/scripts.pory"
	walk_right
# 1352 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1355 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 1356 "data/maps/Colchis/scripts.pory"
	walk_right
# 1356 "data/maps/Colchis/scripts.pory"
	walk_right
# 1356 "data/maps/Colchis/scripts.pory"
	walk_right
# 1356 "data/maps/Colchis/scripts.pory"
	walk_right
# 1356 "data/maps/Colchis/scripts.pory"
	walk_right
# 1356 "data/maps/Colchis/scripts.pory"
	walk_right
# 1356 "data/maps/Colchis/scripts.pory"
	walk_right
# 1357 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1360 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 1361 "data/maps/Colchis/scripts.pory"
	walk_right
# 1361 "data/maps/Colchis/scripts.pory"
	walk_right
# 1361 "data/maps/Colchis/scripts.pory"
	walk_right
# 1361 "data/maps/Colchis/scripts.pory"
	walk_right
# 1361 "data/maps/Colchis/scripts.pory"
	walk_right
# 1361 "data/maps/Colchis/scripts.pory"
	walk_right
# 1362 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1365 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1366 "data/maps/Colchis/scripts.pory"
	walk_up
# 1367 "data/maps/Colchis/scripts.pory"
	walk_right
# 1367 "data/maps/Colchis/scripts.pory"
	walk_right
# 1367 "data/maps/Colchis/scripts.pory"
	walk_right
# 1367 "data/maps/Colchis/scripts.pory"
	walk_right
# 1367 "data/maps/Colchis/scripts.pory"
	walk_right
# 1367 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

Colchis_Script_MedeaDance_Text_0:
# 1036 "data/maps/Colchis/scripts.pory"
	.string "END$"

Colchis_Text_JasonIntro1::
# 1370 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 1374 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 1378 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 1382 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 1386 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 1390 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 1395 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 1400 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 1404 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 1408 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 1412 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 1421 "data/maps/Colchis/scripts.pory"
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
# 1426 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"
