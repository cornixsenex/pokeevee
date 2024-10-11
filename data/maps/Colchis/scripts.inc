Colchis_MapScripts::
# 93 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 99 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 110 "data/maps/Colchis/scripts.pory"
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

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 112 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_TempScript_WarpSanctum
# 113 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_WarpSanctum::
# 122 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 123 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 34, 56
	end


Colchis_TempScript_SetupTestMedeaDance::
# 128 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 129 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 135 "data/maps/Colchis/scripts.pory"
	lockall
# 136 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 137 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SetupJail::
# 142 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 143 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 144 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
# 145 "data/maps/Colchis/scripts.pory"
	addobject 54
# 146 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 153 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 154 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 155 "data/maps/Colchis/scripts.pory"
	closemessage
# 156 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 164 "data/maps/Colchis/scripts.pory"
	lockall
# 166 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 168 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 169 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 170 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 171 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 172 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 173 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 176 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 177 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 178 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 181 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 182 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 183 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 188 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 189 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 190 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 193 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 194 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 195 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 196 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 197 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 198 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 199 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 200 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 201 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 202 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 203 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 204 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 205 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 206 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 207 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 208 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 209 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 212 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 213 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 214 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 215 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 216 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 217 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 218 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 219 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 220 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 221 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 222 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 223 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 224 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 227 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 228 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 229 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 232 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 233 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 234 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 238 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 239 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 240 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 241 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 242 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 243 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 244 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 245 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 246 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 247 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 249 "data/maps/Colchis/scripts.pory"
	closemessage
# 251 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 259 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 260 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 261 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 262 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 263 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 264 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 265 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 266 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 267 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 270 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 271 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 272 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 274 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 275 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 276 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 277 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 278 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 279 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 280 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 284 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 327 "data/maps/Colchis/scripts.pory"
	lockall
# 328 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 330 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 338 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 339 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 340 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 342 "data/maps/Colchis/scripts.pory"
	addobject 23
# 343 "data/maps/Colchis/scripts.pory"
	addobject 24
# 345 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 346 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 350 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 351 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 353 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 354 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 355 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_MedeaDance::
# 377 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 378 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 379 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 384 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 385 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 386 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 387 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 388 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 389 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 390 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 391 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 392 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 393 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 394 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 395 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 396 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 397 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 398 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 399 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 400 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 401 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 410 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 411 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 412 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 413 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 414 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 415 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 416 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 418 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 420 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 421 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 422 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 424 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 426 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 427 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 430 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 436 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 437 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 438 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 439 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 440 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 441 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 442 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 444 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 446 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 447 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 448 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 449 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 450 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 452 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 454 "data/maps/Colchis/scripts.pory"
	delay 25
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
	waitmovement 16
# 469 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 470 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 471 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 472 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 473 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 474 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 475 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 477 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 479 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 480 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 481 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 482 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 483 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 484 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 486 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 488 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 489 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 490 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 491 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 492 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 494 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 496 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 497 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 498 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 499 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 500 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 502 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 504 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 505 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 506 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 507 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 508 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 510 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 512 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 513 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 514 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 515 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 516 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 518 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 524 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 525 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 526 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 527 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 528 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 529 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 530 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 532 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 534 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 535 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 536 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 537 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 538 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 540 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 546 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 552 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 553 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 554 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 555 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 556 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 557 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 558 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 560 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 565 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 572 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 573 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 574 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 575 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 576 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 577 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 579 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 585 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 588 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 597 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 598 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 599 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 600 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 601 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 602 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 603 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 605 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 607 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 608 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 609 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 610 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 611 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 612 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 613 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 615 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 620 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 624 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 625 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 626 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 627 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 628 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 629 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 630 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 632 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 634 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 635 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 636 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 637 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 638 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 639 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 640 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 642 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 644 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 648 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 649 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 650 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 651 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 652 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 653 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 654 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 656 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 658 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 659 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 660 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 661 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 662 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 663 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 664 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 666 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 668 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 672 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 673 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 674 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 675 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 676 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 677 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 678 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 680 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 682 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 683 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 684 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 685 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 686 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 687 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 688 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 690 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 692 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 702 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 703 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 704 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 705 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 706 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 707 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 708 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 709 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 711 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 713 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 715 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 716 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 717 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 718 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 719 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 720 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 721 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 722 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 724 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 726 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 728 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 729 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 730 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 731 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 732 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 733 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 734 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 735 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 737 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 739 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 746 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 747 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 748 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 749 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 750 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 751 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 752 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 753 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 755 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 756 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 758 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 759 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 762 "data/maps/Colchis/scripts.pory"
	delay 25
# 766 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 767 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 771 "data/maps/Colchis/scripts.pory"
	delay 25
# 773 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 774 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 778 "data/maps/Colchis/scripts.pory"
	delay 25
# 780 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 781 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 785 "data/maps/Colchis/scripts.pory"
	delay 25
# 787 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 788 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 789 "data/maps/Colchis/scripts.pory"
	delay 25
# 794 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 795 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 796 "data/maps/Colchis/scripts.pory"
	delay 25
# 798 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 799 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 800 "data/maps/Colchis/scripts.pory"
	delay 25
# 805 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 806 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 807 "data/maps/Colchis/scripts.pory"
	delay 25
# 809 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 810 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 811 "data/maps/Colchis/scripts.pory"
	delay 25
# 813 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 814 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 815 "data/maps/Colchis/scripts.pory"
	delay 25
# 817 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 818 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 819 "data/maps/Colchis/scripts.pory"
	delay 25
# 824 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 825 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 826 "data/maps/Colchis/scripts.pory"
	delay 25
# 828 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 829 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 830 "data/maps/Colchis/scripts.pory"
	delay 25
# 832 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 833 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 834 "data/maps/Colchis/scripts.pory"
	delay 25
# 836 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 837 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 838 "data/maps/Colchis/scripts.pory"
	delay 25
# 840 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 842 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 843 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 844 "data/maps/Colchis/scripts.pory"
	delay 25
# 849 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 850 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 851 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 852 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 853 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 854 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 855 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 856 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 858 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 869 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 870 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 871 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 872 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 873 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 874 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 875 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 876 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 877 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 882 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 883 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 884 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 885 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 886 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 887 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 888 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 889 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 890 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 895 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 896 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 897 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 898 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 899 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 900 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 901 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 902 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 903 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 908 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 909 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 910 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 911 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 912 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 913 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 914 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 915 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 916 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 921 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 922 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 923 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 924 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 925 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 926 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 927 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 928 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 929 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 934 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 935 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 936 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 937 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 938 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 939 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 940 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 941 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 942 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 947 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 948 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 949 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 950 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 951 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 952 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 953 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 954 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 955 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 960 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 961 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 962 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 963 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 964 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 965 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 966 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 967 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 968 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 973 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 974 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 975 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 976 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 977 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 978 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 979 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 980 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 981 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 983 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 984 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 985 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 986 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 987 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 988 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 989 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 990 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 991 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 993 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 994 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 995 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 996 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 997 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 998 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 999 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1001 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1004 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1005 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1006 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1007 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1009 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1010 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1011 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1016 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1017 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1019 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1021 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1028 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1029 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1030 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1031 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1032 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1033 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1034 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1035 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1040 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1041 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1042 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1043 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1044 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1045 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1046 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1047 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1048 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1049 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1050 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1051 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1052 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1053 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1054 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1055 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1056 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1061 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1062 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1063 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1064 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1065 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1066 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1067 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1071 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1072 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1073 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1074 "data/maps/Colchis/scripts.pory"
	waitmovement 13
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
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1129 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1130 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1131 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1136 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1137 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1138 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1139 "data/maps/Colchis/scripts.pory"
	closemessage
# 1141 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1145 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1146 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1147 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1148 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1149 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1151 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1152 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1153 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1155 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1156 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1157 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1158 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1167 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1168 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1169 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1174 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1175 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1176 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1183 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1184 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1185 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1190 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1191 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1192 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1201 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1202 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1203 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1204 "data/maps/Colchis/scripts.pory"
	closemessage
# 1207 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1208 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1209 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1218 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1219 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1220 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1225 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1226 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1227 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1230 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1231 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1232 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1233 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1234 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1238 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1239 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1240 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1244 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1245 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1246 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1248 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1249 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1250 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1254 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1255 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1257 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1258 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1264 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1265 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1266 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1267 "data/maps/Colchis/scripts.pory"
	closemessage
# 1270 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1271 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1274 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1275 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1283 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1289 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1290 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1291 "data/maps/Colchis/scripts.pory"
	closemessage
# 1292 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1295 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1296 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1299 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1300 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1301 "data/maps/Colchis/scripts.pory"
	closemessage
# 1302 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1305 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1306 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1307 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1308 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1311 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1312 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1313 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1314 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1315 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1318 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1319 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1320 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1321 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1322 "data/maps/Colchis/scripts.pory"
	delay 30
# 1323 "data/maps/Colchis/scripts.pory"
	waitse
# 1326 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonApproachPlayer
# 1327 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1330 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1331 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1332 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1335 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1336 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1337 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1340 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1341 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1342 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1345 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1346 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1347 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1350 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1351 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1352 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1354 "data/maps/Colchis/scripts.pory"
	closemessage
# 1357 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1358 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1361 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1362 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1363 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1364 "data/maps/Colchis/scripts.pory"
	closemessage
# 1367 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1368 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1371 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1372 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1373 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1376 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1377 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1378 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1380 "data/maps/Colchis/scripts.pory"
	closemessage
# 1384 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonExit
# 1385 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_JasonPrisonExit
# 1386 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_PlayerPrisonExit
# 1387 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1389 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1397 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1398 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1401 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1402 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1403 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1405 "data/maps/Colchis/scripts.pory"
	closemessage
# 1408 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1409 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1412 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1413 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1414 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1415 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1416 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1419 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1420 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 0
# 1421 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1422 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 0
# 1426 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1427 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1430 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1431 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1432 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1435 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1436 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1437 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1440 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1441 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1444 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1445 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1446 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1448 "data/maps/Colchis/scripts.pory"
	closemessage
# 1451 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1452 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1455 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1456 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1458 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1459 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1461 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1462 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1464 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1465 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1466 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1469 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1470 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1471 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1472 "data/maps/Colchis/scripts.pory"
	closemessage
# 1475 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1476 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1479 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1480 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1483 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1486 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1487 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1488 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1489 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1491 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1492 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1493 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1494 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
	end


Colchis_Script_LugiaTest::
# 1500 "data/maps/Colchis/scripts.pory"
	lockall
# 1501 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1502 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1503 "data/maps/Colchis/scripts.pory"
	closemessage
# 1504 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTrigger::
# 1510 "data/maps/Colchis/scripts.pory"
	lockall
# 1517 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1518 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1519 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1520 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1521 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1522 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1526 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_LugiaChaseTrigger::
# 1531 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1532 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	end


Colchis_Script_LugiaWanderTrigger::
# 1537 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1538 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	end


Colchis_Script_ShinyMareep::
# 1543 "data/maps/Colchis/scripts.pory"
	lockall
# 1544 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1545 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1546 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1547 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1548 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1549 "data/maps/Colchis/scripts.pory"
	waitstate
# 1550 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1551 "data/maps/Colchis/scripts.pory"
	releaseall
	end


# 1555 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 1556 "data/maps/Colchis/scripts.pory"
	walk_up
# 1556 "data/maps/Colchis/scripts.pory"
	walk_up
# 1556 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1559 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 1560 "data/maps/Colchis/scripts.pory"
	walk_down
# 1560 "data/maps/Colchis/scripts.pory"
	walk_down
# 1560 "data/maps/Colchis/scripts.pory"
	walk_down
# 1560 "data/maps/Colchis/scripts.pory"
	walk_down
# 1560 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1563 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 1564 "data/maps/Colchis/scripts.pory"
	walk_up
# 1564 "data/maps/Colchis/scripts.pory"
	walk_up
# 1564 "data/maps/Colchis/scripts.pory"
	walk_up
# 1564 "data/maps/Colchis/scripts.pory"
	walk_up
# 1564 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1567 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1568 "data/maps/Colchis/scripts.pory"
	walk_up
# 1569 "data/maps/Colchis/scripts.pory"
	walk_right
# 1569 "data/maps/Colchis/scripts.pory"
	walk_right
# 1569 "data/maps/Colchis/scripts.pory"
	walk_right
# 1569 "data/maps/Colchis/scripts.pory"
	walk_right
# 1569 "data/maps/Colchis/scripts.pory"
	walk_right
# 1570 "data/maps/Colchis/scripts.pory"
	walk_up
# 1570 "data/maps/Colchis/scripts.pory"
	walk_up
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1571 "data/maps/Colchis/scripts.pory"
	walk_right
# 1572 "data/maps/Colchis/scripts.pory"
	walk_up
# 1572 "data/maps/Colchis/scripts.pory"
	walk_up
# 1572 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1575 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 1576 "data/maps/Colchis/scripts.pory"
	walk_up
# 1576 "data/maps/Colchis/scripts.pory"
	walk_up
# 1576 "data/maps/Colchis/scripts.pory"
	walk_up
# 1576 "data/maps/Colchis/scripts.pory"
	walk_up
# 1576 "data/maps/Colchis/scripts.pory"
	walk_up
# 1576 "data/maps/Colchis/scripts.pory"
	walk_up
# 1576 "data/maps/Colchis/scripts.pory"
	walk_up
# 1576 "data/maps/Colchis/scripts.pory"
	walk_up
# 1576 "data/maps/Colchis/scripts.pory"
	walk_up
# 1576 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1579 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 1580 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1583 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 1584 "data/maps/Colchis/scripts.pory"
	face_right
# 1585 "data/maps/Colchis/scripts.pory"
	face_up
# 1586 "data/maps/Colchis/scripts.pory"
	face_left
# 1587 "data/maps/Colchis/scripts.pory"
	face_down
# 1588 "data/maps/Colchis/scripts.pory"
	face_right
# 1589 "data/maps/Colchis/scripts.pory"
	face_up
# 1590 "data/maps/Colchis/scripts.pory"
	face_left
# 1591 "data/maps/Colchis/scripts.pory"
	face_down
# 1592 "data/maps/Colchis/scripts.pory"
	face_right
# 1593 "data/maps/Colchis/scripts.pory"
	face_up
# 1594 "data/maps/Colchis/scripts.pory"
	face_left
# 1595 "data/maps/Colchis/scripts.pory"
	face_down
# 1596 "data/maps/Colchis/scripts.pory"
	face_right
# 1597 "data/maps/Colchis/scripts.pory"
	face_up
# 1598 "data/maps/Colchis/scripts.pory"
	face_left
# 1599 "data/maps/Colchis/scripts.pory"
	face_down
# 1600 "data/maps/Colchis/scripts.pory"
	face_right
# 1601 "data/maps/Colchis/scripts.pory"
	face_up
# 1602 "data/maps/Colchis/scripts.pory"
	face_left
# 1603 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1606 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 1607 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1607 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1608 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1611 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 1612 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1612 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1613 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1616 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 1617 "data/maps/Colchis/scripts.pory"
	walk_left
# 1618 "data/maps/Colchis/scripts.pory"
	walk_up
# 1618 "data/maps/Colchis/scripts.pory"
	walk_up
# 1619 "data/maps/Colchis/scripts.pory"
	walk_right
# 1619 "data/maps/Colchis/scripts.pory"
	walk_right
# 1620 "data/maps/Colchis/scripts.pory"
	walk_down
# 1620 "data/maps/Colchis/scripts.pory"
	walk_down
# 1621 "data/maps/Colchis/scripts.pory"
	walk_left
# 1622 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1625 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 1626 "data/maps/Colchis/scripts.pory"
	walk_left
# 1627 "data/maps/Colchis/scripts.pory"
	walk_up
# 1627 "data/maps/Colchis/scripts.pory"
	walk_up
# 1628 "data/maps/Colchis/scripts.pory"
	walk_right
# 1628 "data/maps/Colchis/scripts.pory"
	walk_right
# 1629 "data/maps/Colchis/scripts.pory"
	walk_down
# 1629 "data/maps/Colchis/scripts.pory"
	walk_down
# 1630 "data/maps/Colchis/scripts.pory"
	walk_left
# 1631 "data/maps/Colchis/scripts.pory"
	face_down
# 1632 "data/maps/Colchis/scripts.pory"
	walk_left
# 1633 "data/maps/Colchis/scripts.pory"
	walk_up
# 1633 "data/maps/Colchis/scripts.pory"
	walk_up
# 1634 "data/maps/Colchis/scripts.pory"
	walk_right
# 1634 "data/maps/Colchis/scripts.pory"
	walk_right
# 1635 "data/maps/Colchis/scripts.pory"
	walk_down
# 1635 "data/maps/Colchis/scripts.pory"
	walk_down
# 1636 "data/maps/Colchis/scripts.pory"
	walk_left
# 1637 "data/maps/Colchis/scripts.pory"
	face_down
# 1638 "data/maps/Colchis/scripts.pory"
	walk_left
# 1639 "data/maps/Colchis/scripts.pory"
	walk_up
# 1639 "data/maps/Colchis/scripts.pory"
	walk_up
# 1640 "data/maps/Colchis/scripts.pory"
	walk_right
# 1640 "data/maps/Colchis/scripts.pory"
	walk_right
# 1641 "data/maps/Colchis/scripts.pory"
	walk_down
# 1641 "data/maps/Colchis/scripts.pory"
	walk_down
# 1642 "data/maps/Colchis/scripts.pory"
	walk_left
# 1643 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1646 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 1647 "data/maps/Colchis/scripts.pory"
	walk_down
# 1647 "data/maps/Colchis/scripts.pory"
	walk_down
# 1647 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1650 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 1651 "data/maps/Colchis/scripts.pory"
	walk_right
# 1651 "data/maps/Colchis/scripts.pory"
	walk_right
# 1652 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1655 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 1656 "data/maps/Colchis/scripts.pory"
	walk_left
# 1656 "data/maps/Colchis/scripts.pory"
	walk_left
# 1657 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1660 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 1661 "data/maps/Colchis/scripts.pory"
	walk_down
# 1662 "data/maps/Colchis/scripts.pory"
	face_left
# 1663 "data/maps/Colchis/scripts.pory"
	face_up
# 1664 "data/maps/Colchis/scripts.pory"
	face_right
# 1665 "data/maps/Colchis/scripts.pory"
	face_down
# 1666 "data/maps/Colchis/scripts.pory"
	walk_down
# 1667 "data/maps/Colchis/scripts.pory"
	face_left
# 1668 "data/maps/Colchis/scripts.pory"
	face_up
# 1669 "data/maps/Colchis/scripts.pory"
	face_right
# 1670 "data/maps/Colchis/scripts.pory"
	face_down
# 1671 "data/maps/Colchis/scripts.pory"
	walk_down
# 1672 "data/maps/Colchis/scripts.pory"
	face_left
# 1673 "data/maps/Colchis/scripts.pory"
	face_up
# 1674 "data/maps/Colchis/scripts.pory"
	face_right
# 1675 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1678 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 1679 "data/maps/Colchis/scripts.pory"
	walk_right
# 1680 "data/maps/Colchis/scripts.pory"
	walk_up
# 1681 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1682 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1685 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 1686 "data/maps/Colchis/scripts.pory"
	walk_left
# 1687 "data/maps/Colchis/scripts.pory"
	walk_up
# 1688 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1689 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1692 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 1693 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1694 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1697 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 1698 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1699 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1702 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 1703 "data/maps/Colchis/scripts.pory"
	walk_left
# 1704 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1707 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 1708 "data/maps/Colchis/scripts.pory"
	walk_right
# 1709 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1712 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 1713 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1714 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1717 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 1718 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1719 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1722 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 1723 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1726 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 1727 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 1730 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 1731 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 1735 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 1736 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 1739 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 1740 "data/maps/Colchis/scripts.pory"
	walk_up
# 1740 "data/maps/Colchis/scripts.pory"
	walk_up
# 1740 "data/maps/Colchis/scripts.pory"
	walk_up
# 1740 "data/maps/Colchis/scripts.pory"
	walk_up
# 1740 "data/maps/Colchis/scripts.pory"
	walk_up
# 1740 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1743 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 1744 "data/maps/Colchis/scripts.pory"
	walk_right
# 1744 "data/maps/Colchis/scripts.pory"
	walk_right
# 1744 "data/maps/Colchis/scripts.pory"
	walk_right
# 1744 "data/maps/Colchis/scripts.pory"
	walk_right
# 1744 "data/maps/Colchis/scripts.pory"
	walk_right
# 1744 "data/maps/Colchis/scripts.pory"
	walk_right
# 1744 "data/maps/Colchis/scripts.pory"
	walk_right
# 1744 "data/maps/Colchis/scripts.pory"
	walk_right
# 1745 "data/maps/Colchis/scripts.pory"
	walk_down
# 1745 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1748 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 1749 "data/maps/Colchis/scripts.pory"
	walk_right
# 1749 "data/maps/Colchis/scripts.pory"
	walk_right
# 1749 "data/maps/Colchis/scripts.pory"
	walk_right
# 1749 "data/maps/Colchis/scripts.pory"
	walk_right
# 1749 "data/maps/Colchis/scripts.pory"
	walk_right
# 1749 "data/maps/Colchis/scripts.pory"
	walk_right
# 1749 "data/maps/Colchis/scripts.pory"
	walk_right
# 1750 "data/maps/Colchis/scripts.pory"
	walk_down
# 1750 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1753 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 1754 "data/maps/Colchis/scripts.pory"
	walk_right
# 1754 "data/maps/Colchis/scripts.pory"
	walk_right
# 1754 "data/maps/Colchis/scripts.pory"
	walk_right
# 1754 "data/maps/Colchis/scripts.pory"
	walk_right
# 1754 "data/maps/Colchis/scripts.pory"
	walk_right
# 1754 "data/maps/Colchis/scripts.pory"
	walk_right
# 1755 "data/maps/Colchis/scripts.pory"
	walk_down
# 1755 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1758 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 1759 "data/maps/Colchis/scripts.pory"
	walk_right
# 1759 "data/maps/Colchis/scripts.pory"
	walk_right
# 1759 "data/maps/Colchis/scripts.pory"
	walk_right
# 1759 "data/maps/Colchis/scripts.pory"
	walk_right
# 1759 "data/maps/Colchis/scripts.pory"
	walk_right
# 1759 "data/maps/Colchis/scripts.pory"
	walk_right
# 1759 "data/maps/Colchis/scripts.pory"
	walk_right
# 1759 "data/maps/Colchis/scripts.pory"
	walk_right
# 1760 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1763 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 1764 "data/maps/Colchis/scripts.pory"
	walk_right
# 1764 "data/maps/Colchis/scripts.pory"
	walk_right
# 1764 "data/maps/Colchis/scripts.pory"
	walk_right
# 1764 "data/maps/Colchis/scripts.pory"
	walk_right
# 1764 "data/maps/Colchis/scripts.pory"
	walk_right
# 1764 "data/maps/Colchis/scripts.pory"
	walk_right
# 1764 "data/maps/Colchis/scripts.pory"
	walk_right
# 1765 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1768 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 1769 "data/maps/Colchis/scripts.pory"
	walk_right
# 1769 "data/maps/Colchis/scripts.pory"
	walk_right
# 1769 "data/maps/Colchis/scripts.pory"
	walk_right
# 1769 "data/maps/Colchis/scripts.pory"
	walk_right
# 1769 "data/maps/Colchis/scripts.pory"
	walk_right
# 1769 "data/maps/Colchis/scripts.pory"
	walk_right
# 1770 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1773 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1774 "data/maps/Colchis/scripts.pory"
	walk_up
# 1775 "data/maps/Colchis/scripts.pory"
	walk_right
# 1775 "data/maps/Colchis/scripts.pory"
	walk_right
# 1775 "data/maps/Colchis/scripts.pory"
	walk_right
# 1775 "data/maps/Colchis/scripts.pory"
	walk_right
# 1775 "data/maps/Colchis/scripts.pory"
	walk_right
# 1775 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1778 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 1779 "data/maps/Colchis/scripts.pory"
	walk_right
# 1779 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1782 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 1783 "data/maps/Colchis/scripts.pory"
	walk_up
# 1783 "data/maps/Colchis/scripts.pory"
	walk_up
# 1783 "data/maps/Colchis/scripts.pory"
	walk_up
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1784 "data/maps/Colchis/scripts.pory"
	walk_right
# 1785 "data/maps/Colchis/scripts.pory"
	walk_up
# 1785 "data/maps/Colchis/scripts.pory"
	walk_up
# 1785 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1788 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 1789 "data/maps/Colchis/scripts.pory"
	walk_up
# 1789 "data/maps/Colchis/scripts.pory"
	walk_up
# 1789 "data/maps/Colchis/scripts.pory"
	walk_up
# 1789 "data/maps/Colchis/scripts.pory"
	walk_up
# 1789 "data/maps/Colchis/scripts.pory"
	walk_up
# 1789 "data/maps/Colchis/scripts.pory"
	walk_up
# 1789 "data/maps/Colchis/scripts.pory"
	walk_up
# 1789 "data/maps/Colchis/scripts.pory"
	walk_up
# 1789 "data/maps/Colchis/scripts.pory"
	walk_up
# 1789 "data/maps/Colchis/scripts.pory"
	walk_up
# 1789 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1792 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 1793 "data/maps/Colchis/scripts.pory"
	walk_up
# 1793 "data/maps/Colchis/scripts.pory"
	walk_up
# 1793 "data/maps/Colchis/scripts.pory"
	walk_up
# 1793 "data/maps/Colchis/scripts.pory"
	walk_up
# 1793 "data/maps/Colchis/scripts.pory"
	walk_up
# 1793 "data/maps/Colchis/scripts.pory"
	walk_up
# 1793 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1796 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 1797 "data/maps/Colchis/scripts.pory"
	walk_left
# 1798 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1801 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 1802 "data/maps/Colchis/scripts.pory"
	walk_up
# 1803 "data/maps/Colchis/scripts.pory"
	walk_right
# 1804 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1808 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 1809 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1812 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1813 "data/maps/Colchis/scripts.pory"
	walk_right
# 1814 "data/maps/Colchis/scripts.pory"
	walk_down
# 1815 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1818 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 1819 "data/maps/Colchis/scripts.pory"
	walk_left
# 1820 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1823 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 1824 "data/maps/Colchis/scripts.pory"
	walk_right
# 1825 "data/maps/Colchis/scripts.pory"
	walk_up
# 1826 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1829 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 1830 "data/maps/Colchis/scripts.pory"
	walk_left
# 1831 "data/maps/Colchis/scripts.pory"
	walk_up
# 1832 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1835 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 1836 "data/maps/Colchis/scripts.pory"
	walk_down
# 1836 "data/maps/Colchis/scripts.pory"
	walk_down
# 1836 "data/maps/Colchis/scripts.pory"
	walk_down
# 1836 "data/maps/Colchis/scripts.pory"
	walk_down
# 1836 "data/maps/Colchis/scripts.pory"
	walk_down
# 1836 "data/maps/Colchis/scripts.pory"
	walk_down
# 1836 "data/maps/Colchis/scripts.pory"
	walk_down
# 1836 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1839 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 1840 "data/maps/Colchis/scripts.pory"
	walk_up
# 1840 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1843 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonApproachPlayer:
# 1844 "data/maps/Colchis/scripts.pory"
	walk_up
# 1844 "data/maps/Colchis/scripts.pory"
	walk_up
# 1844 "data/maps/Colchis/scripts.pory"
	walk_up
# 1844 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1847 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonExit:
# 1848 "data/maps/Colchis/scripts.pory"
	walk_down
# 1848 "data/maps/Colchis/scripts.pory"
	walk_down
# 1848 "data/maps/Colchis/scripts.pory"
	walk_down
# 1848 "data/maps/Colchis/scripts.pory"
	walk_down
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1849 "data/maps/Colchis/scripts.pory"
	walk_left
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1850 "data/maps/Colchis/scripts.pory"
	walk_down
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1851 "data/maps/Colchis/scripts.pory"
	walk_right
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1852 "data/maps/Colchis/scripts.pory"
	walk_down
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
# 1853 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 1856 "data/maps/Colchis/scripts.pory"
Common_Movement_JasonPrisonExit:
# 1857 "data/maps/Colchis/scripts.pory"
	walk_down
# 1857 "data/maps/Colchis/scripts.pory"
	walk_down
# 1857 "data/maps/Colchis/scripts.pory"
	walk_down
# 1857 "data/maps/Colchis/scripts.pory"
	walk_down
# 1857 "data/maps/Colchis/scripts.pory"
	walk_down
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1858 "data/maps/Colchis/scripts.pory"
	walk_left
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1859 "data/maps/Colchis/scripts.pory"
	walk_down
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1860 "data/maps/Colchis/scripts.pory"
	walk_right
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1861 "data/maps/Colchis/scripts.pory"
	walk_down
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
# 1862 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 1865 "data/maps/Colchis/scripts.pory"
Common_Movement_PlayerPrisonExit:
# 1866 "data/maps/Colchis/scripts.pory"
	walk_down
# 1866 "data/maps/Colchis/scripts.pory"
	walk_down
# 1866 "data/maps/Colchis/scripts.pory"
	walk_down
# 1866 "data/maps/Colchis/scripts.pory"
	walk_down
# 1866 "data/maps/Colchis/scripts.pory"
	walk_down
# 1866 "data/maps/Colchis/scripts.pory"
	walk_down
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1867 "data/maps/Colchis/scripts.pory"
	walk_left
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1868 "data/maps/Colchis/scripts.pory"
	walk_down
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1869 "data/maps/Colchis/scripts.pory"
	walk_right
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1870 "data/maps/Colchis/scripts.pory"
	walk_down
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
# 1871 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 1874 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 1875 "data/maps/Colchis/scripts.pory"
	walk_left
# 1875 "data/maps/Colchis/scripts.pory"
	walk_left
# 1875 "data/maps/Colchis/scripts.pory"
	walk_left
# 1876 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1879 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 1880 "data/maps/Colchis/scripts.pory"
	walk_down
# 1881 "data/maps/Colchis/scripts.pory"
	walk_right
# 1881 "data/maps/Colchis/scripts.pory"
	walk_right
# 1881 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1884 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 1885 "data/maps/Colchis/scripts.pory"
	walk_up
# 1885 "data/maps/Colchis/scripts.pory"
	walk_up
# 1885 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1888 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 1889 "data/maps/Colchis/scripts.pory"
	walk_up
# 1889 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1502 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Text_JasonIntro1::
# 1892 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 1896 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 1900 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 1904 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 1908 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 1912 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 1917 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 1922 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 1926 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 1930 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 1934 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 1943 "data/maps/Colchis/scripts.pory"
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
# 1948 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 1957 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 1961 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 1970 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 1976 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 1989 "data/maps/Colchis/scripts.pory"
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
# 2001 "data/maps/Colchis/scripts.pory"
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
# 2005 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 2009 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 2013 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 2017 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 2021 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 2025 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 2034 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 2038 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 2056 "data/maps/Colchis/scripts.pory"
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
# 2060 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 2065 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 2069 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 2073 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 2080 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 2084 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 2110 "data/maps/Colchis/scripts.pory"
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
# 2118 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 2122 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 2135 "data/maps/Colchis/scripts.pory"
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
