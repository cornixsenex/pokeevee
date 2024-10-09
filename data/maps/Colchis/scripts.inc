Colchis_MapScripts::
# 91 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 97 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 108 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 92 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 93 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupJail
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 109 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
# 110 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_SetupTestMedeaDance::
# 119 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 120 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 126 "data/maps/Colchis/scripts.pory"
	lockall
# 127 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 128 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SetupJail::
# 133 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 134 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 135 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
# 136 "data/maps/Colchis/scripts.pory"
	addobject 54
# 137 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 144 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 145 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 146 "data/maps/Colchis/scripts.pory"
	closemessage
# 147 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 155 "data/maps/Colchis/scripts.pory"
	lockall
# 157 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 159 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 160 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 161 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 162 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 163 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 164 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 167 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 168 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 169 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 172 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 173 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 174 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 179 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 180 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 181 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 184 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 185 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 186 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 187 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 188 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 189 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 190 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 191 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 192 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 193 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 194 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 195 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 196 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 197 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 198 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 199 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 200 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 203 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 204 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 205 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 206 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 207 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 208 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 209 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 210 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 211 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 212 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 213 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 214 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 215 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 218 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 219 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 220 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 223 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 224 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 225 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 229 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 230 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 231 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 232 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 233 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 234 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 235 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 236 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 237 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 238 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 240 "data/maps/Colchis/scripts.pory"
	closemessage
# 242 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 250 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 251 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 252 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 253 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 254 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 255 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 256 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 257 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 258 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 261 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 262 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 263 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 265 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 266 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 267 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 268 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 269 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 270 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 271 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 275 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 318 "data/maps/Colchis/scripts.pory"
	lockall
# 319 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 321 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 329 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 330 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 331 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 333 "data/maps/Colchis/scripts.pory"
	addobject 23
# 334 "data/maps/Colchis/scripts.pory"
	addobject 24
# 336 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 337 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 341 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 342 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 344 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 345 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 346 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_MedeaDance::
# 368 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 369 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 370 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 375 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 376 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 377 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 378 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 379 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 380 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 381 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 382 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 383 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 384 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 385 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 386 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 387 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 388 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 389 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 390 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 391 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 392 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 401 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 402 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 403 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 404 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 405 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 406 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 407 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 409 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 411 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 412 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 413 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 415 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 417 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 418 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 419 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 421 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 427 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 429 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 430 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 431 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 432 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 433 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 435 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 437 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 438 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 439 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 440 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 441 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 443 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 445 "data/maps/Colchis/scripts.pory"
	delay 25
# 447 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 448 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 449 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 450 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 451 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 453 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 460 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 461 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 462 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 463 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 464 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 465 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 466 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 468 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 470 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 471 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 472 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 473 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 474 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 475 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 477 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 479 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 480 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 481 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 482 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 483 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 485 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 487 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 488 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 489 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 490 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 491 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 493 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 495 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 496 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 497 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 498 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 499 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 501 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 503 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 504 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 505 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 506 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 507 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 509 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 515 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 516 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 517 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 518 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 519 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 520 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 523 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 525 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 526 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 527 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 528 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 529 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 531 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 537 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 543 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 544 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 545 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 546 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 547 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 548 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 549 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 551 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 556 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 562 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 563 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 564 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 565 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 566 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 567 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 568 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 570 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 576 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 579 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 588 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 589 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 590 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 591 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 592 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 593 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 594 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 596 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 598 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 599 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 600 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 601 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 602 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 603 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 604 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 606 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 611 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 615 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 616 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 617 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 618 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 619 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 620 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 621 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 623 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 625 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 626 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 627 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 628 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 629 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 630 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 631 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 633 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 635 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 639 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 640 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 641 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 642 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 643 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 644 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 645 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 647 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 649 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 650 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 651 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 652 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 653 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 654 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 655 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 657 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 659 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 663 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 664 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 665 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 666 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 667 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 668 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 669 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 671 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 673 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 674 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 675 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 676 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 677 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 678 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 679 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 681 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 683 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 693 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 694 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 695 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 696 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 697 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 698 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 699 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 700 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 702 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 704 "data/maps/Colchis/scripts.pory"
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
	applymovement 15, Common_Movement_WalkSouthEast
# 713 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 715 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 717 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 719 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 720 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 721 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 722 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 723 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 724 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 725 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 726 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 728 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 730 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 737 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 738 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 739 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 740 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 741 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 742 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 743 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 744 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 746 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 747 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 749 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 750 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 753 "data/maps/Colchis/scripts.pory"
	delay 25
# 757 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 758 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 762 "data/maps/Colchis/scripts.pory"
	delay 25
# 764 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 765 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 769 "data/maps/Colchis/scripts.pory"
	delay 25
# 771 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 772 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 776 "data/maps/Colchis/scripts.pory"
	delay 25
# 778 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 779 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 780 "data/maps/Colchis/scripts.pory"
	delay 25
# 785 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 786 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 787 "data/maps/Colchis/scripts.pory"
	delay 25
# 789 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 790 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 791 "data/maps/Colchis/scripts.pory"
	delay 25
# 796 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 797 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 798 "data/maps/Colchis/scripts.pory"
	delay 25
# 800 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 801 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 802 "data/maps/Colchis/scripts.pory"
	delay 25
# 804 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 805 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 806 "data/maps/Colchis/scripts.pory"
	delay 25
# 808 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 809 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 810 "data/maps/Colchis/scripts.pory"
	delay 25
# 815 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 816 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 817 "data/maps/Colchis/scripts.pory"
	delay 25
# 819 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 820 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 821 "data/maps/Colchis/scripts.pory"
	delay 25
# 823 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 824 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 825 "data/maps/Colchis/scripts.pory"
	delay 25
# 827 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 828 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 829 "data/maps/Colchis/scripts.pory"
	delay 25
# 831 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 833 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 834 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 835 "data/maps/Colchis/scripts.pory"
	delay 25
# 840 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 841 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 842 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 843 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 844 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 845 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 846 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 847 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 849 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 860 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 861 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 862 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 863 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 864 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 865 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 866 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 867 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 868 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 873 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 874 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 875 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 876 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 877 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 878 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 879 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 880 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 881 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 886 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 887 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 888 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 889 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 890 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 891 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 892 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 893 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 894 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 899 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 900 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 901 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 902 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 903 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 904 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 905 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 906 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 907 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 912 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 913 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 914 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 915 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 916 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 917 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 918 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 919 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 920 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 925 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 926 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 927 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 928 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 929 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 930 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 931 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 932 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 933 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 938 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 939 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 940 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 941 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 942 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 943 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 944 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 945 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 946 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 951 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 952 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 953 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 954 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 955 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 956 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 957 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 958 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 959 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 964 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 965 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 966 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 967 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 968 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 969 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 970 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 971 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 972 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 974 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 975 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 976 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 977 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 978 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 979 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 980 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 981 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 982 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 984 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 985 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 986 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 987 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 988 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 989 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 990 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 991 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 992 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 994 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 995 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 996 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 997 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 998 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1001 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1002 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1007 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1008 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1010 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1012 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1019 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1020 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1021 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1022 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1023 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1024 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1025 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1026 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1031 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1032 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1033 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1034 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1035 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1036 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1037 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1038 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1039 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1040 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1041 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1042 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1043 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1044 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1045 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1046 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1047 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1052 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1053 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1054 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1055 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1056 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1057 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1058 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1059 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1060 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1061 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1062 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1063 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1064 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1065 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1066 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1067 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1071 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1072 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1073 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1074 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1075 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1076 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1077 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1078 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1079 "data/maps/Colchis/scripts.pory"
	waitmovement 13
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
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1088 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1089 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1090 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
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
	applymovement 13, Common_Movement_WalkRight
# 1097 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 13, Common_Movement_WalkLeft
# 1104 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1105 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1106 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1107 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1108 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1120 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1121 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1122 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1127 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1128 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1129 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1130 "data/maps/Colchis/scripts.pory"
	closemessage
# 1132 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1136 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1137 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1138 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1139 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1140 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1142 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1143 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1144 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1146 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1147 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1148 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1149 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1158 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1159 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1160 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1165 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1166 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1167 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1174 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1175 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1176 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1181 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1182 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1183 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1192 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1193 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1194 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1195 "data/maps/Colchis/scripts.pory"
	closemessage
# 1198 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1199 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1200 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1209 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1210 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1211 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1216 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1217 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1218 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1221 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1222 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1223 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1224 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1225 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1229 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1230 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1231 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1235 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1236 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1237 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1239 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1240 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1241 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1245 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1246 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1248 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1249 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1255 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1256 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1257 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1258 "data/maps/Colchis/scripts.pory"
	closemessage
# 1261 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1262 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1265 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1266 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1274 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1280 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1281 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1282 "data/maps/Colchis/scripts.pory"
	closemessage
# 1283 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1286 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1287 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1290 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1291 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1292 "data/maps/Colchis/scripts.pory"
	closemessage
# 1293 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1296 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1297 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1298 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1299 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1302 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1303 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1304 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1305 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1306 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1309 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1310 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1311 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1312 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1313 "data/maps/Colchis/scripts.pory"
	delay 30
# 1314 "data/maps/Colchis/scripts.pory"
	waitse
# 1317 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonApproachPlayer
# 1318 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1321 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1322 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1323 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1326 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1327 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1328 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1331 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1332 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1333 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1336 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1337 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1338 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1341 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1342 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1343 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1345 "data/maps/Colchis/scripts.pory"
	closemessage
# 1348 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1349 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1352 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1353 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1354 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1355 "data/maps/Colchis/scripts.pory"
	closemessage
# 1358 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1359 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1362 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1363 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1364 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1367 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1368 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1369 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1371 "data/maps/Colchis/scripts.pory"
	closemessage
# 1375 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonExit
# 1376 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_JasonPrisonExit
# 1377 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_PlayerPrisonExit
# 1378 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1380 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1388 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1389 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1392 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1393 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1394 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1396 "data/maps/Colchis/scripts.pory"
	closemessage
# 1399 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1400 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1403 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1404 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1405 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1406 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1407 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1410 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1411 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 0
# 1412 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1413 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 0
# 1417 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1418 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1421 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1422 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1423 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1426 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1427 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1428 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1431 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1432 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1435 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1436 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1437 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1439 "data/maps/Colchis/scripts.pory"
	closemessage
# 1442 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1443 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1446 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1447 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1449 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1450 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1452 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1453 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1455 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1456 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1457 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1460 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1461 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1462 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1463 "data/maps/Colchis/scripts.pory"
	closemessage
# 1466 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1467 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1470 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1471 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1474 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1477 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1478 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1479 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1480 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1482 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1483 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1484 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1485 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
	end


Colchis_Script_LugiaTest::
# 1491 "data/maps/Colchis/scripts.pory"
	lockall
# 1492 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1493 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1494 "data/maps/Colchis/scripts.pory"
	closemessage
# 1495 "data/maps/Colchis/scripts.pory"
	releaseall
	end


# 1499 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 1500 "data/maps/Colchis/scripts.pory"
	walk_up
# 1500 "data/maps/Colchis/scripts.pory"
	walk_up
# 1500 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1503 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 1504 "data/maps/Colchis/scripts.pory"
	walk_down
# 1504 "data/maps/Colchis/scripts.pory"
	walk_down
# 1504 "data/maps/Colchis/scripts.pory"
	walk_down
# 1504 "data/maps/Colchis/scripts.pory"
	walk_down
# 1504 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1507 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 1508 "data/maps/Colchis/scripts.pory"
	walk_up
# 1508 "data/maps/Colchis/scripts.pory"
	walk_up
# 1508 "data/maps/Colchis/scripts.pory"
	walk_up
# 1508 "data/maps/Colchis/scripts.pory"
	walk_up
# 1508 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1511 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1512 "data/maps/Colchis/scripts.pory"
	walk_up
# 1513 "data/maps/Colchis/scripts.pory"
	walk_right
# 1513 "data/maps/Colchis/scripts.pory"
	walk_right
# 1513 "data/maps/Colchis/scripts.pory"
	walk_right
# 1513 "data/maps/Colchis/scripts.pory"
	walk_right
# 1513 "data/maps/Colchis/scripts.pory"
	walk_right
# 1514 "data/maps/Colchis/scripts.pory"
	walk_up
# 1514 "data/maps/Colchis/scripts.pory"
	walk_up
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1515 "data/maps/Colchis/scripts.pory"
	walk_right
# 1516 "data/maps/Colchis/scripts.pory"
	walk_up
# 1516 "data/maps/Colchis/scripts.pory"
	walk_up
# 1516 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1519 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 1520 "data/maps/Colchis/scripts.pory"
	walk_up
# 1520 "data/maps/Colchis/scripts.pory"
	walk_up
# 1520 "data/maps/Colchis/scripts.pory"
	walk_up
# 1520 "data/maps/Colchis/scripts.pory"
	walk_up
# 1520 "data/maps/Colchis/scripts.pory"
	walk_up
# 1520 "data/maps/Colchis/scripts.pory"
	walk_up
# 1520 "data/maps/Colchis/scripts.pory"
	walk_up
# 1520 "data/maps/Colchis/scripts.pory"
	walk_up
# 1520 "data/maps/Colchis/scripts.pory"
	walk_up
# 1520 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1523 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 1524 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1527 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 1528 "data/maps/Colchis/scripts.pory"
	face_right
# 1529 "data/maps/Colchis/scripts.pory"
	face_up
# 1530 "data/maps/Colchis/scripts.pory"
	face_left
# 1531 "data/maps/Colchis/scripts.pory"
	face_down
# 1532 "data/maps/Colchis/scripts.pory"
	face_right
# 1533 "data/maps/Colchis/scripts.pory"
	face_up
# 1534 "data/maps/Colchis/scripts.pory"
	face_left
# 1535 "data/maps/Colchis/scripts.pory"
	face_down
# 1536 "data/maps/Colchis/scripts.pory"
	face_right
# 1537 "data/maps/Colchis/scripts.pory"
	face_up
# 1538 "data/maps/Colchis/scripts.pory"
	face_left
# 1539 "data/maps/Colchis/scripts.pory"
	face_down
# 1540 "data/maps/Colchis/scripts.pory"
	face_right
# 1541 "data/maps/Colchis/scripts.pory"
	face_up
# 1542 "data/maps/Colchis/scripts.pory"
	face_left
# 1543 "data/maps/Colchis/scripts.pory"
	face_down
# 1544 "data/maps/Colchis/scripts.pory"
	face_right
# 1545 "data/maps/Colchis/scripts.pory"
	face_up
# 1546 "data/maps/Colchis/scripts.pory"
	face_left
# 1547 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1550 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 1551 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1551 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1552 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1555 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 1556 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1556 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1557 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1560 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 1561 "data/maps/Colchis/scripts.pory"
	walk_left
# 1562 "data/maps/Colchis/scripts.pory"
	walk_up
# 1562 "data/maps/Colchis/scripts.pory"
	walk_up
# 1563 "data/maps/Colchis/scripts.pory"
	walk_right
# 1563 "data/maps/Colchis/scripts.pory"
	walk_right
# 1564 "data/maps/Colchis/scripts.pory"
	walk_down
# 1564 "data/maps/Colchis/scripts.pory"
	walk_down
# 1565 "data/maps/Colchis/scripts.pory"
	walk_left
# 1566 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1569 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 1570 "data/maps/Colchis/scripts.pory"
	walk_left
# 1571 "data/maps/Colchis/scripts.pory"
	walk_up
# 1571 "data/maps/Colchis/scripts.pory"
	walk_up
# 1572 "data/maps/Colchis/scripts.pory"
	walk_right
# 1572 "data/maps/Colchis/scripts.pory"
	walk_right
# 1573 "data/maps/Colchis/scripts.pory"
	walk_down
# 1573 "data/maps/Colchis/scripts.pory"
	walk_down
# 1574 "data/maps/Colchis/scripts.pory"
	walk_left
# 1575 "data/maps/Colchis/scripts.pory"
	face_down
# 1576 "data/maps/Colchis/scripts.pory"
	walk_left
# 1577 "data/maps/Colchis/scripts.pory"
	walk_up
# 1577 "data/maps/Colchis/scripts.pory"
	walk_up
# 1578 "data/maps/Colchis/scripts.pory"
	walk_right
# 1578 "data/maps/Colchis/scripts.pory"
	walk_right
# 1579 "data/maps/Colchis/scripts.pory"
	walk_down
# 1579 "data/maps/Colchis/scripts.pory"
	walk_down
# 1580 "data/maps/Colchis/scripts.pory"
	walk_left
# 1581 "data/maps/Colchis/scripts.pory"
	face_down
# 1582 "data/maps/Colchis/scripts.pory"
	walk_left
# 1583 "data/maps/Colchis/scripts.pory"
	walk_up
# 1583 "data/maps/Colchis/scripts.pory"
	walk_up
# 1584 "data/maps/Colchis/scripts.pory"
	walk_right
# 1584 "data/maps/Colchis/scripts.pory"
	walk_right
# 1585 "data/maps/Colchis/scripts.pory"
	walk_down
# 1585 "data/maps/Colchis/scripts.pory"
	walk_down
# 1586 "data/maps/Colchis/scripts.pory"
	walk_left
# 1587 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1590 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 1591 "data/maps/Colchis/scripts.pory"
	walk_down
# 1591 "data/maps/Colchis/scripts.pory"
	walk_down
# 1591 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1594 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 1595 "data/maps/Colchis/scripts.pory"
	walk_right
# 1595 "data/maps/Colchis/scripts.pory"
	walk_right
# 1596 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1599 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 1600 "data/maps/Colchis/scripts.pory"
	walk_left
# 1600 "data/maps/Colchis/scripts.pory"
	walk_left
# 1601 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1604 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 1605 "data/maps/Colchis/scripts.pory"
	walk_down
# 1606 "data/maps/Colchis/scripts.pory"
	face_left
# 1607 "data/maps/Colchis/scripts.pory"
	face_up
# 1608 "data/maps/Colchis/scripts.pory"
	face_right
# 1609 "data/maps/Colchis/scripts.pory"
	face_down
# 1610 "data/maps/Colchis/scripts.pory"
	walk_down
# 1611 "data/maps/Colchis/scripts.pory"
	face_left
# 1612 "data/maps/Colchis/scripts.pory"
	face_up
# 1613 "data/maps/Colchis/scripts.pory"
	face_right
# 1614 "data/maps/Colchis/scripts.pory"
	face_down
# 1615 "data/maps/Colchis/scripts.pory"
	walk_down
# 1616 "data/maps/Colchis/scripts.pory"
	face_left
# 1617 "data/maps/Colchis/scripts.pory"
	face_up
# 1618 "data/maps/Colchis/scripts.pory"
	face_right
# 1619 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1622 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 1623 "data/maps/Colchis/scripts.pory"
	walk_right
# 1624 "data/maps/Colchis/scripts.pory"
	walk_up
# 1625 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1626 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1629 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 1630 "data/maps/Colchis/scripts.pory"
	walk_left
# 1631 "data/maps/Colchis/scripts.pory"
	walk_up
# 1632 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1633 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1636 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 1637 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1638 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1641 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 1642 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1643 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1646 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 1647 "data/maps/Colchis/scripts.pory"
	walk_left
# 1648 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1651 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 1652 "data/maps/Colchis/scripts.pory"
	walk_right
# 1653 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1656 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 1657 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1658 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1661 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 1662 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1663 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1666 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 1667 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1670 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 1671 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 1674 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 1675 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 1679 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 1680 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 1683 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 1684 "data/maps/Colchis/scripts.pory"
	walk_up
# 1684 "data/maps/Colchis/scripts.pory"
	walk_up
# 1684 "data/maps/Colchis/scripts.pory"
	walk_up
# 1684 "data/maps/Colchis/scripts.pory"
	walk_up
# 1684 "data/maps/Colchis/scripts.pory"
	walk_up
# 1684 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1687 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 1688 "data/maps/Colchis/scripts.pory"
	walk_right
# 1688 "data/maps/Colchis/scripts.pory"
	walk_right
# 1688 "data/maps/Colchis/scripts.pory"
	walk_right
# 1688 "data/maps/Colchis/scripts.pory"
	walk_right
# 1688 "data/maps/Colchis/scripts.pory"
	walk_right
# 1688 "data/maps/Colchis/scripts.pory"
	walk_right
# 1688 "data/maps/Colchis/scripts.pory"
	walk_right
# 1688 "data/maps/Colchis/scripts.pory"
	walk_right
# 1689 "data/maps/Colchis/scripts.pory"
	walk_down
# 1689 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1692 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 1693 "data/maps/Colchis/scripts.pory"
	walk_right
# 1693 "data/maps/Colchis/scripts.pory"
	walk_right
# 1693 "data/maps/Colchis/scripts.pory"
	walk_right
# 1693 "data/maps/Colchis/scripts.pory"
	walk_right
# 1693 "data/maps/Colchis/scripts.pory"
	walk_right
# 1693 "data/maps/Colchis/scripts.pory"
	walk_right
# 1693 "data/maps/Colchis/scripts.pory"
	walk_right
# 1694 "data/maps/Colchis/scripts.pory"
	walk_down
# 1694 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1697 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
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
	step_end

# 1702 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 1703 "data/maps/Colchis/scripts.pory"
	walk_right
# 1703 "data/maps/Colchis/scripts.pory"
	walk_right
# 1703 "data/maps/Colchis/scripts.pory"
	walk_right
# 1703 "data/maps/Colchis/scripts.pory"
	walk_right
# 1703 "data/maps/Colchis/scripts.pory"
	walk_right
# 1703 "data/maps/Colchis/scripts.pory"
	walk_right
# 1703 "data/maps/Colchis/scripts.pory"
	walk_right
# 1703 "data/maps/Colchis/scripts.pory"
	walk_right
# 1704 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1707 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 1708 "data/maps/Colchis/scripts.pory"
	walk_right
# 1708 "data/maps/Colchis/scripts.pory"
	walk_right
# 1708 "data/maps/Colchis/scripts.pory"
	walk_right
# 1708 "data/maps/Colchis/scripts.pory"
	walk_right
# 1708 "data/maps/Colchis/scripts.pory"
	walk_right
# 1708 "data/maps/Colchis/scripts.pory"
	walk_right
# 1708 "data/maps/Colchis/scripts.pory"
	walk_right
# 1709 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1712 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 1713 "data/maps/Colchis/scripts.pory"
	walk_right
# 1713 "data/maps/Colchis/scripts.pory"
	walk_right
# 1713 "data/maps/Colchis/scripts.pory"
	walk_right
# 1713 "data/maps/Colchis/scripts.pory"
	walk_right
# 1713 "data/maps/Colchis/scripts.pory"
	walk_right
# 1713 "data/maps/Colchis/scripts.pory"
	walk_right
# 1714 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1717 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1718 "data/maps/Colchis/scripts.pory"
	walk_up
# 1719 "data/maps/Colchis/scripts.pory"
	walk_right
# 1719 "data/maps/Colchis/scripts.pory"
	walk_right
# 1719 "data/maps/Colchis/scripts.pory"
	walk_right
# 1719 "data/maps/Colchis/scripts.pory"
	walk_right
# 1719 "data/maps/Colchis/scripts.pory"
	walk_right
# 1719 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1722 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 1723 "data/maps/Colchis/scripts.pory"
	walk_right
# 1723 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1726 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 1727 "data/maps/Colchis/scripts.pory"
	walk_up
# 1727 "data/maps/Colchis/scripts.pory"
	walk_up
# 1727 "data/maps/Colchis/scripts.pory"
	walk_up
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1728 "data/maps/Colchis/scripts.pory"
	walk_right
# 1729 "data/maps/Colchis/scripts.pory"
	walk_up
# 1729 "data/maps/Colchis/scripts.pory"
	walk_up
# 1729 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1732 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 1733 "data/maps/Colchis/scripts.pory"
	walk_up
# 1733 "data/maps/Colchis/scripts.pory"
	walk_up
# 1733 "data/maps/Colchis/scripts.pory"
	walk_up
# 1733 "data/maps/Colchis/scripts.pory"
	walk_up
# 1733 "data/maps/Colchis/scripts.pory"
	walk_up
# 1733 "data/maps/Colchis/scripts.pory"
	walk_up
# 1733 "data/maps/Colchis/scripts.pory"
	walk_up
# 1733 "data/maps/Colchis/scripts.pory"
	walk_up
# 1733 "data/maps/Colchis/scripts.pory"
	walk_up
# 1733 "data/maps/Colchis/scripts.pory"
	walk_up
# 1733 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1736 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 1737 "data/maps/Colchis/scripts.pory"
	walk_up
# 1737 "data/maps/Colchis/scripts.pory"
	walk_up
# 1737 "data/maps/Colchis/scripts.pory"
	walk_up
# 1737 "data/maps/Colchis/scripts.pory"
	walk_up
# 1737 "data/maps/Colchis/scripts.pory"
	walk_up
# 1737 "data/maps/Colchis/scripts.pory"
	walk_up
# 1737 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1740 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 1741 "data/maps/Colchis/scripts.pory"
	walk_left
# 1742 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1745 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 1746 "data/maps/Colchis/scripts.pory"
	walk_up
# 1747 "data/maps/Colchis/scripts.pory"
	walk_right
# 1748 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1752 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 1753 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1756 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 1757 "data/maps/Colchis/scripts.pory"
	walk_right
# 1757 "data/maps/Colchis/scripts.pory"
	walk_right
# 1758 "data/maps/Colchis/scripts.pory"
	walk_down
# 1759 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1762 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 1763 "data/maps/Colchis/scripts.pory"
	walk_left
# 1764 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1767 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 1768 "data/maps/Colchis/scripts.pory"
	walk_right
# 1769 "data/maps/Colchis/scripts.pory"
	walk_up
# 1770 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1773 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 1774 "data/maps/Colchis/scripts.pory"
	walk_left
# 1775 "data/maps/Colchis/scripts.pory"
	walk_up
# 1776 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1779 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 1780 "data/maps/Colchis/scripts.pory"
	walk_down
# 1780 "data/maps/Colchis/scripts.pory"
	walk_down
# 1780 "data/maps/Colchis/scripts.pory"
	walk_down
# 1780 "data/maps/Colchis/scripts.pory"
	walk_down
# 1780 "data/maps/Colchis/scripts.pory"
	walk_down
# 1780 "data/maps/Colchis/scripts.pory"
	walk_down
# 1780 "data/maps/Colchis/scripts.pory"
	walk_down
# 1780 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1783 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 1784 "data/maps/Colchis/scripts.pory"
	walk_up
# 1784 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1787 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonApproachPlayer:
# 1788 "data/maps/Colchis/scripts.pory"
	walk_up
# 1788 "data/maps/Colchis/scripts.pory"
	walk_up
# 1788 "data/maps/Colchis/scripts.pory"
	walk_up
# 1788 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1791 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonExit:
# 1792 "data/maps/Colchis/scripts.pory"
	walk_down
# 1792 "data/maps/Colchis/scripts.pory"
	walk_down
# 1792 "data/maps/Colchis/scripts.pory"
	walk_down
# 1792 "data/maps/Colchis/scripts.pory"
	walk_down
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1793 "data/maps/Colchis/scripts.pory"
	walk_left
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1794 "data/maps/Colchis/scripts.pory"
	walk_down
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1795 "data/maps/Colchis/scripts.pory"
	walk_right
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	walk_down
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 1800 "data/maps/Colchis/scripts.pory"
Common_Movement_JasonPrisonExit:
# 1801 "data/maps/Colchis/scripts.pory"
	walk_down
# 1801 "data/maps/Colchis/scripts.pory"
	walk_down
# 1801 "data/maps/Colchis/scripts.pory"
	walk_down
# 1801 "data/maps/Colchis/scripts.pory"
	walk_down
# 1801 "data/maps/Colchis/scripts.pory"
	walk_down
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1802 "data/maps/Colchis/scripts.pory"
	walk_left
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1803 "data/maps/Colchis/scripts.pory"
	walk_down
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	walk_right
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
# 1806 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 1809 "data/maps/Colchis/scripts.pory"
Common_Movement_PlayerPrisonExit:
# 1810 "data/maps/Colchis/scripts.pory"
	walk_down
# 1810 "data/maps/Colchis/scripts.pory"
	walk_down
# 1810 "data/maps/Colchis/scripts.pory"
	walk_down
# 1810 "data/maps/Colchis/scripts.pory"
	walk_down
# 1810 "data/maps/Colchis/scripts.pory"
	walk_down
# 1810 "data/maps/Colchis/scripts.pory"
	walk_down
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1811 "data/maps/Colchis/scripts.pory"
	walk_left
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1812 "data/maps/Colchis/scripts.pory"
	walk_down
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
# 1815 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 1818 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 1819 "data/maps/Colchis/scripts.pory"
	walk_left
# 1819 "data/maps/Colchis/scripts.pory"
	walk_left
# 1819 "data/maps/Colchis/scripts.pory"
	walk_left
# 1820 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1823 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 1824 "data/maps/Colchis/scripts.pory"
	walk_down
# 1825 "data/maps/Colchis/scripts.pory"
	walk_right
# 1825 "data/maps/Colchis/scripts.pory"
	walk_right
# 1825 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1828 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 1829 "data/maps/Colchis/scripts.pory"
	walk_up
# 1829 "data/maps/Colchis/scripts.pory"
	walk_up
# 1829 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1832 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 1833 "data/maps/Colchis/scripts.pory"
	walk_up
# 1833 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1493 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Text_JasonIntro1::
# 1836 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 1840 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 1844 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 1848 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 1852 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 1856 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 1861 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 1866 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 1870 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 1874 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 1878 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 1887 "data/maps/Colchis/scripts.pory"
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
# 1892 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 1901 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 1905 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 1914 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 1920 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 1933 "data/maps/Colchis/scripts.pory"
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
# 1945 "data/maps/Colchis/scripts.pory"
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
# 1949 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 1953 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 1957 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 1961 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 1965 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 1969 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 1978 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 1982 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 2000 "data/maps/Colchis/scripts.pory"
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
# 2004 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 2009 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 2013 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 2017 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 2024 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 2028 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 2054 "data/maps/Colchis/scripts.pory"
	.string "Ethay ayway isay openay. Iay ogay onay\n"
	.string "urtherfay, orfay evenay asay Iay\l"
	.string "eholdbay ymay uetray ovelay, ithinway\l"
	.string "ethay anctumsay ofay inyshay Areepmay\l"
	.string "ellsdway Ugialay, ymay avoritefay\l"
	.string "okemonpay, omwhay Iay ustmay ebay\l"
	.string "atedfay evernay againay otay eesay,\l"
	.string "asay Iay eavelay Olchiscay oreverfay.\l"
	.string "Iay earfay atthay eeingsay erhay\l"
	.string "ouldway eakbray ethay oldhay ofay\l"
	.string "ovelay atthay ouyay, Asonjay, oldhay\l"
	.string "overay emay.$"

Colchis_Text_JasonSanctum1::
# 2062 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 2066 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 2079 "data/maps/Colchis/scripts.pory"
	.string "Eforebay ouyay ogay aketay eedhay\n"
	.string "ofay atwhay Iay aysay. Inyshay\l"
	.string "Areepmay isay uardedgay ybay ethay\l"
	.string "eatgray istressmay ofay ormsstay,\l"
	.string "ethay ightymay Ugialay. Eshay isay\l"
	.string "ostmay eciouspray otay emay. Ouyay\l"
	.string "ustmay otnay onfrontcay erhay, oray\l"
	.string "armhay erhay inay anyay ayway, oray\l"
	.string "elseay ouyay illway urelysay ieday\l"
	.string "erehay isthay ayday.$"
