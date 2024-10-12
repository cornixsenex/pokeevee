Colchis_MapScripts::
# 93 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 99 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 110 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME
# 124 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 94 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 95 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupJail
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME:
# 112 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_MAREEP, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2
Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 117 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 113 "data/maps/Colchis/scripts.pory"
	hideobjectat 2, MAP_COLCHIS
# 114 "data/maps/Colchis/scripts.pory"
	removeobject 2
	goto Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 118 "data/maps/Colchis/scripts.pory"
	hideobjectat 1, MAP_COLCHIS
# 119 "data/maps/Colchis/scripts.pory"
	removeobject 1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 125 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
# 127 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_WarpSanctum::
# 136 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 137 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 34, 56
	end


Colchis_TempScript_SetupTestMedeaDance::
# 142 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 143 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 149 "data/maps/Colchis/scripts.pory"
	lockall
# 150 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 151 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SetupJail::
# 156 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 157 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 158 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
# 159 "data/maps/Colchis/scripts.pory"
	addobject 54
# 160 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 167 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 168 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 169 "data/maps/Colchis/scripts.pory"
	closemessage
# 170 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 178 "data/maps/Colchis/scripts.pory"
	lockall
# 180 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 182 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 183 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 184 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 185 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 186 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 187 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 190 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 191 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 192 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 195 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 196 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 197 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 202 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 203 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 204 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 207 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 208 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 209 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 210 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 211 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 212 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 213 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 214 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 215 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 216 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 217 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 218 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 219 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 220 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 221 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 222 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 223 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 226 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 227 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 228 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 229 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 230 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 231 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 232 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 233 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 234 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 235 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 236 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 237 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 238 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 241 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 242 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 243 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 246 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 247 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 248 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 252 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 253 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 254 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 255 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 256 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 257 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 258 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 259 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 260 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 261 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 263 "data/maps/Colchis/scripts.pory"
	closemessage
# 265 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 273 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 274 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 275 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 276 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 277 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 278 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 279 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 280 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 281 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 284 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 285 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 286 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 288 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 289 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 290 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 291 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 292 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 293 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 294 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 298 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 341 "data/maps/Colchis/scripts.pory"
	lockall
# 342 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 344 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 352 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 353 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 354 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 356 "data/maps/Colchis/scripts.pory"
	addobject 23
# 357 "data/maps/Colchis/scripts.pory"
	addobject 24
# 359 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 360 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 364 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 365 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 367 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 368 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 369 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_MedeaDance::
# 391 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 392 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 393 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 398 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 399 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 400 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 401 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 402 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 403 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 404 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 405 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 406 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 407 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 408 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 409 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 410 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 411 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 412 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 413 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 414 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 415 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 424 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 425 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 426 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 427 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 429 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 430 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 432 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 434 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 435 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 436 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 438 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 440 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 441 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 442 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 444 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 450 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 451 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 452 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 453 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 454 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 455 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 456 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 458 "data/maps/Colchis/scripts.pory"
	waitmovement 13
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
# 466 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 468 "data/maps/Colchis/scripts.pory"
	delay 25
# 470 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 471 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 472 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 473 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 474 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 476 "data/maps/Colchis/scripts.pory"
	waitmovement 16
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
# 488 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 489 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 491 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 493 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 494 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 495 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 496 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 497 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 498 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 500 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 502 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 503 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 504 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 505 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 506 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 508 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 510 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 511 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 512 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 513 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 514 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 516 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 518 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 519 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 520 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 522 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 524 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 526 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 527 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 528 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 529 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 530 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 532 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 538 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 539 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 540 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 541 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 542 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 543 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 544 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 546 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 548 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 549 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 550 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 551 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 552 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 554 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 560 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 566 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 567 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 568 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 569 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 570 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 572 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 574 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 579 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 585 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 586 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 587 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 588 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 589 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 590 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 591 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 593 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 599 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 602 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 611 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 612 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 613 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 614 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 615 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 616 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 617 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 619 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 621 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 622 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 623 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 624 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 625 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 626 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 627 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 629 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 634 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 638 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 639 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 640 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 641 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 642 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 643 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 644 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 646 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 648 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 649 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 650 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 651 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 652 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 653 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 654 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 656 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 658 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 662 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 663 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 664 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 665 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 666 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 667 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 668 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 670 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 672 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 673 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 674 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 675 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 676 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 677 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 678 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 680 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 682 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 686 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 687 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 688 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 689 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 690 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 691 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 692 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 694 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 696 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 697 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 698 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 699 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 700 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 701 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 702 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 704 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 706 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 716 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 717 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 718 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 719 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 720 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 721 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 722 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 723 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 725 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 727 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 729 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 730 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 731 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 732 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 733 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 734 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 735 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 736 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 738 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 740 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 742 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 743 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 744 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 745 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 746 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 747 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 748 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 749 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 751 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 753 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 760 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 761 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 762 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 763 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 764 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 765 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 766 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 767 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 769 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 770 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 772 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 773 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 776 "data/maps/Colchis/scripts.pory"
	delay 25
# 780 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 781 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 785 "data/maps/Colchis/scripts.pory"
	delay 25
# 787 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 788 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 792 "data/maps/Colchis/scripts.pory"
	delay 25
# 794 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 795 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 799 "data/maps/Colchis/scripts.pory"
	delay 25
# 801 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 802 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 803 "data/maps/Colchis/scripts.pory"
	delay 25
# 808 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 809 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 810 "data/maps/Colchis/scripts.pory"
	delay 25
# 812 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 813 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 814 "data/maps/Colchis/scripts.pory"
	delay 25
# 819 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 820 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 821 "data/maps/Colchis/scripts.pory"
	delay 25
# 823 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 824 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 825 "data/maps/Colchis/scripts.pory"
	delay 25
# 827 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 828 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 829 "data/maps/Colchis/scripts.pory"
	delay 25
# 831 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 832 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 833 "data/maps/Colchis/scripts.pory"
	delay 25
# 838 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 839 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 840 "data/maps/Colchis/scripts.pory"
	delay 25
# 842 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 843 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 844 "data/maps/Colchis/scripts.pory"
	delay 25
# 846 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 847 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 848 "data/maps/Colchis/scripts.pory"
	delay 25
# 850 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 851 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 852 "data/maps/Colchis/scripts.pory"
	delay 25
# 854 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 856 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 857 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 858 "data/maps/Colchis/scripts.pory"
	delay 25
# 863 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 864 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 865 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 866 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 867 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 868 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 869 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 870 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 872 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 883 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 884 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 885 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 886 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 887 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 888 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 889 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 890 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 891 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 896 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 897 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 898 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 899 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 900 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 901 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 902 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 903 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 904 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 909 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 910 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 911 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 912 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 913 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 914 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 915 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 916 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 917 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 922 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 923 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 924 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 925 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 926 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 927 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 928 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 929 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 930 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 935 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 936 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 937 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 938 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 939 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 940 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 941 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 942 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 943 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 948 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 949 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 950 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 951 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 952 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 953 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 954 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 955 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 956 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 961 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 962 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 963 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 964 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 965 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 966 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 967 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 968 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 969 "data/maps/Colchis/scripts.pory"
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
# 987 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 988 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 989 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 990 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 991 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 992 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 993 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 994 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 995 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 997 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 998 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 999 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1001 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1002 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1004 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1005 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1007 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1008 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1009 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 1010 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 1011 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1012 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1013 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1014 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1015 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1017 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1018 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1019 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1020 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1021 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1023 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1024 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1025 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1030 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1031 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1033 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1035 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1042 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1043 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1044 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1045 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1046 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1047 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1048 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1049 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1054 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1055 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1056 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1057 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1058 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1059 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1060 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1061 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1062 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1063 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1064 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1065 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1066 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1067 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1069 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1070 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1075 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1076 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1077 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1078 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1079 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1080 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1081 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1082 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1083 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1084 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1085 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1086 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1087 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1088 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1089 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1090 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1091 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1092 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1093 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1094 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1095 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1096 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1097 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1098 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1099 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1100 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1101 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1102 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1103 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1104 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1105 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1106 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1107 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1108 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1109 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1110 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1111 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1112 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1113 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1114 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1115 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1116 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1117 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1118 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1119 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1120 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1121 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1122 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1123 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1124 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1125 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1126 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1127 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1128 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1129 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1130 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1131 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1143 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1144 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1145 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1150 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1151 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1152 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1153 "data/maps/Colchis/scripts.pory"
	closemessage
# 1155 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1159 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1160 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1161 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1162 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1163 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1165 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1166 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1167 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1169 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1170 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1171 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1172 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1181 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1182 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1183 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1188 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1189 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1190 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1197 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1198 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1199 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1204 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1205 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1206 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1215 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1216 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1217 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1218 "data/maps/Colchis/scripts.pory"
	closemessage
# 1221 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1222 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1223 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1232 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1233 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1234 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1239 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1240 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1241 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1244 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1245 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1246 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1247 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1248 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1252 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1253 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1254 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1258 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1259 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1260 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1262 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1263 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1264 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1268 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1269 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1271 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1272 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1278 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1279 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1280 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1281 "data/maps/Colchis/scripts.pory"
	closemessage
# 1284 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1285 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1288 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1289 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1297 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1303 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1304 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1305 "data/maps/Colchis/scripts.pory"
	closemessage
# 1306 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1309 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1310 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1313 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1314 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1315 "data/maps/Colchis/scripts.pory"
	closemessage
# 1316 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1319 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1320 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1321 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1322 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1325 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1326 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1327 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1328 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1329 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1332 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1333 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1334 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1335 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1336 "data/maps/Colchis/scripts.pory"
	delay 30
# 1337 "data/maps/Colchis/scripts.pory"
	waitse
# 1340 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonApproachPlayer
# 1341 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1344 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1345 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1346 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1349 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1350 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1351 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1354 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1355 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1356 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1359 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1360 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1361 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1364 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1365 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1366 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1368 "data/maps/Colchis/scripts.pory"
	closemessage
# 1371 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1372 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1375 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1376 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1377 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1378 "data/maps/Colchis/scripts.pory"
	closemessage
# 1381 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1382 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1385 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1386 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1387 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1390 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1391 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1392 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1394 "data/maps/Colchis/scripts.pory"
	closemessage
# 1398 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonExit
# 1399 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_JasonPrisonExit
# 1400 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_PlayerPrisonExit
# 1401 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1403 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1411 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1412 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1415 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1416 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1417 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1419 "data/maps/Colchis/scripts.pory"
	closemessage
# 1422 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1423 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1426 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1427 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1428 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1429 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1430 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1433 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1434 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 0
# 1435 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1436 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 0
# 1440 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1441 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1444 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1445 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1446 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1449 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1450 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1451 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1454 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1455 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1458 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1459 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1460 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1462 "data/maps/Colchis/scripts.pory"
	closemessage
# 1465 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1466 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1469 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1470 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1472 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1473 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1475 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1476 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1478 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1479 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1480 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1483 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1484 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1485 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1486 "data/maps/Colchis/scripts.pory"
	closemessage
# 1489 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1490 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1493 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1494 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1497 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1500 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1501 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1502 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1503 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1505 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1506 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1507 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1508 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1509 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_LugiaTest::
# 1515 "data/maps/Colchis/scripts.pory"
	lockall
# 1516 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1517 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1518 "data/maps/Colchis/scripts.pory"
	closemessage
# 1519 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_Lugia::
# 1524 "data/maps/Colchis/scripts.pory"
	lockall
# 1525 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1526 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 1527 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1528 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_LUGIA
# 1529 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1530 "data/maps/Colchis/scripts.pory"
	setwildbattle SPECIES_LUGIA, 18
# 1531 "data/maps/Colchis/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1532 "data/maps/Colchis/scripts.pory"
	waitstate
# 1533 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1534 "data/maps/Colchis/scripts.pory"
	removeobject 1
# 1535 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTriggerA::
# 1541 "data/maps/Colchis/scripts.pory"
	lockall
# 1542 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 0
# 1543 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTriggerB::
# 1547 "data/maps/Colchis/scripts.pory"
	lockall
# 1548 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 1
# 1549 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTrigger::
# 1554 "data/maps/Colchis/scripts.pory"
	lockall
# 1557 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1558 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1559 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1560 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1561 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1562 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1565 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_4
Colchis_Script_SanctumTrigger_3:
# 1580 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 12
# 1581 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_7
# 1607 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_8
# 1614 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumTrigger_Text_2, MSGBOX_DEFAULT
# 1615 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_SanctumTrigger_1:
# 1624 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_SanctumTrigger_2:
# 1566 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1567 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger1, MSGBOX_DEFAULT
# 1568 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1570 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1571 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger1, MSGBOX_DEFAULT
# 1572 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1574 "data/maps/Colchis/scripts.pory"
	closemessage
# 1577 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1578 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_4:
# 1565 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_2
	goto Colchis_Script_SanctumTrigger_3

Colchis_Script_SanctumTrigger_7:
# 1584 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerEndIntro
# 1587 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1590 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTrigger_13
# 1593 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3B
Colchis_Script_SanctumTrigger_12:
# 1595 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1598 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerJasonAsk
# 1605 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumTrigger_Text_0, MSGBOX_DEFAULT
# 1606 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_8:
# 1611 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumTrigger_Text_1, MSGBOX_DEFAULT
# 1612 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_13:
# 1591 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3A
	goto Colchis_Script_SanctumTrigger_12


Colchis_Script_SanctumTriggerEndIntro::
# 1629 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1630 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1631 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumTriggerMedeaExit::
# 1636 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1637 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger1, MSGBOX_DEFAULT
# 1638 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1639 "data/maps/Colchis/scripts.pory"
	closemessage
# 1640 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTriggerMedeaExit_2
# 1643 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3B
Colchis_Script_SanctumTriggerMedeaExit_1:
# 1645 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumTriggerMedeaExit_2:
# 1641 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3A
	goto Colchis_Script_SanctumTriggerMedeaExit_1


Colchis_Script_LugiaChaseTrigger::
# 1650 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1651 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaChaseTrigger_2
Colchis_Script_LugiaChaseTrigger_1:
	end

Colchis_Script_LugiaChaseTrigger_2:
# 1652 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	goto Colchis_Script_LugiaChaseTrigger_1


Colchis_Script_LugiaWanderTrigger::
# 1658 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1659 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaWanderTrigger_2
Colchis_Script_LugiaWanderTrigger_1:
	end

Colchis_Script_LugiaWanderTrigger_2:
# 1660 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	goto Colchis_Script_LugiaWanderTrigger_1


Colchis_Script_ShinyMareep::
# 1666 "data/maps/Colchis/scripts.pory"
	lockall
# 1667 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1668 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 1669 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1670 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1671 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1672 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1673 "data/maps/Colchis/scripts.pory"
	waitstate
# 1674 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1675 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1676 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTriggerJasonAsk::
# 1681 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1682 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1683 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1684 "data/maps/Colchis/scripts.pory"
	closemessage
	return


# 1689 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 1690 "data/maps/Colchis/scripts.pory"
	walk_up
# 1690 "data/maps/Colchis/scripts.pory"
	walk_up
# 1690 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1693 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 1694 "data/maps/Colchis/scripts.pory"
	walk_down
# 1694 "data/maps/Colchis/scripts.pory"
	walk_down
# 1694 "data/maps/Colchis/scripts.pory"
	walk_down
# 1694 "data/maps/Colchis/scripts.pory"
	walk_down
# 1694 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1697 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 1698 "data/maps/Colchis/scripts.pory"
	walk_up
# 1698 "data/maps/Colchis/scripts.pory"
	walk_up
# 1698 "data/maps/Colchis/scripts.pory"
	walk_up
# 1698 "data/maps/Colchis/scripts.pory"
	walk_up
# 1698 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1701 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
# 1702 "data/maps/Colchis/scripts.pory"
	walk_up
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
	walk_up
# 1704 "data/maps/Colchis/scripts.pory"
	walk_up
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1705 "data/maps/Colchis/scripts.pory"
	walk_right
# 1706 "data/maps/Colchis/scripts.pory"
	walk_up
# 1706 "data/maps/Colchis/scripts.pory"
	walk_up
# 1706 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1709 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 1710 "data/maps/Colchis/scripts.pory"
	walk_up
# 1710 "data/maps/Colchis/scripts.pory"
	walk_up
# 1710 "data/maps/Colchis/scripts.pory"
	walk_up
# 1710 "data/maps/Colchis/scripts.pory"
	walk_up
# 1710 "data/maps/Colchis/scripts.pory"
	walk_up
# 1710 "data/maps/Colchis/scripts.pory"
	walk_up
# 1710 "data/maps/Colchis/scripts.pory"
	walk_up
# 1710 "data/maps/Colchis/scripts.pory"
	walk_up
# 1710 "data/maps/Colchis/scripts.pory"
	walk_up
# 1710 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1713 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 1714 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1717 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 1718 "data/maps/Colchis/scripts.pory"
	face_right
# 1719 "data/maps/Colchis/scripts.pory"
	face_up
# 1720 "data/maps/Colchis/scripts.pory"
	face_left
# 1721 "data/maps/Colchis/scripts.pory"
	face_down
# 1722 "data/maps/Colchis/scripts.pory"
	face_right
# 1723 "data/maps/Colchis/scripts.pory"
	face_up
# 1724 "data/maps/Colchis/scripts.pory"
	face_left
# 1725 "data/maps/Colchis/scripts.pory"
	face_down
# 1726 "data/maps/Colchis/scripts.pory"
	face_right
# 1727 "data/maps/Colchis/scripts.pory"
	face_up
# 1728 "data/maps/Colchis/scripts.pory"
	face_left
# 1729 "data/maps/Colchis/scripts.pory"
	face_down
# 1730 "data/maps/Colchis/scripts.pory"
	face_right
# 1731 "data/maps/Colchis/scripts.pory"
	face_up
# 1732 "data/maps/Colchis/scripts.pory"
	face_left
# 1733 "data/maps/Colchis/scripts.pory"
	face_down
# 1734 "data/maps/Colchis/scripts.pory"
	face_right
# 1735 "data/maps/Colchis/scripts.pory"
	face_up
# 1736 "data/maps/Colchis/scripts.pory"
	face_left
# 1737 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1740 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 1741 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1741 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1742 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1745 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 1746 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1746 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1747 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1750 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 1751 "data/maps/Colchis/scripts.pory"
	walk_left
# 1752 "data/maps/Colchis/scripts.pory"
	walk_up
# 1752 "data/maps/Colchis/scripts.pory"
	walk_up
# 1753 "data/maps/Colchis/scripts.pory"
	walk_right
# 1753 "data/maps/Colchis/scripts.pory"
	walk_right
# 1754 "data/maps/Colchis/scripts.pory"
	walk_down
# 1754 "data/maps/Colchis/scripts.pory"
	walk_down
# 1755 "data/maps/Colchis/scripts.pory"
	walk_left
# 1756 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1759 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 1760 "data/maps/Colchis/scripts.pory"
	walk_left
# 1761 "data/maps/Colchis/scripts.pory"
	walk_up
# 1761 "data/maps/Colchis/scripts.pory"
	walk_up
# 1762 "data/maps/Colchis/scripts.pory"
	walk_right
# 1762 "data/maps/Colchis/scripts.pory"
	walk_right
# 1763 "data/maps/Colchis/scripts.pory"
	walk_down
# 1763 "data/maps/Colchis/scripts.pory"
	walk_down
# 1764 "data/maps/Colchis/scripts.pory"
	walk_left
# 1765 "data/maps/Colchis/scripts.pory"
	face_down
# 1766 "data/maps/Colchis/scripts.pory"
	walk_left
# 1767 "data/maps/Colchis/scripts.pory"
	walk_up
# 1767 "data/maps/Colchis/scripts.pory"
	walk_up
# 1768 "data/maps/Colchis/scripts.pory"
	walk_right
# 1768 "data/maps/Colchis/scripts.pory"
	walk_right
# 1769 "data/maps/Colchis/scripts.pory"
	walk_down
# 1769 "data/maps/Colchis/scripts.pory"
	walk_down
# 1770 "data/maps/Colchis/scripts.pory"
	walk_left
# 1771 "data/maps/Colchis/scripts.pory"
	face_down
# 1772 "data/maps/Colchis/scripts.pory"
	walk_left
# 1773 "data/maps/Colchis/scripts.pory"
	walk_up
# 1773 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_right
# 1774 "data/maps/Colchis/scripts.pory"
	walk_right
# 1775 "data/maps/Colchis/scripts.pory"
	walk_down
# 1775 "data/maps/Colchis/scripts.pory"
	walk_down
# 1776 "data/maps/Colchis/scripts.pory"
	walk_left
# 1777 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1780 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 1781 "data/maps/Colchis/scripts.pory"
	walk_down
# 1781 "data/maps/Colchis/scripts.pory"
	walk_down
# 1781 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1784 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 1785 "data/maps/Colchis/scripts.pory"
	walk_right
# 1785 "data/maps/Colchis/scripts.pory"
	walk_right
# 1786 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1789 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 1790 "data/maps/Colchis/scripts.pory"
	walk_left
# 1790 "data/maps/Colchis/scripts.pory"
	walk_left
# 1791 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1794 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 1795 "data/maps/Colchis/scripts.pory"
	walk_down
# 1796 "data/maps/Colchis/scripts.pory"
	face_left
# 1797 "data/maps/Colchis/scripts.pory"
	face_up
# 1798 "data/maps/Colchis/scripts.pory"
	face_right
# 1799 "data/maps/Colchis/scripts.pory"
	face_down
# 1800 "data/maps/Colchis/scripts.pory"
	walk_down
# 1801 "data/maps/Colchis/scripts.pory"
	face_left
# 1802 "data/maps/Colchis/scripts.pory"
	face_up
# 1803 "data/maps/Colchis/scripts.pory"
	face_right
# 1804 "data/maps/Colchis/scripts.pory"
	face_down
# 1805 "data/maps/Colchis/scripts.pory"
	walk_down
# 1806 "data/maps/Colchis/scripts.pory"
	face_left
# 1807 "data/maps/Colchis/scripts.pory"
	face_up
# 1808 "data/maps/Colchis/scripts.pory"
	face_right
# 1809 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1812 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1814 "data/maps/Colchis/scripts.pory"
	walk_up
# 1815 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1816 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1819 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 1820 "data/maps/Colchis/scripts.pory"
	walk_left
# 1821 "data/maps/Colchis/scripts.pory"
	walk_up
# 1822 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1823 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1826 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 1827 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1828 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1831 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 1832 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1833 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1836 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 1837 "data/maps/Colchis/scripts.pory"
	walk_left
# 1838 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1841 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 1842 "data/maps/Colchis/scripts.pory"
	walk_right
# 1843 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1846 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 1847 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1848 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1851 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 1852 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1853 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1856 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 1857 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1860 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 1861 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 1864 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 1865 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 1869 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 1870 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 1873 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 1874 "data/maps/Colchis/scripts.pory"
	walk_up
# 1874 "data/maps/Colchis/scripts.pory"
	walk_up
# 1874 "data/maps/Colchis/scripts.pory"
	walk_up
# 1874 "data/maps/Colchis/scripts.pory"
	walk_up
# 1874 "data/maps/Colchis/scripts.pory"
	walk_up
# 1874 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1877 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 1878 "data/maps/Colchis/scripts.pory"
	walk_right
# 1878 "data/maps/Colchis/scripts.pory"
	walk_right
# 1878 "data/maps/Colchis/scripts.pory"
	walk_right
# 1878 "data/maps/Colchis/scripts.pory"
	walk_right
# 1878 "data/maps/Colchis/scripts.pory"
	walk_right
# 1878 "data/maps/Colchis/scripts.pory"
	walk_right
# 1878 "data/maps/Colchis/scripts.pory"
	walk_right
# 1878 "data/maps/Colchis/scripts.pory"
	walk_right
# 1879 "data/maps/Colchis/scripts.pory"
	walk_down
# 1879 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1882 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 1883 "data/maps/Colchis/scripts.pory"
	walk_right
# 1883 "data/maps/Colchis/scripts.pory"
	walk_right
# 1883 "data/maps/Colchis/scripts.pory"
	walk_right
# 1883 "data/maps/Colchis/scripts.pory"
	walk_right
# 1883 "data/maps/Colchis/scripts.pory"
	walk_right
# 1883 "data/maps/Colchis/scripts.pory"
	walk_right
# 1883 "data/maps/Colchis/scripts.pory"
	walk_right
# 1884 "data/maps/Colchis/scripts.pory"
	walk_down
# 1884 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1887 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 1888 "data/maps/Colchis/scripts.pory"
	walk_right
# 1888 "data/maps/Colchis/scripts.pory"
	walk_right
# 1888 "data/maps/Colchis/scripts.pory"
	walk_right
# 1888 "data/maps/Colchis/scripts.pory"
	walk_right
# 1888 "data/maps/Colchis/scripts.pory"
	walk_right
# 1888 "data/maps/Colchis/scripts.pory"
	walk_right
# 1889 "data/maps/Colchis/scripts.pory"
	walk_down
# 1889 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1892 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 1893 "data/maps/Colchis/scripts.pory"
	walk_right
# 1893 "data/maps/Colchis/scripts.pory"
	walk_right
# 1893 "data/maps/Colchis/scripts.pory"
	walk_right
# 1893 "data/maps/Colchis/scripts.pory"
	walk_right
# 1893 "data/maps/Colchis/scripts.pory"
	walk_right
# 1893 "data/maps/Colchis/scripts.pory"
	walk_right
# 1893 "data/maps/Colchis/scripts.pory"
	walk_right
# 1893 "data/maps/Colchis/scripts.pory"
	walk_right
# 1894 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1897 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 1898 "data/maps/Colchis/scripts.pory"
	walk_right
# 1898 "data/maps/Colchis/scripts.pory"
	walk_right
# 1898 "data/maps/Colchis/scripts.pory"
	walk_right
# 1898 "data/maps/Colchis/scripts.pory"
	walk_right
# 1898 "data/maps/Colchis/scripts.pory"
	walk_right
# 1898 "data/maps/Colchis/scripts.pory"
	walk_right
# 1898 "data/maps/Colchis/scripts.pory"
	walk_right
# 1899 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1902 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 1903 "data/maps/Colchis/scripts.pory"
	walk_right
# 1903 "data/maps/Colchis/scripts.pory"
	walk_right
# 1903 "data/maps/Colchis/scripts.pory"
	walk_right
# 1903 "data/maps/Colchis/scripts.pory"
	walk_right
# 1903 "data/maps/Colchis/scripts.pory"
	walk_right
# 1903 "data/maps/Colchis/scripts.pory"
	walk_right
# 1904 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1907 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1908 "data/maps/Colchis/scripts.pory"
	walk_up
# 1909 "data/maps/Colchis/scripts.pory"
	walk_right
# 1909 "data/maps/Colchis/scripts.pory"
	walk_right
# 1909 "data/maps/Colchis/scripts.pory"
	walk_right
# 1909 "data/maps/Colchis/scripts.pory"
	walk_right
# 1909 "data/maps/Colchis/scripts.pory"
	walk_right
# 1909 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1912 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 1913 "data/maps/Colchis/scripts.pory"
	walk_right
# 1913 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1916 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 1917 "data/maps/Colchis/scripts.pory"
	walk_up
# 1917 "data/maps/Colchis/scripts.pory"
	walk_up
# 1917 "data/maps/Colchis/scripts.pory"
	walk_up
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1918 "data/maps/Colchis/scripts.pory"
	walk_right
# 1919 "data/maps/Colchis/scripts.pory"
	walk_up
# 1919 "data/maps/Colchis/scripts.pory"
	walk_up
# 1919 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1922 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 1923 "data/maps/Colchis/scripts.pory"
	walk_up
# 1923 "data/maps/Colchis/scripts.pory"
	walk_up
# 1923 "data/maps/Colchis/scripts.pory"
	walk_up
# 1923 "data/maps/Colchis/scripts.pory"
	walk_up
# 1923 "data/maps/Colchis/scripts.pory"
	walk_up
# 1923 "data/maps/Colchis/scripts.pory"
	walk_up
# 1923 "data/maps/Colchis/scripts.pory"
	walk_up
# 1923 "data/maps/Colchis/scripts.pory"
	walk_up
# 1923 "data/maps/Colchis/scripts.pory"
	walk_up
# 1923 "data/maps/Colchis/scripts.pory"
	walk_up
# 1923 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1926 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 1927 "data/maps/Colchis/scripts.pory"
	walk_up
# 1927 "data/maps/Colchis/scripts.pory"
	walk_up
# 1927 "data/maps/Colchis/scripts.pory"
	walk_up
# 1927 "data/maps/Colchis/scripts.pory"
	walk_up
# 1927 "data/maps/Colchis/scripts.pory"
	walk_up
# 1927 "data/maps/Colchis/scripts.pory"
	walk_up
# 1927 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1930 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 1931 "data/maps/Colchis/scripts.pory"
	walk_left
# 1932 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1935 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 1936 "data/maps/Colchis/scripts.pory"
	walk_up
# 1937 "data/maps/Colchis/scripts.pory"
	walk_right
# 1938 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1942 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 1943 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1946 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 1947 "data/maps/Colchis/scripts.pory"
	walk_right
# 1947 "data/maps/Colchis/scripts.pory"
	walk_right
# 1948 "data/maps/Colchis/scripts.pory"
	walk_down
# 1949 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1952 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 1953 "data/maps/Colchis/scripts.pory"
	walk_left
# 1954 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1957 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 1958 "data/maps/Colchis/scripts.pory"
	walk_right
# 1959 "data/maps/Colchis/scripts.pory"
	walk_up
# 1960 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1963 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 1964 "data/maps/Colchis/scripts.pory"
	walk_left
# 1965 "data/maps/Colchis/scripts.pory"
	walk_up
# 1966 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1969 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 1970 "data/maps/Colchis/scripts.pory"
	walk_down
# 1970 "data/maps/Colchis/scripts.pory"
	walk_down
# 1970 "data/maps/Colchis/scripts.pory"
	walk_down
# 1970 "data/maps/Colchis/scripts.pory"
	walk_down
# 1970 "data/maps/Colchis/scripts.pory"
	walk_down
# 1970 "data/maps/Colchis/scripts.pory"
	walk_down
# 1970 "data/maps/Colchis/scripts.pory"
	walk_down
# 1970 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1973 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 1974 "data/maps/Colchis/scripts.pory"
	walk_up
# 1974 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1977 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonApproachPlayer:
# 1978 "data/maps/Colchis/scripts.pory"
	walk_up
# 1978 "data/maps/Colchis/scripts.pory"
	walk_up
# 1978 "data/maps/Colchis/scripts.pory"
	walk_up
# 1978 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1981 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonExit:
# 1982 "data/maps/Colchis/scripts.pory"
	walk_down
# 1982 "data/maps/Colchis/scripts.pory"
	walk_down
# 1982 "data/maps/Colchis/scripts.pory"
	walk_down
# 1982 "data/maps/Colchis/scripts.pory"
	walk_down
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	walk_left
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1984 "data/maps/Colchis/scripts.pory"
	walk_down
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1985 "data/maps/Colchis/scripts.pory"
	walk_right
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1986 "data/maps/Colchis/scripts.pory"
	walk_down
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 1990 "data/maps/Colchis/scripts.pory"
Common_Movement_JasonPrisonExit:
# 1991 "data/maps/Colchis/scripts.pory"
	walk_down
# 1991 "data/maps/Colchis/scripts.pory"
	walk_down
# 1991 "data/maps/Colchis/scripts.pory"
	walk_down
# 1991 "data/maps/Colchis/scripts.pory"
	walk_down
# 1991 "data/maps/Colchis/scripts.pory"
	walk_down
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	walk_left
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_down
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1994 "data/maps/Colchis/scripts.pory"
	walk_right
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1995 "data/maps/Colchis/scripts.pory"
	walk_down
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
# 1996 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 1999 "data/maps/Colchis/scripts.pory"
Common_Movement_PlayerPrisonExit:
# 2000 "data/maps/Colchis/scripts.pory"
	walk_down
# 2000 "data/maps/Colchis/scripts.pory"
	walk_down
# 2000 "data/maps/Colchis/scripts.pory"
	walk_down
# 2000 "data/maps/Colchis/scripts.pory"
	walk_down
# 2000 "data/maps/Colchis/scripts.pory"
	walk_down
# 2000 "data/maps/Colchis/scripts.pory"
	walk_down
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_left
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_right
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_down
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2008 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 2009 "data/maps/Colchis/scripts.pory"
	walk_left
# 2009 "data/maps/Colchis/scripts.pory"
	walk_left
# 2009 "data/maps/Colchis/scripts.pory"
	walk_left
# 2010 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2013 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 2014 "data/maps/Colchis/scripts.pory"
	walk_down
# 2015 "data/maps/Colchis/scripts.pory"
	walk_right
# 2015 "data/maps/Colchis/scripts.pory"
	walk_right
# 2015 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2018 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 2019 "data/maps/Colchis/scripts.pory"
	walk_up
# 2019 "data/maps/Colchis/scripts.pory"
	walk_up
# 2019 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2022 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 2023 "data/maps/Colchis/scripts.pory"
	walk_up
# 2023 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2026 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3A:
# 2027 "data/maps/Colchis/scripts.pory"
	walk_up
# 2027 "data/maps/Colchis/scripts.pory"
	walk_up
# 2028 "data/maps/Colchis/scripts.pory"
	walk_right
# 2028 "data/maps/Colchis/scripts.pory"
	walk_right
# 2029 "data/maps/Colchis/scripts.pory"
	walk_up
# 2029 "data/maps/Colchis/scripts.pory"
	walk_up
# 2029 "data/maps/Colchis/scripts.pory"
	walk_up
# 2029 "data/maps/Colchis/scripts.pory"
	walk_up
# 2029 "data/maps/Colchis/scripts.pory"
	walk_up
# 2029 "data/maps/Colchis/scripts.pory"
	walk_up
# 2029 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1517 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Script_SanctumTrigger_Text_0:
# 1605 "data/maps/Colchis/scripts.pory"
	.string "FAIL BOTH$"

Colchis_Script_SanctumTrigger_Text_1:
# 1611 "data/maps/Colchis/scripts.pory"
	.string "CHECK HAS MAREEP$"

Colchis_Script_SanctumTrigger_Text_2:
# 1614 "data/maps/Colchis/scripts.pory"
	.string "BAD LUGIA CHECK MAREEP$"

Colchis_Text_JasonIntro1::
# 2032 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 2036 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 2040 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 2044 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 2048 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 2052 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 2057 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 2062 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 2066 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 2070 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 2074 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 2083 "data/maps/Colchis/scripts.pory"
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
# 2088 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 2097 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 2101 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 2110 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 2116 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 2129 "data/maps/Colchis/scripts.pory"
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
# 2141 "data/maps/Colchis/scripts.pory"
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
# 2145 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 2149 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 2153 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 2157 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 2161 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 2165 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 2174 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 2178 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 2196 "data/maps/Colchis/scripts.pory"
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
# 2200 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 2205 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 2209 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 2213 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 2220 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 2224 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 2250 "data/maps/Colchis/scripts.pory"
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
# 2258 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 2262 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 2275 "data/maps/Colchis/scripts.pory"
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

Colchis_Text_JasonSanctumTrigger1::
# 2279 "data/maps/Colchis/scripts.pory"
	.string "Do not interrupt my private time with\n"
	.string "Medea 'till you bring shiny Mareep.$"

Colchis_Text_MedeaSanctumTrigger1::
# 2284 "data/maps/Colchis/scripts.pory"
	.string "Ememberray, ingbray onay armhay otay\n"
	.string "Ugialay.$"

Colchis_Text_JasonSanctumTrigger2::
# 2288 "data/maps/Colchis/scripts.pory"
	.string "Have you returned bringing Shiny\n"
	.string "Mareep?$"

Colchis_Text_MedeaSanctumTrigger2::
# 2293 "data/maps/Colchis/scripts.pory"
	.string "Ymay oughtsthay etraybay emay.\n"
	.string "Excuseay emay Asonjay, againstay ymay\l"
	.string "ownay adviceay Iay ustmay aketay\l"
	.string "eavelay ofay ouyay anday eesay atthay\l"
	.string "Ugialay isay afesay.$"
