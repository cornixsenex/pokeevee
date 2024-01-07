Route3_MapScripts::
	.byte 0


Route3_EventScript_LeafTrigger1::
# 5 "data/maps/Route3/scripts.pory"
	lockall
# 6 "data/maps/Route3/scripts.pory"
	addobject 13
# 7 "data/maps/Route3/scripts.pory"
	showobjectat 13, MAP_ROUTE3
# 8 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 9 "data/maps/Route3/scripts.pory"
	applymovement 13, Route3_Movement_LeafIntro1
# 10 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 11 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 12 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 13 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Leaf1
# 14 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_LeafTrigger2::
# 19 "data/maps/Route3/scripts.pory"
	lockall
# 20 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 21 "data/maps/Route3/scripts.pory"
	addobject 13
# 22 "data/maps/Route3/scripts.pory"
	showobjectat 13, MAP_ROUTE3
# 23 "data/maps/Route3/scripts.pory"
	applymovement 13, Route3_Movement_LeafIntro2
# 24 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 26 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Leaf1
# 28 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_MewTrigger1::
# 33 "data/maps/Route3/scripts.pory"
	lockall
# 34 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 35 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route3/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 37 "data/maps/Route3/scripts.pory"
	fadescreen 1
# 38 "data/maps/Route3/scripts.pory"
	waitmoncry
# 39 "data/maps/Route3/scripts.pory"
	removeobject 15
# 40 "data/maps/Route3/scripts.pory"
	setflag FLAG_SILVANWOODS_HIDEFIGHT2
# 41 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_STATE, 3
# 42 "data/maps/Route3/scripts.pory"
	fadescreen 0
# 43 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_RivalTrigger1::
# 48 "data/maps/Route3/scripts.pory"
	lockall
# 49 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 50 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Movement_RivalPlayer1
# 52 "data/maps/Route3/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 53 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Rival
# 55 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_RivalTrigger2::
# 60 "data/maps/Route3/scripts.pory"
	lockall
# 61 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 62 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_Movement_RivalPlayer1B
# 64 "data/maps/Route3/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 65 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Rival
# 67 "data/maps/Route3/scripts.pory"
	releaseall
	end


Route3_EventScript_Rival::
# 72 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 73 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf2
# 74 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route3/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 76 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route3/scripts.pory"
	closemessage
# 78 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 79 "data/maps/Route3/scripts.pory"
	addobject 17
# 80 "data/maps/Route3/scripts.pory"
	showobjectat 17, MAP_ROUTE3
# 81 "data/maps/Route3/scripts.pory"
	applymovement 17, Route3_Movement_Rival1
# 82 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 83 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route3/scripts.pory"
	load_field_pic 3, 190, 98
# 85 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RivalIntro
# 86 "data/maps/Route3/scripts.pory"
	destroy_field_pic 3
# 87 "data/maps/Route3/scripts.pory"
	closemessage
# 88 "data/maps/Route3/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_BLUE
# 89 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL2, Route3_Text_RivalLost
# 90 "data/maps/Route3/scripts.pory"
	load_field_pic 3, 190, 98
# 91 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RivalPost
# 92 "data/maps/Route3/scripts.pory"
	destroy_field_pic 3
# 93 "data/maps/Route3/scripts.pory"
	closemessage
# 94 "data/maps/Route3/scripts.pory"
	applymovement 17, Route3_Movement_Rival2
# 95 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route3/scripts.pory"
	removeobject 17
# 97 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 98 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 100 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf3
# 101 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 102 "data/maps/Route3/scripts.pory"
	closemessage
# 103 "data/maps/Route3/scripts.pory"
	applymovement 16, Route3_Movement_RivalLeafExit
# 104 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route3/scripts.pory"
	removeobject 16
# 106 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_STATE, 4
# 107 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_SILVANWOODS_LEAF2
# 108 "data/maps/Route3/scripts.pory"
	clearflag FLAG_HIDE_SILVANWOODS_LEAF1
	return


Route3_EventScript_Leaf1::
# 113 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 114 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf1
# 115 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 116 "data/maps/Route3/scripts.pory"
	closemessage
# 117 "data/maps/Route3/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_LEAF
# 118 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, Route3_Text_LeafLost
# 119 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 120 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf1Post
# 121 "data/maps/Route3/scripts.pory"
	closemessage
# 122 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 123 "data/maps/Route3/scripts.pory"
	applymovement 13, Route3_Movement_LeafExit
# 124 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route3/scripts.pory"
	removeobject 13
# 126 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_STATE, 1
# 127 "data/maps/Route3/scripts.pory"
	setflag FLAG_SILVANWOODS_HIDEFIGHT1
	return


Route3_EventScript_Ross::
# 132 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROSS, Route3_Text_RossIntro, Route3_Text_RossLost
# 133 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RossPost
# 134 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Izzy::
# 139 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_IZZY, Route3_Text_IzzyIntro, Route3_Text_IzzyLost
# 140 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_IzzyPost
# 141 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ricardo::
# 146 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RICARDO, Route3_Text_RicardoIntro, Route3_Text_RicardoLost
# 147 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RicardoPost
# 148 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Pedro::
# 153 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_PEDRO, Route3_Text_PedroIntro, Route3_Text_PedroLost
# 154 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_PedroPost
# 155 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Monica::
# 160 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MONICA, Route3_Text_MonicaIntro, Route3_Text_MonicaLost
# 161 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_MonicaPost
# 162 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Amber::
# 167 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_AMBER, Route3_Text_AmberIntro, Route3_Text_AmberLost
# 168 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_AmberPost
# 169 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Dustin::
# 174 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DUSTIN, Route3_Text_DustinIntro, Route3_Text_DustinLost
# 175 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_DustinPost
# 176 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Jon::
# 181 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JON, Route3_Text_JonIntro, Route3_Text_JonLost
# 182 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JonPost
# 183 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Joe::
# 188 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JOE, Route3_Text_JoeIntro, Route3_Text_JoeLost
# 189 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JoePost
# 190 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ryan::
# 195 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RYAN, Route3_Text_RyanIntro, Route3_Text_RyanLost
# 196 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RyanPost
# 197 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Megan::
# 201 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MEGAN, Route3_Text_MeganIntro, Route3_Text_MeganLost
# 202 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_MeganPost
# 203 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Devon::
# 208 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DEVON, Route3_Text_DevonIntro, Route3_Text_DevonLost
# 209 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_DevonPost
# 210 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_OldMan::
# 215 "data/maps/Route3/scripts.pory"
	lock
# 216 "data/maps/Route3/scripts.pory"
	faceplayer
# 217 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_OldMan
# 218 "data/maps/Route3/scripts.pory"
	closemessage
# 219 "data/maps/Route3/scripts.pory"
	release
	end


Route3_EventScript_SaeclaraSign::
# 224 "data/maps/Route3/scripts.pory"
	lock
# 225 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_SaeclaraSign
# 226 "data/maps/Route3/scripts.pory"
	closemessage
# 227 "data/maps/Route3/scripts.pory"
	release
	end


# 231 "data/maps/Route3/scripts.pory"
Route3_Movement_LeafIntro1:
# 232 "data/maps/Route3/scripts.pory"
	walk_down
# 233 "data/maps/Route3/scripts.pory"
	walk_right
# 234 "data/maps/Route3/scripts.pory"
	walk_down
# 235 "data/maps/Route3/scripts.pory"
	face_left
	step_end

# 238 "data/maps/Route3/scripts.pory"
Route3_Movement_LeafIntro2:
# 239 "data/maps/Route3/scripts.pory"
	walk_down
# 239 "data/maps/Route3/scripts.pory"
	walk_down
# 240 "data/maps/Route3/scripts.pory"
	face_right
	step_end

# 243 "data/maps/Route3/scripts.pory"
Route3_Movement_LeafExit:
# 244 "data/maps/Route3/scripts.pory"
	walk_up
# 244 "data/maps/Route3/scripts.pory"
	walk_up
	step_end

# 247 "data/maps/Route3/scripts.pory"
Route3_Movement_RivalPlayer1:
# 248 "data/maps/Route3/scripts.pory"
	walk_right
# 249 "data/maps/Route3/scripts.pory"
	walk_down
# 250 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 253 "data/maps/Route3/scripts.pory"
Route3_Movement_RivalPlayer1B:
# 254 "data/maps/Route3/scripts.pory"
	walk_right
# 254 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 257 "data/maps/Route3/scripts.pory"
Route3_Movement_Rival1:
# 258 "data/maps/Route3/scripts.pory"
	walk_up
# 258 "data/maps/Route3/scripts.pory"
	walk_up
# 259 "data/maps/Route3/scripts.pory"
	walk_right
# 259 "data/maps/Route3/scripts.pory"
	walk_right
# 259 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 262 "data/maps/Route3/scripts.pory"
Route3_Movement_Rival2:
# 263 "data/maps/Route3/scripts.pory"
	walk_left
# 263 "data/maps/Route3/scripts.pory"
	walk_left
# 264 "data/maps/Route3/scripts.pory"
	walk_down
# 264 "data/maps/Route3/scripts.pory"
	walk_down
	step_end

# 267 "data/maps/Route3/scripts.pory"
Route3_Movement_RivalLeafExit:
# 268 "data/maps/Route3/scripts.pory"
	walk_up
# 269 "data/maps/Route3/scripts.pory"
	walk_left
# 269 "data/maps/Route3/scripts.pory"
	walk_left
# 269 "data/maps/Route3/scripts.pory"
	walk_left
# 269 "data/maps/Route3/scripts.pory"
	walk_left
# 270 "data/maps/Route3/scripts.pory"
	walk_down
# 270 "data/maps/Route3/scripts.pory"
	walk_down
# 270 "data/maps/Route3/scripts.pory"
	walk_down
	step_end

Route3_Text_RossIntro::
# 274 "data/maps/Route3/scripts.pory"
	.string "I'm learning how to swim! Here check\n"
	.string "this out!$"

Route3_Text_RossLost::
# 278 "data/maps/Route3/scripts.pory"
	.string "Help mom I'm gonna drown!$"

Route3_Text_RossPost::
# 282 "data/maps/Route3/scripts.pory"
	.string "Wow you showed me! Looks like I need to\n"
	.string "practice dog paddling.$"

Route3_Text_IzzyIntro::
# 287 "data/maps/Route3/scripts.pory"
	.string "Eww gross get away from me you weirdo!$"

Route3_Text_IzzyLost::
# 291 "data/maps/Route3/scripts.pory"
	.string "Please help please help!$"

Route3_Text_IzzyPost::
# 295 "data/maps/Route3/scripts.pory"
	.string "I think you made me wet.$"

Route3_Text_RicardoIntro::
# 299 "data/maps/Route3/scripts.pory"
	.string "I brought my son here to play on the\n"
	.string "beach.$"

Route3_Text_RicardoLost::
# 303 "data/maps/Route3/scripts.pory"
	.string "You're making me look weak...$"

Route3_Text_RicardoPost::
# 307 "data/maps/Route3/scripts.pory"
	.string "Have you explored the cave carved in\n"
	.string "the rock down by the sea?$"

Route3_Text_PedroIntro::
# 311 "data/maps/Route3/scripts.pory"
	.string "Me and my dad are gonna kick your ass!$"

Route3_Text_PedroLost::
# 315 "data/maps/Route3/scripts.pory"
	.string "Dad how did we just loose?$"

Route3_Text_PedroPost::
# 319 "data/maps/Route3/scripts.pory"
	.string "Okay, you're good.$"

Route3_Text_MonicaIntro::
# 323 "data/maps/Route3/scripts.pory"
	.string "Hey! Stay away from my children.$"

Route3_Text_MonicaLost::
# 327 "data/maps/Route3/scripts.pory"
	.string "You know, I'm still available.$"

Route3_Text_MonicaPost::
# 331 "data/maps/Route3/scripts.pory"
	.string "Nice to see you!$"

Route3_Text_AmberIntro::
# 335 "data/maps/Route3/scripts.pory"
	.string "My mommy took me and Ross to the beach!$"

Route3_Text_AmberLost::
# 339 "data/maps/Route3/scripts.pory"
	.string "No, Mom!$"

Route3_Text_AmberPost::
# 343 "data/maps/Route3/scripts.pory"
	.string "You hurt my feelings, go awawy.$"

Route3_Text_DustinIntro::
# 347 "data/maps/Route3/scripts.pory"
	.string "Hey man do you ever want to race birds?$"

Route3_Text_DustinLost::
# 351 "data/maps/Route3/scripts.pory"
	.string "That's not correct.$"

Route3_Text_DustinPost::
# 355 "data/maps/Route3/scripts.pory"
	.string "Did you go thrugh the woods?$"

Route3_Text_JonIntro::
# 359 "data/maps/Route3/scripts.pory"
	.string "Today I thought I'd be a fisherman.$"

Route3_Text_JonLost::
# 363 "data/maps/Route3/scripts.pory"
	.string "I've lost my fish...$"

Route3_Text_JonPost::
# 367 "data/maps/Route3/scripts.pory"
	.string "Let's drink a few more beers!$"

Route3_Text_JoeIntro::
# 371 "data/maps/Route3/scripts.pory"
	.string "My friend Jon ain't great at outdoorsy\n"
	.string "stuff.$"

Route3_Text_JoeLost::
# 375 "data/maps/Route3/scripts.pory"
	.string "So much for that.$"

Route3_Text_JoePost::
# 379 "data/maps/Route3/scripts.pory"
	.string "Think I'll try a new bait.$"

Route3_Text_RyanIntro::
# 383 "data/maps/Route3/scripts.pory"
	.string "The Bugs!\n"
	.string "THE BUGS!!!$"

Route3_Text_RyanLost::
# 387 "data/maps/Route3/scripts.pory"
	.string "You helped me scratch the bugs.$"

Route3_Text_RyanPost::
# 391 "data/maps/Route3/scripts.pory"
	.string "Thank you a lot, these bugs are\n"
	.string "dangerous.$"

Route3_Text_MeganIntro::
# 395 "data/maps/Route3/scripts.pory"
	.string "Hey, didn't you use to make fun of me.$"

Route3_Text_MeganLost::
# 399 "data/maps/Route3/scripts.pory"
	.string "Looks like you're still laughing.$"

Route3_Text_MeganPost::
# 403 "data/maps/Route3/scripts.pory"
	.string "Hey haven't you heard anything about a\n"
	.string "new freeway the party was planning to\l"
	.string "build through here?$"

Route3_Text_DevonIntro::
# 407 "data/maps/Route3/scripts.pory"
	.string "You're not headed into the woods are\n"
	.string "you?$"

Route3_Text_DevonLost::
# 411 "data/maps/Route3/scripts.pory"
	.string "You're pretty tough.$"

Route3_Text_DevonPost::
# 415 "data/maps/Route3/scripts.pory"
	.string "You should be safe enough, but be\n"
	.string "careful that you do not get lost.$"

Route3_Text_Leaf1::
# 419 "data/maps/Route3/scripts.pory"
	.string "Hey {PLAYER} long time no see how\n"
	.string "have you been? While you slowpokes\l"
	.string "were getting stoned in town I was\l"
	.string "training my fresh caught Pokemon. Look\l"
	.string "{PLAYER} they're almost as cute as I\l"
	.string "am.$"

Route3_Text_LeafLost::
# 423 "data/maps/Route3/scripts.pory"
	.string "Wow {PLAYER} looks like I have a lot\n"
	.string "to learn$"

Route3_Text_Leaf1Post::
# 427 "data/maps/Route3/scripts.pory"
	.string "Haha you're way too good for me.\p"
	.string "But wait weren't you supposed to meet\n"
	.string "me with my dad?\p"
	.string "We need to find him! Where could he be?\p"
	.string "DAD?!$"

Route3_Text_OldMan::
# 431 "data/maps/Route3/scripts.pory"
	.string "Caverna Ilium was this cave's name\n"
	.string "before The Party changed it to Beach\l"
	.string "Cave.\p"
	.string "You should only go in if you're prepared.$"

Route3_Text_Leaf2::
# 435 "data/maps/Route3/scripts.pory"
	.string "Look out {PLAYER} it's {RIVAL}\n"
	.string "this is a trap!$"

Route3_Text_RivalIntro::
# 439 "data/maps/Route3/scripts.pory"
	.string "It's {PLAYER} is it? What a disgusting\n"
	.string "name though fitting for an animal like\l"
	.string "you. I spent six hours saving Humpty's\l"
	.string "life after the hospital turned me away\l"
	.string "but in the end I could not bring him\l"
	.string "back. You killed my only friend and now\l"
	.string "you're trapped the both of you like\l"
	.string "flies caught in my net.$"

Route3_Text_RivalLost::
# 443 "data/maps/Route3/scripts.pory"
	.string "These pathetic insects all let me down!!$"

Route3_Text_RivalPost::
# 447 "data/maps/Route3/scripts.pory"
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
# 451 "data/maps/Route3/scripts.pory"
	.string "Wow {PLAYER} I'm glad you're here all\n"
	.string "big and strong to protect me from\l"
	.string "creeps like that {RIVAL}. It's\l"
	.string "getting late and I want to see Mew!\l"
	.string "C'mon silly we need to find my dad!$"

Route3_Text_SaeclaraSign::
# 455 "data/maps/Route3/scripts.pory"
	.string "City Saeclara ->\n"
	.string "<- Silvan Woods\n"
	.string "<- Bulbus Town$"
