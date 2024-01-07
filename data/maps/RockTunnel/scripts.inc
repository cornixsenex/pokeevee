RockTunnel_MapScripts::
	.byte 0


RockTunnel_EventScript_RivalTrigger1::
# 7 "data/maps/RockTunnel/scripts.pory"
	lockall
# 8 "data/maps/RockTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 9 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 10 "data/maps/RockTunnel/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 11 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 12 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 4, 190, 98
# 13 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_Leaf1
# 14 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 15 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 4
# 16 "data/maps/RockTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 17 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 18 "data/maps/RockTunnel/scripts.pory"
	addobject 3
# 19 "data/maps/RockTunnel/scripts.pory"
	showobjectat 3, MAP_ROCK_TUNNEL
# 20 "data/maps/RockTunnel/scripts.pory"
	applymovement 3, RockTunnel_Movement_RivalEntrance1
# 21 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 22 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 3, 190, 98
# 23 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_RivalIntro
# 24 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 3
# 25 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 26 "data/maps/RockTunnel/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_BLUE
# 27 "data/maps/RockTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL3, RockTunnel_Text_RivalLost
# 28 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 3, 190, 98
# 29 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_RivalPost
# 30 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 3
# 31 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 32 "data/maps/RockTunnel/scripts.pory"
	applymovement 3, RockTunnel_Movement_RivalExit
# 33 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 34 "data/maps/RockTunnel/scripts.pory"
	removeobject 3
# 35 "data/maps/RockTunnel/scripts.pory"
	applymovement 2, RockTunnel_Movement_LeafApproach1
# 36 "data/maps/RockTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 37 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 38 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 4, 190, 98
# 39 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_Leaf2
# 40 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 41 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 4
# 42 "data/maps/RockTunnel/scripts.pory"
	applymovement 2, RockTunnel_Movement_LeafExit
# 43 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 44 "data/maps/RockTunnel/scripts.pory"
	removeobject 2
# 45 "data/maps/RockTunnel/scripts.pory"
	setflag FLAG_ROCKTUNNEL_RIVALDEFEATED
# 46 "data/maps/RockTunnel/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 9
# 47 "data/maps/RockTunnel/scripts.pory"
	releaseall
	end


RockTunnel_EventScript_RivalTrigger2::
# 52 "data/maps/RockTunnel/scripts.pory"
	lockall
# 53 "data/maps/RockTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 54 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 55 "data/maps/RockTunnel/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 56 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 57 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 4, 190, 98
# 58 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_Leaf1
# 59 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 60 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 4
# 61 "data/maps/RockTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 62 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 63 "data/maps/RockTunnel/scripts.pory"
	addobject 3
# 64 "data/maps/RockTunnel/scripts.pory"
	showobjectat 3, MAP_ROCK_TUNNEL
# 65 "data/maps/RockTunnel/scripts.pory"
	applymovement 3, RockTunnel_Movement_RivalEntrance2
# 66 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 67 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 3, 190, 98
# 68 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_RivalIntro
# 69 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 3
# 70 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 71 "data/maps/RockTunnel/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_BLUE
# 72 "data/maps/RockTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL3, RockTunnel_Text_RivalLost
# 73 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 3, 190, 98
# 74 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_RivalPost
# 75 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 3
# 76 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 77 "data/maps/RockTunnel/scripts.pory"
	applymovement 3, RockTunnel_Movement_RivalExit
# 78 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 79 "data/maps/RockTunnel/scripts.pory"
	removeobject 3
# 80 "data/maps/RockTunnel/scripts.pory"
	applymovement 2, RockTunnel_Movement_LeafApproach2
# 81 "data/maps/RockTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 82 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 83 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 4, 190, 98
# 84 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_Leaf2
# 85 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 86 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 4
# 87 "data/maps/RockTunnel/scripts.pory"
	applymovement 2, RockTunnel_Movement_LeafExit
# 88 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 89 "data/maps/RockTunnel/scripts.pory"
	removeobject 2
# 90 "data/maps/RockTunnel/scripts.pory"
	setflag FLAG_ROCKTUNNEL_RIVALDEFEATED
# 91 "data/maps/RockTunnel/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 9
# 92 "data/maps/RockTunnel/scripts.pory"
	releaseall
	end


# 97 "data/maps/RockTunnel/scripts.pory"
RockTunnel_Movement_RivalEntrance1:
# 98 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 98 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 98 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 98 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 98 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 98 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 98 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 98 "data/maps/RockTunnel/scripts.pory"
	walk_left
	step_end

# 101 "data/maps/RockTunnel/scripts.pory"
RockTunnel_Movement_RivalEntrance2:
# 102 "data/maps/RockTunnel/scripts.pory"
	walk_diag_southwest
# 103 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 103 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 103 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 103 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 103 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 103 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 103 "data/maps/RockTunnel/scripts.pory"
	walk_left
	step_end

# 106 "data/maps/RockTunnel/scripts.pory"
RockTunnel_Movement_RivalExit:
# 107 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 107 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 107 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 107 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 107 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 107 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 107 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 107 "data/maps/RockTunnel/scripts.pory"
	walk_right
	step_end

# 110 "data/maps/RockTunnel/scripts.pory"
RockTunnel_Movement_LeafApproach1:
# 111 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 111 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 111 "data/maps/RockTunnel/scripts.pory"
	walk_right
	step_end

# 114 "data/maps/RockTunnel/scripts.pory"
RockTunnel_Movement_LeafApproach2:
# 115 "data/maps/RockTunnel/scripts.pory"
	walk_diag_southeast
# 116 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 116 "data/maps/RockTunnel/scripts.pory"
	walk_right
	step_end

# 119 "data/maps/RockTunnel/scripts.pory"
RockTunnel_Movement_LeafExit:
# 120 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 120 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 120 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 120 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 120 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 120 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 120 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 120 "data/maps/RockTunnel/scripts.pory"
	walk_left
	step_end

RockTunnel_Text_Leaf1::
# 124 "data/maps/RockTunnel/scripts.pory"
	.string "Watch out! I think we fell into a trap!$"

RockTunnel_Text_RivalIntro::
# 128 "data/maps/RockTunnel/scripts.pory"
	.string "I've been waiting for you some time now\n"
	.string "{PLAYER} while you were still too weak\l"
	.string "to break those rocks I was mastering\l"
	.string "the art of battle. I will destroy you\l"
	.string "here once and for all.$"

RockTunnel_Text_RivalLost::
# 132 "data/maps/RockTunnel/scripts.pory"
	.string "It can't be so! I was superior!$"

RockTunnel_Text_RivalPost::
# 136 "data/maps/RockTunnel/scripts.pory"
	.string "You are the very worst man on this\n"
	.string "earth. I curse you every day and won't\l"
	.string "forget the torment that you've brought\l"
	.string "into my life! Do not imagine that this is\l"
	.string "the end.$"

RockTunnel_Text_Leaf2::
# 140 "data/maps/RockTunnel/scripts.pory"
	.string "My hero {PLAYER} you saved me once\n"
	.string "again! C'mon! We need to push through\l"
	.string "to the end.$"
