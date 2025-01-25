AldeonTown_MapScripts::
	.byte 0


AldeonTown_Script_TriggerLeafBattle::
# 14 "data/maps/AldeonTown/scripts.pory"
	lockall
# 16 "data/maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 8
# 18 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 19 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 20 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 21 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 23 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 24 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Script_TriggerLeafBattle_Text_0
# 25 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 26 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 28 "data/maps/AldeonTown/scripts.pory"
	removeobject 5
# 29 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 15, 9
# 30 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 31 "data/maps/AldeonTown/scripts.pory"
	addobject 5
# 32 "data/maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
# 34 "data/maps/AldeonTown/scripts.pory"
	removeobject 7
# 35 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 16, 9
# 36 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 37 "data/maps/AldeonTown/scripts.pory"
	addobject 7
# 38 "data/maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 40 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_Leaf1
# 41 "data/maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_Leaf1
# 42 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 43 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 44 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 46 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 47 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf1
# 48 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 49 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 51 "data/maps/AldeonTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, AldeonTown_Text_LeafLost
# 53 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 54 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf2
# 55 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 56 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 67 "data/maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_EventScript_FatMan::
# 73 "data/maps/AldeonTown/scripts.pory"
	lockall
# 74 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan3, MSGBOX_DEFAULT
# 75 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 76 "data/maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_EventScript_DoorWoman::
# 81 "data/maps/AldeonTown/scripts.pory"
	lock
# 82 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 83 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_DoorWoman
# 84 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 85 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_TownSign::
# 90 "data/maps/AldeonTown/scripts.pory"
	lock
# 91 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 92 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_TownSign
# 93 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 94 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_HouseSign::
# 99 "data/maps/AldeonTown/scripts.pory"
	lock
# 100 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 101 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_HouseSign
# 102 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 103 "data/maps/AldeonTown/scripts.pory"
	release
	end


# 107 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax1:
# 108 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 109 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 110 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 113 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax2:
# 114 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 115 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 116 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 117 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 120 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Leaf1:
# 121 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 121 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 121 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 121 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 121 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 121 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 121 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 121 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 122 "data/maps/AldeonTown/scripts.pory"
	face_up
	step_end

AldeonTown_Script_TriggerLeafBattle_Text_0:
# 24 "data/maps/AldeonTown/scripts.pory"
	.string "Hey {PLAYER}!$"

AldeonTown_Text_FatMan_BlockExit::
# 125 "data/maps/AldeonTown/scripts.pory"
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlacis, can be mighty dangerous you\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_FatMan2::
# 129 "data/maps/AldeonTown/scripts.pory"
	.string "See, I told you that Snorlax would move\n"
	.string "eventually.$"

AldeonTown_Text_FatMan3::
# 133 "data/maps/AldeonTown/scripts.pory"
	.string "This town is great cuz the Rocket Party\n"
	.string "rarely ever bothers us!$"

AldeonTown_Text_DoorWoman::
# 137 "data/maps/AldeonTown/scripts.pory"
	.string "I'm sorry but if you no business with Mr.\n"
	.string "Johnson then you need to leave.$"

AldeonTown_Text_TownSign::
# 141 "data/maps/AldeonTown/scripts.pory"
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
# 145 "data/maps/AldeonTown/scripts.pory"
	.string "Johnson Residence\n"
	.string "No Solicitors!$"

AldeonTown_Text_Leaf1::
# 150 "data/maps/AldeonTown/scripts.pory"
	.string "Look! I asked my daddy for a Pokemon to\n"
	.string "protect and keep me safe. Isn't she\l"
	.string "cute? Let's see how strong she is!$"

AldeonTown_Text_LeafLost::
# 154 "data/maps/AldeonTown/scripts.pory"
	.string "Hey! That's enough! You're hurting her,\n"
	.string "please stop!$"

AldeonTown_Text_Leaf2::
# 158 "data/maps/AldeonTown/scripts.pory"
	.string "Looks like I need to learn better\n"
	.string "technique if I am going to keep myself\l"
	.string "safe.$"
