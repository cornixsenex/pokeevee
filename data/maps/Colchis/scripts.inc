Colchis_MapScripts::
# 108 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 123 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 129 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME
# 143 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 109 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 112 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 115 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 17
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 118 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	return

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 110 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupJail
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 113 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupLostKid
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 112 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 116 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_ShowNannyWithGuard
	goto Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 119 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
# 124 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 125 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME:
# 131 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_MAREEP, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2
Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 136 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 132 "data/maps/Colchis/scripts.pory"
	hideobjectat 2, MAP_COLCHIS
# 133 "data/maps/Colchis/scripts.pory"
	removeobject 2
	goto Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 137 "data/maps/Colchis/scripts.pory"
	hideobjectat 1, MAP_COLCHIS
# 138 "data/maps/Colchis/scripts.pory"
	removeobject 1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 144 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
# 146 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_WarpSanctum::
# 154 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 155 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 34, 56
	end


Colchis_TempScript_SetupTestMedeaDance::
# 160 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 161 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 166 "data/maps/Colchis/scripts.pory"
	lockall
# 167 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 168 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SetupJail::
# 173 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 174 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 175 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
# 176 "data/maps/Colchis/scripts.pory"
	addobject 54
# 177 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
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
# 1299 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1300 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1303 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1304 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1305 "data/maps/Colchis/scripts.pory"
	closemessage
# 1306 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1309 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1310 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1311 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1312 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1315 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1316 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1317 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1318 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1319 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1322 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1323 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1324 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1325 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1326 "data/maps/Colchis/scripts.pory"
	delay 30
# 1327 "data/maps/Colchis/scripts.pory"
	waitse
# 1330 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonApproachPlayer
# 1331 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1334 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1335 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1336 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1339 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1340 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1341 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1344 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1345 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1346 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1349 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1350 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1351 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1354 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1355 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1356 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1358 "data/maps/Colchis/scripts.pory"
	closemessage
# 1361 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1362 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1365 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1366 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1367 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1368 "data/maps/Colchis/scripts.pory"
	closemessage
# 1371 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1372 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1375 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1376 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1377 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1380 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1381 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1382 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1384 "data/maps/Colchis/scripts.pory"
	closemessage
# 1388 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaPrisonExit
# 1389 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonExit
# 1390 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerPrisonExit
# 1391 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1393 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1401 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1402 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1405 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1406 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1407 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1409 "data/maps/Colchis/scripts.pory"
	closemessage
# 1412 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1413 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1416 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1417 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1418 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1419 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1420 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1423 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1424 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 1
# 1425 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1426 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 1
# 1429 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum2
# 1430 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1433 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1434 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum2, MSGBOX_DEFAULT
# 1435 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1438 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1439 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum1, MSGBOX_DEFAULT
# 1440 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1443 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1444 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1447 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1448 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctum2, MSGBOX_DEFAULT
# 1449 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1451 "data/maps/Colchis/scripts.pory"
	closemessage
# 1454 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1455 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1458 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum1
# 1459 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1461 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1462 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1464 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1465 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1467 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1468 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1469 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1472 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1473 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum3, MSGBOX_DEFAULT
# 1474 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1475 "data/maps/Colchis/scripts.pory"
	closemessage
# 1478 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1479 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1482 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum2
# 1483 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1486 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 1489 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 31, 60
# 1490 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT
# 1491 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1492 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1494 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 30, 60
# 1495 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 1496 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1497 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1498 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_LugiaTest::
# 1504 "data/maps/Colchis/scripts.pory"
	lockall
# 1505 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1506 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_LugiaTest_Text_0, MSGBOX_DEFAULT
# 1507 "data/maps/Colchis/scripts.pory"
	closemessage
# 1508 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_Lugia::
# 1513 "data/maps/Colchis/scripts.pory"
	lockall
# 1514 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1515 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 1516 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1517 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_LUGIA
# 1518 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1519 "data/maps/Colchis/scripts.pory"
	setwildbattle SPECIES_LUGIA, 18
# 1520 "data/maps/Colchis/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1521 "data/maps/Colchis/scripts.pory"
	waitstate
# 1522 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1523 "data/maps/Colchis/scripts.pory"
	removeobject 1
# 1524 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumTriggerA::
# 1530 "data/maps/Colchis/scripts.pory"
	lockall
# 1531 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 0
# 1532 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTriggerB::
# 1536 "data/maps/Colchis/scripts.pory"
	lockall
# 1537 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_B, 1
# 1538 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTrigger
	return


Colchis_Script_SanctumTrigger::
# 1543 "data/maps/Colchis/scripts.pory"
	lockall
# 1546 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1547 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1548 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1549 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1550 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 1551 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1554 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_4
Colchis_Script_SanctumTrigger_3:
# 1558 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 12
# 1560 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerEndIntro
# 1562 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_MAREEP, Colchis_Script_SanctumTrigger_7
# 1581 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_8
# 1603 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1604 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1605 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
# 1606 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
Colchis_Script_SanctumTrigger_1:
# 1609 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_SanctumTrigger_2:
# 1555 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_4:
# 1554 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_SanctumTrigger_2
	goto Colchis_Script_SanctumTrigger_3

Colchis_Script_SanctumTrigger_7:
# 1565 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumTriggerMedeaExit
# 1568 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1572 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumMedeaReturn
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_8:
# 1582 "data/maps/Colchis/scripts.pory"
	closemessage
# 1584 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonMareep
# 1585 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumTrigger_12
# 1590 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1591 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1593 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1594 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumWilds, MSGBOX_DEFAULT
# 1595 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1600 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	goto Colchis_Script_SanctumTrigger_1

Colchis_Script_SanctumTrigger_12:
# 1587 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Exeunt
	goto Colchis_Script_SanctumTrigger_1


Colchis_Script_SanctumTriggerReturn::
# 1614 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1615 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger1, MSGBOX_DEFAULT
# 1616 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1618 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1619 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger1, MSGBOX_DEFAULT
# 1620 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1622 "data/maps/Colchis/scripts.pory"
	closemessage
# 1625 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1626 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


Colchis_Script_SanctumTriggerEndIntro::
# 1632 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1633 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1634 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumTriggerMedeaExit::
# 1639 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1640 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger2, MSGBOX_DEFAULT
# 1641 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1642 "data/maps/Colchis/scripts.pory"
	closemessage
# 1643 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTriggerMedeaExit_2
# 1646 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3B
Colchis_Script_SanctumTriggerMedeaExit_1:
# 1648 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumTriggerMedeaExit_2:
# 1644 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3A
	goto Colchis_Script_SanctumTriggerMedeaExit_1


Colchis_Script_LugiaChaseTrigger::
# 1653 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1654 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaChaseTrigger_2
Colchis_Script_LugiaChaseTrigger_1:
	end

Colchis_Script_LugiaChaseTrigger_2:
# 1655 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	goto Colchis_Script_LugiaChaseTrigger_1


Colchis_Script_LugiaWanderTrigger::
# 1661 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1662 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaWanderTrigger_2
Colchis_Script_LugiaWanderTrigger_1:
	end

Colchis_Script_LugiaWanderTrigger_2:
# 1663 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	goto Colchis_Script_LugiaWanderTrigger_1


Colchis_Script_ShinyMareep::
# 1669 "data/maps/Colchis/scripts.pory"
	lockall
# 1670 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1671 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 1672 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1673 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1674 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1675 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1676 "data/maps/Colchis/scripts.pory"
	waitstate
# 1677 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1678 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1679 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumApproachJason::
# 1684 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumApproachJason_2
# 1687 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3B
Colchis_Script_SanctumApproachJason_1:
# 1689 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1691 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1692 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumApproachJason_2:
# 1685 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3A
	goto Colchis_Script_SanctumApproachJason_1


Colchis_Script_SanctumJasonBattle::
# 1698 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1699 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1701 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1702 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger3, MSGBOX_DEFAULT
# 1703 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1704 "data/maps/Colchis/scripts.pory"
	closemessage
# 1706 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_JASON, Colchis_Text_JasonLost
# 1708 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1709 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPost, MSGBOX_DEFAULT
# 1710 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumMedeaReturn::
# 1717 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1718 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1719 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1721 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1722 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1723 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1726 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1727 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumMedeaReturn_Text_0, MSGBOX_DEFAULT
# 1728 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1729 "data/maps/Colchis/scripts.pory"
	closemessage
# 1732 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn
# 1733 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1736 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1737 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn1, MSGBOX_DEFAULT
# 1738 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1739 "data/maps/Colchis/scripts.pory"
	closemessage
# 1742 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumMedeaReturn_2
# 1745 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2B
Colchis_Script_SanctumMedeaReturn_1:
# 1747 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1749 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1750 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1753 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1754 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn2, MSGBOX_DEFAULT
# 1755 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1756 "data/maps/Colchis/scripts.pory"
	closemessage
# 1761 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1762 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn1, MSGBOX_DEFAULT
# 1763 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1767 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumMedeaReturn_6
Colchis_Script_SanctumMedeaReturn_5:
# 1777 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	return

Colchis_Script_SanctumMedeaReturn_2:
# 1743 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2A
	goto Colchis_Script_SanctumMedeaReturn_1

Colchis_Script_SanctumMedeaReturn_6:
# 1768 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1769 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1770 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1771 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn2, MSGBOX_DEFAULT
# 1772 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1773 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1774 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_SanctumMedeaReturn_5


Colchis_Script_SanctumJasonCheckMareep::
# 1784 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, IsShinyMareepInParty
# 1786 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_2
# 1791 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1792 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonGiveMeMareep, MSGBOX_DEFAULT
# 1793 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1795 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GiveJasonMareep, MSGBOX_YESNO
# 1797 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_5
# 1801 "data/maps/Colchis/scripts.pory"
	special ChoosePartyMon
# 1802 "data/maps/Colchis/scripts.pory"
	waitstate
# 1804 "data/maps/Colchis/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_8
# 1808 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1810 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, SPECIES_MAREEP
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_11
# 1814 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonIsShiny
# 1816 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_14
# 1820 "data/maps/Colchis/scripts.pory"
	special BufferMonNickname
# 1821 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GaveShinyMareep, MSGBOX_DEFAULT
# 1822 "data/maps/Colchis/scripts.pory"
	closemessage
# 1823 "data/maps/Colchis/scripts.pory"
	special ReleaseChosenMon
# 1825 "data/maps/Colchis/scripts.pory"
	setflag FLAG_JASON_HAS_SHINYMAREEP
Colchis_Script_SanctumJasonCheckMareep_1:
	return

Colchis_Script_SanctumJasonCheckMareep_2:
# 1787 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_5:
# 1798 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_8:
# 1805 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_11:
# 1811 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_14:
# 1817 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1


Colchis_Script_SanctumJasonMareep::
# 1838 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumApproachJason
# 1841 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	return


Colchis_Script_Exeunt::
# 1848 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 14
# 1850 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_Exeunt
# 1851 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_Exeunt
# 1852 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_Exeunt
# 1853 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1855 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_BIG_ISLAND_N, 31, 37
	end


Colchis_Script_SetupEscapeFromColchis::
# 1861 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1862 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumDepart, MSGBOX_DEFAULT
# 1863 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1864 "data/maps/Colchis/scripts.pory"
	closemessage
# 1867 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAndMedeaExeunt
# 1868 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_JasonAndMedeaExeunt
# 1869 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1873 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 14, 0
# 1874 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_INVISIBLE
# 1876 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 15, 0
# 1877 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 1879 "data/maps/Colchis/scripts.pory"
	hideobjectat 54, MAP_COLCHIS
# 1880 "data/maps/Colchis/scripts.pory"
	hideobjectat 4, MAP_COLCHIS
# 1882 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1883 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1890 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 16
# 1893 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_CloseDoor
# 1894 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1897 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupLostKid
# 1900 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_TrainerAeetes::
# 1913 "data/maps/Colchis/scripts.pory"
	lockall
# 1914 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1916 "data/maps/Colchis/scripts.pory"
	checktrainerflag TRAINER_AEETES
	goto_if 0, Colchis_Script_TrainerAeetes_2
# 1934 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1935 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1936 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
Colchis_Script_TrainerAeetes_1:
# 1938 "data/maps/Colchis/scripts.pory"
	closemessage
# 1939 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_TrainerAeetes_2:
# 1918 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1919 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesIntro, MSGBOX_DEFAULT
# 1920 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1921 "data/maps/Colchis/scripts.pory"
	closemessage
# 1922 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_AEETES, Colchis_Text_AeetesLost
# 1923 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1924 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesPost, MSGBOX_DEFAULT
# 1925 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1927 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_KEY
# 1929 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1930 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1931 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
	goto Colchis_Script_TrainerAeetes_1


Colchis_Script_Bed::
# 1944 "data/maps/Colchis/scripts.pory"
	lockall
# 1945 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Bed, MSGBOX_YESNO
# 1946 "data/maps/Colchis/scripts.pory"
	closemessage
# 1947 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Bed_2
Colchis_Script_Bed_1:
# 1950 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Bed_2:
# 1948 "data/maps/Colchis/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Colchis_Script_Bed_1


Colchis_Script_RingBlocker::
# 1955 "data/maps/Colchis/scripts.pory"
	lockall
# 1956 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1959 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerIntro, MSGBOX_DEFAULT
# 1961 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_KEY, 1
# 1966 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_RingBlocker_2
# 1997 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_RingBlocker_1:
# 2001 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_RingBlocker_2:
# 1967 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerYesNo, MSGBOX_YESNO
# 1968 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_RingBlocker_5
# 1993 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerDecline, MSGBOX_DEFAULT
# 1994 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_RingBlocker_1

Colchis_Script_RingBlocker_5:
# 1971 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_KeyFits, MSGBOX_DEFAULT
# 1972 "data/maps/Colchis/scripts.pory"
	closemessage
# 1973 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_KEY
# 1974 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1976 "data/maps/Colchis/scripts.pory"
	hideobjectat 55, MAP_COLCHIS
# 1977 "data/maps/Colchis/scripts.pory"
	removeobject 55
# 1978 "data/maps/Colchis/scripts.pory"
	hideobjectat 56, MAP_COLCHIS
# 1979 "data/maps/Colchis/scripts.pory"
	removeobject 56
# 1980 "data/maps/Colchis/scripts.pory"
	hideobjectat 57, MAP_COLCHIS
# 1981 "data/maps/Colchis/scripts.pory"
	removeobject 57
# 1983 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 55, MOVEMENT_TYPE_INVISIBLE
# 1984 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 55, 1, 3
# 1985 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 56, MOVEMENT_TYPE_INVISIBLE
# 1986 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 56, 2, 3
# 1987 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 57, MOVEMENT_TYPE_INVISIBLE
# 1988 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 57, 3, 3
# 1990 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBARRIER
	goto Colchis_Script_RingBlocker_1


Colchis_Script_RingItem::
# 2006 "data/maps/Colchis/scripts.pory"
	lock
# 2007 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2008 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_RING
# 2009 "data/maps/Colchis/scripts.pory"
	hideobjectat 58, MAP_COLCHIS
# 2010 "data/maps/Colchis/scripts.pory"
	removeobject 58
# 2011 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBALL
# 2012 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 58, MOVEMENT_TYPE_INVISIBLE
# 2013 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 58, 4, 3
# 2014 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_CloseDoor::
# 2019 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2020 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
	return


Colchis_Script_SetupLostKid::
# 2025 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2026 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 28, 12
# 2027 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_LOOK_AROUND
# 2028 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2029 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	return


Colchis_Script_ShowNannyWithGuard::
# 2034 "data/maps/Colchis/scripts.pory"
	removeobject 30
# 2035 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 30, 7, 50
# 2036 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_LEFT
# 2037 "data/maps/Colchis/scripts.pory"
	addobject 30
# 2038 "data/maps/Colchis/scripts.pory"
	showobjectat 30, MAP_COLCHIS
# 2040 "data/maps/Colchis/scripts.pory"
	removeobject 51
# 2041 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 51, 6, 50
# 2042 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 51, MOVEMENT_TYPE_FACE_RIGHT
# 2043 "data/maps/Colchis/scripts.pory"
	addobject 51
# 2044 "data/maps/Colchis/scripts.pory"
	showobjectat 51, MAP_COLCHIS
	return


Colchis_Script_Chef::
# 2050 "data/maps/Colchis/scripts.pory"
	lockall
# 2051 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2054 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Chef_2
# 2061 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Movement_ChefIntro, MSGBOX_DEFAULT
# 2062 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_RING
# 2063 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Chef_5
# 2094 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Chef_1:
# 2097 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Chef_2:
# 2055 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefProposal, MSGBOX_DEFAULT
# 2056 "data/maps/Colchis/scripts.pory"
	closemessage
# 2057 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_FaceRight
# 2058 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_5:
# 2064 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefRingYesNo, MSGBOX_YESNO
# 2065 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Chef_8
# 2090 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRingNo, MSGBOX_DEFAULT
# 2091 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_8:
# 2067 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_RING
# 2068 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefGaveRing, MSGBOX_DEFAULT
# 2069 "data/maps/Colchis/scripts.pory"
	closemessage
# 2071 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_ExclamationMark
# 2072 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2073 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks1, MSGBOX_DEFAULT
# 2074 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_APPLE
# 2076 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_ChefThanks2, MSGBOX_DEFAULT
# 2077 "data/maps/Colchis/scripts.pory"
	closemessage
# 2079 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2080 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Colchis_Script_Chef_12
Colchis_Script_Chef_11:
# 2084 "data/maps/Colchis/scripts.pory"
	applymovement 44, Colchis_Movement_ChefExit
# 2085 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2087 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_MOVECHEF
# 2088 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MoveChef
	goto Colchis_Script_Chef_1

Colchis_Script_Chef_12:
# 2081 "data/maps/Colchis/scripts.pory"
	applymovement 44, Common_Movement_WalkUp
# 2082 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Chef_11


Colchis_Script_MoveChef::
# 2102 "data/maps/Colchis/scripts.pory"
	removeobject 44
# 2103 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 44, 59, 62
# 2104 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 44, MOVEMENT_TYPE_FACE_RIGHT
# 2105 "data/maps/Colchis/scripts.pory"
	addobject 44
# 2106 "data/maps/Colchis/scripts.pory"
	showobjectat 44, MAP_COLCHIS
# 2108 "data/maps/Colchis/scripts.pory"
	removeobject 37
# 2109 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 37, 60, 62
# 2110 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_LEFT
# 2111 "data/maps/Colchis/scripts.pory"
	addobject 37
# 2112 "data/maps/Colchis/scripts.pory"
	showobjectat 37, MAP_COLCHIS
	return


Colchis_Script_Maid::
# 2118 "data/maps/Colchis/scripts.pory"
	lockall
# 2119 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2120 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_MOVECHEF, Colchis_Script_Maid_2
# 2126 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid1, MSGBOX_DEFAULT
# 2127 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Maid_1:
# 2129 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Maid_2:
# 2121 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Maid2, MSGBOX_DEFAULT
# 2122 "data/maps/Colchis/scripts.pory"
	closemessage
# 2123 "data/maps/Colchis/scripts.pory"
	applymovement 37, Common_Movement_FaceLeft
# 2124 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_Maid_1


Colchis_Script_Jailer::
# 2134 "data/maps/Colchis/scripts.pory"
	lockall
# 2135 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2142 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerIntro, MSGBOX_DEFAULT
# 2145 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_APPLE
# 2146 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_Jailer_2
# 2166 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_Jailer_1:
# 2168 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Jailer_2:
# 2147 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerAppleYesNo, MSGBOX_YESNO
# 2148 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Jailer_5
# 2162 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveAppleNo, MSGBOX_DEFAULT
# 2163 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1

Colchis_Script_Jailer_5:
# 2149 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_APPLE
# 2151 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerGaveApple, MSGBOX_DEFAULT
# 2152 "data/maps/Colchis/scripts.pory"
	closemessage
# 2154 "data/maps/Colchis/scripts.pory"
	applymovement 32, Common_Movement_ExclamationMark
# 2155 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2156 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks1, MSGBOX_DEFAULT
# 2157 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_JAIL_KEY
# 2159 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JailerThanks2, MSGBOX_DEFAULT
# 2160 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Jailer_1


Colchis_Script_PrisonDoor1::
# 2173 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Colchis_Script_PrisonDoor1_2
Colchis_Script_PrisonDoor1_1:
	end

Colchis_Script_PrisonDoor1_2:
# 2174 "data/maps/Colchis/scripts.pory"
	lockall
# 2176 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_A
# 2178 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2179 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2181 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2182 "data/maps/Colchis/scripts.pory"
	closemessage
# 2184 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2185 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2186 "data/maps/Colchis/scripts.pory"
	setmetatile 9, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2187 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2188 "data/maps/Colchis/scripts.pory"
	delay 30
# 2189 "data/maps/Colchis/scripts.pory"
	waitse
# 2190 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor1_1


Colchis_Script_PrisonDoor2::
# 2196 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_B, Colchis_Script_PrisonDoor2_2
Colchis_Script_PrisonDoor2_1:
	end

Colchis_Script_PrisonDoor2_2:
# 2197 "data/maps/Colchis/scripts.pory"
	lockall
# 2199 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_B
# 2201 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2202 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2204 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2205 "data/maps/Colchis/scripts.pory"
	closemessage
# 2207 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2208 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2209 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2210 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2211 "data/maps/Colchis/scripts.pory"
	delay 30
# 2212 "data/maps/Colchis/scripts.pory"
	waitse
# 2213 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor2_1


Colchis_Script_PrisonDoor3::
# 2219 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_TEMP_C, Colchis_Script_PrisonDoor3_2
Colchis_Script_PrisonDoor3_1:
	end

Colchis_Script_PrisonDoor3_2:
# 2220 "data/maps/Colchis/scripts.pory"
	lockall
# 2222 "data/maps/Colchis/scripts.pory"
	setflag FLAG_TEMP_C
# 2224 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 2225 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2227 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_PrisonDoorOpen, MSGBOX_DEFAULT
# 2228 "data/maps/Colchis/scripts.pory"
	closemessage
# 2230 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 2231 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 2232 "data/maps/Colchis/scripts.pory"
	setmetatile 27, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2233 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 2234 "data/maps/Colchis/scripts.pory"
	delay 30
# 2235 "data/maps/Colchis/scripts.pory"
	waitse
# 2236 "data/maps/Colchis/scripts.pory"
	releaseall
	goto Colchis_Script_PrisonDoor3_1


Colchis_Script_LostKid::
# 2242 "data/maps/Colchis/scripts.pory"
	lockall
# 2243 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2245 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_LostKid_2
# 2266 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid2, MSGBOX_DEFAULT
# 2267 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_LostKid_1:
# 2269 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_LostKid_2:
# 2246 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_LostKid1, MSGBOX_DEFAULT
# 2247 "data/maps/Colchis/scripts.pory"
	closemessage
# 2248 "data/maps/Colchis/scripts.pory"
	special GetPlayerFacingDirection
# 2249 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Colchis_Script_LostKid_6
# 2252 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit2
Colchis_Script_LostKid_5:
# 2254 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2256 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_RETURN_LOSTKID
# 2258 "data/maps/Colchis/scripts.pory"
	removeobject 49
# 2259 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 49, 5, 46
# 2260 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 49, MOVEMENT_TYPE_WANDER_AROUND
# 2261 "data/maps/Colchis/scripts.pory"
	addobject 49
# 2262 "data/maps/Colchis/scripts.pory"
	showobjectat 49, MAP_COLCHIS
	goto Colchis_Script_LostKid_1

Colchis_Script_LostKid_6:
# 2250 "data/maps/Colchis/scripts.pory"
	applymovement 49, Colchis_Movement_LostKidExit1
	goto Colchis_Script_LostKid_5


Colchis_Script_DoorMan::
# 2274 "data/maps/Colchis/scripts.pory"
	lockall
# 2275 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2278 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_RETURN_LOSTKID, Colchis_Script_DoorMan_2
# 2283 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 17
	goto_if_ne Colchis_Script_DoorMan_6
# 2291 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman3, MSGBOX_DEFAULT
# 2292 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_DoorMan_5:
# 2294 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceRight
Colchis_Script_DoorMan_1:
# 2296 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2297 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_DoorMan_2:
# 2279 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman1, MSGBOX_DEFAULT
# 2280 "data/maps/Colchis/scripts.pory"
	closemessage
# 2281 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceDown
	goto Colchis_Script_DoorMan_1

Colchis_Script_DoorMan_6:
# 2284 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 17
# 2285 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Doorman2, MSGBOX_DEFAULT
# 2286 "data/maps/Colchis/scripts.pory"
	closemessage
# 2287 "data/maps/Colchis/scripts.pory"
	setmetatile 10, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2288 "data/maps/Colchis/scripts.pory"
	setmetatile 11, 63, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 2289 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
	goto Colchis_Script_DoorMan_5


Colchis_Script_Nanny::
# 2303 "data/maps/Colchis/scripts.pory"
	lockall
# 2304 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2306 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 16
	goto_if_eq Colchis_Script_Nanny_2
# 2310 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny2, MSGBOX_DEFAULT
# 2311 "data/maps/Colchis/scripts.pory"
	closemessage
# 2312 "data/maps/Colchis/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 2313 "data/maps/Colchis/scripts.pory"
	waitmovement 0
Colchis_Script_Nanny_1:
# 2315 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Nanny_2:
# 2307 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Nanny1, MSGBOX_DEFAULT
# 2308 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_Nanny_1


Colchis_Script_GruntBreak::
# 2320 "data/maps/Colchis/scripts.pory"
	lockall
# 2321 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2322 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 2323 "data/maps/Colchis/scripts.pory"
	switch VAR_RESULT
# 2324 "data/maps/Colchis/scripts.pory"
	case 1, Colchis_Script_GruntBreak_3
# 2326 "data/maps/Colchis/scripts.pory"
	case 2, Colchis_Script_GruntBreak_4
# 2328 "data/maps/Colchis/scripts.pory"
	case 3, Colchis_Script_GruntBreak_5
# 2330 "data/maps/Colchis/scripts.pory"
	case 4, Colchis_Script_GruntBreak_6
# 2332 "data/maps/Colchis/scripts.pory"
	case 5, Colchis_Script_GruntBreak_7
# 2334 "data/maps/Colchis/scripts.pory"
	case 6, Colchis_Script_GruntBreak_8
# 2336 "data/maps/Colchis/scripts.pory"
	case 7, Colchis_Script_GruntBreak_9
# 2338 "data/maps/Colchis/scripts.pory"
	case 8, Colchis_Script_GruntBreak_10
# 2340 "data/maps/Colchis/scripts.pory"
	case 9, Colchis_Script_GruntBreak_11
# 2343 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak0, MSGBOX_DEFAULT
Colchis_Script_GruntBreak_1:
# 2345 "data/maps/Colchis/scripts.pory"
	closemessage
# 2346 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_GruntBreak_3:
# 2325 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak1, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_4:
# 2327 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak2, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_5:
# 2329 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak3, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_6:
# 2331 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak4, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_7:
# 2333 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak5, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_8:
# 2335 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak6, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_9:
# 2337 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak7, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_10:
# 2339 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak8, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1

Colchis_Script_GruntBreak_11:
# 2341 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreak9, MSGBOX_DEFAULT
	goto Colchis_Script_GruntBreak_1


Colchis_Script_Kid1::
# 2351 "data/maps/Colchis/scripts.pory"
	lock
# 2352 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2353 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid1, MSGBOX_DEFAULT
# 2354 "data/maps/Colchis/scripts.pory"
	closemessage
# 2355 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid2::
# 2360 "data/maps/Colchis/scripts.pory"
	lock
# 2361 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2362 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid2, MSGBOX_DEFAULT
# 2363 "data/maps/Colchis/scripts.pory"
	closemessage
# 2364 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Kid3::
# 2369 "data/maps/Colchis/scripts.pory"
	lock
# 2370 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2371 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Kid3, MSGBOX_DEFAULT
# 2372 "data/maps/Colchis/scripts.pory"
	closemessage
# 2373 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher1::
# 2378 "data/maps/Colchis/scripts.pory"
	lock
# 2379 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2380 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher1, MSGBOX_DEFAULT
# 2381 "data/maps/Colchis/scripts.pory"
	closemessage
# 2382 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Teacher2::
# 2387 "data/maps/Colchis/scripts.pory"
	lock
# 2388 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2389 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Teacher2, MSGBOX_DEFAULT
# 2390 "data/maps/Colchis/scripts.pory"
	closemessage
# 2391 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_Chef2::
# 2396 "data/maps/Colchis/scripts.pory"
	lock
# 2397 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2398 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Chef2, MSGBOX_DEFAULT
# 2399 "data/maps/Colchis/scripts.pory"
	closemessage
# 2400 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakL::
# 2405 "data/maps/Colchis/scripts.pory"
	lock
# 2406 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2407 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakL, MSGBOX_DEFAULT
# 2408 "data/maps/Colchis/scripts.pory"
	closemessage
# 2409 "data/maps/Colchis/scripts.pory"
	applymovement 39, Common_Movement_FaceRight
# 2410 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2411 "data/maps/Colchis/scripts.pory"
	release
	end


Colchis_Script_GruntBreakR::
# 2416 "data/maps/Colchis/scripts.pory"
	lock
# 2417 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2418 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntBreakR, MSGBOX_DEFAULT
# 2419 "data/maps/Colchis/scripts.pory"
	closemessage
# 2420 "data/maps/Colchis/scripts.pory"
	applymovement 38, Common_Movement_FaceLeft
# 2421 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 2422 "data/maps/Colchis/scripts.pory"
	release
	end


# 2427 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
# 2428 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2431 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 2432 "data/maps/Colchis/scripts.pory"
	walk_down
# 2432 "data/maps/Colchis/scripts.pory"
	walk_down
# 2432 "data/maps/Colchis/scripts.pory"
	walk_down
# 2432 "data/maps/Colchis/scripts.pory"
	walk_down
# 2432 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2435 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 2436 "data/maps/Colchis/scripts.pory"
	walk_up
# 2436 "data/maps/Colchis/scripts.pory"
	walk_up
# 2436 "data/maps/Colchis/scripts.pory"
	walk_up
# 2436 "data/maps/Colchis/scripts.pory"
	walk_up
# 2436 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2439 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitA:
# 2440 "data/maps/Colchis/scripts.pory"
	walk_up
# 2440 "data/maps/Colchis/scripts.pory"
	walk_up
# 2440 "data/maps/Colchis/scripts.pory"
	walk_up
# 2440 "data/maps/Colchis/scripts.pory"
	walk_up
# 2440 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2443 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitB:
# 2444 "data/maps/Colchis/scripts.pory"
	walk_down
# 2444 "data/maps/Colchis/scripts.pory"
	walk_down
# 2444 "data/maps/Colchis/scripts.pory"
	walk_down
# 2444 "data/maps/Colchis/scripts.pory"
	walk_down
# 2444 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2447 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2448 "data/maps/Colchis/scripts.pory"
	walk_up
# 2449 "data/maps/Colchis/scripts.pory"
	walk_right
# 2449 "data/maps/Colchis/scripts.pory"
	walk_right
# 2449 "data/maps/Colchis/scripts.pory"
	walk_right
# 2449 "data/maps/Colchis/scripts.pory"
	walk_right
# 2449 "data/maps/Colchis/scripts.pory"
	walk_right
# 2450 "data/maps/Colchis/scripts.pory"
	walk_up
# 2450 "data/maps/Colchis/scripts.pory"
	walk_up
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2451 "data/maps/Colchis/scripts.pory"
	walk_right
# 2452 "data/maps/Colchis/scripts.pory"
	walk_up
# 2452 "data/maps/Colchis/scripts.pory"
	walk_up
# 2452 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2455 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 2456 "data/maps/Colchis/scripts.pory"
	walk_up
# 2456 "data/maps/Colchis/scripts.pory"
	walk_up
# 2456 "data/maps/Colchis/scripts.pory"
	walk_up
# 2456 "data/maps/Colchis/scripts.pory"
	walk_up
# 2456 "data/maps/Colchis/scripts.pory"
	walk_up
# 2456 "data/maps/Colchis/scripts.pory"
	walk_up
# 2456 "data/maps/Colchis/scripts.pory"
	walk_up
# 2456 "data/maps/Colchis/scripts.pory"
	walk_up
# 2456 "data/maps/Colchis/scripts.pory"
	walk_up
# 2456 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2459 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 2460 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2463 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 2464 "data/maps/Colchis/scripts.pory"
	face_right
# 2465 "data/maps/Colchis/scripts.pory"
	face_up
# 2466 "data/maps/Colchis/scripts.pory"
	face_left
# 2467 "data/maps/Colchis/scripts.pory"
	face_down
# 2468 "data/maps/Colchis/scripts.pory"
	face_right
# 2469 "data/maps/Colchis/scripts.pory"
	face_up
# 2470 "data/maps/Colchis/scripts.pory"
	face_left
# 2471 "data/maps/Colchis/scripts.pory"
	face_down
# 2472 "data/maps/Colchis/scripts.pory"
	face_right
# 2473 "data/maps/Colchis/scripts.pory"
	face_up
# 2474 "data/maps/Colchis/scripts.pory"
	face_left
# 2475 "data/maps/Colchis/scripts.pory"
	face_down
# 2476 "data/maps/Colchis/scripts.pory"
	face_right
# 2477 "data/maps/Colchis/scripts.pory"
	face_up
# 2478 "data/maps/Colchis/scripts.pory"
	face_left
# 2479 "data/maps/Colchis/scripts.pory"
	face_down
# 2480 "data/maps/Colchis/scripts.pory"
	face_right
# 2481 "data/maps/Colchis/scripts.pory"
	face_up
# 2482 "data/maps/Colchis/scripts.pory"
	face_left
# 2483 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2486 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 2487 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2487 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2488 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2491 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 2492 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2492 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2493 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2496 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 2497 "data/maps/Colchis/scripts.pory"
	walk_left
# 2498 "data/maps/Colchis/scripts.pory"
	walk_up
# 2498 "data/maps/Colchis/scripts.pory"
	walk_up
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2499 "data/maps/Colchis/scripts.pory"
	walk_right
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2500 "data/maps/Colchis/scripts.pory"
	walk_down
# 2501 "data/maps/Colchis/scripts.pory"
	walk_left
# 2502 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2505 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 2506 "data/maps/Colchis/scripts.pory"
	walk_left
# 2507 "data/maps/Colchis/scripts.pory"
	walk_up
# 2507 "data/maps/Colchis/scripts.pory"
	walk_up
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2508 "data/maps/Colchis/scripts.pory"
	walk_right
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2509 "data/maps/Colchis/scripts.pory"
	walk_down
# 2510 "data/maps/Colchis/scripts.pory"
	walk_left
# 2511 "data/maps/Colchis/scripts.pory"
	face_down
# 2512 "data/maps/Colchis/scripts.pory"
	walk_left
# 2513 "data/maps/Colchis/scripts.pory"
	walk_up
# 2513 "data/maps/Colchis/scripts.pory"
	walk_up
# 2514 "data/maps/Colchis/scripts.pory"
	walk_right
# 2514 "data/maps/Colchis/scripts.pory"
	walk_right
# 2515 "data/maps/Colchis/scripts.pory"
	walk_down
# 2515 "data/maps/Colchis/scripts.pory"
	walk_down
# 2516 "data/maps/Colchis/scripts.pory"
	walk_left
# 2517 "data/maps/Colchis/scripts.pory"
	face_down
# 2518 "data/maps/Colchis/scripts.pory"
	walk_left
# 2519 "data/maps/Colchis/scripts.pory"
	walk_up
# 2519 "data/maps/Colchis/scripts.pory"
	walk_up
# 2520 "data/maps/Colchis/scripts.pory"
	walk_right
# 2520 "data/maps/Colchis/scripts.pory"
	walk_right
# 2521 "data/maps/Colchis/scripts.pory"
	walk_down
# 2521 "data/maps/Colchis/scripts.pory"
	walk_down
# 2522 "data/maps/Colchis/scripts.pory"
	walk_left
# 2523 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2526 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 2527 "data/maps/Colchis/scripts.pory"
	walk_down
# 2527 "data/maps/Colchis/scripts.pory"
	walk_down
# 2527 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2530 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 2531 "data/maps/Colchis/scripts.pory"
	walk_right
# 2531 "data/maps/Colchis/scripts.pory"
	walk_right
# 2532 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2535 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 2536 "data/maps/Colchis/scripts.pory"
	walk_left
# 2536 "data/maps/Colchis/scripts.pory"
	walk_left
# 2537 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2540 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 2541 "data/maps/Colchis/scripts.pory"
	walk_down
# 2542 "data/maps/Colchis/scripts.pory"
	face_left
# 2543 "data/maps/Colchis/scripts.pory"
	face_up
# 2544 "data/maps/Colchis/scripts.pory"
	face_right
# 2545 "data/maps/Colchis/scripts.pory"
	face_down
# 2546 "data/maps/Colchis/scripts.pory"
	walk_down
# 2547 "data/maps/Colchis/scripts.pory"
	face_left
# 2548 "data/maps/Colchis/scripts.pory"
	face_up
# 2549 "data/maps/Colchis/scripts.pory"
	face_right
# 2550 "data/maps/Colchis/scripts.pory"
	face_down
# 2551 "data/maps/Colchis/scripts.pory"
	walk_down
# 2552 "data/maps/Colchis/scripts.pory"
	face_left
# 2553 "data/maps/Colchis/scripts.pory"
	face_up
# 2554 "data/maps/Colchis/scripts.pory"
	face_right
# 2555 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2558 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 2559 "data/maps/Colchis/scripts.pory"
	walk_right
# 2560 "data/maps/Colchis/scripts.pory"
	walk_up
# 2561 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2562 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2565 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 2566 "data/maps/Colchis/scripts.pory"
	walk_left
# 2567 "data/maps/Colchis/scripts.pory"
	walk_up
# 2568 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2569 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2572 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 2573 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2574 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2577 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 2578 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2579 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2582 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 2583 "data/maps/Colchis/scripts.pory"
	walk_left
# 2584 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2587 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 2588 "data/maps/Colchis/scripts.pory"
	walk_right
# 2589 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2592 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 2593 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2594 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2597 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 2598 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2599 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2602 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 2603 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2606 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 2607 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 2610 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 2611 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 2615 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 2616 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 2619 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 2620 "data/maps/Colchis/scripts.pory"
	walk_up
# 2620 "data/maps/Colchis/scripts.pory"
	walk_up
# 2620 "data/maps/Colchis/scripts.pory"
	walk_up
# 2620 "data/maps/Colchis/scripts.pory"
	walk_up
# 2620 "data/maps/Colchis/scripts.pory"
	walk_up
# 2620 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2623 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 2624 "data/maps/Colchis/scripts.pory"
	walk_right
# 2624 "data/maps/Colchis/scripts.pory"
	walk_right
# 2624 "data/maps/Colchis/scripts.pory"
	walk_right
# 2624 "data/maps/Colchis/scripts.pory"
	walk_right
# 2624 "data/maps/Colchis/scripts.pory"
	walk_right
# 2624 "data/maps/Colchis/scripts.pory"
	walk_right
# 2624 "data/maps/Colchis/scripts.pory"
	walk_right
# 2624 "data/maps/Colchis/scripts.pory"
	walk_right
# 2625 "data/maps/Colchis/scripts.pory"
	walk_down
# 2625 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2628 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 2629 "data/maps/Colchis/scripts.pory"
	walk_right
# 2629 "data/maps/Colchis/scripts.pory"
	walk_right
# 2629 "data/maps/Colchis/scripts.pory"
	walk_right
# 2629 "data/maps/Colchis/scripts.pory"
	walk_right
# 2629 "data/maps/Colchis/scripts.pory"
	walk_right
# 2629 "data/maps/Colchis/scripts.pory"
	walk_right
# 2629 "data/maps/Colchis/scripts.pory"
	walk_right
# 2630 "data/maps/Colchis/scripts.pory"
	walk_down
# 2630 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2633 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 2634 "data/maps/Colchis/scripts.pory"
	walk_right
# 2634 "data/maps/Colchis/scripts.pory"
	walk_right
# 2634 "data/maps/Colchis/scripts.pory"
	walk_right
# 2634 "data/maps/Colchis/scripts.pory"
	walk_right
# 2634 "data/maps/Colchis/scripts.pory"
	walk_right
# 2634 "data/maps/Colchis/scripts.pory"
	walk_right
# 2635 "data/maps/Colchis/scripts.pory"
	walk_down
# 2635 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2638 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
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
	face_up
	step_end

# 2643 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 2644 "data/maps/Colchis/scripts.pory"
	walk_right
# 2644 "data/maps/Colchis/scripts.pory"
	walk_right
# 2644 "data/maps/Colchis/scripts.pory"
	walk_right
# 2644 "data/maps/Colchis/scripts.pory"
	walk_right
# 2644 "data/maps/Colchis/scripts.pory"
	walk_right
# 2644 "data/maps/Colchis/scripts.pory"
	walk_right
# 2644 "data/maps/Colchis/scripts.pory"
	walk_right
# 2645 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2648 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 2649 "data/maps/Colchis/scripts.pory"
	walk_right
# 2649 "data/maps/Colchis/scripts.pory"
	walk_right
# 2649 "data/maps/Colchis/scripts.pory"
	walk_right
# 2649 "data/maps/Colchis/scripts.pory"
	walk_right
# 2649 "data/maps/Colchis/scripts.pory"
	walk_right
# 2649 "data/maps/Colchis/scripts.pory"
	walk_right
# 2650 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2653 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2654 "data/maps/Colchis/scripts.pory"
	walk_up
# 2655 "data/maps/Colchis/scripts.pory"
	walk_right
# 2655 "data/maps/Colchis/scripts.pory"
	walk_right
# 2655 "data/maps/Colchis/scripts.pory"
	walk_right
# 2655 "data/maps/Colchis/scripts.pory"
	walk_right
# 2655 "data/maps/Colchis/scripts.pory"
	walk_right
# 2655 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2658 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 2659 "data/maps/Colchis/scripts.pory"
	walk_right
# 2659 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2662 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
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
# 2665 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2668 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 2669 "data/maps/Colchis/scripts.pory"
	walk_up
# 2669 "data/maps/Colchis/scripts.pory"
	walk_up
# 2669 "data/maps/Colchis/scripts.pory"
	walk_up
# 2669 "data/maps/Colchis/scripts.pory"
	walk_up
# 2669 "data/maps/Colchis/scripts.pory"
	walk_up
# 2669 "data/maps/Colchis/scripts.pory"
	walk_up
# 2669 "data/maps/Colchis/scripts.pory"
	walk_up
# 2669 "data/maps/Colchis/scripts.pory"
	walk_up
# 2669 "data/maps/Colchis/scripts.pory"
	walk_up
# 2669 "data/maps/Colchis/scripts.pory"
	walk_up
# 2669 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2672 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 2673 "data/maps/Colchis/scripts.pory"
	walk_up
# 2673 "data/maps/Colchis/scripts.pory"
	walk_up
# 2673 "data/maps/Colchis/scripts.pory"
	walk_up
# 2673 "data/maps/Colchis/scripts.pory"
	walk_up
# 2673 "data/maps/Colchis/scripts.pory"
	walk_up
# 2673 "data/maps/Colchis/scripts.pory"
	walk_up
# 2673 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2676 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 2677 "data/maps/Colchis/scripts.pory"
	walk_left
# 2678 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2681 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 2682 "data/maps/Colchis/scripts.pory"
	walk_up
# 2683 "data/maps/Colchis/scripts.pory"
	walk_right
# 2684 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2688 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 2689 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2692 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 2693 "data/maps/Colchis/scripts.pory"
	walk_right
# 2693 "data/maps/Colchis/scripts.pory"
	walk_right
# 2694 "data/maps/Colchis/scripts.pory"
	walk_down
# 2695 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2698 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 2699 "data/maps/Colchis/scripts.pory"
	walk_left
# 2700 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2703 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 2704 "data/maps/Colchis/scripts.pory"
	walk_right
# 2705 "data/maps/Colchis/scripts.pory"
	walk_up
# 2706 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2709 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 2710 "data/maps/Colchis/scripts.pory"
	walk_left
# 2711 "data/maps/Colchis/scripts.pory"
	walk_up
# 2712 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2715 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 2716 "data/maps/Colchis/scripts.pory"
	walk_down
# 2716 "data/maps/Colchis/scripts.pory"
	walk_down
# 2716 "data/maps/Colchis/scripts.pory"
	walk_down
# 2716 "data/maps/Colchis/scripts.pory"
	walk_down
# 2716 "data/maps/Colchis/scripts.pory"
	walk_down
# 2716 "data/maps/Colchis/scripts.pory"
	walk_down
# 2716 "data/maps/Colchis/scripts.pory"
	walk_down
# 2716 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2719 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 2720 "data/maps/Colchis/scripts.pory"
	walk_up
# 2720 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2723 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonApproachPlayer:
# 2724 "data/maps/Colchis/scripts.pory"
	walk_up
# 2724 "data/maps/Colchis/scripts.pory"
	walk_up
# 2724 "data/maps/Colchis/scripts.pory"
	walk_up
# 2724 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2727 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaPrisonExit:
# 2728 "data/maps/Colchis/scripts.pory"
	walk_down
# 2728 "data/maps/Colchis/scripts.pory"
	walk_down
# 2728 "data/maps/Colchis/scripts.pory"
	walk_down
# 2728 "data/maps/Colchis/scripts.pory"
	walk_down
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2729 "data/maps/Colchis/scripts.pory"
	walk_left
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2730 "data/maps/Colchis/scripts.pory"
	walk_down
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2731 "data/maps/Colchis/scripts.pory"
	walk_right
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2732 "data/maps/Colchis/scripts.pory"
	walk_down
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
# 2733 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2736 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonExit:
# 2737 "data/maps/Colchis/scripts.pory"
	walk_down
# 2737 "data/maps/Colchis/scripts.pory"
	walk_down
# 2737 "data/maps/Colchis/scripts.pory"
	walk_down
# 2737 "data/maps/Colchis/scripts.pory"
	walk_down
# 2737 "data/maps/Colchis/scripts.pory"
	walk_down
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2738 "data/maps/Colchis/scripts.pory"
	walk_left
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2739 "data/maps/Colchis/scripts.pory"
	walk_down
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2740 "data/maps/Colchis/scripts.pory"
	walk_right
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2741 "data/maps/Colchis/scripts.pory"
	walk_down
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
# 2742 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2745 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerPrisonExit:
# 2746 "data/maps/Colchis/scripts.pory"
	walk_down
# 2746 "data/maps/Colchis/scripts.pory"
	walk_down
# 2746 "data/maps/Colchis/scripts.pory"
	walk_down
# 2746 "data/maps/Colchis/scripts.pory"
	walk_down
# 2746 "data/maps/Colchis/scripts.pory"
	walk_down
# 2746 "data/maps/Colchis/scripts.pory"
	walk_down
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2747 "data/maps/Colchis/scripts.pory"
	walk_left
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2748 "data/maps/Colchis/scripts.pory"
	walk_down
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2749 "data/maps/Colchis/scripts.pory"
	walk_right
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2750 "data/maps/Colchis/scripts.pory"
	walk_down
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
# 2751 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2754 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 2755 "data/maps/Colchis/scripts.pory"
	walk_left
# 2755 "data/maps/Colchis/scripts.pory"
	walk_left
# 2755 "data/maps/Colchis/scripts.pory"
	walk_left
# 2756 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2759 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 2760 "data/maps/Colchis/scripts.pory"
	walk_down
# 2761 "data/maps/Colchis/scripts.pory"
	walk_right
# 2761 "data/maps/Colchis/scripts.pory"
	walk_right
# 2761 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2764 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 2765 "data/maps/Colchis/scripts.pory"
	walk_up
# 2765 "data/maps/Colchis/scripts.pory"
	walk_up
# 2765 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2768 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 2769 "data/maps/Colchis/scripts.pory"
	walk_up
# 2769 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2772 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3A:
# 2773 "data/maps/Colchis/scripts.pory"
	walk_up
# 2773 "data/maps/Colchis/scripts.pory"
	walk_up
# 2774 "data/maps/Colchis/scripts.pory"
	walk_right
# 2774 "data/maps/Colchis/scripts.pory"
	walk_right
# 2775 "data/maps/Colchis/scripts.pory"
	walk_up
# 2775 "data/maps/Colchis/scripts.pory"
	walk_up
# 2775 "data/maps/Colchis/scripts.pory"
	walk_up
# 2775 "data/maps/Colchis/scripts.pory"
	walk_up
# 2775 "data/maps/Colchis/scripts.pory"
	walk_up
# 2775 "data/maps/Colchis/scripts.pory"
	walk_up
# 2775 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2778 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3B:
# 2779 "data/maps/Colchis/scripts.pory"
	walk_up
# 2779 "data/maps/Colchis/scripts.pory"
	walk_up
# 2780 "data/maps/Colchis/scripts.pory"
	walk_right
# 2781 "data/maps/Colchis/scripts.pory"
	walk_up
# 2781 "data/maps/Colchis/scripts.pory"
	walk_up
# 2781 "data/maps/Colchis/scripts.pory"
	walk_up
# 2781 "data/maps/Colchis/scripts.pory"
	walk_up
# 2781 "data/maps/Colchis/scripts.pory"
	walk_up
# 2781 "data/maps/Colchis/scripts.pory"
	walk_up
# 2781 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2784 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3A:
# 2785 "data/maps/Colchis/scripts.pory"
	walk_down
# 2786 "data/maps/Colchis/scripts.pory"
	walk_right
# 2787 "data/maps/Colchis/scripts.pory"
	walk_down
# 2787 "data/maps/Colchis/scripts.pory"
	walk_down
# 2788 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2791 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3B:
# 2792 "data/maps/Colchis/scripts.pory"
	walk_down
# 2792 "data/maps/Colchis/scripts.pory"
	walk_down
# 2792 "data/maps/Colchis/scripts.pory"
	walk_down
# 2793 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2796 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn:
# 2797 "data/maps/Colchis/scripts.pory"
	walk_down
# 2797 "data/maps/Colchis/scripts.pory"
	walk_down
# 2797 "data/maps/Colchis/scripts.pory"
	walk_down
# 2797 "data/maps/Colchis/scripts.pory"
	walk_down
# 2797 "data/maps/Colchis/scripts.pory"
	walk_down
# 2797 "data/maps/Colchis/scripts.pory"
	walk_down
# 2797 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2800 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2A:
# 2801 "data/maps/Colchis/scripts.pory"
	walk_down
# 2802 "data/maps/Colchis/scripts.pory"
	walk_left
# 2802 "data/maps/Colchis/scripts.pory"
	walk_left
# 2803 "data/maps/Colchis/scripts.pory"
	walk_down
# 2804 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2807 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2B:
# 2808 "data/maps/Colchis/scripts.pory"
	walk_down
# 2809 "data/maps/Colchis/scripts.pory"
	walk_left
# 2810 "data/maps/Colchis/scripts.pory"
	walk_down
# 2811 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2814 "data/maps/Colchis/scripts.pory"
Colchis_Movement_Exeunt:
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2815 "data/maps/Colchis/scripts.pory"
	walk_right
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2816 "data/maps/Colchis/scripts.pory"
	walk_up
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2817 "data/maps/Colchis/scripts.pory"
	walk_left
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
# 2818 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2821 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAndMedeaExeunt:
# 2822 "data/maps/Colchis/scripts.pory"
	walk_down
# 2823 "data/maps/Colchis/scripts.pory"
	walk_right
# 2823 "data/maps/Colchis/scripts.pory"
	walk_right
# 2823 "data/maps/Colchis/scripts.pory"
	walk_right
# 2823 "data/maps/Colchis/scripts.pory"
	walk_right
# 2823 "data/maps/Colchis/scripts.pory"
	walk_right
# 2823 "data/maps/Colchis/scripts.pory"
	walk_right
# 2823 "data/maps/Colchis/scripts.pory"
	walk_right
# 2823 "data/maps/Colchis/scripts.pory"
	walk_right
# 2823 "data/maps/Colchis/scripts.pory"
	walk_right
# 2823 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2826 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ChefExit:
# 2827 "data/maps/Colchis/scripts.pory"
	walk_right
# 2827 "data/maps/Colchis/scripts.pory"
	walk_right
# 2827 "data/maps/Colchis/scripts.pory"
	walk_right
# 2827 "data/maps/Colchis/scripts.pory"
	walk_right
# 2827 "data/maps/Colchis/scripts.pory"
	walk_right
# 2827 "data/maps/Colchis/scripts.pory"
	walk_right
# 2827 "data/maps/Colchis/scripts.pory"
	walk_right
# 2827 "data/maps/Colchis/scripts.pory"
	walk_right
# 2827 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2830 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit1:
# 2831 "data/maps/Colchis/scripts.pory"
	walk_left
# 2832 "data/maps/Colchis/scripts.pory"
	walk_down
# 2832 "data/maps/Colchis/scripts.pory"
	walk_down
# 2832 "data/maps/Colchis/scripts.pory"
	walk_down
# 2832 "data/maps/Colchis/scripts.pory"
	walk_down
# 2833 "data/maps/Colchis/scripts.pory"
	walk_left
# 2833 "data/maps/Colchis/scripts.pory"
	walk_left
# 2833 "data/maps/Colchis/scripts.pory"
	walk_left
# 2833 "data/maps/Colchis/scripts.pory"
	walk_left
# 2833 "data/maps/Colchis/scripts.pory"
	walk_left
# 2833 "data/maps/Colchis/scripts.pory"
	walk_left
# 2833 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2836 "data/maps/Colchis/scripts.pory"
Colchis_Movement_LostKidExit2:
# 2837 "data/maps/Colchis/scripts.pory"
	walk_down
# 2838 "data/maps/Colchis/scripts.pory"
	walk_left
# 2839 "data/maps/Colchis/scripts.pory"
	walk_down
# 2839 "data/maps/Colchis/scripts.pory"
	walk_down
# 2839 "data/maps/Colchis/scripts.pory"
	walk_down
# 2840 "data/maps/Colchis/scripts.pory"
	walk_left
# 2840 "data/maps/Colchis/scripts.pory"
	walk_left
# 2840 "data/maps/Colchis/scripts.pory"
	walk_left
# 2840 "data/maps/Colchis/scripts.pory"
	walk_left
# 2840 "data/maps/Colchis/scripts.pory"
	walk_left
# 2840 "data/maps/Colchis/scripts.pory"
	walk_left
# 2840 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1506 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Script_SanctumMedeaReturn_Text_0:
# 1727 "data/maps/Colchis/scripts.pory"
	.string "OIMOIAY!\nOOIIMMOOIIAAYY!!$"

Colchis_Text_JasonIntro1::
# 2843 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 2847 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 2851 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 2855 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 2859 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 2863 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 2868 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 2873 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 2877 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 2881 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 2885 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 2894 "data/maps/Colchis/scripts.pory"
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
# 2899 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 2908 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 2912 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 2921 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 2927 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 2940 "data/maps/Colchis/scripts.pory"
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
# 2952 "data/maps/Colchis/scripts.pory"
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
# 2956 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 2960 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 2964 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 2968 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 2972 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 2976 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 2985 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 2989 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 3007 "data/maps/Colchis/scripts.pory"
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
# 3011 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 3016 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 3020 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 3024 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 3031 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 3035 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 3061 "data/maps/Colchis/scripts.pory"
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
# 3069 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 3073 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 3086 "data/maps/Colchis/scripts.pory"
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
# 3090 "data/maps/Colchis/scripts.pory"
	.string "Do not interrupt my private time with\n"
	.string "Medea 'till you bring shiny Mareep.$"

Colchis_Text_MedeaSanctumTrigger1::
# 3095 "data/maps/Colchis/scripts.pory"
	.string "Ememberray, ingbray onay armhay otay\n"
	.string "Ugialay.$"

Colchis_Text_JasonSanctumTrigger2::
# 3099 "data/maps/Colchis/scripts.pory"
	.string "Have you returned bringing Shiny\n"
	.string "Mareep?$"

Colchis_Text_MedeaSanctumTrigger2::
# 3104 "data/maps/Colchis/scripts.pory"
	.string "Ymay oughtsthay etraybay emay.\n"
	.string "Excuseay emay Asonjay, againstay ymay\l"
	.string "ownay adviceay Iay ustmay aketay\l"
	.string "eavelay ofay ouyay anday eesay atthay\l"
	.string "Ugialay isay afesay.$"

Colchis_Text_JasonSanctumTrigger3::
# 3108 "data/maps/Colchis/scripts.pory"
	.string "How could you fail? You only had one\n"
	.string "job! My quest has failed and it was all\l"
	.string "your fault! Now you will pay the price.\l"
	.string "Go Nosepass!$"

Colchis_Text_JasonLost::
# 3112 "data/maps/Colchis/scripts.pory"
	.string "I curse that day I saved you from the\n"
	.string "surf.$"

Colchis_Text_JasonPost::
# 3116 "data/maps/Colchis/scripts.pory"
	.string "The most wicked betrayal of all my\n"
	.string "life...$"

Colchis_Text_JasonGiveMeMareep::
# 3120 "data/maps/Colchis/scripts.pory"
	.string "I see that you have completed the\n"
	.string "quest. Give me shiny Mareep and let's be\l"
	.string "done.$"

Colchis_Text_GiveJasonMareep::
# 3124 "data/maps/Colchis/scripts.pory"
	.string "Will you give Jason shiny Mareep?$"

Colchis_Text_GaveShinyMareep::
# 3128 "data/maps/Colchis/scripts.pory"
	.string "You gave {STR_VAR_1} to Jason!\p"
	.string "Bye Bye {STR_VAR_1}!$"

Colchis_Text_CultistMPre::
# 3133 "data/maps/Colchis/scripts.pory"
	.string "Espassertray opstay! Allfay intoay\n"
	.string "othingnessnay$"

Colchis_Text_CultistMLost::
# 3138 "data/maps/Colchis/scripts.pory"
	.string "Ethay everlastingay arknessday\n"
	.string "overscay allay.$"

Colchis_Text_CultistMPost::
# 3143 "data/maps/Colchis/scripts.pory"
	.string "Ouyay aymay avehay onway utbay\n"
	.string "ou'llyay evernay escapeay.$"

Colchis_Text_MedeaSanctumReturn1::
# 3148 "data/maps/Colchis/scripts.pory"
	.string "Ouyay onstermay! Owhay ouldcay ouyay\n"
	.string "oday isthay otay emay?$"

Colchis_Text_MedeaSanctumReturn2::
# 3153 "data/maps/Colchis/scripts.pory"
	.string "Ymay ovelay, ehay ashay attackeday\n"
	.string "ymay Ugialay! Iay illway onay ongerlay\l"
	.string "elphay imhay eavelay Olchiscay.$"

Colchis_Text_JasonMedeaReturn1::
# 3157 "data/maps/Colchis/scripts.pory"
	.string "Please, do not cry beloved Medea. Lend\n"
	.string "love the power to hold back your tears.$"

Colchis_Text_JasonMedeaReturn2::
# 3161 "data/maps/Colchis/scripts.pory"
	.string "Hey, I apologize for Medea. I know she's\n"
	.string "acting up, but we're still cool. Give it\l"
	.string "some time I'll get her to cool down. When\l"
	.string "you get out meet me in Bulbus town and\l"
	.string "I'll repay you for shiny Mareep.$"

Colchis_Text_JasonSanctumWilds::
# 3165 "data/maps/Colchis/scripts.pory"
	.string "Alas! Medea! My quest for shiny Mareep\n"
	.string "has failed and now we're vagabonds.$"

Colchis_Text_JasonSanctumDepart::
# 3169 "data/maps/Colchis/scripts.pory"
	.string "Let us depart and leave this one\n"
	.string "behind.$"

Colchis_Text_Bed::
# 3173 "data/maps/Colchis/scripts.pory"
	.string "It's a big comfy bed!\n"
	.string "Would you like to take a rest?$"

Colchis_Text_RingBlockerIntro::
# 3177 "data/maps/Colchis/scripts.pory"
	.string "It's a large metal barrier with a keyhole\n"
	.string "in the center.$"

Colchis_Text_KeyFits::
# 3181 "data/maps/Colchis/scripts.pory"
	.string "The key fits into the keyhole!\n"
	.string "The barriers sink into the ground but\l"
	.string "the key broke off inside!$"

Colchis_Text_RingBlockerDecline::
# 3185 "data/maps/Colchis/scripts.pory"
	.string "Better not try using the key here.$"

Colchis_Text_RingBlockerYesNo::
# 3189 "data/maps/Colchis/scripts.pory"
	.string "Would you like to try using the Colchis\n"
	.string "Key?$"

Colchis_Text_AeetesIntro::
# 3198 "data/maps/Colchis/scripts.pory"
	.string "Ouryay insolentay invasionay ofay\n"
	.string "ouray airfay anday ightymay ingdomkay\l"
	.string "isay ownay atay anay enday. ouryay\l"
	.string "illway ownay earnlay ethay uetray\l"
	.string "owerpay ofay Ingkay Aeetesay.$"

Colchis_Text_AeetesLost::
# 3203 "data/maps/Colchis/scripts.pory"
	.string "Ownay ymay ingdomkay ashay allenfay.$"

Colchis_Text_AeetesPost::
# 3216 "data/maps/Colchis/scripts.pory"
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
# 3221 "data/maps/Colchis/scripts.pory"
	.string "Ymay ifelay ashay eenbay educedray\n"
	.string "otay aughtnay. Eavelay emay.$"

Colchis_Text_ChefProposal::
# 3225 "data/maps/Colchis/scripts.pory"
	.string "I'm nervous! Do you think she will say\n"
	.string "yes?$"

Colchis_Movement_ChefIntro::
# 3229 "data/maps/Colchis/scripts.pory"
	.string "Oh! What to do? I am madly in love with\n"
	.string "one of Colchis' most beautiful maids\l"
	.string "but worry I will lose her to someone\l"
	.string "more handsome and with more money than\l"
	.string "me. If only I had an engagement ring to\l"
	.string "give her in exchange for loyalty.$"

Colchis_Text_ChefRingYesNo::
# 3233 "data/maps/Colchis/scripts.pory"
	.string "Give Chef the Colchis Ring?$"

Colchis_Text_ChefGaveRing::
# 3237 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave Chef the Colchis Ring.$"

Colchis_Text_ChefThanks1::
# 3241 "data/maps/Colchis/scripts.pory"
	.string "Great Almighty! You're giving this to\n"
	.string "me? Take this Sweet Apple as token of\l"
	.string "thanks.$"

Colchis_Text_ChefThanks2::
# 3245 "data/maps/Colchis/scripts.pory"
	.string "I'm off now to proposition the maid.$"

Colchis_Text_ChefGaveRingNo::
# 3249 "data/maps/Colchis/scripts.pory"
	.string "Better not give him the ring.$"

Colchis_Text_Maid1::
# 3253 "data/maps/Colchis/scripts.pory"
	.string "Right now I am a maid but one day I will\n"
	.string "meet a foreign man and have his kids.$"

Colchis_Text_Maid2::
# 3257 "data/maps/Colchis/scripts.pory"
	.string "I'm starting to worry this creep likes\n"
	.string "me.$"

Colchis_Text_JailerIntro::
# 3270 "data/maps/Colchis/scripts.pory"
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
# 3274 "data/maps/Colchis/scripts.pory"
	.string "Give the Colchis Apple to the jailer?$"

Colchis_Text_JailerGaveApple::
# 3278 "data/maps/Colchis/scripts.pory"
	.string "{PLAYER} gave the jailer the Colchis\n"
	.string "Apple$"

Colchis_Text_JailerThanks1::
# 3284 "data/maps/Colchis/scripts.pory"
	.string "Aay Olchiscay apple? Ownay ere'sthay\n"
	.string "aay eetsway eattray! Ankthay ouyay!\l"
	.string "Ere'shay ethay ailjay eykay. Ocknay\l"
	.string "ourselfyay outay.$"

Colchis_Text_JailerThanks2::
# 3289 "data/maps/Colchis/scripts.pory"
	.string "Ebay arefulcay otnay otay ocklay\n"
	.string "ourselfyay inay ailjay. Ahay!$"

Colchis_Text_JailerGaveAppleNo::
# 3293 "data/maps/Colchis/scripts.pory"
	.string "Best not to give him the Apple now.$"

Colchis_Text_PrisonDoorOpen::
# 3297 "data/maps/Colchis/scripts.pory"
	.string "The Colchis Prison Key unlocked the\n"
	.string "door!$"

Colchis_Text_LostKid1::
# 3301 "data/maps/Colchis/scripts.pory"
	.string "Hey! Thanks for finding me! I was\n"
	.string "starting to get scared but I'll go back\l"
	.string "to where I belong now.$"

Colchis_Text_LostKid2::
# 3305 "data/maps/Colchis/scripts.pory"
	.string "I love playing with my friends again.$"

Colchis_Text_Doorman1::
# 3319 "data/maps/Colchis/scripts.pory"
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
# 3324 "data/maps/Colchis/scripts.pory"
	.string "Ankthay ouyay orfay ingingbray usay\n"
	.string "ackbay ogethertay. Ethay oorday isay\l"
	.string "openay. Arewellfay.$"

Colchis_Text_Doorman3::
# 3329 "data/maps/Colchis/scripts.pory"
	.string "Anksthay againay.$"

Colchis_Text_Nanny1::
# 3333 "data/maps/Colchis/scripts.pory"
	.string "Oh no! How terrible! I'm freaking out\n"
	.string "because I lost another one. What if I\l"
	.string "get caught swapping out another kid?\l"
	.string "When they're infants they usually can't\l"
	.string "tell but this one was older...What can I\l"
	.string "do?$"

Colchis_Text_Nanny2::
# 3337 "data/maps/Colchis/scripts.pory"
	.string "Oh! Thanks for finding that lost kid for\n"
	.string "me. I feel like I can finally exhale. I\l"
	.string "had been so stressed out I hadn't been\l"
	.string "able to come socialize with my man.$"

Colchis_Text_GruntBreak1::
# 3342 "data/maps/Colchis/scripts.pory"
	.string "Iay asway ustjay inkingthay aboutay\n"
	.string "ymay etpay atcay.$"

Colchis_Text_GruntBreak2::
# 3347 "data/maps/Colchis/scripts.pory"
	.string "Iay oday otnay inkthay eetingsmay\n"
	.string "areay oductivepray.$"

Colchis_Text_GruntBreak3::
# 3352 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay interrupay emay ingebay\n"
	.string "eatingay ipschay.$"

Colchis_Text_GruntBreak4::
# 3357 "data/maps/Colchis/scripts.pory"
	.string "I'may onay ymay eakbray, asay\n"
	.string "Olchiscay' awlay andatesmay.$"

Colchis_Text_GruntBreak5::
# 3362 "data/maps/Colchis/scripts.pory"
	.string "Ymay eakbray imetay isay ymay\n"
	.string "erapythay essionsay.$"

Colchis_Text_GruntBreak6::
# 3367 "data/maps/Colchis/scripts.pory"
	.string "I'may otnay azylay! I'may eparingpray\n"
	.string "otay orkway.$"

Colchis_Text_GruntBreak7::
# 3372 "data/maps/Colchis/scripts.pory"
	.string "Eythey aysay atthay eaksbray areay\n"
	.string "ikelay ugshay orfay ouryay oulsay.$"

Colchis_Text_GruntBreak8::
# 3377 "data/maps/Colchis/scripts.pory"
	.string "I'may otnay ignoringay ouyay. I'may\n"
	.string "ustjay estingray.$"

Colchis_Text_GruntBreak9::
# 3382 "data/maps/Colchis/scripts.pory"
	.string "On'tday elltay ymay ossbay I'veay\n"
	.string "eenbay erehay orfay ourshay.$"

Colchis_Text_GruntBreak0::
# 3387 "data/maps/Colchis/scripts.pory"
	.string "Amay Iay upposedsay otay ebay\n"
	.string "alkingtay otay ouyay?$"

Colchis_Text_Kid1::
# 3391 "data/maps/Colchis/scripts.pory"
	.string "Baby shark doo doo doo doo doo doo\n"
	.string "baby shark doo doo doo doo doo doo\l"
	.string "baby shark doo doo doo doo doo baby\l"
	.string "shark!$"

Colchis_Text_Kid2::
# 3395 "data/maps/Colchis/scripts.pory"
	.string "I love Pikachu! He's an electric Pokemon\n"
	.string "and he's my favorite! I wish I had a pet\l"
	.string "Pikachu but I think my mom would say\l"
	.string "no...Maybe one day...$"

Colchis_Text_Kid3::
# 3399 "data/maps/Colchis/scripts.pory"
	.string "Have you ever had a dream so that so\n"
	.string "that you um you had you you would you\l"
	.string "could you'll do you went you want you\l"
	.string "you could do so you you do you could\l"
	.string "you you want you want him to do you so\l"
	.string "much you could do anything?$"

Colchis_Text_Teacher1::
# 3403 "data/maps/Colchis/scripts.pory"
	.string "The youth is lost! They pay no\n"
	.string "attention to anything of value or\l"
	.string "substance.$"

Colchis_Text_Teacher2::
# 3407 "data/maps/Colchis/scripts.pory"
	.string "Even though teaching can be\n"
	.string "exhausting it's an honor to help\l"
	.string "nurture young minds.$"

Colchis_Text_Chef2::
# 3411 "data/maps/Colchis/scripts.pory"
	.string "I'm not crying! No! Just peeling onions!\n"
	.string "Not thinking 'bout the girl who left me!\l"
	.string "No!$"

Colchis_Text_GruntBreakL::
# 3416 "data/maps/Colchis/scripts.pory"
	.string "E'reway otnay arguinay. I'may ovingpray\n"
	.string "I'may ightray.$"

Colchis_Text_GruntBreakR::
# 3421 "data/maps/Colchis/scripts.pory"
	.string "Atthay uy'sgay anay assay, anay assay\n"
	.string "at'sthay ullfay ofay itshay.$"
