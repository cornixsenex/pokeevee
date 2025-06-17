EliciusBeach_MapScripts::
# 8 "data/maps/EliciusBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_ROUTE9_CLEARBLOCK, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_TRANQUILITAS_SURFSCHOOL_OPEN, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data/maps/EliciusBeach/scripts.pory"
	goto_if_set FLAG_LEAF_ISGF, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/EliciusBeach/scripts.pory"
	setflag FLAG_ROUTE9_CLEARBLOCK
	goto EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 15 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowMisty
	goto EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowLeaf
	return

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 18 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_TRANQUILITAS_SURFSCHOOL_OPEN, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return


Tranquilitas_Script_ShowLeaf::
# 26 "data/maps/EliciusBeach/scripts.pory"
	setobjectxyperm LOCALID_LEAF, 4, 19
# 27 "data/maps/EliciusBeach/scripts.pory"
	setobjectmovementtype LOCALID_LEAF, MOVEMENT_TYPE_LOOK_AROUND
	return


Tranquilitas_Script_ShowMisty::
# 32 "data/maps/EliciusBeach/scripts.pory"
	setobjectxyperm LOCALID_MISTY, 24, 27
# 33 "data/maps/EliciusBeach/scripts.pory"
	setobjectmovementtype LOCALID_MISTY, MOVEMENT_TYPE_FACE_DOWN
	return


Tranquilitas_Script_Misty::
# 38 "data/maps/EliciusBeach/scripts.pory"
	lock
# 39 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 40 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 41 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_MistyBlock
# 42 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 43 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 44 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceDown
# 45 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 46 "data/maps/EliciusBeach/scripts.pory"
	release
	end


Tranquilitas_Script_Leaf::
# 52 "data/maps/EliciusBeach/scripts.pory"
	lock
# 53 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 55 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 56 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf1, MSGBOX_YESNO
# 58 "data/maps/EliciusBeach/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Tranquilitas_Script_Leaf_1
# 65 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf2
# 66 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 67 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 68 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_MistyScene
	return

Tranquilitas_Script_Leaf_1:
# 59 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_LeafNotReady
# 60 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 61 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end


Tranquilitas_Script_MistyScene::
# 75 "data/maps/EliciusBeach/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 76 "data/maps/EliciusBeach/scripts.pory"
	switch VAR_RESULT
# 77 "data/maps/EliciusBeach/scripts.pory"
	case DIR_NORTH, Tranquilitas_Script_MistyScene_3
# 82 "data/maps/EliciusBeach/scripts.pory"
	case DIR_SOUTH, Tranquilitas_Script_MistyScene_4
# 89 "data/maps/EliciusBeach/scripts.pory"
	case DIR_EAST, Tranquilitas_Script_MistyScene_5
# 96 "data/maps/EliciusBeach/scripts.pory"
	case DIR_WEST, Tranquilitas_Script_MistyScene_6
# 104 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Script_MistyScene_Text_0
# 105 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end

Tranquilitas_Script_MistyScene_1:
# 109 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Tranquilitas_Movement_ApproachMisty
# 110 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Tranquilitas_Movement_ApproachMisty
# 111 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 113 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 114 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Misty1
# 115 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 117 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 118 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf3
# 119 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 121 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_ExclamationMark
# 122 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 123 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 126 "data/maps/EliciusBeach/scripts.pory"
	checkmoney 5000
# 127 "data/maps/EliciusBeach/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Tranquilitas_Script_MistyScene_9
Tranquilitas_Script_MistyScene_8:
# 130 "data/maps/EliciusBeach/scripts.pory"
	copymoney VAR_TEMP_1
# 131 "data/maps/EliciusBeach/scripts.pory"
	divvar VAR_TEMP_1, 3
# 133 "data/maps/EliciusBeach/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_1
# 134 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Misty2
# 136 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_Registration
# 142 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 143 "data/maps/EliciusBeach/scripts.pory"
	release
	end

Tranquilitas_Script_MistyScene_3:
# 78 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 79 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 80 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 81 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_4:
# 83 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 84 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 85 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 86 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 87 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 88 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_5:
# 90 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 91 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 92 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 93 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 94 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 95 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_6:
# 97 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 98 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 99 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 100 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 101 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 102 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_9:
# 128 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_NoMoney
	goto Tranquilitas_Script_MistyScene_8


Tranquilitas_Script_NoMoney::
# 150 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_ExclamationMark
# 151 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 153 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_MistyNoMoney
# 154 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 155 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 157 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_ExclamationMark
# 158 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 160 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 161 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceLeft
# 162 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 164 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 165 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_LeafNoMoney
# 166 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 167 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 169 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Tranquilitas_Movement_LeafExitNoMoney
# 170 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 172 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowLeaf
# 173 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowMisty
# 175 "data/maps/EliciusBeach/scripts.pory"
	release
	end


Tranquilitas_Script_Registration::
# 181 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Registration, MSGBOX_YESNO
# 183 "data/maps/EliciusBeach/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Tranquilitas_Script_Registration_1
	return

Tranquilitas_Script_Registration_1:
# 185 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_ExclamationMark
# 186 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 188 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 189 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 190 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceLeft
# 191 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 193 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 194 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_LeafNoRegistration
# 195 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 196 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 197 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceUp
# 198 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 200 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 201 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_Registration
	return


Tranquilitas_Script_TouristF::
# 210 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 211 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_TouristF
# 212 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end


# 216 "data/maps/EliciusBeach/scripts.pory"
Tranquilitas_Movement_ApproachMisty:
# 217 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 217 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 217 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 217 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 218 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 218 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 218 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 218 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 218 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 218 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 218 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 218 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 219 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 220 "data/maps/EliciusBeach/scripts.pory"
	face_up
	step_end

# 224 "data/maps/EliciusBeach/scripts.pory"
Tranquilitas_Movement_LeafExitNoMoney:
# 225 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 226 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 226 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 226 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 226 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 226 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 226 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 226 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 226 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 226 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 226 "data/maps/EliciusBeach/scripts.pory"
	walk_left
	step_end

Tranquilitas_Script_MistyScene_Text_0:
# 104 "data/maps/EliciusBeach/scripts.pory"
	.string "ERROR: GetPlayer\nFacingDirection OOB$"

Tranquilitas_Text_TouristF::
# 229 "data/maps/EliciusBeach/scripts.pory"
	.string "I quit my job to go on vacation.$"

Tranquilitas_Text_MistyBlock::
# 233 "data/maps/EliciusBeach/scripts.pory"
	.string "I'm sorry sir, but the Surf School is\n"
	.string "booked all season long. I haven't any\l"
	.string "room for single registration, but I\l"
	.string "might be able to accomodate a pair. If\l"
	.string "you find someone to sign up with you\l"
	.string "come speak with me. I'll try to fit you\l"
	.string "in!$"

Tranquilitas_Text_Leaf1::
# 242 "data/maps/EliciusBeach/scripts.pory"
	.string "Where have you been {PLAYER}? You\n"
	.string "kept me waiting for so long! Are you\l"
	.string "ready for Surf School?$"

Tranquilitas_Text_LeafNotReady::
# 247 "data/maps/EliciusBeach/scripts.pory"
	.string "Ok, but hurry up! I hate waiting.$"

Tranquilitas_Text_Leaf2::
# 251 "data/maps/EliciusBeach/scripts.pory"
	.string "This is so romantic! I cannot wait to\n"
	.string "learn to surf the seas with you, my love.\l"
	.string "C'mon! Let's go meet our surf\l"
	.string "instructor.$"

Tranquilitas_Text_Misty1::
# 257 "data/maps/EliciusBeach/scripts.pory"
	.string "Hello and welcome to Tranquilitas Surf\n"
	.string "School. I'm Misty, the surf instructor.\l"
	.string "Unfortunately we are fully booked, I\l"
	.string "couldn't possibly allow you two to\l"
	.string "join...$"

Tranquilitas_Text_Leaf3::
# 265 "data/maps/EliciusBeach/scripts.pory"
	.string "But we have a reservation! It should be\n"
	.string "under my boyfriend's name, {PLAYER}.$"

Tranquilitas_Text_Misty2::
# 270 "data/maps/EliciusBeach/scripts.pory"
	.string "Of course, forgive me, I remember now.\n"
	.string "You made a reservation earlier for a\l"
	.string "couple's package at the Surf School.\l"
	.string "We've been expecting you, but first\l"
	.string "thing's first, you'll need to pay the\l"
	.string "registration fee.$"

Tranquilitas_Text_Registration::
# 278 "data/maps/EliciusBeach/scripts.pory"
	.string "The registration fee for Surf School is\n"
	.string "a one time low payment of just\l"
	.string "{STR_VAR_1}. Will you pay the\l"
	.string "registration fee?$"

Tranquilitas_Text_LeafNoRegistration::
# 282 "data/maps/EliciusBeach/scripts.pory"
	.string "But {PLAYER} you promised for our\n"
	.string "honeymooon that you would take us to\l"
	.string "learn how to surf! You still want me,\l"
	.string "don't you? This will be fun! Just pay\l"
	.string "the fee, and let's learn how to surf!$"

Tranquilitas_Text_MistyNoMoney::
# 289 "data/maps/EliciusBeach/scripts.pory"
	.string "I'm sorry sir, but it seems you do not\n"
	.string "have enough cash to cover the small fee\l"
	.string "required to register at Surf School. You\l"
	.string "will have to return with more money.$"

Tranquilitas_Text_LeafNoMoney::
# 296 "data/maps/EliciusBeach/scripts.pory"
	.string "This can't be real! It's so embarrising!\n"
	.string "How could you do something like this to\l"
	.string "me? You need to make more money if you\l"
	.string "want me to be your girlfriend.\l"
	.string "{PLAYER}, I have needs! Don't talk to\l"
	.string "me until you can afford to pay for our\l"
	.string "Surf School registration.$"
