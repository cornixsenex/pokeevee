SaltySpitoon_2F_MapScripts::
	.byte 0


SaltySpitoon_2F_EventScript_LockDoor::
	setvar VAR_GANG_STATE, 6
	setmetatile 17, 1, METATILE_BrendansMaysHouse_StairsDown, 1
	msgbox SaltySpitoon_2F_Text_LockDoor
	closemessage
	playse SE_PIN
	waitse
	end


SaltySpitoon_2F_EventScript_DoorSign::
	lock
	msgbox SaltySpitoon_2F_Text_DoorSign
	closemessage
	release
	end


SaltySpitoon_2F_EventScript_RoomTriggerA::
	compare VAR_GANG_STATE, 5
	goto_if_eq SaltySpitoon_2F_EventScript_RoomTriggerA_2
	lock
	setvar VAR_TEMP_1, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	call SaltySpitoon_2F_EventScript_AmbushPositionPlayer
	switch VAR_GANG_STATE
	case 6, SaltySpitoon_2F_EventScript_RoomTriggerA_6
	case 7, SaltySpitoon_2F_EventScript_RoomTriggerA_7
	case 8, SaltySpitoon_2F_EventScript_RoomTriggerA_8
	case 9, SaltySpitoon_2F_EventScript_RoomTriggerA_9
	msgbox SaltySpitoon_2F_EventScript_RoomTriggerA_Text_0
	closemessage
SaltySpitoon_2F_EventScript_RoomTriggerA_4:
	release
	end

SaltySpitoon_2F_EventScript_RoomTriggerA_2:
	end

SaltySpitoon_2F_EventScript_RoomTriggerA_6:
	removeobject 1
	removeobject 3
	removeobject 2
	setobjectxyperm 1, 1, 8
	setobjectxyperm 3, 2, 8
	setobjectxyperm 2, 3, 8
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	addobject 1
	addobject 3
	addobject 2
	showobjectat 1, MAP_SALTY_SPITOON_2F
	showobjectat 3, MAP_SALTY_SPITOON_2F
	showobjectat 2, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushBlue
	goto SaltySpitoon_2F_EventScript_RoomTriggerA_4

SaltySpitoon_2F_EventScript_RoomTriggerA_7:
	removeobject 1
	removeobject 6
	removeobject 5
	setobjectxyperm 4, 1, 8
	setobjectxyperm 6, 2, 8
	setobjectxyperm 5, 3, 8
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
	addobject 4
	addobject 6
	addobject 5
	showobjectat 4, MAP_SALTY_SPITOON_2F
	showobjectat 6, MAP_SALTY_SPITOON_2F
	showobjectat 5, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushYellow
	goto SaltySpitoon_2F_EventScript_RoomTriggerA_4

SaltySpitoon_2F_EventScript_RoomTriggerA_8:
	removeobject 7
	removeobject 9
	removeobject 8
	setobjectxyperm 7, 1, 8
	setobjectxyperm 9, 2, 8
	setobjectxyperm 8, 3, 8
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
	addobject 7
	addobject 9
	addobject 8
	showobjectat 7, MAP_SALTY_SPITOON_2F
	showobjectat 9, MAP_SALTY_SPITOON_2F
	showobjectat 8, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushRed
	goto SaltySpitoon_2F_EventScript_RoomTriggerA_4

SaltySpitoon_2F_EventScript_RoomTriggerA_9:
	removeobject 10
	removeobject 12
	removeobject 11
	setobjectxyperm 10, 1, 8
	setobjectxyperm 12, 2, 8
	setobjectxyperm 11, 3, 8
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
	addobject 10
	addobject 12
	addobject 11
	showobjectat 10, MAP_SALTY_SPITOON_2F
	showobjectat 12, MAP_SALTY_SPITOON_2F
	showobjectat 11, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushGreen
	goto SaltySpitoon_2F_EventScript_RoomTriggerA_4


SaltySpitoon_2F_EventScript_RoomTriggerB::
	compare VAR_GANG_STATE, 5
	goto_if_eq SaltySpitoon_2F_EventScript_RoomTriggerB_2
	lock
	setvar VAR_TEMP_2, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	call SaltySpitoon_2F_EventScript_AmbushPositionPlayer
	switch VAR_GANG_STATE
	case 6, SaltySpitoon_2F_EventScript_RoomTriggerB_6
	case 7, SaltySpitoon_2F_EventScript_RoomTriggerB_7
	case 8, SaltySpitoon_2F_EventScript_RoomTriggerB_8
	case 9, SaltySpitoon_2F_EventScript_RoomTriggerB_9
	msgbox SaltySpitoon_2F_EventScript_RoomTriggerA_Text_0
	closemessage
SaltySpitoon_2F_EventScript_RoomTriggerB_4:
	release
	end

SaltySpitoon_2F_EventScript_RoomTriggerB_2:
	end

SaltySpitoon_2F_EventScript_RoomTriggerB_6:
	removeobject 1
	removeobject 3
	removeobject 2
	setobjectxyperm 1, 11, 8
	setobjectxyperm 3, 12, 8
	setobjectxyperm 2, 13, 8
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	addobject 1
	addobject 3
	addobject 2
	showobjectat 1, MAP_SALTY_SPITOON_2F
	showobjectat 3, MAP_SALTY_SPITOON_2F
	showobjectat 2, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushBlue
	goto SaltySpitoon_2F_EventScript_RoomTriggerB_4

SaltySpitoon_2F_EventScript_RoomTriggerB_7:
	removeobject 4
	removeobject 6
	removeobject 5
	setobjectxyperm 4, 11, 8
	setobjectxyperm 6, 12, 8
	setobjectxyperm 5, 13, 8
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
	addobject 4
	addobject 6
	addobject 5
	showobjectat 4, MAP_SALTY_SPITOON_2F
	showobjectat 6, MAP_SALTY_SPITOON_2F
	showobjectat 5, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushYellow
	goto SaltySpitoon_2F_EventScript_RoomTriggerB_4

SaltySpitoon_2F_EventScript_RoomTriggerB_8:
	removeobject 7
	removeobject 9
	removeobject 8
	setobjectxyperm 7, 11, 8
	setobjectxyperm 9, 12, 8
	setobjectxyperm 8, 13, 8
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
	addobject 7
	addobject 9
	addobject 8
	showobjectat 7, MAP_SALTY_SPITOON_2F
	showobjectat 9, MAP_SALTY_SPITOON_2F
	showobjectat 8, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushRed
	goto SaltySpitoon_2F_EventScript_RoomTriggerB_4

SaltySpitoon_2F_EventScript_RoomTriggerB_9:
	removeobject 10
	removeobject 12
	removeobject 11
	setobjectxyperm 10, 11, 8
	setobjectxyperm 12, 12, 8
	setobjectxyperm 11, 13, 8
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
	addobject 10
	addobject 12
	addobject 11
	showobjectat 10, MAP_SALTY_SPITOON_2F
	showobjectat 12, MAP_SALTY_SPITOON_2F
	showobjectat 11, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushGreen
	goto SaltySpitoon_2F_EventScript_RoomTriggerB_4


SaltySpitoon_2F_EventScript_RoomTriggerC::
	compare VAR_GANG_STATE, 5
	goto_if_eq SaltySpitoon_2F_EventScript_RoomTriggerC_2
	lock
	setvar VAR_TEMP_3, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	call SaltySpitoon_2F_EventScript_AmbushPositionPlayer
	switch VAR_GANG_STATE
	case 6, SaltySpitoon_2F_EventScript_RoomTriggerC_6
	case 7, SaltySpitoon_2F_EventScript_RoomTriggerC_7
	case 8, SaltySpitoon_2F_EventScript_RoomTriggerC_8
	case 9, SaltySpitoon_2F_EventScript_RoomTriggerC_9
	msgbox SaltySpitoon_2F_EventScript_RoomTriggerA_Text_0
	closemessage
SaltySpitoon_2F_EventScript_RoomTriggerC_4:
	release
	end

SaltySpitoon_2F_EventScript_RoomTriggerC_2:
	end

SaltySpitoon_2F_EventScript_RoomTriggerC_6:
	removeobject 1
	removeobject 3
	removeobject 2
	setobjectxyperm 1, 1, 18
	setobjectxyperm 3, 2, 18
	setobjectxyperm 2, 3, 18
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	addobject 1
	addobject 3
	addobject 2
	showobjectat 1, MAP_SALTY_SPITOON_2F
	showobjectat 3, MAP_SALTY_SPITOON_2F
	showobjectat 2, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushBlue
	goto SaltySpitoon_2F_EventScript_RoomTriggerC_4

SaltySpitoon_2F_EventScript_RoomTriggerC_7:
	removeobject 4
	removeobject 6
	removeobject 5
	setobjectxyperm 4, 1, 18
	setobjectxyperm 6, 2, 18
	setobjectxyperm 5, 3, 18
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
	addobject 4
	addobject 6
	addobject 5
	showobjectat 4, MAP_SALTY_SPITOON_2F
	showobjectat 6, MAP_SALTY_SPITOON_2F
	showobjectat 5, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushYellow
	goto SaltySpitoon_2F_EventScript_RoomTriggerC_4

SaltySpitoon_2F_EventScript_RoomTriggerC_8:
	removeobject 7
	removeobject 9
	removeobject 8
	setobjectxyperm 7, 1, 18
	setobjectxyperm 9, 2, 18
	setobjectxyperm 8, 3, 18
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
	addobject 7
	addobject 9
	addobject 8
	showobjectat 7, MAP_SALTY_SPITOON_2F
	showobjectat 9, MAP_SALTY_SPITOON_2F
	showobjectat 8, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushRed
	goto SaltySpitoon_2F_EventScript_RoomTriggerC_4

SaltySpitoon_2F_EventScript_RoomTriggerC_9:
	removeobject 10
	removeobject 12
	removeobject 11
	setobjectxyperm 10, 1, 18
	setobjectxyperm 12, 2, 18
	setobjectxyperm 11, 3, 18
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
	addobject 10
	addobject 12
	addobject 11
	showobjectat 10, MAP_SALTY_SPITOON_2F
	showobjectat 12, MAP_SALTY_SPITOON_2F
	showobjectat 11, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushGreen
	goto SaltySpitoon_2F_EventScript_RoomTriggerC_4


SaltySpitoon_2F_EventScript_RoomTriggerD::
	compare VAR_GANG_STATE, 5
	goto_if_eq SaltySpitoon_2F_EventScript_RoomTriggerD_2
	lock
	setvar VAR_TEMP_4, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	call SaltySpitoon_2F_EventScript_AmbushPositionPlayer
	switch VAR_GANG_STATE
	case 6, SaltySpitoon_2F_EventScript_RoomTriggerD_6
	case 7, SaltySpitoon_2F_EventScript_RoomTriggerD_7
	case 8, SaltySpitoon_2F_EventScript_RoomTriggerD_8
	case 9, SaltySpitoon_2F_EventScript_RoomTriggerD_9
	msgbox SaltySpitoon_2F_EventScript_RoomTriggerA_Text_0
	closemessage
SaltySpitoon_2F_EventScript_RoomTriggerD_4:
	release
	end

SaltySpitoon_2F_EventScript_RoomTriggerD_2:
	end

SaltySpitoon_2F_EventScript_RoomTriggerD_6:
	removeobject 1
	removeobject 3
	removeobject 2
	setobjectxyperm 1, 11, 18
	setobjectxyperm 3, 12, 18
	setobjectxyperm 2, 13, 18
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	addobject 1
	addobject 3
	addobject 2
	showobjectat 1, MAP_SALTY_SPITOON_2F
	showobjectat 3, MAP_SALTY_SPITOON_2F
	showobjectat 2, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushBlue
	goto SaltySpitoon_2F_EventScript_RoomTriggerD_4

SaltySpitoon_2F_EventScript_RoomTriggerD_7:
	removeobject 4
	removeobject 6
	removeobject 5
	setobjectxyperm 4, 11, 18
	setobjectxyperm 6, 12, 18
	setobjectxyperm 5, 13, 18
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
	addobject 4
	addobject 6
	addobject 5
	showobjectat 4, MAP_SALTY_SPITOON_2F
	showobjectat 6, MAP_SALTY_SPITOON_2F
	showobjectat 5, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushYellow
	goto SaltySpitoon_2F_EventScript_RoomTriggerD_4

SaltySpitoon_2F_EventScript_RoomTriggerD_8:
	removeobject 7
	removeobject 9
	removeobject 8
	setobjectxyperm 7, 11, 18
	setobjectxyperm 9, 12, 18
	setobjectxyperm 8, 13, 18
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
	addobject 7
	addobject 9
	addobject 8
	showobjectat 7, MAP_SALTY_SPITOON_2F
	showobjectat 9, MAP_SALTY_SPITOON_2F
	showobjectat 8, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushRed
	goto SaltySpitoon_2F_EventScript_RoomTriggerD_4

SaltySpitoon_2F_EventScript_RoomTriggerD_9:
	removeobject 10
	removeobject 12
	removeobject 11
	setobjectxyperm 10, 11, 18
	setobjectxyperm 12, 12, 18
	setobjectxyperm 11, 13, 18
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
	addobject 10
	addobject 12
	addobject 11
	showobjectat 10, MAP_SALTY_SPITOON_2F
	showobjectat 12, MAP_SALTY_SPITOON_2F
	showobjectat 11, MAP_SALTY_SPITOON_2F
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushGreen
	goto SaltySpitoon_2F_EventScript_RoomTriggerD_4


SaltySpitoon_2F_EventScript_IncVar::
	switch VAR_GANG_STATE
	case 6, SaltySpitoon_2F_EventScript_IncVar_3
	case 7, SaltySpitoon_2F_EventScript_IncVar_4
	case 8, SaltySpitoon_2F_EventScript_IncVar_5
	msgbox SaltySpitoon_2F_EventScript_IncVar_Text_0
	closemessage
SaltySpitoon_2F_EventScript_IncVar_1:
	return

SaltySpitoon_2F_EventScript_IncVar_3:
	setvar VAR_GANG_STATE, 7
	goto SaltySpitoon_2F_EventScript_IncVar_1

SaltySpitoon_2F_EventScript_IncVar_4:
	setvar VAR_GANG_STATE, 8
	goto SaltySpitoon_2F_EventScript_IncVar_1

SaltySpitoon_2F_EventScript_IncVar_5:
	setvar VAR_GANG_STATE, 9
	goto SaltySpitoon_2F_EventScript_IncVar_1


SaltySpitoon_2F_EventScript_AmbushBlue::
	applymovement 1, SaltySpitoon_2F_Movement_Ambush1
	applymovement 3, SaltySpitoon_2F_Movement_AmbushBig
	applymovement 2, SaltySpitoon_2F_Movement_Ambush2
	waitmovement 0
	msgbox SaltySpitoon_2F_Text_Ambush1
	closemessage
	applymovement 1, Common_Movement_WalkUp
	applymovement 2, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_0x8004, SPECIAL_BATTLE_SS2F_BLUE
	special DoSpecialTrainerBattle
	waitstate
	msgbox SaltySpitoon_2F_Text_Ambush2
	closemessage
	applymovement 3, Common_Movement_WalkUp
	waitmovement 0
	trainerbattle_no_intro TRAINER_BIGBLUE, SaltySpitoon_2F_Text_BigBlueLost
	msgbox SaltySpitoon_2F_Text_Ambush3
	closemessage
	hideobjectat 1, MAP_SALTY_SPITOON_2F
	hideobjectat 3, MAP_SALTY_SPITOON_2F
	hideobjectat 2, MAP_SALTY_SPITOON_2F
	removeobject 1
	removeobject 3
	removeobject 2
	setflag FLAG_SS2F_BLUE
	call SaltySpitoon_2F_EventScript_IncVar
	return


SaltySpitoon_2F_EventScript_AmbushYellow::
	applymovement 4, SaltySpitoon_2F_Movement_Ambush1
	applymovement 6, SaltySpitoon_2F_Movement_AmbushBig
	applymovement 5, SaltySpitoon_2F_Movement_Ambush2
	waitmovement 0
	msgbox SaltySpitoon_2F_Text_Ambush1
	closemessage
	applymovement 4, Common_Movement_WalkUp
	applymovement 5, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_0x8004, SPECIAL_BATTLE_SS2F_YELLOW
	special DoSpecialTrainerBattle
	waitstate
	msgbox SaltySpitoon_2F_Text_Ambush2
	closemessage
	applymovement 6, Common_Movement_WalkUp
	waitmovement 0
	trainerbattle_no_intro TRAINER_BIGYELLOW, SaltySpitoon_2F_Text_BigYellowLost
	msgbox SaltySpitoon_2F_Text_Ambush3
	closemessage
	hideobjectat 4, MAP_SALTY_SPITOON_2F
	hideobjectat 6, MAP_SALTY_SPITOON_2F
	hideobjectat 5, MAP_SALTY_SPITOON_2F
	removeobject 4
	removeobject 6
	removeobject 5
	setflag FLAG_SS2F_YELLOW
	call SaltySpitoon_2F_EventScript_IncVar
	return


SaltySpitoon_2F_EventScript_AmbushRed::
	applymovement 7, SaltySpitoon_2F_Movement_Ambush1
	applymovement 9, SaltySpitoon_2F_Movement_AmbushBig
	applymovement 8, SaltySpitoon_2F_Movement_Ambush2
	waitmovement 0
	msgbox SaltySpitoon_2F_Text_Ambush1
	closemessage
	applymovement 7, Common_Movement_WalkUp
	applymovement 8, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_0x8004, SPECIAL_BATTLE_SS2F_RED
	special DoSpecialTrainerBattle
	waitstate
	msgbox SaltySpitoon_2F_Text_Ambush2
	closemessage
	applymovement 9, Common_Movement_WalkUp
	waitmovement 0
	trainerbattle_no_intro TRAINER_BIGRED, SaltySpitoon_2F_Text_BigRedLost
	msgbox SaltySpitoon_2F_Text_Ambush3
	closemessage
	hideobjectat 7, MAP_SALTY_SPITOON_2F
	hideobjectat 9, MAP_SALTY_SPITOON_2F
	hideobjectat 8, MAP_SALTY_SPITOON_2F
	removeobject 7
	removeobject 9
	removeobject 8
	setflag FLAG_SS2F_RED
	call SaltySpitoon_2F_EventScript_IncVar
	return


SaltySpitoon_2F_EventScript_AmbushGreen::
	applymovement 10, SaltySpitoon_2F_Movement_Ambush1
	applymovement 12, SaltySpitoon_2F_Movement_AmbushBig
	applymovement 11, SaltySpitoon_2F_Movement_Ambush2
	waitmovement 0
	msgbox SaltySpitoon_2F_Text_Ambush1
	closemessage
	applymovement 10, Common_Movement_WalkUp
	applymovement 11, Common_Movement_WalkUp
	waitmovement 0
	setvar VAR_0x8004, SPECIAL_BATTLE_SS2F_GREEN
	special DoSpecialTrainerBattle
	waitstate
	msgbox SaltySpitoon_2F_Text_Ambush2
	closemessage
	applymovement 12, Common_Movement_WalkUp
	waitmovement 0
	trainerbattle_no_intro TRAINER_BIGGREEN, SaltySpitoon_2F_Text_BigGreenLost
	msgbox SaltySpitoon_2F_Text_Ambush3
	closemessage
	hideobjectat 12, MAP_SALTY_SPITOON_2F
	removeobject 12
	msgbox SaltySpitoon_2F_Text_GetTattoo
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	giveitem ITEM_TATTOO
	msgbox SaltySpitoon_2F_Text_GetTattoo2
	closemessage
	hideobjectat 10, MAP_SALTY_SPITOON_2F
	hideobjectat 11, MAP_SALTY_SPITOON_2F
	removeobject 11
	removeobject 10
	setflag FLAG_SS2F_GREEN
	setflag FLAG_SS2F_GREEN
	setvar VAR_GANG_STATE, 5
	setmetatile 17, 1, METATILE_BrendansMaysHouse_StairsDown, 0
	return


SaltySpitoon_2F_EventScript_AmbushPositionPlayer::
	goto_if_set FLAG_FOLLOWER_ACTIVE, SaltySpitoon_2F_EventScript_AmbushPositionPlayer_2
	applymovement OBJ_EVENT_ID_PLAYER, SaltySpitoon_2F_Movement_PlayerAmbush
SaltySpitoon_2F_EventScript_AmbushPositionPlayer_1:
	waitmovement 0
	return

SaltySpitoon_2F_EventScript_AmbushPositionPlayer_2:
	applymovement OBJ_EVENT_ID_PLAYER, SaltySpitoon_2F_Movement_PlayerAmbush
	applymovement OBJ_EVENT_ID_FOLLOWER, SaltySpitoon_2F_Movement_FollowerAmbush
	goto SaltySpitoon_2F_EventScript_AmbushPositionPlayer_1


SaltySpitoon_2F_EventScript_Blue1Trainer::
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_BLUE6, 0, SaltySpitoon_2F_Text_Blue1Lost, SaltySpitoon_2F_Text_Blue1Lost
	return


SaltySpitoon_2F_EventScript_Blue2Trainer::
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_BLUE7, 0, SaltySpitoon_2F_Text_Blue2Lost, SaltySpitoon_2F_Text_Blue2Lost
	return


SaltySpitoon_2F_EventScript_Yellow1Trainer::
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_YELLOW6, 0, SaltySpitoon_2F_Text_Yellow1Lost, SaltySpitoon_2F_Text_Yellow1Lost
	return


SaltySpitoon_2F_EventScript_Yellow2Trainer::
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_YELLOW7, 0, SaltySpitoon_2F_Text_Yellow2Lost, SaltySpitoon_2F_Text_Yellow2Lost
	return


SaltySpitoon_2F_EventScript_Red1Trainer::
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_RED6, 0, SaltySpitoon_2F_Text_Red1Lost, SaltySpitoon_2F_Text_Red1Lost
	return


SaltySpitoon_2F_EventScript_Red2Trainer::
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_RED7, 0, SaltySpitoon_2F_Text_Red2Lost, SaltySpitoon_2F_Text_Red2Lost
	return


SaltySpitoon_2F_EventScript_Green1Trainer::
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_GREEN6, 0, SaltySpitoon_2F_Text_Green1Lost, SaltySpitoon_2F_Text_Green1Lost
	return


SaltySpitoon_2F_EventScript_Green2Trainer::
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_GREEN7, 0, SaltySpitoon_2F_Text_Green2Lost, SaltySpitoon_2F_Text_Green2Lost
	return


SaltySpitoon_2F_Movement_PlayerAmbush:
	walk_up
	walk_up
	walk_up
	walk_right
	face_down
	step_end

SaltySpitoon_2F_Movement_FollowerAmbush:
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

SaltySpitoon_2F_Movement_Ambush1:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SaltySpitoon_2F_Movement_AmbushBig:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	step_end

SaltySpitoon_2F_Movement_Ambush2:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	step_end

SaltySpitoon_2F_EventScript_RoomTriggerA_Text_0:
	.string "VAR_GANG_STATE NOT 6-9$"

SaltySpitoon_2F_EventScript_IncVar_Text_0:
	.string "IncVar Var out of scope$"

SaltySpitoon_2F_Text_LockDoor::
	.string "The door locks behind you.$"

SaltySpitoon_2F_Text_DoorSign::
	.string "The door is locked.$"

SaltySpitoon_2F_Text_Ambush1::
	.string "Get him boys.$"

SaltySpitoon_2F_Text_Blue1Lost::
	.string "This can't be happening!$"

SaltySpitoon_2F_Text_Blue2Lost::
	.string "Another lousy day...$"

SaltySpitoon_2F_Text_Yellow1Lost::
	.string "This can't be happening!$"

SaltySpitoon_2F_Text_Yellow2Lost::
	.string "Another lousy day...$"

SaltySpitoon_2F_Text_Red1Lost::
	.string "This can't be happening!$"

SaltySpitoon_2F_Text_Red2Lost::
	.string "Another lousy day...$"

SaltySpitoon_2F_Text_Green1Lost::
	.string "This can't be happening!$"

SaltySpitoon_2F_Text_Green2Lost::
	.string "Another lousy day...$"

SaltySpitoon_2F_Text_Ambush2::
	.string "You wont get away from me!$"

SaltySpitoon_2F_Text_BigBlueLost::
	.string "Where'd this go so wrong?$"

SaltySpitoon_2F_Text_BigYellowLost::
	.string "Where'd this go so wrong?$"

SaltySpitoon_2F_Text_BigRedLost::
	.string "Where'd this go so wrong?$"

SaltySpitoon_2F_Text_BigGreenLost::
	.string "Where'd this go so wrong?$"

SaltySpitoon_2F_Text_Ambush3::
	.string "Well shit. Let's get out of here!$"

SaltySpitoon_2F_Text_GetTattoo::
	.string "Like zoinks dude you're super strong\n"
	.string "man!\n"
	.string "Like yeah man we're totally your dudes\l"
	.string "now. You're in the gang man! Like we\l"
	.string "never liked that Big Smoke anyways\l"
	.string "man.\n"
	.string "Here hang tight man I'll give you your\l"
	.string "official gang tattoo this should only\l"
	.string "take a sec...$"

SaltySpitoon_2F_Text_GetTattoo2::
	.string "Hey! That looks real cool man! Like\n"
	.string "zoinks you look like a real tough guy\l"
	.string "now. I'm gonna head back to the shack\l"
	.string "to smoke. See you around boss. Like\l"
	.string "zoins bro see ya.$"
