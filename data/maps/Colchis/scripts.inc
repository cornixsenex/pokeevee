Colchis_MapScripts::
# 111 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 126 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 132 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME
# 146 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 112 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 115 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 118 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 17
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 121 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	return

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 113 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupJail
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 116 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupLostKid
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 115 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 119 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_ShowNannyWithGuard
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 122 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
# 127 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 128 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME:
# 134 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_MAREEP, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2
Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 139 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 135 "data/maps/Colchis/scripts.pory"
	hideobjectat 2, MAP_COLCHIS
# 136 "data/maps/Colchis/scripts.pory"
	removeobject 2
	goto Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 140 "data/maps/Colchis/scripts.pory"
	hideobjectat 1, MAP_COLCHIS
# 141 "data/maps/Colchis/scripts.pory"
	removeobject 1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 147 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
# 149 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_WarpSanctum::
# 157 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 158 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 34, 56
	end


Colchis_TempScript_SetupTestMedeaDance::
# 163 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 164 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 169 "data/maps/Colchis/scripts.pory"
	lockall
# 170 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 171 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SetupJail::
# 176 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 177 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
	end


Colchis_Script_Jason::
# 182 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 183 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 184 "data/maps/Colchis/scripts.pory"
	closemessage
# 185 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 192 "data/maps/Colchis/scripts.pory"
	lockall
# 194 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 196 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 197 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 198 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 199 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 200 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 201 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 204 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 205 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 206 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 209 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 210 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 211 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 216 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 217 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 218 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 221 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 222 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 223 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 224 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 225 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 226 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 227 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 228 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 229 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 230 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 231 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 232 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 233 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 234 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 235 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 236 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 237 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 240 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 241 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 242 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 243 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 244 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 245 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 246 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 247 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 248 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 249 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 250 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 251 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 252 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 255 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 256 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 257 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 260 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 261 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 262 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 266 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 267 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 268 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 269 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 270 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 271 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 272 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 273 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 274 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 275 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 277 "data/maps/Colchis/scripts.pory"
	closemessage
# 279 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 286 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 287 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 288 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 289 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 290 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 291 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 292 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 293 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 294 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 297 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 298 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 299 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 301 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 302 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 303 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 304 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 305 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 306 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 307 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 311 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 317 "data/maps/Colchis/scripts.pory"
	lockall
# 318 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 320 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 327 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 328 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 329 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 331 "data/maps/Colchis/scripts.pory"
	addobject 23
# 332 "data/maps/Colchis/scripts.pory"
	addobject 24
# 334 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 335 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 339 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 340 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 342 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 343 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 344 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 347 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 348 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPre, MSGBOX_DEFAULT
# 349 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 350 "data/maps/Colchis/scripts.pory"
	closemessage
# 353 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
# 356 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 357 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPost, MSGBOX_DEFAULT
# 358 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 359 "data/maps/Colchis/scripts.pory"
	closemessage
# 362 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleExitA
# 363 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleExitB
# 364 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 367 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 368 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 370 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 23, 0, 0
# 371 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 24, 2, 0
# 373 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_FACE_DOWN
# 374 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_UP
# 376 "data/maps/Colchis/scripts.pory"
	addobject 23
# 377 "data/maps/Colchis/scripts.pory"
	addobject 24
# 379 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 380 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
	return


Colchis_Script_MedeaDance::
# 390 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 391 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 392 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 397 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 398 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 399 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 400 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 401 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 402 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 403 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 404 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 405 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 406 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 407 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 408 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 409 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 410 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 411 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 412 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 413 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 414 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 423 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 424 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 425 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 426 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 427 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 429 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 431 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 433 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 434 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 435 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 437 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 439 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 440 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 441 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 443 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 449 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 450 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 451 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 452 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 453 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 454 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 455 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 457 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 459 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 460 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 461 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 462 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 463 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 465 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 467 "data/maps/Colchis/scripts.pory"
	delay 25
# 469 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 470 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 471 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 472 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 473 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 475 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 482 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 483 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 484 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 485 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 486 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 487 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 488 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 490 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 492 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 493 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 494 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 495 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 496 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 497 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 499 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 501 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 502 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 503 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 504 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 505 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 507 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 509 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 510 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 511 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 512 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 513 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 515 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 517 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 518 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 519 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 520 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 523 "data/maps/Colchis/scripts.pory"
	waitmovement 4
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
# 537 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 538 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 539 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 540 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 541 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 542 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 543 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 545 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 547 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 548 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 549 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 550 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 551 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 553 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 559 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 565 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 566 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 567 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 568 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 569 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 570 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 573 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 578 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 584 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 585 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 586 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 587 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 588 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 589 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 590 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 592 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 598 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 601 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 609 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 610 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 611 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 612 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 613 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 614 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 615 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 617 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 619 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 620 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 621 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 622 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 623 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 624 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 625 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 627 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 632 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 636 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 637 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 638 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 639 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 640 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 641 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 642 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 644 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 646 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 647 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 648 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 649 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 650 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 651 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 652 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 654 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 656 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 660 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 661 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 662 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 663 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 664 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 665 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 666 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 668 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 670 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 671 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 672 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 673 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 674 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 675 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 676 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 678 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 680 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 684 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 685 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 686 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 687 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 688 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 689 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 690 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 692 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 694 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 695 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 696 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 697 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 698 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 699 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 700 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 702 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 704 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 713 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 714 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 715 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 716 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 717 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 718 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 719 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 720 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 722 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 724 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 726 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 727 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 728 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 729 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 730 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 731 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 732 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 733 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 735 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 737 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 739 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 740 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 741 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 742 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 743 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 744 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 745 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 746 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 748 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 750 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 756 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 757 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 758 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 759 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 760 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 761 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 762 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 763 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 765 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 766 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 768 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 769 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 772 "data/maps/Colchis/scripts.pory"
	delay 25
# 776 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 777 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 781 "data/maps/Colchis/scripts.pory"
	delay 25
# 783 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 784 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 788 "data/maps/Colchis/scripts.pory"
	delay 25
# 790 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 791 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 795 "data/maps/Colchis/scripts.pory"
	delay 25
# 797 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 798 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 799 "data/maps/Colchis/scripts.pory"
	delay 25
# 804 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 805 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 806 "data/maps/Colchis/scripts.pory"
	delay 25
# 808 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 809 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 810 "data/maps/Colchis/scripts.pory"
	delay 25
# 815 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 816 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 817 "data/maps/Colchis/scripts.pory"
	delay 25
# 819 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 820 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 821 "data/maps/Colchis/scripts.pory"
	delay 25
# 823 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 824 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 825 "data/maps/Colchis/scripts.pory"
	delay 25
# 827 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 828 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 829 "data/maps/Colchis/scripts.pory"
	delay 25
# 834 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 835 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 836 "data/maps/Colchis/scripts.pory"
	delay 25
# 838 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 839 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 840 "data/maps/Colchis/scripts.pory"
	delay 25
# 842 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 843 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 844 "data/maps/Colchis/scripts.pory"
	delay 25
# 846 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 847 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 848 "data/maps/Colchis/scripts.pory"
	delay 25
# 850 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 852 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 853 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 854 "data/maps/Colchis/scripts.pory"
	delay 25
# 859 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 860 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 861 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 862 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 863 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 864 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 865 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 866 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 868 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 877 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 878 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 879 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 880 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 881 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 882 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 883 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 884 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 885 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 890 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 891 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 892 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 893 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 894 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 895 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 896 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 897 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 898 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 903 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 904 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 905 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 906 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 907 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 908 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 909 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 910 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 911 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 916 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 917 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 918 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 919 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 920 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 921 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 922 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 923 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 924 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 929 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 930 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 931 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 932 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 933 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 934 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 935 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 936 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 937 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 942 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 943 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 944 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 945 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 946 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 947 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 948 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 949 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 950 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 955 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 956 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 957 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 958 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 959 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 960 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 961 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 962 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 963 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 968 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 969 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 970 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 971 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 972 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 973 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 974 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 975 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 976 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 981 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 982 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 983 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 984 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 985 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 986 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 987 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 988 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 989 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 991 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 992 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 993 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 994 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 995 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 996 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 997 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 998 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 999 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1001 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1002 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 1004 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 1005 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1006 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1007 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1008 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1009 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1011 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1012 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1013 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1014 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1015 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1017 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1018 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1019 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1024 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1025 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1027 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1029 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1035 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1036 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1037 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1038 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1039 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1040 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1041 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1042 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1047 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
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
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1056 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1057 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1058 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1059 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1060 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1061 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1062 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1063 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1071 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1072 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1073 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1074 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1075 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1076 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1077 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1078 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1079 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1080 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1081 "data/maps/Colchis/scripts.pory"
	waitmovement 13
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
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1090 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1091 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1092 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1093 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1094 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1095 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1096 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1097 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1098 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1099 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1100 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1101 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1102 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1103 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1104 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1105 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1106 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1107 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1108 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1109 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1110 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1111 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1112 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1113 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1114 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1115 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1116 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1117 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1118 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1119 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1120 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1121 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1122 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1123 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1124 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1135 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1136 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1137 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1142 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1143 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1144 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1145 "data/maps/Colchis/scripts.pory"
	closemessage
# 1147 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1151 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1152 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1153 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1154 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1155 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1157 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1158 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1159 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1161 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1162 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1163 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1164 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1172 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1173 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1174 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1179 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1180 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1181 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1188 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1189 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1190 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1194 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1195 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1196 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1205 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1206 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1207 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1208 "data/maps/Colchis/scripts.pory"
	closemessage
# 1211 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1212 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1213 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1222 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1223 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1224 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1229 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1230 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1231 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1234 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1235 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1236 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1237 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1238 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1242 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1243 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1244 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1248 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1249 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1250 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1252 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1253 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1254 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1258 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1259 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1261 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1262 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1268 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1269 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1270 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1271 "data/maps/Colchis/scripts.pory"
	closemessage
# 1274 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1275 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1278 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1279 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1287 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1293 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1294 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1295 "data/maps/Colchis/scripts.pory"
	closemessage
# 1296 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1300 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1301 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1304 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1305 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1306 "data/maps/Colchis/scripts.pory"
	closemessage
# 1307 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1310 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1311 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1312 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1313 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1316 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1317 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1318 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1319 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1320 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1323 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1324 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1325 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1326 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1327 "data/maps/Colchis/scripts.pory"
	delay 30
# 1328 "data/maps/Colchis/scripts.pory"
	waitse
# 1331 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonApproachPlayer
# 1332 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1335 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1336 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1337 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1340 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1341 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1342 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1345 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1346 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1347 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1350 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1351 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1352 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1355 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1356 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1357 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1359 "data/maps/Colchis/scripts.pory"
	closemessage
# 1362 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1363 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1366 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1367 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1368 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1369 "data/maps/Colchis/scripts.pory"
	closemessage
# 1372 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1373 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1376 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1377 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1378 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1381 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1382 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1383 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1385 "data/maps/Colchis/scripts.pory"
	closemessage
# 1389 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonExit
# 1390 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonExit
# 1391 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerPrisonExit
# 1392 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1394 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1402 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1403 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1406 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1407 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1408 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1410 "data/maps/Colchis/scripts.pory"
	closemessage
# 1413 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1414 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1417 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1418 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1419 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1420 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1421 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1424 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1425 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 1
# 1426 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1427 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 1
# 1430 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1431 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1434 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1435 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1436 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1439 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1440 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1441 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1444 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1445 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1448 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1449 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1450 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1452 "data/maps/Colchis/scripts.pory"
	closemessage
# 1455 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1456 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1459 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1460 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1462 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1463 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1465 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1466 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1468 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1469 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1470 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1473 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1474 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1475 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1476 "data/maps/Colchis/scripts.pory"
	closemessage
# 1479 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1480 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1483 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1484 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1487 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1490 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1491 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1492 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1493 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1495 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1496 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1497 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1498 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1499 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_LugiaTest::
# 1505 "data/maps/Colchis/scripts.pory"
	lockall
# 1506 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1507 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1508 "data/maps/Colchis/scripts.pory"
	closemessage
# 1509 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_Lugia::
# 1514 "data/maps/Colchis/scripts.pory"
	lockall
# 1515 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1516 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 1517 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1518 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_LUGIA
# 1519 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1520 "data/maps/Colchis/scripts.pory"
	setwildbattle SPECIES_LUGIA, 18
# 1521 "data/maps/Colchis/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1522 "data/maps/Colchis/scripts.pory"
	waitstate
# 1523 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1524 "data/maps/Colchis/scripts.pory"
	removeobject 1
# 1525 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTriggerA::
# 1531 "data/maps/Colchis/scripts.pory"
	lockall
# 1532 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 0
# 1533 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTriggerB::
# 1537 "data/maps/Colchis/scripts.pory"
	lockall
# 1538 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 1
# 1539 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTrigger::
# 1544 "data/maps/Colchis/scripts.pory"
	lockall
# 1547 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1548 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1549 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1550 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1551 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1552 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1555 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_4
Colchis_Script_SanctumTrigger_3:
# 1559 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 12
# 1561 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerEndIntro
# 1563 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_7
# 1582 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_8
# 1604 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1605 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1606 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
# 1607 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
Colchis_Script_SanctumTrigger_1:
# 1610 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_SanctumTrigger_2:
# 1556 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_4:
# 1555 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_2
	goto Colchis_Script_SanctumTrigger_3

Colchis_Script_SanctumTrigger_7:
# 1566 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1569 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1573 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_8:
# 1583 "data/maps/Colchis/scripts.pory"
	closemessage
# 1585 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1586 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumTrigger_12
# 1591 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1592 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1594 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1595 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumWilds, MSGBOX_DEFAULT
# 1596 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1601 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_12:
# 1588 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Exeunt
	goto Colchis_Script_SanctumTrigger_1


Colchis_Script_SanctumTriggerReturn::
# 1615 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1616 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger1, MSGBOX_DEFAULT
# 1617 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1619 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1620 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger1, MSGBOX_DEFAULT
# 1621 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1623 "data/maps/Colchis/scripts.pory"
	closemessage
# 1626 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1627 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_SanctumTriggerEndIntro::
# 1633 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1634 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1635 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumTriggerMedeaExit::
# 1640 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1641 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger2, MSGBOX_DEFAULT
# 1642 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1643 "data/maps/Colchis/scripts.pory"
	closemessage
# 1644 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTriggerMedeaExit_2
# 1647 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3B
Colchis_Script_SanctumTriggerMedeaExit_1:
# 1649 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumTriggerMedeaExit_2:
# 1645 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3A
	goto Colchis_Script_SanctumTriggerMedeaExit_1


Colchis_Script_LugiaChaseTrigger::
# 1654 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1655 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaChaseTrigger_2
Colchis_Script_LugiaChaseTrigger_1:
	end

Colchis_Script_LugiaChaseTrigger_2:
# 1656 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	goto Colchis_Script_LugiaChaseTrigger_1


Colchis_Script_LugiaWanderTrigger::
# 1662 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1663 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaWanderTrigger_2
Colchis_Script_LugiaWanderTrigger_1:
	end

Colchis_Script_LugiaWanderTrigger_2:
# 1664 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	goto Colchis_Script_LugiaWanderTrigger_1


Colchis_Script_ShinyMareep::
# 1670 "data/maps/Colchis/scripts.pory"
	lockall
# 1671 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1672 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 1673 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1674 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1675 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1676 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1677 "data/maps/Colchis/scripts.pory"
	waitstate
# 1678 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1679 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1680 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumApproachJason::
# 1685 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumApproachJason_2
# 1688 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3B
Colchis_Script_SanctumApproachJason_1:
# 1690 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1692 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1693 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumApproachJason_2:
# 1686 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3A
	goto Colchis_Script_SanctumApproachJason_1


Colchis_Script_SanctumJasonBattle::
# 1699 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1700 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1702 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1703 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger3, MSGBOX_DEFAULT
# 1704 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1705 "data/maps/Colchis/scripts.pory"
	closemessage
# 1707 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_JASON, Colchis_Text_JasonLost
# 1709 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1710 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPost, MSGBOX_DEFAULT
# 1711 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumMedeaReturn::
# 1718 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1719 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1720 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1722 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1723 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1724 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1727 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1728 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumMedeaReturn_Text_0, MSGBOX_DEFAULT
# 1729 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1730 "data/maps/Colchis/scripts.pory"
	closemessage
# 1733 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn
# 1734 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1737 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1738 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn1, MSGBOX_DEFAULT
# 1739 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1740 "data/maps/Colchis/scripts.pory"
	closemessage
# 1743 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumMedeaReturn_2
# 1746 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2B
Colchis_Script_SanctumMedeaReturn_1:
# 1748 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1750 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1751 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1754 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1755 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn2, MSGBOX_DEFAULT
# 1756 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1757 "data/maps/Colchis/scripts.pory"
	closemessage
# 1762 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1763 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn1, MSGBOX_DEFAULT
# 1764 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1768 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumMedeaReturn_6
Colchis_Script_SanctumMedeaReturn_5:
# 1778 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	return

Colchis_Script_SanctumMedeaReturn_2:
# 1744 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2A
	goto Colchis_Script_SanctumMedeaReturn_1

Colchis_Script_SanctumMedeaReturn_6:
# 1769 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1770 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1771 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1772 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn2, MSGBOX_DEFAULT
# 1773 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1774 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1775 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_SanctumMedeaReturn_5


Colchis_Script_SanctumJasonCheckMareep::
# 1785 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, IsShinyMareepInParty
# 1787 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_2
# 1792 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1793 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonGiveMeMareep, MSGBOX_DEFAULT
# 1794 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1796 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GiveJasonMareep, MSGBOX_YESNO
# 1798 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_5
# 1802 "data/maps/Colchis/scripts.pory"
	special ChoosePartyMon
# 1803 "data/maps/Colchis/scripts.pory"
	waitstate
# 1805 "data/maps/Colchis/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_8
# 1809 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1811 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, SPECIES_MAREEP
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_11
# 1815 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonIsShiny
# 1817 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_14
# 1821 "data/maps/Colchis/scripts.pory"
	special BufferMonNickname
# 1822 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GaveShinyMareep, MSGBOX_DEFAULT
# 1823 "data/maps/Colchis/scripts.pory"
	closemessage
# 1824 "data/maps/Colchis/scripts.pory"
	special ReleaseChosenMon
# 1826 "data/maps/Colchis/scripts.pory"
	setflag FLAG_JASON_HAS_SHINYMAREEP
Colchis_Script_SanctumJasonCheckMareep_1:
	return

Colchis_Script_SanctumJasonCheckMareep_2:
# 1788 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_5:
# 1799 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_8:
# 1806 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_11:
# 1812 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_14:
# 1818 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1


Colchis_Script_SanctumJasonMareep::
# 1839 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumApproachJason
# 1842 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	return


Colchis_Script_Exeunt::
# 1849 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 14
# 1851 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_Exeunt
# 1852 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_Exeunt
# 1853 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_Exeunt
# 1854 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1856 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_BIG_ISLAND_N, 31, 37
	end


Colchis_Script_SetupEscapeFromColchis::
# 1862 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1863 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumDepart, MSGBOX_DEFAULT
# 1864 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1865 "data/maps/Colchis/scripts.pory"
	closemessage
# 1868 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAndMedeaExeunt
# 1869 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_JasonAndMedeaExeunt
# 1870 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1874 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 14, 0
# 1875 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_INVISIBLE
# 1877 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 15, 0
# 1878 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 1880 "data/maps/Colchis/scripts.pory"
	hideobjectat 54, MAP_COLCHIS
# 1881 "data/maps/Colchis/scripts.pory"
	hideobjectat 4, MAP_COLCHIS
# 1883 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1884 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1888 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_FORCED_BATTLE
# 1891 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 16
# 1894 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
# 1895 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1898 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupLostKid
# 1901 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_TrainerAeetes::
# 1914 "data/maps/Colchis/scripts.pory"
	lockall
# 1915 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1917 "data/maps/Colchis/scripts.pory"
	checktrainerflag TRAINER_AEETES
	goto_if 0, Colchis_Script_TrainerAeetes_2
# 1935 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1936 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1937 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
Colchis_Script_TrainerAeetes_1:
# 1939 "data/maps/Colchis/scripts.pory"
	closemessage
# 1940 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_TrainerAeetes_2:
# 1919 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1920 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesIntro, MSGBOX_DEFAULT
# 1921 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1922 "data/maps/Colchis/scripts.pory"
	closemessage
# 1923 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_AEETES, Colchis_Text_AeetesLost
# 1924 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1925 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesPost, MSGBOX_DEFAULT
# 1926 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1928 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_KEY
# 1930 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1931 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1932 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
	goto Colchis_Script_TrainerAeetes_1


Colchis_Script_Bed::
# 1945 "data/maps/Colchis/scripts.pory"
	lockall
# 1946 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Bed, MSGBOX_YESNO
# 1947 "data/maps/Colchis/scripts.pory"
	closemessage
# 1948 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Bed_2
Colchis_Script_Bed_1:
# 1951 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Bed_2:
# 1949 "data/maps/Colchis/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Colchis_Script_Bed_1


Colchis_Script_RingBlocker::
# 1956 "data/maps/Colchis/scripts.pory"
	lockall
# 1957 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1960 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerIntro, MSGBOX_DEFAULT
# 1962 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_KEY, 1
# 1967 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_RingBlocker_2
# 1998 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_RingBlocker_1:
# 2002 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_RingBlocker_2:
# 1968 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerYesNo, MSGBOX_YESNO
# 1969 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_RingBlocker_5
# 1994 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerDecline, MSGBOX_DEFAULT
# 1995 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_RingBlocker_1

Colchis_Script_RingBlocker_5:
# 1972 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_KeyFits, MSGBOX_DEFAULT
# 1973 "data/maps/Colchis/scripts.pory"
	closemessage
# 1974 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_KEY
# 1975 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1977 "data/maps/Colchis/scripts.pory"
	hideobjectat 55, MAP_COLCHIS
# 1978 "data/maps/Colchis/scripts.pory"
	removeobject 55
# 1979 "data/maps/Colchis/scripts.pory"
	hideobjectat 56, MAP_COLCHIS
# 1980 "data/maps/Colchis/scripts.pory"
	removeobject 56
# 1981 "data/maps/Colchis/scripts.pory"
	hideobjectat 57, MAP_COLCHIS
# 1982 "data/maps/Colchis/scripts.pory"
	removeobject 57
# 1984 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 55, MOVEMENT_TYPE_INVISIBLE
# 1985 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 55, 1, 3
# 1986 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 56, MOVEMENT_TYPE_INVISIBLE
# 1987 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 56, 2, 3
# 1988 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 57, MOVEMENT_TYPE_INVISIBLE
# 1989 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 57, 3, 3
# 1991 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBARRIER
	goto Colchis_Script_RingBlocker_1


Colchis_Script_RingItem::
# 2007 "data/maps/Colchis/scripts.pory"
	lock
# 2008 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2009 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_RING
# 2010 "data/maps/Colchis/scripts.pory"
	hideobjectat 58, MAP_COLCHIS
# 2011 "data/maps/Colchis/scripts.pory"
	removeobject 58
# 2012 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBALL
# 2013 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 58, MOVEMENT_TYPE_INVISIBLE
# 2014 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 58, 4, 3
# 2015 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_CloseDoor::
# 2020 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2021 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_SetupLostKid::
# 2026 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2027 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 28, 12
# 2028 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_LOOK_AROUND
# 2029 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2030 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	return


Colchis_Script_ShowNannyWithGuard::
# 2035 "data/maps/Colchis/scripts.pory"
	removeobject 30
# 2036 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 30, 7, 50
# 2037 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_LEFT
# 2038 "data/maps/Colchis/scripts.pory"
	addobject 30
# 2039 "data/maps/Colchis/scripts.pory"
	showobjectat 30, MAP_COLCHIS
# 2041 "data/maps/Colchis/scripts.pory"
	removeobject 51
# 2042 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 51, 6, 50
# 2043 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 51, MOVEMENT_TYPE_FACE_RIGHT
# 2044 "data/maps/Colchis/scripts.pory"
	addobject 51
# 2045 "data/maps/Colchis/scripts.pory"
	showobjectat 51, MAP_COLCHIS
	return


Colchis_Script_Chef::
# 2051 "data/maps/Colchis/scripts.pory"
	lockall
# 2052 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2055 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Chef_2
# 2062 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Movement_ChefIntro, MSGBOX_DEFAULT
# 2063 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_RING
# 2064 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Chef_5
# 2095 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Chef_1:
# 2098 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Chef_2:
# 2056 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefProposal, MSGBOX_DEFAULT
# 2057 "data/maps/Colchis/scripts.pory"
	closemessage
# 2058 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_FaceRight
# 2059 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_5:
# 2065 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefRingYesNo, MSGBOX_YESNO
# 2066 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Chef_8
# 2091 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRingNo, MSGBOX_DEFAULT
# 2092 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_8:
# 2068 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_RING
# 2069 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRing, MSGBOX_DEFAULT
# 2070 "data/maps/Colchis/scripts.pory"
	closemessage
# 2072 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_ExclamationMark
# 2073 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2074 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks1, MSGBOX_DEFAULT
# 2075 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_APPLE
# 2077 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks2, MSGBOX_DEFAULT
# 2078 "data/maps/Colchis/scripts.pory"
	closemessage
# 2080 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2081 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Colchis_Script_Chef_12
Colchis_Script_Chef_11:
# 2085 "data/maps/Colchis/scripts.pory"
	applymovement 44, Colchis_Movement_ChefExit
# 2086 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2088 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_MOVECHEF
# 2089 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_12:
# 2082 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_WalkUp
# 2083 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_11


Colchis_Script_MoveChef::
# 2103 "data/maps/Colchis/scripts.pory"
	removeobject 44
# 2104 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 44, 59, 62
# 2105 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 44, MOVEMENT_TYPE_FACE_RIGHT
# 2106 "data/maps/Colchis/scripts.pory"
	addobject 44
# 2107 "data/maps/Colchis/scripts.pory"
	showobjectat 44, MAP_COLCHIS
# 2109 "data/maps/Colchis/scripts.pory"
	removeobject 37
# 2110 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 37, 60, 62
# 2111 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_LEFT
# 2112 "data/maps/Colchis/scripts.pory"
	addobject 37
# 2113 "data/maps/Colchis/scripts.pory"
	showobjectat 37, MAP_COLCHIS
	return


Colchis_Script_Maid::
# 2119 "data/maps/Colchis/scripts.pory"
	lockall
# 2120 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2121 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Maid_2
# 2127 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid1, MSGBOX_DEFAULT
# 2128 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Maid_1:
# 2130 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Maid_2:
# 2122 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid2, MSGBOX_DEFAULT
# 2123 "data/maps/Colchis/scripts.pory"
	closemessage
# 2124 "data/maps/Colchis/scripts.pory"
	applymovement 37, Common_Movement_FaceLeft
# 2125 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Maid_1


Colchis_Script_Jailer::
# 2135 "data/maps/Colchis/scripts.pory"
	lockall
# 2136 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2143 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerIntro, MSGBOX_DEFAULT
# 2146 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_APPLE
# 2147 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Jailer_2
# 2167 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Jailer_1:
# 2169 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Jailer_2:
# 2148 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerAppleYesNo, MSGBOX_YESNO
# 2149 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Jailer_5
# 2163 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveAppleNo, MSGBOX_DEFAULT
# 2164 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1

Colchis_Script_Jailer_5:
# 2150 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_APPLE
# 2152 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveApple, MSGBOX_DEFAULT
# 2153 "data/maps/Colchis/scripts.pory"
	closemessage
# 2155 "data/maps/Colchis/scripts.pory"
	applymovement 32, Common_Movement_ExclamationMark
# 2156 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2157 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks1, MSGBOX_DEFAULT
# 2158 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_JAIL_KEY
# 2160 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks2, MSGBOX_DEFAULT
# 2161 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1


Colchis_Script_PrisonDoor1::
# 2174 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Colchis_Script_PrisonDoor1_2
Colchis_Script_PrisonDoor1_1:
	end

Colchis_Script_PrisonDoor1_2:
# 2175 "data/maps/Colchis/scripts.pory"
	lockall
# 2177 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_A
# 2179 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2180 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2182 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2183 "data/maps/Colchis/scripts.pory"
	closemessage
# 2185 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2186 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2187 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2188 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2189 "data/maps/Colchis/scripts.pory"
	delay 30
# 2190 "data/maps/Colchis/scripts.pory"
	waitse
# 2191 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor1_1


Colchis_Script_PrisonDoor2::
# 2197 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_B, Colchis_Script_PrisonDoor2_2
Colchis_Script_PrisonDoor2_1:
	end

Colchis_Script_PrisonDoor2_2:
# 2198 "data/maps/Colchis/scripts.pory"
	lockall
# 2200 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_B
# 2202 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2203 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2205 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2206 "data/maps/Colchis/scripts.pory"
	closemessage
# 2208 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2209 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2210 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2211 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2212 "data/maps/Colchis/scripts.pory"
	delay 30
# 2213 "data/maps/Colchis/scripts.pory"
	waitse
# 2214 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor2_1


Colchis_Script_PrisonDoor3::
# 2220 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_C, Colchis_Script_PrisonDoor3_2
Colchis_Script_PrisonDoor3_1:
	end

Colchis_Script_PrisonDoor3_2:
# 2221 "data/maps/Colchis/scripts.pory"
	lockall
# 2223 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_C
# 2225 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2226 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2228 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2229 "data/maps/Colchis/scripts.pory"
	closemessage
# 2231 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2232 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2233 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2234 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2235 "data/maps/Colchis/scripts.pory"
	delay 30
# 2236 "data/maps/Colchis/scripts.pory"
	waitse
# 2237 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor3_1


Colchis_Script_LostKid::
# 2243 "data/maps/Colchis/scripts.pory"
	lockall
# 2244 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2246 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_LostKid_2
# 2267 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid2, MSGBOX_DEFAULT
# 2268 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_LostKid_1:
# 2270 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_LostKid_2:
# 2247 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid1, MSGBOX_DEFAULT
# 2248 "data/maps/Colchis/scripts.pory"
	closemessage
# 2249 "data/maps/Colchis/scripts.pory"
	special GetPlayerFacingDirection
# 2250 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Colchis_Script_LostKid_6
# 2253 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit2
Colchis_Script_LostKid_5:
# 2255 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2257 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_RETURN_LOSTKID
# 2259 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2260 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 5, 46
# 2261 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_WANDER_AROUND
# 2262 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2263 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	goto Colchis_Script_LostKid_1

Colchis_Script_LostKid_6:
# 2251 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit1
	goto Colchis_Script_LostKid_5


Colchis_Script_DoorMan::
# 2275 "data/maps/Colchis/scripts.pory"
	lockall
# 2276 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2279 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_DoorMan_2
# 2284 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 17
	goto_if_ne Colchis_Script_DoorMan_6
# 2292 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman3, MSGBOX_DEFAULT
# 2293 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_DoorMan_5:
# 2295 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceRight
Colchis_Script_DoorMan_1:
# 2297 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2298 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_DoorMan_2:
# 2280 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman1, MSGBOX_DEFAULT
# 2281 "data/maps/Colchis/scripts.pory"
	closemessage
# 2282 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceDown
	goto Colchis_Script_DoorMan_1

Colchis_Script_DoorMan_6:
# 2285 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 17
# 2286 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman2, MSGBOX_DEFAULT
# 2287 "data/maps/Colchis/scripts.pory"
	closemessage
# 2288 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2289 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2290 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
	goto Colchis_Script_DoorMan_5


Colchis_Script_Nanny::
# 2304 "data/maps/Colchis/scripts.pory"
	lock
# 2305 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2307 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_Script_Nanny_2
# 2311 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny2, MSGBOX_DEFAULT
# 2312 "data/maps/Colchis/scripts.pory"
	closemessage
# 2313 "data/maps/Colchis/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 2314 "data/maps/Colchis/scripts.pory"
	waitmovement 0
Colchis_Script_Nanny_1:
# 2316 "data/maps/Colchis/scripts.pory"
	release
	end

Colchis_Script_Nanny_2:
# 2308 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny1, MSGBOX_DEFAULT
# 2309 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Nanny_1


Colchis_Script_GruntBreak::
# 2321 "data/maps/Colchis/scripts.pory"
	lockall
# 2322 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2323 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 2324 "data/maps/Colchis/scripts.pory"
	switch VAR_RESULT
# 2325 "data/maps/Colchis/scripts.pory"
	case 1, Colchis_Script_GruntBreak_3
# 2327 "data/maps/Colchis/scripts.pory"
	case 2, Colchis_Script_GruntBreak_4
# 2329 "data/maps/Colchis/scripts.pory"
	case 3, Colchis_Script_GruntBreak_5
# 2331 "data/maps/Colchis/scripts.pory"
	case 4, Colchis_Script_GruntBreak_6
# 2333 "data/maps/Colchis/scripts.pory"
	case 5, Colchis_Script_GruntBreak_7
# 2335 "data/maps/Colchis/scripts.pory"
	case 6, Colchis_Script_GruntBreak_8
# 2337 "data/maps/Colchis/scripts.pory"
	case 7, Colchis_Script_GruntBreak_9
# 2339 "data/maps/Colchis/scripts.pory"
	case 8, Colchis_Script_GruntBreak_10
# 2341 "data/maps/Colchis/scripts.pory"
	case 9, Colchis_Script_GruntBreak_11
# 2344 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak0, MSGBOX_DEFAULT
Colchis_Script_GruntBreak_1:
# 2346 "data/maps/Colchis/scripts.pory"
	closemessage
# 2347 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_GruntBreak_3:
# 2326 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak1, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_4:
# 2328 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak2, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_5:
# 2330 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak3, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_6:
# 2332 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak4, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_7:
# 2334 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak5, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_8:
# 2336 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak6, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_9:
# 2338 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak7, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_10:
# 2340 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak8, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_11:
# 2342 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak9, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1


Colchis_Script_Kid1::
# 2352 "data/maps/Colchis/scripts.pory"
	lock
# 2353 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2354 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid1, MSGBOX_DEFAULT
# 2355 "data/maps/Colchis/scripts.pory"
	closemessage
# 2356 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid2::
# 2361 "data/maps/Colchis/scripts.pory"
	lock
# 2362 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2363 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid2, MSGBOX_DEFAULT
# 2364 "data/maps/Colchis/scripts.pory"
	closemessage
# 2365 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid3::
# 2370 "data/maps/Colchis/scripts.pory"
	lock
# 2371 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2372 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid3, MSGBOX_DEFAULT
# 2373 "data/maps/Colchis/scripts.pory"
	closemessage
# 2374 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher1::
# 2379 "data/maps/Colchis/scripts.pory"
	lock
# 2380 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2381 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher1, MSGBOX_DEFAULT
# 2382 "data/maps/Colchis/scripts.pory"
	closemessage
# 2383 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher2::
# 2388 "data/maps/Colchis/scripts.pory"
	lock
# 2389 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2390 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher2, MSGBOX_DEFAULT
# 2391 "data/maps/Colchis/scripts.pory"
	closemessage
# 2392 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Chef2::
# 2397 "data/maps/Colchis/scripts.pory"
	lock
# 2398 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2399 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Chef2, MSGBOX_DEFAULT
# 2400 "data/maps/Colchis/scripts.pory"
	closemessage
# 2401 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakL::
# 2406 "data/maps/Colchis/scripts.pory"
	lock
# 2407 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2408 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakL, MSGBOX_DEFAULT
# 2409 "data/maps/Colchis/scripts.pory"
	closemessage
# 2410 "data/maps/Colchis/scripts.pory"
	applymovement 39, Common_Movement_FaceRight
# 2411 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2412 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakR::
# 2417 "data/maps/Colchis/scripts.pory"
	lock
# 2418 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2419 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakR, MSGBOX_DEFAULT
# 2420 "data/maps/Colchis/scripts.pory"
	closemessage
# 2421 "data/maps/Colchis/scripts.pory"
	applymovement 38, Common_Movement_FaceLeft
# 2422 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2423 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_MaidL::
# 2428 "data/maps/Colchis/scripts.pory"
	lock
# 2429 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2430 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MaidL, MSGBOX_DEFAULT
# 2431 "data/maps/Colchis/scripts.pory"
	closemessage
# 2432 "data/maps/Colchis/scripts.pory"
	applymovement 43, Common_Movement_FaceRight
# 2433 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2434 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_MaidR::
# 2439 "data/maps/Colchis/scripts.pory"
	lock
# 2440 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2441 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MaidR, MSGBOX_DEFAULT
# 2442 "data/maps/Colchis/scripts.pory"
	closemessage
# 2443 "data/maps/Colchis/scripts.pory"
	applymovement 42, Common_Movement_FaceLeft
# 2444 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2445 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntDoorF::
# 2450 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNTDOOR_F, Colchis_Text_GruntDoorFFight, Colchis_Text_GruntDoorFLost
# 2451 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntDoorFPost, MSGBOX_DEFAULT
# 2452 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntDoorM::
# 2457 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNTDOOR_M, Colchis_Text_GruntDoorMFight, Colchis_Text_GruntDoorMLost
# 2458 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntDoorMPost, MSGBOX_DEFAULT
# 2459 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM1::
# 2464 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM1, Colchis_Text_GruntThroneM1Fight, Colchis_Text_GruntThroneM1Lost
# 2465 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM1Post, MSGBOX_DEFAULT
# 2466 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM2::
# 2471 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM2, Colchis_Text_GruntThroneM2Fight, Colchis_Text_GruntThroneM2Lost
# 2472 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM2Post, MSGBOX_DEFAULT
# 2473 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM3::
# 2478 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM3, Colchis_Text_GruntThroneM3Fight, Colchis_Text_GruntThroneM3Lost
# 2479 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM3Post, MSGBOX_DEFAULT
# 2480 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM4::
# 2485 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM4, Colchis_Text_GruntThroneM4Fight, Colchis_Text_GruntThroneM4Lost
# 2486 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM4Post, MSGBOX_DEFAULT
# 2487 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM5::
# 2492 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM5, Colchis_Text_GruntThroneM5Fight, Colchis_Text_GruntThroneM5Lost
# 2493 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM5Post, MSGBOX_DEFAULT
# 2494 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneM6::
# 2499 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEM6, Colchis_Text_GruntThroneM6Fight, Colchis_Text_GruntThroneM6Lost
# 2500 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneM6Post, MSGBOX_DEFAULT
# 2501 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF1::
# 2508 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF1, Colchis_Text_GruntThroneF1Fight, Colchis_Text_GruntThroneF1Lost
# 2509 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF1Post, MSGBOX_DEFAULT
# 2510 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF2::
# 2515 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF1, Colchis_Text_GruntThroneF2Fight, Colchis_Text_GruntThroneF2Lost
# 2516 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF2Post, MSGBOX_DEFAULT
# 2517 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF3::
# 2522 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF1, Colchis_Text_GruntThroneF3Fight, Colchis_Text_GruntThroneF3Lost
# 2523 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF3Post, MSGBOX_DEFAULT
# 2524 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF4::
# 2529 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF1, Colchis_Text_GruntThroneF4Fight, Colchis_Text_GruntThroneF4Lost
# 2530 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF4Post, MSGBOX_DEFAULT
# 2531 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF5::
# 2536 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF1, Colchis_Text_GruntThroneF5Fight, Colchis_Text_GruntThroneF5Lost
# 2537 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF5Post, MSGBOX_DEFAULT
# 2538 "data/maps/Colchis/scripts.pory"
	closemessage
	end


Colchis_Script_GruntThroneF6::
# 2543 "data/maps/Colchis/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT_THRONEF6, Colchis_Text_GruntThroneF6Fight, Colchis_Text_GruntThroneF6Lost
# 2544 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntThroneF6Post, MSGBOX_DEFAULT
# 2545 "data/maps/Colchis/scripts.pory"
	closemessage
	end


# 2551 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 2552 "data/maps/Colchis/scripts.pory"
	walk_up
# 2552 "data/maps/Colchis/scripts.pory"
	walk_up
# 2552 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2555 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
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
Colchis_Movement_ForcedBattleB:
# 2560 "data/maps/Colchis/scripts.pory"
	walk_up
# 2560 "data/maps/Colchis/scripts.pory"
	walk_up
# 2560 "data/maps/Colchis/scripts.pory"
	walk_up
# 2560 "data/maps/Colchis/scripts.pory"
	walk_up
# 2560 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2563 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitA:
# 2564 "data/maps/Colchis/scripts.pory"
	walk_up
# 2564 "data/maps/Colchis/scripts.pory"
	walk_up
# 2564 "data/maps/Colchis/scripts.pory"
	walk_up
# 2564 "data/maps/Colchis/scripts.pory"
	walk_up
# 2564 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2567 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitB:
# 2568 "data/maps/Colchis/scripts.pory"
	walk_down
# 2568 "data/maps/Colchis/scripts.pory"
	walk_down
# 2568 "data/maps/Colchis/scripts.pory"
	walk_down
# 2568 "data/maps/Colchis/scripts.pory"
	walk_down
# 2568 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2571 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2572 "data/maps/Colchis/scripts.pory"
	walk_up
# 2573 "data/maps/Colchis/scripts.pory"
	walk_right
# 2573 "data/maps/Colchis/scripts.pory"
	walk_right
# 2573 "data/maps/Colchis/scripts.pory"
	walk_right
# 2573 "data/maps/Colchis/scripts.pory"
	walk_right
# 2573 "data/maps/Colchis/scripts.pory"
	walk_right
# 2574 "data/maps/Colchis/scripts.pory"
	walk_up
# 2574 "data/maps/Colchis/scripts.pory"
	walk_up
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2575 "data/maps/Colchis/scripts.pory"
	walk_right
# 2576 "data/maps/Colchis/scripts.pory"
	walk_up
# 2576 "data/maps/Colchis/scripts.pory"
	walk_up
# 2576 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2579 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 2580 "data/maps/Colchis/scripts.pory"
	walk_up
# 2580 "data/maps/Colchis/scripts.pory"
	walk_up
# 2580 "data/maps/Colchis/scripts.pory"
	walk_up
# 2580 "data/maps/Colchis/scripts.pory"
	walk_up
# 2580 "data/maps/Colchis/scripts.pory"
	walk_up
# 2580 "data/maps/Colchis/scripts.pory"
	walk_up
# 2580 "data/maps/Colchis/scripts.pory"
	walk_up
# 2580 "data/maps/Colchis/scripts.pory"
	walk_up
# 2580 "data/maps/Colchis/scripts.pory"
	walk_up
# 2580 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2583 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 2584 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2587 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 2588 "data/maps/Colchis/scripts.pory"
	face_right
# 2589 "data/maps/Colchis/scripts.pory"
	face_up
# 2590 "data/maps/Colchis/scripts.pory"
	face_left
# 2591 "data/maps/Colchis/scripts.pory"
	face_down
# 2592 "data/maps/Colchis/scripts.pory"
	face_right
# 2593 "data/maps/Colchis/scripts.pory"
	face_up
# 2594 "data/maps/Colchis/scripts.pory"
	face_left
# 2595 "data/maps/Colchis/scripts.pory"
	face_down
# 2596 "data/maps/Colchis/scripts.pory"
	face_right
# 2597 "data/maps/Colchis/scripts.pory"
	face_up
# 2598 "data/maps/Colchis/scripts.pory"
	face_left
# 2599 "data/maps/Colchis/scripts.pory"
	face_down
# 2600 "data/maps/Colchis/scripts.pory"
	face_right
# 2601 "data/maps/Colchis/scripts.pory"
	face_up
# 2602 "data/maps/Colchis/scripts.pory"
	face_left
# 2603 "data/maps/Colchis/scripts.pory"
	face_down
# 2604 "data/maps/Colchis/scripts.pory"
	face_right
# 2605 "data/maps/Colchis/scripts.pory"
	face_up
# 2606 "data/maps/Colchis/scripts.pory"
	face_left
# 2607 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2610 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 2611 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2611 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2612 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2615 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 2616 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2616 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2617 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2620 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 2621 "data/maps/Colchis/scripts.pory"
	walk_left
# 2622 "data/maps/Colchis/scripts.pory"
	walk_up
# 2622 "data/maps/Colchis/scripts.pory"
	walk_up
# 2623 "data/maps/Colchis/scripts.pory"
	walk_right
# 2623 "data/maps/Colchis/scripts.pory"
	walk_right
# 2624 "data/maps/Colchis/scripts.pory"
	walk_down
# 2624 "data/maps/Colchis/scripts.pory"
	walk_down
# 2625 "data/maps/Colchis/scripts.pory"
	walk_left
# 2626 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2629 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 2630 "data/maps/Colchis/scripts.pory"
	walk_left
# 2631 "data/maps/Colchis/scripts.pory"
	walk_up
# 2631 "data/maps/Colchis/scripts.pory"
	walk_up
# 2632 "data/maps/Colchis/scripts.pory"
	walk_right
# 2632 "data/maps/Colchis/scripts.pory"
	walk_right
# 2633 "data/maps/Colchis/scripts.pory"
	walk_down
# 2633 "data/maps/Colchis/scripts.pory"
	walk_down
# 2634 "data/maps/Colchis/scripts.pory"
	walk_left
# 2635 "data/maps/Colchis/scripts.pory"
	face_down
# 2636 "data/maps/Colchis/scripts.pory"
	walk_left
# 2637 "data/maps/Colchis/scripts.pory"
	walk_up
# 2637 "data/maps/Colchis/scripts.pory"
	walk_up
# 2638 "data/maps/Colchis/scripts.pory"
	walk_right
# 2638 "data/maps/Colchis/scripts.pory"
	walk_right
# 2639 "data/maps/Colchis/scripts.pory"
	walk_down
# 2639 "data/maps/Colchis/scripts.pory"
	walk_down
# 2640 "data/maps/Colchis/scripts.pory"
	walk_left
# 2641 "data/maps/Colchis/scripts.pory"
	face_down
# 2642 "data/maps/Colchis/scripts.pory"
	walk_left
# 2643 "data/maps/Colchis/scripts.pory"
	walk_up
# 2643 "data/maps/Colchis/scripts.pory"
	walk_up
# 2644 "data/maps/Colchis/scripts.pory"
	walk_right
# 2644 "data/maps/Colchis/scripts.pory"
	walk_right
# 2645 "data/maps/Colchis/scripts.pory"
	walk_down
# 2645 "data/maps/Colchis/scripts.pory"
	walk_down
# 2646 "data/maps/Colchis/scripts.pory"
	walk_left
# 2647 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2650 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 2651 "data/maps/Colchis/scripts.pory"
	walk_down
# 2651 "data/maps/Colchis/scripts.pory"
	walk_down
# 2651 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2654 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 2655 "data/maps/Colchis/scripts.pory"
	walk_right
# 2655 "data/maps/Colchis/scripts.pory"
	walk_right
# 2656 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2659 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 2660 "data/maps/Colchis/scripts.pory"
	walk_left
# 2660 "data/maps/Colchis/scripts.pory"
	walk_left
# 2661 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2664 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 2665 "data/maps/Colchis/scripts.pory"
	walk_down
# 2666 "data/maps/Colchis/scripts.pory"
	face_left
# 2667 "data/maps/Colchis/scripts.pory"
	face_up
# 2668 "data/maps/Colchis/scripts.pory"
	face_right
# 2669 "data/maps/Colchis/scripts.pory"
	face_down
# 2670 "data/maps/Colchis/scripts.pory"
	walk_down
# 2671 "data/maps/Colchis/scripts.pory"
	face_left
# 2672 "data/maps/Colchis/scripts.pory"
	face_up
# 2673 "data/maps/Colchis/scripts.pory"
	face_right
# 2674 "data/maps/Colchis/scripts.pory"
	face_down
# 2675 "data/maps/Colchis/scripts.pory"
	walk_down
# 2676 "data/maps/Colchis/scripts.pory"
	face_left
# 2677 "data/maps/Colchis/scripts.pory"
	face_up
# 2678 "data/maps/Colchis/scripts.pory"
	face_right
# 2679 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2682 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 2683 "data/maps/Colchis/scripts.pory"
	walk_right
# 2684 "data/maps/Colchis/scripts.pory"
	walk_up
# 2685 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2686 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2689 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 2690 "data/maps/Colchis/scripts.pory"
	walk_left
# 2691 "data/maps/Colchis/scripts.pory"
	walk_up
# 2692 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2693 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2696 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 2697 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2698 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2701 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 2702 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2703 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2706 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 2707 "data/maps/Colchis/scripts.pory"
	walk_left
# 2708 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2711 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 2712 "data/maps/Colchis/scripts.pory"
	walk_right
# 2713 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2716 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 2717 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2718 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2721 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 2722 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2723 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2726 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 2727 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2730 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 2731 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 2734 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 2735 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 2739 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 2740 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 2743 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 2744 "data/maps/Colchis/scripts.pory"
	walk_up
# 2744 "data/maps/Colchis/scripts.pory"
	walk_up
# 2744 "data/maps/Colchis/scripts.pory"
	walk_up
# 2744 "data/maps/Colchis/scripts.pory"
	walk_up
# 2744 "data/maps/Colchis/scripts.pory"
	walk_up
# 2744 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2747 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 2748 "data/maps/Colchis/scripts.pory"
	walk_right
# 2748 "data/maps/Colchis/scripts.pory"
	walk_right
# 2748 "data/maps/Colchis/scripts.pory"
	walk_right
# 2748 "data/maps/Colchis/scripts.pory"
	walk_right
# 2748 "data/maps/Colchis/scripts.pory"
	walk_right
# 2748 "data/maps/Colchis/scripts.pory"
	walk_right
# 2748 "data/maps/Colchis/scripts.pory"
	walk_right
# 2748 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_down
# 2749 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2752 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 2753 "data/maps/Colchis/scripts.pory"
	walk_right
# 2753 "data/maps/Colchis/scripts.pory"
	walk_right
# 2753 "data/maps/Colchis/scripts.pory"
	walk_right
# 2753 "data/maps/Colchis/scripts.pory"
	walk_right
# 2753 "data/maps/Colchis/scripts.pory"
	walk_right
# 2753 "data/maps/Colchis/scripts.pory"
	walk_right
# 2753 "data/maps/Colchis/scripts.pory"
	walk_right
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2757 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 2758 "data/maps/Colchis/scripts.pory"
	walk_right
# 2758 "data/maps/Colchis/scripts.pory"
	walk_right
# 2758 "data/maps/Colchis/scripts.pory"
	walk_right
# 2758 "data/maps/Colchis/scripts.pory"
	walk_right
# 2758 "data/maps/Colchis/scripts.pory"
	walk_right
# 2758 "data/maps/Colchis/scripts.pory"
	walk_right
# 2759 "data/maps/Colchis/scripts.pory"
	walk_down
# 2759 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2762 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 2763 "data/maps/Colchis/scripts.pory"
	walk_right
# 2763 "data/maps/Colchis/scripts.pory"
	walk_right
# 2763 "data/maps/Colchis/scripts.pory"
	walk_right
# 2763 "data/maps/Colchis/scripts.pory"
	walk_right
# 2763 "data/maps/Colchis/scripts.pory"
	walk_right
# 2763 "data/maps/Colchis/scripts.pory"
	walk_right
# 2763 "data/maps/Colchis/scripts.pory"
	walk_right
# 2763 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2767 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 2768 "data/maps/Colchis/scripts.pory"
	walk_right
# 2768 "data/maps/Colchis/scripts.pory"
	walk_right
# 2768 "data/maps/Colchis/scripts.pory"
	walk_right
# 2768 "data/maps/Colchis/scripts.pory"
	walk_right
# 2768 "data/maps/Colchis/scripts.pory"
	walk_right
# 2768 "data/maps/Colchis/scripts.pory"
	walk_right
# 2768 "data/maps/Colchis/scripts.pory"
	walk_right
# 2769 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2772 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 2773 "data/maps/Colchis/scripts.pory"
	walk_right
# 2773 "data/maps/Colchis/scripts.pory"
	walk_right
# 2773 "data/maps/Colchis/scripts.pory"
	walk_right
# 2773 "data/maps/Colchis/scripts.pory"
	walk_right
# 2773 "data/maps/Colchis/scripts.pory"
	walk_right
# 2773 "data/maps/Colchis/scripts.pory"
	walk_right
# 2774 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2777 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2778 "data/maps/Colchis/scripts.pory"
	walk_up
# 2779 "data/maps/Colchis/scripts.pory"
	walk_right
# 2779 "data/maps/Colchis/scripts.pory"
	walk_right
# 2779 "data/maps/Colchis/scripts.pory"
	walk_right
# 2779 "data/maps/Colchis/scripts.pory"
	walk_right
# 2779 "data/maps/Colchis/scripts.pory"
	walk_right
# 2779 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2782 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 2783 "data/maps/Colchis/scripts.pory"
	walk_right
# 2783 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2786 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 2787 "data/maps/Colchis/scripts.pory"
	walk_up
# 2787 "data/maps/Colchis/scripts.pory"
	walk_up
# 2787 "data/maps/Colchis/scripts.pory"
	walk_up
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2788 "data/maps/Colchis/scripts.pory"
	walk_right
# 2789 "data/maps/Colchis/scripts.pory"
	walk_up
# 2789 "data/maps/Colchis/scripts.pory"
	walk_up
# 2789 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2792 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 2793 "data/maps/Colchis/scripts.pory"
	walk_up
# 2793 "data/maps/Colchis/scripts.pory"
	walk_up
# 2793 "data/maps/Colchis/scripts.pory"
	walk_up
# 2793 "data/maps/Colchis/scripts.pory"
	walk_up
# 2793 "data/maps/Colchis/scripts.pory"
	walk_up
# 2793 "data/maps/Colchis/scripts.pory"
	walk_up
# 2793 "data/maps/Colchis/scripts.pory"
	walk_up
# 2793 "data/maps/Colchis/scripts.pory"
	walk_up
# 2793 "data/maps/Colchis/scripts.pory"
	walk_up
# 2793 "data/maps/Colchis/scripts.pory"
	walk_up
# 2793 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2796 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 2797 "data/maps/Colchis/scripts.pory"
	walk_up
# 2797 "data/maps/Colchis/scripts.pory"
	walk_up
# 2797 "data/maps/Colchis/scripts.pory"
	walk_up
# 2797 "data/maps/Colchis/scripts.pory"
	walk_up
# 2797 "data/maps/Colchis/scripts.pory"
	walk_up
# 2797 "data/maps/Colchis/scripts.pory"
	walk_up
# 2797 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2800 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 2801 "data/maps/Colchis/scripts.pory"
	walk_left
# 2802 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2805 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 2806 "data/maps/Colchis/scripts.pory"
	walk_up
# 2807 "data/maps/Colchis/scripts.pory"
	walk_right
# 2808 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2812 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 2813 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2816 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 2817 "data/maps/Colchis/scripts.pory"
	walk_right
# 2817 "data/maps/Colchis/scripts.pory"
	walk_right
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2819 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2822 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 2823 "data/maps/Colchis/scripts.pory"
	walk_left
# 2824 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2827 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 2828 "data/maps/Colchis/scripts.pory"
	walk_right
# 2829 "data/maps/Colchis/scripts.pory"
	walk_up
# 2830 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2833 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 2834 "data/maps/Colchis/scripts.pory"
	walk_left
# 2835 "data/maps/Colchis/scripts.pory"
	walk_up
# 2836 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2839 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 2840 "data/maps/Colchis/scripts.pory"
	walk_down
# 2840 "data/maps/Colchis/scripts.pory"
	walk_down
# 2840 "data/maps/Colchis/scripts.pory"
	walk_down
# 2840 "data/maps/Colchis/scripts.pory"
	walk_down
# 2840 "data/maps/Colchis/scripts.pory"
	walk_down
# 2840 "data/maps/Colchis/scripts.pory"
	walk_down
# 2840 "data/maps/Colchis/scripts.pory"
	walk_down
# 2840 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2843 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 2844 "data/maps/Colchis/scripts.pory"
	walk_up
# 2844 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2847 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonApproachPlayer:
# 2848 "data/maps/Colchis/scripts.pory"
	walk_up
# 2848 "data/maps/Colchis/scripts.pory"
	walk_up
# 2848 "data/maps/Colchis/scripts.pory"
	walk_up
# 2848 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2851 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonExit:
# 2852 "data/maps/Colchis/scripts.pory"
	walk_down
# 2852 "data/maps/Colchis/scripts.pory"
	walk_down
# 2852 "data/maps/Colchis/scripts.pory"
	walk_down
# 2852 "data/maps/Colchis/scripts.pory"
	walk_down
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2853 "data/maps/Colchis/scripts.pory"
	walk_left
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2854 "data/maps/Colchis/scripts.pory"
	walk_down
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2855 "data/maps/Colchis/scripts.pory"
	walk_right
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2856 "data/maps/Colchis/scripts.pory"
	walk_down
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
# 2857 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2860 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonExit:
# 2861 "data/maps/Colchis/scripts.pory"
	walk_down
# 2861 "data/maps/Colchis/scripts.pory"
	walk_down
# 2861 "data/maps/Colchis/scripts.pory"
	walk_down
# 2861 "data/maps/Colchis/scripts.pory"
	walk_down
# 2861 "data/maps/Colchis/scripts.pory"
	walk_down
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
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
# 2864 "data/maps/Colchis/scripts.pory"
	walk_right
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2865 "data/maps/Colchis/scripts.pory"
	walk_down
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
# 2866 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2869 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerPrisonExit:
# 2870 "data/maps/Colchis/scripts.pory"
	walk_down
# 2870 "data/maps/Colchis/scripts.pory"
	walk_down
# 2870 "data/maps/Colchis/scripts.pory"
	walk_down
# 2870 "data/maps/Colchis/scripts.pory"
	walk_down
# 2870 "data/maps/Colchis/scripts.pory"
	walk_down
# 2870 "data/maps/Colchis/scripts.pory"
	walk_down
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2871 "data/maps/Colchis/scripts.pory"
	walk_left
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2872 "data/maps/Colchis/scripts.pory"
	walk_down
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2873 "data/maps/Colchis/scripts.pory"
	walk_right
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2874 "data/maps/Colchis/scripts.pory"
	walk_down
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
# 2875 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2878 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 2879 "data/maps/Colchis/scripts.pory"
	walk_left
# 2879 "data/maps/Colchis/scripts.pory"
	walk_left
# 2879 "data/maps/Colchis/scripts.pory"
	walk_left
# 2880 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2883 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 2884 "data/maps/Colchis/scripts.pory"
	walk_down
# 2885 "data/maps/Colchis/scripts.pory"
	walk_right
# 2885 "data/maps/Colchis/scripts.pory"
	walk_right
# 2885 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2888 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 2889 "data/maps/Colchis/scripts.pory"
	walk_up
# 2889 "data/maps/Colchis/scripts.pory"
	walk_up
# 2889 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2892 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 2893 "data/maps/Colchis/scripts.pory"
	walk_up
# 2893 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2896 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3A:
# 2897 "data/maps/Colchis/scripts.pory"
	walk_up
# 2897 "data/maps/Colchis/scripts.pory"
	walk_up
# 2898 "data/maps/Colchis/scripts.pory"
	walk_right
# 2898 "data/maps/Colchis/scripts.pory"
	walk_right
# 2899 "data/maps/Colchis/scripts.pory"
	walk_up
# 2899 "data/maps/Colchis/scripts.pory"
	walk_up
# 2899 "data/maps/Colchis/scripts.pory"
	walk_up
# 2899 "data/maps/Colchis/scripts.pory"
	walk_up
# 2899 "data/maps/Colchis/scripts.pory"
	walk_up
# 2899 "data/maps/Colchis/scripts.pory"
	walk_up
# 2899 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2902 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3B:
# 2903 "data/maps/Colchis/scripts.pory"
	walk_up
# 2903 "data/maps/Colchis/scripts.pory"
	walk_up
# 2904 "data/maps/Colchis/scripts.pory"
	walk_right
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
	step_end

# 2908 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3A:
# 2909 "data/maps/Colchis/scripts.pory"
	walk_down
# 2910 "data/maps/Colchis/scripts.pory"
	walk_right
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2911 "data/maps/Colchis/scripts.pory"
	walk_down
# 2912 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2915 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3B:
# 2916 "data/maps/Colchis/scripts.pory"
	walk_down
# 2916 "data/maps/Colchis/scripts.pory"
	walk_down
# 2916 "data/maps/Colchis/scripts.pory"
	walk_down
# 2917 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2920 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn:
# 2921 "data/maps/Colchis/scripts.pory"
	walk_down
# 2921 "data/maps/Colchis/scripts.pory"
	walk_down
# 2921 "data/maps/Colchis/scripts.pory"
	walk_down
# 2921 "data/maps/Colchis/scripts.pory"
	walk_down
# 2921 "data/maps/Colchis/scripts.pory"
	walk_down
# 2921 "data/maps/Colchis/scripts.pory"
	walk_down
# 2921 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2924 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2A:
# 2925 "data/maps/Colchis/scripts.pory"
	walk_down
# 2926 "data/maps/Colchis/scripts.pory"
	walk_left
# 2926 "data/maps/Colchis/scripts.pory"
	walk_left
# 2927 "data/maps/Colchis/scripts.pory"
	walk_down
# 2928 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2931 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2B:
# 2932 "data/maps/Colchis/scripts.pory"
	walk_down
# 2933 "data/maps/Colchis/scripts.pory"
	walk_left
# 2934 "data/maps/Colchis/scripts.pory"
	walk_down
# 2935 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2938 "data/maps/Colchis/scripts.pory"
Colchis_Movement_Exeunt:
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2939 "data/maps/Colchis/scripts.pory"
	walk_right
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2940 "data/maps/Colchis/scripts.pory"
	walk_up
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2941 "data/maps/Colchis/scripts.pory"
	walk_left
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
# 2942 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2945 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAndMedeaExeunt:
# 2946 "data/maps/Colchis/scripts.pory"
	walk_down
# 2947 "data/maps/Colchis/scripts.pory"
	walk_right
# 2947 "data/maps/Colchis/scripts.pory"
	walk_right
# 2947 "data/maps/Colchis/scripts.pory"
	walk_right
# 2947 "data/maps/Colchis/scripts.pory"
	walk_right
# 2947 "data/maps/Colchis/scripts.pory"
	walk_right
# 2947 "data/maps/Colchis/scripts.pory"
	walk_right
# 2947 "data/maps/Colchis/scripts.pory"
	walk_right
# 2947 "data/maps/Colchis/scripts.pory"
	walk_right
# 2947 "data/maps/Colchis/scripts.pory"
	walk_right
# 2947 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2950 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ChefExit:
# 2951 "data/maps/Colchis/scripts.pory"
	walk_right
# 2951 "data/maps/Colchis/scripts.pory"
	walk_right
# 2951 "data/maps/Colchis/scripts.pory"
	walk_right
# 2951 "data/maps/Colchis/scripts.pory"
	walk_right
# 2951 "data/maps/Colchis/scripts.pory"
	walk_right
# 2951 "data/maps/Colchis/scripts.pory"
	walk_right
# 2951 "data/maps/Colchis/scripts.pory"
	walk_right
# 2951 "data/maps/Colchis/scripts.pory"
	walk_right
# 2951 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2954 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit1:
# 2955 "data/maps/Colchis/scripts.pory"
	walk_left
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
	step_end

# 2960 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit2:
# 2961 "data/maps/Colchis/scripts.pory"
	walk_down
# 2962 "data/maps/Colchis/scripts.pory"
	walk_left
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2963 "data/maps/Colchis/scripts.pory"
	walk_down
# 2964 "data/maps/Colchis/scripts.pory"
	walk_left
# 2964 "data/maps/Colchis/scripts.pory"
	walk_left
# 2964 "data/maps/Colchis/scripts.pory"
	walk_left
# 2964 "data/maps/Colchis/scripts.pory"
	walk_left
# 2964 "data/maps/Colchis/scripts.pory"
	walk_left
# 2964 "data/maps/Colchis/scripts.pory"
	walk_left
# 2964 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1507 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Script_SanctumMedeaReturn_Text_0:
# 1728 "data/maps/Colchis/scripts.pory"
	.string "OIMOIAY!\nOOIIMMOOIIAAYY!!$"

Colchis_Text_JasonIntro1::
# 2967 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 2971 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 2975 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 2979 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 2983 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 2987 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 2992 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 2997 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 3001 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 3005 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 3009 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 3018 "data/maps/Colchis/scripts.pory"
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
# 3023 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 3032 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 3036 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 3045 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 3051 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 3064 "data/maps/Colchis/scripts.pory"
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
# 3076 "data/maps/Colchis/scripts.pory"
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
# 3080 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 3084 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 3088 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 3092 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 3096 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 3100 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 3109 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 3113 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 3131 "data/maps/Colchis/scripts.pory"
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
# 3135 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 3140 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 3144 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 3148 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 3155 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 3159 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 3185 "data/maps/Colchis/scripts.pory"
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
# 3193 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 3197 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 3210 "data/maps/Colchis/scripts.pory"
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
# 3214 "data/maps/Colchis/scripts.pory"
	.string "Do not interrupt my private time with\n"
	.string "Medea 'till you bring shiny Mareep.$"

Colchis_Text_MedeaSanctumTrigger1::
# 3219 "data/maps/Colchis/scripts.pory"
	.string "Ememberray, ingbray onay armhay otay\n"
	.string "Ugialay.$"

Colchis_Text_JasonSanctumTrigger2::
# 3223 "data/maps/Colchis/scripts.pory"
	.string "Have you returned bringing Shiny\n"
	.string "Mareep?$"

Colchis_Text_MedeaSanctumTrigger2::
# 3228 "data/maps/Colchis/scripts.pory"
	.string "Ymay oughtsthay etraybay emay.\n"
	.string "Excuseay emay Asonjay, againstay ymay\l"
	.string "ownay adviceay Iay ustmay aketay\l"
	.string "eavelay ofay ouyay anday eesay atthay\l"
	.string "Ugialay isay afesay.$"

Colchis_Text_JasonSanctumTrigger3::
# 3232 "data/maps/Colchis/scripts.pory"
	.string "How could you fail? You only had one\n"
	.string "job! My quest has failed and it was all\l"
	.string "your fault! Now you will pay the price.\l"
	.string "Go Nosepass!$"

Colchis_Text_JasonLost::
# 3236 "data/maps/Colchis/scripts.pory"
	.string "I curse that day I saved you from the\n"
	.string "surf.$"

Colchis_Text_JasonPost::
# 3240 "data/maps/Colchis/scripts.pory"
	.string "The most wicked betrayal of all my\n"
	.string "life...$"

Colchis_Text_JasonGiveMeMareep::
# 3244 "data/maps/Colchis/scripts.pory"
	.string "I see that you have completed the\n"
	.string "quest. Give me shiny Mareep and let's be\l"
	.string "done.$"

Colchis_Text_GiveJasonMareep::
# 3248 "data/maps/Colchis/scripts.pory"
	.string "Will you give Jason shiny Mareep?$"

Colchis_Text_GaveShinyMareep::
# 3252 "data/maps/Colchis/scripts.pory"
	.string "You gave {STR_VAR_1} to Jason!\p"
	.string "Bye Bye {STR_VAR_1}!$"

Colchis_Text_CultistMPre::
# 3257 "data/maps/Colchis/scripts.pory"
	.string "Espassertray opstay! Allfay intoay\n"
	.string "othingnessnay$"

Colchis_Text_CultistMLost::
# 3262 "data/maps/Colchis/scripts.pory"
	.string "Ethay everlastingay arknessday\n"
	.string "overscay allay.$"

Colchis_Text_CultistMPost::
# 3267 "data/maps/Colchis/scripts.pory"
	.string "Ouyay aymay avehay onway utbay\n"
	.string "ou'llyay evernay escapeay.$"

Colchis_Text_MedeaSanctumReturn1::
# 3272 "data/maps/Colchis/scripts.pory"
	.string "Ouyay onstermay! Owhay ouldcay ouyay\n"
	.string "oday isthay otay emay?$"

Colchis_Text_MedeaSanctumReturn2::
# 3277 "data/maps/Colchis/scripts.pory"
	.string "Ymay ovelay, ehay ashay attackeday\n"
	.string "ymay Ugialay! Iay illway onay ongerlay\l"
	.string "elphay imhay eavelay Olchiscay.$"

Colchis_Text_JasonMedeaReturn1::
# 3281 "data/maps/Colchis/scripts.pory"
	.string "Please, do not cry beloved Medea. Lend\n"
	.string "love the power to hold back your tears.$"

Colchis_Text_JasonMedeaReturn2::
# 3285 "data/maps/Colchis/scripts.pory"
	.string "Hey, I apologize for Medea. I know she's\n"
	.string "acting up, but we're still cool. Give it\l"
	.string "some time I'll get her to cool down. When\l"
	.string "you get out meet me in Bulbus town and\l"
	.string "I'll repay you for shiny Mareep.$"

Colchis_Text_JasonSanctumWilds::
# 3289 "data/maps/Colchis/scripts.pory"
	.string "Alas! Medea! My quest for shiny Mareep\n"
	.string "has failed and now we're vagabonds.$"

Colchis_Text_JasonSanctumDepart::
# 3293 "data/maps/Colchis/scripts.pory"
	.string "Let us depart and leave this one\n"
	.string "behind.$"

Colchis_Text_Bed::
# 3297 "data/maps/Colchis/scripts.pory"
	.string "It's a big comfy bed!\n"
	.string "Would you like to take a rest?$"

Colchis_Text_RingBlockerIntro::
# 3301 "data/maps/Colchis/scripts.pory"
	.string "It's a large metal barrier with a keyhole\n"
	.string "in the center.$"

Colchis_Text_KeyFits::
# 3305 "data/maps/Colchis/scripts.pory"
	.string "The key fits into the keyhole!\n"
	.string "The barriers sink into the ground but\l"
	.string "the key broke off inside!$"

Colchis_Text_RingBlockerDecline::
# 3309 "data/maps/Colchis/scripts.pory"
	.string "Better not try using the key here.$"

Colchis_Text_RingBlockerYesNo::
# 3313 "data/maps/Colchis/scripts.pory"
	.string "Would you like to try using the Colchis\n"
	.string "Key?$"

Colchis_Text_AeetesIntro::
# 3322 "data/maps/Colchis/scripts.pory"
	.string "Ouryay insolentay invasionay ofay\n"
	.string "ouray airfay anday ightymay ingdomkay\l"
	.string "isay ownay atay anay enday. ouryay\l"
	.string "illway ownay earnlay ethay uetray\l"
	.string "owerpay ofay Ingkay Aeetesay.$"

Colchis_Text_AeetesLost::
# 3327 "data/maps/Colchis/scripts.pory"
	.string "Ownay ymay ingdomkay ashay allenfay.$"

Colchis_Text_AeetesPost::
# 3340 "data/maps/Colchis/scripts.pory"
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
# 3345 "data/maps/Colchis/scripts.pory"
	.string "Ymay ifelay ashay eenbay educedray\n"
	.string "otay aughtnay. Eavelay emay.$"

Colchis_Text_ChefProposal::
# 3349 "data/maps/Colchis/scripts.pory"
	.string "I'm nervous! Do you think she will say\n"
	.string "yes?$"

Colchis_Movement_ChefIntro::
# 3353 "data/maps/Colchis/scripts.pory"
	.string "Oh! What to do? I am madly in love with\n"
	.string "one of Colchis' most beautiful maids\l"
	.string "but worry I will lose her to someone\l"
	.string "more handsome and with more money than\l"
	.string "me. If only I had an engagement ring to\l"
	.string "give her in exchange for loyalty.$"

Colchis_Text_ChefRingYesNo::
# 3357 "data/maps/Colchis/scripts.pory"
	.string "Give Chef the Colchis Ring?$"

Colchis_Text_ChefGaveRing::
# 3361 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave Chef the Colchis Ring.$"

Colchis_Text_ChefThanks1::
# 3365 "data/maps/Colchis/scripts.pory"
	.string "Great Almighty! You're giving this to\n"
	.string "me? Take this Sweet Apple as token of\l"
	.string "thanks.$"

Colchis_Text_ChefThanks2::
# 3369 "data/maps/Colchis/scripts.pory"
	.string "I'm off now to proposition the maid.$"

Colchis_Text_ChefGaveRingNo::
# 3373 "data/maps/Colchis/scripts.pory"
	.string "Better not give him the ring.$"

Colchis_Text_Maid1::
# 3377 "data/maps/Colchis/scripts.pory"
	.string "Right now I am a maid but one day I will\n"
	.string "meet a foreign man and have his kids.$"

Colchis_Text_Maid2::
# 3381 "data/maps/Colchis/scripts.pory"
	.string "I'm starting to worry this creep likes\n"
	.string "me.$"

Colchis_Text_JailerIntro::
# 3394 "data/maps/Colchis/scripts.pory"
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
# 3398 "data/maps/Colchis/scripts.pory"
	.string "Give the Colchis Apple to the jailer?$"

Colchis_Text_JailerGaveApple::
# 3402 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave the jailer the Colchis\n"
	.string "Apple$"

Colchis_Text_JailerThanks1::
# 3408 "data/maps/Colchis/scripts.pory"
	.string "Aay Olchiscay apple? Ownay ere'sthay\n"
	.string "aay eetsway eattray! Ankthay ouyay!\l"
	.string "Ere'shay ethay ailjay eykay. Ocknay\l"
	.string "ourselfyay outay.$"

Colchis_Text_JailerThanks2::
# 3413 "data/maps/Colchis/scripts.pory"
	.string "Ebay arefulcay otnay otay ocklay\n"
	.string "ourselfyay inay ailjay. Ahay!$"

Colchis_Text_JailerGaveAppleNo::
# 3417 "data/maps/Colchis/scripts.pory"
	.string "Best not to give him the Apple now.$"

Colchis_Text_PrisonDoorOpen::
# 3421 "data/maps/Colchis/scripts.pory"
	.string "The Colchis Prison Key unlocked the\n"
	.string "door!$"

Colchis_Text_LostKid1::
# 3425 "data/maps/Colchis/scripts.pory"
	.string "Hey! Thanks for finding me! I was\n"
	.string "starting to get scared but I'll go back\l"
	.string "to where I belong now.$"

Colchis_Text_LostKid2::
# 3429 "data/maps/Colchis/scripts.pory"
	.string "I love playing with my friends again.$"

Colchis_Text_Doorman1::
# 3443 "data/maps/Colchis/scripts.pory"
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
# 3448 "data/maps/Colchis/scripts.pory"
	.string "Ankthay ouyay orfay ingingbray usay\n"
	.string "ackbay ogethertay. Ethay oorday isay\l"
	.string "openay. Arewellfay.$"

Colchis_Text_Doorman3::
# 3453 "data/maps/Colchis/scripts.pory"
	.string "Anksthay againay.$"

Colchis_Text_Nanny1::
# 3457 "data/maps/Colchis/scripts.pory"
	.string "Oh no! How terrible! I'm freaking out\n"
	.string "because I lost another one. What if I\l"
	.string "get caught swapping out another kid?\l"
	.string "When they're infants they usually can't\l"
	.string "tell but this one was older...What can I\l"
	.string "do?$"

Colchis_Text_Nanny2::
# 3461 "data/maps/Colchis/scripts.pory"
	.string "Oh! Thanks for finding that lost kid for\n"
	.string "me. I feel like I can finally exhale. I\l"
	.string "had been so stressed out I hadn't been\l"
	.string "able to come socialize with my man.$"

Colchis_Text_GruntBreak1::
# 3466 "data/maps/Colchis/scripts.pory"
	.string "Iay asway ustjay inkingthay aboutay\n"
	.string "ymay etpay atcay.$"

Colchis_Text_GruntBreak2::
# 3471 "data/maps/Colchis/scripts.pory"
	.string "Iay oday otnay inkthay eetingsmay\n"
	.string "areay oductivepray.$"

Colchis_Text_GruntBreak3::
# 3476 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay interrupay emay ingebay\n"
	.string "eatingay ipschay.$"

Colchis_Text_GruntBreak4::
# 3481 "data/maps/Colchis/scripts.pory"
	.string "I'may onay ymay eakbray, asay\n"
	.string "Olchiscay' awlay andatesmay.$"

Colchis_Text_GruntBreak5::
# 3486 "data/maps/Colchis/scripts.pory"
	.string "Ymay eakbray imetay isay ymay\n"
	.string "erapythay essionsay.$"

Colchis_Text_GruntBreak6::
# 3491 "data/maps/Colchis/scripts.pory"
	.string "I'may otnay azylay! I'may eparingpray\n"
	.string "otay orkway.$"

Colchis_Text_GruntBreak7::
# 3496 "data/maps/Colchis/scripts.pory"
	.string "Eythey aysay atthay eaksbray areay\n"
	.string "ikelay ugshay orfay ouryay oulsay.$"

Colchis_Text_GruntBreak8::
# 3501 "data/maps/Colchis/scripts.pory"
	.string "I'may otnay ignoringay ouyay. I'may\n"
	.string "ustjay estingray.$"

Colchis_Text_GruntBreak9::
# 3506 "data/maps/Colchis/scripts.pory"
	.string "On'tday elltay ymay ossbay I'veay\n"
	.string "eenbay erehay orfay ourshay.$"

Colchis_Text_GruntBreak0::
# 3511 "data/maps/Colchis/scripts.pory"
	.string "Amay Iay upposedsay otay ebay\n"
	.string "alkingtay otay ouyay?$"

Colchis_Text_Kid1::
# 3515 "data/maps/Colchis/scripts.pory"
	.string "Baby shark doo doo doo doo doo doo\n"
	.string "baby shark doo doo doo doo doo doo\l"
	.string "baby shark doo doo doo doo doo baby\l"
	.string "shark!$"

Colchis_Text_Kid2::
# 3519 "data/maps/Colchis/scripts.pory"
	.string "I love Pikachu! He's an electric Pokemon\n"
	.string "and he's my favorite! I wish I had a pet\l"
	.string "Pikachu but I think my mom would say\l"
	.string "no...Maybe one day...$"

Colchis_Text_Kid3::
# 3523 "data/maps/Colchis/scripts.pory"
	.string "Have you ever had a dream so that so\n"
	.string "that you um you had you you would you\l"
	.string "could you'll do you went you want you\l"
	.string "you could do so you you do you could\l"
	.string "you you want you want him to do you so\l"
	.string "much you could do anything?$"

Colchis_Text_Teacher1::
# 3527 "data/maps/Colchis/scripts.pory"
	.string "The youth is lost! They pay no\n"
	.string "attention to anything of value or\l"
	.string "substance.$"

Colchis_Text_Teacher2::
# 3531 "data/maps/Colchis/scripts.pory"
	.string "Even though teaching can be\n"
	.string "exhausting it's an honor to help\l"
	.string "nurture young minds.$"

Colchis_Text_Chef2::
# 3535 "data/maps/Colchis/scripts.pory"
	.string "I'm not crying! No! Just peeling onions!\n"
	.string "Not thinking 'bout the girl who left me!\l"
	.string "No!$"

Colchis_Text_GruntBreakL::
# 3540 "data/maps/Colchis/scripts.pory"
	.string "E'reway otnay arguinay. I'may ovingpray\n"
	.string "I'may ightray.$"

Colchis_Text_GruntBreakR::
# 3545 "data/maps/Colchis/scripts.pory"
	.string "Atthay uy'sgay anay assay, anay assay\n"
	.string "at'sthay ullfay ofay itshay.$"

Colchis_Text_MaidL::
# 3549 "data/maps/Colchis/scripts.pory"
	.string "I heard she said he said he had a crush\n"
	.string "on her but she said she does not like\l"
	.string "him.$"

Colchis_Text_MaidR::
# 3553 "data/maps/Colchis/scripts.pory"
	.string "Get out of here! We're not interested.$"

Colchis_Text_GruntDoorFFight::
# 3560 "data/maps/Colchis/scripts.pory"
	.string "Iay illway otnay etlay ouyay eesay ymay\n"
	.string "adies'lay edbay!$"

Colchis_Text_GruntDoorFLost::
# 3564 "data/maps/Colchis/scripts.pory"
	.string "Ou'veyay onqueredcay emay.$"

Colchis_Text_GruntDoorFPost::
# 3568 "data/maps/Colchis/scripts.pory"
	.string "Edea'sMay edbay isay oursyay.$"

Colchis_Text_GruntDoorMFight::
# 3575 "data/maps/Colchis/scripts.pory"
	.string "Ethay Ing'skay Amberschay areay otnay\n"
	.string "orfay ommoncay olkfay.$"

Colchis_Text_GruntDoorMLost::
# 3579 "data/maps/Colchis/scripts.pory"
	.string "Ymay ordlay! Iay avehay ailedfay ouyay!$"

Colchis_Text_GruntDoorMPost::
# 3583 "data/maps/Colchis/scripts.pory"
	.string "Ouyay ebelray umscray, ouryay\n"
	.string "esencepray efilesday isthay oblenay\l"
	.string "aceplay.$"

Colchis_Text_GruntThroneF1Fight::
# 3591 "data/maps/Colchis/scripts.pory"
	.string "At'swhay orseway, osinglay ouray\n"
	.string "ingkay, oray ouryay outfitay?$"

Colchis_Text_GruntThroneF1Lost::
# 3595 "data/maps/Colchis/scripts.pory"
	.string "Upersay otnay oolcay Iay otgay eatbay\n"
	.string "ybay aay obslay!$"

Colchis_Text_GruntThroneF1Post::
# 3599 "data/maps/Colchis/scripts.pory"
	.string "Ifay ou'reyay erehah otay overthroway\n"
	.string "ouray ingdomkay ouyay ouldcay atay\l"
	.string "eastlay oday itay ithway omesay\l"
	.string "ylestay.$"

Colchis_Text_GruntThroneF2Fight::
# 3606 "data/maps/Colchis/scripts.pory"
	.string "Ou'llyay evernay asspay! Eparepray\n"
	.string "otay eelfay ymay athwraw.$"

Colchis_Text_GruntThroneF2Lost::
# 3610 "data/maps/Colchis/scripts.pory"
	.string "Amnday indblay angeray!$"

Colchis_Text_GruntThroneF2Post::
# 3614 "data/maps/Colchis/scripts.pory"
	.string "Ou'reyay ightiermay anthay emay.$"

Colchis_Text_GruntThroneF3Fight::
# 3621 "data/maps/Colchis/scripts.pory"
	.string "Inay imestay ofay eacepay Iay anceday\n"
	.string "orfay Edeamay.$"

Colchis_Text_GruntThroneF3Lost::
# 3625 "data/maps/Colchis/scripts.pory"
	.string "I'may aay etterbay ancerday anthay\n"
	.string "attlerbay.$"

Colchis_Text_GruntThroneF3Post::
# 3629 "data/maps/Colchis/scripts.pory"
	.string "Easeplay on'tday urthay Aeetesay, ehay\n"
	.string "ayspay ymay illsbay.$"

Colchis_Text_GruntThroneF4Fight::
# 3636 "data/maps/Colchis/scripts.pory"
	.string "Ou'llyay evernay eavelay Olchiscay\n"
	.string "aliveay!$"

Colchis_Text_GruntThroneF4Lost::
# 3640 "data/maps/Colchis/scripts.pory"
	.string "Ailurefay...$"

Colchis_Text_GruntThroneF4Post::
# 3644 "data/maps/Colchis/scripts.pory"
	.string "Anymay uardsgay etyay emainray. Ouyay\n"
	.string "idnay otnay inway.$"

Colchis_Text_GruntThroneF5Fight::
# 3651 "data/maps/Colchis/scripts.pory"
	.string "Atwhay? Enacemay!$"

Colchis_Text_GruntThroneF5Lost::
# 3655 "data/maps/Colchis/scripts.pory"
	.string "Ouyay allshay aypay.$"

Colchis_Text_GruntThroneF5Post::
# 3659 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay ogay onay.$"

Colchis_Text_GruntThroneF6Fight::
# 3666 "data/maps/Colchis/scripts.pory"
	.string "At'sway isthay? Owhay idday ouyay\n"
	.string "escapeay omfray isonpray?$"

Colchis_Text_GruntThroneF6Lost::
# 3670 "data/maps/Colchis/scripts.pory"
	.string "Owhay etlay isthay admanmay ooselay?$"

Colchis_Text_GruntThroneF6Post::
# 3674 "data/maps/Colchis/scripts.pory"
	.string "Oundsay ethay alarmay!$"

Colchis_Text_GruntThroneM1Fight::
# 3681 "data/maps/Colchis/scripts.pory"
	.string "Itnessway ethay owerpay ofay ethay\n"
	.string "oyalray uardgay!$"

Colchis_Text_GruntThroneM1Lost::
# 3685 "data/maps/Colchis/scripts.pory"
	.string "Ethay irstfay, anday astlay, osslay\n"
	.string "ofay ethay oyalray uardgay.$"

Colchis_Text_GruntThroneM1Post::
# 3689 "data/maps/Colchis/scripts.pory"
	.string "Ouyay isrespectday ethay oyalray\n"
	.string "Olchiscay Onethray.$"

Colchis_Text_GruntThroneM2Fight::
# 3696 "data/maps/Colchis/scripts.pory"
	.string "Ymay olesay urposepay inay ife'slay\n"
	.string "otay opstay ouyay erehay.$"

Colchis_Text_GruntThroneM2Lost::
# 3700 "data/maps/Colchis/scripts.pory"
	.string "Owhay ouldcay Iay oselay?$"

Colchis_Text_GruntThroneM2Post::
# 3704 "data/maps/Colchis/scripts.pory"
	.string "Atwhay useay isay ymay ifelay ownay?$"

Colchis_Text_GruntThroneM3Fight::
# 3711 "data/maps/Colchis/scripts.pory"
	.string "Ethay ingkay isay oodgay, ereforethay\n"
	.string "ouyay ustmay ebab adbay.$"

Colchis_Text_GruntThroneM3Lost::
# 3715 "data/maps/Colchis/scripts.pory"
	.string "Ereforethay eitheray engthstray isay,\n"
	.string "oray Iay amay, adbay.$"

Colchis_Text_GruntThroneM3Post::
# 3719 "data/maps/Colchis/scripts.pory"
	.string "Ifay evilay insway enthay atefay isay\n"
	.string "adbay oray indblay.$"

Colchis_Text_GruntThroneM4Fight::
# 3726 "data/maps/Colchis/scripts.pory"
	.string "Ebellionray inay Olchiscay Ingdomkay\n"
	.string "endsay erehay.$"

Colchis_Text_GruntThroneM4Lost::
# 3730 "data/maps/Colchis/scripts.pory"
	.string "Eholdbay ethay ancientay egimeray\n"
	.string "iesday odaytay.$"

Colchis_Text_GruntThroneM4Post::
# 3734 "data/maps/Colchis/scripts.pory"
	.string "Aymay Ohay-Ohay anday Ugialay avesay\n"
	.string "ouray oulssay!$"

Colchis_Text_GruntThroneM5Fight::
# 3741 "data/maps/Colchis/scripts.pory"
	.string "Andstay ownday!$"

Colchis_Text_GruntThroneM5Lost::
# 3745 "data/maps/Colchis/scripts.pory"
	.string "I'veay eenbray oughtbray otay\n"
	.string "attenday efeatday.$"

Colchis_Text_GruntThroneM5Post::
# 3749 "data/maps/Colchis/scripts.pory"
	.string "I'llay ebay eheadedbay orfay ailingfay\n"
	.string "ymay ingkay!$"

Colchis_Text_GruntThroneM6Fight::
# 3756 "data/maps/Colchis/scripts.pory"
	.string "Owhay areday ouyay ingbray arway\n"
	.string "uponay ouray ing'skay eacepay?$"

Colchis_Text_GruntThroneM6Lost::
# 3760 "data/maps/Colchis/scripts.pory"
	.string "Ethay onglay eacepay ofay Olchiscay\n"
	.string "omescay otay anay enday.$"

Colchis_Text_GruntThroneM6Post::
# 3764 "data/maps/Colchis/scripts.pory"
	.string "Aay arway, afteray it'say oncievedcay,\n"
	.string "isay ardhay otay illkay.$"
