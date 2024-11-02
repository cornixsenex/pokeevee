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
# 151 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 152 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 34, 56
	end


Colchis_TempScript_SetupTestMedeaDance::
# 157 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 158 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 163 "data/maps/Colchis/scripts.pory"
	lockall
# 164 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 165 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SetupJail::
# 170 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 171 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 172 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
# 173 "data/maps/Colchis/scripts.pory"
	addobject 54
# 174 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 179 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 180 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 181 "data/maps/Colchis/scripts.pory"
	closemessage
# 182 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 189 "data/maps/Colchis/scripts.pory"
	lockall
# 191 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 193 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 194 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 195 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 196 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 197 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 198 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 201 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 202 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 203 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 206 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 207 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 208 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 213 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 214 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 215 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 218 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 219 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 220 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 221 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 222 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 223 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 224 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 225 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 226 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 227 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 228 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 229 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 230 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 231 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 232 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 233 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 234 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 237 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 238 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 239 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 240 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 241 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 242 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 243 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 244 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 245 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 246 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 247 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 248 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 249 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 252 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 253 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 254 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 257 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 258 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 259 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 263 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 264 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 265 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 266 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 267 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 268 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 269 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 270 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 271 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 272 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 274 "data/maps/Colchis/scripts.pory"
	closemessage
# 276 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 283 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 284 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 285 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 286 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 287 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 288 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 289 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 290 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 291 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 294 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 295 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 296 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 298 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 299 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 300 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 301 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 302 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 303 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 304 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 308 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 314 "data/maps/Colchis/scripts.pory"
	lockall
# 315 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 317 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 324 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 325 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 326 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 328 "data/maps/Colchis/scripts.pory"
	addobject 23
# 329 "data/maps/Colchis/scripts.pory"
	addobject 24
# 331 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 332 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 336 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 337 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 339 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 340 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 341 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 344 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 345 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPre, MSGBOX_DEFAULT
# 346 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 347 "data/maps/Colchis/scripts.pory"
	closemessage
# 350 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
# 353 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 354 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPost, MSGBOX_DEFAULT
# 355 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 356 "data/maps/Colchis/scripts.pory"
	closemessage
# 359 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleExitA
# 360 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleExitB
# 361 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 364 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 365 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 367 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 23, 0, 0
# 368 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 24, 2, 0
# 370 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_FACE_DOWN
# 371 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_UP
# 373 "data/maps/Colchis/scripts.pory"
	addobject 23
# 374 "data/maps/Colchis/scripts.pory"
	addobject 24
# 376 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 377 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
	return


Colchis_Script_MedeaDance::
# 387 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 388 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 389 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 394 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 395 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 396 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 397 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 398 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 399 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 400 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 401 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 402 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 403 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 404 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 405 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 406 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 407 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 408 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 409 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 410 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 411 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 420 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 421 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 422 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 423 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 424 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 425 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 426 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 428 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 430 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 431 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 432 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 434 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 436 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 437 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 438 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 440 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 446 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 447 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 448 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 449 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 450 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 451 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 452 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 454 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 456 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 457 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 458 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 459 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 460 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 462 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 464 "data/maps/Colchis/scripts.pory"
	delay 25
# 466 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 467 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 468 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 469 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 470 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 472 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 479 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 480 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 481 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 482 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 483 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 484 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 485 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 487 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 489 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 490 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 491 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 492 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 493 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 494 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 496 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 498 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 499 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 500 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 501 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 502 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 504 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 506 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 507 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 508 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 509 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 510 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 512 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 514 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 515 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 516 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 517 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 518 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 520 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 522 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 523 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 524 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 525 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 526 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 528 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 534 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 535 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 536 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 537 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 538 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 539 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 540 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 542 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 544 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 545 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 546 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 547 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 548 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 550 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 556 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 562 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 563 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 564 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 565 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 566 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 567 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 568 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 570 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 575 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 581 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 582 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 583 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 584 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 585 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 586 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 587 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 589 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 595 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 598 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 606 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 607 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 608 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 609 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 610 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 611 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 612 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 614 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 616 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 617 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 618 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 619 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 620 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 621 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 622 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 624 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 629 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 633 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 634 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 635 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 636 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 637 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 638 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 639 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 641 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 643 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 644 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 645 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 646 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 647 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 648 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 649 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 651 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 653 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 657 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 658 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 659 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 660 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 661 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 662 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 663 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 665 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 667 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 668 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 669 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 670 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 671 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 672 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 673 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 675 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 677 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 681 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 682 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 683 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 684 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 685 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 686 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 687 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 689 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 691 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 692 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 693 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 694 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 695 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 696 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 697 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 699 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 701 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 710 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 711 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 712 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 713 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 714 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 715 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 716 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 717 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 719 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 721 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 723 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 724 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 725 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 726 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 727 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 728 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 729 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 730 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 732 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 734 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 736 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 737 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 738 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 739 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 740 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 741 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 742 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 743 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 745 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 747 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 753 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 754 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 755 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 756 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 757 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 758 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 759 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 760 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 762 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 763 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 765 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 766 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 769 "data/maps/Colchis/scripts.pory"
	delay 25
# 773 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 774 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 778 "data/maps/Colchis/scripts.pory"
	delay 25
# 780 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 781 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 785 "data/maps/Colchis/scripts.pory"
	delay 25
# 787 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 788 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 792 "data/maps/Colchis/scripts.pory"
	delay 25
# 794 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 795 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 796 "data/maps/Colchis/scripts.pory"
	delay 25
# 801 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 802 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 803 "data/maps/Colchis/scripts.pory"
	delay 25
# 805 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 806 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 807 "data/maps/Colchis/scripts.pory"
	delay 25
# 812 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 813 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 814 "data/maps/Colchis/scripts.pory"
	delay 25
# 816 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 817 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 818 "data/maps/Colchis/scripts.pory"
	delay 25
# 820 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 821 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 822 "data/maps/Colchis/scripts.pory"
	delay 25
# 824 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 825 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 826 "data/maps/Colchis/scripts.pory"
	delay 25
# 831 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 832 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 833 "data/maps/Colchis/scripts.pory"
	delay 25
# 835 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 836 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 837 "data/maps/Colchis/scripts.pory"
	delay 25
# 839 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 840 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 841 "data/maps/Colchis/scripts.pory"
	delay 25
# 843 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 844 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 845 "data/maps/Colchis/scripts.pory"
	delay 25
# 847 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 849 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 850 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 851 "data/maps/Colchis/scripts.pory"
	delay 25
# 856 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 857 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 858 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 859 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 860 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 861 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 862 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 863 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 865 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 874 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 875 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 876 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 877 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 878 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 879 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 880 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 881 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 882 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 887 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 888 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 889 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 890 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 891 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 892 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 893 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 894 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 895 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 900 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 901 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 902 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 903 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 904 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 905 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 906 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 907 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 908 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 913 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 914 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 915 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 916 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 917 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 918 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 919 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 920 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 921 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 926 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 927 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 928 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 929 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 930 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 931 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 932 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 933 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 934 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 939 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 940 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 941 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 942 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 943 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 944 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 945 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 946 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 947 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 952 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 953 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 954 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 955 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 956 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 957 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 958 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 959 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 960 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 965 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 966 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 967 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 968 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 969 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 970 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 971 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 972 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 973 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 978 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 979 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 980 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 981 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 982 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 983 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 984 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 985 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 986 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 988 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 989 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 990 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 991 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 992 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 993 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 994 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 995 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 996 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 998 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 999 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 1001 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 1002 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1004 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1005 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1006 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1008 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1009 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1010 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1011 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1012 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1014 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1015 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1016 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1021 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1022 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1024 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1026 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1032 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1033 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1034 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1035 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1036 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1037 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1038 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1039 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1044 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1045 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1046 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1047 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1048 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1049 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1050 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1051 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1052 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1053 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1054 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1055 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1056 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1057 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1058 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1059 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1060 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1065 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1066 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1067 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 13, Common_Movement_WalkLeft
# 1075 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
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
	applymovement 13, Common_Movement_WalkRight
# 1082 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1083 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1084 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1085 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1086 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1087 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1088 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1089 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1090 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1091 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1092 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1093 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1094 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1095 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1096 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1097 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1098 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1099 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1100 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1101 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1102 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1103 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1104 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1105 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1106 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1107 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1108 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1109 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1110 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1111 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1112 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1113 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1114 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1115 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1116 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1117 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1118 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1119 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1120 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1121 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1132 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1133 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1134 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1139 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1140 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1141 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1142 "data/maps/Colchis/scripts.pory"
	closemessage
# 1144 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1148 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1149 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1150 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1151 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1152 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1154 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1155 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1156 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1158 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1159 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1160 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1161 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1169 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1170 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1171 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1176 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1177 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1178 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1185 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1186 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1187 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1191 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1192 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1193 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1202 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1203 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1204 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1205 "data/maps/Colchis/scripts.pory"
	closemessage
# 1208 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1209 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1210 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1219 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1220 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1221 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1226 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1227 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1228 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1231 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1232 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1233 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1234 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1235 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1239 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1240 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1241 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1245 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1246 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1247 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1249 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1250 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1251 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1255 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1256 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1258 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1259 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1265 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1266 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1267 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1268 "data/maps/Colchis/scripts.pory"
	closemessage
# 1271 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1272 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1275 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1276 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1284 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1290 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1291 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1292 "data/maps/Colchis/scripts.pory"
	closemessage
# 1293 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1296 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1297 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1300 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1301 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1302 "data/maps/Colchis/scripts.pory"
	closemessage
# 1303 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1306 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1307 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1308 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1309 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1312 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1313 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1314 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1315 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1316 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1319 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1320 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1321 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1322 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1323 "data/maps/Colchis/scripts.pory"
	delay 30
# 1324 "data/maps/Colchis/scripts.pory"
	waitse
# 1327 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonApproachPlayer
# 1328 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1331 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1332 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1333 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1336 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1337 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1338 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1341 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1342 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1343 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1346 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1347 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1348 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1351 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1352 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1353 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1355 "data/maps/Colchis/scripts.pory"
	closemessage
# 1358 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1359 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1362 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1363 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1364 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1365 "data/maps/Colchis/scripts.pory"
	closemessage
# 1368 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1369 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1372 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1373 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1374 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1377 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1378 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1379 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1381 "data/maps/Colchis/scripts.pory"
	closemessage
# 1385 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonExit
# 1386 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonExit
# 1387 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerPrisonExit
# 1388 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1390 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1398 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1399 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1402 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1403 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1404 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1406 "data/maps/Colchis/scripts.pory"
	closemessage
# 1409 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1410 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1413 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1414 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1415 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1416 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1417 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1420 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1421 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 1
# 1422 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1423 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 1
# 1426 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1427 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1430 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1431 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1432 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1435 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1436 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1437 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1440 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1441 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1444 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1445 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1446 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1448 "data/maps/Colchis/scripts.pory"
	closemessage
# 1451 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1452 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1455 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1456 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1458 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1459 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1461 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1462 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1464 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1465 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1466 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1469 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1470 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1471 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1472 "data/maps/Colchis/scripts.pory"
	closemessage
# 1475 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1476 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1479 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1480 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1483 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1486 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1487 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1488 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1489 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1491 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1492 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1493 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1494 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1495 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_LugiaTest::
# 1501 "data/maps/Colchis/scripts.pory"
	lockall
# 1502 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1503 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1504 "data/maps/Colchis/scripts.pory"
	closemessage
# 1505 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_Lugia::
# 1510 "data/maps/Colchis/scripts.pory"
	lockall
# 1511 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1512 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 1513 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1514 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_LUGIA
# 1515 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1516 "data/maps/Colchis/scripts.pory"
	setwildbattle SPECIES_LUGIA, 18
# 1517 "data/maps/Colchis/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1518 "data/maps/Colchis/scripts.pory"
	waitstate
# 1519 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1520 "data/maps/Colchis/scripts.pory"
	removeobject 1
# 1521 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTriggerA::
# 1527 "data/maps/Colchis/scripts.pory"
	lockall
# 1528 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 0
# 1529 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTriggerB::
# 1533 "data/maps/Colchis/scripts.pory"
	lockall
# 1534 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 1
# 1535 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTrigger::
# 1540 "data/maps/Colchis/scripts.pory"
	lockall
# 1543 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1544 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1545 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1546 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1547 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1548 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1551 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_4
Colchis_Script_SanctumTrigger_3:
# 1555 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 12
# 1557 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerEndIntro
# 1559 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_7
# 1578 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_8
# 1600 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1601 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1602 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
# 1603 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
Colchis_Script_SanctumTrigger_1:
# 1606 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_SanctumTrigger_2:
# 1552 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_4:
# 1551 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_2
	goto Colchis_Script_SanctumTrigger_3

Colchis_Script_SanctumTrigger_7:
# 1562 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1565 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1569 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_8:
# 1579 "data/maps/Colchis/scripts.pory"
	closemessage
# 1581 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1582 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumTrigger_12
# 1587 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1588 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1590 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1591 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumWilds, MSGBOX_DEFAULT
# 1592 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1597 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_12:
# 1584 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Exeunt
	goto Colchis_Script_SanctumTrigger_1


Colchis_Script_SanctumTriggerReturn::
# 1611 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1612 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger1, MSGBOX_DEFAULT
# 1613 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1615 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1616 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger1, MSGBOX_DEFAULT
# 1617 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1619 "data/maps/Colchis/scripts.pory"
	closemessage
# 1622 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1623 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_SanctumTriggerEndIntro::
# 1629 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1630 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1631 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumTriggerMedeaExit::
# 1636 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1637 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger2, MSGBOX_DEFAULT
# 1638 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1639 "data/maps/Colchis/scripts.pory"
	closemessage
# 1640 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTriggerMedeaExit_2
# 1643 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3B
Colchis_Script_SanctumTriggerMedeaExit_1:
# 1645 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumTriggerMedeaExit_2:
# 1641 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3A
	goto Colchis_Script_SanctumTriggerMedeaExit_1


Colchis_Script_LugiaChaseTrigger::
# 1650 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1651 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaChaseTrigger_2
Colchis_Script_LugiaChaseTrigger_1:
	end

Colchis_Script_LugiaChaseTrigger_2:
# 1652 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	goto Colchis_Script_LugiaChaseTrigger_1


Colchis_Script_LugiaWanderTrigger::
# 1658 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1659 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaWanderTrigger_2
Colchis_Script_LugiaWanderTrigger_1:
	end

Colchis_Script_LugiaWanderTrigger_2:
# 1660 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	goto Colchis_Script_LugiaWanderTrigger_1


Colchis_Script_ShinyMareep::
# 1666 "data/maps/Colchis/scripts.pory"
	lockall
# 1667 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1668 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 1669 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1670 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1671 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1672 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1673 "data/maps/Colchis/scripts.pory"
	waitstate
# 1674 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1675 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1676 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumApproachJason::
# 1681 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumApproachJason_2
# 1684 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3B
Colchis_Script_SanctumApproachJason_1:
# 1686 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1688 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1689 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumApproachJason_2:
# 1682 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3A
	goto Colchis_Script_SanctumApproachJason_1


Colchis_Script_SanctumJasonBattle::
# 1695 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1696 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1698 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1699 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger3, MSGBOX_DEFAULT
# 1700 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1701 "data/maps/Colchis/scripts.pory"
	closemessage
# 1703 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_JASON, Colchis_Text_JasonLost
# 1705 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1706 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPost, MSGBOX_DEFAULT
# 1707 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumMedeaReturn::
# 1714 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1715 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1716 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1718 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1719 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1720 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1723 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1724 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumMedeaReturn_Text_0, MSGBOX_DEFAULT
# 1725 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1726 "data/maps/Colchis/scripts.pory"
	closemessage
# 1729 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn
# 1730 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1733 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1734 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn1, MSGBOX_DEFAULT
# 1735 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1736 "data/maps/Colchis/scripts.pory"
	closemessage
# 1739 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumMedeaReturn_2
# 1742 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2B
Colchis_Script_SanctumMedeaReturn_1:
# 1744 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1746 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1747 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1750 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1751 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn2, MSGBOX_DEFAULT
# 1752 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1753 "data/maps/Colchis/scripts.pory"
	closemessage
# 1758 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1759 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn1, MSGBOX_DEFAULT
# 1760 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1764 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumMedeaReturn_6
Colchis_Script_SanctumMedeaReturn_5:
# 1774 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	return

Colchis_Script_SanctumMedeaReturn_2:
# 1740 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2A
	goto Colchis_Script_SanctumMedeaReturn_1

Colchis_Script_SanctumMedeaReturn_6:
# 1765 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1766 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1767 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1768 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn2, MSGBOX_DEFAULT
# 1769 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1770 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1771 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_SanctumMedeaReturn_5


Colchis_Script_SanctumJasonCheckMareep::
# 1781 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, IsShinyMareepInParty
# 1783 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_2
# 1788 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1789 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonGiveMeMareep, MSGBOX_DEFAULT
# 1790 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1792 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GiveJasonMareep, MSGBOX_YESNO
# 1794 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_5
# 1798 "data/maps/Colchis/scripts.pory"
	special ChoosePartyMon
# 1799 "data/maps/Colchis/scripts.pory"
	waitstate
# 1801 "data/maps/Colchis/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_8
# 1805 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1807 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, SPECIES_MAREEP
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_11
# 1811 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonIsShiny
# 1813 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_14
# 1817 "data/maps/Colchis/scripts.pory"
	special BufferMonNickname
# 1818 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GaveShinyMareep, MSGBOX_DEFAULT
# 1819 "data/maps/Colchis/scripts.pory"
	closemessage
# 1820 "data/maps/Colchis/scripts.pory"
	special ReleaseChosenMon
# 1822 "data/maps/Colchis/scripts.pory"
	setflag FLAG_JASON_HAS_SHINYMAREEP
Colchis_Script_SanctumJasonCheckMareep_1:
	return

Colchis_Script_SanctumJasonCheckMareep_2:
# 1784 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_5:
# 1795 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_8:
# 1802 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_11:
# 1808 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_14:
# 1814 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1


Colchis_Script_SanctumJasonMareep::
# 1835 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumApproachJason
# 1838 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	return


Colchis_Script_Exeunt::
# 1845 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 14
# 1847 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_Exeunt
# 1848 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_Exeunt
# 1849 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_Exeunt
# 1850 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1852 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_BIG_ISLAND_N, 31, 37
	end


Colchis_Script_SetupEscapeFromColchis::
# 1858 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1859 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumDepart, MSGBOX_DEFAULT
# 1860 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1861 "data/maps/Colchis/scripts.pory"
	closemessage
# 1864 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAndMedeaExeunt
# 1865 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_JasonAndMedeaExeunt
# 1866 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1870 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 14, 0
# 1871 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_INVISIBLE
# 1873 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 15, 0
# 1874 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 1876 "data/maps/Colchis/scripts.pory"
	hideobjectat 54, MAP_COLCHIS
# 1877 "data/maps/Colchis/scripts.pory"
	hideobjectat 4, MAP_COLCHIS
# 1879 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1880 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1887 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 16
# 1890 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
# 1891 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1894 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupLostKid
# 1897 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_TrainerAeetes::
# 1910 "data/maps/Colchis/scripts.pory"
	lockall
# 1911 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1913 "data/maps/Colchis/scripts.pory"
	checktrainerflag TRAINER_AEETES
	goto_if 0, Colchis_Script_TrainerAeetes_2
# 1931 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1932 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1933 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
Colchis_Script_TrainerAeetes_1:
# 1935 "data/maps/Colchis/scripts.pory"
	closemessage
# 1936 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_TrainerAeetes_2:
# 1915 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1916 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesIntro, MSGBOX_DEFAULT
# 1917 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1918 "data/maps/Colchis/scripts.pory"
	closemessage
# 1919 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_AEETES, Colchis_Text_AeetesLost
# 1920 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1921 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesPost, MSGBOX_DEFAULT
# 1922 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1924 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_KEY
# 1926 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1927 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1928 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
	goto Colchis_Script_TrainerAeetes_1


Colchis_Script_Bed::
# 1941 "data/maps/Colchis/scripts.pory"
	lockall
# 1942 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Bed, MSGBOX_YESNO
# 1943 "data/maps/Colchis/scripts.pory"
	closemessage
# 1944 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Bed_2
Colchis_Script_Bed_1:
# 1947 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Bed_2:
# 1945 "data/maps/Colchis/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Colchis_Script_Bed_1


Colchis_Script_RingBlocker::
# 1952 "data/maps/Colchis/scripts.pory"
	lockall
# 1953 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1956 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerIntro, MSGBOX_DEFAULT
# 1958 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_KEY, 1
# 1963 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_RingBlocker_2
# 1994 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_RingBlocker_1:
# 1998 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_RingBlocker_2:
# 1964 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerYesNo, MSGBOX_YESNO
# 1965 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_RingBlocker_5
# 1990 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerDecline, MSGBOX_DEFAULT
# 1991 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_RingBlocker_1

Colchis_Script_RingBlocker_5:
# 1968 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_KeyFits, MSGBOX_DEFAULT
# 1969 "data/maps/Colchis/scripts.pory"
	closemessage
# 1970 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_KEY
# 1971 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1973 "data/maps/Colchis/scripts.pory"
	hideobjectat 55, MAP_COLCHIS
# 1974 "data/maps/Colchis/scripts.pory"
	removeobject 55
# 1975 "data/maps/Colchis/scripts.pory"
	hideobjectat 56, MAP_COLCHIS
# 1976 "data/maps/Colchis/scripts.pory"
	removeobject 56
# 1977 "data/maps/Colchis/scripts.pory"
	hideobjectat 57, MAP_COLCHIS
# 1978 "data/maps/Colchis/scripts.pory"
	removeobject 57
# 1980 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 55, MOVEMENT_TYPE_INVISIBLE
# 1981 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 55, 1, 3
# 1982 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 56, MOVEMENT_TYPE_INVISIBLE
# 1983 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 56, 2, 3
# 1984 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 57, MOVEMENT_TYPE_INVISIBLE
# 1985 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 57, 3, 3
# 1987 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBARRIER
	goto Colchis_Script_RingBlocker_1


Colchis_Script_RingItem::
# 2003 "data/maps/Colchis/scripts.pory"
	lock
# 2004 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2005 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_RING
# 2006 "data/maps/Colchis/scripts.pory"
	hideobjectat 58, MAP_COLCHIS
# 2007 "data/maps/Colchis/scripts.pory"
	removeobject 58
# 2008 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBALL
# 2009 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 58, MOVEMENT_TYPE_INVISIBLE
# 2010 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 58, 4, 3
# 2011 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_CloseDoor::
# 2016 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2017 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_SetupLostKid::
# 2022 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2023 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 28, 12
# 2024 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_LOOK_AROUND
# 2025 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2026 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	return


Colchis_Script_ShowNannyWithGuard::
# 2031 "data/maps/Colchis/scripts.pory"
	removeobject 30
# 2032 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 30, 7, 50
# 2033 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_LEFT
# 2034 "data/maps/Colchis/scripts.pory"
	addobject 30
# 2035 "data/maps/Colchis/scripts.pory"
	showobjectat 30, MAP_COLCHIS
# 2037 "data/maps/Colchis/scripts.pory"
	removeobject 51
# 2038 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 51, 6, 50
# 2039 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 51, MOVEMENT_TYPE_FACE_RIGHT
# 2040 "data/maps/Colchis/scripts.pory"
	addobject 51
# 2041 "data/maps/Colchis/scripts.pory"
	showobjectat 51, MAP_COLCHIS
	return


Colchis_Script_Chef::
# 2047 "data/maps/Colchis/scripts.pory"
	lockall
# 2048 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2051 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Chef_2
# 2058 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Movement_ChefIntro, MSGBOX_DEFAULT
# 2059 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_RING
# 2060 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Chef_5
# 2091 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Chef_1:
# 2094 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Chef_2:
# 2052 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefProposal, MSGBOX_DEFAULT
# 2053 "data/maps/Colchis/scripts.pory"
	closemessage
# 2054 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_FaceRight
# 2055 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_5:
# 2061 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefRingYesNo, MSGBOX_YESNO
# 2062 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Chef_8
# 2087 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRingNo, MSGBOX_DEFAULT
# 2088 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_8:
# 2064 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_RING
# 2065 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRing, MSGBOX_DEFAULT
# 2066 "data/maps/Colchis/scripts.pory"
	closemessage
# 2068 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_ExclamationMark
# 2069 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2070 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks1, MSGBOX_DEFAULT
# 2071 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_APPLE
# 2073 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks2, MSGBOX_DEFAULT
# 2074 "data/maps/Colchis/scripts.pory"
	closemessage
# 2076 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2077 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Colchis_Script_Chef_12
Colchis_Script_Chef_11:
# 2081 "data/maps/Colchis/scripts.pory"
	applymovement 44, Colchis_Movement_ChefExit
# 2082 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2084 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_MOVECHEF
# 2085 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_12:
# 2078 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_WalkUp
# 2079 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_11


Colchis_Script_MoveChef::
# 2099 "data/maps/Colchis/scripts.pory"
	removeobject 44
# 2100 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 44, 59, 62
# 2101 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 44, MOVEMENT_TYPE_FACE_RIGHT
# 2102 "data/maps/Colchis/scripts.pory"
	addobject 44
# 2103 "data/maps/Colchis/scripts.pory"
	showobjectat 44, MAP_COLCHIS
# 2105 "data/maps/Colchis/scripts.pory"
	removeobject 37
# 2106 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 37, 60, 62
# 2107 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_LEFT
# 2108 "data/maps/Colchis/scripts.pory"
	addobject 37
# 2109 "data/maps/Colchis/scripts.pory"
	showobjectat 37, MAP_COLCHIS
	return


Colchis_Script_Maid::
# 2115 "data/maps/Colchis/scripts.pory"
	lockall
# 2116 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2117 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Maid_2
# 2123 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid1, MSGBOX_DEFAULT
# 2124 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Maid_1:
# 2126 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Maid_2:
# 2118 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid2, MSGBOX_DEFAULT
# 2119 "data/maps/Colchis/scripts.pory"
	closemessage
# 2120 "data/maps/Colchis/scripts.pory"
	applymovement 37, Common_Movement_FaceLeft
# 2121 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Maid_1


Colchis_Script_Jailer::
# 2131 "data/maps/Colchis/scripts.pory"
	lockall
# 2132 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2139 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerIntro, MSGBOX_DEFAULT
# 2142 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_APPLE
# 2143 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Jailer_2
# 2163 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Jailer_1:
# 2165 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Jailer_2:
# 2144 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerAppleYesNo, MSGBOX_YESNO
# 2145 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Jailer_5
# 2159 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveAppleNo, MSGBOX_DEFAULT
# 2160 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1

Colchis_Script_Jailer_5:
# 2146 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_APPLE
# 2148 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveApple, MSGBOX_DEFAULT
# 2149 "data/maps/Colchis/scripts.pory"
	closemessage
# 2151 "data/maps/Colchis/scripts.pory"
	applymovement 32, Common_Movement_ExclamationMark
# 2152 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2153 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks1, MSGBOX_DEFAULT
# 2154 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_JAIL_KEY
# 2156 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks2, MSGBOX_DEFAULT
# 2157 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1


Colchis_Script_PrisonDoor1::
# 2170 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Colchis_Script_PrisonDoor1_2
Colchis_Script_PrisonDoor1_1:
	end

Colchis_Script_PrisonDoor1_2:
# 2171 "data/maps/Colchis/scripts.pory"
	lockall
# 2173 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_A
# 2175 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2176 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2178 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2179 "data/maps/Colchis/scripts.pory"
	closemessage
# 2181 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2182 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2183 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2184 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2185 "data/maps/Colchis/scripts.pory"
	delay 30
# 2186 "data/maps/Colchis/scripts.pory"
	waitse
# 2187 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor1_1


Colchis_Script_PrisonDoor2::
# 2193 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_B, Colchis_Script_PrisonDoor2_2
Colchis_Script_PrisonDoor2_1:
	end

Colchis_Script_PrisonDoor2_2:
# 2194 "data/maps/Colchis/scripts.pory"
	lockall
# 2196 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_B
# 2198 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2199 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2201 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2202 "data/maps/Colchis/scripts.pory"
	closemessage
# 2204 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2205 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2206 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2207 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2208 "data/maps/Colchis/scripts.pory"
	delay 30
# 2209 "data/maps/Colchis/scripts.pory"
	waitse
# 2210 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor2_1


Colchis_Script_PrisonDoor3::
# 2216 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_C, Colchis_Script_PrisonDoor3_2
Colchis_Script_PrisonDoor3_1:
	end

Colchis_Script_PrisonDoor3_2:
# 2217 "data/maps/Colchis/scripts.pory"
	lockall
# 2219 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_C
# 2221 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2222 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2224 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2225 "data/maps/Colchis/scripts.pory"
	closemessage
# 2227 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2228 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2229 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2230 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2231 "data/maps/Colchis/scripts.pory"
	delay 30
# 2232 "data/maps/Colchis/scripts.pory"
	waitse
# 2233 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor3_1


Colchis_Script_LostKid::
# 2239 "data/maps/Colchis/scripts.pory"
	lockall
# 2240 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2242 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_LostKid_2
# 2263 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid2, MSGBOX_DEFAULT
# 2264 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_LostKid_1:
# 2266 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_LostKid_2:
# 2243 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid1, MSGBOX_DEFAULT
# 2244 "data/maps/Colchis/scripts.pory"
	closemessage
# 2245 "data/maps/Colchis/scripts.pory"
	special GetPlayerFacingDirection
# 2246 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Colchis_Script_LostKid_6
# 2249 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit2
Colchis_Script_LostKid_5:
# 2251 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2253 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_RETURN_LOSTKID
# 2255 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2256 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 5, 46
# 2257 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_WANDER_AROUND
# 2258 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2259 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	goto Colchis_Script_LostKid_1

Colchis_Script_LostKid_6:
# 2247 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit1
	goto Colchis_Script_LostKid_5


Colchis_Script_DoorMan::
# 2271 "data/maps/Colchis/scripts.pory"
	lockall
# 2272 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2275 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_DoorMan_2
# 2280 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 17
	goto_if_ne Colchis_Script_DoorMan_6
# 2288 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman3, MSGBOX_DEFAULT
# 2289 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_DoorMan_5:
# 2291 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceRight
Colchis_Script_DoorMan_1:
# 2293 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2294 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_DoorMan_2:
# 2276 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman1, MSGBOX_DEFAULT
# 2277 "data/maps/Colchis/scripts.pory"
	closemessage
# 2278 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceDown
	goto Colchis_Script_DoorMan_1

Colchis_Script_DoorMan_6:
# 2281 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 17
# 2282 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman2, MSGBOX_DEFAULT
# 2283 "data/maps/Colchis/scripts.pory"
	closemessage
# 2284 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2285 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2286 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
	goto Colchis_Script_DoorMan_5


Colchis_Script_Nanny::
# 2300 "data/maps/Colchis/scripts.pory"
	lockall
# 2301 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2303 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_Script_Nanny_2
# 2307 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny2, MSGBOX_DEFAULT
# 2308 "data/maps/Colchis/scripts.pory"
	closemessage
# 2309 "data/maps/Colchis/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 2310 "data/maps/Colchis/scripts.pory"
	waitmovement 0
Colchis_Script_Nanny_1:
# 2312 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Nanny_2:
# 2304 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny1, MSGBOX_DEFAULT
# 2305 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Nanny_1


# 2317 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 2318 "data/maps/Colchis/scripts.pory"
	walk_up
# 2318 "data/maps/Colchis/scripts.pory"
	walk_up
# 2318 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2321 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 2322 "data/maps/Colchis/scripts.pory"
	walk_down
# 2322 "data/maps/Colchis/scripts.pory"
	walk_down
# 2322 "data/maps/Colchis/scripts.pory"
	walk_down
# 2322 "data/maps/Colchis/scripts.pory"
	walk_down
# 2322 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2325 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 2326 "data/maps/Colchis/scripts.pory"
	walk_up
# 2326 "data/maps/Colchis/scripts.pory"
	walk_up
# 2326 "data/maps/Colchis/scripts.pory"
	walk_up
# 2326 "data/maps/Colchis/scripts.pory"
	walk_up
# 2326 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2329 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitA:
# 2330 "data/maps/Colchis/scripts.pory"
	walk_up
# 2330 "data/maps/Colchis/scripts.pory"
	walk_up
# 2330 "data/maps/Colchis/scripts.pory"
	walk_up
# 2330 "data/maps/Colchis/scripts.pory"
	walk_up
# 2330 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2333 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitB:
# 2334 "data/maps/Colchis/scripts.pory"
	walk_down
# 2334 "data/maps/Colchis/scripts.pory"
	walk_down
# 2334 "data/maps/Colchis/scripts.pory"
	walk_down
# 2334 "data/maps/Colchis/scripts.pory"
	walk_down
# 2334 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2337 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2338 "data/maps/Colchis/scripts.pory"
	walk_up
# 2339 "data/maps/Colchis/scripts.pory"
	walk_right
# 2339 "data/maps/Colchis/scripts.pory"
	walk_right
# 2339 "data/maps/Colchis/scripts.pory"
	walk_right
# 2339 "data/maps/Colchis/scripts.pory"
	walk_right
# 2339 "data/maps/Colchis/scripts.pory"
	walk_right
# 2340 "data/maps/Colchis/scripts.pory"
	walk_up
# 2340 "data/maps/Colchis/scripts.pory"
	walk_up
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2341 "data/maps/Colchis/scripts.pory"
	walk_right
# 2342 "data/maps/Colchis/scripts.pory"
	walk_up
# 2342 "data/maps/Colchis/scripts.pory"
	walk_up
# 2342 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2345 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 2346 "data/maps/Colchis/scripts.pory"
	walk_up
# 2346 "data/maps/Colchis/scripts.pory"
	walk_up
# 2346 "data/maps/Colchis/scripts.pory"
	walk_up
# 2346 "data/maps/Colchis/scripts.pory"
	walk_up
# 2346 "data/maps/Colchis/scripts.pory"
	walk_up
# 2346 "data/maps/Colchis/scripts.pory"
	walk_up
# 2346 "data/maps/Colchis/scripts.pory"
	walk_up
# 2346 "data/maps/Colchis/scripts.pory"
	walk_up
# 2346 "data/maps/Colchis/scripts.pory"
	walk_up
# 2346 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2349 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 2350 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2353 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 2354 "data/maps/Colchis/scripts.pory"
	face_right
# 2355 "data/maps/Colchis/scripts.pory"
	face_up
# 2356 "data/maps/Colchis/scripts.pory"
	face_left
# 2357 "data/maps/Colchis/scripts.pory"
	face_down
# 2358 "data/maps/Colchis/scripts.pory"
	face_right
# 2359 "data/maps/Colchis/scripts.pory"
	face_up
# 2360 "data/maps/Colchis/scripts.pory"
	face_left
# 2361 "data/maps/Colchis/scripts.pory"
	face_down
# 2362 "data/maps/Colchis/scripts.pory"
	face_right
# 2363 "data/maps/Colchis/scripts.pory"
	face_up
# 2364 "data/maps/Colchis/scripts.pory"
	face_left
# 2365 "data/maps/Colchis/scripts.pory"
	face_down
# 2366 "data/maps/Colchis/scripts.pory"
	face_right
# 2367 "data/maps/Colchis/scripts.pory"
	face_up
# 2368 "data/maps/Colchis/scripts.pory"
	face_left
# 2369 "data/maps/Colchis/scripts.pory"
	face_down
# 2370 "data/maps/Colchis/scripts.pory"
	face_right
# 2371 "data/maps/Colchis/scripts.pory"
	face_up
# 2372 "data/maps/Colchis/scripts.pory"
	face_left
# 2373 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2376 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 2377 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2377 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2378 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2381 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 2382 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2382 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2383 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2386 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 2387 "data/maps/Colchis/scripts.pory"
	walk_left
# 2388 "data/maps/Colchis/scripts.pory"
	walk_up
# 2388 "data/maps/Colchis/scripts.pory"
	walk_up
# 2389 "data/maps/Colchis/scripts.pory"
	walk_right
# 2389 "data/maps/Colchis/scripts.pory"
	walk_right
# 2390 "data/maps/Colchis/scripts.pory"
	walk_down
# 2390 "data/maps/Colchis/scripts.pory"
	walk_down
# 2391 "data/maps/Colchis/scripts.pory"
	walk_left
# 2392 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2395 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 2396 "data/maps/Colchis/scripts.pory"
	walk_left
# 2397 "data/maps/Colchis/scripts.pory"
	walk_up
# 2397 "data/maps/Colchis/scripts.pory"
	walk_up
# 2398 "data/maps/Colchis/scripts.pory"
	walk_right
# 2398 "data/maps/Colchis/scripts.pory"
	walk_right
# 2399 "data/maps/Colchis/scripts.pory"
	walk_down
# 2399 "data/maps/Colchis/scripts.pory"
	walk_down
# 2400 "data/maps/Colchis/scripts.pory"
	walk_left
# 2401 "data/maps/Colchis/scripts.pory"
	face_down
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2403 "data/maps/Colchis/scripts.pory"
	walk_up
# 2403 "data/maps/Colchis/scripts.pory"
	walk_up
# 2404 "data/maps/Colchis/scripts.pory"
	walk_right
# 2404 "data/maps/Colchis/scripts.pory"
	walk_right
# 2405 "data/maps/Colchis/scripts.pory"
	walk_down
# 2405 "data/maps/Colchis/scripts.pory"
	walk_down
# 2406 "data/maps/Colchis/scripts.pory"
	walk_left
# 2407 "data/maps/Colchis/scripts.pory"
	face_down
# 2408 "data/maps/Colchis/scripts.pory"
	walk_left
# 2409 "data/maps/Colchis/scripts.pory"
	walk_up
# 2409 "data/maps/Colchis/scripts.pory"
	walk_up
# 2410 "data/maps/Colchis/scripts.pory"
	walk_right
# 2410 "data/maps/Colchis/scripts.pory"
	walk_right
# 2411 "data/maps/Colchis/scripts.pory"
	walk_down
# 2411 "data/maps/Colchis/scripts.pory"
	walk_down
# 2412 "data/maps/Colchis/scripts.pory"
	walk_left
# 2413 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2416 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 2417 "data/maps/Colchis/scripts.pory"
	walk_down
# 2417 "data/maps/Colchis/scripts.pory"
	walk_down
# 2417 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2420 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 2421 "data/maps/Colchis/scripts.pory"
	walk_right
# 2421 "data/maps/Colchis/scripts.pory"
	walk_right
# 2422 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2425 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 2426 "data/maps/Colchis/scripts.pory"
	walk_left
# 2426 "data/maps/Colchis/scripts.pory"
	walk_left
# 2427 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2430 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 2431 "data/maps/Colchis/scripts.pory"
	walk_down
# 2432 "data/maps/Colchis/scripts.pory"
	face_left
# 2433 "data/maps/Colchis/scripts.pory"
	face_up
# 2434 "data/maps/Colchis/scripts.pory"
	face_right
# 2435 "data/maps/Colchis/scripts.pory"
	face_down
# 2436 "data/maps/Colchis/scripts.pory"
	walk_down
# 2437 "data/maps/Colchis/scripts.pory"
	face_left
# 2438 "data/maps/Colchis/scripts.pory"
	face_up
# 2439 "data/maps/Colchis/scripts.pory"
	face_right
# 2440 "data/maps/Colchis/scripts.pory"
	face_down
# 2441 "data/maps/Colchis/scripts.pory"
	walk_down
# 2442 "data/maps/Colchis/scripts.pory"
	face_left
# 2443 "data/maps/Colchis/scripts.pory"
	face_up
# 2444 "data/maps/Colchis/scripts.pory"
	face_right
# 2445 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2448 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 2449 "data/maps/Colchis/scripts.pory"
	walk_right
# 2450 "data/maps/Colchis/scripts.pory"
	walk_up
# 2451 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2452 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2455 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 2456 "data/maps/Colchis/scripts.pory"
	walk_left
# 2457 "data/maps/Colchis/scripts.pory"
	walk_up
# 2458 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2459 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2462 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 2463 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2464 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2467 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 2468 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2469 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2472 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 2473 "data/maps/Colchis/scripts.pory"
	walk_left
# 2474 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2477 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 2478 "data/maps/Colchis/scripts.pory"
	walk_right
# 2479 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2482 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 2483 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2484 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2487 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 2488 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2489 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2492 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 2493 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2496 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 2497 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 2500 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 2501 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 2505 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 2506 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 2509 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 2510 "data/maps/Colchis/scripts.pory"
	walk_up
# 2510 "data/maps/Colchis/scripts.pory"
	walk_up
# 2510 "data/maps/Colchis/scripts.pory"
	walk_up
# 2510 "data/maps/Colchis/scripts.pory"
	walk_up
# 2510 "data/maps/Colchis/scripts.pory"
	walk_up
# 2510 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2513 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 2514 "data/maps/Colchis/scripts.pory"
	walk_right
# 2514 "data/maps/Colchis/scripts.pory"
	walk_right
# 2514 "data/maps/Colchis/scripts.pory"
	walk_right
# 2514 "data/maps/Colchis/scripts.pory"
	walk_right
# 2514 "data/maps/Colchis/scripts.pory"
	walk_right
# 2514 "data/maps/Colchis/scripts.pory"
	walk_right
# 2514 "data/maps/Colchis/scripts.pory"
	walk_right
# 2514 "data/maps/Colchis/scripts.pory"
	walk_right
# 2515 "data/maps/Colchis/scripts.pory"
	walk_down
# 2515 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2518 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 2519 "data/maps/Colchis/scripts.pory"
	walk_right
# 2519 "data/maps/Colchis/scripts.pory"
	walk_right
# 2519 "data/maps/Colchis/scripts.pory"
	walk_right
# 2519 "data/maps/Colchis/scripts.pory"
	walk_right
# 2519 "data/maps/Colchis/scripts.pory"
	walk_right
# 2519 "data/maps/Colchis/scripts.pory"
	walk_right
# 2519 "data/maps/Colchis/scripts.pory"
	walk_right
# 2520 "data/maps/Colchis/scripts.pory"
	walk_down
# 2520 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2523 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 2524 "data/maps/Colchis/scripts.pory"
	walk_right
# 2524 "data/maps/Colchis/scripts.pory"
	walk_right
# 2524 "data/maps/Colchis/scripts.pory"
	walk_right
# 2524 "data/maps/Colchis/scripts.pory"
	walk_right
# 2524 "data/maps/Colchis/scripts.pory"
	walk_right
# 2524 "data/maps/Colchis/scripts.pory"
	walk_right
# 2525 "data/maps/Colchis/scripts.pory"
	walk_down
# 2525 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2528 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 2529 "data/maps/Colchis/scripts.pory"
	walk_right
# 2529 "data/maps/Colchis/scripts.pory"
	walk_right
# 2529 "data/maps/Colchis/scripts.pory"
	walk_right
# 2529 "data/maps/Colchis/scripts.pory"
	walk_right
# 2529 "data/maps/Colchis/scripts.pory"
	walk_right
# 2529 "data/maps/Colchis/scripts.pory"
	walk_right
# 2529 "data/maps/Colchis/scripts.pory"
	walk_right
# 2529 "data/maps/Colchis/scripts.pory"
	walk_right
# 2530 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2533 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 2534 "data/maps/Colchis/scripts.pory"
	walk_right
# 2534 "data/maps/Colchis/scripts.pory"
	walk_right
# 2534 "data/maps/Colchis/scripts.pory"
	walk_right
# 2534 "data/maps/Colchis/scripts.pory"
	walk_right
# 2534 "data/maps/Colchis/scripts.pory"
	walk_right
# 2534 "data/maps/Colchis/scripts.pory"
	walk_right
# 2534 "data/maps/Colchis/scripts.pory"
	walk_right
# 2535 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2538 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 2539 "data/maps/Colchis/scripts.pory"
	walk_right
# 2539 "data/maps/Colchis/scripts.pory"
	walk_right
# 2539 "data/maps/Colchis/scripts.pory"
	walk_right
# 2539 "data/maps/Colchis/scripts.pory"
	walk_right
# 2539 "data/maps/Colchis/scripts.pory"
	walk_right
# 2539 "data/maps/Colchis/scripts.pory"
	walk_right
# 2540 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2543 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_up
# 2545 "data/maps/Colchis/scripts.pory"
	walk_right
# 2545 "data/maps/Colchis/scripts.pory"
	walk_right
# 2545 "data/maps/Colchis/scripts.pory"
	walk_right
# 2545 "data/maps/Colchis/scripts.pory"
	walk_right
# 2545 "data/maps/Colchis/scripts.pory"
	walk_right
# 2545 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2548 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 2549 "data/maps/Colchis/scripts.pory"
	walk_right
# 2549 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2552 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 2553 "data/maps/Colchis/scripts.pory"
	walk_up
# 2553 "data/maps/Colchis/scripts.pory"
	walk_up
# 2553 "data/maps/Colchis/scripts.pory"
	walk_up
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2554 "data/maps/Colchis/scripts.pory"
	walk_right
# 2555 "data/maps/Colchis/scripts.pory"
	walk_up
# 2555 "data/maps/Colchis/scripts.pory"
	walk_up
# 2555 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2558 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 2559 "data/maps/Colchis/scripts.pory"
	walk_up
# 2559 "data/maps/Colchis/scripts.pory"
	walk_up
# 2559 "data/maps/Colchis/scripts.pory"
	walk_up
# 2559 "data/maps/Colchis/scripts.pory"
	walk_up
# 2559 "data/maps/Colchis/scripts.pory"
	walk_up
# 2559 "data/maps/Colchis/scripts.pory"
	walk_up
# 2559 "data/maps/Colchis/scripts.pory"
	walk_up
# 2559 "data/maps/Colchis/scripts.pory"
	walk_up
# 2559 "data/maps/Colchis/scripts.pory"
	walk_up
# 2559 "data/maps/Colchis/scripts.pory"
	walk_up
# 2559 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2562 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 2563 "data/maps/Colchis/scripts.pory"
	walk_up
# 2563 "data/maps/Colchis/scripts.pory"
	walk_up
# 2563 "data/maps/Colchis/scripts.pory"
	walk_up
# 2563 "data/maps/Colchis/scripts.pory"
	walk_up
# 2563 "data/maps/Colchis/scripts.pory"
	walk_up
# 2563 "data/maps/Colchis/scripts.pory"
	walk_up
# 2563 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2566 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 2567 "data/maps/Colchis/scripts.pory"
	walk_left
# 2568 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2571 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2573 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2578 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 2579 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2582 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 2583 "data/maps/Colchis/scripts.pory"
	walk_right
# 2583 "data/maps/Colchis/scripts.pory"
	walk_right
# 2584 "data/maps/Colchis/scripts.pory"
	walk_down
# 2585 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2588 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 2589 "data/maps/Colchis/scripts.pory"
	walk_left
# 2590 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2593 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 2594 "data/maps/Colchis/scripts.pory"
	walk_right
# 2595 "data/maps/Colchis/scripts.pory"
	walk_up
# 2596 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2599 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 2600 "data/maps/Colchis/scripts.pory"
	walk_left
# 2601 "data/maps/Colchis/scripts.pory"
	walk_up
# 2602 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2605 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 2606 "data/maps/Colchis/scripts.pory"
	walk_down
# 2606 "data/maps/Colchis/scripts.pory"
	walk_down
# 2606 "data/maps/Colchis/scripts.pory"
	walk_down
# 2606 "data/maps/Colchis/scripts.pory"
	walk_down
# 2606 "data/maps/Colchis/scripts.pory"
	walk_down
# 2606 "data/maps/Colchis/scripts.pory"
	walk_down
# 2606 "data/maps/Colchis/scripts.pory"
	walk_down
# 2606 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2609 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 2610 "data/maps/Colchis/scripts.pory"
	walk_up
# 2610 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2613 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonApproachPlayer:
# 2614 "data/maps/Colchis/scripts.pory"
	walk_up
# 2614 "data/maps/Colchis/scripts.pory"
	walk_up
# 2614 "data/maps/Colchis/scripts.pory"
	walk_up
# 2614 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2617 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonExit:
# 2618 "data/maps/Colchis/scripts.pory"
	walk_down
# 2618 "data/maps/Colchis/scripts.pory"
	walk_down
# 2618 "data/maps/Colchis/scripts.pory"
	walk_down
# 2618 "data/maps/Colchis/scripts.pory"
	walk_down
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2619 "data/maps/Colchis/scripts.pory"
	walk_left
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
# 2620 "data/maps/Colchis/scripts.pory"
	walk_down
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
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2622 "data/maps/Colchis/scripts.pory"
	walk_down
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
# 2623 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2626 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonExit:
# 2627 "data/maps/Colchis/scripts.pory"
	walk_down
# 2627 "data/maps/Colchis/scripts.pory"
	walk_down
# 2627 "data/maps/Colchis/scripts.pory"
	walk_down
# 2627 "data/maps/Colchis/scripts.pory"
	walk_down
# 2627 "data/maps/Colchis/scripts.pory"
	walk_down
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2628 "data/maps/Colchis/scripts.pory"
	walk_left
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2629 "data/maps/Colchis/scripts.pory"
	walk_down
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_right
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2631 "data/maps/Colchis/scripts.pory"
	walk_down
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
# 2632 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2635 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerPrisonExit:
# 2636 "data/maps/Colchis/scripts.pory"
	walk_down
# 2636 "data/maps/Colchis/scripts.pory"
	walk_down
# 2636 "data/maps/Colchis/scripts.pory"
	walk_down
# 2636 "data/maps/Colchis/scripts.pory"
	walk_down
# 2636 "data/maps/Colchis/scripts.pory"
	walk_down
# 2636 "data/maps/Colchis/scripts.pory"
	walk_down
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_left
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2638 "data/maps/Colchis/scripts.pory"
	walk_down
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_right
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_down
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2644 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 2645 "data/maps/Colchis/scripts.pory"
	walk_left
# 2645 "data/maps/Colchis/scripts.pory"
	walk_left
# 2645 "data/maps/Colchis/scripts.pory"
	walk_left
# 2646 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2649 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 2650 "data/maps/Colchis/scripts.pory"
	walk_down
# 2651 "data/maps/Colchis/scripts.pory"
	walk_right
# 2651 "data/maps/Colchis/scripts.pory"
	walk_right
# 2651 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2654 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 2655 "data/maps/Colchis/scripts.pory"
	walk_up
# 2655 "data/maps/Colchis/scripts.pory"
	walk_up
# 2655 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2658 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 2659 "data/maps/Colchis/scripts.pory"
	walk_up
# 2659 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2662 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3A:
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2663 "data/maps/Colchis/scripts.pory"
	walk_up
# 2664 "data/maps/Colchis/scripts.pory"
	walk_right
# 2664 "data/maps/Colchis/scripts.pory"
	walk_right
# 2665 "data/maps/Colchis/scripts.pory"
	walk_up
# 2665 "data/maps/Colchis/scripts.pory"
	walk_up
# 2665 "data/maps/Colchis/scripts.pory"
	walk_up
# 2665 "data/maps/Colchis/scripts.pory"
	walk_up
# 2665 "data/maps/Colchis/scripts.pory"
	walk_up
# 2665 "data/maps/Colchis/scripts.pory"
	walk_up
# 2665 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2668 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3B:
# 2669 "data/maps/Colchis/scripts.pory"
	walk_up
# 2669 "data/maps/Colchis/scripts.pory"
	walk_up
# 2670 "data/maps/Colchis/scripts.pory"
	walk_right
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
Colchis_Movement_PlayerSanctum3A:
# 2675 "data/maps/Colchis/scripts.pory"
	walk_down
# 2676 "data/maps/Colchis/scripts.pory"
	walk_right
# 2677 "data/maps/Colchis/scripts.pory"
	walk_down
# 2677 "data/maps/Colchis/scripts.pory"
	walk_down
# 2678 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2681 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3B:
# 2682 "data/maps/Colchis/scripts.pory"
	walk_down
# 2682 "data/maps/Colchis/scripts.pory"
	walk_down
# 2682 "data/maps/Colchis/scripts.pory"
	walk_down
# 2683 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2686 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn:
# 2687 "data/maps/Colchis/scripts.pory"
	walk_down
# 2687 "data/maps/Colchis/scripts.pory"
	walk_down
# 2687 "data/maps/Colchis/scripts.pory"
	walk_down
# 2687 "data/maps/Colchis/scripts.pory"
	walk_down
# 2687 "data/maps/Colchis/scripts.pory"
	walk_down
# 2687 "data/maps/Colchis/scripts.pory"
	walk_down
# 2687 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2690 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2A:
# 2691 "data/maps/Colchis/scripts.pory"
	walk_down
# 2692 "data/maps/Colchis/scripts.pory"
	walk_left
# 2692 "data/maps/Colchis/scripts.pory"
	walk_left
# 2693 "data/maps/Colchis/scripts.pory"
	walk_down
# 2694 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2697 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2B:
# 2698 "data/maps/Colchis/scripts.pory"
	walk_down
# 2699 "data/maps/Colchis/scripts.pory"
	walk_left
# 2700 "data/maps/Colchis/scripts.pory"
	walk_down
# 2701 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2704 "data/maps/Colchis/scripts.pory"
Colchis_Movement_Exeunt:
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_right
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
# 2708 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2711 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAndMedeaExeunt:
# 2712 "data/maps/Colchis/scripts.pory"
	walk_down
# 2713 "data/maps/Colchis/scripts.pory"
	walk_right
# 2713 "data/maps/Colchis/scripts.pory"
	walk_right
# 2713 "data/maps/Colchis/scripts.pory"
	walk_right
# 2713 "data/maps/Colchis/scripts.pory"
	walk_right
# 2713 "data/maps/Colchis/scripts.pory"
	walk_right
# 2713 "data/maps/Colchis/scripts.pory"
	walk_right
# 2713 "data/maps/Colchis/scripts.pory"
	walk_right
# 2713 "data/maps/Colchis/scripts.pory"
	walk_right
# 2713 "data/maps/Colchis/scripts.pory"
	walk_right
# 2713 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2716 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ChefExit:
# 2717 "data/maps/Colchis/scripts.pory"
	walk_right
# 2717 "data/maps/Colchis/scripts.pory"
	walk_right
# 2717 "data/maps/Colchis/scripts.pory"
	walk_right
# 2717 "data/maps/Colchis/scripts.pory"
	walk_right
# 2717 "data/maps/Colchis/scripts.pory"
	walk_right
# 2717 "data/maps/Colchis/scripts.pory"
	walk_right
# 2717 "data/maps/Colchis/scripts.pory"
	walk_right
# 2717 "data/maps/Colchis/scripts.pory"
	walk_right
# 2717 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2720 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit1:
# 2721 "data/maps/Colchis/scripts.pory"
	walk_left
# 2722 "data/maps/Colchis/scripts.pory"
	walk_down
# 2722 "data/maps/Colchis/scripts.pory"
	walk_down
# 2722 "data/maps/Colchis/scripts.pory"
	walk_down
# 2722 "data/maps/Colchis/scripts.pory"
	walk_down
# 2723 "data/maps/Colchis/scripts.pory"
	walk_left
# 2723 "data/maps/Colchis/scripts.pory"
	walk_left
# 2723 "data/maps/Colchis/scripts.pory"
	walk_left
# 2723 "data/maps/Colchis/scripts.pory"
	walk_left
# 2723 "data/maps/Colchis/scripts.pory"
	walk_left
# 2723 "data/maps/Colchis/scripts.pory"
	walk_left
# 2723 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2726 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit2:
# 2727 "data/maps/Colchis/scripts.pory"
	walk_down
# 2728 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_down
# 2729 "data/maps/Colchis/scripts.pory"
	walk_down
# 2729 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_left
# 2730 "data/maps/Colchis/scripts.pory"
	walk_left
# 2730 "data/maps/Colchis/scripts.pory"
	walk_left
# 2730 "data/maps/Colchis/scripts.pory"
	walk_left
# 2730 "data/maps/Colchis/scripts.pory"
	walk_left
# 2730 "data/maps/Colchis/scripts.pory"
	walk_left
# 2730 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1503 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Script_SanctumMedeaReturn_Text_0:
# 1724 "data/maps/Colchis/scripts.pory"
	.string "OIMOIAY!\nOOIIMMOOIIAAYY!!$"

Colchis_Text_JasonIntro1::
# 2733 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 2737 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 2741 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 2745 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 2749 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 2753 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 2758 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 2763 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 2767 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 2771 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 2775 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 2784 "data/maps/Colchis/scripts.pory"
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
# 2789 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 2798 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 2802 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 2811 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 2817 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 2830 "data/maps/Colchis/scripts.pory"
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
# 2842 "data/maps/Colchis/scripts.pory"
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
# 2846 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 2850 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 2854 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 2858 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 2862 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 2866 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 2875 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 2879 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 2897 "data/maps/Colchis/scripts.pory"
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
# 2901 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 2906 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 2910 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 2914 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 2921 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 2925 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 2951 "data/maps/Colchis/scripts.pory"
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
# 2959 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 2963 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 2976 "data/maps/Colchis/scripts.pory"
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
# 2980 "data/maps/Colchis/scripts.pory"
	.string "Do not interrupt my private time with\n"
	.string "Medea 'till you bring shiny Mareep.$"

Colchis_Text_MedeaSanctumTrigger1::
# 2985 "data/maps/Colchis/scripts.pory"
	.string "Ememberray, ingbray onay armhay otay\n"
	.string "Ugialay.$"

Colchis_Text_JasonSanctumTrigger2::
# 2989 "data/maps/Colchis/scripts.pory"
	.string "Have you returned bringing Shiny\n"
	.string "Mareep?$"

Colchis_Text_MedeaSanctumTrigger2::
# 2994 "data/maps/Colchis/scripts.pory"
	.string "Ymay oughtsthay etraybay emay.\n"
	.string "Excuseay emay Asonjay, againstay ymay\l"
	.string "ownay adviceay Iay ustmay aketay\l"
	.string "eavelay ofay ouyay anday eesay atthay\l"
	.string "Ugialay isay afesay.$"

Colchis_Text_JasonSanctumTrigger3::
# 2998 "data/maps/Colchis/scripts.pory"
	.string "How could you fail? You only had one\n"
	.string "job! My quest has failed and it was all\l"
	.string "your fault! Now you will pay the price.\l"
	.string "Go Nosepass!$"

Colchis_Text_JasonLost::
# 3002 "data/maps/Colchis/scripts.pory"
	.string "I curse that day I saved you from the\n"
	.string "surf.$"

Colchis_Text_JasonPost::
# 3006 "data/maps/Colchis/scripts.pory"
	.string "The most wicked betrayal of all my\n"
	.string "life...$"

Colchis_Text_JasonGiveMeMareep::
# 3010 "data/maps/Colchis/scripts.pory"
	.string "I see that you have completed the\n"
	.string "quest. Give me shiny Mareep and let's be\l"
	.string "done.$"

Colchis_Text_GiveJasonMareep::
# 3014 "data/maps/Colchis/scripts.pory"
	.string "Will you give Jason shiny Mareep?$"

Colchis_Text_GaveShinyMareep::
# 3018 "data/maps/Colchis/scripts.pory"
	.string "You gave {STR_VAR_1} to Jason!\p"
	.string "Bye Bye {STR_VAR_1}!$"

Colchis_Text_CultistMPre::
# 3023 "data/maps/Colchis/scripts.pory"
	.string "Espassertray opstay! Allfay intoay\n"
	.string "othingnessnay$"

Colchis_Text_CultistMLost::
# 3028 "data/maps/Colchis/scripts.pory"
	.string "Ethay everlastingay arknessday\n"
	.string "overscay allay.$"

Colchis_Text_CultistMPost::
# 3033 "data/maps/Colchis/scripts.pory"
	.string "Ouyay aymay avehay onway utbay\n"
	.string "ou'llyay evernay escapeay.$"

Colchis_Text_MedeaSanctumReturn1::
# 3038 "data/maps/Colchis/scripts.pory"
	.string "Ouyay onstermay! Owhay ouldcay ouyay\n"
	.string "oday isthay otay emay?$"

Colchis_Text_MedeaSanctumReturn2::
# 3043 "data/maps/Colchis/scripts.pory"
	.string "Ymay ovelay, ehay ashay attackeday\n"
	.string "ymay Ugialay! Iay illway onay ongerlay\l"
	.string "elphay imhay eavelay Olchiscay.$"

Colchis_Text_JasonMedeaReturn1::
# 3047 "data/maps/Colchis/scripts.pory"
	.string "Please, do not cry beloved Medea. Lend\n"
	.string "love the power to hold back your tears.$"

Colchis_Text_JasonMedeaReturn2::
# 3051 "data/maps/Colchis/scripts.pory"
	.string "Hey, I apologize for Medea. I know she's\n"
	.string "acting up, but we're still cool. Give it\l"
	.string "some time I'll get her to cool down. When\l"
	.string "you get out meet me in Bulbus town and\l"
	.string "I'll repay you for shiny Mareep.$"

Colchis_Text_JasonSanctumWilds::
# 3055 "data/maps/Colchis/scripts.pory"
	.string "Alas! Medea! My quest for shiny Mareep\n"
	.string "has failed and now we're vagabonds.$"

Colchis_Text_JasonSanctumDepart::
# 3059 "data/maps/Colchis/scripts.pory"
	.string "Let us depart and leave this one\n"
	.string "behind.$"

Colchis_Text_Bed::
# 3063 "data/maps/Colchis/scripts.pory"
	.string "It's a big comfy bed!\n"
	.string "Would you like to take a rest?$"

Colchis_Text_RingBlockerIntro::
# 3067 "data/maps/Colchis/scripts.pory"
	.string "It's a large metal barrier with a keyhole\n"
	.string "in the center.$"

Colchis_Text_KeyFits::
# 3071 "data/maps/Colchis/scripts.pory"
	.string "The key fits into the keyhole!\n"
	.string "The barriers sink into the ground but\l"
	.string "the key broke off inside!$"

Colchis_Text_RingBlockerDecline::
# 3075 "data/maps/Colchis/scripts.pory"
	.string "Better not try using the key here.$"

Colchis_Text_RingBlockerYesNo::
# 3079 "data/maps/Colchis/scripts.pory"
	.string "Would you like to try using the Colchis\n"
	.string "Key?$"

Colchis_Text_AeetesIntro::
# 3088 "data/maps/Colchis/scripts.pory"
	.string "Ouryay insolentay invasionay ofay\n"
	.string "ouray airfay anday ightymay ingdomkay\l"
	.string "isay ownay atay anay enday. ouryay\l"
	.string "illway ownay earnlay ethay uetray\l"
	.string "owerpay ofay Ingkay Aeetesay.$"

Colchis_Text_AeetesLost::
# 3093 "data/maps/Colchis/scripts.pory"
	.string "Ownay ymay ingdomkay ashay allenfay.$"

Colchis_Text_AeetesPost::
# 3106 "data/maps/Colchis/scripts.pory"
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
# 3111 "data/maps/Colchis/scripts.pory"
	.string "Ymay ifelay ashay eenbay educedray\n"
	.string "otay aughtnay. Eavelay emay.$"

Colchis_Text_ChefProposal::
# 3115 "data/maps/Colchis/scripts.pory"
	.string "I'm nervous! Do you think she will say\n"
	.string "yes?$"

Colchis_Movement_ChefIntro::
# 3119 "data/maps/Colchis/scripts.pory"
	.string "Oh! What to do? I am madly in love with\n"
	.string "one of Colchis' most beautiful maids\l"
	.string "but worry I will lose her to someone\l"
	.string "more handsome and with more money than\l"
	.string "me. If only I had an engagement ring to\l"
	.string "give her in exchange for loyalty.$"

Colchis_Text_ChefRingYesNo::
# 3123 "data/maps/Colchis/scripts.pory"
	.string "Give Chef the Colchis Ring?$"

Colchis_Text_ChefGaveRing::
# 3127 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave Chef the Colchis Ring.$"

Colchis_Text_ChefThanks1::
# 3131 "data/maps/Colchis/scripts.pory"
	.string "Great Almighty! You're giving this to\n"
	.string "me? Take this Sweet Apple as token of\l"
	.string "thanks.$"

Colchis_Text_ChefThanks2::
# 3135 "data/maps/Colchis/scripts.pory"
	.string "I'm off now to proposition the maid.$"

Colchis_Text_ChefGaveRingNo::
# 3139 "data/maps/Colchis/scripts.pory"
	.string "Better not give him the ring.$"

Colchis_Text_Maid1::
# 3143 "data/maps/Colchis/scripts.pory"
	.string "Right now I am a maid but one day I will\n"
	.string "meet a foreign man and have his kids.$"

Colchis_Text_Maid2::
# 3147 "data/maps/Colchis/scripts.pory"
	.string "I'm starting to worry this creep likes\n"
	.string "me.$"

Colchis_Text_JailerIntro::
# 3160 "data/maps/Colchis/scripts.pory"
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
# 3164 "data/maps/Colchis/scripts.pory"
	.string "Give the Colchis Apple to the jailer?$"

Colchis_Text_JailerGaveApple::
# 3168 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave the jailer the Colchis\n"
	.string "Apple$"

Colchis_Text_JailerThanks1::
# 3174 "data/maps/Colchis/scripts.pory"
	.string "Aay Olchiscay apple? Ownay ere'sthay\n"
	.string "aay eetsway eattray! Ankthay ouyay!\l"
	.string "Ere'shay ethay ailjay eykay. Ocknay\l"
	.string "ourselfyay outay.$"

Colchis_Text_JailerThanks2::
# 3179 "data/maps/Colchis/scripts.pory"
	.string "Ebay arefulcay otnay otay ocklay\n"
	.string "ourselfyay inay ailjay. Ahay!$"

Colchis_Text_JailerGaveAppleNo::
# 3183 "data/maps/Colchis/scripts.pory"
	.string "Best not to give him the Apple now.$"

Colchis_Text_PrisonDoorOpen::
# 3187 "data/maps/Colchis/scripts.pory"
	.string "The Colchis Prison Key unlocked the\n"
	.string "door!$"

Colchis_Text_LostKid1::
# 3191 "data/maps/Colchis/scripts.pory"
	.string "Hey! Thanks for finding me! I was\n"
	.string "starting to get scared but I'll go back\l"
	.string "to where I belong now.$"

Colchis_Text_LostKid2::
# 3195 "data/maps/Colchis/scripts.pory"
	.string "I love playing with my friends again.$"

Colchis_Text_Doorman1::
# 3209 "data/maps/Colchis/scripts.pory"
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
# 3214 "data/maps/Colchis/scripts.pory"
	.string "Ankthay ouyay orfay ingingbray usay\n"
	.string "ackbay ogethertay. Ethay oorday isay\l"
	.string "openay. Arewellfay.$"

Colchis_Text_Doorman3::
# 3219 "data/maps/Colchis/scripts.pory"
	.string "Anksthay againay.$"

Colchis_Text_Nanny1::
# 3223 "data/maps/Colchis/scripts.pory"
	.string "Oh no! How terrible! I'm freaking out\n"
	.string "because I lost another one. What if I\l"
	.string "get caught swapping out another kid?\l"
	.string "When they're infants they usually can't\l"
	.string "tell but this one was older...What can I\l"
	.string "do?$"

Colchis_Text_Nanny2::
# 3227 "data/maps/Colchis/scripts.pory"
	.string "Oh! Thanks for finding that lost kid for\n"
	.string "me. I feel like I can finally exhale. I\l"
	.string "had been so stressed out I hadn't been\l"
	.string "able to come socialize with my man.$"
