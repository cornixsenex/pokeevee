CaveHole_CheckFallDownHole:
	map_script_2 VAR_ICE_STEP_COUNT, 0, EventScript_FallDownHole
	.2byte 0

CaveHole_FixCrackedGround:
	copyvar VAR_ICE_STEP_COUNT, 1
	end

EventScript_FallDownHole::
	lockall
    applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
    waitmovement 0
	delay 40
	applymovement LOCALID_PLAYER, Movement_SetInvisible
	waitmovement 0
	playse SE_FALL
	delay 60
	warphole MAP_UNDEFINED
	waitstate
	end

EventScript_FallDownFalseFloor::
	lockall
    applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
    waitmovement 0
	delay 40
	applymovement LOCALID_PLAYER, Movement_SetInvisible
	waitmovement 0
	playse SE_FALL
	delay 60
	special DoFalseFloorFall
	waitstate
	end

EventScript_FallDownHoleMtPyre::
	lockall
	delay 20
	applymovement LOCALID_PLAYER, Movement_SetInvisible
	waitmovement 0
	playse SE_FALL
	delay 60
	special DoFallWarp
	waitstate
	end

Movement_SetInvisible:
	set_invisible
	step_end
