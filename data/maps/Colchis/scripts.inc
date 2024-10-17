Colchis_MapScripts::
# 98 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 104 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 115 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME
# 129 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 99 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 100 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupJail
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME:
# 117 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_MAREEP, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2
Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 122 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 118 "data/maps/Colchis/scripts.pory"
	hideobjectat 2, MAP_COLCHIS
# 119 "data/maps/Colchis/scripts.pory"
	removeobject 2
	goto Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_1

Colchis_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 123 "data/maps/Colchis/scripts.pory"
	hideobjectat 1, MAP_COLCHIS
# 124 "data/maps/Colchis/scripts.pory"
	removeobject 1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 130 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
# 132 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 9, Colchis_Script_Jail
	.2byte 0


Colchis_TempScript_WarpSanctum::
# 141 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 11
# 142 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 34, 56
	end


Colchis_TempScript_SetupTestMedeaDance::
# 147 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 51, 25
# 148 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
	end


Colchis_TempScript_TestMedeaDance::
# 154 "data/maps/Colchis/scripts.pory"
	lockall
# 155 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
# 156 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SetupJail::
# 161 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 162 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 18, 13
# 163 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_DOWN
# 164 "data/maps/Colchis/scripts.pory"
	addobject 54
# 165 "data/maps/Colchis/scripts.pory"
	showobjectat 54, MAP_COLCHIS
	end


Colchis_Script_Jason::
# 172 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 9
	goto_if_eq Colchis_Script_Jason_2
Colchis_Script_Jason_1:
	end

Colchis_Script_Jason_2:
# 173 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntroDeclined, MSGBOX_DEFAULT
# 174 "data/maps/Colchis/scripts.pory"
	closemessage
# 175 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	goto Colchis_Script_Jason_1


Colchis_Script_Intro::
# 183 "data/maps/Colchis/scripts.pory"
	lockall
# 185 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 187 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 188 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 189 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 190 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 191 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 192 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 195 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 196 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 197 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 200 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_JasonAmbush
# 201 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAmbush
# 202 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 207 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 208 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 209 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 212 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_IntroGruntM1
# 213 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_IntroGruntM2
# 214 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_IntroGruntM3
# 215 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_IntroGruntF1
# 216 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_IntroGruntF2
# 217 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_IntroGruntF3
# 218 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 219 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 220 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_WalkDown
# 221 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_WalkUp
# 222 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_WalkUp
# 223 "data/maps/Colchis/scripts.pory"
	waitmovement 28
# 224 "data/maps/Colchis/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 225 "data/maps/Colchis/scripts.pory"
	applymovement 51, Common_Movement_FaceLeft
# 226 "data/maps/Colchis/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 227 "data/maps/Colchis/scripts.pory"
	applymovement 53, Common_Movement_FaceLeft
# 228 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 231 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 232 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_DEFAULT
# 233 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 234 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 235 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 236 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 237 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro3, MSGBOX_DEFAULT
# 238 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 239 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 240 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 241 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 242 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro4, MSGBOX_DEFAULT
# 243 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 246 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 247 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 248 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 251 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 252 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 253 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 257 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 258 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 259 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 260 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro5, MSGBOX_DEFAULT
# 261 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 262 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 263 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 264 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 265 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro6, MSGBOX_DEFAULT
# 266 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 268 "data/maps/Colchis/scripts.pory"
	closemessage
# 270 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_EnterThroneRoom
	end


Colchis_Script_EnterThroneRoom::
# 278 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom1
# 279 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom1
# 280 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom1
# 281 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom1
# 282 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom1
# 283 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom1
# 284 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom1
# 285 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom1
# 286 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 289 "data/maps/Colchis/scripts.pory"
	applymovement 50, Colchis_Movement_EnterThroneRoom2
# 290 "data/maps/Colchis/scripts.pory"
	applymovement 52, Colchis_Movement_EnterThroneRoom2
# 291 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 293 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_EnterThroneRoom3
# 294 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_EnterThroneRoom3
# 295 "data/maps/Colchis/scripts.pory"
	applymovement 28, Colchis_Movement_EnterThroneRoom3
# 296 "data/maps/Colchis/scripts.pory"
	applymovement 51, Colchis_Movement_EnterThroneRoom3
# 297 "data/maps/Colchis/scripts.pory"
	applymovement 27, Colchis_Movement_EnterThroneRoom3
# 298 "data/maps/Colchis/scripts.pory"
	applymovement 53, Colchis_Movement_EnterThroneRoom3
# 299 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 303 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance
	return


Colchis_Script_CheckForcedBattle::
# 310 "data/maps/Colchis/scripts.pory"
	lockall
# 311 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 313 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 320 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 321 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 322 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 324 "data/maps/Colchis/scripts.pory"
	addobject 23
# 325 "data/maps/Colchis/scripts.pory"
	addobject 24
# 327 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 328 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 332 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 333 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 335 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 336 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 337 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 340 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 341 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPre, MSGBOX_DEFAULT
# 342 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 343 "data/maps/Colchis/scripts.pory"
	closemessage
# 346 "data/maps/Colchis/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_3, Colchis_Text_CultistMLost, TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt2Lost
# 349 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 350 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_CultistMPost, MSGBOX_DEFAULT
# 351 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 352 "data/maps/Colchis/scripts.pory"
	closemessage
# 355 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleExitA
# 356 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleExitB
# 357 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 360 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 361 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 363 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 23, 0, 0
# 364 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 24, 2, 0
# 366 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_FACE_DOWN
# 367 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_UP
# 369 "data/maps/Colchis/scripts.pory"
	addobject 23
# 370 "data/maps/Colchis/scripts.pory"
	addobject 24
# 372 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 373 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
	return


Colchis_Script_MedeaDance::
# 383 "data/maps/Colchis/scripts.pory"
	special SpawnCameraObject
# 384 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Colchis_Movement_MedeaDance_CameraPan1
# 385 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 390 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 391 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 392 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 393 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 394 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 395 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 396 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 397 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 398 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 399 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 400 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 401 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 402 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 403 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 404 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_MedeaA
# 405 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 406 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 407 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 416 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 417 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1A
# 418 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2A
# 419 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 420 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 421 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 422 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 424 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 426 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 427 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 428 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 430 "data/maps/Colchis/scripts.pory"
	waitmovement 11
# 432 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 433 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 434 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 436 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 442 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 443 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 444 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 445 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3A
# 446 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4A
# 447 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn
# 448 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn
# 450 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 452 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 453 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 454 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 455 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 456 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 458 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 460 "data/maps/Colchis/scripts.pory"
	delay 25
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
	waitmovement 16
# 475 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 476 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 477 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 478 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 479 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 480 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_CircleColumn2
# 481 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_CircleColumn2
# 483 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 485 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 486 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 487 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 488 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 489 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 490 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 492 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 494 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 495 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 496 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 497 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 498 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 500 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 502 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 503 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 504 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 505 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 506 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 508 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 510 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_CircleColumn
# 511 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_CircleColumn
# 512 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_CircleColumn
# 513 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_CircleColumn
# 514 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_CircleColumn
# 516 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 518 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 519 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 520 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 521 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 522 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 524 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 530 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 531 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 532 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 533 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 534 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 535 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5A
# 536 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6A
# 538 "data/maps/Colchis/scripts.pory"
	waitmovement 4
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
# 546 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 552 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 558 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 559 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1B
# 560 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2B
# 561 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_Dancer3B
# 562 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_Dancer4B
# 563 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5B
# 564 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6B
# 566 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 571 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 577 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 578 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_Dancer1C
# 579 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_Dancer2C
# 580 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 581 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 582 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_Dancer5C
# 583 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_Dancer6C
# 585 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 591 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 594 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 603 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 604 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 605 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 606 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 607 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 608 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 609 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 611 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 613 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 614 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 615 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 616 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 617 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 618 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkRight
# 619 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 621 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 626 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 630 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 631 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 632 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 633 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 634 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 635 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 636 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 638 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 640 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 641 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 642 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 643 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 644 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 645 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 646 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 648 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 650 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 654 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 655 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 656 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 657 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 658 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 659 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 660 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 662 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 664 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 665 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 666 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 667 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 668 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 669 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 670 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkDown
# 672 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 674 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 678 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 679 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 680 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 681 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 682 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 683 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 684 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 686 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 688 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 689 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 690 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 691 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 692 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 693 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 694 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 696 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 698 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 708 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 709 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 710 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 711 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 712 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 713 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 714 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 715 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 717 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 719 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 721 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 722 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 723 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 724 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 725 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 726 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 727 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 728 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 730 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 732 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 734 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 735 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 736 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthWest
# 737 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthEast
# 738 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthEast
# 739 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthWest
# 740 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthWest
# 741 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthEast
# 743 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 745 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 752 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 753 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 754 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkSouthEast
# 755 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkSouthWest
# 756 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkSouthWest
# 757 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkSouthEast
# 758 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 759 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 761 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 762 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 764 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 765 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 768 "data/maps/Colchis/scripts.pory"
	delay 25
# 772 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthEast
# 773 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 777 "data/maps/Colchis/scripts.pory"
	delay 25
# 779 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 780 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 784 "data/maps/Colchis/scripts.pory"
	delay 25
# 786 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 787 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 791 "data/maps/Colchis/scripts.pory"
	delay 25
# 793 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 794 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 795 "data/maps/Colchis/scripts.pory"
	delay 25
# 800 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 801 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 802 "data/maps/Colchis/scripts.pory"
	delay 25
# 804 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 805 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVampLessMedea
# 806 "data/maps/Colchis/scripts.pory"
	delay 25
# 811 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthWest
# 812 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 813 "data/maps/Colchis/scripts.pory"
	delay 25
# 815 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkSouthWest
# 816 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 817 "data/maps/Colchis/scripts.pory"
	delay 25
# 819 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkRight
# 820 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 821 "data/maps/Colchis/scripts.pory"
	delay 25
# 823 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 824 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 825 "data/maps/Colchis/scripts.pory"
	delay 25
# 830 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 831 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 832 "data/maps/Colchis/scripts.pory"
	delay 25
# 834 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 835 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 836 "data/maps/Colchis/scripts.pory"
	delay 25
# 838 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkNorthEast
# 839 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 840 "data/maps/Colchis/scripts.pory"
	delay 25
# 842 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 843 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 844 "data/maps/Colchis/scripts.pory"
	delay 25
# 846 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
# 848 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 849 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_TrickVamp
# 850 "data/maps/Colchis/scripts.pory"
	delay 25
# 855 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 856 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 857 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 858 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 859 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 860 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 861 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkSouthEast
# 862 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkSouthWest
# 864 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 875 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 876 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 877 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 878 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 879 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 880 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 881 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 882 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 883 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 888 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 889 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 890 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 891 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 892 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 893 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 894 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 895 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 896 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 901 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 902 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 903 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 904 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 905 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 906 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 907 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 908 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 909 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 914 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 915 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 916 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 917 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 918 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 919 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 920 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 921 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 922 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 927 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 928 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 929 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 930 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 931 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 932 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 933 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 934 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 935 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 940 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 941 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 942 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 943 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 944 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 945 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 946 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 947 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 948 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 953 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 954 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 955 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 956 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 957 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 958 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 959 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 960 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 961 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 966 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 967 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 968 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 969 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 970 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 971 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 972 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 973 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 974 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 979 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 980 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 981 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthEast
# 982 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthWest
# 983 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthWest
# 984 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthEast
# 985 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthEast
# 986 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthWest
# 987 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 989 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 990 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 991 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_WalkNorthWest
# 992 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_WalkNorthEast
# 993 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkNorthEast
# 994 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkNorthWest
# 995 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_WalkNorthWest
# 996 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_WalkNorthEast
# 997 "data/maps/Colchis/scripts.pory"
	waitmovement 16
# 999 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1000 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1001 "data/maps/Colchis/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 1002 "data/maps/Colchis/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 1003 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1004 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1005 "data/maps/Colchis/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 1006 "data/maps/Colchis/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 1007 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1009 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1010 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1011 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 1012 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 1013 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1015 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1016 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 1017 "data/maps/Colchis/scripts.pory"
	waitmovement 4
# 1022 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 1023 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1025 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerApproachAeetes
# 1027 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_Aeetes
	return


Colchis_Script_MedeaDance_SpinAll::
# 1034 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1035 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1036 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1037 "data/maps/Colchis/scripts.pory"
	applymovement 13, Colchis_Movement_MedeaDance_SpinInPlace
# 1038 "data/maps/Colchis/scripts.pory"
	applymovement 14, Colchis_Movement_MedeaDance_SpinInPlace
# 1039 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1040 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1041 "data/maps/Colchis/scripts.pory"
	waitmovement 4
	return


Colchis_Script_MedeaDance_TrickVamp::
# 1046 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1047 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1048 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1049 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1050 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1051 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1052 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1053 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1054 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaDance_SpinInPlace
# 1055 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1056 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1057 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1058 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1059 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1060 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1061 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1062 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_MedeaDance_SpinAll
	return


Colchis_Script_MedeaDance_TrickVampLessMedea::
# 1067 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1068 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1069 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1070 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1071 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1072 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1073 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1074 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1075 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1076 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1077 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1078 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1079 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1080 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1081 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1082 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1083 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1084 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1085 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1086 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1087 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1088 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1089 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1090 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1091 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1092 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1093 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1094 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1095 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1096 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1097 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkRight
# 1098 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
# 1099 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1100 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1101 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1102 "data/maps/Colchis/scripts.pory"
	applymovement 11, Colchis_Movement_MedeaDance_SpinInPlace
# 1103 "data/maps/Colchis/scripts.pory"
	applymovement 12, Colchis_Movement_MedeaDance_SpinInPlace
# 1104 "data/maps/Colchis/scripts.pory"
	applymovement 13, Common_Movement_WalkLeft
# 1105 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
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
	applymovement 13, Common_Movement_WalkRight
# 1112 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft
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
	applymovement 13, Common_Movement_WalkLeft
# 1119 "data/maps/Colchis/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 1120 "data/maps/Colchis/scripts.pory"
	applymovement 15, Colchis_Movement_MedeaDance_SpinInPlace
# 1121 "data/maps/Colchis/scripts.pory"
	applymovement 16, Colchis_Movement_MedeaDance_SpinInPlace
# 1122 "data/maps/Colchis/scripts.pory"
	waitmovement 13
# 1123 "data/maps/Colchis/scripts.pory"
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
# 1173 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1174 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes2, MSGBOX_DEFAULT
# 1175 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1180 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1181 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonAeetes, MSGBOX_DEFAULT
# 1182 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1189 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1190 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes3, MSGBOX_DEFAULT
# 1191 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1196 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1197 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea2, MSGBOX_DEFAULT
# 1198 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1207 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1208 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes4, MSGBOX_DEFAULT
# 1209 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1210 "data/maps/Colchis/scripts.pory"
	closemessage
# 1213 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1214 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1215 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1224 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1225 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea3, MSGBOX_DEFAULT
# 1226 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1231 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1232 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes5, MSGBOX_DEFAULT
# 1233 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1236 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuard1
# 1237 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuard2
# 1238 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuard3
# 1239 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuard4
# 1240 "data/maps/Colchis/scripts.pory"
	waitmovement 5
# 1244 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1245 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes6, MSGBOX_DEFAULT
# 1246 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1250 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_RoyalGuardExit
# 1251 "data/maps/Colchis/scripts.pory"
	applymovement 10, Colchis_Movement_RoyalGuardExit
# 1252 "data/maps/Colchis/scripts.pory"
	applymovement 9, Colchis_Movement_RoyalGuardExit
# 1254 "data/maps/Colchis/scripts.pory"
	applymovement 5, Colchis_Movement_RoyalGuardExit
# 1255 "data/maps/Colchis/scripts.pory"
	applymovement 6, Colchis_Movement_RoyalGuardExit
# 1256 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_RoyalGuardExit
# 1260 "data/maps/Colchis/scripts.pory"
	load_field_pic 24, 190, 98
# 1261 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Medea4, MSGBOX_DEFAULT
# 1263 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1264 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1270 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1271 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Aeetes7, MSGBOX_DEFAULT
# 1272 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1273 "data/maps/Colchis/scripts.pory"
	closemessage
# 1276 "data/maps/Colchis/scripts.pory"
	special RemoveCameraObject
# 1277 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 9
# 1280 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_COLCHIS, 18, 10
# 1281 "data/maps/Colchis/scripts.pory"
	waitstate
	return


Colchis_Script_Jail::
# 1289 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 10
# 1295 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1296 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison1, MSGBOX_DEFAULT
# 1297 "data/maps/Colchis/scripts.pory"
	closemessage
# 1298 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1301 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonPrisonApproachPlayer
# 1302 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1305 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1306 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison2, MSGBOX_DEFAULT
# 1307 "data/maps/Colchis/scripts.pory"
	closemessage
# 1308 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1311 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1312 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1313 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1314 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1317 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1318 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 18, 16
# 1319 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 1320 "data/maps/Colchis/scripts.pory"
	addobject 4
# 1321 "data/maps/Colchis/scripts.pory"
	showobjectat 4, MAP_COLCHIS
# 1324 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1325 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 14, METATILE_Colchis_JailDoorOpen_Top, FALSE
# 1326 "data/maps/Colchis/scripts.pory"
	setmetatile 18, 15, METATILE_Colchis_JailDoorOpen_Bottom, FALSE
# 1327 "data/maps/Colchis/scripts.pory"
	special DrawWholeMapView
# 1328 "data/maps/Colchis/scripts.pory"
	delay 30
# 1329 "data/maps/Colchis/scripts.pory"
	waitse
# 1332 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonApproachPlayer
# 1333 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1336 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1337 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison1, MSGBOX_DEFAULT
# 1338 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1341 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1342 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison3, MSGBOX_DEFAULT
# 1343 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1346 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1347 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison2, MSGBOX_DEFAULT
# 1348 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1351 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1352 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison4, MSGBOX_DEFAULT
# 1353 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1356 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1357 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison3, MSGBOX_DEFAULT
# 1358 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1360 "data/maps/Colchis/scripts.pory"
	closemessage
# 1363 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1364 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1367 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1368 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison5, MSGBOX_DEFAULT
# 1369 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1370 "data/maps/Colchis/scripts.pory"
	closemessage
# 1373 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 1374 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1377 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1378 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPrison6, MSGBOX_DEFAULT
# 1379 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1382 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1383 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaPrison4, MSGBOX_DEFAULT
# 1384 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1386 "data/maps/Colchis/scripts.pory"
	closemessage
# 1390 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_MedeaPrisonExit
# 1391 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_JasonPrisonExit
# 1392 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_PlayerPrisonExit
# 1393 "data/maps/Colchis/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1395 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupSanctum
	return


Colchis_Script_SetupSanctum::
# 1403 "data/maps/Colchis/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1404 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1407 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1408 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctum1, MSGBOX_DEFAULT
# 1409 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1411 "data/maps/Colchis/scripts.pory"
	closemessage
# 1414 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum1
# 1415 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1418 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1419 "data/maps/Colchis/scripts.pory"
	hideobjectat 19, MAP_COLCHIS
# 1420 "data/maps/Colchis/scripts.pory"
	hideobjectat 20, MAP_COLCHIS
# 1421 "data/maps/Colchis/scripts.pory"
	removeobject 19
# 1422 "data/maps/Colchis/scripts.pory"
	removeobject 20
# 1425 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_INVISIBLE
# 1426 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 19, 1, 1
# 1427 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_INVISIBLE
# 1428 "data/maps/Colchis/scripts.pory"
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
# 1637 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1638 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger2, MSGBOX_DEFAULT
# 1639 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumTriggerMedeaExit::
# 1644 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1645 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumTrigger2, MSGBOX_DEFAULT
# 1646 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1647 "data/maps/Colchis/scripts.pory"
	closemessage
# 1648 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumTriggerMedeaExit_2
# 1651 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3B
Colchis_Script_SanctumTriggerMedeaExit_1:
# 1653 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumTriggerMedeaExit_2:
# 1649 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctum3A
	goto Colchis_Script_SanctumTriggerMedeaExit_1


Colchis_Script_LugiaChaseTrigger::
# 1658 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 1659 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaChaseTrigger_2
Colchis_Script_LugiaChaseTrigger_1:
	end

Colchis_Script_LugiaChaseTrigger_2:
# 1660 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_CHASE_PLAYER
	goto Colchis_Script_LugiaChaseTrigger_1


Colchis_Script_LugiaWanderTrigger::
# 1666 "data/maps/Colchis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1667 "data/maps/Colchis/scripts.pory"
	goto_if_unset FLAG_COLCHIS_HIDE_LUGIA, Colchis_Script_LugiaWanderTrigger_2
Colchis_Script_LugiaWanderTrigger_1:
	end

Colchis_Script_LugiaWanderTrigger_2:
# 1668 "data/maps/Colchis/scripts.pory"
	setobjectmovementtypeghoul 1, MOVEMENT_TYPE_WANDER_AROUND
	goto Colchis_Script_LugiaWanderTrigger_1


Colchis_Script_ShinyMareep::
# 1674 "data/maps/Colchis/scripts.pory"
	lockall
# 1675 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1676 "data/maps/Colchis/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 1677 "data/maps/Colchis/scripts.pory"
	waitmoncry
# 1678 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDE_MAREEP
# 1679 "data/maps/Colchis/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1680 "data/maps/Colchis/scripts.pory"
	special DoShinyMareepBattle
# 1681 "data/maps/Colchis/scripts.pory"
	waitstate
# 1682 "data/maps/Colchis/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1683 "data/maps/Colchis/scripts.pory"
	removeobject 2
# 1684 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_SanctumApproachJason::
# 1689 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumApproachJason_2
# 1692 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3B
Colchis_Script_SanctumApproachJason_1:
# 1694 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1696 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1697 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return

Colchis_Script_SanctumApproachJason_2:
# 1690 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_PlayerSanctum3A
	goto Colchis_Script_SanctumApproachJason_1


Colchis_Script_SanctumJasonBattle::
# 1703 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1704 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1706 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1707 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumTrigger3, MSGBOX_DEFAULT
# 1708 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1709 "data/maps/Colchis/scripts.pory"
	closemessage
# 1711 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_JASON, Colchis_Text_JasonLost
# 1713 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1714 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonPost, MSGBOX_DEFAULT
# 1715 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
	return


Colchis_Script_SanctumMedeaReturn::
# 1722 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceUp
# 1723 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1724 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1726 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_ExclamationMark
# 1727 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1728 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1731 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1732 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_SanctumMedeaReturn_Text_0, MSGBOX_DEFAULT
# 1733 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1734 "data/maps/Colchis/scripts.pory"
	closemessage
# 1737 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn
# 1738 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1741 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1742 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn1, MSGBOX_DEFAULT
# 1743 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1744 "data/maps/Colchis/scripts.pory"
	closemessage
# 1747 "data/maps/Colchis/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq Colchis_Script_SanctumMedeaReturn_2
# 1750 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2B
Colchis_Script_SanctumMedeaReturn_1:
# 1752 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1754 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1755 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1758 "data/maps/Colchis/scripts.pory"
	load_field_pic 24 190, 98
# 1759 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_MedeaSanctumReturn2, MSGBOX_DEFAULT
# 1760 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 24
# 1761 "data/maps/Colchis/scripts.pory"
	closemessage
# 1766 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1767 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn1, MSGBOX_DEFAULT
# 1768 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1772 "data/maps/Colchis/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, Colchis_Script_SanctumMedeaReturn_6
Colchis_Script_SanctumMedeaReturn_5:
# 1782 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SetupEscapeFromColchis
	return

Colchis_Script_SanctumMedeaReturn_2:
# 1748 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_MedeaSanctumReturn2A
	goto Colchis_Script_SanctumMedeaReturn_1

Colchis_Script_SanctumMedeaReturn_6:
# 1773 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceRight
# 1774 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1775 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1776 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonMedeaReturn2, MSGBOX_DEFAULT
# 1777 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1778 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceLeft
# 1779 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	goto Colchis_Script_SanctumMedeaReturn_5


Colchis_Script_SanctumJasonCheckMareep::
# 1789 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, IsShinyMareepInParty
# 1791 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_2
# 1796 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1797 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonGiveMeMareep, MSGBOX_DEFAULT
# 1798 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1800 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GiveJasonMareep, MSGBOX_YESNO
# 1802 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_5
# 1806 "data/maps/Colchis/scripts.pory"
	special ChoosePartyMon
# 1807 "data/maps/Colchis/scripts.pory"
	waitstate
# 1809 "data/maps/Colchis/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Colchis_Script_SanctumJasonCheckMareep_8
# 1813 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1815 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, SPECIES_MAREEP
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_11
# 1819 "data/maps/Colchis/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonIsShiny
# 1821 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Colchis_Script_SanctumJasonCheckMareep_14
# 1825 "data/maps/Colchis/scripts.pory"
	special BufferMonNickname
# 1826 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GaveShinyMareep, MSGBOX_DEFAULT
# 1827 "data/maps/Colchis/scripts.pory"
	closemessage
# 1828 "data/maps/Colchis/scripts.pory"
	special ReleaseChosenMon
# 1830 "data/maps/Colchis/scripts.pory"
	setflag FLAG_JASON_HAS_SHINYMAREEP
Colchis_Script_SanctumJasonCheckMareep_1:
	return

Colchis_Script_SanctumJasonCheckMareep_2:
# 1792 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_5:
# 1803 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonBattle
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_8:
# 1810 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_11:
# 1816 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1

Colchis_Script_SanctumJasonCheckMareep_14:
# 1822 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	goto Colchis_Script_SanctumJasonCheckMareep_1


Colchis_Script_SanctumJasonMareep::
# 1843 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumApproachJason
# 1846 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_SanctumJasonCheckMareep
	return


Colchis_Script_Exeunt::
# 1853 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 14
# 1855 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_Exeunt
# 1856 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_Exeunt
# 1857 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_Exeunt
# 1858 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1860 "data/maps/Colchis/scripts.pory"
	warpsilent MAP_BIG_ISLAND_N, 31, 37
	end


Colchis_Script_SetupEscapeFromColchis::
# 1866 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 1867 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonSanctumDepart, MSGBOX_DEFAULT
# 1868 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 1869 "data/maps/Colchis/scripts.pory"
	closemessage
# 1872 "data/maps/Colchis/scripts.pory"
	applymovement 54, Colchis_Movement_JasonAndMedeaExeunt
# 1873 "data/maps/Colchis/scripts.pory"
	applymovement 4, Colchis_Movement_JasonAndMedeaExeunt
# 1874 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 1878 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 54, 14, 0
# 1879 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 54, MOVEMENT_TYPE_INVISIBLE
# 1881 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 4, 15, 0
# 1882 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 1884 "data/maps/Colchis/scripts.pory"
	hideobjectat 54, MAP_COLCHIS
# 1885 "data/maps/Colchis/scripts.pory"
	hideobjectat 4, MAP_COLCHIS
# 1887 "data/maps/Colchis/scripts.pory"
	removeobject 54
# 1888 "data/maps/Colchis/scripts.pory"
	removeobject 4
# 1894 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_TrainerAeetes::
# 1907 "data/maps/Colchis/scripts.pory"
	lockall
# 1908 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1910 "data/maps/Colchis/scripts.pory"
	checktrainerflag TRAINER_AEETES
	goto_if 0, Colchis_Script_TrainerAeetes_2
# 1928 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1929 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1930 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
Colchis_Script_TrainerAeetes_1:
# 1932 "data/maps/Colchis/scripts.pory"
	closemessage
# 1933 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_TrainerAeetes_2:
# 1912 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1913 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesIntro, MSGBOX_DEFAULT
# 1914 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1915 "data/maps/Colchis/scripts.pory"
	closemessage
# 1916 "data/maps/Colchis/scripts.pory"
	trainerbattle_no_intro TRAINER_AEETES, Colchis_Text_AeetesLost
# 1917 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1918 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesPost, MSGBOX_DEFAULT
# 1919 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
# 1921 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_KEY
# 1923 "data/maps/Colchis/scripts.pory"
	load_field_pic 9, 190, 98
# 1924 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_AeetesFinal, MSGBOX_DEFAULT
# 1925 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 9
	goto Colchis_Script_TrainerAeetes_1


Colchis_Script_Bed::
# 1938 "data/maps/Colchis/scripts.pory"
	lockall
# 1939 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_Bed, MSGBOX_YESNO
# 1940 "data/maps/Colchis/scripts.pory"
	closemessage
# 1941 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_Bed_2
Colchis_Script_Bed_1:
# 1944 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_Bed_2:
# 1942 "data/maps/Colchis/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Colchis_Script_Bed_1


Colchis_Script_RingBlocker::
# 1949 "data/maps/Colchis/scripts.pory"
	lockall
# 1950 "data/maps/Colchis/scripts.pory"
	faceplayer
# 1953 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerIntro, MSGBOX_DEFAULT
# 1955 "data/maps/Colchis/scripts.pory"
	checkitem ITEM_COLCHIS_KEY, 1
# 1960 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Colchis_Script_RingBlocker_2
# 1991 "data/maps/Colchis/scripts.pory"
	closemessage
Colchis_Script_RingBlocker_1:
# 1995 "data/maps/Colchis/scripts.pory"
	releaseall
	end

Colchis_Script_RingBlocker_2:
# 1961 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerYesNo, MSGBOX_YESNO
# 1962 "data/maps/Colchis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Colchis_Script_RingBlocker_5
# 1987 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_RingBlockerDecline, MSGBOX_DEFAULT
# 1988 "data/maps/Colchis/scripts.pory"
	closemessage
	goto Colchis_Script_RingBlocker_1

Colchis_Script_RingBlocker_5:
# 1965 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_KeyFits, MSGBOX_DEFAULT
# 1966 "data/maps/Colchis/scripts.pory"
	closemessage
# 1967 "data/maps/Colchis/scripts.pory"
	removeitem ITEM_COLCHIS_KEY
# 1968 "data/maps/Colchis/scripts.pory"
	playse SE_EFFECTIVE
# 1970 "data/maps/Colchis/scripts.pory"
	hideobjectat 55, MAP_COLCHIS
# 1971 "data/maps/Colchis/scripts.pory"
	removeobject 55
# 1972 "data/maps/Colchis/scripts.pory"
	hideobjectat 56, MAP_COLCHIS
# 1973 "data/maps/Colchis/scripts.pory"
	removeobject 56
# 1974 "data/maps/Colchis/scripts.pory"
	hideobjectat 57, MAP_COLCHIS
# 1975 "data/maps/Colchis/scripts.pory"
	removeobject 57
# 1977 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 55, MOVEMENT_TYPE_INVISIBLE
# 1978 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 55, 1, 3
# 1979 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 56, MOVEMENT_TYPE_INVISIBLE
# 1980 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 56, 2, 3
# 1981 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 57, MOVEMENT_TYPE_INVISIBLE
# 1982 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 57, 3, 3
# 1984 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBARRIER
	goto Colchis_Script_RingBlocker_1


Colchis_Script_RingItem::
# 2000 "data/maps/Colchis/scripts.pory"
	lock
# 2001 "data/maps/Colchis/scripts.pory"
	faceplayer
# 2002 "data/maps/Colchis/scripts.pory"
	giveitem ITEM_COLCHIS_RING
# 2003 "data/maps/Colchis/scripts.pory"
	hideobjectat 58, MAP_COLCHIS
# 2004 "data/maps/Colchis/scripts.pory"
	removeobject 58
# 2005 "data/maps/Colchis/scripts.pory"
	setflag FLAG_COLCHIS_HIDERINGBALL
# 2006 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 58, MOVEMENT_TYPE_INVISIBLE
# 2007 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 58, 4, 3
# 2008 "data/maps/Colchis/scripts.pory"
	release
	end


# 2012 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 2013 "data/maps/Colchis/scripts.pory"
	walk_up
# 2013 "data/maps/Colchis/scripts.pory"
	walk_up
# 2013 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2016 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 2017 "data/maps/Colchis/scripts.pory"
	walk_down
# 2017 "data/maps/Colchis/scripts.pory"
	walk_down
# 2017 "data/maps/Colchis/scripts.pory"
	walk_down
# 2017 "data/maps/Colchis/scripts.pory"
	walk_down
# 2017 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2020 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 2021 "data/maps/Colchis/scripts.pory"
	walk_up
# 2021 "data/maps/Colchis/scripts.pory"
	walk_up
# 2021 "data/maps/Colchis/scripts.pory"
	walk_up
# 2021 "data/maps/Colchis/scripts.pory"
	walk_up
# 2021 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2024 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitA:
# 2025 "data/maps/Colchis/scripts.pory"
	walk_up
# 2025 "data/maps/Colchis/scripts.pory"
	walk_up
# 2025 "data/maps/Colchis/scripts.pory"
	walk_up
# 2025 "data/maps/Colchis/scripts.pory"
	walk_up
# 2025 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2028 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleExitB:
# 2029 "data/maps/Colchis/scripts.pory"
	walk_down
# 2029 "data/maps/Colchis/scripts.pory"
	walk_down
# 2029 "data/maps/Colchis/scripts.pory"
	walk_down
# 2029 "data/maps/Colchis/scripts.pory"
	walk_down
# 2029 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2032 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom:
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2033 "data/maps/Colchis/scripts.pory"
	walk_up
# 2034 "data/maps/Colchis/scripts.pory"
	walk_right
# 2034 "data/maps/Colchis/scripts.pory"
	walk_right
# 2034 "data/maps/Colchis/scripts.pory"
	walk_right
# 2034 "data/maps/Colchis/scripts.pory"
	walk_right
# 2034 "data/maps/Colchis/scripts.pory"
	walk_right
# 2035 "data/maps/Colchis/scripts.pory"
	walk_up
# 2035 "data/maps/Colchis/scripts.pory"
	walk_up
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2036 "data/maps/Colchis/scripts.pory"
	walk_right
# 2037 "data/maps/Colchis/scripts.pory"
	walk_up
# 2037 "data/maps/Colchis/scripts.pory"
	walk_up
# 2037 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2040 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan1:
# 2041 "data/maps/Colchis/scripts.pory"
	walk_up
# 2041 "data/maps/Colchis/scripts.pory"
	walk_up
# 2041 "data/maps/Colchis/scripts.pory"
	walk_up
# 2041 "data/maps/Colchis/scripts.pory"
	walk_up
# 2041 "data/maps/Colchis/scripts.pory"
	walk_up
# 2041 "data/maps/Colchis/scripts.pory"
	walk_up
# 2041 "data/maps/Colchis/scripts.pory"
	walk_up
# 2041 "data/maps/Colchis/scripts.pory"
	walk_up
# 2041 "data/maps/Colchis/scripts.pory"
	walk_up
# 2041 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2044 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaA:
# 2045 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2048 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_SpinInPlace:
# 2049 "data/maps/Colchis/scripts.pory"
	face_right
# 2050 "data/maps/Colchis/scripts.pory"
	face_up
# 2051 "data/maps/Colchis/scripts.pory"
	face_left
# 2052 "data/maps/Colchis/scripts.pory"
	face_down
# 2053 "data/maps/Colchis/scripts.pory"
	face_right
# 2054 "data/maps/Colchis/scripts.pory"
	face_up
# 2055 "data/maps/Colchis/scripts.pory"
	face_left
# 2056 "data/maps/Colchis/scripts.pory"
	face_down
# 2057 "data/maps/Colchis/scripts.pory"
	face_right
# 2058 "data/maps/Colchis/scripts.pory"
	face_up
# 2059 "data/maps/Colchis/scripts.pory"
	face_left
# 2060 "data/maps/Colchis/scripts.pory"
	face_down
# 2061 "data/maps/Colchis/scripts.pory"
	face_right
# 2062 "data/maps/Colchis/scripts.pory"
	face_up
# 2063 "data/maps/Colchis/scripts.pory"
	face_left
# 2064 "data/maps/Colchis/scripts.pory"
	face_down
# 2065 "data/maps/Colchis/scripts.pory"
	face_right
# 2066 "data/maps/Colchis/scripts.pory"
	face_up
# 2067 "data/maps/Colchis/scripts.pory"
	face_left
# 2068 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2071 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1A:
# 2072 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2072 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2073 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2076 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2A:
# 2077 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2077 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2078 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2081 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn:
# 2082 "data/maps/Colchis/scripts.pory"
	walk_left
# 2083 "data/maps/Colchis/scripts.pory"
	walk_up
# 2083 "data/maps/Colchis/scripts.pory"
	walk_up
# 2084 "data/maps/Colchis/scripts.pory"
	walk_right
# 2084 "data/maps/Colchis/scripts.pory"
	walk_right
# 2085 "data/maps/Colchis/scripts.pory"
	walk_down
# 2085 "data/maps/Colchis/scripts.pory"
	walk_down
# 2086 "data/maps/Colchis/scripts.pory"
	walk_left
# 2087 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2090 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CircleColumn2:
# 2091 "data/maps/Colchis/scripts.pory"
	walk_left
# 2092 "data/maps/Colchis/scripts.pory"
	walk_up
# 2092 "data/maps/Colchis/scripts.pory"
	walk_up
# 2093 "data/maps/Colchis/scripts.pory"
	walk_right
# 2093 "data/maps/Colchis/scripts.pory"
	walk_right
# 2094 "data/maps/Colchis/scripts.pory"
	walk_down
# 2094 "data/maps/Colchis/scripts.pory"
	walk_down
# 2095 "data/maps/Colchis/scripts.pory"
	walk_left
# 2096 "data/maps/Colchis/scripts.pory"
	face_down
# 2097 "data/maps/Colchis/scripts.pory"
	walk_left
# 2098 "data/maps/Colchis/scripts.pory"
	walk_up
# 2098 "data/maps/Colchis/scripts.pory"
	walk_up
# 2099 "data/maps/Colchis/scripts.pory"
	walk_right
# 2099 "data/maps/Colchis/scripts.pory"
	walk_right
# 2100 "data/maps/Colchis/scripts.pory"
	walk_down
# 2100 "data/maps/Colchis/scripts.pory"
	walk_down
# 2101 "data/maps/Colchis/scripts.pory"
	walk_left
# 2102 "data/maps/Colchis/scripts.pory"
	face_down
# 2103 "data/maps/Colchis/scripts.pory"
	walk_left
# 2104 "data/maps/Colchis/scripts.pory"
	walk_up
# 2104 "data/maps/Colchis/scripts.pory"
	walk_up
# 2105 "data/maps/Colchis/scripts.pory"
	walk_right
# 2105 "data/maps/Colchis/scripts.pory"
	walk_right
# 2106 "data/maps/Colchis/scripts.pory"
	walk_down
# 2106 "data/maps/Colchis/scripts.pory"
	walk_down
# 2107 "data/maps/Colchis/scripts.pory"
	walk_left
# 2108 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2111 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_CameraPan2:
# 2112 "data/maps/Colchis/scripts.pory"
	walk_down
# 2112 "data/maps/Colchis/scripts.pory"
	walk_down
# 2112 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2115 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3A:
# 2116 "data/maps/Colchis/scripts.pory"
	walk_right
# 2116 "data/maps/Colchis/scripts.pory"
	walk_right
# 2117 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2120 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4A:
# 2121 "data/maps/Colchis/scripts.pory"
	walk_left
# 2121 "data/maps/Colchis/scripts.pory"
	walk_left
# 2122 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2125 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_MedeaB:
# 2126 "data/maps/Colchis/scripts.pory"
	walk_down
# 2127 "data/maps/Colchis/scripts.pory"
	face_left
# 2128 "data/maps/Colchis/scripts.pory"
	face_up
# 2129 "data/maps/Colchis/scripts.pory"
	face_right
# 2130 "data/maps/Colchis/scripts.pory"
	face_down
# 2131 "data/maps/Colchis/scripts.pory"
	walk_down
# 2132 "data/maps/Colchis/scripts.pory"
	face_left
# 2133 "data/maps/Colchis/scripts.pory"
	face_up
# 2134 "data/maps/Colchis/scripts.pory"
	face_right
# 2135 "data/maps/Colchis/scripts.pory"
	face_down
# 2136 "data/maps/Colchis/scripts.pory"
	walk_down
# 2137 "data/maps/Colchis/scripts.pory"
	face_left
# 2138 "data/maps/Colchis/scripts.pory"
	face_up
# 2139 "data/maps/Colchis/scripts.pory"
	face_right
# 2140 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2143 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5A:
# 2144 "data/maps/Colchis/scripts.pory"
	walk_right
# 2145 "data/maps/Colchis/scripts.pory"
	walk_up
# 2146 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2147 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2150 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6A:
# 2151 "data/maps/Colchis/scripts.pory"
	walk_left
# 2152 "data/maps/Colchis/scripts.pory"
	walk_up
# 2153 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2154 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2157 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1B:
# 2158 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
# 2159 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2162 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2B:
# 2163 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
# 2164 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2167 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer3B:
# 2168 "data/maps/Colchis/scripts.pory"
	walk_left
# 2169 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2172 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer4B:
# 2173 "data/maps/Colchis/scripts.pory"
	walk_right
# 2174 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2177 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5B:
# 2178 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
# 2179 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2182 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6B:
# 2183 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
# 2184 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2187 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer1C:
# 2188 "data/maps/Colchis/scripts.pory"
	walk_diag_southeast
	step_end

# 2191 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer2C:
# 2192 "data/maps/Colchis/scripts.pory"
	walk_diag_southwest
	step_end

# 2195 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer5C:
# 2196 "data/maps/Colchis/scripts.pory"
	walk_diag_northeast
	step_end

# 2200 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaDance_Dancer6C:
# 2201 "data/maps/Colchis/scripts.pory"
	walk_diag_northwest
	step_end

# 2204 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAmbush:
# 2205 "data/maps/Colchis/scripts.pory"
	walk_up
# 2205 "data/maps/Colchis/scripts.pory"
	walk_up
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
Colchis_Movement_IntroGruntM1:
# 2209 "data/maps/Colchis/scripts.pory"
	walk_right
# 2209 "data/maps/Colchis/scripts.pory"
	walk_right
# 2209 "data/maps/Colchis/scripts.pory"
	walk_right
# 2209 "data/maps/Colchis/scripts.pory"
	walk_right
# 2209 "data/maps/Colchis/scripts.pory"
	walk_right
# 2209 "data/maps/Colchis/scripts.pory"
	walk_right
# 2209 "data/maps/Colchis/scripts.pory"
	walk_right
# 2209 "data/maps/Colchis/scripts.pory"
	walk_right
# 2210 "data/maps/Colchis/scripts.pory"
	walk_down
# 2210 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2213 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM2:
# 2214 "data/maps/Colchis/scripts.pory"
	walk_right
# 2214 "data/maps/Colchis/scripts.pory"
	walk_right
# 2214 "data/maps/Colchis/scripts.pory"
	walk_right
# 2214 "data/maps/Colchis/scripts.pory"
	walk_right
# 2214 "data/maps/Colchis/scripts.pory"
	walk_right
# 2214 "data/maps/Colchis/scripts.pory"
	walk_right
# 2214 "data/maps/Colchis/scripts.pory"
	walk_right
# 2215 "data/maps/Colchis/scripts.pory"
	walk_down
# 2215 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2218 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntM3:
# 2219 "data/maps/Colchis/scripts.pory"
	walk_right
# 2219 "data/maps/Colchis/scripts.pory"
	walk_right
# 2219 "data/maps/Colchis/scripts.pory"
	walk_right
# 2219 "data/maps/Colchis/scripts.pory"
	walk_right
# 2219 "data/maps/Colchis/scripts.pory"
	walk_right
# 2219 "data/maps/Colchis/scripts.pory"
	walk_right
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
# 2220 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2223 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF1:
# 2224 "data/maps/Colchis/scripts.pory"
	walk_right
# 2224 "data/maps/Colchis/scripts.pory"
	walk_right
# 2224 "data/maps/Colchis/scripts.pory"
	walk_right
# 2224 "data/maps/Colchis/scripts.pory"
	walk_right
# 2224 "data/maps/Colchis/scripts.pory"
	walk_right
# 2224 "data/maps/Colchis/scripts.pory"
	walk_right
# 2224 "data/maps/Colchis/scripts.pory"
	walk_right
# 2224 "data/maps/Colchis/scripts.pory"
	walk_right
# 2225 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2228 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF2:
# 2229 "data/maps/Colchis/scripts.pory"
	walk_right
# 2229 "data/maps/Colchis/scripts.pory"
	walk_right
# 2229 "data/maps/Colchis/scripts.pory"
	walk_right
# 2229 "data/maps/Colchis/scripts.pory"
	walk_right
# 2229 "data/maps/Colchis/scripts.pory"
	walk_right
# 2229 "data/maps/Colchis/scripts.pory"
	walk_right
# 2229 "data/maps/Colchis/scripts.pory"
	walk_right
# 2230 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2233 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroGruntF3:
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2234 "data/maps/Colchis/scripts.pory"
	walk_right
# 2235 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2238 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom1:
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2239 "data/maps/Colchis/scripts.pory"
	walk_up
# 2240 "data/maps/Colchis/scripts.pory"
	walk_right
# 2240 "data/maps/Colchis/scripts.pory"
	walk_right
# 2240 "data/maps/Colchis/scripts.pory"
	walk_right
# 2240 "data/maps/Colchis/scripts.pory"
	walk_right
# 2240 "data/maps/Colchis/scripts.pory"
	walk_right
# 2240 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2243 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom2:
# 2244 "data/maps/Colchis/scripts.pory"
	walk_right
# 2244 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2247 "data/maps/Colchis/scripts.pory"
Colchis_Movement_EnterThroneRoom3:
# 2248 "data/maps/Colchis/scripts.pory"
	walk_up
# 2248 "data/maps/Colchis/scripts.pory"
	walk_up
# 2248 "data/maps/Colchis/scripts.pory"
	walk_up
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2249 "data/maps/Colchis/scripts.pory"
	walk_right
# 2250 "data/maps/Colchis/scripts.pory"
	walk_up
# 2250 "data/maps/Colchis/scripts.pory"
	walk_up
# 2250 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2253 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerApproachAeetes:
# 2254 "data/maps/Colchis/scripts.pory"
	walk_up
# 2254 "data/maps/Colchis/scripts.pory"
	walk_up
# 2254 "data/maps/Colchis/scripts.pory"
	walk_up
# 2254 "data/maps/Colchis/scripts.pory"
	walk_up
# 2254 "data/maps/Colchis/scripts.pory"
	walk_up
# 2254 "data/maps/Colchis/scripts.pory"
	walk_up
# 2254 "data/maps/Colchis/scripts.pory"
	walk_up
# 2254 "data/maps/Colchis/scripts.pory"
	walk_up
# 2254 "data/maps/Colchis/scripts.pory"
	walk_up
# 2254 "data/maps/Colchis/scripts.pory"
	walk_up
# 2254 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2257 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonApproachAeetes:
# 2258 "data/maps/Colchis/scripts.pory"
	walk_up
# 2258 "data/maps/Colchis/scripts.pory"
	walk_up
# 2258 "data/maps/Colchis/scripts.pory"
	walk_up
# 2258 "data/maps/Colchis/scripts.pory"
	walk_up
# 2258 "data/maps/Colchis/scripts.pory"
	walk_up
# 2258 "data/maps/Colchis/scripts.pory"
	walk_up
# 2258 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2261 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaFaceAeetes:
# 2262 "data/maps/Colchis/scripts.pory"
	walk_left
# 2263 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2266 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonFaceAeetes:
# 2267 "data/maps/Colchis/scripts.pory"
	walk_up
# 2268 "data/maps/Colchis/scripts.pory"
	walk_right
# 2269 "data/maps/Colchis/scripts.pory"
	face_up
	step_end

# 2273 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerFaceAeetes:
# 2274 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2277 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard1:
# 2278 "data/maps/Colchis/scripts.pory"
	walk_right
# 2278 "data/maps/Colchis/scripts.pory"
	walk_right
# 2279 "data/maps/Colchis/scripts.pory"
	walk_down
# 2280 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2283 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard2:
# 2284 "data/maps/Colchis/scripts.pory"
	walk_left
# 2285 "data/maps/Colchis/scripts.pory"
	face_down
	step_end

# 2288 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard3:
# 2289 "data/maps/Colchis/scripts.pory"
	walk_right
# 2290 "data/maps/Colchis/scripts.pory"
	walk_up
# 2291 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2294 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuard4:
# 2295 "data/maps/Colchis/scripts.pory"
	walk_left
# 2296 "data/maps/Colchis/scripts.pory"
	walk_up
# 2297 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2300 "data/maps/Colchis/scripts.pory"
Colchis_Movement_RoyalGuardExit:
# 2301 "data/maps/Colchis/scripts.pory"
	walk_down
# 2301 "data/maps/Colchis/scripts.pory"
	walk_down
# 2301 "data/maps/Colchis/scripts.pory"
	walk_down
# 2301 "data/maps/Colchis/scripts.pory"
	walk_down
# 2301 "data/maps/Colchis/scripts.pory"
	walk_down
# 2301 "data/maps/Colchis/scripts.pory"
	walk_down
# 2301 "data/maps/Colchis/scripts.pory"
	walk_down
# 2301 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2304 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonPrisonApproachPlayer:
# 2305 "data/maps/Colchis/scripts.pory"
	walk_up
# 2305 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2308 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonApproachPlayer:
# 2309 "data/maps/Colchis/scripts.pory"
	walk_up
# 2309 "data/maps/Colchis/scripts.pory"
	walk_up
# 2309 "data/maps/Colchis/scripts.pory"
	walk_up
# 2309 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2312 "data/maps/Colchis/scripts.pory"
Common_Movement_MedeaPrisonExit:
# 2313 "data/maps/Colchis/scripts.pory"
	walk_down
# 2313 "data/maps/Colchis/scripts.pory"
	walk_down
# 2313 "data/maps/Colchis/scripts.pory"
	walk_down
# 2313 "data/maps/Colchis/scripts.pory"
	walk_down
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2314 "data/maps/Colchis/scripts.pory"
	walk_left
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2315 "data/maps/Colchis/scripts.pory"
	walk_down
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2316 "data/maps/Colchis/scripts.pory"
	walk_right
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2317 "data/maps/Colchis/scripts.pory"
	walk_down
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
# 2318 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2321 "data/maps/Colchis/scripts.pory"
Common_Movement_JasonPrisonExit:
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
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2323 "data/maps/Colchis/scripts.pory"
	walk_left
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2324 "data/maps/Colchis/scripts.pory"
	walk_down
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2325 "data/maps/Colchis/scripts.pory"
	walk_right
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2326 "data/maps/Colchis/scripts.pory"
	walk_down
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
# 2327 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2330 "data/maps/Colchis/scripts.pory"
Common_Movement_PlayerPrisonExit:
# 2331 "data/maps/Colchis/scripts.pory"
	walk_down
# 2331 "data/maps/Colchis/scripts.pory"
	walk_down
# 2331 "data/maps/Colchis/scripts.pory"
	walk_down
# 2331 "data/maps/Colchis/scripts.pory"
	walk_down
# 2331 "data/maps/Colchis/scripts.pory"
	walk_down
# 2331 "data/maps/Colchis/scripts.pory"
	walk_down
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2332 "data/maps/Colchis/scripts.pory"
	walk_left
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2333 "data/maps/Colchis/scripts.pory"
	walk_down
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2334 "data/maps/Colchis/scripts.pory"
	walk_right
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2335 "data/maps/Colchis/scripts.pory"
	walk_down
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
# 2336 "data/maps/Colchis/scripts.pory"
	walk_left
	step_end

# 2339 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum1:
# 2340 "data/maps/Colchis/scripts.pory"
	walk_left
# 2340 "data/maps/Colchis/scripts.pory"
	walk_left
# 2340 "data/maps/Colchis/scripts.pory"
	walk_left
# 2341 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2344 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum2:
# 2345 "data/maps/Colchis/scripts.pory"
	walk_down
# 2346 "data/maps/Colchis/scripts.pory"
	walk_right
# 2346 "data/maps/Colchis/scripts.pory"
	walk_right
# 2346 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

# 2349 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum1:
# 2350 "data/maps/Colchis/scripts.pory"
	walk_up
# 2350 "data/maps/Colchis/scripts.pory"
	walk_up
# 2350 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2353 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum2:
# 2354 "data/maps/Colchis/scripts.pory"
	walk_up
# 2354 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2357 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3A:
# 2358 "data/maps/Colchis/scripts.pory"
	walk_up
# 2358 "data/maps/Colchis/scripts.pory"
	walk_up
# 2359 "data/maps/Colchis/scripts.pory"
	walk_right
# 2359 "data/maps/Colchis/scripts.pory"
	walk_right
# 2360 "data/maps/Colchis/scripts.pory"
	walk_up
# 2360 "data/maps/Colchis/scripts.pory"
	walk_up
# 2360 "data/maps/Colchis/scripts.pory"
	walk_up
# 2360 "data/maps/Colchis/scripts.pory"
	walk_up
# 2360 "data/maps/Colchis/scripts.pory"
	walk_up
# 2360 "data/maps/Colchis/scripts.pory"
	walk_up
# 2360 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2363 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctum3B:
# 2364 "data/maps/Colchis/scripts.pory"
	walk_up
# 2364 "data/maps/Colchis/scripts.pory"
	walk_up
# 2365 "data/maps/Colchis/scripts.pory"
	walk_right
# 2366 "data/maps/Colchis/scripts.pory"
	walk_up
# 2366 "data/maps/Colchis/scripts.pory"
	walk_up
# 2366 "data/maps/Colchis/scripts.pory"
	walk_up
# 2366 "data/maps/Colchis/scripts.pory"
	walk_up
# 2366 "data/maps/Colchis/scripts.pory"
	walk_up
# 2366 "data/maps/Colchis/scripts.pory"
	walk_up
# 2366 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 2369 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3A:
# 2370 "data/maps/Colchis/scripts.pory"
	walk_down
# 2371 "data/maps/Colchis/scripts.pory"
	walk_right
# 2372 "data/maps/Colchis/scripts.pory"
	walk_down
# 2372 "data/maps/Colchis/scripts.pory"
	walk_down
# 2373 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2376 "data/maps/Colchis/scripts.pory"
Colchis_Movement_PlayerSanctum3B:
# 2377 "data/maps/Colchis/scripts.pory"
	walk_down
# 2377 "data/maps/Colchis/scripts.pory"
	walk_down
# 2377 "data/maps/Colchis/scripts.pory"
	walk_down
# 2378 "data/maps/Colchis/scripts.pory"
	face_left
	step_end

# 2381 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn:
# 2382 "data/maps/Colchis/scripts.pory"
	walk_down
# 2382 "data/maps/Colchis/scripts.pory"
	walk_down
# 2382 "data/maps/Colchis/scripts.pory"
	walk_down
# 2382 "data/maps/Colchis/scripts.pory"
	walk_down
# 2382 "data/maps/Colchis/scripts.pory"
	walk_down
# 2382 "data/maps/Colchis/scripts.pory"
	walk_down
# 2382 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2385 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2A:
# 2386 "data/maps/Colchis/scripts.pory"
	walk_down
# 2387 "data/maps/Colchis/scripts.pory"
	walk_left
# 2387 "data/maps/Colchis/scripts.pory"
	walk_left
# 2388 "data/maps/Colchis/scripts.pory"
	walk_down
# 2389 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2392 "data/maps/Colchis/scripts.pory"
Colchis_Movement_MedeaSanctumReturn2B:
# 2393 "data/maps/Colchis/scripts.pory"
	walk_down
# 2394 "data/maps/Colchis/scripts.pory"
	walk_left
# 2395 "data/maps/Colchis/scripts.pory"
	walk_down
# 2396 "data/maps/Colchis/scripts.pory"
	face_right
	step_end

# 2399 "data/maps/Colchis/scripts.pory"
Colchis_Movement_Exeunt:
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2400 "data/maps/Colchis/scripts.pory"
	walk_right
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2401 "data/maps/Colchis/scripts.pory"
	walk_up
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2402 "data/maps/Colchis/scripts.pory"
	walk_left
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
# 2403 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 2406 "data/maps/Colchis/scripts.pory"
Colchis_Movement_JasonAndMedeaExeunt:
# 2407 "data/maps/Colchis/scripts.pory"
	walk_down
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
# 2408 "data/maps/Colchis/scripts.pory"
	walk_right
# 2408 "data/maps/Colchis/scripts.pory"
	walk_right
# 2408 "data/maps/Colchis/scripts.pory"
	walk_right
# 2408 "data/maps/Colchis/scripts.pory"
	walk_right
	step_end

Colchis_Script_LugiaTest_Text_0:
# 1509 "data/maps/Colchis/scripts.pory"
	.string "TEST$"

Colchis_Script_SanctumMedeaReturn_Text_0:
# 1732 "data/maps/Colchis/scripts.pory"
	.string "OIMOIAY!\nOOIIMMOOIIAAYY!!$"

Colchis_Text_JasonIntro1::
# 2411 "data/maps/Colchis/scripts.pory"
	.string "Let us set out to claim Shiny Mareep.$"

Colchis_Text_JasonIntro2::
# 2415 "data/maps/Colchis/scripts.pory"
	.string "Ambush!$"

Colchis_Text_JasonIntro3::
# 2419 "data/maps/Colchis/scripts.pory"
	.string "We're hopelessly outnumbered but they\n"
	.string "don't attack.$"

Colchis_Text_JasonIntro4::
# 2423 "data/maps/Colchis/scripts.pory"
	.string "Greetings! I am Jason, captain of the\n"
	.string "Argo. We come in peace.$"

Colchis_Text_JasonIntro5::
# 2427 "data/maps/Colchis/scripts.pory"
	.string "We have no choice. We'll have to go with\n"
	.string "them.$"

Colchis_Text_JasonIntro6::
# 2431 "data/maps/Colchis/scripts.pory"
	.string "We'll go with you. Bring us before your\n"
	.string "king.$"

Colchis_Text_GruntIntro1::
# 2436 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway otay Olchiscay Asonjay ofay\n"
	.string "Argoay.$"

Colchis_Text_GruntIntro2::
# 2441 "data/maps/Colchis/scripts.pory"
	.string "Aeetesay ingkay ofay Olchiscay\n"
	.string "awaitsay ouyay.$"

Colchis_Text_JasonIntroAccept::
# 2445 "data/maps/Colchis/scripts.pory"
	.string "Very well then. We'll meet King Aeetes.$"

Colchis_Text_JasonIntroDecline::
# 2449 "data/maps/Colchis/scripts.pory"
	.string "A noble choice. To arms then!$"

Colchis_Text_JasonIntroDeclined::
# 2453 "data/maps/Colchis/scripts.pory"
	.string "Seek Mareep!$"

Colchis_Text_Medea1::
# 2462 "data/maps/Colchis/scripts.pory"
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
# 2467 "data/maps/Colchis/scripts.pory"
	.string "Omecay orwardfay Asonjay. Eakspay\n"
	.string "ithway Aeetesay.$"

Colchis_Text_Aeetes2::
# 2476 "data/maps/Colchis/scripts.pory"
	.string "Elcomeway ightymay aptaincay ofay\n"
	.string "ethay Argoay. Eway avehay allay\l"
	.string "eardhay ofay ouryay eroichay eedsday,\l"
	.string "ostmay eservingday anay onorablehay\l"
	.string "eastfay, utbay irstfay elltay emay\l"
	.string "ywhay ou'veyay omecay otay Olchiscay.$"

Colchis_Text_JasonAeetes::
# 2480 "data/maps/Colchis/scripts.pory"
	.string "We come in peace...$"

Colchis_Text_Aeetes3::
# 2489 "data/maps/Colchis/scripts.pory"
	.string "Iay askeday ouyay ywhay, otnay owhay!\n"
	.string "Iay owknay ou'veyay omecay otay\l"
	.string "aimclay inyshay Areepmay anday atthay\l"
	.string "ifay ouyay annotcay inway argainingbay\l"
	.string "ouyay anplay otay ealstay oray evenay\l"
	.string "illkay...$"

Colchis_Text_Medea2::
# 2495 "data/maps/Colchis/scripts.pory"
	.string "Apapay! Iay egbay ouryay ajestymay\n"
	.string "otay owshay estraintay.$"

Colchis_Text_Aeetes4::
# 2508 "data/maps/Colchis/scripts.pory"
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
# 2520 "data/maps/Colchis/scripts.pory"
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
# 2524 "data/maps/Colchis/scripts.pory"
	.string "Eirthay oomday ashay eenbay\n"
	.string "onouncedpray. Iay avehay okenspay.\l"
	.string "Assembleay oyalray uardsray!$"

Colchis_Text_Aeetes6::
# 2528 "data/maps/Colchis/scripts.pory"
	.string "Aketay emthay otay ailjay.$"

Colchis_Text_Medea4::
# 2532 "data/maps/Colchis/scripts.pory"
	.string "Onaaaaaaaaaaaaaaaaayyyyyyyyyyyyy$"

Colchis_Text_Aeetes7::
# 2536 "data/maps/Colchis/scripts.pory"
	.string "Oday otnay eepway atthay ouryay\n"
	.string "ingkay eepskay Olchiscay afesay.$"

Colchis_Text_JasonPrison1::
# 2540 "data/maps/Colchis/scripts.pory"
	.string "Release me! I'm the great Captain\n"
	.string "Jason!$"

Colchis_Text_JasonPrison2::
# 2544 "data/maps/Colchis/scripts.pory"
	.string "The quest is lost. I fear I've failed us\n"
	.string "both...$"

Colchis_Text_MedeaPrison1::
# 2553 "data/maps/Colchis/scripts.pory"
	.string "Ostmay oblenay Asonjay easeplay\n"
	.string "orgetfay ouryay earsfay. I'veay omecay\l"
	.string "otay ouyay, againstay ymay ather'sfay\l"
	.string "illway, otay avesay ouyay omfray isthay\l"
	.string "ungloriousay atefay.$"

Colchis_Text_JasonPrison3::
# 2557 "data/maps/Colchis/scripts.pory"
	.string "You are a witch! Why should I trust you\n"
	.string "now?$"

Colchis_Text_MedeaPrison2::
# 2575 "data/maps/Colchis/scripts.pory"
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
# 2579 "data/maps/Colchis/scripts.pory"
	.string "Truly Medea your words reach my heart\n"
	.string "and scrub the barnacles of suspicion\l"
	.string "rigorously from my enamoured soul. If\l"
	.string "what you say is true, that all Colchis is\l"
	.string "but a paltry sum compared to me, then\l"
	.string "what I ask of you should be minor. Give\l"
	.string "me shiny Mareep as your dowry and I will\l"
	.string "make you Queen of the Argo.$"

Colchis_Text_MedeaPrison3::
# 2584 "data/maps/Colchis/scripts.pory"
	.string "Iay illway oday isthay anday oremay\n"
	.string "orfay ouyay ymay ovelay.$"

Colchis_Text_JasonPrison5::
# 2588 "data/maps/Colchis/scripts.pory"
	.string "Medea is our one and only hope. Lets go\n"
	.string "with her and win shiny Mareep!$"

Colchis_Text_JasonPrison6::
# 2592 "data/maps/Colchis/scripts.pory"
	.string "Let it be so then lovely Medea. We'll go\n"
	.string "with you but how can we expect to bring\l"
	.string "shiny Mareep out of this place when\l"
	.string "countless are the men who guard the\l"
	.string "doors? Indeed you may be able to\l"
	.string "persuade many but more yet remain loyal\l"
	.string "to the wicked king, your hard hearted\l"
	.string "father.$"

Colchis_Text_MedeaPrison4::
# 2599 "data/maps/Colchis/scripts.pory"
	.string "On'tday orryway eetsway, Iay utpay aay\n"
	.string "ellspay onay emthay. Asay onglay asay\l"
	.string "ou'reyay ithway emay eythey allay\l"
	.string "illway eeplslay. Ownay Iay illway eadlay\l"
	.string "ouyay otay inyshay Areepmay.$"

Colchis_Text_MedeaSanctum1::
# 2603 "data/maps/Colchis/scripts.pory"
	.string "Alloway emay otay openay ethay ayway\n"
	.string "orfay ouyay.$"

Colchis_Text_MedeaSanctum2::
# 2629 "data/maps/Colchis/scripts.pory"
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
# 2637 "data/maps/Colchis/scripts.pory"
	.string "I will not leave without shiny Mareep\n"
	.string "but neither will I become seperate from\l"
	.string "my soulmate, the enchanting Medea.$"

Colchis_Text_JasonSanctum2::
# 2641 "data/maps/Colchis/scripts.pory"
	.string "Therefore I trust you to complete this\n"
	.string "quest. Go forth and bring me back shiny\l"
	.string "Mareep.$"

Colchis_Text_MedeaSanctum3::
# 2654 "data/maps/Colchis/scripts.pory"
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
# 2658 "data/maps/Colchis/scripts.pory"
	.string "Do not interrupt my private time with\n"
	.string "Medea 'till you bring shiny Mareep.$"

Colchis_Text_MedeaSanctumTrigger1::
# 2663 "data/maps/Colchis/scripts.pory"
	.string "Ememberray, ingbray onay armhay otay\n"
	.string "Ugialay.$"

Colchis_Text_JasonSanctumTrigger2::
# 2667 "data/maps/Colchis/scripts.pory"
	.string "Have you returned bringing Shiny\n"
	.string "Mareep?$"

Colchis_Text_MedeaSanctumTrigger2::
# 2672 "data/maps/Colchis/scripts.pory"
	.string "Ymay oughtsthay etraybay emay.\n"
	.string "Excuseay emay Asonjay, againstay ymay\l"
	.string "ownay adviceay Iay ustmay aketay\l"
	.string "eavelay ofay ouyay anday eesay atthay\l"
	.string "Ugialay isay afesay.$"

Colchis_Text_JasonSanctumTrigger3::
# 2676 "data/maps/Colchis/scripts.pory"
	.string "How could you fail? You only had one\n"
	.string "job! My quest has failed and it was all\l"
	.string "your fault! Now you will pay the price.\l"
	.string "Go Nosepass!$"

Colchis_Text_JasonLost::
# 2680 "data/maps/Colchis/scripts.pory"
	.string "I curse that day I saved you from the\n"
	.string "surf.$"

Colchis_Text_JasonPost::
# 2684 "data/maps/Colchis/scripts.pory"
	.string "The most wicked betrayal of all my\n"
	.string "life...$"

Colchis_Text_JasonGiveMeMareep::
# 2688 "data/maps/Colchis/scripts.pory"
	.string "I see that you have completed the\n"
	.string "quest. Give me shiny Mareep and let's be\l"
	.string "done.$"

Colchis_Text_GiveJasonMareep::
# 2692 "data/maps/Colchis/scripts.pory"
	.string "Will you give Jason shiny Mareep?$"

Colchis_Text_GaveShinyMareep::
# 2696 "data/maps/Colchis/scripts.pory"
	.string "You gave {STR_VAR_1} to Jason!\p"
	.string "Bye Bye {STR_VAR_1}!$"

Colchis_Text_CultistMPre::
# 2701 "data/maps/Colchis/scripts.pory"
	.string "Espassertray opstay! Allfay intoay\n"
	.string "othingnessnay$"

Colchis_Text_CultistMLost::
# 2706 "data/maps/Colchis/scripts.pory"
	.string "Ethay everlastingay arknessday\n"
	.string "overscay allay.$"

Colchis_Text_CultistMPost::
# 2711 "data/maps/Colchis/scripts.pory"
	.string "Ouyay aymay avehay onway utbay\n"
	.string "ou'llyay evernay escapeay.$"

Colchis_Text_MedeaSanctumReturn1::
# 2716 "data/maps/Colchis/scripts.pory"
	.string "Ouyay onstermay! Owhay ouldcay ouyay\n"
	.string "oday isthay otay emay?$"

Colchis_Text_MedeaSanctumReturn2::
# 2721 "data/maps/Colchis/scripts.pory"
	.string "Ymay ovelay, ehay ashay attackeday\n"
	.string "ymay Ugialay! Iay illway onay ongerlay\l"
	.string "elphay imhay eavelay Olchiscay.$"

Colchis_Text_JasonMedeaReturn1::
# 2725 "data/maps/Colchis/scripts.pory"
	.string "Please, do not cry beloved Medea. Lend\n"
	.string "love the power to hold back your tears.$"

Colchis_Text_JasonMedeaReturn2::
# 2729 "data/maps/Colchis/scripts.pory"
	.string "Hey, I apologize for Medea. I know she's\n"
	.string "acting up, but we're still cool. Give it\l"
	.string "some time I'll get her to cool down. When\l"
	.string "you get out meet me in Bulbus town and\l"
	.string "I'll repay you for shiny Mareep.$"

Colchis_Text_JasonSanctumWilds::
# 2733 "data/maps/Colchis/scripts.pory"
	.string "Alas! Medea! My quest for shiny Mareep\n"
	.string "has failed and now we're vagabonds.$"

Colchis_Text_JasonSanctumDepart::
# 2737 "data/maps/Colchis/scripts.pory"
	.string "Let us depart and leave this one\n"
	.string "behind.$"

Colchis_Text_Bed::
# 2741 "data/maps/Colchis/scripts.pory"
	.string "It's a big comfy bed!\n"
	.string "Would you like to take a rest?$"

Colchis_Text_RingBlockerIntro::
# 2745 "data/maps/Colchis/scripts.pory"
	.string "It's a large metal barrier with a keyhole\n"
	.string "in the center.$"

Colchis_Text_KeyFits::
# 2749 "data/maps/Colchis/scripts.pory"
	.string "The key fits into the keyhole!\n"
	.string "The barriers sink into the ground but\l"
	.string "the key broke off inside!$"

Colchis_Text_RingBlockerDecline::
# 2753 "data/maps/Colchis/scripts.pory"
	.string "Better not try using the key here.$"

Colchis_Text_RingBlockerYesNo::
# 2757 "data/maps/Colchis/scripts.pory"
	.string "Would you like to try using the Colchis\n"
	.string "Key?$"

Colchis_Text_AeetesIntro::
# 2767 "data/maps/Colchis/scripts.pory"
	.string "Ouryay insolentay invasionay ofay\n"
	.string "ouray airfay anday ightymay ingdomkay\l"
	.string "isay ownay atay anay enday. ouryay\l"
	.string "illway ownay earnlay ethay uetray\l"
	.string "owerpay ofay Ingkay Aeetesay.$"

Colchis_Text_AeetesLost::
# 2772 "data/maps/Colchis/scripts.pory"
	.string "Ownay ymay ingdomkay ashay allenfay.$"

Colchis_Text_AeetesPost::
# 2785 "data/maps/Colchis/scripts.pory"
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
# 2790 "data/maps/Colchis/scripts.pory"
	.string "Ymay ifelay ashay eenbay educedray\n"
	.string "otay aughtnay. Eavelay emay.$"
