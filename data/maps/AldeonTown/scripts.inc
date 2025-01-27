AldeonTown_MapScripts::
# 12 "data/maps/AldeonTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/AldeonTown/scripts.pory"
	compare VAR_GRANNY_STATE, 8
	goto_if_eq AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

AldeonTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowBlueLeafBlock
	return


AldeonTown_Script_ShowBlueLeafBlock::
# 21 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 21, 22
# 22 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 23 "data/maps/AldeonTown/scripts.pory"
	addobject 8
# 24 "data/maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 26 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 21, 23
# 27 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 28 "data/maps/AldeonTown/scripts.pory"
	addobject 7
# 29 "data/maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 31 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 21, 21
# 32 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 33 "data/maps/AldeonTown/scripts.pory"
	addobject 6
# 34 "data/maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 36 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 21, 24
# 37 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 38 "data/maps/AldeonTown/scripts.pory"
	addobject 5
# 39 "data/maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
	return


AldeonTown_Script_TriggerLeafBattle::
# 45 "data/maps/AldeonTown/scripts.pory"
	lockall
# 47 "data/maps/AldeonTown/scripts.pory"
	setvar VAR_GRANNY_STATE, 8
# 49 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 50 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 51 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 52 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 55 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Script_TriggerLeafBattle_Text_0, MSGBOX_DEFAULT
# 56 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 57 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 59 "data/maps/AldeonTown/scripts.pory"
	removeobject 5
# 60 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 5, 15, 9
# 61 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 62 "data/maps/AldeonTown/scripts.pory"
	addobject 5
# 63 "data/maps/AldeonTown/scripts.pory"
	showobjectat 5, MAP_ALDEON_TOWN
# 65 "data/maps/AldeonTown/scripts.pory"
	removeobject 7
# 66 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 7, 16, 9
# 67 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 68 "data/maps/AldeonTown/scripts.pory"
	addobject 7
# 69 "data/maps/AldeonTown/scripts.pory"
	showobjectat 7, MAP_ALDEON_TOWN
# 71 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_Leaf1
# 72 "data/maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_Leaf1
# 73 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 74 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 75 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 77 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 78 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf1, MSGBOX_DEFAULT
# 79 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 80 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 82 "data/maps/AldeonTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, AldeonTown_Text_LeafLost
# 84 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 85 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf2, MSGBOX_DEFAULT
# 86 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 87 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 89 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 90 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 91 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 94 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue1, MSGBOX_DEFAULT
# 95 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 96 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 98 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 99 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 100 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 102 "data/maps/AldeonTown/scripts.pory"
	removeobject 6
# 103 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 6, 0, 9
# 104 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 105 "data/maps/AldeonTown/scripts.pory"
	addobject 6
# 106 "data/maps/AldeonTown/scripts.pory"
	showobjectat 6, MAP_ALDEON_TOWN
# 108 "data/maps/AldeonTown/scripts.pory"
	removeobject 8
# 109 "data/maps/AldeonTown/scripts.pory"
	setobjectxyperm 8, 0, 8
# 110 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
# 111 "data/maps/AldeonTown/scripts.pory"
	addobject 8
# 112 "data/maps/AldeonTown/scripts.pory"
	showobjectat 8, MAP_ALDEON_TOWN
# 114 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_Blue1
# 115 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_Blue1
# 116 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 118 "data/maps/AldeonTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 120 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 121 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue2, MSGBOX_DEFAULT
# 122 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 124 "data/maps/AldeonTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 125 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 128 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf3, MSGBOX_DEFAULT
# 129 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 131 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 132 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue3, MSGBOX_DEFAULT
# 133 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 135 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 136 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf4, MSGBOX_DEFAULT
# 137 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 139 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 140 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue4, MSGBOX_DEFAULT
# 141 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 143 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 4, 190, 98
# 144 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf5, MSGBOX_DEFAULT
# 145 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 4
# 147 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 148 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue5, MSGBOX_DEFAULT
# 149 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 150 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 152 "data/maps/AldeonTown/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 153 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, Common_Movement_WalkRight
# 154 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 155 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, Common_Movement_WalkDown
# 156 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 158 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 159 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 161 "data/maps/AldeonTown/scripts.pory"
	load_field_pic 3, 190, 98
# 162 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue6, MSGBOX_DEFAULT
# 163 "data/maps/AldeonTown/scripts.pory"
	destroy_field_pic 3
# 164 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 166 "data/maps/AldeonTown/scripts.pory"
	applymovement 7, AldeonTown_Movement_BlueLeafExeunt
# 167 "data/maps/AldeonTown/scripts.pory"
	applymovement 5, AldeonTown_Movement_BlueLeafExeunt
# 168 "data/maps/AldeonTown/scripts.pory"
	applymovement 6, AldeonTown_Movement_BlueLeafExeunt
# 169 "data/maps/AldeonTown/scripts.pory"
	applymovement 8, AldeonTown_Movement_BlueLeafExeunt
# 170 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 172 "data/maps/AldeonTown/scripts.pory"
	removeobject 5
# 173 "data/maps/AldeonTown/scripts.pory"
	removeobject 6
# 174 "data/maps/AldeonTown/scripts.pory"
	removeobject 7
# 175 "data/maps/AldeonTown/scripts.pory"
	removeobject 8
# 177 "data/maps/AldeonTown/scripts.pory"
	call AldeonTown_Script_ShowBlueLeafBlock
# 179 "data/maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_Script_Leaf::
# 184 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Leaf6, MSGBOX_DEFAULT
# 185 "data/maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Blue::
# 190 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_Blue7, MSGBOX_DEFAULT
# 191 "data/maps/AldeonTown/scripts.pory"
	closemessage
	end


AldeonTown_Script_Zubat::
# 196 "data/maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_ZUBAT, CRY_MODE_NORMAL
# 197 "data/maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_Script_Igglybuff::
# 202 "data/maps/AldeonTown/scripts.pory"
	playmoncry SPECIES_IGGLYBUFF, CRY_MODE_NORMAL
# 203 "data/maps/AldeonTown/scripts.pory"
	waitmoncry
	end


AldeonTown_EventScript_FatMan::
# 208 "data/maps/AldeonTown/scripts.pory"
	lockall
# 209 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_FatMan3, MSGBOX_DEFAULT
# 210 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 211 "data/maps/AldeonTown/scripts.pory"
	releaseall
	end


AldeonTown_EventScript_DoorWoman::
# 216 "data/maps/AldeonTown/scripts.pory"
	lock
# 217 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 218 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_DoorWoman, MSGBOX_DEFAULT
# 219 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 220 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_TownSign::
# 225 "data/maps/AldeonTown/scripts.pory"
	lock
# 226 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 227 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_TownSign, MSGBOX_DEFAULT
# 228 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 229 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_EventScript_HouseSign::
# 234 "data/maps/AldeonTown/scripts.pory"
	lock
# 235 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 236 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_HouseSign, MSGBOX_DEFAULT
# 237 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 238 "data/maps/AldeonTown/scripts.pory"
	release
	end


AldeonTown_Script_OldMan::
# 243 "data/maps/AldeonTown/scripts.pory"
	lock
# 244 "data/maps/AldeonTown/scripts.pory"
	faceplayer
# 245 "data/maps/AldeonTown/scripts.pory"
	msgbox AldeonTown_Text_OldMan, MSGBOX_DEFAULT
# 246 "data/maps/AldeonTown/scripts.pory"
	closemessage
# 247 "data/maps/AldeonTown/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 248 "data/maps/AldeonTown/scripts.pory"
	waitmovement 0
# 249 "data/maps/AldeonTown/scripts.pory"
	release
	end


# 253 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax1:
# 254 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 255 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 256 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 259 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_PlayerSnorlax2:
# 260 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 261 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 262 "data/maps/AldeonTown/scripts.pory"
	walk_up
# 263 "data/maps/AldeonTown/scripts.pory"
	face_right
	step_end

# 266 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Leaf1:
# 267 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 267 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 267 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 267 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 267 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 267 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 267 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 267 "data/maps/AldeonTown/scripts.pory"
	walk_left
# 268 "data/maps/AldeonTown/scripts.pory"
	face_up
	step_end

# 271 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_Blue1:
# 272 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 272 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 272 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 272 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 272 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 272 "data/maps/AldeonTown/scripts.pory"
	walk_right
	step_end

# 275 "data/maps/AldeonTown/scripts.pory"
AldeonTown_Movement_BlueLeafExeunt:
# 276 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 276 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 276 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 276 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 276 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 276 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 276 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 276 "data/maps/AldeonTown/scripts.pory"
	walk_right
# 276 "data/maps/AldeonTown/scripts.pory"
	walk_right
	step_end

AldeonTown_Script_TriggerLeafBattle_Text_0:
# 55 "data/maps/AldeonTown/scripts.pory"
	.string "Hey {PLAYER}!$"

AldeonTown_Text_FatMan_BlockExit::
# 279 "data/maps/AldeonTown/scripts.pory"
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlacis, can be mighty dangerous you\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_FatMan2::
# 283 "data/maps/AldeonTown/scripts.pory"
	.string "See, I told you that Snorlax would move\n"
	.string "eventually.$"

AldeonTown_Text_FatMan3::
# 287 "data/maps/AldeonTown/scripts.pory"
	.string "This town is great cuz the Rocket Party\n"
	.string "rarely ever bothers us!$"

AldeonTown_Text_DoorWoman::
# 291 "data/maps/AldeonTown/scripts.pory"
	.string "I'm sorry but if you no business with Mr.\n"
	.string "Johnson then you need to leave.$"

AldeonTown_Text_TownSign::
# 295 "data/maps/AldeonTown/scripts.pory"
	.string "Aldeon Town - Where Snorlax has the\n"
	.string "Right of Way$"

AldeonTown_Text_HouseSign::
# 299 "data/maps/AldeonTown/scripts.pory"
	.string "Johnson Residence\n"
	.string "No Solicitors!$"

AldeonTown_Text_Leaf1::
# 304 "data/maps/AldeonTown/scripts.pory"
	.string "Look! I asked my daddy for a Pokemon to\n"
	.string "protect and keep me safe. Isn't she\l"
	.string "cute? Let's see how strong she is!$"

AldeonTown_Text_LeafLost::
# 308 "data/maps/AldeonTown/scripts.pory"
	.string "Hey! That's enough! You're hurting her,\n"
	.string "please stop!$"

AldeonTown_Text_Leaf2::
# 312 "data/maps/AldeonTown/scripts.pory"
	.string "Looks like I need to learn better\n"
	.string "technique if I am going to keep myself\l"
	.string "safe.$"

AldeonTown_Text_Blue1::
# 316 "data/maps/AldeonTown/scripts.pory"
	.string "So sad...$"

AldeonTown_Text_Blue2::
# 321 "data/maps/AldeonTown/scripts.pory"
	.string "Such savage studies of slaughter\n"
	.string "should supercede a more sound syllabus.$"

AldeonTown_Text_Leaf3::
# 326 "data/maps/AldeonTown/scripts.pory"
	.string "Well pardon me, handsome unknown\n"
	.string "stranger, but truly I do not understand\l"
	.string "you. I thought that by battling\l"
	.string "Pokemon I would grow stronger as a\l"
	.string "trainer and I was planning to attend\l"
	.string "trainer school to better learn and grow\l"
	.string "as one myself.$"

AldeonTown_Text_Blue3::
# 331 "data/maps/AldeonTown/scripts.pory"
	.string "Your Pokemon will grow from battles yes\n"
	.string "but practicing in such a wonton way will\l"
	.string "only yield you diminished results. Those\l"
	.string "stuffy fools wasting away in that\l"
	.string "archaic, tyrannical, place called school\l"
	.string "can only teach you mediocrity. To be\l"
	.string "truly great you must innovate and\l"
	.string "break out of their stifling system.$"

AldeonTown_Text_Leaf4::
# 336 "data/maps/AldeonTown/scripts.pory"
	.string "We may not learn as well unsupervised\n"
	.string "but of the Trainer School, here in our\l"
	.string "midst, many have said we must attend,\l"
	.string "study, and graduate or else never be\l"
	.string "great.$"

AldeonTown_Text_Blue4::
# 341 "data/maps/AldeonTown/scripts.pory"
	.string "The many are not great for few are\n"
	.string "great. The teachers in their school\l"
	.string "have lied to them who lied to you. They\l"
	.string "jelously prevent their students from\l"
	.string "ever becoming great. If you will go with\l"
	.string "me you will be great, greater than all\l"
	.string "the students and teachers. You will\l"
	.string "become as gods among trainers with\l"
	.string "knowledge of both good and bad\l"
	.string "techniques.$"

AldeonTown_Text_Leaf5::
# 346 "data/maps/AldeonTown/scripts.pory"
	.string "Your flavored words and shapely form\n"
	.string "convince me there is truth in all of\l"
	.string "what you say. Therefore I will go with\l"
	.string "you. Please, teach me.$"

AldeonTown_Text_Blue5::
# 351 "data/maps/AldeonTown/scripts.pory"
	.string "Then let us go.$"

AldeonTown_Text_Blue6::
# 356 "data/maps/AldeonTown/scripts.pory"
	.string "Girls only, little bro.$"

AldeonTown_Text_Leaf6::
# 360 "data/maps/AldeonTown/scripts.pory"
	.string "You're so good at this! Wow! I'm learning\n"
	.string "lots!$"

AldeonTown_Text_Blue7::
# 364 "data/maps/AldeonTown/scripts.pory"
	.string "Yeah, just like that! You're doing so\n"
	.string "good girl.$"

AldeonTown_Text_OldMan::
# 368 "data/maps/AldeonTown/scripts.pory"
	.string "Hello, young man, I don't recognize you.\n"
	.string "I live here, in this house, with my\l"
	.string "brother. Go in and see him if you need to\l"
	.string "rest.$"
