Colchis_MapScripts::
# 87 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 93 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 104 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 88 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 89 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupJail
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 105 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
# 106 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_SetupTestMedeaDance::
# 115 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 116 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 122 "data/maps/Colchis/scripts.pory"
	lockall
# 123 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 124 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SetupJail::
# 129 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 130 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 131 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
# 132 "data/maps/Colchis/scripts.pory"
	addobject 54
# 133 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 140 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 141 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 142 "data/maps/Colchis/scripts.pory"
	closemessage
# 143 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 151 "data/maps/Colchis/scripts.pory"
	lockall
# 153 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 155 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 156 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 157 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 158 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 159 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 160 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 163 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 164 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 165 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 168 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 169 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 170 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 175 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 176 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 177 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 180 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 181 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 182 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 183 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 184 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 185 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 186 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 187 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 188 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 189 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 190 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 191 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 192 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 193 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 194 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 195 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 196 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 199 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 200 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 201 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 202 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 203 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 204 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 205 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 206 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 207 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 208 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 209 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 210 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 211 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 214 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 215 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 216 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 219 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 220 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 221 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 225 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 226 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 227 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 228 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 229 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 230 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 231 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 232 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 233 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 234 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 236 "data/maps/Colchis/scripts.pory"
	closemessage
# 238 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 246 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 247 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 248 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 249 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 250 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 251 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 252 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 253 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 254 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 257 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 258 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 259 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 261 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 262 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 263 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 264 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 265 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 266 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 267 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 271 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 314 "data/maps/Colchis/scripts.pory"
	lockall
# 315 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 317 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 325 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 326 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 327 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 329 "data/maps/Colchis/scripts.pory"
	addobject 23
# 330 "data/maps/Colchis/scripts.pory"
	addobject 24
# 332 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 333 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 337 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 338 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 340 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 341 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 342 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_MedeaDance::
# 364 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 365 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 366 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 371 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 372 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 373 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 374 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 375 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 376 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 377 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 378 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 379 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 380 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 381 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 382 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 383 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 384 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 385 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 386 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 387 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 388 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 397 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 398 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 399 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 400 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 401 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 402 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 403 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 405 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 407 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 408 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 409 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 411 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 413 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 414 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 415 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 417 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 423 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 424 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 425 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 426 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 427 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 429 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 431 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 433 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 434 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 435 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 436 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 437 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 439 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 441 "data/maps/Colchis/scripts.pory"
	delay 25
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
	waitmovement 16
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
# 461 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 462 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 464 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 466 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 467 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 468 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 469 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 470 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 471 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 473 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 475 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 476 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 477 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 478 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 479 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 481 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 483 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 484 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 485 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 486 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 487 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 489 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 491 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 492 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 493 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 494 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 495 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 497 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 499 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 500 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 501 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 502 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 503 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 505 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 511 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 512 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 513 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 514 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 515 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 516 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 517 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 519 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 522 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 523 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 524 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 525 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 527 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 533 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 539 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 540 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 541 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 542 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 543 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 544 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 545 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 547 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 552 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 558 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 559 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 560 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 561 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 562 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 563 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 564 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 566 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 572 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 575 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 584 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 585 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 586 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 587 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 588 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 589 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 590 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 592 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 594 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 595 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 596 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 597 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 598 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 599 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 600 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 602 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 607 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 611 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 612 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 613 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 614 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 615 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 616 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 617 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 619 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 621 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 622 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 623 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 624 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 625 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 626 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 627 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 629 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 631 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 635 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 636 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 637 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 638 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 639 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 640 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 641 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 643 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 645 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 646 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 647 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 648 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 649 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 650 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 651 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 653 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 655 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 659 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 660 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 661 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 662 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 663 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 664 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 665 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 667 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 669 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 670 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 671 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 672 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 673 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 674 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 675 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 677 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 679 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 689 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 690 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 691 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 692 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 693 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 694 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 695 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 696 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 698 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 700 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 702 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 703 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 704 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 705 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 706 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 707 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 708 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 709 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 711 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 713 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 715 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 716 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 717 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 718 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 719 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 720 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 721 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 722 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 724 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 726 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 733 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 734 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 735 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 736 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 737 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 738 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 739 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 740 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 742 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 743 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 745 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 746 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 749 "data/maps/Colchis/scripts.pory"
	delay 25
# 753 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 754 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 758 "data/maps/Colchis/scripts.pory"
	delay 25
# 760 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 761 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 765 "data/maps/Colchis/scripts.pory"
	delay 25
# 767 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 768 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 772 "data/maps/Colchis/scripts.pory"
	delay 25
# 774 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 775 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 776 "data/maps/Colchis/scripts.pory"
	delay 25
# 781 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 782 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 783 "data/maps/Colchis/scripts.pory"
	delay 25
# 785 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 786 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 787 "data/maps/Colchis/scripts.pory"
	delay 25
# 792 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 793 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 794 "data/maps/Colchis/scripts.pory"
	delay 25
# 796 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 797 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 798 "data/maps/Colchis/scripts.pory"
	delay 25
# 800 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 801 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 802 "data/maps/Colchis/scripts.pory"
	delay 25
# 804 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 805 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 806 "data/maps/Colchis/scripts.pory"
	delay 25
# 811 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 812 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 813 "data/maps/Colchis/scripts.pory"
	delay 25
# 815 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 816 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 817 "data/maps/Colchis/scripts.pory"
	delay 25
# 819 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 820 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 821 "data/maps/Colchis/scripts.pory"
	delay 25
# 823 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 824 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 825 "data/maps/Colchis/scripts.pory"
	delay 25
# 827 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 829 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 830 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 831 "data/maps/Colchis/scripts.pory"
	delay 25
# 836 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 837 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 838 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 839 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 840 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 841 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 842 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 843 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 845 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 856 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 857 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 858 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 859 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 860 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 861 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 862 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 863 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 864 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 869 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 870 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 871 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 872 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 873 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 874 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 875 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 876 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 877 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 882 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 883 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 884 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 885 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 886 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 887 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 888 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 889 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 890 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 895 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 896 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 897 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 898 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 899 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 900 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 901 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 902 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 903 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 908 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 909 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 910 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 911 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 912 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 913 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 914 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 915 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 916 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 921 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 922 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 923 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 924 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 925 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 926 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 927 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 928 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 929 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 934 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 935 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 936 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 937 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 938 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 939 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 940 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 941 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 942 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 947 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 948 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 949 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 950 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 951 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 952 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 953 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 954 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 955 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 960 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 961 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 962 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 963 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 964 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 965 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 966 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 967 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 968 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 970 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 971 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 972 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 973 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 974 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 975 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 976 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 977 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 978 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 980 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 981 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 982 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 983 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 984 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 985 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 986 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 987 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 988 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 990 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 991 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 992 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 993 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 994 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 996 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 997 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 998 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1004 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1006 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1008 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1015 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1016 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1017 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1018 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1019 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1020 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1021 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1022 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1027 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1028 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1029 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1030 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1031 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1032 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1033 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1034 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1035 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1036 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1037 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1038 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1039 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1040 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1041 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1042 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1043 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1048 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1049 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1050 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1051 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1052 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1053 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1054 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1055 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1056 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1057 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1058 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1059 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1060 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1061 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1062 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1063 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1064 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1065 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1066 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1067 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1068 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1071 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1072 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1073 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1074 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1075 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1076 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1077 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1078 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1079 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1080 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1081 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1082 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1083 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1084 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1085 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1086 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1087 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1088 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1089 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1090 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1091 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1092 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1093 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1094 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1095 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1096 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1097 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1098 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1099 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1100 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1101 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1102 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1103 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1104 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1116 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1117 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1118 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1123 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1124 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1125 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1126 "data/maps/Colchis/scripts.pory"
	closemessage
# 1128 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1132 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1133 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1134 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1135 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1136 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1138 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1139 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1140 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1142 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1143 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1144 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1145 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1154 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1155 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1156 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1161 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1162 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1163 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1170 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1171 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1172 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1177 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1178 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1179 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1188 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1189 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1190 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1191 "data/maps/Colchis/scripts.pory"
	closemessage
# 1194 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1195 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1196 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1205 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1206 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1207 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1212 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1213 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1214 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1217 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1218 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1219 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1220 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1221 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1225 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1226 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1227 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1231 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1232 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1233 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1235 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1236 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1237 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1241 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1242 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1244 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1245 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1251 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1252 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1253 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1254 "data/maps/Colchis/scripts.pory"
	closemessage
# 1257 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1258 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1261 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1262 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1270 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1276 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1277 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1278 "data/maps/Colchis/scripts.pory"
	closemessage
# 1279 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1282 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1283 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1286 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1287 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1288 "data/maps/Colchis/scripts.pory"
	closemessage
# 1289 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1292 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1293 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1294 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1295 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1298 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1299 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1300 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1301 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1302 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1305 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1306 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1307 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1308 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1309 "data/maps/Colchis/scripts.pory"
	delay 30
# 1310 "data/maps/Colchis/scripts.pory"
	waitse
# 1313 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonApproachPlayer
# 1314 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1317 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1318 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1319 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1322 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1323 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1324 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1327 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1328 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1329 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1332 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1333 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1334 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1337 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1338 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1339 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1341 "data/maps/Colchis/scripts.pory"
	closemessage
# 1344 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1345 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1348 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1349 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1350 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1351 "data/maps/Colchis/scripts.pory"
	closemessage
# 1354 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1355 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1358 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1359 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1360 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1363 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1364 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1365 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1367 "data/maps/Colchis/scripts.pory"
	closemessage
# 1371 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonExit
# 1372 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_JasonPrisonExit
# 1373 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_PlayerPrisonExit
# 1374 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 1384 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 1385 "data/maps/Colchis/scripts.pory"
	walk_up
# 1385 "data/maps/Colchis/scripts.pory"
	walk_up
# 1385 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1388 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 1389 "data/maps/Colchis/scripts.pory"
	walk_down
# 1389 "data/maps/Colchis/scripts.pory"
	walk_down
# 1389 "data/maps/Colchis/scripts.pory"
	walk_down
# 1389 "data/maps/Colchis/scripts.pory"
	walk_down
# 1389 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1392 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 1393 "data/maps/Colchis/scripts.pory"
	walk_up
# 1393 "data/maps/Colchis/scripts.pory"
	walk_up
# 1393 "data/maps/Colchis/scripts.pory"
	walk_up
# 1393 "data/maps/Colchis/scripts.pory"
	walk_up
# 1393 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1396 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1397 "data/maps/Colchis/scripts.pory"
	walk_up
# 1398 "data/maps/Colchis/scripts.pory"
	walk_right
# 1398 "data/maps/Colchis/scripts.pory"
	walk_right
# 1398 "data/maps/Colchis/scripts.pory"
	walk_right
# 1398 "data/maps/Colchis/scripts.pory"
	walk_right
# 1398 "data/maps/Colchis/scripts.pory"
	walk_right
# 1399 "data/maps/Colchis/scripts.pory"
	walk_up
# 1399 "data/maps/Colchis/scripts.pory"
	walk_up
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1400 "data/maps/Colchis/scripts.pory"
	walk_right
# 1401 "data/maps/Colchis/scripts.pory"
	walk_up
# 1401 "data/maps/Colchis/scripts.pory"
	walk_up
# 1401 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1404 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 1405 "data/maps/Colchis/scripts.pory"
	walk_up
# 1405 "data/maps/Colchis/scripts.pory"
	walk_up
# 1405 "data/maps/Colchis/scripts.pory"
	walk_up
# 1405 "data/maps/Colchis/scripts.pory"
	walk_up
# 1405 "data/maps/Colchis/scripts.pory"
	walk_up
# 1405 "data/maps/Colchis/scripts.pory"
	walk_up
# 1405 "data/maps/Colchis/scripts.pory"
	walk_up
# 1405 "data/maps/Colchis/scripts.pory"
	walk_up
# 1405 "data/maps/Colchis/scripts.pory"
	walk_up
# 1405 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1408 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 1409 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1412 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 1413 "data/maps/Colchis/scripts.pory"
	face_right
# 1414 "data/maps/Colchis/scripts.pory"
	face_up
# 1415 "data/maps/Colchis/scripts.pory"
	face_left
# 1416 "data/maps/Colchis/scripts.pory"
	face_down
# 1417 "data/maps/Colchis/scripts.pory"
	face_right
# 1418 "data/maps/Colchis/scripts.pory"
	face_up
# 1419 "data/maps/Colchis/scripts.pory"
	face_left
# 1420 "data/maps/Colchis/scripts.pory"
	face_down
# 1421 "data/maps/Colchis/scripts.pory"
	face_right
# 1422 "data/maps/Colchis/scripts.pory"
	face_up
# 1423 "data/maps/Colchis/scripts.pory"
	face_left
# 1424 "data/maps/Colchis/scripts.pory"
	face_down
# 1425 "data/maps/Colchis/scripts.pory"
	face_right
# 1426 "data/maps/Colchis/scripts.pory"
	face_up
# 1427 "data/maps/Colchis/scripts.pory"
	face_left
# 1428 "data/maps/Colchis/scripts.pory"
	face_down
# 1429 "data/maps/Colchis/scripts.pory"
	face_right
# 1430 "data/maps/Colchis/scripts.pory"
	face_up
# 1431 "data/maps/Colchis/scripts.pory"
	face_left
# 1432 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1435 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 1436 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1436 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1437 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1440 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 1441 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1441 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1442 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1445 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 1446 "data/maps/Colchis/scripts.pory"
	walk_left
# 1447 "data/maps/Colchis/scripts.pory"
	walk_up
# 1447 "data/maps/Colchis/scripts.pory"
	walk_up
# 1448 "data/maps/Colchis/scripts.pory"
	walk_right
# 1448 "data/maps/Colchis/scripts.pory"
	walk_right
# 1449 "data/maps/Colchis/scripts.pory"
	walk_down
# 1449 "data/maps/Colchis/scripts.pory"
	walk_down
# 1450 "data/maps/Colchis/scripts.pory"
	walk_left
# 1451 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1454 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 1455 "data/maps/Colchis/scripts.pory"
	walk_left
# 1456 "data/maps/Colchis/scripts.pory"
	walk_up
# 1456 "data/maps/Colchis/scripts.pory"
	walk_up
# 1457 "data/maps/Colchis/scripts.pory"
	walk_right
# 1457 "data/maps/Colchis/scripts.pory"
	walk_right
# 1458 "data/maps/Colchis/scripts.pory"
	walk_down
# 1458 "data/maps/Colchis/scripts.pory"
	walk_down
# 1459 "data/maps/Colchis/scripts.pory"
	walk_left
# 1460 "data/maps/Colchis/scripts.pory"
	face_down
# 1461 "data/maps/Colchis/scripts.pory"
	walk_left
# 1462 "data/maps/Colchis/scripts.pory"
	walk_up
# 1462 "data/maps/Colchis/scripts.pory"
	walk_up
# 1463 "data/maps/Colchis/scripts.pory"
	walk_right
# 1463 "data/maps/Colchis/scripts.pory"
	walk_right
# 1464 "data/maps/Colchis/scripts.pory"
	walk_down
# 1464 "data/maps/Colchis/scripts.pory"
	walk_down
# 1465 "data/maps/Colchis/scripts.pory"
	walk_left
# 1466 "data/maps/Colchis/scripts.pory"
	face_down
# 1467 "data/maps/Colchis/scripts.pory"
	walk_left
# 1468 "data/maps/Colchis/scripts.pory"
	walk_up
# 1468 "data/maps/Colchis/scripts.pory"
	walk_up
# 1469 "data/maps/Colchis/scripts.pory"
	walk_right
# 1469 "data/maps/Colchis/scripts.pory"
	walk_right
# 1470 "data/maps/Colchis/scripts.pory"
	walk_down
# 1470 "data/maps/Colchis/scripts.pory"
	walk_down
# 1471 "data/maps/Colchis/scripts.pory"
	walk_left
# 1472 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1475 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 1476 "data/maps/Colchis/scripts.pory"
	walk_down
# 1476 "data/maps/Colchis/scripts.pory"
	walk_down
# 1476 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1479 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 1480 "data/maps/Colchis/scripts.pory"
	walk_right
# 1480 "data/maps/Colchis/scripts.pory"
	walk_right
# 1481 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1484 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 1485 "data/maps/Colchis/scripts.pory"
	walk_left
# 1485 "data/maps/Colchis/scripts.pory"
	walk_left
# 1486 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1489 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 1490 "data/maps/Colchis/scripts.pory"
	walk_down
# 1491 "data/maps/Colchis/scripts.pory"
	face_left
# 1492 "data/maps/Colchis/scripts.pory"
	face_up
# 1493 "data/maps/Colchis/scripts.pory"
	face_right
# 1494 "data/maps/Colchis/scripts.pory"
	face_down
# 1495 "data/maps/Colchis/scripts.pory"
	walk_down
# 1496 "data/maps/Colchis/scripts.pory"
	face_left
# 1497 "data/maps/Colchis/scripts.pory"
	face_up
# 1498 "data/maps/Colchis/scripts.pory"
	face_right
# 1499 "data/maps/Colchis/scripts.pory"
	face_down
# 1500 "data/maps/Colchis/scripts.pory"
	walk_down
# 1501 "data/maps/Colchis/scripts.pory"
	face_left
# 1502 "data/maps/Colchis/scripts.pory"
	face_up
# 1503 "data/maps/Colchis/scripts.pory"
	face_right
# 1504 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1507 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 1508 "data/maps/Colchis/scripts.pory"
	walk_right
# 1509 "data/maps/Colchis/scripts.pory"
	walk_up
# 1510 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1511 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1514 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 1515 "data/maps/Colchis/scripts.pory"
	walk_left
# 1516 "data/maps/Colchis/scripts.pory"
	walk_up
# 1517 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1518 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1521 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 1522 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1523 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1526 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 1527 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1528 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1531 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 1532 "data/maps/Colchis/scripts.pory"
	walk_left
# 1533 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1536 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 1537 "data/maps/Colchis/scripts.pory"
	walk_right
# 1538 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1541 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 1542 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1543 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1546 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 1547 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1548 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1551 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 1552 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1555 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 1556 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 1559 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 1560 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 1564 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 1565 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 1568 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 1569 "data/maps/Colchis/scripts.pory"
	walk_up
# 1569 "data/maps/Colchis/scripts.pory"
	walk_up
# 1569 "data/maps/Colchis/scripts.pory"
	walk_up
# 1569 "data/maps/Colchis/scripts.pory"
	walk_up
# 1569 "data/maps/Colchis/scripts.pory"
	walk_up
# 1569 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1572 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 1573 "data/maps/Colchis/scripts.pory"
	walk_right
# 1573 "data/maps/Colchis/scripts.pory"
	walk_right
# 1573 "data/maps/Colchis/scripts.pory"
	walk_right
# 1573 "data/maps/Colchis/scripts.pory"
	walk_right
# 1573 "data/maps/Colchis/scripts.pory"
	walk_right
# 1573 "data/maps/Colchis/scripts.pory"
	walk_right
# 1573 "data/maps/Colchis/scripts.pory"
	walk_right
# 1573 "data/maps/Colchis/scripts.pory"
	walk_right
# 1574 "data/maps/Colchis/scripts.pory"
	walk_down
# 1574 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1577 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 1578 "data/maps/Colchis/scripts.pory"
	walk_right
# 1578 "data/maps/Colchis/scripts.pory"
	walk_right
# 1578 "data/maps/Colchis/scripts.pory"
	walk_right
# 1578 "data/maps/Colchis/scripts.pory"
	walk_right
# 1578 "data/maps/Colchis/scripts.pory"
	walk_right
# 1578 "data/maps/Colchis/scripts.pory"
	walk_right
# 1578 "data/maps/Colchis/scripts.pory"
	walk_right
# 1579 "data/maps/Colchis/scripts.pory"
	walk_down
# 1579 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1582 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 1583 "data/maps/Colchis/scripts.pory"
	walk_right
# 1583 "data/maps/Colchis/scripts.pory"
	walk_right
# 1583 "data/maps/Colchis/scripts.pory"
	walk_right
# 1583 "data/maps/Colchis/scripts.pory"
	walk_right
# 1583 "data/maps/Colchis/scripts.pory"
	walk_right
# 1583 "data/maps/Colchis/scripts.pory"
	walk_right
# 1584 "data/maps/Colchis/scripts.pory"
	walk_down
# 1584 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1587 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 1588 "data/maps/Colchis/scripts.pory"
	walk_right
# 1588 "data/maps/Colchis/scripts.pory"
	walk_right
# 1588 "data/maps/Colchis/scripts.pory"
	walk_right
# 1588 "data/maps/Colchis/scripts.pory"
	walk_right
# 1588 "data/maps/Colchis/scripts.pory"
	walk_right
# 1588 "data/maps/Colchis/scripts.pory"
	walk_right
# 1588 "data/maps/Colchis/scripts.pory"
	walk_right
# 1588 "data/maps/Colchis/scripts.pory"
	walk_right
# 1589 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1592 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 1593 "data/maps/Colchis/scripts.pory"
	walk_right
# 1593 "data/maps/Colchis/scripts.pory"
	walk_right
# 1593 "data/maps/Colchis/scripts.pory"
	walk_right
# 1593 "data/maps/Colchis/scripts.pory"
	walk_right
# 1593 "data/maps/Colchis/scripts.pory"
	walk_right
# 1593 "data/maps/Colchis/scripts.pory"
	walk_right
# 1593 "data/maps/Colchis/scripts.pory"
	walk_right
# 1594 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1597 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 1598 "data/maps/Colchis/scripts.pory"
	walk_right
# 1598 "data/maps/Colchis/scripts.pory"
	walk_right
# 1598 "data/maps/Colchis/scripts.pory"
	walk_right
# 1598 "data/maps/Colchis/scripts.pory"
	walk_right
# 1598 "data/maps/Colchis/scripts.pory"
	walk_right
# 1598 "data/maps/Colchis/scripts.pory"
	walk_right
# 1599 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1602 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1603 "data/maps/Colchis/scripts.pory"
	walk_up
# 1604 "data/maps/Colchis/scripts.pory"
	walk_right
# 1604 "data/maps/Colchis/scripts.pory"
	walk_right
# 1604 "data/maps/Colchis/scripts.pory"
	walk_right
# 1604 "data/maps/Colchis/scripts.pory"
	walk_right
# 1604 "data/maps/Colchis/scripts.pory"
	walk_right
# 1604 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1607 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 1608 "data/maps/Colchis/scripts.pory"
	walk_right
# 1608 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1611 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 1612 "data/maps/Colchis/scripts.pory"
	walk_up
# 1612 "data/maps/Colchis/scripts.pory"
	walk_up
# 1612 "data/maps/Colchis/scripts.pory"
	walk_up
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1613 "data/maps/Colchis/scripts.pory"
	walk_right
# 1614 "data/maps/Colchis/scripts.pory"
	walk_up
# 1614 "data/maps/Colchis/scripts.pory"
	walk_up
# 1614 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1617 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 1618 "data/maps/Colchis/scripts.pory"
	walk_up
# 1618 "data/maps/Colchis/scripts.pory"
	walk_up
# 1618 "data/maps/Colchis/scripts.pory"
	walk_up
# 1618 "data/maps/Colchis/scripts.pory"
	walk_up
# 1618 "data/maps/Colchis/scripts.pory"
	walk_up
# 1618 "data/maps/Colchis/scripts.pory"
	walk_up
# 1618 "data/maps/Colchis/scripts.pory"
	walk_up
# 1618 "data/maps/Colchis/scripts.pory"
	walk_up
# 1618 "data/maps/Colchis/scripts.pory"
	walk_up
# 1618 "data/maps/Colchis/scripts.pory"
	walk_up
# 1618 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1621 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 1622 "data/maps/Colchis/scripts.pory"
	walk_up
# 1622 "data/maps/Colchis/scripts.pory"
	walk_up
# 1622 "data/maps/Colchis/scripts.pory"
	walk_up
# 1622 "data/maps/Colchis/scripts.pory"
	walk_up
# 1622 "data/maps/Colchis/scripts.pory"
	walk_up
# 1622 "data/maps/Colchis/scripts.pory"
	walk_up
# 1622 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1625 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 1626 "data/maps/Colchis/scripts.pory"
	walk_left
# 1627 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1630 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 1631 "data/maps/Colchis/scripts.pory"
	walk_up
# 1632 "data/maps/Colchis/scripts.pory"
	walk_right
# 1633 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1637 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 1638 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1641 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 1642 "data/maps/Colchis/scripts.pory"
	walk_right
# 1642 "data/maps/Colchis/scripts.pory"
	walk_right
# 1643 "data/maps/Colchis/scripts.pory"
	walk_down
# 1644 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1647 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 1648 "data/maps/Colchis/scripts.pory"
	walk_left
# 1649 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1652 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 1653 "data/maps/Colchis/scripts.pory"
	walk_right
# 1654 "data/maps/Colchis/scripts.pory"
	walk_up
# 1655 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1658 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 1659 "data/maps/Colchis/scripts.pory"
	walk_left
# 1660 "data/maps/Colchis/scripts.pory"
	walk_up
# 1661 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1664 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 1665 "data/maps/Colchis/scripts.pory"
	walk_down
# 1665 "data/maps/Colchis/scripts.pory"
	walk_down
# 1665 "data/maps/Colchis/scripts.pory"
	walk_down
# 1665 "data/maps/Colchis/scripts.pory"
	walk_down
# 1665 "data/maps/Colchis/scripts.pory"
	walk_down
# 1665 "data/maps/Colchis/scripts.pory"
	walk_down
# 1665 "data/maps/Colchis/scripts.pory"
	walk_down
# 1665 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1668 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 1669 "data/maps/Colchis/scripts.pory"
	walk_up
# 1669 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1672 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonApproachPlayer:
# 1673 "data/maps/Colchis/scripts.pory"
	walk_up
# 1673 "data/maps/Colchis/scripts.pory"
	walk_up
# 1673 "data/maps/Colchis/scripts.pory"
	walk_up
# 1673 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1676 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonExit:
# 1677 "data/maps/Colchis/scripts.pory"
	walk_down
# 1677 "data/maps/Colchis/scripts.pory"
	walk_down
# 1677 "data/maps/Colchis/scripts.pory"
	walk_down
# 1677 "data/maps/Colchis/scripts.pory"
	walk_down
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1678 "data/maps/Colchis/scripts.pory"
	walk_left
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	walk_down
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_right
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1681 "data/maps/Colchis/scripts.pory"
	walk_down
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
# 1682 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 1685 "data/maps/Colchis/scripts.pory"
Common_Movement_JasonPrisonExit:
# 1686 "data/maps/Colchis/scripts.pory"
	walk_down
# 1686 "data/maps/Colchis/scripts.pory"
	walk_down
# 1686 "data/maps/Colchis/scripts.pory"
	walk_down
# 1686 "data/maps/Colchis/scripts.pory"
	walk_down
# 1686 "data/maps/Colchis/scripts.pory"
	walk_down
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_left
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1688 "data/maps/Colchis/scripts.pory"
	walk_down
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_right
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1690 "data/maps/Colchis/scripts.pory"
	walk_down
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
# 1691 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 1694 "data/maps/Colchis/scripts.pory"
Common_Movement_PlayerPrisonExit:
# 1695 "data/maps/Colchis/scripts.pory"
	walk_down
# 1695 "data/maps/Colchis/scripts.pory"
	walk_down
# 1695 "data/maps/Colchis/scripts.pory"
	walk_down
# 1695 "data/maps/Colchis/scripts.pory"
	walk_down
# 1695 "data/maps/Colchis/scripts.pory"
	walk_down
# 1695 "data/maps/Colchis/scripts.pory"
	walk_down
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1696 "data/maps/Colchis/scripts.pory"
	walk_left
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1697 "data/maps/Colchis/scripts.pory"
	walk_down
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1698 "data/maps/Colchis/scripts.pory"
	walk_right
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1699 "data/maps/Colchis/scripts.pory"
	walk_down
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
# 1700 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

Colchis_Text_JasonIntro1::
# 1705 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 1709 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 1713 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 1717 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 1721 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 1725 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 1730 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 1735 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 1739 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 1743 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 1747 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 1756 "data/maps/Colchis/scripts.pory"
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
# 1761 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 1770 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 1774 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 1783 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 1789 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 1802 "data/maps/Colchis/scripts.pory"
	.string "Ilencesay Edeamay. Asway isthay otnay\n"
	.string "ethay aveknay owhay efiledday ethay\l"
	.string "acredsay empletay ountmay? Atthay\l"
	.string "actay aloneay eservesday eatgray\l"
	.string "unishmentpay anday ifay eway ouldshay\l"
	.string "alloway inyshay Areepmay otay ebay\l"
	.string "olenstay Olchiscay illway urelysay\l"
	.string "allfay. Ereforethay Iay avehay\l"
	.string "esolvedray eythay ustmay ebay\l"
	.string "ailedjay.$"

Colchis_Text_Medea3::
# 1814 "data/maps/Colchis/scripts.pory"
	.string "Ethay esserlay oneay eforebay ouyay\n"
	.string "isay uiltygay aloneay ofay attackingay\l"
	.string "acredsay Ohay-Ohay. Ethay ovelylay\l"
	.string "Ason'sjay innocentay ofay imecray\l"
	.string "anday ethay oddessgay oughthray emay\l"
	.string "ordersay ehay ebay eptkay afesay. Ifay\l"
	.string "ouryay illway isay etsay onay usticejay\l"
	.string "etlay Asonjay ogay eefray. I'llay\l"
	.string "attenday otay imhay...$"

Colchis_Text_Aeetes5::
# 1818 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 1822 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 1826 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 1830 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 1834 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 1838 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 1847 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 1851 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 1869 "data/maps/Colchis/scripts.pory"
	.string "Osethay ordsway, 'aay itchway' ingstay\n"
	.string "orseway anthay urningbay oalscay oray\l"
	.string "ushinggay oodblay. I'day atherray\l"
	.string "oselay ymay armay anthay owknay\l"
	.string "atthay ouyay inkthay ofay emay asay\l"
	.string "aay itchway. Ymay amenay isay Edeamay.\l"
	.string "Iay amay aughterday of Aeetesay,\l"
	.string "anday incesspray ofay Olchiscay, anday\l"
	.string "ouyay, Asonjay, Iay easuretray oremay\l"
	.string "anthay allay ethay ounlesscay ichesray\l"
	.string "eldhay onay ouray islanday, oremay\l"
	.string "anthay ouray ubjectssay, oremay\l"
	.string "anthay amilyfay. Orfay ouyay Iay amay\l"
	.string "eparedpray otay adetray itay allay. Iay\l"
	.string "earsway yselfmay oyallay onlyay otay\l"
	.string "ouyay anday amenay ouyay ownay ymay\l"
	.string "ingkay, oursyay otay ommandcay.$"

Colchis_Text_JasonPrison4::
# 1873 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 1878 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 1882 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 1886 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 1893 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"
