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
# 133 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 17
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
	specialvar VAR_RESULT, RandDigit
# 384 "data/maps/Colchis/scripts.pory"
	switch VAR_RESULT
# 385 "data/maps/Colchis/scripts.pory"
	case 1, Colchis_Script_DoForcedBattle_3
# 387 "data/maps/Colchis/scripts.pory"
	case 2, Colchis_Script_DoForcedBattle_4
# 389 "data/maps/Colchis/scripts.pory"
	case 3, Colchis_Script_DoForcedBattle_5
# 391 "data/maps/Colchis/scripts.pory"
	case 4, Colchis_Script_DoForcedBattle_6
# 393 "data/maps/Colchis/scripts.pory"
	case 5, Colchis_Script_DoForcedBattle_7
# 395 "data/maps/Colchis/scripts.pory"
	case 6, Colchis_Script_DoForcedBattle_8
# 397 "data/maps/Colchis/scripts.pory"
	case 7, Colchis_Script_DoForcedBattle_9
# 399 "data/maps/Colchis/scripts.pory"
	case 8, Colchis_Script_DoForcedBattle_10
# 401 "data/maps/Colchis/scripts.pory"
	case 9, Colchis_Script_DoForcedBattle_11
# 404 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_1, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_6, BigIslandS_Text_IgnisGrunt2Lost
Colchis_Script_DoForcedBattle_1:
# 408 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 409 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPost, MSGBOX_DEFAULT
# 410 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 411 "data/maps/Colchis/scripts.pory"
	closemessage
# 414 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleExitA
# 415 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleExitB
# 416 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 419 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 420 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 422 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 23, 0, 0
# 423 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 24, 2, 0
# 425 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_FACE_DOWN
# 426 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_UP
# 428 "data/maps/Colchis/scripts.pory"
	addobject 23
# 429 "data/maps/Colchis/scripts.pory"
	addobject 24
# 431 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 432 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
	return

Colchis_Script_DoForcedBattle_3:
# 386 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_1, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_4:
# 388 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_1, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_4, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_5:
# 390 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_1, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_6, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_6:
# 392 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_7:
# 394 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_4, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_8:
# 396 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_6, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_9:
# 398 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_5, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_10:
# 400 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_5, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_4, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_11:
# 402 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_5, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_6, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1


Colchis_Script_MedeaDance::
# 442 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 443 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 444 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 446 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 447 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 448 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 453 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 454 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 455 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 456 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 457 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 458 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 459 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 460 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 461 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 462 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 463 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 464 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 465 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 466 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 467 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 468 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 469 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 470 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 479 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 480 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 481 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 482 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 483 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 484 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 485 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 487 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 489 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 490 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 491 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 493 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 495 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 496 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 497 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 499 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 505 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 506 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 507 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 508 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 509 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 510 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 511 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 513 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 515 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 516 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 517 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 518 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 519 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 521 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 523 "data/maps/Colchis/scripts.pory"
	delay 25
# 525 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 526 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 527 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 528 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 529 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 531 "data/maps/Colchis/scripts.pory"
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
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 544 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 546 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 548 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 549 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 550 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 551 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 552 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 553 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 555 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 557 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 558 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 559 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 560 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 561 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 563 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 565 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 566 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 567 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 568 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 569 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 571 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 573 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 574 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 575 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 576 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 577 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
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
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 594 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 595 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 596 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 597 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 598 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 599 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 601 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 603 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 604 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 605 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 606 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 607 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 609 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 615 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 621 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 622 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 623 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 624 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 625 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 626 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 627 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 629 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 634 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 640 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 641 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 642 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 643 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 644 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 645 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 646 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 648 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 654 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 657 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 665 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 666 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 667 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 668 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 669 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 670 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 671 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 673 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 675 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 676 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 677 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 678 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 679 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 680 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 681 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 683 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 688 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 692 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 693 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 694 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 695 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 696 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 697 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 698 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 700 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 702 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 703 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 704 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 705 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 706 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 707 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 708 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 710 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 712 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 716 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 717 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 718 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 719 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 720 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 721 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 722 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 724 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 726 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 727 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 728 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 729 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 730 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 731 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 732 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 734 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 736 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 740 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 741 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 742 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 743 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 744 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 745 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 746 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 748 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 750 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 751 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 752 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 753 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 754 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 755 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 756 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 758 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 760 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 769 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 770 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 771 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 772 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 773 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 774 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 775 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 776 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 778 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 780 "data/maps/Colchis/scripts.pory"
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
	applymovement 15, Common_Movement_WalkSouthEast
# 789 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 791 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 793 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 795 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 796 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 797 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 798 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 799 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 800 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 801 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 802 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 804 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 806 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 812 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 813 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 814 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 815 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 816 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 817 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 818 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 819 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 821 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 822 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 824 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 825 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 828 "data/maps/Colchis/scripts.pory"
	delay 25
# 832 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 833 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 837 "data/maps/Colchis/scripts.pory"
	delay 25
# 839 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 840 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 844 "data/maps/Colchis/scripts.pory"
	delay 25
# 846 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 847 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 851 "data/maps/Colchis/scripts.pory"
	delay 25
# 853 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 854 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 855 "data/maps/Colchis/scripts.pory"
	delay 25
# 860 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 861 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 862 "data/maps/Colchis/scripts.pory"
	delay 25
# 864 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 865 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 866 "data/maps/Colchis/scripts.pory"
	delay 25
# 871 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 872 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 873 "data/maps/Colchis/scripts.pory"
	delay 25
# 875 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 876 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 877 "data/maps/Colchis/scripts.pory"
	delay 25
# 879 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 880 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 881 "data/maps/Colchis/scripts.pory"
	delay 25
# 883 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 884 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 885 "data/maps/Colchis/scripts.pory"
	delay 25
# 890 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 891 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 892 "data/maps/Colchis/scripts.pory"
	delay 25
# 894 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 895 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 896 "data/maps/Colchis/scripts.pory"
	delay 25
# 898 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 899 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 900 "data/maps/Colchis/scripts.pory"
	delay 25
# 902 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 903 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 904 "data/maps/Colchis/scripts.pory"
	delay 25
# 906 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 908 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 909 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 910 "data/maps/Colchis/scripts.pory"
	delay 25
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
	applymovement 15, Common_Movement_WalkSouthEast
# 922 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 924 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 933 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 934 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 935 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 936 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 937 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 938 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 939 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 940 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 941 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 946 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 947 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 948 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 949 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 950 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 951 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 952 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 953 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 954 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 959 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 960 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 961 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 962 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 963 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 964 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 965 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 966 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 967 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 972 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 973 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 974 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 975 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 976 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 977 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 978 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 979 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 980 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 985 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 986 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 987 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 988 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 989 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 990 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 991 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 992 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 993 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 998 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 999 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1001 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1002 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1004 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1005 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1006 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1011 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1012 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1013 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 1014 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 1015 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 1016 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 1017 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 1018 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 1019 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1024 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1025 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1026 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1027 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1028 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1029 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1030 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1031 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1032 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1037 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1038 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1039 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 1040 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 1041 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 1042 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 1043 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 1044 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 1045 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1047 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1048 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1049 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1050 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1051 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1052 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1053 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1054 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1055 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1057 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1058 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1059 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 1060 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 1061 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1062 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1063 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1064 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1065 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1067 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1071 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1073 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1074 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1075 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1080 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1081 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1083 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1085 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1091 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1092 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1093 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1094 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1095 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1096 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1097 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1098 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1103 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1104 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1105 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1106 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1107 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1108 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1109 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1110 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1111 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1112 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1113 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1114 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1115 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1116 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1117 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1118 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1119 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1124 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1125 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1126 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1127 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1128 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1129 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1130 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1131 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1132 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1133 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1134 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1135 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1136 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1137 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1138 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1139 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1140 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1141 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1142 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1143 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1144 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1145 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1146 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1147 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1148 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1149 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1150 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1151 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1152 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1153 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1154 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1155 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1156 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1157 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1158 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1159 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1160 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1161 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1162 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1163 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1164 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1165 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1166 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1167 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1168 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1169 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1170 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1171 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1172 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1173 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1174 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1175 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1176 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1177 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1178 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1179 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1180 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1191 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1192 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1193 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1198 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1199 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1200 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1201 "data/maps/Colchis/scripts.pory"
	closemessage
# 1203 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1207 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1208 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1209 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1210 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1211 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1213 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1214 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1215 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1217 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1218 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1219 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1220 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1228 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1229 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1230 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1235 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1236 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1237 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1244 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1245 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1246 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1250 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1251 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1252 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1261 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1262 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1263 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1264 "data/maps/Colchis/scripts.pory"
	closemessage
# 1267 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1268 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1269 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1278 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1279 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1280 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1285 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1286 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1287 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1290 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1291 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1292 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1293 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1294 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1298 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1299 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1300 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1304 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1305 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1306 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1308 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1309 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1310 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1314 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1315 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1317 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1318 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1324 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1325 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1326 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1327 "data/maps/Colchis/scripts.pory"
	closemessage
# 1330 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1331 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1334 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1335 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1343 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1349 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1350 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1351 "data/maps/Colchis/scripts.pory"
	closemessage
# 1352 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1356 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1357 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1360 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1361 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1362 "data/maps/Colchis/scripts.pory"
	closemessage
# 1363 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1366 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1367 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1368 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1369 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1372 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1373 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1374 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1375 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1376 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1379 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1380 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1381 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1382 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1383 "data/maps/Colchis/scripts.pory"
	delay 30
# 1384 "data/maps/Colchis/scripts.pory"
	waitse
# 1387 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonApproachPlayer
# 1388 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1391 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1392 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1393 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1396 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1397 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1398 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1401 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1402 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1403 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1406 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1407 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1408 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1411 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1412 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1413 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1415 "data/maps/Colchis/scripts.pory"
	closemessage
# 1418 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1419 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1422 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1423 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1424 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1425 "data/maps/Colchis/scripts.pory"
	closemessage
# 1428 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1429 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1432 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1433 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1434 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1437 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1438 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1439 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1441 "data/maps/Colchis/scripts.pory"
	closemessage
# 1445 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonExit
# 1446 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonExit
# 1447 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerPrisonExit
# 1448 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1450 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1458 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1459 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1462 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1463 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1464 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1466 "data/maps/Colchis/scripts.pory"
	closemessage
# 1469 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1470 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1473 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1474 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1475 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1476 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1477 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1480 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1481 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 1
# 1482 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1483 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 1
# 1486 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1487 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1490 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1491 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1492 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1495 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1496 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1497 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1500 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1501 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1504 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1505 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1506 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1508 "data/maps/Colchis/scripts.pory"
	closemessage
# 1511 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1512 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1515 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1516 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1518 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1519 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1521 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1522 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1524 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1525 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1526 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1529 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1530 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1531 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1532 "data/maps/Colchis/scripts.pory"
	closemessage
# 1535 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1536 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1539 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1540 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1543 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1546 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_B
# 1560 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1561 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1562 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1563 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1564 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1566 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1567 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1568 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1569 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1570 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1572 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_LugiaTest::
# 1578 "data/maps/Colchis/scripts.pory"
	lockall
# 1579 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1580 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1581 "data/maps/Colchis/scripts.pory"
	closemessage
# 1582 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_Lugia::
# 1587 "data/maps/Colchis/scripts.pory"
	lockall
# 1588 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1589 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 1590 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1591 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_LUGIA
# 1592 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1593 "data/maps/Colchis/scripts.pory"
	setwildbattle SPECIES_LUGIA, 18
# 1594 "data/maps/Colchis/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1595 "data/maps/Colchis/scripts.pory"
	waitstate
# 1596 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1597 "data/maps/Colchis/scripts.pory"
	removeobject 1
# 1598 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTriggerA::
# 1604 "data/maps/Colchis/scripts.pory"
	lockall
# 1605 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 0
# 1606 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTriggerB::
# 1610 "data/maps/Colchis/scripts.pory"
	lockall
# 1611 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 1
# 1612 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTrigger::
# 1617 "data/maps/Colchis/scripts.pory"
	lockall
# 1620 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1621 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1622 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1623 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1624 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1625 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1628 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_4
Colchis_Script_SanctumTrigger_3:
# 1632 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 12
# 1634 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerEndIntro
# 1636 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_7
# 1655 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_8
# 1677 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1678 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1679 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
# 1680 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
Colchis_Script_SanctumTrigger_1:
# 1683 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_SanctumTrigger_2:
# 1629 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_4:
# 1628 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_2
	goto Colchis_Script_SanctumTrigger_3

Colchis_Script_SanctumTrigger_7:
# 1639 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1642 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1646 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_8:
# 1656 "data/maps/Colchis/scripts.pory"
	closemessage
# 1658 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1659 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumTrigger_12
# 1664 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1665 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1667 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1668 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumWilds, MSGBOX_DEFAULT
# 1669 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1674 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_12:
# 1661 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Exeunt
	goto Colchis_Script_SanctumTrigger_1


Colchis_Script_SanctumTriggerReturn::
# 1688 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1689 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger1, MSGBOX_DEFAULT
# 1690 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1692 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1693 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger1, MSGBOX_DEFAULT
# 1694 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1696 "data/maps/Colchis/scripts.pory"
	closemessage
# 1699 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1700 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_SanctumTriggerEndIntro::
# 1706 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1707 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1708 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumTriggerMedeaExit::
# 1713 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1714 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger2, MSGBOX_DEFAULT
# 1715 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1716 "data/maps/Colchis/scripts.pory"
	closemessage
# 1717 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTriggerMedeaExit_2
# 1720 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3B
Colchis_Script_SanctumTriggerMedeaExit_1:
# 1722 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumTriggerMedeaExit_2:
# 1718 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3A
	goto Colchis_Script_SanctumTriggerMedeaExit_1


Colchis_Script_LugiaChaseTrigger::
# 1727 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1728 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaChaseTrigger_2
Colchis_Script_LugiaChaseTrigger_1:
	end

Colchis_Script_LugiaChaseTrigger_2:
# 1729 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	goto Colchis_Script_LugiaChaseTrigger_1


Colchis_Script_LugiaWanderTrigger::
# 1735 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1736 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaWanderTrigger_2
Colchis_Script_LugiaWanderTrigger_1:
	end

Colchis_Script_LugiaWanderTrigger_2:
# 1737 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	goto Colchis_Script_LugiaWanderTrigger_1


Colchis_Script_ShinyMareep::
# 1743 "data/maps/Colchis/scripts.pory"
	lockall
# 1744 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1745 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 1746 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1747 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1748 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1749 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1750 "data/maps/Colchis/scripts.pory"
	waitstate
# 1751 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1752 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1753 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumApproachJason::
# 1758 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumApproachJason_2
# 1761 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3B
Colchis_Script_SanctumApproachJason_1:
# 1763 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1765 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1766 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumApproachJason_2:
# 1759 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3A
	goto Colchis_Script_SanctumApproachJason_1


Colchis_Script_SanctumJasonBattle::
# 1772 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1773 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1775 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1776 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger3, MSGBOX_DEFAULT
# 1777 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1778 "data/maps/Colchis/scripts.pory"
	closemessage
# 1780 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_JASON, Colchis_Text_JasonLost
# 1782 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1783 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPost, MSGBOX_DEFAULT
# 1784 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumMedeaReturn::
# 1791 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1792 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1793 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1795 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1796 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1797 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1800 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1801 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumMedeaReturn_Text_0, MSGBOX_DEFAULT
# 1802 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1803 "data/maps/Colchis/scripts.pory"
	closemessage
# 1806 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn
# 1807 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1810 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1811 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn1, MSGBOX_DEFAULT
# 1812 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1813 "data/maps/Colchis/scripts.pory"
	closemessage
# 1816 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumMedeaReturn_2
# 1819 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2B
Colchis_Script_SanctumMedeaReturn_1:
# 1821 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1823 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1824 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1827 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1828 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn2, MSGBOX_DEFAULT
# 1829 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1830 "data/maps/Colchis/scripts.pory"
	closemessage
# 1835 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1836 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn1, MSGBOX_DEFAULT
# 1837 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1841 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumMedeaReturn_6
Colchis_Script_SanctumMedeaReturn_5:
# 1851 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	return

Colchis_Script_SanctumMedeaReturn_2:
# 1817 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2A
	goto Colchis_Script_SanctumMedeaReturn_1

Colchis_Script_SanctumMedeaReturn_6:
# 1842 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1843 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1844 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1845 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn2, MSGBOX_DEFAULT
# 1846 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1847 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1848 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_SanctumMedeaReturn_5


Colchis_Script_SanctumJasonCheckMareep::
# 1858 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, IsShinyMareepInParty
# 1860 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_2
# 1865 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1866 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonGiveMeMareep, MSGBOX_DEFAULT
# 1867 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1869 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GiveJasonMareep, MSGBOX_YESNO
# 1871 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_5
# 1875 "data/maps/Colchis/scripts.pory"
	special ChoosePartyMon
# 1876 "data/maps/Colchis/scripts.pory"
	waitstate
# 1878 "data/maps/Colchis/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_8
# 1882 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1884 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, SPECIES_MAREEP
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_11
# 1888 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonIsShiny
# 1890 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_14
# 1894 "data/maps/Colchis/scripts.pory"
	special BufferMonNickname
# 1895 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GaveShinyMareep, MSGBOX_DEFAULT
# 1896 "data/maps/Colchis/scripts.pory"
	closemessage
# 1897 "data/maps/Colchis/scripts.pory"
	special ReleaseChosenMon
# 1899 "data/maps/Colchis/scripts.pory"
	setflag FLAG_JASON_HAS_SHINYMAREEP
Colchis_Script_SanctumJasonCheckMareep_1:
	return

Colchis_Script_SanctumJasonCheckMareep_2:
# 1861 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_5:
# 1872 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_8:
# 1879 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_11:
# 1885 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_14:
# 1891 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1


Colchis_Script_SanctumJasonMareep::
# 1912 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumApproachJason
# 1915 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	return


Colchis_Script_Exeunt::
# 1922 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 14
# 1924 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_Exeunt
# 1925 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_Exeunt
# 1926 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_Exeunt
# 1927 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1929 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_BIG_ISLAND_N, 31, 37
	end


Colchis_Script_SetupEscapeFromColchis::
# 1935 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1936 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumDepart, MSGBOX_DEFAULT
# 1937 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1938 "data/maps/Colchis/scripts.pory"
	closemessage
# 1941 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAndMedeaExeunt
# 1942 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_JasonAndMedeaExeunt
# 1943 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1947 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 14, 0
# 1948 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_INVISIBLE
# 1950 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 15, 0
# 1951 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 1953 "data/maps/Colchis/scripts.pory"
	hideobjectat 54, MAP_COLCHIS
# 1954 "data/maps/Colchis/scripts.pory"
	hideobjectat 4, MAP_COLCHIS
# 1956 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1957 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1961 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_FORCED_BATTLE
# 1964 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 16
# 1967 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
# 1968 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1971 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupLostKid
# 1974 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_TrainerAeetes::
# 1987 "data/maps/Colchis/scripts.pory"
	lockall
# 1988 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1990 "data/maps/Colchis/scripts.pory"
	checktrainerflag TRAINER_AEETES
	goto_if 0, Colchis_Script_TrainerAeetes_2
# 2008 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 2009 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 2010 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
Colchis_Script_TrainerAeetes_1:
# 2012 "data/maps/Colchis/scripts.pory"
	closemessage
# 2013 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_TrainerAeetes_2:
# 1992 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1993 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesIntro, MSGBOX_DEFAULT
# 1994 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1995 "data/maps/Colchis/scripts.pory"
	closemessage
# 1996 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_AEETES, Colchis_Text_AeetesLost
# 1997 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1998 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesPost, MSGBOX_DEFAULT
# 1999 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 2001 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_KEY
# 2003 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 2004 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 2005 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
	goto Colchis_Script_TrainerAeetes_1


Colchis_Script_Bed::
# 2018 "data/maps/Colchis/scripts.pory"
	lockall
# 2019 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Bed, MSGBOX_YESNO
# 2020 "data/maps/Colchis/scripts.pory"
	closemessage
# 2021 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Bed_2
Colchis_Script_Bed_1:
# 2024 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Bed_2:
# 2022 "data/maps/Colchis/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Colchis_Script_Bed_1


Colchis_Script_RingBlocker::
# 2029 "data/maps/Colchis/scripts.pory"
	lockall
# 2030 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2033 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerIntro, MSGBOX_DEFAULT
# 2035 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_KEY, 1
# 2040 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_RingBlocker_2
# 2071 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_RingBlocker_1:
# 2075 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_RingBlocker_2:
# 2041 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerYesNo, MSGBOX_YESNO
# 2042 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_RingBlocker_5
# 2067 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerDecline, MSGBOX_DEFAULT
# 2068 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_RingBlocker_1

Colchis_Script_RingBlocker_5:
# 2045 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_KeyFits, MSGBOX_DEFAULT
# 2046 "data/maps/Colchis/scripts.pory"
	closemessage
# 2047 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_KEY
# 2048 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2050 "data/maps/Colchis/scripts.pory"
	hideobjectat 55, MAP_COLCHIS
# 2051 "data/maps/Colchis/scripts.pory"
	removeobject 55
# 2052 "data/maps/Colchis/scripts.pory"
	hideobjectat 56, MAP_COLCHIS
# 2053 "data/maps/Colchis/scripts.pory"
	removeobject 56
# 2054 "data/maps/Colchis/scripts.pory"
	hideobjectat 57, MAP_COLCHIS
# 2055 "data/maps/Colchis/scripts.pory"
	removeobject 57
# 2057 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 55, MOVEMENT_TYPE_INVISIBLE
# 2058 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 55, 1, 3
# 2059 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 56, MOVEMENT_TYPE_INVISIBLE
# 2060 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 56, 2, 3
# 2061 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 57, MOVEMENT_TYPE_INVISIBLE
# 2062 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 57, 3, 3
# 2064 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBARRIER
	goto Colchis_Script_RingBlocker_1


Colchis_Script_RingItem::
# 2080 "data/maps/Colchis/scripts.pory"
	lock
# 2081 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2082 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_RING
# 2083 "data/maps/Colchis/scripts.pory"
	hideobjectat 58, MAP_COLCHIS
# 2084 "data/maps/Colchis/scripts.pory"
	removeobject 58
# 2085 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBALL
# 2086 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 58, MOVEMENT_TYPE_INVISIBLE
# 2087 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 58, 4, 3
# 2088 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_CloseDoor::
# 2093 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2094 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_SetupLostKid::
# 2099 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2100 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 28, 12
# 2101 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_LOOK_AROUND
# 2102 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2103 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	return


Colchis_Script_ShowNannyWithGuard::
# 2108 "data/maps/Colchis/scripts.pory"
	removeobject 30
# 2109 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 30, 7, 50
# 2110 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_LEFT
# 2111 "data/maps/Colchis/scripts.pory"
	addobject 30
# 2112 "data/maps/Colchis/scripts.pory"
	showobjectat 30, MAP_COLCHIS
# 2114 "data/maps/Colchis/scripts.pory"
	removeobject 51
# 2115 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 51, 6, 50
# 2116 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 51, MOVEMENT_TYPE_FACE_RIGHT
# 2117 "data/maps/Colchis/scripts.pory"
	addobject 51
# 2118 "data/maps/Colchis/scripts.pory"
	showobjectat 51, MAP_COLCHIS
	return


Colchis_Script_Chef::
# 2124 "data/maps/Colchis/scripts.pory"
	lockall
# 2125 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2128 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Chef_2
# 2135 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Movement_ChefIntro, MSGBOX_DEFAULT
# 2136 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_RING
# 2137 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Chef_5
# 2168 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Chef_1:
# 2171 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Chef_2:
# 2129 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefProposal, MSGBOX_DEFAULT
# 2130 "data/maps/Colchis/scripts.pory"
	closemessage
# 2131 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_FaceRight
# 2132 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_5:
# 2138 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefRingYesNo, MSGBOX_YESNO
# 2139 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Chef_8
# 2164 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRingNo, MSGBOX_DEFAULT
# 2165 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_8:
# 2141 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_RING
# 2142 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRing, MSGBOX_DEFAULT
# 2143 "data/maps/Colchis/scripts.pory"
	closemessage
# 2145 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_ExclamationMark
# 2146 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2147 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks1, MSGBOX_DEFAULT
# 2148 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_APPLE
# 2150 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks2, MSGBOX_DEFAULT
# 2151 "data/maps/Colchis/scripts.pory"
	closemessage
# 2153 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2154 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Colchis_Script_Chef_12
Colchis_Script_Chef_11:
# 2158 "data/maps/Colchis/scripts.pory"
	applymovement 44, Colchis_Movement_ChefExit
# 2159 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2161 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_MOVECHEF
# 2162 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_12:
# 2155 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_WalkUp
# 2156 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_11


Colchis_Script_MoveChef::
# 2176 "data/maps/Colchis/scripts.pory"
	removeobject 44
# 2177 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 44, 59, 62
# 2178 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 44, MOVEMENT_TYPE_FACE_RIGHT
# 2179 "data/maps/Colchis/scripts.pory"
	addobject 44
# 2180 "data/maps/Colchis/scripts.pory"
	showobjectat 44, MAP_COLCHIS
# 2182 "data/maps/Colchis/scripts.pory"
	removeobject 37
# 2183 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 37, 60, 62
# 2184 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_LEFT
# 2185 "data/maps/Colchis/scripts.pory"
	addobject 37
# 2186 "data/maps/Colchis/scripts.pory"
	showobjectat 37, MAP_COLCHIS
	return


Colchis_Script_Maid::
# 2192 "data/maps/Colchis/scripts.pory"
	lockall
# 2193 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2194 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Maid_2
# 2200 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid1, MSGBOX_DEFAULT
# 2201 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Maid_1:
# 2203 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Maid_2:
# 2195 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid2, MSGBOX_DEFAULT
# 2196 "data/maps/Colchis/scripts.pory"
	closemessage
# 2197 "data/maps/Colchis/scripts.pory"
	applymovement 37, Common_Movement_FaceLeft
# 2198 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Maid_1


Colchis_Script_Jailer::
# 2208 "data/maps/Colchis/scripts.pory"
	lockall
# 2209 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2216 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerIntro, MSGBOX_DEFAULT
# 2219 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_APPLE
# 2220 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Jailer_2
# 2240 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Jailer_1:
# 2242 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Jailer_2:
# 2221 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerAppleYesNo, MSGBOX_YESNO
# 2222 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Jailer_5
# 2236 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveAppleNo, MSGBOX_DEFAULT
# 2237 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1

Colchis_Script_Jailer_5:
# 2223 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_APPLE
# 2225 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveApple, MSGBOX_DEFAULT
# 2226 "data/maps/Colchis/scripts.pory"
	closemessage
# 2228 "data/maps/Colchis/scripts.pory"
	applymovement 32, Common_Movement_ExclamationMark
# 2229 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2230 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks1, MSGBOX_DEFAULT
# 2231 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_JAIL_KEY
# 2233 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks2, MSGBOX_DEFAULT
# 2234 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1


Colchis_Script_PrisonDoor1::
# 2247 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Colchis_Script_PrisonDoor1_2
Colchis_Script_PrisonDoor1_1:
	end

Colchis_Script_PrisonDoor1_2:
# 2248 "data/maps/Colchis/scripts.pory"
	lockall
# 2249 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_JAIL_KEY
# 2250 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_PrisonDoor1_5
# 2267 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorClosed, MSGBOX_DEFAULT
# 2268 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_PrisonDoor1_4:
# 2270 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor1_1

Colchis_Script_PrisonDoor1_5:
# 2252 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_A
# 2254 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2255 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2257 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2258 "data/maps/Colchis/scripts.pory"
	closemessage
# 2260 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2261 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2262 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2263 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2264 "data/maps/Colchis/scripts.pory"
	delay 30
# 2265 "data/maps/Colchis/scripts.pory"
	waitse
	goto Colchis_Script_PrisonDoor1_4


Colchis_Script_PrisonDoor2::
# 2276 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_B, Colchis_Script_PrisonDoor2_2
Colchis_Script_PrisonDoor2_1:
	end

Colchis_Script_PrisonDoor2_2:
# 2277 "data/maps/Colchis/scripts.pory"
	lockall
# 2278 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_JAIL_KEY
# 2279 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_PrisonDoor2_5
# 2296 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorClosed, MSGBOX_DEFAULT
# 2297 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_PrisonDoor2_4:
# 2299 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor2_1

Colchis_Script_PrisonDoor2_5:
# 2281 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_B
# 2283 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2284 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2286 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2287 "data/maps/Colchis/scripts.pory"
	closemessage
# 2289 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2290 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2291 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2292 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2293 "data/maps/Colchis/scripts.pory"
	delay 30
# 2294 "data/maps/Colchis/scripts.pory"
	waitse
	goto Colchis_Script_PrisonDoor2_4


Colchis_Script_PrisonDoor3::
# 2305 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_C, Colchis_Script_PrisonDoor3_2
Colchis_Script_PrisonDoor3_1:
	end

Colchis_Script_PrisonDoor3_2:
# 2306 "data/maps/Colchis/scripts.pory"
	lockall
# 2307 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_JAIL_KEY
# 2308 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_PrisonDoor3_5
# 2325 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorClosed, MSGBOX_DEFAULT
# 2326 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_PrisonDoor3_4:
# 2328 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor3_1

Colchis_Script_PrisonDoor3_5:
# 2310 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_C
# 2312 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2313 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2315 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2316 "data/maps/Colchis/scripts.pory"
	closemessage
# 2318 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2319 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2320 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2321 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2322 "data/maps/Colchis/scripts.pory"
	delay 30
# 2323 "data/maps/Colchis/scripts.pory"
	waitse
	goto Colchis_Script_PrisonDoor3_4


Colchis_Script_LostKid::
# 2334 "data/maps/Colchis/scripts.pory"
	lockall
# 2335 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2337 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_LostKid_2
# 2361 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid2, MSGBOX_DEFAULT
# 2362 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_LostKid_1:
# 2364 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_LostKid_2:
# 2338 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid1, MSGBOX_DEFAULT
# 2339 "data/maps/Colchis/scripts.pory"
	closemessage
# 2340 "data/maps/Colchis/scripts.pory"
	special GetPlayerFacingDirection
# 2341 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Colchis_Script_LostKid_6
# 2344 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit2
Colchis_Script_LostKid_5:
# 2346 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2348 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_RETURN_LOSTKID
# 2350 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2351 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 5, 46
# 2352 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_WANDER_AROUND
# 2353 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2354 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
# 2356 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 17
# 2357 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_ShowNannyWithGuard
	goto Colchis_Script_LostKid_1

Colchis_Script_LostKid_6:
# 2342 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit1
	goto Colchis_Script_LostKid_5


Colchis_Script_DoorMan::
# 2369 "data/maps/Colchis/scripts.pory"
	lockall
# 2370 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2373 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_DoorMan_2
# 2378 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 18
	goto_if_ne Colchis_Script_DoorMan_6
# 2386 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman3, MSGBOX_DEFAULT
# 2387 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_DoorMan_5:
# 2389 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceRight
Colchis_Script_DoorMan_1:
# 2391 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2392 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_DoorMan_2:
# 2374 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman1, MSGBOX_DEFAULT
# 2375 "data/maps/Colchis/scripts.pory"
	closemessage
# 2376 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceDown
	goto Colchis_Script_DoorMan_1

Colchis_Script_DoorMan_6:
# 2379 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 18
# 2380 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman2, MSGBOX_DEFAULT
# 2381 "data/maps/Colchis/scripts.pory"
	closemessage
# 2382 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_DoorOpen_Left, FALSE
# 2383 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_DoorOpen_Right, FALSE
# 2384 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
	goto Colchis_Script_DoorMan_5


Colchis_Script_Nanny::
# 2398 "data/maps/Colchis/scripts.pory"
	lock
# 2399 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2400 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_Script_Nanny_2
# 2404 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny2, MSGBOX_DEFAULT
# 2405 "data/maps/Colchis/scripts.pory"
	closemessage
# 2406 "data/maps/Colchis/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 2407 "data/maps/Colchis/scripts.pory"
	waitmovement 0
Colchis_Script_Nanny_1:
# 2409 "data/maps/Colchis/scripts.pory"
	release
	end

Colchis_Script_Nanny_2:
# 2401 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny1, MSGBOX_DEFAULT
# 2402 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Nanny_1


Colchis_Script_GruntBreak::
# 2414 "data/maps/Colchis/scripts.pory"
	lockall
# 2415 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2416 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 2417 "data/maps/Colchis/scripts.pory"
	switch VAR_RESULT
# 2418 "data/maps/Colchis/scripts.pory"
	case 1, Colchis_Script_GruntBreak_3
# 2420 "data/maps/Colchis/scripts.pory"
	case 2, Colchis_Script_GruntBreak_4
# 2422 "data/maps/Colchis/scripts.pory"
	case 3, Colchis_Script_GruntBreak_5
# 2424 "data/maps/Colchis/scripts.pory"
	case 4, Colchis_Script_GruntBreak_6
# 2426 "data/maps/Colchis/scripts.pory"
	case 5, Colchis_Script_GruntBreak_7
# 2428 "data/maps/Colchis/scripts.pory"
	case 6, Colchis_Script_GruntBreak_8
# 2430 "data/maps/Colchis/scripts.pory"
	case 7, Colchis_Script_GruntBreak_9
# 2432 "data/maps/Colchis/scripts.pory"
	case 8, Colchis_Script_GruntBreak_10
# 2434 "data/maps/Colchis/scripts.pory"
	case 9, Colchis_Script_GruntBreak_11
# 2437 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak0, MSGBOX_DEFAULT
Colchis_Script_GruntBreak_1:
# 2439 "data/maps/Colchis/scripts.pory"
	closemessage
# 2440 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_GruntBreak_3:
# 2419 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak1, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_4:
# 2421 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak2, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_5:
# 2423 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak3, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_6:
# 2425 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak4, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_7:
# 2427 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak5, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_8:
# 2429 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak6, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_9:
# 2431 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak7, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_10:
# 2433 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak8, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_11:
# 2435 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak9, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1


Colchis_Script_Kid1::
# 2445 "data/maps/Colchis/scripts.pory"
	lock
# 2446 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2447 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid1, MSGBOX_DEFAULT
# 2448 "data/maps/Colchis/scripts.pory"
	closemessage
# 2449 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid2::
# 2454 "data/maps/Colchis/scripts.pory"
	lock
# 2455 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2456 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid2, MSGBOX_DEFAULT
# 2457 "data/maps/Colchis/scripts.pory"
	closemessage
# 2458 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid3::
# 2463 "data/maps/Colchis/scripts.pory"
	lock
# 2464 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2465 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid3, MSGBOX_DEFAULT
# 2466 "data/maps/Colchis/scripts.pory"
	closemessage
# 2467 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher1::
# 2472 "data/maps/Colchis/scripts.pory"
	lock
# 2473 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2474 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher1, MSGBOX_DEFAULT
# 2475 "data/maps/Colchis/scripts.pory"
	closemessage
# 2476 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher2::
# 2481 "data/maps/Colchis/scripts.pory"
	lock
# 2482 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2483 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher2, MSGBOX_DEFAULT
# 2484 "data/maps/Colchis/scripts.pory"
	closemessage
# 2485 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Chef2::
# 2490 "data/maps/Colchis/scripts.pory"
	lock
# 2491 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2492 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Chef2, MSGBOX_DEFAULT
# 2493 "data/maps/Colchis/scripts.pory"
	closemessage
# 2494 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakL::
# 2499 "data/maps/Colchis/scripts.pory"
	lock
# 2500 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2501 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakL, MSGBOX_DEFAULT
# 2502 "data/maps/Colchis/scripts.pory"
	closemessage
# 2503 "data/maps/Colchis/scripts.pory"
	applymovement 39, Common_Movement_FaceRight
# 2504 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2505 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakR::
# 2510 "data/maps/Colchis/scripts.pory"
	lock
# 2511 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2512 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakR, MSGBOX_DEFAULT
# 2513 "data/maps/Colchis/scripts.pory"
	closemessage
# 2514 "data/maps/Colchis/scripts.pory"
	applymovement 38, Common_Movement_FaceLeft
# 2515 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2516 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_MaidL::
# 2521 "data/maps/Colchis/scripts.pory"
	lock
# 2522 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2523 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MaidL, MSGBOX_DEFAULT
# 2524 "data/maps/Colchis/scripts.pory"
	closemessage
# 2525 "data/maps/Colchis/scripts.pory"
	applymovement 43, Common_Movement_FaceRight
# 2526 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2527 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_MaidR::
# 2532 "data/maps/Colchis/scripts.pory"
	lock
# 2533 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2534 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MaidR, MSGBOX_DEFAULT
# 2535 "data/maps/Colchis/scripts.pory"
	closemessage
# 2536 "data/maps/Colchis/scripts.pory"
	applymovement 42, Common_Movement_FaceLeft
# 2537 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2538 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntDoorF::
# 2543 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNTDOOR_F, Colchis_Text_GruntDoorFFight, Colchis_Text_GruntDoorFLost
# 2544 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntDoorFPost, MSGBOX_DEFAULT
# 2545 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntDoorM::
# 2550 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNTDOOR_M, Colchis_Text_GruntDoorMFight, Colchis_Text_GruntDoorMLost
# 2551 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntDoorMPost, MSGBOX_DEFAULT
# 2552 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM1::
# 2557 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM1, Colchis_Text_GruntThroneM1Fight, Colchis_Text_GruntThroneM1Lost
# 2558 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM1Post, MSGBOX_DEFAULT
# 2559 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM2::
# 2564 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM2, Colchis_Text_GruntThroneM2Fight, Colchis_Text_GruntThroneM2Lost
# 2565 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM2Post, MSGBOX_DEFAULT
# 2566 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM3::
# 2571 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM3, Colchis_Text_GruntThroneM3Fight, Colchis_Text_GruntThroneM3Lost
# 2572 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM3Post, MSGBOX_DEFAULT
# 2573 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM4::
# 2578 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM4, Colchis_Text_GruntThroneM4Fight, Colchis_Text_GruntThroneM4Lost
# 2579 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM4Post, MSGBOX_DEFAULT
# 2580 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM5::
# 2585 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM5, Colchis_Text_GruntThroneM5Fight, Colchis_Text_GruntThroneM5Lost
# 2586 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM5Post, MSGBOX_DEFAULT
# 2587 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM6::
# 2592 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM6, Colchis_Text_GruntThroneM6Fight, Colchis_Text_GruntThroneM6Lost
# 2593 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM6Post, MSGBOX_DEFAULT
# 2594 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF1::
# 2601 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF1, Colchis_Text_GruntThroneF1Fight, Colchis_Text_GruntThroneF1Lost
# 2602 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF1Post, MSGBOX_DEFAULT
# 2603 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF2::
# 2608 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF2, Colchis_Text_GruntThroneF2Fight, Colchis_Text_GruntThroneF2Lost
# 2609 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF2Post, MSGBOX_DEFAULT
# 2610 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF3::
# 2615 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF3, Colchis_Text_GruntThroneF3Fight, Colchis_Text_GruntThroneF3Lost
# 2616 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF3Post, MSGBOX_DEFAULT
# 2617 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF4::
# 2622 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF4, Colchis_Text_GruntThroneF4Fight, Colchis_Text_GruntThroneF4Lost
# 2623 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF4Post, MSGBOX_DEFAULT
# 2624 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF5::
# 2629 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF5, Colchis_Text_GruntThroneF5Fight, Colchis_Text_GruntThroneF5Lost
# 2630 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF5Post, MSGBOX_DEFAULT
# 2631 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF6::
# 2636 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF6, Colchis_Text_GruntThroneF6Fight, Colchis_Text_GruntThroneF6Lost
# 2637 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF6Post, MSGBOX_DEFAULT
# 2638 "data/maps/Colchis/scripts.pory"
	closemessage
	end


# 2642 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 2643 "data/maps/Colchis/scripts.pory"
	walk_up
# 2643 "data/maps/Colchis/scripts.pory"
	walk_up
# 2643 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2646 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 2647 "data/maps/Colchis/scripts.pory"
	walk_down
# 2647 "data/maps/Colchis/scripts.pory"
	walk_down
# 2647 "data/maps/Colchis/scripts.pory"
	walk_down
# 2647 "data/maps/Colchis/scripts.pory"
	walk_down
# 2647 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2650 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 2651 "data/maps/Colchis/scripts.pory"
	walk_up
# 2651 "data/maps/Colchis/scripts.pory"
	walk_up
# 2651 "data/maps/Colchis/scripts.pory"
	walk_up
# 2651 "data/maps/Colchis/scripts.pory"
	walk_up
# 2651 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2654 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitA:
# 2655 "data/maps/Colchis/scripts.pory"
	walk_up
# 2655 "data/maps/Colchis/scripts.pory"
	walk_up
# 2655 "data/maps/Colchis/scripts.pory"
	walk_up
# 2655 "data/maps/Colchis/scripts.pory"
	walk_up
# 2655 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2658 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitB:
# 2659 "data/maps/Colchis/scripts.pory"
	walk_down
# 2659 "data/maps/Colchis/scripts.pory"
	walk_down
# 2659 "data/maps/Colchis/scripts.pory"
	walk_down
# 2659 "data/maps/Colchis/scripts.pory"
	walk_down
# 2659 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2662 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2664 "data/maps/Colchis/scripts.pory"
	walk_right
# 2664 "data/maps/Colchis/scripts.pory"
	walk_right
# 2664 "data/maps/Colchis/scripts.pory"
	walk_right
# 2664 "data/maps/Colchis/scripts.pory"
	walk_right
# 2664 "data/maps/Colchis/scripts.pory"
	walk_right
# 2665 "data/maps/Colchis/scripts.pory"
	walk_up
# 2665 "data/maps/Colchis/scripts.pory"
	walk_up
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2666 "data/maps/Colchis/scripts.pory"
	walk_right
# 2667 "data/maps/Colchis/scripts.pory"
	walk_up
# 2667 "data/maps/Colchis/scripts.pory"
	walk_up
# 2667 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2670 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 2671 "data/maps/Colchis/scripts.pory"
	walk_up
# 2671 "data/maps/Colchis/scripts.pory"
	walk_up
# 2671 "data/maps/Colchis/scripts.pory"
	walk_up
# 2671 "data/maps/Colchis/scripts.pory"
	walk_up
# 2671 "data/maps/Colchis/scripts.pory"
	walk_up
# 2671 "data/maps/Colchis/scripts.pory"
	walk_up
# 2671 "data/maps/Colchis/scripts.pory"
	walk_up
# 2671 "data/maps/Colchis/scripts.pory"
	walk_up
# 2671 "data/maps/Colchis/scripts.pory"
	walk_up
# 2671 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2674 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 2675 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2678 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 2679 "data/maps/Colchis/scripts.pory"
	face_right
# 2680 "data/maps/Colchis/scripts.pory"
	face_up
# 2681 "data/maps/Colchis/scripts.pory"
	face_left
# 2682 "data/maps/Colchis/scripts.pory"
	face_down
# 2683 "data/maps/Colchis/scripts.pory"
	face_right
# 2684 "data/maps/Colchis/scripts.pory"
	face_up
# 2685 "data/maps/Colchis/scripts.pory"
	face_left
# 2686 "data/maps/Colchis/scripts.pory"
	face_down
# 2687 "data/maps/Colchis/scripts.pory"
	face_right
# 2688 "data/maps/Colchis/scripts.pory"
	face_up
# 2689 "data/maps/Colchis/scripts.pory"
	face_left
# 2690 "data/maps/Colchis/scripts.pory"
	face_down
# 2691 "data/maps/Colchis/scripts.pory"
	face_right
# 2692 "data/maps/Colchis/scripts.pory"
	face_up
# 2693 "data/maps/Colchis/scripts.pory"
	face_left
# 2694 "data/maps/Colchis/scripts.pory"
	face_down
# 2695 "data/maps/Colchis/scripts.pory"
	face_right
# 2696 "data/maps/Colchis/scripts.pory"
	face_up
# 2697 "data/maps/Colchis/scripts.pory"
	face_left
# 2698 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2701 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 2702 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2702 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2703 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2706 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 2707 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2707 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2711 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 2712 "data/maps/Colchis/scripts.pory"
	walk_left
# 2713 "data/maps/Colchis/scripts.pory"
	walk_up
# 2713 "data/maps/Colchis/scripts.pory"
	walk_up
# 2714 "data/maps/Colchis/scripts.pory"
	walk_right
# 2714 "data/maps/Colchis/scripts.pory"
	walk_right
# 2715 "data/maps/Colchis/scripts.pory"
	walk_down
# 2715 "data/maps/Colchis/scripts.pory"
	walk_down
# 2716 "data/maps/Colchis/scripts.pory"
	walk_left
# 2717 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2720 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 2721 "data/maps/Colchis/scripts.pory"
	walk_left
# 2722 "data/maps/Colchis/scripts.pory"
	walk_up
# 2722 "data/maps/Colchis/scripts.pory"
	walk_up
# 2723 "data/maps/Colchis/scripts.pory"
	walk_right
# 2723 "data/maps/Colchis/scripts.pory"
	walk_right
# 2724 "data/maps/Colchis/scripts.pory"
	walk_down
# 2724 "data/maps/Colchis/scripts.pory"
	walk_down
# 2725 "data/maps/Colchis/scripts.pory"
	walk_left
# 2726 "data/maps/Colchis/scripts.pory"
	face_down
# 2727 "data/maps/Colchis/scripts.pory"
	walk_left
# 2728 "data/maps/Colchis/scripts.pory"
	walk_up
# 2728 "data/maps/Colchis/scripts.pory"
	walk_up
# 2729 "data/maps/Colchis/scripts.pory"
	walk_right
# 2729 "data/maps/Colchis/scripts.pory"
	walk_right
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2731 "data/maps/Colchis/scripts.pory"
	walk_left
# 2732 "data/maps/Colchis/scripts.pory"
	face_down
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2734 "data/maps/Colchis/scripts.pory"
	walk_up
# 2734 "data/maps/Colchis/scripts.pory"
	walk_up
# 2735 "data/maps/Colchis/scripts.pory"
	walk_right
# 2735 "data/maps/Colchis/scripts.pory"
	walk_right
# 2736 "data/maps/Colchis/scripts.pory"
	walk_down
# 2736 "data/maps/Colchis/scripts.pory"
	walk_down
# 2737 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2741 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 2742 "data/maps/Colchis/scripts.pory"
	walk_down
# 2742 "data/maps/Colchis/scripts.pory"
	walk_down
# 2742 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2745 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 2746 "data/maps/Colchis/scripts.pory"
	walk_right
# 2746 "data/maps/Colchis/scripts.pory"
	walk_right
# 2747 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2750 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2752 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2755 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2757 "data/maps/Colchis/scripts.pory"
	face_left
# 2758 "data/maps/Colchis/scripts.pory"
	face_up
# 2759 "data/maps/Colchis/scripts.pory"
	face_right
# 2760 "data/maps/Colchis/scripts.pory"
	face_down
# 2761 "data/maps/Colchis/scripts.pory"
	walk_down
# 2762 "data/maps/Colchis/scripts.pory"
	face_left
# 2763 "data/maps/Colchis/scripts.pory"
	face_up
# 2764 "data/maps/Colchis/scripts.pory"
	face_right
# 2765 "data/maps/Colchis/scripts.pory"
	face_down
# 2766 "data/maps/Colchis/scripts.pory"
	walk_down
# 2767 "data/maps/Colchis/scripts.pory"
	face_left
# 2768 "data/maps/Colchis/scripts.pory"
	face_up
# 2769 "data/maps/Colchis/scripts.pory"
	face_right
# 2770 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2773 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 2774 "data/maps/Colchis/scripts.pory"
	walk_right
# 2775 "data/maps/Colchis/scripts.pory"
	walk_up
# 2776 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2777 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2780 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 2781 "data/maps/Colchis/scripts.pory"
	walk_left
# 2782 "data/maps/Colchis/scripts.pory"
	walk_up
# 2783 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2784 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2787 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 2788 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2789 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2792 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 2793 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2794 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2797 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 2798 "data/maps/Colchis/scripts.pory"
	walk_left
# 2799 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2802 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 2803 "data/maps/Colchis/scripts.pory"
	walk_right
# 2804 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2807 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 2808 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2809 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2812 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 2813 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2814 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2817 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 2818 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2821 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 2822 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 2825 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 2826 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 2830 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 2831 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 2834 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 2835 "data/maps/Colchis/scripts.pory"
	walk_up
# 2835 "data/maps/Colchis/scripts.pory"
	walk_up
# 2835 "data/maps/Colchis/scripts.pory"
	walk_up
# 2835 "data/maps/Colchis/scripts.pory"
	walk_up
# 2835 "data/maps/Colchis/scripts.pory"
	walk_up
# 2835 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2838 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 2839 "data/maps/Colchis/scripts.pory"
	walk_right
# 2839 "data/maps/Colchis/scripts.pory"
	walk_right
# 2839 "data/maps/Colchis/scripts.pory"
	walk_right
# 2839 "data/maps/Colchis/scripts.pory"
	walk_right
# 2839 "data/maps/Colchis/scripts.pory"
	walk_right
# 2839 "data/maps/Colchis/scripts.pory"
	walk_right
# 2839 "data/maps/Colchis/scripts.pory"
	walk_right
# 2839 "data/maps/Colchis/scripts.pory"
	walk_right
# 2840 "data/maps/Colchis/scripts.pory"
	walk_down
# 2840 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2843 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 2844 "data/maps/Colchis/scripts.pory"
	walk_right
# 2844 "data/maps/Colchis/scripts.pory"
	walk_right
# 2844 "data/maps/Colchis/scripts.pory"
	walk_right
# 2844 "data/maps/Colchis/scripts.pory"
	walk_right
# 2844 "data/maps/Colchis/scripts.pory"
	walk_right
# 2844 "data/maps/Colchis/scripts.pory"
	walk_right
# 2844 "data/maps/Colchis/scripts.pory"
	walk_right
# 2845 "data/maps/Colchis/scripts.pory"
	walk_down
# 2845 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2848 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 2849 "data/maps/Colchis/scripts.pory"
	walk_right
# 2849 "data/maps/Colchis/scripts.pory"
	walk_right
# 2849 "data/maps/Colchis/scripts.pory"
	walk_right
# 2849 "data/maps/Colchis/scripts.pory"
	walk_right
# 2849 "data/maps/Colchis/scripts.pory"
	walk_right
# 2849 "data/maps/Colchis/scripts.pory"
	walk_right
# 2850 "data/maps/Colchis/scripts.pory"
	walk_down
# 2850 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2853 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 2854 "data/maps/Colchis/scripts.pory"
	walk_right
# 2854 "data/maps/Colchis/scripts.pory"
	walk_right
# 2854 "data/maps/Colchis/scripts.pory"
	walk_right
# 2854 "data/maps/Colchis/scripts.pory"
	walk_right
# 2854 "data/maps/Colchis/scripts.pory"
	walk_right
# 2854 "data/maps/Colchis/scripts.pory"
	walk_right
# 2854 "data/maps/Colchis/scripts.pory"
	walk_right
# 2854 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2858 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 2859 "data/maps/Colchis/scripts.pory"
	walk_right
# 2859 "data/maps/Colchis/scripts.pory"
	walk_right
# 2859 "data/maps/Colchis/scripts.pory"
	walk_right
# 2859 "data/maps/Colchis/scripts.pory"
	walk_right
# 2859 "data/maps/Colchis/scripts.pory"
	walk_right
# 2859 "data/maps/Colchis/scripts.pory"
	walk_right
# 2859 "data/maps/Colchis/scripts.pory"
	walk_right
# 2860 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2863 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 2864 "data/maps/Colchis/scripts.pory"
	walk_right
# 2864 "data/maps/Colchis/scripts.pory"
	walk_right
# 2864 "data/maps/Colchis/scripts.pory"
	walk_right
# 2864 "data/maps/Colchis/scripts.pory"
	walk_right
# 2864 "data/maps/Colchis/scripts.pory"
	walk_right
# 2864 "data/maps/Colchis/scripts.pory"
	walk_right
# 2865 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2868 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2869 "data/maps/Colchis/scripts.pory"
	walk_up
# 2870 "data/maps/Colchis/scripts.pory"
	walk_right
# 2870 "data/maps/Colchis/scripts.pory"
	walk_right
# 2870 "data/maps/Colchis/scripts.pory"
	walk_right
# 2870 "data/maps/Colchis/scripts.pory"
	walk_right
# 2870 "data/maps/Colchis/scripts.pory"
	walk_right
# 2870 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2873 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 2874 "data/maps/Colchis/scripts.pory"
	walk_right
# 2874 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2877 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 2878 "data/maps/Colchis/scripts.pory"
	walk_up
# 2878 "data/maps/Colchis/scripts.pory"
	walk_up
# 2878 "data/maps/Colchis/scripts.pory"
	walk_up
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2879 "data/maps/Colchis/scripts.pory"
	walk_right
# 2880 "data/maps/Colchis/scripts.pory"
	walk_up
# 2880 "data/maps/Colchis/scripts.pory"
	walk_up
# 2880 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2883 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 2884 "data/maps/Colchis/scripts.pory"
	walk_up
# 2884 "data/maps/Colchis/scripts.pory"
	walk_up
# 2884 "data/maps/Colchis/scripts.pory"
	walk_up
# 2884 "data/maps/Colchis/scripts.pory"
	walk_up
# 2884 "data/maps/Colchis/scripts.pory"
	walk_up
# 2884 "data/maps/Colchis/scripts.pory"
	walk_up
# 2884 "data/maps/Colchis/scripts.pory"
	walk_up
# 2884 "data/maps/Colchis/scripts.pory"
	walk_up
# 2884 "data/maps/Colchis/scripts.pory"
	walk_up
# 2884 "data/maps/Colchis/scripts.pory"
	walk_up
# 2884 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2887 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 2888 "data/maps/Colchis/scripts.pory"
	walk_up
# 2888 "data/maps/Colchis/scripts.pory"
	walk_up
# 2888 "data/maps/Colchis/scripts.pory"
	walk_up
# 2888 "data/maps/Colchis/scripts.pory"
	walk_up
# 2888 "data/maps/Colchis/scripts.pory"
	walk_up
# 2888 "data/maps/Colchis/scripts.pory"
	walk_up
# 2888 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2891 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 2892 "data/maps/Colchis/scripts.pory"
	walk_left
# 2893 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2896 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 2897 "data/maps/Colchis/scripts.pory"
	walk_up
# 2898 "data/maps/Colchis/scripts.pory"
	walk_right
# 2899 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2903 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 2904 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2907 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 2908 "data/maps/Colchis/scripts.pory"
	walk_right
# 2908 "data/maps/Colchis/scripts.pory"
	walk_right
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2910 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2913 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 2914 "data/maps/Colchis/scripts.pory"
	walk_left
# 2915 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2918 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 2919 "data/maps/Colchis/scripts.pory"
	walk_right
# 2920 "data/maps/Colchis/scripts.pory"
	walk_up
# 2921 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2924 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 2925 "data/maps/Colchis/scripts.pory"
	walk_left
# 2926 "data/maps/Colchis/scripts.pory"
	walk_up
# 2927 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2930 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 2931 "data/maps/Colchis/scripts.pory"
	walk_down
# 2931 "data/maps/Colchis/scripts.pory"
	walk_down
# 2931 "data/maps/Colchis/scripts.pory"
	walk_down
# 2931 "data/maps/Colchis/scripts.pory"
	walk_down
# 2931 "data/maps/Colchis/scripts.pory"
	walk_down
# 2931 "data/maps/Colchis/scripts.pory"
	walk_down
# 2931 "data/maps/Colchis/scripts.pory"
	walk_down
# 2931 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2934 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 2935 "data/maps/Colchis/scripts.pory"
	walk_up
# 2935 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2938 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonApproachPlayer:
# 2939 "data/maps/Colchis/scripts.pory"
	walk_up
# 2939 "data/maps/Colchis/scripts.pory"
	walk_up
# 2939 "data/maps/Colchis/scripts.pory"
	walk_up
# 2939 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2942 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonExit:
# 2943 "data/maps/Colchis/scripts.pory"
	walk_down
# 2943 "data/maps/Colchis/scripts.pory"
	walk_down
# 2943 "data/maps/Colchis/scripts.pory"
	walk_down
# 2943 "data/maps/Colchis/scripts.pory"
	walk_down
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2944 "data/maps/Colchis/scripts.pory"
	walk_left
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2946 "data/maps/Colchis/scripts.pory"
	walk_right
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_down
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
# 2948 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2951 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonExit:
# 2952 "data/maps/Colchis/scripts.pory"
	walk_down
# 2952 "data/maps/Colchis/scripts.pory"
	walk_down
# 2952 "data/maps/Colchis/scripts.pory"
	walk_down
# 2952 "data/maps/Colchis/scripts.pory"
	walk_down
# 2952 "data/maps/Colchis/scripts.pory"
	walk_down
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2953 "data/maps/Colchis/scripts.pory"
	walk_left
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2954 "data/maps/Colchis/scripts.pory"
	walk_down
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2956 "data/maps/Colchis/scripts.pory"
	walk_down
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
# 2957 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2960 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerPrisonExit:
# 2961 "data/maps/Colchis/scripts.pory"
	walk_down
# 2961 "data/maps/Colchis/scripts.pory"
	walk_down
# 2961 "data/maps/Colchis/scripts.pory"
	walk_down
# 2961 "data/maps/Colchis/scripts.pory"
	walk_down
# 2961 "data/maps/Colchis/scripts.pory"
	walk_down
# 2961 "data/maps/Colchis/scripts.pory"
	walk_down
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2964 "data/maps/Colchis/scripts.pory"
	walk_right
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2965 "data/maps/Colchis/scripts.pory"
	walk_down
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
# 2966 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2969 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 2970 "data/maps/Colchis/scripts.pory"
	walk_left
# 2970 "data/maps/Colchis/scripts.pory"
	walk_left
# 2970 "data/maps/Colchis/scripts.pory"
	walk_left
# 2971 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2974 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 2975 "data/maps/Colchis/scripts.pory"
	walk_down
# 2976 "data/maps/Colchis/scripts.pory"
	walk_right
# 2976 "data/maps/Colchis/scripts.pory"
	walk_right
# 2976 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2979 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 2980 "data/maps/Colchis/scripts.pory"
	walk_up
# 2980 "data/maps/Colchis/scripts.pory"
	walk_up
# 2980 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2983 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 2984 "data/maps/Colchis/scripts.pory"
	walk_up
# 2984 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2987 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3A:
# 2988 "data/maps/Colchis/scripts.pory"
	walk_up
# 2988 "data/maps/Colchis/scripts.pory"
	walk_up
# 2989 "data/maps/Colchis/scripts.pory"
	walk_right
# 2989 "data/maps/Colchis/scripts.pory"
	walk_right
# 2990 "data/maps/Colchis/scripts.pory"
	walk_up
# 2990 "data/maps/Colchis/scripts.pory"
	walk_up
# 2990 "data/maps/Colchis/scripts.pory"
	walk_up
# 2990 "data/maps/Colchis/scripts.pory"
	walk_up
# 2990 "data/maps/Colchis/scripts.pory"
	walk_up
# 2990 "data/maps/Colchis/scripts.pory"
	walk_up
# 2990 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2993 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3B:
# 2994 "data/maps/Colchis/scripts.pory"
	walk_up
# 2994 "data/maps/Colchis/scripts.pory"
	walk_up
# 2995 "data/maps/Colchis/scripts.pory"
	walk_right
# 2996 "data/maps/Colchis/scripts.pory"
	walk_up
# 2996 "data/maps/Colchis/scripts.pory"
	walk_up
# 2996 "data/maps/Colchis/scripts.pory"
	walk_up
# 2996 "data/maps/Colchis/scripts.pory"
	walk_up
# 2996 "data/maps/Colchis/scripts.pory"
	walk_up
# 2996 "data/maps/Colchis/scripts.pory"
	walk_up
# 2996 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2999 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3A:
# 3000 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_right
# 3002 "data/maps/Colchis/scripts.pory"
	walk_down
# 3002 "data/maps/Colchis/scripts.pory"
	walk_down
# 3003 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 3006 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3B:
# 3007 "data/maps/Colchis/scripts.pory"
	walk_down
# 3007 "data/maps/Colchis/scripts.pory"
	walk_down
# 3007 "data/maps/Colchis/scripts.pory"
	walk_down
# 3008 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 3011 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn:
# 3012 "data/maps/Colchis/scripts.pory"
	walk_down
# 3012 "data/maps/Colchis/scripts.pory"
	walk_down
# 3012 "data/maps/Colchis/scripts.pory"
	walk_down
# 3012 "data/maps/Colchis/scripts.pory"
	walk_down
# 3012 "data/maps/Colchis/scripts.pory"
	walk_down
# 3012 "data/maps/Colchis/scripts.pory"
	walk_down
# 3012 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 3015 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2A:
# 3016 "data/maps/Colchis/scripts.pory"
	walk_down
# 3017 "data/maps/Colchis/scripts.pory"
	walk_left
# 3017 "data/maps/Colchis/scripts.pory"
	walk_left
# 3018 "data/maps/Colchis/scripts.pory"
	walk_down
# 3019 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 3022 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2B:
# 3023 "data/maps/Colchis/scripts.pory"
	walk_down
# 3024 "data/maps/Colchis/scripts.pory"
	walk_left
# 3025 "data/maps/Colchis/scripts.pory"
	walk_down
# 3026 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 3029 "data/maps/Colchis/scripts.pory"
Colchis_Movement_Exeunt:
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3030 "data/maps/Colchis/scripts.pory"
	walk_right
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_up
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3032 "data/maps/Colchis/scripts.pory"
	walk_left
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
# 3033 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 3036 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAndMedeaExeunt:
# 3037 "data/maps/Colchis/scripts.pory"
	walk_down
# 3038 "data/maps/Colchis/scripts.pory"
	walk_right
# 3038 "data/maps/Colchis/scripts.pory"
	walk_right
# 3038 "data/maps/Colchis/scripts.pory"
	walk_right
# 3038 "data/maps/Colchis/scripts.pory"
	walk_right
# 3038 "data/maps/Colchis/scripts.pory"
	walk_right
# 3038 "data/maps/Colchis/scripts.pory"
	walk_right
# 3038 "data/maps/Colchis/scripts.pory"
	walk_right
# 3038 "data/maps/Colchis/scripts.pory"
	walk_right
# 3038 "data/maps/Colchis/scripts.pory"
	walk_right
# 3038 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 3041 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ChefExit:
# 3042 "data/maps/Colchis/scripts.pory"
	walk_right
# 3042 "data/maps/Colchis/scripts.pory"
	walk_right
# 3042 "data/maps/Colchis/scripts.pory"
	walk_right
# 3042 "data/maps/Colchis/scripts.pory"
	walk_right
# 3042 "data/maps/Colchis/scripts.pory"
	walk_right
# 3042 "data/maps/Colchis/scripts.pory"
	walk_right
# 3042 "data/maps/Colchis/scripts.pory"
	walk_right
# 3042 "data/maps/Colchis/scripts.pory"
	walk_right
# 3042 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 3045 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit1:
# 3046 "data/maps/Colchis/scripts.pory"
	walk_left
# 3047 "data/maps/Colchis/scripts.pory"
	walk_down
# 3047 "data/maps/Colchis/scripts.pory"
	walk_down
# 3047 "data/maps/Colchis/scripts.pory"
	walk_down
# 3047 "data/maps/Colchis/scripts.pory"
	walk_down
# 3048 "data/maps/Colchis/scripts.pory"
	walk_left
# 3048 "data/maps/Colchis/scripts.pory"
	walk_left
# 3048 "data/maps/Colchis/scripts.pory"
	walk_left
# 3048 "data/maps/Colchis/scripts.pory"
	walk_left
# 3048 "data/maps/Colchis/scripts.pory"
	walk_left
# 3048 "data/maps/Colchis/scripts.pory"
	walk_left
# 3048 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 3051 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit2:
# 3052 "data/maps/Colchis/scripts.pory"
	walk_down
# 3053 "data/maps/Colchis/scripts.pory"
	walk_left
# 3054 "data/maps/Colchis/scripts.pory"
	walk_down
# 3054 "data/maps/Colchis/scripts.pory"
	walk_down
# 3054 "data/maps/Colchis/scripts.pory"
	walk_down
# 3055 "data/maps/Colchis/scripts.pory"
	walk_left
# 3055 "data/maps/Colchis/scripts.pory"
	walk_left
# 3055 "data/maps/Colchis/scripts.pory"
	walk_left
# 3055 "data/maps/Colchis/scripts.pory"
	walk_left
# 3055 "data/maps/Colchis/scripts.pory"
	walk_left
# 3055 "data/maps/Colchis/scripts.pory"
	walk_left
# 3055 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1580 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Script_SanctumMedeaReturn_Text_0:
# 1801 "data/maps/Colchis/scripts.pory"
	.string "OIMOIAY!\nOOIIMMOOIIAAYY!!$"

Colchis_Text_JasonIntro1::
# 3058 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 3062 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 3066 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 3070 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 3074 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 3078 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 3083 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 3088 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 3092 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 3096 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 3100 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 3109 "data/maps/Colchis/scripts.pory"
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
# 3114 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 3123 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 3127 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 3136 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 3142 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 3155 "data/maps/Colchis/scripts.pory"
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
# 3167 "data/maps/Colchis/scripts.pory"
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
# 3171 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 3175 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 3179 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyy!$"

Colchis_Text_Aeetes7::
# 3183 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 3187 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 3191 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 3200 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 3204 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 3222 "data/maps/Colchis/scripts.pory"
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
# 3226 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 3231 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 3235 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 3239 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 3246 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 3250 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 3276 "data/maps/Colchis/scripts.pory"
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
# 3284 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 3288 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 3301 "data/maps/Colchis/scripts.pory"
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
# 3305 "data/maps/Colchis/scripts.pory"
	.string "Do not interrupt my private time with\n"
	.string "Medea 'till you bring shiny Mareep.$"

Colchis_Text_MedeaSanctumTrigger1::
# 3310 "data/maps/Colchis/scripts.pory"
	.string "Ememberray, ingbray onay armhay otay\n"
	.string "Ugialay.$"

Colchis_Text_JasonSanctumTrigger2::
# 3314 "data/maps/Colchis/scripts.pory"
	.string "Have you returned bringing Shiny\n"
	.string "Mareep?$"

Colchis_Text_MedeaSanctumTrigger2::
# 3319 "data/maps/Colchis/scripts.pory"
	.string "Ymay oughtsthay etraybay emay.\n"
	.string "Excuseay emay Asonjay, againstay ymay\l"
	.string "ownay adviceay Iay ustmay aketay\l"
	.string "eavelay ofay ouyay anday eesay atthay\l"
	.string "Ugialay isay afesay.$"

Colchis_Text_JasonSanctumTrigger3::
# 3323 "data/maps/Colchis/scripts.pory"
	.string "What have you done? Where is Shiny\n"
	.string "Mareep? How could you fail? You only\l"
	.string "had one job! My quest has failed... and\l"
	.string "it was all your fault! Now you will pay\l"
	.string "the price. Nosepass! Attack!$"

Colchis_Text_JasonLost::
# 3327 "data/maps/Colchis/scripts.pory"
	.string "I curse that day I saved you from the\n"
	.string "surf.$"

Colchis_Text_JasonPost::
# 3331 "data/maps/Colchis/scripts.pory"
	.string "The most wicked betrayal of all my\n"
	.string "life...$"

Colchis_Text_JasonGiveMeMareep::
# 3335 "data/maps/Colchis/scripts.pory"
	.string "I see that you have completed the\n"
	.string "quest. Give me shiny Mareep and let's be\l"
	.string "done.$"

Colchis_Text_GiveJasonMareep::
# 3339 "data/maps/Colchis/scripts.pory"
	.string "Will you give Jason shiny Mareep?$"

Colchis_Text_GaveShinyMareep::
# 3343 "data/maps/Colchis/scripts.pory"
	.string "You gave {STR_VAR_1} to Jason!\p"
	.string "Bye Bye {STR_VAR_1}!$"

Colchis_Text_CultistMPre::
# 3348 "data/maps/Colchis/scripts.pory"
	.string "Espassertray opstay! Allfay intoay\n"
	.string "othingnessnay$"

Colchis_Text_CultistMLost::
# 3353 "data/maps/Colchis/scripts.pory"
	.string "Ethay everlastingay arknessday\n"
	.string "overscay allay.$"

Colchis_Text_CultistMPost::
# 3358 "data/maps/Colchis/scripts.pory"
	.string "Ouyay aymay avehay onway utbay\n"
	.string "ou'llyay evernay escapeay.$"

Colchis_Text_MedeaSanctumReturn1::
# 3363 "data/maps/Colchis/scripts.pory"
	.string "Ouyay onstermay! Owhay ouldcay ouyay\n"
	.string "oday isthay otay emay?$"

Colchis_Text_MedeaSanctumReturn2::
# 3368 "data/maps/Colchis/scripts.pory"
	.string "Ymay ovelay, ehay ashay attackeday\n"
	.string "ymay Ugialay! Iay illway onay ongerlay\l"
	.string "elphay imhay eavelay Olchiscay.$"

Colchis_Text_JasonMedeaReturn1::
# 3372 "data/maps/Colchis/scripts.pory"
	.string "Please, do not cry beloved Medea. Lend\n"
	.string "love the power to hold back your tears.$"

Colchis_Text_JasonMedeaReturn2::
# 3376 "data/maps/Colchis/scripts.pory"
	.string "Hey, I apologize for Medea. I know she's\n"
	.string "acting up, but we're still cool. Give it\l"
	.string "some time I'll get her to cool down. When\l"
	.string "you get out meet me in Bulbus town and\l"
	.string "I'll repay you for shiny Mareep.$"

Colchis_Text_JasonSanctumWilds::
# 3380 "data/maps/Colchis/scripts.pory"
	.string "Alas! Medea! My quest for shiny Mareep\n"
	.string "has failed and now we're vagabonds.$"

Colchis_Text_JasonSanctumDepart::
# 3384 "data/maps/Colchis/scripts.pory"
	.string "Let us depart and leave this one\n"
	.string "behind.$"

Colchis_Text_Bed::
# 3388 "data/maps/Colchis/scripts.pory"
	.string "It's a big comfy bed!\n"
	.string "Would you like to take a rest?$"

Colchis_Text_RingBlockerIntro::
# 3392 "data/maps/Colchis/scripts.pory"
	.string "It's a large metal barrier with a keyhole\n"
	.string "in the center.$"

Colchis_Text_PrisonDoorClosed::
# 3396 "data/maps/Colchis/scripts.pory"
	.string "It's a large metal door with a keyhole in\n"
	.string "the center.$"

Colchis_Text_KeyFits::
# 3400 "data/maps/Colchis/scripts.pory"
	.string "The key fits into the keyhole!\n"
	.string "The barriers sink into the ground but\l"
	.string "the key broke off inside!$"

Colchis_Text_RingBlockerDecline::
# 3404 "data/maps/Colchis/scripts.pory"
	.string "Better not try using the key here.$"

Colchis_Text_RingBlockerYesNo::
# 3408 "data/maps/Colchis/scripts.pory"
	.string "Would you like to try using the Colchis\n"
	.string "Key?$"

Colchis_Text_AeetesIntro::
# 3417 "data/maps/Colchis/scripts.pory"
	.string "Ouryay insolentay invasionay ofay\n"
	.string "ouray airfay anday ightymay ingdomkay\l"
	.string "isay ownay atay anay enday. ouryay\l"
	.string "illway ownay earnlay ethay uetray\l"
	.string "owerpay ofay Ingkay Aeetesay.$"

Colchis_Text_AeetesLost::
# 3422 "data/maps/Colchis/scripts.pory"
	.string "Ownay ymay ingdomkay ashay allenfay.$"

Colchis_Text_AeetesPost::
# 3435 "data/maps/Colchis/scripts.pory"
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
# 3440 "data/maps/Colchis/scripts.pory"
	.string "Ymay ifelay ashay eenbay educedray\n"
	.string "otay aughtnay. Eavelay emay.$"

Colchis_Text_ChefProposal::
# 3444 "data/maps/Colchis/scripts.pory"
	.string "I'm nervous! Do you think she will say\n"
	.string "yes?$"

Colchis_Movement_ChefIntro::
# 3448 "data/maps/Colchis/scripts.pory"
	.string "Oh! What to do? I am madly in love with\n"
	.string "one of Colchis' most beautiful maids\l"
	.string "but worry I will lose her to someone\l"
	.string "more handsome and with more money than\l"
	.string "me. If only I had an engagement ring to\l"
	.string "give her in exchange for loyalty.$"

Colchis_Text_ChefRingYesNo::
# 3452 "data/maps/Colchis/scripts.pory"
	.string "Give Chef the Colchis Ring?$"

Colchis_Text_ChefGaveRing::
# 3456 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave Chef the Colchis Ring.$"

Colchis_Text_ChefThanks1::
# 3460 "data/maps/Colchis/scripts.pory"
	.string "Great Almighty! You're giving this to\n"
	.string "me? Take this Sweet Apple as token of\l"
	.string "thanks.$"

Colchis_Text_ChefThanks2::
# 3464 "data/maps/Colchis/scripts.pory"
	.string "I'm off now to proposition the maid.$"

Colchis_Text_ChefGaveRingNo::
# 3468 "data/maps/Colchis/scripts.pory"
	.string "Better not give him the ring.$"

Colchis_Text_Maid1::
# 3472 "data/maps/Colchis/scripts.pory"
	.string "Right now I am a maid but one day I will\n"
	.string "meet a foreign man and have his kids.$"

Colchis_Text_Maid2::
# 3476 "data/maps/Colchis/scripts.pory"
	.string "I'm starting to worry this creep likes\n"
	.string "me.$"

Colchis_Text_JailerIntro::
# 3489 "data/maps/Colchis/scripts.pory"
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
# 3493 "data/maps/Colchis/scripts.pory"
	.string "Give the Colchis Apple to the jailer?$"

Colchis_Text_JailerGaveApple::
# 3497 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave the jailer the Colchis\n"
	.string "Apple$"

Colchis_Text_JailerThanks1::
# 3503 "data/maps/Colchis/scripts.pory"
	.string "Aay Olchiscay apple? Ownay ere'sthay\n"
	.string "aay eetsway eattray! Ankthay ouyay!\l"
	.string "Ere'shay ethay ailjay eykay. Ocknay\l"
	.string "ourselfyay outay.$"

Colchis_Text_JailerThanks2::
# 3508 "data/maps/Colchis/scripts.pory"
	.string "Ebay arefulcay otnay otay ocklay\n"
	.string "ourselfyay inay ailjay. Ahay!$"

Colchis_Text_JailerGaveAppleNo::
# 3512 "data/maps/Colchis/scripts.pory"
	.string "Best not to give him the Apple now.$"

Colchis_Text_PrisonDoorOpen::
# 3516 "data/maps/Colchis/scripts.pory"
	.string "The Colchis Prison Key unlocked the\n"
	.string "door!$"

Colchis_Text_LostKid1::
# 3520 "data/maps/Colchis/scripts.pory"
	.string "Hey! Thanks for finding me! I was\n"
	.string "starting to get scared but I'll go back\l"
	.string "to where I belong now.$"

Colchis_Text_LostKid2::
# 3524 "data/maps/Colchis/scripts.pory"
	.string "I love playing with my friends again.$"

Colchis_Text_Doorman1::
# 3538 "data/maps/Colchis/scripts.pory"
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
# 3543 "data/maps/Colchis/scripts.pory"
	.string "Ankthay ouyay orfay ingingbray usay\n"
	.string "ackbay ogethertay. Ethay oorday isay\l"
	.string "openay. Arewellfay.$"

Colchis_Text_Doorman3::
# 3548 "data/maps/Colchis/scripts.pory"
	.string "Anksthay againay.$"

Colchis_Text_Nanny1::
# 3552 "data/maps/Colchis/scripts.pory"
	.string "Oh no! How terrible! I'm freaking out\n"
	.string "because I lost another one. What if I\l"
	.string "get caught swapping out another kid?\l"
	.string "When they're infants they usually can't\l"
	.string "tell but this one was older...What can I\l"
	.string "do?$"

Colchis_Text_Nanny2::
# 3556 "data/maps/Colchis/scripts.pory"
	.string "Oh! Thanks for finding that lost kid for\n"
	.string "me. I feel like I can finally exhale. I\l"
	.string "had been so stressed out I hadn't been\l"
	.string "able to go socialize with my man.$"

Colchis_Text_GruntBreak1::
# 3561 "data/maps/Colchis/scripts.pory"
	.string "Iay asway ustjay inkingthay aboutay\n"
	.string "ymay etpay atcay.$"

Colchis_Text_GruntBreak2::
# 3566 "data/maps/Colchis/scripts.pory"
	.string "Iay oday otnay inkthay eetingsmay\n"
	.string "areay oductivepray.$"

Colchis_Text_GruntBreak3::
# 3571 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay interrupay emay ingebay\n"
	.string "eatingay ipschay.$"

Colchis_Text_GruntBreak4::
# 3576 "data/maps/Colchis/scripts.pory"
	.string "I'may onay ymay eakbray, asay\n"
	.string "Olchiscay' awlay andatesmay.$"

Colchis_Text_GruntBreak5::
# 3581 "data/maps/Colchis/scripts.pory"
	.string "Ymay eakbray imetay isay ymay\n"
	.string "erapythay essionsay.$"

Colchis_Text_GruntBreak6::
# 3586 "data/maps/Colchis/scripts.pory"
	.string "I'may otnay azylay! I'may eparingpray\n"
	.string "otay orkway.$"

Colchis_Text_GruntBreak7::
# 3591 "data/maps/Colchis/scripts.pory"
	.string "Eythey aysay atthay eaksbray areay\n"
	.string "ikelay ugshay orfay ouryay oulsay.$"

Colchis_Text_GruntBreak8::
# 3596 "data/maps/Colchis/scripts.pory"
	.string "I'may otnay ignoringay ouyay. I'may\n"
	.string "ustjay estingray.$"

Colchis_Text_GruntBreak9::
# 3601 "data/maps/Colchis/scripts.pory"
	.string "On'tday elltay ymay ossbay I'veay\n"
	.string "eenbay erehay orfay ourshay.$"

Colchis_Text_GruntBreak0::
# 3606 "data/maps/Colchis/scripts.pory"
	.string "Amay Iay upposedsay otay ebay\n"
	.string "alkingtay otay ouyay?$"

Colchis_Text_Kid1::
# 3610 "data/maps/Colchis/scripts.pory"
	.string "Baby shark doo doo doo doo doo doo\n"
	.string "baby shark doo doo doo doo doo doo\l"
	.string "baby shark doo doo doo doo doo baby\l"
	.string "shark!$"

Colchis_Text_Kid2::
# 3614 "data/maps/Colchis/scripts.pory"
	.string "I love Pikachu! He's an electric Pokemon\n"
	.string "and he's my favorite! I wish I had a pet\l"
	.string "Pikachu but I think my mom would say\l"
	.string "no...Maybe one day...$"

Colchis_Text_Kid3::
# 3618 "data/maps/Colchis/scripts.pory"
	.string "Have you ever had a dream so that so\n"
	.string "that you um you had you you would you\l"
	.string "could you'll do you went you want you\l"
	.string "you could do so you you do you could\l"
	.string "you you want you want him to do you so\l"
	.string "much you could do anything?$"

Colchis_Text_Teacher1::
# 3622 "data/maps/Colchis/scripts.pory"
	.string "The youth is lost! They pay no\n"
	.string "attention to anything of value or\l"
	.string "substance.$"

Colchis_Text_Teacher2::
# 3626 "data/maps/Colchis/scripts.pory"
	.string "Even though teaching can be\n"
	.string "exhausting it's an honor to help\l"
	.string "nurture young minds.$"

Colchis_Text_Chef2::
# 3630 "data/maps/Colchis/scripts.pory"
	.string "I'm not crying! No! Just peeling onions!\n"
	.string "Not thinking 'bout the girl who left me!\l"
	.string "No!$"

Colchis_Text_GruntBreakL::
# 3635 "data/maps/Colchis/scripts.pory"
	.string "E'reway otnay arguinay. I'may ovingpray\n"
	.string "I'may ightray.$"

Colchis_Text_GruntBreakR::
# 3640 "data/maps/Colchis/scripts.pory"
	.string "Atthay uy'sgay anay assay, anay assay\n"
	.string "at'sthay ullfay ofay itshay.$"

Colchis_Text_MaidL::
# 3644 "data/maps/Colchis/scripts.pory"
	.string "I heard she said he said he had a crush\n"
	.string "on her but she said she does not like\l"
	.string "him.$"

Colchis_Text_MaidR::
# 3648 "data/maps/Colchis/scripts.pory"
	.string "Get out of here! We're not interested.$"

Colchis_Text_GruntDoorFFight::
# 3655 "data/maps/Colchis/scripts.pory"
	.string "Iay illway otnay etlay ouyay eesay ymay\n"
	.string "adies'lay edbay!$"

Colchis_Text_GruntDoorFLost::
# 3659 "data/maps/Colchis/scripts.pory"
	.string "Ou'veyay onqueredcay emay.$"

Colchis_Text_GruntDoorFPost::
# 3663 "data/maps/Colchis/scripts.pory"
	.string "Edea'sMay edbay isay oursyay.$"

Colchis_Text_GruntDoorMFight::
# 3670 "data/maps/Colchis/scripts.pory"
	.string "Ethay Ing'skay Amberschay areay otnay\n"
	.string "orfay ommoncay olkfay.$"

Colchis_Text_GruntDoorMLost::
# 3674 "data/maps/Colchis/scripts.pory"
	.string "Ymay ordlay! Iay avehay ailedfay ouyay!$"

Colchis_Text_GruntDoorMPost::
# 3678 "data/maps/Colchis/scripts.pory"
	.string "Ouyay ebelray umscray, ouryay\n"
	.string "esencepray efilesday isthay oblenay\l"
	.string "aceplay.$"

Colchis_Text_GruntThroneF1Fight::
# 3686 "data/maps/Colchis/scripts.pory"
	.string "At'swhay orseway, osinglay ouray\n"
	.string "ingkay, oray ouryay outfitay?$"

Colchis_Text_GruntThroneF1Lost::
# 3690 "data/maps/Colchis/scripts.pory"
	.string "Upersay otnay oolcay Iay otgay eatbay\n"
	.string "ybay aay obslay!$"

Colchis_Text_GruntThroneF1Post::
# 3694 "data/maps/Colchis/scripts.pory"
	.string "Ifay ou'reyay erehah otay overthroway\n"
	.string "ouray ingdomkay ouyay ouldcay atay\l"
	.string "eastlay oday itay ithway omesay\l"
	.string "ylestay.$"

Colchis_Text_GruntThroneF2Fight::
# 3701 "data/maps/Colchis/scripts.pory"
	.string "Ou'llyay evernay asspay! Eparepray\n"
	.string "otay eelfay ymay athwraw.$"

Colchis_Text_GruntThroneF2Lost::
# 3705 "data/maps/Colchis/scripts.pory"
	.string "Amnday indblay angeray!$"

Colchis_Text_GruntThroneF2Post::
# 3709 "data/maps/Colchis/scripts.pory"
	.string "Ou'reyay ightiermay anthay emay.$"

Colchis_Text_GruntThroneF3Fight::
# 3716 "data/maps/Colchis/scripts.pory"
	.string "Inay imestay ofay eacepay Iay anceday\n"
	.string "orfay Edeamay.$"

Colchis_Text_GruntThroneF3Lost::
# 3720 "data/maps/Colchis/scripts.pory"
	.string "I'may aay etterbay ancerday anthay\n"
	.string "attlerbay.$"

Colchis_Text_GruntThroneF3Post::
# 3724 "data/maps/Colchis/scripts.pory"
	.string "Easeplay on'tday urthay Aeetesay, ehay\n"
	.string "ayspay ymay illsbay.$"

Colchis_Text_GruntThroneF4Fight::
# 3731 "data/maps/Colchis/scripts.pory"
	.string "Ou'llyay evernay eavelay Olchiscay\n"
	.string "aliveay!$"

Colchis_Text_GruntThroneF4Lost::
# 3735 "data/maps/Colchis/scripts.pory"
	.string "Ailurefay...$"

Colchis_Text_GruntThroneF4Post::
# 3739 "data/maps/Colchis/scripts.pory"
	.string "Anymay uardsgay etyay emainray. Ouyay\n"
	.string "idnay otnay inway.$"

Colchis_Text_GruntThroneF5Fight::
# 3746 "data/maps/Colchis/scripts.pory"
	.string "Atwhay? Enacemay!$"

Colchis_Text_GruntThroneF5Lost::
# 3750 "data/maps/Colchis/scripts.pory"
	.string "Ouyay allshay aypay.$"

Colchis_Text_GruntThroneF5Post::
# 3754 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay ogay onay.$"

Colchis_Text_GruntThroneF6Fight::
# 3761 "data/maps/Colchis/scripts.pory"
	.string "At'sway isthay? Owhay idday ouyay\n"
	.string "escapeay omfray isonpray?$"

Colchis_Text_GruntThroneF6Lost::
# 3765 "data/maps/Colchis/scripts.pory"
	.string "Owhay etlay isthay admanmay ooselay?$"

Colchis_Text_GruntThroneF6Post::
# 3769 "data/maps/Colchis/scripts.pory"
	.string "Oundsay ethay alarmay!$"

Colchis_Text_GruntThroneM1Fight::
# 3776 "data/maps/Colchis/scripts.pory"
	.string "Itnessway ethay owerpay ofay ethay\n"
	.string "oyalray uardgay!$"

Colchis_Text_GruntThroneM1Lost::
# 3780 "data/maps/Colchis/scripts.pory"
	.string "Ethay irstfay, anday astlay, osslay\n"
	.string "ofay ethay oyalray uardgay.$"

Colchis_Text_GruntThroneM1Post::
# 3784 "data/maps/Colchis/scripts.pory"
	.string "Ouyay isrespectday ethay oyalray\n"
	.string "Olchiscay Onethray.$"

Colchis_Text_GruntThroneM2Fight::
# 3791 "data/maps/Colchis/scripts.pory"
	.string "Ymay olesay urposepay inay ife'slay\n"
	.string "otay opstay ouyay erehay.$"

Colchis_Text_GruntThroneM2Lost::
# 3795 "data/maps/Colchis/scripts.pory"
	.string "Owhay ouldcay Iay oselay?$"

Colchis_Text_GruntThroneM2Post::
# 3799 "data/maps/Colchis/scripts.pory"
	.string "Atwhay useay isay ymay ifelay ownay?$"

Colchis_Text_GruntThroneM3Fight::
# 3806 "data/maps/Colchis/scripts.pory"
	.string "Ethay ingkay isay oodgay, ereforethay\n"
	.string "ouyay ustmay ebab adbay.$"

Colchis_Text_GruntThroneM3Lost::
# 3810 "data/maps/Colchis/scripts.pory"
	.string "Ereforethay eitheray engthstray isay,\n"
	.string "oray Iay amay, adbay.$"

Colchis_Text_GruntThroneM3Post::
# 3814 "data/maps/Colchis/scripts.pory"
	.string "Ifay evilay insway enthay atefay isay\n"
	.string "adbay oray indblay.$"

Colchis_Text_GruntThroneM4Fight::
# 3821 "data/maps/Colchis/scripts.pory"
	.string "Ebellionray inay Olchiscay Ingdomkay\n"
	.string "endsay erehay.$"

Colchis_Text_GruntThroneM4Lost::
# 3825 "data/maps/Colchis/scripts.pory"
	.string "Eholdbay ethay ancientay egimeray\n"
	.string "iesday odaytay.$"

Colchis_Text_GruntThroneM4Post::
# 3829 "data/maps/Colchis/scripts.pory"
	.string "Aymay Ohay-Ohay anday Ugialay avesay\n"
	.string "ouray oulssay!$"

Colchis_Text_GruntThroneM5Fight::
# 3836 "data/maps/Colchis/scripts.pory"
	.string "Andstay ownday!$"

Colchis_Text_GruntThroneM5Lost::
# 3840 "data/maps/Colchis/scripts.pory"
	.string "I'veay eenbray oughtbray otay\n"
	.string "attenday efeatday.$"

Colchis_Text_GruntThroneM5Post::
# 3844 "data/maps/Colchis/scripts.pory"
	.string "I'llay ebay eheadedbay orfay ailingfay\n"
	.string "ymay ingkay!$"

Colchis_Text_GruntThroneM6Fight::
# 3851 "data/maps/Colchis/scripts.pory"
	.string "Owhay areday ouyay ingbray arway\n"
	.string "uponay ouray ing'skay eacepay?$"

Colchis_Text_GruntThroneM6Lost::
# 3855 "data/maps/Colchis/scripts.pory"
	.string "Ethay onglay eacepay ofay Olchiscay\n"
	.string "omescay otay anay enday.$"

Colchis_Text_GruntThroneM6Post::
# 3859 "data/maps/Colchis/scripts.pory"
	.string "Aay arway, afteray it'say oncievedcay,\n"
	.string "isay ardhay otay illkay.$"
