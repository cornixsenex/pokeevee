RocketTower_13F_MapScripts::
	.byte 0


RocketTower_13F_EventScript_CheckPC::
	lockall
	setvar VAR_0x8004, 3
	special DoPCTurnOnEffect
	playse SE_PC_ON
	goto EventScript_PCMainMenu
	waitstate
	releaseall
	end


RocketTower_13F_EventScript_GioTrigger1::
	lock
	setvar VAR_ROCKETTOWER_STATE, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	release
	end

