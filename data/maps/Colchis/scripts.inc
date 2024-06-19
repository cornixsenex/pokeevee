Colchis_MapScripts::
# 24 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 36 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
# 25 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_2
Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 30 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 26 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_IntroSetup
	goto Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 31 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_IntroDeclinedSetup
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 38 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_TempScript_SetupTestMedeaDance
# 39 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 10, Colchis_TempScript_TestMedeaDance
	.2byte 0


Colchis_TempScript_SetupTestMedeaDance::
# 46 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 47 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 53 "data/maps/Colchis/scripts.pory"
	lockall
# 54 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 55 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_IntroSetup::
# 61 "data/maps/Colchis/scripts.pory"
	removeobject 25
# 62 "data/maps/Colchis/scripts.pory"
	removeobject 26
# 64 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 25, 10, 59
# 65 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 26, 12, 59
# 67 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 25, MOVEMENT_TYPE_FACE_RIGHT
# 68 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_LEFT
# 70 "data/maps/Colchis/scripts.pory"
	addobject 25
# 71 "data/maps/Colchis/scripts.pory"
	addobject 26
# 73 "data/maps/Colchis/scripts.pory"
	showobjectat 25, MAP_COLCHIS
# 74 "data/maps/Colchis/scripts.pory"
	showobjectat 26, MAP_COLCHIS
	end


Colchis_Script_IntroDeclinedSetup::
# 81 "data/maps/Colchis/scripts.pory"
	removeobject 25
# 82 "data/maps/Colchis/scripts.pory"
	removeobject 26
# 83 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 85 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 25, 10, 59
# 86 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 26, 12, 59
# 87 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 11, 59
# 89 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 90 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 25, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 91 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
# 93 "data/maps/Colchis/scripts.pory"
	addobject 25
# 94 "data/maps/Colchis/scripts.pory"
	addobject 26
# 95 "data/maps/Colchis/scripts.pory"
	addobject 54
# 97 "data/maps/Colchis/scripts.pory"
	showobjectat 25, MAP_COLCHIS
# 98 "data/maps/Colchis/scripts.pory"
	showobjectat 26, MAP_COLCHIS
# 99 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	return


Colchis_Script_Jason::
# 105 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 106 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 107 "data/maps/Colchis/scripts.pory"
	closemessage
# 108 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 116 "data/maps/Colchis/scripts.pory"
	lockall
# 118 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 119 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 120 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 121 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 122 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 123 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 124 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 127 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 128 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 129 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 131 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 132 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 135 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 136 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 137 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 139 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 140 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 143 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 144 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 145 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 147 "data/maps/Colchis/scripts.pory"
	closemessage
# 150 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 151 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 152 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 153 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_YESNO
# 154 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 157 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Intro_2
# 165 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_FORCED_BATTLE
# 166 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 167 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDecline, MSGBOX_DEFAULT
# 168 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 169 "data/maps/Colchis/scripts.pory"
	closemessage
# 170 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 171 "data/maps/Colchis/scripts.pory"
	releaseall
# 172 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_IntroDeclinedSetup
Colchis_Script_Intro_1:
	end

Colchis_Script_Intro_2:
# 158 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroAccept, MSGBOX_DEFAULT
# 159 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 160 "data/maps/Colchis/scripts.pory"
	closemessage
# 161 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	goto Colchis_Script_Intro_1


Colchis_Script_EnterThroneRoom::
# 181 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 182 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom
# 183 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom
# 184 "data/maps/Colchis/scripts.pory"
	applymovement 25, Colchis_Movement_EnterThroneRoom
# 185 "data/maps/Colchis/scripts.pory"
	applymovement 26, Colchis_Movement_EnterThroneRoom
# 186 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 187 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 188 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 189 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 193 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 236 "data/maps/Colchis/scripts.pory"
	lockall
# 237 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 239 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 247 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 248 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 249 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 251 "data/maps/Colchis/scripts.pory"
	addobject 23
# 252 "data/maps/Colchis/scripts.pory"
	addobject 24
# 254 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 255 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 259 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 260 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 262 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 263 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 264 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_MedeaDance::
# 286 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 287 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 288 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 293 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 294 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 295 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 296 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 297 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 298 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 299 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 300 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 301 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 302 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 303 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 304 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 305 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 306 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 307 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 308 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 309 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 310 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 319 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 320 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 321 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 322 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 323 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 324 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 325 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 327 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 329 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 330 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 331 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 333 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 335 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 336 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 337 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 339 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 345 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 346 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 347 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 348 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 349 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 350 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 351 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 353 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 355 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 356 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 357 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 358 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 359 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 361 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 363 "data/maps/Colchis/scripts.pory"
	delay 25
# 365 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 366 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 367 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 368 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 369 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 371 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 378 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 379 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 380 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 381 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 382 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 383 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 384 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 386 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 388 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 389 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 390 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 391 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 392 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 393 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 395 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 397 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 398 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 399 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 400 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 401 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 403 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 405 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 406 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 407 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 408 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 409 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 411 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 413 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 414 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 415 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 416 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 417 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 419 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 421 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 422 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 423 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 424 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 425 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 427 "data/maps/Colchis/scripts.pory"
	waitmovement 16
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
# 438 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 439 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
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
	waitmovement 16
# 455 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 461 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 462 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 463 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 464 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 465 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 466 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 467 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 469 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 474 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 480 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 481 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 482 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 483 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 484 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 485 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 486 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 488 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 494 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 497 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 506 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 507 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 508 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 509 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 510 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 511 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 512 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 514 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 516 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 517 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 518 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 519 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 520 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 522 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 524 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 529 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 533 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 534 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 535 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 536 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 537 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 538 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 539 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 541 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 543 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 544 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 545 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 546 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 547 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 548 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 549 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 551 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 553 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 557 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 558 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 559 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 560 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 561 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 562 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 563 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 565 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 567 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 568 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 569 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 570 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 572 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 573 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 575 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 577 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 581 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 582 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 583 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 584 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 585 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 586 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 587 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 589 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 591 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 592 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 593 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 594 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 595 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 596 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 597 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 599 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 601 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 611 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 612 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 613 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 614 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 615 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 616 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 617 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 618 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 620 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 622 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 624 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 625 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 626 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 627 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 628 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 629 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 630 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 631 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 633 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 635 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 637 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 638 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 639 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 640 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 641 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 642 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 643 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 644 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 646 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 648 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 655 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 656 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 657 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 658 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 659 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 660 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 661 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 662 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 664 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 665 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 667 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 668 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 671 "data/maps/Colchis/scripts.pory"
	delay 25
# 675 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 676 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 680 "data/maps/Colchis/scripts.pory"
	delay 25
# 682 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 683 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 687 "data/maps/Colchis/scripts.pory"
	delay 25
# 689 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 690 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 694 "data/maps/Colchis/scripts.pory"
	delay 25
# 696 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 697 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 698 "data/maps/Colchis/scripts.pory"
	delay 25
# 703 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 704 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 705 "data/maps/Colchis/scripts.pory"
	delay 25
# 707 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 708 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 709 "data/maps/Colchis/scripts.pory"
	delay 25
# 714 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 715 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 716 "data/maps/Colchis/scripts.pory"
	delay 25
# 718 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 719 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 720 "data/maps/Colchis/scripts.pory"
	delay 25
# 722 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 723 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 724 "data/maps/Colchis/scripts.pory"
	delay 25
# 726 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 727 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 728 "data/maps/Colchis/scripts.pory"
	delay 25
# 733 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 734 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 735 "data/maps/Colchis/scripts.pory"
	delay 25
# 737 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 738 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 739 "data/maps/Colchis/scripts.pory"
	delay 25
# 741 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 742 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 743 "data/maps/Colchis/scripts.pory"
	delay 25
# 745 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 746 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 747 "data/maps/Colchis/scripts.pory"
	delay 25
# 749 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 751 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 752 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 753 "data/maps/Colchis/scripts.pory"
	delay 25
# 758 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 759 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 760 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 761 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 762 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 763 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 764 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 765 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 767 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 778 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 779 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 780 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 781 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 782 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 783 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 784 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 785 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 786 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 791 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 792 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 793 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 794 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 795 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 796 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 797 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 798 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 799 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 804 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 805 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 806 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 807 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 808 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 809 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 810 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 811 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 812 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 817 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 818 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 819 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 820 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 821 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 822 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 823 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 824 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 825 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 830 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 831 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 832 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 833 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 834 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 835 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 836 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 837 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 838 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 843 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 844 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 845 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 846 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 847 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 848 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 849 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 850 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 851 "data/maps/Colchis/scripts.pory"
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
# 892 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 893 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 894 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 895 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 896 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 897 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 898 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 899 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 900 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 902 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 903 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 904 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 905 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 906 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 907 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 908 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 909 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 910 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 912 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 913 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 914 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 915 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 916 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 918 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 919 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 920 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 925 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_0
# 926 "data/maps/Colchis/scripts.pory"
	closemessage
# 946 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
	return


Colchis_Script_MedeaDance_SpinAll::
# 952 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 953 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 954 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 955 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 956 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 957 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 958 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 959 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 964 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 965 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 966 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 967 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 968 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 969 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 970 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 971 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 972 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 973 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 974 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 975 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 976 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 977 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 978 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 979 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 980 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 985 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 986 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 987 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 988 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 989 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 990 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 991 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 992 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 993 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 994 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 995 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 996 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 997 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 998 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 999 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1001 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1002 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1004 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1005 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1006 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1007 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1008 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1009 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1010 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1011 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1012 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1013 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1014 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1015 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1016 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1017 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1018 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1019 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1020 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1021 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1022 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1023 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1024 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1025 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1026 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1027 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1028 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1029 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1030 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1031 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1032 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1033 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1034 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1035 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1036 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1037 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1038 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1039 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1040 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1041 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


# 1045 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 1046 "data/maps/Colchis/scripts.pory"
	walk_up
# 1046 "data/maps/Colchis/scripts.pory"
	walk_up
# 1046 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1049 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 1050 "data/maps/Colchis/scripts.pory"
	walk_down
# 1050 "data/maps/Colchis/scripts.pory"
	walk_down
# 1050 "data/maps/Colchis/scripts.pory"
	walk_down
# 1050 "data/maps/Colchis/scripts.pory"
	walk_down
# 1050 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1053 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 1054 "data/maps/Colchis/scripts.pory"
	walk_up
# 1054 "data/maps/Colchis/scripts.pory"
	walk_up
# 1054 "data/maps/Colchis/scripts.pory"
	walk_up
# 1054 "data/maps/Colchis/scripts.pory"
	walk_up
# 1054 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1057 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1058 "data/maps/Colchis/scripts.pory"
	walk_up
# 1059 "data/maps/Colchis/scripts.pory"
	walk_right
# 1059 "data/maps/Colchis/scripts.pory"
	walk_right
# 1059 "data/maps/Colchis/scripts.pory"
	walk_right
# 1059 "data/maps/Colchis/scripts.pory"
	walk_right
# 1059 "data/maps/Colchis/scripts.pory"
	walk_right
# 1060 "data/maps/Colchis/scripts.pory"
	walk_up
# 1060 "data/maps/Colchis/scripts.pory"
	walk_up
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1061 "data/maps/Colchis/scripts.pory"
	walk_right
# 1062 "data/maps/Colchis/scripts.pory"
	walk_up
# 1062 "data/maps/Colchis/scripts.pory"
	walk_up
# 1062 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1065 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 1066 "data/maps/Colchis/scripts.pory"
	walk_up
# 1066 "data/maps/Colchis/scripts.pory"
	walk_up
# 1066 "data/maps/Colchis/scripts.pory"
	walk_up
# 1066 "data/maps/Colchis/scripts.pory"
	walk_up
# 1066 "data/maps/Colchis/scripts.pory"
	walk_up
# 1066 "data/maps/Colchis/scripts.pory"
	walk_up
# 1066 "data/maps/Colchis/scripts.pory"
	walk_up
# 1066 "data/maps/Colchis/scripts.pory"
	walk_up
# 1066 "data/maps/Colchis/scripts.pory"
	walk_up
# 1066 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1069 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 1070 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1073 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 1074 "data/maps/Colchis/scripts.pory"
	face_right
# 1075 "data/maps/Colchis/scripts.pory"
	face_up
# 1076 "data/maps/Colchis/scripts.pory"
	face_left
# 1077 "data/maps/Colchis/scripts.pory"
	face_down
# 1078 "data/maps/Colchis/scripts.pory"
	face_right
# 1079 "data/maps/Colchis/scripts.pory"
	face_up
# 1080 "data/maps/Colchis/scripts.pory"
	face_left
# 1081 "data/maps/Colchis/scripts.pory"
	face_down
# 1082 "data/maps/Colchis/scripts.pory"
	face_right
# 1083 "data/maps/Colchis/scripts.pory"
	face_up
# 1084 "data/maps/Colchis/scripts.pory"
	face_left
# 1085 "data/maps/Colchis/scripts.pory"
	face_down
# 1086 "data/maps/Colchis/scripts.pory"
	face_right
# 1087 "data/maps/Colchis/scripts.pory"
	face_up
# 1088 "data/maps/Colchis/scripts.pory"
	face_left
# 1089 "data/maps/Colchis/scripts.pory"
	face_down
# 1090 "data/maps/Colchis/scripts.pory"
	face_right
# 1091 "data/maps/Colchis/scripts.pory"
	face_up
# 1092 "data/maps/Colchis/scripts.pory"
	face_left
# 1093 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1096 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 1097 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1097 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1098 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1101 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 1102 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1102 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1103 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1106 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 1107 "data/maps/Colchis/scripts.pory"
	walk_left
# 1108 "data/maps/Colchis/scripts.pory"
	walk_up
# 1108 "data/maps/Colchis/scripts.pory"
	walk_up
# 1109 "data/maps/Colchis/scripts.pory"
	walk_right
# 1109 "data/maps/Colchis/scripts.pory"
	walk_right
# 1110 "data/maps/Colchis/scripts.pory"
	walk_down
# 1110 "data/maps/Colchis/scripts.pory"
	walk_down
# 1111 "data/maps/Colchis/scripts.pory"
	walk_left
# 1112 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1115 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 1116 "data/maps/Colchis/scripts.pory"
	walk_left
# 1117 "data/maps/Colchis/scripts.pory"
	walk_up
# 1117 "data/maps/Colchis/scripts.pory"
	walk_up
# 1118 "data/maps/Colchis/scripts.pory"
	walk_right
# 1118 "data/maps/Colchis/scripts.pory"
	walk_right
# 1119 "data/maps/Colchis/scripts.pory"
	walk_down
# 1119 "data/maps/Colchis/scripts.pory"
	walk_down
# 1120 "data/maps/Colchis/scripts.pory"
	walk_left
# 1121 "data/maps/Colchis/scripts.pory"
	face_down
# 1122 "data/maps/Colchis/scripts.pory"
	walk_left
# 1123 "data/maps/Colchis/scripts.pory"
	walk_up
# 1123 "data/maps/Colchis/scripts.pory"
	walk_up
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1124 "data/maps/Colchis/scripts.pory"
	walk_right
# 1125 "data/maps/Colchis/scripts.pory"
	walk_down
# 1125 "data/maps/Colchis/scripts.pory"
	walk_down
# 1126 "data/maps/Colchis/scripts.pory"
	walk_left
# 1127 "data/maps/Colchis/scripts.pory"
	face_down
# 1128 "data/maps/Colchis/scripts.pory"
	walk_left
# 1129 "data/maps/Colchis/scripts.pory"
	walk_up
# 1129 "data/maps/Colchis/scripts.pory"
	walk_up
# 1130 "data/maps/Colchis/scripts.pory"
	walk_right
# 1130 "data/maps/Colchis/scripts.pory"
	walk_right
# 1131 "data/maps/Colchis/scripts.pory"
	walk_down
# 1131 "data/maps/Colchis/scripts.pory"
	walk_down
# 1132 "data/maps/Colchis/scripts.pory"
	walk_left
# 1133 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1136 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 1137 "data/maps/Colchis/scripts.pory"
	walk_down
# 1137 "data/maps/Colchis/scripts.pory"
	walk_down
# 1137 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1140 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 1141 "data/maps/Colchis/scripts.pory"
	walk_right
# 1141 "data/maps/Colchis/scripts.pory"
	walk_right
# 1142 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1145 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 1146 "data/maps/Colchis/scripts.pory"
	walk_left
# 1146 "data/maps/Colchis/scripts.pory"
	walk_left
# 1147 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1150 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 1151 "data/maps/Colchis/scripts.pory"
	walk_down
# 1152 "data/maps/Colchis/scripts.pory"
	face_left
# 1153 "data/maps/Colchis/scripts.pory"
	face_up
# 1154 "data/maps/Colchis/scripts.pory"
	face_right
# 1155 "data/maps/Colchis/scripts.pory"
	face_down
# 1156 "data/maps/Colchis/scripts.pory"
	walk_down
# 1157 "data/maps/Colchis/scripts.pory"
	face_left
# 1158 "data/maps/Colchis/scripts.pory"
	face_up
# 1159 "data/maps/Colchis/scripts.pory"
	face_right
# 1160 "data/maps/Colchis/scripts.pory"
	face_down
# 1161 "data/maps/Colchis/scripts.pory"
	walk_down
# 1162 "data/maps/Colchis/scripts.pory"
	face_left
# 1163 "data/maps/Colchis/scripts.pory"
	face_up
# 1164 "data/maps/Colchis/scripts.pory"
	face_right
# 1165 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1168 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 1169 "data/maps/Colchis/scripts.pory"
	walk_right
# 1170 "data/maps/Colchis/scripts.pory"
	walk_up
# 1171 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1172 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1175 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 1176 "data/maps/Colchis/scripts.pory"
	walk_left
# 1177 "data/maps/Colchis/scripts.pory"
	walk_up
# 1178 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1179 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1182 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 1183 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 1184 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1187 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 1188 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 1189 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 1192 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 1193 "data/maps/Colchis/scripts.pory"
	walk_left
# 1194 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 1197 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 1198 "data/maps/Colchis/scripts.pory"
	walk_right
# 1199 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 1202 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 1203 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1204 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1207 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 1208 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1209 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1212 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 1213 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1216 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 1217 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 1220 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 1221 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 1225 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 1226 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

Colchis_Script_MedeaDance_Text_0:
# 925 "data/maps/Colchis/scripts.pory"
	.string "END$"

Colchis_Text_JasonIntro1::
# 1229 "data/maps/Colchis/scripts.pory"
	.string "We've been ambushed but they do not\n"
	.string "attack.$"

Colchis_Text_GruntIntro1::
# 1234 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 1239 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntro2::
# 1243 "data/maps/Colchis/scripts.pory"
	.string "I think they say they'll take us to\n"
	.string "their king. We're hopelessly\l"
	.string "outnumbered so I think we should agree\l"
	.string "to go but what say you?$"

Colchis_Text_JasonIntroAccept::
# 1247 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 1251 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 1255 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"
