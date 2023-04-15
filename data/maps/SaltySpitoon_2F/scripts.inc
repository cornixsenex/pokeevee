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
	setvar VAR_TEMP_A, 1
	setvar VAR_TEMP_E, 1
	call SaltySpitoon_2F_EventScript_AmbushPositionPlayer
	switch VAR_GANG_STATE
	case 6, SaltySpitoon_2F_EventScript_RoomTriggerA_6
	case 7, SaltySpitoon_2F_EventScript_RoomTriggerA_6
	case 8, SaltySpitoon_2F_EventScript_RoomTriggerA_6
	case 9, SaltySpitoon_2F_EventScript_RoomTriggerA_6
SaltySpitoon_2F_EventScript_RoomTriggerA_6:
	msgbox SaltySpitoon_2F_EventScript_RoomTriggerA_Text_0
	closemessage
	call SaltySpitoon_2F_EventScript_Ambush
	end

SaltySpitoon_2F_EventScript_RoomTriggerA_2:
	end


SaltySpitoon_2F_EventScript_AmbushPositionPlayer::
	goto_if_set FLAG_FOLLOWER_ACTIVE, SaltySpitoon_2F_EventScript_AmbushPositionPlayer_2
SaltySpitoon_2F_EventScript_AmbushPositionPlayer_1:
	applymovement OBJ_EVENT_ID_FOLLOWER, SalySpitoon_2F_Movement_FollowerAmbush
	waitmovement 0
	return

SaltySpitoon_2F_EventScript_AmbushPositionPlayer_2:
	applymovement OBJ_EVENT_ID_PLAYER, SalySpitoon_2F_Movement_PlayerAmbush
	goto SaltySpitoon_2F_EventScript_AmbushPositionPlayer_1


SaltySpitoon_2F_EventScript_Ambush::
	switch VAR_TEMP_E
	case 0, SaltySpitoon_2F_EventScript_Ambush_2
	case 1, SaltySpitoon_2F_EventScript_Ambush_3
	return

SaltySpitoon_2F_EventScript_Ambush_2:
	msgbox SaltySpitoon_2F_EventScript_Ambush_Text_0
	closemessage
	return

SaltySpitoon_2F_EventScript_Ambush_3:
	return


SalySpitoon_2F_Movement_PlayerAmbush:
	walk_up
	step_end

SalySpitoon_2F_Movement_FollowerAmbush:
	walk_up
	step_end

SaltySpitoon_2F_EventScript_RoomTriggerA_Text_0:
	.string "VAR_GANG_STATE NOT 6-9$"

SaltySpitoon_2F_EventScript_Ambush_Text_0:
	.string "VAR_TEMP_E IS 0 == PROBLEMO$"

SaltySpitoon_2F_Text_LockDoor::
	.string "The door locks behind you.$"

SaltySpitoon_2F_Text_DoorSign::
	.string "The door is locked.$"
