RockTunnel_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RockTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RockTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call RockTunnel_OnTransition
	return


RockTunnel_OnTransition::
	removeobject 3
	end


RockTunnel_EventScript_RivalTrigger1::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox RockTunnel_Text_Leaf1
	closemessage
	destroy_field_pic 4
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	addobject 3
	applymovement 3, RockTunnel_Movement_RivalEntrance1
	waitmovement 0
	load_field_pic 3, 190, 98
	msgbox RockTunnel_Text_RivalIntro
	destroy_field_pic 3
	closemessage
	setvar VAR_MUGSHOT_ID, MUGSHOT_BLUE
	trainerbattle_no_intro TRAINER_BLUE, RockTunnel_Text_RivalLost
	load_field_pic 3, 190, 98
	msgbox RockTunnel_Text_RivalPost
	destroy_field_pic 3
	closemessage
	applymovement 3, RockTunnel_Movement_RivalExit
	waitmovement 0
	removeobject 0
	applymovement 2, RockTunnel_Movement_LeafApproach1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox RockTunnel_Text_Leaf2
	closemessage
	destroy_field_pic 4
	applymovement 4, RockTunnel_Movement_LeafExit
	waitmovement 0
	releaseall
	end


RockTunnel_EventScript_RivalTrigger2::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox RockTunnel_Text_Leaf1
	closemessage
	destroy_field_pic 4
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	addobject 3
	applymovement 3, RockTunnel_Movement_RivalEntrance2
	waitmovement 0
	load_field_pic 3, 190, 98
	msgbox RockTunnel_Text_RivalIntro
	destroy_field_pic 3
	closemessage
	setvar VAR_MUGSHOT_ID, MUGSHOT_BLUE
	trainerbattle_no_intro TRAINER_RIVAL3, RockTunnel_Text_RivalLost
	load_field_pic 3, 190, 98
	msgbox RockTunnel_Text_RivalPost
	destroy_field_pic 3
	closemessage
	applymovement 3, RockTunnel_Movement_RivalExit
	waitmovement 0
	removeobject 0
	applymovement 2, RockTunnel_Movement_LeafApproach2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox RockTunnel_Text_Leaf2
	closemessage
	destroy_field_pic 4
	applymovement 4, RockTunnel_Movement_LeafExit
	waitmovement 0
	releaseall
	end


RockTunnel_Movement_RivalEntrance1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RockTunnel_Movement_RivalEntrance2:
	walk_diag_southwest
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RockTunnel_Movement_RivalExit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RockTunnel_Movement_LeafApproach1:
	walk_right
	walk_right
	walk_right
	step_end

RockTunnel_Movement_LeafApproach2:
	walk_diag_southeast
	walk_right
	walk_right
	step_end

RockTunnel_Movement_LeafExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RockTunnel_Text_Leaf1::
	.string "Watch out! I think we fell into a trap!$"

RockTunnel_Text_RivalIntro::
	.string "I've been waiting for you some time now\n"
	.string "{PLAYER} while you were still too\l"
	.string "weak to break those rocks I was\l"
	.string "mastering the art of battle. I will\l"
	.string "destroy you here once and for all.$"

RockTunnel_Text_RivalLost::
	.string "It can't be so! I was superior!$"

RockTunnel_Text_RivalPost::
	.string "You are the very worst man on this\n"
	.string "earth. I curse you every day and won't\l"
	.string "forget the torment that you've\l"
	.string "brought into my life! Do not imagine\l"
	.string "that this is the end.$"

RockTunnel_Text_Leaf2::
	.string "My hero {PLAYER} you saved me once\n"
	.string "again! C'mon! We need to push through\l"
	.string "to the end.$"
