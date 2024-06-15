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
	waitmovement 13
# 335 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_3
# 336 "data/maps/Colchis/scripts.pory"
	closemessage
# 339 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 340 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 341 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 342 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 343 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 344 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 345 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 347 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 349 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 350 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 351 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 352 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 353 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 355 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 358 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_MedeaDance_Text_4
# 359 "data/maps/Colchis/scripts.pory"
	closemessage
# 362 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 363 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 364 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 365 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 366 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 367 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 368 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 370 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 372 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 373 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 374 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 375 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 376 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 378 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 380 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 381 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 383 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 386 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan2
# 387 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 388 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 389 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 390 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 391 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 392 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer3A
# 393 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer4A
# 395 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 398 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 399 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 400 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 401 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 402 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 403 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 404 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 406 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 409 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 410 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 411 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 412 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 413 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 414 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 415 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 417 "data/maps/Colchis/scripts.pory"
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
# 425 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 426 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 428 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 431 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 432 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 433 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 434 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 435 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 436 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 437 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 439 "data/maps/Colchis/scripts.pory"
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
# 448 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 449 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 451 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 454 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 455 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 456 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 457 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 458 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 459 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 460 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 462 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 487 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
	return


# 492 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 493 "data/maps/Colchis/scripts.pory"
	walk_up
# 493 "data/maps/Colchis/scripts.pory"
	walk_up
# 493 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 496 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 497 "data/maps/Colchis/scripts.pory"
	walk_down
# 497 "data/maps/Colchis/scripts.pory"
	walk_down
# 497 "data/maps/Colchis/scripts.pory"
	walk_down
# 497 "data/maps/Colchis/scripts.pory"
	walk_down
# 497 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 500 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 501 "data/maps/Colchis/scripts.pory"
	walk_up
# 501 "data/maps/Colchis/scripts.pory"
	walk_up
# 501 "data/maps/Colchis/scripts.pory"
	walk_up
# 501 "data/maps/Colchis/scripts.pory"
	walk_up
# 501 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 504 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 505 "data/maps/Colchis/scripts.pory"
	walk_up
# 506 "data/maps/Colchis/scripts.pory"
	walk_right
# 506 "data/maps/Colchis/scripts.pory"
	walk_right
# 506 "data/maps/Colchis/scripts.pory"
	walk_right
# 506 "data/maps/Colchis/scripts.pory"
	walk_right
# 506 "data/maps/Colchis/scripts.pory"
	walk_right
# 507 "data/maps/Colchis/scripts.pory"
	walk_up
# 507 "data/maps/Colchis/scripts.pory"
	walk_up
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 508 "data/maps/Colchis/scripts.pory"
	walk_right
# 509 "data/maps/Colchis/scripts.pory"
	walk_up
# 509 "data/maps/Colchis/scripts.pory"
	walk_up
# 509 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 512 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 513 "data/maps/Colchis/scripts.pory"
	walk_up
# 513 "data/maps/Colchis/scripts.pory"
	walk_up
# 513 "data/maps/Colchis/scripts.pory"
	walk_up
# 513 "data/maps/Colchis/scripts.pory"
	walk_up
# 513 "data/maps/Colchis/scripts.pory"
	walk_up
# 513 "data/maps/Colchis/scripts.pory"
	walk_up
# 513 "data/maps/Colchis/scripts.pory"
	walk_up
# 513 "data/maps/Colchis/scripts.pory"
	walk_up
# 513 "data/maps/Colchis/scripts.pory"
	walk_up
# 513 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 516 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 517 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 520 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 521 "data/maps/Colchis/scripts.pory"
	face_right
# 522 "data/maps/Colchis/scripts.pory"
	face_up
# 523 "data/maps/Colchis/scripts.pory"
	face_left
# 524 "data/maps/Colchis/scripts.pory"
	face_down
# 525 "data/maps/Colchis/scripts.pory"
	face_right
# 526 "data/maps/Colchis/scripts.pory"
	face_up
# 527 "data/maps/Colchis/scripts.pory"
	face_left
# 528 "data/maps/Colchis/scripts.pory"
	face_down
# 529 "data/maps/Colchis/scripts.pory"
	face_right
# 530 "data/maps/Colchis/scripts.pory"
	face_up
# 531 "data/maps/Colchis/scripts.pory"
	face_left
# 532 "data/maps/Colchis/scripts.pory"
	face_down
# 533 "data/maps/Colchis/scripts.pory"
	face_right
# 534 "data/maps/Colchis/scripts.pory"
	face_up
# 535 "data/maps/Colchis/scripts.pory"
	face_left
# 536 "data/maps/Colchis/scripts.pory"
	face_down
# 537 "data/maps/Colchis/scripts.pory"
	face_right
# 538 "data/maps/Colchis/scripts.pory"
	face_up
# 539 "data/maps/Colchis/scripts.pory"
	face_left
# 540 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 543 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 544 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 544 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 545 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 548 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 549 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 549 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 550 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 553 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 554 "data/maps/Colchis/scripts.pory"
	walk_left
# 555 "data/maps/Colchis/scripts.pory"
	walk_up
# 555 "data/maps/Colchis/scripts.pory"
	walk_up
# 556 "data/maps/Colchis/scripts.pory"
	walk_right
# 556 "data/maps/Colchis/scripts.pory"
	walk_right
# 557 "data/maps/Colchis/scripts.pory"
	walk_down
# 557 "data/maps/Colchis/scripts.pory"
	walk_down
# 558 "data/maps/Colchis/scripts.pory"
	walk_left
# 559 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 562 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 563 "data/maps/Colchis/scripts.pory"
	walk_left
# 564 "data/maps/Colchis/scripts.pory"
	walk_up
# 564 "data/maps/Colchis/scripts.pory"
	walk_up
# 565 "data/maps/Colchis/scripts.pory"
	walk_right
# 565 "data/maps/Colchis/scripts.pory"
	walk_right
# 566 "data/maps/Colchis/scripts.pory"
	walk_down
# 566 "data/maps/Colchis/scripts.pory"
	walk_down
# 567 "data/maps/Colchis/scripts.pory"
	walk_left
# 568 "data/maps/Colchis/scripts.pory"
	face_down
# 569 "data/maps/Colchis/scripts.pory"
	walk_left
# 570 "data/maps/Colchis/scripts.pory"
	walk_up
# 570 "data/maps/Colchis/scripts.pory"
	walk_up
# 571 "data/maps/Colchis/scripts.pory"
	walk_right
# 571 "data/maps/Colchis/scripts.pory"
	walk_right
# 572 "data/maps/Colchis/scripts.pory"
	walk_down
# 572 "data/maps/Colchis/scripts.pory"
	walk_down
# 573 "data/maps/Colchis/scripts.pory"
	walk_left
# 574 "data/maps/Colchis/scripts.pory"
	face_down
# 575 "data/maps/Colchis/scripts.pory"
	walk_left
# 576 "data/maps/Colchis/scripts.pory"
	walk_up
# 576 "data/maps/Colchis/scripts.pory"
	walk_up
# 577 "data/maps/Colchis/scripts.pory"
	walk_right
# 577 "data/maps/Colchis/scripts.pory"
	walk_right
# 578 "data/maps/Colchis/scripts.pory"
	walk_down
# 578 "data/maps/Colchis/scripts.pory"
	walk_down
# 579 "data/maps/Colchis/scripts.pory"
	walk_left
# 580 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 583 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 584 "data/maps/Colchis/scripts.pory"
	walk_down
# 584 "data/maps/Colchis/scripts.pory"
	walk_down
# 584 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 587 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 588 "data/maps/Colchis/scripts.pory"
	walk_right
# 588 "data/maps/Colchis/scripts.pory"
	walk_right
# 589 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 592 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 593 "data/maps/Colchis/scripts.pory"
	walk_left
# 593 "data/maps/Colchis/scripts.pory"
	walk_left
# 594 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 597 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 598 "data/maps/Colchis/scripts.pory"
	walk_down
# 599 "data/maps/Colchis/scripts.pory"
	face_left
# 600 "data/maps/Colchis/scripts.pory"
	face_up
# 601 "data/maps/Colchis/scripts.pory"
	face_right
# 602 "data/maps/Colchis/scripts.pory"
	face_down
# 603 "data/maps/Colchis/scripts.pory"
	walk_down
# 604 "data/maps/Colchis/scripts.pory"
	face_left
# 605 "data/maps/Colchis/scripts.pory"
	face_up
# 606 "data/maps/Colchis/scripts.pory"
	face_right
# 607 "data/maps/Colchis/scripts.pory"
	face_down
# 608 "data/maps/Colchis/scripts.pory"
	walk_down
# 609 "data/maps/Colchis/scripts.pory"
	face_left
# 610 "data/maps/Colchis/scripts.pory"
	face_up
# 611 "data/maps/Colchis/scripts.pory"
	face_right
# 612 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 615 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 616 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 617 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 620 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 621 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 622 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 625 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 626 "data/maps/Colchis/scripts.pory"
	walk_left
# 627 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 630 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 631 "data/maps/Colchis/scripts.pory"
	walk_right
# 632 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 635 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 636 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 637 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 640 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 641 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 642 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 645 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 646 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 649 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 650 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 653 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 654 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 658 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 659 "data/maps/Colchis/scripts.pory"
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
# 335 "data/maps/Colchis/scripts.pory"
	.string "M12 SPIN 34 JOIN 56 COLUM$"

Colchis_Script_MedeaDance_Text_4:
# 358 "data/maps/Colchis/scripts.pory"
	.string "GROUPE DOWN WHILE 56 COLUMN$"

Colchis_Text_JasonIntro1::
# 662 "data/maps/Colchis/scripts.pory"
	.string "We've been ambushed but they do not\n"
	.string "attack.$"

Colchis_Text_GruntIntro1::
# 667 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 672 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntro2::
# 676 "data/maps/Colchis/scripts.pory"
	.string "I think they say they'll take us to\n"
	.string "their king. We're hopelessly\l"
	.string "outnumbered so I think we should agree\l"
	.string "to go but what say you?$"

Colchis_Text_JasonIntroAccept::
# 680 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 684 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 688 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"
