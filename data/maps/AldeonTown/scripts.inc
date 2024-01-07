AldeonTown_MapScripts::
# 2 "data/maps/AldeonTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_OnTransition
	return


AldeonTown_OnTransition::
# 9 "data/maps/AldeonTown/scripts.pory"
	compare VAR_ROUTE1_STATE, 3
	goto_if_gt AldeonTown_OnTransition_1
	return

AldeonTown_OnTransition_1:
# 10 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 2, 20, 20
	return


AldeonTown_EventScript_SnorlaxTrigger1::
# 16 "data/maps/AldeonTown/scripts.pory"
	lockall
# 17 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 18 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 19 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AldeonTown_Movement_PlayerSnorlax1
# 20 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 21 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_EventScript_FatMan
# 22 "data/maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_EventScript_SnorlaxTrigger2::
# 27 "data/maps/AldeonTown/scripts.pory"
	lockall
# 28 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 29 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 30 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AldeonTown_Movement_PlayerSnorlax2
# 31 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 32 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_EventScript_FatMan
# 33 "data/maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_EventScript_FatMan::
# 38 "data/maps/AldeonTown/scripts.pory"
	lockall
# 39 "data/maps/AldeonTown/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 40 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 41 "data/maps/AldeonTown/scripts.pory"
	compare VAR_ROUTE1_STATE, 3
	goto_if_eq AldeonTown_EventScript_FatMan_2
# 44 "data/maps/AldeonTown/scripts.pory"
	compare VAR_ROUTE1_STATE, 4
	goto_if_eq AldeonTown_EventScript_FatMan_3
# 48 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan3
AldeonTown_EventScript_FatMan_1:
# 50 "data/maps/AldeonTown/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 51 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 52 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 53 "data/maps/AldeonTown/scripts.pory"
	releaseall
	end

AldeonTown_EventScript_FatMan_2:
# 42 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan_BlockExit
	goto AldeonTown_EventScript_FatMan_1

AldeonTown_EventScript_FatMan_3:
# 45 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan2
	goto AldeonTown_EventScript_FatMan_1


AldeonTown_EventScript_DoorWoman::
# 58 "data/maps/AldeonTown/scripts.pory"
	lock
# 59 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 60 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_DoorWoman
# 61 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 62 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_TownSign::
# 67 "data/maps/AldeonTown/scripts.pory"
	lock
# 68 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 69 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_TownSign
# 70 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 71 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_HouseSign::
# 76 "data/maps/AldeonTown/scripts.pory"
	lock
# 77 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 78 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_HouseSign
# 79 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 80 "data/maps/AldeonTown/scripts.pory"
	release
	end


# 84 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax1:
# 85 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 86 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 87 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 90 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax2:
# 91 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 92 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 93 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 94 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

AldeonTown_Text_FatMan_BlockExit::
# 98 "data/maps/AldeonTown/scripts.pory"
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlacis, can be mighty dangerous you\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_FatMan2::
# 102 "data/maps/AldeonTown/scripts.pory"
	.string "See, I told you that Snorlax would move\n"
	.string "eventually.$"

AldeonTown_Text_FatMan3::
# 106 "data/maps/AldeonTown/scripts.pory"
	.string "This town is great cuz the Rocket Party\n"
	.string "rarely ever bothers us!$"

AldeonTown_Text_DoorWoman::
# 110 "data/maps/AldeonTown/scripts.pory"
	.string "I'm sorry but if you no business with Mr.\n"
	.string "Johnson then you need to leave.$"

AldeonTown_Text_TownSign::
# 114 "data/maps/AldeonTown/scripts.pory"
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
# 118 "data/maps/AldeonTown/scripts.pory"
	.string "Johnson Residence\n"
	.string "No Solicitors!$"
