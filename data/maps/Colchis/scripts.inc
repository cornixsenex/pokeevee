Colchis_MapScripts::
# 111 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 132 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 149 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME
# 163 "data/maps/Colchis/scripts.pory"
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
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 133 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 17
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_2
Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 136 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_TEMP_A, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_7
Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 139 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_TEMP_B, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_10
Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 142 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_TEMP_C, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_12
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 134 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
	goto Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 137 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_OpenJail1
	goto Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_6

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 140 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_OpenJail2
	goto Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_9

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 143 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_OpenJail3
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME:
# 151 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_MAREEP, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2
Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 156 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 152 "data/maps/Colchis/scripts.pory"
	hideobjectat 2, MAP_COLCHIS
# 153 "data/maps/Colchis/scripts.pory"
	removeobject 2
	goto Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 157 "data/maps/Colchis/scripts.pory"
	hideobjectat 1, MAP_COLCHIS
# 158 "data/maps/Colchis/scripts.pory"
	removeobject 1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 164 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
# 166 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_WarpSanctum::
# 174 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 175 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 34, 56
# 176 "data/maps/Colchis/scripts.pory"
	waitstate
	end


Colchis_TempScript_SetupTestMedeaDance::
# 181 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 182 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 183 "data/maps/Colchis/scripts.pory"
	waitstate
	end


Colchis_TempScript_TestMedeaDance::
# 188 "data/maps/Colchis/scripts.pory"
	lockall
# 189 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 190 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_ShowIntro::
# 195 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 11, 59
# 196 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 198 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 51, 14
# 199 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	end


Colchis_Script_SetupJail::
# 205 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 206 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
	end


Colchis_Script_ShowJasonAndMedeaAtSanctuary::
# 211 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 212 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 213 "data/maps/Colchis/scripts.pory"
	addobject 54
# 214 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 216 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 217 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 218 "data/maps/Colchis/scripts.pory"
	addobject 4
# 219 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 225 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 226 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 227 "data/maps/Colchis/scripts.pory"
	closemessage
# 228 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 235 "data/maps/Colchis/scripts.pory"
	lockall
# 237 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 239 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 240 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 241 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 242 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 243 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 244 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 247 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 248 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 249 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 252 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 253 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 254 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 259 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 260 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 261 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 264 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 265 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 266 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 267 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 268 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 269 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 270 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 271 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 272 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 273 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 274 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 275 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 276 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 277 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 278 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 279 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 280 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 283 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 284 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 285 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 286 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 287 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 288 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 289 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 290 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 291 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 292 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 293 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 294 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 295 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 298 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 299 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 300 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 303 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 304 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 305 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 309 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 310 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 311 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 312 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 313 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 314 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 315 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 316 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 317 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 318 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 320 "data/maps/Colchis/scripts.pory"
	closemessage
# 322 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 329 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 330 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 331 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 332 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 333 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 334 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 335 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 336 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 337 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 340 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 341 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 342 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 344 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 345 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 346 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 347 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 348 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 349 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 350 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 354 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 360 "data/maps/Colchis/scripts.pory"
	lockall
# 361 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 363 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 370 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 371 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 372 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 374 "data/maps/Colchis/scripts.pory"
	addobject 23
# 375 "data/maps/Colchis/scripts.pory"
	addobject 24
# 377 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 378 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 382 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 383 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 385 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 386 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 387 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 390 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 391 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPre, MSGBOX_DEFAULT
# 392 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 393 "data/maps/Colchis/scripts.pory"
	closemessage
# 396 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 397 "data/maps/Colchis/scripts.pory"
	switch VAR_RESULT
# 398 "data/maps/Colchis/scripts.pory"
	case 1, Colchis_Script_DoForcedBattle_3
# 400 "data/maps/Colchis/scripts.pory"
	case 2, Colchis_Script_DoForcedBattle_4
# 402 "data/maps/Colchis/scripts.pory"
	case 3, Colchis_Script_DoForcedBattle_5
# 404 "data/maps/Colchis/scripts.pory"
	case 4, Colchis_Script_DoForcedBattle_6
# 406 "data/maps/Colchis/scripts.pory"
	case 5, Colchis_Script_DoForcedBattle_7
# 408 "data/maps/Colchis/scripts.pory"
	case 6, Colchis_Script_DoForcedBattle_8
# 410 "data/maps/Colchis/scripts.pory"
	case 7, Colchis_Script_DoForcedBattle_9
# 412 "data/maps/Colchis/scripts.pory"
	case 8, Colchis_Script_DoForcedBattle_10
# 414 "data/maps/Colchis/scripts.pory"
	case 9, Colchis_Script_DoForcedBattle_11
# 417 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_1, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_6, BigIslandS_Text_IgnisGrunt2Lost
Colchis_Script_DoForcedBattle_1:
# 421 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 422 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPost, MSGBOX_DEFAULT
# 423 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 424 "data/maps/Colchis/scripts.pory"
	closemessage
# 427 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleExitA
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleExitB
# 429 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 432 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 433 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 435 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 23, 0, 0
# 436 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 24, 2, 0
# 438 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_FACE_DOWN
# 439 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_UP
# 441 "data/maps/Colchis/scripts.pory"
	addobject 23
# 442 "data/maps/Colchis/scripts.pory"
	addobject 24
# 444 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 445 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
	return

Colchis_Script_DoForcedBattle_3:
# 399 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_1, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_4:
# 401 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_1, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_4, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_5:
# 403 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_1, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_6, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_6:
# 405 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_7:
# 407 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_4, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_8:
# 409 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_6, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_9:
# 411 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_5, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_10:
# 413 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_5, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_4, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_11:
# 415 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_5, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_6, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1


Colchis_Script_MedeaDance::
# 455 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 456 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 457 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 459 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 460 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 461 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 466 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 467 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 468 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 469 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 470 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 471 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 472 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 473 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 474 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 475 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 476 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 477 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 478 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 479 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 480 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 481 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 482 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 483 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 492 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 493 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 494 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 495 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 496 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 497 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 498 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 500 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 502 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 503 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 504 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 506 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 508 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 509 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 510 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 512 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 518 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 519 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 520 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 522 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 523 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 524 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 526 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 528 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 529 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 530 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 531 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 532 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 534 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 536 "data/maps/Colchis/scripts.pory"
	delay 25
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
# 544 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 551 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 552 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 553 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 554 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 555 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 556 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 557 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 559 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 561 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 562 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 563 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 564 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 565 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 566 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 568 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 570 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 572 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 573 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 574 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 576 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 578 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 579 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 580 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 581 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 582 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 584 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 586 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 587 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 588 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 589 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 590 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 592 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 594 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 595 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 596 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 597 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 598 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 600 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 606 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 607 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 608 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 609 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 610 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 611 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 612 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 614 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 616 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 617 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 618 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 619 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 620 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 622 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 628 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 634 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 635 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 636 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 637 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 638 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 639 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 640 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 642 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 647 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 653 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 654 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 655 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 656 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 657 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 658 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 659 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 661 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 667 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 670 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 678 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 679 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 680 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 681 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 682 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 683 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 684 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 686 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 688 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 689 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 690 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 691 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 692 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 693 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 694 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 696 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 701 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 705 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 706 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 707 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 708 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 709 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 710 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 711 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 713 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 715 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 716 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 717 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 718 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 719 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 720 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 721 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 723 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 725 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 729 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 730 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 731 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 732 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 733 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 734 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 735 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 737 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 739 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 740 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 741 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 742 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 743 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 744 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 745 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 747 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 749 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 753 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 754 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 755 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 756 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 757 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 758 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 759 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 761 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 763 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 764 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 765 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 766 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 767 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 768 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 769 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 771 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 773 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 782 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 783 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 784 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 785 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 786 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 787 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 788 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 789 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 791 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 793 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 795 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 796 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 797 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 798 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 799 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 800 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 801 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 802 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 804 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 806 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 808 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 809 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 810 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 811 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 812 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 813 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 814 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 815 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 817 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 819 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 825 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 826 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 827 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 828 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 829 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 830 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 831 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 832 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 834 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 835 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 837 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 838 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 841 "data/maps/Colchis/scripts.pory"
	delay 25
# 845 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 846 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 850 "data/maps/Colchis/scripts.pory"
	delay 25
# 852 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 853 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 857 "data/maps/Colchis/scripts.pory"
	delay 25
# 859 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 860 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 864 "data/maps/Colchis/scripts.pory"
	delay 25
# 866 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 867 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 868 "data/maps/Colchis/scripts.pory"
	delay 25
# 873 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 874 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 875 "data/maps/Colchis/scripts.pory"
	delay 25
# 877 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 878 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 879 "data/maps/Colchis/scripts.pory"
	delay 25
# 884 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 885 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 886 "data/maps/Colchis/scripts.pory"
	delay 25
# 888 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 889 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 890 "data/maps/Colchis/scripts.pory"
	delay 25
# 892 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 893 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 894 "data/maps/Colchis/scripts.pory"
	delay 25
# 896 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 897 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 898 "data/maps/Colchis/scripts.pory"
	delay 25
# 903 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 904 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 905 "data/maps/Colchis/scripts.pory"
	delay 25
# 907 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 908 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 909 "data/maps/Colchis/scripts.pory"
	delay 25
# 911 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 912 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 913 "data/maps/Colchis/scripts.pory"
	delay 25
# 915 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 916 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 917 "data/maps/Colchis/scripts.pory"
	delay 25
# 919 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 921 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 922 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 923 "data/maps/Colchis/scripts.pory"
	delay 25
# 928 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 929 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 930 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 931 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 932 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 933 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 934 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 935 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 937 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 946 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 947 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 948 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 949 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 950 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 951 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 952 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 953 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 954 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 959 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 960 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 961 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 962 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 963 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 964 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 965 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 966 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 967 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 972 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 973 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 974 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 975 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 976 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 977 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 978 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 979 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 980 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 985 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 986 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 987 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 988 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 989 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 990 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 991 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 992 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 993 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 998 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 999 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 1001 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 1002 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 1004 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 1005 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 1006 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1011 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1012 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1013 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1014 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1015 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1016 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1017 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1018 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1019 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1024 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1025 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1026 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 1027 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 1028 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 1029 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 1030 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 1031 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 1032 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1037 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1038 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1039 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1040 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1041 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1042 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1043 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1044 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1045 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1050 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1051 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1052 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 1053 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 1054 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 1055 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 1056 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 1057 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 1058 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1060 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1061 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1062 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1063 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1064 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1065 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1066 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1067 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1068 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1071 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1072 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 1073 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 1074 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1075 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1076 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1077 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1078 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1080 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1081 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1082 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1083 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1084 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1086 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1087 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1088 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1093 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1094 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1096 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1098 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1104 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1105 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1106 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1107 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1108 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1109 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1110 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1111 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1116 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1117 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1118 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1119 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1120 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1121 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1122 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1123 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1124 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1125 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1126 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1127 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1128 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1129 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1130 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1131 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1132 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1137 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1138 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1139 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1140 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 13, Common_Movement_WalkLeft
# 1147 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
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
	applymovement 13, Common_Movement_WalkRight
# 1154 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1155 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1156 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1157 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1158 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1159 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1160 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1161 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1162 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1163 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1164 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1165 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1166 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1167 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1168 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1169 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1170 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1171 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1172 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1173 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1174 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1175 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1176 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1177 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1178 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1179 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1180 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1181 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1182 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1183 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1184 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1185 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1186 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1187 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1188 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1189 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1190 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1191 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1192 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1193 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1204 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1205 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1206 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1211 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1212 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1213 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1214 "data/maps/Colchis/scripts.pory"
	closemessage
# 1216 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1220 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1221 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1222 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1223 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1224 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1226 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1227 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1228 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1230 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1231 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1232 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1233 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1241 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1242 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1243 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1248 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1249 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1250 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1257 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1258 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1259 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1263 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1264 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1265 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1274 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1275 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1276 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1277 "data/maps/Colchis/scripts.pory"
	closemessage
# 1280 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1281 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1282 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1291 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1292 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1293 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1298 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1299 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1300 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1303 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1304 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1305 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1306 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1307 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1311 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1312 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1313 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1317 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1318 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1319 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1321 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1322 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1323 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1327 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1328 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1330 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1331 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1337 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1338 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1339 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1340 "data/maps/Colchis/scripts.pory"
	closemessage
# 1343 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1344 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1347 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1348 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1356 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1362 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1363 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1364 "data/maps/Colchis/scripts.pory"
	closemessage
# 1365 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1369 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1370 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1373 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1374 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1375 "data/maps/Colchis/scripts.pory"
	closemessage
# 1376 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1379 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1380 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1381 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1382 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1385 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1386 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1387 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1388 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1389 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1392 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1393 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1394 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1395 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1396 "data/maps/Colchis/scripts.pory"
	delay 30
# 1397 "data/maps/Colchis/scripts.pory"
	waitse
# 1400 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonApproachPlayer
# 1401 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1404 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1405 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1406 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1409 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1410 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1411 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1414 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1415 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1416 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1419 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1420 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1421 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1424 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1425 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1426 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1428 "data/maps/Colchis/scripts.pory"
	closemessage
# 1431 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1432 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1435 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1436 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1437 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1438 "data/maps/Colchis/scripts.pory"
	closemessage
# 1441 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1442 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1445 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1446 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1447 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1450 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1451 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1452 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1454 "data/maps/Colchis/scripts.pory"
	closemessage
# 1458 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonExit
# 1459 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonExit
# 1460 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerPrisonExit
# 1461 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1463 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1471 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1472 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1475 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1476 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1477 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1479 "data/maps/Colchis/scripts.pory"
	closemessage
# 1482 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1483 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1486 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1487 "data/maps/Colchis/scripts.pory"
	waitse
# 1488 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1489 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1490 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1491 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1494 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1495 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 1
# 1496 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1497 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 1
# 1500 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1501 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1504 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1505 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1506 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1509 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1510 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1511 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1514 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1515 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1518 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1519 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1520 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1522 "data/maps/Colchis/scripts.pory"
	closemessage
# 1525 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1526 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1529 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1530 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1532 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1533 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1535 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1536 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1538 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1539 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1540 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1543 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1544 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1545 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1546 "data/maps/Colchis/scripts.pory"
	closemessage
# 1549 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1550 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1553 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1554 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1557 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1560 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_B
# 1574 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1575 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1576 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1577 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1578 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1580 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1581 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1582 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1583 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1584 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1586 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_LugiaTest::
# 1592 "data/maps/Colchis/scripts.pory"
	lockall
# 1593 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1594 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1595 "data/maps/Colchis/scripts.pory"
	closemessage
# 1596 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_Lugia::
# 1601 "data/maps/Colchis/scripts.pory"
	lockall
# 1602 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1603 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 1604 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1605 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_LUGIA
# 1606 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1607 "data/maps/Colchis/scripts.pory"
	setwildbattle SPECIES_LUGIA, 18
# 1608 "data/maps/Colchis/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1609 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1610 "data/maps/Colchis/scripts.pory"
	removeobject 1
# 1611 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTriggerA::
# 1617 "data/maps/Colchis/scripts.pory"
	lockall
# 1618 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 0
# 1619 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTriggerB::
# 1623 "data/maps/Colchis/scripts.pory"
	lockall
# 1624 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 1
# 1625 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTrigger::
# 1630 "data/maps/Colchis/scripts.pory"
	lockall
# 1633 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1634 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1635 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1636 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1637 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1638 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1641 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_4
Colchis_Script_SanctumTrigger_3:
# 1645 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 12
# 1647 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerEndIntro
# 1649 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_7
# 1668 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_8
# 1690 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1691 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1692 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
# 1693 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
Colchis_Script_SanctumTrigger_1:
# 1696 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_SanctumTrigger_2:
# 1642 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_4:
# 1641 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_2
	goto Colchis_Script_SanctumTrigger_3

Colchis_Script_SanctumTrigger_7:
# 1652 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1655 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1659 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_8:
# 1669 "data/maps/Colchis/scripts.pory"
	closemessage
# 1671 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1672 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumTrigger_12
# 1677 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1678 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1680 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1681 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumWilds, MSGBOX_DEFAULT
# 1682 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1687 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_12:
# 1674 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Exeunt
	goto Colchis_Script_SanctumTrigger_1


Colchis_Script_SanctumTriggerReturn::
# 1701 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1702 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger1, MSGBOX_DEFAULT
# 1703 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1705 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1706 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger1, MSGBOX_DEFAULT
# 1707 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1709 "data/maps/Colchis/scripts.pory"
	closemessage
# 1712 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1713 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_SanctumTriggerEndIntro::
# 1719 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1720 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1721 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumTriggerMedeaExit::
# 1726 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1727 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger2, MSGBOX_DEFAULT
# 1728 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1729 "data/maps/Colchis/scripts.pory"
	closemessage
# 1730 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTriggerMedeaExit_2
# 1733 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3B
Colchis_Script_SanctumTriggerMedeaExit_1:
# 1735 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumTriggerMedeaExit_2:
# 1731 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3A
	goto Colchis_Script_SanctumTriggerMedeaExit_1


Colchis_Script_LugiaChaseTrigger::
# 1740 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1741 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaChaseTrigger_2
Colchis_Script_LugiaChaseTrigger_1:
	end

Colchis_Script_LugiaChaseTrigger_2:
# 1742 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	goto Colchis_Script_LugiaChaseTrigger_1


Colchis_Script_LugiaWanderTrigger::
# 1748 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1749 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaWanderTrigger_2
Colchis_Script_LugiaWanderTrigger_1:
	end

Colchis_Script_LugiaWanderTrigger_2:
# 1750 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	goto Colchis_Script_LugiaWanderTrigger_1


Colchis_Script_ShinyMareep::
# 1756 "data/maps/Colchis/scripts.pory"
	lockall
# 1757 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1758 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 1759 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1760 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1761 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1762 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1763 "data/maps/Colchis/scripts.pory"
	waitstate
# 1764 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1765 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1766 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumApproachJason::
# 1771 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumApproachJason_2
# 1774 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3B
Colchis_Script_SanctumApproachJason_1:
# 1776 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1778 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1779 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumApproachJason_2:
# 1772 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3A
	goto Colchis_Script_SanctumApproachJason_1


Colchis_Script_SanctumJasonBattle::
# 1785 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1786 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1788 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1789 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger3, MSGBOX_DEFAULT
# 1790 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1791 "data/maps/Colchis/scripts.pory"
	closemessage
# 1793 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_JASON, Colchis_Text_JasonLost
# 1795 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1796 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPost, MSGBOX_DEFAULT
# 1797 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumMedeaReturn::
# 1804 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1805 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1806 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1808 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1809 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1810 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1813 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1814 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumMedeaReturn_Text_0, MSGBOX_DEFAULT
# 1815 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1816 "data/maps/Colchis/scripts.pory"
	closemessage
# 1819 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn
# 1820 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1823 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1824 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn1, MSGBOX_DEFAULT
# 1825 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1826 "data/maps/Colchis/scripts.pory"
	closemessage
# 1829 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumMedeaReturn_2
# 1832 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2B
Colchis_Script_SanctumMedeaReturn_1:
# 1834 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1836 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1837 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1840 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1841 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn2, MSGBOX_DEFAULT
# 1842 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1843 "data/maps/Colchis/scripts.pory"
	closemessage
# 1848 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1849 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn1, MSGBOX_DEFAULT
# 1850 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1854 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumMedeaReturn_6
Colchis_Script_SanctumMedeaReturn_5:
# 1864 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	return

Colchis_Script_SanctumMedeaReturn_2:
# 1830 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2A
	goto Colchis_Script_SanctumMedeaReturn_1

Colchis_Script_SanctumMedeaReturn_6:
# 1855 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1856 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1857 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1858 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn2, MSGBOX_DEFAULT
# 1859 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1860 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1861 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_SanctumMedeaReturn_5


Colchis_Script_SanctumJasonCheckMareep::
# 1871 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, IsShinyMareepInParty
# 1873 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_2
# 1878 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1879 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonGiveMeMareep, MSGBOX_DEFAULT
# 1880 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1882 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GiveJasonMareep, MSGBOX_YESNO
# 1884 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_5
# 1888 "data/maps/Colchis/scripts.pory"
	special ChoosePartyMon
# 1890 "data/maps/Colchis/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_8
# 1894 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1896 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, SPECIES_MAREEP
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_11
# 1900 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonIsShiny
# 1902 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_14
# 1906 "data/maps/Colchis/scripts.pory"
	special BufferMonNickname
# 1907 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GaveShinyMareep, MSGBOX_DEFAULT
# 1908 "data/maps/Colchis/scripts.pory"
	closemessage
# 1909 "data/maps/Colchis/scripts.pory"
	special ReleaseChosenMon
# 1911 "data/maps/Colchis/scripts.pory"
	setflag FLAG_JASON_HAS_SHINYMAREEP
Colchis_Script_SanctumJasonCheckMareep_1:
	return

Colchis_Script_SanctumJasonCheckMareep_2:
# 1874 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_5:
# 1885 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_8:
# 1891 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_11:
# 1897 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_14:
# 1903 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1


Colchis_Script_SanctumJasonMareep::
# 1924 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumApproachJason
# 1927 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	return


Colchis_Script_Exeunt::
# 1934 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 14
# 1935 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1936 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonExeunt, MSGBOX_DEFAULT
# 1937 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1938 "data/maps/Colchis/scripts.pory"
	closemessage
# 1940 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_Exeunt
# 1941 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_Exeunt
# 1942 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_Exeunt
# 1943 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1945 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_BIG_ISLAND_N, 31, 37
# 1946 "data/maps/Colchis/scripts.pory"
	waitstate
	end


Colchis_Script_SetupEscapeFromColchis::
# 1952 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1953 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumDepart, MSGBOX_DEFAULT
# 1954 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1955 "data/maps/Colchis/scripts.pory"
	closemessage
# 1958 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAndMedeaExeunt
# 1959 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_JasonAndMedeaExeunt
# 1960 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1964 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 14, 0
# 1965 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_INVISIBLE
# 1967 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 15, 0
# 1968 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 1970 "data/maps/Colchis/scripts.pory"
	hideobjectat 54, MAP_COLCHIS
# 1971 "data/maps/Colchis/scripts.pory"
	hideobjectat 4, MAP_COLCHIS
# 1973 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1974 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1978 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_FORCED_BATTLE
# 1981 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 16
# 1984 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
# 1985 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1988 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupLostKid
# 1991 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_TrainerAeetes::
# 2004 "data/maps/Colchis/scripts.pory"
	lockall
# 2005 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2007 "data/maps/Colchis/scripts.pory"
	checktrainerflag TRAINER_AEETES
	goto_if 0, Colchis_Script_TrainerAeetes_2
# 2025 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 2026 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 2027 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
Colchis_Script_TrainerAeetes_1:
# 2029 "data/maps/Colchis/scripts.pory"
	closemessage
# 2030 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_TrainerAeetes_2:
# 2009 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 2010 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesIntro, MSGBOX_DEFAULT
# 2011 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 2012 "data/maps/Colchis/scripts.pory"
	closemessage
# 2013 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_AEETES, Colchis_Text_AeetesLost
# 2014 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 2015 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesPost, MSGBOX_DEFAULT
# 2016 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 2018 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_KEY
# 2020 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 2021 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 2022 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
	goto Colchis_Script_TrainerAeetes_1


Colchis_Script_Bed::
# 2035 "data/maps/Colchis/scripts.pory"
	lockall
# 2036 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Bed, MSGBOX_YESNO
# 2037 "data/maps/Colchis/scripts.pory"
	closemessage
# 2038 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Bed_2
Colchis_Script_Bed_1:
# 2041 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Bed_2:
# 2039 "data/maps/Colchis/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Colchis_Script_Bed_1


Colchis_Script_RingBlocker::
# 2046 "data/maps/Colchis/scripts.pory"
	lockall
# 2047 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2050 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerIntro, MSGBOX_DEFAULT
# 2052 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_KEY, 1
# 2057 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_RingBlocker_2
# 2089 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_RingBlocker_1:
# 2093 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_RingBlocker_2:
# 2058 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerYesNo, MSGBOX_YESNO
# 2059 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_RingBlocker_5
# 2085 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerDecline, MSGBOX_DEFAULT
# 2086 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_RingBlocker_1

Colchis_Script_RingBlocker_5:
# 2062 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_KeyFits, MSGBOX_DEFAULT
# 2063 "data/maps/Colchis/scripts.pory"
	closemessage
# 2064 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_KEY
# 2065 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2066 "data/maps/Colchis/scripts.pory"
	waitse
# 2068 "data/maps/Colchis/scripts.pory"
	hideobjectat 55, MAP_COLCHIS
# 2069 "data/maps/Colchis/scripts.pory"
	removeobject 55
# 2070 "data/maps/Colchis/scripts.pory"
	hideobjectat 56, MAP_COLCHIS
# 2071 "data/maps/Colchis/scripts.pory"
	removeobject 56
# 2072 "data/maps/Colchis/scripts.pory"
	hideobjectat 57, MAP_COLCHIS
# 2073 "data/maps/Colchis/scripts.pory"
	removeobject 57
# 2075 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 55, MOVEMENT_TYPE_INVISIBLE
# 2076 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 55, 1, 3
# 2077 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 56, MOVEMENT_TYPE_INVISIBLE
# 2078 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 56, 2, 3
# 2079 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 57, MOVEMENT_TYPE_INVISIBLE
# 2080 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 57, 3, 3
# 2082 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBARRIER
	goto Colchis_Script_RingBlocker_1


Colchis_Script_RingItem::
# 2098 "data/maps/Colchis/scripts.pory"
	lock
# 2099 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2100 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_RING
# 2101 "data/maps/Colchis/scripts.pory"
	hideobjectat 58, MAP_COLCHIS
# 2102 "data/maps/Colchis/scripts.pory"
	removeobject 58
# 2103 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBALL
# 2104 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 58, MOVEMENT_TYPE_INVISIBLE
# 2105 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 58, 4, 3
# 2106 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_CloseDoor::
# 2111 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2112 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_OpenJail1::
# 2117 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2118 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_OpenJail2::
# 2123 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2124 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_OpenJail3::
# 2129 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2130 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_SetupLostKid::
# 2135 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2136 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 28, 12
# 2137 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_LOOK_AROUND
# 2138 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2139 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	return


Colchis_Script_ShowNannyWithGuard::
# 2144 "data/maps/Colchis/scripts.pory"
	removeobject 30
# 2145 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 30, 7, 50
# 2146 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_LEFT
# 2147 "data/maps/Colchis/scripts.pory"
	addobject 30
# 2148 "data/maps/Colchis/scripts.pory"
	showobjectat 30, MAP_COLCHIS
# 2150 "data/maps/Colchis/scripts.pory"
	removeobject 51
# 2151 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 51, 6, 50
# 2152 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 51, MOVEMENT_TYPE_FACE_RIGHT
# 2153 "data/maps/Colchis/scripts.pory"
	addobject 51
# 2154 "data/maps/Colchis/scripts.pory"
	showobjectat 51, MAP_COLCHIS
	return


Colchis_Script_Chef::
# 2160 "data/maps/Colchis/scripts.pory"
	lockall
# 2161 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2164 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Chef_2
# 2171 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Movement_ChefIntro, MSGBOX_DEFAULT
# 2172 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_RING
# 2173 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Chef_5
# 2204 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Chef_1:
# 2207 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Chef_2:
# 2165 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefProposal, MSGBOX_DEFAULT
# 2166 "data/maps/Colchis/scripts.pory"
	closemessage
# 2167 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_FaceRight
# 2168 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_5:
# 2174 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefRingYesNo, MSGBOX_YESNO
# 2175 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Chef_8
# 2200 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRingNo, MSGBOX_DEFAULT
# 2201 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_8:
# 2177 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_RING
# 2178 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRing, MSGBOX_DEFAULT
# 2179 "data/maps/Colchis/scripts.pory"
	closemessage
# 2181 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_ExclamationMark
# 2182 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2183 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks1, MSGBOX_DEFAULT
# 2184 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_APPLE
# 2186 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks2, MSGBOX_DEFAULT
# 2187 "data/maps/Colchis/scripts.pory"
	closemessage
# 2189 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2190 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Colchis_Script_Chef_12
Colchis_Script_Chef_11:
# 2194 "data/maps/Colchis/scripts.pory"
	applymovement 44, Colchis_Movement_ChefExit
# 2195 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2197 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_MOVECHEF
# 2198 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_12:
# 2191 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_WalkUp
# 2192 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_11


Colchis_Script_MoveChef::
# 2212 "data/maps/Colchis/scripts.pory"
	removeobject 44
# 2213 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 44, 59, 62
# 2214 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 44, MOVEMENT_TYPE_FACE_RIGHT
# 2215 "data/maps/Colchis/scripts.pory"
	addobject 44
# 2216 "data/maps/Colchis/scripts.pory"
	showobjectat 44, MAP_COLCHIS
# 2218 "data/maps/Colchis/scripts.pory"
	removeobject 37
# 2219 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 37, 60, 62
# 2220 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_LEFT
# 2221 "data/maps/Colchis/scripts.pory"
	addobject 37
# 2222 "data/maps/Colchis/scripts.pory"
	showobjectat 37, MAP_COLCHIS
	return


Colchis_Script_Maid::
# 2228 "data/maps/Colchis/scripts.pory"
	lockall
# 2229 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2230 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Maid_2
# 2236 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid1, MSGBOX_DEFAULT
# 2237 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Maid_1:
# 2239 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Maid_2:
# 2231 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid2, MSGBOX_DEFAULT
# 2232 "data/maps/Colchis/scripts.pory"
	closemessage
# 2233 "data/maps/Colchis/scripts.pory"
	applymovement 37, Common_Movement_FaceLeft
# 2234 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Maid_1


Colchis_Script_Jailer::
# 2244 "data/maps/Colchis/scripts.pory"
	lockall
# 2245 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2252 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerIntro, MSGBOX_DEFAULT
# 2255 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_APPLE
# 2256 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Jailer_2
# 2276 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Jailer_1:
# 2278 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Jailer_2:
# 2257 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerAppleYesNo, MSGBOX_YESNO
# 2258 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Jailer_5
# 2272 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveAppleNo, MSGBOX_DEFAULT
# 2273 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1

Colchis_Script_Jailer_5:
# 2259 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_APPLE
# 2261 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveApple, MSGBOX_DEFAULT
# 2262 "data/maps/Colchis/scripts.pory"
	closemessage
# 2264 "data/maps/Colchis/scripts.pory"
	applymovement 32, Common_Movement_ExclamationMark
# 2265 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2266 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks1, MSGBOX_DEFAULT
# 2267 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_JAIL_KEY
# 2269 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks2, MSGBOX_DEFAULT
# 2270 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1


Colchis_Script_PrisonDoor1::
# 2283 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Colchis_Script_PrisonDoor1_2
Colchis_Script_PrisonDoor1_1:
	end

Colchis_Script_PrisonDoor1_2:
# 2284 "data/maps/Colchis/scripts.pory"
	lockall
# 2285 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_JAIL_KEY
# 2286 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_PrisonDoor1_5
# 2303 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorClosed, MSGBOX_DEFAULT
# 2304 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_PrisonDoor1_4:
# 2306 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor1_1

Colchis_Script_PrisonDoor1_5:
# 2288 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_A
# 2290 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2291 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2293 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2294 "data/maps/Colchis/scripts.pory"
	closemessage
# 2296 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2297 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2298 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2299 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2300 "data/maps/Colchis/scripts.pory"
	delay 30
# 2301 "data/maps/Colchis/scripts.pory"
	waitse
	goto Colchis_Script_PrisonDoor1_4


Colchis_Script_PrisonDoor2::
# 2312 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_B, Colchis_Script_PrisonDoor2_2
Colchis_Script_PrisonDoor2_1:
	end

Colchis_Script_PrisonDoor2_2:
# 2313 "data/maps/Colchis/scripts.pory"
	lockall
# 2314 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_JAIL_KEY
# 2315 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_PrisonDoor2_5
# 2332 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorClosed, MSGBOX_DEFAULT
# 2333 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_PrisonDoor2_4:
# 2335 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor2_1

Colchis_Script_PrisonDoor2_5:
# 2317 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_B
# 2319 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2320 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2322 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2323 "data/maps/Colchis/scripts.pory"
	closemessage
# 2325 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2326 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2327 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2328 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2329 "data/maps/Colchis/scripts.pory"
	delay 30
# 2330 "data/maps/Colchis/scripts.pory"
	waitse
	goto Colchis_Script_PrisonDoor2_4


Colchis_Script_PrisonDoor3::
# 2341 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_C, Colchis_Script_PrisonDoor3_2
Colchis_Script_PrisonDoor3_1:
	end

Colchis_Script_PrisonDoor3_2:
# 2342 "data/maps/Colchis/scripts.pory"
	lockall
# 2343 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_JAIL_KEY
# 2344 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_PrisonDoor3_5
# 2361 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorClosed, MSGBOX_DEFAULT
# 2362 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_PrisonDoor3_4:
# 2364 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor3_1

Colchis_Script_PrisonDoor3_5:
# 2346 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_C
# 2348 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2349 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2351 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2352 "data/maps/Colchis/scripts.pory"
	closemessage
# 2354 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2355 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2356 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2357 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2358 "data/maps/Colchis/scripts.pory"
	delay 30
# 2359 "data/maps/Colchis/scripts.pory"
	waitse
	goto Colchis_Script_PrisonDoor3_4


Colchis_Script_LostKid::
# 2370 "data/maps/Colchis/scripts.pory"
	lockall
# 2371 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2373 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_LostKid_2
# 2397 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid2, MSGBOX_DEFAULT
# 2398 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_LostKid_1:
# 2400 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_LostKid_2:
# 2374 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid1, MSGBOX_DEFAULT
# 2375 "data/maps/Colchis/scripts.pory"
	closemessage
# 2376 "data/maps/Colchis/scripts.pory"
	special GetPlayerFacingDirection
# 2377 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Colchis_Script_LostKid_6
# 2380 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit2
Colchis_Script_LostKid_5:
# 2382 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2384 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_RETURN_LOSTKID
# 2386 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2387 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 5, 46
# 2388 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_WANDER_AROUND
# 2389 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2390 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
# 2392 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 17
# 2393 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_ShowNannyWithGuard
	goto Colchis_Script_LostKid_1

Colchis_Script_LostKid_6:
# 2378 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit1
	goto Colchis_Script_LostKid_5


Colchis_Script_DoorMan::
# 2405 "data/maps/Colchis/scripts.pory"
	lockall
# 2406 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2409 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_DoorMan_2
# 2414 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 18
	goto_if_ne Colchis_Script_DoorMan_6
# 2422 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman3, MSGBOX_DEFAULT
# 2423 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_DoorMan_5:
# 2425 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceRight
Colchis_Script_DoorMan_1:
# 2427 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2428 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_DoorMan_2:
# 2410 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman1, MSGBOX_DEFAULT
# 2411 "data/maps/Colchis/scripts.pory"
	closemessage
# 2412 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceDown
	goto Colchis_Script_DoorMan_1

Colchis_Script_DoorMan_6:
# 2415 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 18
# 2416 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman2, MSGBOX_DEFAULT
# 2417 "data/maps/Colchis/scripts.pory"
	closemessage
# 2418 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_DoorOpen_Left, FALSE
# 2419 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_DoorOpen_Right, FALSE
# 2420 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
	goto Colchis_Script_DoorMan_5


Colchis_Script_Nanny::
# 2434 "data/maps/Colchis/scripts.pory"
	lock
# 2435 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2436 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_Script_Nanny_2
# 2440 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny2, MSGBOX_DEFAULT
# 2441 "data/maps/Colchis/scripts.pory"
	closemessage
# 2442 "data/maps/Colchis/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 2443 "data/maps/Colchis/scripts.pory"
	waitmovement 0
Colchis_Script_Nanny_1:
# 2445 "data/maps/Colchis/scripts.pory"
	release
	end

Colchis_Script_Nanny_2:
# 2437 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny1, MSGBOX_DEFAULT
# 2438 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Nanny_1


Colchis_Script_GruntBreak::
# 2450 "data/maps/Colchis/scripts.pory"
	lockall
# 2451 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2452 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 2453 "data/maps/Colchis/scripts.pory"
	switch VAR_RESULT
# 2454 "data/maps/Colchis/scripts.pory"
	case 1, Colchis_Script_GruntBreak_3
# 2456 "data/maps/Colchis/scripts.pory"
	case 2, Colchis_Script_GruntBreak_4
# 2458 "data/maps/Colchis/scripts.pory"
	case 3, Colchis_Script_GruntBreak_5
# 2460 "data/maps/Colchis/scripts.pory"
	case 4, Colchis_Script_GruntBreak_6
# 2462 "data/maps/Colchis/scripts.pory"
	case 5, Colchis_Script_GruntBreak_7
# 2464 "data/maps/Colchis/scripts.pory"
	case 6, Colchis_Script_GruntBreak_8
# 2466 "data/maps/Colchis/scripts.pory"
	case 7, Colchis_Script_GruntBreak_9
# 2468 "data/maps/Colchis/scripts.pory"
	case 8, Colchis_Script_GruntBreak_10
# 2470 "data/maps/Colchis/scripts.pory"
	case 9, Colchis_Script_GruntBreak_11
# 2473 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak0, MSGBOX_DEFAULT
Colchis_Script_GruntBreak_1:
# 2475 "data/maps/Colchis/scripts.pory"
	closemessage
# 2476 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_GruntBreak_3:
# 2455 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak1, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_4:
# 2457 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak2, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_5:
# 2459 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak3, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_6:
# 2461 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak4, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_7:
# 2463 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak5, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_8:
# 2465 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak6, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_9:
# 2467 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak7, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_10:
# 2469 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak8, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_11:
# 2471 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak9, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1


Colchis_Script_Kid1::
# 2481 "data/maps/Colchis/scripts.pory"
	lock
# 2482 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2483 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid1, MSGBOX_DEFAULT
# 2484 "data/maps/Colchis/scripts.pory"
	closemessage
# 2485 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid2::
# 2490 "data/maps/Colchis/scripts.pory"
	lock
# 2491 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2492 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid2, MSGBOX_DEFAULT
# 2493 "data/maps/Colchis/scripts.pory"
	closemessage
# 2494 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid3::
# 2499 "data/maps/Colchis/scripts.pory"
	lock
# 2500 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2501 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid3, MSGBOX_DEFAULT
# 2502 "data/maps/Colchis/scripts.pory"
	closemessage
# 2503 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher1::
# 2508 "data/maps/Colchis/scripts.pory"
	lock
# 2509 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2510 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher1, MSGBOX_DEFAULT
# 2511 "data/maps/Colchis/scripts.pory"
	closemessage
# 2512 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher2::
# 2517 "data/maps/Colchis/scripts.pory"
	lock
# 2518 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2519 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher2, MSGBOX_DEFAULT
# 2520 "data/maps/Colchis/scripts.pory"
	closemessage
# 2521 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Chef2::
# 2526 "data/maps/Colchis/scripts.pory"
	lock
# 2527 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2528 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Chef2, MSGBOX_DEFAULT
# 2529 "data/maps/Colchis/scripts.pory"
	closemessage
# 2530 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakL::
# 2535 "data/maps/Colchis/scripts.pory"
	lock
# 2536 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2537 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakL, MSGBOX_DEFAULT
# 2538 "data/maps/Colchis/scripts.pory"
	closemessage
# 2539 "data/maps/Colchis/scripts.pory"
	applymovement 39, Common_Movement_FaceRight
# 2540 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2541 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakR::
# 2546 "data/maps/Colchis/scripts.pory"
	lock
# 2547 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2548 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakR, MSGBOX_DEFAULT
# 2549 "data/maps/Colchis/scripts.pory"
	closemessage
# 2550 "data/maps/Colchis/scripts.pory"
	applymovement 38, Common_Movement_FaceLeft
# 2551 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2552 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_MaidL::
# 2557 "data/maps/Colchis/scripts.pory"
	lock
# 2558 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2559 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MaidL, MSGBOX_DEFAULT
# 2560 "data/maps/Colchis/scripts.pory"
	closemessage
# 2561 "data/maps/Colchis/scripts.pory"
	applymovement 43, Common_Movement_FaceRight
# 2562 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2563 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_MaidR::
# 2568 "data/maps/Colchis/scripts.pory"
	lock
# 2569 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2570 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MaidR, MSGBOX_DEFAULT
# 2571 "data/maps/Colchis/scripts.pory"
	closemessage
# 2572 "data/maps/Colchis/scripts.pory"
	applymovement 42, Common_Movement_FaceLeft
# 2573 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2574 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntDoorF::
# 2579 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNTDOOR_F, Colchis_Text_GruntDoorFFight, Colchis_Text_GruntDoorFLost
# 2580 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntDoorFPost, MSGBOX_DEFAULT
# 2581 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntDoorM::
# 2586 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNTDOOR_M, Colchis_Text_GruntDoorMFight, Colchis_Text_GruntDoorMLost
# 2587 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntDoorMPost, MSGBOX_DEFAULT
# 2588 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM1::
# 2593 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM1, Colchis_Text_GruntThroneM1Fight, Colchis_Text_GruntThroneM1Lost
# 2594 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM1Post, MSGBOX_DEFAULT
# 2595 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM2::
# 2600 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM2, Colchis_Text_GruntThroneM2Fight, Colchis_Text_GruntThroneM2Lost
# 2601 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM2Post, MSGBOX_DEFAULT
# 2602 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM3::
# 2607 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM3, Colchis_Text_GruntThroneM3Fight, Colchis_Text_GruntThroneM3Lost
# 2608 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM3Post, MSGBOX_DEFAULT
# 2609 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM4::
# 2614 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM4, Colchis_Text_GruntThroneM4Fight, Colchis_Text_GruntThroneM4Lost
# 2615 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM4Post, MSGBOX_DEFAULT
# 2616 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM5::
# 2621 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM5, Colchis_Text_GruntThroneM5Fight, Colchis_Text_GruntThroneM5Lost
# 2622 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM5Post, MSGBOX_DEFAULT
# 2623 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM6::
# 2628 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM6, Colchis_Text_GruntThroneM6Fight, Colchis_Text_GruntThroneM6Lost
# 2629 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM6Post, MSGBOX_DEFAULT
# 2630 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF1::
# 2637 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF1, Colchis_Text_GruntThroneF1Fight, Colchis_Text_GruntThroneF1Lost
# 2638 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF1Post, MSGBOX_DEFAULT
# 2639 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF2::
# 2644 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF2, Colchis_Text_GruntThroneF2Fight, Colchis_Text_GruntThroneF2Lost
# 2645 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF2Post, MSGBOX_DEFAULT
# 2646 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF3::
# 2651 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF3, Colchis_Text_GruntThroneF3Fight, Colchis_Text_GruntThroneF3Lost
# 2652 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF3Post, MSGBOX_DEFAULT
# 2653 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF4::
# 2658 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF4, Colchis_Text_GruntThroneF4Fight, Colchis_Text_GruntThroneF4Lost
# 2659 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF4Post, MSGBOX_DEFAULT
# 2660 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF5::
# 2665 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF5, Colchis_Text_GruntThroneF5Fight, Colchis_Text_GruntThroneF5Lost
# 2666 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF5Post, MSGBOX_DEFAULT
# 2667 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF6::
# 2672 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF6, Colchis_Text_GruntThroneF6Fight, Colchis_Text_GruntThroneF6Lost
# 2673 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF6Post, MSGBOX_DEFAULT
# 2674 "data/maps/Colchis/scripts.pory"
	closemessage
	end


# 2678 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 2679 "data/maps/Colchis/scripts.pory"
	walk_up
# 2679 "data/maps/Colchis/scripts.pory"
	walk_up
# 2679 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2682 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 2683 "data/maps/Colchis/scripts.pory"
	walk_down
# 2683 "data/maps/Colchis/scripts.pory"
	walk_down
# 2683 "data/maps/Colchis/scripts.pory"
	walk_down
# 2683 "data/maps/Colchis/scripts.pory"
	walk_down
# 2683 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2686 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 2687 "data/maps/Colchis/scripts.pory"
	walk_up
# 2687 "data/maps/Colchis/scripts.pory"
	walk_up
# 2687 "data/maps/Colchis/scripts.pory"
	walk_up
# 2687 "data/maps/Colchis/scripts.pory"
	walk_up
# 2687 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2690 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitA:
# 2691 "data/maps/Colchis/scripts.pory"
	walk_up
# 2691 "data/maps/Colchis/scripts.pory"
	walk_up
# 2691 "data/maps/Colchis/scripts.pory"
	walk_up
# 2691 "data/maps/Colchis/scripts.pory"
	walk_up
# 2691 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2694 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitB:
# 2695 "data/maps/Colchis/scripts.pory"
	walk_down
# 2695 "data/maps/Colchis/scripts.pory"
	walk_down
# 2695 "data/maps/Colchis/scripts.pory"
	walk_down
# 2695 "data/maps/Colchis/scripts.pory"
	walk_down
# 2695 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2698 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2699 "data/maps/Colchis/scripts.pory"
	walk_up
# 2700 "data/maps/Colchis/scripts.pory"
	walk_right
# 2700 "data/maps/Colchis/scripts.pory"
	walk_right
# 2700 "data/maps/Colchis/scripts.pory"
	walk_right
# 2700 "data/maps/Colchis/scripts.pory"
	walk_right
# 2700 "data/maps/Colchis/scripts.pory"
	walk_right
# 2701 "data/maps/Colchis/scripts.pory"
	walk_up
# 2701 "data/maps/Colchis/scripts.pory"
	walk_up
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2702 "data/maps/Colchis/scripts.pory"
	walk_right
# 2703 "data/maps/Colchis/scripts.pory"
	walk_up
# 2703 "data/maps/Colchis/scripts.pory"
	walk_up
# 2703 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2706 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 2707 "data/maps/Colchis/scripts.pory"
	walk_up
# 2707 "data/maps/Colchis/scripts.pory"
	walk_up
# 2707 "data/maps/Colchis/scripts.pory"
	walk_up
# 2707 "data/maps/Colchis/scripts.pory"
	walk_up
# 2707 "data/maps/Colchis/scripts.pory"
	walk_up
# 2707 "data/maps/Colchis/scripts.pory"
	walk_up
# 2707 "data/maps/Colchis/scripts.pory"
	walk_up
# 2707 "data/maps/Colchis/scripts.pory"
	walk_up
# 2707 "data/maps/Colchis/scripts.pory"
	walk_up
# 2707 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2710 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 2711 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2714 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 2715 "data/maps/Colchis/scripts.pory"
	face_right
# 2716 "data/maps/Colchis/scripts.pory"
	face_up
# 2717 "data/maps/Colchis/scripts.pory"
	face_left
# 2718 "data/maps/Colchis/scripts.pory"
	face_down
# 2719 "data/maps/Colchis/scripts.pory"
	face_right
# 2720 "data/maps/Colchis/scripts.pory"
	face_up
# 2721 "data/maps/Colchis/scripts.pory"
	face_left
# 2722 "data/maps/Colchis/scripts.pory"
	face_down
# 2723 "data/maps/Colchis/scripts.pory"
	face_right
# 2724 "data/maps/Colchis/scripts.pory"
	face_up
# 2725 "data/maps/Colchis/scripts.pory"
	face_left
# 2726 "data/maps/Colchis/scripts.pory"
	face_down
# 2727 "data/maps/Colchis/scripts.pory"
	face_right
# 2728 "data/maps/Colchis/scripts.pory"
	face_up
# 2729 "data/maps/Colchis/scripts.pory"
	face_left
# 2730 "data/maps/Colchis/scripts.pory"
	face_down
# 2731 "data/maps/Colchis/scripts.pory"
	face_right
# 2732 "data/maps/Colchis/scripts.pory"
	face_up
# 2733 "data/maps/Colchis/scripts.pory"
	face_left
# 2734 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2737 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 2738 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2738 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2742 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 2743 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2743 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2744 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2747 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 2748 "data/maps/Colchis/scripts.pory"
	walk_left
# 2749 "data/maps/Colchis/scripts.pory"
	walk_up
# 2749 "data/maps/Colchis/scripts.pory"
	walk_up
# 2750 "data/maps/Colchis/scripts.pory"
	walk_right
# 2750 "data/maps/Colchis/scripts.pory"
	walk_right
# 2751 "data/maps/Colchis/scripts.pory"
	walk_down
# 2751 "data/maps/Colchis/scripts.pory"
	walk_down
# 2752 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2756 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2758 "data/maps/Colchis/scripts.pory"
	walk_up
# 2758 "data/maps/Colchis/scripts.pory"
	walk_up
# 2759 "data/maps/Colchis/scripts.pory"
	walk_right
# 2759 "data/maps/Colchis/scripts.pory"
	walk_right
# 2760 "data/maps/Colchis/scripts.pory"
	walk_down
# 2760 "data/maps/Colchis/scripts.pory"
	walk_down
# 2761 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	face_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_left
# 2764 "data/maps/Colchis/scripts.pory"
	walk_up
# 2764 "data/maps/Colchis/scripts.pory"
	walk_up
# 2765 "data/maps/Colchis/scripts.pory"
	walk_right
# 2765 "data/maps/Colchis/scripts.pory"
	walk_right
# 2766 "data/maps/Colchis/scripts.pory"
	walk_down
# 2766 "data/maps/Colchis/scripts.pory"
	walk_down
# 2767 "data/maps/Colchis/scripts.pory"
	walk_left
# 2768 "data/maps/Colchis/scripts.pory"
	face_down
# 2769 "data/maps/Colchis/scripts.pory"
	walk_left
# 2770 "data/maps/Colchis/scripts.pory"
	walk_up
# 2770 "data/maps/Colchis/scripts.pory"
	walk_up
# 2771 "data/maps/Colchis/scripts.pory"
	walk_right
# 2771 "data/maps/Colchis/scripts.pory"
	walk_right
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2773 "data/maps/Colchis/scripts.pory"
	walk_left
# 2774 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2777 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 2778 "data/maps/Colchis/scripts.pory"
	walk_down
# 2778 "data/maps/Colchis/scripts.pory"
	walk_down
# 2778 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2781 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 2782 "data/maps/Colchis/scripts.pory"
	walk_right
# 2782 "data/maps/Colchis/scripts.pory"
	walk_right
# 2783 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2786 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 2787 "data/maps/Colchis/scripts.pory"
	walk_left
# 2787 "data/maps/Colchis/scripts.pory"
	walk_left
# 2788 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2791 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 2792 "data/maps/Colchis/scripts.pory"
	walk_down
# 2793 "data/maps/Colchis/scripts.pory"
	face_left
# 2794 "data/maps/Colchis/scripts.pory"
	face_up
# 2795 "data/maps/Colchis/scripts.pory"
	face_right
# 2796 "data/maps/Colchis/scripts.pory"
	face_down
# 2797 "data/maps/Colchis/scripts.pory"
	walk_down
# 2798 "data/maps/Colchis/scripts.pory"
	face_left
# 2799 "data/maps/Colchis/scripts.pory"
	face_up
# 2800 "data/maps/Colchis/scripts.pory"
	face_right
# 2801 "data/maps/Colchis/scripts.pory"
	face_down
# 2802 "data/maps/Colchis/scripts.pory"
	walk_down
# 2803 "data/maps/Colchis/scripts.pory"
	face_left
# 2804 "data/maps/Colchis/scripts.pory"
	face_up
# 2805 "data/maps/Colchis/scripts.pory"
	face_right
# 2806 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2809 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 2810 "data/maps/Colchis/scripts.pory"
	walk_right
# 2811 "data/maps/Colchis/scripts.pory"
	walk_up
# 2812 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2813 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2816 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2818 "data/maps/Colchis/scripts.pory"
	walk_up
# 2819 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2820 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2823 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 2824 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2825 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2828 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 2829 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2830 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2833 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 2834 "data/maps/Colchis/scripts.pory"
	walk_left
# 2835 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2838 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 2839 "data/maps/Colchis/scripts.pory"
	walk_right
# 2840 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2843 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 2844 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2845 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2848 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 2849 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2850 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2853 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 2854 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2857 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 2858 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 2861 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 2862 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 2866 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 2867 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 2870 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 2871 "data/maps/Colchis/scripts.pory"
	walk_up
# 2871 "data/maps/Colchis/scripts.pory"
	walk_up
# 2871 "data/maps/Colchis/scripts.pory"
	walk_up
# 2871 "data/maps/Colchis/scripts.pory"
	walk_up
# 2871 "data/maps/Colchis/scripts.pory"
	walk_up
# 2871 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2874 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 2875 "data/maps/Colchis/scripts.pory"
	walk_right
# 2875 "data/maps/Colchis/scripts.pory"
	walk_right
# 2875 "data/maps/Colchis/scripts.pory"
	walk_right
# 2875 "data/maps/Colchis/scripts.pory"
	walk_right
# 2875 "data/maps/Colchis/scripts.pory"
	walk_right
# 2875 "data/maps/Colchis/scripts.pory"
	walk_right
# 2875 "data/maps/Colchis/scripts.pory"
	walk_right
# 2875 "data/maps/Colchis/scripts.pory"
	walk_right
# 2876 "data/maps/Colchis/scripts.pory"
	walk_down
# 2876 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2879 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 2880 "data/maps/Colchis/scripts.pory"
	walk_right
# 2880 "data/maps/Colchis/scripts.pory"
	walk_right
# 2880 "data/maps/Colchis/scripts.pory"
	walk_right
# 2880 "data/maps/Colchis/scripts.pory"
	walk_right
# 2880 "data/maps/Colchis/scripts.pory"
	walk_right
# 2880 "data/maps/Colchis/scripts.pory"
	walk_right
# 2880 "data/maps/Colchis/scripts.pory"
	walk_right
# 2881 "data/maps/Colchis/scripts.pory"
	walk_down
# 2881 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2884 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 2885 "data/maps/Colchis/scripts.pory"
	walk_right
# 2885 "data/maps/Colchis/scripts.pory"
	walk_right
# 2885 "data/maps/Colchis/scripts.pory"
	walk_right
# 2885 "data/maps/Colchis/scripts.pory"
	walk_right
# 2885 "data/maps/Colchis/scripts.pory"
	walk_right
# 2885 "data/maps/Colchis/scripts.pory"
	walk_right
# 2886 "data/maps/Colchis/scripts.pory"
	walk_down
# 2886 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2889 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 2890 "data/maps/Colchis/scripts.pory"
	walk_right
# 2890 "data/maps/Colchis/scripts.pory"
	walk_right
# 2890 "data/maps/Colchis/scripts.pory"
	walk_right
# 2890 "data/maps/Colchis/scripts.pory"
	walk_right
# 2890 "data/maps/Colchis/scripts.pory"
	walk_right
# 2890 "data/maps/Colchis/scripts.pory"
	walk_right
# 2890 "data/maps/Colchis/scripts.pory"
	walk_right
# 2890 "data/maps/Colchis/scripts.pory"
	walk_right
# 2891 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2894 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 2895 "data/maps/Colchis/scripts.pory"
	walk_right
# 2895 "data/maps/Colchis/scripts.pory"
	walk_right
# 2895 "data/maps/Colchis/scripts.pory"
	walk_right
# 2895 "data/maps/Colchis/scripts.pory"
	walk_right
# 2895 "data/maps/Colchis/scripts.pory"
	walk_right
# 2895 "data/maps/Colchis/scripts.pory"
	walk_right
# 2895 "data/maps/Colchis/scripts.pory"
	walk_right
# 2896 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2899 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 2900 "data/maps/Colchis/scripts.pory"
	walk_right
# 2900 "data/maps/Colchis/scripts.pory"
	walk_right
# 2900 "data/maps/Colchis/scripts.pory"
	walk_right
# 2900 "data/maps/Colchis/scripts.pory"
	walk_right
# 2900 "data/maps/Colchis/scripts.pory"
	walk_right
# 2900 "data/maps/Colchis/scripts.pory"
	walk_right
# 2901 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2904 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2905 "data/maps/Colchis/scripts.pory"
	walk_up
# 2906 "data/maps/Colchis/scripts.pory"
	walk_right
# 2906 "data/maps/Colchis/scripts.pory"
	walk_right
# 2906 "data/maps/Colchis/scripts.pory"
	walk_right
# 2906 "data/maps/Colchis/scripts.pory"
	walk_right
# 2906 "data/maps/Colchis/scripts.pory"
	walk_right
# 2906 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2909 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2913 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 2914 "data/maps/Colchis/scripts.pory"
	walk_up
# 2914 "data/maps/Colchis/scripts.pory"
	walk_up
# 2914 "data/maps/Colchis/scripts.pory"
	walk_up
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2915 "data/maps/Colchis/scripts.pory"
	walk_right
# 2916 "data/maps/Colchis/scripts.pory"
	walk_up
# 2916 "data/maps/Colchis/scripts.pory"
	walk_up
# 2916 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2919 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 2920 "data/maps/Colchis/scripts.pory"
	walk_up
# 2920 "data/maps/Colchis/scripts.pory"
	walk_up
# 2920 "data/maps/Colchis/scripts.pory"
	walk_up
# 2920 "data/maps/Colchis/scripts.pory"
	walk_up
# 2920 "data/maps/Colchis/scripts.pory"
	walk_up
# 2920 "data/maps/Colchis/scripts.pory"
	walk_up
# 2920 "data/maps/Colchis/scripts.pory"
	walk_up
# 2920 "data/maps/Colchis/scripts.pory"
	walk_up
# 2920 "data/maps/Colchis/scripts.pory"
	walk_up
# 2920 "data/maps/Colchis/scripts.pory"
	walk_up
# 2920 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2923 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 2924 "data/maps/Colchis/scripts.pory"
	walk_up
# 2924 "data/maps/Colchis/scripts.pory"
	walk_up
# 2924 "data/maps/Colchis/scripts.pory"
	walk_up
# 2924 "data/maps/Colchis/scripts.pory"
	walk_up
# 2924 "data/maps/Colchis/scripts.pory"
	walk_up
# 2924 "data/maps/Colchis/scripts.pory"
	walk_up
# 2924 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2927 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 2928 "data/maps/Colchis/scripts.pory"
	walk_left
# 2929 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2932 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 2933 "data/maps/Colchis/scripts.pory"
	walk_up
# 2934 "data/maps/Colchis/scripts.pory"
	walk_right
# 2935 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2939 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2943 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 2944 "data/maps/Colchis/scripts.pory"
	walk_right
# 2944 "data/maps/Colchis/scripts.pory"
	walk_right
# 2945 "data/maps/Colchis/scripts.pory"
	walk_down
# 2946 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2949 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 2950 "data/maps/Colchis/scripts.pory"
	walk_left
# 2951 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2954 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 2955 "data/maps/Colchis/scripts.pory"
	walk_right
# 2956 "data/maps/Colchis/scripts.pory"
	walk_up
# 2957 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2960 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 2961 "data/maps/Colchis/scripts.pory"
	walk_left
# 2962 "data/maps/Colchis/scripts.pory"
	walk_up
# 2963 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2966 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
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
# 2967 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2970 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 2971 "data/maps/Colchis/scripts.pory"
	walk_up
# 2971 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2974 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonApproachPlayer:
# 2975 "data/maps/Colchis/scripts.pory"
	walk_up
# 2975 "data/maps/Colchis/scripts.pory"
	walk_up
# 2975 "data/maps/Colchis/scripts.pory"
	walk_up
# 2975 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2978 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonExit:
# 2979 "data/maps/Colchis/scripts.pory"
	walk_down
# 2979 "data/maps/Colchis/scripts.pory"
	walk_down
# 2979 "data/maps/Colchis/scripts.pory"
	walk_down
# 2979 "data/maps/Colchis/scripts.pory"
	walk_down
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2980 "data/maps/Colchis/scripts.pory"
	walk_left
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2981 "data/maps/Colchis/scripts.pory"
	walk_down
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2982 "data/maps/Colchis/scripts.pory"
	walk_right
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2983 "data/maps/Colchis/scripts.pory"
	walk_down
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
# 2984 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2987 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonExit:
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
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2989 "data/maps/Colchis/scripts.pory"
	walk_left
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2990 "data/maps/Colchis/scripts.pory"
	walk_down
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2991 "data/maps/Colchis/scripts.pory"
	walk_right
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2992 "data/maps/Colchis/scripts.pory"
	walk_down
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
# 2993 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2996 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerPrisonExit:
# 2997 "data/maps/Colchis/scripts.pory"
	walk_down
# 2997 "data/maps/Colchis/scripts.pory"
	walk_down
# 2997 "data/maps/Colchis/scripts.pory"
	walk_down
# 2997 "data/maps/Colchis/scripts.pory"
	walk_down
# 2997 "data/maps/Colchis/scripts.pory"
	walk_down
# 2997 "data/maps/Colchis/scripts.pory"
	walk_down
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2998 "data/maps/Colchis/scripts.pory"
	walk_left
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 2999 "data/maps/Colchis/scripts.pory"
	walk_down
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3000 "data/maps/Colchis/scripts.pory"
	walk_right
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3001 "data/maps/Colchis/scripts.pory"
	walk_down
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
# 3002 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 3005 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 3006 "data/maps/Colchis/scripts.pory"
	walk_left
# 3006 "data/maps/Colchis/scripts.pory"
	walk_left
# 3006 "data/maps/Colchis/scripts.pory"
	walk_left
# 3007 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 3010 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 3011 "data/maps/Colchis/scripts.pory"
	walk_down
# 3012 "data/maps/Colchis/scripts.pory"
	walk_right
# 3012 "data/maps/Colchis/scripts.pory"
	walk_right
# 3012 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 3015 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 3016 "data/maps/Colchis/scripts.pory"
	walk_up
# 3016 "data/maps/Colchis/scripts.pory"
	walk_up
# 3016 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 3019 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 3020 "data/maps/Colchis/scripts.pory"
	walk_up
# 3020 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 3023 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3A:
# 3024 "data/maps/Colchis/scripts.pory"
	walk_up
# 3024 "data/maps/Colchis/scripts.pory"
	walk_up
# 3025 "data/maps/Colchis/scripts.pory"
	walk_right
# 3025 "data/maps/Colchis/scripts.pory"
	walk_right
# 3026 "data/maps/Colchis/scripts.pory"
	walk_up
# 3026 "data/maps/Colchis/scripts.pory"
	walk_up
# 3026 "data/maps/Colchis/scripts.pory"
	walk_up
# 3026 "data/maps/Colchis/scripts.pory"
	walk_up
# 3026 "data/maps/Colchis/scripts.pory"
	walk_up
# 3026 "data/maps/Colchis/scripts.pory"
	walk_up
# 3026 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 3029 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3B:
# 3030 "data/maps/Colchis/scripts.pory"
	walk_up
# 3030 "data/maps/Colchis/scripts.pory"
	walk_up
# 3031 "data/maps/Colchis/scripts.pory"
	walk_right
# 3032 "data/maps/Colchis/scripts.pory"
	walk_up
# 3032 "data/maps/Colchis/scripts.pory"
	walk_up
# 3032 "data/maps/Colchis/scripts.pory"
	walk_up
# 3032 "data/maps/Colchis/scripts.pory"
	walk_up
# 3032 "data/maps/Colchis/scripts.pory"
	walk_up
# 3032 "data/maps/Colchis/scripts.pory"
	walk_up
# 3032 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 3035 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3A:
# 3036 "data/maps/Colchis/scripts.pory"
	walk_down
# 3037 "data/maps/Colchis/scripts.pory"
	walk_right
# 3038 "data/maps/Colchis/scripts.pory"
	walk_down
# 3038 "data/maps/Colchis/scripts.pory"
	walk_down
# 3039 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 3042 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3B:
# 3043 "data/maps/Colchis/scripts.pory"
	walk_down
# 3043 "data/maps/Colchis/scripts.pory"
	walk_down
# 3043 "data/maps/Colchis/scripts.pory"
	walk_down
# 3044 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 3047 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn:
# 3048 "data/maps/Colchis/scripts.pory"
	walk_down
# 3048 "data/maps/Colchis/scripts.pory"
	walk_down
# 3048 "data/maps/Colchis/scripts.pory"
	walk_down
# 3048 "data/maps/Colchis/scripts.pory"
	walk_down
# 3048 "data/maps/Colchis/scripts.pory"
	walk_down
# 3048 "data/maps/Colchis/scripts.pory"
	walk_down
# 3048 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 3051 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2A:
# 3052 "data/maps/Colchis/scripts.pory"
	walk_down
# 3053 "data/maps/Colchis/scripts.pory"
	walk_left
# 3053 "data/maps/Colchis/scripts.pory"
	walk_left
# 3054 "data/maps/Colchis/scripts.pory"
	walk_down
# 3055 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 3058 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2B:
# 3059 "data/maps/Colchis/scripts.pory"
	walk_down
# 3060 "data/maps/Colchis/scripts.pory"
	walk_left
# 3061 "data/maps/Colchis/scripts.pory"
	walk_down
# 3062 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 3065 "data/maps/Colchis/scripts.pory"
Colchis_Movement_Exeunt:
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3066 "data/maps/Colchis/scripts.pory"
	walk_right
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3067 "data/maps/Colchis/scripts.pory"
	walk_up
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3068 "data/maps/Colchis/scripts.pory"
	walk_left
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
# 3069 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 3072 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAndMedeaExeunt:
# 3073 "data/maps/Colchis/scripts.pory"
	walk_down
# 3074 "data/maps/Colchis/scripts.pory"
	walk_right
# 3074 "data/maps/Colchis/scripts.pory"
	walk_right
# 3074 "data/maps/Colchis/scripts.pory"
	walk_right
# 3074 "data/maps/Colchis/scripts.pory"
	walk_right
# 3074 "data/maps/Colchis/scripts.pory"
	walk_right
# 3074 "data/maps/Colchis/scripts.pory"
	walk_right
# 3074 "data/maps/Colchis/scripts.pory"
	walk_right
# 3074 "data/maps/Colchis/scripts.pory"
	walk_right
# 3074 "data/maps/Colchis/scripts.pory"
	walk_right
# 3074 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 3077 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ChefExit:
# 3078 "data/maps/Colchis/scripts.pory"
	walk_right
# 3078 "data/maps/Colchis/scripts.pory"
	walk_right
# 3078 "data/maps/Colchis/scripts.pory"
	walk_right
# 3078 "data/maps/Colchis/scripts.pory"
	walk_right
# 3078 "data/maps/Colchis/scripts.pory"
	walk_right
# 3078 "data/maps/Colchis/scripts.pory"
	walk_right
# 3078 "data/maps/Colchis/scripts.pory"
	walk_right
# 3078 "data/maps/Colchis/scripts.pory"
	walk_right
# 3078 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 3081 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit1:
# 3082 "data/maps/Colchis/scripts.pory"
	walk_left
# 3083 "data/maps/Colchis/scripts.pory"
	walk_down
# 3083 "data/maps/Colchis/scripts.pory"
	walk_down
# 3083 "data/maps/Colchis/scripts.pory"
	walk_down
# 3083 "data/maps/Colchis/scripts.pory"
	walk_down
# 3084 "data/maps/Colchis/scripts.pory"
	walk_left
# 3084 "data/maps/Colchis/scripts.pory"
	walk_left
# 3084 "data/maps/Colchis/scripts.pory"
	walk_left
# 3084 "data/maps/Colchis/scripts.pory"
	walk_left
# 3084 "data/maps/Colchis/scripts.pory"
	walk_left
# 3084 "data/maps/Colchis/scripts.pory"
	walk_left
# 3084 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 3087 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit2:
# 3088 "data/maps/Colchis/scripts.pory"
	walk_down
# 3089 "data/maps/Colchis/scripts.pory"
	walk_left
# 3090 "data/maps/Colchis/scripts.pory"
	walk_down
# 3090 "data/maps/Colchis/scripts.pory"
	walk_down
# 3090 "data/maps/Colchis/scripts.pory"
	walk_down
# 3091 "data/maps/Colchis/scripts.pory"
	walk_left
# 3091 "data/maps/Colchis/scripts.pory"
	walk_left
# 3091 "data/maps/Colchis/scripts.pory"
	walk_left
# 3091 "data/maps/Colchis/scripts.pory"
	walk_left
# 3091 "data/maps/Colchis/scripts.pory"
	walk_left
# 3091 "data/maps/Colchis/scripts.pory"
	walk_left
# 3091 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1594 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Script_SanctumMedeaReturn_Text_0:
# 1814 "data/maps/Colchis/scripts.pory"
	.string "OIMOIAY!\nOOIIMMOOIIAAYY!!$"

Colchis_Text_JasonIntro1::
# 3094 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 3098 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 3102 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 3106 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 3110 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 3114 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 3119 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 3124 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 3128 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 3132 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 3136 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 3145 "data/maps/Colchis/scripts.pory"
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
# 3150 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 3159 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 3163 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 3172 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 3178 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 3191 "data/maps/Colchis/scripts.pory"
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
# 3203 "data/maps/Colchis/scripts.pory"
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
# 3207 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 3211 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 3215 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyy!$"

Colchis_Text_Aeetes7::
# 3219 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 3223 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 3227 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 3236 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 3240 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 3258 "data/maps/Colchis/scripts.pory"
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
# 3262 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 3267 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 3271 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 3275 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 3282 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 3286 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 3312 "data/maps/Colchis/scripts.pory"
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
# 3320 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 3324 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 3337 "data/maps/Colchis/scripts.pory"
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
# 3341 "data/maps/Colchis/scripts.pory"
	.string "Do not interrupt my private time with\n"
	.string "Medea 'till you bring shiny Mareep.$"

Colchis_Text_MedeaSanctumTrigger1::
# 3346 "data/maps/Colchis/scripts.pory"
	.string "Ememberray, ingbray onay armhay otay\n"
	.string "Ugialay.$"

Colchis_Text_JasonSanctumTrigger2::
# 3350 "data/maps/Colchis/scripts.pory"
	.string "Have you returned bringing Shiny\n"
	.string "Mareep?$"

Colchis_Text_MedeaSanctumTrigger2::
# 3355 "data/maps/Colchis/scripts.pory"
	.string "Ymay oughtsthay etraybay emay.\n"
	.string "Excuseay emay Asonjay, againstay ymay\l"
	.string "ownay adviceay Iay ustmay aketay\l"
	.string "eavelay ofay ouyay anday eesay atthay\l"
	.string "Ugialay isay afesay.$"

Colchis_Text_JasonSanctumTrigger3::
# 3359 "data/maps/Colchis/scripts.pory"
	.string "What have you done? Where is Shiny\n"
	.string "Mareep? How could you fail? You only\l"
	.string "had one job! My quest has failed... and\l"
	.string "it was all your fault! Now you will pay\l"
	.string "the price. Nosepass! Attack!$"

Colchis_Text_JasonLost::
# 3363 "data/maps/Colchis/scripts.pory"
	.string "I curse that day I saved you from the\n"
	.string "surf.$"

Colchis_Text_JasonPost::
# 3367 "data/maps/Colchis/scripts.pory"
	.string "The most wicked betrayal of all my\n"
	.string "life...$"

Colchis_Text_JasonGiveMeMareep::
# 3371 "data/maps/Colchis/scripts.pory"
	.string "I see that you have completed the\n"
	.string "quest. Give me shiny Mareep and let's be\l"
	.string "done.$"

Colchis_Text_GiveJasonMareep::
# 3375 "data/maps/Colchis/scripts.pory"
	.string "Will you give Jason shiny Mareep?$"

Colchis_Text_GaveShinyMareep::
# 3379 "data/maps/Colchis/scripts.pory"
	.string "You gave {STR_VAR_1} to Jason!\p"
	.string "Bye Bye {STR_VAR_1}!$"

Colchis_Text_CultistMPre::
# 3384 "data/maps/Colchis/scripts.pory"
	.string "Espassertray opstay! Allfay intoay\n"
	.string "othingnessnay$"

Colchis_Text_CultistMLost::
# 3389 "data/maps/Colchis/scripts.pory"
	.string "Ethay everlastingay arknessday\n"
	.string "overscay allay.$"

Colchis_Text_CultistMPost::
# 3394 "data/maps/Colchis/scripts.pory"
	.string "Ouyay aymay avehay onway utbay\n"
	.string "ou'llyay evernay escapeay.$"

Colchis_Text_MedeaSanctumReturn1::
# 3399 "data/maps/Colchis/scripts.pory"
	.string "Ouyay onstermay! Owhay ouldcay ouyay\n"
	.string "oday isthay otay emay?$"

Colchis_Text_MedeaSanctumReturn2::
# 3404 "data/maps/Colchis/scripts.pory"
	.string "Ymay ovelay, ehay ashay attackeday\n"
	.string "ymay Ugialay! Iay illway onay ongerlay\l"
	.string "elphay imhay eavelay Olchiscay.$"

Colchis_Text_JasonMedeaReturn1::
# 3408 "data/maps/Colchis/scripts.pory"
	.string "Please, do not cry beloved Medea. Lend\n"
	.string "love the power to hold back your tears.$"

Colchis_Text_JasonMedeaReturn2::
# 3412 "data/maps/Colchis/scripts.pory"
	.string "Hey, I apologize for Medea. I know she's\n"
	.string "acting up, but we're still cool. Give it\l"
	.string "some time I'll get her to cool down. When\l"
	.string "you get out meet me in Bulbus town and\l"
	.string "I'll repay you for shiny Mareep.$"

Colchis_Text_JasonSanctumWilds::
# 3416 "data/maps/Colchis/scripts.pory"
	.string "Alas! Medea! My quest for shiny Mareep\n"
	.string "has failed and now we're vagabonds.$"

Colchis_Text_JasonSanctumDepart::
# 3420 "data/maps/Colchis/scripts.pory"
	.string "Let us depart and leave this one\n"
	.string "behind.$"

Colchis_Text_Bed::
# 3424 "data/maps/Colchis/scripts.pory"
	.string "It's a big comfy bed!\n"
	.string "Would you like to take a rest?$"

Colchis_Text_RingBlockerIntro::
# 3428 "data/maps/Colchis/scripts.pory"
	.string "It's a large metal barrier with a keyhole\n"
	.string "in the center.$"

Colchis_Text_PrisonDoorClosed::
# 3432 "data/maps/Colchis/scripts.pory"
	.string "It's a large metal door with a keyhole in\n"
	.string "the center.$"

Colchis_Text_KeyFits::
# 3436 "data/maps/Colchis/scripts.pory"
	.string "The key fits into the keyhole!\n"
	.string "The barriers sink into the ground but\l"
	.string "the key broke off inside!$"

Colchis_Text_RingBlockerDecline::
# 3440 "data/maps/Colchis/scripts.pory"
	.string "Better not try using the key here.$"

Colchis_Text_RingBlockerYesNo::
# 3444 "data/maps/Colchis/scripts.pory"
	.string "Would you like to try using the Colchis\n"
	.string "Key?$"

Colchis_Text_AeetesIntro::
# 3453 "data/maps/Colchis/scripts.pory"
	.string "Ouryay insolentay invasionay ofay\n"
	.string "ouray airfay anday ightymay ingdomkay\l"
	.string "isay ownay atay anay enday. ouryay\l"
	.string "illway ownay earnlay ethay uetray\l"
	.string "owerpay ofay Ingkay Aeetesay.$"

Colchis_Text_AeetesLost::
# 3458 "data/maps/Colchis/scripts.pory"
	.string "Ownay ymay ingdomkay ashay allenfay.$"

Colchis_Text_AeetesPost::
# 3471 "data/maps/Colchis/scripts.pory"
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
# 3476 "data/maps/Colchis/scripts.pory"
	.string "Ymay ifelay ashay eenbay educedray\n"
	.string "otay aughtnay. Eavelay emay.$"

Colchis_Text_ChefProposal::
# 3480 "data/maps/Colchis/scripts.pory"
	.string "I'm nervous! Do you think she will say\n"
	.string "yes?$"

Colchis_Movement_ChefIntro::
# 3484 "data/maps/Colchis/scripts.pory"
	.string "Oh! What to do? I am madly in love with\n"
	.string "one of Colchis' most beautiful maids\l"
	.string "but worry I will lose her to someone\l"
	.string "more handsome and with more money than\l"
	.string "me. If only I had an engagement ring to\l"
	.string "give her in exchange for loyalty.$"

Colchis_Text_ChefRingYesNo::
# 3488 "data/maps/Colchis/scripts.pory"
	.string "Give Chef the Colchis Ring?$"

Colchis_Text_ChefGaveRing::
# 3492 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave Chef the Colchis Ring.$"

Colchis_Text_ChefThanks1::
# 3496 "data/maps/Colchis/scripts.pory"
	.string "Great Almighty! You're giving this to\n"
	.string "me? Take this Sweet Apple as token of\l"
	.string "thanks.$"

Colchis_Text_ChefThanks2::
# 3500 "data/maps/Colchis/scripts.pory"
	.string "I'm off now to proposition the maid.$"

Colchis_Text_ChefGaveRingNo::
# 3504 "data/maps/Colchis/scripts.pory"
	.string "Better not give him the ring.$"

Colchis_Text_Maid1::
# 3508 "data/maps/Colchis/scripts.pory"
	.string "Right now I am a maid but one day I will\n"
	.string "meet a foreign man and have his kids.$"

Colchis_Text_Maid2::
# 3512 "data/maps/Colchis/scripts.pory"
	.string "I'm starting to worry this creep likes\n"
	.string "me.$"

Colchis_Text_JailerIntro::
# 3525 "data/maps/Colchis/scripts.pory"
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
# 3529 "data/maps/Colchis/scripts.pory"
	.string "Give the Colchis Apple to the jailer?$"

Colchis_Text_JailerGaveApple::
# 3533 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave the jailer the Colchis\n"
	.string "Apple$"

Colchis_Text_JailerThanks1::
# 3539 "data/maps/Colchis/scripts.pory"
	.string "Aay Olchiscay apple? Ownay ere'sthay\n"
	.string "aay eetsway eattray! Ankthay ouyay!\l"
	.string "Ere'shay ethay ailjay eykay. Ocknay\l"
	.string "ourselfyay outay.$"

Colchis_Text_JailerThanks2::
# 3544 "data/maps/Colchis/scripts.pory"
	.string "Ebay arefulcay otnay otay ocklay\n"
	.string "ourselfyay inay ailjay. Ahay!$"

Colchis_Text_JailerGaveAppleNo::
# 3548 "data/maps/Colchis/scripts.pory"
	.string "Best not to give him the Apple now.$"

Colchis_Text_PrisonDoorOpen::
# 3552 "data/maps/Colchis/scripts.pory"
	.string "The Colchis Prison Key unlocked the\n"
	.string "door!$"

Colchis_Text_LostKid1::
# 3556 "data/maps/Colchis/scripts.pory"
	.string "Hey! Thanks for finding me! I was\n"
	.string "starting to get scared but I'll go back\l"
	.string "to where I belong now.$"

Colchis_Text_LostKid2::
# 3560 "data/maps/Colchis/scripts.pory"
	.string "I love playing with my friends again.$"

Colchis_Text_Doorman1::
# 3574 "data/maps/Colchis/scripts.pory"
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
# 3579 "data/maps/Colchis/scripts.pory"
	.string "Ankthay ouyay orfay ingingbray usay\n"
	.string "ackbay ogethertay. Ethay oorday isay\l"
	.string "openay. Arewellfay.$"

Colchis_Text_Doorman3::
# 3584 "data/maps/Colchis/scripts.pory"
	.string "Anksthay againay.$"

Colchis_Text_Nanny1::
# 3588 "data/maps/Colchis/scripts.pory"
	.string "Oh no! How terrible! I'm freaking out\n"
	.string "because I lost another one. What if I\l"
	.string "get caught swapping out another kid?\l"
	.string "When they're infants they usually can't\l"
	.string "tell but this one was older...What can I\l"
	.string "do?$"

Colchis_Text_Nanny2::
# 3592 "data/maps/Colchis/scripts.pory"
	.string "Oh! Thanks for finding that lost kid for\n"
	.string "me. I feel like I can finally exhale. I\l"
	.string "had been so stressed out I hadn't been\l"
	.string "able to go socialize with my man.$"

Colchis_Text_GruntBreak1::
# 3597 "data/maps/Colchis/scripts.pory"
	.string "Iay asway ustjay inkingthay aboutay\n"
	.string "ymay etpay atcay.$"

Colchis_Text_GruntBreak2::
# 3602 "data/maps/Colchis/scripts.pory"
	.string "Iay oday otnay inkthay eetingsmay\n"
	.string "areay oductivepray.$"

Colchis_Text_GruntBreak3::
# 3607 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay interrupay emay ingebay\n"
	.string "eatingay ipschay.$"

Colchis_Text_GruntBreak4::
# 3612 "data/maps/Colchis/scripts.pory"
	.string "I'may onay ymay eakbray, asay\n"
	.string "Olchiscay' awlay andatesmay.$"

Colchis_Text_GruntBreak5::
# 3617 "data/maps/Colchis/scripts.pory"
	.string "Ymay eakbray imetay isay ymay\n"
	.string "erapythay essionsay.$"

Colchis_Text_GruntBreak6::
# 3622 "data/maps/Colchis/scripts.pory"
	.string "I'may otnay azylay! I'may eparingpray\n"
	.string "otay orkway.$"

Colchis_Text_GruntBreak7::
# 3627 "data/maps/Colchis/scripts.pory"
	.string "Eythey aysay atthay eaksbray areay\n"
	.string "ikelay ugshay orfay ouryay oulsay.$"

Colchis_Text_GruntBreak8::
# 3632 "data/maps/Colchis/scripts.pory"
	.string "I'may otnay ignoringay ouyay. I'may\n"
	.string "ustjay estingray.$"

Colchis_Text_GruntBreak9::
# 3637 "data/maps/Colchis/scripts.pory"
	.string "On'tday elltay ymay ossbay I'veay\n"
	.string "eenbay erehay orfay ourshay.$"

Colchis_Text_GruntBreak0::
# 3642 "data/maps/Colchis/scripts.pory"
	.string "Amay Iay upposedsay otay ebay\n"
	.string "alkingtay otay ouyay?$"

Colchis_Text_Kid1::
# 3646 "data/maps/Colchis/scripts.pory"
	.string "Baby shark doo doo doo doo doo doo\n"
	.string "baby shark doo doo doo doo doo doo\l"
	.string "baby shark doo doo doo doo doo baby\l"
	.string "shark!$"

Colchis_Text_Kid2::
# 3650 "data/maps/Colchis/scripts.pory"
	.string "I love Pikachu! He's an electric Pokemon\n"
	.string "and he's my favorite! I wish I had a pet\l"
	.string "Pikachu but I think my mom would say\l"
	.string "no...Maybe one day...$"

Colchis_Text_Kid3::
# 3654 "data/maps/Colchis/scripts.pory"
	.string "Have you ever had a dream so that so\n"
	.string "that you um you had you you would you\l"
	.string "could you'll do you went you want you\l"
	.string "you could do so you you do you could\l"
	.string "you you want you want him to do you so\l"
	.string "much you could do anything?$"

Colchis_Text_Teacher1::
# 3658 "data/maps/Colchis/scripts.pory"
	.string "The youth is lost! They pay no\n"
	.string "attention to anything of value or\l"
	.string "substance.$"

Colchis_Text_Teacher2::
# 3662 "data/maps/Colchis/scripts.pory"
	.string "Even though teaching can be\n"
	.string "exhausting it's an honor to help\l"
	.string "nurture young minds.$"

Colchis_Text_Chef2::
# 3666 "data/maps/Colchis/scripts.pory"
	.string "I'm not crying! No! Just peeling onions!\n"
	.string "Not thinking 'bout the girl who left me!\l"
	.string "No!$"

Colchis_Text_GruntBreakL::
# 3671 "data/maps/Colchis/scripts.pory"
	.string "E'reway otnay arguinay. I'may ovingpray\n"
	.string "I'may ightray.$"

Colchis_Text_GruntBreakR::
# 3676 "data/maps/Colchis/scripts.pory"
	.string "Atthay uy'sgay anay assay, anay assay\n"
	.string "at'sthay ullfay ofay itshay.$"

Colchis_Text_MaidL::
# 3680 "data/maps/Colchis/scripts.pory"
	.string "I heard she said he said he had a crush\n"
	.string "on her but she said she does not like\l"
	.string "him.$"

Colchis_Text_MaidR::
# 3684 "data/maps/Colchis/scripts.pory"
	.string "Get out of here! We're not interested.$"

Colchis_Text_GruntDoorFFight::
# 3691 "data/maps/Colchis/scripts.pory"
	.string "Iay illway otnay etlay ouyay eesay ymay\n"
	.string "adies'lay edbay!$"

Colchis_Text_GruntDoorFLost::
# 3695 "data/maps/Colchis/scripts.pory"
	.string "Ou'veyay onqueredcay emay.$"

Colchis_Text_GruntDoorFPost::
# 3699 "data/maps/Colchis/scripts.pory"
	.string "Edea'sMay edbay isay oursyay.$"

Colchis_Text_GruntDoorMFight::
# 3706 "data/maps/Colchis/scripts.pory"
	.string "Ethay Ing'skay Amberschay areay otnay\n"
	.string "orfay ommoncay olkfay.$"

Colchis_Text_GruntDoorMLost::
# 3710 "data/maps/Colchis/scripts.pory"
	.string "Ymay ordlay! Iay avehay ailedfay ouyay!$"

Colchis_Text_GruntDoorMPost::
# 3714 "data/maps/Colchis/scripts.pory"
	.string "Ouyay ebelray umscray, ouryay\n"
	.string "esencepray efilesday isthay oblenay\l"
	.string "aceplay.$"

Colchis_Text_GruntThroneF1Fight::
# 3722 "data/maps/Colchis/scripts.pory"
	.string "At'swhay orseway, osinglay ouray\n"
	.string "ingkay, oray ouryay outfitay?$"

Colchis_Text_GruntThroneF1Lost::
# 3726 "data/maps/Colchis/scripts.pory"
	.string "Upersay otnay oolcay Iay otgay eatbay\n"
	.string "ybay aay obslay!$"

Colchis_Text_GruntThroneF1Post::
# 3730 "data/maps/Colchis/scripts.pory"
	.string "Ifay ou'reyay erehah otay overthroway\n"
	.string "ouray ingdomkay ouyay ouldcay atay\l"
	.string "eastlay oday itay ithway omesay\l"
	.string "ylestay.$"

Colchis_Text_GruntThroneF2Fight::
# 3737 "data/maps/Colchis/scripts.pory"
	.string "Ou'llyay evernay asspay! Eparepray\n"
	.string "otay eelfay ymay athwraw.$"

Colchis_Text_GruntThroneF2Lost::
# 3741 "data/maps/Colchis/scripts.pory"
	.string "Amnday indblay angeray!$"

Colchis_Text_GruntThroneF2Post::
# 3745 "data/maps/Colchis/scripts.pory"
	.string "Ou'reyay ightiermay anthay emay.$"

Colchis_Text_GruntThroneF3Fight::
# 3752 "data/maps/Colchis/scripts.pory"
	.string "Inay imestay ofay eacepay Iay anceday\n"
	.string "orfay Edeamay.$"

Colchis_Text_GruntThroneF3Lost::
# 3756 "data/maps/Colchis/scripts.pory"
	.string "I'may aay etterbay ancerday anthay\n"
	.string "attlerbay.$"

Colchis_Text_GruntThroneF3Post::
# 3760 "data/maps/Colchis/scripts.pory"
	.string "Easeplay on'tday urthay Aeetesay, ehay\n"
	.string "ayspay ymay illsbay.$"

Colchis_Text_GruntThroneF4Fight::
# 3767 "data/maps/Colchis/scripts.pory"
	.string "Ou'llyay evernay eavelay Olchiscay\n"
	.string "aliveay!$"

Colchis_Text_GruntThroneF4Lost::
# 3771 "data/maps/Colchis/scripts.pory"
	.string "Ailurefay...$"

Colchis_Text_GruntThroneF4Post::
# 3775 "data/maps/Colchis/scripts.pory"
	.string "Anymay uardsgay etyay emainray. Ouyay\n"
	.string "idnay otnay inway.$"

Colchis_Text_GruntThroneF5Fight::
# 3782 "data/maps/Colchis/scripts.pory"
	.string "Atwhay? Enacemay!$"

Colchis_Text_GruntThroneF5Lost::
# 3786 "data/maps/Colchis/scripts.pory"
	.string "Ouyay allshay aypay.$"

Colchis_Text_GruntThroneF5Post::
# 3790 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay ogay onay.$"

Colchis_Text_GruntThroneF6Fight::
# 3797 "data/maps/Colchis/scripts.pory"
	.string "At'sway isthay? Owhay idday ouyay\n"
	.string "escapeay omfray isonpray?$"

Colchis_Text_GruntThroneF6Lost::
# 3801 "data/maps/Colchis/scripts.pory"
	.string "Owhay etlay isthay admanmay ooselay?$"

Colchis_Text_GruntThroneF6Post::
# 3805 "data/maps/Colchis/scripts.pory"
	.string "Oundsay ethay alarmay!$"

Colchis_Text_GruntThroneM1Fight::
# 3812 "data/maps/Colchis/scripts.pory"
	.string "Itnessway ethay owerpay ofay ethay\n"
	.string "oyalray uardgay!$"

Colchis_Text_GruntThroneM1Lost::
# 3816 "data/maps/Colchis/scripts.pory"
	.string "Ethay irstfay, anday astlay, osslay\n"
	.string "ofay ethay oyalray uardgay.$"

Colchis_Text_GruntThroneM1Post::
# 3820 "data/maps/Colchis/scripts.pory"
	.string "Ouyay isrespectday ethay oyalray\n"
	.string "Olchiscay Onethray.$"

Colchis_Text_GruntThroneM2Fight::
# 3827 "data/maps/Colchis/scripts.pory"
	.string "Ymay olesay urposepay inay ife'slay\n"
	.string "otay opstay ouyay erehay.$"

Colchis_Text_GruntThroneM2Lost::
# 3831 "data/maps/Colchis/scripts.pory"
	.string "Owhay ouldcay Iay oselay?$"

Colchis_Text_GruntThroneM2Post::
# 3835 "data/maps/Colchis/scripts.pory"
	.string "Atwhay useay isay ymay ifelay ownay?$"

Colchis_Text_GruntThroneM3Fight::
# 3842 "data/maps/Colchis/scripts.pory"
	.string "Ethay ingkay isay oodgay, ereforethay\n"
	.string "ouyay ustmay ebab adbay.$"

Colchis_Text_GruntThroneM3Lost::
# 3846 "data/maps/Colchis/scripts.pory"
	.string "Ereforethay eitheray engthstray isay,\n"
	.string "oray Iay amay, adbay.$"

Colchis_Text_GruntThroneM3Post::
# 3850 "data/maps/Colchis/scripts.pory"
	.string "Ifay evilay insway enthay atefay isay\n"
	.string "adbay oray indblay.$"

Colchis_Text_GruntThroneM4Fight::
# 3857 "data/maps/Colchis/scripts.pory"
	.string "Ebellionray inay Olchiscay Ingdomkay\n"
	.string "endsay erehay.$"

Colchis_Text_GruntThroneM4Lost::
# 3861 "data/maps/Colchis/scripts.pory"
	.string "Eholdbay ethay ancientay egimeray\n"
	.string "iesday odaytay.$"

Colchis_Text_GruntThroneM4Post::
# 3865 "data/maps/Colchis/scripts.pory"
	.string "Aymay Ohay-Ohay anday Ugialay avesay\n"
	.string "ouray oulssay!$"

Colchis_Text_GruntThroneM5Fight::
# 3872 "data/maps/Colchis/scripts.pory"
	.string "Andstay ownday!$"

Colchis_Text_GruntThroneM5Lost::
# 3876 "data/maps/Colchis/scripts.pory"
	.string "I'veay eenbray oughtbray otay\n"
	.string "attenday efeatday.$"

Colchis_Text_GruntThroneM5Post::
# 3880 "data/maps/Colchis/scripts.pory"
	.string "I'llay ebay eheadedbay orfay ailingfay\n"
	.string "ymay ingkay!$"

Colchis_Text_GruntThroneM6Fight::
# 3887 "data/maps/Colchis/scripts.pory"
	.string "Owhay areday ouyay ingbray arway\n"
	.string "uponay ouray ing'skay eacepay?$"

Colchis_Text_GruntThroneM6Lost::
# 3891 "data/maps/Colchis/scripts.pory"
	.string "Ethay onglay eacepay ofay Olchiscay\n"
	.string "omescay otay anay enday.$"

Colchis_Text_GruntThroneM6Post::
# 3895 "data/maps/Colchis/scripts.pory"
	.string "Aay arway, afteray it'say oncievedcay,\n"
	.string "isay ardhay otay illkay.$"

Colchis_Text_JasonExeunt::
# 3899 "data/maps/Colchis/scripts.pory"
	.string "Let's go. Medea, show us the way out.$"
