AldeonTown_MapScripts::
	.byte 0


AldeonTown_Script_ShowLeaf_School::
# 20 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 7, 8
# 21 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_LOOK_AROUND
	return


AldeonTown_Script_TriggerLeafBattle::
# 27 "data//maps/AldeonTown/scripts.pory"
	lockall
# 29 "data//maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 8
# 31 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 32 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 33 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 34 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 36 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 37 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Script_TriggerLeafBattle_Text_0
# 38 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 39 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 41 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 15, 9
# 42 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 43 "data//maps/AldeonTown/scripts.pory"
	addobject 5
# 44 "data//maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
# 46 "data//maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 16, 9
# 47 "data//maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 48 "data//maps/AldeonTown/scripts.pory"
	addobject 7
# 49 "data//maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 51 "data//maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_Leaf1
# 52 "data//maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_Leaf1
# 53 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 54 "data//maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 55 "data//maps/AldeonTown/scripts.pory"
	waitmovement 0
# 57 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 58 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf1
# 59 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 60 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 62 "data//maps/AldeonTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, AldeonTown_Text_LeafLost
# 64 "data//maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 65 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf2
# 66 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 67 "data//maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 78 "data//maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_EventScript_FatMan::
# 84 "data//maps/AldeonTown/scripts.pory"
	lockall
# 85 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan3, MSGBOX_DEFAULT
# 86 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 87 "data//maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_EventScript_DoorWoman::
# 92 "data//maps/AldeonTown/scripts.pory"
	lock
# 93 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 94 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_DoorWoman
# 95 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 96 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_TownSign::
# 101 "data//maps/AldeonTown/scripts.pory"
	lock
# 102 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 103 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_TownSign
# 104 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 105 "data//maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_HouseSign::
# 110 "data//maps/AldeonTown/scripts.pory"
	lock
# 111 "data//maps/AldeonTown/scripts.pory"
	faceplayer
# 112 "data//maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_HouseSign
# 113 "data//maps/AldeonTown/scripts.pory"
	closemessage
# 114 "data//maps/AldeonTown/scripts.pory"
	release
	end


# 118 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax1:
# 119 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 120 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 121 "data//maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 124 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax2:
# 125 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 126 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 127 "data//maps/AldeonTown/scripts.pory"
	walk_up
# 128 "data//maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 131 "data//maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Leaf1:
# 132 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 132 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 132 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 132 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 132 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 132 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 132 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 132 "data//maps/AldeonTown/scripts.pory"
	walk_left
# 133 "data//maps/AldeonTown/scripts.pory"
	face_up
	step_end

AldeonTown_Script_TriggerLeafBattle_Text_0:
# 37 "data//maps/AldeonTown/scripts.pory"
	.string "Hey {PLAYER}!$"

AldeonTown_Text_FatMan_BlockExit::
# 137 "data//maps/AldeonTown/scripts.pory"
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlacis, can be mighty dangerous you\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_FatMan2::
# 141 "data//maps/AldeonTown/scripts.pory"
	.string "See, I told you that Snorlax would move\n"
	.string "eventually.$"

AldeonTown_Text_FatMan3::
# 145 "data//maps/AldeonTown/scripts.pory"
	.string "This town is great cuz the Rocket Party\n"
	.string "rarely ever bothers us!$"

AldeonTown_Text_DoorWoman::
# 149 "data//maps/AldeonTown/scripts.pory"
	.string "I'm sorry but if you no business with Mr.\n"
	.string "Johnson then you need to leave.$"

AldeonTown_Text_TownSign::
# 153 "data//maps/AldeonTown/scripts.pory"
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
# 157 "data//maps/AldeonTown/scripts.pory"
	.string "Johnson Residence\n"
	.string "No Solicitors!$"

AldeonTown_Text_Leaf1::
# 162 "data//maps/AldeonTown/scripts.pory"
	.string "Look! I asked my daddy for a Pokemon to\n"
	.string "protect and keep me safe. Isn't she\l"
	.string "cute? Let's see how strong she is!$"

AldeonTown_Text_LeafLost::
# 166 "data//maps/AldeonTown/scripts.pory"
	.string "Hey! That's enough. You're hurting her,\n"
	.string "please stop.$"

AldeonTown_Text_Leaf2::
# 170 "data//maps/AldeonTown/scripts.pory"
	.string "Looks like I need to learn better\n"
	.string "technique if I am going to keep myself\l"
	.string "safe.$"
