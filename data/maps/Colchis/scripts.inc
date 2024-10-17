Colchis_MapScripts::
# 105 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 120 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 126 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME
# 140 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 106 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 109 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 112 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 17
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 115 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	return

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 107 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupJail
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 110 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupLostKid
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 109 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 113 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_ShowNannyWithGuard
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 116 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
# 121 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 122 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME:
# 128 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_MAREEP, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2
Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 133 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 129 "data/maps/Colchis/scripts.pory"
	hideobjectat 2, MAP_COLCHIS
# 130 "data/maps/Colchis/scripts.pory"
	removeobject 2
	goto Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 134 "data/maps/Colchis/scripts.pory"
	hideobjectat 1, MAP_COLCHIS
# 135 "data/maps/Colchis/scripts.pory"
	removeobject 1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 141 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
# 143 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_WarpSanctum::
# 152 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 153 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 34, 56
	end


Colchis_TempScript_SetupTestMedeaDance::
# 158 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 159 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 165 "data/maps/Colchis/scripts.pory"
	lockall
# 166 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 167 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SetupJail::
# 172 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 173 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 174 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
# 175 "data/maps/Colchis/scripts.pory"
	addobject 54
# 176 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 183 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 184 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 185 "data/maps/Colchis/scripts.pory"
	closemessage
# 186 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 194 "data/maps/Colchis/scripts.pory"
	lockall
# 196 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 198 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 199 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 200 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 201 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 202 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 203 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 206 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 207 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 208 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 211 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 212 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 213 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 218 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 219 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 220 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 223 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 224 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 225 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 226 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 227 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 228 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 229 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 230 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 231 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 232 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 233 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 234 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 235 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 236 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 237 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 238 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 239 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 242 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 243 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 244 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 245 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 246 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 247 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 248 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 249 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 250 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 251 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 252 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 253 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 254 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 257 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 258 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 259 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 262 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 263 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 264 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 268 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 269 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 270 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 271 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 272 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 273 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 274 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 275 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 276 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 277 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 279 "data/maps/Colchis/scripts.pory"
	closemessage
# 281 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 289 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 290 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 291 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 292 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 293 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 294 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 295 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 296 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 297 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 300 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 301 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 302 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 304 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 305 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 306 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 307 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 308 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 309 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 310 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 314 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 321 "data/maps/Colchis/scripts.pory"
	lockall
# 322 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 324 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 331 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 332 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 333 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 335 "data/maps/Colchis/scripts.pory"
	addobject 23
# 336 "data/maps/Colchis/scripts.pory"
	addobject 24
# 338 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 339 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 343 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 344 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 346 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 347 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 348 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 351 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 352 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPre, MSGBOX_DEFAULT
# 353 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 354 "data/maps/Colchis/scripts.pory"
	closemessage
# 357 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
# 360 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 361 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPost, MSGBOX_DEFAULT
# 362 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 363 "data/maps/Colchis/scripts.pory"
	closemessage
# 366 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleExitA
# 367 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleExitB
# 368 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 371 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 372 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 374 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 23, 0, 0
# 375 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 24, 2, 0
# 377 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_FACE_DOWN
# 378 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_UP
# 380 "data/maps/Colchis/scripts.pory"
	addobject 23
# 381 "data/maps/Colchis/scripts.pory"
	addobject 24
# 383 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 384 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
	return


Colchis_Script_MedeaDance::
# 394 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 395 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 396 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 401 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 402 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 403 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 404 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 405 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 406 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 407 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 408 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 409 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 410 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 411 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 412 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 413 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 414 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 415 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 416 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 417 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 418 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 427 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 429 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 430 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 431 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 432 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 433 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 435 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 437 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 438 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 439 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 441 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 443 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 444 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 445 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 447 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 453 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 454 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 455 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 456 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 457 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 458 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 459 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 461 "data/maps/Colchis/scripts.pory"
	waitmovement 13
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
	waitmovement 13
# 471 "data/maps/Colchis/scripts.pory"
	delay 25
# 473 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 474 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 475 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 476 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 477 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 479 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 486 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 487 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 488 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 489 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 490 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 491 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 492 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 494 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 496 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 497 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 498 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 499 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 500 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 501 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 503 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 505 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 506 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 507 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 508 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 509 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 511 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 513 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 514 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 515 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 516 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 517 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 519 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 522 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 523 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 524 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 525 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 527 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 529 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 530 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 531 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 532 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 533 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 535 "data/maps/Colchis/scripts.pory"
	waitmovement 16
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
# 546 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 547 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 549 "data/maps/Colchis/scripts.pory"
	waitmovement 4
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
# 557 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 563 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 569 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 570 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 572 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 573 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 574 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 575 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 577 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 582 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 588 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 589 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 590 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 591 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 592 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 593 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 594 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 596 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 602 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 605 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
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
# 624 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 625 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 626 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 627 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 628 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 629 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 630 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 632 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 637 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
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
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 652 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 653 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 654 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 655 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 656 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 657 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 659 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 661 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
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
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 676 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 677 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 678 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 679 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 680 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 681 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 683 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 685 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
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
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 700 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 701 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 702 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 703 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 704 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 705 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 707 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 709 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 719 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 720 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 721 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 722 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 723 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 724 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 725 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 726 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 728 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 730 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 732 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 733 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 734 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 735 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 736 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 737 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 738 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 739 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 741 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 743 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 745 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 746 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 747 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 748 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 749 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 750 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 751 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 752 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 754 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 756 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 763 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 764 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 765 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 766 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 767 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 768 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 769 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 770 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 772 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 773 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 775 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 776 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 779 "data/maps/Colchis/scripts.pory"
	delay 25
# 783 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 784 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 788 "data/maps/Colchis/scripts.pory"
	delay 25
# 790 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 791 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 795 "data/maps/Colchis/scripts.pory"
	delay 25
# 797 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 798 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 802 "data/maps/Colchis/scripts.pory"
	delay 25
# 804 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 805 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 806 "data/maps/Colchis/scripts.pory"
	delay 25
# 811 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 812 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 813 "data/maps/Colchis/scripts.pory"
	delay 25
# 815 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 816 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 817 "data/maps/Colchis/scripts.pory"
	delay 25
# 822 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 823 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 824 "data/maps/Colchis/scripts.pory"
	delay 25
# 826 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 827 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 828 "data/maps/Colchis/scripts.pory"
	delay 25
# 830 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 831 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 832 "data/maps/Colchis/scripts.pory"
	delay 25
# 834 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 835 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 836 "data/maps/Colchis/scripts.pory"
	delay 25
# 841 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 842 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 843 "data/maps/Colchis/scripts.pory"
	delay 25
# 845 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 846 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 847 "data/maps/Colchis/scripts.pory"
	delay 25
# 849 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 850 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 851 "data/maps/Colchis/scripts.pory"
	delay 25
# 853 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 854 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 855 "data/maps/Colchis/scripts.pory"
	delay 25
# 857 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 859 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 860 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 861 "data/maps/Colchis/scripts.pory"
	delay 25
# 866 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 867 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 868 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 869 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 870 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 871 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 872 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 873 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 875 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 886 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 887 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 888 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 889 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 890 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 891 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 892 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 893 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 894 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 899 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 900 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 901 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 902 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 903 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 904 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 905 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 906 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 907 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 912 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 913 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 914 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 915 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 916 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 917 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 918 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 919 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 920 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 925 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 926 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 927 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 928 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 929 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 930 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 931 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 932 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 933 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 938 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 939 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 940 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 941 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 942 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 943 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 944 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 945 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 946 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 951 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 952 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 953 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 954 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 955 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 956 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 957 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 958 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 959 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 964 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 965 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 966 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 967 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 968 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 969 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 970 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 971 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 972 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 977 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 978 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 979 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 980 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 981 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 982 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 983 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 984 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 985 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 990 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 991 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 992 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 993 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 994 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 995 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 996 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 997 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 998 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1001 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1002 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 1004 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 1005 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1006 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1007 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1008 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1010 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1011 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1012 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 1013 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 1014 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1015 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1016 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1017 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1018 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1020 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1021 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1022 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1023 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1024 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1026 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1027 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1028 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1033 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1034 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1036 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1038 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1045 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1046 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1047 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1048 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1049 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1050 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1051 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1052 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1057 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
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
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1066 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1067 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1071 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1072 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1073 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1078 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1079 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1080 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1081 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1082 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1083 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1084 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1085 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1086 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1087 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1088 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1089 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1090 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1091 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1092 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1093 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1094 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1095 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1096 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1097 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1098 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1099 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1100 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1101 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1102 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1103 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1104 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1105 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1106 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1107 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1108 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1109 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1110 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1111 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1112 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1113 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1114 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1115 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1116 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1117 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1118 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1119 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1120 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1121 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1122 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1123 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1124 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1125 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1126 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1127 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1128 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1129 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1130 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1131 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1132 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1133 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1134 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1146 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1147 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1148 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1153 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1154 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1155 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1156 "data/maps/Colchis/scripts.pory"
	closemessage
# 1158 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1162 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1163 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1164 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1165 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1166 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1168 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1169 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1170 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1172 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1173 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1174 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1175 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1184 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1185 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1186 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1191 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1192 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1193 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1200 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1201 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1202 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1207 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1208 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1209 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1218 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1219 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1220 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1221 "data/maps/Colchis/scripts.pory"
	closemessage
# 1224 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1225 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1226 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1235 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1236 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1237 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1242 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1243 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1244 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1247 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1248 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1249 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1250 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1251 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1255 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1256 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1257 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1261 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1262 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1263 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1265 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1266 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1267 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1271 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1272 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1274 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1275 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1281 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1282 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1283 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1284 "data/maps/Colchis/scripts.pory"
	closemessage
# 1287 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1288 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1291 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1292 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1300 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1306 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1307 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1308 "data/maps/Colchis/scripts.pory"
	closemessage
# 1309 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1312 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1313 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1316 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1317 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1318 "data/maps/Colchis/scripts.pory"
	closemessage
# 1319 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1322 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1323 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1324 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1325 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1328 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1329 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1330 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1331 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1332 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1335 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1336 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1337 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1338 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1339 "data/maps/Colchis/scripts.pory"
	delay 30
# 1340 "data/maps/Colchis/scripts.pory"
	waitse
# 1343 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonApproachPlayer
# 1344 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1347 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1348 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1349 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1352 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1353 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1354 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1357 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1358 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1359 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1362 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1363 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1364 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1367 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1368 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1369 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1371 "data/maps/Colchis/scripts.pory"
	closemessage
# 1374 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1375 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1378 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1379 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1380 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1381 "data/maps/Colchis/scripts.pory"
	closemessage
# 1384 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1385 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1388 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1389 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1390 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1393 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1394 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1395 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1397 "data/maps/Colchis/scripts.pory"
	closemessage
# 1401 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonExit
# 1402 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_JasonPrisonExit
# 1403 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_PlayerPrisonExit
# 1404 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1406 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1414 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1415 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1418 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1419 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1420 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1422 "data/maps/Colchis/scripts.pory"
	closemessage
# 1425 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1426 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1429 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1430 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1431 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1432 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1433 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1436 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1437 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 1
# 1438 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1439 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 1
# 1443 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1444 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1447 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1448 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1449 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1452 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1453 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1454 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1457 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1458 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1461 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1462 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1463 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1465 "data/maps/Colchis/scripts.pory"
	closemessage
# 1468 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1469 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1472 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1473 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1475 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1476 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1478 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1479 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1481 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1482 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1483 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1486 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1487 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1488 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1489 "data/maps/Colchis/scripts.pory"
	closemessage
# 1492 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1493 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1496 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1497 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1500 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1503 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1504 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1505 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1506 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1508 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1509 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1510 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1511 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1512 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_LugiaTest::
# 1518 "data/maps/Colchis/scripts.pory"
	lockall
# 1519 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1520 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1521 "data/maps/Colchis/scripts.pory"
	closemessage
# 1522 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_Lugia::
# 1527 "data/maps/Colchis/scripts.pory"
	lockall
# 1528 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1529 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 1530 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1531 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_LUGIA
# 1532 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1533 "data/maps/Colchis/scripts.pory"
	setwildbattle SPECIES_LUGIA, 18
# 1534 "data/maps/Colchis/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1535 "data/maps/Colchis/scripts.pory"
	waitstate
# 1536 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1537 "data/maps/Colchis/scripts.pory"
	removeobject 1
# 1538 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTriggerA::
# 1544 "data/maps/Colchis/scripts.pory"
	lockall
# 1545 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 0
# 1546 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTriggerB::
# 1550 "data/maps/Colchis/scripts.pory"
	lockall
# 1551 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 1
# 1552 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTrigger::
# 1557 "data/maps/Colchis/scripts.pory"
	lockall
# 1560 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1561 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1562 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1563 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1564 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1565 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1568 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_4
Colchis_Script_SanctumTrigger_3:
# 1572 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 12
# 1574 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerEndIntro
# 1576 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_7
# 1595 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_8
# 1617 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1618 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1619 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
# 1620 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
Colchis_Script_SanctumTrigger_1:
# 1623 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_SanctumTrigger_2:
# 1569 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_4:
# 1568 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_2
	goto Colchis_Script_SanctumTrigger_3

Colchis_Script_SanctumTrigger_7:
# 1579 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1582 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1586 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_8:
# 1596 "data/maps/Colchis/scripts.pory"
	closemessage
# 1598 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1599 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumTrigger_12
# 1604 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1605 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1607 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1608 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumWilds, MSGBOX_DEFAULT
# 1609 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1614 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_12:
# 1601 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Exeunt
	goto Colchis_Script_SanctumTrigger_1


Colchis_Script_SanctumTriggerReturn::
# 1628 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1629 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger1, MSGBOX_DEFAULT
# 1630 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1632 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1633 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger1, MSGBOX_DEFAULT
# 1634 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1636 "data/maps/Colchis/scripts.pory"
	closemessage
# 1639 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1640 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_SanctumTriggerEndIntro::
# 1648 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1649 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1650 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumTriggerMedeaExit::
# 1655 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1656 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger2, MSGBOX_DEFAULT
# 1657 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1658 "data/maps/Colchis/scripts.pory"
	closemessage
# 1659 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTriggerMedeaExit_2
# 1662 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3B
Colchis_Script_SanctumTriggerMedeaExit_1:
# 1664 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumTriggerMedeaExit_2:
# 1660 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3A
	goto Colchis_Script_SanctumTriggerMedeaExit_1


Colchis_Script_LugiaChaseTrigger::
# 1669 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1670 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaChaseTrigger_2
Colchis_Script_LugiaChaseTrigger_1:
	end

Colchis_Script_LugiaChaseTrigger_2:
# 1671 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	goto Colchis_Script_LugiaChaseTrigger_1


Colchis_Script_LugiaWanderTrigger::
# 1677 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1678 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaWanderTrigger_2
Colchis_Script_LugiaWanderTrigger_1:
	end

Colchis_Script_LugiaWanderTrigger_2:
# 1679 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	goto Colchis_Script_LugiaWanderTrigger_1


Colchis_Script_ShinyMareep::
# 1685 "data/maps/Colchis/scripts.pory"
	lockall
# 1686 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1687 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 1688 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1689 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1690 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1691 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1692 "data/maps/Colchis/scripts.pory"
	waitstate
# 1693 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1694 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1695 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumApproachJason::
# 1700 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumApproachJason_2
# 1703 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3B
Colchis_Script_SanctumApproachJason_1:
# 1705 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1707 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1708 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumApproachJason_2:
# 1701 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3A
	goto Colchis_Script_SanctumApproachJason_1


Colchis_Script_SanctumJasonBattle::
# 1714 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1715 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1717 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1718 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger3, MSGBOX_DEFAULT
# 1719 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1720 "data/maps/Colchis/scripts.pory"
	closemessage
# 1722 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_JASON, Colchis_Text_JasonLost
# 1724 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1725 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPost, MSGBOX_DEFAULT
# 1726 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumMedeaReturn::
# 1733 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1734 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1735 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1737 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1738 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1739 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1742 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1743 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumMedeaReturn_Text_0, MSGBOX_DEFAULT
# 1744 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1745 "data/maps/Colchis/scripts.pory"
	closemessage
# 1748 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn
# 1749 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1752 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1753 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn1, MSGBOX_DEFAULT
# 1754 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1755 "data/maps/Colchis/scripts.pory"
	closemessage
# 1758 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumMedeaReturn_2
# 1761 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2B
Colchis_Script_SanctumMedeaReturn_1:
# 1763 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1765 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1766 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1769 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1770 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn2, MSGBOX_DEFAULT
# 1771 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1772 "data/maps/Colchis/scripts.pory"
	closemessage
# 1777 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1778 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn1, MSGBOX_DEFAULT
# 1779 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1783 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumMedeaReturn_6
Colchis_Script_SanctumMedeaReturn_5:
# 1793 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	return

Colchis_Script_SanctumMedeaReturn_2:
# 1759 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2A
	goto Colchis_Script_SanctumMedeaReturn_1

Colchis_Script_SanctumMedeaReturn_6:
# 1784 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1785 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1786 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1787 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn2, MSGBOX_DEFAULT
# 1788 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1789 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1790 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_SanctumMedeaReturn_5


Colchis_Script_SanctumJasonCheckMareep::
# 1800 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, IsShinyMareepInParty
# 1802 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_2
# 1807 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1808 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonGiveMeMareep, MSGBOX_DEFAULT
# 1809 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1811 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GiveJasonMareep, MSGBOX_YESNO
# 1813 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_5
# 1817 "data/maps/Colchis/scripts.pory"
	special ChoosePartyMon
# 1818 "data/maps/Colchis/scripts.pory"
	waitstate
# 1820 "data/maps/Colchis/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_8
# 1824 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1826 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, SPECIES_MAREEP
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_11
# 1830 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonIsShiny
# 1832 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_14
# 1836 "data/maps/Colchis/scripts.pory"
	special BufferMonNickname
# 1837 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GaveShinyMareep, MSGBOX_DEFAULT
# 1838 "data/maps/Colchis/scripts.pory"
	closemessage
# 1839 "data/maps/Colchis/scripts.pory"
	special ReleaseChosenMon
# 1841 "data/maps/Colchis/scripts.pory"
	setflag FLAG_JASON_HAS_SHINYMAREEP
Colchis_Script_SanctumJasonCheckMareep_1:
	return

Colchis_Script_SanctumJasonCheckMareep_2:
# 1803 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_5:
# 1814 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_8:
# 1821 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_11:
# 1827 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_14:
# 1833 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1


Colchis_Script_SanctumJasonMareep::
# 1854 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumApproachJason
# 1857 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	return


Colchis_Script_Exeunt::
# 1864 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 14
# 1866 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_Exeunt
# 1867 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_Exeunt
# 1868 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_Exeunt
# 1869 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1871 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_BIG_ISLAND_N, 31, 37
	end


Colchis_Script_SetupEscapeFromColchis::
# 1877 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1878 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumDepart, MSGBOX_DEFAULT
# 1879 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1880 "data/maps/Colchis/scripts.pory"
	closemessage
# 1883 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAndMedeaExeunt
# 1884 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_JasonAndMedeaExeunt
# 1885 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1889 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 14, 0
# 1890 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_INVISIBLE
# 1892 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 15, 0
# 1893 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 1895 "data/maps/Colchis/scripts.pory"
	hideobjectat 54, MAP_COLCHIS
# 1896 "data/maps/Colchis/scripts.pory"
	hideobjectat 4, MAP_COLCHIS
# 1898 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1899 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1906 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 16
# 1909 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
# 1910 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1915 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_TrainerAeetes::
# 1928 "data/maps/Colchis/scripts.pory"
	lockall
# 1929 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1931 "data/maps/Colchis/scripts.pory"
	checktrainerflag TRAINER_AEETES
	goto_if 0, Colchis_Script_TrainerAeetes_2
# 1949 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1950 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1951 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
Colchis_Script_TrainerAeetes_1:
# 1953 "data/maps/Colchis/scripts.pory"
	closemessage
# 1954 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_TrainerAeetes_2:
# 1933 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1934 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesIntro, MSGBOX_DEFAULT
# 1935 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1936 "data/maps/Colchis/scripts.pory"
	closemessage
# 1937 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_AEETES, Colchis_Text_AeetesLost
# 1938 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1939 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesPost, MSGBOX_DEFAULT
# 1940 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1942 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_KEY
# 1944 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1945 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1946 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
	goto Colchis_Script_TrainerAeetes_1


Colchis_Script_Bed::
# 1959 "data/maps/Colchis/scripts.pory"
	lockall
# 1960 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Bed, MSGBOX_YESNO
# 1961 "data/maps/Colchis/scripts.pory"
	closemessage
# 1962 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Bed_2
Colchis_Script_Bed_1:
# 1965 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Bed_2:
# 1963 "data/maps/Colchis/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Colchis_Script_Bed_1


Colchis_Script_RingBlocker::
# 1970 "data/maps/Colchis/scripts.pory"
	lockall
# 1971 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1974 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerIntro, MSGBOX_DEFAULT
# 1976 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_KEY, 1
# 1981 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_RingBlocker_2
# 2012 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_RingBlocker_1:
# 2016 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_RingBlocker_2:
# 1982 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerYesNo, MSGBOX_YESNO
# 1983 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_RingBlocker_5
# 2008 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerDecline, MSGBOX_DEFAULT
# 2009 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_RingBlocker_1

Colchis_Script_RingBlocker_5:
# 1986 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_KeyFits, MSGBOX_DEFAULT
# 1987 "data/maps/Colchis/scripts.pory"
	closemessage
# 1988 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_KEY
# 1989 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1991 "data/maps/Colchis/scripts.pory"
	hideobjectat 55, MAP_COLCHIS
# 1992 "data/maps/Colchis/scripts.pory"
	removeobject 55
# 1993 "data/maps/Colchis/scripts.pory"
	hideobjectat 56, MAP_COLCHIS
# 1994 "data/maps/Colchis/scripts.pory"
	removeobject 56
# 1995 "data/maps/Colchis/scripts.pory"
	hideobjectat 57, MAP_COLCHIS
# 1996 "data/maps/Colchis/scripts.pory"
	removeobject 57
# 1998 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 55, MOVEMENT_TYPE_INVISIBLE
# 1999 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 55, 1, 3
# 2000 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 56, MOVEMENT_TYPE_INVISIBLE
# 2001 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 56, 2, 3
# 2002 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 57, MOVEMENT_TYPE_INVISIBLE
# 2003 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 57, 3, 3
# 2005 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBARRIER
	goto Colchis_Script_RingBlocker_1


Colchis_Script_RingItem::
# 2021 "data/maps/Colchis/scripts.pory"
	lock
# 2022 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2023 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_RING
# 2024 "data/maps/Colchis/scripts.pory"
	hideobjectat 58, MAP_COLCHIS
# 2025 "data/maps/Colchis/scripts.pory"
	removeobject 58
# 2026 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBALL
# 2027 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 58, MOVEMENT_TYPE_INVISIBLE
# 2028 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 58, 4, 3
# 2029 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_CloseDoor::
# 2034 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, TRUE
# 2035 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, TRUE
	return


Colchis_Script_SetupLostKid::
# 2040 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2041 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 28, 12
# 2042 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_LOOK_AROUND
# 2043 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2044 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	return


Colchis_Script_ShowNannyWithGuard::
# 2049 "data/maps/Colchis/scripts.pory"
	removeobject 30
# 2050 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 30, 7, 50
# 2051 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_LEFT
# 2052 "data/maps/Colchis/scripts.pory"
	addobject 30
# 2053 "data/maps/Colchis/scripts.pory"
	showobjectat 30, MAP_COLCHIS
# 2055 "data/maps/Colchis/scripts.pory"
	removeobject 51
# 2056 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 51, 6, 50
# 2057 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 51, MOVEMENT_TYPE_FACE_RIGHT
# 2058 "data/maps/Colchis/scripts.pory"
	addobject 51
# 2059 "data/maps/Colchis/scripts.pory"
	showobjectat 51, MAP_COLCHIS
	return


Colchis_Script_Chef::
# 2065 "data/maps/Colchis/scripts.pory"
	lockall
# 2066 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2069 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Chef_2
# 2076 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Movement_ChefIntro, MSGBOX_DEFAULT
# 2077 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_RING
# 2078 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Chef_5
# 2108 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Chef_1:
# 2111 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Chef_2:
# 2070 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefProposal, MSGBOX_DEFAULT
# 2071 "data/maps/Colchis/scripts.pory"
	closemessage
# 2072 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_FaceRight
# 2073 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_5:
# 2079 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefRingYesNo, MSGBOX_YESNO
# 2080 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Chef_8
# 2104 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRingNo, MSGBOX_DEFAULT
# 2105 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_8:
# 2082 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_RING
# 2083 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRing, MSGBOX_DEFAULT
# 2084 "data/maps/Colchis/scripts.pory"
	closemessage
# 2086 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_ExclamationMark
# 2087 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2088 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks1, MSGBOX_DEFAULT
# 2089 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_APPLE
# 2091 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks2, MSGBOX_DEFAULT
# 2092 "data/maps/Colchis/scripts.pory"
	closemessage
# 2094 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2095 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Colchis_Script_Chef_12
Colchis_Script_Chef_11:
# 2099 "data/maps/Colchis/scripts.pory"
	applymovement 44, Colchis_Movement_ChefExit
# 2100 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2102 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_12:
# 2096 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_WalkUp
# 2097 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_11


Colchis_Script_MoveChef::
# 2116 "data/maps/Colchis/scripts.pory"
	removeobject 44
# 2117 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 44, 59, 62
# 2118 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 44, MOVEMENT_TYPE_FACE_RIGHT
# 2119 "data/maps/Colchis/scripts.pory"
	addobject 44
# 2120 "data/maps/Colchis/scripts.pory"
	showobjectat 44, MAP_COLCHIS
# 2122 "data/maps/Colchis/scripts.pory"
	removeobject 37
# 2123 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 37, 60, 62
# 2124 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_LEFT
# 2125 "data/maps/Colchis/scripts.pory"
	addobject 37
# 2126 "data/maps/Colchis/scripts.pory"
	showobjectat 37, MAP_COLCHIS
	return


Colchis_Script_Maid::
# 2132 "data/maps/Colchis/scripts.pory"
	lockall
# 2133 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2134 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Maid_2
# 2140 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid1, MSGBOX_DEFAULT
# 2141 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Maid_1:
# 2143 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Maid_2:
# 2135 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid2, MSGBOX_DEFAULT
# 2136 "data/maps/Colchis/scripts.pory"
	closemessage
# 2137 "data/maps/Colchis/scripts.pory"
	applymovement 37, Common_Movement_FaceLeft
# 2138 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Maid_1


Colchis_Script_Jailer::
# 2148 "data/maps/Colchis/scripts.pory"
	lockall
# 2149 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2156 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerIntro, MSGBOX_DEFAULT
# 2159 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_APPLE
# 2160 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Jailer_2
# 2180 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Jailer_1:
# 2182 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Jailer_2:
# 2161 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerAppleYesNo, MSGBOX_YESNO
# 2162 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Jailer_5
# 2176 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveAppleNo, MSGBOX_DEFAULT
# 2177 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1

Colchis_Script_Jailer_5:
# 2163 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_APPLE
# 2165 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveApple, MSGBOX_DEFAULT
# 2166 "data/maps/Colchis/scripts.pory"
	closemessage
# 2168 "data/maps/Colchis/scripts.pory"
	applymovement 32, Common_Movement_ExclamationMark
# 2169 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2170 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks1, MSGBOX_DEFAULT
# 2171 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_JAIL_KEY
# 2173 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks2, MSGBOX_DEFAULT
# 2174 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1


# 2186 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 2187 "data/maps/Colchis/scripts.pory"
	walk_up
# 2187 "data/maps/Colchis/scripts.pory"
	walk_up
# 2187 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2190 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 2191 "data/maps/Colchis/scripts.pory"
	walk_down
# 2191 "data/maps/Colchis/scripts.pory"
	walk_down
# 2191 "data/maps/Colchis/scripts.pory"
	walk_down
# 2191 "data/maps/Colchis/scripts.pory"
	walk_down
# 2191 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2194 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 2195 "data/maps/Colchis/scripts.pory"
	walk_up
# 2195 "data/maps/Colchis/scripts.pory"
	walk_up
# 2195 "data/maps/Colchis/scripts.pory"
	walk_up
# 2195 "data/maps/Colchis/scripts.pory"
	walk_up
# 2195 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2198 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitA:
# 2199 "data/maps/Colchis/scripts.pory"
	walk_up
# 2199 "data/maps/Colchis/scripts.pory"
	walk_up
# 2199 "data/maps/Colchis/scripts.pory"
	walk_up
# 2199 "data/maps/Colchis/scripts.pory"
	walk_up
# 2199 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2202 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitB:
# 2203 "data/maps/Colchis/scripts.pory"
	walk_down
# 2203 "data/maps/Colchis/scripts.pory"
	walk_down
# 2203 "data/maps/Colchis/scripts.pory"
	walk_down
# 2203 "data/maps/Colchis/scripts.pory"
	walk_down
# 2203 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2206 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2207 "data/maps/Colchis/scripts.pory"
	walk_up
# 2208 "data/maps/Colchis/scripts.pory"
	walk_right
# 2208 "data/maps/Colchis/scripts.pory"
	walk_right
# 2208 "data/maps/Colchis/scripts.pory"
	walk_right
# 2208 "data/maps/Colchis/scripts.pory"
	walk_right
# 2208 "data/maps/Colchis/scripts.pory"
	walk_right
# 2209 "data/maps/Colchis/scripts.pory"
	walk_up
# 2209 "data/maps/Colchis/scripts.pory"
	walk_up
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_right
# 2211 "data/maps/Colchis/scripts.pory"
	walk_up
# 2211 "data/maps/Colchis/scripts.pory"
	walk_up
# 2211 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2214 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 2215 "data/maps/Colchis/scripts.pory"
	walk_up
# 2215 "data/maps/Colchis/scripts.pory"
	walk_up
# 2215 "data/maps/Colchis/scripts.pory"
	walk_up
# 2215 "data/maps/Colchis/scripts.pory"
	walk_up
# 2215 "data/maps/Colchis/scripts.pory"
	walk_up
# 2215 "data/maps/Colchis/scripts.pory"
	walk_up
# 2215 "data/maps/Colchis/scripts.pory"
	walk_up
# 2215 "data/maps/Colchis/scripts.pory"
	walk_up
# 2215 "data/maps/Colchis/scripts.pory"
	walk_up
# 2215 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2218 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 2219 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2222 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 2223 "data/maps/Colchis/scripts.pory"
	face_right
# 2224 "data/maps/Colchis/scripts.pory"
	face_up
# 2225 "data/maps/Colchis/scripts.pory"
	face_left
# 2226 "data/maps/Colchis/scripts.pory"
	face_down
# 2227 "data/maps/Colchis/scripts.pory"
	face_right
# 2228 "data/maps/Colchis/scripts.pory"
	face_up
# 2229 "data/maps/Colchis/scripts.pory"
	face_left
# 2230 "data/maps/Colchis/scripts.pory"
	face_down
# 2231 "data/maps/Colchis/scripts.pory"
	face_right
# 2232 "data/maps/Colchis/scripts.pory"
	face_up
# 2233 "data/maps/Colchis/scripts.pory"
	face_left
# 2234 "data/maps/Colchis/scripts.pory"
	face_down
# 2235 "data/maps/Colchis/scripts.pory"
	face_right
# 2236 "data/maps/Colchis/scripts.pory"
	face_up
# 2237 "data/maps/Colchis/scripts.pory"
	face_left
# 2238 "data/maps/Colchis/scripts.pory"
	face_down
# 2239 "data/maps/Colchis/scripts.pory"
	face_right
# 2240 "data/maps/Colchis/scripts.pory"
	face_up
# 2241 "data/maps/Colchis/scripts.pory"
	face_left
# 2242 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2245 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 2246 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2246 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2247 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2250 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 2251 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2251 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2252 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2255 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 2256 "data/maps/Colchis/scripts.pory"
	walk_left
# 2257 "data/maps/Colchis/scripts.pory"
	walk_up
# 2257 "data/maps/Colchis/scripts.pory"
	walk_up
# 2258 "data/maps/Colchis/scripts.pory"
	walk_right
# 2258 "data/maps/Colchis/scripts.pory"
	walk_right
# 2259 "data/maps/Colchis/scripts.pory"
	walk_down
# 2259 "data/maps/Colchis/scripts.pory"
	walk_down
# 2260 "data/maps/Colchis/scripts.pory"
	walk_left
# 2261 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2264 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 2265 "data/maps/Colchis/scripts.pory"
	walk_left
# 2266 "data/maps/Colchis/scripts.pory"
	walk_up
# 2266 "data/maps/Colchis/scripts.pory"
	walk_up
# 2267 "data/maps/Colchis/scripts.pory"
	walk_right
# 2267 "data/maps/Colchis/scripts.pory"
	walk_right
# 2268 "data/maps/Colchis/scripts.pory"
	walk_down
# 2268 "data/maps/Colchis/scripts.pory"
	walk_down
# 2269 "data/maps/Colchis/scripts.pory"
	walk_left
# 2270 "data/maps/Colchis/scripts.pory"
	face_down
# 2271 "data/maps/Colchis/scripts.pory"
	walk_left
# 2272 "data/maps/Colchis/scripts.pory"
	walk_up
# 2272 "data/maps/Colchis/scripts.pory"
	walk_up
# 2273 "data/maps/Colchis/scripts.pory"
	walk_right
# 2273 "data/maps/Colchis/scripts.pory"
	walk_right
# 2274 "data/maps/Colchis/scripts.pory"
	walk_down
# 2274 "data/maps/Colchis/scripts.pory"
	walk_down
# 2275 "data/maps/Colchis/scripts.pory"
	walk_left
# 2276 "data/maps/Colchis/scripts.pory"
	face_down
# 2277 "data/maps/Colchis/scripts.pory"
	walk_left
# 2278 "data/maps/Colchis/scripts.pory"
	walk_up
# 2278 "data/maps/Colchis/scripts.pory"
	walk_up
# 2279 "data/maps/Colchis/scripts.pory"
	walk_right
# 2279 "data/maps/Colchis/scripts.pory"
	walk_right
# 2280 "data/maps/Colchis/scripts.pory"
	walk_down
# 2280 "data/maps/Colchis/scripts.pory"
	walk_down
# 2281 "data/maps/Colchis/scripts.pory"
	walk_left
# 2282 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2285 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 2286 "data/maps/Colchis/scripts.pory"
	walk_down
# 2286 "data/maps/Colchis/scripts.pory"
	walk_down
# 2286 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2289 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 2290 "data/maps/Colchis/scripts.pory"
	walk_right
# 2290 "data/maps/Colchis/scripts.pory"
	walk_right
# 2291 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2294 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 2295 "data/maps/Colchis/scripts.pory"
	walk_left
# 2295 "data/maps/Colchis/scripts.pory"
	walk_left
# 2296 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2299 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 2300 "data/maps/Colchis/scripts.pory"
	walk_down
# 2301 "data/maps/Colchis/scripts.pory"
	face_left
# 2302 "data/maps/Colchis/scripts.pory"
	face_up
# 2303 "data/maps/Colchis/scripts.pory"
	face_right
# 2304 "data/maps/Colchis/scripts.pory"
	face_down
# 2305 "data/maps/Colchis/scripts.pory"
	walk_down
# 2306 "data/maps/Colchis/scripts.pory"
	face_left
# 2307 "data/maps/Colchis/scripts.pory"
	face_up
# 2308 "data/maps/Colchis/scripts.pory"
	face_right
# 2309 "data/maps/Colchis/scripts.pory"
	face_down
# 2310 "data/maps/Colchis/scripts.pory"
	walk_down
# 2311 "data/maps/Colchis/scripts.pory"
	face_left
# 2312 "data/maps/Colchis/scripts.pory"
	face_up
# 2313 "data/maps/Colchis/scripts.pory"
	face_right
# 2314 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2317 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 2318 "data/maps/Colchis/scripts.pory"
	walk_right
# 2319 "data/maps/Colchis/scripts.pory"
	walk_up
# 2320 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2321 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2324 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 2325 "data/maps/Colchis/scripts.pory"
	walk_left
# 2326 "data/maps/Colchis/scripts.pory"
	walk_up
# 2327 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2328 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2331 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 2332 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2333 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2336 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 2337 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2338 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2341 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 2342 "data/maps/Colchis/scripts.pory"
	walk_left
# 2343 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2346 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 2347 "data/maps/Colchis/scripts.pory"
	walk_right
# 2348 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2351 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 2352 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2353 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2356 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 2357 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2358 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2361 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 2362 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2365 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 2366 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 2369 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 2370 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 2374 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 2375 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 2378 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 2379 "data/maps/Colchis/scripts.pory"
	walk_up
# 2379 "data/maps/Colchis/scripts.pory"
	walk_up
# 2379 "data/maps/Colchis/scripts.pory"
	walk_up
# 2379 "data/maps/Colchis/scripts.pory"
	walk_up
# 2379 "data/maps/Colchis/scripts.pory"
	walk_up
# 2379 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2382 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 2383 "data/maps/Colchis/scripts.pory"
	walk_right
# 2383 "data/maps/Colchis/scripts.pory"
	walk_right
# 2383 "data/maps/Colchis/scripts.pory"
	walk_right
# 2383 "data/maps/Colchis/scripts.pory"
	walk_right
# 2383 "data/maps/Colchis/scripts.pory"
	walk_right
# 2383 "data/maps/Colchis/scripts.pory"
	walk_right
# 2383 "data/maps/Colchis/scripts.pory"
	walk_right
# 2383 "data/maps/Colchis/scripts.pory"
	walk_right
# 2384 "data/maps/Colchis/scripts.pory"
	walk_down
# 2384 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2387 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 2388 "data/maps/Colchis/scripts.pory"
	walk_right
# 2388 "data/maps/Colchis/scripts.pory"
	walk_right
# 2388 "data/maps/Colchis/scripts.pory"
	walk_right
# 2388 "data/maps/Colchis/scripts.pory"
	walk_right
# 2388 "data/maps/Colchis/scripts.pory"
	walk_right
# 2388 "data/maps/Colchis/scripts.pory"
	walk_right
# 2388 "data/maps/Colchis/scripts.pory"
	walk_right
# 2389 "data/maps/Colchis/scripts.pory"
	walk_down
# 2389 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2392 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 2393 "data/maps/Colchis/scripts.pory"
	walk_right
# 2393 "data/maps/Colchis/scripts.pory"
	walk_right
# 2393 "data/maps/Colchis/scripts.pory"
	walk_right
# 2393 "data/maps/Colchis/scripts.pory"
	walk_right
# 2393 "data/maps/Colchis/scripts.pory"
	walk_right
# 2393 "data/maps/Colchis/scripts.pory"
	walk_right
# 2394 "data/maps/Colchis/scripts.pory"
	walk_down
# 2394 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2397 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 2398 "data/maps/Colchis/scripts.pory"
	walk_right
# 2398 "data/maps/Colchis/scripts.pory"
	walk_right
# 2398 "data/maps/Colchis/scripts.pory"
	walk_right
# 2398 "data/maps/Colchis/scripts.pory"
	walk_right
# 2398 "data/maps/Colchis/scripts.pory"
	walk_right
# 2398 "data/maps/Colchis/scripts.pory"
	walk_right
# 2398 "data/maps/Colchis/scripts.pory"
	walk_right
# 2398 "data/maps/Colchis/scripts.pory"
	walk_right
# 2399 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2402 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 2403 "data/maps/Colchis/scripts.pory"
	walk_right
# 2403 "data/maps/Colchis/scripts.pory"
	walk_right
# 2403 "data/maps/Colchis/scripts.pory"
	walk_right
# 2403 "data/maps/Colchis/scripts.pory"
	walk_right
# 2403 "data/maps/Colchis/scripts.pory"
	walk_right
# 2403 "data/maps/Colchis/scripts.pory"
	walk_right
# 2403 "data/maps/Colchis/scripts.pory"
	walk_right
# 2404 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2407 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 2408 "data/maps/Colchis/scripts.pory"
	walk_right
# 2408 "data/maps/Colchis/scripts.pory"
	walk_right
# 2408 "data/maps/Colchis/scripts.pory"
	walk_right
# 2408 "data/maps/Colchis/scripts.pory"
	walk_right
# 2408 "data/maps/Colchis/scripts.pory"
	walk_right
# 2408 "data/maps/Colchis/scripts.pory"
	walk_right
# 2409 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2412 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2413 "data/maps/Colchis/scripts.pory"
	walk_up
# 2414 "data/maps/Colchis/scripts.pory"
	walk_right
# 2414 "data/maps/Colchis/scripts.pory"
	walk_right
# 2414 "data/maps/Colchis/scripts.pory"
	walk_right
# 2414 "data/maps/Colchis/scripts.pory"
	walk_right
# 2414 "data/maps/Colchis/scripts.pory"
	walk_right
# 2414 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2417 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 2418 "data/maps/Colchis/scripts.pory"
	walk_right
# 2418 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2421 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 2422 "data/maps/Colchis/scripts.pory"
	walk_up
# 2422 "data/maps/Colchis/scripts.pory"
	walk_up
# 2422 "data/maps/Colchis/scripts.pory"
	walk_up
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2423 "data/maps/Colchis/scripts.pory"
	walk_right
# 2424 "data/maps/Colchis/scripts.pory"
	walk_up
# 2424 "data/maps/Colchis/scripts.pory"
	walk_up
# 2424 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2427 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2431 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 2432 "data/maps/Colchis/scripts.pory"
	walk_up
# 2432 "data/maps/Colchis/scripts.pory"
	walk_up
# 2432 "data/maps/Colchis/scripts.pory"
	walk_up
# 2432 "data/maps/Colchis/scripts.pory"
	walk_up
# 2432 "data/maps/Colchis/scripts.pory"
	walk_up
# 2432 "data/maps/Colchis/scripts.pory"
	walk_up
# 2432 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2435 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 2436 "data/maps/Colchis/scripts.pory"
	walk_left
# 2437 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2440 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 2441 "data/maps/Colchis/scripts.pory"
	walk_up
# 2442 "data/maps/Colchis/scripts.pory"
	walk_right
# 2443 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2447 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2451 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 2452 "data/maps/Colchis/scripts.pory"
	walk_right
# 2452 "data/maps/Colchis/scripts.pory"
	walk_right
# 2453 "data/maps/Colchis/scripts.pory"
	walk_down
# 2454 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2457 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 2458 "data/maps/Colchis/scripts.pory"
	walk_left
# 2459 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2462 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 2463 "data/maps/Colchis/scripts.pory"
	walk_right
# 2464 "data/maps/Colchis/scripts.pory"
	walk_up
# 2465 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2468 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 2469 "data/maps/Colchis/scripts.pory"
	walk_left
# 2470 "data/maps/Colchis/scripts.pory"
	walk_up
# 2471 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2474 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 2475 "data/maps/Colchis/scripts.pory"
	walk_down
# 2475 "data/maps/Colchis/scripts.pory"
	walk_down
# 2475 "data/maps/Colchis/scripts.pory"
	walk_down
# 2475 "data/maps/Colchis/scripts.pory"
	walk_down
# 2475 "data/maps/Colchis/scripts.pory"
	walk_down
# 2475 "data/maps/Colchis/scripts.pory"
	walk_down
# 2475 "data/maps/Colchis/scripts.pory"
	walk_down
# 2475 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2478 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 2479 "data/maps/Colchis/scripts.pory"
	walk_up
# 2479 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2482 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonApproachPlayer:
# 2483 "data/maps/Colchis/scripts.pory"
	walk_up
# 2483 "data/maps/Colchis/scripts.pory"
	walk_up
# 2483 "data/maps/Colchis/scripts.pory"
	walk_up
# 2483 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2486 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonExit:
# 2487 "data/maps/Colchis/scripts.pory"
	walk_down
# 2487 "data/maps/Colchis/scripts.pory"
	walk_down
# 2487 "data/maps/Colchis/scripts.pory"
	walk_down
# 2487 "data/maps/Colchis/scripts.pory"
	walk_down
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2488 "data/maps/Colchis/scripts.pory"
	walk_left
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2489 "data/maps/Colchis/scripts.pory"
	walk_down
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2490 "data/maps/Colchis/scripts.pory"
	walk_right
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2491 "data/maps/Colchis/scripts.pory"
	walk_down
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
# 2492 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2495 "data/maps/Colchis/scripts.pory"
Common_Movement_JasonPrisonExit:
# 2496 "data/maps/Colchis/scripts.pory"
	walk_down
# 2496 "data/maps/Colchis/scripts.pory"
	walk_down
# 2496 "data/maps/Colchis/scripts.pory"
	walk_down
# 2496 "data/maps/Colchis/scripts.pory"
	walk_down
# 2496 "data/maps/Colchis/scripts.pory"
	walk_down
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2498 "data/maps/Colchis/scripts.pory"
	walk_down
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2504 "data/maps/Colchis/scripts.pory"
Common_Movement_PlayerPrisonExit:
# 2505 "data/maps/Colchis/scripts.pory"
	walk_down
# 2505 "data/maps/Colchis/scripts.pory"
	walk_down
# 2505 "data/maps/Colchis/scripts.pory"
	walk_down
# 2505 "data/maps/Colchis/scripts.pory"
	walk_down
# 2505 "data/maps/Colchis/scripts.pory"
	walk_down
# 2505 "data/maps/Colchis/scripts.pory"
	walk_down
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2507 "data/maps/Colchis/scripts.pory"
	walk_down
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2513 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 2514 "data/maps/Colchis/scripts.pory"
	walk_left
# 2514 "data/maps/Colchis/scripts.pory"
	walk_left
# 2514 "data/maps/Colchis/scripts.pory"
	walk_left
# 2515 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2518 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 2519 "data/maps/Colchis/scripts.pory"
	walk_down
# 2520 "data/maps/Colchis/scripts.pory"
	walk_right
# 2520 "data/maps/Colchis/scripts.pory"
	walk_right
# 2520 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2523 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 2524 "data/maps/Colchis/scripts.pory"
	walk_up
# 2524 "data/maps/Colchis/scripts.pory"
	walk_up
# 2524 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2527 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 2528 "data/maps/Colchis/scripts.pory"
	walk_up
# 2528 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2531 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3A:
# 2532 "data/maps/Colchis/scripts.pory"
	walk_up
# 2532 "data/maps/Colchis/scripts.pory"
	walk_up
# 2533 "data/maps/Colchis/scripts.pory"
	walk_right
# 2533 "data/maps/Colchis/scripts.pory"
	walk_right
# 2534 "data/maps/Colchis/scripts.pory"
	walk_up
# 2534 "data/maps/Colchis/scripts.pory"
	walk_up
# 2534 "data/maps/Colchis/scripts.pory"
	walk_up
# 2534 "data/maps/Colchis/scripts.pory"
	walk_up
# 2534 "data/maps/Colchis/scripts.pory"
	walk_up
# 2534 "data/maps/Colchis/scripts.pory"
	walk_up
# 2534 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2537 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3B:
# 2538 "data/maps/Colchis/scripts.pory"
	walk_up
# 2538 "data/maps/Colchis/scripts.pory"
	walk_up
# 2539 "data/maps/Colchis/scripts.pory"
	walk_right
# 2540 "data/maps/Colchis/scripts.pory"
	walk_up
# 2540 "data/maps/Colchis/scripts.pory"
	walk_up
# 2540 "data/maps/Colchis/scripts.pory"
	walk_up
# 2540 "data/maps/Colchis/scripts.pory"
	walk_up
# 2540 "data/maps/Colchis/scripts.pory"
	walk_up
# 2540 "data/maps/Colchis/scripts.pory"
	walk_up
# 2540 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2543 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3A:
# 2544 "data/maps/Colchis/scripts.pory"
	walk_down
# 2545 "data/maps/Colchis/scripts.pory"
	walk_right
# 2546 "data/maps/Colchis/scripts.pory"
	walk_down
# 2546 "data/maps/Colchis/scripts.pory"
	walk_down
# 2547 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2550 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3B:
# 2551 "data/maps/Colchis/scripts.pory"
	walk_down
# 2551 "data/maps/Colchis/scripts.pory"
	walk_down
# 2551 "data/maps/Colchis/scripts.pory"
	walk_down
# 2552 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2555 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn:
# 2556 "data/maps/Colchis/scripts.pory"
	walk_down
# 2556 "data/maps/Colchis/scripts.pory"
	walk_down
# 2556 "data/maps/Colchis/scripts.pory"
	walk_down
# 2556 "data/maps/Colchis/scripts.pory"
	walk_down
# 2556 "data/maps/Colchis/scripts.pory"
	walk_down
# 2556 "data/maps/Colchis/scripts.pory"
	walk_down
# 2556 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2559 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2A:
# 2560 "data/maps/Colchis/scripts.pory"
	walk_down
# 2561 "data/maps/Colchis/scripts.pory"
	walk_left
# 2561 "data/maps/Colchis/scripts.pory"
	walk_left
# 2562 "data/maps/Colchis/scripts.pory"
	walk_down
# 2563 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2566 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2B:
# 2567 "data/maps/Colchis/scripts.pory"
	walk_down
# 2568 "data/maps/Colchis/scripts.pory"
	walk_left
# 2569 "data/maps/Colchis/scripts.pory"
	walk_down
# 2570 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2573 "data/maps/Colchis/scripts.pory"
Colchis_Movement_Exeunt:
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_up
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2576 "data/maps/Colchis/scripts.pory"
	walk_left
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
# 2577 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2580 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAndMedeaExeunt:
# 2581 "data/maps/Colchis/scripts.pory"
	walk_down
# 2582 "data/maps/Colchis/scripts.pory"
	walk_right
# 2582 "data/maps/Colchis/scripts.pory"
	walk_right
# 2582 "data/maps/Colchis/scripts.pory"
	walk_right
# 2582 "data/maps/Colchis/scripts.pory"
	walk_right
# 2582 "data/maps/Colchis/scripts.pory"
	walk_right
# 2582 "data/maps/Colchis/scripts.pory"
	walk_right
# 2582 "data/maps/Colchis/scripts.pory"
	walk_right
# 2582 "data/maps/Colchis/scripts.pory"
	walk_right
# 2582 "data/maps/Colchis/scripts.pory"
	walk_right
# 2582 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2585 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ChefExit:
# 2586 "data/maps/Colchis/scripts.pory"
	walk_right
# 2586 "data/maps/Colchis/scripts.pory"
	walk_right
# 2586 "data/maps/Colchis/scripts.pory"
	walk_right
# 2586 "data/maps/Colchis/scripts.pory"
	walk_right
# 2586 "data/maps/Colchis/scripts.pory"
	walk_right
# 2586 "data/maps/Colchis/scripts.pory"
	walk_right
# 2586 "data/maps/Colchis/scripts.pory"
	walk_right
# 2586 "data/maps/Colchis/scripts.pory"
	walk_right
# 2586 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1520 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Script_SanctumMedeaReturn_Text_0:
# 1743 "data/maps/Colchis/scripts.pory"
	.string "OIMOIAY!\nOOIIMMOOIIAAYY!!$"

Colchis_Text_JasonIntro1::
# 2589 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 2593 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 2597 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 2601 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 2605 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 2609 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 2614 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 2619 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 2623 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 2627 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 2631 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 2640 "data/maps/Colchis/scripts.pory"
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
# 2645 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 2654 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 2658 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 2667 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 2673 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 2686 "data/maps/Colchis/scripts.pory"
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
# 2698 "data/maps/Colchis/scripts.pory"
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
# 2702 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 2706 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 2710 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 2714 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 2718 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 2722 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 2731 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 2735 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 2753 "data/maps/Colchis/scripts.pory"
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
# 2757 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 2762 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 2766 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 2770 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 2777 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 2781 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 2807 "data/maps/Colchis/scripts.pory"
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
# 2815 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 2819 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 2832 "data/maps/Colchis/scripts.pory"
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
# 2836 "data/maps/Colchis/scripts.pory"
	.string "Do not interrupt my private time with\n"
	.string "Medea 'till you bring shiny Mareep.$"

Colchis_Text_MedeaSanctumTrigger1::
# 2841 "data/maps/Colchis/scripts.pory"
	.string "Ememberray, ingbray onay armhay otay\n"
	.string "Ugialay.$"

Colchis_Text_JasonSanctumTrigger2::
# 2845 "data/maps/Colchis/scripts.pory"
	.string "Have you returned bringing Shiny\n"
	.string "Mareep?$"

Colchis_Text_MedeaSanctumTrigger2::
# 2850 "data/maps/Colchis/scripts.pory"
	.string "Ymay oughtsthay etraybay emay.\n"
	.string "Excuseay emay Asonjay, againstay ymay\l"
	.string "ownay adviceay Iay ustmay aketay\l"
	.string "eavelay ofay ouyay anday eesay atthay\l"
	.string "Ugialay isay afesay.$"

Colchis_Text_JasonSanctumTrigger3::
# 2854 "data/maps/Colchis/scripts.pory"
	.string "How could you fail? You only had one\n"
	.string "job! My quest has failed and it was all\l"
	.string "your fault! Now you will pay the price.\l"
	.string "Go Nosepass!$"

Colchis_Text_JasonLost::
# 2858 "data/maps/Colchis/scripts.pory"
	.string "I curse that day I saved you from the\n"
	.string "surf.$"

Colchis_Text_JasonPost::
# 2862 "data/maps/Colchis/scripts.pory"
	.string "The most wicked betrayal of all my\n"
	.string "life...$"

Colchis_Text_JasonGiveMeMareep::
# 2866 "data/maps/Colchis/scripts.pory"
	.string "I see that you have completed the\n"
	.string "quest. Give me shiny Mareep and let's be\l"
	.string "done.$"

Colchis_Text_GiveJasonMareep::
# 2870 "data/maps/Colchis/scripts.pory"
	.string "Will you give Jason shiny Mareep?$"

Colchis_Text_GaveShinyMareep::
# 2874 "data/maps/Colchis/scripts.pory"
	.string "You gave {STR_VAR_1} to Jason!\p"
	.string "Bye Bye {STR_VAR_1}!$"

Colchis_Text_CultistMPre::
# 2879 "data/maps/Colchis/scripts.pory"
	.string "Espassertray opstay! Allfay intoay\n"
	.string "othingnessnay$"

Colchis_Text_CultistMLost::
# 2884 "data/maps/Colchis/scripts.pory"
	.string "Ethay everlastingay arknessday\n"
	.string "overscay allay.$"

Colchis_Text_CultistMPost::
# 2889 "data/maps/Colchis/scripts.pory"
	.string "Ouyay aymay avehay onway utbay\n"
	.string "ou'llyay evernay escapeay.$"

Colchis_Text_MedeaSanctumReturn1::
# 2894 "data/maps/Colchis/scripts.pory"
	.string "Ouyay onstermay! Owhay ouldcay ouyay\n"
	.string "oday isthay otay emay?$"

Colchis_Text_MedeaSanctumReturn2::
# 2899 "data/maps/Colchis/scripts.pory"
	.string "Ymay ovelay, ehay ashay attackeday\n"
	.string "ymay Ugialay! Iay illway onay ongerlay\l"
	.string "elphay imhay eavelay Olchiscay.$"

Colchis_Text_JasonMedeaReturn1::
# 2903 "data/maps/Colchis/scripts.pory"
	.string "Please, do not cry beloved Medea. Lend\n"
	.string "love the power to hold back your tears.$"

Colchis_Text_JasonMedeaReturn2::
# 2907 "data/maps/Colchis/scripts.pory"
	.string "Hey, I apologize for Medea. I know she's\n"
	.string "acting up, but we're still cool. Give it\l"
	.string "some time I'll get her to cool down. When\l"
	.string "you get out meet me in Bulbus town and\l"
	.string "I'll repay you for shiny Mareep.$"

Colchis_Text_JasonSanctumWilds::
# 2911 "data/maps/Colchis/scripts.pory"
	.string "Alas! Medea! My quest for shiny Mareep\n"
	.string "has failed and now we're vagabonds.$"

Colchis_Text_JasonSanctumDepart::
# 2915 "data/maps/Colchis/scripts.pory"
	.string "Let us depart and leave this one\n"
	.string "behind.$"

Colchis_Text_Bed::
# 2919 "data/maps/Colchis/scripts.pory"
	.string "It's a big comfy bed!\n"
	.string "Would you like to take a rest?$"

Colchis_Text_RingBlockerIntro::
# 2923 "data/maps/Colchis/scripts.pory"
	.string "It's a large metal barrier with a keyhole\n"
	.string "in the center.$"

Colchis_Text_KeyFits::
# 2927 "data/maps/Colchis/scripts.pory"
	.string "The key fits into the keyhole!\n"
	.string "The barriers sink into the ground but\l"
	.string "the key broke off inside!$"

Colchis_Text_RingBlockerDecline::
# 2931 "data/maps/Colchis/scripts.pory"
	.string "Better not try using the key here.$"

Colchis_Text_RingBlockerYesNo::
# 2935 "data/maps/Colchis/scripts.pory"
	.string "Would you like to try using the Colchis\n"
	.string "Key?$"

Colchis_Text_AeetesIntro::
# 2945 "data/maps/Colchis/scripts.pory"
	.string "Ouryay insolentay invasionay ofay\n"
	.string "ouray airfay anday ightymay ingdomkay\l"
	.string "isay ownay atay anay enday. ouryay\l"
	.string "illway ownay earnlay ethay uetray\l"
	.string "owerpay ofay Ingkay Aeetesay.$"

Colchis_Text_AeetesLost::
# 2950 "data/maps/Colchis/scripts.pory"
	.string "Ownay ymay ingdomkay ashay allenfay.$"

Colchis_Text_AeetesPost::
# 2963 "data/maps/Colchis/scripts.pory"
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
# 2968 "data/maps/Colchis/scripts.pory"
	.string "Ymay ifelay ashay eenbay educedray\n"
	.string "otay aughtnay. Eavelay emay.$"

Colchis_Text_ChefProposal::
# 2972 "data/maps/Colchis/scripts.pory"
	.string "I'm nervous! Do you think she will say\n"
	.string "yes?$"

Colchis_Movement_ChefIntro::
# 2976 "data/maps/Colchis/scripts.pory"
	.string "Oh! What to do? I am madly in love with\n"
	.string "one of Colchis' most beautiful maids\l"
	.string "but worry I will lose her to someone\l"
	.string "more handsome and with more money than\l"
	.string "me. If only I had an engagement ring to\l"
	.string "give her in exchange for loyalty.$"

Colchis_Text_ChefRingYesNo::
# 2980 "data/maps/Colchis/scripts.pory"
	.string "Give Chef the Colchis Ring?$"

Colchis_Text_ChefGaveRing::
# 2984 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave Chef the Colchis Ring.$"

Colchis_Text_ChefThanks1::
# 2988 "data/maps/Colchis/scripts.pory"
	.string "Great Almighty! You're giving this to\n"
	.string "me? Take this Sweet Apple as token of\l"
	.string "thanks.$"

Colchis_Text_ChefThanks2::
# 2992 "data/maps/Colchis/scripts.pory"
	.string "I'm off now to proposition the maid.$"

Colchis_Text_ChefGaveRingNo::
# 2996 "data/maps/Colchis/scripts.pory"
	.string "Better not give him the ring.$"

Colchis_Text_Maid1::
# 3000 "data/maps/Colchis/scripts.pory"
	.string "Right now I am a maid but one day I will\n"
	.string "meet a foreign man and have his kids.$"

Colchis_Text_Maid2::
# 3004 "data/maps/Colchis/scripts.pory"
	.string "I'm starting to worry this creep likes\n"
	.string "me.$"

Colchis_Text_JailerIntro::
# 3017 "data/maps/Colchis/scripts.pory"
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
# 3021 "data/maps/Colchis/scripts.pory"
	.string "Give the Colchis Apple to the jailer?$"

Colchis_Text_JailerGaveApple::
# 3025 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave the jailer the Colchis\n"
	.string "Apple$"

Colchis_Text_JailerThanks1::
# 3031 "data/maps/Colchis/scripts.pory"
	.string "Aay Olchiscay apple? Ownay ere'sthay\n"
	.string "aay eetsway eattray! Ankthay ouyay!\l"
	.string "Ere'shay ethay ailjay eykay. Ocknay\l"
	.string "ourselfyay outay.$"

Colchis_Text_JailerThanks2::
# 3036 "data/maps/Colchis/scripts.pory"
	.string "Ebay arefulcay otnay otay ocklay\n"
	.string "ourselfyay inay ailjay. Ahay!$"

Colchis_Text_JailerGaveAppleNo::
# 3040 "data/maps/Colchis/scripts.pory"
	.string "Best not to give him the Apple now.$"
