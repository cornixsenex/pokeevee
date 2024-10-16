Colchis_MapScripts::
# 92 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 98 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 109 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME
# 123 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 93 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 94 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupJail
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME:
# 111 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_MAREEP, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2
Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 116 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 112 "data/maps/Colchis/scripts.pory"
	hideobjectat 2, MAP_COLCHIS
# 113 "data/maps/Colchis/scripts.pory"
	removeobject 2
	goto Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 117 "data/maps/Colchis/scripts.pory"
	hideobjectat 1, MAP_COLCHIS
# 118 "data/maps/Colchis/scripts.pory"
	removeobject 1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 124 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
# 126 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_WarpSanctum::
# 135 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 136 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 34, 56
	end


Colchis_TempScript_SetupTestMedeaDance::
# 141 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 142 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 148 "data/maps/Colchis/scripts.pory"
	lockall
# 149 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 150 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SetupJail::
# 155 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 156 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 157 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
# 158 "data/maps/Colchis/scripts.pory"
	addobject 54
# 159 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 166 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 167 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 168 "data/maps/Colchis/scripts.pory"
	closemessage
# 169 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 177 "data/maps/Colchis/scripts.pory"
	lockall
# 179 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 181 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 182 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 183 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 184 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 185 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 186 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 189 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 190 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 191 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 194 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 195 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 196 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 201 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 202 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 203 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 206 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 207 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 208 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 209 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 210 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 211 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 212 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 213 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 214 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 215 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 216 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 217 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 218 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 219 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 220 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 221 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 222 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 225 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 226 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 227 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 228 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 229 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 230 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 231 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 232 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 233 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 234 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 235 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 236 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 237 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 240 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 241 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 242 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 245 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 246 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 247 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 251 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 252 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 253 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 254 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 255 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 256 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 257 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 258 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 259 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 260 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 262 "data/maps/Colchis/scripts.pory"
	closemessage
# 264 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 272 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 273 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 274 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 275 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 276 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 277 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 278 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 279 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 280 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 283 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 284 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 285 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 287 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 288 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 289 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 290 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 291 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 292 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 293 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 297 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 304 "data/maps/Colchis/scripts.pory"
	lockall
# 305 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 307 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 314 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 315 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 316 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 318 "data/maps/Colchis/scripts.pory"
	addobject 23
# 319 "data/maps/Colchis/scripts.pory"
	addobject 24
# 321 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 322 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 326 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 327 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 329 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 330 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 331 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 334 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 335 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPre, MSGBOX_DEFAULT
# 336 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 337 "data/maps/Colchis/scripts.pory"
	closemessage
# 340 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
# 343 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 344 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPost, MSGBOX_DEFAULT
# 345 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 346 "data/maps/Colchis/scripts.pory"
	closemessage
# 349 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleExitA
# 350 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleExitB
# 351 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 354 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 355 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 357 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 23, 0, 0
# 358 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 24, 2, 0
# 360 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_FACE_DOWN
# 361 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_UP
# 363 "data/maps/Colchis/scripts.pory"
	addobject 23
# 364 "data/maps/Colchis/scripts.pory"
	addobject 24
# 366 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 367 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
	return


Colchis_Script_MedeaDance::
# 377 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 378 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 379 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 384 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 385 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 386 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 387 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 388 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 389 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 390 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 391 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 392 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 393 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 394 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 395 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 396 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 397 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 398 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 399 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 400 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 401 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 410 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 411 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 412 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 413 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 414 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 415 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 416 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 418 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 420 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 421 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 422 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 424 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 426 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 427 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 430 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 436 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 437 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 438 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 439 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 440 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 441 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 442 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 444 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 446 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 447 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 448 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 449 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 450 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 452 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 454 "data/maps/Colchis/scripts.pory"
	delay 25
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
	waitmovement 16
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
# 474 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 475 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 477 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 479 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 480 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 481 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 482 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 483 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 484 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 486 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 488 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 489 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 490 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 491 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 492 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 494 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 496 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 497 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 498 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 499 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 500 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
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
	waitmovement 16
# 524 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 525 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 526 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 527 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 528 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 529 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 530 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 532 "data/maps/Colchis/scripts.pory"
	waitmovement 4
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
# 540 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 546 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 552 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 553 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 554 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 555 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 556 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 557 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 558 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 560 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 565 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 571 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 572 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 573 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 574 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 575 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 576 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 577 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 579 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 585 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 588 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 597 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 598 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 599 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 600 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 601 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 602 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 603 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 605 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 607 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 608 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 609 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 610 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 611 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 612 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 613 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 615 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 620 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 624 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 625 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 626 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 627 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 628 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 629 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 630 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 632 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 634 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 635 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 636 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 637 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 638 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 639 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 640 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 642 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 644 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 648 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 649 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 650 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 651 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 652 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 653 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 654 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 656 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 658 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 659 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 660 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 661 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 662 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 663 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 664 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 666 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 668 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 672 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 673 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 674 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 675 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 676 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 677 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 678 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 680 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 682 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 683 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 684 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 685 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 686 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 687 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 688 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 690 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 692 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 702 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 703 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 704 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 705 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 706 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 707 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 708 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 709 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 711 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 713 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 715 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 716 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 717 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 718 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 719 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 720 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 721 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 722 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 724 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 726 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 728 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 729 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 730 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 731 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 732 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 733 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 734 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 735 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 737 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 739 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 746 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 747 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 748 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 749 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 750 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 751 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 752 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 753 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 755 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 756 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 758 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 759 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 762 "data/maps/Colchis/scripts.pory"
	delay 25
# 766 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 767 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 771 "data/maps/Colchis/scripts.pory"
	delay 25
# 773 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 774 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 778 "data/maps/Colchis/scripts.pory"
	delay 25
# 780 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 781 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 785 "data/maps/Colchis/scripts.pory"
	delay 25
# 787 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 788 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 789 "data/maps/Colchis/scripts.pory"
	delay 25
# 794 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 795 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 796 "data/maps/Colchis/scripts.pory"
	delay 25
# 798 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 799 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 800 "data/maps/Colchis/scripts.pory"
	delay 25
# 805 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 806 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 807 "data/maps/Colchis/scripts.pory"
	delay 25
# 809 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 810 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 811 "data/maps/Colchis/scripts.pory"
	delay 25
# 813 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 814 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 815 "data/maps/Colchis/scripts.pory"
	delay 25
# 817 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 818 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 819 "data/maps/Colchis/scripts.pory"
	delay 25
# 824 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 825 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 826 "data/maps/Colchis/scripts.pory"
	delay 25
# 828 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 829 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 830 "data/maps/Colchis/scripts.pory"
	delay 25
# 832 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 833 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 834 "data/maps/Colchis/scripts.pory"
	delay 25
# 836 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 837 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 838 "data/maps/Colchis/scripts.pory"
	delay 25
# 840 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 842 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 843 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 844 "data/maps/Colchis/scripts.pory"
	delay 25
# 849 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 850 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 851 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 852 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 853 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 854 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 855 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 856 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 858 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 869 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 870 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 871 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 872 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 873 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 874 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 875 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 876 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 877 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 882 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 883 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 884 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 885 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 886 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 887 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 888 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 889 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 890 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 895 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 896 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 897 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 898 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 899 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 900 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 901 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 902 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 903 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 908 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 909 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 910 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 911 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 912 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 913 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 914 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 915 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 916 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 921 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 922 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 923 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 924 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 925 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 926 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 927 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 928 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 929 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 934 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 935 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 936 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 937 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 938 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 939 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 940 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 941 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 942 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 947 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 948 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 949 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 950 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 951 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 952 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 953 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 954 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 955 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 960 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 961 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 962 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 963 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 964 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 965 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 966 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 967 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 968 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 973 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 974 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 975 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 976 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 977 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 978 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 979 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 980 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 981 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 983 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 984 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 985 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 986 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 987 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 988 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 989 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 990 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 991 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 993 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 994 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 995 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 996 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 997 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 998 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 999 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1001 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1004 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1005 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1006 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1007 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1009 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1010 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1011 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1016 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1017 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1019 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1021 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1028 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1029 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1030 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1031 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1032 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1033 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1034 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1035 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1040 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1041 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1042 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1043 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1044 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1045 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1046 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1047 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1048 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1049 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1050 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1051 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1052 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1053 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1054 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1055 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1056 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1061 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1062 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1063 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1064 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1065 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1066 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1067 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1071 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
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
	applymovement 13, Common_Movement_WalkRight
# 1078 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 13, Common_Movement_WalkLeft
# 1085 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
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
	applymovement 13, Common_Movement_WalkRight
# 1092 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 13, Common_Movement_WalkLeft
# 1099 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
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
	applymovement 13, Common_Movement_WalkRight
# 1106 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 13, Common_Movement_WalkLeft
# 1113 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1114 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1115 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1116 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1117 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_Aeetes::
# 1129 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1130 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea1, MSGBOX_DEFAULT
# 1131 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1136 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1137 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes1, MSGBOX_DEFAULT
# 1138 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1139 "data/maps/Colchis/scripts.pory"
	closemessage
# 1141 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1145 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1146 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 51, 13
# 1147 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_UP
# 1148 "data/maps/Colchis/scripts.pory"
	addobject 54
# 1149 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
# 1151 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonApproachAeetes
# 1152 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonApproachAeetes
# 1153 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1155 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaFaceAeetes
# 1156 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonFaceAeetes
# 1157 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerFaceAeetes
# 1158 "data/maps/Colchis/scripts.pory"
	waitmovement 54
# 1167 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1168 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1169 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1174 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1175 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1176 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1183 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1184 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1185 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1190 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1191 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1192 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1201 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1202 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1203 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1204 "data/maps/Colchis/scripts.pory"
	closemessage
# 1207 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1208 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1209 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1218 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1219 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1220 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1225 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1226 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1227 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1230 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1231 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1232 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1233 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1234 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1238 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1239 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1240 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1244 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1245 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1246 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1248 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1249 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1250 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1254 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1255 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1257 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1258 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1264 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1265 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1266 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1267 "data/maps/Colchis/scripts.pory"
	closemessage
# 1270 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1271 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1274 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1275 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1283 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1289 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1290 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1291 "data/maps/Colchis/scripts.pory"
	closemessage
# 1292 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1295 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1296 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1299 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1300 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1301 "data/maps/Colchis/scripts.pory"
	closemessage
# 1302 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1305 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1306 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1307 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1308 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1311 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1312 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1313 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1314 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1315 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1318 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1319 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1320 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1321 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1322 "data/maps/Colchis/scripts.pory"
	delay 30
# 1323 "data/maps/Colchis/scripts.pory"
	waitse
# 1326 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonApproachPlayer
# 1327 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1330 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1331 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1332 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1335 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1336 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1337 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1340 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1341 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1342 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1345 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1346 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1347 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1350 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1351 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1352 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1354 "data/maps/Colchis/scripts.pory"
	closemessage
# 1357 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1358 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1361 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1362 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1363 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1364 "data/maps/Colchis/scripts.pory"
	closemessage
# 1367 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1368 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1371 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1372 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1373 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1376 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1377 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1378 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1380 "data/maps/Colchis/scripts.pory"
	closemessage
# 1384 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonExit
# 1385 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_JasonPrisonExit
# 1386 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_PlayerPrisonExit
# 1387 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1389 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1397 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1398 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1401 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1402 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1403 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1405 "data/maps/Colchis/scripts.pory"
	closemessage
# 1408 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1409 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1412 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1413 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1414 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1415 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1416 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1419 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1420 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 0
# 1421 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1422 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 20, 3, 0
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
# 1631 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1632 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1633 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumTriggerMedeaExit::
# 1638 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1639 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger2, MSGBOX_DEFAULT
# 1640 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1641 "data/maps/Colchis/scripts.pory"
	closemessage
# 1642 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTriggerMedeaExit_2
# 1645 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3B
Colchis_Script_SanctumTriggerMedeaExit_1:
# 1647 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumTriggerMedeaExit_2:
# 1643 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3A
	goto Colchis_Script_SanctumTriggerMedeaExit_1


Colchis_Script_LugiaChaseTrigger::
# 1652 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1653 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaChaseTrigger_2
Colchis_Script_LugiaChaseTrigger_1:
	end

Colchis_Script_LugiaChaseTrigger_2:
# 1654 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	goto Colchis_Script_LugiaChaseTrigger_1


Colchis_Script_LugiaWanderTrigger::
# 1660 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1661 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaWanderTrigger_2
Colchis_Script_LugiaWanderTrigger_1:
	end

Colchis_Script_LugiaWanderTrigger_2:
# 1662 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	goto Colchis_Script_LugiaWanderTrigger_1


Colchis_Script_ShinyMareep::
# 1668 "data/maps/Colchis/scripts.pory"
	lockall
# 1669 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1670 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 1671 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1672 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1673 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1674 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1675 "data/maps/Colchis/scripts.pory"
	waitstate
# 1676 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1677 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1678 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumApproachJason::
# 1683 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumApproachJason_2
# 1686 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3B
Colchis_Script_SanctumApproachJason_1:
# 1688 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1690 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1691 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumApproachJason_2:
# 1684 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3A
	goto Colchis_Script_SanctumApproachJason_1


Colchis_Script_SanctumJasonBattle::
# 1697 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1698 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1700 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1701 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger3, MSGBOX_DEFAULT
# 1702 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1703 "data/maps/Colchis/scripts.pory"
	closemessage
# 1705 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_JASON, Colchis_Text_JasonLost
# 1707 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1708 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPost, MSGBOX_DEFAULT
# 1709 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumMedeaReturn::
# 1716 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1717 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1718 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1720 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1721 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1722 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1725 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1726 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumMedeaReturn_Text_0, MSGBOX_DEFAULT
# 1727 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1728 "data/maps/Colchis/scripts.pory"
	closemessage
# 1731 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn
# 1732 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1735 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1736 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn1, MSGBOX_DEFAULT
# 1737 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1738 "data/maps/Colchis/scripts.pory"
	closemessage
# 1741 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumMedeaReturn_2
# 1744 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2B
Colchis_Script_SanctumMedeaReturn_1:
# 1746 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1748 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1749 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1752 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1753 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn2, MSGBOX_DEFAULT
# 1754 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1755 "data/maps/Colchis/scripts.pory"
	closemessage
# 1760 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1761 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn1, MSGBOX_DEFAULT
# 1762 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1766 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumMedeaReturn_6
Colchis_Script_SanctumMedeaReturn_5:
# 1776 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	return

Colchis_Script_SanctumMedeaReturn_2:
# 1742 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2A
	goto Colchis_Script_SanctumMedeaReturn_1

Colchis_Script_SanctumMedeaReturn_6:
# 1767 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1768 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1769 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1770 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn2, MSGBOX_DEFAULT
# 1771 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1772 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1773 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_SanctumMedeaReturn_5


Colchis_Script_SanctumJasonCheckMareep::
# 1783 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, IsShinyMareepInParty
# 1785 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_2
# 1790 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1791 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonGiveMeMareep, MSGBOX_DEFAULT
# 1792 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1794 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GiveJasonMareep, MSGBOX_YESNO
# 1796 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_5
# 1800 "data/maps/Colchis/scripts.pory"
	special ChoosePartyMon
# 1801 "data/maps/Colchis/scripts.pory"
	waitstate
# 1803 "data/maps/Colchis/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_8
# 1807 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1809 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, SPECIES_MAREEP
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_11
# 1813 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonIsShiny
# 1815 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_14
# 1819 "data/maps/Colchis/scripts.pory"
	special BufferMonNickname
# 1820 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GaveShinyMareep, MSGBOX_DEFAULT
# 1821 "data/maps/Colchis/scripts.pory"
	closemessage
# 1822 "data/maps/Colchis/scripts.pory"
	special ReleaseChosenMon
# 1824 "data/maps/Colchis/scripts.pory"
	setflag FLAG_JASON_HAS_SHINYMAREEP
Colchis_Script_SanctumJasonCheckMareep_1:
	return

Colchis_Script_SanctumJasonCheckMareep_2:
# 1786 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_5:
# 1797 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_8:
# 1804 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_11:
# 1810 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_14:
# 1816 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1


Colchis_Script_SanctumJasonMareep::
# 1837 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumApproachJason
# 1840 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	return


Colchis_Script_Exeunt::
# 1847 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 14
# 1849 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_Exeunt
# 1850 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_Exeunt
# 1851 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_Exeunt
# 1852 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1854 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_BIG_ISLAND_N, 31, 37
	end


Colchis_Script_SetupEscapeFromColchis::
# 1860 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1861 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumDepart, MSGBOX_DEFAULT
# 1862 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1863 "data/maps/Colchis/scripts.pory"
	closemessage
# 1866 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAndMedeaExeunt
# 1867 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_JasonAndMedeaExeunt
# 1868 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1872 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 14, 0
# 1873 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_INVISIBLE
# 1875 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 15, 0
# 1876 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 1878 "data/maps/Colchis/scripts.pory"
	hideobjectat 54, MAP_COLCHIS
# 1879 "data/maps/Colchis/scripts.pory"
	hideobjectat 4, MAP_COLCHIS
# 1881 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1882 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1885 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_FORCED_BATTLE
# 1888 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_TrainerAeetes::
# 1901 "data/maps/Colchis/scripts.pory"
	lockall
# 1902 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1904 "data/maps/Colchis/scripts.pory"
	releaseall
	end


# 1908 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 1909 "data/maps/Colchis/scripts.pory"
	walk_up
# 1909 "data/maps/Colchis/scripts.pory"
	walk_up
# 1909 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1912 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 1913 "data/maps/Colchis/scripts.pory"
	walk_down
# 1913 "data/maps/Colchis/scripts.pory"
	walk_down
# 1913 "data/maps/Colchis/scripts.pory"
	walk_down
# 1913 "data/maps/Colchis/scripts.pory"
	walk_down
# 1913 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1916 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 1917 "data/maps/Colchis/scripts.pory"
	walk_up
# 1917 "data/maps/Colchis/scripts.pory"
	walk_up
# 1917 "data/maps/Colchis/scripts.pory"
	walk_up
# 1917 "data/maps/Colchis/scripts.pory"
	walk_up
# 1917 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1920 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitA:
# 1921 "data/maps/Colchis/scripts.pory"
	walk_up
# 1921 "data/maps/Colchis/scripts.pory"
	walk_up
# 1921 "data/maps/Colchis/scripts.pory"
	walk_up
# 1921 "data/maps/Colchis/scripts.pory"
	walk_up
# 1921 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1924 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitB:
# 1925 "data/maps/Colchis/scripts.pory"
	walk_down
# 1925 "data/maps/Colchis/scripts.pory"
	walk_down
# 1925 "data/maps/Colchis/scripts.pory"
	walk_down
# 1925 "data/maps/Colchis/scripts.pory"
	walk_down
# 1925 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1928 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1929 "data/maps/Colchis/scripts.pory"
	walk_up
# 1930 "data/maps/Colchis/scripts.pory"
	walk_right
# 1930 "data/maps/Colchis/scripts.pory"
	walk_right
# 1930 "data/maps/Colchis/scripts.pory"
	walk_right
# 1930 "data/maps/Colchis/scripts.pory"
	walk_right
# 1930 "data/maps/Colchis/scripts.pory"
	walk_right
# 1931 "data/maps/Colchis/scripts.pory"
	walk_up
# 1931 "data/maps/Colchis/scripts.pory"
	walk_up
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1932 "data/maps/Colchis/scripts.pory"
	walk_right
# 1933 "data/maps/Colchis/scripts.pory"
	walk_up
# 1933 "data/maps/Colchis/scripts.pory"
	walk_up
# 1933 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1936 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 1937 "data/maps/Colchis/scripts.pory"
	walk_up
# 1937 "data/maps/Colchis/scripts.pory"
	walk_up
# 1937 "data/maps/Colchis/scripts.pory"
	walk_up
# 1937 "data/maps/Colchis/scripts.pory"
	walk_up
# 1937 "data/maps/Colchis/scripts.pory"
	walk_up
# 1937 "data/maps/Colchis/scripts.pory"
	walk_up
# 1937 "data/maps/Colchis/scripts.pory"
	walk_up
# 1937 "data/maps/Colchis/scripts.pory"
	walk_up
# 1937 "data/maps/Colchis/scripts.pory"
	walk_up
# 1937 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 1940 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 1941 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 1944 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 1945 "data/maps/Colchis/scripts.pory"
	face_right
# 1946 "data/maps/Colchis/scripts.pory"
	face_up
# 1947 "data/maps/Colchis/scripts.pory"
	face_left
# 1948 "data/maps/Colchis/scripts.pory"
	face_down
# 1949 "data/maps/Colchis/scripts.pory"
	face_right
# 1950 "data/maps/Colchis/scripts.pory"
	face_up
# 1951 "data/maps/Colchis/scripts.pory"
	face_left
# 1952 "data/maps/Colchis/scripts.pory"
	face_down
# 1953 "data/maps/Colchis/scripts.pory"
	face_right
# 1954 "data/maps/Colchis/scripts.pory"
	face_up
# 1955 "data/maps/Colchis/scripts.pory"
	face_left
# 1956 "data/maps/Colchis/scripts.pory"
	face_down
# 1957 "data/maps/Colchis/scripts.pory"
	face_right
# 1958 "data/maps/Colchis/scripts.pory"
	face_up
# 1959 "data/maps/Colchis/scripts.pory"
	face_left
# 1960 "data/maps/Colchis/scripts.pory"
	face_down
# 1961 "data/maps/Colchis/scripts.pory"
	face_right
# 1962 "data/maps/Colchis/scripts.pory"
	face_up
# 1963 "data/maps/Colchis/scripts.pory"
	face_left
# 1964 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1967 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 1968 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1968 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 1969 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1972 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 1973 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1973 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 1974 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 1977 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 1978 "data/maps/Colchis/scripts.pory"
	walk_left
# 1979 "data/maps/Colchis/scripts.pory"
	walk_up
# 1979 "data/maps/Colchis/scripts.pory"
	walk_up
# 1980 "data/maps/Colchis/scripts.pory"
	walk_right
# 1980 "data/maps/Colchis/scripts.pory"
	walk_right
# 1981 "data/maps/Colchis/scripts.pory"
	walk_down
# 1981 "data/maps/Colchis/scripts.pory"
	walk_down
# 1982 "data/maps/Colchis/scripts.pory"
	walk_left
# 1983 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 1986 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 1987 "data/maps/Colchis/scripts.pory"
	walk_left
# 1988 "data/maps/Colchis/scripts.pory"
	walk_up
# 1988 "data/maps/Colchis/scripts.pory"
	walk_up
# 1989 "data/maps/Colchis/scripts.pory"
	walk_right
# 1989 "data/maps/Colchis/scripts.pory"
	walk_right
# 1990 "data/maps/Colchis/scripts.pory"
	walk_down
# 1990 "data/maps/Colchis/scripts.pory"
	walk_down
# 1991 "data/maps/Colchis/scripts.pory"
	walk_left
# 1992 "data/maps/Colchis/scripts.pory"
	face_down
# 1993 "data/maps/Colchis/scripts.pory"
	walk_left
# 1994 "data/maps/Colchis/scripts.pory"
	walk_up
# 1994 "data/maps/Colchis/scripts.pory"
	walk_up
# 1995 "data/maps/Colchis/scripts.pory"
	walk_right
# 1995 "data/maps/Colchis/scripts.pory"
	walk_right
# 1996 "data/maps/Colchis/scripts.pory"
	walk_down
# 1996 "data/maps/Colchis/scripts.pory"
	walk_down
# 1997 "data/maps/Colchis/scripts.pory"
	walk_left
# 1998 "data/maps/Colchis/scripts.pory"
	face_down
# 1999 "data/maps/Colchis/scripts.pory"
	walk_left
# 2000 "data/maps/Colchis/scripts.pory"
	walk_up
# 2000 "data/maps/Colchis/scripts.pory"
	walk_up
# 2001 "data/maps/Colchis/scripts.pory"
	walk_right
# 2001 "data/maps/Colchis/scripts.pory"
	walk_right
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2002 "data/maps/Colchis/scripts.pory"
	walk_down
# 2003 "data/maps/Colchis/scripts.pory"
	walk_left
# 2004 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2007 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 2008 "data/maps/Colchis/scripts.pory"
	walk_down
# 2008 "data/maps/Colchis/scripts.pory"
	walk_down
# 2008 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2011 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 2012 "data/maps/Colchis/scripts.pory"
	walk_right
# 2012 "data/maps/Colchis/scripts.pory"
	walk_right
# 2013 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2016 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 2017 "data/maps/Colchis/scripts.pory"
	walk_left
# 2017 "data/maps/Colchis/scripts.pory"
	walk_left
# 2018 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2021 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 2022 "data/maps/Colchis/scripts.pory"
	walk_down
# 2023 "data/maps/Colchis/scripts.pory"
	face_left
# 2024 "data/maps/Colchis/scripts.pory"
	face_up
# 2025 "data/maps/Colchis/scripts.pory"
	face_right
# 2026 "data/maps/Colchis/scripts.pory"
	face_down
# 2027 "data/maps/Colchis/scripts.pory"
	walk_down
# 2028 "data/maps/Colchis/scripts.pory"
	face_left
# 2029 "data/maps/Colchis/scripts.pory"
	face_up
# 2030 "data/maps/Colchis/scripts.pory"
	face_right
# 2031 "data/maps/Colchis/scripts.pory"
	face_down
# 2032 "data/maps/Colchis/scripts.pory"
	walk_down
# 2033 "data/maps/Colchis/scripts.pory"
	face_left
# 2034 "data/maps/Colchis/scripts.pory"
	face_up
# 2035 "data/maps/Colchis/scripts.pory"
	face_right
# 2036 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2039 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 2040 "data/maps/Colchis/scripts.pory"
	walk_right
# 2041 "data/maps/Colchis/scripts.pory"
	walk_up
# 2042 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2043 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2046 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 2047 "data/maps/Colchis/scripts.pory"
	walk_left
# 2048 "data/maps/Colchis/scripts.pory"
	walk_up
# 2049 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2050 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2053 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 2054 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2055 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2058 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 2059 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2060 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2063 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 2064 "data/maps/Colchis/scripts.pory"
	walk_left
# 2065 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2068 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 2069 "data/maps/Colchis/scripts.pory"
	walk_right
# 2070 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2073 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 2074 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2075 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2078 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 2079 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2080 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2083 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 2084 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2087 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 2088 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 2091 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 2092 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 2096 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 2097 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 2100 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 2101 "data/maps/Colchis/scripts.pory"
	walk_up
# 2101 "data/maps/Colchis/scripts.pory"
	walk_up
# 2101 "data/maps/Colchis/scripts.pory"
	walk_up
# 2101 "data/maps/Colchis/scripts.pory"
	walk_up
# 2101 "data/maps/Colchis/scripts.pory"
	walk_up
# 2101 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2104 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM1:
# 2105 "data/maps/Colchis/scripts.pory"
	walk_right
# 2105 "data/maps/Colchis/scripts.pory"
	walk_right
# 2105 "data/maps/Colchis/scripts.pory"
	walk_right
# 2105 "data/maps/Colchis/scripts.pory"
	walk_right
# 2105 "data/maps/Colchis/scripts.pory"
	walk_right
# 2105 "data/maps/Colchis/scripts.pory"
	walk_right
# 2105 "data/maps/Colchis/scripts.pory"
	walk_right
# 2105 "data/maps/Colchis/scripts.pory"
	walk_right
# 2106 "data/maps/Colchis/scripts.pory"
	walk_down
# 2106 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2109 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 2110 "data/maps/Colchis/scripts.pory"
	walk_right
# 2110 "data/maps/Colchis/scripts.pory"
	walk_right
# 2110 "data/maps/Colchis/scripts.pory"
	walk_right
# 2110 "data/maps/Colchis/scripts.pory"
	walk_right
# 2110 "data/maps/Colchis/scripts.pory"
	walk_right
# 2110 "data/maps/Colchis/scripts.pory"
	walk_right
# 2110 "data/maps/Colchis/scripts.pory"
	walk_right
# 2111 "data/maps/Colchis/scripts.pory"
	walk_down
# 2111 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2114 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 2115 "data/maps/Colchis/scripts.pory"
	walk_right
# 2115 "data/maps/Colchis/scripts.pory"
	walk_right
# 2115 "data/maps/Colchis/scripts.pory"
	walk_right
# 2115 "data/maps/Colchis/scripts.pory"
	walk_right
# 2115 "data/maps/Colchis/scripts.pory"
	walk_right
# 2115 "data/maps/Colchis/scripts.pory"
	walk_right
# 2116 "data/maps/Colchis/scripts.pory"
	walk_down
# 2116 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2119 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 2120 "data/maps/Colchis/scripts.pory"
	walk_right
# 2120 "data/maps/Colchis/scripts.pory"
	walk_right
# 2120 "data/maps/Colchis/scripts.pory"
	walk_right
# 2120 "data/maps/Colchis/scripts.pory"
	walk_right
# 2120 "data/maps/Colchis/scripts.pory"
	walk_right
# 2120 "data/maps/Colchis/scripts.pory"
	walk_right
# 2120 "data/maps/Colchis/scripts.pory"
	walk_right
# 2120 "data/maps/Colchis/scripts.pory"
	walk_right
# 2121 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2124 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 2125 "data/maps/Colchis/scripts.pory"
	walk_right
# 2125 "data/maps/Colchis/scripts.pory"
	walk_right
# 2125 "data/maps/Colchis/scripts.pory"
	walk_right
# 2125 "data/maps/Colchis/scripts.pory"
	walk_right
# 2125 "data/maps/Colchis/scripts.pory"
	walk_right
# 2125 "data/maps/Colchis/scripts.pory"
	walk_right
# 2125 "data/maps/Colchis/scripts.pory"
	walk_right
# 2126 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2129 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 2130 "data/maps/Colchis/scripts.pory"
	walk_right
# 2130 "data/maps/Colchis/scripts.pory"
	walk_right
# 2130 "data/maps/Colchis/scripts.pory"
	walk_right
# 2130 "data/maps/Colchis/scripts.pory"
	walk_right
# 2130 "data/maps/Colchis/scripts.pory"
	walk_right
# 2130 "data/maps/Colchis/scripts.pory"
	walk_right
# 2131 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2134 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2135 "data/maps/Colchis/scripts.pory"
	walk_up
# 2136 "data/maps/Colchis/scripts.pory"
	walk_right
# 2136 "data/maps/Colchis/scripts.pory"
	walk_right
# 2136 "data/maps/Colchis/scripts.pory"
	walk_right
# 2136 "data/maps/Colchis/scripts.pory"
	walk_right
# 2136 "data/maps/Colchis/scripts.pory"
	walk_right
# 2136 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2139 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 2140 "data/maps/Colchis/scripts.pory"
	walk_right
# 2140 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2143 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 2144 "data/maps/Colchis/scripts.pory"
	walk_up
# 2144 "data/maps/Colchis/scripts.pory"
	walk_up
# 2144 "data/maps/Colchis/scripts.pory"
	walk_up
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_right
# 2146 "data/maps/Colchis/scripts.pory"
	walk_up
# 2146 "data/maps/Colchis/scripts.pory"
	walk_up
# 2146 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2149 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 2150 "data/maps/Colchis/scripts.pory"
	walk_up
# 2150 "data/maps/Colchis/scripts.pory"
	walk_up
# 2150 "data/maps/Colchis/scripts.pory"
	walk_up
# 2150 "data/maps/Colchis/scripts.pory"
	walk_up
# 2150 "data/maps/Colchis/scripts.pory"
	walk_up
# 2150 "data/maps/Colchis/scripts.pory"
	walk_up
# 2150 "data/maps/Colchis/scripts.pory"
	walk_up
# 2150 "data/maps/Colchis/scripts.pory"
	walk_up
# 2150 "data/maps/Colchis/scripts.pory"
	walk_up
# 2150 "data/maps/Colchis/scripts.pory"
	walk_up
# 2150 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2153 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 2154 "data/maps/Colchis/scripts.pory"
	walk_up
# 2154 "data/maps/Colchis/scripts.pory"
	walk_up
# 2154 "data/maps/Colchis/scripts.pory"
	walk_up
# 2154 "data/maps/Colchis/scripts.pory"
	walk_up
# 2154 "data/maps/Colchis/scripts.pory"
	walk_up
# 2154 "data/maps/Colchis/scripts.pory"
	walk_up
# 2154 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2157 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 2158 "data/maps/Colchis/scripts.pory"
	walk_left
# 2159 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2162 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 2163 "data/maps/Colchis/scripts.pory"
	walk_up
# 2164 "data/maps/Colchis/scripts.pory"
	walk_right
# 2165 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2169 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 2170 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2173 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 2174 "data/maps/Colchis/scripts.pory"
	walk_right
# 2174 "data/maps/Colchis/scripts.pory"
	walk_right
# 2175 "data/maps/Colchis/scripts.pory"
	walk_down
# 2176 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2179 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 2180 "data/maps/Colchis/scripts.pory"
	walk_left
# 2181 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2184 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 2185 "data/maps/Colchis/scripts.pory"
	walk_right
# 2186 "data/maps/Colchis/scripts.pory"
	walk_up
# 2187 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2190 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 2191 "data/maps/Colchis/scripts.pory"
	walk_left
# 2192 "data/maps/Colchis/scripts.pory"
	walk_up
# 2193 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2196 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 2197 "data/maps/Colchis/scripts.pory"
	walk_down
# 2197 "data/maps/Colchis/scripts.pory"
	walk_down
# 2197 "data/maps/Colchis/scripts.pory"
	walk_down
# 2197 "data/maps/Colchis/scripts.pory"
	walk_down
# 2197 "data/maps/Colchis/scripts.pory"
	walk_down
# 2197 "data/maps/Colchis/scripts.pory"
	walk_down
# 2197 "data/maps/Colchis/scripts.pory"
	walk_down
# 2197 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2200 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 2201 "data/maps/Colchis/scripts.pory"
	walk_up
# 2201 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2204 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonApproachPlayer:
# 2205 "data/maps/Colchis/scripts.pory"
	walk_up
# 2205 "data/maps/Colchis/scripts.pory"
	walk_up
# 2205 "data/maps/Colchis/scripts.pory"
	walk_up
# 2205 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2208 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonExit:
# 2209 "data/maps/Colchis/scripts.pory"
	walk_down
# 2209 "data/maps/Colchis/scripts.pory"
	walk_down
# 2209 "data/maps/Colchis/scripts.pory"
	walk_down
# 2209 "data/maps/Colchis/scripts.pory"
	walk_down
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2210 "data/maps/Colchis/scripts.pory"
	walk_left
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2211 "data/maps/Colchis/scripts.pory"
	walk_down
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2212 "data/maps/Colchis/scripts.pory"
	walk_right
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2213 "data/maps/Colchis/scripts.pory"
	walk_down
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
# 2214 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2217 "data/maps/Colchis/scripts.pory"
Common_Movement_JasonPrisonExit:
# 2218 "data/maps/Colchis/scripts.pory"
	walk_down
# 2218 "data/maps/Colchis/scripts.pory"
	walk_down
# 2218 "data/maps/Colchis/scripts.pory"
	walk_down
# 2218 "data/maps/Colchis/scripts.pory"
	walk_down
# 2218 "data/maps/Colchis/scripts.pory"
	walk_down
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2219 "data/maps/Colchis/scripts.pory"
	walk_left
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2221 "data/maps/Colchis/scripts.pory"
	walk_right
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2222 "data/maps/Colchis/scripts.pory"
	walk_down
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
# 2223 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2226 "data/maps/Colchis/scripts.pory"
Common_Movement_PlayerPrisonExit:
# 2227 "data/maps/Colchis/scripts.pory"
	walk_down
# 2227 "data/maps/Colchis/scripts.pory"
	walk_down
# 2227 "data/maps/Colchis/scripts.pory"
	walk_down
# 2227 "data/maps/Colchis/scripts.pory"
	walk_down
# 2227 "data/maps/Colchis/scripts.pory"
	walk_down
# 2227 "data/maps/Colchis/scripts.pory"
	walk_down
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2228 "data/maps/Colchis/scripts.pory"
	walk_left
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2229 "data/maps/Colchis/scripts.pory"
	walk_down
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	walk_right
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2231 "data/maps/Colchis/scripts.pory"
	walk_down
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
# 2232 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2235 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2236 "data/maps/Colchis/scripts.pory"
	walk_left
# 2237 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2240 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 2241 "data/maps/Colchis/scripts.pory"
	walk_down
# 2242 "data/maps/Colchis/scripts.pory"
	walk_right
# 2242 "data/maps/Colchis/scripts.pory"
	walk_right
# 2242 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2245 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 2246 "data/maps/Colchis/scripts.pory"
	walk_up
# 2246 "data/maps/Colchis/scripts.pory"
	walk_up
# 2246 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2249 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 2250 "data/maps/Colchis/scripts.pory"
	walk_up
# 2250 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2253 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3A:
# 2254 "data/maps/Colchis/scripts.pory"
	walk_up
# 2254 "data/maps/Colchis/scripts.pory"
	walk_up
# 2255 "data/maps/Colchis/scripts.pory"
	walk_right
# 2255 "data/maps/Colchis/scripts.pory"
	walk_right
# 2256 "data/maps/Colchis/scripts.pory"
	walk_up
# 2256 "data/maps/Colchis/scripts.pory"
	walk_up
# 2256 "data/maps/Colchis/scripts.pory"
	walk_up
# 2256 "data/maps/Colchis/scripts.pory"
	walk_up
# 2256 "data/maps/Colchis/scripts.pory"
	walk_up
# 2256 "data/maps/Colchis/scripts.pory"
	walk_up
# 2256 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2259 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3B:
# 2260 "data/maps/Colchis/scripts.pory"
	walk_up
# 2260 "data/maps/Colchis/scripts.pory"
	walk_up
# 2261 "data/maps/Colchis/scripts.pory"
	walk_right
# 2262 "data/maps/Colchis/scripts.pory"
	walk_up
# 2262 "data/maps/Colchis/scripts.pory"
	walk_up
# 2262 "data/maps/Colchis/scripts.pory"
	walk_up
# 2262 "data/maps/Colchis/scripts.pory"
	walk_up
# 2262 "data/maps/Colchis/scripts.pory"
	walk_up
# 2262 "data/maps/Colchis/scripts.pory"
	walk_up
# 2262 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2265 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3A:
# 2266 "data/maps/Colchis/scripts.pory"
	walk_down
# 2267 "data/maps/Colchis/scripts.pory"
	walk_right
# 2268 "data/maps/Colchis/scripts.pory"
	walk_down
# 2268 "data/maps/Colchis/scripts.pory"
	walk_down
# 2269 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2272 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3B:
# 2273 "data/maps/Colchis/scripts.pory"
	walk_down
# 2273 "data/maps/Colchis/scripts.pory"
	walk_down
# 2273 "data/maps/Colchis/scripts.pory"
	walk_down
# 2274 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2277 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn:
# 2278 "data/maps/Colchis/scripts.pory"
	walk_down
# 2278 "data/maps/Colchis/scripts.pory"
	walk_down
# 2278 "data/maps/Colchis/scripts.pory"
	walk_down
# 2278 "data/maps/Colchis/scripts.pory"
	walk_down
# 2278 "data/maps/Colchis/scripts.pory"
	walk_down
# 2278 "data/maps/Colchis/scripts.pory"
	walk_down
# 2278 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2281 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2A:
# 2282 "data/maps/Colchis/scripts.pory"
	walk_down
# 2283 "data/maps/Colchis/scripts.pory"
	walk_left
# 2283 "data/maps/Colchis/scripts.pory"
	walk_left
# 2284 "data/maps/Colchis/scripts.pory"
	walk_down
# 2285 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2288 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2B:
# 2289 "data/maps/Colchis/scripts.pory"
	walk_down
# 2290 "data/maps/Colchis/scripts.pory"
	walk_left
# 2291 "data/maps/Colchis/scripts.pory"
	walk_down
# 2292 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2295 "data/maps/Colchis/scripts.pory"
Colchis_Movement_Exeunt:
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2296 "data/maps/Colchis/scripts.pory"
	walk_right
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	walk_up
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2298 "data/maps/Colchis/scripts.pory"
	walk_left
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
# 2299 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2302 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAndMedeaExeunt:
# 2303 "data/maps/Colchis/scripts.pory"
	walk_down
# 2304 "data/maps/Colchis/scripts.pory"
	walk_right
# 2304 "data/maps/Colchis/scripts.pory"
	walk_right
# 2304 "data/maps/Colchis/scripts.pory"
	walk_right
# 2304 "data/maps/Colchis/scripts.pory"
	walk_right
# 2304 "data/maps/Colchis/scripts.pory"
	walk_right
# 2304 "data/maps/Colchis/scripts.pory"
	walk_right
# 2304 "data/maps/Colchis/scripts.pory"
	walk_right
# 2304 "data/maps/Colchis/scripts.pory"
	walk_right
# 2304 "data/maps/Colchis/scripts.pory"
	walk_right
# 2304 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1503 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Script_SanctumMedeaReturn_Text_0:
# 1726 "data/maps/Colchis/scripts.pory"
	.string "OIMOIAY!\nOOIIMMOOIIAAYY!!$"

Colchis_Text_JasonIntro1::
# 2307 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 2311 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 2315 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 2319 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 2323 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 2327 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 2332 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 2337 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 2341 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 2345 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 2349 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 2358 "data/maps/Colchis/scripts.pory"
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
# 2363 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 2372 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 2376 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 2385 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 2391 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 2404 "data/maps/Colchis/scripts.pory"
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
# 2416 "data/maps/Colchis/scripts.pory"
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
# 2420 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 2424 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 2428 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 2432 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 2436 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 2440 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 2449 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 2453 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 2471 "data/maps/Colchis/scripts.pory"
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
# 2475 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 2480 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 2484 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 2488 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 2495 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 2499 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 2525 "data/maps/Colchis/scripts.pory"
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
# 2533 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 2537 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 2550 "data/maps/Colchis/scripts.pory"
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
# 2554 "data/maps/Colchis/scripts.pory"
	.string "Do not interrupt my private time with\n"
	.string "Medea 'till you bring shiny Mareep.$"

Colchis_Text_MedeaSanctumTrigger1::
# 2559 "data/maps/Colchis/scripts.pory"
	.string "Ememberray, ingbray onay armhay otay\n"
	.string "Ugialay.$"

Colchis_Text_JasonSanctumTrigger2::
# 2563 "data/maps/Colchis/scripts.pory"
	.string "Have you returned bringing Shiny\n"
	.string "Mareep?$"

Colchis_Text_MedeaSanctumTrigger2::
# 2568 "data/maps/Colchis/scripts.pory"
	.string "Ymay oughtsthay etraybay emay.\n"
	.string "Excuseay emay Asonjay, againstay ymay\l"
	.string "ownay adviceay Iay ustmay aketay\l"
	.string "eavelay ofay ouyay anday eesay atthay\l"
	.string "Ugialay isay afesay.$"

Colchis_Text_JasonSanctumTrigger3::
# 2572 "data/maps/Colchis/scripts.pory"
	.string "How could you fail? You only had one\n"
	.string "job! My quest has failed and it was all\l"
	.string "your fault! Now you will pay the price.\l"
	.string "Go Nosepass!$"

Colchis_Text_JasonLost::
# 2576 "data/maps/Colchis/scripts.pory"
	.string "I curse that day I saved you from the\n"
	.string "surf.$"

Colchis_Text_JasonPost::
# 2580 "data/maps/Colchis/scripts.pory"
	.string "The most wicked betrayal of all my\n"
	.string "life...$"

Colchis_Text_JasonGiveMeMareep::
# 2584 "data/maps/Colchis/scripts.pory"
	.string "I see that you have completed the\n"
	.string "quest. Give me shiny Mareep and let's be\l"
	.string "done.$"

Colchis_Text_GiveJasonMareep::
# 2588 "data/maps/Colchis/scripts.pory"
	.string "Will you give Jason shiny Mareep?$"

Colchis_Text_GaveShinyMareep::
# 2592 "data/maps/Colchis/scripts.pory"
	.string "You gave {STR_VAR_1} to Jason!\p"
	.string "Bye Bye {STR_VAR_1}!$"

Colchis_Text_CultistMPre::
# 2597 "data/maps/Colchis/scripts.pory"
	.string "Espassertray opstay! Allfay intoay\n"
	.string "othingnessnay$"

Colchis_Text_CultistMLost::
# 2602 "data/maps/Colchis/scripts.pory"
	.string "Ethay everlastingay arknessday\n"
	.string "overscay allay.$"

Colchis_Text_CultistMPost::
# 2607 "data/maps/Colchis/scripts.pory"
	.string "Ouyay aymay avehay onway utbay\n"
	.string "ou'llyay evernay escapeay.$"

Colchis_Text_MedeaSanctumReturn1::
# 2612 "data/maps/Colchis/scripts.pory"
	.string "Ouyay onstermay! Owhay ouldcay ouyay\n"
	.string "oday isthay otay emay?$"

Colchis_Text_MedeaSanctumReturn2::
# 2617 "data/maps/Colchis/scripts.pory"
	.string "Ymay ovelay, ehay ashay attackeday\n"
	.string "ymay Ugialay! Iay illway onay ongerlay\l"
	.string "elphay imhay eavelay Olchiscay.$"

Colchis_Text_JasonMedeaReturn1::
# 2621 "data/maps/Colchis/scripts.pory"
	.string "Please, do not cry beloved Medea. Lend\n"
	.string "love the power to hold back your tears.$"

Colchis_Text_JasonMedeaReturn2::
# 2625 "data/maps/Colchis/scripts.pory"
	.string "Hey, I apologize for Medea. I know she's\n"
	.string "acting up, but we're still cool. Give it\l"
	.string "some time I'll get her to cool down. When\l"
	.string "you get out meet me in Bulbus town and\l"
	.string "I'll repay you for shiny Mareep.$"

Colchis_Text_JasonSanctumWilds::
# 2629 "data/maps/Colchis/scripts.pory"
	.string "Alas! Medea! My quest for shiny Mareep\n"
	.string "has failed and now we're vagabonds.$"

Colchis_Text_JasonSanctumDepart::
# 2633 "data/maps/Colchis/scripts.pory"
	.string "Let us depart and leave this one\n"
	.string "behind.$"
