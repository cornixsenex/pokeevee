EliciusBeach_MapScripts::
# 13 "data/maps/EliciusBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/EliciusBeach/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_EliciusBeach
# 17 "data/maps/EliciusBeach/scripts.pory"
	copyvar VAR_TEMP_5, VAR_RESULT
# 21 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_ROUTE9_CLEARBLOCK, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 25 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_TRANQUILITAS_SURFSCHOOL_OPEN, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 29 "data/maps/EliciusBeach/scripts.pory"
	goto_if_set FLAG_LEAF_ISGF, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 22 "data/maps/EliciusBeach/scripts.pory"
	setflag FLAG_ROUTE9_CLEARBLOCK
	goto EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 26 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowMisty
	goto EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 30 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowLeaf
	return

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 29 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_TRANQUILITAS_SURFSCHOOL_OPEN, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return


EliciusBeach_Script_Transition_ViaSaxosa::
# 37 "data/maps/EliciusBeach/scripts.pory"
	setvar VAR_TEMP_5, 1
# 38 "data/maps/EliciusBeach/scripts.pory"
	special TransitionMapMusic
# 39 "data/maps/EliciusBeach/scripts.pory"
	special ShowMapNamePopup
	return


EliciusBeach_Script_Transition_Tranquillitas::
# 43 "data/maps/EliciusBeach/scripts.pory"
	setvar VAR_TEMP_5, 2
# 44 "data/maps/EliciusBeach/scripts.pory"
	special TransitionMapMusic
# 45 "data/maps/EliciusBeach/scripts.pory"
	special ShowMapNamePopup
	return


EliciusBeach_Script_Transition_ActaTranquilla::
# 49 "data/maps/EliciusBeach/scripts.pory"
	setvar VAR_TEMP_5, 4
# 50 "data/maps/EliciusBeach/scripts.pory"
	special TransitionMapMusic
# 51 "data/maps/EliciusBeach/scripts.pory"
	special ShowMapNamePopup
	return


EliciusBeach_Script_Transition_MareTranquillum::
# 55 "data/maps/EliciusBeach/scripts.pory"
	setvar VAR_TEMP_5, 5
# 56 "data/maps/EliciusBeach/scripts.pory"
	special TransitionMapMusic
# 57 "data/maps/EliciusBeach/scripts.pory"
	special ShowMapNamePopup
	return


Tranquilitas_Script_ShowLeaf::
# 61 "data/maps/EliciusBeach/scripts.pory"
	setobjectxyperm LOCALID_LEAF, 4, 19
# 62 "data/maps/EliciusBeach/scripts.pory"
	setobjectmovementtype LOCALID_LEAF, MOVEMENT_TYPE_LOOK_AROUND
	return


Tranquilitas_Script_ShowMisty::
# 67 "data/maps/EliciusBeach/scripts.pory"
	setobjectxyperm LOCALID_MISTY, 24, 27
# 68 "data/maps/EliciusBeach/scripts.pory"
	setobjectmovementtype LOCALID_MISTY, MOVEMENT_TYPE_FACE_DOWN
	return


Tranquilitas_Script_Misty::
# 73 "data/maps/EliciusBeach/scripts.pory"
	lock
# 74 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 75 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 76 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_MistyBlock
# 77 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 78 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 79 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceDown
# 80 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 81 "data/maps/EliciusBeach/scripts.pory"
	release
	end


Tranquilitas_Script_Leaf::
# 87 "data/maps/EliciusBeach/scripts.pory"
	lock
# 88 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 90 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 91 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf1, MSGBOX_YESNO
# 93 "data/maps/EliciusBeach/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Tranquilitas_Script_Leaf_1
# 100 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf2
# 101 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 102 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 103 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_MistyScene
	return

Tranquilitas_Script_Leaf_1:
# 94 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_LeafNotReady
# 95 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 96 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end


Tranquilitas_Script_MistyScene::
# 110 "data/maps/EliciusBeach/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 111 "data/maps/EliciusBeach/scripts.pory"
	switch VAR_RESULT
# 112 "data/maps/EliciusBeach/scripts.pory"
	case DIR_NORTH, Tranquilitas_Script_MistyScene_3
# 117 "data/maps/EliciusBeach/scripts.pory"
	case DIR_SOUTH, Tranquilitas_Script_MistyScene_4
# 124 "data/maps/EliciusBeach/scripts.pory"
	case DIR_EAST, Tranquilitas_Script_MistyScene_5
# 131 "data/maps/EliciusBeach/scripts.pory"
	case DIR_WEST, Tranquilitas_Script_MistyScene_6
# 139 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Script_MistyScene_Text_0
# 140 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end

Tranquilitas_Script_MistyScene_1:
# 144 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Tranquilitas_Movement_ApproachMisty
# 145 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Tranquilitas_Movement_ApproachMisty
# 146 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 148 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 149 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Misty1
# 150 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 152 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 153 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf3
# 154 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 156 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_ExclamationMark
# 157 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 158 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 161 "data/maps/EliciusBeach/scripts.pory"
	checkmoney 5000
# 162 "data/maps/EliciusBeach/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Tranquilitas_Script_MistyScene_9
Tranquilitas_Script_MistyScene_8:
# 165 "data/maps/EliciusBeach/scripts.pory"
	copymoney VAR_TEMP_1
# 166 "data/maps/EliciusBeach/scripts.pory"
	divvar VAR_TEMP_1, 3
# 168 "data/maps/EliciusBeach/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_1
# 169 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Misty2
# 171 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_Registration
# 173 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 174 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Misty3
# 175 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 176 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 178 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_WalkUp
# 179 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 180 "data/maps/EliciusBeach/scripts.pory"
	hideobjectat LOCALID_MISTY, MAP_BIG_ISLAND_N
# 181 "data/maps/EliciusBeach/scripts.pory"
	removeobject LOCALID_MISTY
# 183 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 184 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceLeft
# 185 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 187 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 188 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Leaf4
# 189 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 190 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 192 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkUp2
# 193 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 194 "data/maps/EliciusBeach/scripts.pory"
	hideobjectat LOCALID_LEAF, MAP_BIG_ISLAND_N
# 195 "data/maps/EliciusBeach/scripts.pory"
	removeobject LOCALID_LEAF
# 197 "data/maps/EliciusBeach/scripts.pory"
	setflag FLAG_TRANQUILITAS_SURFSCHOOL_OPEN
# 199 "data/maps/EliciusBeach/scripts.pory"
	release
	end

Tranquilitas_Script_MistyScene_3:
# 113 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 114 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 115 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 116 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_4:
# 118 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 119 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 120 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 121 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 122 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 123 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_5:
# 125 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 126 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 127 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 128 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 129 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 130 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_6:
# 132 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 133 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkDown
# 134 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 135 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_WalkRight
# 136 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 137 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	goto Tranquilitas_Script_MistyScene_1

Tranquilitas_Script_MistyScene_9:
# 163 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_NoMoney
	goto Tranquilitas_Script_MistyScene_8


Tranquilitas_Script_NoMoney::
# 206 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_ExclamationMark
# 207 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 209 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_MistyNoMoney
# 210 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 211 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 213 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_ExclamationMark
# 214 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 216 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 217 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceLeft
# 218 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 220 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 221 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_LeafNoMoney
# 222 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 223 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 225 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Tranquilitas_Movement_LeafExitNoMoney
# 226 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 228 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowLeaf
# 229 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowMisty
# 231 "data/maps/EliciusBeach/scripts.pory"
	release
	end


Tranquilitas_Script_Registration::
# 237 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_Registration, MSGBOX_YESNO
# 239 "data/maps/EliciusBeach/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Tranquilitas_Script_Registration_1
# 260 "data/maps/EliciusBeach/scripts.pory"
	removemoney VAR_TEMP_1
# 261 "data/maps/EliciusBeach/scripts.pory"
	updatemoneybox
# 262 "data/maps/EliciusBeach/scripts.pory"
	playse SE_SHOP
# 263 "data/maps/EliciusBeach/scripts.pory"
	waitse
# 265 "data/maps/EliciusBeach/scripts.pory"
	hidemoneybox
	return

Tranquilitas_Script_Registration_1:
# 241 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_LEAF, Common_Movement_ExclamationMark
# 242 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 244 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 245 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 246 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceLeft
# 247 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 249 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 250 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_LeafNoRegistration
# 251 "data/maps/EliciusBeach/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 252 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 253 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, Common_Movement_FaceUp
# 254 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 256 "data/maps/EliciusBeach/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 257 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_Registration
	return


Tranquilitas_Script_TouristF::
# 272 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 273 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_TouristF
# 274 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end


# 278 "data/maps/EliciusBeach/scripts.pory"
Tranquilitas_Movement_ApproachMisty:
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 279 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 280 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 281 "data/maps/EliciusBeach/scripts.pory"
	walk_right
# 282 "data/maps/EliciusBeach/scripts.pory"
	face_up
	step_end

# 286 "data/maps/EliciusBeach/scripts.pory"
Tranquilitas_Movement_LeafExitNoMoney:
# 287 "data/maps/EliciusBeach/scripts.pory"
	walk_down
# 288 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 288 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 288 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 288 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 288 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 288 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 288 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 288 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 288 "data/maps/EliciusBeach/scripts.pory"
	walk_left
# 288 "data/maps/EliciusBeach/scripts.pory"
	walk_left
	step_end

Tranquilitas_Script_MistyScene_Text_0:
# 139 "data/maps/EliciusBeach/scripts.pory"
	.string "ERROR: GetPlayer\nFacingDirection OOB$"

Tranquilitas_Text_TouristF::
# 291 "data/maps/EliciusBeach/scripts.pory"
	.string "I quit my job to go on vacation.$"

Tranquilitas_Text_MistyBlock::
# 295 "data/maps/EliciusBeach/scripts.pory"
	.string "I'm sorry sir, but the Surf School is\n"
	.string "booked all season long. I haven't any\l"
	.string "room for single registration, but I\l"
	.string "might be able to accomodate a pair. If\l"
	.string "you find someone to sign up with you\l"
	.string "come speak with me. I'll try to fit you\l"
	.string "in!$"

Tranquilitas_Text_Leaf1::
# 304 "data/maps/EliciusBeach/scripts.pory"
	.string "Where have you been {PLAYER}? You\n"
	.string "kept me waiting for so long! Are you\l"
	.string "ready for Surf School?$"

Tranquilitas_Text_LeafNotReady::
# 309 "data/maps/EliciusBeach/scripts.pory"
	.string "Ok, but hurry up! I hate waiting.$"

Tranquilitas_Text_Leaf2::
# 313 "data/maps/EliciusBeach/scripts.pory"
	.string "This is so romantic! I cannot wait to\n"
	.string "learn to surf the seas with you, my love.\l"
	.string "C'mon! Let's go meet our surf\l"
	.string "instructor.$"

Tranquilitas_Text_Misty1::
# 319 "data/maps/EliciusBeach/scripts.pory"
	.string "Hello and welcome to Tranquilitas Surf\n"
	.string "School. I'm Misty, the surf instructor.\l"
	.string "Unfortunately we are fully booked, I\l"
	.string "couldn't possibly allow you two to\l"
	.string "join...$"

Tranquilitas_Text_Leaf3::
# 327 "data/maps/EliciusBeach/scripts.pory"
	.string "But we have a reservation! It should be\n"
	.string "under my boyfriend's name, {PLAYER}.$"

Tranquilitas_Text_Misty2::
# 332 "data/maps/EliciusBeach/scripts.pory"
	.string "Of course, forgive me, I remember now.\n"
	.string "You made a reservation earlier for a\l"
	.string "couple's package at the Surf School.\l"
	.string "We've been expecting you, but first\l"
	.string "thing's first, you'll need to pay the\l"
	.string "registration fee.$"

Tranquilitas_Text_Registration::
# 340 "data/maps/EliciusBeach/scripts.pory"
	.string "The registration fee for Surf School is\n"
	.string "a one time low payment of just\l"
	.string "{STR_VAR_1}. Will you pay the\l"
	.string "registration fee?$"

Tranquilitas_Text_LeafNoRegistration::
# 344 "data/maps/EliciusBeach/scripts.pory"
	.string "But {PLAYER} you promised for our\n"
	.string "honeymooon that you would take us to\l"
	.string "learn how to surf! You still want me,\l"
	.string "don't you? This will be fun! Just pay\l"
	.string "the fee, and let's learn how to surf!$"

Tranquilitas_Text_MistyNoMoney::
# 351 "data/maps/EliciusBeach/scripts.pory"
	.string "I'm sorry sir, but it seems you do not\n"
	.string "have enough cash to cover the small fee\l"
	.string "required to register at Surf School. You\l"
	.string "will have to return with more money.$"

Tranquilitas_Text_LeafNoMoney::
# 358 "data/maps/EliciusBeach/scripts.pory"
	.string "This can't be real! It's so embarrising!\n"
	.string "How could you do something like this to\l"
	.string "me? You need to make more money if you\l"
	.string "want me to be your girlfriend.\l"
	.string "{PLAYER}, I have needs! Don't talk to\l"
	.string "me until you can afford to pay for our\l"
	.string "Surf School registration.$"

Tranquilitas_Text_Misty3::
# 367 "data/maps/EliciusBeach/scripts.pory"
	.string "Thank you. I'm sure you're excited to\n"
	.string "start learning to surf, so let's not\l"
	.string "waste more time. Follow me in, we'll begin\l"
	.string "the lesson.$"

Tranquilitas_Text_Leaf4::
# 373 "data/maps/EliciusBeach/scripts.pory"
	.string "Oh {PLAYER}, isn't this like a dream\n"
	.string "come true? Just you, and me, and a group\l"
	.string "of strangers, surrounded by a team of\l"
	.string "teenage girls learning how to surf in an\l"
	.string "indoor pool... I can't imagine any better\l"
	.string "way to celebrate our new relationship.\l"
	.string "C'mon, let's go inside and get started!$"
