Colchis_MapScripts::
# 93 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 99 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 110 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME
# 117 "data/maps/Colchis/scripts.pory"
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
# 111 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_MAREEP, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 112 "data/maps/Colchis/scripts.pory"
	hideobjectat 2, MAP_COLCHIS
# 113 "data/maps/Colchis/scripts.pory"
	removeobject 2
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 119 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_TempScript_WarpSanctum
# 120 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_WarpSanctum::
# 129 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 130 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 34, 56
	end


Colchis_TempScript_SetupTestMedeaDance::
# 135 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 136 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 142 "data/maps/Colchis/scripts.pory"
	lockall
# 143 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 144 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SetupJail::
# 149 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 150 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 151 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
# 152 "data/maps/Colchis/scripts.pory"
	addobject 54
# 153 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 160 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 161 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 162 "data/maps/Colchis/scripts.pory"
	closemessage
# 163 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 171 "data/maps/Colchis/scripts.pory"
	lockall
# 173 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 175 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 176 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 177 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 178 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 179 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 180 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 183 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 184 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 185 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 188 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 189 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 190 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 195 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 196 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 197 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 200 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 201 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 202 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 203 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 204 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 205 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 206 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 207 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 208 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 209 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 210 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 211 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 212 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 213 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 214 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 215 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 216 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 219 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 220 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 221 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 222 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 223 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 224 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 225 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 226 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 227 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 228 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 229 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 230 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 231 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 234 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 235 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 236 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 239 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 240 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 241 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 245 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 246 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 247 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 248 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 249 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 250 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 251 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 252 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 253 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 254 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 256 "data/maps/Colchis/scripts.pory"
	closemessage
# 258 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 266 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 267 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 268 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 269 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 270 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 271 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 272 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 273 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 274 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 277 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 278 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 279 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 281 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 282 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 283 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 284 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 285 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 286 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 287 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 291 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 334 "data/maps/Colchis/scripts.pory"
	lockall
# 335 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 337 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 345 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 346 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 347 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 349 "data/maps/Colchis/scripts.pory"
	addobject 23
# 350 "data/maps/Colchis/scripts.pory"
	addobject 24
# 352 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 353 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 357 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 358 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 360 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 361 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 362 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_MedeaDance::
# 384 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 385 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 386 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 391 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 392 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 393 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 394 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 395 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 396 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 397 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 398 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 399 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 400 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 401 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 402 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 403 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 404 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 405 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 406 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 407 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 408 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 417 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 418 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 419 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 420 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 421 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 422 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 423 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 425 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 427 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 429 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 431 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 433 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 434 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 435 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 437 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 443 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 444 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 445 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 446 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 447 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 448 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 449 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 451 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 453 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 454 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 455 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 456 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 457 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 459 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 461 "data/maps/Colchis/scripts.pory"
	delay 25
# 463 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 464 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 465 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 466 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 467 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 469 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 476 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 477 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 478 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 479 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 480 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 481 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 482 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 484 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 486 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 487 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 488 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 489 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 490 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 491 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
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
	waitmovement 4
# 511 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 512 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 513 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 514 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 515 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 517 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 519 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 520 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 522 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 523 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 525 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 531 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 532 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 533 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 534 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 535 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 536 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 537 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 539 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 541 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 542 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 543 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 544 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 545 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 547 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 553 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 559 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 560 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 561 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 562 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 563 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 564 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 565 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 567 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 572 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 578 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 579 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 580 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 581 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 582 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 583 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 584 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 586 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 592 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 595 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 604 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 605 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 606 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 607 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 608 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 609 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 610 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 612 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 614 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 615 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 616 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 617 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 618 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 619 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 620 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 622 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 627 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 631 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 632 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 633 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 634 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 635 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 636 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 637 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 639 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 641 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 642 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 643 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 644 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 645 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 646 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 647 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 649 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 651 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 655 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 656 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 657 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 658 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 659 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 660 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 661 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 663 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 665 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 666 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 667 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 668 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 669 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 670 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 671 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 673 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 675 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 679 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 680 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 681 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 682 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 683 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 684 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 685 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 687 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 689 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 690 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 691 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 692 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 693 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 694 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 695 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 697 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 699 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 709 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 710 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 711 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 712 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 713 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 714 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 715 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 716 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 718 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 720 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 722 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 723 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 724 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 725 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 726 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 727 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 728 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 729 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 731 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 733 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 735 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 736 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 737 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 738 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 739 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 740 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 741 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 742 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 744 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 746 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 753 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 754 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 755 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 756 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 757 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 758 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 759 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 760 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 762 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 763 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 765 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 766 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 769 "data/maps/Colchis/scripts.pory"
	delay 25
# 773 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 774 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 778 "data/maps/Colchis/scripts.pory"
	delay 25
# 780 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 781 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 785 "data/maps/Colchis/scripts.pory"
	delay 25
# 787 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 788 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 792 "data/maps/Colchis/scripts.pory"
	delay 25
# 794 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 795 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 796 "data/maps/Colchis/scripts.pory"
	delay 25
# 801 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 802 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 803 "data/maps/Colchis/scripts.pory"
	delay 25
# 805 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 806 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 807 "data/maps/Colchis/scripts.pory"
	delay 25
# 812 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 813 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 814 "data/maps/Colchis/scripts.pory"
	delay 25
# 816 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 817 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 818 "data/maps/Colchis/scripts.pory"
	delay 25
# 820 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 821 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 822 "data/maps/Colchis/scripts.pory"
	delay 25
# 824 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 825 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 826 "data/maps/Colchis/scripts.pory"
	delay 25
# 831 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 832 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 833 "data/maps/Colchis/scripts.pory"
	delay 25
# 835 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 836 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 837 "data/maps/Colchis/scripts.pory"
	delay 25
# 839 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 840 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 841 "data/maps/Colchis/scripts.pory"
	delay 25
# 843 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 844 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 845 "data/maps/Colchis/scripts.pory"
	delay 25
# 847 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 849 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 850 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 851 "data/maps/Colchis/scripts.pory"
	delay 25
# 856 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 857 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 858 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 859 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 860 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 861 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 862 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 863 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 865 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 876 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 877 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 878 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 879 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 880 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 881 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 882 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 883 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 884 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 889 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 890 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 891 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 892 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 893 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 894 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 895 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 896 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 897 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 902 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 903 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 904 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 905 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 906 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 907 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 908 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 909 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 910 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 915 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 916 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 917 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 918 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 919 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 920 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 921 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 922 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 923 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 928 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 929 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 930 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 931 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 932 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 933 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 934 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 935 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 936 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 941 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 942 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 943 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 944 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 945 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 946 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 947 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 948 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 949 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 954 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 955 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 956 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 957 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 958 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 959 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 960 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 961 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 962 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 967 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 968 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 969 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 970 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 971 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 972 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 973 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 974 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 975 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 980 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 981 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 982 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 983 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 984 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 985 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 986 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 987 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 988 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 990 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 991 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 992 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 993 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 994 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 995 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 996 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 997 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 998 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1001 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1002 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 1004 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1005 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1006 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1007 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1008 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1010 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1011 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1012 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1013 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1014 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1016 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1017 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1018 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1023 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1024 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1026 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1028 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1035 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1036 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1037 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1038 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1039 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1040 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1041 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1042 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1047 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
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
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1056 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1057 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1058 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1059 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1060 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1061 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1062 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1063 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1071 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1083 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1084 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1085 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 13, Common_Movement_WalkLeft
# 1092 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
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
	applymovement 13, Common_Movement_WalkRight
# 1099 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 13, Common_Movement_WalkLeft
# 1106 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
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
	applymovement 13, Common_Movement_WalkRight
# 1113 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 13, Common_Movement_WalkLeft
# 1120 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1121 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1122 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1123 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1124 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1136 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1137 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1138 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1143 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1144 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1145 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1146 "data/maps/Colchis/scripts.pory"
	closemessage
# 1148 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1152 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1153 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1154 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1155 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1156 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1158 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1159 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1160 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1162 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1163 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1164 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1165 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1174 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1175 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1176 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1181 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1182 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1183 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1190 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1191 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1192 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1197 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1198 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1199 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1208 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1209 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1210 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1211 "data/maps/Colchis/scripts.pory"
	closemessage
# 1214 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1215 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1216 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1225 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1226 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1227 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1232 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1233 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1234 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1237 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1238 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1239 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1240 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1241 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1245 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1246 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1247 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1251 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1252 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1253 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1255 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1256 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1257 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1261 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1262 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1264 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1265 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1271 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1272 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1273 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1274 "data/maps/Colchis/scripts.pory"
	closemessage
# 1277 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1278 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1281 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1282 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1290 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1296 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1297 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1298 "data/maps/Colchis/scripts.pory"
	closemessage
# 1299 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1302 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1303 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1306 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1307 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1308 "data/maps/Colchis/scripts.pory"
	closemessage
# 1309 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1312 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1313 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1314 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1315 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1318 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1319 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1320 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1321 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1322 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1325 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1326 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1327 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1328 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1329 "data/maps/Colchis/scripts.pory"
	delay 30
# 1330 "data/maps/Colchis/scripts.pory"
	waitse
# 1333 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonApproachPlayer
# 1334 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1337 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1338 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1339 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1342 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1343 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1344 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1347 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1348 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1349 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1352 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1353 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1354 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1357 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1358 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1359 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1361 "data/maps/Colchis/scripts.pory"
	closemessage
# 1364 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1365 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1368 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1369 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1370 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1371 "data/maps/Colchis/scripts.pory"
	closemessage
# 1374 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1375 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1378 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1379 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1380 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1383 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1384 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1385 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1387 "data/maps/Colchis/scripts.pory"
	closemessage
# 1391 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonExit
# 1392 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_JasonPrisonExit
# 1393 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_PlayerPrisonExit
# 1394 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1396 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1404 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1405 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1408 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1409 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1410 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1412 "data/maps/Colchis/scripts.pory"
	closemessage
# 1415 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1416 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1419 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1420 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1421 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1422 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1423 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1426 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1427 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 0
# 1428 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1429 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 0
# 1433 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1434 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1437 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1438 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1439 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1442 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1443 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1444 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1447 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1448 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1451 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1452 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1453 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1455 "data/maps/Colchis/scripts.pory"
	closemessage
# 1458 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1459 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1462 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1463 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1465 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1466 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1468 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1469 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1471 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1472 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1473 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1476 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1477 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1478 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1479 "data/maps/Colchis/scripts.pory"
	closemessage
# 1482 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1483 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1486 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1487 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1490 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1493 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1494 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1495 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1496 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1498 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1499 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1500 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1501 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
	end


Colchis_Script_LugiaTest::
# 1507 "data/maps/Colchis/scripts.pory"
	lockall
# 1508 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1509 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1510 "data/maps/Colchis/scripts.pory"
	closemessage
# 1511 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTrigger::
# 1517 "data/maps/Colchis/scripts.pory"
	lockall
# 1524 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1525 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1526 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1527 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1528 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1529 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1533 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_LugiaChaseTrigger::
# 1538 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1539 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	end


Colchis_Script_LugiaWanderTrigger::
# 1544 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1545 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	end


Colchis_Script_ShinyMareep::
# 1550 "data/maps/Colchis/scripts.pory"
	lockall
# 1551 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1552 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1553 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1554 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1555 "data/maps/Colchis/scripts.pory"
	waitstate
# 1556 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1557 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1558 "data/maps/Colchis/scripts.pory"
	releaseall
	end


# 1562 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 1563 "data/maps/Colchis/scripts.pory"
	walk_up
# 1563 "data/maps/Colchis/scripts.pory"
	walk_up
# 1563 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1566 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 1567 "data/maps/Colchis/scripts.pory"
	walk_down
# 1567 "data/maps/Colchis/scripts.pory"
	walk_down
# 1567 "data/maps/Colchis/scripts.pory"
	walk_down
# 1567 "data/maps/Colchis/scripts.pory"
	walk_down
# 1567 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1570 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 1571 "data/maps/Colchis/scripts.pory"
	walk_up
# 1571 "data/maps/Colchis/scripts.pory"
	walk_up
# 1571 "data/maps/Colchis/scripts.pory"
	walk_up
# 1571 "data/maps/Colchis/scripts.pory"
	walk_up
# 1571 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1574 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1575 "data/maps/Colchis/scripts.pory"
	walk_up
# 1576 "data/maps/Colchis/scripts.pory"
	walk_right
# 1576 "data/maps/Colchis/scripts.pory"
	walk_right
# 1576 "data/maps/Colchis/scripts.pory"
	walk_right
# 1576 "data/maps/Colchis/scripts.pory"
	walk_right
# 1576 "data/maps/Colchis/scripts.pory"
	walk_right
# 1577 "data/maps/Colchis/scripts.pory"
	walk_up
# 1577 "data/maps/Colchis/scripts.pory"
	walk_up
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
	walk_up
# 1579 "data/maps/Colchis/scripts.pory"
	walk_up
# 1579 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1582 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 1583 "data/maps/Colchis/scripts.pory"
	walk_up
# 1583 "data/maps/Colchis/scripts.pory"
	walk_up
# 1583 "data/maps/Colchis/scripts.pory"
	walk_up
# 1583 "data/maps/Colchis/scripts.pory"
	walk_up
# 1583 "data/maps/Colchis/scripts.pory"
	walk_up
# 1583 "data/maps/Colchis/scripts.pory"
	walk_up
# 1583 "data/maps/Colchis/scripts.pory"
	walk_up
# 1583 "data/maps/Colchis/scripts.pory"
	walk_up
# 1583 "data/maps/Colchis/scripts.pory"
	walk_up
# 1583 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1586 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 1587 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1590 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 1591 "data/maps/Colchis/scripts.pory"
	face_right
# 1592 "data/maps/Colchis/scripts.pory"
	face_up
# 1593 "data/maps/Colchis/scripts.pory"
	face_left
# 1594 "data/maps/Colchis/scripts.pory"
	face_down
# 1595 "data/maps/Colchis/scripts.pory"
	face_right
# 1596 "data/maps/Colchis/scripts.pory"
	face_up
# 1597 "data/maps/Colchis/scripts.pory"
	face_left
# 1598 "data/maps/Colchis/scripts.pory"
	face_down
# 1599 "data/maps/Colchis/scripts.pory"
	face_right
# 1600 "data/maps/Colchis/scripts.pory"
	face_up
# 1601 "data/maps/Colchis/scripts.pory"
	face_left
# 1602 "data/maps/Colchis/scripts.pory"
	face_down
# 1603 "data/maps/Colchis/scripts.pory"
	face_right
# 1604 "data/maps/Colchis/scripts.pory"
	face_up
# 1605 "data/maps/Colchis/scripts.pory"
	face_left
# 1606 "data/maps/Colchis/scripts.pory"
	face_down
# 1607 "data/maps/Colchis/scripts.pory"
	face_right
# 1608 "data/maps/Colchis/scripts.pory"
	face_up
# 1609 "data/maps/Colchis/scripts.pory"
	face_left
# 1610 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1613 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 1614 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1614 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1615 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1618 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 1619 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1619 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1620 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1623 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 1624 "data/maps/Colchis/scripts.pory"
	walk_left
# 1625 "data/maps/Colchis/scripts.pory"
	walk_up
# 1625 "data/maps/Colchis/scripts.pory"
	walk_up
# 1626 "data/maps/Colchis/scripts.pory"
	walk_right
# 1626 "data/maps/Colchis/scripts.pory"
	walk_right
# 1627 "data/maps/Colchis/scripts.pory"
	walk_down
# 1627 "data/maps/Colchis/scripts.pory"
	walk_down
# 1628 "data/maps/Colchis/scripts.pory"
	walk_left
# 1629 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1632 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 1633 "data/maps/Colchis/scripts.pory"
	walk_left
# 1634 "data/maps/Colchis/scripts.pory"
	walk_up
# 1634 "data/maps/Colchis/scripts.pory"
	walk_up
# 1635 "data/maps/Colchis/scripts.pory"
	walk_right
# 1635 "data/maps/Colchis/scripts.pory"
	walk_right
# 1636 "data/maps/Colchis/scripts.pory"
	walk_down
# 1636 "data/maps/Colchis/scripts.pory"
	walk_down
# 1637 "data/maps/Colchis/scripts.pory"
	walk_left
# 1638 "data/maps/Colchis/scripts.pory"
	face_down
# 1639 "data/maps/Colchis/scripts.pory"
	walk_left
# 1640 "data/maps/Colchis/scripts.pory"
	walk_up
# 1640 "data/maps/Colchis/scripts.pory"
	walk_up
# 1641 "data/maps/Colchis/scripts.pory"
	walk_right
# 1641 "data/maps/Colchis/scripts.pory"
	walk_right
# 1642 "data/maps/Colchis/scripts.pory"
	walk_down
# 1642 "data/maps/Colchis/scripts.pory"
	walk_down
# 1643 "data/maps/Colchis/scripts.pory"
	walk_left
# 1644 "data/maps/Colchis/scripts.pory"
	face_down
# 1645 "data/maps/Colchis/scripts.pory"
	walk_left
# 1646 "data/maps/Colchis/scripts.pory"
	walk_up
# 1646 "data/maps/Colchis/scripts.pory"
	walk_up
# 1647 "data/maps/Colchis/scripts.pory"
	walk_right
# 1647 "data/maps/Colchis/scripts.pory"
	walk_right
# 1648 "data/maps/Colchis/scripts.pory"
	walk_down
# 1648 "data/maps/Colchis/scripts.pory"
	walk_down
# 1649 "data/maps/Colchis/scripts.pory"
	walk_left
# 1650 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1653 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 1654 "data/maps/Colchis/scripts.pory"
	walk_down
# 1654 "data/maps/Colchis/scripts.pory"
	walk_down
# 1654 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1657 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 1658 "data/maps/Colchis/scripts.pory"
	walk_right
# 1658 "data/maps/Colchis/scripts.pory"
	walk_right
# 1659 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1662 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 1663 "data/maps/Colchis/scripts.pory"
	walk_left
# 1663 "data/maps/Colchis/scripts.pory"
	walk_left
# 1664 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1667 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 1668 "data/maps/Colchis/scripts.pory"
	walk_down
# 1669 "data/maps/Colchis/scripts.pory"
	face_left
# 1670 "data/maps/Colchis/scripts.pory"
	face_up
# 1671 "data/maps/Colchis/scripts.pory"
	face_right
# 1672 "data/maps/Colchis/scripts.pory"
	face_down
# 1673 "data/maps/Colchis/scripts.pory"
	walk_down
# 1674 "data/maps/Colchis/scripts.pory"
	face_left
# 1675 "data/maps/Colchis/scripts.pory"
	face_up
# 1676 "data/maps/Colchis/scripts.pory"
	face_right
# 1677 "data/maps/Colchis/scripts.pory"
	face_down
# 1678 "data/maps/Colchis/scripts.pory"
	walk_down
# 1679 "data/maps/Colchis/scripts.pory"
	face_left
# 1680 "data/maps/Colchis/scripts.pory"
	face_up
# 1681 "data/maps/Colchis/scripts.pory"
	face_right
# 1682 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1685 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 1686 "data/maps/Colchis/scripts.pory"
	walk_right
# 1687 "data/maps/Colchis/scripts.pory"
	walk_up
# 1688 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1689 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1692 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 1693 "data/maps/Colchis/scripts.pory"
	walk_left
# 1694 "data/maps/Colchis/scripts.pory"
	walk_up
# 1695 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1696 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1699 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 1700 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1701 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1704 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 1705 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1706 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1709 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 1710 "data/maps/Colchis/scripts.pory"
	walk_left
# 1711 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1714 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 1715 "data/maps/Colchis/scripts.pory"
	walk_right
# 1716 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1719 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 1720 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1721 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1724 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 1725 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1726 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1729 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 1730 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1733 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 1734 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 1737 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 1738 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 1742 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 1743 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 1746 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 1747 "data/maps/Colchis/scripts.pory"
	walk_up
# 1747 "data/maps/Colchis/scripts.pory"
	walk_up
# 1747 "data/maps/Colchis/scripts.pory"
	walk_up
# 1747 "data/maps/Colchis/scripts.pory"
	walk_up
# 1747 "data/maps/Colchis/scripts.pory"
	walk_up
# 1747 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1750 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 1751 "data/maps/Colchis/scripts.pory"
	walk_right
# 1751 "data/maps/Colchis/scripts.pory"
	walk_right
# 1751 "data/maps/Colchis/scripts.pory"
	walk_right
# 1751 "data/maps/Colchis/scripts.pory"
	walk_right
# 1751 "data/maps/Colchis/scripts.pory"
	walk_right
# 1751 "data/maps/Colchis/scripts.pory"
	walk_right
# 1751 "data/maps/Colchis/scripts.pory"
	walk_right
# 1751 "data/maps/Colchis/scripts.pory"
	walk_right
# 1752 "data/maps/Colchis/scripts.pory"
	walk_down
# 1752 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1755 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 1756 "data/maps/Colchis/scripts.pory"
	walk_right
# 1756 "data/maps/Colchis/scripts.pory"
	walk_right
# 1756 "data/maps/Colchis/scripts.pory"
	walk_right
# 1756 "data/maps/Colchis/scripts.pory"
	walk_right
# 1756 "data/maps/Colchis/scripts.pory"
	walk_right
# 1756 "data/maps/Colchis/scripts.pory"
	walk_right
# 1756 "data/maps/Colchis/scripts.pory"
	walk_right
# 1757 "data/maps/Colchis/scripts.pory"
	walk_down
# 1757 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1760 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 1761 "data/maps/Colchis/scripts.pory"
	walk_right
# 1761 "data/maps/Colchis/scripts.pory"
	walk_right
# 1761 "data/maps/Colchis/scripts.pory"
	walk_right
# 1761 "data/maps/Colchis/scripts.pory"
	walk_right
# 1761 "data/maps/Colchis/scripts.pory"
	walk_right
# 1761 "data/maps/Colchis/scripts.pory"
	walk_right
# 1762 "data/maps/Colchis/scripts.pory"
	walk_down
# 1762 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1765 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 1766 "data/maps/Colchis/scripts.pory"
	walk_right
# 1766 "data/maps/Colchis/scripts.pory"
	walk_right
# 1766 "data/maps/Colchis/scripts.pory"
	walk_right
# 1766 "data/maps/Colchis/scripts.pory"
	walk_right
# 1766 "data/maps/Colchis/scripts.pory"
	walk_right
# 1766 "data/maps/Colchis/scripts.pory"
	walk_right
# 1766 "data/maps/Colchis/scripts.pory"
	walk_right
# 1766 "data/maps/Colchis/scripts.pory"
	walk_right
# 1767 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1770 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 1771 "data/maps/Colchis/scripts.pory"
	walk_right
# 1771 "data/maps/Colchis/scripts.pory"
	walk_right
# 1771 "data/maps/Colchis/scripts.pory"
	walk_right
# 1771 "data/maps/Colchis/scripts.pory"
	walk_right
# 1771 "data/maps/Colchis/scripts.pory"
	walk_right
# 1771 "data/maps/Colchis/scripts.pory"
	walk_right
# 1771 "data/maps/Colchis/scripts.pory"
	walk_right
# 1772 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1775 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 1776 "data/maps/Colchis/scripts.pory"
	walk_right
# 1776 "data/maps/Colchis/scripts.pory"
	walk_right
# 1776 "data/maps/Colchis/scripts.pory"
	walk_right
# 1776 "data/maps/Colchis/scripts.pory"
	walk_right
# 1776 "data/maps/Colchis/scripts.pory"
	walk_right
# 1776 "data/maps/Colchis/scripts.pory"
	walk_right
# 1777 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1780 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1781 "data/maps/Colchis/scripts.pory"
	walk_up
# 1782 "data/maps/Colchis/scripts.pory"
	walk_right
# 1782 "data/maps/Colchis/scripts.pory"
	walk_right
# 1782 "data/maps/Colchis/scripts.pory"
	walk_right
# 1782 "data/maps/Colchis/scripts.pory"
	walk_right
# 1782 "data/maps/Colchis/scripts.pory"
	walk_right
# 1782 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1785 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 1786 "data/maps/Colchis/scripts.pory"
	walk_right
# 1786 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1789 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 1790 "data/maps/Colchis/scripts.pory"
	walk_up
# 1790 "data/maps/Colchis/scripts.pory"
	walk_up
# 1790 "data/maps/Colchis/scripts.pory"
	walk_up
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1791 "data/maps/Colchis/scripts.pory"
	walk_right
# 1792 "data/maps/Colchis/scripts.pory"
	walk_up
# 1792 "data/maps/Colchis/scripts.pory"
	walk_up
# 1792 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1795 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 1796 "data/maps/Colchis/scripts.pory"
	walk_up
# 1796 "data/maps/Colchis/scripts.pory"
	walk_up
# 1796 "data/maps/Colchis/scripts.pory"
	walk_up
# 1796 "data/maps/Colchis/scripts.pory"
	walk_up
# 1796 "data/maps/Colchis/scripts.pory"
	walk_up
# 1796 "data/maps/Colchis/scripts.pory"
	walk_up
# 1796 "data/maps/Colchis/scripts.pory"
	walk_up
# 1796 "data/maps/Colchis/scripts.pory"
	walk_up
# 1796 "data/maps/Colchis/scripts.pory"
	walk_up
# 1796 "data/maps/Colchis/scripts.pory"
	walk_up
# 1796 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1799 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 1800 "data/maps/Colchis/scripts.pory"
	walk_up
# 1800 "data/maps/Colchis/scripts.pory"
	walk_up
# 1800 "data/maps/Colchis/scripts.pory"
	walk_up
# 1800 "data/maps/Colchis/scripts.pory"
	walk_up
# 1800 "data/maps/Colchis/scripts.pory"
	walk_up
# 1800 "data/maps/Colchis/scripts.pory"
	walk_up
# 1800 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1803 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 1804 "data/maps/Colchis/scripts.pory"
	walk_left
# 1805 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1808 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 1809 "data/maps/Colchis/scripts.pory"
	walk_up
# 1810 "data/maps/Colchis/scripts.pory"
	walk_right
# 1811 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1815 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 1816 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1819 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 1820 "data/maps/Colchis/scripts.pory"
	walk_right
# 1820 "data/maps/Colchis/scripts.pory"
	walk_right
# 1821 "data/maps/Colchis/scripts.pory"
	walk_down
# 1822 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1825 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 1826 "data/maps/Colchis/scripts.pory"
	walk_left
# 1827 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1830 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 1831 "data/maps/Colchis/scripts.pory"
	walk_right
# 1832 "data/maps/Colchis/scripts.pory"
	walk_up
# 1833 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1836 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 1837 "data/maps/Colchis/scripts.pory"
	walk_left
# 1838 "data/maps/Colchis/scripts.pory"
	walk_up
# 1839 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1842 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 1843 "data/maps/Colchis/scripts.pory"
	walk_down
# 1843 "data/maps/Colchis/scripts.pory"
	walk_down
# 1843 "data/maps/Colchis/scripts.pory"
	walk_down
# 1843 "data/maps/Colchis/scripts.pory"
	walk_down
# 1843 "data/maps/Colchis/scripts.pory"
	walk_down
# 1843 "data/maps/Colchis/scripts.pory"
	walk_down
# 1843 "data/maps/Colchis/scripts.pory"
	walk_down
# 1843 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1846 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 1847 "data/maps/Colchis/scripts.pory"
	walk_up
# 1847 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1850 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonApproachPlayer:
# 1851 "data/maps/Colchis/scripts.pory"
	walk_up
# 1851 "data/maps/Colchis/scripts.pory"
	walk_up
# 1851 "data/maps/Colchis/scripts.pory"
	walk_up
# 1851 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1854 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonExit:
# 1855 "data/maps/Colchis/scripts.pory"
	walk_down
# 1855 "data/maps/Colchis/scripts.pory"
	walk_down
# 1855 "data/maps/Colchis/scripts.pory"
	walk_down
# 1855 "data/maps/Colchis/scripts.pory"
	walk_down
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
# 1856 "data/maps/Colchis/scripts.pory"
	walk_left
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
# 1857 "data/maps/Colchis/scripts.pory"
	walk_down
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
# 1858 "data/maps/Colchis/scripts.pory"
	walk_right
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
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
# 1860 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 1863 "data/maps/Colchis/scripts.pory"
Common_Movement_JasonPrisonExit:
# 1864 "data/maps/Colchis/scripts.pory"
	walk_down
# 1864 "data/maps/Colchis/scripts.pory"
	walk_down
# 1864 "data/maps/Colchis/scripts.pory"
	walk_down
# 1864 "data/maps/Colchis/scripts.pory"
	walk_down
# 1864 "data/maps/Colchis/scripts.pory"
	walk_down
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
# 1865 "data/maps/Colchis/scripts.pory"
	walk_left
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
# 1866 "data/maps/Colchis/scripts.pory"
	walk_down
# 1866 "data/maps/Colchis/scripts.pory"
	walk_down
# 1866 "data/maps/Colchis/scripts.pory"
	walk_down
# 1866 "data/maps/Colchis/scripts.pory"
	walk_down
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
# 1867 "data/maps/Colchis/scripts.pory"
	walk_right
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
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
# 1869 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 1872 "data/maps/Colchis/scripts.pory"
Common_Movement_PlayerPrisonExit:
# 1873 "data/maps/Colchis/scripts.pory"
	walk_down
# 1873 "data/maps/Colchis/scripts.pory"
	walk_down
# 1873 "data/maps/Colchis/scripts.pory"
	walk_down
# 1873 "data/maps/Colchis/scripts.pory"
	walk_down
# 1873 "data/maps/Colchis/scripts.pory"
	walk_down
# 1873 "data/maps/Colchis/scripts.pory"
	walk_down
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1874 "data/maps/Colchis/scripts.pory"
	walk_left
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1875 "data/maps/Colchis/scripts.pory"
	walk_down
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1876 "data/maps/Colchis/scripts.pory"
	walk_right
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1877 "data/maps/Colchis/scripts.pory"
	walk_down
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
# 1878 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 1881 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 1882 "data/maps/Colchis/scripts.pory"
	walk_left
# 1882 "data/maps/Colchis/scripts.pory"
	walk_left
# 1882 "data/maps/Colchis/scripts.pory"
	walk_left
# 1883 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1886 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 1887 "data/maps/Colchis/scripts.pory"
	walk_down
# 1888 "data/maps/Colchis/scripts.pory"
	walk_right
# 1888 "data/maps/Colchis/scripts.pory"
	walk_right
# 1888 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1891 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 1892 "data/maps/Colchis/scripts.pory"
	walk_up
# 1892 "data/maps/Colchis/scripts.pory"
	walk_up
# 1892 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1895 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 1896 "data/maps/Colchis/scripts.pory"
	walk_up
# 1896 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1509 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Text_JasonIntro1::
# 1899 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 1903 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 1907 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 1911 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 1915 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 1919 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 1924 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 1929 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 1933 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 1937 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 1941 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 1950 "data/maps/Colchis/scripts.pory"
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
# 1955 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 1964 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 1968 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 1977 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 1983 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 1996 "data/maps/Colchis/scripts.pory"
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
# 2008 "data/maps/Colchis/scripts.pory"
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
# 2012 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 2016 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 2020 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 2024 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 2028 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 2032 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 2041 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 2045 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 2063 "data/maps/Colchis/scripts.pory"
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
# 2067 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 2072 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 2076 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 2080 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 2087 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 2091 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 2117 "data/maps/Colchis/scripts.pory"
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
# 2125 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 2129 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 2142 "data/maps/Colchis/scripts.pory"
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
