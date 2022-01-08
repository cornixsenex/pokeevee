AldeonTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call AldeonTown_OnTransition
	return


AldeonTown_OnTransition::
	compare VAR_ROUTE1_STATE, 3
	goto_if_gt AldeonTown_OnTransition_1
	return

AldeonTown_OnTransition_1:
	setobjectxyperm 2, 20, 20
	return


AldeonTown_EventScript_SnorlaxTrigger1::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, AldeonTown_Movement_PlayerSnorlax1
	waitmovement 0
	call AldeonTown_EventScript_FatMan
	releaseall
	end


AldeonTown_EventScript_SnorlaxTrigger2::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, AldeonTown_Movement_PlayerSnorlax2
	waitmovement 0
	call AldeonTown_EventScript_FatMan
	releaseall
	end


AldeonTown_EventScript_FatMan::
	lockall
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	compare VAR_ROUTE1_STATE, 3
	goto_if_eq AldeonTown_EventScript_FatMan_2
	compare VAR_ROUTE1_STATE, 4
	goto_if_eq AldeonTown_EventScript_FatMan_3
	msgbox AldeonTown_Text_FatMan3
AldeonTown_EventScript_FatMan_1:
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	releaseall
	end

AldeonTown_EventScript_FatMan_2:
	msgbox AldeonTown_Text_FatMan_BlockExit
	goto AldeonTown_EventScript_FatMan_1

AldeonTown_EventScript_FatMan_3:
	msgbox AldeonTown_Text_FatMan2
	goto AldeonTown_EventScript_FatMan_1


AldeonTown_EventScript_DoorWoman::
	lock
	faceplayer
	msgbox AldeonTown_Text_DoorWoman
	closemessage
	release
	end


AldeonTown_EventScript_TownSign::
	lock
	faceplayer
	msgbox AldeonTown_Text_TownSign
	closemessage
	release
	end


AldeonTown_EventScript_HouseSign::
	lock
	faceplayer
	msgbox AldeonTown_Text_HouseSign
	closemessage
	release
	end


AldeonTown_Movement_PlayerSnorlax1:
	walk_left
	walk_up
	face_right
	step_end

AldeonTown_Movement_PlayerSnorlax2:
	walk_up
	walk_left
	walk_up
	face_right
	step_end

AldeonTown_Text_FatMan_BlockExit::
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlacis, can be mighty dangerous you\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_FatMan2::
	.string "See, I told you that Snorlax would move\n"
	.string "eventually.$"

AldeonTown_Text_FatMan3::
	.string "This town is great cuz the Rocket Party\n"
	.string "rarely ever bothers us!$"

AldeonTown_Text_DoorWoman::
	.string "I'm sorry but if you no business with Mr.\n"
	.string "Johnson then you need to leave/$"

AldeonTown_Text_TownSign::
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
	.string "Johnson Residence\n"
	.string "No Solicitors!$"
