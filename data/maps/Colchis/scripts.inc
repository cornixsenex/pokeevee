Colchis_MapScripts::
# 111 "data//maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 132 "data//maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 149 "data//maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME
# 163 "data//maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 112 "data//maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 115 "data//maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 118 "data//maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 11
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 121 "data//maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 124 "data//maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 17
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 127 "data//maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
	return

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 113 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_ShowIntro
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 116 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SetupJail
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 119 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_ShowJasonAndMedeaAtSanctuary
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 122 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SetupLostKid
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 121 "data//maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 125 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_ShowNannyWithGuard
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 128 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
# 133 "data//maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 133 "data//maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 17
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_2
Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 136 "data//maps/Colchis/scripts.pory"
	goto_if_set FLAG_TEMP_A, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_7
Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 139 "data//maps/Colchis/scripts.pory"
	goto_if_set FLAG_TEMP_B, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_10
Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 142 "data//maps/Colchis/scripts.pory"
	goto_if_set FLAG_TEMP_C, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_12
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 134 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
	goto Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 137 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_OpenJail1
	goto Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_6

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 140 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_OpenJail2
	goto Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_9

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 143 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_OpenJail3
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME:
# 151 "data//maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_MAREEP, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2
Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 156 "data//maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 152 "data//maps/Colchis/scripts.pory"
	hideobjectat 2, MAP_COLCHIS
# 153 "data//maps/Colchis/scripts.pory"
	removeobject 2
	goto Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 157 "data//maps/Colchis/scripts.pory"
	hideobjectat 1, MAP_COLCHIS
# 158 "data//maps/Colchis/scripts.pory"
	removeobject 1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 164 "data//maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
# 166 "data//maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_WarpSanctum::
# 174 "data//maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 175 "data//maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 34, 56
	end


Colchis_TempScript_SetupTestMedeaDance::
# 180 "data//maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 181 "data//maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 186 "data//maps/Colchis/scripts.pory"
	lockall
# 187 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 188 "data//maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_ShowIntro::
# 193 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 54, 11, 59
# 194 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 196 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 4, 51, 14
# 197 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	end


Colchis_Script_SetupJail::
# 203 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 204 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
	end


Colchis_Script_ShowJasonAndMedeaAtSanctuary::
# 209 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 210 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 211 "data//maps/Colchis/scripts.pory"
	addobject 54
# 212 "data//maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 214 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 215 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 216 "data//maps/Colchis/scripts.pory"
	addobject 4
# 217 "data//maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 223 "data//maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 224 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 225 "data//maps/Colchis/scripts.pory"
	closemessage
# 226 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 233 "data//maps/Colchis/scripts.pory"
	lockall
# 235 "data//maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 237 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 238 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 239 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 240 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 241 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 242 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 245 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 246 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 247 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 250 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 251 "data//maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 252 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 257 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 258 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 259 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 262 "data//maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 263 "data//maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 264 "data//maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 265 "data//maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 266 "data//maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 267 "data//maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 268 "data//maps/Colchis/scripts.pory"
	waitmovement 28
# 269 "data//maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 270 "data//maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 271 "data//maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 272 "data//maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 273 "data//maps/Colchis/scripts.pory"
	waitmovement 28
# 274 "data//maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 275 "data//maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 276 "data//maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 277 "data//maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 278 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 281 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 282 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 283 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 284 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 285 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 286 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 287 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 288 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 289 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 290 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 291 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 292 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 293 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 296 "data//maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 297 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 298 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 301 "data//maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 302 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 303 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 307 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 308 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 309 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 310 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 311 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 312 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 313 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 314 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 315 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 316 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 318 "data//maps/Colchis/scripts.pory"
	closemessage
# 320 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 327 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 328 "data//maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 329 "data//maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 330 "data//maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 331 "data//maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 332 "data//maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 333 "data//maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 334 "data//maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 335 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 338 "data//maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 339 "data//maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 340 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 342 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 343 "data//maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 344 "data//maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 345 "data//maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 346 "data//maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 347 "data//maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 348 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 352 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 358 "data//maps/Colchis/scripts.pory"
	lockall
# 359 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 361 "data//maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 368 "data//maps/Colchis/scripts.pory"
	removeobject 23
# 369 "data//maps/Colchis/scripts.pory"
	removeobject 24
# 370 "data//maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 372 "data//maps/Colchis/scripts.pory"
	addobject 23
# 373 "data//maps/Colchis/scripts.pory"
	addobject 24
# 375 "data//maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 376 "data//maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 380 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 381 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 383 "data//maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 384 "data//maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 385 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 388 "data//maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 389 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPre, MSGBOX_DEFAULT
# 390 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 391 "data//maps/Colchis/scripts.pory"
	closemessage
# 394 "data//maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 395 "data//maps/Colchis/scripts.pory"
	switch VAR_RESULT
# 396 "data//maps/Colchis/scripts.pory"
	case 1, Colchis_Script_DoForcedBattle_3
# 398 "data//maps/Colchis/scripts.pory"
	case 2, Colchis_Script_DoForcedBattle_4
# 400 "data//maps/Colchis/scripts.pory"
	case 3, Colchis_Script_DoForcedBattle_5
# 402 "data//maps/Colchis/scripts.pory"
	case 4, Colchis_Script_DoForcedBattle_6
# 404 "data//maps/Colchis/scripts.pory"
	case 5, Colchis_Script_DoForcedBattle_7
# 406 "data//maps/Colchis/scripts.pory"
	case 6, Colchis_Script_DoForcedBattle_8
# 408 "data//maps/Colchis/scripts.pory"
	case 7, Colchis_Script_DoForcedBattle_9
# 410 "data//maps/Colchis/scripts.pory"
	case 8, Colchis_Script_DoForcedBattle_10
# 412 "data//maps/Colchis/scripts.pory"
	case 9, Colchis_Script_DoForcedBattle_11
# 415 "data//maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_1, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_6, BigIslandS_Text_IgnisGrunt2Lost
Colchis_Script_DoForcedBattle_1:
# 419 "data//maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 420 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPost, MSGBOX_DEFAULT
# 421 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 422 "data//maps/Colchis/scripts.pory"
	closemessage
# 425 "data//maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleExitA
# 426 "data//maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleExitB
# 427 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 430 "data//maps/Colchis/scripts.pory"
	removeobject 23
# 431 "data//maps/Colchis/scripts.pory"
	removeobject 24
# 433 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 23, 0, 0
# 434 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 24, 2, 0
# 436 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_FACE_DOWN
# 437 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_UP
# 439 "data//maps/Colchis/scripts.pory"
	addobject 23
# 440 "data//maps/Colchis/scripts.pory"
	addobject 24
# 442 "data//maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 443 "data//maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
	return

Colchis_Script_DoForcedBattle_3:
# 397 "data//maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_1, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_4:
# 399 "data//maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_1, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_4, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_5:
# 401 "data//maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_1, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_6, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_6:
# 403 "data//maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_7:
# 405 "data//maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_4, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_8:
# 407 "data//maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_6, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_9:
# 409 "data//maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_5, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_10:
# 411 "data//maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_5, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_4, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1

Colchis_Script_DoForcedBattle_11:
# 413 "data//maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_5, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_6, BigIslandS_Text_IgnisGrunt2Lost
	goto Colchis_Script_DoForcedBattle_1


Colchis_Script_MedeaDance::
# 453 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 454 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 455 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 457 "data//maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 458 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 459 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 464 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 465 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 466 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 467 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 468 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 469 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 470 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 471 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 472 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 473 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 474 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 475 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 476 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 477 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 478 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 479 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 480 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 481 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 490 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 491 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 492 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 493 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 494 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 495 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 496 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 498 "data//maps/Colchis/scripts.pory"
	waitmovement 11
# 500 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 501 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 502 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 504 "data//maps/Colchis/scripts.pory"
	waitmovement 11
# 506 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 507 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 508 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 510 "data//maps/Colchis/scripts.pory"
	waitmovement 13
# 516 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 517 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 518 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 519 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 520 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 521 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 522 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 524 "data//maps/Colchis/scripts.pory"
	waitmovement 13
# 526 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 527 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 528 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 529 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 530 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 532 "data//maps/Colchis/scripts.pory"
	waitmovement 13
# 534 "data//maps/Colchis/scripts.pory"
	delay 25
# 536 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 537 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 538 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 539 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 540 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 542 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 549 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 550 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 551 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 552 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 553 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 554 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 555 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 557 "data//maps/Colchis/scripts.pory"
	waitmovement 4
# 559 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 560 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 561 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 562 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 563 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 564 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 566 "data//maps/Colchis/scripts.pory"
	waitmovement 4
# 568 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 569 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 570 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 571 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 572 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 574 "data//maps/Colchis/scripts.pory"
	waitmovement 4
# 576 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 577 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 578 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 579 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 580 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 582 "data//maps/Colchis/scripts.pory"
	waitmovement 4
# 584 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 585 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 586 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 587 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 588 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 590 "data//maps/Colchis/scripts.pory"
	waitmovement 4
# 592 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 593 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 594 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 595 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 596 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 598 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 604 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 605 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 606 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 607 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 608 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 609 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 610 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 612 "data//maps/Colchis/scripts.pory"
	waitmovement 4
# 614 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 615 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 616 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 617 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 618 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 620 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 626 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 632 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 633 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 634 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 635 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 636 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 637 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 638 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 640 "data//maps/Colchis/scripts.pory"
	waitmovement 4
# 645 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 651 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 652 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 653 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 654 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 655 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 656 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 657 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 659 "data//maps/Colchis/scripts.pory"
	waitmovement 4
# 665 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 668 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 676 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 677 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 678 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 679 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 680 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 681 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 682 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 684 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 686 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 687 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 688 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 689 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 690 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 691 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 692 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 694 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 699 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 703 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 704 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 705 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 706 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 707 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 708 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 709 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 711 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 713 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 714 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 715 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 716 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 717 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 718 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 719 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 721 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 723 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 727 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 728 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 729 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 730 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 731 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 732 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 733 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 735 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 737 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 738 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 739 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 740 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 741 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 742 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 743 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 745 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 747 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 751 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 752 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 753 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 754 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 755 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 756 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 757 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 759 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 761 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 762 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 763 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 764 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 765 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 766 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 767 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 769 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 771 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 780 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 781 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 782 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 783 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 784 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 785 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 786 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 787 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 789 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 791 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 793 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 794 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 795 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 796 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 797 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 798 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 799 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 800 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 802 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 804 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 806 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 807 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 808 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 809 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 810 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 811 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 812 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 813 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 815 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 817 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 823 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 824 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 825 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 826 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 827 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 828 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 829 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 830 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 832 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 833 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 835 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 836 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 839 "data//maps/Colchis/scripts.pory"
	delay 25
# 843 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 844 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 848 "data//maps/Colchis/scripts.pory"
	delay 25
# 850 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 851 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 855 "data//maps/Colchis/scripts.pory"
	delay 25
# 857 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 858 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 862 "data//maps/Colchis/scripts.pory"
	delay 25
# 864 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 865 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 866 "data//maps/Colchis/scripts.pory"
	delay 25
# 871 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 872 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 873 "data//maps/Colchis/scripts.pory"
	delay 25
# 875 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 876 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 877 "data//maps/Colchis/scripts.pory"
	delay 25
# 882 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 883 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 884 "data//maps/Colchis/scripts.pory"
	delay 25
# 886 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 887 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 888 "data//maps/Colchis/scripts.pory"
	delay 25
# 890 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 891 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 892 "data//maps/Colchis/scripts.pory"
	delay 25
# 894 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 895 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 896 "data//maps/Colchis/scripts.pory"
	delay 25
# 901 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 902 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 903 "data//maps/Colchis/scripts.pory"
	delay 25
# 905 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 906 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 907 "data//maps/Colchis/scripts.pory"
	delay 25
# 909 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 910 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 911 "data//maps/Colchis/scripts.pory"
	delay 25
# 913 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 914 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 915 "data//maps/Colchis/scripts.pory"
	delay 25
# 917 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 919 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 920 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 921 "data//maps/Colchis/scripts.pory"
	delay 25
# 926 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 927 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 928 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 929 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 930 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 931 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 932 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 933 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 935 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 944 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 945 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 946 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 947 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 948 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 949 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 950 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 951 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 952 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 957 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 958 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 959 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 960 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 961 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 962 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 963 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 964 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 965 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 970 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 971 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 972 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 973 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 974 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 975 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 976 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 977 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 978 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 983 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 984 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 985 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 986 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 987 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 988 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 989 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 990 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 991 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 996 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 997 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 998 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 999 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 1000 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 1001 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 1002 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 1003 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 1004 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 1009 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1010 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1011 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1012 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1013 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1014 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1015 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1016 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1017 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 1022 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1023 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1024 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 1025 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 1026 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 1027 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 1028 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 1029 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 1030 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 1035 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1036 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1037 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1038 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1039 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1040 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1041 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1042 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1043 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 1048 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1049 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1050 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 1051 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 1052 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 1053 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 1054 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 1055 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 1056 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 1058 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1059 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1060 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1061 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1062 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1063 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1064 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1065 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1066 "data//maps/Colchis/scripts.pory"
	waitmovement 16
# 1068 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1069 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1070 "data//maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 1071 "data//maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 1072 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1073 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1074 "data//maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1075 "data//maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1076 "data//maps/Colchis/scripts.pory"
	waitmovement 4
# 1078 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1079 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1080 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1081 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1082 "data//maps/Colchis/scripts.pory"
	waitmovement 4
# 1084 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1085 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1086 "data//maps/Colchis/scripts.pory"
	waitmovement 4
# 1091 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1092 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1094 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1096 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1102 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1103 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1104 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1105 "data//maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1106 "data//maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1107 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1108 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1109 "data//maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1114 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1115 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1116 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1117 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1118 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1119 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1120 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1121 "data//maps/Colchis/scripts.pory"
	waitmovement 13
# 1122 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1123 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1124 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1125 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1126 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1127 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1128 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1129 "data//maps/Colchis/scripts.pory"
	waitmovement 13
# 1130 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1135 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1136 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1137 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1138 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1139 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1140 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1141 "data//maps/Colchis/scripts.pory"
	waitmovement 13
# 1142 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1143 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1144 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1145 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1146 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1147 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1148 "data//maps/Colchis/scripts.pory"
	waitmovement 13
# 1149 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1150 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1151 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1152 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1153 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1154 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1155 "data//maps/Colchis/scripts.pory"
	waitmovement 13
# 1156 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1157 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1158 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1159 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1160 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1161 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1162 "data//maps/Colchis/scripts.pory"
	waitmovement 13
# 1163 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1164 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1165 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1166 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1167 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1168 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1169 "data//maps/Colchis/scripts.pory"
	waitmovement 13
# 1170 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1171 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1172 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1173 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1174 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1175 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1176 "data//maps/Colchis/scripts.pory"
	waitmovement 13
# 1177 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1178 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1179 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1180 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1181 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1182 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1183 "data//maps/Colchis/scripts.pory"
	waitmovement 13
# 1184 "data//maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1185 "data//maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1186 "data//maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1187 "data//maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1188 "data//maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1189 "data//maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1190 "data//maps/Colchis/scripts.pory"
	waitmovement 13
# 1191 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1202 "data//maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1203 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1204 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1209 "data//maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1210 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1211 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1212 "data//maps/Colchis/scripts.pory"
	closemessage
# 1214 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1218 "data//maps/Colchis/scripts.pory"
	removeobject 54
# 1219 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1220 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1221 "data//maps/Colchis/scripts.pory"
	addobject 54
# 1222 "data//maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1224 "data//maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1225 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1226 "data//maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1228 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1229 "data//maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1230 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1231 "data//maps/Colchis/scripts.pory"
	waitmovement 54
# 1239 "data//maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1240 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1241 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1246 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1247 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1248 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1255 "data//maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1256 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1257 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1261 "data//maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1262 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1263 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1272 "data//maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1273 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1274 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1275 "data//maps/Colchis/scripts.pory"
	closemessage
# 1278 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1279 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1280 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1289 "data//maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1290 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1291 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1296 "data//maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1297 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1298 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1301 "data//maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1302 "data//maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1303 "data//maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1304 "data//maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1305 "data//maps/Colchis/scripts.pory"
	waitmovement 5
# 1309 "data//maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1310 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1311 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1315 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1316 "data//maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1317 "data//maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1319 "data//maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1320 "data//maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1321 "data//maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1325 "data//maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1326 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1328 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1329 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1335 "data//maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1336 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1337 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1338 "data//maps/Colchis/scripts.pory"
	closemessage
# 1341 "data//maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1342 "data//maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1345 "data//maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1346 "data//maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1354 "data//maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1360 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1361 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1362 "data//maps/Colchis/scripts.pory"
	closemessage
# 1363 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1367 "data//maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1368 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1371 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1372 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1373 "data//maps/Colchis/scripts.pory"
	closemessage
# 1374 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1377 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1378 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1379 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1380 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1383 "data//maps/Colchis/scripts.pory"
	removeobject 4
# 1384 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1385 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1386 "data//maps/Colchis/scripts.pory"
	addobject 4
# 1387 "data//maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1390 "data//maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1391 "data//maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1392 "data//maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1393 "data//maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1394 "data//maps/Colchis/scripts.pory"
	delay 30
# 1395 "data//maps/Colchis/scripts.pory"
	waitse
# 1398 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonApproachPlayer
# 1399 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1402 "data//maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1403 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1404 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1407 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1408 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1409 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1412 "data//maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1413 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1414 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1417 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1418 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1419 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1422 "data//maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1423 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1424 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1426 "data//maps/Colchis/scripts.pory"
	closemessage
# 1429 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1430 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1433 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1434 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1435 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1436 "data//maps/Colchis/scripts.pory"
	closemessage
# 1439 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1440 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1443 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1444 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1445 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1448 "data//maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1449 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1450 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1452 "data//maps/Colchis/scripts.pory"
	closemessage
# 1456 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonExit
# 1457 "data//maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonExit
# 1458 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerPrisonExit
# 1459 "data//maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1461 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1469 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1470 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1473 "data//maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1474 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1475 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1477 "data//maps/Colchis/scripts.pory"
	closemessage
# 1480 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1481 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1484 "data//maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1485 "data//maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1486 "data//maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1487 "data//maps/Colchis/scripts.pory"
	removeobject 19
# 1488 "data//maps/Colchis/scripts.pory"
	removeobject 20
# 1491 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1492 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 1
# 1493 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1494 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 1
# 1497 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1498 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1501 "data//maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1502 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1503 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1506 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1507 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1508 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1511 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1512 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1515 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1516 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1517 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1519 "data//maps/Colchis/scripts.pory"
	closemessage
# 1522 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1523 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1526 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1527 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1529 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1530 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1532 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1533 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1535 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1536 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1537 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1540 "data//maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1541 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1542 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1543 "data//maps/Colchis/scripts.pory"
	closemessage
# 1546 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1547 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1550 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1551 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1554 "data//maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1557 "data//maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_B
# 1571 "data//maps/Colchis/scripts.pory"
	removeobject 54
# 1572 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1573 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1574 "data//maps/Colchis/scripts.pory"
	addobject 54
# 1575 "data//maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1577 "data//maps/Colchis/scripts.pory"
	removeobject 4
# 1578 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1579 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1580 "data//maps/Colchis/scripts.pory"
	addobject 4
# 1581 "data//maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1583 "data//maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_LugiaTest::
# 1589 "data//maps/Colchis/scripts.pory"
	lockall
# 1590 "data//maps/Colchis/scripts.pory"
	faceplayer
# 1591 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1592 "data//maps/Colchis/scripts.pory"
	closemessage
# 1593 "data//maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_Lugia::
# 1598 "data//maps/Colchis/scripts.pory"
	lockall
# 1599 "data//maps/Colchis/scripts.pory"
	faceplayer
# 1600 "data//maps/Colchis/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 1601 "data//maps/Colchis/scripts.pory"
	waitmoncry
# 1602 "data//maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_LUGIA
# 1603 "data//maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1604 "data//maps/Colchis/scripts.pory"
	setwildbattle SPECIES_LUGIA, 18
# 1605 "data//maps/Colchis/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1606 "data//maps/Colchis/scripts.pory"
	waitstate
# 1607 "data//maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1608 "data//maps/Colchis/scripts.pory"
	removeobject 1
# 1609 "data//maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTriggerA::
# 1615 "data//maps/Colchis/scripts.pory"
	lockall
# 1616 "data//maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 0
# 1617 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTriggerB::
# 1621 "data//maps/Colchis/scripts.pory"
	lockall
# 1622 "data//maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 1
# 1623 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTrigger::
# 1628 "data//maps/Colchis/scripts.pory"
	lockall
# 1631 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1632 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1633 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1634 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1635 "data//maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1636 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1639 "data//maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_4
Colchis_Script_SanctumTrigger_3:
# 1643 "data//maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 12
# 1645 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerEndIntro
# 1647 "data//maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_7
# 1666 "data//maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_8
# 1688 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1689 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1690 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
# 1691 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
Colchis_Script_SanctumTrigger_1:
# 1694 "data//maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_SanctumTrigger_2:
# 1640 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_4:
# 1639 "data//maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_2
	goto Colchis_Script_SanctumTrigger_3

Colchis_Script_SanctumTrigger_7:
# 1650 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1653 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1657 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_8:
# 1667 "data//maps/Colchis/scripts.pory"
	closemessage
# 1669 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1670 "data//maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumTrigger_12
# 1675 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1676 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1678 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1679 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumWilds, MSGBOX_DEFAULT
# 1680 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1685 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_12:
# 1672 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_Exeunt
	goto Colchis_Script_SanctumTrigger_1


Colchis_Script_SanctumTriggerReturn::
# 1699 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1700 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger1, MSGBOX_DEFAULT
# 1701 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1703 "data//maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1704 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger1, MSGBOX_DEFAULT
# 1705 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1707 "data//maps/Colchis/scripts.pory"
	closemessage
# 1710 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1711 "data//maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_SanctumTriggerEndIntro::
# 1717 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1718 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1719 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumTriggerMedeaExit::
# 1724 "data//maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1725 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger2, MSGBOX_DEFAULT
# 1726 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1727 "data//maps/Colchis/scripts.pory"
	closemessage
# 1728 "data//maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTriggerMedeaExit_2
# 1731 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3B
Colchis_Script_SanctumTriggerMedeaExit_1:
# 1733 "data//maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumTriggerMedeaExit_2:
# 1729 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3A
	goto Colchis_Script_SanctumTriggerMedeaExit_1


Colchis_Script_LugiaChaseTrigger::
# 1738 "data//maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1739 "data//maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaChaseTrigger_2
Colchis_Script_LugiaChaseTrigger_1:
	end

Colchis_Script_LugiaChaseTrigger_2:
# 1740 "data//maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	goto Colchis_Script_LugiaChaseTrigger_1


Colchis_Script_LugiaWanderTrigger::
# 1746 "data//maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1747 "data//maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaWanderTrigger_2
Colchis_Script_LugiaWanderTrigger_1:
	end

Colchis_Script_LugiaWanderTrigger_2:
# 1748 "data//maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	goto Colchis_Script_LugiaWanderTrigger_1


Colchis_Script_ShinyMareep::
# 1754 "data//maps/Colchis/scripts.pory"
	lockall
# 1755 "data//maps/Colchis/scripts.pory"
	faceplayer
# 1756 "data//maps/Colchis/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 1757 "data//maps/Colchis/scripts.pory"
	waitmoncry
# 1758 "data//maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1759 "data//maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1760 "data//maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1761 "data//maps/Colchis/scripts.pory"
	waitstate
# 1762 "data//maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1763 "data//maps/Colchis/scripts.pory"
	removeobject 2
# 1764 "data//maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumApproachJason::
# 1769 "data//maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumApproachJason_2
# 1772 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3B
Colchis_Script_SanctumApproachJason_1:
# 1774 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1776 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1777 "data//maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumApproachJason_2:
# 1770 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3A
	goto Colchis_Script_SanctumApproachJason_1


Colchis_Script_SanctumJasonBattle::
# 1783 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1784 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1786 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1787 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger3, MSGBOX_DEFAULT
# 1788 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1789 "data//maps/Colchis/scripts.pory"
	closemessage
# 1791 "data//maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_JASON, Colchis_Text_JasonLost
# 1793 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1794 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPost, MSGBOX_DEFAULT
# 1795 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumMedeaReturn::
# 1802 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1803 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1804 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1806 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1807 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1808 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1811 "data//maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1812 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumMedeaReturn_Text_0, MSGBOX_DEFAULT
# 1813 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1814 "data//maps/Colchis/scripts.pory"
	closemessage
# 1817 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn
# 1818 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1821 "data//maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1822 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn1, MSGBOX_DEFAULT
# 1823 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1824 "data//maps/Colchis/scripts.pory"
	closemessage
# 1827 "data//maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumMedeaReturn_2
# 1830 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2B
Colchis_Script_SanctumMedeaReturn_1:
# 1832 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1834 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1835 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1838 "data//maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1839 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn2, MSGBOX_DEFAULT
# 1840 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1841 "data//maps/Colchis/scripts.pory"
	closemessage
# 1846 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1847 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn1, MSGBOX_DEFAULT
# 1848 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1852 "data//maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumMedeaReturn_6
Colchis_Script_SanctumMedeaReturn_5:
# 1862 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	return

Colchis_Script_SanctumMedeaReturn_2:
# 1828 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2A
	goto Colchis_Script_SanctumMedeaReturn_1

Colchis_Script_SanctumMedeaReturn_6:
# 1853 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1854 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1855 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1856 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn2, MSGBOX_DEFAULT
# 1857 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1858 "data//maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1859 "data//maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_SanctumMedeaReturn_5


Colchis_Script_SanctumJasonCheckMareep::
# 1869 "data//maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, IsShinyMareepInParty
# 1871 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_2
# 1876 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1877 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonGiveMeMareep, MSGBOX_DEFAULT
# 1878 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1880 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GiveJasonMareep, MSGBOX_YESNO
# 1882 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_5
# 1886 "data//maps/Colchis/scripts.pory"
	special ChoosePartyMon
# 1887 "data//maps/Colchis/scripts.pory"
	waitstate
# 1889 "data//maps/Colchis/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_8
# 1893 "data//maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1895 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, SPECIES_MAREEP
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_11
# 1899 "data//maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonIsShiny
# 1901 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_14
# 1905 "data//maps/Colchis/scripts.pory"
	special BufferMonNickname
# 1906 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GaveShinyMareep, MSGBOX_DEFAULT
# 1907 "data//maps/Colchis/scripts.pory"
	closemessage
# 1908 "data//maps/Colchis/scripts.pory"
	special ReleaseChosenMon
# 1910 "data//maps/Colchis/scripts.pory"
	setflag FLAG_JASON_HAS_SHINYMAREEP
Colchis_Script_SanctumJasonCheckMareep_1:
	return

Colchis_Script_SanctumJasonCheckMareep_2:
# 1872 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_5:
# 1883 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_8:
# 1890 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_11:
# 1896 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_14:
# 1902 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1


Colchis_Script_SanctumJasonMareep::
# 1923 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumApproachJason
# 1926 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	return


Colchis_Script_Exeunt::
# 1933 "data//maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 14
# 1934 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1935 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonExeunt, MSGBOX_DEFAULT
# 1936 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1937 "data//maps/Colchis/scripts.pory"
	closemessage
# 1939 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_Exeunt
# 1940 "data//maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_Exeunt
# 1941 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_Exeunt
# 1942 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1944 "data//maps/Colchis/scripts.pory"
	warpsilent MAP_BIG_ISLAND_N, 31, 37
	end


Colchis_Script_SetupEscapeFromColchis::
# 1950 "data//maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1951 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumDepart, MSGBOX_DEFAULT
# 1952 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1953 "data//maps/Colchis/scripts.pory"
	closemessage
# 1956 "data//maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAndMedeaExeunt
# 1957 "data//maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_JasonAndMedeaExeunt
# 1958 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 1962 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 54, 14, 0
# 1963 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_INVISIBLE
# 1965 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 4, 15, 0
# 1966 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 1968 "data//maps/Colchis/scripts.pory"
	hideobjectat 54, MAP_COLCHIS
# 1969 "data//maps/Colchis/scripts.pory"
	hideobjectat 4, MAP_COLCHIS
# 1971 "data//maps/Colchis/scripts.pory"
	removeobject 54
# 1972 "data//maps/Colchis/scripts.pory"
	removeobject 4
# 1976 "data//maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_FORCED_BATTLE
# 1979 "data//maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 16
# 1982 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
# 1983 "data//maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1986 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_SetupLostKid
# 1989 "data//maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_TrainerAeetes::
# 2002 "data//maps/Colchis/scripts.pory"
	lockall
# 2003 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2005 "data//maps/Colchis/scripts.pory"
	checktrainerflag TRAINER_AEETES
	goto_if 0, Colchis_Script_TrainerAeetes_2
# 2023 "data//maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 2024 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 2025 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 9
Colchis_Script_TrainerAeetes_1:
# 2027 "data//maps/Colchis/scripts.pory"
	closemessage
# 2028 "data//maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_TrainerAeetes_2:
# 2007 "data//maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 2008 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesIntro, MSGBOX_DEFAULT
# 2009 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 2010 "data//maps/Colchis/scripts.pory"
	closemessage
# 2011 "data//maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_AEETES, Colchis_Text_AeetesLost
# 2012 "data//maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 2013 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesPost, MSGBOX_DEFAULT
# 2014 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 2016 "data//maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_KEY
# 2018 "data//maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 2019 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 2020 "data//maps/Colchis/scripts.pory"
	destroy_field_pic 9
	goto Colchis_Script_TrainerAeetes_1


Colchis_Script_Bed::
# 2033 "data//maps/Colchis/scripts.pory"
	lockall
# 2034 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Bed, MSGBOX_YESNO
# 2035 "data//maps/Colchis/scripts.pory"
	closemessage
# 2036 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Bed_2
Colchis_Script_Bed_1:
# 2039 "data//maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Bed_2:
# 2037 "data//maps/Colchis/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Colchis_Script_Bed_1


Colchis_Script_RingBlocker::
# 2044 "data//maps/Colchis/scripts.pory"
	lockall
# 2045 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2048 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerIntro, MSGBOX_DEFAULT
# 2050 "data//maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_KEY, 1
# 2055 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_RingBlocker_2
# 2086 "data//maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_RingBlocker_1:
# 2090 "data//maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_RingBlocker_2:
# 2056 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerYesNo, MSGBOX_YESNO
# 2057 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_RingBlocker_5
# 2082 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerDecline, MSGBOX_DEFAULT
# 2083 "data//maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_RingBlocker_1

Colchis_Script_RingBlocker_5:
# 2060 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_KeyFits, MSGBOX_DEFAULT
# 2061 "data//maps/Colchis/scripts.pory"
	closemessage
# 2062 "data//maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_KEY
# 2063 "data//maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2065 "data//maps/Colchis/scripts.pory"
	hideobjectat 55, MAP_COLCHIS
# 2066 "data//maps/Colchis/scripts.pory"
	removeobject 55
# 2067 "data//maps/Colchis/scripts.pory"
	hideobjectat 56, MAP_COLCHIS
# 2068 "data//maps/Colchis/scripts.pory"
	removeobject 56
# 2069 "data//maps/Colchis/scripts.pory"
	hideobjectat 57, MAP_COLCHIS
# 2070 "data//maps/Colchis/scripts.pory"
	removeobject 57
# 2072 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 55, MOVEMENT_TYPE_INVISIBLE
# 2073 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 55, 1, 3
# 2074 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 56, MOVEMENT_TYPE_INVISIBLE
# 2075 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 56, 2, 3
# 2076 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 57, MOVEMENT_TYPE_INVISIBLE
# 2077 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 57, 3, 3
# 2079 "data//maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBARRIER
	goto Colchis_Script_RingBlocker_1


Colchis_Script_RingItem::
# 2095 "data//maps/Colchis/scripts.pory"
	lock
# 2096 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2097 "data//maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_RING
# 2098 "data//maps/Colchis/scripts.pory"
	hideobjectat 58, MAP_COLCHIS
# 2099 "data//maps/Colchis/scripts.pory"
	removeobject 58
# 2100 "data//maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBALL
# 2101 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 58, MOVEMENT_TYPE_INVISIBLE
# 2102 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 58, 4, 3
# 2103 "data//maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_CloseDoor::
# 2108 "data//maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2109 "data//maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_OpenJail1::
# 2114 "data//maps/Colchis/scripts.pory"
	setmetatile 9, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2115 "data//maps/Colchis/scripts.pory"
	setmetatile 9, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_OpenJail2::
# 2120 "data//maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2121 "data//maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_OpenJail3::
# 2126 "data//maps/Colchis/scripts.pory"
	setmetatile 27, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2127 "data//maps/Colchis/scripts.pory"
	setmetatile 27, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_SetupLostKid::
# 2132 "data//maps/Colchis/scripts.pory"
	removeobject 49
# 2133 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 49, 28, 12
# 2134 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_LOOK_AROUND
# 2135 "data//maps/Colchis/scripts.pory"
	addobject 49
# 2136 "data//maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	return


Colchis_Script_ShowNannyWithGuard::
# 2141 "data//maps/Colchis/scripts.pory"
	removeobject 30
# 2142 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 30, 7, 50
# 2143 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_LEFT
# 2144 "data//maps/Colchis/scripts.pory"
	addobject 30
# 2145 "data//maps/Colchis/scripts.pory"
	showobjectat 30, MAP_COLCHIS
# 2147 "data//maps/Colchis/scripts.pory"
	removeobject 51
# 2148 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 51, 6, 50
# 2149 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 51, MOVEMENT_TYPE_FACE_RIGHT
# 2150 "data//maps/Colchis/scripts.pory"
	addobject 51
# 2151 "data//maps/Colchis/scripts.pory"
	showobjectat 51, MAP_COLCHIS
	return


Colchis_Script_Chef::
# 2157 "data//maps/Colchis/scripts.pory"
	lockall
# 2158 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2161 "data//maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Chef_2
# 2168 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Movement_ChefIntro, MSGBOX_DEFAULT
# 2169 "data//maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_RING
# 2170 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Chef_5
# 2201 "data//maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Chef_1:
# 2204 "data//maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Chef_2:
# 2162 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefProposal, MSGBOX_DEFAULT
# 2163 "data//maps/Colchis/scripts.pory"
	closemessage
# 2164 "data//maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_FaceRight
# 2165 "data//maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_5:
# 2171 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefRingYesNo, MSGBOX_YESNO
# 2172 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Chef_8
# 2197 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRingNo, MSGBOX_DEFAULT
# 2198 "data//maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_8:
# 2174 "data//maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_RING
# 2175 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRing, MSGBOX_DEFAULT
# 2176 "data//maps/Colchis/scripts.pory"
	closemessage
# 2178 "data//maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_ExclamationMark
# 2179 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 2180 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks1, MSGBOX_DEFAULT
# 2181 "data//maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_APPLE
# 2183 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks2, MSGBOX_DEFAULT
# 2184 "data//maps/Colchis/scripts.pory"
	closemessage
# 2186 "data//maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2187 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Colchis_Script_Chef_12
Colchis_Script_Chef_11:
# 2191 "data//maps/Colchis/scripts.pory"
	applymovement 44, Colchis_Movement_ChefExit
# 2192 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 2194 "data//maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_MOVECHEF
# 2195 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_12:
# 2188 "data//maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_WalkUp
# 2189 "data//maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_11


Colchis_Script_MoveChef::
# 2209 "data//maps/Colchis/scripts.pory"
	removeobject 44
# 2210 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 44, 59, 62
# 2211 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 44, MOVEMENT_TYPE_FACE_RIGHT
# 2212 "data//maps/Colchis/scripts.pory"
	addobject 44
# 2213 "data//maps/Colchis/scripts.pory"
	showobjectat 44, MAP_COLCHIS
# 2215 "data//maps/Colchis/scripts.pory"
	removeobject 37
# 2216 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 37, 60, 62
# 2217 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_LEFT
# 2218 "data//maps/Colchis/scripts.pory"
	addobject 37
# 2219 "data//maps/Colchis/scripts.pory"
	showobjectat 37, MAP_COLCHIS
	return


Colchis_Script_Maid::
# 2225 "data//maps/Colchis/scripts.pory"
	lockall
# 2226 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2227 "data//maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Maid_2
# 2233 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid1, MSGBOX_DEFAULT
# 2234 "data//maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Maid_1:
# 2236 "data//maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Maid_2:
# 2228 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid2, MSGBOX_DEFAULT
# 2229 "data//maps/Colchis/scripts.pory"
	closemessage
# 2230 "data//maps/Colchis/scripts.pory"
	applymovement 37, Common_Movement_FaceLeft
# 2231 "data//maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Maid_1


Colchis_Script_Jailer::
# 2241 "data//maps/Colchis/scripts.pory"
	lockall
# 2242 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2249 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerIntro, MSGBOX_DEFAULT
# 2252 "data//maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_APPLE
# 2253 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Jailer_2
# 2273 "data//maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Jailer_1:
# 2275 "data//maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Jailer_2:
# 2254 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerAppleYesNo, MSGBOX_YESNO
# 2255 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Jailer_5
# 2269 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveAppleNo, MSGBOX_DEFAULT
# 2270 "data//maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1

Colchis_Script_Jailer_5:
# 2256 "data//maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_APPLE
# 2258 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveApple, MSGBOX_DEFAULT
# 2259 "data//maps/Colchis/scripts.pory"
	closemessage
# 2261 "data//maps/Colchis/scripts.pory"
	applymovement 32, Common_Movement_ExclamationMark
# 2262 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 2263 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks1, MSGBOX_DEFAULT
# 2264 "data//maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_JAIL_KEY
# 2266 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks2, MSGBOX_DEFAULT
# 2267 "data//maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1


Colchis_Script_PrisonDoor1::
# 2280 "data//maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Colchis_Script_PrisonDoor1_2
Colchis_Script_PrisonDoor1_1:
	end

Colchis_Script_PrisonDoor1_2:
# 2281 "data//maps/Colchis/scripts.pory"
	lockall
# 2282 "data//maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_JAIL_KEY
# 2283 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_PrisonDoor1_5
# 2300 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorClosed, MSGBOX_DEFAULT
# 2301 "data//maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_PrisonDoor1_4:
# 2303 "data//maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor1_1

Colchis_Script_PrisonDoor1_5:
# 2285 "data//maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_A
# 2287 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2288 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 2290 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2291 "data//maps/Colchis/scripts.pory"
	closemessage
# 2293 "data//maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2294 "data//maps/Colchis/scripts.pory"
	setmetatile 9, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2295 "data//maps/Colchis/scripts.pory"
	setmetatile 9, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2296 "data//maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2297 "data//maps/Colchis/scripts.pory"
	delay 30
# 2298 "data//maps/Colchis/scripts.pory"
	waitse
	goto Colchis_Script_PrisonDoor1_4


Colchis_Script_PrisonDoor2::
# 2309 "data//maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_B, Colchis_Script_PrisonDoor2_2
Colchis_Script_PrisonDoor2_1:
	end

Colchis_Script_PrisonDoor2_2:
# 2310 "data//maps/Colchis/scripts.pory"
	lockall
# 2311 "data//maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_JAIL_KEY
# 2312 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_PrisonDoor2_5
# 2329 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorClosed, MSGBOX_DEFAULT
# 2330 "data//maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_PrisonDoor2_4:
# 2332 "data//maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor2_1

Colchis_Script_PrisonDoor2_5:
# 2314 "data//maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_B
# 2316 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2317 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 2319 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2320 "data//maps/Colchis/scripts.pory"
	closemessage
# 2322 "data//maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2323 "data//maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2324 "data//maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2325 "data//maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2326 "data//maps/Colchis/scripts.pory"
	delay 30
# 2327 "data//maps/Colchis/scripts.pory"
	waitse
	goto Colchis_Script_PrisonDoor2_4


Colchis_Script_PrisonDoor3::
# 2338 "data//maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_C, Colchis_Script_PrisonDoor3_2
Colchis_Script_PrisonDoor3_1:
	end

Colchis_Script_PrisonDoor3_2:
# 2339 "data//maps/Colchis/scripts.pory"
	lockall
# 2340 "data//maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_JAIL_KEY
# 2341 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_PrisonDoor3_5
# 2358 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorClosed, MSGBOX_DEFAULT
# 2359 "data//maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_PrisonDoor3_4:
# 2361 "data//maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor3_1

Colchis_Script_PrisonDoor3_5:
# 2343 "data//maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_C
# 2345 "data//maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2346 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 2348 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2349 "data//maps/Colchis/scripts.pory"
	closemessage
# 2351 "data//maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2352 "data//maps/Colchis/scripts.pory"
	setmetatile 27, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2353 "data//maps/Colchis/scripts.pory"
	setmetatile 27, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2354 "data//maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2355 "data//maps/Colchis/scripts.pory"
	delay 30
# 2356 "data//maps/Colchis/scripts.pory"
	waitse
	goto Colchis_Script_PrisonDoor3_4


Colchis_Script_LostKid::
# 2367 "data//maps/Colchis/scripts.pory"
	lockall
# 2368 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2370 "data//maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_LostKid_2
# 2394 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid2, MSGBOX_DEFAULT
# 2395 "data//maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_LostKid_1:
# 2397 "data//maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_LostKid_2:
# 2371 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid1, MSGBOX_DEFAULT
# 2372 "data//maps/Colchis/scripts.pory"
	closemessage
# 2373 "data//maps/Colchis/scripts.pory"
	special GetPlayerFacingDirection
# 2374 "data//maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Colchis_Script_LostKid_6
# 2377 "data//maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit2
Colchis_Script_LostKid_5:
# 2379 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 2381 "data//maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_RETURN_LOSTKID
# 2383 "data//maps/Colchis/scripts.pory"
	removeobject 49
# 2384 "data//maps/Colchis/scripts.pory"
	setobjectxyperm 49, 5, 46
# 2385 "data//maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_WANDER_AROUND
# 2386 "data//maps/Colchis/scripts.pory"
	addobject 49
# 2387 "data//maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
# 2389 "data//maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 17
# 2390 "data//maps/Colchis/scripts.pory"
	call Colchis_Script_ShowNannyWithGuard
	goto Colchis_Script_LostKid_1

Colchis_Script_LostKid_6:
# 2375 "data//maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit1
	goto Colchis_Script_LostKid_5


Colchis_Script_DoorMan::
# 2402 "data//maps/Colchis/scripts.pory"
	lockall
# 2403 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2406 "data//maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_DoorMan_2
# 2411 "data//maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 18
	goto_if_ne Colchis_Script_DoorMan_6
# 2419 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman3, MSGBOX_DEFAULT
# 2420 "data//maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_DoorMan_5:
# 2422 "data//maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceRight
Colchis_Script_DoorMan_1:
# 2424 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 2425 "data//maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_DoorMan_2:
# 2407 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman1, MSGBOX_DEFAULT
# 2408 "data//maps/Colchis/scripts.pory"
	closemessage
# 2409 "data//maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceDown
	goto Colchis_Script_DoorMan_1

Colchis_Script_DoorMan_6:
# 2412 "data//maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 18
# 2413 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman2, MSGBOX_DEFAULT
# 2414 "data//maps/Colchis/scripts.pory"
	closemessage
# 2415 "data//maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_DoorOpen_Left, FALSE
# 2416 "data//maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_DoorOpen_Right, FALSE
# 2417 "data//maps/Colchis/scripts.pory"
	special DrawWholeMapView
	goto Colchis_Script_DoorMan_5


Colchis_Script_Nanny::
# 2431 "data//maps/Colchis/scripts.pory"
	lock
# 2432 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2433 "data//maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_Script_Nanny_2
# 2437 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny2, MSGBOX_DEFAULT
# 2438 "data//maps/Colchis/scripts.pory"
	closemessage
# 2439 "data//maps/Colchis/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 2440 "data//maps/Colchis/scripts.pory"
	waitmovement 0
Colchis_Script_Nanny_1:
# 2442 "data//maps/Colchis/scripts.pory"
	release
	end

Colchis_Script_Nanny_2:
# 2434 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny1, MSGBOX_DEFAULT
# 2435 "data//maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Nanny_1


Colchis_Script_GruntBreak::
# 2447 "data//maps/Colchis/scripts.pory"
	lockall
# 2448 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2449 "data//maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 2450 "data//maps/Colchis/scripts.pory"
	switch VAR_RESULT
# 2451 "data//maps/Colchis/scripts.pory"
	case 1, Colchis_Script_GruntBreak_3
# 2453 "data//maps/Colchis/scripts.pory"
	case 2, Colchis_Script_GruntBreak_4
# 2455 "data//maps/Colchis/scripts.pory"
	case 3, Colchis_Script_GruntBreak_5
# 2457 "data//maps/Colchis/scripts.pory"
	case 4, Colchis_Script_GruntBreak_6
# 2459 "data//maps/Colchis/scripts.pory"
	case 5, Colchis_Script_GruntBreak_7
# 2461 "data//maps/Colchis/scripts.pory"
	case 6, Colchis_Script_GruntBreak_8
# 2463 "data//maps/Colchis/scripts.pory"
	case 7, Colchis_Script_GruntBreak_9
# 2465 "data//maps/Colchis/scripts.pory"
	case 8, Colchis_Script_GruntBreak_10
# 2467 "data//maps/Colchis/scripts.pory"
	case 9, Colchis_Script_GruntBreak_11
# 2470 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak0, MSGBOX_DEFAULT
Colchis_Script_GruntBreak_1:
# 2472 "data//maps/Colchis/scripts.pory"
	closemessage
# 2473 "data//maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_GruntBreak_3:
# 2452 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak1, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_4:
# 2454 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak2, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_5:
# 2456 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak3, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_6:
# 2458 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak4, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_7:
# 2460 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak5, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_8:
# 2462 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak6, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_9:
# 2464 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak7, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_10:
# 2466 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak8, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_11:
# 2468 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak9, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1


Colchis_Script_Kid1::
# 2478 "data//maps/Colchis/scripts.pory"
	lock
# 2479 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2480 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid1, MSGBOX_DEFAULT
# 2481 "data//maps/Colchis/scripts.pory"
	closemessage
# 2482 "data//maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid2::
# 2487 "data//maps/Colchis/scripts.pory"
	lock
# 2488 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2489 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid2, MSGBOX_DEFAULT
# 2490 "data//maps/Colchis/scripts.pory"
	closemessage
# 2491 "data//maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid3::
# 2496 "data//maps/Colchis/scripts.pory"
	lock
# 2497 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2498 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid3, MSGBOX_DEFAULT
# 2499 "data//maps/Colchis/scripts.pory"
	closemessage
# 2500 "data//maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher1::
# 2505 "data//maps/Colchis/scripts.pory"
	lock
# 2506 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2507 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher1, MSGBOX_DEFAULT
# 2508 "data//maps/Colchis/scripts.pory"
	closemessage
# 2509 "data//maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher2::
# 2514 "data//maps/Colchis/scripts.pory"
	lock
# 2515 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2516 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher2, MSGBOX_DEFAULT
# 2517 "data//maps/Colchis/scripts.pory"
	closemessage
# 2518 "data//maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Chef2::
# 2523 "data//maps/Colchis/scripts.pory"
	lock
# 2524 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2525 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Chef2, MSGBOX_DEFAULT
# 2526 "data//maps/Colchis/scripts.pory"
	closemessage
# 2527 "data//maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakL::
# 2532 "data//maps/Colchis/scripts.pory"
	lock
# 2533 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2534 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakL, MSGBOX_DEFAULT
# 2535 "data//maps/Colchis/scripts.pory"
	closemessage
# 2536 "data//maps/Colchis/scripts.pory"
	applymovement 39, Common_Movement_FaceRight
# 2537 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 2538 "data//maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakR::
# 2543 "data//maps/Colchis/scripts.pory"
	lock
# 2544 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2545 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakR, MSGBOX_DEFAULT
# 2546 "data//maps/Colchis/scripts.pory"
	closemessage
# 2547 "data//maps/Colchis/scripts.pory"
	applymovement 38, Common_Movement_FaceLeft
# 2548 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 2549 "data//maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_MaidL::
# 2554 "data//maps/Colchis/scripts.pory"
	lock
# 2555 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2556 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MaidL, MSGBOX_DEFAULT
# 2557 "data//maps/Colchis/scripts.pory"
	closemessage
# 2558 "data//maps/Colchis/scripts.pory"
	applymovement 43, Common_Movement_FaceRight
# 2559 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 2560 "data//maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_MaidR::
# 2565 "data//maps/Colchis/scripts.pory"
	lock
# 2566 "data//maps/Colchis/scripts.pory"
	faceplayer
# 2567 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MaidR, MSGBOX_DEFAULT
# 2568 "data//maps/Colchis/scripts.pory"
	closemessage
# 2569 "data//maps/Colchis/scripts.pory"
	applymovement 42, Common_Movement_FaceLeft
# 2570 "data//maps/Colchis/scripts.pory"
	waitmovement 0
# 2571 "data//maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntDoorF::
# 2576 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNTDOOR_F, Colchis_Text_GruntDoorFFight, Colchis_Text_GruntDoorFLost
# 2577 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntDoorFPost, MSGBOX_DEFAULT
# 2578 "data//maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntDoorM::
# 2583 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNTDOOR_M, Colchis_Text_GruntDoorMFight, Colchis_Text_GruntDoorMLost
# 2584 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntDoorMPost, MSGBOX_DEFAULT
# 2585 "data//maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM1::
# 2590 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM1, Colchis_Text_GruntThroneM1Fight, Colchis_Text_GruntThroneM1Lost
# 2591 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM1Post, MSGBOX_DEFAULT
# 2592 "data//maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM2::
# 2597 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM2, Colchis_Text_GruntThroneM2Fight, Colchis_Text_GruntThroneM2Lost
# 2598 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM2Post, MSGBOX_DEFAULT
# 2599 "data//maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM3::
# 2604 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM3, Colchis_Text_GruntThroneM3Fight, Colchis_Text_GruntThroneM3Lost
# 2605 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM3Post, MSGBOX_DEFAULT
# 2606 "data//maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM4::
# 2611 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM4, Colchis_Text_GruntThroneM4Fight, Colchis_Text_GruntThroneM4Lost
# 2612 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM4Post, MSGBOX_DEFAULT
# 2613 "data//maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM5::
# 2618 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM5, Colchis_Text_GruntThroneM5Fight, Colchis_Text_GruntThroneM5Lost
# 2619 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM5Post, MSGBOX_DEFAULT
# 2620 "data//maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM6::
# 2625 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM6, Colchis_Text_GruntThroneM6Fight, Colchis_Text_GruntThroneM6Lost
# 2626 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM6Post, MSGBOX_DEFAULT
# 2627 "data//maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF1::
# 2634 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF1, Colchis_Text_GruntThroneF1Fight, Colchis_Text_GruntThroneF1Lost
# 2635 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF1Post, MSGBOX_DEFAULT
# 2636 "data//maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF2::
# 2641 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF2, Colchis_Text_GruntThroneF2Fight, Colchis_Text_GruntThroneF2Lost
# 2642 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF2Post, MSGBOX_DEFAULT
# 2643 "data//maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF3::
# 2648 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF3, Colchis_Text_GruntThroneF3Fight, Colchis_Text_GruntThroneF3Lost
# 2649 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF3Post, MSGBOX_DEFAULT
# 2650 "data//maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF4::
# 2655 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF4, Colchis_Text_GruntThroneF4Fight, Colchis_Text_GruntThroneF4Lost
# 2656 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF4Post, MSGBOX_DEFAULT
# 2657 "data//maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF5::
# 2662 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF5, Colchis_Text_GruntThroneF5Fight, Colchis_Text_GruntThroneF5Lost
# 2663 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF5Post, MSGBOX_DEFAULT
# 2664 "data//maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF6::
# 2669 "data//maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF6, Colchis_Text_GruntThroneF6Fight, Colchis_Text_GruntThroneF6Lost
# 2670 "data//maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF6Post, MSGBOX_DEFAULT
# 2671 "data//maps/Colchis/scripts.pory"
	closemessage
	end


# 2675 "data//maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 2676 "data//maps/Colchis/scripts.pory"
	walk_up
# 2676 "data//maps/Colchis/scripts.pory"
	walk_up
# 2676 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2679 "data//maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 2680 "data//maps/Colchis/scripts.pory"
	walk_down
# 2680 "data//maps/Colchis/scripts.pory"
	walk_down
# 2680 "data//maps/Colchis/scripts.pory"
	walk_down
# 2680 "data//maps/Colchis/scripts.pory"
	walk_down
# 2680 "data//maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2683 "data//maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 2684 "data//maps/Colchis/scripts.pory"
	walk_up
# 2684 "data//maps/Colchis/scripts.pory"
	walk_up
# 2684 "data//maps/Colchis/scripts.pory"
	walk_up
# 2684 "data//maps/Colchis/scripts.pory"
	walk_up
# 2684 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2687 "data//maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitA:
# 2688 "data//maps/Colchis/scripts.pory"
	walk_up
# 2688 "data//maps/Colchis/scripts.pory"
	walk_up
# 2688 "data//maps/Colchis/scripts.pory"
	walk_up
# 2688 "data//maps/Colchis/scripts.pory"
	walk_up
# 2688 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2691 "data//maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitB:
# 2692 "data//maps/Colchis/scripts.pory"
	walk_down
# 2692 "data//maps/Colchis/scripts.pory"
	walk_down
# 2692 "data//maps/Colchis/scripts.pory"
	walk_down
# 2692 "data//maps/Colchis/scripts.pory"
	walk_down
# 2692 "data//maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2695 "data//maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2696 "data//maps/Colchis/scripts.pory"
	walk_up
# 2697 "data//maps/Colchis/scripts.pory"
	walk_right
# 2697 "data//maps/Colchis/scripts.pory"
	walk_right
# 2697 "data//maps/Colchis/scripts.pory"
	walk_right
# 2697 "data//maps/Colchis/scripts.pory"
	walk_right
# 2697 "data//maps/Colchis/scripts.pory"
	walk_right
# 2698 "data//maps/Colchis/scripts.pory"
	walk_up
# 2698 "data//maps/Colchis/scripts.pory"
	walk_up
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2699 "data//maps/Colchis/scripts.pory"
	walk_right
# 2700 "data//maps/Colchis/scripts.pory"
	walk_up
# 2700 "data//maps/Colchis/scripts.pory"
	walk_up
# 2700 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2703 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 2704 "data//maps/Colchis/scripts.pory"
	walk_up
# 2704 "data//maps/Colchis/scripts.pory"
	walk_up
# 2704 "data//maps/Colchis/scripts.pory"
	walk_up
# 2704 "data//maps/Colchis/scripts.pory"
	walk_up
# 2704 "data//maps/Colchis/scripts.pory"
	walk_up
# 2704 "data//maps/Colchis/scripts.pory"
	walk_up
# 2704 "data//maps/Colchis/scripts.pory"
	walk_up
# 2704 "data//maps/Colchis/scripts.pory"
	walk_up
# 2704 "data//maps/Colchis/scripts.pory"
	walk_up
# 2704 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2707 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 2708 "data//maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2711 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 2712 "data//maps/Colchis/scripts.pory"
	face_right
# 2713 "data//maps/Colchis/scripts.pory"
	face_up
# 2714 "data//maps/Colchis/scripts.pory"
	face_left
# 2715 "data//maps/Colchis/scripts.pory"
	face_down
# 2716 "data//maps/Colchis/scripts.pory"
	face_right
# 2717 "data//maps/Colchis/scripts.pory"
	face_up
# 2718 "data//maps/Colchis/scripts.pory"
	face_left
# 2719 "data//maps/Colchis/scripts.pory"
	face_down
# 2720 "data//maps/Colchis/scripts.pory"
	face_right
# 2721 "data//maps/Colchis/scripts.pory"
	face_up
# 2722 "data//maps/Colchis/scripts.pory"
	face_left
# 2723 "data//maps/Colchis/scripts.pory"
	face_down
# 2724 "data//maps/Colchis/scripts.pory"
	face_right
# 2725 "data//maps/Colchis/scripts.pory"
	face_up
# 2726 "data//maps/Colchis/scripts.pory"
	face_left
# 2727 "data//maps/Colchis/scripts.pory"
	face_down
# 2728 "data//maps/Colchis/scripts.pory"
	face_right
# 2729 "data//maps/Colchis/scripts.pory"
	face_up
# 2730 "data//maps/Colchis/scripts.pory"
	face_left
# 2731 "data//maps/Colchis/scripts.pory"
	face_down
	step_end

# 2734 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 2735 "data//maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2735 "data//maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2736 "data//maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2739 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 2740 "data//maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2740 "data//maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2741 "data//maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2744 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 2745 "data//maps/Colchis/scripts.pory"
	walk_left
# 2746 "data//maps/Colchis/scripts.pory"
	walk_up
# 2746 "data//maps/Colchis/scripts.pory"
	walk_up
# 2747 "data//maps/Colchis/scripts.pory"
	walk_right
# 2747 "data//maps/Colchis/scripts.pory"
	walk_right
# 2748 "data//maps/Colchis/scripts.pory"
	walk_down
# 2748 "data//maps/Colchis/scripts.pory"
	walk_down
# 2749 "data//maps/Colchis/scripts.pory"
	walk_left
# 2750 "data//maps/Colchis/scripts.pory"
	face_down
	step_end

# 2753 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 2754 "data//maps/Colchis/scripts.pory"
	walk_left
# 2755 "data//maps/Colchis/scripts.pory"
	walk_up
# 2755 "data//maps/Colchis/scripts.pory"
	walk_up
# 2756 "data//maps/Colchis/scripts.pory"
	walk_right
# 2756 "data//maps/Colchis/scripts.pory"
	walk_right
# 2757 "data//maps/Colchis/scripts.pory"
	walk_down
# 2757 "data//maps/Colchis/scripts.pory"
	walk_down
# 2758 "data//maps/Colchis/scripts.pory"
	walk_left
# 2759 "data//maps/Colchis/scripts.pory"
	face_down
# 2760 "data//maps/Colchis/scripts.pory"
	walk_left
# 2761 "data//maps/Colchis/scripts.pory"
	walk_up
# 2761 "data//maps/Colchis/scripts.pory"
	walk_up
# 2762 "data//maps/Colchis/scripts.pory"
	walk_right
# 2762 "data//maps/Colchis/scripts.pory"
	walk_right
# 2763 "data//maps/Colchis/scripts.pory"
	walk_down
# 2763 "data//maps/Colchis/scripts.pory"
	walk_down
# 2764 "data//maps/Colchis/scripts.pory"
	walk_left
# 2765 "data//maps/Colchis/scripts.pory"
	face_down
# 2766 "data//maps/Colchis/scripts.pory"
	walk_left
# 2767 "data//maps/Colchis/scripts.pory"
	walk_up
# 2767 "data//maps/Colchis/scripts.pory"
	walk_up
# 2768 "data//maps/Colchis/scripts.pory"
	walk_right
# 2768 "data//maps/Colchis/scripts.pory"
	walk_right
# 2769 "data//maps/Colchis/scripts.pory"
	walk_down
# 2769 "data//maps/Colchis/scripts.pory"
	walk_down
# 2770 "data//maps/Colchis/scripts.pory"
	walk_left
# 2771 "data//maps/Colchis/scripts.pory"
	face_down
	step_end

# 2774 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 2775 "data//maps/Colchis/scripts.pory"
	walk_down
# 2775 "data//maps/Colchis/scripts.pory"
	walk_down
# 2775 "data//maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2778 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 2779 "data//maps/Colchis/scripts.pory"
	walk_right
# 2779 "data//maps/Colchis/scripts.pory"
	walk_right
# 2780 "data//maps/Colchis/scripts.pory"
	face_down
	step_end

# 2783 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 2784 "data//maps/Colchis/scripts.pory"
	walk_left
# 2784 "data//maps/Colchis/scripts.pory"
	walk_left
# 2785 "data//maps/Colchis/scripts.pory"
	face_down
	step_end

# 2788 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 2789 "data//maps/Colchis/scripts.pory"
	walk_down
# 2790 "data//maps/Colchis/scripts.pory"
	face_left
# 2791 "data//maps/Colchis/scripts.pory"
	face_up
# 2792 "data//maps/Colchis/scripts.pory"
	face_right
# 2793 "data//maps/Colchis/scripts.pory"
	face_down
# 2794 "data//maps/Colchis/scripts.pory"
	walk_down
# 2795 "data//maps/Colchis/scripts.pory"
	face_left
# 2796 "data//maps/Colchis/scripts.pory"
	face_up
# 2797 "data//maps/Colchis/scripts.pory"
	face_right
# 2798 "data//maps/Colchis/scripts.pory"
	face_down
# 2799 "data//maps/Colchis/scripts.pory"
	walk_down
# 2800 "data//maps/Colchis/scripts.pory"
	face_left
# 2801 "data//maps/Colchis/scripts.pory"
	face_up
# 2802 "data//maps/Colchis/scripts.pory"
	face_right
# 2803 "data//maps/Colchis/scripts.pory"
	face_down
	step_end

# 2806 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 2807 "data//maps/Colchis/scripts.pory"
	walk_right
# 2808 "data//maps/Colchis/scripts.pory"
	walk_up
# 2809 "data//maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2810 "data//maps/Colchis/scripts.pory"
	face_down
	step_end

# 2813 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 2814 "data//maps/Colchis/scripts.pory"
	walk_left
# 2815 "data//maps/Colchis/scripts.pory"
	walk_up
# 2816 "data//maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2817 "data//maps/Colchis/scripts.pory"
	face_down
	step_end

# 2820 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 2821 "data//maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2822 "data//maps/Colchis/scripts.pory"
	face_up
	step_end

# 2825 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 2826 "data//maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2827 "data//maps/Colchis/scripts.pory"
	face_up
	step_end

# 2830 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 2831 "data//maps/Colchis/scripts.pory"
	walk_left
# 2832 "data//maps/Colchis/scripts.pory"
	face_left
	step_end

# 2835 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 2836 "data//maps/Colchis/scripts.pory"
	walk_right
# 2837 "data//maps/Colchis/scripts.pory"
	face_right
	step_end

# 2840 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 2841 "data//maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2842 "data//maps/Colchis/scripts.pory"
	face_down
	step_end

# 2845 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 2846 "data//maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2847 "data//maps/Colchis/scripts.pory"
	face_down
	step_end

# 2850 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 2851 "data//maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2854 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 2855 "data//maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 2858 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 2859 "data//maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 2863 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 2864 "data//maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 2867 "data//maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 2868 "data//maps/Colchis/scripts.pory"
	walk_up
# 2868 "data//maps/Colchis/scripts.pory"
	walk_up
# 2868 "data//maps/Colchis/scripts.pory"
	walk_up
# 2868 "data//maps/Colchis/scripts.pory"
	walk_up
# 2868 "data//maps/Colchis/scripts.pory"
	walk_up
# 2868 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2871 "data//maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 2872 "data//maps/Colchis/scripts.pory"
	walk_right
# 2872 "data//maps/Colchis/scripts.pory"
	walk_right
# 2872 "data//maps/Colchis/scripts.pory"
	walk_right
# 2872 "data//maps/Colchis/scripts.pory"
	walk_right
# 2872 "data//maps/Colchis/scripts.pory"
	walk_right
# 2872 "data//maps/Colchis/scripts.pory"
	walk_right
# 2872 "data//maps/Colchis/scripts.pory"
	walk_right
# 2872 "data//maps/Colchis/scripts.pory"
	walk_right
# 2873 "data//maps/Colchis/scripts.pory"
	walk_down
# 2873 "data//maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2876 "data//maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 2877 "data//maps/Colchis/scripts.pory"
	walk_right
# 2877 "data//maps/Colchis/scripts.pory"
	walk_right
# 2877 "data//maps/Colchis/scripts.pory"
	walk_right
# 2877 "data//maps/Colchis/scripts.pory"
	walk_right
# 2877 "data//maps/Colchis/scripts.pory"
	walk_right
# 2877 "data//maps/Colchis/scripts.pory"
	walk_right
# 2877 "data//maps/Colchis/scripts.pory"
	walk_right
# 2878 "data//maps/Colchis/scripts.pory"
	walk_down
# 2878 "data//maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2881 "data//maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 2882 "data//maps/Colchis/scripts.pory"
	walk_right
# 2882 "data//maps/Colchis/scripts.pory"
	walk_right
# 2882 "data//maps/Colchis/scripts.pory"
	walk_right
# 2882 "data//maps/Colchis/scripts.pory"
	walk_right
# 2882 "data//maps/Colchis/scripts.pory"
	walk_right
# 2882 "data//maps/Colchis/scripts.pory"
	walk_right
# 2883 "data//maps/Colchis/scripts.pory"
	walk_down
# 2883 "data//maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2886 "data//maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 2887 "data//maps/Colchis/scripts.pory"
	walk_right
# 2887 "data//maps/Colchis/scripts.pory"
	walk_right
# 2887 "data//maps/Colchis/scripts.pory"
	walk_right
# 2887 "data//maps/Colchis/scripts.pory"
	walk_right
# 2887 "data//maps/Colchis/scripts.pory"
	walk_right
# 2887 "data//maps/Colchis/scripts.pory"
	walk_right
# 2887 "data//maps/Colchis/scripts.pory"
	walk_right
# 2887 "data//maps/Colchis/scripts.pory"
	walk_right
# 2888 "data//maps/Colchis/scripts.pory"
	face_up
	step_end

# 2891 "data//maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 2892 "data//maps/Colchis/scripts.pory"
	walk_right
# 2892 "data//maps/Colchis/scripts.pory"
	walk_right
# 2892 "data//maps/Colchis/scripts.pory"
	walk_right
# 2892 "data//maps/Colchis/scripts.pory"
	walk_right
# 2892 "data//maps/Colchis/scripts.pory"
	walk_right
# 2892 "data//maps/Colchis/scripts.pory"
	walk_right
# 2892 "data//maps/Colchis/scripts.pory"
	walk_right
# 2893 "data//maps/Colchis/scripts.pory"
	face_up
	step_end

# 2896 "data//maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 2897 "data//maps/Colchis/scripts.pory"
	walk_right
# 2897 "data//maps/Colchis/scripts.pory"
	walk_right
# 2897 "data//maps/Colchis/scripts.pory"
	walk_right
# 2897 "data//maps/Colchis/scripts.pory"
	walk_right
# 2897 "data//maps/Colchis/scripts.pory"
	walk_right
# 2897 "data//maps/Colchis/scripts.pory"
	walk_right
# 2898 "data//maps/Colchis/scripts.pory"
	face_up
	step_end

# 2901 "data//maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2902 "data//maps/Colchis/scripts.pory"
	walk_up
# 2903 "data//maps/Colchis/scripts.pory"
	walk_right
# 2903 "data//maps/Colchis/scripts.pory"
	walk_right
# 2903 "data//maps/Colchis/scripts.pory"
	walk_right
# 2903 "data//maps/Colchis/scripts.pory"
	walk_right
# 2903 "data//maps/Colchis/scripts.pory"
	walk_right
# 2903 "data//maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2906 "data//maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 2907 "data//maps/Colchis/scripts.pory"
	walk_right
# 2907 "data//maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2910 "data//maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 2911 "data//maps/Colchis/scripts.pory"
	walk_up
# 2911 "data//maps/Colchis/scripts.pory"
	walk_up
# 2911 "data//maps/Colchis/scripts.pory"
	walk_up
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2912 "data//maps/Colchis/scripts.pory"
	walk_right
# 2913 "data//maps/Colchis/scripts.pory"
	walk_up
# 2913 "data//maps/Colchis/scripts.pory"
	walk_up
# 2913 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2916 "data//maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 2917 "data//maps/Colchis/scripts.pory"
	walk_up
# 2917 "data//maps/Colchis/scripts.pory"
	walk_up
# 2917 "data//maps/Colchis/scripts.pory"
	walk_up
# 2917 "data//maps/Colchis/scripts.pory"
	walk_up
# 2917 "data//maps/Colchis/scripts.pory"
	walk_up
# 2917 "data//maps/Colchis/scripts.pory"
	walk_up
# 2917 "data//maps/Colchis/scripts.pory"
	walk_up
# 2917 "data//maps/Colchis/scripts.pory"
	walk_up
# 2917 "data//maps/Colchis/scripts.pory"
	walk_up
# 2917 "data//maps/Colchis/scripts.pory"
	walk_up
# 2917 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2920 "data//maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 2921 "data//maps/Colchis/scripts.pory"
	walk_up
# 2921 "data//maps/Colchis/scripts.pory"
	walk_up
# 2921 "data//maps/Colchis/scripts.pory"
	walk_up
# 2921 "data//maps/Colchis/scripts.pory"
	walk_up
# 2921 "data//maps/Colchis/scripts.pory"
	walk_up
# 2921 "data//maps/Colchis/scripts.pory"
	walk_up
# 2921 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2924 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 2925 "data//maps/Colchis/scripts.pory"
	walk_left
# 2926 "data//maps/Colchis/scripts.pory"
	face_up
	step_end

# 2929 "data//maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 2930 "data//maps/Colchis/scripts.pory"
	walk_up
# 2931 "data//maps/Colchis/scripts.pory"
	walk_right
# 2932 "data//maps/Colchis/scripts.pory"
	face_up
	step_end

# 2936 "data//maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 2937 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2940 "data//maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 2941 "data//maps/Colchis/scripts.pory"
	walk_right
# 2941 "data//maps/Colchis/scripts.pory"
	walk_right
# 2942 "data//maps/Colchis/scripts.pory"
	walk_down
# 2943 "data//maps/Colchis/scripts.pory"
	face_right
	step_end

# 2946 "data//maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 2947 "data//maps/Colchis/scripts.pory"
	walk_left
# 2948 "data//maps/Colchis/scripts.pory"
	face_down
	step_end

# 2951 "data//maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 2952 "data//maps/Colchis/scripts.pory"
	walk_right
# 2953 "data//maps/Colchis/scripts.pory"
	walk_up
# 2954 "data//maps/Colchis/scripts.pory"
	face_right
	step_end

# 2957 "data//maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 2958 "data//maps/Colchis/scripts.pory"
	walk_left
# 2959 "data//maps/Colchis/scripts.pory"
	walk_up
# 2960 "data//maps/Colchis/scripts.pory"
	face_left
	step_end

# 2963 "data//maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 2964 "data//maps/Colchis/scripts.pory"
	walk_down
# 2964 "data//maps/Colchis/scripts.pory"
	walk_down
# 2964 "data//maps/Colchis/scripts.pory"
	walk_down
# 2964 "data//maps/Colchis/scripts.pory"
	walk_down
# 2964 "data//maps/Colchis/scripts.pory"
	walk_down
# 2964 "data//maps/Colchis/scripts.pory"
	walk_down
# 2964 "data//maps/Colchis/scripts.pory"
	walk_down
# 2964 "data//maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2967 "data//maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 2968 "data//maps/Colchis/scripts.pory"
	walk_up
# 2968 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2971 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonApproachPlayer:
# 2972 "data//maps/Colchis/scripts.pory"
	walk_up
# 2972 "data//maps/Colchis/scripts.pory"
	walk_up
# 2972 "data//maps/Colchis/scripts.pory"
	walk_up
# 2972 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2975 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonExit:
# 2976 "data//maps/Colchis/scripts.pory"
	walk_down
# 2976 "data//maps/Colchis/scripts.pory"
	walk_down
# 2976 "data//maps/Colchis/scripts.pory"
	walk_down
# 2976 "data//maps/Colchis/scripts.pory"
	walk_down
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2977 "data//maps/Colchis/scripts.pory"
	walk_left
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2978 "data//maps/Colchis/scripts.pory"
	walk_down
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2979 "data//maps/Colchis/scripts.pory"
	walk_right
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2980 "data//maps/Colchis/scripts.pory"
	walk_down
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
# 2981 "data//maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2984 "data//maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonExit:
# 2985 "data//maps/Colchis/scripts.pory"
	walk_down
# 2985 "data//maps/Colchis/scripts.pory"
	walk_down
# 2985 "data//maps/Colchis/scripts.pory"
	walk_down
# 2985 "data//maps/Colchis/scripts.pory"
	walk_down
# 2985 "data//maps/Colchis/scripts.pory"
	walk_down
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2986 "data//maps/Colchis/scripts.pory"
	walk_left
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2987 "data//maps/Colchis/scripts.pory"
	walk_down
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2988 "data//maps/Colchis/scripts.pory"
	walk_right
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2989 "data//maps/Colchis/scripts.pory"
	walk_down
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
# 2990 "data//maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2993 "data//maps/Colchis/scripts.pory"
Colchis_Movement_PlayerPrisonExit:
# 2994 "data//maps/Colchis/scripts.pory"
	walk_down
# 2994 "data//maps/Colchis/scripts.pory"
	walk_down
# 2994 "data//maps/Colchis/scripts.pory"
	walk_down
# 2994 "data//maps/Colchis/scripts.pory"
	walk_down
# 2994 "data//maps/Colchis/scripts.pory"
	walk_down
# 2994 "data//maps/Colchis/scripts.pory"
	walk_down
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2995 "data//maps/Colchis/scripts.pory"
	walk_left
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2996 "data//maps/Colchis/scripts.pory"
	walk_down
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2997 "data//maps/Colchis/scripts.pory"
	walk_right
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2998 "data//maps/Colchis/scripts.pory"
	walk_down
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
# 2999 "data//maps/Colchis/scripts.pory"
	walk_left
	step_end

# 3002 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 3003 "data//maps/Colchis/scripts.pory"
	walk_left
# 3003 "data//maps/Colchis/scripts.pory"
	walk_left
# 3003 "data//maps/Colchis/scripts.pory"
	walk_left
# 3004 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 3007 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 3008 "data//maps/Colchis/scripts.pory"
	walk_down
# 3009 "data//maps/Colchis/scripts.pory"
	walk_right
# 3009 "data//maps/Colchis/scripts.pory"
	walk_right
# 3009 "data//maps/Colchis/scripts.pory"
	walk_right
	step_end

# 3012 "data//maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 3013 "data//maps/Colchis/scripts.pory"
	walk_up
# 3013 "data//maps/Colchis/scripts.pory"
	walk_up
# 3013 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 3016 "data//maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 3017 "data//maps/Colchis/scripts.pory"
	walk_up
# 3017 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 3020 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3A:
# 3021 "data//maps/Colchis/scripts.pory"
	walk_up
# 3021 "data//maps/Colchis/scripts.pory"
	walk_up
# 3022 "data//maps/Colchis/scripts.pory"
	walk_right
# 3022 "data//maps/Colchis/scripts.pory"
	walk_right
# 3023 "data//maps/Colchis/scripts.pory"
	walk_up
# 3023 "data//maps/Colchis/scripts.pory"
	walk_up
# 3023 "data//maps/Colchis/scripts.pory"
	walk_up
# 3023 "data//maps/Colchis/scripts.pory"
	walk_up
# 3023 "data//maps/Colchis/scripts.pory"
	walk_up
# 3023 "data//maps/Colchis/scripts.pory"
	walk_up
# 3023 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 3026 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3B:
# 3027 "data//maps/Colchis/scripts.pory"
	walk_up
# 3027 "data//maps/Colchis/scripts.pory"
	walk_up
# 3028 "data//maps/Colchis/scripts.pory"
	walk_right
# 3029 "data//maps/Colchis/scripts.pory"
	walk_up
# 3029 "data//maps/Colchis/scripts.pory"
	walk_up
# 3029 "data//maps/Colchis/scripts.pory"
	walk_up
# 3029 "data//maps/Colchis/scripts.pory"
	walk_up
# 3029 "data//maps/Colchis/scripts.pory"
	walk_up
# 3029 "data//maps/Colchis/scripts.pory"
	walk_up
# 3029 "data//maps/Colchis/scripts.pory"
	walk_up
	step_end

# 3032 "data//maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3A:
# 3033 "data//maps/Colchis/scripts.pory"
	walk_down
# 3034 "data//maps/Colchis/scripts.pory"
	walk_right
# 3035 "data//maps/Colchis/scripts.pory"
	walk_down
# 3035 "data//maps/Colchis/scripts.pory"
	walk_down
# 3036 "data//maps/Colchis/scripts.pory"
	face_left
	step_end

# 3039 "data//maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3B:
# 3040 "data//maps/Colchis/scripts.pory"
	walk_down
# 3040 "data//maps/Colchis/scripts.pory"
	walk_down
# 3040 "data//maps/Colchis/scripts.pory"
	walk_down
# 3041 "data//maps/Colchis/scripts.pory"
	face_left
	step_end

# 3044 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn:
# 3045 "data//maps/Colchis/scripts.pory"
	walk_down
# 3045 "data//maps/Colchis/scripts.pory"
	walk_down
# 3045 "data//maps/Colchis/scripts.pory"
	walk_down
# 3045 "data//maps/Colchis/scripts.pory"
	walk_down
# 3045 "data//maps/Colchis/scripts.pory"
	walk_down
# 3045 "data//maps/Colchis/scripts.pory"
	walk_down
# 3045 "data//maps/Colchis/scripts.pory"
	walk_down
	step_end

# 3048 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2A:
# 3049 "data//maps/Colchis/scripts.pory"
	walk_down
# 3050 "data//maps/Colchis/scripts.pory"
	walk_left
# 3050 "data//maps/Colchis/scripts.pory"
	walk_left
# 3051 "data//maps/Colchis/scripts.pory"
	walk_down
# 3052 "data//maps/Colchis/scripts.pory"
	face_right
	step_end

# 3055 "data//maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2B:
# 3056 "data//maps/Colchis/scripts.pory"
	walk_down
# 3057 "data//maps/Colchis/scripts.pory"
	walk_left
# 3058 "data//maps/Colchis/scripts.pory"
	walk_down
# 3059 "data//maps/Colchis/scripts.pory"
	face_right
	step_end

# 3062 "data//maps/Colchis/scripts.pory"
Colchis_Movement_Exeunt:
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3063 "data//maps/Colchis/scripts.pory"
	walk_right
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3064 "data//maps/Colchis/scripts.pory"
	walk_up
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3065 "data//maps/Colchis/scripts.pory"
	walk_left
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
# 3066 "data//maps/Colchis/scripts.pory"
	walk_down
	step_end

# 3069 "data//maps/Colchis/scripts.pory"
Colchis_Movement_JasonAndMedeaExeunt:
# 3070 "data//maps/Colchis/scripts.pory"
	walk_down
# 3071 "data//maps/Colchis/scripts.pory"
	walk_right
# 3071 "data//maps/Colchis/scripts.pory"
	walk_right
# 3071 "data//maps/Colchis/scripts.pory"
	walk_right
# 3071 "data//maps/Colchis/scripts.pory"
	walk_right
# 3071 "data//maps/Colchis/scripts.pory"
	walk_right
# 3071 "data//maps/Colchis/scripts.pory"
	walk_right
# 3071 "data//maps/Colchis/scripts.pory"
	walk_right
# 3071 "data//maps/Colchis/scripts.pory"
	walk_right
# 3071 "data//maps/Colchis/scripts.pory"
	walk_right
# 3071 "data//maps/Colchis/scripts.pory"
	walk_right
	step_end

# 3074 "data//maps/Colchis/scripts.pory"
Colchis_Movement_ChefExit:
# 3075 "data//maps/Colchis/scripts.pory"
	walk_right
# 3075 "data//maps/Colchis/scripts.pory"
	walk_right
# 3075 "data//maps/Colchis/scripts.pory"
	walk_right
# 3075 "data//maps/Colchis/scripts.pory"
	walk_right
# 3075 "data//maps/Colchis/scripts.pory"
	walk_right
# 3075 "data//maps/Colchis/scripts.pory"
	walk_right
# 3075 "data//maps/Colchis/scripts.pory"
	walk_right
# 3075 "data//maps/Colchis/scripts.pory"
	walk_right
# 3075 "data//maps/Colchis/scripts.pory"
	walk_right
	step_end

# 3078 "data//maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit1:
# 3079 "data//maps/Colchis/scripts.pory"
	walk_left
# 3080 "data//maps/Colchis/scripts.pory"
	walk_down
# 3080 "data//maps/Colchis/scripts.pory"
	walk_down
# 3080 "data//maps/Colchis/scripts.pory"
	walk_down
# 3080 "data//maps/Colchis/scripts.pory"
	walk_down
# 3081 "data//maps/Colchis/scripts.pory"
	walk_left
# 3081 "data//maps/Colchis/scripts.pory"
	walk_left
# 3081 "data//maps/Colchis/scripts.pory"
	walk_left
# 3081 "data//maps/Colchis/scripts.pory"
	walk_left
# 3081 "data//maps/Colchis/scripts.pory"
	walk_left
# 3081 "data//maps/Colchis/scripts.pory"
	walk_left
# 3081 "data//maps/Colchis/scripts.pory"
	walk_left
	step_end

# 3084 "data//maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit2:
# 3085 "data//maps/Colchis/scripts.pory"
	walk_down
# 3086 "data//maps/Colchis/scripts.pory"
	walk_left
# 3087 "data//maps/Colchis/scripts.pory"
	walk_down
# 3087 "data//maps/Colchis/scripts.pory"
	walk_down
# 3087 "data//maps/Colchis/scripts.pory"
	walk_down
# 3088 "data//maps/Colchis/scripts.pory"
	walk_left
# 3088 "data//maps/Colchis/scripts.pory"
	walk_left
# 3088 "data//maps/Colchis/scripts.pory"
	walk_left
# 3088 "data//maps/Colchis/scripts.pory"
	walk_left
# 3088 "data//maps/Colchis/scripts.pory"
	walk_left
# 3088 "data//maps/Colchis/scripts.pory"
	walk_left
# 3088 "data//maps/Colchis/scripts.pory"
	walk_left
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1591 "data//maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Script_SanctumMedeaReturn_Text_0:
# 1812 "data//maps/Colchis/scripts.pory"
	.string "OIMOIAY!\nOOIIMMOOIIAAYY!!$"

Colchis_Text_JasonIntro1::
# 3091 "data//maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 3095 "data//maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 3099 "data//maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 3103 "data//maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 3107 "data//maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 3111 "data//maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 3116 "data//maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 3121 "data//maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 3125 "data//maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 3129 "data//maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 3133 "data//maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 3142 "data//maps/Colchis/scripts.pory"
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
# 3147 "data//maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 3156 "data//maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 3160 "data//maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 3169 "data//maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 3175 "data//maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 3188 "data//maps/Colchis/scripts.pory"
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
# 3200 "data//maps/Colchis/scripts.pory"
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
# 3204 "data//maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 3208 "data//maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 3212 "data//maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyy!$"

Colchis_Text_Aeetes7::
# 3216 "data//maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 3220 "data//maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 3224 "data//maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 3233 "data//maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 3237 "data//maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 3255 "data//maps/Colchis/scripts.pory"
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
# 3259 "data//maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 3264 "data//maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 3268 "data//maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 3272 "data//maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 3279 "data//maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 3283 "data//maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 3309 "data//maps/Colchis/scripts.pory"
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
# 3317 "data//maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 3321 "data//maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 3334 "data//maps/Colchis/scripts.pory"
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
# 3338 "data//maps/Colchis/scripts.pory"
	.string "Do not interrupt my private time with\n"
	.string "Medea 'till you bring shiny Mareep.$"

Colchis_Text_MedeaSanctumTrigger1::
# 3343 "data//maps/Colchis/scripts.pory"
	.string "Ememberray, ingbray onay armhay otay\n"
	.string "Ugialay.$"

Colchis_Text_JasonSanctumTrigger2::
# 3347 "data//maps/Colchis/scripts.pory"
	.string "Have you returned bringing Shiny\n"
	.string "Mareep?$"

Colchis_Text_MedeaSanctumTrigger2::
# 3352 "data//maps/Colchis/scripts.pory"
	.string "Ymay oughtsthay etraybay emay.\n"
	.string "Excuseay emay Asonjay, againstay ymay\l"
	.string "ownay adviceay Iay ustmay aketay\l"
	.string "eavelay ofay ouyay anday eesay atthay\l"
	.string "Ugialay isay afesay.$"

Colchis_Text_JasonSanctumTrigger3::
# 3356 "data//maps/Colchis/scripts.pory"
	.string "What have you done? Where is Shiny\n"
	.string "Mareep? How could you fail? You only\l"
	.string "had one job! My quest has failed... and\l"
	.string "it was all your fault! Now you will pay\l"
	.string "the price. Nosepass! Attack!$"

Colchis_Text_JasonLost::
# 3360 "data//maps/Colchis/scripts.pory"
	.string "I curse that day I saved you from the\n"
	.string "surf.$"

Colchis_Text_JasonPost::
# 3364 "data//maps/Colchis/scripts.pory"
	.string "The most wicked betrayal of all my\n"
	.string "life...$"

Colchis_Text_JasonGiveMeMareep::
# 3368 "data//maps/Colchis/scripts.pory"
	.string "I see that you have completed the\n"
	.string "quest. Give me shiny Mareep and let's be\l"
	.string "done.$"

Colchis_Text_GiveJasonMareep::
# 3372 "data//maps/Colchis/scripts.pory"
	.string "Will you give Jason shiny Mareep?$"

Colchis_Text_GaveShinyMareep::
# 3376 "data//maps/Colchis/scripts.pory"
	.string "You gave {STR_VAR_1} to Jason!\p"
	.string "Bye Bye {STR_VAR_1}!$"

Colchis_Text_CultistMPre::
# 3381 "data//maps/Colchis/scripts.pory"
	.string "Espassertray opstay! Allfay intoay\n"
	.string "othingnessnay$"

Colchis_Text_CultistMLost::
# 3386 "data//maps/Colchis/scripts.pory"
	.string "Ethay everlastingay arknessday\n"
	.string "overscay allay.$"

Colchis_Text_CultistMPost::
# 3391 "data//maps/Colchis/scripts.pory"
	.string "Ouyay aymay avehay onway utbay\n"
	.string "ou'llyay evernay escapeay.$"

Colchis_Text_MedeaSanctumReturn1::
# 3396 "data//maps/Colchis/scripts.pory"
	.string "Ouyay onstermay! Owhay ouldcay ouyay\n"
	.string "oday isthay otay emay?$"

Colchis_Text_MedeaSanctumReturn2::
# 3401 "data//maps/Colchis/scripts.pory"
	.string "Ymay ovelay, ehay ashay attackeday\n"
	.string "ymay Ugialay! Iay illway onay ongerlay\l"
	.string "elphay imhay eavelay Olchiscay.$"

Colchis_Text_JasonMedeaReturn1::
# 3405 "data//maps/Colchis/scripts.pory"
	.string "Please, do not cry beloved Medea. Lend\n"
	.string "love the power to hold back your tears.$"

Colchis_Text_JasonMedeaReturn2::
# 3409 "data//maps/Colchis/scripts.pory"
	.string "Hey, I apologize for Medea. I know she's\n"
	.string "acting up, but we're still cool. Give it\l"
	.string "some time I'll get her to cool down. When\l"
	.string "you get out meet me in Bulbus town and\l"
	.string "I'll repay you for shiny Mareep.$"

Colchis_Text_JasonSanctumWilds::
# 3413 "data//maps/Colchis/scripts.pory"
	.string "Alas! Medea! My quest for shiny Mareep\n"
	.string "has failed and now we're vagabonds.$"

Colchis_Text_JasonSanctumDepart::
# 3417 "data//maps/Colchis/scripts.pory"
	.string "Let us depart and leave this one\n"
	.string "behind.$"

Colchis_Text_Bed::
# 3421 "data//maps/Colchis/scripts.pory"
	.string "It's a big comfy bed!\n"
	.string "Would you like to take a rest?$"

Colchis_Text_RingBlockerIntro::
# 3425 "data//maps/Colchis/scripts.pory"
	.string "It's a large metal barrier with a keyhole\n"
	.string "in the center.$"

Colchis_Text_PrisonDoorClosed::
# 3429 "data//maps/Colchis/scripts.pory"
	.string "It's a large metal door with a keyhole in\n"
	.string "the center.$"

Colchis_Text_KeyFits::
# 3433 "data//maps/Colchis/scripts.pory"
	.string "The key fits into the keyhole!\n"
	.string "The barriers sink into the ground but\l"
	.string "the key broke off inside!$"

Colchis_Text_RingBlockerDecline::
# 3437 "data//maps/Colchis/scripts.pory"
	.string "Better not try using the key here.$"

Colchis_Text_RingBlockerYesNo::
# 3441 "data//maps/Colchis/scripts.pory"
	.string "Would you like to try using the Colchis\n"
	.string "Key?$"

Colchis_Text_AeetesIntro::
# 3450 "data//maps/Colchis/scripts.pory"
	.string "Ouryay insolentay invasionay ofay\n"
	.string "ouray airfay anday ightymay ingdomkay\l"
	.string "isay ownay atay anay enday. ouryay\l"
	.string "illway ownay earnlay ethay uetray\l"
	.string "owerpay ofay Ingkay Aeetesay.$"

Colchis_Text_AeetesLost::
# 3455 "data//maps/Colchis/scripts.pory"
	.string "Ownay ymay ingdomkay ashay allenfay.$"

Colchis_Text_AeetesPost::
# 3468 "data//maps/Colchis/scripts.pory"
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
# 3473 "data//maps/Colchis/scripts.pory"
	.string "Ymay ifelay ashay eenbay educedray\n"
	.string "otay aughtnay. Eavelay emay.$"

Colchis_Text_ChefProposal::
# 3477 "data//maps/Colchis/scripts.pory"
	.string "I'm nervous! Do you think she will say\n"
	.string "yes?$"

Colchis_Movement_ChefIntro::
# 3481 "data//maps/Colchis/scripts.pory"
	.string "Oh! What to do? I am madly in love with\n"
	.string "one of Colchis' most beautiful maids\l"
	.string "but worry I will lose her to someone\l"
	.string "more handsome and with more money than\l"
	.string "me. If only I had an engagement ring to\l"
	.string "give her in exchange for loyalty.$"

Colchis_Text_ChefRingYesNo::
# 3485 "data//maps/Colchis/scripts.pory"
	.string "Give Chef the Colchis Ring?$"

Colchis_Text_ChefGaveRing::
# 3489 "data//maps/Colchis/scripts.pory"
	.string "{PLAYER} gave Chef the Colchis Ring.$"

Colchis_Text_ChefThanks1::
# 3493 "data//maps/Colchis/scripts.pory"
	.string "Great Almighty! You're giving this to\n"
	.string "me? Take this Sweet Apple as token of\l"
	.string "thanks.$"

Colchis_Text_ChefThanks2::
# 3497 "data//maps/Colchis/scripts.pory"
	.string "I'm off now to proposition the maid.$"

Colchis_Text_ChefGaveRingNo::
# 3501 "data//maps/Colchis/scripts.pory"
	.string "Better not give him the ring.$"

Colchis_Text_Maid1::
# 3505 "data//maps/Colchis/scripts.pory"
	.string "Right now I am a maid but one day I will\n"
	.string "meet a foreign man and have his kids.$"

Colchis_Text_Maid2::
# 3509 "data//maps/Colchis/scripts.pory"
	.string "I'm starting to worry this creep likes\n"
	.string "me.$"

Colchis_Text_JailerIntro::
# 3522 "data//maps/Colchis/scripts.pory"
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
# 3526 "data//maps/Colchis/scripts.pory"
	.string "Give the Colchis Apple to the jailer?$"

Colchis_Text_JailerGaveApple::
# 3530 "data//maps/Colchis/scripts.pory"
	.string "{PLAYER} gave the jailer the Colchis\n"
	.string "Apple$"

Colchis_Text_JailerThanks1::
# 3536 "data//maps/Colchis/scripts.pory"
	.string "Aay Olchiscay apple? Ownay ere'sthay\n"
	.string "aay eetsway eattray! Ankthay ouyay!\l"
	.string "Ere'shay ethay ailjay eykay. Ocknay\l"
	.string "ourselfyay outay.$"

Colchis_Text_JailerThanks2::
# 3541 "data//maps/Colchis/scripts.pory"
	.string "Ebay arefulcay otnay otay ocklay\n"
	.string "ourselfyay inay ailjay. Ahay!$"

Colchis_Text_JailerGaveAppleNo::
# 3545 "data//maps/Colchis/scripts.pory"
	.string "Best not to give him the Apple now.$"

Colchis_Text_PrisonDoorOpen::
# 3549 "data//maps/Colchis/scripts.pory"
	.string "The Colchis Prison Key unlocked the\n"
	.string "door!$"

Colchis_Text_LostKid1::
# 3553 "data//maps/Colchis/scripts.pory"
	.string "Hey! Thanks for finding me! I was\n"
	.string "starting to get scared but I'll go back\l"
	.string "to where I belong now.$"

Colchis_Text_LostKid2::
# 3557 "data//maps/Colchis/scripts.pory"
	.string "I love playing with my friends again.$"

Colchis_Text_Doorman1::
# 3571 "data//maps/Colchis/scripts.pory"
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
# 3576 "data//maps/Colchis/scripts.pory"
	.string "Ankthay ouyay orfay ingingbray usay\n"
	.string "ackbay ogethertay. Ethay oorday isay\l"
	.string "openay. Arewellfay.$"

Colchis_Text_Doorman3::
# 3581 "data//maps/Colchis/scripts.pory"
	.string "Anksthay againay.$"

Colchis_Text_Nanny1::
# 3585 "data//maps/Colchis/scripts.pory"
	.string "Oh no! How terrible! I'm freaking out\n"
	.string "because I lost another one. What if I\l"
	.string "get caught swapping out another kid?\l"
	.string "When they're infants they usually can't\l"
	.string "tell but this one was older...What can I\l"
	.string "do?$"

Colchis_Text_Nanny2::
# 3589 "data//maps/Colchis/scripts.pory"
	.string "Oh! Thanks for finding that lost kid for\n"
	.string "me. I feel like I can finally exhale. I\l"
	.string "had been so stressed out I hadn't been\l"
	.string "able to go socialize with my man.$"

Colchis_Text_GruntBreak1::
# 3594 "data//maps/Colchis/scripts.pory"
	.string "Iay asway ustjay inkingthay aboutay\n"
	.string "ymay etpay atcay.$"

Colchis_Text_GruntBreak2::
# 3599 "data//maps/Colchis/scripts.pory"
	.string "Iay oday otnay inkthay eetingsmay\n"
	.string "areay oductivepray.$"

Colchis_Text_GruntBreak3::
# 3604 "data//maps/Colchis/scripts.pory"
	.string "Oday otnay interrupay emay ingebay\n"
	.string "eatingay ipschay.$"

Colchis_Text_GruntBreak4::
# 3609 "data//maps/Colchis/scripts.pory"
	.string "I'may onay ymay eakbray, asay\n"
	.string "Olchiscay' awlay andatesmay.$"

Colchis_Text_GruntBreak5::
# 3614 "data//maps/Colchis/scripts.pory"
	.string "Ymay eakbray imetay isay ymay\n"
	.string "erapythay essionsay.$"

Colchis_Text_GruntBreak6::
# 3619 "data//maps/Colchis/scripts.pory"
	.string "I'may otnay azylay! I'may eparingpray\n"
	.string "otay orkway.$"

Colchis_Text_GruntBreak7::
# 3624 "data//maps/Colchis/scripts.pory"
	.string "Eythey aysay atthay eaksbray areay\n"
	.string "ikelay ugshay orfay ouryay oulsay.$"

Colchis_Text_GruntBreak8::
# 3629 "data//maps/Colchis/scripts.pory"
	.string "I'may otnay ignoringay ouyay. I'may\n"
	.string "ustjay estingray.$"

Colchis_Text_GruntBreak9::
# 3634 "data//maps/Colchis/scripts.pory"
	.string "On'tday elltay ymay ossbay I'veay\n"
	.string "eenbay erehay orfay ourshay.$"

Colchis_Text_GruntBreak0::
# 3639 "data//maps/Colchis/scripts.pory"
	.string "Amay Iay upposedsay otay ebay\n"
	.string "alkingtay otay ouyay?$"

Colchis_Text_Kid1::
# 3643 "data//maps/Colchis/scripts.pory"
	.string "Baby shark doo doo doo doo doo doo\n"
	.string "baby shark doo doo doo doo doo doo\l"
	.string "baby shark doo doo doo doo doo baby\l"
	.string "shark!$"

Colchis_Text_Kid2::
# 3647 "data//maps/Colchis/scripts.pory"
	.string "I love Pikachu! He's an electric Pokemon\n"
	.string "and he's my favorite! I wish I had a pet\l"
	.string "Pikachu but I think my mom would say\l"
	.string "no...Maybe one day...$"

Colchis_Text_Kid3::
# 3651 "data//maps/Colchis/scripts.pory"
	.string "Have you ever had a dream so that so\n"
	.string "that you um you had you you would you\l"
	.string "could you'll do you went you want you\l"
	.string "you could do so you you do you could\l"
	.string "you you want you want him to do you so\l"
	.string "much you could do anything?$"

Colchis_Text_Teacher1::
# 3655 "data//maps/Colchis/scripts.pory"
	.string "The youth is lost! They pay no\n"
	.string "attention to anything of value or\l"
	.string "substance.$"

Colchis_Text_Teacher2::
# 3659 "data//maps/Colchis/scripts.pory"
	.string "Even though teaching can be\n"
	.string "exhausting it's an honor to help\l"
	.string "nurture young minds.$"

Colchis_Text_Chef2::
# 3663 "data//maps/Colchis/scripts.pory"
	.string "I'm not crying! No! Just peeling onions!\n"
	.string "Not thinking 'bout the girl who left me!\l"
	.string "No!$"

Colchis_Text_GruntBreakL::
# 3668 "data//maps/Colchis/scripts.pory"
	.string "E'reway otnay arguinay. I'may ovingpray\n"
	.string "I'may ightray.$"

Colchis_Text_GruntBreakR::
# 3673 "data//maps/Colchis/scripts.pory"
	.string "Atthay uy'sgay anay assay, anay assay\n"
	.string "at'sthay ullfay ofay itshay.$"

Colchis_Text_MaidL::
# 3677 "data//maps/Colchis/scripts.pory"
	.string "I heard she said he said he had a crush\n"
	.string "on her but she said she does not like\l"
	.string "him.$"

Colchis_Text_MaidR::
# 3681 "data//maps/Colchis/scripts.pory"
	.string "Get out of here! We're not interested.$"

Colchis_Text_GruntDoorFFight::
# 3688 "data//maps/Colchis/scripts.pory"
	.string "Iay illway otnay etlay ouyay eesay ymay\n"
	.string "adies'lay edbay!$"

Colchis_Text_GruntDoorFLost::
# 3692 "data//maps/Colchis/scripts.pory"
	.string "Ou'veyay onqueredcay emay.$"

Colchis_Text_GruntDoorFPost::
# 3696 "data//maps/Colchis/scripts.pory"
	.string "Edea'sMay edbay isay oursyay.$"

Colchis_Text_GruntDoorMFight::
# 3703 "data//maps/Colchis/scripts.pory"
	.string "Ethay Ing'skay Amberschay areay otnay\n"
	.string "orfay ommoncay olkfay.$"

Colchis_Text_GruntDoorMLost::
# 3707 "data//maps/Colchis/scripts.pory"
	.string "Ymay ordlay! Iay avehay ailedfay ouyay!$"

Colchis_Text_GruntDoorMPost::
# 3711 "data//maps/Colchis/scripts.pory"
	.string "Ouyay ebelray umscray, ouryay\n"
	.string "esencepray efilesday isthay oblenay\l"
	.string "aceplay.$"

Colchis_Text_GruntThroneF1Fight::
# 3719 "data//maps/Colchis/scripts.pory"
	.string "At'swhay orseway, osinglay ouray\n"
	.string "ingkay, oray ouryay outfitay?$"

Colchis_Text_GruntThroneF1Lost::
# 3723 "data//maps/Colchis/scripts.pory"
	.string "Upersay otnay oolcay Iay otgay eatbay\n"
	.string "ybay aay obslay!$"

Colchis_Text_GruntThroneF1Post::
# 3727 "data//maps/Colchis/scripts.pory"
	.string "Ifay ou'reyay erehah otay overthroway\n"
	.string "ouray ingdomkay ouyay ouldcay atay\l"
	.string "eastlay oday itay ithway omesay\l"
	.string "ylestay.$"

Colchis_Text_GruntThroneF2Fight::
# 3734 "data//maps/Colchis/scripts.pory"
	.string "Ou'llyay evernay asspay! Eparepray\n"
	.string "otay eelfay ymay athwraw.$"

Colchis_Text_GruntThroneF2Lost::
# 3738 "data//maps/Colchis/scripts.pory"
	.string "Amnday indblay angeray!$"

Colchis_Text_GruntThroneF2Post::
# 3742 "data//maps/Colchis/scripts.pory"
	.string "Ou'reyay ightiermay anthay emay.$"

Colchis_Text_GruntThroneF3Fight::
# 3749 "data//maps/Colchis/scripts.pory"
	.string "Inay imestay ofay eacepay Iay anceday\n"
	.string "orfay Edeamay.$"

Colchis_Text_GruntThroneF3Lost::
# 3753 "data//maps/Colchis/scripts.pory"
	.string "I'may aay etterbay ancerday anthay\n"
	.string "attlerbay.$"

Colchis_Text_GruntThroneF3Post::
# 3757 "data//maps/Colchis/scripts.pory"
	.string "Easeplay on'tday urthay Aeetesay, ehay\n"
	.string "ayspay ymay illsbay.$"

Colchis_Text_GruntThroneF4Fight::
# 3764 "data//maps/Colchis/scripts.pory"
	.string "Ou'llyay evernay eavelay Olchiscay\n"
	.string "aliveay!$"

Colchis_Text_GruntThroneF4Lost::
# 3768 "data//maps/Colchis/scripts.pory"
	.string "Ailurefay...$"

Colchis_Text_GruntThroneF4Post::
# 3772 "data//maps/Colchis/scripts.pory"
	.string "Anymay uardsgay etyay emainray. Ouyay\n"
	.string "idnay otnay inway.$"

Colchis_Text_GruntThroneF5Fight::
# 3779 "data//maps/Colchis/scripts.pory"
	.string "Atwhay? Enacemay!$"

Colchis_Text_GruntThroneF5Lost::
# 3783 "data//maps/Colchis/scripts.pory"
	.string "Ouyay allshay aypay.$"

Colchis_Text_GruntThroneF5Post::
# 3787 "data//maps/Colchis/scripts.pory"
	.string "Oday otnay ogay onay.$"

Colchis_Text_GruntThroneF6Fight::
# 3794 "data//maps/Colchis/scripts.pory"
	.string "At'sway isthay? Owhay idday ouyay\n"
	.string "escapeay omfray isonpray?$"

Colchis_Text_GruntThroneF6Lost::
# 3798 "data//maps/Colchis/scripts.pory"
	.string "Owhay etlay isthay admanmay ooselay?$"

Colchis_Text_GruntThroneF6Post::
# 3802 "data//maps/Colchis/scripts.pory"
	.string "Oundsay ethay alarmay!$"

Colchis_Text_GruntThroneM1Fight::
# 3809 "data//maps/Colchis/scripts.pory"
	.string "Itnessway ethay owerpay ofay ethay\n"
	.string "oyalray uardgay!$"

Colchis_Text_GruntThroneM1Lost::
# 3813 "data//maps/Colchis/scripts.pory"
	.string "Ethay irstfay, anday astlay, osslay\n"
	.string "ofay ethay oyalray uardgay.$"

Colchis_Text_GruntThroneM1Post::
# 3817 "data//maps/Colchis/scripts.pory"
	.string "Ouyay isrespectday ethay oyalray\n"
	.string "Olchiscay Onethray.$"

Colchis_Text_GruntThroneM2Fight::
# 3824 "data//maps/Colchis/scripts.pory"
	.string "Ymay olesay urposepay inay ife'slay\n"
	.string "otay opstay ouyay erehay.$"

Colchis_Text_GruntThroneM2Lost::
# 3828 "data//maps/Colchis/scripts.pory"
	.string "Owhay ouldcay Iay oselay?$"

Colchis_Text_GruntThroneM2Post::
# 3832 "data//maps/Colchis/scripts.pory"
	.string "Atwhay useay isay ymay ifelay ownay?$"

Colchis_Text_GruntThroneM3Fight::
# 3839 "data//maps/Colchis/scripts.pory"
	.string "Ethay ingkay isay oodgay, ereforethay\n"
	.string "ouyay ustmay ebab adbay.$"

Colchis_Text_GruntThroneM3Lost::
# 3843 "data//maps/Colchis/scripts.pory"
	.string "Ereforethay eitheray engthstray isay,\n"
	.string "oray Iay amay, adbay.$"

Colchis_Text_GruntThroneM3Post::
# 3847 "data//maps/Colchis/scripts.pory"
	.string "Ifay evilay insway enthay atefay isay\n"
	.string "adbay oray indblay.$"

Colchis_Text_GruntThroneM4Fight::
# 3854 "data//maps/Colchis/scripts.pory"
	.string "Ebellionray inay Olchiscay Ingdomkay\n"
	.string "endsay erehay.$"

Colchis_Text_GruntThroneM4Lost::
# 3858 "data//maps/Colchis/scripts.pory"
	.string "Eholdbay ethay ancientay egimeray\n"
	.string "iesday odaytay.$"

Colchis_Text_GruntThroneM4Post::
# 3862 "data//maps/Colchis/scripts.pory"
	.string "Aymay Ohay-Ohay anday Ugialay avesay\n"
	.string "ouray oulssay!$"

Colchis_Text_GruntThroneM5Fight::
# 3869 "data//maps/Colchis/scripts.pory"
	.string "Andstay ownday!$"

Colchis_Text_GruntThroneM5Lost::
# 3873 "data//maps/Colchis/scripts.pory"
	.string "I'veay eenbray oughtbray otay\n"
	.string "attenday efeatday.$"

Colchis_Text_GruntThroneM5Post::
# 3877 "data//maps/Colchis/scripts.pory"
	.string "I'llay ebay eheadedbay orfay ailingfay\n"
	.string "ymay ingkay!$"

Colchis_Text_GruntThroneM6Fight::
# 3884 "data//maps/Colchis/scripts.pory"
	.string "Owhay areday ouyay ingbray arway\n"
	.string "uponay ouray ing'skay eacepay?$"

Colchis_Text_GruntThroneM6Lost::
# 3888 "data//maps/Colchis/scripts.pory"
	.string "Ethay onglay eacepay ofay Olchiscay\n"
	.string "omescay otay anay enday.$"

Colchis_Text_GruntThroneM6Post::
# 3892 "data//maps/Colchis/scripts.pory"
	.string "Aay arway, afteray it'say oncievedcay,\n"
	.string "isay ardhay otay illkay.$"

Colchis_Text_JasonExeunt::
# 3896 "data//maps/Colchis/scripts.pory"
	.string "Let's go. Medea, show us the way out.$"
