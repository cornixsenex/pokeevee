MareS9_MapScripts::
# 12 "data/maps/MareS9/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/MareS9/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS9_F
# 16 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 1
	goto_if_eq MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 24 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_eq MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_SetupAeneid0
	goto MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_SetupAeneid1
	goto MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 25 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_SetupAeneid2
	return


MareS9_Script_Transition_MareTropicum::
# 33 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 3
# 34 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 35 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_MareSubtropicum::
# 39 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 2
# 40 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 41 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_IslaHesperia::
# 45 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 4
# 46 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 47 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_Tropicana::
# 51 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 5
# 52 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 53 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_IslaTropica::
# 57 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 1
# 58 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 59 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_SetupAeneid0::
# 65 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_PRISTIS, 15, 36
# 66 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_PRISTIS, MOVEMENT_TYPE_FACE_DOWN
# 68 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 19, 36
# 69 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 71 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_FAUSTULUS, 18, 36
# 72 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_FAUSTULUS, MOVEMENT_TYPE_FACE_DOWN
# 74 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_BEROE, 16, 36
# 75 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_BEROE, MOVEMENT_TYPE_FACE_DOWN
# 77 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ASCANIUS, 16, 40
# 78 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ASCANIUS, MOVEMENT_TYPE_LOOK_AROUND
# 80 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 14, 41
# 81 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 83 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 17, 38
# 84 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_WALK_DOWN_AND_UP
# 86 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN1, 34, 32
# 87 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_FACE_DOWN
	return


MareS9_Script_SetupAeneid1::
# 93 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_ShowTyriansFixingPristis
# 94 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 0, 0
# 95 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_INVISIBLE
	return


MareS9_Script_SetupAeneid2::
# 101 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_PRISTIS, 15, 36
# 102 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_PRISTIS, MOVEMENT_TYPE_FACE_DOWN
# 104 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ASCANIUS, 16, 40
# 105 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ASCANIUS, MOVEMENT_TYPE_LOOK_AROUND
# 107 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 14, 41
# 108 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 110 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 17, 38
# 111 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_WALK_DOWN_AND_UP
# 113 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 16, 36
# 114 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 116 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_BEROE, 15, 37
# 117 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_BEROE, MOVEMENT_TYPE_FACE_UP
# 119 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_FAUSTULUS, 17, 36
# 120 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_FAUSTULUS, MOVEMENT_TYPE_FACE_DOWN
	return


MareS9_Script_ShowTyriansFixingPristis::
# 126 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_PRISTIS, 15, 36
# 127 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_PRISTIS, MOVEMENT_TYPE_FACE_DOWN
# 129 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN1, 15, 37
# 130 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 132 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN2, 16, 36
# 133 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 135 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_FAUSTULUS, 18, 36
# 136 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_FAUSTULUS, MOVEMENT_TYPE_FACE_DOWN
# 138 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_BEROE, 19, 36
# 139 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_BEROE, MOVEMENT_TYPE_LOOK_AROUND
# 141 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ASCANIUS, 16, 40
# 142 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ASCANIUS, MOVEMENT_TYPE_LOOK_AROUND
# 144 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 14, 41
# 145 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 147 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 17, 38
# 148 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_WALK_DOWN_AND_UP
	return


MareS9_Script_Aeneas::
# 155 "data/maps/MareS9/scripts.pory"
	faceplayer
# 156 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 158 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Aeneas_1
# 186 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 187 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_WalkSouthWest
# 188 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 208 "data/maps/MareS9/scripts.pory"
	special SpawnCameraObject
# 209 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_CAMERA, MareS9_Movement_MoveCameraToFuneral
# 210 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 212 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ROMULUS
# 213 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_REMUS
# 214 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 15, 40
# 215 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 17, 40
# 216 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_FACE_UP
# 217 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_FACE_UP
# 218 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ROMULUS
# 219 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_REMUS
# 220 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_FaceUp
# 221 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 254 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_CAMERA, MareS9_Movement_ReturnCameraFromFuneral
# 255 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 256 "data/maps/MareS9/scripts.pory"
	special RemoveCameraObject
# 352 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_BEROE, Common_Movement_WalkUp
# 353 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 354 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_BEROE
# 355 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_BEROE, 0, 0
# 356 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_BEROE, MOVEMENT_TYPE_INVISIBLE
# 357 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_BEROE
# 359 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ROMULUS, Common_Movement_WalkUp
# 360 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_WalkLeft
# 361 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkLeft
# 362 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 363 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ROMULUS, Common_Movement_WalkUp
# 364 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_WalkUp
# 365 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkLeft
# 366 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 367 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ROMULUS, Common_Movement_WalkUp2
# 368 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_WalkUp2
# 369 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkUp2
# 370 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 371 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ROMULUS
# 372 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 0, 0
# 373 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_INVISIBLE
# 374 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ROMULUS
# 375 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_WalkUp
# 376 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkUp
# 377 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 378 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ASCANIUS
# 379 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ASCANIUS, 0, 0
# 380 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ASCANIUS, MOVEMENT_TYPE_INVISIBLE
# 381 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ASCANIUS
# 382 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkUp
# 383 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 384 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_REMUS
# 385 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 0, 0
# 386 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_INVISIBLE
# 387 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_REMUS
# 389 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 390 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 391 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 392 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 393 "data/maps/MareS9/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_MARE_S9
# 395 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_WalkLeft2
# 396 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 397 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_WalkUp
# 398 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 399 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_FAUSTULUS
# 400 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_FAUSTULUS, 0, 0
# 401 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_FAUSTULUS, MOVEMENT_TYPE_INVISIBLE
# 402 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_FAUSTULUS
# 404 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 405 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 406 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkLeft
# 407 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 408 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkUp
# 409 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 410 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_AENEAS
# 411 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 0, 0
# 412 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_INVISIBLE
# 413 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_AENEAS
# 415 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 416 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral9
# 417 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 418 "data/maps/MareS9/scripts.pory"
	closemessage
# 420 "data/maps/MareS9/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 421 "data/maps/MareS9/scripts.pory"
	playbgm MUS_SAILING, FALSE
# 423 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_PRISTIS, MareS9_Movement_Pristis1
# 424 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, MareS9_Movement_Pristis1
# 425 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 427 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_PRISTIS, Common_Movement_ExclamationMark
# 428 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 430 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 431 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe_Boat1
# 432 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 434 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 435 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Boat1
# 436 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 437 "data/maps/MareS9/scripts.pory"
	closemessage
# 439 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_PRISTIS, MareS9_Movement_Pristis2
# 440 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, MareS9_Movement_Pristis2
# 441 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 442 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_PRISTIS, Common_Movement_ExclamationMark
# 443 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 445 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 446 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe_Boat2
# 447 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 449 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 450 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Boat2
# 451 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 452 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 453 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe_Boat3
# 454 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 455 "data/maps/MareS9/scripts.pory"
	closemessage
# 457 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_PRISTIS, MareS9_Movement_Pristis3
# 458 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, MareS9_Movement_Pristis3
# 459 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 460 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 461 "data/maps/MareS9/scripts.pory"
	playse SE_EFFECTIVE
# 462 "data/maps/MareS9/scripts.pory"
	setvar VAR_0x8004, 1
# 463 "data/maps/MareS9/scripts.pory"
	setvar VAR_0x8005, 1
# 464 "data/maps/MareS9/scripts.pory"
	setvar VAR_0x8006, 16
# 465 "data/maps/MareS9/scripts.pory"
	setvar VAR_0x8007, 3
# 466 "data/maps/MareS9/scripts.pory"
	special ShakeCamera
# 467 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 469 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 470 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Script_Aeneas_Text_0
# 471 "data/maps/MareS9/scripts.pory"
	setvar VAR_0x8004, 1
# 472 "data/maps/MareS9/scripts.pory"
	setvar VAR_0x8005, 1
# 473 "data/maps/MareS9/scripts.pory"
	setvar VAR_0x8006, 41
# 474 "data/maps/MareS9/scripts.pory"
	setvar VAR_0x8007, 3
# 475 "data/maps/MareS9/scripts.pory"
	special ShakeCamera
# 476 "data/maps/MareS9/scripts.pory"
	playse SE_EFFECTIVE
# 477 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 479 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 480 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Boat3
# 481 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 482 "data/maps/MareS9/scripts.pory"
	closemessage
# 484 "data/maps/MareS9/scripts.pory"
	call MareS8_Script_ArriveHesperia
# 485 "data/maps/MareS9/scripts.pory"
	releaseall
	end

MareS9_Script_Aeneas_1:
# 159 "data/maps/MareS9/scripts.pory"
	goto_if_set FLAG_MARES9_AENEAS_INTROD, MareS9_Script_Aeneas_4
# 170 "data/maps/MareS9/scripts.pory"
	setflag FLAG_MARES9_AENEAS_INTROD
# 171 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Help1, MSGBOX_YESNO
# 172 "data/maps/MareS9/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS9_Script_Aeneas_10
# 175 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_NoHelp
# 176 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 177 "data/maps/MareS9/scripts.pory"
	closemessage
# 178 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	return

MareS9_Script_Aeneas_4:
# 160 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Help2, MSGBOX_YESNO
# 161 "data/maps/MareS9/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS9_Script_Aeneas_7
# 164 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_NoHelp
# 165 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 166 "data/maps/MareS9/scripts.pory"
	closemessage
# 167 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	return

MareS9_Script_Aeneas_7:
# 162 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_DidoScene
	return

MareS9_Script_Aeneas_10:
# 173 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_DidoScene
	return


MareS9_Script_Ascanius::
# 491 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Ascanius1
# 492 "data/maps/MareS9/scripts.pory"
	faceplayer
# 493 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Ascanius2
# 494 "data/maps/MareS9/scripts.pory"
	closemessage
# 495 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Romulus::
# 500 "data/maps/MareS9/scripts.pory"
	faceplayer
# 501 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Romulus
# 502 "data/maps/MareS9/scripts.pory"
	closemessage
# 503 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Remus::
# 508 "data/maps/MareS9/scripts.pory"
	faceplayer
# 509 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Remus
# 510 "data/maps/MareS9/scripts.pory"
	closemessage
# 511 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Faustulus::
# 516 "data/maps/MareS9/scripts.pory"
	faceplayer
# 517 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Faustulus_2
# 519 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 1
	goto_if_eq MareS9_Script_Faustulus_3
# 522 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus3
MareS9_Script_Faustulus_1:
# 524 "data/maps/MareS9/scripts.pory"
	closemessage
# 525 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end

MareS9_Script_Faustulus_2:
# 518 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus1
	goto MareS9_Script_Faustulus_1

MareS9_Script_Faustulus_3:
# 520 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus2
	goto MareS9_Script_Faustulus_1


MareS9_Script_Beroe::
# 530 "data/maps/MareS9/scripts.pory"
	faceplayer
# 531 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Beroe_2
# 533 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 1
	goto_if_eq MareS9_Script_Beroe_3
# 536 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe3
MareS9_Script_Beroe_1:
# 538 "data/maps/MareS9/scripts.pory"
	closemessage
# 539 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end

MareS9_Script_Beroe_2:
# 532 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe1
	goto MareS9_Script_Beroe_1

MareS9_Script_Beroe_3:
# 534 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe2
	goto MareS9_Script_Beroe_1


MareS9_Script_Tyrian1::
# 544 "data/maps/MareS9/scripts.pory"
	faceplayer
# 546 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Tyrian1_1
# 553 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianFixer1
# 554 "data/maps/MareS9/scripts.pory"
	closemessage
# 555 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_FaceUp
# 556 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 557 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return

MareS9_Script_Tyrian1_1:
# 547 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianTowerBlock
# 548 "data/maps/MareS9/scripts.pory"
	closemessage
# 549 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_FaceDown
# 550 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	return


MareS9_Script_Tyrian2::
# 562 "data/maps/MareS9/scripts.pory"
	faceplayer
# 563 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianFixer2
# 564 "data/maps/MareS9/scripts.pory"
	closemessage
# 565 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_FaceLeft
# 566 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 567 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


MareS9_Script_DidoScene::
# 572 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Script_Aeneas_DidoSceneStart
# 573 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 574 "data/maps/MareS9/scripts.pory"
	closemessage
# 576 "data/maps/MareS9/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 577 "data/maps/MareS9/scripts.pory"
	switch VAR_RESULT
# 578 "data/maps/MareS9/scripts.pory"
	case DIR_NORTH, MareS9_Script_DidoScene_3
# 586 "data/maps/MareS9/scripts.pory"
	case DIR_SOUTH, MareS9_Script_DidoScene_4
# 596 "data/maps/MareS9/scripts.pory"
	case DIR_WEST, MareS9_Script_DidoScene_5
# 604 "data/maps/MareS9/scripts.pory"
	case DIR_EAST, MareS9_Script_DidoScene_6
# 612 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Script_DidoScene_Text_0
# 613 "data/maps/MareS9/scripts.pory"
	closemessage
	end

MareS9_Script_DidoScene_1:
# 617 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, MareS9_Movement_BeginDidoScene
# 618 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, MareS9_Movement_BeginDidoScene
# 619 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 621 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceLeft
# 622 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 623 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 625 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 626 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_EnterTown
# 627 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 629 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_TYRIAN, 190, 98
# 630 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_MakeWay
# 631 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_TYRIAN
# 632 "data/maps/MareS9/scripts.pory"
	closemessage
# 634 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_ExclamationMark
# 635 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 636 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 637 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceDown
# 638 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 639 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 641 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 642 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN1
# 643 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN2
# 644 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN3
# 645 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN4
# 646 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 22, 55
# 647 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN3, 21, 56
# 648 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN4, 23, 56
# 649 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN1, 23, 54
# 650 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN2, 21, 54
# 651 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_FACE_DOWN
# 652 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_FACE_DOWN
# 653 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN2, MOVEMENT_TYPE_FACE_DOWN
# 654 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN3, MOVEMENT_TYPE_FACE_DOWN
# 655 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN4, MOVEMENT_TYPE_FACE_DOWN
# 656 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ELISSA
# 657 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN1
# 658 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN2
# 659 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN3
# 660 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN4
# 662 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkUp6
# 663 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp6
# 664 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp6
# 665 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkUp6
# 666 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkUp6
# 667 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 669 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_ExclamationMark
# 670 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 672 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight4
# 673 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight4
# 674 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight4
# 675 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 676 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceUp
# 677 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_FaceUp
# 678 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_FaceUp
# 679 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 681 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 682 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa1
# 683 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 685 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 686 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_AeneasToElissa
# 687 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 689 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 690 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa2
# 691 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceLeft
# 692 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 694 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa3
# 695 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 696 "data/maps/MareS9/scripts.pory"
	closemessage
# 698 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp2
# 699 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp2
# 700 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 701 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkRight
# 702 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 703 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkRight3
# 704 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkRight3
# 705 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 706 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp4
# 707 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp4
# 708 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 710 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN1
# 711 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN2
# 712 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_ShowTyriansFixingPristis
# 713 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN1
# 714 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN2
# 716 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceUp
# 717 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 718 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 719 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa4
# 720 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 721 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 722 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_GoWithElissa
# 723 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 724 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 725 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa5
# 726 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 727 "data/maps/MareS9/scripts.pory"
	closemessage
# 729 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 730 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight
# 731 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight
# 732 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight
# 733 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 734 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkUp2
# 735 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkUp2
# 736 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkUp3
# 737 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkUp3
# 738 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 739 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight7
# 740 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight7
# 741 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight7
# 742 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight7
# 743 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 745 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_AENEAS
# 746 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 747 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN3
# 748 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN4
# 749 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 0, 0
# 750 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_INVISIBLE
# 751 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 0, 0
# 752 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_INVISIBLE
# 753 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN3, 0, 0
# 754 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN3, MOVEMENT_TYPE_INVISIBLE
# 755 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN4, 0, 0
# 756 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN4, MOVEMENT_TYPE_INVISIBLE
# 758 "data/maps/MareS9/scripts.pory"
	setvar VAR_AENEID_STATE, 1
# 759 "data/maps/MareS9/scripts.pory"
	release
	end

MareS9_Script_DidoScene_3:
# 579 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 580 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 581 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 582 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 583 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 584 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 585 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_4:
# 587 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 588 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 589 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 590 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 591 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 592 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 593 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 594 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 595 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_5:
# 597 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 598 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 599 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 600 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 601 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 602 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 603 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_6:
# 605 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 606 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 607 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 608 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight2
# 609 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 610 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1


# 763 "data/maps/MareS9/scripts.pory"
MareS9_Movement_BeginDidoScene:
# 764 "data/maps/MareS9/scripts.pory"
	walk_right
# 764 "data/maps/MareS9/scripts.pory"
	walk_right
# 764 "data/maps/MareS9/scripts.pory"
	walk_right
# 764 "data/maps/MareS9/scripts.pory"
	walk_right
# 764 "data/maps/MareS9/scripts.pory"
	walk_right
# 765 "data/maps/MareS9/scripts.pory"
	walk_down
# 765 "data/maps/MareS9/scripts.pory"
	walk_down
# 765 "data/maps/MareS9/scripts.pory"
	walk_down
# 765 "data/maps/MareS9/scripts.pory"
	walk_down
# 765 "data/maps/MareS9/scripts.pory"
	walk_down
# 765 "data/maps/MareS9/scripts.pory"
	walk_down
# 765 "data/maps/MareS9/scripts.pory"
	walk_down
# 765 "data/maps/MareS9/scripts.pory"
	walk_down
# 765 "data/maps/MareS9/scripts.pory"
	walk_down
# 765 "data/maps/MareS9/scripts.pory"
	walk_down
# 765 "data/maps/MareS9/scripts.pory"
	walk_down
	step_end

# 768 "data/maps/MareS9/scripts.pory"
MareS9_Movement_MoveCameraToFuneral:
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 769 "data/maps/MareS9/scripts.pory"
	walk_right
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
# 770 "data/maps/MareS9/scripts.pory"
	walk_up
	step_end

# 773 "data/maps/MareS9/scripts.pory"
MareS9_Movement_ReturnCameraFromFuneral:
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 774 "data/maps/MareS9/scripts.pory"
	walk_left
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
# 775 "data/maps/MareS9/scripts.pory"
	walk_down
	step_end

# 778 "data/maps/MareS9/scripts.pory"
MareS9_Movement_Pristis1:
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 779 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 780 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 781 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 781 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 781 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 781 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 781 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 781 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 781 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 781 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 781 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 781 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 782 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 783 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 784 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 784 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 784 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 784 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 784 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 784 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 784 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 785 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 785 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 785 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 785 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 786 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 786 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 787 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 787 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 787 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 787 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 787 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 788 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 788 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 789 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 789 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 789 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 790 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 790 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 790 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 790 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 791 "data/maps/MareS9/scripts.pory"
	walk_faster_down
	step_end

# 794 "data/maps/MareS9/scripts.pory"
MareS9_Movement_Pristis2:
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 795 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 796 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 797 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 797 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 797 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 797 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 797 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 797 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 797 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 797 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 797 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 797 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 798 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 798 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 798 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 798 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 798 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 798 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 798 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 798 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 798 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 798 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 798 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 798 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 799 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 799 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 799 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 799 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 799 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 799 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 799 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 800 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 800 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 800 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 800 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 800 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 800 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 800 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 800 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 800 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 800 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 801 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 802 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 803 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 804 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 804 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 804 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 804 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 804 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 804 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 804 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 804 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 804 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 804 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 804 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 804 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 805 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 806 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 807 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 807 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 807 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 807 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 807 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 807 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 807 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 807 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 807 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 807 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 807 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 807 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 808 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 808 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 808 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 808 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 808 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 808 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 808 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 808 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 808 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 808 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 809 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 809 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 810 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 810 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 810 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 810 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 810 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 810 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 810 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 810 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 810 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 810 "data/maps/MareS9/scripts.pory"
	walk_faster_right
	step_end

# 813 "data/maps/MareS9/scripts.pory"
MareS9_Movement_Pristis3:
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 814 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 815 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 815 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 815 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 815 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 815 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 815 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 815 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 815 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 816 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 816 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 816 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 816 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 816 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 816 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 816 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 816 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 816 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 816 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 817 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 817 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 817 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 817 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 817 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 817 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 818 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 818 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 818 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 818 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 818 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 819 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 819 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 819 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 819 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 819 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 819 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 819 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 819 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 819 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 820 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 820 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 820 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 820 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 820 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 820 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 820 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 821 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 821 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 821 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 821 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 821 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 821 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 821 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 822 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 823 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 823 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 823 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 823 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 823 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 824 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 824 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 824 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 824 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 824 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 824 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 824 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 824 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 825 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 825 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 825 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 825 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 826 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 826 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 826 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 826 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 826 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 826 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 826 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 826 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 826 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 826 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 826 "data/maps/MareS9/scripts.pory"
	walk_faster_up
	step_end

MareS9_Script_Aeneas_Text_0:
# 470 "data/maps/MareS9/scripts.pory"
	.string "AAAAAH!$"

MareS9_Script_DidoScene_Text_0:
# 612 "data/maps/MareS9/scripts.pory"
	.string "ERROR: GetPlayer\nFacingDirection OOB$"

MareS9_Text_Aeneas_Help1::
# 835 "data/maps/MareS9/scripts.pory"
	.string "My manly pride prevents me from crying\n"
	.string "but honesty compels me to admit that\l"
	.string "we are stranded here. Oh, pardon me, my\l"
	.string "manners must have slipped my mind. My\l"
	.string "name is Aeneas. I am a man of Troy who\l"
	.string "set sail long ago to found a new city on\l"
	.string "the Isla Hesperia. We were five ships,\l"
	.string "and twenty seven strong, when first we\l"
	.string "set sail for Lavinian shores, but we\l"
	.string "have had a rough going at sea. A mighty\l"
	.string "storm broke two of our proud ships,\l"
	.string "another sank at Scylla Charybdis, a\l"
	.string "fourth was burned by the sunburned\l"
	.string "island, and now our final ship, the swift\l"
	.string "Pristis, has run aground after\l"
	.string "Palinurus, our late helmsman, threw\l"
	.string "himself from the deck. My father, and my\l"
	.string "wife, and my best friend, have all died\l"
	.string "on this journey I command. Now we have\l"
	.string "made landfall and some would have us\l"
	.string "give up our quest for Hesperia and\l"
	.string "settle here, but I will not give up! It\l"
	.string "has been prophesied ! I am to found the\l"
	.string "city which will come to rule the world.\l"
	.string "The fortune teller, Princess Cassandra,\l"
	.string "foresaw my city on Hesperia. If we quit\l"
	.string "now then all was lost in vain, then my\l"
	.string "dear father, and my tender wife, and all\l"
	.string "the rest, were killed, and nothing\l"
	.string "gained. We must persist, but right now\l"
	.string "the Pristis is not sea worthy. We must\l"
	.string "make repairs! Although I neither\l"
	.string "knowledge nor parts, perhaps we can\l"
	.string "acquire both in town. Tell me, young\l"
	.string "friend, will you not win glory and join\l"
	.string "our quest to found a new city?$"

MareS9_Text_Aeneas_NoHelp::
# 872 "data/maps/MareS9/scripts.pory"
	.string "I understand. Your path is yours to\n"
	.string "choose. We'll find some other way to fix\l"
	.string "Pristis and sail to glory and Hesperia,\l"
	.string "but if you change your mind, come speak\l"
	.string "with me.$"

MareS9_Text_Aeneas_Help2::
# 880 "data/maps/MareS9/scripts.pory"
	.string "Young friend, have you come to help fix\n"
	.string "Pristis?$"

MareS9_Text_Aeneas_EnterTown::
# 886 "data/maps/MareS9/scripts.pory"
	.string "This island is more inhabited than I\n"
	.string "thought at first. I think we should\l"
	.string "split up to search for the parts and...$"

MareS9_Text_MakeWay::
# 892 "data/maps/MareS9/scripts.pory"
	.string "Make way for Queen Tyrii, Elissa!$"

MareS9_Script_Aeneas_DidoSceneStart::
# 896 "data/maps/MareS9/scripts.pory"
	.string "Then let's head into town and try to\n"
	.string "find the parts and labor we need to set\l"
	.string "sail.$"

MareS9_Text_Elissa1::
# 904 "data/maps/MareS9/scripts.pory"
	.string "What's this? A stranger has come to our\n"
	.string "land? Someone unknown to us, that much\l"
	.string "is sure, but how, and why, as well are\l"
	.string "quickly guessed. Either a merchant,\l"
	.string "pirate criminal, or else a pilgrim\l"
	.string "scattered by the waves. Your coat too\l"
	.string "clean, and brow too nobly held, to be\l"
	.string "the kind of scum who comes to steal,\l"
	.string "too aged, too honest, and too insecure,\l"
	.string "to be part of the guild, so you must be a\l"
	.string "traveller who, by the winds of fate, was\l"
	.string "blown off course for us to meet you\l"
	.string "here. Tell us, pilgrim, does our guess\l"
	.string "find it's mark?$"

MareS9_Text_AeneasToElissa::
# 919 "data/maps/MareS9/scripts.pory"
	.string "Indeed, fair queen, I mean not to\n"
	.string "intrude. My name is Aeneas, and I am\l"
	.string "lost. Some time ago I was a prince of\l"
	.string "Troy who set off in search of Hesperia\l"
	.string "where fate and prophesy have promised\l"
	.string "me a mighty city is mine too create. A\l"
	.string "wicked storm, the perils of the sea, and\l"
	.string "my late helmsman have left me\l"
	.string "shipwrecked, my fleet destroyed, and my\l"
	.string "best men drowned. I come before you to\l"
	.string "bargain, else beg, the parts and labor\l"
	.string "needed to repair my last surviving boat,\l"
	.string "now washed ashore by chance on your\l"
	.string "island. We come in peace.$"

MareS9_Text_Elissa2::
# 935 "data/maps/MareS9/scripts.pory"
	.string "And in peace you will find all that you\n"
	.string "seek! My name is Elissa, I am the queen\l"
	.string "of Turris Saltus and the Tyrians. My\l"
	.string "handmaidens will swiftly fix your ship\l"
	.string "and resupply your voyage on the sea.\l"
	.string "These thing I offer you freely, for I\l"
	.string "desire nothing in return, except to see\l"
	.string "your princely face brought to smile.$"

MareS9_Text_Elissa3::
# 946 "data/maps/MareS9/scripts.pory"
	.string "You two, go to his ship. Spare no\n"
	.string "expense. Set her afloat as strong as\l"
	.string "newly built.$"

MareS9_Text_Elissa4::
# 951 "data/maps/MareS9/scripts.pory"
	.string "Tell me, Aeneas, prince, will you join me\n"
	.string "atop Turris Saltus? We might enjoy the\l"
	.string "pleasant things in life. Good food, fine\l"
	.string "wine, and breathtaking views would\l"
	.string "accompany our conversation on my\l"
	.string "queenly couch. For I would have you tell\l"
	.string "of your journey, which interests me as\l"
	.string "much as you, fine prince.$"

MareS9_Text_Aeneas_GoWithElissa::
# 961 "data/maps/MareS9/scripts.pory"
	.string "Most gracious queen, your offer I\n"
	.string "accept. I will go with you, and must bow\l"
	.string "my head, to give my greatest thanks...$"

MareS9_Text_Elissa5::
# 967 "data/maps/MareS9/scripts.pory"
	.string "Smile, don't bow! Now come Aeneas,\n"
	.string "prince, there's much to say, to see, to\l"
	.string "do, to feel, just you and I.$"

MareS9_Text_Ascanius1::
# 973 "data/maps/MareS9/scripts.pory"
	.string "Romulus! Remus! Stop running around!$"

MareS9_Text_Ascanius2::
# 977 "data/maps/MareS9/scripts.pory"
	.string "Even shipwrecked parenting's such a\n"
	.string "chore.$"

MareS9_Text_Romulus::
# 981 "data/maps/MareS9/scripts.pory"
	.string "I am the older twin. That mean's I'm\n"
	.string "first!$"

MareS9_Text_Remus::
# 985 "data/maps/MareS9/scripts.pory"
	.string "I am the faster twin. That mean's I'm\n"
	.string "best!$"

MareS9_Text_Faustulus1::
# 990 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas all madays maserve. Island\n"
	.string "way off kafigure maknow. Big town\l"
	.string "kafound kadestine taknowya$"

MareS9_Text_Faustulus2::
# 997 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas kaaroundna good mafeelna.\n"
	.string "Soon kareturn mahope.$"

MareS9_Text_Faustulus3::
# 1003 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas kaback magladya. Kaaround\n"
	.string "safe mafeelna.$"

MareS9_Text_Beroe1::
# 1010 "data/maps/MareS9/scripts.pory"
	.string "It seems like all we do is fall from one\n"
	.string "disaster to another! We have been at\l"
	.string "sea for months and finally when we land\l"
	.string "on shores where no one tries to get us\l"
	.string "killed Aeneas wants to leave ASAP! We're\l"
	.string "better off staying here, where it's\l"
	.string "safe, than casting off again to search\l"
	.string "in vain for some island. I'm not sure it\l"
	.string "exists!$"

MareS9_Text_Beroe2::
# 1023 "data/maps/MareS9/scripts.pory"
	.string "Oh great, Aeneas has gone off again and\n"
	.string "sent these savages to fix Pristis. I\l"
	.string "doubt they know how to tie their own\l"
	.string "shoes let alone repair ships. This thing\l"
	.string "will sink the minute we set sail! You\l"
	.string "mark my words.$"

MareS9_Text_Beroe3::
# 1032 "data/maps/MareS9/scripts.pory"
	.string "Fantastic, now Aeneas thinks the boat\n"
	.string "is seaworthy again and cannot wait to\l"
	.string "sail from this beachhead into some new\l"
	.string "unkown danger. I swear that's all he\l"
	.string "does! He takes a bad picture and makes\l"
	.string "it worse!$"

MareS9_Text_TyrianTowerBlock::
# 1040 "data/maps/MareS9/scripts.pory"
	.string "Turris Saltus, home of the Tyrians and\n"
	.string "our most noble queen, fair Elissa, is not\l"
	.string "open to visitors. Goodbye.$"

MareS9_Text_TyrianFixer1::
# 1046 "data/maps/MareS9/scripts.pory"
	.string "Don't worry, I've fixed ships like this\n"
	.string "before.$"

MareS9_Text_TyrianFixer2::
# 1050 "data/maps/MareS9/scripts.pory"
	.string "I don't love fixing boats, but it's my\n"
	.string "job. When the Queen says 'do this' it is\l"
	.string "performed.$"

MareS9_Text_Aeneas_Funeral1::
# 1055 "data/maps/MareS9/scripts.pory"
	.string "Pristis has been repaired and a fair\n"
	.string "wind is blowing to cast us off of this\l"
	.string "shore. Thank you, my lad, for reminding\l"
	.string "me of my sacred duty. Now...$"

MareS9_Text_Elissa_Funeral1::
# 1062 "data/maps/MareS9/scripts.pory"
	.string "Aeneas! Pig!$"

MareS9_Text_Elissa_Funeral2::
# 1066 "data/maps/MareS9/scripts.pory"
	.string "Traitor! Liar! Abuser of my love! Look\n"
	.string "at wretched Elissa! Once a queen\l"
	.string "pursued by multitudes of rich suitors, I\l"
	.string "had resolved to live a virgin's life when\l"
	.string "I found all of them sorely lacking, all\l"
	.string "suitors, except one, Aeneas Prince. Yes,\l"
	.string "prince I called you once. Prince, and\l"
	.string "darling, and every other title gained by\l"
	.string "love were yours, but now revoked by\l"
	.string "treachery. You left our marriage bed\l"
	.string "for sailor's cot! What shall I do? Should\l"
	.string "poor Elissa be a sad widow to infidelity,\l"
	.string "a second rate bride to a lesser man, or\l"
	.string "follow you across the seven seas like\l"
	.string "carrion birds behind a grim army,\l"
	.string "unwanted, hated, but lingering there\l"
	.string "close enough to consume th'abandoned\l"
	.string "dead. Before Turris Saltus was beaten\l"
	.string "down, when the Tyrians were a proud\l"
	.string "people, I might have imagined a hot\l"
	.string "pursuit of mighty ships, and women\l"
	.string "dressed for war, chasing you down until\l"
	.string "you were cornered and made to endure\l"
	.string "but a fraction of the pain you brought\l"
	.string "to me and my people, but such revenge is\l"
	.string "impossible now. Therefore, left with no\l"
	.string "choice, I must now die. Farewell cruel\l"
	.string "world, goodbye Turris Saltus, adieu my\l"
	.string "Tyrians. No bon voyage for you, Aeneas\l"
	.string "Pig! I swear upon the marriage bed you\l"
	.string "inhumanely scorned that I will torment\l"
	.string "you from Tartarus, for not even the\l"
	.string "endless void of death can compass the\l"
	.string "bounds of eternal rage!$"

MareS9_Text_Aeneas_Funeral2::
# 1103 "data/maps/MareS9/scripts.pory"
	.string "In light of the most dreadful loss we\n"
	.string "have suffered we ought to hold a\l"
	.string "funeral to celebrate the dead before\l"
	.string "we leave.$"

MareS9_Text_Beroe_Funeral1::
# 1110 "data/maps/MareS9/scripts.pory"
	.string "That woman, did you love her, Aeneas?$"

MareS9_Text_Aeneas_Funeral3::
# 1115 "data/maps/MareS9/scripts.pory"
	.string "What woman? This is for my dead father,\n"
	.string "best friend, and sailors lost while on\l"
	.string "our quest. We dedicate this funeral to\l"
	.string "them, and in their honor hold these\l"
	.string "funeral games to celebrate the lives of\l"
	.string "those who died. The first event will be\l"
	.string "trainer battles. Our new friend,\l"
	.string "{PLAYER}, will fight to win his place\l"
	.string "among our crew...$"

MareS9_Text_Aeneas_Funeral4::
# 1127 "data/maps/MareS9/scripts.pory"
	.string "against you, Faustulus. If you prevail,\n"
	.string "I will grant you freedom, and let you\l"
	.string "freely choose to stay with us as a full\l"
	.string "and equal crew member, or to pursue\l"
	.string "your pleasures as a free man in\l"
	.string "whatever way would seem best to you.$"

MareS9_Text_Faustulus_Funeral1::
# 1137 "data/maps/MareS9/scripts.pory"
	.string "Mafree man be? Too kind Ka-are! Gladly\n"
	.string "will mafight. Honor ma-is$"

MareS9_Text_Aeneas_Funeral5::
# 1141 "data/maps/MareS9/scripts.pory"
	.string "Look to your arms, and let the best man\n"
	.string "win!$"

MareS9_Text_Faustulus_Funeral2::
# 1146 "data/maps/MareS9/scripts.pory"
	.string "Personalna but tadefeat meneed\n"
	.string "kaplease and mafreedom makeya.$"

MareS9_Text_FaustulusLost::
# 1151 "data/maps/MareS9/scripts.pory"
	.string "Mastrongna!$"

MareS9_Text_Faustulus_Funeral3::
# 1156 "data/maps/MareS9/scripts.pory"
	.string "Tathank maplace taremind. Kaslave\n"
	.string "maonly be.$"

MareS9_Text_Aeneas_Funeral6::
# 1161 "data/maps/MareS9/scripts.pory"
	.string "Well fought, {PLAYER}! Your victory\n"
	.string "pleases me and all the souls of our lost\l"
	.string "companions. By virtue of your glorious\l"
	.string "triumph I name you one of proud Aeneas'\l"
	.string "men and welcome you to join our noble\l"
	.string "quest. Now, let the games continue!\l"
	.string "Next we will have a footrace from here\l"
	.string "to...$"

MareS9_Text_Beroe_Funeral2::
# 1172 "data/maps/MareS9/scripts.pory"
	.string "We did not cross the unforgiving seas,\n"
	.string "navigate Scylla Charybdis, escape Isla\l"
	.string "Solata, or sacrifice the flower of our\l"
	.string "youth for you to play games on some\l"
	.string "savage island! Have you forgot the\l"
	.string "prophesy Kassandra told of you? Mighty\l"
	.string "Aeneas, father of the kings who one day\l"
	.string "will rule all the world from the great\l"
	.string "city you are destined to create, let not\l"
	.string "those hero's deaths have been in vain.\l"
	.string "We should set sail while the winds favor\l"
	.string "us, while we still have our strenghth,\l"
	.string "and while our ship, freshly repaired, is\l"
	.string "eager for the surf.$"

MareS9_Text_Aeneas_Funeral7::
# 1189 "data/maps/MareS9/scripts.pory"
	.string "These games are a solumn tradition to\n"
	.string "honor the dead...$"

MareS9_Text_Beroe_Funeral3::
# 1195 "data/maps/MareS9/scripts.pory"
	.string "I will burn the ship to ashes if you will\n"
	.string "not swiftly depart!$"

MareS9_Text_Aeneas_Funeral8::
# 1201 "data/maps/MareS9/scripts.pory"
	.string "You'd burn the ship? Let's not be hasty\n"
	.string "now! There is much reason to your\l"
	.string "argument. The wind is fair, our party\l"
	.string "full of strength, and proud Pristis\l"
	.string "repaired, and not aflame. Let us be off!\l"
	.string "Assemble! To the boat!$"

MareS9_Text_Aeneas_Funeral9::
# 1209 "data/maps/MareS9/scripts.pory"
	.string "May the winds stay fair and may we\n"
	.string "safely traverse the sea and reach\l"
	.string "Hesperia.$"

MareS9_Text_Beroe_Boat1::
# 1214 "data/maps/MareS9/scripts.pory"
	.string "Are you sure you know where you're\n"
	.string "going? We have just gone in a big\l"
	.string "circle!. I doubt you can sail this ship\l"
	.string "to Hesperia.$"

MareS9_Text_Aeneas_Boat1::
# 1220 "data/maps/MareS9/scripts.pory"
	.string "Don't question your captain's ability!$"

MareS9_Text_Beroe_Boat2::
# 1224 "data/maps/MareS9/scripts.pory"
	.string "Aeneas! We're about to hit those rocks!$"

MareS9_Text_Aeneas_Boat2::
# 1228 "data/maps/MareS9/scripts.pory"
	.string "I know what I'm doing! I'm the captain,\n"
	.string "not you! Stop trying to backseat pilot!$"

MareS9_Text_Beroe_Boat3::
# 1233 "data/maps/MareS9/scripts.pory"
	.string "I wish Palinurus were at the helm.$"

MareS9_Text_Aeneas_Boat3::
# 1237 "data/maps/MareS9/scripts.pory"
	.string "Abandon ship! Everyone off the boat!$"
