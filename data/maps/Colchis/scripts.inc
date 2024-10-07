Colchis_MapScripts::
# 87 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 98 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 99 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
	.2byte 0


Colchis_TempScript_SetupTestMedeaDance::
# 108 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 109 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 115 "data/maps/Colchis/scripts.pory"
	lockall
# 116 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 117 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_Jason::
# 122 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 123 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 124 "data/maps/Colchis/scripts.pory"
	closemessage
# 125 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 133 "data/maps/Colchis/scripts.pory"
	lockall
# 135 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 137 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 138 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 139 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 140 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 141 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 142 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 145 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 146 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 147 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 150 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 151 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 152 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 157 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 158 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 159 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 162 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 163 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 164 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 165 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 166 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 167 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 168 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 169 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 170 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 171 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 172 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 173 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 174 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 175 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 176 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 177 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 178 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 181 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 182 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 183 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 184 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 185 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 186 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 187 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 188 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 189 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 190 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 191 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 192 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 193 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 196 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 197 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 198 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 201 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 202 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 203 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 207 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 208 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 209 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 210 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 211 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 212 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 213 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 214 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 215 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 216 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 218 "data/maps/Colchis/scripts.pory"
	closemessage
# 220 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 228 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 229 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 230 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 231 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 232 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 233 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 234 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 235 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 236 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 239 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 240 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 241 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 243 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 244 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 245 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 246 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 247 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 248 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 249 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 253 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 296 "data/maps/Colchis/scripts.pory"
	lockall
# 297 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 299 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 307 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 308 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 309 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 311 "data/maps/Colchis/scripts.pory"
	addobject 23
# 312 "data/maps/Colchis/scripts.pory"
	addobject 24
# 314 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 315 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 319 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 320 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 322 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 323 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 324 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_MedeaDance::
# 346 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 347 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 348 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 353 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 354 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 355 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 356 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 357 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 358 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 359 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 360 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 361 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 362 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 363 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 364 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 365 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 366 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 367 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 368 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 369 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 370 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 379 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 380 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 381 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 382 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 383 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 384 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 385 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 387 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 389 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 390 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 391 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 393 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 395 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 396 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 397 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 399 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 405 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 406 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 407 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 408 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 409 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 410 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 411 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 413 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 415 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 416 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 417 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 418 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 419 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 421 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 423 "data/maps/Colchis/scripts.pory"
	delay 25
# 425 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 426 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 427 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 429 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 431 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 438 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 439 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 440 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 441 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 442 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 443 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 444 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 446 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 448 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 449 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 450 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 451 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 452 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 453 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 455 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 457 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 458 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 459 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 460 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 461 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 463 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 465 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 466 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 467 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 468 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 469 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 471 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 473 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 474 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 475 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 476 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 477 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
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
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 494 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 495 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 496 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 497 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 498 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 499 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
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
	call Colchis_Script_MedeaDance_SpinAll
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 522 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 523 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 524 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 525 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 526 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 527 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 529 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 534 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 540 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 541 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 542 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 543 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 544 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 545 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 546 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 548 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 554 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 557 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 566 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 567 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 568 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 569 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 570 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 572 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 574 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 576 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 577 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 578 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 579 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 580 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 581 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 582 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 584 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 589 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 593 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 594 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 595 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 596 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 597 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 598 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 599 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 601 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 603 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 604 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 605 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 606 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 607 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 608 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 609 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 611 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 613 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 617 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 618 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 619 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 620 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 621 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 622 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 623 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 625 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 627 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 628 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 629 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 630 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 631 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 632 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 633 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 635 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 637 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 641 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 642 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 643 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 644 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 645 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 646 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 647 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 649 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 651 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 652 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 653 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 654 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 655 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 656 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 657 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 659 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 661 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 671 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 672 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 673 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 674 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 675 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 676 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 677 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 678 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 680 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 682 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 684 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 685 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 686 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 687 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 688 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 689 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 690 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 691 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 693 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 695 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 697 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 698 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 699 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 700 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 701 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 702 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 703 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 704 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 706 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 708 "data/maps/Colchis/scripts.pory"
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
	applymovement 15, Common_Movement_WalkNorthWest
# 722 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 724 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 725 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 727 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 728 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 731 "data/maps/Colchis/scripts.pory"
	delay 25
# 735 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 736 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 740 "data/maps/Colchis/scripts.pory"
	delay 25
# 742 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 743 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 747 "data/maps/Colchis/scripts.pory"
	delay 25
# 749 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 750 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 754 "data/maps/Colchis/scripts.pory"
	delay 25
# 756 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 757 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 758 "data/maps/Colchis/scripts.pory"
	delay 25
# 763 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 764 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 765 "data/maps/Colchis/scripts.pory"
	delay 25
# 767 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 768 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 769 "data/maps/Colchis/scripts.pory"
	delay 25
# 774 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 775 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 776 "data/maps/Colchis/scripts.pory"
	delay 25
# 778 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 779 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 780 "data/maps/Colchis/scripts.pory"
	delay 25
# 782 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 783 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 784 "data/maps/Colchis/scripts.pory"
	delay 25
# 786 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 787 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 788 "data/maps/Colchis/scripts.pory"
	delay 25
# 793 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 794 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 795 "data/maps/Colchis/scripts.pory"
	delay 25
# 797 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 798 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 799 "data/maps/Colchis/scripts.pory"
	delay 25
# 801 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 802 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 803 "data/maps/Colchis/scripts.pory"
	delay 25
# 805 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 806 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 807 "data/maps/Colchis/scripts.pory"
	delay 25
# 809 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 811 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 812 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 813 "data/maps/Colchis/scripts.pory"
	delay 25
# 818 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 819 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 820 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 821 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 822 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 823 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 824 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 825 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 827 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 838 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 839 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 840 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 841 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 842 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 843 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 844 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 845 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 846 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 851 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 852 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 853 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 854 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 855 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 856 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 857 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 858 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 859 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 864 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 865 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 866 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 867 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 868 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 869 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 870 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 871 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 872 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 877 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 878 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 879 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 880 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 881 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 882 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 883 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 884 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 885 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 890 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 891 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 892 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 893 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 894 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 895 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 896 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 897 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 898 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 903 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 904 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 905 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 906 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 907 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 908 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 909 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 910 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 911 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 916 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 917 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 918 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 919 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 920 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 921 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 922 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 923 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 924 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 929 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 930 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 931 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 932 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 933 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 934 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 935 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 936 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 937 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 942 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 943 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 944 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 945 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 946 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 947 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 948 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 949 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 950 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 952 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 953 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 954 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 955 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 956 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 957 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 958 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 959 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 960 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 962 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 963 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 964 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 965 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 966 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 967 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 968 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 969 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 970 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 972 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 973 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 974 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 975 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 976 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 978 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 979 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 980 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 985 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 986 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 988 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 990 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 997 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 998 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 999 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1001 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1002 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1004 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1009 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1010 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1011 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1012 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1013 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1014 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1015 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1016 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1017 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1018 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1019 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1020 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1021 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1022 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1023 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1024 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1025 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1030 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1031 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1032 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1033 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1034 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1035 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1036 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1037 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1038 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1039 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1040 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1041 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1042 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1043 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1044 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1045 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1046 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1047 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1048 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1049 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1050 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1051 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1052 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1053 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1054 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1055 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1056 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1057 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1058 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1059 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1060 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1061 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1062 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1063 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1064 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1065 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1066 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1067 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1071 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1072 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1073 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1074 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1075 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1076 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1077 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1078 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1079 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1080 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1081 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1082 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1083 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1084 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1085 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1086 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1098 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1099 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1100 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1101 "data/maps/Colchis/scripts.pory"
	closemessage
# 1106 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1107 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1108 "data/maps/Colchis/scripts.pory"
	closemessage
# 1109 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1111 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1115 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1116 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1117 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1118 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1119 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1121 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1122 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1123 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1125 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1126 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1127 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1128 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1137 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1138 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1139 "data/maps/Colchis/scripts.pory"
	closemessage
# 1140 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1145 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1146 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1147 "data/maps/Colchis/scripts.pory"
	closemessage
# 1148 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1155 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1156 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1157 "data/maps/Colchis/scripts.pory"
	closemessage
# 1158 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1163 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1164 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1165 "data/maps/Colchis/scripts.pory"
	closemessage
# 1166 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1175 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1176 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1177 "data/maps/Colchis/scripts.pory"
	closemessage
# 1178 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1181 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1182 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1183 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1192 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1193 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1194 "data/maps/Colchis/scripts.pory"
	closemessage
# 1195 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1200 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1201 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1202 "data/maps/Colchis/scripts.pory"
	closemessage
# 1203 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1206 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1207 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1208 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1209 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1210 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1214 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1215 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1216 "data/maps/Colchis/scripts.pory"
	closemessage
# 1217 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1221 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1222 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1223 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1225 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1226 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1227 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1231 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1232 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1234 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1235 "data/maps/Colchis/scripts.pory"
	closemessage
# 1236 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1242 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1243 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1244 "data/maps/Colchis/scripts.pory"
	closemessage
# 1245 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1247 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1249 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1251 "data/maps/Colchis/scripts.pory"
	waitstate
	return


# 1268 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 1269 "data/maps/Colchis/scripts.pory"
	walk_up
# 1269 "data/maps/Colchis/scripts.pory"
	walk_up
# 1269 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1272 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 1273 "data/maps/Colchis/scripts.pory"
	walk_down
# 1273 "data/maps/Colchis/scripts.pory"
	walk_down
# 1273 "data/maps/Colchis/scripts.pory"
	walk_down
# 1273 "data/maps/Colchis/scripts.pory"
	walk_down
# 1273 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1276 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 1277 "data/maps/Colchis/scripts.pory"
	walk_up
# 1277 "data/maps/Colchis/scripts.pory"
	walk_up
# 1277 "data/maps/Colchis/scripts.pory"
	walk_up
# 1277 "data/maps/Colchis/scripts.pory"
	walk_up
# 1277 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1280 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1281 "data/maps/Colchis/scripts.pory"
	walk_up
# 1282 "data/maps/Colchis/scripts.pory"
	walk_right
# 1282 "data/maps/Colchis/scripts.pory"
	walk_right
# 1282 "data/maps/Colchis/scripts.pory"
	walk_right
# 1282 "data/maps/Colchis/scripts.pory"
	walk_right
# 1282 "data/maps/Colchis/scripts.pory"
	walk_right
# 1283 "data/maps/Colchis/scripts.pory"
	walk_up
# 1283 "data/maps/Colchis/scripts.pory"
	walk_up
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1284 "data/maps/Colchis/scripts.pory"
	walk_right
# 1285 "data/maps/Colchis/scripts.pory"
	walk_up
# 1285 "data/maps/Colchis/scripts.pory"
	walk_up
# 1285 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1288 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 1289 "data/maps/Colchis/scripts.pory"
	walk_up
# 1289 "data/maps/Colchis/scripts.pory"
	walk_up
# 1289 "data/maps/Colchis/scripts.pory"
	walk_up
# 1289 "data/maps/Colchis/scripts.pory"
	walk_up
# 1289 "data/maps/Colchis/scripts.pory"
	walk_up
# 1289 "data/maps/Colchis/scripts.pory"
	walk_up
# 1289 "data/maps/Colchis/scripts.pory"
	walk_up
# 1289 "data/maps/Colchis/scripts.pory"
	walk_up
# 1289 "data/maps/Colchis/scripts.pory"
	walk_up
# 1289 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1292 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 1293 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1296 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 1297 "data/maps/Colchis/scripts.pory"
	face_right
# 1298 "data/maps/Colchis/scripts.pory"
	face_up
# 1299 "data/maps/Colchis/scripts.pory"
	face_left
# 1300 "data/maps/Colchis/scripts.pory"
	face_down
# 1301 "data/maps/Colchis/scripts.pory"
	face_right
# 1302 "data/maps/Colchis/scripts.pory"
	face_up
# 1303 "data/maps/Colchis/scripts.pory"
	face_left
# 1304 "data/maps/Colchis/scripts.pory"
	face_down
# 1305 "data/maps/Colchis/scripts.pory"
	face_right
# 1306 "data/maps/Colchis/scripts.pory"
	face_up
# 1307 "data/maps/Colchis/scripts.pory"
	face_left
# 1308 "data/maps/Colchis/scripts.pory"
	face_down
# 1309 "data/maps/Colchis/scripts.pory"
	face_right
# 1310 "data/maps/Colchis/scripts.pory"
	face_up
# 1311 "data/maps/Colchis/scripts.pory"
	face_left
# 1312 "data/maps/Colchis/scripts.pory"
	face_down
# 1313 "data/maps/Colchis/scripts.pory"
	face_right
# 1314 "data/maps/Colchis/scripts.pory"
	face_up
# 1315 "data/maps/Colchis/scripts.pory"
	face_left
# 1316 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1319 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 1320 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1320 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1321 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1324 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 1325 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1325 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1326 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1329 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 1330 "data/maps/Colchis/scripts.pory"
	walk_left
# 1331 "data/maps/Colchis/scripts.pory"
	walk_up
# 1331 "data/maps/Colchis/scripts.pory"
	walk_up
# 1332 "data/maps/Colchis/scripts.pory"
	walk_right
# 1332 "data/maps/Colchis/scripts.pory"
	walk_right
# 1333 "data/maps/Colchis/scripts.pory"
	walk_down
# 1333 "data/maps/Colchis/scripts.pory"
	walk_down
# 1334 "data/maps/Colchis/scripts.pory"
	walk_left
# 1335 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1338 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 1339 "data/maps/Colchis/scripts.pory"
	walk_left
# 1340 "data/maps/Colchis/scripts.pory"
	walk_up
# 1340 "data/maps/Colchis/scripts.pory"
	walk_up
# 1341 "data/maps/Colchis/scripts.pory"
	walk_right
# 1341 "data/maps/Colchis/scripts.pory"
	walk_right
# 1342 "data/maps/Colchis/scripts.pory"
	walk_down
# 1342 "data/maps/Colchis/scripts.pory"
	walk_down
# 1343 "data/maps/Colchis/scripts.pory"
	walk_left
# 1344 "data/maps/Colchis/scripts.pory"
	face_down
# 1345 "data/maps/Colchis/scripts.pory"
	walk_left
# 1346 "data/maps/Colchis/scripts.pory"
	walk_up
# 1346 "data/maps/Colchis/scripts.pory"
	walk_up
# 1347 "data/maps/Colchis/scripts.pory"
	walk_right
# 1347 "data/maps/Colchis/scripts.pory"
	walk_right
# 1348 "data/maps/Colchis/scripts.pory"
	walk_down
# 1348 "data/maps/Colchis/scripts.pory"
	walk_down
# 1349 "data/maps/Colchis/scripts.pory"
	walk_left
# 1350 "data/maps/Colchis/scripts.pory"
	face_down
# 1351 "data/maps/Colchis/scripts.pory"
	walk_left
# 1352 "data/maps/Colchis/scripts.pory"
	walk_up
# 1352 "data/maps/Colchis/scripts.pory"
	walk_up
# 1353 "data/maps/Colchis/scripts.pory"
	walk_right
# 1353 "data/maps/Colchis/scripts.pory"
	walk_right
# 1354 "data/maps/Colchis/scripts.pory"
	walk_down
# 1354 "data/maps/Colchis/scripts.pory"
	walk_down
# 1355 "data/maps/Colchis/scripts.pory"
	walk_left
# 1356 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1359 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 1360 "data/maps/Colchis/scripts.pory"
	walk_down
# 1360 "data/maps/Colchis/scripts.pory"
	walk_down
# 1360 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1363 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 1364 "data/maps/Colchis/scripts.pory"
	walk_right
# 1364 "data/maps/Colchis/scripts.pory"
	walk_right
# 1365 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1368 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 1369 "data/maps/Colchis/scripts.pory"
	walk_left
# 1369 "data/maps/Colchis/scripts.pory"
	walk_left
# 1370 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1373 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 1374 "data/maps/Colchis/scripts.pory"
	walk_down
# 1375 "data/maps/Colchis/scripts.pory"
	face_left
# 1376 "data/maps/Colchis/scripts.pory"
	face_up
# 1377 "data/maps/Colchis/scripts.pory"
	face_right
# 1378 "data/maps/Colchis/scripts.pory"
	face_down
# 1379 "data/maps/Colchis/scripts.pory"
	walk_down
# 1380 "data/maps/Colchis/scripts.pory"
	face_left
# 1381 "data/maps/Colchis/scripts.pory"
	face_up
# 1382 "data/maps/Colchis/scripts.pory"
	face_right
# 1383 "data/maps/Colchis/scripts.pory"
	face_down
# 1384 "data/maps/Colchis/scripts.pory"
	walk_down
# 1385 "data/maps/Colchis/scripts.pory"
	face_left
# 1386 "data/maps/Colchis/scripts.pory"
	face_up
# 1387 "data/maps/Colchis/scripts.pory"
	face_right
# 1388 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1391 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 1392 "data/maps/Colchis/scripts.pory"
	walk_right
# 1393 "data/maps/Colchis/scripts.pory"
	walk_up
# 1394 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1395 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1398 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 1399 "data/maps/Colchis/scripts.pory"
	walk_left
# 1400 "data/maps/Colchis/scripts.pory"
	walk_up
# 1401 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1402 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1405 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 1406 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1407 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1410 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 1411 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1412 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1415 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 1416 "data/maps/Colchis/scripts.pory"
	walk_left
# 1417 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1420 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 1421 "data/maps/Colchis/scripts.pory"
	walk_right
# 1422 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1425 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 1426 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1427 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1430 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 1431 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1432 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1435 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 1436 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1439 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 1440 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 1443 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 1444 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 1448 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 1449 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 1452 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 1453 "data/maps/Colchis/scripts.pory"
	walk_up
# 1453 "data/maps/Colchis/scripts.pory"
	walk_up
# 1453 "data/maps/Colchis/scripts.pory"
	walk_up
# 1453 "data/maps/Colchis/scripts.pory"
	walk_up
# 1453 "data/maps/Colchis/scripts.pory"
	walk_up
# 1453 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1456 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 1457 "data/maps/Colchis/scripts.pory"
	walk_right
# 1457 "data/maps/Colchis/scripts.pory"
	walk_right
# 1457 "data/maps/Colchis/scripts.pory"
	walk_right
# 1457 "data/maps/Colchis/scripts.pory"
	walk_right
# 1457 "data/maps/Colchis/scripts.pory"
	walk_right
# 1457 "data/maps/Colchis/scripts.pory"
	walk_right
# 1457 "data/maps/Colchis/scripts.pory"
	walk_right
# 1457 "data/maps/Colchis/scripts.pory"
	walk_right
# 1458 "data/maps/Colchis/scripts.pory"
	walk_down
# 1458 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1461 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 1462 "data/maps/Colchis/scripts.pory"
	walk_right
# 1462 "data/maps/Colchis/scripts.pory"
	walk_right
# 1462 "data/maps/Colchis/scripts.pory"
	walk_right
# 1462 "data/maps/Colchis/scripts.pory"
	walk_right
# 1462 "data/maps/Colchis/scripts.pory"
	walk_right
# 1462 "data/maps/Colchis/scripts.pory"
	walk_right
# 1462 "data/maps/Colchis/scripts.pory"
	walk_right
# 1463 "data/maps/Colchis/scripts.pory"
	walk_down
# 1463 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1466 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 1467 "data/maps/Colchis/scripts.pory"
	walk_right
# 1467 "data/maps/Colchis/scripts.pory"
	walk_right
# 1467 "data/maps/Colchis/scripts.pory"
	walk_right
# 1467 "data/maps/Colchis/scripts.pory"
	walk_right
# 1467 "data/maps/Colchis/scripts.pory"
	walk_right
# 1467 "data/maps/Colchis/scripts.pory"
	walk_right
# 1468 "data/maps/Colchis/scripts.pory"
	walk_down
# 1468 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1471 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 1472 "data/maps/Colchis/scripts.pory"
	walk_right
# 1472 "data/maps/Colchis/scripts.pory"
	walk_right
# 1472 "data/maps/Colchis/scripts.pory"
	walk_right
# 1472 "data/maps/Colchis/scripts.pory"
	walk_right
# 1472 "data/maps/Colchis/scripts.pory"
	walk_right
# 1472 "data/maps/Colchis/scripts.pory"
	walk_right
# 1472 "data/maps/Colchis/scripts.pory"
	walk_right
# 1472 "data/maps/Colchis/scripts.pory"
	walk_right
# 1473 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1476 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 1477 "data/maps/Colchis/scripts.pory"
	walk_right
# 1477 "data/maps/Colchis/scripts.pory"
	walk_right
# 1477 "data/maps/Colchis/scripts.pory"
	walk_right
# 1477 "data/maps/Colchis/scripts.pory"
	walk_right
# 1477 "data/maps/Colchis/scripts.pory"
	walk_right
# 1477 "data/maps/Colchis/scripts.pory"
	walk_right
# 1477 "data/maps/Colchis/scripts.pory"
	walk_right
# 1478 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1481 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 1482 "data/maps/Colchis/scripts.pory"
	walk_right
# 1482 "data/maps/Colchis/scripts.pory"
	walk_right
# 1482 "data/maps/Colchis/scripts.pory"
	walk_right
# 1482 "data/maps/Colchis/scripts.pory"
	walk_right
# 1482 "data/maps/Colchis/scripts.pory"
	walk_right
# 1482 "data/maps/Colchis/scripts.pory"
	walk_right
# 1483 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1486 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1487 "data/maps/Colchis/scripts.pory"
	walk_up
# 1488 "data/maps/Colchis/scripts.pory"
	walk_right
# 1488 "data/maps/Colchis/scripts.pory"
	walk_right
# 1488 "data/maps/Colchis/scripts.pory"
	walk_right
# 1488 "data/maps/Colchis/scripts.pory"
	walk_right
# 1488 "data/maps/Colchis/scripts.pory"
	walk_right
# 1488 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1491 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 1492 "data/maps/Colchis/scripts.pory"
	walk_right
# 1492 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 1495 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 1496 "data/maps/Colchis/scripts.pory"
	walk_up
# 1496 "data/maps/Colchis/scripts.pory"
	walk_up
# 1496 "data/maps/Colchis/scripts.pory"
	walk_up
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1497 "data/maps/Colchis/scripts.pory"
	walk_right
# 1498 "data/maps/Colchis/scripts.pory"
	walk_up
# 1498 "data/maps/Colchis/scripts.pory"
	walk_up
# 1498 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1501 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 1502 "data/maps/Colchis/scripts.pory"
	walk_up
# 1502 "data/maps/Colchis/scripts.pory"
	walk_up
# 1502 "data/maps/Colchis/scripts.pory"
	walk_up
# 1502 "data/maps/Colchis/scripts.pory"
	walk_up
# 1502 "data/maps/Colchis/scripts.pory"
	walk_up
# 1502 "data/maps/Colchis/scripts.pory"
	walk_up
# 1502 "data/maps/Colchis/scripts.pory"
	walk_up
# 1502 "data/maps/Colchis/scripts.pory"
	walk_up
# 1502 "data/maps/Colchis/scripts.pory"
	walk_up
# 1502 "data/maps/Colchis/scripts.pory"
	walk_up
# 1502 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1505 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 1506 "data/maps/Colchis/scripts.pory"
	walk_up
# 1506 "data/maps/Colchis/scripts.pory"
	walk_up
# 1506 "data/maps/Colchis/scripts.pory"
	walk_up
# 1506 "data/maps/Colchis/scripts.pory"
	walk_up
# 1506 "data/maps/Colchis/scripts.pory"
	walk_up
# 1506 "data/maps/Colchis/scripts.pory"
	walk_up
# 1506 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1509 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 1510 "data/maps/Colchis/scripts.pory"
	walk_left
# 1511 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1514 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 1515 "data/maps/Colchis/scripts.pory"
	walk_up
# 1516 "data/maps/Colchis/scripts.pory"
	walk_right
# 1517 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1521 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 1522 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1525 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 1526 "data/maps/Colchis/scripts.pory"
	walk_right
# 1526 "data/maps/Colchis/scripts.pory"
	walk_right
# 1527 "data/maps/Colchis/scripts.pory"
	walk_down
# 1528 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1531 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 1532 "data/maps/Colchis/scripts.pory"
	walk_left
# 1533 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1536 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 1537 "data/maps/Colchis/scripts.pory"
	walk_right
# 1538 "data/maps/Colchis/scripts.pory"
	walk_up
# 1539 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1542 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 1543 "data/maps/Colchis/scripts.pory"
	walk_left
# 1544 "data/maps/Colchis/scripts.pory"
	walk_up
# 1545 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1548 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 1549 "data/maps/Colchis/scripts.pory"
	walk_down
# 1549 "data/maps/Colchis/scripts.pory"
	walk_down
# 1549 "data/maps/Colchis/scripts.pory"
	walk_down
# 1549 "data/maps/Colchis/scripts.pory"
	walk_down
# 1549 "data/maps/Colchis/scripts.pory"
	walk_down
# 1549 "data/maps/Colchis/scripts.pory"
	walk_down
# 1549 "data/maps/Colchis/scripts.pory"
	walk_down
# 1549 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

Colchis_Text_JasonIntro1::
# 1552 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 1556 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 1560 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 1564 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 1568 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 1572 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 1577 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 1582 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 1586 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 1590 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 1594 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 1603 "data/maps/Colchis/scripts.pory"
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
# 1608 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 1617 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 1621 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 1630 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 1636 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 1649 "data/maps/Colchis/scripts.pory"
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
# 1661 "data/maps/Colchis/scripts.pory"
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
# 1665 "data/maps/Colchis/scripts.pory"
	.string "Erethay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 1669 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 1673 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 1677 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"
