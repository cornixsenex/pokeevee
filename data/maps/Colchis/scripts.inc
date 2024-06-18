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
# 283 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_0
# 284 "data/maps/Colchis/scripts.pory"
	closemessage
# 286 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 287 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 288 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 290 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_1
# 291 "data/maps/Colchis/scripts.pory"
	closemessage
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
# 312 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_2
# 313 "data/maps/Colchis/scripts.pory"
	closemessage
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
# 341 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_3
# 342 "data/maps/Colchis/scripts.pory"
	closemessage
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
# 374 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_4
# 375 "data/maps/Colchis/scripts.pory"
	closemessage
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
# 429 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_5
# 430 "data/maps/Colchis/scripts.pory"
	closemessage
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
# 451 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_6
# 452 "data/maps/Colchis/scripts.pory"
	closemessage
# 455 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 457 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_7
# 458 "data/maps/Colchis/scripts.pory"
	closemessage
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
# 471 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_8
# 472 "data/maps/Colchis/scripts.pory"
	closemessage
# 474 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 476 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_9
# 477 "data/maps/Colchis/scripts.pory"
	closemessage
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
# 490 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_10
# 491 "data/maps/Colchis/scripts.pory"
	closemessage
# 494 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 497 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 502 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_11
# 503 "data/maps/Colchis/scripts.pory"
	closemessage
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
# 526 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_12
# 527 "data/maps/Colchis/scripts.pory"
	closemessage
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
# 604 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_13
# 605 "data/maps/Colchis/scripts.pory"
	closemessage
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
# 651 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_14
# 652 "data/maps/Colchis/scripts.pory"
	closemessage
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
# 669 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 684 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_15
# 685 "data/maps/Colchis/scripts.pory"
	closemessage
# 687 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
	return


Colchis_Script_MedeaDance_SpinAll::
# 693 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 694 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 695 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 696 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 697 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 698 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 699 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 700 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 705 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 706 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 707 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 708 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 709 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 710 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 711 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 712 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 713 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 714 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 715 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 716 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 717 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 718 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 719 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 720 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 721 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


# 725 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 726 "data/maps/Colchis/scripts.pory"
	walk_up
# 726 "data/maps/Colchis/scripts.pory"
	walk_up
# 726 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 729 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 730 "data/maps/Colchis/scripts.pory"
	walk_down
# 730 "data/maps/Colchis/scripts.pory"
	walk_down
# 730 "data/maps/Colchis/scripts.pory"
	walk_down
# 730 "data/maps/Colchis/scripts.pory"
	walk_down
# 730 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 733 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 734 "data/maps/Colchis/scripts.pory"
	walk_up
# 734 "data/maps/Colchis/scripts.pory"
	walk_up
# 734 "data/maps/Colchis/scripts.pory"
	walk_up
# 734 "data/maps/Colchis/scripts.pory"
	walk_up
# 734 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 737 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 738 "data/maps/Colchis/scripts.pory"
	walk_up
# 739 "data/maps/Colchis/scripts.pory"
	walk_right
# 739 "data/maps/Colchis/scripts.pory"
	walk_right
# 739 "data/maps/Colchis/scripts.pory"
	walk_right
# 739 "data/maps/Colchis/scripts.pory"
	walk_right
# 739 "data/maps/Colchis/scripts.pory"
	walk_right
# 740 "data/maps/Colchis/scripts.pory"
	walk_up
# 740 "data/maps/Colchis/scripts.pory"
	walk_up
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 741 "data/maps/Colchis/scripts.pory"
	walk_right
# 742 "data/maps/Colchis/scripts.pory"
	walk_up
# 742 "data/maps/Colchis/scripts.pory"
	walk_up
# 742 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 745 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 746 "data/maps/Colchis/scripts.pory"
	walk_up
# 746 "data/maps/Colchis/scripts.pory"
	walk_up
# 746 "data/maps/Colchis/scripts.pory"
	walk_up
# 746 "data/maps/Colchis/scripts.pory"
	walk_up
# 746 "data/maps/Colchis/scripts.pory"
	walk_up
# 746 "data/maps/Colchis/scripts.pory"
	walk_up
# 746 "data/maps/Colchis/scripts.pory"
	walk_up
# 746 "data/maps/Colchis/scripts.pory"
	walk_up
# 746 "data/maps/Colchis/scripts.pory"
	walk_up
# 746 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 749 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 750 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 753 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 754 "data/maps/Colchis/scripts.pory"
	face_right
# 755 "data/maps/Colchis/scripts.pory"
	face_up
# 756 "data/maps/Colchis/scripts.pory"
	face_left
# 757 "data/maps/Colchis/scripts.pory"
	face_down
# 758 "data/maps/Colchis/scripts.pory"
	face_right
# 759 "data/maps/Colchis/scripts.pory"
	face_up
# 760 "data/maps/Colchis/scripts.pory"
	face_left
# 761 "data/maps/Colchis/scripts.pory"
	face_down
# 762 "data/maps/Colchis/scripts.pory"
	face_right
# 763 "data/maps/Colchis/scripts.pory"
	face_up
# 764 "data/maps/Colchis/scripts.pory"
	face_left
# 765 "data/maps/Colchis/scripts.pory"
	face_down
# 766 "data/maps/Colchis/scripts.pory"
	face_right
# 767 "data/maps/Colchis/scripts.pory"
	face_up
# 768 "data/maps/Colchis/scripts.pory"
	face_left
# 769 "data/maps/Colchis/scripts.pory"
	face_down
# 770 "data/maps/Colchis/scripts.pory"
	face_right
# 771 "data/maps/Colchis/scripts.pory"
	face_up
# 772 "data/maps/Colchis/scripts.pory"
	face_left
# 773 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 776 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 777 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 777 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 778 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 781 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 782 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 782 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 783 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 786 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 787 "data/maps/Colchis/scripts.pory"
	walk_left
# 788 "data/maps/Colchis/scripts.pory"
	walk_up
# 788 "data/maps/Colchis/scripts.pory"
	walk_up
# 789 "data/maps/Colchis/scripts.pory"
	walk_right
# 789 "data/maps/Colchis/scripts.pory"
	walk_right
# 790 "data/maps/Colchis/scripts.pory"
	walk_down
# 790 "data/maps/Colchis/scripts.pory"
	walk_down
# 791 "data/maps/Colchis/scripts.pory"
	walk_left
# 792 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 795 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 796 "data/maps/Colchis/scripts.pory"
	walk_left
# 797 "data/maps/Colchis/scripts.pory"
	walk_up
# 797 "data/maps/Colchis/scripts.pory"
	walk_up
# 798 "data/maps/Colchis/scripts.pory"
	walk_right
# 798 "data/maps/Colchis/scripts.pory"
	walk_right
# 799 "data/maps/Colchis/scripts.pory"
	walk_down
# 799 "data/maps/Colchis/scripts.pory"
	walk_down
# 800 "data/maps/Colchis/scripts.pory"
	walk_left
# 801 "data/maps/Colchis/scripts.pory"
	face_down
# 802 "data/maps/Colchis/scripts.pory"
	walk_left
# 803 "data/maps/Colchis/scripts.pory"
	walk_up
# 803 "data/maps/Colchis/scripts.pory"
	walk_up
# 804 "data/maps/Colchis/scripts.pory"
	walk_right
# 804 "data/maps/Colchis/scripts.pory"
	walk_right
# 805 "data/maps/Colchis/scripts.pory"
	walk_down
# 805 "data/maps/Colchis/scripts.pory"
	walk_down
# 806 "data/maps/Colchis/scripts.pory"
	walk_left
# 807 "data/maps/Colchis/scripts.pory"
	face_down
# 808 "data/maps/Colchis/scripts.pory"
	walk_left
# 809 "data/maps/Colchis/scripts.pory"
	walk_up
# 809 "data/maps/Colchis/scripts.pory"
	walk_up
# 810 "data/maps/Colchis/scripts.pory"
	walk_right
# 810 "data/maps/Colchis/scripts.pory"
	walk_right
# 811 "data/maps/Colchis/scripts.pory"
	walk_down
# 811 "data/maps/Colchis/scripts.pory"
	walk_down
# 812 "data/maps/Colchis/scripts.pory"
	walk_left
# 813 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 816 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 817 "data/maps/Colchis/scripts.pory"
	walk_down
# 817 "data/maps/Colchis/scripts.pory"
	walk_down
# 817 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 820 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 821 "data/maps/Colchis/scripts.pory"
	walk_right
# 821 "data/maps/Colchis/scripts.pory"
	walk_right
# 822 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 825 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 826 "data/maps/Colchis/scripts.pory"
	walk_left
# 826 "data/maps/Colchis/scripts.pory"
	walk_left
# 827 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 830 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 831 "data/maps/Colchis/scripts.pory"
	walk_down
# 832 "data/maps/Colchis/scripts.pory"
	face_left
# 833 "data/maps/Colchis/scripts.pory"
	face_up
# 834 "data/maps/Colchis/scripts.pory"
	face_right
# 835 "data/maps/Colchis/scripts.pory"
	face_down
# 836 "data/maps/Colchis/scripts.pory"
	walk_down
# 837 "data/maps/Colchis/scripts.pory"
	face_left
# 838 "data/maps/Colchis/scripts.pory"
	face_up
# 839 "data/maps/Colchis/scripts.pory"
	face_right
# 840 "data/maps/Colchis/scripts.pory"
	face_down
# 841 "data/maps/Colchis/scripts.pory"
	walk_down
# 842 "data/maps/Colchis/scripts.pory"
	face_left
# 843 "data/maps/Colchis/scripts.pory"
	face_up
# 844 "data/maps/Colchis/scripts.pory"
	face_right
# 845 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 848 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 849 "data/maps/Colchis/scripts.pory"
	walk_right
# 850 "data/maps/Colchis/scripts.pory"
	walk_up
# 851 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 852 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 855 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 856 "data/maps/Colchis/scripts.pory"
	walk_left
# 857 "data/maps/Colchis/scripts.pory"
	walk_up
# 858 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 859 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 862 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 863 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 864 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 867 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 868 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 869 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 872 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 873 "data/maps/Colchis/scripts.pory"
	walk_left
# 874 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 877 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 878 "data/maps/Colchis/scripts.pory"
	walk_right
# 879 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 882 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 883 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 884 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 887 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 888 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 889 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 892 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 893 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 896 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 897 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 900 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 901 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 905 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 906 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

Colchis_Script_MedeaDance_Text_0:
# 283 "data/maps/Colchis/scripts.pory"
	.string "CAMERA PAN$"

Colchis_Script_MedeaDance_Text_1:
# 290 "data/maps/Colchis/scripts.pory"
	.string "MEDEA SOLO$"

Colchis_Script_MedeaDance_Text_2:
# 312 "data/maps/Colchis/scripts.pory"
	.string "M SPIN 12 JOIN 3456 COLUMN$"

Colchis_Script_MedeaDance_Text_3:
# 341 "data/maps/Colchis/scripts.pory"
	.string "M12 SPIN 34 JOIN 56 COLUM$"

Colchis_Script_MedeaDance_Text_4:
# 374 "data/maps/Colchis/scripts.pory"
	.string "GROUPE DOWN WHILE 56 COLUMN$"

Colchis_Script_MedeaDance_Text_5:
# 429 "data/maps/Colchis/scripts.pory"
	.string "56 JOIN$"

Colchis_Script_MedeaDance_Text_6:
# 451 "data/maps/Colchis/scripts.pory"
	.string "ALL SPIN - PRE SHAPE 1$"

Colchis_Script_MedeaDance_Text_7:
# 457 "data/maps/Colchis/scripts.pory"
	.string "SHAPE 1$"

Colchis_Script_MedeaDance_Text_8:
# 471 "data/maps/Colchis/scripts.pory"
	.string "SPIN$"

Colchis_Script_MedeaDance_Text_9:
# 476 "data/maps/Colchis/scripts.pory"
	.string "SHAPE 2$"

Colchis_Script_MedeaDance_Text_10:
# 490 "data/maps/Colchis/scripts.pory"
	.string "SPIN X 2$"

Colchis_Script_MedeaDance_Text_11:
# 502 "data/maps/Colchis/scripts.pory"
	.string "BIG TRICK - STEP 1$"

Colchis_Script_MedeaDance_Text_12:
# 526 "data/maps/Colchis/scripts.pory"
	.string "VAMP 1$"

Colchis_Script_MedeaDance_Text_13:
# 604 "data/maps/Colchis/scripts.pory"
	.string "Carry Medea to Column$"

Colchis_Script_MedeaDance_Text_14:
# 651 "data/maps/Colchis/scripts.pory"
	.string "Medea to Altar group prep vamp$"

Colchis_Script_MedeaDance_Text_15:
# 684 "data/maps/Colchis/scripts.pory"
	.string "END$"

Colchis_Text_JasonIntro1::
# 909 "data/maps/Colchis/scripts.pory"
	.string "We've been ambushed but they do not\n"
	.string "attack.$"

Colchis_Text_GruntIntro1::
# 914 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 919 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntro2::
# 923 "data/maps/Colchis/scripts.pory"
	.string "I think they say they'll take us to\n"
	.string "their king. We're hopelessly\l"
	.string "outnumbered so I think we should agree\l"
	.string "to go but what say you?$"

Colchis_Text_JasonIntroAccept::
# 927 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 931 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 935 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"
