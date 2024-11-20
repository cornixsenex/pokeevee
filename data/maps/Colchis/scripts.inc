Colchis_MapScripts::
# 111 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 132 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 138 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME
# 152 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 112 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 115 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 118 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 11
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 121 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 124 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 17
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 127 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
	return

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 113 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_ShowIntro
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 116 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupJail
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 119 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_ShowJasonAndMedeaAtSanctuary
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 122 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupLostKid
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 121 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 125 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_ShowNannyWithGuard
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 128 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
# 133 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 134 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME:
# 140 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_MAREEP, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2
Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 145 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 141 "data/maps/Colchis/scripts.pory"
	hideobjectat 2, MAP_COLCHIS
# 142 "data/maps/Colchis/scripts.pory"
	removeobject 2
	goto Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 146 "data/maps/Colchis/scripts.pory"
	hideobjectat 1, MAP_COLCHIS
# 147 "data/maps/Colchis/scripts.pory"
	removeobject 1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 153 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
# 155 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_WarpSanctum::
# 163 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 164 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 34, 56
	end


Colchis_TempScript_SetupTestMedeaDance::
# 169 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 170 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 175 "data/maps/Colchis/scripts.pory"
	lockall
# 176 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 177 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_ShowIntro::
# 182 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 11, 59
# 183 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 185 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 51, 14
# 186 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	end


Colchis_Script_SetupJail::
# 192 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 193 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
	end


Colchis_Script_ShowJasonAndMedeaAtSanctuary::
# 198 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 199 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 200 "data/maps/Colchis/scripts.pory"
	addobject 54
# 201 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 203 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 204 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 205 "data/maps/Colchis/scripts.pory"
	addobject 4
# 206 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 212 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 213 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 214 "data/maps/Colchis/scripts.pory"
	closemessage
# 215 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 222 "data/maps/Colchis/scripts.pory"
	lockall
# 224 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 226 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 227 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 228 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 229 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 230 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 231 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 234 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 235 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 236 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 239 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 240 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 241 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 246 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 247 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 248 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 251 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 252 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 253 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 254 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 255 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 256 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 257 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 258 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 259 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 260 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 261 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 262 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 263 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 264 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 265 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 266 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 267 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 270 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 271 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 272 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 273 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 274 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 275 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 276 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 277 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 278 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 279 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 280 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 281 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 282 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 285 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 286 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 287 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 290 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 291 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 292 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 296 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 297 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 298 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 299 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 300 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 301 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 302 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 303 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 304 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 305 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 307 "data/maps/Colchis/scripts.pory"
	closemessage
# 309 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 316 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 317 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 318 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 319 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 320 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 321 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 322 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 323 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 324 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 327 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 328 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 329 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 331 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 332 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 333 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 334 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 335 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 336 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 337 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 341 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 347 "data/maps/Colchis/scripts.pory"
	lockall
# 348 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 350 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 357 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 358 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 359 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 361 "data/maps/Colchis/scripts.pory"
	addobject 23
# 362 "data/maps/Colchis/scripts.pory"
	addobject 24
# 364 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 365 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 369 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 370 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 372 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 373 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 374 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 377 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 378 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPre, MSGBOX_DEFAULT
# 379 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 380 "data/maps/Colchis/scripts.pory"
	closemessage
# 383 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
# 386 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 387 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPost, MSGBOX_DEFAULT
# 388 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 389 "data/maps/Colchis/scripts.pory"
	closemessage
# 392 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleExitA
# 393 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleExitB
# 394 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 397 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 398 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 400 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 23, 0, 0
# 401 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 24, 2, 0
# 403 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_FACE_DOWN
# 404 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_UP
# 406 "data/maps/Colchis/scripts.pory"
	addobject 23
# 407 "data/maps/Colchis/scripts.pory"
	addobject 24
# 409 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 410 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
	return


Colchis_Script_MedeaDance::
# 420 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 421 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 422 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 424 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 425 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 426 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 431 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 432 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 433 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 434 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 435 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 436 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 437 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 438 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 439 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 440 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 441 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 442 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 443 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 444 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 445 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 446 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 447 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 448 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 457 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 458 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 459 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 460 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 461 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 462 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 463 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 465 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 467 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 468 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 469 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 471 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 473 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 474 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 475 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 477 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 483 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 484 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 485 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 486 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 487 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 488 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 489 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 491 "data/maps/Colchis/scripts.pory"
	waitmovement 13
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
# 499 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 501 "data/maps/Colchis/scripts.pory"
	delay 25
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
# 516 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 517 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 518 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 519 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 520 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 522 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 524 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 526 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 527 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 528 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 529 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 530 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 531 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 533 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 535 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 536 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 537 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 538 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 539 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 541 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 543 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 544 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 545 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 546 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 547 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 549 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 551 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 552 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 553 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 554 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 555 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 557 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 559 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 560 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 561 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 562 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 563 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 565 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 572 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 573 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 574 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 575 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 576 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 577 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 579 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 581 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 582 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 583 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 584 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 585 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 587 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 593 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 599 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 600 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 601 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 602 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 603 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 604 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 605 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 607 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 612 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 618 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 619 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 620 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 621 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 622 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 623 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 624 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 626 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 632 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 635 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
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
# 653 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 654 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 655 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 656 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 657 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 658 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 659 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 661 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 666 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
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
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 681 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 682 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 683 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 684 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 685 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 686 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 688 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 690 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
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
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 705 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 706 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 707 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 708 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 709 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 710 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 712 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 714 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
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
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 729 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 730 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 731 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 732 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 733 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 734 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 736 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 738 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 747 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 748 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 749 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 750 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 751 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 752 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 753 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 754 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 756 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 758 "data/maps/Colchis/scripts.pory"
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
	applymovement 15, Common_Movement_WalkSouthEast
# 767 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 769 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 771 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 773 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 774 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 775 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 776 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 777 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 778 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 779 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 780 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 782 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 784 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 790 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 791 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 792 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 793 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 794 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 795 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 796 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 797 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 799 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 800 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 802 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 803 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 806 "data/maps/Colchis/scripts.pory"
	delay 25
# 810 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 811 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 815 "data/maps/Colchis/scripts.pory"
	delay 25
# 817 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 818 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 822 "data/maps/Colchis/scripts.pory"
	delay 25
# 824 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 825 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 829 "data/maps/Colchis/scripts.pory"
	delay 25
# 831 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 832 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 833 "data/maps/Colchis/scripts.pory"
	delay 25
# 838 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 839 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 840 "data/maps/Colchis/scripts.pory"
	delay 25
# 842 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 843 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 844 "data/maps/Colchis/scripts.pory"
	delay 25
# 849 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 850 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 851 "data/maps/Colchis/scripts.pory"
	delay 25
# 853 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 854 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 855 "data/maps/Colchis/scripts.pory"
	delay 25
# 857 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 858 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 859 "data/maps/Colchis/scripts.pory"
	delay 25
# 861 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 862 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 863 "data/maps/Colchis/scripts.pory"
	delay 25
# 868 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 869 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 870 "data/maps/Colchis/scripts.pory"
	delay 25
# 872 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 873 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 874 "data/maps/Colchis/scripts.pory"
	delay 25
# 876 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 877 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 878 "data/maps/Colchis/scripts.pory"
	delay 25
# 880 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 881 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 882 "data/maps/Colchis/scripts.pory"
	delay 25
# 884 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 886 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 887 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 888 "data/maps/Colchis/scripts.pory"
	delay 25
# 893 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 894 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 895 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 896 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 897 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 898 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 899 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 900 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 902 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 911 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 912 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 913 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 914 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 915 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 916 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 917 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 918 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 919 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 924 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 925 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 926 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 927 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 928 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 929 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 930 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 931 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 932 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 937 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 938 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 939 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 940 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 941 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 942 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 943 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 944 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 945 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 950 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 951 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 952 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 953 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 954 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 955 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 956 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 957 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 958 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 963 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 964 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 965 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 966 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 967 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 968 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 969 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 970 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 971 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 976 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 977 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 978 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 979 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 980 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 981 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 982 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 983 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 984 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 989 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 990 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 991 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 992 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 993 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 994 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 995 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 996 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 997 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1002 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1004 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1005 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1006 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1007 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1008 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1009 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1010 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1015 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1016 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1017 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 1018 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 1019 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 1020 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 1021 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 1022 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 1023 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1025 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1026 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1027 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1028 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1029 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1030 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1031 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1032 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1033 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1035 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1036 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1037 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 1038 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 1039 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1040 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1041 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1042 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1043 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1045 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1046 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1047 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1048 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1049 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1051 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1052 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1053 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1058 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1059 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1061 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1063 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1071 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1072 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1073 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1074 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1075 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1076 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1081 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
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
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1090 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1091 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1092 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1093 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1094 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1095 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1096 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1097 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1102 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1103 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1104 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1105 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1106 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1107 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1108 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1109 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1110 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1111 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1112 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1113 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1114 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1115 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1116 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1117 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1118 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1119 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1120 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1121 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1122 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1123 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1124 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1125 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1126 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1127 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1128 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1129 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1130 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1131 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1132 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1133 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1134 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1135 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1136 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1137 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1138 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1139 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1140 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1141 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1142 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1143 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1144 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1145 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1146 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1147 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1148 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1149 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1150 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1151 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1152 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1153 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1154 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1155 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1156 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1157 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1158 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1169 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1170 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1171 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1176 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1177 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1178 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1179 "data/maps/Colchis/scripts.pory"
	closemessage
# 1181 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1185 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1186 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1187 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1188 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1189 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1191 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1192 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1193 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1195 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1196 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1197 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1198 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1206 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1207 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1208 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1213 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1214 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1215 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1222 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1223 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1224 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1228 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1229 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1230 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1239 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1240 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1241 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1242 "data/maps/Colchis/scripts.pory"
	closemessage
# 1245 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1246 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1247 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1256 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1257 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1258 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1263 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1264 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1265 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1268 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1269 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1270 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1271 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1272 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1276 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1277 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1278 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1282 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1283 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1284 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1286 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1287 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1288 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1292 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1293 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1295 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1296 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1302 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1303 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1304 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1305 "data/maps/Colchis/scripts.pory"
	closemessage
# 1308 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1309 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1312 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1313 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1321 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1327 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1328 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1329 "data/maps/Colchis/scripts.pory"
	closemessage
# 1330 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1334 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1335 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1338 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1339 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1340 "data/maps/Colchis/scripts.pory"
	closemessage
# 1341 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1344 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1345 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1346 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1347 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1350 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1351 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1352 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1353 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1354 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1357 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1358 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1359 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1360 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1361 "data/maps/Colchis/scripts.pory"
	delay 30
# 1362 "data/maps/Colchis/scripts.pory"
	waitse
# 1365 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonApproachPlayer
# 1366 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1369 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1370 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1371 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1374 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1375 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1376 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1379 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1380 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1381 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1384 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1385 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1386 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1389 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1390 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1391 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1393 "data/maps/Colchis/scripts.pory"
	closemessage
# 1396 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1397 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1400 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1401 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1402 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1403 "data/maps/Colchis/scripts.pory"
	closemessage
# 1406 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1407 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1410 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1411 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1412 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1415 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1416 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1417 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1419 "data/maps/Colchis/scripts.pory"
	closemessage
# 1423 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonExit
# 1424 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonExit
# 1425 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerPrisonExit
# 1426 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1428 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1436 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1437 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1440 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1441 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1442 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1444 "data/maps/Colchis/scripts.pory"
	closemessage
# 1447 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1448 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1451 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1452 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1453 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1454 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1455 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1458 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1459 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 1
# 1460 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1461 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 1
# 1464 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1465 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1468 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1469 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1470 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1473 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1474 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1475 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1478 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1479 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1482 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1483 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1484 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1486 "data/maps/Colchis/scripts.pory"
	closemessage
# 1489 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1490 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1493 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1494 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1496 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1497 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1499 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1500 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1502 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1503 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1504 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1507 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1508 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1509 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1510 "data/maps/Colchis/scripts.pory"
	closemessage
# 1513 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1514 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1517 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1518 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1521 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1535 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1536 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1537 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1538 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1539 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1541 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1542 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1543 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1544 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1545 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1547 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_LugiaTest::
# 1553 "data/maps/Colchis/scripts.pory"
	lockall
# 1554 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1555 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1556 "data/maps/Colchis/scripts.pory"
	closemessage
# 1557 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_Lugia::
# 1562 "data/maps/Colchis/scripts.pory"
	lockall
# 1563 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1564 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 1565 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1566 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_LUGIA
# 1567 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1568 "data/maps/Colchis/scripts.pory"
	setwildbattle SPECIES_LUGIA, 18
# 1569 "data/maps/Colchis/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1570 "data/maps/Colchis/scripts.pory"
	waitstate
# 1571 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1572 "data/maps/Colchis/scripts.pory"
	removeobject 1
# 1573 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTriggerA::
# 1579 "data/maps/Colchis/scripts.pory"
	lockall
# 1580 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 0
# 1581 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTriggerB::
# 1585 "data/maps/Colchis/scripts.pory"
	lockall
# 1586 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 1
# 1587 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTrigger::
# 1592 "data/maps/Colchis/scripts.pory"
	lockall
# 1595 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1596 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1597 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1598 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1599 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1600 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1603 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_4
Colchis_Script_SanctumTrigger_3:
# 1607 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 12
# 1609 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerEndIntro
# 1611 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_7
# 1630 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_8
# 1652 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1653 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1654 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
# 1655 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
Colchis_Script_SanctumTrigger_1:
# 1658 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_SanctumTrigger_2:
# 1604 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_4:
# 1603 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_2
	goto Colchis_Script_SanctumTrigger_3

Colchis_Script_SanctumTrigger_7:
# 1614 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1617 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1621 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_8:
# 1631 "data/maps/Colchis/scripts.pory"
	closemessage
# 1633 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1634 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumTrigger_12
# 1639 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1640 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1642 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1643 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumWilds, MSGBOX_DEFAULT
# 1644 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1649 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_12:
# 1636 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Exeunt
	goto Colchis_Script_SanctumTrigger_1


Colchis_Script_SanctumTriggerReturn::
# 1663 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1664 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger1, MSGBOX_DEFAULT
# 1665 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1667 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1668 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger1, MSGBOX_DEFAULT
# 1669 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1671 "data/maps/Colchis/scripts.pory"
	closemessage
# 1674 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1675 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_SanctumTriggerEndIntro::
# 1681 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1682 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1683 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumTriggerMedeaExit::
# 1688 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1689 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger2, MSGBOX_DEFAULT
# 1690 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1691 "data/maps/Colchis/scripts.pory"
	closemessage
# 1692 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTriggerMedeaExit_2
# 1695 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3B
Colchis_Script_SanctumTriggerMedeaExit_1:
# 1697 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumTriggerMedeaExit_2:
# 1693 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3A
	goto Colchis_Script_SanctumTriggerMedeaExit_1


Colchis_Script_LugiaChaseTrigger::
# 1702 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1703 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaChaseTrigger_2
Colchis_Script_LugiaChaseTrigger_1:
	end

Colchis_Script_LugiaChaseTrigger_2:
# 1704 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	goto Colchis_Script_LugiaChaseTrigger_1


Colchis_Script_LugiaWanderTrigger::
# 1710 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1711 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaWanderTrigger_2
Colchis_Script_LugiaWanderTrigger_1:
	end

Colchis_Script_LugiaWanderTrigger_2:
# 1712 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	goto Colchis_Script_LugiaWanderTrigger_1


Colchis_Script_ShinyMareep::
# 1718 "data/maps/Colchis/scripts.pory"
	lockall
# 1719 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1720 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 1721 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1722 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1723 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1724 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1725 "data/maps/Colchis/scripts.pory"
	waitstate
# 1726 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1727 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1728 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumApproachJason::
# 1733 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumApproachJason_2
# 1736 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3B
Colchis_Script_SanctumApproachJason_1:
# 1738 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1740 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1741 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumApproachJason_2:
# 1734 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3A
	goto Colchis_Script_SanctumApproachJason_1


Colchis_Script_SanctumJasonBattle::
# 1747 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1748 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1750 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1751 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger3, MSGBOX_DEFAULT
# 1752 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1753 "data/maps/Colchis/scripts.pory"
	closemessage
# 1755 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_JASON, Colchis_Text_JasonLost
# 1757 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1758 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPost, MSGBOX_DEFAULT
# 1759 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumMedeaReturn::
# 1766 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1767 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1768 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1770 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1771 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1772 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1775 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1776 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumMedeaReturn_Text_0, MSGBOX_DEFAULT
# 1777 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1778 "data/maps/Colchis/scripts.pory"
	closemessage
# 1781 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn
# 1782 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1785 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1786 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn1, MSGBOX_DEFAULT
# 1787 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1788 "data/maps/Colchis/scripts.pory"
	closemessage
# 1791 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumMedeaReturn_2
# 1794 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2B
Colchis_Script_SanctumMedeaReturn_1:
# 1796 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1798 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1799 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1802 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1803 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn2, MSGBOX_DEFAULT
# 1804 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1805 "data/maps/Colchis/scripts.pory"
	closemessage
# 1810 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1811 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn1, MSGBOX_DEFAULT
# 1812 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1816 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumMedeaReturn_6
Colchis_Script_SanctumMedeaReturn_5:
# 1826 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	return

Colchis_Script_SanctumMedeaReturn_2:
# 1792 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2A
	goto Colchis_Script_SanctumMedeaReturn_1

Colchis_Script_SanctumMedeaReturn_6:
# 1817 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1818 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1819 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1820 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn2, MSGBOX_DEFAULT
# 1821 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1822 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1823 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_SanctumMedeaReturn_5


Colchis_Script_SanctumJasonCheckMareep::
# 1833 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, IsShinyMareepInParty
# 1835 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_2
# 1840 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1841 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonGiveMeMareep, MSGBOX_DEFAULT
# 1842 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1844 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GiveJasonMareep, MSGBOX_YESNO
# 1846 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_5
# 1850 "data/maps/Colchis/scripts.pory"
	special ChoosePartyMon
# 1851 "data/maps/Colchis/scripts.pory"
	waitstate
# 1853 "data/maps/Colchis/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_8
# 1857 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1859 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, SPECIES_MAREEP
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_11
# 1863 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonIsShiny
# 1865 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_14
# 1869 "data/maps/Colchis/scripts.pory"
	special BufferMonNickname
# 1870 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GaveShinyMareep, MSGBOX_DEFAULT
# 1871 "data/maps/Colchis/scripts.pory"
	closemessage
# 1872 "data/maps/Colchis/scripts.pory"
	special ReleaseChosenMon
# 1874 "data/maps/Colchis/scripts.pory"
	setflag FLAG_JASON_HAS_SHINYMAREEP
Colchis_Script_SanctumJasonCheckMareep_1:
	return

Colchis_Script_SanctumJasonCheckMareep_2:
# 1836 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_5:
# 1847 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_8:
# 1854 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_11:
# 1860 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_14:
# 1866 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1


Colchis_Script_SanctumJasonMareep::
# 1887 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumApproachJason
# 1890 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	return


Colchis_Script_Exeunt::
# 1897 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 14
# 1899 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_Exeunt
# 1900 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_Exeunt
# 1901 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_Exeunt
# 1902 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1904 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_BIG_ISLAND_N, 31, 37
	end


Colchis_Script_SetupEscapeFromColchis::
# 1910 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1911 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumDepart, MSGBOX_DEFAULT
# 1912 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1913 "data/maps/Colchis/scripts.pory"
	closemessage
# 1916 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAndMedeaExeunt
# 1917 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_JasonAndMedeaExeunt
# 1918 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1922 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 14, 0
# 1923 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_INVISIBLE
# 1925 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 15, 0
# 1926 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 1928 "data/maps/Colchis/scripts.pory"
	hideobjectat 54, MAP_COLCHIS
# 1929 "data/maps/Colchis/scripts.pory"
	hideobjectat 4, MAP_COLCHIS
# 1931 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1932 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1936 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_FORCED_BATTLE
# 1939 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 16
# 1942 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
# 1943 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1946 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupLostKid
# 1949 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_TrainerAeetes::
# 1962 "data/maps/Colchis/scripts.pory"
	lockall
# 1963 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1965 "data/maps/Colchis/scripts.pory"
	checktrainerflag TRAINER_AEETES
	goto_if 0, Colchis_Script_TrainerAeetes_2
# 1983 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1984 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1985 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
Colchis_Script_TrainerAeetes_1:
# 1987 "data/maps/Colchis/scripts.pory"
	closemessage
# 1988 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_TrainerAeetes_2:
# 1967 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1968 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesIntro, MSGBOX_DEFAULT
# 1969 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1970 "data/maps/Colchis/scripts.pory"
	closemessage
# 1971 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_AEETES, Colchis_Text_AeetesLost
# 1972 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1973 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesPost, MSGBOX_DEFAULT
# 1974 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1976 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_KEY
# 1978 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1979 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1980 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
	goto Colchis_Script_TrainerAeetes_1


Colchis_Script_Bed::
# 1993 "data/maps/Colchis/scripts.pory"
	lockall
# 1994 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Bed, MSGBOX_YESNO
# 1995 "data/maps/Colchis/scripts.pory"
	closemessage
# 1996 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Bed_2
Colchis_Script_Bed_1:
# 1999 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Bed_2:
# 1997 "data/maps/Colchis/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Colchis_Script_Bed_1


Colchis_Script_RingBlocker::
# 2004 "data/maps/Colchis/scripts.pory"
	lockall
# 2005 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2008 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerIntro, MSGBOX_DEFAULT
# 2010 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_KEY, 1
# 2015 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_RingBlocker_2
# 2046 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_RingBlocker_1:
# 2050 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_RingBlocker_2:
# 2016 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerYesNo, MSGBOX_YESNO
# 2017 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_RingBlocker_5
# 2042 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerDecline, MSGBOX_DEFAULT
# 2043 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_RingBlocker_1

Colchis_Script_RingBlocker_5:
# 2020 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_KeyFits, MSGBOX_DEFAULT
# 2021 "data/maps/Colchis/scripts.pory"
	closemessage
# 2022 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_KEY
# 2023 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2025 "data/maps/Colchis/scripts.pory"
	hideobjectat 55, MAP_COLCHIS
# 2026 "data/maps/Colchis/scripts.pory"
	removeobject 55
# 2027 "data/maps/Colchis/scripts.pory"
	hideobjectat 56, MAP_COLCHIS
# 2028 "data/maps/Colchis/scripts.pory"
	removeobject 56
# 2029 "data/maps/Colchis/scripts.pory"
	hideobjectat 57, MAP_COLCHIS
# 2030 "data/maps/Colchis/scripts.pory"
	removeobject 57
# 2032 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 55, MOVEMENT_TYPE_INVISIBLE
# 2033 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 55, 1, 3
# 2034 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 56, MOVEMENT_TYPE_INVISIBLE
# 2035 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 56, 2, 3
# 2036 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 57, MOVEMENT_TYPE_INVISIBLE
# 2037 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 57, 3, 3
# 2039 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBARRIER
	goto Colchis_Script_RingBlocker_1


Colchis_Script_RingItem::
# 2055 "data/maps/Colchis/scripts.pory"
	lock
# 2056 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2057 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_RING
# 2058 "data/maps/Colchis/scripts.pory"
	hideobjectat 58, MAP_COLCHIS
# 2059 "data/maps/Colchis/scripts.pory"
	removeobject 58
# 2060 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBALL
# 2061 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 58, MOVEMENT_TYPE_INVISIBLE
# 2062 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 58, 4, 3
# 2063 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_CloseDoor::
# 2068 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2069 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_SetupLostKid::
# 2074 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2075 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 28, 12
# 2076 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_LOOK_AROUND
# 2077 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2078 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	return


Colchis_Script_ShowNannyWithGuard::
# 2083 "data/maps/Colchis/scripts.pory"
	removeobject 30
# 2084 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 30, 7, 50
# 2085 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_LEFT
# 2086 "data/maps/Colchis/scripts.pory"
	addobject 30
# 2087 "data/maps/Colchis/scripts.pory"
	showobjectat 30, MAP_COLCHIS
# 2089 "data/maps/Colchis/scripts.pory"
	removeobject 51
# 2090 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 51, 6, 50
# 2091 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 51, MOVEMENT_TYPE_FACE_RIGHT
# 2092 "data/maps/Colchis/scripts.pory"
	addobject 51
# 2093 "data/maps/Colchis/scripts.pory"
	showobjectat 51, MAP_COLCHIS
	return


Colchis_Script_Chef::
# 2099 "data/maps/Colchis/scripts.pory"
	lockall
# 2100 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2103 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Chef_2
# 2110 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Movement_ChefIntro, MSGBOX_DEFAULT
# 2111 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_RING
# 2112 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Chef_5
# 2143 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Chef_1:
# 2146 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Chef_2:
# 2104 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefProposal, MSGBOX_DEFAULT
# 2105 "data/maps/Colchis/scripts.pory"
	closemessage
# 2106 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_FaceRight
# 2107 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_5:
# 2113 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefRingYesNo, MSGBOX_YESNO
# 2114 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Chef_8
# 2139 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRingNo, MSGBOX_DEFAULT
# 2140 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_8:
# 2116 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_RING
# 2117 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRing, MSGBOX_DEFAULT
# 2118 "data/maps/Colchis/scripts.pory"
	closemessage
# 2120 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_ExclamationMark
# 2121 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2122 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks1, MSGBOX_DEFAULT
# 2123 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_APPLE
# 2125 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks2, MSGBOX_DEFAULT
# 2126 "data/maps/Colchis/scripts.pory"
	closemessage
# 2128 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2129 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Colchis_Script_Chef_12
Colchis_Script_Chef_11:
# 2133 "data/maps/Colchis/scripts.pory"
	applymovement 44, Colchis_Movement_ChefExit
# 2134 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2136 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_MOVECHEF
# 2137 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_12:
# 2130 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_WalkUp
# 2131 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_11


Colchis_Script_MoveChef::
# 2151 "data/maps/Colchis/scripts.pory"
	removeobject 44
# 2152 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 44, 59, 62
# 2153 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 44, MOVEMENT_TYPE_FACE_RIGHT
# 2154 "data/maps/Colchis/scripts.pory"
	addobject 44
# 2155 "data/maps/Colchis/scripts.pory"
	showobjectat 44, MAP_COLCHIS
# 2157 "data/maps/Colchis/scripts.pory"
	removeobject 37
# 2158 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 37, 60, 62
# 2159 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_LEFT
# 2160 "data/maps/Colchis/scripts.pory"
	addobject 37
# 2161 "data/maps/Colchis/scripts.pory"
	showobjectat 37, MAP_COLCHIS
	return


Colchis_Script_Maid::
# 2167 "data/maps/Colchis/scripts.pory"
	lockall
# 2168 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2169 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Maid_2
# 2175 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid1, MSGBOX_DEFAULT
# 2176 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Maid_1:
# 2178 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Maid_2:
# 2170 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid2, MSGBOX_DEFAULT
# 2171 "data/maps/Colchis/scripts.pory"
	closemessage
# 2172 "data/maps/Colchis/scripts.pory"
	applymovement 37, Common_Movement_FaceLeft
# 2173 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Maid_1


Colchis_Script_Jailer::
# 2183 "data/maps/Colchis/scripts.pory"
	lockall
# 2184 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2191 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerIntro, MSGBOX_DEFAULT
# 2194 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_APPLE
# 2195 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Jailer_2
# 2215 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Jailer_1:
# 2217 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Jailer_2:
# 2196 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerAppleYesNo, MSGBOX_YESNO
# 2197 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Jailer_5
# 2211 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveAppleNo, MSGBOX_DEFAULT
# 2212 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1

Colchis_Script_Jailer_5:
# 2198 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_APPLE
# 2200 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveApple, MSGBOX_DEFAULT
# 2201 "data/maps/Colchis/scripts.pory"
	closemessage
# 2203 "data/maps/Colchis/scripts.pory"
	applymovement 32, Common_Movement_ExclamationMark
# 2204 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2205 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks1, MSGBOX_DEFAULT
# 2206 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_JAIL_KEY
# 2208 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks2, MSGBOX_DEFAULT
# 2209 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1


Colchis_Script_PrisonDoor1::
# 2222 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Colchis_Script_PrisonDoor1_2
Colchis_Script_PrisonDoor1_1:
	end

Colchis_Script_PrisonDoor1_2:
# 2223 "data/maps/Colchis/scripts.pory"
	lockall
# 2225 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_A
# 2227 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2228 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2230 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2231 "data/maps/Colchis/scripts.pory"
	closemessage
# 2233 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2234 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2235 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2236 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2237 "data/maps/Colchis/scripts.pory"
	delay 30
# 2238 "data/maps/Colchis/scripts.pory"
	waitse
# 2239 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor1_1


Colchis_Script_PrisonDoor2::
# 2245 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_B, Colchis_Script_PrisonDoor2_2
Colchis_Script_PrisonDoor2_1:
	end

Colchis_Script_PrisonDoor2_2:
# 2246 "data/maps/Colchis/scripts.pory"
	lockall
# 2248 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_B
# 2250 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2251 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2253 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2254 "data/maps/Colchis/scripts.pory"
	closemessage
# 2256 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2257 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2258 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2259 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2260 "data/maps/Colchis/scripts.pory"
	delay 30
# 2261 "data/maps/Colchis/scripts.pory"
	waitse
# 2262 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor2_1


Colchis_Script_PrisonDoor3::
# 2268 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_C, Colchis_Script_PrisonDoor3_2
Colchis_Script_PrisonDoor3_1:
	end

Colchis_Script_PrisonDoor3_2:
# 2269 "data/maps/Colchis/scripts.pory"
	lockall
# 2271 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_C
# 2273 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2274 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2276 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2277 "data/maps/Colchis/scripts.pory"
	closemessage
# 2279 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2280 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2281 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2282 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2283 "data/maps/Colchis/scripts.pory"
	delay 30
# 2284 "data/maps/Colchis/scripts.pory"
	waitse
# 2285 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor3_1


Colchis_Script_LostKid::
# 2291 "data/maps/Colchis/scripts.pory"
	lockall
# 2292 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2294 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_LostKid_2
# 2315 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid2, MSGBOX_DEFAULT
# 2316 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_LostKid_1:
# 2318 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_LostKid_2:
# 2295 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid1, MSGBOX_DEFAULT
# 2296 "data/maps/Colchis/scripts.pory"
	closemessage
# 2297 "data/maps/Colchis/scripts.pory"
	special GetPlayerFacingDirection
# 2298 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Colchis_Script_LostKid_6
# 2301 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit2
Colchis_Script_LostKid_5:
# 2303 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2305 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_RETURN_LOSTKID
# 2307 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2308 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 5, 46
# 2309 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_WANDER_AROUND
# 2310 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2311 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	goto Colchis_Script_LostKid_1

Colchis_Script_LostKid_6:
# 2299 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit1
	goto Colchis_Script_LostKid_5


Colchis_Script_DoorMan::
# 2323 "data/maps/Colchis/scripts.pory"
	lockall
# 2324 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2327 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_DoorMan_2
# 2332 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 17
	goto_if_ne Colchis_Script_DoorMan_6
# 2340 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman3, MSGBOX_DEFAULT
# 2341 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_DoorMan_5:
# 2343 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceRight
Colchis_Script_DoorMan_1:
# 2345 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2346 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_DoorMan_2:
# 2328 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman1, MSGBOX_DEFAULT
# 2329 "data/maps/Colchis/scripts.pory"
	closemessage
# 2330 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceDown
	goto Colchis_Script_DoorMan_1

Colchis_Script_DoorMan_6:
# 2333 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 17
# 2334 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman2, MSGBOX_DEFAULT
# 2335 "data/maps/Colchis/scripts.pory"
	closemessage
# 2336 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2337 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2338 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
	goto Colchis_Script_DoorMan_5


Colchis_Script_Nanny::
# 2352 "data/maps/Colchis/scripts.pory"
	lock
# 2353 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2355 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_Script_Nanny_2
# 2359 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny2, MSGBOX_DEFAULT
# 2360 "data/maps/Colchis/scripts.pory"
	closemessage
# 2361 "data/maps/Colchis/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 2362 "data/maps/Colchis/scripts.pory"
	waitmovement 0
Colchis_Script_Nanny_1:
# 2364 "data/maps/Colchis/scripts.pory"
	release
	end

Colchis_Script_Nanny_2:
# 2356 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny1, MSGBOX_DEFAULT
# 2357 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Nanny_1


Colchis_Script_GruntBreak::
# 2369 "data/maps/Colchis/scripts.pory"
	lockall
# 2370 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2371 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 2372 "data/maps/Colchis/scripts.pory"
	switch VAR_RESULT
# 2373 "data/maps/Colchis/scripts.pory"
	case 1, Colchis_Script_GruntBreak_3
# 2375 "data/maps/Colchis/scripts.pory"
	case 2, Colchis_Script_GruntBreak_4
# 2377 "data/maps/Colchis/scripts.pory"
	case 3, Colchis_Script_GruntBreak_5
# 2379 "data/maps/Colchis/scripts.pory"
	case 4, Colchis_Script_GruntBreak_6
# 2381 "data/maps/Colchis/scripts.pory"
	case 5, Colchis_Script_GruntBreak_7
# 2383 "data/maps/Colchis/scripts.pory"
	case 6, Colchis_Script_GruntBreak_8
# 2385 "data/maps/Colchis/scripts.pory"
	case 7, Colchis_Script_GruntBreak_9
# 2387 "data/maps/Colchis/scripts.pory"
	case 8, Colchis_Script_GruntBreak_10
# 2389 "data/maps/Colchis/scripts.pory"
	case 9, Colchis_Script_GruntBreak_11
# 2392 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak0, MSGBOX_DEFAULT
Colchis_Script_GruntBreak_1:
# 2394 "data/maps/Colchis/scripts.pory"
	closemessage
# 2395 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_GruntBreak_3:
# 2374 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak1, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_4:
# 2376 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak2, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_5:
# 2378 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak3, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_6:
# 2380 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak4, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_7:
# 2382 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak5, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_8:
# 2384 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak6, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_9:
# 2386 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak7, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_10:
# 2388 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak8, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_11:
# 2390 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak9, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1


Colchis_Script_Kid1::
# 2400 "data/maps/Colchis/scripts.pory"
	lock
# 2401 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2402 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid1, MSGBOX_DEFAULT
# 2403 "data/maps/Colchis/scripts.pory"
	closemessage
# 2404 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid2::
# 2409 "data/maps/Colchis/scripts.pory"
	lock
# 2410 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2411 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid2, MSGBOX_DEFAULT
# 2412 "data/maps/Colchis/scripts.pory"
	closemessage
# 2413 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid3::
# 2418 "data/maps/Colchis/scripts.pory"
	lock
# 2419 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2420 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid3, MSGBOX_DEFAULT
# 2421 "data/maps/Colchis/scripts.pory"
	closemessage
# 2422 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher1::
# 2427 "data/maps/Colchis/scripts.pory"
	lock
# 2428 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2429 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher1, MSGBOX_DEFAULT
# 2430 "data/maps/Colchis/scripts.pory"
	closemessage
# 2431 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher2::
# 2436 "data/maps/Colchis/scripts.pory"
	lock
# 2437 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2438 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher2, MSGBOX_DEFAULT
# 2439 "data/maps/Colchis/scripts.pory"
	closemessage
# 2440 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Chef2::
# 2445 "data/maps/Colchis/scripts.pory"
	lock
# 2446 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2447 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Chef2, MSGBOX_DEFAULT
# 2448 "data/maps/Colchis/scripts.pory"
	closemessage
# 2449 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakL::
# 2454 "data/maps/Colchis/scripts.pory"
	lock
# 2455 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2456 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakL, MSGBOX_DEFAULT
# 2457 "data/maps/Colchis/scripts.pory"
	closemessage
# 2458 "data/maps/Colchis/scripts.pory"
	applymovement 39, Common_Movement_FaceRight
# 2459 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2460 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakR::
# 2465 "data/maps/Colchis/scripts.pory"
	lock
# 2466 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2467 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakR, MSGBOX_DEFAULT
# 2468 "data/maps/Colchis/scripts.pory"
	closemessage
# 2469 "data/maps/Colchis/scripts.pory"
	applymovement 38, Common_Movement_FaceLeft
# 2470 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2471 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_MaidL::
# 2476 "data/maps/Colchis/scripts.pory"
	lock
# 2477 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2478 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MaidL, MSGBOX_DEFAULT
# 2479 "data/maps/Colchis/scripts.pory"
	closemessage
# 2480 "data/maps/Colchis/scripts.pory"
	applymovement 43, Common_Movement_FaceRight
# 2481 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2482 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_MaidR::
# 2487 "data/maps/Colchis/scripts.pory"
	lock
# 2488 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2489 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MaidR, MSGBOX_DEFAULT
# 2490 "data/maps/Colchis/scripts.pory"
	closemessage
# 2491 "data/maps/Colchis/scripts.pory"
	applymovement 42, Common_Movement_FaceLeft
# 2492 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2493 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntDoorF::
# 2498 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNTDOOR_F, Colchis_Text_GruntDoorFFight, Colchis_Text_GruntDoorFLost
# 2499 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntDoorFPost, MSGBOX_DEFAULT
# 2500 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntDoorM::
# 2505 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNTDOOR_M, Colchis_Text_GruntDoorMFight, Colchis_Text_GruntDoorMLost
# 2506 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntDoorMPost, MSGBOX_DEFAULT
# 2507 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM1::
# 2512 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM1, Colchis_Text_GruntThroneM1Fight, Colchis_Text_GruntThroneM1Lost
# 2513 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM1Post, MSGBOX_DEFAULT
# 2514 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM2::
# 2519 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM2, Colchis_Text_GruntThroneM2Fight, Colchis_Text_GruntThroneM2Lost
# 2520 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM2Post, MSGBOX_DEFAULT
# 2521 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM3::
# 2526 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM3, Colchis_Text_GruntThroneM3Fight, Colchis_Text_GruntThroneM3Lost
# 2527 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM3Post, MSGBOX_DEFAULT
# 2528 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM4::
# 2533 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM4, Colchis_Text_GruntThroneM4Fight, Colchis_Text_GruntThroneM4Lost
# 2534 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM4Post, MSGBOX_DEFAULT
# 2535 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM5::
# 2540 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM5, Colchis_Text_GruntThroneM5Fight, Colchis_Text_GruntThroneM5Lost
# 2541 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM5Post, MSGBOX_DEFAULT
# 2542 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM6::
# 2547 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM6, Colchis_Text_GruntThroneM6Fight, Colchis_Text_GruntThroneM6Lost
# 2548 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM6Post, MSGBOX_DEFAULT
# 2549 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF1::
# 2556 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF1, Colchis_Text_GruntThroneF1Fight, Colchis_Text_GruntThroneF1Lost
# 2557 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF1Post, MSGBOX_DEFAULT
# 2558 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF2::
# 2563 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF1, Colchis_Text_GruntThroneF2Fight, Colchis_Text_GruntThroneF2Lost
# 2564 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF2Post, MSGBOX_DEFAULT
# 2565 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF3::
# 2570 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF1, Colchis_Text_GruntThroneF3Fight, Colchis_Text_GruntThroneF3Lost
# 2571 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF3Post, MSGBOX_DEFAULT
# 2572 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF4::
# 2577 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF1, Colchis_Text_GruntThroneF4Fight, Colchis_Text_GruntThroneF4Lost
# 2578 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF4Post, MSGBOX_DEFAULT
# 2579 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF5::
# 2584 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF1, Colchis_Text_GruntThroneF5Fight, Colchis_Text_GruntThroneF5Lost
# 2585 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF5Post, MSGBOX_DEFAULT
# 2586 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF6::
# 2591 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF6, Colchis_Text_GruntThroneF6Fight, Colchis_Text_GruntThroneF6Lost
# 2592 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF6Post, MSGBOX_DEFAULT
# 2593 "data/maps/Colchis/scripts.pory"
	closemessage
	end


# 2597 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 2598 "data/maps/Colchis/scripts.pory"
	walk_up
# 2598 "data/maps/Colchis/scripts.pory"
	walk_up
# 2598 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2601 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 2602 "data/maps/Colchis/scripts.pory"
	walk_down
# 2602 "data/maps/Colchis/scripts.pory"
	walk_down
# 2602 "data/maps/Colchis/scripts.pory"
	walk_down
# 2602 "data/maps/Colchis/scripts.pory"
	walk_down
# 2602 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2605 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 2606 "data/maps/Colchis/scripts.pory"
	walk_up
# 2606 "data/maps/Colchis/scripts.pory"
	walk_up
# 2606 "data/maps/Colchis/scripts.pory"
	walk_up
# 2606 "data/maps/Colchis/scripts.pory"
	walk_up
# 2606 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2609 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitA:
# 2610 "data/maps/Colchis/scripts.pory"
	walk_up
# 2610 "data/maps/Colchis/scripts.pory"
	walk_up
# 2610 "data/maps/Colchis/scripts.pory"
	walk_up
# 2610 "data/maps/Colchis/scripts.pory"
	walk_up
# 2610 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2613 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitB:
# 2614 "data/maps/Colchis/scripts.pory"
	walk_down
# 2614 "data/maps/Colchis/scripts.pory"
	walk_down
# 2614 "data/maps/Colchis/scripts.pory"
	walk_down
# 2614 "data/maps/Colchis/scripts.pory"
	walk_down
# 2614 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2617 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2618 "data/maps/Colchis/scripts.pory"
	walk_up
# 2619 "data/maps/Colchis/scripts.pory"
	walk_right
# 2619 "data/maps/Colchis/scripts.pory"
	walk_right
# 2619 "data/maps/Colchis/scripts.pory"
	walk_right
# 2619 "data/maps/Colchis/scripts.pory"
	walk_right
# 2619 "data/maps/Colchis/scripts.pory"
	walk_right
# 2620 "data/maps/Colchis/scripts.pory"
	walk_up
# 2620 "data/maps/Colchis/scripts.pory"
	walk_up
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2621 "data/maps/Colchis/scripts.pory"
	walk_right
# 2622 "data/maps/Colchis/scripts.pory"
	walk_up
# 2622 "data/maps/Colchis/scripts.pory"
	walk_up
# 2622 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2625 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 2626 "data/maps/Colchis/scripts.pory"
	walk_up
# 2626 "data/maps/Colchis/scripts.pory"
	walk_up
# 2626 "data/maps/Colchis/scripts.pory"
	walk_up
# 2626 "data/maps/Colchis/scripts.pory"
	walk_up
# 2626 "data/maps/Colchis/scripts.pory"
	walk_up
# 2626 "data/maps/Colchis/scripts.pory"
	walk_up
# 2626 "data/maps/Colchis/scripts.pory"
	walk_up
# 2626 "data/maps/Colchis/scripts.pory"
	walk_up
# 2626 "data/maps/Colchis/scripts.pory"
	walk_up
# 2626 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2629 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 2630 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2633 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 2634 "data/maps/Colchis/scripts.pory"
	face_right
# 2635 "data/maps/Colchis/scripts.pory"
	face_up
# 2636 "data/maps/Colchis/scripts.pory"
	face_left
# 2637 "data/maps/Colchis/scripts.pory"
	face_down
# 2638 "data/maps/Colchis/scripts.pory"
	face_right
# 2639 "data/maps/Colchis/scripts.pory"
	face_up
# 2640 "data/maps/Colchis/scripts.pory"
	face_left
# 2641 "data/maps/Colchis/scripts.pory"
	face_down
# 2642 "data/maps/Colchis/scripts.pory"
	face_right
# 2643 "data/maps/Colchis/scripts.pory"
	face_up
# 2644 "data/maps/Colchis/scripts.pory"
	face_left
# 2645 "data/maps/Colchis/scripts.pory"
	face_down
# 2646 "data/maps/Colchis/scripts.pory"
	face_right
# 2647 "data/maps/Colchis/scripts.pory"
	face_up
# 2648 "data/maps/Colchis/scripts.pory"
	face_left
# 2649 "data/maps/Colchis/scripts.pory"
	face_down
# 2650 "data/maps/Colchis/scripts.pory"
	face_right
# 2651 "data/maps/Colchis/scripts.pory"
	face_up
# 2652 "data/maps/Colchis/scripts.pory"
	face_left
# 2653 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2656 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 2657 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2657 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2658 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2661 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 2662 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2662 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2663 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2666 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 2667 "data/maps/Colchis/scripts.pory"
	walk_left
# 2668 "data/maps/Colchis/scripts.pory"
	walk_up
# 2668 "data/maps/Colchis/scripts.pory"
	walk_up
# 2669 "data/maps/Colchis/scripts.pory"
	walk_right
# 2669 "data/maps/Colchis/scripts.pory"
	walk_right
# 2670 "data/maps/Colchis/scripts.pory"
	walk_down
# 2670 "data/maps/Colchis/scripts.pory"
	walk_down
# 2671 "data/maps/Colchis/scripts.pory"
	walk_left
# 2672 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2675 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 2676 "data/maps/Colchis/scripts.pory"
	walk_left
# 2677 "data/maps/Colchis/scripts.pory"
	walk_up
# 2677 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_right
# 2678 "data/maps/Colchis/scripts.pory"
	walk_right
# 2679 "data/maps/Colchis/scripts.pory"
	walk_down
# 2679 "data/maps/Colchis/scripts.pory"
	walk_down
# 2680 "data/maps/Colchis/scripts.pory"
	walk_left
# 2681 "data/maps/Colchis/scripts.pory"
	face_down
# 2682 "data/maps/Colchis/scripts.pory"
	walk_left
# 2683 "data/maps/Colchis/scripts.pory"
	walk_up
# 2683 "data/maps/Colchis/scripts.pory"
	walk_up
# 2684 "data/maps/Colchis/scripts.pory"
	walk_right
# 2684 "data/maps/Colchis/scripts.pory"
	walk_right
# 2685 "data/maps/Colchis/scripts.pory"
	walk_down
# 2685 "data/maps/Colchis/scripts.pory"
	walk_down
# 2686 "data/maps/Colchis/scripts.pory"
	walk_left
# 2687 "data/maps/Colchis/scripts.pory"
	face_down
# 2688 "data/maps/Colchis/scripts.pory"
	walk_left
# 2689 "data/maps/Colchis/scripts.pory"
	walk_up
# 2689 "data/maps/Colchis/scripts.pory"
	walk_up
# 2690 "data/maps/Colchis/scripts.pory"
	walk_right
# 2690 "data/maps/Colchis/scripts.pory"
	walk_right
# 2691 "data/maps/Colchis/scripts.pory"
	walk_down
# 2691 "data/maps/Colchis/scripts.pory"
	walk_down
# 2692 "data/maps/Colchis/scripts.pory"
	walk_left
# 2693 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2696 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 2697 "data/maps/Colchis/scripts.pory"
	walk_down
# 2697 "data/maps/Colchis/scripts.pory"
	walk_down
# 2697 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2700 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 2701 "data/maps/Colchis/scripts.pory"
	walk_right
# 2701 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2705 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 2706 "data/maps/Colchis/scripts.pory"
	walk_left
# 2706 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2710 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 2711 "data/maps/Colchis/scripts.pory"
	walk_down
# 2712 "data/maps/Colchis/scripts.pory"
	face_left
# 2713 "data/maps/Colchis/scripts.pory"
	face_up
# 2714 "data/maps/Colchis/scripts.pory"
	face_right
# 2715 "data/maps/Colchis/scripts.pory"
	face_down
# 2716 "data/maps/Colchis/scripts.pory"
	walk_down
# 2717 "data/maps/Colchis/scripts.pory"
	face_left
# 2718 "data/maps/Colchis/scripts.pory"
	face_up
# 2719 "data/maps/Colchis/scripts.pory"
	face_right
# 2720 "data/maps/Colchis/scripts.pory"
	face_down
# 2721 "data/maps/Colchis/scripts.pory"
	walk_down
# 2722 "data/maps/Colchis/scripts.pory"
	face_left
# 2723 "data/maps/Colchis/scripts.pory"
	face_up
# 2724 "data/maps/Colchis/scripts.pory"
	face_right
# 2725 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2728 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 2729 "data/maps/Colchis/scripts.pory"
	walk_right
# 2730 "data/maps/Colchis/scripts.pory"
	walk_up
# 2731 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2732 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2735 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 2736 "data/maps/Colchis/scripts.pory"
	walk_left
# 2737 "data/maps/Colchis/scripts.pory"
	walk_up
# 2738 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2739 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2742 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 2743 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2744 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2747 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 2748 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2749 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2752 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2754 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2757 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 2758 "data/maps/Colchis/scripts.pory"
	walk_right
# 2759 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2762 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 2763 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2764 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2767 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 2768 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2769 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2772 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 2773 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2776 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 2777 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 2780 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 2781 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 2785 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 2786 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 2789 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 2790 "data/maps/Colchis/scripts.pory"
	walk_up
# 2790 "data/maps/Colchis/scripts.pory"
	walk_up
# 2790 "data/maps/Colchis/scripts.pory"
	walk_up
# 2790 "data/maps/Colchis/scripts.pory"
	walk_up
# 2790 "data/maps/Colchis/scripts.pory"
	walk_up
# 2790 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2793 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 2794 "data/maps/Colchis/scripts.pory"
	walk_right
# 2794 "data/maps/Colchis/scripts.pory"
	walk_right
# 2794 "data/maps/Colchis/scripts.pory"
	walk_right
# 2794 "data/maps/Colchis/scripts.pory"
	walk_right
# 2794 "data/maps/Colchis/scripts.pory"
	walk_right
# 2794 "data/maps/Colchis/scripts.pory"
	walk_right
# 2794 "data/maps/Colchis/scripts.pory"
	walk_right
# 2794 "data/maps/Colchis/scripts.pory"
	walk_right
# 2795 "data/maps/Colchis/scripts.pory"
	walk_down
# 2795 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2798 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 2799 "data/maps/Colchis/scripts.pory"
	walk_right
# 2799 "data/maps/Colchis/scripts.pory"
	walk_right
# 2799 "data/maps/Colchis/scripts.pory"
	walk_right
# 2799 "data/maps/Colchis/scripts.pory"
	walk_right
# 2799 "data/maps/Colchis/scripts.pory"
	walk_right
# 2799 "data/maps/Colchis/scripts.pory"
	walk_right
# 2799 "data/maps/Colchis/scripts.pory"
	walk_right
# 2800 "data/maps/Colchis/scripts.pory"
	walk_down
# 2800 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2803 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 2804 "data/maps/Colchis/scripts.pory"
	walk_right
# 2804 "data/maps/Colchis/scripts.pory"
	walk_right
# 2804 "data/maps/Colchis/scripts.pory"
	walk_right
# 2804 "data/maps/Colchis/scripts.pory"
	walk_right
# 2804 "data/maps/Colchis/scripts.pory"
	walk_right
# 2804 "data/maps/Colchis/scripts.pory"
	walk_right
# 2805 "data/maps/Colchis/scripts.pory"
	walk_down
# 2805 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2808 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 2809 "data/maps/Colchis/scripts.pory"
	walk_right
# 2809 "data/maps/Colchis/scripts.pory"
	walk_right
# 2809 "data/maps/Colchis/scripts.pory"
	walk_right
# 2809 "data/maps/Colchis/scripts.pory"
	walk_right
# 2809 "data/maps/Colchis/scripts.pory"
	walk_right
# 2809 "data/maps/Colchis/scripts.pory"
	walk_right
# 2809 "data/maps/Colchis/scripts.pory"
	walk_right
# 2809 "data/maps/Colchis/scripts.pory"
	walk_right
# 2810 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2813 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 2814 "data/maps/Colchis/scripts.pory"
	walk_right
# 2814 "data/maps/Colchis/scripts.pory"
	walk_right
# 2814 "data/maps/Colchis/scripts.pory"
	walk_right
# 2814 "data/maps/Colchis/scripts.pory"
	walk_right
# 2814 "data/maps/Colchis/scripts.pory"
	walk_right
# 2814 "data/maps/Colchis/scripts.pory"
	walk_right
# 2814 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2818 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 2819 "data/maps/Colchis/scripts.pory"
	walk_right
# 2819 "data/maps/Colchis/scripts.pory"
	walk_right
# 2819 "data/maps/Colchis/scripts.pory"
	walk_right
# 2819 "data/maps/Colchis/scripts.pory"
	walk_right
# 2819 "data/maps/Colchis/scripts.pory"
	walk_right
# 2819 "data/maps/Colchis/scripts.pory"
	walk_right
# 2820 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2823 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2824 "data/maps/Colchis/scripts.pory"
	walk_up
# 2825 "data/maps/Colchis/scripts.pory"
	walk_right
# 2825 "data/maps/Colchis/scripts.pory"
	walk_right
# 2825 "data/maps/Colchis/scripts.pory"
	walk_right
# 2825 "data/maps/Colchis/scripts.pory"
	walk_right
# 2825 "data/maps/Colchis/scripts.pory"
	walk_right
# 2825 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2828 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 2829 "data/maps/Colchis/scripts.pory"
	walk_right
# 2829 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2832 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 2833 "data/maps/Colchis/scripts.pory"
	walk_up
# 2833 "data/maps/Colchis/scripts.pory"
	walk_up
# 2833 "data/maps/Colchis/scripts.pory"
	walk_up
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2834 "data/maps/Colchis/scripts.pory"
	walk_right
# 2835 "data/maps/Colchis/scripts.pory"
	walk_up
# 2835 "data/maps/Colchis/scripts.pory"
	walk_up
# 2835 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2838 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 2839 "data/maps/Colchis/scripts.pory"
	walk_up
# 2839 "data/maps/Colchis/scripts.pory"
	walk_up
# 2839 "data/maps/Colchis/scripts.pory"
	walk_up
# 2839 "data/maps/Colchis/scripts.pory"
	walk_up
# 2839 "data/maps/Colchis/scripts.pory"
	walk_up
# 2839 "data/maps/Colchis/scripts.pory"
	walk_up
# 2839 "data/maps/Colchis/scripts.pory"
	walk_up
# 2839 "data/maps/Colchis/scripts.pory"
	walk_up
# 2839 "data/maps/Colchis/scripts.pory"
	walk_up
# 2839 "data/maps/Colchis/scripts.pory"
	walk_up
# 2839 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2842 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 2843 "data/maps/Colchis/scripts.pory"
	walk_up
# 2843 "data/maps/Colchis/scripts.pory"
	walk_up
# 2843 "data/maps/Colchis/scripts.pory"
	walk_up
# 2843 "data/maps/Colchis/scripts.pory"
	walk_up
# 2843 "data/maps/Colchis/scripts.pory"
	walk_up
# 2843 "data/maps/Colchis/scripts.pory"
	walk_up
# 2843 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2846 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 2847 "data/maps/Colchis/scripts.pory"
	walk_left
# 2848 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2851 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 2852 "data/maps/Colchis/scripts.pory"
	walk_up
# 2853 "data/maps/Colchis/scripts.pory"
	walk_right
# 2854 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2858 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 2859 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2862 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 2863 "data/maps/Colchis/scripts.pory"
	walk_right
# 2863 "data/maps/Colchis/scripts.pory"
	walk_right
# 2864 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2868 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 2869 "data/maps/Colchis/scripts.pory"
	walk_left
# 2870 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2873 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 2874 "data/maps/Colchis/scripts.pory"
	walk_right
# 2875 "data/maps/Colchis/scripts.pory"
	walk_up
# 2876 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2879 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 2880 "data/maps/Colchis/scripts.pory"
	walk_left
# 2881 "data/maps/Colchis/scripts.pory"
	walk_up
# 2882 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2885 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 2886 "data/maps/Colchis/scripts.pory"
	walk_down
# 2886 "data/maps/Colchis/scripts.pory"
	walk_down
# 2886 "data/maps/Colchis/scripts.pory"
	walk_down
# 2886 "data/maps/Colchis/scripts.pory"
	walk_down
# 2886 "data/maps/Colchis/scripts.pory"
	walk_down
# 2886 "data/maps/Colchis/scripts.pory"
	walk_down
# 2886 "data/maps/Colchis/scripts.pory"
	walk_down
# 2886 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2889 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 2890 "data/maps/Colchis/scripts.pory"
	walk_up
# 2890 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2893 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonApproachPlayer:
# 2894 "data/maps/Colchis/scripts.pory"
	walk_up
# 2894 "data/maps/Colchis/scripts.pory"
	walk_up
# 2894 "data/maps/Colchis/scripts.pory"
	walk_up
# 2894 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2897 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonExit:
# 2898 "data/maps/Colchis/scripts.pory"
	walk_down
# 2898 "data/maps/Colchis/scripts.pory"
	walk_down
# 2898 "data/maps/Colchis/scripts.pory"
	walk_down
# 2898 "data/maps/Colchis/scripts.pory"
	walk_down
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2899 "data/maps/Colchis/scripts.pory"
	walk_left
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2900 "data/maps/Colchis/scripts.pory"
	walk_down
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	walk_right
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2902 "data/maps/Colchis/scripts.pory"
	walk_down
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
# 2903 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2906 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonExit:
# 2907 "data/maps/Colchis/scripts.pory"
	walk_down
# 2907 "data/maps/Colchis/scripts.pory"
	walk_down
# 2907 "data/maps/Colchis/scripts.pory"
	walk_down
# 2907 "data/maps/Colchis/scripts.pory"
	walk_down
# 2907 "data/maps/Colchis/scripts.pory"
	walk_down
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2908 "data/maps/Colchis/scripts.pory"
	walk_left
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
# 2912 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2915 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerPrisonExit:
# 2916 "data/maps/Colchis/scripts.pory"
	walk_down
# 2916 "data/maps/Colchis/scripts.pory"
	walk_down
# 2916 "data/maps/Colchis/scripts.pory"
	walk_down
# 2916 "data/maps/Colchis/scripts.pory"
	walk_down
# 2916 "data/maps/Colchis/scripts.pory"
	walk_down
# 2916 "data/maps/Colchis/scripts.pory"
	walk_down
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2917 "data/maps/Colchis/scripts.pory"
	walk_left
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2918 "data/maps/Colchis/scripts.pory"
	walk_down
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2920 "data/maps/Colchis/scripts.pory"
	walk_down
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
# 2921 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2924 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 2925 "data/maps/Colchis/scripts.pory"
	walk_left
# 2925 "data/maps/Colchis/scripts.pory"
	walk_left
# 2925 "data/maps/Colchis/scripts.pory"
	walk_left
# 2926 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2929 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 2930 "data/maps/Colchis/scripts.pory"
	walk_down
# 2931 "data/maps/Colchis/scripts.pory"
	walk_right
# 2931 "data/maps/Colchis/scripts.pory"
	walk_right
# 2931 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2934 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 2935 "data/maps/Colchis/scripts.pory"
	walk_up
# 2935 "data/maps/Colchis/scripts.pory"
	walk_up
# 2935 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2938 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 2939 "data/maps/Colchis/scripts.pory"
	walk_up
# 2939 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2942 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3A:
# 2943 "data/maps/Colchis/scripts.pory"
	walk_up
# 2943 "data/maps/Colchis/scripts.pory"
	walk_up
# 2944 "data/maps/Colchis/scripts.pory"
	walk_right
# 2944 "data/maps/Colchis/scripts.pory"
	walk_right
# 2945 "data/maps/Colchis/scripts.pory"
	walk_up
# 2945 "data/maps/Colchis/scripts.pory"
	walk_up
# 2945 "data/maps/Colchis/scripts.pory"
	walk_up
# 2945 "data/maps/Colchis/scripts.pory"
	walk_up
# 2945 "data/maps/Colchis/scripts.pory"
	walk_up
# 2945 "data/maps/Colchis/scripts.pory"
	walk_up
# 2945 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2948 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3B:
# 2949 "data/maps/Colchis/scripts.pory"
	walk_up
# 2949 "data/maps/Colchis/scripts.pory"
	walk_up
# 2950 "data/maps/Colchis/scripts.pory"
	walk_right
# 2951 "data/maps/Colchis/scripts.pory"
	walk_up
# 2951 "data/maps/Colchis/scripts.pory"
	walk_up
# 2951 "data/maps/Colchis/scripts.pory"
	walk_up
# 2951 "data/maps/Colchis/scripts.pory"
	walk_up
# 2951 "data/maps/Colchis/scripts.pory"
	walk_up
# 2951 "data/maps/Colchis/scripts.pory"
	walk_up
# 2951 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2954 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3A:
# 2955 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_right
# 2957 "data/maps/Colchis/scripts.pory"
	walk_down
# 2957 "data/maps/Colchis/scripts.pory"
	walk_down
# 2958 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2961 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3B:
# 2962 "data/maps/Colchis/scripts.pory"
	walk_down
# 2962 "data/maps/Colchis/scripts.pory"
	walk_down
# 2962 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2966 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn:
# 2967 "data/maps/Colchis/scripts.pory"
	walk_down
# 2967 "data/maps/Colchis/scripts.pory"
	walk_down
# 2967 "data/maps/Colchis/scripts.pory"
	walk_down
# 2967 "data/maps/Colchis/scripts.pory"
	walk_down
# 2967 "data/maps/Colchis/scripts.pory"
	walk_down
# 2967 "data/maps/Colchis/scripts.pory"
	walk_down
# 2967 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2970 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2A:
# 2971 "data/maps/Colchis/scripts.pory"
	walk_down
# 2972 "data/maps/Colchis/scripts.pory"
	walk_left
# 2972 "data/maps/Colchis/scripts.pory"
	walk_left
# 2973 "data/maps/Colchis/scripts.pory"
	walk_down
# 2974 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2977 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2B:
# 2978 "data/maps/Colchis/scripts.pory"
	walk_down
# 2979 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2984 "data/maps/Colchis/scripts.pory"
Colchis_Movement_Exeunt:
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2985 "data/maps/Colchis/scripts.pory"
	walk_right
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2986 "data/maps/Colchis/scripts.pory"
	walk_up
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2987 "data/maps/Colchis/scripts.pory"
	walk_left
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
# 2988 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2991 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAndMedeaExeunt:
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2993 "data/maps/Colchis/scripts.pory"
	walk_right
# 2993 "data/maps/Colchis/scripts.pory"
	walk_right
# 2993 "data/maps/Colchis/scripts.pory"
	walk_right
# 2993 "data/maps/Colchis/scripts.pory"
	walk_right
# 2993 "data/maps/Colchis/scripts.pory"
	walk_right
# 2993 "data/maps/Colchis/scripts.pory"
	walk_right
# 2993 "data/maps/Colchis/scripts.pory"
	walk_right
# 2993 "data/maps/Colchis/scripts.pory"
	walk_right
# 2993 "data/maps/Colchis/scripts.pory"
	walk_right
# 2993 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2996 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ChefExit:
# 2997 "data/maps/Colchis/scripts.pory"
	walk_right
# 2997 "data/maps/Colchis/scripts.pory"
	walk_right
# 2997 "data/maps/Colchis/scripts.pory"
	walk_right
# 2997 "data/maps/Colchis/scripts.pory"
	walk_right
# 2997 "data/maps/Colchis/scripts.pory"
	walk_right
# 2997 "data/maps/Colchis/scripts.pory"
	walk_right
# 2997 "data/maps/Colchis/scripts.pory"
	walk_right
# 2997 "data/maps/Colchis/scripts.pory"
	walk_right
# 2997 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 3000 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit1:
# 3001 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_down
# 3002 "data/maps/Colchis/scripts.pory"
	walk_down
# 3002 "data/maps/Colchis/scripts.pory"
	walk_down
# 3002 "data/maps/Colchis/scripts.pory"
	walk_down
# 3003 "data/maps/Colchis/scripts.pory"
	walk_left
# 3003 "data/maps/Colchis/scripts.pory"
	walk_left
# 3003 "data/maps/Colchis/scripts.pory"
	walk_left
# 3003 "data/maps/Colchis/scripts.pory"
	walk_left
# 3003 "data/maps/Colchis/scripts.pory"
	walk_left
# 3003 "data/maps/Colchis/scripts.pory"
	walk_left
# 3003 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 3006 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit2:
# 3007 "data/maps/Colchis/scripts.pory"
	walk_down
# 3008 "data/maps/Colchis/scripts.pory"
	walk_left
# 3009 "data/maps/Colchis/scripts.pory"
	walk_down
# 3009 "data/maps/Colchis/scripts.pory"
	walk_down
# 3009 "data/maps/Colchis/scripts.pory"
	walk_down
# 3010 "data/maps/Colchis/scripts.pory"
	walk_left
# 3010 "data/maps/Colchis/scripts.pory"
	walk_left
# 3010 "data/maps/Colchis/scripts.pory"
	walk_left
# 3010 "data/maps/Colchis/scripts.pory"
	walk_left
# 3010 "data/maps/Colchis/scripts.pory"
	walk_left
# 3010 "data/maps/Colchis/scripts.pory"
	walk_left
# 3010 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1555 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Script_SanctumMedeaReturn_Text_0:
# 1776 "data/maps/Colchis/scripts.pory"
	.string "OIMOIAY!\nOOIIMMOOIIAAYY!!$"

Colchis_Text_JasonIntro1::
# 3013 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 3017 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 3021 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 3025 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 3029 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 3033 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 3038 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 3043 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 3047 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 3051 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 3055 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 3064 "data/maps/Colchis/scripts.pory"
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
# 3069 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 3078 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 3082 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 3091 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 3097 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 3110 "data/maps/Colchis/scripts.pory"
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
# 3122 "data/maps/Colchis/scripts.pory"
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
# 3126 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 3130 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 3134 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyy!$"

Colchis_Text_Aeetes7::
# 3138 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 3142 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 3146 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 3155 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 3159 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 3177 "data/maps/Colchis/scripts.pory"
	.string "Osethay ordsway, 'aay itchway' ingstay\n"
	.string "orseway anthay urningbay oalscay oray\l"
	.string "ushinggay oodblay. I'day atherray\l"
	.string "oselay ymay armay anthay owknay\l"
	.string "atthay ouyay inkthay ofay emay asay\l"
	.string "aay itchway. Ymay amenay isay Edeamay.\l"
	.string "Iay amay aughterday of Aeetesay,\l"
	.string "anday incesspray ofay Olchiscay, anday\l"
	.string "ouyay, Asonjay, Iay easuretray oremay\l"
	.string "anthay allay ethay ountlesscay\l"
	.string "ichesray eldhay onay ouray islanday,\l"
	.string "oremay anthay ouray ubjectssay,\l"
	.string "oremay anthay amilyfay. Orfay ouyay\l"
	.string "Iay amay eparedpray otay adetray itay\l"
	.string "allay. Iay earsway yselfmay oyallay\l"
	.string "onlyay otay ouyay anday amenay ouyay\l"
	.string "ownay ymay ingkay, oursyay otay\l"
	.string "ommandcay.$"

Colchis_Text_JasonPrison4::
# 3181 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 3186 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 3190 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 3194 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 3201 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 3205 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 3231 "data/maps/Colchis/scripts.pory"
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
# 3239 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 3243 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 3256 "data/maps/Colchis/scripts.pory"
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
# 3260 "data/maps/Colchis/scripts.pory"
	.string "Do not interrupt my private time with\n"
	.string "Medea 'till you bring shiny Mareep.$"

Colchis_Text_MedeaSanctumTrigger1::
# 3265 "data/maps/Colchis/scripts.pory"
	.string "Ememberray, ingbray onay armhay otay\n"
	.string "Ugialay.$"

Colchis_Text_JasonSanctumTrigger2::
# 3269 "data/maps/Colchis/scripts.pory"
	.string "Have you returned bringing Shiny\n"
	.string "Mareep?$"

Colchis_Text_MedeaSanctumTrigger2::
# 3274 "data/maps/Colchis/scripts.pory"
	.string "Ymay oughtsthay etraybay emay.\n"
	.string "Excuseay emay Asonjay, againstay ymay\l"
	.string "ownay adviceay Iay ustmay aketay\l"
	.string "eavelay ofay ouyay anday eesay atthay\l"
	.string "Ugialay isay afesay.$"

Colchis_Text_JasonSanctumTrigger3::
# 3278 "data/maps/Colchis/scripts.pory"
	.string "How could you fail? You only had one\n"
	.string "job! My quest has failed and it was all\l"
	.string "your fault! Now you will pay the price.\l"
	.string "Go Nosepass!$"

Colchis_Text_JasonLost::
# 3282 "data/maps/Colchis/scripts.pory"
	.string "I curse that day I saved you from the\n"
	.string "surf.$"

Colchis_Text_JasonPost::
# 3286 "data/maps/Colchis/scripts.pory"
	.string "The most wicked betrayal of all my\n"
	.string "life...$"

Colchis_Text_JasonGiveMeMareep::
# 3290 "data/maps/Colchis/scripts.pory"
	.string "I see that you have completed the\n"
	.string "quest. Give me shiny Mareep and let's be\l"
	.string "done.$"

Colchis_Text_GiveJasonMareep::
# 3294 "data/maps/Colchis/scripts.pory"
	.string "Will you give Jason shiny Mareep?$"

Colchis_Text_GaveShinyMareep::
# 3298 "data/maps/Colchis/scripts.pory"
	.string "You gave {STR_VAR_1} to Jason!\p"
	.string "Bye Bye {STR_VAR_1}!$"

Colchis_Text_CultistMPre::
# 3303 "data/maps/Colchis/scripts.pory"
	.string "Espassertray opstay! Allfay intoay\n"
	.string "othingnessnay$"

Colchis_Text_CultistMLost::
# 3308 "data/maps/Colchis/scripts.pory"
	.string "Ethay everlastingay arknessday\n"
	.string "overscay allay.$"

Colchis_Text_CultistMPost::
# 3313 "data/maps/Colchis/scripts.pory"
	.string "Ouyay aymay avehay onway utbay\n"
	.string "ou'llyay evernay escapeay.$"

Colchis_Text_MedeaSanctumReturn1::
# 3318 "data/maps/Colchis/scripts.pory"
	.string "Ouyay onstermay! Owhay ouldcay ouyay\n"
	.string "oday isthay otay emay?$"

Colchis_Text_MedeaSanctumReturn2::
# 3323 "data/maps/Colchis/scripts.pory"
	.string "Ymay ovelay, ehay ashay attackeday\n"
	.string "ymay Ugialay! Iay illway onay ongerlay\l"
	.string "elphay imhay eavelay Olchiscay.$"

Colchis_Text_JasonMedeaReturn1::
# 3327 "data/maps/Colchis/scripts.pory"
	.string "Please, do not cry beloved Medea. Lend\n"
	.string "love the power to hold back your tears.$"

Colchis_Text_JasonMedeaReturn2::
# 3331 "data/maps/Colchis/scripts.pory"
	.string "Hey, I apologize for Medea. I know she's\n"
	.string "acting up, but we're still cool. Give it\l"
	.string "some time I'll get her to cool down. When\l"
	.string "you get out meet me in Bulbus town and\l"
	.string "I'll repay you for shiny Mareep.$"

Colchis_Text_JasonSanctumWilds::
# 3335 "data/maps/Colchis/scripts.pory"
	.string "Alas! Medea! My quest for shiny Mareep\n"
	.string "has failed and now we're vagabonds.$"

Colchis_Text_JasonSanctumDepart::
# 3339 "data/maps/Colchis/scripts.pory"
	.string "Let us depart and leave this one\n"
	.string "behind.$"

Colchis_Text_Bed::
# 3343 "data/maps/Colchis/scripts.pory"
	.string "It's a big comfy bed!\n"
	.string "Would you like to take a rest?$"

Colchis_Text_RingBlockerIntro::
# 3347 "data/maps/Colchis/scripts.pory"
	.string "It's a large metal barrier with a keyhole\n"
	.string "in the center.$"

Colchis_Text_KeyFits::
# 3351 "data/maps/Colchis/scripts.pory"
	.string "The key fits into the keyhole!\n"
	.string "The barriers sink into the ground but\l"
	.string "the key broke off inside!$"

Colchis_Text_RingBlockerDecline::
# 3355 "data/maps/Colchis/scripts.pory"
	.string "Better not try using the key here.$"

Colchis_Text_RingBlockerYesNo::
# 3359 "data/maps/Colchis/scripts.pory"
	.string "Would you like to try using the Colchis\n"
	.string "Key?$"

Colchis_Text_AeetesIntro::
# 3368 "data/maps/Colchis/scripts.pory"
	.string "Ouryay insolentay invasionay ofay\n"
	.string "ouray airfay anday ightymay ingdomkay\l"
	.string "isay ownay atay anay enday. ouryay\l"
	.string "illway ownay earnlay ethay uetray\l"
	.string "owerpay ofay Ingkay Aeetesay.$"

Colchis_Text_AeetesLost::
# 3373 "data/maps/Colchis/scripts.pory"
	.string "Ownay ymay ingdomkay ashay allenfay.$"

Colchis_Text_AeetesPost::
# 3386 "data/maps/Colchis/scripts.pory"
	.string "Ymay aughterday olenstay...ymay\n"
	.string "ingdomkay allenfay...anday Iay amay\l"
	.string "eatenbay ownday ybay aay eremay\l"
	.string "oybay. Ethay eatestgray iserymay isay\l"
	.string "ulytray inemay! Onay ongerlay illway\l"
	.string "Iay allcay yselfmay aay ingkay. Aketay\l"
	.string "isthay, ethay acredsay eykay ofay\l"
	.string "Olchis'cay ingkay anday eavelay isthay\l"
	.string "adsay anmay otay ebay ithway ishay\l"
	.string "earstay.$"

Colchis_Text_AeetesFinal::
# 3391 "data/maps/Colchis/scripts.pory"
	.string "Ymay ifelay ashay eenbay educedray\n"
	.string "otay aughtnay. Eavelay emay.$"

Colchis_Text_ChefProposal::
# 3395 "data/maps/Colchis/scripts.pory"
	.string "I'm nervous! Do you think she will say\n"
	.string "yes?$"

Colchis_Movement_ChefIntro::
# 3399 "data/maps/Colchis/scripts.pory"
	.string "Oh! What to do? I am madly in love with\n"
	.string "one of Colchis' most beautiful maids\l"
	.string "but worry I will lose her to someone\l"
	.string "more handsome and with more money than\l"
	.string "me. If only I had an engagement ring to\l"
	.string "give her in exchange for loyalty.$"

Colchis_Text_ChefRingYesNo::
# 3403 "data/maps/Colchis/scripts.pory"
	.string "Give Chef the Colchis Ring?$"

Colchis_Text_ChefGaveRing::
# 3407 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave Chef the Colchis Ring.$"

Colchis_Text_ChefThanks1::
# 3411 "data/maps/Colchis/scripts.pory"
	.string "Great Almighty! You're giving this to\n"
	.string "me? Take this Sweet Apple as token of\l"
	.string "thanks.$"

Colchis_Text_ChefThanks2::
# 3415 "data/maps/Colchis/scripts.pory"
	.string "I'm off now to proposition the maid.$"

Colchis_Text_ChefGaveRingNo::
# 3419 "data/maps/Colchis/scripts.pory"
	.string "Better not give him the ring.$"

Colchis_Text_Maid1::
# 3423 "data/maps/Colchis/scripts.pory"
	.string "Right now I am a maid but one day I will\n"
	.string "meet a foreign man and have his kids.$"

Colchis_Text_Maid2::
# 3427 "data/maps/Colchis/scripts.pory"
	.string "I'm starting to worry this creep likes\n"
	.string "me.$"

Colchis_Text_JailerIntro::
# 3440 "data/maps/Colchis/scripts.pory"
	.string "Eahyay I'may ethay oneay Aeetesay\n"
	.string "eftlay inay argechay ofay ishay\l"
	.string "isonspray utbay ehay on'tday aypay\l"
	.string "enoughay orfay emay otay arecay\l"
	.string "atthay ouyay omehowsay okebray outay.\l"
	.string "I'llay elltay ouyay atwhay. Ifay ouyay\l"
	.string "ingbray emay aay eetsway eattray I'llay\l"
	.string "ivegay ouyay ethay isonpray ekay.\l"
	.string "Oundsay oodgay?$"

Colchis_Text_JailerAppleYesNo::
# 3444 "data/maps/Colchis/scripts.pory"
	.string "Give the Colchis Apple to the jailer?$"

Colchis_Text_JailerGaveApple::
# 3448 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave the jailer the Colchis\n"
	.string "Apple$"

Colchis_Text_JailerThanks1::
# 3454 "data/maps/Colchis/scripts.pory"
	.string "Aay Olchiscay apple? Ownay ere'sthay\n"
	.string "aay eetsway eattray! Ankthay ouyay!\l"
	.string "Ere'shay ethay ailjay eykay. Ocknay\l"
	.string "ourselfyay outay.$"

Colchis_Text_JailerThanks2::
# 3459 "data/maps/Colchis/scripts.pory"
	.string "Ebay arefulcay otnay otay ocklay\n"
	.string "ourselfyay inay ailjay. Ahay!$"

Colchis_Text_JailerGaveAppleNo::
# 3463 "data/maps/Colchis/scripts.pory"
	.string "Best not to give him the Apple now.$"

Colchis_Text_PrisonDoorOpen::
# 3467 "data/maps/Colchis/scripts.pory"
	.string "The Colchis Prison Key unlocked the\n"
	.string "door!$"

Colchis_Text_LostKid1::
# 3471 "data/maps/Colchis/scripts.pory"
	.string "Hey! Thanks for finding me! I was\n"
	.string "starting to get scared but I'll go back\l"
	.string "to where I belong now.$"

Colchis_Text_LostKid2::
# 3475 "data/maps/Colchis/scripts.pory"
	.string "I love playing with my friends again.$"

Colchis_Text_Doorman1::
# 3489 "data/maps/Colchis/scripts.pory"
	.string "Iay amay ostiariusay ofay Olchiscay,\n"
	.string "ithoutway ymay elphay escape'say\l"
	.string "impossibleay, anday Iay onlyay elphay\l"
	.string "eoplepay owhay elphay emay. Ancay\l"
	.string "ouyay omehowsay etgay ymay irlgay otay\l"
	.string "almcay ownday? Eshay on'tway omecay\l"
	.string "eesay emay uzcay e'sshay uckstay atay\l"
	.string "orkway eakingfray outay overay omesay\l"
	.string "upidstay ostlay idkay...I'may uresay\l"
	.string "at'sthay adbay...utbay atwhay aboutay\l"
	.string "ymay eedsnay?$"

Colchis_Text_Doorman2::
# 3494 "data/maps/Colchis/scripts.pory"
	.string "Ankthay ouyay orfay ingingbray usay\n"
	.string "ackbay ogethertay. Ethay oorday isay\l"
	.string "openay. Arewellfay.$"

Colchis_Text_Doorman3::
# 3499 "data/maps/Colchis/scripts.pory"
	.string "Anksthay againay.$"

Colchis_Text_Nanny1::
# 3503 "data/maps/Colchis/scripts.pory"
	.string "Oh no! How terrible! I'm freaking out\n"
	.string "because I lost another one. What if I\l"
	.string "get caught swapping out another kid?\l"
	.string "When they're infants they usually can't\l"
	.string "tell but this one was older...What can I\l"
	.string "do?$"

Colchis_Text_Nanny2::
# 3507 "data/maps/Colchis/scripts.pory"
	.string "Oh! Thanks for finding that lost kid for\n"
	.string "me. I feel like I can finally exhale. I\l"
	.string "had been so stressed out I hadn't been\l"
	.string "able to come socialize with my man.$"

Colchis_Text_GruntBreak1::
# 3512 "data/maps/Colchis/scripts.pory"
	.string "Iay asway ustjay inkingthay aboutay\n"
	.string "ymay etpay atcay.$"

Colchis_Text_GruntBreak2::
# 3517 "data/maps/Colchis/scripts.pory"
	.string "Iay oday otnay inkthay eetingsmay\n"
	.string "areay oductivepray.$"

Colchis_Text_GruntBreak3::
# 3522 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay interrupay emay ingebay\n"
	.string "eatingay ipschay.$"

Colchis_Text_GruntBreak4::
# 3527 "data/maps/Colchis/scripts.pory"
	.string "I'may onay ymay eakbray, asay\n"
	.string "Olchiscay' awlay andatesmay.$"

Colchis_Text_GruntBreak5::
# 3532 "data/maps/Colchis/scripts.pory"
	.string "Ymay eakbray imetay isay ymay\n"
	.string "erapythay essionsay.$"

Colchis_Text_GruntBreak6::
# 3537 "data/maps/Colchis/scripts.pory"
	.string "I'may otnay azylay! I'may eparingpray\n"
	.string "otay orkway.$"

Colchis_Text_GruntBreak7::
# 3542 "data/maps/Colchis/scripts.pory"
	.string "Eythey aysay atthay eaksbray areay\n"
	.string "ikelay ugshay orfay ouryay oulsay.$"

Colchis_Text_GruntBreak8::
# 3547 "data/maps/Colchis/scripts.pory"
	.string "I'may otnay ignoringay ouyay. I'may\n"
	.string "ustjay estingray.$"

Colchis_Text_GruntBreak9::
# 3552 "data/maps/Colchis/scripts.pory"
	.string "On'tday elltay ymay ossbay I'veay\n"
	.string "eenbay erehay orfay ourshay.$"

Colchis_Text_GruntBreak0::
# 3557 "data/maps/Colchis/scripts.pory"
	.string "Amay Iay upposedsay otay ebay\n"
	.string "alkingtay otay ouyay?$"

Colchis_Text_Kid1::
# 3561 "data/maps/Colchis/scripts.pory"
	.string "Baby shark doo doo doo doo doo doo\n"
	.string "baby shark doo doo doo doo doo doo\l"
	.string "baby shark doo doo doo doo doo baby\l"
	.string "shark!$"

Colchis_Text_Kid2::
# 3565 "data/maps/Colchis/scripts.pory"
	.string "I love Pikachu! He's an electric Pokemon\n"
	.string "and he's my favorite! I wish I had a pet\l"
	.string "Pikachu but I think my mom would say\l"
	.string "no...Maybe one day...$"

Colchis_Text_Kid3::
# 3569 "data/maps/Colchis/scripts.pory"
	.string "Have you ever had a dream so that so\n"
	.string "that you um you had you you would you\l"
	.string "could you'll do you went you want you\l"
	.string "you could do so you you do you could\l"
	.string "you you want you want him to do you so\l"
	.string "much you could do anything?$"

Colchis_Text_Teacher1::
# 3573 "data/maps/Colchis/scripts.pory"
	.string "The youth is lost! They pay no\n"
	.string "attention to anything of value or\l"
	.string "substance.$"

Colchis_Text_Teacher2::
# 3577 "data/maps/Colchis/scripts.pory"
	.string "Even though teaching can be\n"
	.string "exhausting it's an honor to help\l"
	.string "nurture young minds.$"

Colchis_Text_Chef2::
# 3581 "data/maps/Colchis/scripts.pory"
	.string "I'm not crying! No! Just peeling onions!\n"
	.string "Not thinking 'bout the girl who left me!\l"
	.string "No!$"

Colchis_Text_GruntBreakL::
# 3586 "data/maps/Colchis/scripts.pory"
	.string "E'reway otnay arguinay. I'may ovingpray\n"
	.string "I'may ightray.$"

Colchis_Text_GruntBreakR::
# 3591 "data/maps/Colchis/scripts.pory"
	.string "Atthay uy'sgay anay assay, anay assay\n"
	.string "at'sthay ullfay ofay itshay.$"

Colchis_Text_MaidL::
# 3595 "data/maps/Colchis/scripts.pory"
	.string "I heard she said he said he had a crush\n"
	.string "on her but she said she does not like\l"
	.string "him.$"

Colchis_Text_MaidR::
# 3599 "data/maps/Colchis/scripts.pory"
	.string "Get out of here! We're not interested.$"

Colchis_Text_GruntDoorFFight::
# 3606 "data/maps/Colchis/scripts.pory"
	.string "Iay illway otnay etlay ouyay eesay ymay\n"
	.string "adies'lay edbay!$"

Colchis_Text_GruntDoorFLost::
# 3610 "data/maps/Colchis/scripts.pory"
	.string "Ou'veyay onqueredcay emay.$"

Colchis_Text_GruntDoorFPost::
# 3614 "data/maps/Colchis/scripts.pory"
	.string "Edea'sMay edbay isay oursyay.$"

Colchis_Text_GruntDoorMFight::
# 3621 "data/maps/Colchis/scripts.pory"
	.string "Ethay Ing'skay Amberschay areay otnay\n"
	.string "orfay ommoncay olkfay.$"

Colchis_Text_GruntDoorMLost::
# 3625 "data/maps/Colchis/scripts.pory"
	.string "Ymay ordlay! Iay avehay ailedfay ouyay!$"

Colchis_Text_GruntDoorMPost::
# 3629 "data/maps/Colchis/scripts.pory"
	.string "Ouyay ebelray umscray, ouryay\n"
	.string "esencepray efilesday isthay oblenay\l"
	.string "aceplay.$"

Colchis_Text_GruntThroneF1Fight::
# 3637 "data/maps/Colchis/scripts.pory"
	.string "At'swhay orseway, osinglay ouray\n"
	.string "ingkay, oray ouryay outfitay?$"

Colchis_Text_GruntThroneF1Lost::
# 3641 "data/maps/Colchis/scripts.pory"
	.string "Upersay otnay oolcay Iay otgay eatbay\n"
	.string "ybay aay obslay!$"

Colchis_Text_GruntThroneF1Post::
# 3645 "data/maps/Colchis/scripts.pory"
	.string "Ifay ou'reyay erehah otay overthroway\n"
	.string "ouray ingdomkay ouyay ouldcay atay\l"
	.string "eastlay oday itay ithway omesay\l"
	.string "ylestay.$"

Colchis_Text_GruntThroneF2Fight::
# 3652 "data/maps/Colchis/scripts.pory"
	.string "Ou'llyay evernay asspay! Eparepray\n"
	.string "otay eelfay ymay athwraw.$"

Colchis_Text_GruntThroneF2Lost::
# 3656 "data/maps/Colchis/scripts.pory"
	.string "Amnday indblay angeray!$"

Colchis_Text_GruntThroneF2Post::
# 3660 "data/maps/Colchis/scripts.pory"
	.string "Ou'reyay ightiermay anthay emay.$"

Colchis_Text_GruntThroneF3Fight::
# 3667 "data/maps/Colchis/scripts.pory"
	.string "Inay imestay ofay eacepay Iay anceday\n"
	.string "orfay Edeamay.$"

Colchis_Text_GruntThroneF3Lost::
# 3671 "data/maps/Colchis/scripts.pory"
	.string "I'may aay etterbay ancerday anthay\n"
	.string "attlerbay.$"

Colchis_Text_GruntThroneF3Post::
# 3675 "data/maps/Colchis/scripts.pory"
	.string "Easeplay on'tday urthay Aeetesay, ehay\n"
	.string "ayspay ymay illsbay.$"

Colchis_Text_GruntThroneF4Fight::
# 3682 "data/maps/Colchis/scripts.pory"
	.string "Ou'llyay evernay eavelay Olchiscay\n"
	.string "aliveay!$"

Colchis_Text_GruntThroneF4Lost::
# 3686 "data/maps/Colchis/scripts.pory"
	.string "Ailurefay...$"

Colchis_Text_GruntThroneF4Post::
# 3690 "data/maps/Colchis/scripts.pory"
	.string "Anymay uardsgay etyay emainray. Ouyay\n"
	.string "idnay otnay inway.$"

Colchis_Text_GruntThroneF5Fight::
# 3697 "data/maps/Colchis/scripts.pory"
	.string "Atwhay? Enacemay!$"

Colchis_Text_GruntThroneF5Lost::
# 3701 "data/maps/Colchis/scripts.pory"
	.string "Ouyay allshay aypay.$"

Colchis_Text_GruntThroneF5Post::
# 3705 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay ogay onay.$"

Colchis_Text_GruntThroneF6Fight::
# 3712 "data/maps/Colchis/scripts.pory"
	.string "At'sway isthay? Owhay idday ouyay\n"
	.string "escapeay omfray isonpray?$"

Colchis_Text_GruntThroneF6Lost::
# 3716 "data/maps/Colchis/scripts.pory"
	.string "Owhay etlay isthay admanmay ooselay?$"

Colchis_Text_GruntThroneF6Post::
# 3720 "data/maps/Colchis/scripts.pory"
	.string "Oundsay ethay alarmay!$"

Colchis_Text_GruntThroneM1Fight::
# 3727 "data/maps/Colchis/scripts.pory"
	.string "Itnessway ethay owerpay ofay ethay\n"
	.string "oyalray uardgay!$"

Colchis_Text_GruntThroneM1Lost::
# 3731 "data/maps/Colchis/scripts.pory"
	.string "Ethay irstfay, anday astlay, osslay\n"
	.string "ofay ethay oyalray uardgay.$"

Colchis_Text_GruntThroneM1Post::
# 3735 "data/maps/Colchis/scripts.pory"
	.string "Ouyay isrespectday ethay oyalray\n"
	.string "Olchiscay Onethray.$"

Colchis_Text_GruntThroneM2Fight::
# 3742 "data/maps/Colchis/scripts.pory"
	.string "Ymay olesay urposepay inay ife'slay\n"
	.string "otay opstay ouyay erehay.$"

Colchis_Text_GruntThroneM2Lost::
# 3746 "data/maps/Colchis/scripts.pory"
	.string "Owhay ouldcay Iay oselay?$"

Colchis_Text_GruntThroneM2Post::
# 3750 "data/maps/Colchis/scripts.pory"
	.string "Atwhay useay isay ymay ifelay ownay?$"

Colchis_Text_GruntThroneM3Fight::
# 3757 "data/maps/Colchis/scripts.pory"
	.string "Ethay ingkay isay oodgay, ereforethay\n"
	.string "ouyay ustmay ebab adbay.$"

Colchis_Text_GruntThroneM3Lost::
# 3761 "data/maps/Colchis/scripts.pory"
	.string "Ereforethay eitheray engthstray isay,\n"
	.string "oray Iay amay, adbay.$"

Colchis_Text_GruntThroneM3Post::
# 3765 "data/maps/Colchis/scripts.pory"
	.string "Ifay evilay insway enthay atefay isay\n"
	.string "adbay oray indblay.$"

Colchis_Text_GruntThroneM4Fight::
# 3772 "data/maps/Colchis/scripts.pory"
	.string "Ebellionray inay Olchiscay Ingdomkay\n"
	.string "endsay erehay.$"

Colchis_Text_GruntThroneM4Lost::
# 3776 "data/maps/Colchis/scripts.pory"
	.string "Eholdbay ethay ancientay egimeray\n"
	.string "iesday odaytay.$"

Colchis_Text_GruntThroneM4Post::
# 3780 "data/maps/Colchis/scripts.pory"
	.string "Aymay Ohay-Ohay anday Ugialay avesay\n"
	.string "ouray oulssay!$"

Colchis_Text_GruntThroneM5Fight::
# 3787 "data/maps/Colchis/scripts.pory"
	.string "Andstay ownday!$"

Colchis_Text_GruntThroneM5Lost::
# 3791 "data/maps/Colchis/scripts.pory"
	.string "I'veay eenbray oughtbray otay\n"
	.string "attenday efeatday.$"

Colchis_Text_GruntThroneM5Post::
# 3795 "data/maps/Colchis/scripts.pory"
	.string "I'llay ebay eheadedbay orfay ailingfay\n"
	.string "ymay ingkay!$"

Colchis_Text_GruntThroneM6Fight::
# 3802 "data/maps/Colchis/scripts.pory"
	.string "Owhay areday ouyay ingbray arway\n"
	.string "uponay ouray ing'skay eacepay?$"

Colchis_Text_GruntThroneM6Lost::
# 3806 "data/maps/Colchis/scripts.pory"
	.string "Ethay onglay eacepay ofay Olchiscay\n"
	.string "omescay otay anay enday.$"

Colchis_Text_GruntThroneM6Post::
# 3810 "data/maps/Colchis/scripts.pory"
	.string "Aay arway, afteray it'say oncievedcay,\n"
	.string "isay ardhay otay illkay.$"
