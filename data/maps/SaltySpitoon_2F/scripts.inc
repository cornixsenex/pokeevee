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
	setobjectxyperm 1, 1, 9
	setobjectxyperm 3, 2, 9
	setobjectxyperm 2, 3, 9
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	special DrawWholeMapView
	call SaltySpitoon_2F_EventScript_AmbushBlue
	goto SaltySpitoon_2F_EventScript_RoomTriggerA_4


SaltySpitoon_2F_EventScript_AmbushBlue::
	msgbox SaltySpitoon_2F_EventScript_AmbushBlue_Text_0
	closemessage
	applymovement 1, SaltySpitoon_2F_Movement_Ambush1
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

SaltySpitoon_2F_EventScript_RoomTriggerA_Text_0:
	.string "VAR_GANG_STATE NOT 6-9$"

SaltySpitoon_2F_EventScript_AmbushBlue_Text_0:
	.string "SCRIPT HERE$"

SaltySpitoon_2F_Text_LockDoor::
	.string "The door locks behind you.$"

SaltySpitoon_2F_Text_DoorSign::
	.string "The door is locked.$"
