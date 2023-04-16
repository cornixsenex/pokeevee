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
	case 8, SaltySpitoon_2F_EventScript_RoomTriggerA_7
	case 9, SaltySpitoon_2F_EventScript_RoomTriggerA_7
SaltySpitoon_2F_EventScript_RoomTriggerA_7:
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
