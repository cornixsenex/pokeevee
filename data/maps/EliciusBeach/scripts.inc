EliciusBeach_MapScripts::
# 11 "data/maps/EliciusBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/EliciusBeach/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_EliciusBeach_F
# 17 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_ROUTE9_CLEARBLOCK, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 21 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_TRANQUILITAS_SURFSCHOOL_OPEN, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 25 "data/maps/EliciusBeach/scripts.pory"
	goto_if_set FLAG_LEAF_ISGF, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/EliciusBeach/scripts.pory"
	setflag FLAG_ROUTE9_CLEARBLOCK
	goto EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 22 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowMisty
	goto EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 26 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowLeaf
	return

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 25 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_TRANQUILITAS_SURFSCHOOL_OPEN, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return


EliciusBeach_Script_Transition_ViaSaxosa::
# 33 "data/maps/EliciusBeach/scripts.pory"
	setvar VAR_TEMP_5, 1
# 34 "data/maps/EliciusBeach/scripts.pory"
	special TransitionMapMusic
# 35 "data/maps/EliciusBeach/scripts.pory"
	special ShowMapNamePopup
	return


EliciusBeach_Script_Transition_Tranquillitas::
# 39 "data/maps/EliciusBeach/scripts.pory"
	setvar VAR_TEMP_5, 2
# 40 "data/maps/EliciusBeach/scripts.pory"
	special TransitionMapMusic
# 41 "data/maps/EliciusBeach/scripts.pory"
	special ShowMapNamePopup
	return


EliciusBeach_Script_Transition_ActaTranquilla::
# 45 "data/maps/EliciusBeach/scripts.pory"
	setvar VAR_TEMP_5, 4
# 46 "data/maps/EliciusBeach/scripts.pory"
	special TransitionMapMusic
# 47 "data/maps/EliciusBeach/scripts.pory"
	special ShowMapNamePopup
	return


EliciusBeach_Script_Transition_MareTranquillum::
# 51 "data/maps/EliciusBeach/scripts.pory"
	setvar VAR_TEMP_5, 5
# 52 "data/maps/EliciusBeach/scripts.pory"
	special TransitionMapMusic
# 53 "data/maps/EliciusBeach/scripts.pory"
	special ShowMapNamePopup
	return


Tranquilitas_Script_ShowLeaf::
# 57 "data/maps/EliciusBeach/scripts.pory"
	setobjectxyperm LOCALID_TRANQUILLITAS_LEAF, 4, 19
# 58 "data/maps/EliciusBeach/scripts.pory"
	setobjectmovementtype LOCALID_TRANQUILLITAS_LEAF, MOVEMENT_TYPE_LOOK_AROUND
	return


Tranquilitas_Script_ShowMisty::
# 63 "data/maps/EliciusBeach/scripts.pory"
	setobjectxyperm LOCALID_TRANQUILLITAS_MISTY, 24, 27
# 64 "data/maps/EliciusBeach/scripts.pory"
	setobjectmovementtype LOCALID_TRANQUILLITAS_MISTY, MOVEMENT_TYPE_FACE_DOWN
	return


Tranquilitas_Script_Misty::
# 69 "data/maps/EliciusBeach/scripts.pory"
	lock
# 70 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 71 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 72 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_MistyBlock
# 73 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 74 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 75 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_MISTY, Common_Movement_FaceDown
# 76 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 77 "data/maps/EliciusBeach/scripts.pory"
	release
	end


Tranquilitas_Script_Leaf::
# 83 "data/maps/EliciusBeach/scripts.pory"
	lock
# 84 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 86 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 87 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf1, MSGBOX_YESNO
# 89 "data/maps/EliciusBeach/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Tranquilitas_Script_Leaf_1
# 96 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf2
# 97 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 98 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 99 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_MistyScene
	return

Tranquilitas_Script_Leaf_1:
# 90 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_LeafNotReady
# 91 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 92 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end


Tranquilitas_Script_MistyScene::
# 106 "data/maps/EliciusBeach/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 107 "data/maps/EliciusBeach/scripts.pory"
	switch VAR_RESULT
# 108 "data/maps/EliciusBeach/scripts.pory"
	case DIR_NORTH, Tranquilitas_Script_MistyScene_3
# 113 "data/maps/EliciusBeach/scripts.pory"
	case DIR_SOUTH, Tranquilitas_Script_MistyScene_4
# 120 "data/maps/EliciusBeach/scripts.pory"
	case DIR_EAST, Tranquilitas_Script_MistyScene_5
# 127 "data/maps/EliciusBeach/scripts.pory"
	case DIR_WEST, Tranquilitas_Script_MistyScene_6
# 135 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Script_MistyScene_Text_0
# 136 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end

Tranquilitas_Script_MistyScene_1:
# 140 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_LEAF, Tranquilitas_Movement_ApproachMisty
# 141 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Tranquilitas_Movement_ApproachMisty
# 142 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 144 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 145 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Misty1
# 146 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 148 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 149 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf3
# 150 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 152 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_MISTY, Common_Movement_ExclamationMark
# 153 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 154 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 157 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Misty2
# 158 "data/maps/EliciusBeach/scripts.pory"
	showmoneybox 18, 0, 0
# 159 "data/maps/EliciusBeach/scripts.pory"
	checkmoney 5000
# 160 "data/maps/EliciusBeach/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Tranquilitas_Script_MistyScene_9
Tranquilitas_Script_MistyScene_8:
# 163 "data/maps/EliciusBeach/scripts.pory"
	copymoney VAR_TEMP_B
# 164 "data/maps/EliciusBeach/scripts.pory"
	divvar VAR_TEMP_B, 3
# 166 "data/maps/EliciusBeach/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_B
# 168 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_Registration
# 170 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 171 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Misty3
# 172 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 173 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 175 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_MISTY, Common_Movement_WalkUp
# 176 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 177 "data/maps/EliciusBeach/scripts.pory"
	hideobjectat LOCALID_TRANQUILLITAS_MISTY, MAP_BIG_ISLAND_N
# 178 "data/maps/EliciusBeach/scripts.pory"
	removeobject LOCALID_TRANQUILLITAS_MISTY
# 180 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 181 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_MISTY, Common_Movement_FaceLeft
# 182 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 184 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 185 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf4
# 186 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 187 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 189 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_LEAF, Common_Movement_WalkUp2
# 190 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 191 "data/maps/EliciusBeach/scripts.pory"
	hideobjectat LOCALID_TRANQUILLITAS_LEAF, MAP_BIG_ISLAND_N
# 192 "data/maps/EliciusBeach/scripts.pory"
	removeobject LOCALID_TRANQUILLITAS_LEAF
# 194 "data/maps/EliciusBeach/scripts.pory"
	setflag FLAG_TRANQUILITAS_SURFSCHOOL_OPEN
# 196 "data/maps/EliciusBeach/scripts.pory"
	release
	end

Tranquilitas_Script_MistyScene_3:
# 109 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_LEAF, Common_Movement_WalkRight
# 110 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 111 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_LEAF, Common_Movement_WalkDown
# 112 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_4:
# 114 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_LEAF, Common_Movement_WalkDown
# 115 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 116 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 117 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_LEAF, Common_Movement_WalkRight
# 118 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 119 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_5:
# 121 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 122 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_LEAF, Common_Movement_WalkDown
# 123 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 124 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 125 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_LEAF, Common_Movement_WalkRight
# 126 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_6:
# 128 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 129 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_LEAF, Common_Movement_WalkDown
# 130 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 131 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_LEAF, Common_Movement_WalkRight
# 132 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 133 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_9:
# 161 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_NoMoney
	goto Tranquilitas_Script_MistyScene_8


Tranquilitas_Script_NoMoney::
# 203 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_MISTY, Common_Movement_ExclamationMark
# 204 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 206 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_MistyNoMoney
# 207 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 208 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 210 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_LEAF, Common_Movement_ExclamationMark
# 211 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 213 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 214 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_MISTY, Common_Movement_FaceLeft
# 215 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 217 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 218 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_LeafNoMoney
# 219 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 220 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 222 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_LEAF, Tranquilitas_Movement_LeafExitNoMoney
# 223 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 225 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowLeaf
# 226 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowMisty
# 228 "data/maps/EliciusBeach/scripts.pory"
	release
	end


Tranquilitas_Script_Registration::
# 234 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Registration, MSGBOX_YESNO
# 236 "data/maps/EliciusBeach/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Tranquilitas_Script_Registration_1
# 259 "data/maps/EliciusBeach/scripts.pory"
	removemoney var ( VAR_TEMP_B )
# 260 "data/maps/EliciusBeach/scripts.pory"
	updatemoneybox
# 261 "data/maps/EliciusBeach/scripts.pory"
	playse SE_SHOP
# 262 "data/maps/EliciusBeach/scripts.pory"
	waitse
# 264 "data/maps/EliciusBeach/scripts.pory"
	hidemoneybox
	return

Tranquilitas_Script_Registration_1:
# 237 "data/maps/EliciusBeach/scripts.pory"
	hidemoneybox
# 239 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_LEAF, Common_Movement_ExclamationMark
# 240 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 242 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 243 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 244 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_TRANQUILLITAS_MISTY, Common_Movement_FaceLeft
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
	applymovement LOCALID_TRANQUILLITAS_MISTY, Common_Movement_FaceUp
# 252 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 253 "data/maps/EliciusBeach/scripts.pory"
	showmoneybox 18, 0
# 255 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 256 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_Registration
	return


Tranquilitas_Script_TouristF::
# 271 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 272 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_TouristF
# 273 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end


# 277 "data/maps/EliciusBeach/scripts.pory"
Tranquilitas_Movement_ApproachMisty:
# 278 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 278 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 278 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 278 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	face_up
	step_end

# 285 "data/maps/EliciusBeach/scripts.pory"
Tranquilitas_Movement_LeafExitNoMoney:
# 286 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 287 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 287 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 287 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 287 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 287 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 287 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 287 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 287 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 287 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 287 "data/maps/EliciusBeach/scripts.pory"
	walk_left
	step_end

Tranquilitas_Script_MistyScene_Text_0:
# 135 "data/maps/EliciusBeach/scripts.pory"
	.string "ERROR: GetPlayer\nFacingDirection OOB$"

Tranquilitas_Text_TouristF::
# 290 "data/maps/EliciusBeach/scripts.pory"
	.string "I quit my job to go on vacation.$"

Tranquilitas_Text_MistyBlock::
# 294 "data/maps/EliciusBeach/scripts.pory"
	.string "I'm sorry sir, but the Surf School is\n"
	.string "booked all season long. I haven't any\l"
	.string "room for single registration, but I\l"
	.string "might be able to accomodate a pair. If\l"
	.string "you find someone to sign up with you\l"
	.string "come speak with me. I'll try to fit you\l"
	.string "in!$"

Tranquilitas_Text_Leaf1::
# 303 "data/maps/EliciusBeach/scripts.pory"
	.string "Where have you been {PLAYER}? You\n"
	.string "kept me waiting for so long! Are you\l"
	.string "ready for Surf School?$"

Tranquilitas_Text_LeafNotReady::
# 308 "data/maps/EliciusBeach/scripts.pory"
	.string "Ok, but hurry up! I hate waiting.$"

Tranquilitas_Text_Leaf2::
# 312 "data/maps/EliciusBeach/scripts.pory"
	.string "This is so romantic! I cannot wait to\n"
	.string "learn to surf the seas with you, my love.\l"
	.string "C'mon! Let's go meet our surf\l"
	.string "instructor.$"

Tranquilitas_Text_Misty1::
# 318 "data/maps/EliciusBeach/scripts.pory"
	.string "Hello and welcome to Tranquilitas Surf\n"
	.string "School. I'm Misty, the surf instructor.\l"
	.string "Unfortunately we are fully booked, I\l"
	.string "couldn't possibly allow you two to\l"
	.string "join...$"

Tranquilitas_Text_Leaf3::
# 326 "data/maps/EliciusBeach/scripts.pory"
	.string "But we have a reservation! It should be\n"
	.string "under my boyfriend's name, {PLAYER}.$"

Tranquilitas_Text_Misty2::
# 331 "data/maps/EliciusBeach/scripts.pory"
	.string "Of course, forgive me, I remember now.\n"
	.string "You made a reservation earlier for a\l"
	.string "couple's package at the Surf School.\l"
	.string "We've been expecting you, but first\l"
	.string "thing's first, you'll need to pay the\l"
	.string "registration fee.$"

Tranquilitas_Text_Registration::
# 339 "data/maps/EliciusBeach/scripts.pory"
	.string "The registration fee for Surf School is\n"
	.string "a one time low payment of just\l"
	.string "{STR_VAR_1}. Will you pay the\l"
	.string "registration fee?$"

Tranquilitas_Text_LeafNoRegistration::
# 343 "data/maps/EliciusBeach/scripts.pory"
	.string "But {PLAYER} you promised for our\n"
	.string "honeymooon that you would take us to\l"
	.string "learn how to surf! You still want me,\l"
	.string "don't you? This will be fun! Just pay\l"
	.string "the fee, and let's learn how to surf!$"

Tranquilitas_Text_MistyNoMoney::
# 350 "data/maps/EliciusBeach/scripts.pory"
	.string "I'm sorry sir, but it seems you do not\n"
	.string "have enough cash to cover the small fee\l"
	.string "required to register at Surf School. You\l"
	.string "will have to return with more money.$"

Tranquilitas_Text_LeafNoMoney::
# 357 "data/maps/EliciusBeach/scripts.pory"
	.string "This can't be real! It's so embarrising!\n"
	.string "How could you do something like this to\l"
	.string "me? You need to make more money if you\l"
	.string "want me to be your girlfriend.\l"
	.string "{PLAYER}, I have needs! Don't talk to\l"
	.string "me until you can afford to pay for our\l"
	.string "Surf School registration.$"

Tranquilitas_Text_Misty3::
# 366 "data/maps/EliciusBeach/scripts.pory"
	.string "Thank you. I'm sure you're excited to\n"
	.string "start learning to surf, so let's not\l"
	.string "waste more time. Follow me in, we'll begin\l"
	.string "the lesson.$"

Tranquilitas_Text_Leaf4::
# 372 "data/maps/EliciusBeach/scripts.pory"
	.string "Oh {PLAYER}, isn't this like a dream\n"
	.string "come true? Just you, and me, and a group\l"
	.string "of strangers, surrounded by a team of\l"
	.string "teenage girls learning how to surf in an\l"
	.string "indoor pool... I can't imagine any better\l"
	.string "way to celebrate our new relationship.\l"
	.string "C'mon, let's go inside and get started!$"
