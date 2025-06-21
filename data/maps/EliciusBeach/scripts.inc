EliciusBeach_MapScripts::
# 13 "data/maps/EliciusBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/EliciusBeach/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_EliciusBeach_F
# 19 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_ROUTE9_CLEARBLOCK, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 23 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_TRANQUILITAS_SURFSCHOOL_OPEN, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 27 "data/maps/EliciusBeach/scripts.pory"
	goto_if_set FLAG_LEAF_ISGF, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 20 "data/maps/EliciusBeach/scripts.pory"
	setflag FLAG_ROUTE9_CLEARBLOCK
	goto EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 24 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowMisty
	goto EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 28 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowLeaf
	return

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 27 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_TRANQUILITAS_SURFSCHOOL_OPEN, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return


EliciusBeach_Script_Transition_ViaSaxosa::
# 35 "data/maps/EliciusBeach/scripts.pory"
	setvar VAR_TEMP_5, 1
# 36 "data/maps/EliciusBeach/scripts.pory"
	special TransitionMapMusic
# 37 "data/maps/EliciusBeach/scripts.pory"
	special ShowMapNamePopup
	return


EliciusBeach_Script_Transition_Tranquillitas::
# 41 "data/maps/EliciusBeach/scripts.pory"
	setvar VAR_TEMP_5, 2
# 42 "data/maps/EliciusBeach/scripts.pory"
	special TransitionMapMusic
# 43 "data/maps/EliciusBeach/scripts.pory"
	special ShowMapNamePopup
	return


EliciusBeach_Script_Transition_ActaTranquilla::
# 47 "data/maps/EliciusBeach/scripts.pory"
	setvar VAR_TEMP_5, 4
# 48 "data/maps/EliciusBeach/scripts.pory"
	special TransitionMapMusic
# 49 "data/maps/EliciusBeach/scripts.pory"
	special ShowMapNamePopup
	return


EliciusBeach_Script_Transition_MareTranquillum::
# 53 "data/maps/EliciusBeach/scripts.pory"
	setvar VAR_TEMP_5, 5
# 54 "data/maps/EliciusBeach/scripts.pory"
	special TransitionMapMusic
# 55 "data/maps/EliciusBeach/scripts.pory"
	special ShowMapNamePopup
	return


Tranquilitas_Script_ShowLeaf::
# 59 "data/maps/EliciusBeach/scripts.pory"
	setobjectxyperm LOCALID_LEAF, 4, 19
# 60 "data/maps/EliciusBeach/scripts.pory"
	setobjectmovementtype LOCALID_LEAF, MOVEMENT_TYPE_LOOK_AROUND
	return


Tranquilitas_Script_ShowMisty::
# 65 "data/maps/EliciusBeach/scripts.pory"
	setobjectxyperm LOCALID_MISTY, 24, 27
# 66 "data/maps/EliciusBeach/scripts.pory"
	setobjectmovementtype LOCALID_MISTY, MOVEMENT_TYPE_FACE_DOWN
	return


Tranquilitas_Script_Misty::
# 71 "data/maps/EliciusBeach/scripts.pory"
	lock
# 72 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 73 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 74 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_MistyBlock
# 75 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 76 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 77 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceDown
# 78 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 79 "data/maps/EliciusBeach/scripts.pory"
	release
	end


Tranquilitas_Script_Leaf::
# 85 "data/maps/EliciusBeach/scripts.pory"
	lock
# 86 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 88 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 89 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf1, MSGBOX_YESNO
# 91 "data/maps/EliciusBeach/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Tranquilitas_Script_Leaf_1
# 98 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf2
# 99 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 100 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 101 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_MistyScene
	return

Tranquilitas_Script_Leaf_1:
# 92 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_LeafNotReady
# 93 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 94 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end


Tranquilitas_Script_MistyScene::
# 108 "data/maps/EliciusBeach/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 109 "data/maps/EliciusBeach/scripts.pory"
	switch VAR_RESULT
# 110 "data/maps/EliciusBeach/scripts.pory"
	case DIR_NORTH, Tranquilitas_Script_MistyScene_3
# 115 "data/maps/EliciusBeach/scripts.pory"
	case DIR_SOUTH, Tranquilitas_Script_MistyScene_4
# 122 "data/maps/EliciusBeach/scripts.pory"
	case DIR_EAST, Tranquilitas_Script_MistyScene_5
# 129 "data/maps/EliciusBeach/scripts.pory"
	case DIR_WEST, Tranquilitas_Script_MistyScene_6
# 137 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Script_MistyScene_Text_0
# 138 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end

Tranquilitas_Script_MistyScene_1:
# 142 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Tranquilitas_Movement_ApproachMisty
# 143 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Tranquilitas_Movement_ApproachMisty
# 144 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 146 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 147 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Misty1
# 148 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 150 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 151 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf3
# 152 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 154 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_ExclamationMark
# 155 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 156 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 159 "data/maps/EliciusBeach/scripts.pory"
	checkmoney 5000
# 160 "data/maps/EliciusBeach/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Tranquilitas_Script_MistyScene_9
Tranquilitas_Script_MistyScene_8:
# 163 "data/maps/EliciusBeach/scripts.pory"
	copymoney VAR_TEMP_1
# 164 "data/maps/EliciusBeach/scripts.pory"
	divvar VAR_TEMP_1, 3
# 166 "data/maps/EliciusBeach/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_1
# 167 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Misty2
# 169 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_Registration
# 171 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 172 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Misty3
# 173 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 174 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 176 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_WalkUp
# 177 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 178 "data/maps/EliciusBeach/scripts.pory"
	hideobjectat LOCALID_MISTY, MAP_BIG_ISLAND_N
# 179 "data/maps/EliciusBeach/scripts.pory"
	removeobject LOCALID_MISTY
# 181 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 182 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceLeft
# 183 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 185 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 186 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf4
# 187 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 188 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 190 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkUp2
# 191 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 192 "data/maps/EliciusBeach/scripts.pory"
	hideobjectat LOCALID_LEAF, MAP_BIG_ISLAND_N
# 193 "data/maps/EliciusBeach/scripts.pory"
	removeobject LOCALID_LEAF
# 195 "data/maps/EliciusBeach/scripts.pory"
	setflag FLAG_TRANQUILITAS_SURFSCHOOL_OPEN
# 197 "data/maps/EliciusBeach/scripts.pory"
	release
	end

Tranquilitas_Script_MistyScene_3:
# 111 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 112 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 113 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 114 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_4:
# 116 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 117 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 118 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 119 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 120 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 121 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_5:
# 123 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 124 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 125 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 126 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 127 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 128 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_6:
# 130 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 131 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 132 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 133 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 134 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 135 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_9:
# 161 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_NoMoney
	goto Tranquilitas_Script_MistyScene_8


Tranquilitas_Script_NoMoney::
# 204 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_ExclamationMark
# 205 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 207 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_MistyNoMoney
# 208 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 209 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 211 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_ExclamationMark
# 212 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 214 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 215 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceLeft
# 216 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 218 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 219 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_LeafNoMoney
# 220 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 221 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 223 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Tranquilitas_Movement_LeafExitNoMoney
# 224 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 226 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowLeaf
# 227 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowMisty
# 229 "data/maps/EliciusBeach/scripts.pory"
	release
	end


Tranquilitas_Script_Registration::
# 235 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Registration, MSGBOX_YESNO
# 237 "data/maps/EliciusBeach/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Tranquilitas_Script_Registration_1
# 258 "data/maps/EliciusBeach/scripts.pory"
	removemoney VAR_TEMP_1
# 259 "data/maps/EliciusBeach/scripts.pory"
	updatemoneybox
# 260 "data/maps/EliciusBeach/scripts.pory"
	playse SE_SHOP
# 261 "data/maps/EliciusBeach/scripts.pory"
	waitse
# 263 "data/maps/EliciusBeach/scripts.pory"
	hidemoneybox
	return

Tranquilitas_Script_Registration_1:
# 239 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_ExclamationMark
# 240 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 242 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 243 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 244 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceLeft
# 245 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 247 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 248 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_LeafNoRegistration
# 249 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 250 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 251 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceUp
# 252 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 254 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 255 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_Registration
	return


Tranquilitas_Script_TouristF::
# 270 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 271 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_TouristF
# 272 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end


# 276 "data/maps/EliciusBeach/scripts.pory"
Tranquilitas_Movement_ApproachMisty:
# 277 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 277 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 277 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 277 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 278 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 278 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 278 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 278 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 278 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 278 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 278 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 278 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	face_up
	step_end

# 284 "data/maps/EliciusBeach/scripts.pory"
Tranquilitas_Movement_LeafExitNoMoney:
# 285 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 286 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 286 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 286 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 286 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 286 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 286 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 286 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 286 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 286 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 286 "data/maps/EliciusBeach/scripts.pory"
	walk_left
	step_end

Tranquilitas_Script_MistyScene_Text_0:
# 137 "data/maps/EliciusBeach/scripts.pory"
	.string "ERROR: GetPlayer\nFacingDirection OOB$"

Tranquilitas_Text_TouristF::
# 289 "data/maps/EliciusBeach/scripts.pory"
	.string "I quit my job to go on vacation.$"

Tranquilitas_Text_MistyBlock::
# 293 "data/maps/EliciusBeach/scripts.pory"
	.string "I'm sorry sir, but the Surf School is\n"
	.string "booked all season long. I haven't any\l"
	.string "room for single registration, but I\l"
	.string "might be able to accomodate a pair. If\l"
	.string "you find someone to sign up with you\l"
	.string "come speak with me. I'll try to fit you\l"
	.string "in!$"

Tranquilitas_Text_Leaf1::
# 302 "data/maps/EliciusBeach/scripts.pory"
	.string "Where have you been {PLAYER}? You\n"
	.string "kept me waiting for so long! Are you\l"
	.string "ready for Surf School?$"

Tranquilitas_Text_LeafNotReady::
# 307 "data/maps/EliciusBeach/scripts.pory"
	.string "Ok, but hurry up! I hate waiting.$"

Tranquilitas_Text_Leaf2::
# 311 "data/maps/EliciusBeach/scripts.pory"
	.string "This is so romantic! I cannot wait to\n"
	.string "learn to surf the seas with you, my love.\l"
	.string "C'mon! Let's go meet our surf\l"
	.string "instructor.$"

Tranquilitas_Text_Misty1::
# 317 "data/maps/EliciusBeach/scripts.pory"
	.string "Hello and welcome to Tranquilitas Surf\n"
	.string "School. I'm Misty, the surf instructor.\l"
	.string "Unfortunately we are fully booked, I\l"
	.string "couldn't possibly allow you two to\l"
	.string "join...$"

Tranquilitas_Text_Leaf3::
# 325 "data/maps/EliciusBeach/scripts.pory"
	.string "But we have a reservation! It should be\n"
	.string "under my boyfriend's name, {PLAYER}.$"

Tranquilitas_Text_Misty2::
# 330 "data/maps/EliciusBeach/scripts.pory"
	.string "Of course, forgive me, I remember now.\n"
	.string "You made a reservation earlier for a\l"
	.string "couple's package at the Surf School.\l"
	.string "We've been expecting you, but first\l"
	.string "thing's first, you'll need to pay the\l"
	.string "registration fee.$"

Tranquilitas_Text_Registration::
# 338 "data/maps/EliciusBeach/scripts.pory"
	.string "The registration fee for Surf School is\n"
	.string "a one time low payment of just\l"
	.string "{STR_VAR_1}. Will you pay the\l"
	.string "registration fee?$"

Tranquilitas_Text_LeafNoRegistration::
# 342 "data/maps/EliciusBeach/scripts.pory"
	.string "But {PLAYER} you promised for our\n"
	.string "honeymooon that you would take us to\l"
	.string "learn how to surf! You still want me,\l"
	.string "don't you? This will be fun! Just pay\l"
	.string "the fee, and let's learn how to surf!$"

Tranquilitas_Text_MistyNoMoney::
# 349 "data/maps/EliciusBeach/scripts.pory"
	.string "I'm sorry sir, but it seems you do not\n"
	.string "have enough cash to cover the small fee\l"
	.string "required to register at Surf School. You\l"
	.string "will have to return with more money.$"

Tranquilitas_Text_LeafNoMoney::
# 356 "data/maps/EliciusBeach/scripts.pory"
	.string "This can't be real! It's so embarrising!\n"
	.string "How could you do something like this to\l"
	.string "me? You need to make more money if you\l"
	.string "want me to be your girlfriend.\l"
	.string "{PLAYER}, I have needs! Don't talk to\l"
	.string "me until you can afford to pay for our\l"
	.string "Surf School registration.$"

Tranquilitas_Text_Misty3::
# 365 "data/maps/EliciusBeach/scripts.pory"
	.string "Thank you. I'm sure you're excited to\n"
	.string "start learning to surf, so let's not\l"
	.string "waste more time. Follow me in, we'll begin\l"
	.string "the lesson.$"

Tranquilitas_Text_Leaf4::
# 371 "data/maps/EliciusBeach/scripts.pory"
	.string "Oh {PLAYER}, isn't this like a dream\n"
	.string "come true? Just you, and me, and a group\l"
	.string "of strangers, surrounded by a team of\l"
	.string "teenage girls learning how to surf in an\l"
	.string "indoor pool... I can't imagine any better\l"
	.string "way to celebrate our new relationship.\l"
	.string "C'mon, let's go inside and get started!$"
