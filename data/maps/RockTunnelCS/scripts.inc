RockTunnelCS_MapScripts::
	.byte 0


RockTunnelCS_Script_TestRock::
# 6 "data/maps/RockTunnelCS/scripts.pory"
	special DoPeccadumTruckScene
	return


RockTunnelCS_EventScript_RivalTrigger1::
# 10 "data/maps/RockTunnelCS/scripts.pory"
	lockall
# 11 "data/maps/RockTunnelCS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 12 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 13 "data/maps/RockTunnelCS/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 14 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 15 "data/maps/RockTunnelCS/scripts.pory"
	load_field_pic 4, 190, 98
# 16 "data/maps/RockTunnelCS/scripts.pory"
	msgbox RockTunnelCS_Text_Leaf1
# 17 "data/maps/RockTunnelCS/scripts.pory"
	closemessage
# 18 "data/maps/RockTunnelCS/scripts.pory"
	destroy_field_pic 4
# 19 "data/maps/RockTunnelCS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 20 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 21 "data/maps/RockTunnelCS/scripts.pory"
	addobject 3
# 22 "data/maps/RockTunnelCS/scripts.pory"
	showobjectat 3, MAP_ROCK_TUNNEL_CS
# 23 "data/maps/RockTunnelCS/scripts.pory"
	applymovement 3, RockTunnelCS_Movement_RivalEntrance1
# 24 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 25 "data/maps/RockTunnelCS/scripts.pory"
	load_field_pic 3, 190, 98
# 26 "data/maps/RockTunnelCS/scripts.pory"
	msgbox RockTunnelCS_Text_RivalIntro
# 27 "data/maps/RockTunnelCS/scripts.pory"
	destroy_field_pic 3
# 28 "data/maps/RockTunnelCS/scripts.pory"
	closemessage
# 29 "data/maps/RockTunnelCS/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL3, RockTunnelCS_Text_RivalLost
# 30 "data/maps/RockTunnelCS/scripts.pory"
	load_field_pic 3, 190, 98
# 31 "data/maps/RockTunnelCS/scripts.pory"
	msgbox RockTunnelCS_Text_RivalPost
# 32 "data/maps/RockTunnelCS/scripts.pory"
	destroy_field_pic 3
# 33 "data/maps/RockTunnelCS/scripts.pory"
	closemessage
# 34 "data/maps/RockTunnelCS/scripts.pory"
	applymovement 3, RockTunnelCS_Movement_RivalExit
# 35 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 36 "data/maps/RockTunnelCS/scripts.pory"
	removeobject 3
# 37 "data/maps/RockTunnelCS/scripts.pory"
	applymovement 2, RockTunnelCS_Movement_LeafApproach1
# 38 "data/maps/RockTunnelCS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 39 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 40 "data/maps/RockTunnelCS/scripts.pory"
	load_field_pic 4, 190, 98
# 41 "data/maps/RockTunnelCS/scripts.pory"
	msgbox RockTunnelCS_Text_Leaf2
# 42 "data/maps/RockTunnelCS/scripts.pory"
	closemessage
# 43 "data/maps/RockTunnelCS/scripts.pory"
	destroy_field_pic 4
# 44 "data/maps/RockTunnelCS/scripts.pory"
	applymovement 2, RockTunnelCS_Movement_LeafExit
# 45 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 46 "data/maps/RockTunnelCS/scripts.pory"
	removeobject 2
# 47 "data/maps/RockTunnelCS/scripts.pory"
	setflag FLAG_ROCKTUNNEL_RIVALDEFEATED
# 48 "data/maps/RockTunnelCS/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 9
# 49 "data/maps/RockTunnelCS/scripts.pory"
	releaseall
	end


RockTunnelCS_EventScript_RivalTrigger2::
# 54 "data/maps/RockTunnelCS/scripts.pory"
	lockall
# 55 "data/maps/RockTunnelCS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 56 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 57 "data/maps/RockTunnelCS/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 58 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 59 "data/maps/RockTunnelCS/scripts.pory"
	load_field_pic 4, 190, 98
# 60 "data/maps/RockTunnelCS/scripts.pory"
	msgbox RockTunnelCS_Text_Leaf1
# 61 "data/maps/RockTunnelCS/scripts.pory"
	closemessage
# 62 "data/maps/RockTunnelCS/scripts.pory"
	destroy_field_pic 4
# 63 "data/maps/RockTunnelCS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 64 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 65 "data/maps/RockTunnelCS/scripts.pory"
	addobject 3
# 66 "data/maps/RockTunnelCS/scripts.pory"
	showobjectat 3, MAP_ROCK_TUNNEL_CS
# 67 "data/maps/RockTunnelCS/scripts.pory"
	applymovement 3, RockTunnelCS_Movement_RivalEntrance2
# 68 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 69 "data/maps/RockTunnelCS/scripts.pory"
	load_field_pic 3, 190, 98
# 70 "data/maps/RockTunnelCS/scripts.pory"
	msgbox RockTunnelCS_Text_RivalIntro
# 71 "data/maps/RockTunnelCS/scripts.pory"
	destroy_field_pic 3
# 72 "data/maps/RockTunnelCS/scripts.pory"
	closemessage
# 73 "data/maps/RockTunnelCS/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL3, RockTunnelCS_Text_RivalLost
# 74 "data/maps/RockTunnelCS/scripts.pory"
	load_field_pic 3, 190, 98
# 75 "data/maps/RockTunnelCS/scripts.pory"
	msgbox RockTunnelCS_Text_RivalPost
# 76 "data/maps/RockTunnelCS/scripts.pory"
	destroy_field_pic 3
# 77 "data/maps/RockTunnelCS/scripts.pory"
	closemessage
# 78 "data/maps/RockTunnelCS/scripts.pory"
	applymovement 3, RockTunnelCS_Movement_RivalExit
# 79 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 80 "data/maps/RockTunnelCS/scripts.pory"
	removeobject 3
# 81 "data/maps/RockTunnelCS/scripts.pory"
	applymovement 2, RockTunnelCS_Movement_LeafApproach2
# 82 "data/maps/RockTunnelCS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 83 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 84 "data/maps/RockTunnelCS/scripts.pory"
	load_field_pic 4, 190, 98
# 85 "data/maps/RockTunnelCS/scripts.pory"
	msgbox RockTunnelCS_Text_Leaf2
# 86 "data/maps/RockTunnelCS/scripts.pory"
	closemessage
# 87 "data/maps/RockTunnelCS/scripts.pory"
	destroy_field_pic 4
# 88 "data/maps/RockTunnelCS/scripts.pory"
	applymovement 2, RockTunnelCS_Movement_LeafExit
# 89 "data/maps/RockTunnelCS/scripts.pory"
	waitmovement 0
# 90 "data/maps/RockTunnelCS/scripts.pory"
	removeobject 2
# 91 "data/maps/RockTunnelCS/scripts.pory"
	setflag FLAG_ROCKTUNNEL_RIVALDEFEATED
# 92 "data/maps/RockTunnelCS/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 9
# 93 "data/maps/RockTunnelCS/scripts.pory"
	releaseall
	end


# 98 "data/maps/RockTunnelCS/scripts.pory"
RockTunnelCS_Movement_RivalEntrance1:
# 99 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 99 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 99 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 99 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 99 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 99 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 99 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 99 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
	step_end

# 102 "data/maps/RockTunnelCS/scripts.pory"
RockTunnelCS_Movement_RivalEntrance2:
# 103 "data/maps/RockTunnelCS/scripts.pory"
	walk_diag_southwest
# 104 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 104 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 104 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 104 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 104 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 104 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 104 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
	step_end

# 107 "data/maps/RockTunnelCS/scripts.pory"
RockTunnelCS_Movement_RivalExit:
# 108 "data/maps/RockTunnelCS/scripts.pory"
	walk_right
# 108 "data/maps/RockTunnelCS/scripts.pory"
	walk_right
# 108 "data/maps/RockTunnelCS/scripts.pory"
	walk_right
# 108 "data/maps/RockTunnelCS/scripts.pory"
	walk_right
# 108 "data/maps/RockTunnelCS/scripts.pory"
	walk_right
# 108 "data/maps/RockTunnelCS/scripts.pory"
	walk_right
# 108 "data/maps/RockTunnelCS/scripts.pory"
	walk_right
# 108 "data/maps/RockTunnelCS/scripts.pory"
	walk_right
	step_end

# 111 "data/maps/RockTunnelCS/scripts.pory"
RockTunnelCS_Movement_LeafApproach1:
# 112 "data/maps/RockTunnelCS/scripts.pory"
	walk_right
# 112 "data/maps/RockTunnelCS/scripts.pory"
	walk_right
# 112 "data/maps/RockTunnelCS/scripts.pory"
	walk_right
	step_end

# 115 "data/maps/RockTunnelCS/scripts.pory"
RockTunnelCS_Movement_LeafApproach2:
# 116 "data/maps/RockTunnelCS/scripts.pory"
	walk_diag_southeast
# 117 "data/maps/RockTunnelCS/scripts.pory"
	walk_right
# 117 "data/maps/RockTunnelCS/scripts.pory"
	walk_right
	step_end

# 120 "data/maps/RockTunnelCS/scripts.pory"
RockTunnelCS_Movement_LeafExit:
# 121 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 121 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 121 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 121 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 121 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 121 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 121 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
# 121 "data/maps/RockTunnelCS/scripts.pory"
	walk_left
	step_end

RockTunnelCS_Text_Leaf1::
# 125 "data/maps/RockTunnelCS/scripts.pory"
	.string "Watch out! I think we fell into a trap!$"

RockTunnelCS_Text_RivalIntro::
# 129 "data/maps/RockTunnelCS/scripts.pory"
	.string "I've been waiting for you some time now\n"
	.string "{PLAYER} while you were still too weak\l"
	.string "to break those rocks I was mastering\l"
	.string "the art of battle. I will destroy you\l"
	.string "here once and for all.$"

RockTunnelCS_Text_RivalLost::
# 133 "data/maps/RockTunnelCS/scripts.pory"
	.string "It can't be so! I was superior!$"

RockTunnelCS_Text_RivalPost::
# 137 "data/maps/RockTunnelCS/scripts.pory"
	.string "You are the very worst man on this\n"
	.string "earth. I curse you every day and won't\l"
	.string "forget the torment that you've brought\l"
	.string "into my life! Do not imagine that this is\l"
	.string "the end.$"

RockTunnelCS_Text_Leaf2::
# 141 "data/maps/RockTunnelCS/scripts.pory"
	.string "My hero {PLAYER} you saved me once\n"
	.string "again! C'mon! We need to push through\l"
	.string "to the end.$"
