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
	removeobject 54
# 177 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 178 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
# 179 "data/maps/Colchis/scripts.pory"
	addobject 54
# 180 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 185 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 186 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 187 "data/maps/Colchis/scripts.pory"
	closemessage
# 188 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 195 "data/maps/Colchis/scripts.pory"
	lockall
# 197 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 199 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 200 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 201 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 202 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 203 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 204 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 207 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 208 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 209 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 212 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 213 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 214 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 219 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 220 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 221 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 224 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 225 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 226 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 227 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 228 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 229 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 230 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 231 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 232 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 233 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 234 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 235 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 236 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 237 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 238 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 239 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 240 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 243 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 244 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 245 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 246 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 247 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 248 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 249 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 250 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 251 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 252 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 253 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 254 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 255 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 258 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 259 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 260 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 263 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 264 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 265 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 269 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 270 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 271 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 272 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 273 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 274 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 275 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 276 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 277 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 278 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 280 "data/maps/Colchis/scripts.pory"
	closemessage
# 282 "data/maps/Colchis/scripts.pory"
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
# 320 "data/maps/Colchis/scripts.pory"
	lockall
# 321 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 323 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 330 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 331 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 332 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 334 "data/maps/Colchis/scripts.pory"
	addobject 23
# 335 "data/maps/Colchis/scripts.pory"
	addobject 24
# 337 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 338 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 342 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 343 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 345 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 346 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 347 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 350 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 351 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPre, MSGBOX_DEFAULT
# 352 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 353 "data/maps/Colchis/scripts.pory"
	closemessage
# 356 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
# 359 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 360 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPost, MSGBOX_DEFAULT
# 361 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 362 "data/maps/Colchis/scripts.pory"
	closemessage
# 365 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleExitA
# 366 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleExitB
# 367 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 370 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 371 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 373 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 23, 0, 0
# 374 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 24, 2, 0
# 376 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_FACE_DOWN
# 377 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_UP
# 379 "data/maps/Colchis/scripts.pory"
	addobject 23
# 380 "data/maps/Colchis/scripts.pory"
	addobject 24
# 382 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 383 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
	return


Colchis_Script_MedeaDance::
# 393 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 394 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 395 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 400 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 401 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 402 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 403 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 404 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 405 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 406 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 407 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 408 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 409 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 410 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 411 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 412 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 413 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 414 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 415 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 416 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 417 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 426 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 427 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 429 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 430 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 431 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 432 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 434 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 436 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 437 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 438 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 440 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 442 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 443 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 444 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 446 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 452 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 453 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 454 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 455 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 456 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 457 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 458 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 460 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 462 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 463 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 464 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 465 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 466 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 468 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 470 "data/maps/Colchis/scripts.pory"
	delay 25
# 472 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 473 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 474 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 475 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 476 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 478 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 485 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 486 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 487 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 488 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 489 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 490 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 491 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 493 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 495 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 496 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 497 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 498 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 499 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 500 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 502 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 504 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 505 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 506 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 507 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 508 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 510 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 512 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 513 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 514 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 515 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 516 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 518 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 520 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 522 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 523 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 524 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 526 "data/maps/Colchis/scripts.pory"
	waitmovement 4
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
	waitmovement 16
# 540 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 541 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 542 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 543 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 544 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 545 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 546 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 548 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 550 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 551 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 552 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 553 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 554 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 556 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 562 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 568 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 569 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 570 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 572 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 573 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 574 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 576 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 581 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 587 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 588 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 589 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 590 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 591 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 592 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 593 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 595 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 601 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 604 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 612 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 613 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 614 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 615 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 616 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 617 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 618 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 620 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 622 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 623 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 624 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 625 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 626 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 627 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 628 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 630 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 635 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 639 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 640 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 641 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 642 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 643 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 644 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 645 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 647 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 649 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 650 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 651 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 652 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 653 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 654 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 655 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 657 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 659 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 663 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 664 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 665 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 666 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 667 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 668 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 669 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 671 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 673 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 674 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 675 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 676 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 677 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 678 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 679 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 681 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 683 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 687 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 688 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 689 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 690 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 691 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 692 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 693 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 695 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 697 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 698 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 699 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 700 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 701 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 702 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 703 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 705 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 707 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 716 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 717 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 718 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 719 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 720 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 721 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 722 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 723 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 725 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 727 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 729 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 730 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 731 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 732 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 733 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 734 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 735 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 736 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 738 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 740 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 742 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 743 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 744 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 745 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 746 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 747 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 748 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 749 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 751 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 753 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 759 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 760 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 761 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 762 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 763 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 764 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 765 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 766 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 768 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 769 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 771 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 772 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 775 "data/maps/Colchis/scripts.pory"
	delay 25
# 779 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 780 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 784 "data/maps/Colchis/scripts.pory"
	delay 25
# 786 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 787 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 791 "data/maps/Colchis/scripts.pory"
	delay 25
# 793 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 794 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 798 "data/maps/Colchis/scripts.pory"
	delay 25
# 800 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 801 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 802 "data/maps/Colchis/scripts.pory"
	delay 25
# 807 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 808 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 809 "data/maps/Colchis/scripts.pory"
	delay 25
# 811 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 812 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 813 "data/maps/Colchis/scripts.pory"
	delay 25
# 818 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 819 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 820 "data/maps/Colchis/scripts.pory"
	delay 25
# 822 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 823 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 824 "data/maps/Colchis/scripts.pory"
	delay 25
# 826 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 827 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 828 "data/maps/Colchis/scripts.pory"
	delay 25
# 830 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 831 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 832 "data/maps/Colchis/scripts.pory"
	delay 25
# 837 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 838 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 839 "data/maps/Colchis/scripts.pory"
	delay 25
# 841 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 842 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 843 "data/maps/Colchis/scripts.pory"
	delay 25
# 845 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 846 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 847 "data/maps/Colchis/scripts.pory"
	delay 25
# 849 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 850 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 851 "data/maps/Colchis/scripts.pory"
	delay 25
# 853 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 855 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 856 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 857 "data/maps/Colchis/scripts.pory"
	delay 25
# 862 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 863 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 864 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 865 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 866 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 867 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 868 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 869 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 871 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 880 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 881 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 882 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 883 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 884 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 885 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 886 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 887 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 888 "data/maps/Colchis/scripts.pory"
	waitmovement 16
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
	applymovement 15, Common_Movement_WalkNorthWest
# 900 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 901 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 906 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 907 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 908 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 909 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 910 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 911 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 912 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 913 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 914 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 919 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 920 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 921 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 922 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 923 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 924 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 925 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 926 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 927 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 932 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 933 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 934 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 935 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 936 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 937 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 938 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 939 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 940 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 945 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 946 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 947 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 948 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 949 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 950 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 951 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 952 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 953 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 958 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 959 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 960 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 961 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 962 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 963 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 964 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 965 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 966 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 971 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 972 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 973 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 974 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 975 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 976 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 977 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 978 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 979 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 984 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 985 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 986 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 987 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 988 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 989 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 990 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 991 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 992 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 994 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 995 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 996 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 997 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 998 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 999 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 1001 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 1002 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 1004 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1005 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1006 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 1007 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 1008 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1009 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1010 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1011 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1012 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1014 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1015 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1016 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1017 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1018 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1020 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1021 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1022 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1027 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1028 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1030 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1032 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1038 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1039 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1040 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1041 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1042 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1043 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1044 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1045 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1050 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1051 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1052 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1053 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1054 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1055 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1056 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1057 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1058 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1059 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1060 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1061 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1062 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1063 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1064 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1065 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1066 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1071 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1072 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1073 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1074 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1075 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1076 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1077 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1078 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1079 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1080 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1081 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
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
	applymovement 13, Common_Movement_WalkRight
# 1088 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 13, Common_Movement_WalkLeft
# 1095 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
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
	applymovement 13, Common_Movement_WalkRight
# 1102 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 13, Common_Movement_WalkLeft
# 1109 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
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
	applymovement 13, Common_Movement_WalkRight
# 1116 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 13, Common_Movement_WalkLeft
# 1123 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1124 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1125 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1126 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1127 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1138 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1139 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1140 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1145 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1146 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1147 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1148 "data/maps/Colchis/scripts.pory"
	closemessage
# 1150 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1154 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1155 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1156 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1157 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1158 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1160 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1161 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1162 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1164 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1165 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1166 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1167 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1175 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1176 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1177 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1182 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1183 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1184 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1191 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1192 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1193 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1197 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1198 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1199 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1208 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1209 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1210 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1211 "data/maps/Colchis/scripts.pory"
	closemessage
# 1214 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1215 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1216 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1225 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1226 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1227 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1232 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1233 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1234 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1237 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1238 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1239 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1240 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1241 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1245 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1246 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1247 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1251 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1252 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1253 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1255 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1256 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1257 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1261 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1262 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1264 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1265 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1271 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1272 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1273 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1274 "data/maps/Colchis/scripts.pory"
	closemessage
# 1277 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1278 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1281 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1282 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1290 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1296 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1297 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1298 "data/maps/Colchis/scripts.pory"
	closemessage
# 1299 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1302 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1303 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1306 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1307 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1308 "data/maps/Colchis/scripts.pory"
	closemessage
# 1309 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1312 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1313 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1314 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1315 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1318 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1319 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1320 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1321 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1322 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1325 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1326 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1327 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1328 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1329 "data/maps/Colchis/scripts.pory"
	delay 30
# 1330 "data/maps/Colchis/scripts.pory"
	waitse
# 1333 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonApproachPlayer
# 1334 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1337 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1338 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1339 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1342 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1343 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1344 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1347 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1348 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1349 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1352 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1353 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1354 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1357 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1358 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1359 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1361 "data/maps/Colchis/scripts.pory"
	closemessage
# 1364 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1365 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1368 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1369 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1370 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1371 "data/maps/Colchis/scripts.pory"
	closemessage
# 1374 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1375 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1378 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1379 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1380 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1383 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1384 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1385 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1387 "data/maps/Colchis/scripts.pory"
	closemessage
# 1391 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonExit
# 1392 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonExit
# 1393 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerPrisonExit
# 1394 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1396 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1404 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1405 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1408 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1409 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1410 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1412 "data/maps/Colchis/scripts.pory"
	closemessage
# 1415 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1416 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1419 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1420 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1421 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1422 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1423 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1426 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1427 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 1
# 1428 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1429 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 1
# 1432 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1433 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1436 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1437 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1438 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1441 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1442 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1443 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1446 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1447 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1450 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1451 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1452 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1454 "data/maps/Colchis/scripts.pory"
	closemessage
# 1457 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1458 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1461 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1462 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1464 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1465 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1467 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1468 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1470 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1471 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1472 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1475 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1476 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1477 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1478 "data/maps/Colchis/scripts.pory"
	closemessage
# 1481 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1482 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1485 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1486 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1489 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1492 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1493 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1494 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1495 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1497 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1498 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1499 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1500 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1501 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_LugiaTest::
# 1507 "data/maps/Colchis/scripts.pory"
	lockall
# 1508 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1509 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1510 "data/maps/Colchis/scripts.pory"
	closemessage
# 1511 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_Lugia::
# 1516 "data/maps/Colchis/scripts.pory"
	lockall
# 1517 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1518 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 1519 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1520 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_LUGIA
# 1521 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1522 "data/maps/Colchis/scripts.pory"
	setwildbattle SPECIES_LUGIA, 18
# 1523 "data/maps/Colchis/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1524 "data/maps/Colchis/scripts.pory"
	waitstate
# 1525 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1526 "data/maps/Colchis/scripts.pory"
	removeobject 1
# 1527 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTriggerA::
# 1533 "data/maps/Colchis/scripts.pory"
	lockall
# 1534 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 0
# 1535 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTriggerB::
# 1539 "data/maps/Colchis/scripts.pory"
	lockall
# 1540 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 1
# 1541 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTrigger::
# 1546 "data/maps/Colchis/scripts.pory"
	lockall
# 1549 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1550 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1551 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1552 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1553 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1554 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1557 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_4
Colchis_Script_SanctumTrigger_3:
# 1561 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 12
# 1563 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerEndIntro
# 1565 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_7
# 1584 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_8
# 1606 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1607 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1608 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
# 1609 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
Colchis_Script_SanctumTrigger_1:
# 1612 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_SanctumTrigger_2:
# 1558 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_4:
# 1557 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_2
	goto Colchis_Script_SanctumTrigger_3

Colchis_Script_SanctumTrigger_7:
# 1568 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1571 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1575 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_8:
# 1585 "data/maps/Colchis/scripts.pory"
	closemessage
# 1587 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1588 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumTrigger_12
# 1593 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1594 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1596 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1597 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumWilds, MSGBOX_DEFAULT
# 1598 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1603 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_12:
# 1590 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Exeunt
	goto Colchis_Script_SanctumTrigger_1


Colchis_Script_SanctumTriggerReturn::
# 1617 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1618 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger1, MSGBOX_DEFAULT
# 1619 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1621 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1622 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger1, MSGBOX_DEFAULT
# 1623 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1625 "data/maps/Colchis/scripts.pory"
	closemessage
# 1628 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1629 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_SanctumTriggerEndIntro::
# 1635 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1636 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1637 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumTriggerMedeaExit::
# 1642 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1643 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger2, MSGBOX_DEFAULT
# 1644 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1645 "data/maps/Colchis/scripts.pory"
	closemessage
# 1646 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTriggerMedeaExit_2
# 1649 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3B
Colchis_Script_SanctumTriggerMedeaExit_1:
# 1651 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumTriggerMedeaExit_2:
# 1647 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3A
	goto Colchis_Script_SanctumTriggerMedeaExit_1


Colchis_Script_LugiaChaseTrigger::
# 1656 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1657 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaChaseTrigger_2
Colchis_Script_LugiaChaseTrigger_1:
	end

Colchis_Script_LugiaChaseTrigger_2:
# 1658 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	goto Colchis_Script_LugiaChaseTrigger_1


Colchis_Script_LugiaWanderTrigger::
# 1664 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1665 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaWanderTrigger_2
Colchis_Script_LugiaWanderTrigger_1:
	end

Colchis_Script_LugiaWanderTrigger_2:
# 1666 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	goto Colchis_Script_LugiaWanderTrigger_1


Colchis_Script_ShinyMareep::
# 1672 "data/maps/Colchis/scripts.pory"
	lockall
# 1673 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1674 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 1675 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1676 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1677 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1678 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1679 "data/maps/Colchis/scripts.pory"
	waitstate
# 1680 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1681 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1682 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumApproachJason::
# 1687 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumApproachJason_2
# 1690 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3B
Colchis_Script_SanctumApproachJason_1:
# 1692 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1694 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1695 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumApproachJason_2:
# 1688 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3A
	goto Colchis_Script_SanctumApproachJason_1


Colchis_Script_SanctumJasonBattle::
# 1701 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1702 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1704 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1705 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger3, MSGBOX_DEFAULT
# 1706 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1707 "data/maps/Colchis/scripts.pory"
	closemessage
# 1709 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_JASON, Colchis_Text_JasonLost
# 1711 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1712 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPost, MSGBOX_DEFAULT
# 1713 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumMedeaReturn::
# 1720 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1721 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1722 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1724 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1725 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1726 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1729 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1730 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumMedeaReturn_Text_0, MSGBOX_DEFAULT
# 1731 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1732 "data/maps/Colchis/scripts.pory"
	closemessage
# 1735 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn
# 1736 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1739 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1740 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn1, MSGBOX_DEFAULT
# 1741 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1742 "data/maps/Colchis/scripts.pory"
	closemessage
# 1745 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumMedeaReturn_2
# 1748 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2B
Colchis_Script_SanctumMedeaReturn_1:
# 1750 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1752 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1753 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1756 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1757 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn2, MSGBOX_DEFAULT
# 1758 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1759 "data/maps/Colchis/scripts.pory"
	closemessage
# 1764 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1765 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn1, MSGBOX_DEFAULT
# 1766 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1770 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumMedeaReturn_6
Colchis_Script_SanctumMedeaReturn_5:
# 1780 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	return

Colchis_Script_SanctumMedeaReturn_2:
# 1746 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2A
	goto Colchis_Script_SanctumMedeaReturn_1

Colchis_Script_SanctumMedeaReturn_6:
# 1771 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1772 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1773 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1774 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn2, MSGBOX_DEFAULT
# 1775 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1776 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1777 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_SanctumMedeaReturn_5


Colchis_Script_SanctumJasonCheckMareep::
# 1787 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, IsShinyMareepInParty
# 1789 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_2
# 1794 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1795 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonGiveMeMareep, MSGBOX_DEFAULT
# 1796 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1798 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GiveJasonMareep, MSGBOX_YESNO
# 1800 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_5
# 1804 "data/maps/Colchis/scripts.pory"
	special ChoosePartyMon
# 1805 "data/maps/Colchis/scripts.pory"
	waitstate
# 1807 "data/maps/Colchis/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_8
# 1811 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1813 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, SPECIES_MAREEP
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_11
# 1817 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonIsShiny
# 1819 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_14
# 1823 "data/maps/Colchis/scripts.pory"
	special BufferMonNickname
# 1824 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GaveShinyMareep, MSGBOX_DEFAULT
# 1825 "data/maps/Colchis/scripts.pory"
	closemessage
# 1826 "data/maps/Colchis/scripts.pory"
	special ReleaseChosenMon
# 1828 "data/maps/Colchis/scripts.pory"
	setflag FLAG_JASON_HAS_SHINYMAREEP
Colchis_Script_SanctumJasonCheckMareep_1:
	return

Colchis_Script_SanctumJasonCheckMareep_2:
# 1790 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_5:
# 1801 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_8:
# 1808 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_11:
# 1814 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_14:
# 1820 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1


Colchis_Script_SanctumJasonMareep::
# 1841 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumApproachJason
# 1844 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	return


Colchis_Script_Exeunt::
# 1851 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 14
# 1853 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_Exeunt
# 1854 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_Exeunt
# 1855 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_Exeunt
# 1856 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1858 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_BIG_ISLAND_N, 31, 37
	end


Colchis_Script_SetupEscapeFromColchis::
# 1864 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1865 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumDepart, MSGBOX_DEFAULT
# 1866 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1867 "data/maps/Colchis/scripts.pory"
	closemessage
# 1870 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAndMedeaExeunt
# 1871 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_JasonAndMedeaExeunt
# 1872 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1876 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 14, 0
# 1877 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_INVISIBLE
# 1879 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 15, 0
# 1880 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 1882 "data/maps/Colchis/scripts.pory"
	hideobjectat 54, MAP_COLCHIS
# 1883 "data/maps/Colchis/scripts.pory"
	hideobjectat 4, MAP_COLCHIS
# 1885 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1886 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1893 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 16
# 1896 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
# 1897 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1900 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupLostKid
# 1903 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_TrainerAeetes::
# 1916 "data/maps/Colchis/scripts.pory"
	lockall
# 1917 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1919 "data/maps/Colchis/scripts.pory"
	checktrainerflag TRAINER_AEETES
	goto_if 0, Colchis_Script_TrainerAeetes_2
# 1937 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1938 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1939 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
Colchis_Script_TrainerAeetes_1:
# 1941 "data/maps/Colchis/scripts.pory"
	closemessage
# 1942 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_TrainerAeetes_2:
# 1921 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1922 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesIntro, MSGBOX_DEFAULT
# 1923 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1924 "data/maps/Colchis/scripts.pory"
	closemessage
# 1925 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_AEETES, Colchis_Text_AeetesLost
# 1926 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1927 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesPost, MSGBOX_DEFAULT
# 1928 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1930 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_KEY
# 1932 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1933 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1934 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
	goto Colchis_Script_TrainerAeetes_1


Colchis_Script_Bed::
# 1947 "data/maps/Colchis/scripts.pory"
	lockall
# 1948 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Bed, MSGBOX_YESNO
# 1949 "data/maps/Colchis/scripts.pory"
	closemessage
# 1950 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Bed_2
Colchis_Script_Bed_1:
# 1953 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Bed_2:
# 1951 "data/maps/Colchis/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Colchis_Script_Bed_1


Colchis_Script_RingBlocker::
# 1958 "data/maps/Colchis/scripts.pory"
	lockall
# 1959 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1962 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerIntro, MSGBOX_DEFAULT
# 1964 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_KEY, 1
# 1969 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_RingBlocker_2
# 2000 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_RingBlocker_1:
# 2004 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_RingBlocker_2:
# 1970 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerYesNo, MSGBOX_YESNO
# 1971 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_RingBlocker_5
# 1996 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerDecline, MSGBOX_DEFAULT
# 1997 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_RingBlocker_1

Colchis_Script_RingBlocker_5:
# 1974 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_KeyFits, MSGBOX_DEFAULT
# 1975 "data/maps/Colchis/scripts.pory"
	closemessage
# 1976 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_KEY
# 1977 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1979 "data/maps/Colchis/scripts.pory"
	hideobjectat 55, MAP_COLCHIS
# 1980 "data/maps/Colchis/scripts.pory"
	removeobject 55
# 1981 "data/maps/Colchis/scripts.pory"
	hideobjectat 56, MAP_COLCHIS
# 1982 "data/maps/Colchis/scripts.pory"
	removeobject 56
# 1983 "data/maps/Colchis/scripts.pory"
	hideobjectat 57, MAP_COLCHIS
# 1984 "data/maps/Colchis/scripts.pory"
	removeobject 57
# 1986 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 55, MOVEMENT_TYPE_INVISIBLE
# 1987 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 55, 1, 3
# 1988 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 56, MOVEMENT_TYPE_INVISIBLE
# 1989 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 56, 2, 3
# 1990 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 57, MOVEMENT_TYPE_INVISIBLE
# 1991 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 57, 3, 3
# 1993 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBARRIER
	goto Colchis_Script_RingBlocker_1


Colchis_Script_RingItem::
# 2009 "data/maps/Colchis/scripts.pory"
	lock
# 2010 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2011 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_RING
# 2012 "data/maps/Colchis/scripts.pory"
	hideobjectat 58, MAP_COLCHIS
# 2013 "data/maps/Colchis/scripts.pory"
	removeobject 58
# 2014 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBALL
# 2015 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 58, MOVEMENT_TYPE_INVISIBLE
# 2016 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 58, 4, 3
# 2017 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_CloseDoor::
# 2022 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2023 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_SetupLostKid::
# 2028 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2029 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 28, 12
# 2030 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_LOOK_AROUND
# 2031 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2032 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	return


Colchis_Script_ShowNannyWithGuard::
# 2037 "data/maps/Colchis/scripts.pory"
	removeobject 30
# 2038 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 30, 7, 50
# 2039 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_LEFT
# 2040 "data/maps/Colchis/scripts.pory"
	addobject 30
# 2041 "data/maps/Colchis/scripts.pory"
	showobjectat 30, MAP_COLCHIS
# 2043 "data/maps/Colchis/scripts.pory"
	removeobject 51
# 2044 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 51, 6, 50
# 2045 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 51, MOVEMENT_TYPE_FACE_RIGHT
# 2046 "data/maps/Colchis/scripts.pory"
	addobject 51
# 2047 "data/maps/Colchis/scripts.pory"
	showobjectat 51, MAP_COLCHIS
	return


Colchis_Script_Chef::
# 2053 "data/maps/Colchis/scripts.pory"
	lockall
# 2054 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2057 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Chef_2
# 2064 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Movement_ChefIntro, MSGBOX_DEFAULT
# 2065 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_RING
# 2066 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Chef_5
# 2097 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Chef_1:
# 2100 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Chef_2:
# 2058 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefProposal, MSGBOX_DEFAULT
# 2059 "data/maps/Colchis/scripts.pory"
	closemessage
# 2060 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_FaceRight
# 2061 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_5:
# 2067 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefRingYesNo, MSGBOX_YESNO
# 2068 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Chef_8
# 2093 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRingNo, MSGBOX_DEFAULT
# 2094 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_8:
# 2070 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_RING
# 2071 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRing, MSGBOX_DEFAULT
# 2072 "data/maps/Colchis/scripts.pory"
	closemessage
# 2074 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_ExclamationMark
# 2075 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2076 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks1, MSGBOX_DEFAULT
# 2077 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_APPLE
# 2079 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks2, MSGBOX_DEFAULT
# 2080 "data/maps/Colchis/scripts.pory"
	closemessage
# 2082 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2083 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Colchis_Script_Chef_12
Colchis_Script_Chef_11:
# 2087 "data/maps/Colchis/scripts.pory"
	applymovement 44, Colchis_Movement_ChefExit
# 2088 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2090 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_MOVECHEF
# 2091 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_12:
# 2084 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_WalkUp
# 2085 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_11


Colchis_Script_MoveChef::
# 2105 "data/maps/Colchis/scripts.pory"
	removeobject 44
# 2106 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 44, 59, 62
# 2107 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 44, MOVEMENT_TYPE_FACE_RIGHT
# 2108 "data/maps/Colchis/scripts.pory"
	addobject 44
# 2109 "data/maps/Colchis/scripts.pory"
	showobjectat 44, MAP_COLCHIS
# 2111 "data/maps/Colchis/scripts.pory"
	removeobject 37
# 2112 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 37, 60, 62
# 2113 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_LEFT
# 2114 "data/maps/Colchis/scripts.pory"
	addobject 37
# 2115 "data/maps/Colchis/scripts.pory"
	showobjectat 37, MAP_COLCHIS
	return


Colchis_Script_Maid::
# 2121 "data/maps/Colchis/scripts.pory"
	lockall
# 2122 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2123 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Maid_2
# 2129 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid1, MSGBOX_DEFAULT
# 2130 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Maid_1:
# 2132 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Maid_2:
# 2124 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid2, MSGBOX_DEFAULT
# 2125 "data/maps/Colchis/scripts.pory"
	closemessage
# 2126 "data/maps/Colchis/scripts.pory"
	applymovement 37, Common_Movement_FaceLeft
# 2127 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Maid_1


Colchis_Script_Jailer::
# 2137 "data/maps/Colchis/scripts.pory"
	lockall
# 2138 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2145 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerIntro, MSGBOX_DEFAULT
# 2148 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_APPLE
# 2149 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Jailer_2
# 2169 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Jailer_1:
# 2171 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Jailer_2:
# 2150 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerAppleYesNo, MSGBOX_YESNO
# 2151 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Jailer_5
# 2165 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveAppleNo, MSGBOX_DEFAULT
# 2166 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1

Colchis_Script_Jailer_5:
# 2152 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_APPLE
# 2154 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveApple, MSGBOX_DEFAULT
# 2155 "data/maps/Colchis/scripts.pory"
	closemessage
# 2157 "data/maps/Colchis/scripts.pory"
	applymovement 32, Common_Movement_ExclamationMark
# 2158 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2159 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks1, MSGBOX_DEFAULT
# 2160 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_JAIL_KEY
# 2162 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks2, MSGBOX_DEFAULT
# 2163 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1


Colchis_Script_PrisonDoor1::
# 2176 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Colchis_Script_PrisonDoor1_2
Colchis_Script_PrisonDoor1_1:
	end

Colchis_Script_PrisonDoor1_2:
# 2177 "data/maps/Colchis/scripts.pory"
	lockall
# 2179 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_A
# 2181 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2182 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2184 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2185 "data/maps/Colchis/scripts.pory"
	closemessage
# 2187 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2188 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2189 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2190 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2191 "data/maps/Colchis/scripts.pory"
	delay 30
# 2192 "data/maps/Colchis/scripts.pory"
	waitse
# 2193 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor1_1


Colchis_Script_PrisonDoor2::
# 2199 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_B, Colchis_Script_PrisonDoor2_2
Colchis_Script_PrisonDoor2_1:
	end

Colchis_Script_PrisonDoor2_2:
# 2200 "data/maps/Colchis/scripts.pory"
	lockall
# 2202 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_B
# 2204 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2205 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2207 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2208 "data/maps/Colchis/scripts.pory"
	closemessage
# 2210 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2211 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2212 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2213 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2214 "data/maps/Colchis/scripts.pory"
	delay 30
# 2215 "data/maps/Colchis/scripts.pory"
	waitse
# 2216 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor2_1


Colchis_Script_PrisonDoor3::
# 2222 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_C, Colchis_Script_PrisonDoor3_2
Colchis_Script_PrisonDoor3_1:
	end

Colchis_Script_PrisonDoor3_2:
# 2223 "data/maps/Colchis/scripts.pory"
	lockall
# 2225 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_C
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
	setmetatile 27, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2235 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2236 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2237 "data/maps/Colchis/scripts.pory"
	delay 30
# 2238 "data/maps/Colchis/scripts.pory"
	waitse
# 2239 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor3_1


Colchis_Script_LostKid::
# 2245 "data/maps/Colchis/scripts.pory"
	lockall
# 2246 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2248 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_LostKid_2
# 2269 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid2, MSGBOX_DEFAULT
# 2270 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_LostKid_1:
# 2272 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_LostKid_2:
# 2249 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid1, MSGBOX_DEFAULT
# 2250 "data/maps/Colchis/scripts.pory"
	closemessage
# 2251 "data/maps/Colchis/scripts.pory"
	special GetPlayerFacingDirection
# 2252 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Colchis_Script_LostKid_6
# 2255 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit2
Colchis_Script_LostKid_5:
# 2257 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2259 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_RETURN_LOSTKID
# 2261 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2262 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 5, 46
# 2263 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_WANDER_AROUND
# 2264 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2265 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	goto Colchis_Script_LostKid_1

Colchis_Script_LostKid_6:
# 2253 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit1
	goto Colchis_Script_LostKid_5


Colchis_Script_DoorMan::
# 2277 "data/maps/Colchis/scripts.pory"
	lockall
# 2278 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2281 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_DoorMan_2
# 2286 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 17
	goto_if_ne Colchis_Script_DoorMan_6
# 2294 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman3, MSGBOX_DEFAULT
# 2295 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_DoorMan_5:
# 2297 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceRight
Colchis_Script_DoorMan_1:
# 2299 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2300 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_DoorMan_2:
# 2282 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman1, MSGBOX_DEFAULT
# 2283 "data/maps/Colchis/scripts.pory"
	closemessage
# 2284 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceDown
	goto Colchis_Script_DoorMan_1

Colchis_Script_DoorMan_6:
# 2287 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 17
# 2288 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman2, MSGBOX_DEFAULT
# 2289 "data/maps/Colchis/scripts.pory"
	closemessage
# 2290 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2291 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2292 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
	goto Colchis_Script_DoorMan_5


Colchis_Script_Nanny::
# 2306 "data/maps/Colchis/scripts.pory"
	lockall
# 2307 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2309 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_Script_Nanny_2
# 2313 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny2, MSGBOX_DEFAULT
# 2314 "data/maps/Colchis/scripts.pory"
	closemessage
# 2315 "data/maps/Colchis/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 2316 "data/maps/Colchis/scripts.pory"
	waitmovement 0
Colchis_Script_Nanny_1:
# 2318 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Nanny_2:
# 2310 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny1, MSGBOX_DEFAULT
# 2311 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Nanny_1


Colchis_Script_GruntBreak::
# 2323 "data/maps/Colchis/scripts.pory"
	lockall
# 2324 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2325 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 2326 "data/maps/Colchis/scripts.pory"
	switch VAR_RESULT
# 2327 "data/maps/Colchis/scripts.pory"
	case 1, Colchis_Script_GruntBreak_3
# 2329 "data/maps/Colchis/scripts.pory"
	case 2, Colchis_Script_GruntBreak_4
# 2331 "data/maps/Colchis/scripts.pory"
	case 3, Colchis_Script_GruntBreak_5
# 2333 "data/maps/Colchis/scripts.pory"
	case 4, Colchis_Script_GruntBreak_6
# 2335 "data/maps/Colchis/scripts.pory"
	case 5, Colchis_Script_GruntBreak_7
# 2337 "data/maps/Colchis/scripts.pory"
	case 6, Colchis_Script_GruntBreak_8
# 2339 "data/maps/Colchis/scripts.pory"
	case 7, Colchis_Script_GruntBreak_9
# 2341 "data/maps/Colchis/scripts.pory"
	case 8, Colchis_Script_GruntBreak_10
# 2343 "data/maps/Colchis/scripts.pory"
	case 9, Colchis_Script_GruntBreak_11
# 2346 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak0, MSGBOX_DEFAULT
Colchis_Script_GruntBreak_1:
# 2348 "data/maps/Colchis/scripts.pory"
	closemessage
# 2349 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_GruntBreak_3:
# 2328 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak1, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_4:
# 2330 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak2, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_5:
# 2332 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak3, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_6:
# 2334 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak4, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_7:
# 2336 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak5, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_8:
# 2338 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak6, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_9:
# 2340 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak7, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_10:
# 2342 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak8, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_11:
# 2344 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak9, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1


Colchis_Script_Kid1::
# 2354 "data/maps/Colchis/scripts.pory"
	lock
# 2355 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2356 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid1, MSGBOX_DEFAULT
# 2357 "data/maps/Colchis/scripts.pory"
	closemessage
# 2358 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid2::
# 2363 "data/maps/Colchis/scripts.pory"
	lock
# 2364 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2365 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid2, MSGBOX_DEFAULT
# 2366 "data/maps/Colchis/scripts.pory"
	closemessage
# 2367 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid3::
# 2372 "data/maps/Colchis/scripts.pory"
	lock
# 2373 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2374 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid3, MSGBOX_DEFAULT
# 2375 "data/maps/Colchis/scripts.pory"
	closemessage
# 2376 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher1::
# 2381 "data/maps/Colchis/scripts.pory"
	lock
# 2382 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2383 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher1, MSGBOX_DEFAULT
# 2384 "data/maps/Colchis/scripts.pory"
	closemessage
# 2385 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher2::
# 2390 "data/maps/Colchis/scripts.pory"
	lock
# 2391 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2392 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher2, MSGBOX_DEFAULT
# 2393 "data/maps/Colchis/scripts.pory"
	closemessage
# 2394 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Chef2::
# 2399 "data/maps/Colchis/scripts.pory"
	lock
# 2400 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2401 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Chef2, MSGBOX_DEFAULT
# 2402 "data/maps/Colchis/scripts.pory"
	closemessage
# 2403 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakL::
# 2408 "data/maps/Colchis/scripts.pory"
	lock
# 2409 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2410 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakL, MSGBOX_DEFAULT
# 2411 "data/maps/Colchis/scripts.pory"
	closemessage
# 2412 "data/maps/Colchis/scripts.pory"
	applymovement 39, Common_Movement_FaceRight
# 2413 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2414 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakR::
# 2419 "data/maps/Colchis/scripts.pory"
	lock
# 2420 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2421 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakR, MSGBOX_DEFAULT
# 2422 "data/maps/Colchis/scripts.pory"
	closemessage
# 2423 "data/maps/Colchis/scripts.pory"
	applymovement 38, Common_Movement_FaceLeft
# 2424 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2425 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_MaidL::
# 2430 "data/maps/Colchis/scripts.pory"
	lock
# 2431 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2432 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MaidL, MSGBOX_DEFAULT
# 2433 "data/maps/Colchis/scripts.pory"
	closemessage
# 2434 "data/maps/Colchis/scripts.pory"
	applymovement 43, Common_Movement_FaceRight
# 2435 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2436 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_MaidR::
# 2441 "data/maps/Colchis/scripts.pory"
	lock
# 2442 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2443 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MaidR, MSGBOX_DEFAULT
# 2444 "data/maps/Colchis/scripts.pory"
	closemessage
# 2445 "data/maps/Colchis/scripts.pory"
	applymovement 42, Common_Movement_FaceLeft
# 2446 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2447 "data/maps/Colchis/scripts.pory"
	release
	end


# 2451 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 2452 "data/maps/Colchis/scripts.pory"
	walk_up
# 2452 "data/maps/Colchis/scripts.pory"
	walk_up
# 2452 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2455 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 2456 "data/maps/Colchis/scripts.pory"
	walk_down
# 2456 "data/maps/Colchis/scripts.pory"
	walk_down
# 2456 "data/maps/Colchis/scripts.pory"
	walk_down
# 2456 "data/maps/Colchis/scripts.pory"
	walk_down
# 2456 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2459 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 2460 "data/maps/Colchis/scripts.pory"
	walk_up
# 2460 "data/maps/Colchis/scripts.pory"
	walk_up
# 2460 "data/maps/Colchis/scripts.pory"
	walk_up
# 2460 "data/maps/Colchis/scripts.pory"
	walk_up
# 2460 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2463 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitA:
# 2464 "data/maps/Colchis/scripts.pory"
	walk_up
# 2464 "data/maps/Colchis/scripts.pory"
	walk_up
# 2464 "data/maps/Colchis/scripts.pory"
	walk_up
# 2464 "data/maps/Colchis/scripts.pory"
	walk_up
# 2464 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2467 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitB:
# 2468 "data/maps/Colchis/scripts.pory"
	walk_down
# 2468 "data/maps/Colchis/scripts.pory"
	walk_down
# 2468 "data/maps/Colchis/scripts.pory"
	walk_down
# 2468 "data/maps/Colchis/scripts.pory"
	walk_down
# 2468 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2471 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2472 "data/maps/Colchis/scripts.pory"
	walk_up
# 2473 "data/maps/Colchis/scripts.pory"
	walk_right
# 2473 "data/maps/Colchis/scripts.pory"
	walk_right
# 2473 "data/maps/Colchis/scripts.pory"
	walk_right
# 2473 "data/maps/Colchis/scripts.pory"
	walk_right
# 2473 "data/maps/Colchis/scripts.pory"
	walk_right
# 2474 "data/maps/Colchis/scripts.pory"
	walk_up
# 2474 "data/maps/Colchis/scripts.pory"
	walk_up
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2475 "data/maps/Colchis/scripts.pory"
	walk_right
# 2476 "data/maps/Colchis/scripts.pory"
	walk_up
# 2476 "data/maps/Colchis/scripts.pory"
	walk_up
# 2476 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2479 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 2480 "data/maps/Colchis/scripts.pory"
	walk_up
# 2480 "data/maps/Colchis/scripts.pory"
	walk_up
# 2480 "data/maps/Colchis/scripts.pory"
	walk_up
# 2480 "data/maps/Colchis/scripts.pory"
	walk_up
# 2480 "data/maps/Colchis/scripts.pory"
	walk_up
# 2480 "data/maps/Colchis/scripts.pory"
	walk_up
# 2480 "data/maps/Colchis/scripts.pory"
	walk_up
# 2480 "data/maps/Colchis/scripts.pory"
	walk_up
# 2480 "data/maps/Colchis/scripts.pory"
	walk_up
# 2480 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2483 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 2484 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2487 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 2488 "data/maps/Colchis/scripts.pory"
	face_right
# 2489 "data/maps/Colchis/scripts.pory"
	face_up
# 2490 "data/maps/Colchis/scripts.pory"
	face_left
# 2491 "data/maps/Colchis/scripts.pory"
	face_down
# 2492 "data/maps/Colchis/scripts.pory"
	face_right
# 2493 "data/maps/Colchis/scripts.pory"
	face_up
# 2494 "data/maps/Colchis/scripts.pory"
	face_left
# 2495 "data/maps/Colchis/scripts.pory"
	face_down
# 2496 "data/maps/Colchis/scripts.pory"
	face_right
# 2497 "data/maps/Colchis/scripts.pory"
	face_up
# 2498 "data/maps/Colchis/scripts.pory"
	face_left
# 2499 "data/maps/Colchis/scripts.pory"
	face_down
# 2500 "data/maps/Colchis/scripts.pory"
	face_right
# 2501 "data/maps/Colchis/scripts.pory"
	face_up
# 2502 "data/maps/Colchis/scripts.pory"
	face_left
# 2503 "data/maps/Colchis/scripts.pory"
	face_down
# 2504 "data/maps/Colchis/scripts.pory"
	face_right
# 2505 "data/maps/Colchis/scripts.pory"
	face_up
# 2506 "data/maps/Colchis/scripts.pory"
	face_left
# 2507 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2510 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 2511 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2511 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2512 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2515 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 2516 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2516 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2517 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2520 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 2521 "data/maps/Colchis/scripts.pory"
	walk_left
# 2522 "data/maps/Colchis/scripts.pory"
	walk_up
# 2522 "data/maps/Colchis/scripts.pory"
	walk_up
# 2523 "data/maps/Colchis/scripts.pory"
	walk_right
# 2523 "data/maps/Colchis/scripts.pory"
	walk_right
# 2524 "data/maps/Colchis/scripts.pory"
	walk_down
# 2524 "data/maps/Colchis/scripts.pory"
	walk_down
# 2525 "data/maps/Colchis/scripts.pory"
	walk_left
# 2526 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2529 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 2530 "data/maps/Colchis/scripts.pory"
	walk_left
# 2531 "data/maps/Colchis/scripts.pory"
	walk_up
# 2531 "data/maps/Colchis/scripts.pory"
	walk_up
# 2532 "data/maps/Colchis/scripts.pory"
	walk_right
# 2532 "data/maps/Colchis/scripts.pory"
	walk_right
# 2533 "data/maps/Colchis/scripts.pory"
	walk_down
# 2533 "data/maps/Colchis/scripts.pory"
	walk_down
# 2534 "data/maps/Colchis/scripts.pory"
	walk_left
# 2535 "data/maps/Colchis/scripts.pory"
	face_down
# 2536 "data/maps/Colchis/scripts.pory"
	walk_left
# 2537 "data/maps/Colchis/scripts.pory"
	walk_up
# 2537 "data/maps/Colchis/scripts.pory"
	walk_up
# 2538 "data/maps/Colchis/scripts.pory"
	walk_right
# 2538 "data/maps/Colchis/scripts.pory"
	walk_right
# 2539 "data/maps/Colchis/scripts.pory"
	walk_down
# 2539 "data/maps/Colchis/scripts.pory"
	walk_down
# 2540 "data/maps/Colchis/scripts.pory"
	walk_left
# 2541 "data/maps/Colchis/scripts.pory"
	face_down
# 2542 "data/maps/Colchis/scripts.pory"
	walk_left
# 2543 "data/maps/Colchis/scripts.pory"
	walk_up
# 2543 "data/maps/Colchis/scripts.pory"
	walk_up
# 2544 "data/maps/Colchis/scripts.pory"
	walk_right
# 2544 "data/maps/Colchis/scripts.pory"
	walk_right
# 2545 "data/maps/Colchis/scripts.pory"
	walk_down
# 2545 "data/maps/Colchis/scripts.pory"
	walk_down
# 2546 "data/maps/Colchis/scripts.pory"
	walk_left
# 2547 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2550 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 2551 "data/maps/Colchis/scripts.pory"
	walk_down
# 2551 "data/maps/Colchis/scripts.pory"
	walk_down
# 2551 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2554 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 2555 "data/maps/Colchis/scripts.pory"
	walk_right
# 2555 "data/maps/Colchis/scripts.pory"
	walk_right
# 2556 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2559 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 2560 "data/maps/Colchis/scripts.pory"
	walk_left
# 2560 "data/maps/Colchis/scripts.pory"
	walk_left
# 2561 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2564 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 2565 "data/maps/Colchis/scripts.pory"
	walk_down
# 2566 "data/maps/Colchis/scripts.pory"
	face_left
# 2567 "data/maps/Colchis/scripts.pory"
	face_up
# 2568 "data/maps/Colchis/scripts.pory"
	face_right
# 2569 "data/maps/Colchis/scripts.pory"
	face_down
# 2570 "data/maps/Colchis/scripts.pory"
	walk_down
# 2571 "data/maps/Colchis/scripts.pory"
	face_left
# 2572 "data/maps/Colchis/scripts.pory"
	face_up
# 2573 "data/maps/Colchis/scripts.pory"
	face_right
# 2574 "data/maps/Colchis/scripts.pory"
	face_down
# 2575 "data/maps/Colchis/scripts.pory"
	walk_down
# 2576 "data/maps/Colchis/scripts.pory"
	face_left
# 2577 "data/maps/Colchis/scripts.pory"
	face_up
# 2578 "data/maps/Colchis/scripts.pory"
	face_right
# 2579 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2582 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 2583 "data/maps/Colchis/scripts.pory"
	walk_right
# 2584 "data/maps/Colchis/scripts.pory"
	walk_up
# 2585 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2586 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2589 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 2590 "data/maps/Colchis/scripts.pory"
	walk_left
# 2591 "data/maps/Colchis/scripts.pory"
	walk_up
# 2592 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2593 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2596 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 2597 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2598 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2601 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 2602 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2603 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2606 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 2607 "data/maps/Colchis/scripts.pory"
	walk_left
# 2608 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2611 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 2612 "data/maps/Colchis/scripts.pory"
	walk_right
# 2613 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2616 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 2617 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2618 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2621 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 2622 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2623 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2626 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 2627 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2630 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 2631 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 2634 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 2635 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 2639 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 2640 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 2643 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 2644 "data/maps/Colchis/scripts.pory"
	walk_up
# 2644 "data/maps/Colchis/scripts.pory"
	walk_up
# 2644 "data/maps/Colchis/scripts.pory"
	walk_up
# 2644 "data/maps/Colchis/scripts.pory"
	walk_up
# 2644 "data/maps/Colchis/scripts.pory"
	walk_up
# 2644 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2647 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 2648 "data/maps/Colchis/scripts.pory"
	walk_right
# 2648 "data/maps/Colchis/scripts.pory"
	walk_right
# 2648 "data/maps/Colchis/scripts.pory"
	walk_right
# 2648 "data/maps/Colchis/scripts.pory"
	walk_right
# 2648 "data/maps/Colchis/scripts.pory"
	walk_right
# 2648 "data/maps/Colchis/scripts.pory"
	walk_right
# 2648 "data/maps/Colchis/scripts.pory"
	walk_right
# 2648 "data/maps/Colchis/scripts.pory"
	walk_right
# 2649 "data/maps/Colchis/scripts.pory"
	walk_down
# 2649 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2652 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 2653 "data/maps/Colchis/scripts.pory"
	walk_right
# 2653 "data/maps/Colchis/scripts.pory"
	walk_right
# 2653 "data/maps/Colchis/scripts.pory"
	walk_right
# 2653 "data/maps/Colchis/scripts.pory"
	walk_right
# 2653 "data/maps/Colchis/scripts.pory"
	walk_right
# 2653 "data/maps/Colchis/scripts.pory"
	walk_right
# 2653 "data/maps/Colchis/scripts.pory"
	walk_right
# 2654 "data/maps/Colchis/scripts.pory"
	walk_down
# 2654 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2657 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 2658 "data/maps/Colchis/scripts.pory"
	walk_right
# 2658 "data/maps/Colchis/scripts.pory"
	walk_right
# 2658 "data/maps/Colchis/scripts.pory"
	walk_right
# 2658 "data/maps/Colchis/scripts.pory"
	walk_right
# 2658 "data/maps/Colchis/scripts.pory"
	walk_right
# 2658 "data/maps/Colchis/scripts.pory"
	walk_right
# 2659 "data/maps/Colchis/scripts.pory"
	walk_down
# 2659 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2662 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 2663 "data/maps/Colchis/scripts.pory"
	walk_right
# 2663 "data/maps/Colchis/scripts.pory"
	walk_right
# 2663 "data/maps/Colchis/scripts.pory"
	walk_right
# 2663 "data/maps/Colchis/scripts.pory"
	walk_right
# 2663 "data/maps/Colchis/scripts.pory"
	walk_right
# 2663 "data/maps/Colchis/scripts.pory"
	walk_right
# 2663 "data/maps/Colchis/scripts.pory"
	walk_right
# 2663 "data/maps/Colchis/scripts.pory"
	walk_right
# 2664 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2667 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 2668 "data/maps/Colchis/scripts.pory"
	walk_right
# 2668 "data/maps/Colchis/scripts.pory"
	walk_right
# 2668 "data/maps/Colchis/scripts.pory"
	walk_right
# 2668 "data/maps/Colchis/scripts.pory"
	walk_right
# 2668 "data/maps/Colchis/scripts.pory"
	walk_right
# 2668 "data/maps/Colchis/scripts.pory"
	walk_right
# 2668 "data/maps/Colchis/scripts.pory"
	walk_right
# 2669 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2672 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 2673 "data/maps/Colchis/scripts.pory"
	walk_right
# 2673 "data/maps/Colchis/scripts.pory"
	walk_right
# 2673 "data/maps/Colchis/scripts.pory"
	walk_right
# 2673 "data/maps/Colchis/scripts.pory"
	walk_right
# 2673 "data/maps/Colchis/scripts.pory"
	walk_right
# 2673 "data/maps/Colchis/scripts.pory"
	walk_right
# 2674 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2677 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2678 "data/maps/Colchis/scripts.pory"
	walk_up
# 2679 "data/maps/Colchis/scripts.pory"
	walk_right
# 2679 "data/maps/Colchis/scripts.pory"
	walk_right
# 2679 "data/maps/Colchis/scripts.pory"
	walk_right
# 2679 "data/maps/Colchis/scripts.pory"
	walk_right
# 2679 "data/maps/Colchis/scripts.pory"
	walk_right
# 2679 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2682 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 2683 "data/maps/Colchis/scripts.pory"
	walk_right
# 2683 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2686 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 2687 "data/maps/Colchis/scripts.pory"
	walk_up
# 2687 "data/maps/Colchis/scripts.pory"
	walk_up
# 2687 "data/maps/Colchis/scripts.pory"
	walk_up
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2688 "data/maps/Colchis/scripts.pory"
	walk_right
# 2689 "data/maps/Colchis/scripts.pory"
	walk_up
# 2689 "data/maps/Colchis/scripts.pory"
	walk_up
# 2689 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2692 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 2693 "data/maps/Colchis/scripts.pory"
	walk_up
# 2693 "data/maps/Colchis/scripts.pory"
	walk_up
# 2693 "data/maps/Colchis/scripts.pory"
	walk_up
# 2693 "data/maps/Colchis/scripts.pory"
	walk_up
# 2693 "data/maps/Colchis/scripts.pory"
	walk_up
# 2693 "data/maps/Colchis/scripts.pory"
	walk_up
# 2693 "data/maps/Colchis/scripts.pory"
	walk_up
# 2693 "data/maps/Colchis/scripts.pory"
	walk_up
# 2693 "data/maps/Colchis/scripts.pory"
	walk_up
# 2693 "data/maps/Colchis/scripts.pory"
	walk_up
# 2693 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2696 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 2697 "data/maps/Colchis/scripts.pory"
	walk_up
# 2697 "data/maps/Colchis/scripts.pory"
	walk_up
# 2697 "data/maps/Colchis/scripts.pory"
	walk_up
# 2697 "data/maps/Colchis/scripts.pory"
	walk_up
# 2697 "data/maps/Colchis/scripts.pory"
	walk_up
# 2697 "data/maps/Colchis/scripts.pory"
	walk_up
# 2697 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2700 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 2701 "data/maps/Colchis/scripts.pory"
	walk_left
# 2702 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2705 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 2706 "data/maps/Colchis/scripts.pory"
	walk_up
# 2707 "data/maps/Colchis/scripts.pory"
	walk_right
# 2708 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2712 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 2713 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2716 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 2717 "data/maps/Colchis/scripts.pory"
	walk_right
# 2717 "data/maps/Colchis/scripts.pory"
	walk_right
# 2718 "data/maps/Colchis/scripts.pory"
	walk_down
# 2719 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2722 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 2723 "data/maps/Colchis/scripts.pory"
	walk_left
# 2724 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2727 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 2728 "data/maps/Colchis/scripts.pory"
	walk_right
# 2729 "data/maps/Colchis/scripts.pory"
	walk_up
# 2730 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2733 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 2734 "data/maps/Colchis/scripts.pory"
	walk_left
# 2735 "data/maps/Colchis/scripts.pory"
	walk_up
# 2736 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2739 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 2740 "data/maps/Colchis/scripts.pory"
	walk_down
# 2740 "data/maps/Colchis/scripts.pory"
	walk_down
# 2740 "data/maps/Colchis/scripts.pory"
	walk_down
# 2740 "data/maps/Colchis/scripts.pory"
	walk_down
# 2740 "data/maps/Colchis/scripts.pory"
	walk_down
# 2740 "data/maps/Colchis/scripts.pory"
	walk_down
# 2740 "data/maps/Colchis/scripts.pory"
	walk_down
# 2740 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2743 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 2744 "data/maps/Colchis/scripts.pory"
	walk_up
# 2744 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2747 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonApproachPlayer:
# 2748 "data/maps/Colchis/scripts.pory"
	walk_up
# 2748 "data/maps/Colchis/scripts.pory"
	walk_up
# 2748 "data/maps/Colchis/scripts.pory"
	walk_up
# 2748 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2751 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonExit:
# 2752 "data/maps/Colchis/scripts.pory"
	walk_down
# 2752 "data/maps/Colchis/scripts.pory"
	walk_down
# 2752 "data/maps/Colchis/scripts.pory"
	walk_down
# 2752 "data/maps/Colchis/scripts.pory"
	walk_down
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2753 "data/maps/Colchis/scripts.pory"
	walk_left
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2754 "data/maps/Colchis/scripts.pory"
	walk_down
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2755 "data/maps/Colchis/scripts.pory"
	walk_right
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2756 "data/maps/Colchis/scripts.pory"
	walk_down
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
# 2757 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2760 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonExit:
# 2761 "data/maps/Colchis/scripts.pory"
	walk_down
# 2761 "data/maps/Colchis/scripts.pory"
	walk_down
# 2761 "data/maps/Colchis/scripts.pory"
	walk_down
# 2761 "data/maps/Colchis/scripts.pory"
	walk_down
# 2761 "data/maps/Colchis/scripts.pory"
	walk_down
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2762 "data/maps/Colchis/scripts.pory"
	walk_left
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2763 "data/maps/Colchis/scripts.pory"
	walk_down
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2764 "data/maps/Colchis/scripts.pory"
	walk_right
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2765 "data/maps/Colchis/scripts.pory"
	walk_down
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
# 2766 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2769 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerPrisonExit:
# 2770 "data/maps/Colchis/scripts.pory"
	walk_down
# 2770 "data/maps/Colchis/scripts.pory"
	walk_down
# 2770 "data/maps/Colchis/scripts.pory"
	walk_down
# 2770 "data/maps/Colchis/scripts.pory"
	walk_down
# 2770 "data/maps/Colchis/scripts.pory"
	walk_down
# 2770 "data/maps/Colchis/scripts.pory"
	walk_down
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2771 "data/maps/Colchis/scripts.pory"
	walk_left
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
# 2772 "data/maps/Colchis/scripts.pory"
	walk_down
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
# 2773 "data/maps/Colchis/scripts.pory"
	walk_right
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2774 "data/maps/Colchis/scripts.pory"
	walk_down
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
# 2775 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2778 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 2779 "data/maps/Colchis/scripts.pory"
	walk_left
# 2779 "data/maps/Colchis/scripts.pory"
	walk_left
# 2779 "data/maps/Colchis/scripts.pory"
	walk_left
# 2780 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2783 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 2784 "data/maps/Colchis/scripts.pory"
	walk_down
# 2785 "data/maps/Colchis/scripts.pory"
	walk_right
# 2785 "data/maps/Colchis/scripts.pory"
	walk_right
# 2785 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2788 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 2789 "data/maps/Colchis/scripts.pory"
	walk_up
# 2789 "data/maps/Colchis/scripts.pory"
	walk_up
# 2789 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2792 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 2793 "data/maps/Colchis/scripts.pory"
	walk_up
# 2793 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2796 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3A:
# 2797 "data/maps/Colchis/scripts.pory"
	walk_up
# 2797 "data/maps/Colchis/scripts.pory"
	walk_up
# 2798 "data/maps/Colchis/scripts.pory"
	walk_right
# 2798 "data/maps/Colchis/scripts.pory"
	walk_right
# 2799 "data/maps/Colchis/scripts.pory"
	walk_up
# 2799 "data/maps/Colchis/scripts.pory"
	walk_up
# 2799 "data/maps/Colchis/scripts.pory"
	walk_up
# 2799 "data/maps/Colchis/scripts.pory"
	walk_up
# 2799 "data/maps/Colchis/scripts.pory"
	walk_up
# 2799 "data/maps/Colchis/scripts.pory"
	walk_up
# 2799 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2802 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3B:
# 2803 "data/maps/Colchis/scripts.pory"
	walk_up
# 2803 "data/maps/Colchis/scripts.pory"
	walk_up
# 2804 "data/maps/Colchis/scripts.pory"
	walk_right
# 2805 "data/maps/Colchis/scripts.pory"
	walk_up
# 2805 "data/maps/Colchis/scripts.pory"
	walk_up
# 2805 "data/maps/Colchis/scripts.pory"
	walk_up
# 2805 "data/maps/Colchis/scripts.pory"
	walk_up
# 2805 "data/maps/Colchis/scripts.pory"
	walk_up
# 2805 "data/maps/Colchis/scripts.pory"
	walk_up
# 2805 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2808 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3A:
# 2809 "data/maps/Colchis/scripts.pory"
	walk_down
# 2810 "data/maps/Colchis/scripts.pory"
	walk_right
# 2811 "data/maps/Colchis/scripts.pory"
	walk_down
# 2811 "data/maps/Colchis/scripts.pory"
	walk_down
# 2812 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2815 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3B:
# 2816 "data/maps/Colchis/scripts.pory"
	walk_down
# 2816 "data/maps/Colchis/scripts.pory"
	walk_down
# 2816 "data/maps/Colchis/scripts.pory"
	walk_down
# 2817 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2820 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn:
# 2821 "data/maps/Colchis/scripts.pory"
	walk_down
# 2821 "data/maps/Colchis/scripts.pory"
	walk_down
# 2821 "data/maps/Colchis/scripts.pory"
	walk_down
# 2821 "data/maps/Colchis/scripts.pory"
	walk_down
# 2821 "data/maps/Colchis/scripts.pory"
	walk_down
# 2821 "data/maps/Colchis/scripts.pory"
	walk_down
# 2821 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2824 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2A:
# 2825 "data/maps/Colchis/scripts.pory"
	walk_down
# 2826 "data/maps/Colchis/scripts.pory"
	walk_left
# 2826 "data/maps/Colchis/scripts.pory"
	walk_left
# 2827 "data/maps/Colchis/scripts.pory"
	walk_down
# 2828 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2831 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2B:
# 2832 "data/maps/Colchis/scripts.pory"
	walk_down
# 2833 "data/maps/Colchis/scripts.pory"
	walk_left
# 2834 "data/maps/Colchis/scripts.pory"
	walk_down
# 2835 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2838 "data/maps/Colchis/scripts.pory"
Colchis_Movement_Exeunt:
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
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2840 "data/maps/Colchis/scripts.pory"
	walk_up
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2841 "data/maps/Colchis/scripts.pory"
	walk_left
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
# 2842 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2845 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAndMedeaExeunt:
# 2846 "data/maps/Colchis/scripts.pory"
	walk_down
# 2847 "data/maps/Colchis/scripts.pory"
	walk_right
# 2847 "data/maps/Colchis/scripts.pory"
	walk_right
# 2847 "data/maps/Colchis/scripts.pory"
	walk_right
# 2847 "data/maps/Colchis/scripts.pory"
	walk_right
# 2847 "data/maps/Colchis/scripts.pory"
	walk_right
# 2847 "data/maps/Colchis/scripts.pory"
	walk_right
# 2847 "data/maps/Colchis/scripts.pory"
	walk_right
# 2847 "data/maps/Colchis/scripts.pory"
	walk_right
# 2847 "data/maps/Colchis/scripts.pory"
	walk_right
# 2847 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2850 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ChefExit:
# 2851 "data/maps/Colchis/scripts.pory"
	walk_right
# 2851 "data/maps/Colchis/scripts.pory"
	walk_right
# 2851 "data/maps/Colchis/scripts.pory"
	walk_right
# 2851 "data/maps/Colchis/scripts.pory"
	walk_right
# 2851 "data/maps/Colchis/scripts.pory"
	walk_right
# 2851 "data/maps/Colchis/scripts.pory"
	walk_right
# 2851 "data/maps/Colchis/scripts.pory"
	walk_right
# 2851 "data/maps/Colchis/scripts.pory"
	walk_right
# 2851 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2854 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit1:
# 2855 "data/maps/Colchis/scripts.pory"
	walk_left
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
	step_end

# 2860 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit2:
# 2861 "data/maps/Colchis/scripts.pory"
	walk_down
# 2862 "data/maps/Colchis/scripts.pory"
	walk_left
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2863 "data/maps/Colchis/scripts.pory"
	walk_down
# 2864 "data/maps/Colchis/scripts.pory"
	walk_left
# 2864 "data/maps/Colchis/scripts.pory"
	walk_left
# 2864 "data/maps/Colchis/scripts.pory"
	walk_left
# 2864 "data/maps/Colchis/scripts.pory"
	walk_left
# 2864 "data/maps/Colchis/scripts.pory"
	walk_left
# 2864 "data/maps/Colchis/scripts.pory"
	walk_left
# 2864 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1509 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Script_SanctumMedeaReturn_Text_0:
# 1730 "data/maps/Colchis/scripts.pory"
	.string "OIMOIAY!\nOOIIMMOOIIAAYY!!$"

Colchis_Text_JasonIntro1::
# 2867 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 2871 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 2875 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 2879 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 2883 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 2887 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 2892 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 2897 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 2901 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 2905 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 2909 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 2918 "data/maps/Colchis/scripts.pory"
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
# 2923 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 2932 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 2936 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 2945 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 2951 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 2964 "data/maps/Colchis/scripts.pory"
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
# 2976 "data/maps/Colchis/scripts.pory"
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
# 2980 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 2984 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 2988 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 2992 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 2996 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 3000 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 3009 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 3013 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 3031 "data/maps/Colchis/scripts.pory"
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
# 3035 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 3040 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 3044 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 3048 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 3055 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 3059 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 3085 "data/maps/Colchis/scripts.pory"
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
# 3093 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 3097 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 3110 "data/maps/Colchis/scripts.pory"
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
# 3114 "data/maps/Colchis/scripts.pory"
	.string "Do not interrupt my private time with\n"
	.string "Medea 'till you bring shiny Mareep.$"

Colchis_Text_MedeaSanctumTrigger1::
# 3119 "data/maps/Colchis/scripts.pory"
	.string "Ememberray, ingbray onay armhay otay\n"
	.string "Ugialay.$"

Colchis_Text_JasonSanctumTrigger2::
# 3123 "data/maps/Colchis/scripts.pory"
	.string "Have you returned bringing Shiny\n"
	.string "Mareep?$"

Colchis_Text_MedeaSanctumTrigger2::
# 3128 "data/maps/Colchis/scripts.pory"
	.string "Ymay oughtsthay etraybay emay.\n"
	.string "Excuseay emay Asonjay, againstay ymay\l"
	.string "ownay adviceay Iay ustmay aketay\l"
	.string "eavelay ofay ouyay anday eesay atthay\l"
	.string "Ugialay isay afesay.$"

Colchis_Text_JasonSanctumTrigger3::
# 3132 "data/maps/Colchis/scripts.pory"
	.string "How could you fail? You only had one\n"
	.string "job! My quest has failed and it was all\l"
	.string "your fault! Now you will pay the price.\l"
	.string "Go Nosepass!$"

Colchis_Text_JasonLost::
# 3136 "data/maps/Colchis/scripts.pory"
	.string "I curse that day I saved you from the\n"
	.string "surf.$"

Colchis_Text_JasonPost::
# 3140 "data/maps/Colchis/scripts.pory"
	.string "The most wicked betrayal of all my\n"
	.string "life...$"

Colchis_Text_JasonGiveMeMareep::
# 3144 "data/maps/Colchis/scripts.pory"
	.string "I see that you have completed the\n"
	.string "quest. Give me shiny Mareep and let's be\l"
	.string "done.$"

Colchis_Text_GiveJasonMareep::
# 3148 "data/maps/Colchis/scripts.pory"
	.string "Will you give Jason shiny Mareep?$"

Colchis_Text_GaveShinyMareep::
# 3152 "data/maps/Colchis/scripts.pory"
	.string "You gave {STR_VAR_1} to Jason!\p"
	.string "Bye Bye {STR_VAR_1}!$"

Colchis_Text_CultistMPre::
# 3157 "data/maps/Colchis/scripts.pory"
	.string "Espassertray opstay! Allfay intoay\n"
	.string "othingnessnay$"

Colchis_Text_CultistMLost::
# 3162 "data/maps/Colchis/scripts.pory"
	.string "Ethay everlastingay arknessday\n"
	.string "overscay allay.$"

Colchis_Text_CultistMPost::
# 3167 "data/maps/Colchis/scripts.pory"
	.string "Ouyay aymay avehay onway utbay\n"
	.string "ou'llyay evernay escapeay.$"

Colchis_Text_MedeaSanctumReturn1::
# 3172 "data/maps/Colchis/scripts.pory"
	.string "Ouyay onstermay! Owhay ouldcay ouyay\n"
	.string "oday isthay otay emay?$"

Colchis_Text_MedeaSanctumReturn2::
# 3177 "data/maps/Colchis/scripts.pory"
	.string "Ymay ovelay, ehay ashay attackeday\n"
	.string "ymay Ugialay! Iay illway onay ongerlay\l"
	.string "elphay imhay eavelay Olchiscay.$"

Colchis_Text_JasonMedeaReturn1::
# 3181 "data/maps/Colchis/scripts.pory"
	.string "Please, do not cry beloved Medea. Lend\n"
	.string "love the power to hold back your tears.$"

Colchis_Text_JasonMedeaReturn2::
# 3185 "data/maps/Colchis/scripts.pory"
	.string "Hey, I apologize for Medea. I know she's\n"
	.string "acting up, but we're still cool. Give it\l"
	.string "some time I'll get her to cool down. When\l"
	.string "you get out meet me in Bulbus town and\l"
	.string "I'll repay you for shiny Mareep.$"

Colchis_Text_JasonSanctumWilds::
# 3189 "data/maps/Colchis/scripts.pory"
	.string "Alas! Medea! My quest for shiny Mareep\n"
	.string "has failed and now we're vagabonds.$"

Colchis_Text_JasonSanctumDepart::
# 3193 "data/maps/Colchis/scripts.pory"
	.string "Let us depart and leave this one\n"
	.string "behind.$"

Colchis_Text_Bed::
# 3197 "data/maps/Colchis/scripts.pory"
	.string "It's a big comfy bed!\n"
	.string "Would you like to take a rest?$"

Colchis_Text_RingBlockerIntro::
# 3201 "data/maps/Colchis/scripts.pory"
	.string "It's a large metal barrier with a keyhole\n"
	.string "in the center.$"

Colchis_Text_KeyFits::
# 3205 "data/maps/Colchis/scripts.pory"
	.string "The key fits into the keyhole!\n"
	.string "The barriers sink into the ground but\l"
	.string "the key broke off inside!$"

Colchis_Text_RingBlockerDecline::
# 3209 "data/maps/Colchis/scripts.pory"
	.string "Better not try using the key here.$"

Colchis_Text_RingBlockerYesNo::
# 3213 "data/maps/Colchis/scripts.pory"
	.string "Would you like to try using the Colchis\n"
	.string "Key?$"

Colchis_Text_AeetesIntro::
# 3222 "data/maps/Colchis/scripts.pory"
	.string "Ouryay insolentay invasionay ofay\n"
	.string "ouray airfay anday ightymay ingdomkay\l"
	.string "isay ownay atay anay enday. ouryay\l"
	.string "illway ownay earnlay ethay uetray\l"
	.string "owerpay ofay Ingkay Aeetesay.$"

Colchis_Text_AeetesLost::
# 3227 "data/maps/Colchis/scripts.pory"
	.string "Ownay ymay ingdomkay ashay allenfay.$"

Colchis_Text_AeetesPost::
# 3240 "data/maps/Colchis/scripts.pory"
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
# 3245 "data/maps/Colchis/scripts.pory"
	.string "Ymay ifelay ashay eenbay educedray\n"
	.string "otay aughtnay. Eavelay emay.$"

Colchis_Text_ChefProposal::
# 3249 "data/maps/Colchis/scripts.pory"
	.string "I'm nervous! Do you think she will say\n"
	.string "yes?$"

Colchis_Movement_ChefIntro::
# 3253 "data/maps/Colchis/scripts.pory"
	.string "Oh! What to do? I am madly in love with\n"
	.string "one of Colchis' most beautiful maids\l"
	.string "but worry I will lose her to someone\l"
	.string "more handsome and with more money than\l"
	.string "me. If only I had an engagement ring to\l"
	.string "give her in exchange for loyalty.$"

Colchis_Text_ChefRingYesNo::
# 3257 "data/maps/Colchis/scripts.pory"
	.string "Give Chef the Colchis Ring?$"

Colchis_Text_ChefGaveRing::
# 3261 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave Chef the Colchis Ring.$"

Colchis_Text_ChefThanks1::
# 3265 "data/maps/Colchis/scripts.pory"
	.string "Great Almighty! You're giving this to\n"
	.string "me? Take this Sweet Apple as token of\l"
	.string "thanks.$"

Colchis_Text_ChefThanks2::
# 3269 "data/maps/Colchis/scripts.pory"
	.string "I'm off now to proposition the maid.$"

Colchis_Text_ChefGaveRingNo::
# 3273 "data/maps/Colchis/scripts.pory"
	.string "Better not give him the ring.$"

Colchis_Text_Maid1::
# 3277 "data/maps/Colchis/scripts.pory"
	.string "Right now I am a maid but one day I will\n"
	.string "meet a foreign man and have his kids.$"

Colchis_Text_Maid2::
# 3281 "data/maps/Colchis/scripts.pory"
	.string "I'm starting to worry this creep likes\n"
	.string "me.$"

Colchis_Text_JailerIntro::
# 3294 "data/maps/Colchis/scripts.pory"
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
# 3298 "data/maps/Colchis/scripts.pory"
	.string "Give the Colchis Apple to the jailer?$"

Colchis_Text_JailerGaveApple::
# 3302 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave the jailer the Colchis\n"
	.string "Apple$"

Colchis_Text_JailerThanks1::
# 3308 "data/maps/Colchis/scripts.pory"
	.string "Aay Olchiscay apple? Ownay ere'sthay\n"
	.string "aay eetsway eattray! Ankthay ouyay!\l"
	.string "Ere'shay ethay ailjay eykay. Ocknay\l"
	.string "ourselfyay outay.$"

Colchis_Text_JailerThanks2::
# 3313 "data/maps/Colchis/scripts.pory"
	.string "Ebay arefulcay otnay otay ocklay\n"
	.string "ourselfyay inay ailjay. Ahay!$"

Colchis_Text_JailerGaveAppleNo::
# 3317 "data/maps/Colchis/scripts.pory"
	.string "Best not to give him the Apple now.$"

Colchis_Text_PrisonDoorOpen::
# 3321 "data/maps/Colchis/scripts.pory"
	.string "The Colchis Prison Key unlocked the\n"
	.string "door!$"

Colchis_Text_LostKid1::
# 3325 "data/maps/Colchis/scripts.pory"
	.string "Hey! Thanks for finding me! I was\n"
	.string "starting to get scared but I'll go back\l"
	.string "to where I belong now.$"

Colchis_Text_LostKid2::
# 3329 "data/maps/Colchis/scripts.pory"
	.string "I love playing with my friends again.$"

Colchis_Text_Doorman1::
# 3343 "data/maps/Colchis/scripts.pory"
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
# 3348 "data/maps/Colchis/scripts.pory"
	.string "Ankthay ouyay orfay ingingbray usay\n"
	.string "ackbay ogethertay. Ethay oorday isay\l"
	.string "openay. Arewellfay.$"

Colchis_Text_Doorman3::
# 3353 "data/maps/Colchis/scripts.pory"
	.string "Anksthay againay.$"

Colchis_Text_Nanny1::
# 3357 "data/maps/Colchis/scripts.pory"
	.string "Oh no! How terrible! I'm freaking out\n"
	.string "because I lost another one. What if I\l"
	.string "get caught swapping out another kid?\l"
	.string "When they're infants they usually can't\l"
	.string "tell but this one was older...What can I\l"
	.string "do?$"

Colchis_Text_Nanny2::
# 3361 "data/maps/Colchis/scripts.pory"
	.string "Oh! Thanks for finding that lost kid for\n"
	.string "me. I feel like I can finally exhale. I\l"
	.string "had been so stressed out I hadn't been\l"
	.string "able to come socialize with my man.$"

Colchis_Text_GruntBreak1::
# 3366 "data/maps/Colchis/scripts.pory"
	.string "Iay asway ustjay inkingthay aboutay\n"
	.string "ymay etpay atcay.$"

Colchis_Text_GruntBreak2::
# 3371 "data/maps/Colchis/scripts.pory"
	.string "Iay oday otnay inkthay eetingsmay\n"
	.string "areay oductivepray.$"

Colchis_Text_GruntBreak3::
# 3376 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay interrupay emay ingebay\n"
	.string "eatingay ipschay.$"

Colchis_Text_GruntBreak4::
# 3381 "data/maps/Colchis/scripts.pory"
	.string "I'may onay ymay eakbray, asay\n"
	.string "Olchiscay' awlay andatesmay.$"

Colchis_Text_GruntBreak5::
# 3386 "data/maps/Colchis/scripts.pory"
	.string "Ymay eakbray imetay isay ymay\n"
	.string "erapythay essionsay.$"

Colchis_Text_GruntBreak6::
# 3391 "data/maps/Colchis/scripts.pory"
	.string "I'may otnay azylay! I'may eparingpray\n"
	.string "otay orkway.$"

Colchis_Text_GruntBreak7::
# 3396 "data/maps/Colchis/scripts.pory"
	.string "Eythey aysay atthay eaksbray areay\n"
	.string "ikelay ugshay orfay ouryay oulsay.$"

Colchis_Text_GruntBreak8::
# 3401 "data/maps/Colchis/scripts.pory"
	.string "I'may otnay ignoringay ouyay. I'may\n"
	.string "ustjay estingray.$"

Colchis_Text_GruntBreak9::
# 3406 "data/maps/Colchis/scripts.pory"
	.string "On'tday elltay ymay ossbay I'veay\n"
	.string "eenbay erehay orfay ourshay.$"

Colchis_Text_GruntBreak0::
# 3411 "data/maps/Colchis/scripts.pory"
	.string "Amay Iay upposedsay otay ebay\n"
	.string "alkingtay otay ouyay?$"

Colchis_Text_Kid1::
# 3415 "data/maps/Colchis/scripts.pory"
	.string "Baby shark doo doo doo doo doo doo\n"
	.string "baby shark doo doo doo doo doo doo\l"
	.string "baby shark doo doo doo doo doo baby\l"
	.string "shark!$"

Colchis_Text_Kid2::
# 3419 "data/maps/Colchis/scripts.pory"
	.string "I love Pikachu! He's an electric Pokemon\n"
	.string "and he's my favorite! I wish I had a pet\l"
	.string "Pikachu but I think my mom would say\l"
	.string "no...Maybe one day...$"

Colchis_Text_Kid3::
# 3423 "data/maps/Colchis/scripts.pory"
	.string "Have you ever had a dream so that so\n"
	.string "that you um you had you you would you\l"
	.string "could you'll do you went you want you\l"
	.string "you could do so you you do you could\l"
	.string "you you want you want him to do you so\l"
	.string "much you could do anything?$"

Colchis_Text_Teacher1::
# 3427 "data/maps/Colchis/scripts.pory"
	.string "The youth is lost! They pay no\n"
	.string "attention to anything of value or\l"
	.string "substance.$"

Colchis_Text_Teacher2::
# 3431 "data/maps/Colchis/scripts.pory"
	.string "Even though teaching can be\n"
	.string "exhausting it's an honor to help\l"
	.string "nurture young minds.$"

Colchis_Text_Chef2::
# 3435 "data/maps/Colchis/scripts.pory"
	.string "I'm not crying! No! Just peeling onions!\n"
	.string "Not thinking 'bout the girl who left me!\l"
	.string "No!$"

Colchis_Text_GruntBreakL::
# 3440 "data/maps/Colchis/scripts.pory"
	.string "E'reway otnay arguinay. I'may ovingpray\n"
	.string "I'may ightray.$"

Colchis_Text_GruntBreakR::
# 3445 "data/maps/Colchis/scripts.pory"
	.string "Atthay uy'sgay anay assay, anay assay\n"
	.string "at'sthay ullfay ofay itshay.$"

Colchis_Text_MaidL::
# 3449 "data/maps/Colchis/scripts.pory"
	.string "I heard she said he said he had a crush\n"
	.string "on him but she said she does not like\l"
	.string "him.$"

Colchis_Text_MaidR::
# 3453 "data/maps/Colchis/scripts.pory"
	.string "Get out of here! We're not interested.$"
