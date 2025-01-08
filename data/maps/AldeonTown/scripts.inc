AldeonTown_MapScripts::
# 5 "data/maps/AldeonTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/AldeonTown/scripts.pory"
	compare VAR_ALDEON_SCHOOL_STATE, 0
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowLeaf_School
	return


AldeonTown_Script_ShowLeaf_School::
# 14 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 7, 8
# 15 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_LOOK_AROUND
	return


AldeonTown_EventScript_FatMan::
# 21 "data/maps/AldeonTown/scripts.pory"
	lockall
# 22 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan3, MSGBOX_DEFAULT
# 23 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 24 "data/maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_EventScript_DoorWoman::
# 29 "data/maps/AldeonTown/scripts.pory"
	lock
# 30 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 31 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_DoorWoman
# 32 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 33 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_TownSign::
# 38 "data/maps/AldeonTown/scripts.pory"
	lock
# 39 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 40 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_TownSign
# 41 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 42 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_HouseSign::
# 47 "data/maps/AldeonTown/scripts.pory"
	lock
# 48 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 49 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_HouseSign
# 50 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 51 "data/maps/AldeonTown/scripts.pory"
	release
	end


# 55 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax1:
# 56 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 57 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 58 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 61 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax2:
# 62 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 63 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 64 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 65 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

AldeonTown_Text_FatMan_BlockExit::
# 69 "data/maps/AldeonTown/scripts.pory"
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlacis, can be mighty dangerous you\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_FatMan2::
# 73 "data/maps/AldeonTown/scripts.pory"
	.string "See, I told you that Snorlax would move\n"
	.string "eventually.$"

AldeonTown_Text_FatMan3::
# 77 "data/maps/AldeonTown/scripts.pory"
	.string "This town is great cuz the Rocket Party\n"
	.string "rarely ever bothers us!$"

AldeonTown_Text_DoorWoman::
# 81 "data/maps/AldeonTown/scripts.pory"
	.string "I'm sorry but if you no business with Mr.\n"
	.string "Johnson then you need to leave.$"

AldeonTown_Text_TownSign::
# 85 "data/maps/AldeonTown/scripts.pory"
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
# 89 "data/maps/AldeonTown/scripts.pory"
	.string "Johnson Residence\n"
	.string "No Solicitors!$"
