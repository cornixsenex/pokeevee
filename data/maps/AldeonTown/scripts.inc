AldeonTown_MapScripts::
	.byte 0


AldeonTown_Script_ShowLeaf_School::
# 18 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 7, 8
# 19 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_LOOK_AROUND
	return


AldeonTown_Script_TriggerLeafBattle::
# 25 "data//maps/AldeonTown/scripts.pory"
	lockall
# 27 "data//maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 8
# 29 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 30 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 31 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 32 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 34 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 35 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Script_TriggerLeafBattle_Text_0
# 36 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 37 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 39 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 15, 9
# 40 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 41 "data//maps/AldeonTown/scripts.pory"
	addobject 5
# 42 "data//maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
# 43 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_Leaf1
# 44 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 45 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 46 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 48 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 49 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf1
# 50 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 51 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 53 "data//maps/AldeonTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, AldeonTown_Text_LeafLost
# 55 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 56 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf2
# 57 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 58 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 69 "data//maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_EventScript_FatMan::
# 75 "data//maps/AldeonTown/scripts.pory"
	lockall
# 76 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan3, MSGBOX_DEFAULT
# 77 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 78 "data//maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_EventScript_DoorWoman::
# 83 "data//maps/AldeonTown/scripts.pory"
	lock
# 84 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 85 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_DoorWoman
# 86 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 87 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_TownSign::
# 92 "data//maps/AldeonTown/scripts.pory"
	lock
# 93 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 94 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_TownSign
# 95 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 96 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_HouseSign::
# 101 "data//maps/AldeonTown/scripts.pory"
	lock
# 102 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 103 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_HouseSign
# 104 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 105 "data//maps/AldeonTown/scripts.pory"
	release
	end


# 109 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax1:
# 110 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 111 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 112 "data//maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 115 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax2:
# 116 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 117 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 118 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 119 "data//maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 122 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Leaf1:
# 123 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 123 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 123 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 123 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 123 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 123 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 123 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 123 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 124 "data//maps/AldeonTown/scripts.pory"
	face_up
	step_end

AldeonTown_Script_TriggerLeafBattle_Text_0:
# 35 "data//maps/AldeonTown/scripts.pory"
	.string "Hey {PLAYER}!$"

AldeonTown_Text_FatMan_BlockExit::
# 128 "data//maps/AldeonTown/scripts.pory"
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlacis, can be mighty dangerous you\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_FatMan2::
# 132 "data//maps/AldeonTown/scripts.pory"
	.string "See, I told you that Snorlax would move\n"
	.string "eventually.$"

AldeonTown_Text_FatMan3::
# 136 "data//maps/AldeonTown/scripts.pory"
	.string "This town is great cuz the Rocket Party\n"
	.string "rarely ever bothers us!$"

AldeonTown_Text_DoorWoman::
# 140 "data//maps/AldeonTown/scripts.pory"
	.string "I'm sorry but if you no business with Mr.\n"
	.string "Johnson then you need to leave.$"

AldeonTown_Text_TownSign::
# 144 "data//maps/AldeonTown/scripts.pory"
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
# 148 "data//maps/AldeonTown/scripts.pory"
	.string "Johnson Residence\n"
	.string "No Solicitors!$"

AldeonTown_Text_Leaf1::
# 152 "data//maps/AldeonTown/scripts.pory"
	.string "Look! I asked my daddy for a Pokemon to\n"
	.string "protect and keep me safe. Isn't she\l"
	.string "cute? Let's see how strong she is!$"

AldeonTown_Text_LeafLost::
# 156 "data//maps/AldeonTown/scripts.pory"
	.string "Hey! That's enough. You're hurting her,\n"
	.string "please stop.$"

AldeonTown_Text_Leaf2::
# 160 "data//maps/AldeonTown/scripts.pory"
	.string "Looks like I need to learn better\n"
	.string "technique if I am going to keep myself\l"
	.string "safe.$"
