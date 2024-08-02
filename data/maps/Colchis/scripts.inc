Colchis_MapScripts::
# 24 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 35 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
# 25 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_2
Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 29 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 26 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_IntroSetup
	goto Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 30 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_IntroDeclinedSetup
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 36 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
	.2byte 0


Colchis_TempScript_SetupTestMedeaDance::
# 45 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 46 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 52 "data/maps/Colchis/scripts.pory"
	lockall
# 53 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 54 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_IntroSetup::
# 60 "data/maps/Colchis/scripts.pory"
	removeobject 25
# 61 "data/maps/Colchis/scripts.pory"
	removeobject 26
# 63 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 25, 10, 59
# 64 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 26, 12, 59
# 66 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 25, MOVEMENT_TYPE_FACE_RIGHT
# 67 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_LEFT
# 69 "data/maps/Colchis/scripts.pory"
	addobject 25
# 70 "data/maps/Colchis/scripts.pory"
	addobject 26
# 72 "data/maps/Colchis/scripts.pory"
	showobjectat 25, MAP_COLCHIS
# 73 "data/maps/Colchis/scripts.pory"
	showobjectat 26, MAP_COLCHIS
	end


Colchis_Script_IntroDeclinedSetup::
# 80 "data/maps/Colchis/scripts.pory"
	removeobject 25
# 81 "data/maps/Colchis/scripts.pory"
	removeobject 26
# 82 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 84 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 25, 10, 59
# 85 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 26, 12, 59
# 86 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 11, 59
# 88 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 89 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 25, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 90 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
# 92 "data/maps/Colchis/scripts.pory"
	addobject 25
# 93 "data/maps/Colchis/scripts.pory"
	addobject 26
# 94 "data/maps/Colchis/scripts.pory"
	addobject 54
# 96 "data/maps/Colchis/scripts.pory"
	showobjectat 25, MAP_COLCHIS
# 97 "data/maps/Colchis/scripts.pory"
	showobjectat 26, MAP_COLCHIS
# 98 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	return


Colchis_Script_Jason::
# 104 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 105 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 106 "data/maps/Colchis/scripts.pory"
	closemessage
# 107 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 115 "data/maps/Colchis/scripts.pory"
	lockall
# 117 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 118 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 119 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 120 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 121 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 122 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 123 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 126 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 127 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 128 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 130 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 131 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 134 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 135 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 136 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 138 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 139 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 142 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 143 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 144 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 146 "data/maps/Colchis/scripts.pory"
	closemessage
# 149 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 150 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 151 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 152 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_YESNO
# 153 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 156 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Intro_2
# 164 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_FORCED_BATTLE
# 165 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 166 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDecline, MSGBOX_DEFAULT
# 167 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 168 "data/maps/Colchis/scripts.pory"
	closemessage
# 169 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 170 "data/maps/Colchis/scripts.pory"
	releaseall
# 171 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_IntroDeclinedSetup
Colchis_Script_Intro_1:
	end

Colchis_Script_Intro_2:
# 157 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroAccept, MSGBOX_DEFAULT
# 158 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 159 "data/maps/Colchis/scripts.pory"
	closemessage
# 160 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	goto Colchis_Script_Intro_1


Colchis_Script_EnterThroneRoom::
# 180 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 181 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom
# 182 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom
# 183 "data/maps/Colchis/scripts.pory"
	applymovement 25, Colchis_Movement_EnterThroneRoom
# 184 "data/maps/Colchis/scripts.pory"
	applymovement 26, Colchis_Movement_EnterThroneRoom
# 185 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 186 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 187 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 188 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 192 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 235 "data/maps/Colchis/scripts.pory"
	lockall
# 236 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 238 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 246 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 247 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 248 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 250 "data/maps/Colchis/scripts.pory"
	addobject 23
# 251 "data/maps/Colchis/scripts.pory"
	addobject 24
# 253 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 254 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 258 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 259 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 261 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 262 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 263 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_MedeaDance::
# 285 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 286 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 287 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 292 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 293 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 294 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 295 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 296 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 297 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 298 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 299 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 300 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 301 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 302 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 303 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 304 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 305 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 306 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 307 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 308 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 309 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 318 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 319 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 320 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 321 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 322 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 323 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 324 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 326 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 328 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 329 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 330 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 332 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 334 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 335 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 336 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 338 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 344 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 345 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 346 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 347 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 348 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 349 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 350 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 352 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 354 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 355 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 356 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 357 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 358 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 360 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 362 "data/maps/Colchis/scripts.pory"
	delay 25
# 364 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 365 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 366 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 367 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 368 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 370 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 377 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 378 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 379 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 380 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 381 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 382 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 383 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 385 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 387 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 388 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 389 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 390 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 391 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 392 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 394 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 396 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 397 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 398 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 399 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 400 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 402 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 404 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 405 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 406 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 407 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 408 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 410 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 412 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 413 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 414 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 415 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 416 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 418 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 420 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 421 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 422 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 423 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 424 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 426 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 432 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 433 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 434 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 435 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 436 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 437 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 438 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 440 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 442 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 443 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 444 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 445 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 446 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 448 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 454 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 460 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 461 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 462 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 463 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 464 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 465 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 466 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 468 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 473 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 479 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 480 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 481 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 482 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 483 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 484 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 485 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 487 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 493 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 496 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 505 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 506 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 507 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 508 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 509 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 510 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 511 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 513 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 515 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 516 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 517 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 518 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 519 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 520 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 523 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 528 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 532 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 533 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 534 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 535 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 536 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 537 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 538 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 540 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 542 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 543 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 544 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 545 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 546 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 547 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 548 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 550 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 552 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 556 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 557 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 558 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 559 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 560 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 561 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 562 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 564 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 566 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 567 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 568 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 569 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 570 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 572 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 574 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 576 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 580 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 581 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 582 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 583 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 584 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 585 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 586 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 588 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 590 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 591 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 592 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 593 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 594 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 595 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 596 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 598 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 600 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 610 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 611 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 612 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 613 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 614 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 615 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 616 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 617 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 619 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 621 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 623 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 624 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 625 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 626 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 627 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 628 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 629 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 630 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 632 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 634 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 636 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 637 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 638 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 639 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 640 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 641 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 642 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 643 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 645 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 647 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 654 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 655 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 656 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 657 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 658 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 659 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 660 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 661 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 663 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 664 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 666 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 667 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 670 "data/maps/Colchis/scripts.pory"
	delay 25
# 674 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 675 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 679 "data/maps/Colchis/scripts.pory"
	delay 25
# 681 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 682 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 686 "data/maps/Colchis/scripts.pory"
	delay 25
# 688 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 689 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 693 "data/maps/Colchis/scripts.pory"
	delay 25
# 695 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 696 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 697 "data/maps/Colchis/scripts.pory"
	delay 25
# 702 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 703 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 704 "data/maps/Colchis/scripts.pory"
	delay 25
# 706 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 707 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 708 "data/maps/Colchis/scripts.pory"
	delay 25
# 713 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 714 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 715 "data/maps/Colchis/scripts.pory"
	delay 25
# 717 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 718 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 719 "data/maps/Colchis/scripts.pory"
	delay 25
# 721 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 722 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 723 "data/maps/Colchis/scripts.pory"
	delay 25
# 725 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 726 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 727 "data/maps/Colchis/scripts.pory"
	delay 25
# 732 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 733 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 734 "data/maps/Colchis/scripts.pory"
	delay 25
# 736 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 737 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 738 "data/maps/Colchis/scripts.pory"
	delay 25
# 740 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 741 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 742 "data/maps/Colchis/scripts.pory"
	delay 25
# 744 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 745 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 746 "data/maps/Colchis/scripts.pory"
	delay 25
# 748 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 750 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 751 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 752 "data/maps/Colchis/scripts.pory"
	delay 25
# 757 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 758 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 759 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 760 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 761 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 762 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 763 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 764 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 766 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 777 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 778 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 779 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 780 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 781 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 782 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 783 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 784 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 785 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 790 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 791 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 792 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 793 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 794 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 795 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 796 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 797 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 798 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 803 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 804 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 805 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 806 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 807 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 808 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 809 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 810 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 811 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 816 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 817 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 818 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 819 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 820 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 821 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 822 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 823 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 824 "data/maps/Colchis/scripts.pory"
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
# 891 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 892 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 893 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 894 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 895 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 896 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 897 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 898 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 899 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 901 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 902 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 903 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 904 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 905 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 906 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 907 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 908 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 909 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 911 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 912 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 913 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 914 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 915 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 917 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 918 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 919 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 924 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 925 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 932 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 933 "data/maps/Colchis/scripts.pory"
	closemessage
# 937 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 938 "data/maps/Colchis/scripts.pory"
	closemessage
# 997 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_0
# 998 "data/maps/Colchis/scripts.pory"
	closemessage
# 1009 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
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


# 1108 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 1109 "data/maps/Colchis/scripts.pory"
	walk_up
# 1109 "data/maps/Colchis/scripts.pory"
	walk_up
# 1109 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1112 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 1113 "data/maps/Colchis/scripts.pory"
	walk_down
# 1113 "data/maps/Colchis/scripts.pory"
	walk_down
# 1113 "data/maps/Colchis/scripts.pory"
	walk_down
# 1113 "data/maps/Colchis/scripts.pory"
	walk_down
# 1113 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1116 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 1117 "data/maps/Colchis/scripts.pory"
	walk_up
# 1117 "data/maps/Colchis/scripts.pory"
	walk_up
# 1117 "data/maps/Colchis/scripts.pory"
	walk_up
# 1117 "data/maps/Colchis/scripts.pory"
	walk_up
# 1117 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1120 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1121 "data/maps/Colchis/scripts.pory"
	walk_up
# 1122 "data/maps/Colchis/scripts.pory"
	walk_right
# 1122 "data/maps/Colchis/scripts.pory"
	walk_right
# 1122 "data/maps/Colchis/scripts.pory"
	walk_right
# 1122 "data/maps/Colchis/scripts.pory"
	walk_right
# 1122 "data/maps/Colchis/scripts.pory"
	walk_right
# 1123 "data/maps/Colchis/scripts.pory"
	walk_up
# 1123 "data/maps/Colchis/scripts.pory"
	walk_up
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1125 "data/maps/Colchis/scripts.pory"
	walk_up
# 1125 "data/maps/Colchis/scripts.pory"
	walk_up
# 1125 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1128 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 1129 "data/maps/Colchis/scripts.pory"
	walk_up
# 1129 "data/maps/Colchis/scripts.pory"
	walk_up
# 1129 "data/maps/Colchis/scripts.pory"
	walk_up
# 1129 "data/maps/Colchis/scripts.pory"
	walk_up
# 1129 "data/maps/Colchis/scripts.pory"
	walk_up
# 1129 "data/maps/Colchis/scripts.pory"
	walk_up
# 1129 "data/maps/Colchis/scripts.pory"
	walk_up
# 1129 "data/maps/Colchis/scripts.pory"
	walk_up
# 1129 "data/maps/Colchis/scripts.pory"
	walk_up
# 1129 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1132 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 1133 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1136 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 1137 "data/maps/Colchis/scripts.pory"
	face_right
# 1138 "data/maps/Colchis/scripts.pory"
	face_up
# 1139 "data/maps/Colchis/scripts.pory"
	face_left
# 1140 "data/maps/Colchis/scripts.pory"
	face_down
# 1141 "data/maps/Colchis/scripts.pory"
	face_right
# 1142 "data/maps/Colchis/scripts.pory"
	face_up
# 1143 "data/maps/Colchis/scripts.pory"
	face_left
# 1144 "data/maps/Colchis/scripts.pory"
	face_down
# 1145 "data/maps/Colchis/scripts.pory"
	face_right
# 1146 "data/maps/Colchis/scripts.pory"
	face_up
# 1147 "data/maps/Colchis/scripts.pory"
	face_left
# 1148 "data/maps/Colchis/scripts.pory"
	face_down
# 1149 "data/maps/Colchis/scripts.pory"
	face_right
# 1150 "data/maps/Colchis/scripts.pory"
	face_up
# 1151 "data/maps/Colchis/scripts.pory"
	face_left
# 1152 "data/maps/Colchis/scripts.pory"
	face_down
# 1153 "data/maps/Colchis/scripts.pory"
	face_right
# 1154 "data/maps/Colchis/scripts.pory"
	face_up
# 1155 "data/maps/Colchis/scripts.pory"
	face_left
# 1156 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1159 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 1160 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1160 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1161 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1164 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 1165 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1165 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1166 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1169 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 1170 "data/maps/Colchis/scripts.pory"
	walk_left
# 1171 "data/maps/Colchis/scripts.pory"
	walk_up
# 1171 "data/maps/Colchis/scripts.pory"
	walk_up
# 1172 "data/maps/Colchis/scripts.pory"
	walk_right
# 1172 "data/maps/Colchis/scripts.pory"
	walk_right
# 1173 "data/maps/Colchis/scripts.pory"
	walk_down
# 1173 "data/maps/Colchis/scripts.pory"
	walk_down
# 1174 "data/maps/Colchis/scripts.pory"
	walk_left
# 1175 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1178 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 1179 "data/maps/Colchis/scripts.pory"
	walk_left
# 1180 "data/maps/Colchis/scripts.pory"
	walk_up
# 1180 "data/maps/Colchis/scripts.pory"
	walk_up
# 1181 "data/maps/Colchis/scripts.pory"
	walk_right
# 1181 "data/maps/Colchis/scripts.pory"
	walk_right
# 1182 "data/maps/Colchis/scripts.pory"
	walk_down
# 1182 "data/maps/Colchis/scripts.pory"
	walk_down
# 1183 "data/maps/Colchis/scripts.pory"
	walk_left
# 1184 "data/maps/Colchis/scripts.pory"
	face_down
# 1185 "data/maps/Colchis/scripts.pory"
	walk_left
# 1186 "data/maps/Colchis/scripts.pory"
	walk_up
# 1186 "data/maps/Colchis/scripts.pory"
	walk_up
# 1187 "data/maps/Colchis/scripts.pory"
	walk_right
# 1187 "data/maps/Colchis/scripts.pory"
	walk_right
# 1188 "data/maps/Colchis/scripts.pory"
	walk_down
# 1188 "data/maps/Colchis/scripts.pory"
	walk_down
# 1189 "data/maps/Colchis/scripts.pory"
	walk_left
# 1190 "data/maps/Colchis/scripts.pory"
	face_down
# 1191 "data/maps/Colchis/scripts.pory"
	walk_left
# 1192 "data/maps/Colchis/scripts.pory"
	walk_up
# 1192 "data/maps/Colchis/scripts.pory"
	walk_up
# 1193 "data/maps/Colchis/scripts.pory"
	walk_right
# 1193 "data/maps/Colchis/scripts.pory"
	walk_right
# 1194 "data/maps/Colchis/scripts.pory"
	walk_down
# 1194 "data/maps/Colchis/scripts.pory"
	walk_down
# 1195 "data/maps/Colchis/scripts.pory"
	walk_left
# 1196 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1199 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 1200 "data/maps/Colchis/scripts.pory"
	walk_down
# 1200 "data/maps/Colchis/scripts.pory"
	walk_down
# 1200 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1203 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 1204 "data/maps/Colchis/scripts.pory"
	walk_right
# 1204 "data/maps/Colchis/scripts.pory"
	walk_right
# 1205 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1208 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 1209 "data/maps/Colchis/scripts.pory"
	walk_left
# 1209 "data/maps/Colchis/scripts.pory"
	walk_left
# 1210 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1213 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 1214 "data/maps/Colchis/scripts.pory"
	walk_down
# 1215 "data/maps/Colchis/scripts.pory"
	face_left
# 1216 "data/maps/Colchis/scripts.pory"
	face_up
# 1217 "data/maps/Colchis/scripts.pory"
	face_right
# 1218 "data/maps/Colchis/scripts.pory"
	face_down
# 1219 "data/maps/Colchis/scripts.pory"
	walk_down
# 1220 "data/maps/Colchis/scripts.pory"
	face_left
# 1221 "data/maps/Colchis/scripts.pory"
	face_up
# 1222 "data/maps/Colchis/scripts.pory"
	face_right
# 1223 "data/maps/Colchis/scripts.pory"
	face_down
# 1224 "data/maps/Colchis/scripts.pory"
	walk_down
# 1225 "data/maps/Colchis/scripts.pory"
	face_left
# 1226 "data/maps/Colchis/scripts.pory"
	face_up
# 1227 "data/maps/Colchis/scripts.pory"
	face_right
# 1228 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1231 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 1232 "data/maps/Colchis/scripts.pory"
	walk_right
# 1233 "data/maps/Colchis/scripts.pory"
	walk_up
# 1234 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1235 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1238 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 1239 "data/maps/Colchis/scripts.pory"
	walk_left
# 1240 "data/maps/Colchis/scripts.pory"
	walk_up
# 1241 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1242 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1245 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 1246 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1247 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1250 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 1251 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1252 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1255 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 1256 "data/maps/Colchis/scripts.pory"
	walk_left
# 1257 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1260 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 1261 "data/maps/Colchis/scripts.pory"
	walk_right
# 1262 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1265 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 1266 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1267 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1270 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 1271 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1272 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1275 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 1276 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1279 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 1280 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 1283 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 1284 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 1288 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 1289 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

Colchis_Script_MedeaDance_Text_0:
# 997 "data/maps/Colchis/scripts.pory"
	.string "END$"

Colchis_Text_JasonIntro1::
# 1292 "data/maps/Colchis/scripts.pory"
	.string "We've been ambushed but they do not\n"
	.string "attack.$"

Colchis_Text_GruntIntro1::
# 1297 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 1302 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntro2::
# 1306 "data/maps/Colchis/scripts.pory"
	.string "I think they say they'll take us to\n"
	.string "their king. We're hopelessly\l"
	.string "outnumbered so I think we should agree\l"
	.string "to go but what say you?$"

Colchis_Text_JasonIntroAccept::
# 1310 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 1314 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 1318 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 1327 "data/maps/Colchis/scripts.pory"
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
# 1332 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"
