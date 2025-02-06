Route3_MapScripts::
	.byte 0


Route3_EventScript_LeafTrigger1::
# 12 "data/maps/Route3/scripts.pory"
	lockall
# 13 "data/maps/Route3/scripts.pory"
	addobject 13
# 14 "data/maps/Route3/scripts.pory"
	showobjectat 13, MAP_ROUTE3
# 15 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 16 "data/maps/Route3/scripts.pory"
	applymovement 13, Route3_Movement_LeafIntro1
# 17 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 19 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Leaf1
# 21 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_LeafTrigger2::
# 26 "data/maps/Route3/scripts.pory"
	lockall
# 27 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 28 "data/maps/Route3/scripts.pory"
	addobject 13
# 29 "data/maps/Route3/scripts.pory"
	showobjectat 13, MAP_ROUTE3
# 30 "data/maps/Route3/scripts.pory"
	applymovement 13, Route3_Movement_LeafIntro2
# 31 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 33 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Leaf1
# 35 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_MewTrigger1::
# 40 "data/maps/Route3/scripts.pory"
	lockall
# 41 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 42 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route3/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 44 "data/maps/Route3/scripts.pory"
	fadescreen 1
# 45 "data/maps/Route3/scripts.pory"
	waitmoncry
# 46 "data/maps/Route3/scripts.pory"
	removeobject 15
# 47 "data/maps/Route3/scripts.pory"
	setflag FLAG_SILVANWOODS_HIDEFIGHT2
# 48 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_STATE, 3
# 49 "data/maps/Route3/scripts.pory"
	fadescreen 0
# 50 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_RivalTrigger1::
# 55 "data/maps/Route3/scripts.pory"
	lockall
# 56 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 57 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Movement_RivalPlayer1
# 59 "data/maps/Route3/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 60 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Rival
# 62 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_RivalTrigger2::
# 67 "data/maps/Route3/scripts.pory"
	lockall
# 68 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 69 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Movement_RivalPlayer1B
# 71 "data/maps/Route3/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 72 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Rival
# 74 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_Rival::
# 79 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 80 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf2
# 81 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route3/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 83 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route3/scripts.pory"
	closemessage
# 85 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 86 "data/maps/Route3/scripts.pory"
	addobject 17
# 87 "data/maps/Route3/scripts.pory"
	showobjectat 17, MAP_ROUTE3
# 88 "data/maps/Route3/scripts.pory"
	applymovement 17, Route3_Movement_Rival1
# 89 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 90 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route3/scripts.pory"
	load_field_pic 3, 190, 98
# 92 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RivalIntro
# 93 "data/maps/Route3/scripts.pory"
	destroy_field_pic 3
# 94 "data/maps/Route3/scripts.pory"
	closemessage
# 95 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL2, Route3_Text_RivalLost
# 96 "data/maps/Route3/scripts.pory"
	load_field_pic 3, 190, 98
# 97 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RivalPost
# 98 "data/maps/Route3/scripts.pory"
	destroy_field_pic 3
# 99 "data/maps/Route3/scripts.pory"
	closemessage
# 100 "data/maps/Route3/scripts.pory"
	applymovement 17, Route3_Movement_Rival2
# 101 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route3/scripts.pory"
	removeobject 17
# 103 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 104 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 106 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf3
# 107 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 108 "data/maps/Route3/scripts.pory"
	closemessage
# 109 "data/maps/Route3/scripts.pory"
	applymovement 16, Route3_Movement_RivalLeafExit
# 110 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route3/scripts.pory"
	removeobject 16
# 112 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_STATE, 4
# 113 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_SILVANWOODS_LEAF2
# 114 "data/maps/Route3/scripts.pory"
	clearflag FLAG_HIDE_SILVANWOODS_LEAF1
	return


Route3_EventScript_Leaf1::
# 119 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 120 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf1
# 121 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 122 "data/maps/Route3/scripts.pory"
	closemessage
# 123 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, Route3_Text_LeafLost
# 124 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 125 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf1Post
# 126 "data/maps/Route3/scripts.pory"
	closemessage
# 127 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 128 "data/maps/Route3/scripts.pory"
	applymovement 13, Route3_Movement_LeafExit
# 129 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route3/scripts.pory"
	removeobject 13
# 131 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_STATE, 1
# 132 "data/maps/Route3/scripts.pory"
	setflag FLAG_SILVANWOODS_HIDEFIGHT1
	return


Route3_EventScript_Ross::
# 137 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROSS, Route3_Text_RossIntro, Route3_Text_RossLost
# 138 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RossPost
# 139 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Izzy::
# 144 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_IZZY, Route3_Text_IzzyIntro, Route3_Text_IzzyLost
# 145 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_IzzyPost
# 146 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ricardo::
# 151 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RICARDO, Route3_Text_RicardoIntro, Route3_Text_RicardoLost
# 152 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RicardoPost
# 153 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Pedro::
# 158 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_PEDRO, Route3_Text_PedroIntro, Route3_Text_PedroLost
# 159 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_PedroPost
# 160 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Monica::
# 165 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MONICA, Route3_Text_MonicaIntro, Route3_Text_MonicaLost
# 166 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_MonicaPost
# 167 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Amber::
# 172 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_AMBER, Route3_Text_AmberIntro, Route3_Text_AmberLost
# 173 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_AmberPost
# 174 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Dustin::
# 179 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DUSTIN, Route3_Text_DustinIntro, Route3_Text_DustinLost
# 180 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_DustinPost
# 181 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Jon::
# 186 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JON, Route3_Text_JonIntro, Route3_Text_JonLost
# 187 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JonPost
# 188 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Joe::
# 193 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JOE, Route3_Text_JoeIntro, Route3_Text_JoeLost
# 194 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JoePost
# 195 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ryan::
# 200 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RYAN, Route3_Text_RyanIntro, Route3_Text_RyanLost
# 201 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RyanPost
# 202 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Megan::
# 206 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MEGAN, Route3_Text_MeganIntro, Route3_Text_MeganLost
# 207 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_MeganPost
# 208 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Devon::
# 213 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DEVON, Route3_Text_DevonIntro, Route3_Text_DevonLost
# 214 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_DevonPost
# 215 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_OldMan::
# 220 "data/maps/Route3/scripts.pory"
	lock
# 221 "data/maps/Route3/scripts.pory"
	faceplayer
# 222 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_OldMan
# 223 "data/maps/Route3/scripts.pory"
	closemessage
# 224 "data/maps/Route3/scripts.pory"
	release
	end


Route3_EventScript_SaeclaraSign::
# 229 "data/maps/Route3/scripts.pory"
	lock
# 230 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_SaeclaraSign
# 231 "data/maps/Route3/scripts.pory"
	closemessage
# 232 "data/maps/Route3/scripts.pory"
	release
	end


Route3_Script_Sign::
# 237 "data/maps/Route3/scripts.pory"
	lock
# 238 "data/maps/Route3/scripts.pory"
	goto_if_set FLAG_TEMP_5, Route3_Script_Sign_2
# 241 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_1, MSGBOX_DEFAULT
Route3_Script_Sign_1:
# 243 "data/maps/Route3/scripts.pory"
	closemessage
# 244 "data/maps/Route3/scripts.pory"
	release
	end

Route3_Script_Sign_2:
# 239 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_0, MSGBOX_DEFAULT
	goto Route3_Script_Sign_1


# 248 "data/maps/Route3/scripts.pory"
Route3_Movement_LeafIntro1:
# 249 "data/maps/Route3/scripts.pory"
	walk_down
# 250 "data/maps/Route3/scripts.pory"
	walk_right
# 251 "data/maps/Route3/scripts.pory"
	walk_down
# 252 "data/maps/Route3/scripts.pory"
	face_left
	step_end

# 255 "data/maps/Route3/scripts.pory"
Route3_Movement_LeafIntro2:
# 256 "data/maps/Route3/scripts.pory"
	walk_down
# 256 "data/maps/Route3/scripts.pory"
	walk_down
# 257 "data/maps/Route3/scripts.pory"
	face_right
	step_end

# 260 "data/maps/Route3/scripts.pory"
Route3_Movement_LeafExit:
# 261 "data/maps/Route3/scripts.pory"
	walk_up
# 261 "data/maps/Route3/scripts.pory"
	walk_up
	step_end

# 264 "data/maps/Route3/scripts.pory"
Route3_Movement_RivalPlayer1:
# 265 "data/maps/Route3/scripts.pory"
	walk_right
# 266 "data/maps/Route3/scripts.pory"
	walk_down
# 267 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 270 "data/maps/Route3/scripts.pory"
Route3_Movement_RivalPlayer1B:
# 271 "data/maps/Route3/scripts.pory"
	walk_right
# 271 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 274 "data/maps/Route3/scripts.pory"
Route3_Movement_Rival1:
# 275 "data/maps/Route3/scripts.pory"
	walk_up
# 275 "data/maps/Route3/scripts.pory"
	walk_up
# 276 "data/maps/Route3/scripts.pory"
	walk_right
# 276 "data/maps/Route3/scripts.pory"
	walk_right
# 276 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 279 "data/maps/Route3/scripts.pory"
Route3_Movement_Rival2:
# 280 "data/maps/Route3/scripts.pory"
	walk_left
# 280 "data/maps/Route3/scripts.pory"
	walk_left
# 281 "data/maps/Route3/scripts.pory"
	walk_down
# 281 "data/maps/Route3/scripts.pory"
	walk_down
	step_end

# 284 "data/maps/Route3/scripts.pory"
Route3_Movement_RivalLeafExit:
# 285 "data/maps/Route3/scripts.pory"
	walk_up
# 286 "data/maps/Route3/scripts.pory"
	walk_left
# 286 "data/maps/Route3/scripts.pory"
	walk_left
# 286 "data/maps/Route3/scripts.pory"
	walk_left
# 286 "data/maps/Route3/scripts.pory"
	walk_left
# 287 "data/maps/Route3/scripts.pory"
	walk_down
# 287 "data/maps/Route3/scripts.pory"
	walk_down
# 287 "data/maps/Route3/scripts.pory"
	walk_down
	step_end

Route3_Script_Sign_Text_0:
# 239 "data/maps/Route3/scripts.pory"
	.string "SET!$"

Route3_Script_Sign_Text_1:
# 241 "data/maps/Route3/scripts.pory"
	.string "CLEAR!$"

Route3_Text_RossIntro::
# 291 "data/maps/Route3/scripts.pory"
	.string "I'm learning how to swim! Here check\n"
	.string "this out!$"

Route3_Text_RossLost::
# 295 "data/maps/Route3/scripts.pory"
	.string "Help mom I'm gonna drown!$"

Route3_Text_RossPost::
# 299 "data/maps/Route3/scripts.pory"
	.string "Wow you showed me! Looks like I need to\n"
	.string "practice dog paddling.$"

Route3_Text_IzzyIntro::
# 304 "data/maps/Route3/scripts.pory"
	.string "Eww gross get away from me you weirdo!$"

Route3_Text_IzzyLost::
# 308 "data/maps/Route3/scripts.pory"
	.string "Please help please help!$"

Route3_Text_IzzyPost::
# 312 "data/maps/Route3/scripts.pory"
	.string "I think you made me wet.$"

Route3_Text_RicardoIntro::
# 316 "data/maps/Route3/scripts.pory"
	.string "I brought my son here to play on the\n"
	.string "beach.$"

Route3_Text_RicardoLost::
# 320 "data/maps/Route3/scripts.pory"
	.string "You're making me look weak...$"

Route3_Text_RicardoPost::
# 324 "data/maps/Route3/scripts.pory"
	.string "Have you explored the cave carved in\n"
	.string "the rock down by the sea?$"

Route3_Text_PedroIntro::
# 328 "data/maps/Route3/scripts.pory"
	.string "Me and my dad are gonna kick your ass!$"

Route3_Text_PedroLost::
# 332 "data/maps/Route3/scripts.pory"
	.string "Dad how did we just loose?$"

Route3_Text_PedroPost::
# 336 "data/maps/Route3/scripts.pory"
	.string "Okay, you're good.$"

Route3_Text_MonicaIntro::
# 340 "data/maps/Route3/scripts.pory"
	.string "Hey! Stay away from my children.$"

Route3_Text_MonicaLost::
# 344 "data/maps/Route3/scripts.pory"
	.string "You know, I'm still available.$"

Route3_Text_MonicaPost::
# 348 "data/maps/Route3/scripts.pory"
	.string "Nice to see you!$"

Route3_Text_AmberIntro::
# 352 "data/maps/Route3/scripts.pory"
	.string "My mommy took me and Ross to the beach!$"

Route3_Text_AmberLost::
# 356 "data/maps/Route3/scripts.pory"
	.string "No, Mom!$"

Route3_Text_AmberPost::
# 360 "data/maps/Route3/scripts.pory"
	.string "You hurt my feelings, go awawy.$"

Route3_Text_DustinIntro::
# 364 "data/maps/Route3/scripts.pory"
	.string "Hey man do you ever want to race birds?$"

Route3_Text_DustinLost::
# 368 "data/maps/Route3/scripts.pory"
	.string "That's not correct.$"

Route3_Text_DustinPost::
# 372 "data/maps/Route3/scripts.pory"
	.string "Did you go thrugh the woods?$"

Route3_Text_JonIntro::
# 376 "data/maps/Route3/scripts.pory"
	.string "Today I thought I'd be a fisherman.$"

Route3_Text_JonLost::
# 380 "data/maps/Route3/scripts.pory"
	.string "I've lost my fish...$"

Route3_Text_JonPost::
# 384 "data/maps/Route3/scripts.pory"
	.string "Let's drink a few more beers!$"

Route3_Text_JoeIntro::
# 388 "data/maps/Route3/scripts.pory"
	.string "My friend Jon ain't great at outdoorsy\n"
	.string "stuff.$"

Route3_Text_JoeLost::
# 392 "data/maps/Route3/scripts.pory"
	.string "So much for that.$"

Route3_Text_JoePost::
# 396 "data/maps/Route3/scripts.pory"
	.string "Think I'll try a new bait.$"

Route3_Text_RyanIntro::
# 400 "data/maps/Route3/scripts.pory"
	.string "The Bugs!\n"
	.string "THE BUGS!!!$"

Route3_Text_RyanLost::
# 404 "data/maps/Route3/scripts.pory"
	.string "You helped me scratch the bugs.$"

Route3_Text_RyanPost::
# 408 "data/maps/Route3/scripts.pory"
	.string "Thank you a lot, these bugs are\n"
	.string "dangerous.$"

Route3_Text_MeganIntro::
# 412 "data/maps/Route3/scripts.pory"
	.string "Hey, didn't you use to make fun of me.$"

Route3_Text_MeganLost::
# 416 "data/maps/Route3/scripts.pory"
	.string "Looks like you're still laughing.$"

Route3_Text_MeganPost::
# 420 "data/maps/Route3/scripts.pory"
	.string "Hey haven't you heard anything about a\n"
	.string "new freeway the party was planning to\l"
	.string "build through here?$"

Route3_Text_DevonIntro::
# 424 "data/maps/Route3/scripts.pory"
	.string "You're not headed into the woods are\n"
	.string "you?$"

Route3_Text_DevonLost::
# 428 "data/maps/Route3/scripts.pory"
	.string "You're pretty tough.$"

Route3_Text_DevonPost::
# 432 "data/maps/Route3/scripts.pory"
	.string "You should be safe enough, but be\n"
	.string "careful that you do not get lost.$"

Route3_Text_Leaf1::
# 436 "data/maps/Route3/scripts.pory"
	.string "Hey {PLAYER} long time no see how\n"
	.string "have you been? While you slowpokes\l"
	.string "were getting stoned in town I was\l"
	.string "training my fresh caught Pokemon. Look\l"
	.string "{PLAYER} they're almost as cute as I\l"
	.string "am.$"

Route3_Text_LeafLost::
# 440 "data/maps/Route3/scripts.pory"
	.string "Wow {PLAYER} looks like I have a lot\n"
	.string "to learn$"

Route3_Text_Leaf1Post::
# 444 "data/maps/Route3/scripts.pory"
	.string "Haha you're way too good for me.\p"
	.string "But wait weren't you supposed to meet\n"
	.string "me with my dad?\p"
	.string "We need to find him! Where could he be?\p"
	.string "DAD?!$"

Route3_Text_OldMan::
# 448 "data/maps/Route3/scripts.pory"
	.string "Caverna Ilium was this cave's name\n"
	.string "before The Party changed it to Beach\l"
	.string "Cave.\p"
	.string "You should only go in if you're prepared.$"

Route3_Text_Leaf2::
# 452 "data/maps/Route3/scripts.pory"
	.string "Look out {PLAYER} it's {RIVAL}\n"
	.string "this is a trap!$"

Route3_Text_RivalIntro::
# 456 "data/maps/Route3/scripts.pory"
	.string "It's {PLAYER} is it? What a disgusting\n"
	.string "name though fitting for an animal like\l"
	.string "you. I spent six hours saving Humpty's\l"
	.string "life after the hospital turned me away\l"
	.string "but in the end I could not bring him\l"
	.string "back. You killed my only friend and now\l"
	.string "you're trapped the both of you like\l"
	.string "flies caught in my net.$"

Route3_Text_RivalLost::
# 460 "data/maps/Route3/scripts.pory"
	.string "These pathetic insects all let me down!!$"

Route3_Text_RivalPost::
# 464 "data/maps/Route3/scripts.pory"
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
# 468 "data/maps/Route3/scripts.pory"
	.string "Wow {PLAYER} I'm glad you're here all\n"
	.string "big and strong to protect me from\l"
	.string "creeps like that {RIVAL}. It's\l"
	.string "getting late and I want to see Mew!\l"
	.string "C'mon silly we need to find my dad!$"

Route3_Text_SaeclaraSign::
# 472 "data/maps/Route3/scripts.pory"
	.string "City Saeclara ->\n"
	.string "<- Silvan Woods\n"
	.string "<- Bulbus Town$"
