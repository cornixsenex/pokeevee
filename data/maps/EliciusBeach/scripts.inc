EliciusBeach_MapScripts::
# 4 "data/maps/EliciusBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_ROUTE9_CLEARBLOCK, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_TRANQUILITAS_SURFSCHOOL_OPEN, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/EliciusBeach/scripts.pory"
	goto_if_set FLAG_LEAF_ISGF, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/EliciusBeach/scripts.pory"
	setflag FLAG_ROUTE9_CLEARBLOCK
	goto EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowMisty
	goto EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 15 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowLeaf
	return

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 14 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_TRANQUILITAS_SURFSCHOOL_OPEN, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return


Tranquilitas_Script_ShowLeaf::
# 22 "data/maps/EliciusBeach/scripts.pory"
	setobjectxyperm LOCALID_LEAF, 4, 19
# 23 "data/maps/EliciusBeach/scripts.pory"
	setobjectmovementtype LOCALID_LEAF, MOVEMENT_TYPE_LOOK_AROUND
	return


Tranquilitas_Script_ShowMisty::
# 28 "data/maps/EliciusBeach/scripts.pory"
	setobjectxyperm LOCALID_MISTY, 24, 27
# 29 "data/maps/EliciusBeach/scripts.pory"
	setobjectmovementtype LOCALID_MISTY, MOVEMENT_TYPE_FACE_DOWN
	return


Tranquilitas_Script_Misty::
# 34 "data/maps/EliciusBeach/scripts.pory"
	lock
# 35 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 36 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 37 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_MistyBlock
# 38 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 39 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 40 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceDown
# 41 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 42 "data/maps/EliciusBeach/scripts.pory"
	release
	end


Tranquilitas_Script_Leaf::
# 48 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 50 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 51 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf1, MSGBOX_YESNO
# 53 "data/maps/EliciusBeach/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Tranquilitas_Script_Leaf_1
# 60 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf2
# 61 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 62 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 63 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_MistyScene
	return

Tranquilitas_Script_Leaf_1:
# 54 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_LeafNotReady
# 55 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 56 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end


Tranquilitas_Script_MistyScene::
# 70 "data/maps/EliciusBeach/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 71 "data/maps/EliciusBeach/scripts.pory"
	switch VAR_RESULT
# 72 "data/maps/EliciusBeach/scripts.pory"
	case DIR_NORTH, Tranquilitas_Script_MistyScene_3
# 77 "data/maps/EliciusBeach/scripts.pory"
	case DIR_SOUTH, Tranquilitas_Script_MistyScene_4
# 84 "data/maps/EliciusBeach/scripts.pory"
	case DIR_EAST, Tranquilitas_Script_MistyScene_5
# 91 "data/maps/EliciusBeach/scripts.pory"
	case DIR_WEST, Tranquilitas_Script_MistyScene_6
# 99 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Script_MistyScene_Text_0
# 100 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end

Tranquilitas_Script_MistyScene_1:
# 104 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Tranquilitas_Movement_ApproachMisty
# 105 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Tranquilitas_Movement_ApproachMisty
# 106 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 108 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 109 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Misty1
# 110 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 112 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 113 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf3
# 114 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 116 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 117 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Misty2
# 118 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
	end

Tranquilitas_Script_MistyScene_3:
# 73 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 74 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 75 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 76 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_4:
# 78 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 79 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 80 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 81 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 82 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 83 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_5:
# 85 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 86 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 87 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 88 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 89 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 90 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_6:
# 92 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 93 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 94 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 95 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 96 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 97 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1


Tranquilitas_Script_TouristF::
# 129 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 130 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_TouristF
# 131 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end


# 135 "data/maps/EliciusBeach/scripts.pory"
Tranquilitas_Movement_ApproachMisty:
# 136 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 136 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 136 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 136 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 137 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 137 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 137 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 137 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 137 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 137 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 137 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 137 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 138 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 139 "data/maps/EliciusBeach/scripts.pory"
	face_up
	step_end

Tranquilitas_Script_MistyScene_Text_0:
# 99 "data/maps/EliciusBeach/scripts.pory"
	.string "ERROR: GetPlayer\nFacingDirection OOB$"

Tranquilitas_Text_TouristF::
# 142 "data/maps/EliciusBeach/scripts.pory"
	.string "I quit my job to go on vacation.$"

Tranquilitas_Text_MistyBlock::
# 146 "data/maps/EliciusBeach/scripts.pory"
	.string "I'm sorry sir, but the Surf School is\n"
	.string "booked all season long. I haven't any\l"
	.string "room for single registration, but I\l"
	.string "might be able to accomodate a pair. If\l"
	.string "you find someone to sign up with you\l"
	.string "come speak with me. I'll try to fit you\l"
	.string "in!$"

Tranquilitas_Text_Leaf1::
# 155 "data/maps/EliciusBeach/scripts.pory"
	.string "Where have you been {PLAYER}? You\n"
	.string "kept me waiting for so long! Are you\l"
	.string "ready for Surf School?$"

Tranquilitas_Text_LeafNotReady::
# 160 "data/maps/EliciusBeach/scripts.pory"
	.string "Ok, but hurry up! I hate waiting.$"

Tranquilitas_Text_Leaf2::
# 164 "data/maps/EliciusBeach/scripts.pory"
	.string "This is so romantic! I cannot wait to\n"
	.string "learn to surf the seas with you, my love.\l"
	.string "C'mon! Let's go meet our surf\l"
	.string "instructor.$"

Tranquilitas_Text_Misty1::
# 170 "data/maps/EliciusBeach/scripts.pory"
	.string "Hello and welcome to Tranquilitas Surf\n"
	.string "School. I'm Misty, the surf instructor.\l"
	.string "Unfortunately we are fully booked, I\l"
	.string "couldn't possibly allow you two to\l"
	.string "join...$"

Tranquilitas_Text_Leaf3::
# 178 "data/maps/EliciusBeach/scripts.pory"
	.string "But we have a reservation! It should be\n"
	.string "under my boyfriend's name, {PLAYER}.$"
