Route3_MapScripts::
# 8 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/Route3/scripts.pory"
	specialvar VAR_RESULT, IsRoute3RiverDelta
# 11 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 14 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 2
	return


Route3_EventScript_LeafTrigger1::
# 22 "data/maps/Route3/scripts.pory"
	lockall
# 23 "data/maps/Route3/scripts.pory"
	addobject 13
# 24 "data/maps/Route3/scripts.pory"
	showobjectat 13, MAP_ROUTE3
# 25 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 26 "data/maps/Route3/scripts.pory"
	applymovement 13, Route3_Movement_LeafIntro1
# 27 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 29 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Leaf1
# 31 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_LeafTrigger2::
# 36 "data/maps/Route3/scripts.pory"
	lockall
# 37 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 38 "data/maps/Route3/scripts.pory"
	addobject 13
# 39 "data/maps/Route3/scripts.pory"
	showobjectat 13, MAP_ROUTE3
# 40 "data/maps/Route3/scripts.pory"
	applymovement 13, Route3_Movement_LeafIntro2
# 41 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 43 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Leaf1
# 45 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_MewTrigger1::
# 50 "data/maps/Route3/scripts.pory"
	lockall
# 51 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 52 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route3/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 54 "data/maps/Route3/scripts.pory"
	fadescreen 1
# 55 "data/maps/Route3/scripts.pory"
	waitmoncry
# 56 "data/maps/Route3/scripts.pory"
	removeobject 15
# 57 "data/maps/Route3/scripts.pory"
	setflag FLAG_SILVANWOODS_HIDEFIGHT2
# 58 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_STATE, 3
# 59 "data/maps/Route3/scripts.pory"
	fadescreen 0
# 60 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_RivalTrigger1::
# 65 "data/maps/Route3/scripts.pory"
	lockall
# 66 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 67 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Movement_RivalPlayer1
# 69 "data/maps/Route3/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 70 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Rival
# 72 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_RivalTrigger2::
# 77 "data/maps/Route3/scripts.pory"
	lockall
# 78 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 79 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Movement_RivalPlayer1B
# 81 "data/maps/Route3/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 82 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Rival
# 84 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_Rival::
# 89 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 90 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf2
# 91 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route3/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 93 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route3/scripts.pory"
	closemessage
# 95 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 96 "data/maps/Route3/scripts.pory"
	addobject 17
# 97 "data/maps/Route3/scripts.pory"
	showobjectat 17, MAP_ROUTE3
# 98 "data/maps/Route3/scripts.pory"
	applymovement 17, Route3_Movement_Rival1
# 99 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 100 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route3/scripts.pory"
	load_field_pic 3, 190, 98
# 102 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RivalIntro
# 103 "data/maps/Route3/scripts.pory"
	destroy_field_pic 3
# 104 "data/maps/Route3/scripts.pory"
	closemessage
# 105 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL2, Route3_Text_RivalLost
# 106 "data/maps/Route3/scripts.pory"
	load_field_pic 3, 190, 98
# 107 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RivalPost
# 108 "data/maps/Route3/scripts.pory"
	destroy_field_pic 3
# 109 "data/maps/Route3/scripts.pory"
	closemessage
# 110 "data/maps/Route3/scripts.pory"
	applymovement 17, Route3_Movement_Rival2
# 111 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route3/scripts.pory"
	removeobject 17
# 113 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 114 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 115 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 116 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf3
# 117 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 118 "data/maps/Route3/scripts.pory"
	closemessage
# 119 "data/maps/Route3/scripts.pory"
	applymovement 16, Route3_Movement_RivalLeafExit
# 120 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route3/scripts.pory"
	removeobject 16
# 122 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_STATE, 4
# 123 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_SILVANWOODS_LEAF2
# 124 "data/maps/Route3/scripts.pory"
	clearflag FLAG_HIDE_SILVANWOODS_LEAF1
	return


Route3_EventScript_Leaf1::
# 129 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 130 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf1
# 131 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 132 "data/maps/Route3/scripts.pory"
	closemessage
# 133 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, Route3_Text_LeafLost
# 134 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 135 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf1Post
# 136 "data/maps/Route3/scripts.pory"
	closemessage
# 137 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 138 "data/maps/Route3/scripts.pory"
	applymovement 13, Route3_Movement_LeafExit
# 139 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route3/scripts.pory"
	removeobject 13
# 141 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_STATE, 1
# 142 "data/maps/Route3/scripts.pory"
	setflag FLAG_SILVANWOODS_HIDEFIGHT1
	return


Route3_EventScript_Ross::
# 147 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROSS, Route3_Text_RossIntro, Route3_Text_RossLost
# 148 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RossPost
# 149 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Izzy::
# 154 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_IZZY, Route3_Text_IzzyIntro, Route3_Text_IzzyLost
# 155 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_IzzyPost
# 156 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ricardo::
# 161 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RICARDO, Route3_Text_RicardoIntro, Route3_Text_RicardoLost
# 162 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RicardoPost
# 163 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Pedro::
# 168 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_PEDRO, Route3_Text_PedroIntro, Route3_Text_PedroLost
# 169 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_PedroPost
# 170 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Monica::
# 175 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MONICA, Route3_Text_MonicaIntro, Route3_Text_MonicaLost
# 176 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_MonicaPost
# 177 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Amber::
# 182 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_AMBER, Route3_Text_AmberIntro, Route3_Text_AmberLost
# 183 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_AmberPost
# 184 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Dustin::
# 189 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DUSTIN, Route3_Text_DustinIntro, Route3_Text_DustinLost
# 190 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_DustinPost
# 191 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Jon::
# 196 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JON, Route3_Text_JonIntro, Route3_Text_JonLost
# 197 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JonPost
# 198 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Joe::
# 203 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JOE, Route3_Text_JoeIntro, Route3_Text_JoeLost
# 204 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JoePost
# 205 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ryan::
# 210 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RYAN, Route3_Text_RyanIntro, Route3_Text_RyanLost
# 211 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RyanPost
# 212 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Megan::
# 216 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MEGAN, Route3_Text_MeganIntro, Route3_Text_MeganLost
# 217 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_MeganPost
# 218 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Devon::
# 223 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DEVON, Route3_Text_DevonIntro, Route3_Text_DevonLost
# 224 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_DevonPost
# 225 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_OldMan::
# 230 "data/maps/Route3/scripts.pory"
	lock
# 231 "data/maps/Route3/scripts.pory"
	faceplayer
# 232 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_OldMan
# 233 "data/maps/Route3/scripts.pory"
	closemessage
# 234 "data/maps/Route3/scripts.pory"
	release
	end


Route3_EventScript_SaeclaraSign::
# 239 "data/maps/Route3/scripts.pory"
	lock
# 240 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_SaeclaraSign
# 241 "data/maps/Route3/scripts.pory"
	closemessage
# 242 "data/maps/Route3/scripts.pory"
	release
	end


Route3_Script_Sign::
# 247 "data/maps/Route3/scripts.pory"
	lock
# 248 "data/maps/Route3/scripts.pory"
	switch VAR_TEMP_5
# 249 "data/maps/Route3/scripts.pory"
	case 0, Route3_Script_Sign_3
# 251 "data/maps/Route3/scripts.pory"
	case 1, Route3_Script_Sign_4
# 253 "data/maps/Route3/scripts.pory"
	case 2, Route3_Script_Sign_5
# 256 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_3, MSGBOX_DEFAULT
Route3_Script_Sign_1:
# 258 "data/maps/Route3/scripts.pory"
	closemessage
# 259 "data/maps/Route3/scripts.pory"
	special ShowMapNamePopup
# 260 "data/maps/Route3/scripts.pory"
	release
	end

Route3_Script_Sign_3:
# 250 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_0, MSGBOX_DEFAULT
	goto Route3_Script_Sign_1

Route3_Script_Sign_4:
# 252 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_1, MSGBOX_DEFAULT
	goto Route3_Script_Sign_1

Route3_Script_Sign_5:
# 254 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_2, MSGBOX_DEFAULT
	goto Route3_Script_Sign_1


Route3_Script_RiverDeltaTransition::
# 267 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 2
# 268 "data/maps/Route3/scripts.pory"
	special ShowMapNamePopup
	return


Route3_Script_CanelosCoveTransition::
# 274 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 1
# 275 "data/maps/Route3/scripts.pory"
	special ShowMapNamePopup
	return


# 278 "data/maps/Route3/scripts.pory"
Route3_Movement_LeafIntro1:
# 279 "data/maps/Route3/scripts.pory"
	walk_down
# 280 "data/maps/Route3/scripts.pory"
	walk_right
# 281 "data/maps/Route3/scripts.pory"
	walk_down
# 282 "data/maps/Route3/scripts.pory"
	face_left
	step_end

# 285 "data/maps/Route3/scripts.pory"
Route3_Movement_LeafIntro2:
# 286 "data/maps/Route3/scripts.pory"
	walk_down
# 286 "data/maps/Route3/scripts.pory"
	walk_down
# 287 "data/maps/Route3/scripts.pory"
	face_right
	step_end

# 290 "data/maps/Route3/scripts.pory"
Route3_Movement_LeafExit:
# 291 "data/maps/Route3/scripts.pory"
	walk_up
# 291 "data/maps/Route3/scripts.pory"
	walk_up
	step_end

# 294 "data/maps/Route3/scripts.pory"
Route3_Movement_RivalPlayer1:
# 295 "data/maps/Route3/scripts.pory"
	walk_right
# 296 "data/maps/Route3/scripts.pory"
	walk_down
# 297 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 300 "data/maps/Route3/scripts.pory"
Route3_Movement_RivalPlayer1B:
# 301 "data/maps/Route3/scripts.pory"
	walk_right
# 301 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 304 "data/maps/Route3/scripts.pory"
Route3_Movement_Rival1:
# 305 "data/maps/Route3/scripts.pory"
	walk_up
# 305 "data/maps/Route3/scripts.pory"
	walk_up
# 306 "data/maps/Route3/scripts.pory"
	walk_right
# 306 "data/maps/Route3/scripts.pory"
	walk_right
# 306 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 309 "data/maps/Route3/scripts.pory"
Route3_Movement_Rival2:
# 310 "data/maps/Route3/scripts.pory"
	walk_left
# 310 "data/maps/Route3/scripts.pory"
	walk_left
# 311 "data/maps/Route3/scripts.pory"
	walk_down
# 311 "data/maps/Route3/scripts.pory"
	walk_down
	step_end

# 314 "data/maps/Route3/scripts.pory"
Route3_Movement_RivalLeafExit:
# 315 "data/maps/Route3/scripts.pory"
	walk_up
# 316 "data/maps/Route3/scripts.pory"
	walk_left
# 316 "data/maps/Route3/scripts.pory"
	walk_left
# 316 "data/maps/Route3/scripts.pory"
	walk_left
# 316 "data/maps/Route3/scripts.pory"
	walk_left
# 317 "data/maps/Route3/scripts.pory"
	walk_down
# 317 "data/maps/Route3/scripts.pory"
	walk_down
# 317 "data/maps/Route3/scripts.pory"
	walk_down
	step_end

Route3_Script_Sign_Text_0:
# 250 "data/maps/Route3/scripts.pory"
	.string "0$"

Route3_Script_Sign_Text_1:
# 252 "data/maps/Route3/scripts.pory"
	.string "1$"

Route3_Script_Sign_Text_2:
# 254 "data/maps/Route3/scripts.pory"
	.string "2$"

Route3_Script_Sign_Text_3:
# 256 "data/maps/Route3/scripts.pory"
	.string "OOB$"

Route3_Text_RossIntro::
# 321 "data/maps/Route3/scripts.pory"
	.string "I'm learning how to swim! Here check\n"
	.string "this out!$"

Route3_Text_RossLost::
# 325 "data/maps/Route3/scripts.pory"
	.string "Help mom I'm gonna drown!$"

Route3_Text_RossPost::
# 329 "data/maps/Route3/scripts.pory"
	.string "Wow you showed me! Looks like I need to\n"
	.string "practice dog paddling.$"

Route3_Text_IzzyIntro::
# 334 "data/maps/Route3/scripts.pory"
	.string "Eww gross get away from me you weirdo!$"

Route3_Text_IzzyLost::
# 338 "data/maps/Route3/scripts.pory"
	.string "Please help please help!$"

Route3_Text_IzzyPost::
# 342 "data/maps/Route3/scripts.pory"
	.string "I think you made me wet.$"

Route3_Text_RicardoIntro::
# 346 "data/maps/Route3/scripts.pory"
	.string "I brought my son here to play on the\n"
	.string "beach.$"

Route3_Text_RicardoLost::
# 350 "data/maps/Route3/scripts.pory"
	.string "You're making me look weak...$"

Route3_Text_RicardoPost::
# 354 "data/maps/Route3/scripts.pory"
	.string "Have you explored the cave carved in\n"
	.string "the rock down by the sea?$"

Route3_Text_PedroIntro::
# 358 "data/maps/Route3/scripts.pory"
	.string "Me and my dad are gonna kick your ass!$"

Route3_Text_PedroLost::
# 362 "data/maps/Route3/scripts.pory"
	.string "Dad how did we just loose?$"

Route3_Text_PedroPost::
# 366 "data/maps/Route3/scripts.pory"
	.string "Okay, you're good.$"

Route3_Text_MonicaIntro::
# 370 "data/maps/Route3/scripts.pory"
	.string "Hey! Stay away from my children.$"

Route3_Text_MonicaLost::
# 374 "data/maps/Route3/scripts.pory"
	.string "You know, I'm still available.$"

Route3_Text_MonicaPost::
# 378 "data/maps/Route3/scripts.pory"
	.string "Nice to see you!$"

Route3_Text_AmberIntro::
# 382 "data/maps/Route3/scripts.pory"
	.string "My mommy took me and Ross to the beach!$"

Route3_Text_AmberLost::
# 386 "data/maps/Route3/scripts.pory"
	.string "No, Mom!$"

Route3_Text_AmberPost::
# 390 "data/maps/Route3/scripts.pory"
	.string "You hurt my feelings, go awawy.$"

Route3_Text_DustinIntro::
# 394 "data/maps/Route3/scripts.pory"
	.string "Hey man do you ever want to race birds?$"

Route3_Text_DustinLost::
# 398 "data/maps/Route3/scripts.pory"
	.string "That's not correct.$"

Route3_Text_DustinPost::
# 402 "data/maps/Route3/scripts.pory"
	.string "Did you go thrugh the woods?$"

Route3_Text_JonIntro::
# 406 "data/maps/Route3/scripts.pory"
	.string "Today I thought I'd be a fisherman.$"

Route3_Text_JonLost::
# 410 "data/maps/Route3/scripts.pory"
	.string "I've lost my fish...$"

Route3_Text_JonPost::
# 414 "data/maps/Route3/scripts.pory"
	.string "Let's drink a few more beers!$"

Route3_Text_JoeIntro::
# 418 "data/maps/Route3/scripts.pory"
	.string "My friend Jon ain't great at outdoorsy\n"
	.string "stuff.$"

Route3_Text_JoeLost::
# 422 "data/maps/Route3/scripts.pory"
	.string "So much for that.$"

Route3_Text_JoePost::
# 426 "data/maps/Route3/scripts.pory"
	.string "Think I'll try a new bait.$"

Route3_Text_RyanIntro::
# 430 "data/maps/Route3/scripts.pory"
	.string "The Bugs!\n"
	.string "THE BUGS!!!$"

Route3_Text_RyanLost::
# 434 "data/maps/Route3/scripts.pory"
	.string "You helped me scratch the bugs.$"

Route3_Text_RyanPost::
# 438 "data/maps/Route3/scripts.pory"
	.string "Thank you a lot, these bugs are\n"
	.string "dangerous.$"

Route3_Text_MeganIntro::
# 442 "data/maps/Route3/scripts.pory"
	.string "Hey, didn't you use to make fun of me.$"

Route3_Text_MeganLost::
# 446 "data/maps/Route3/scripts.pory"
	.string "Looks like you're still laughing.$"

Route3_Text_MeganPost::
# 450 "data/maps/Route3/scripts.pory"
	.string "Hey haven't you heard anything about a\n"
	.string "new freeway the party was planning to\l"
	.string "build through here?$"

Route3_Text_DevonIntro::
# 454 "data/maps/Route3/scripts.pory"
	.string "You're not headed into the woods are\n"
	.string "you?$"

Route3_Text_DevonLost::
# 458 "data/maps/Route3/scripts.pory"
	.string "You're pretty tough.$"

Route3_Text_DevonPost::
# 462 "data/maps/Route3/scripts.pory"
	.string "You should be safe enough, but be\n"
	.string "careful that you do not get lost.$"

Route3_Text_Leaf1::
# 466 "data/maps/Route3/scripts.pory"
	.string "Hey {PLAYER} long time no see how\n"
	.string "have you been? While you slowpokes\l"
	.string "were getting stoned in town I was\l"
	.string "training my fresh caught Pokemon. Look\l"
	.string "{PLAYER} they're almost as cute as I\l"
	.string "am.$"

Route3_Text_LeafLost::
# 470 "data/maps/Route3/scripts.pory"
	.string "Wow {PLAYER} looks like I have a lot\n"
	.string "to learn$"

Route3_Text_Leaf1Post::
# 474 "data/maps/Route3/scripts.pory"
	.string "Haha you're way too good for me.\p"
	.string "But wait weren't you supposed to meet\n"
	.string "me with my dad?\p"
	.string "We need to find him! Where could he be?\p"
	.string "DAD?!$"

Route3_Text_OldMan::
# 478 "data/maps/Route3/scripts.pory"
	.string "Caverna Ilium was this cave's name\n"
	.string "before The Party changed it to Beach\l"
	.string "Cave.\p"
	.string "You should only go in if you're prepared.$"

Route3_Text_Leaf2::
# 482 "data/maps/Route3/scripts.pory"
	.string "Look out {PLAYER} it's {RIVAL}\n"
	.string "this is a trap!$"

Route3_Text_RivalIntro::
# 486 "data/maps/Route3/scripts.pory"
	.string "It's {PLAYER} is it? What a disgusting\n"
	.string "name though fitting for an animal like\l"
	.string "you. I spent six hours saving Humpty's\l"
	.string "life after the hospital turned me away\l"
	.string "but in the end I could not bring him\l"
	.string "back. You killed my only friend and now\l"
	.string "you're trapped the both of you like\l"
	.string "flies caught in my net.$"

Route3_Text_RivalLost::
# 490 "data/maps/Route3/scripts.pory"
	.string "These pathetic insects all let me down!!$"

Route3_Text_RivalPost::
# 494 "data/maps/Route3/scripts.pory"
	.string "You anal sniffing worm, you piece of\n"
	.string "filth! I will not have you make a fool of\l"
	.string "me. Already you have stolen my whole\l"
	.string "life from me. There's nothing to go back,\l"
	.string "nothing to return to. I'm all alone with\l"
	.string "nothing, and therefore nothing to\l"
	.string "loose. I swear to you now {PLAYER} on\l"
	.string "my own heart and by the mighty power of\l"
	.string "the sun, in recognition of the River\l"
	.string "Styx, and under penalty of doom and\l"
	.string "death you will be met with Justice by my\l"
	.string "hand. Never know rest for I will never\l"
	.string "sleep until that day when I have made\l"
	.string "you pay.$"

Route3_Text_Leaf3::
# 498 "data/maps/Route3/scripts.pory"
	.string "Wow {PLAYER} I'm glad you're here all\n"
	.string "big and strong to protect me from\l"
	.string "creeps like that {RIVAL}. It's\l"
	.string "getting late and I want to see Mew!\l"
	.string "C'mon silly we need to find my dad!$"

Route3_Text_SaeclaraSign::
# 502 "data/maps/Route3/scripts.pory"
	.string "City Saeclara ->\n"
	.string "<- Silvan Woods\n"
	.string "<- Bulbus Town$"
