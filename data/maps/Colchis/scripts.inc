Colchis_MapScripts::
# 92 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 98 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 109 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME
# 123 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 93 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 94 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupJail
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME:
# 111 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_MAREEP, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2
Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 116 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 112 "data/maps/Colchis/scripts.pory"
	hideobjectat 2, MAP_COLCHIS
# 113 "data/maps/Colchis/scripts.pory"
	removeobject 2
	goto Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 117 "data/maps/Colchis/scripts.pory"
	hideobjectat 1, MAP_COLCHIS
# 118 "data/maps/Colchis/scripts.pory"
	removeobject 1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 124 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
# 126 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_WarpSanctum::
# 135 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 136 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 34, 56
	end


Colchis_TempScript_SetupTestMedeaDance::
# 141 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 142 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 148 "data/maps/Colchis/scripts.pory"
	lockall
# 149 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 150 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SetupJail::
# 155 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 156 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 157 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
# 158 "data/maps/Colchis/scripts.pory"
	addobject 54
# 159 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 166 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 167 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 168 "data/maps/Colchis/scripts.pory"
	closemessage
# 169 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 177 "data/maps/Colchis/scripts.pory"
	lockall
# 179 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 181 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 182 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 183 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 184 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 185 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 186 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 189 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 190 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 191 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 194 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 195 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 196 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 201 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 202 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 203 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 206 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 207 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 208 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 209 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 210 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 211 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 212 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 213 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 214 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 215 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 216 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 217 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 218 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 219 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 220 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 221 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 222 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 225 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 226 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 227 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 228 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 229 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 230 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 231 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 232 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 233 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 234 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 235 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 236 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 237 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 240 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 241 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 242 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 245 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 246 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 247 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 251 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 252 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 253 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 254 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 255 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 256 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 257 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 258 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 259 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 260 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 262 "data/maps/Colchis/scripts.pory"
	closemessage
# 264 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 272 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 273 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 274 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 275 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 276 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 277 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 278 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 279 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 280 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 283 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 284 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 285 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 287 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 288 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 289 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 290 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 291 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 292 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 293 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 297 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 340 "data/maps/Colchis/scripts.pory"
	lockall
# 341 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 343 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 350 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 351 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 352 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 354 "data/maps/Colchis/scripts.pory"
	addobject 23
# 355 "data/maps/Colchis/scripts.pory"
	addobject 24
# 357 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 358 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 362 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 363 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 365 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 366 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 367 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 370 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 371 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPre, MSGBOX_DEFAULT
# 372 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 373 "data/maps/Colchis/scripts.pory"
	closemessage
# 376 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_2, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
# 379 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 380 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPost, MSGBOX_DEFAULT
# 381 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 382 "data/maps/Colchis/scripts.pory"
	closemessage
# 385 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleExitA
# 386 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleExitB
# 387 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 390 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 391 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 393 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 23, 0, 0
# 394 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 24, 2, 0
# 396 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_FACE_DOWN
# 397 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_UP
# 399 "data/maps/Colchis/scripts.pory"
	addobject 23
# 400 "data/maps/Colchis/scripts.pory"
	addobject 24
# 402 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 403 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
	return


Colchis_Script_MedeaDance::
# 413 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 414 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 415 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 420 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 421 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 422 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 423 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 424 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 425 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 426 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 427 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 429 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 430 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 431 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 432 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 433 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 434 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 435 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 436 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 437 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 446 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 447 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 448 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 449 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 450 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 451 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 452 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 454 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 456 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 457 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 458 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 460 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 462 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 463 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 464 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 466 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 472 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 473 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 474 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 475 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 476 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 477 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 478 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 480 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 482 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 483 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 484 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 485 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 486 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 488 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 490 "data/maps/Colchis/scripts.pory"
	delay 25
# 492 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 493 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 494 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 495 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 496 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 498 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 505 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 506 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 507 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 508 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 509 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 510 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 511 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 513 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 515 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 516 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 517 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 518 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 519 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 520 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 522 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 524 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 525 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 526 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 527 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 528 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 530 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 532 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 533 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 534 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 535 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 536 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 538 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 540 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 541 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 542 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 543 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 544 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
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
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 561 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 562 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 563 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 564 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 565 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 566 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 568 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 570 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 572 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 573 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 574 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 576 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 582 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 588 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 589 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 590 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 591 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 592 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 593 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 594 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 596 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 601 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 607 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 608 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 609 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 610 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 611 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 612 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 613 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 615 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 621 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 624 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 633 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 634 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 635 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 636 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 637 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 638 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 639 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 641 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 643 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 644 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 645 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 646 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 647 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 648 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 649 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 651 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 656 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 660 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 661 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 662 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 663 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 664 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 665 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 666 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 668 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 670 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 671 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 672 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 673 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 674 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 675 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 676 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 678 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 680 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 684 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 685 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 686 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 687 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 688 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 689 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 690 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 692 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 694 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 695 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 696 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 697 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 698 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 699 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 700 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 702 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 704 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 708 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 709 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 710 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 711 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 712 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 713 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 714 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 716 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 718 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 719 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 720 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 721 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 722 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 723 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 724 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 726 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 728 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 738 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 739 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 740 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 741 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 742 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 743 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 744 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 745 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 747 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 749 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 751 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 752 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 753 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 754 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 755 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 756 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 757 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 758 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 760 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 762 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 764 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 765 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 766 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 767 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 768 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 769 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 770 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 771 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 773 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 775 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 782 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 783 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 784 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 785 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 786 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 787 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 788 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 789 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 791 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 792 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 794 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 795 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 798 "data/maps/Colchis/scripts.pory"
	delay 25
# 802 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 803 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 807 "data/maps/Colchis/scripts.pory"
	delay 25
# 809 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 810 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 814 "data/maps/Colchis/scripts.pory"
	delay 25
# 816 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 817 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 821 "data/maps/Colchis/scripts.pory"
	delay 25
# 823 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 824 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 825 "data/maps/Colchis/scripts.pory"
	delay 25
# 830 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 831 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 832 "data/maps/Colchis/scripts.pory"
	delay 25
# 834 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 835 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 836 "data/maps/Colchis/scripts.pory"
	delay 25
# 841 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 842 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 843 "data/maps/Colchis/scripts.pory"
	delay 25
# 845 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 846 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 847 "data/maps/Colchis/scripts.pory"
	delay 25
# 849 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 850 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 851 "data/maps/Colchis/scripts.pory"
	delay 25
# 853 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 854 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 855 "data/maps/Colchis/scripts.pory"
	delay 25
# 860 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 861 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 862 "data/maps/Colchis/scripts.pory"
	delay 25
# 864 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 865 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 866 "data/maps/Colchis/scripts.pory"
	delay 25
# 868 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 869 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 870 "data/maps/Colchis/scripts.pory"
	delay 25
# 872 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 873 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 874 "data/maps/Colchis/scripts.pory"
	delay 25
# 876 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 878 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 879 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 880 "data/maps/Colchis/scripts.pory"
	delay 25
# 885 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 886 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 887 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 888 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 889 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 890 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 891 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 892 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 894 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 905 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 906 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 907 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 908 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 909 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 910 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 911 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 912 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 913 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 918 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 919 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 920 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 921 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 922 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 923 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 924 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 925 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 926 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 931 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 932 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 933 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 934 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 935 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 936 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 937 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 938 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 939 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 944 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 945 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 946 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 947 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 948 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 949 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 950 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 951 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 952 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 957 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 958 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 959 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 960 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 961 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 962 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 963 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 964 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 965 "data/maps/Colchis/scripts.pory"
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
# 983 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 984 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 985 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 986 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 987 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 988 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 989 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 990 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 991 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 996 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 997 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 998 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 999 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1001 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1002 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1004 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1009 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1010 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1011 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 1012 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 1013 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 1014 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 1015 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 1016 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 1017 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1019 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1020 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1021 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1022 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1023 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1024 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1025 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1026 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1027 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1029 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1030 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1031 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 1032 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 1033 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1034 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1035 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1036 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1037 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1039 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1040 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1041 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1042 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1043 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1045 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1046 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1047 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1052 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1053 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1055 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1057 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1064 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1065 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1066 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1067 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1071 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1076 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1077 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1078 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1079 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1080 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1081 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1082 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1083 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1084 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1085 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1086 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1087 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1088 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1089 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1090 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1091 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1092 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1097 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1098 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1099 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1100 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1101 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1102 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1103 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1104 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1105 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1106 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1107 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1108 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1109 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1110 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1111 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1112 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1113 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1114 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1115 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1116 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1117 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1118 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1119 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1120 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1121 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1122 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1123 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1124 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1125 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1126 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1127 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1128 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1129 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1130 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1131 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1132 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1133 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1134 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1135 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1136 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1137 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1138 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1139 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1140 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1141 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1142 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1143 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1144 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1145 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1146 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1147 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1148 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1149 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1150 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1151 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1152 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1153 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1165 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1166 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1167 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1172 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1173 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1174 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1175 "data/maps/Colchis/scripts.pory"
	closemessage
# 1177 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1181 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1182 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1183 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1184 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1185 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1187 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1188 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1189 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1191 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1192 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1193 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1194 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1203 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1204 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1205 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1210 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1211 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1212 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1219 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1220 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1221 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1226 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1227 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1228 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1237 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1238 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1239 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1240 "data/maps/Colchis/scripts.pory"
	closemessage
# 1243 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1244 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1245 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1254 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1255 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1256 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1261 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1262 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1263 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1266 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1267 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1268 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1269 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1270 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1274 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1275 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1276 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1280 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1281 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1282 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1284 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1285 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1286 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1290 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1291 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1293 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1294 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1300 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1301 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1302 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1303 "data/maps/Colchis/scripts.pory"
	closemessage
# 1306 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1307 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1310 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1311 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1319 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1325 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1326 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1327 "data/maps/Colchis/scripts.pory"
	closemessage
# 1328 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1331 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1332 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1335 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1336 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1337 "data/maps/Colchis/scripts.pory"
	closemessage
# 1338 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1341 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1342 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1343 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1344 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1347 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1348 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1349 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1350 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1351 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1354 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1355 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1356 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1357 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1358 "data/maps/Colchis/scripts.pory"
	delay 30
# 1359 "data/maps/Colchis/scripts.pory"
	waitse
# 1362 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonApproachPlayer
# 1363 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1366 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1367 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1368 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1371 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1372 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1373 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1376 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1377 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1378 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1381 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1382 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1383 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1386 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1387 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1388 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1390 "data/maps/Colchis/scripts.pory"
	closemessage
# 1393 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1394 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1397 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1398 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1399 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1400 "data/maps/Colchis/scripts.pory"
	closemessage
# 1403 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1404 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1407 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1408 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1409 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1412 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1413 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1414 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1416 "data/maps/Colchis/scripts.pory"
	closemessage
# 1420 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonExit
# 1421 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_JasonPrisonExit
# 1422 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_PlayerPrisonExit
# 1423 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1425 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1433 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1434 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1437 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1438 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1439 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1441 "data/maps/Colchis/scripts.pory"
	closemessage
# 1444 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1445 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1448 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1449 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1450 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1451 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1452 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1455 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1456 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 0
# 1457 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1458 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 0
# 1462 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1463 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1466 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1467 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1468 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1471 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1472 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1473 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1476 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1477 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1480 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1481 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1482 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1484 "data/maps/Colchis/scripts.pory"
	closemessage
# 1487 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1488 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1491 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1492 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1494 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1495 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1497 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1498 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1500 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1501 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1502 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1505 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1506 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1507 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1508 "data/maps/Colchis/scripts.pory"
	closemessage
# 1511 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1512 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1515 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1516 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1519 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1522 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1523 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1524 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1525 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1527 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1528 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1529 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1530 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1531 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_LugiaTest::
# 1537 "data/maps/Colchis/scripts.pory"
	lockall
# 1538 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1539 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1540 "data/maps/Colchis/scripts.pory"
	closemessage
# 1541 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_Lugia::
# 1546 "data/maps/Colchis/scripts.pory"
	lockall
# 1547 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1548 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 1549 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1550 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_LUGIA
# 1551 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1552 "data/maps/Colchis/scripts.pory"
	setwildbattle SPECIES_LUGIA, 18
# 1553 "data/maps/Colchis/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1554 "data/maps/Colchis/scripts.pory"
	waitstate
# 1555 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1556 "data/maps/Colchis/scripts.pory"
	removeobject 1
# 1557 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTriggerA::
# 1563 "data/maps/Colchis/scripts.pory"
	lockall
# 1564 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 0
# 1565 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTriggerB::
# 1569 "data/maps/Colchis/scripts.pory"
	lockall
# 1570 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 1
# 1571 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTrigger::
# 1576 "data/maps/Colchis/scripts.pory"
	lockall
# 1579 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1580 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1581 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1582 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1583 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1584 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1587 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_4
Colchis_Script_SanctumTrigger_3:
# 1591 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 12
# 1593 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerEndIntro
# 1595 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_7
# 1614 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_8
# 1636 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1637 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1638 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
# 1639 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
Colchis_Script_SanctumTrigger_1:
# 1642 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_SanctumTrigger_2:
# 1588 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_4:
# 1587 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_2
	goto Colchis_Script_SanctumTrigger_3

Colchis_Script_SanctumTrigger_7:
# 1598 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1601 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1605 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_8:
# 1615 "data/maps/Colchis/scripts.pory"
	closemessage
# 1617 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1618 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumTrigger_12
# 1623 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1624 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1626 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1627 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumWilds, MSGBOX_DEFAULT
# 1628 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1633 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_12:
# 1620 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Exeunt
	goto Colchis_Script_SanctumTrigger_1


Colchis_Script_SanctumTriggerReturn::
# 1647 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1648 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger1, MSGBOX_DEFAULT
# 1649 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1651 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1652 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger1, MSGBOX_DEFAULT
# 1653 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1655 "data/maps/Colchis/scripts.pory"
	closemessage
# 1658 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1659 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_SanctumTriggerEndIntro::
# 1667 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1668 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1669 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumTriggerMedeaExit::
# 1674 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1675 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger2, MSGBOX_DEFAULT
# 1676 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1677 "data/maps/Colchis/scripts.pory"
	closemessage
# 1678 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTriggerMedeaExit_2
# 1681 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3B
Colchis_Script_SanctumTriggerMedeaExit_1:
# 1683 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumTriggerMedeaExit_2:
# 1679 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3A
	goto Colchis_Script_SanctumTriggerMedeaExit_1


Colchis_Script_LugiaChaseTrigger::
# 1688 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1689 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaChaseTrigger_2
Colchis_Script_LugiaChaseTrigger_1:
	end

Colchis_Script_LugiaChaseTrigger_2:
# 1690 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	goto Colchis_Script_LugiaChaseTrigger_1


Colchis_Script_LugiaWanderTrigger::
# 1696 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1697 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaWanderTrigger_2
Colchis_Script_LugiaWanderTrigger_1:
	end

Colchis_Script_LugiaWanderTrigger_2:
# 1698 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	goto Colchis_Script_LugiaWanderTrigger_1


Colchis_Script_ShinyMareep::
# 1704 "data/maps/Colchis/scripts.pory"
	lockall
# 1705 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1706 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 1707 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1708 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1709 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1710 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1711 "data/maps/Colchis/scripts.pory"
	waitstate
# 1712 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1713 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1714 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumApproachJason::
# 1719 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumApproachJason_2
# 1722 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3B
Colchis_Script_SanctumApproachJason_1:
# 1724 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1726 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1727 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumApproachJason_2:
# 1720 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3A
	goto Colchis_Script_SanctumApproachJason_1


Colchis_Script_SanctumJasonBattle::
# 1733 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1734 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1736 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1737 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger3, MSGBOX_DEFAULT
# 1738 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1739 "data/maps/Colchis/scripts.pory"
	closemessage
# 1741 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_JASON, Colchis_Text_JasonLost
# 1743 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1744 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPost, MSGBOX_DEFAULT
# 1745 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumMedeaReturn::
# 1752 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1753 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1754 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1756 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1757 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1758 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1761 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1762 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumMedeaReturn_Text_0, MSGBOX_DEFAULT
# 1763 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1764 "data/maps/Colchis/scripts.pory"
	closemessage
# 1767 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn
# 1768 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1771 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1772 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn1, MSGBOX_DEFAULT
# 1773 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1774 "data/maps/Colchis/scripts.pory"
	closemessage
# 1777 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumMedeaReturn_2
# 1780 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2B
Colchis_Script_SanctumMedeaReturn_1:
# 1782 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1784 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1785 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1788 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1789 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn2, MSGBOX_DEFAULT
# 1790 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1791 "data/maps/Colchis/scripts.pory"
	closemessage
# 1796 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1797 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn1, MSGBOX_DEFAULT
# 1798 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1802 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumMedeaReturn_6
Colchis_Script_SanctumMedeaReturn_5:
# 1812 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	return

Colchis_Script_SanctumMedeaReturn_2:
# 1778 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2A
	goto Colchis_Script_SanctumMedeaReturn_1

Colchis_Script_SanctumMedeaReturn_6:
# 1803 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1804 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1805 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1806 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn2, MSGBOX_DEFAULT
# 1807 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1808 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1809 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_SanctumMedeaReturn_5


Colchis_Script_SanctumJasonCheckMareep::
# 1819 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, IsShinyMareepInParty
# 1821 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_2
# 1826 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1827 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonGiveMeMareep, MSGBOX_DEFAULT
# 1828 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1830 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GiveJasonMareep, MSGBOX_YESNO
# 1832 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_5
# 1836 "data/maps/Colchis/scripts.pory"
	special ChoosePartyMon
# 1837 "data/maps/Colchis/scripts.pory"
	waitstate
# 1839 "data/maps/Colchis/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_8
# 1843 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1845 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, SPECIES_MAREEP
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_11
# 1849 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonIsShiny
# 1851 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_14
# 1855 "data/maps/Colchis/scripts.pory"
	special BufferMonNickname
# 1856 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GaveShinyMareep, MSGBOX_DEFAULT
# 1857 "data/maps/Colchis/scripts.pory"
	closemessage
# 1858 "data/maps/Colchis/scripts.pory"
	special ReleaseChosenMon
# 1860 "data/maps/Colchis/scripts.pory"
	setflag FLAG_JASON_HAS_SHINYMAREEP
Colchis_Script_SanctumJasonCheckMareep_1:
	return

Colchis_Script_SanctumJasonCheckMareep_2:
# 1822 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_5:
# 1833 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_8:
# 1840 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_11:
# 1846 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_14:
# 1852 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1


Colchis_Script_SanctumJasonMareep::
# 1873 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumApproachJason
# 1876 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	return


Colchis_Script_Exeunt::
# 1883 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 14
# 1885 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_Exeunt
# 1886 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_Exeunt
# 1887 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_Exeunt
# 1888 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1890 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_BIG_ISLAND_N, 31, 37
	end


Colchis_Script_SetupEscapeFromColchis::
# 1896 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1897 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumDepart, MSGBOX_DEFAULT
# 1898 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1899 "data/maps/Colchis/scripts.pory"
	closemessage
# 1902 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAndMedeaExeunt
# 1903 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_JasonAndMedeaExeunt
# 1904 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1908 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 14, 0
# 1909 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_INVISIBLE
# 1911 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 15, 0
# 1912 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 1914 "data/maps/Colchis/scripts.pory"
	hideobjectat 54, MAP_COLCHIS
# 1915 "data/maps/Colchis/scripts.pory"
	hideobjectat 4, MAP_COLCHIS
# 1917 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1918 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1921 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_FORCED_BATTLE
# 1924 "data/maps/Colchis/scripts.pory"
	releaseall
	end


# 1930 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 1931 "data/maps/Colchis/scripts.pory"
	walk_up
# 1931 "data/maps/Colchis/scripts.pory"
	walk_up
# 1931 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1934 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 1935 "data/maps/Colchis/scripts.pory"
	walk_down
# 1935 "data/maps/Colchis/scripts.pory"
	walk_down
# 1935 "data/maps/Colchis/scripts.pory"
	walk_down
# 1935 "data/maps/Colchis/scripts.pory"
	walk_down
# 1935 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1938 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 1939 "data/maps/Colchis/scripts.pory"
	walk_up
# 1939 "data/maps/Colchis/scripts.pory"
	walk_up
# 1939 "data/maps/Colchis/scripts.pory"
	walk_up
# 1939 "data/maps/Colchis/scripts.pory"
	walk_up
# 1939 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1942 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitA:
# 1943 "data/maps/Colchis/scripts.pory"
	walk_up
# 1943 "data/maps/Colchis/scripts.pory"
	walk_up
# 1943 "data/maps/Colchis/scripts.pory"
	walk_up
# 1943 "data/maps/Colchis/scripts.pory"
	walk_up
# 1943 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1946 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitB:
# 1947 "data/maps/Colchis/scripts.pory"
	walk_down
# 1947 "data/maps/Colchis/scripts.pory"
	walk_down
# 1947 "data/maps/Colchis/scripts.pory"
	walk_down
# 1947 "data/maps/Colchis/scripts.pory"
	walk_down
# 1947 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1950 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1951 "data/maps/Colchis/scripts.pory"
	walk_up
# 1952 "data/maps/Colchis/scripts.pory"
	walk_right
# 1952 "data/maps/Colchis/scripts.pory"
	walk_right
# 1952 "data/maps/Colchis/scripts.pory"
	walk_right
# 1952 "data/maps/Colchis/scripts.pory"
	walk_right
# 1952 "data/maps/Colchis/scripts.pory"
	walk_right
# 1953 "data/maps/Colchis/scripts.pory"
	walk_up
# 1953 "data/maps/Colchis/scripts.pory"
	walk_up
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1954 "data/maps/Colchis/scripts.pory"
	walk_right
# 1955 "data/maps/Colchis/scripts.pory"
	walk_up
# 1955 "data/maps/Colchis/scripts.pory"
	walk_up
# 1955 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1958 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 1959 "data/maps/Colchis/scripts.pory"
	walk_up
# 1959 "data/maps/Colchis/scripts.pory"
	walk_up
# 1959 "data/maps/Colchis/scripts.pory"
	walk_up
# 1959 "data/maps/Colchis/scripts.pory"
	walk_up
# 1959 "data/maps/Colchis/scripts.pory"
	walk_up
# 1959 "data/maps/Colchis/scripts.pory"
	walk_up
# 1959 "data/maps/Colchis/scripts.pory"
	walk_up
# 1959 "data/maps/Colchis/scripts.pory"
	walk_up
# 1959 "data/maps/Colchis/scripts.pory"
	walk_up
# 1959 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1962 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 1963 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1966 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 1967 "data/maps/Colchis/scripts.pory"
	face_right
# 1968 "data/maps/Colchis/scripts.pory"
	face_up
# 1969 "data/maps/Colchis/scripts.pory"
	face_left
# 1970 "data/maps/Colchis/scripts.pory"
	face_down
# 1971 "data/maps/Colchis/scripts.pory"
	face_right
# 1972 "data/maps/Colchis/scripts.pory"
	face_up
# 1973 "data/maps/Colchis/scripts.pory"
	face_left
# 1974 "data/maps/Colchis/scripts.pory"
	face_down
# 1975 "data/maps/Colchis/scripts.pory"
	face_right
# 1976 "data/maps/Colchis/scripts.pory"
	face_up
# 1977 "data/maps/Colchis/scripts.pory"
	face_left
# 1978 "data/maps/Colchis/scripts.pory"
	face_down
# 1979 "data/maps/Colchis/scripts.pory"
	face_right
# 1980 "data/maps/Colchis/scripts.pory"
	face_up
# 1981 "data/maps/Colchis/scripts.pory"
	face_left
# 1982 "data/maps/Colchis/scripts.pory"
	face_down
# 1983 "data/maps/Colchis/scripts.pory"
	face_right
# 1984 "data/maps/Colchis/scripts.pory"
	face_up
# 1985 "data/maps/Colchis/scripts.pory"
	face_left
# 1986 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1989 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 1990 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1990 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1991 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1994 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 1995 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1995 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1996 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1999 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 2000 "data/maps/Colchis/scripts.pory"
	walk_left
# 2001 "data/maps/Colchis/scripts.pory"
	walk_up
# 2001 "data/maps/Colchis/scripts.pory"
	walk_up
# 2002 "data/maps/Colchis/scripts.pory"
	walk_right
# 2002 "data/maps/Colchis/scripts.pory"
	walk_right
# 2003 "data/maps/Colchis/scripts.pory"
	walk_down
# 2003 "data/maps/Colchis/scripts.pory"
	walk_down
# 2004 "data/maps/Colchis/scripts.pory"
	walk_left
# 2005 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2008 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 2009 "data/maps/Colchis/scripts.pory"
	walk_left
# 2010 "data/maps/Colchis/scripts.pory"
	walk_up
# 2010 "data/maps/Colchis/scripts.pory"
	walk_up
# 2011 "data/maps/Colchis/scripts.pory"
	walk_right
# 2011 "data/maps/Colchis/scripts.pory"
	walk_right
# 2012 "data/maps/Colchis/scripts.pory"
	walk_down
# 2012 "data/maps/Colchis/scripts.pory"
	walk_down
# 2013 "data/maps/Colchis/scripts.pory"
	walk_left
# 2014 "data/maps/Colchis/scripts.pory"
	face_down
# 2015 "data/maps/Colchis/scripts.pory"
	walk_left
# 2016 "data/maps/Colchis/scripts.pory"
	walk_up
# 2016 "data/maps/Colchis/scripts.pory"
	walk_up
# 2017 "data/maps/Colchis/scripts.pory"
	walk_right
# 2017 "data/maps/Colchis/scripts.pory"
	walk_right
# 2018 "data/maps/Colchis/scripts.pory"
	walk_down
# 2018 "data/maps/Colchis/scripts.pory"
	walk_down
# 2019 "data/maps/Colchis/scripts.pory"
	walk_left
# 2020 "data/maps/Colchis/scripts.pory"
	face_down
# 2021 "data/maps/Colchis/scripts.pory"
	walk_left
# 2022 "data/maps/Colchis/scripts.pory"
	walk_up
# 2022 "data/maps/Colchis/scripts.pory"
	walk_up
# 2023 "data/maps/Colchis/scripts.pory"
	walk_right
# 2023 "data/maps/Colchis/scripts.pory"
	walk_right
# 2024 "data/maps/Colchis/scripts.pory"
	walk_down
# 2024 "data/maps/Colchis/scripts.pory"
	walk_down
# 2025 "data/maps/Colchis/scripts.pory"
	walk_left
# 2026 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2029 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 2030 "data/maps/Colchis/scripts.pory"
	walk_down
# 2030 "data/maps/Colchis/scripts.pory"
	walk_down
# 2030 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2033 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 2034 "data/maps/Colchis/scripts.pory"
	walk_right
# 2034 "data/maps/Colchis/scripts.pory"
	walk_right
# 2035 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2038 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 2039 "data/maps/Colchis/scripts.pory"
	walk_left
# 2039 "data/maps/Colchis/scripts.pory"
	walk_left
# 2040 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2043 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 2044 "data/maps/Colchis/scripts.pory"
	walk_down
# 2045 "data/maps/Colchis/scripts.pory"
	face_left
# 2046 "data/maps/Colchis/scripts.pory"
	face_up
# 2047 "data/maps/Colchis/scripts.pory"
	face_right
# 2048 "data/maps/Colchis/scripts.pory"
	face_down
# 2049 "data/maps/Colchis/scripts.pory"
	walk_down
# 2050 "data/maps/Colchis/scripts.pory"
	face_left
# 2051 "data/maps/Colchis/scripts.pory"
	face_up
# 2052 "data/maps/Colchis/scripts.pory"
	face_right
# 2053 "data/maps/Colchis/scripts.pory"
	face_down
# 2054 "data/maps/Colchis/scripts.pory"
	walk_down
# 2055 "data/maps/Colchis/scripts.pory"
	face_left
# 2056 "data/maps/Colchis/scripts.pory"
	face_up
# 2057 "data/maps/Colchis/scripts.pory"
	face_right
# 2058 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2061 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 2062 "data/maps/Colchis/scripts.pory"
	walk_right
# 2063 "data/maps/Colchis/scripts.pory"
	walk_up
# 2064 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2065 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2068 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 2069 "data/maps/Colchis/scripts.pory"
	walk_left
# 2070 "data/maps/Colchis/scripts.pory"
	walk_up
# 2071 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2072 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2075 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 2076 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2077 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2080 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 2081 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2082 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2085 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 2086 "data/maps/Colchis/scripts.pory"
	walk_left
# 2087 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2090 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 2091 "data/maps/Colchis/scripts.pory"
	walk_right
# 2092 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2095 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 2096 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2097 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2100 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 2101 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2102 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2105 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 2106 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2109 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 2110 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 2113 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 2114 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 2118 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 2119 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 2122 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 2123 "data/maps/Colchis/scripts.pory"
	walk_up
# 2123 "data/maps/Colchis/scripts.pory"
	walk_up
# 2123 "data/maps/Colchis/scripts.pory"
	walk_up
# 2123 "data/maps/Colchis/scripts.pory"
	walk_up
# 2123 "data/maps/Colchis/scripts.pory"
	walk_up
# 2123 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2126 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 2127 "data/maps/Colchis/scripts.pory"
	walk_right
# 2127 "data/maps/Colchis/scripts.pory"
	walk_right
# 2127 "data/maps/Colchis/scripts.pory"
	walk_right
# 2127 "data/maps/Colchis/scripts.pory"
	walk_right
# 2127 "data/maps/Colchis/scripts.pory"
	walk_right
# 2127 "data/maps/Colchis/scripts.pory"
	walk_right
# 2127 "data/maps/Colchis/scripts.pory"
	walk_right
# 2127 "data/maps/Colchis/scripts.pory"
	walk_right
# 2128 "data/maps/Colchis/scripts.pory"
	walk_down
# 2128 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2131 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 2132 "data/maps/Colchis/scripts.pory"
	walk_right
# 2132 "data/maps/Colchis/scripts.pory"
	walk_right
# 2132 "data/maps/Colchis/scripts.pory"
	walk_right
# 2132 "data/maps/Colchis/scripts.pory"
	walk_right
# 2132 "data/maps/Colchis/scripts.pory"
	walk_right
# 2132 "data/maps/Colchis/scripts.pory"
	walk_right
# 2132 "data/maps/Colchis/scripts.pory"
	walk_right
# 2133 "data/maps/Colchis/scripts.pory"
	walk_down
# 2133 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2136 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 2137 "data/maps/Colchis/scripts.pory"
	walk_right
# 2137 "data/maps/Colchis/scripts.pory"
	walk_right
# 2137 "data/maps/Colchis/scripts.pory"
	walk_right
# 2137 "data/maps/Colchis/scripts.pory"
	walk_right
# 2137 "data/maps/Colchis/scripts.pory"
	walk_right
# 2137 "data/maps/Colchis/scripts.pory"
	walk_right
# 2138 "data/maps/Colchis/scripts.pory"
	walk_down
# 2138 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2141 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 2142 "data/maps/Colchis/scripts.pory"
	walk_right
# 2142 "data/maps/Colchis/scripts.pory"
	walk_right
# 2142 "data/maps/Colchis/scripts.pory"
	walk_right
# 2142 "data/maps/Colchis/scripts.pory"
	walk_right
# 2142 "data/maps/Colchis/scripts.pory"
	walk_right
# 2142 "data/maps/Colchis/scripts.pory"
	walk_right
# 2142 "data/maps/Colchis/scripts.pory"
	walk_right
# 2142 "data/maps/Colchis/scripts.pory"
	walk_right
# 2143 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2146 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 2147 "data/maps/Colchis/scripts.pory"
	walk_right
# 2147 "data/maps/Colchis/scripts.pory"
	walk_right
# 2147 "data/maps/Colchis/scripts.pory"
	walk_right
# 2147 "data/maps/Colchis/scripts.pory"
	walk_right
# 2147 "data/maps/Colchis/scripts.pory"
	walk_right
# 2147 "data/maps/Colchis/scripts.pory"
	walk_right
# 2147 "data/maps/Colchis/scripts.pory"
	walk_right
# 2148 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2151 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 2152 "data/maps/Colchis/scripts.pory"
	walk_right
# 2152 "data/maps/Colchis/scripts.pory"
	walk_right
# 2152 "data/maps/Colchis/scripts.pory"
	walk_right
# 2152 "data/maps/Colchis/scripts.pory"
	walk_right
# 2152 "data/maps/Colchis/scripts.pory"
	walk_right
# 2152 "data/maps/Colchis/scripts.pory"
	walk_right
# 2153 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2156 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2157 "data/maps/Colchis/scripts.pory"
	walk_up
# 2158 "data/maps/Colchis/scripts.pory"
	walk_right
# 2158 "data/maps/Colchis/scripts.pory"
	walk_right
# 2158 "data/maps/Colchis/scripts.pory"
	walk_right
# 2158 "data/maps/Colchis/scripts.pory"
	walk_right
# 2158 "data/maps/Colchis/scripts.pory"
	walk_right
# 2158 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2161 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 2162 "data/maps/Colchis/scripts.pory"
	walk_right
# 2162 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2165 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 2166 "data/maps/Colchis/scripts.pory"
	walk_up
# 2166 "data/maps/Colchis/scripts.pory"
	walk_up
# 2166 "data/maps/Colchis/scripts.pory"
	walk_up
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2167 "data/maps/Colchis/scripts.pory"
	walk_right
# 2168 "data/maps/Colchis/scripts.pory"
	walk_up
# 2168 "data/maps/Colchis/scripts.pory"
	walk_up
# 2168 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2171 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 2172 "data/maps/Colchis/scripts.pory"
	walk_up
# 2172 "data/maps/Colchis/scripts.pory"
	walk_up
# 2172 "data/maps/Colchis/scripts.pory"
	walk_up
# 2172 "data/maps/Colchis/scripts.pory"
	walk_up
# 2172 "data/maps/Colchis/scripts.pory"
	walk_up
# 2172 "data/maps/Colchis/scripts.pory"
	walk_up
# 2172 "data/maps/Colchis/scripts.pory"
	walk_up
# 2172 "data/maps/Colchis/scripts.pory"
	walk_up
# 2172 "data/maps/Colchis/scripts.pory"
	walk_up
# 2172 "data/maps/Colchis/scripts.pory"
	walk_up
# 2172 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2175 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 2176 "data/maps/Colchis/scripts.pory"
	walk_up
# 2176 "data/maps/Colchis/scripts.pory"
	walk_up
# 2176 "data/maps/Colchis/scripts.pory"
	walk_up
# 2176 "data/maps/Colchis/scripts.pory"
	walk_up
# 2176 "data/maps/Colchis/scripts.pory"
	walk_up
# 2176 "data/maps/Colchis/scripts.pory"
	walk_up
# 2176 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2179 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 2180 "data/maps/Colchis/scripts.pory"
	walk_left
# 2181 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2184 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 2185 "data/maps/Colchis/scripts.pory"
	walk_up
# 2186 "data/maps/Colchis/scripts.pory"
	walk_right
# 2187 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2191 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 2192 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2195 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 2196 "data/maps/Colchis/scripts.pory"
	walk_right
# 2196 "data/maps/Colchis/scripts.pory"
	walk_right
# 2197 "data/maps/Colchis/scripts.pory"
	walk_down
# 2198 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2201 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 2202 "data/maps/Colchis/scripts.pory"
	walk_left
# 2203 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2206 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 2207 "data/maps/Colchis/scripts.pory"
	walk_right
# 2208 "data/maps/Colchis/scripts.pory"
	walk_up
# 2209 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2212 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 2213 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_up
# 2215 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2218 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 2219 "data/maps/Colchis/scripts.pory"
	walk_down
# 2219 "data/maps/Colchis/scripts.pory"
	walk_down
# 2219 "data/maps/Colchis/scripts.pory"
	walk_down
# 2219 "data/maps/Colchis/scripts.pory"
	walk_down
# 2219 "data/maps/Colchis/scripts.pory"
	walk_down
# 2219 "data/maps/Colchis/scripts.pory"
	walk_down
# 2219 "data/maps/Colchis/scripts.pory"
	walk_down
# 2219 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2222 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 2223 "data/maps/Colchis/scripts.pory"
	walk_up
# 2223 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2226 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonApproachPlayer:
# 2227 "data/maps/Colchis/scripts.pory"
	walk_up
# 2227 "data/maps/Colchis/scripts.pory"
	walk_up
# 2227 "data/maps/Colchis/scripts.pory"
	walk_up
# 2227 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2230 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonExit:
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2233 "data/maps/Colchis/scripts.pory"
	walk_down
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2235 "data/maps/Colchis/scripts.pory"
	walk_down
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2239 "data/maps/Colchis/scripts.pory"
Common_Movement_JasonPrisonExit:
# 2240 "data/maps/Colchis/scripts.pory"
	walk_down
# 2240 "data/maps/Colchis/scripts.pory"
	walk_down
# 2240 "data/maps/Colchis/scripts.pory"
	walk_down
# 2240 "data/maps/Colchis/scripts.pory"
	walk_down
# 2240 "data/maps/Colchis/scripts.pory"
	walk_down
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2241 "data/maps/Colchis/scripts.pory"
	walk_left
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_down
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2243 "data/maps/Colchis/scripts.pory"
	walk_right
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2244 "data/maps/Colchis/scripts.pory"
	walk_down
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
# 2245 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2248 "data/maps/Colchis/scripts.pory"
Common_Movement_PlayerPrisonExit:
# 2249 "data/maps/Colchis/scripts.pory"
	walk_down
# 2249 "data/maps/Colchis/scripts.pory"
	walk_down
# 2249 "data/maps/Colchis/scripts.pory"
	walk_down
# 2249 "data/maps/Colchis/scripts.pory"
	walk_down
# 2249 "data/maps/Colchis/scripts.pory"
	walk_down
# 2249 "data/maps/Colchis/scripts.pory"
	walk_down
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2250 "data/maps/Colchis/scripts.pory"
	walk_left
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2251 "data/maps/Colchis/scripts.pory"
	walk_down
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2252 "data/maps/Colchis/scripts.pory"
	walk_right
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2253 "data/maps/Colchis/scripts.pory"
	walk_down
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
# 2254 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2257 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 2258 "data/maps/Colchis/scripts.pory"
	walk_left
# 2258 "data/maps/Colchis/scripts.pory"
	walk_left
# 2258 "data/maps/Colchis/scripts.pory"
	walk_left
# 2259 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2262 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 2263 "data/maps/Colchis/scripts.pory"
	walk_down
# 2264 "data/maps/Colchis/scripts.pory"
	walk_right
# 2264 "data/maps/Colchis/scripts.pory"
	walk_right
# 2264 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2267 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 2268 "data/maps/Colchis/scripts.pory"
	walk_up
# 2268 "data/maps/Colchis/scripts.pory"
	walk_up
# 2268 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2271 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 2272 "data/maps/Colchis/scripts.pory"
	walk_up
# 2272 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2275 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3A:
# 2276 "data/maps/Colchis/scripts.pory"
	walk_up
# 2276 "data/maps/Colchis/scripts.pory"
	walk_up
# 2277 "data/maps/Colchis/scripts.pory"
	walk_right
# 2277 "data/maps/Colchis/scripts.pory"
	walk_right
# 2278 "data/maps/Colchis/scripts.pory"
	walk_up
# 2278 "data/maps/Colchis/scripts.pory"
	walk_up
# 2278 "data/maps/Colchis/scripts.pory"
	walk_up
# 2278 "data/maps/Colchis/scripts.pory"
	walk_up
# 2278 "data/maps/Colchis/scripts.pory"
	walk_up
# 2278 "data/maps/Colchis/scripts.pory"
	walk_up
# 2278 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2281 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3B:
# 2282 "data/maps/Colchis/scripts.pory"
	walk_up
# 2282 "data/maps/Colchis/scripts.pory"
	walk_up
# 2283 "data/maps/Colchis/scripts.pory"
	walk_right
# 2284 "data/maps/Colchis/scripts.pory"
	walk_up
# 2284 "data/maps/Colchis/scripts.pory"
	walk_up
# 2284 "data/maps/Colchis/scripts.pory"
	walk_up
# 2284 "data/maps/Colchis/scripts.pory"
	walk_up
# 2284 "data/maps/Colchis/scripts.pory"
	walk_up
# 2284 "data/maps/Colchis/scripts.pory"
	walk_up
# 2284 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2287 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3A:
# 2288 "data/maps/Colchis/scripts.pory"
	walk_down
# 2289 "data/maps/Colchis/scripts.pory"
	walk_right
# 2290 "data/maps/Colchis/scripts.pory"
	walk_down
# 2290 "data/maps/Colchis/scripts.pory"
	walk_down
# 2291 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2294 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3B:
# 2295 "data/maps/Colchis/scripts.pory"
	walk_down
# 2295 "data/maps/Colchis/scripts.pory"
	walk_down
# 2295 "data/maps/Colchis/scripts.pory"
	walk_down
# 2296 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2299 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn:
# 2300 "data/maps/Colchis/scripts.pory"
	walk_down
# 2300 "data/maps/Colchis/scripts.pory"
	walk_down
# 2300 "data/maps/Colchis/scripts.pory"
	walk_down
# 2300 "data/maps/Colchis/scripts.pory"
	walk_down
# 2300 "data/maps/Colchis/scripts.pory"
	walk_down
# 2300 "data/maps/Colchis/scripts.pory"
	walk_down
# 2300 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2303 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2A:
# 2304 "data/maps/Colchis/scripts.pory"
	walk_down
# 2305 "data/maps/Colchis/scripts.pory"
	walk_left
# 2305 "data/maps/Colchis/scripts.pory"
	walk_left
# 2306 "data/maps/Colchis/scripts.pory"
	walk_down
# 2307 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2310 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2B:
# 2311 "data/maps/Colchis/scripts.pory"
	walk_down
# 2312 "data/maps/Colchis/scripts.pory"
	walk_left
# 2313 "data/maps/Colchis/scripts.pory"
	walk_down
# 2314 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2317 "data/maps/Colchis/scripts.pory"
Colchis_Movement_Exeunt:
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2320 "data/maps/Colchis/scripts.pory"
	walk_left
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
# 2321 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2324 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAndMedeaExeunt:
# 2325 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_right
# 2326 "data/maps/Colchis/scripts.pory"
	walk_right
# 2326 "data/maps/Colchis/scripts.pory"
	walk_right
# 2326 "data/maps/Colchis/scripts.pory"
	walk_right
# 2326 "data/maps/Colchis/scripts.pory"
	walk_right
# 2326 "data/maps/Colchis/scripts.pory"
	walk_right
# 2326 "data/maps/Colchis/scripts.pory"
	walk_right
# 2326 "data/maps/Colchis/scripts.pory"
	walk_right
# 2326 "data/maps/Colchis/scripts.pory"
	walk_right
# 2326 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1539 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Script_SanctumMedeaReturn_Text_0:
# 1762 "data/maps/Colchis/scripts.pory"
	.string "OIMOIAY!\nOOIIMMOOIIAAYY!!$"

Colchis_Text_JasonIntro1::
# 2329 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 2333 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 2337 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 2341 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 2345 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 2349 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 2354 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 2359 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 2363 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 2367 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 2371 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 2380 "data/maps/Colchis/scripts.pory"
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
# 2385 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 2394 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 2398 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 2407 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 2413 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 2426 "data/maps/Colchis/scripts.pory"
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
# 2438 "data/maps/Colchis/scripts.pory"
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
# 2442 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 2446 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 2450 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 2454 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 2458 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 2462 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 2471 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 2475 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 2493 "data/maps/Colchis/scripts.pory"
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
# 2497 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 2502 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 2506 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 2510 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 2517 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 2521 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 2547 "data/maps/Colchis/scripts.pory"
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
# 2555 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 2559 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 2572 "data/maps/Colchis/scripts.pory"
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
# 2576 "data/maps/Colchis/scripts.pory"
	.string "Do not interrupt my private time with\n"
	.string "Medea 'till you bring shiny Mareep.$"

Colchis_Text_MedeaSanctumTrigger1::
# 2581 "data/maps/Colchis/scripts.pory"
	.string "Ememberray, ingbray onay armhay otay\n"
	.string "Ugialay.$"

Colchis_Text_JasonSanctumTrigger2::
# 2585 "data/maps/Colchis/scripts.pory"
	.string "Have you returned bringing Shiny\n"
	.string "Mareep?$"

Colchis_Text_MedeaSanctumTrigger2::
# 2590 "data/maps/Colchis/scripts.pory"
	.string "Ymay oughtsthay etraybay emay.\n"
	.string "Excuseay emay Asonjay, againstay ymay\l"
	.string "ownay adviceay Iay ustmay aketay\l"
	.string "eavelay ofay ouyay anday eesay atthay\l"
	.string "Ugialay isay afesay.$"

Colchis_Text_JasonSanctumTrigger3::
# 2594 "data/maps/Colchis/scripts.pory"
	.string "How could you fail? You only had one\n"
	.string "job! My quest has failed and it was all\l"
	.string "your fault! Now you will pay the price.\l"
	.string "Go Nosepass!$"

Colchis_Text_JasonLost::
# 2598 "data/maps/Colchis/scripts.pory"
	.string "I curse that day I saved you from the\n"
	.string "surf.$"

Colchis_Text_JasonPost::
# 2602 "data/maps/Colchis/scripts.pory"
	.string "The most wicked betrayal of all my\n"
	.string "life...$"

Colchis_Text_JasonGiveMeMareep::
# 2606 "data/maps/Colchis/scripts.pory"
	.string "I see that you have completed the\n"
	.string "quest. Give me shiny Mareep and let's be\l"
	.string "done.$"

Colchis_Text_GiveJasonMareep::
# 2610 "data/maps/Colchis/scripts.pory"
	.string "Will you give Jason shiny Mareep?$"

Colchis_Text_GaveShinyMareep::
# 2614 "data/maps/Colchis/scripts.pory"
	.string "You gave {STR_VAR_1} to Jason!\p"
	.string "Bye Bye {STR_VAR_1}!$"

Colchis_Text_CultistMPre::
# 2619 "data/maps/Colchis/scripts.pory"
	.string "Espassertray opstay! Allfay intoay\n"
	.string "othingnessnay$"

Colchis_Text_CultistMLost::
# 2624 "data/maps/Colchis/scripts.pory"
	.string "Ethay everlastingay arknessday\n"
	.string "overscay allay.$"

Colchis_Text_CultistMPost::
# 2629 "data/maps/Colchis/scripts.pory"
	.string "Ouyay aymay avehay onway utbay\n"
	.string "ou'llyay evernay escapeay.$"

Colchis_Text_MedeaSanctumReturn1::
# 2634 "data/maps/Colchis/scripts.pory"
	.string "Ouyay onstermay! Owhay ouldcay ouyay\n"
	.string "oday isthay otay emay?$"

Colchis_Text_MedeaSanctumReturn2::
# 2639 "data/maps/Colchis/scripts.pory"
	.string "Ymay ovelay, ehay ashay attackeday\n"
	.string "ymay Ugialay! Iay illway onay ongerlay\l"
	.string "elphay imhay eavelay Olchiscay.$"

Colchis_Text_JasonMedeaReturn1::
# 2643 "data/maps/Colchis/scripts.pory"
	.string "Please, do not cry beloved Medea. Lend\n"
	.string "love the power to hold back your tears.$"

Colchis_Text_JasonMedeaReturn2::
# 2647 "data/maps/Colchis/scripts.pory"
	.string "Hey, I apologize for Medea. I know she's\n"
	.string "acting up, but we're still cool. Give it\l"
	.string "some time I'll get her to cool down. When\l"
	.string "you get out meet me in Bulbus town and\l"
	.string "I'll repay you for shiny Mareep.$"

Colchis_Text_JasonSanctumWilds::
# 2651 "data/maps/Colchis/scripts.pory"
	.string "Alas! Medea! My quest for shiny Mareep\n"
	.string "has failed and now we're vagabonds.$"

Colchis_Text_JasonSanctumDepart::
# 2655 "data/maps/Colchis/scripts.pory"
	.string "Let us depart and leave this one\n"
	.string "behind.$"
