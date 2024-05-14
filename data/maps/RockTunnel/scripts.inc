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
	trainerbattle_no_intro TRAINER_RIVAL3, RockTunnel_Text_RivalLost
# 27 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 3, 190, 98
# 28 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_RivalPost
# 29 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 3
# 30 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 31 "data/maps/RockTunnel/scripts.pory"
	applymovement 3, RockTunnel_Movement_RivalExit
# 32 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 33 "data/maps/RockTunnel/scripts.pory"
	removeobject 3
# 34 "data/maps/RockTunnel/scripts.pory"
	applymovement 2, RockTunnel_Movement_LeafApproach1
# 35 "data/maps/RockTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 36 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 37 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 4, 190, 98
# 38 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_Leaf2
# 39 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 40 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 4
# 41 "data/maps/RockTunnel/scripts.pory"
	applymovement 2, RockTunnel_Movement_LeafExit
# 42 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 43 "data/maps/RockTunnel/scripts.pory"
	removeobject 2
# 44 "data/maps/RockTunnel/scripts.pory"
	setflag FLAG_ROCKTUNNEL_RIVALDEFEATED
# 45 "data/maps/RockTunnel/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 9
# 46 "data/maps/RockTunnel/scripts.pory"
	releaseall
	end


RockTunnel_EventScript_RivalTrigger2::
# 51 "data/maps/RockTunnel/scripts.pory"
	lockall
# 52 "data/maps/RockTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 53 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 54 "data/maps/RockTunnel/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 55 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 56 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 4, 190, 98
# 57 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_Leaf1
# 58 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 59 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 4
# 60 "data/maps/RockTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 61 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 62 "data/maps/RockTunnel/scripts.pory"
	addobject 3
# 63 "data/maps/RockTunnel/scripts.pory"
	showobjectat 3, MAP_ROCK_TUNNEL
# 64 "data/maps/RockTunnel/scripts.pory"
	applymovement 3, RockTunnel_Movement_RivalEntrance2
# 65 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 66 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 3, 190, 98
# 67 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_RivalIntro
# 68 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 3
# 69 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 70 "data/maps/RockTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL3, RockTunnel_Text_RivalLost
# 71 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 3, 190, 98
# 72 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_RivalPost
# 73 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 3
# 74 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 75 "data/maps/RockTunnel/scripts.pory"
	applymovement 3, RockTunnel_Movement_RivalExit
# 76 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 77 "data/maps/RockTunnel/scripts.pory"
	removeobject 3
# 78 "data/maps/RockTunnel/scripts.pory"
	applymovement 2, RockTunnel_Movement_LeafApproach2
# 79 "data/maps/RockTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 80 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 81 "data/maps/RockTunnel/scripts.pory"
	load_field_pic 4, 190, 98
# 82 "data/maps/RockTunnel/scripts.pory"
	msgbox RockTunnel_Text_Leaf2
# 83 "data/maps/RockTunnel/scripts.pory"
	closemessage
# 84 "data/maps/RockTunnel/scripts.pory"
	destroy_field_pic 4
# 85 "data/maps/RockTunnel/scripts.pory"
	applymovement 2, RockTunnel_Movement_LeafExit
# 86 "data/maps/RockTunnel/scripts.pory"
	waitmovement 0
# 87 "data/maps/RockTunnel/scripts.pory"
	removeobject 2
# 88 "data/maps/RockTunnel/scripts.pory"
	setflag FLAG_ROCKTUNNEL_RIVALDEFEATED
# 89 "data/maps/RockTunnel/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 9
# 90 "data/maps/RockTunnel/scripts.pory"
	releaseall
	end


# 95 "data/maps/RockTunnel/scripts.pory"
RockTunnel_Movement_RivalEntrance1:
# 96 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 96 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 96 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 96 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 96 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 96 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 96 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 96 "data/maps/RockTunnel/scripts.pory"
	walk_left
	step_end

# 99 "data/maps/RockTunnel/scripts.pory"
RockTunnel_Movement_RivalEntrance2:
# 100 "data/maps/RockTunnel/scripts.pory"
	walk_diag_southwest
# 101 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 101 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 101 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 101 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 101 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 101 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 101 "data/maps/RockTunnel/scripts.pory"
	walk_left
	step_end

# 104 "data/maps/RockTunnel/scripts.pory"
RockTunnel_Movement_RivalExit:
# 105 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 105 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 105 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 105 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 105 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 105 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 105 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 105 "data/maps/RockTunnel/scripts.pory"
	walk_right
	step_end

# 108 "data/maps/RockTunnel/scripts.pory"
RockTunnel_Movement_LeafApproach1:
# 109 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 109 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 109 "data/maps/RockTunnel/scripts.pory"
	walk_right
	step_end

# 112 "data/maps/RockTunnel/scripts.pory"
RockTunnel_Movement_LeafApproach2:
# 113 "data/maps/RockTunnel/scripts.pory"
	walk_diag_southeast
# 114 "data/maps/RockTunnel/scripts.pory"
	walk_right
# 114 "data/maps/RockTunnel/scripts.pory"
	walk_right
	step_end

# 117 "data/maps/RockTunnel/scripts.pory"
RockTunnel_Movement_LeafExit:
# 118 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 118 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 118 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 118 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 118 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 118 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 118 "data/maps/RockTunnel/scripts.pory"
	walk_left
# 118 "data/maps/RockTunnel/scripts.pory"
	walk_left
	step_end

RockTunnel_Text_Leaf1::
# 122 "data/maps/RockTunnel/scripts.pory"
	.string "Watch out! I think we fell into a trap!$"

RockTunnel_Text_RivalIntro::
# 126 "data/maps/RockTunnel/scripts.pory"
	.string "I've been waiting for you some time now\n"
	.string "{PLAYER} while you were still too weak\l"
	.string "to break those rocks I was mastering\l"
	.string "the art of battle. I will destroy you\l"
	.string "here once and for all.$"

RockTunnel_Text_RivalLost::
# 130 "data/maps/RockTunnel/scripts.pory"
	.string "It can't be so! I was superior!$"

RockTunnel_Text_RivalPost::
# 134 "data/maps/RockTunnel/scripts.pory"
	.string "You are the very worst man on this\n"
	.string "earth. I curse you every day and won't\l"
	.string "forget the torment that you've brought\l"
	.string "into my life! Do not imagine that this is\l"
	.string "the end.$"

RockTunnel_Text_Leaf2::
# 138 "data/maps/RockTunnel/scripts.pory"
	.string "My hero {PLAYER} you saved me once\n"
	.string "again! C'mon! We need to push through\l"
	.string "to the end.$"
