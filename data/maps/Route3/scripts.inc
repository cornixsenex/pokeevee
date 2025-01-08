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
	trainerbattle_no_intro TRAINER_RIVAL2, Route3_Text_RivalLost
# 89 "data/maps/Route3/scripts.pory"
	load_field_pic 3, 190, 98
# 90 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RivalPost
# 91 "data/maps/Route3/scripts.pory"
	destroy_field_pic 3
# 92 "data/maps/Route3/scripts.pory"
	closemessage
# 93 "data/maps/Route3/scripts.pory"
	applymovement 17, Route3_Movement_Rival2
# 94 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route3/scripts.pory"
	removeobject 17
# 96 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 97 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 99 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf3
# 100 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 101 "data/maps/Route3/scripts.pory"
	closemessage
# 102 "data/maps/Route3/scripts.pory"
	applymovement 16, Route3_Movement_RivalLeafExit
# 103 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route3/scripts.pory"
	removeobject 16
# 105 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_STATE, 4
# 106 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_SILVANWOODS_LEAF2
# 107 "data/maps/Route3/scripts.pory"
	clearflag FLAG_HIDE_SILVANWOODS_LEAF1
	return


Route3_EventScript_Leaf1::
# 112 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 113 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf1
# 114 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 115 "data/maps/Route3/scripts.pory"
	closemessage
# 116 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF1, Route3_Text_LeafLost
# 117 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 118 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf1Post
# 119 "data/maps/Route3/scripts.pory"
	closemessage
# 120 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 121 "data/maps/Route3/scripts.pory"
	applymovement 13, Route3_Movement_LeafExit
# 122 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route3/scripts.pory"
	removeobject 13
# 124 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_STATE, 1
# 125 "data/maps/Route3/scripts.pory"
	setflag FLAG_SILVANWOODS_HIDEFIGHT1
	return


Route3_EventScript_Ross::
# 130 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROSS, Route3_Text_RossIntro, Route3_Text_RossLost
# 131 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RossPost
# 132 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Izzy::
# 137 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_IZZY, Route3_Text_IzzyIntro, Route3_Text_IzzyLost
# 138 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_IzzyPost
# 139 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ricardo::
# 144 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RICARDO, Route3_Text_RicardoIntro, Route3_Text_RicardoLost
# 145 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RicardoPost
# 146 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Pedro::
# 151 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_PEDRO, Route3_Text_PedroIntro, Route3_Text_PedroLost
# 152 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_PedroPost
# 153 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Monica::
# 158 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MONICA, Route3_Text_MonicaIntro, Route3_Text_MonicaLost
# 159 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_MonicaPost
# 160 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Amber::
# 165 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_AMBER, Route3_Text_AmberIntro, Route3_Text_AmberLost
# 166 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_AmberPost
# 167 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Dustin::
# 172 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DUSTIN, Route3_Text_DustinIntro, Route3_Text_DustinLost
# 173 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_DustinPost
# 174 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Jon::
# 179 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JON, Route3_Text_JonIntro, Route3_Text_JonLost
# 180 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JonPost
# 181 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Joe::
# 186 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JOE, Route3_Text_JoeIntro, Route3_Text_JoeLost
# 187 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JoePost
# 188 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ryan::
# 193 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RYAN, Route3_Text_RyanIntro, Route3_Text_RyanLost
# 194 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RyanPost
# 195 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Megan::
# 199 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MEGAN, Route3_Text_MeganIntro, Route3_Text_MeganLost
# 200 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_MeganPost
# 201 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Devon::
# 206 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DEVON, Route3_Text_DevonIntro, Route3_Text_DevonLost
# 207 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_DevonPost
# 208 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_OldMan::
# 213 "data/maps/Route3/scripts.pory"
	lock
# 214 "data/maps/Route3/scripts.pory"
	faceplayer
# 215 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_OldMan
# 216 "data/maps/Route3/scripts.pory"
	closemessage
# 217 "data/maps/Route3/scripts.pory"
	release
	end


Route3_EventScript_SaeclaraSign::
# 222 "data/maps/Route3/scripts.pory"
	lock
# 223 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_SaeclaraSign
# 224 "data/maps/Route3/scripts.pory"
	closemessage
# 225 "data/maps/Route3/scripts.pory"
	release
	end


# 229 "data/maps/Route3/scripts.pory"
Route3_Movement_LeafIntro1:
# 230 "data/maps/Route3/scripts.pory"
	walk_down
# 231 "data/maps/Route3/scripts.pory"
	walk_right
# 232 "data/maps/Route3/scripts.pory"
	walk_down
# 233 "data/maps/Route3/scripts.pory"
	face_left
	step_end

# 236 "data/maps/Route3/scripts.pory"
Route3_Movement_LeafIntro2:
# 237 "data/maps/Route3/scripts.pory"
	walk_down
# 237 "data/maps/Route3/scripts.pory"
	walk_down
# 238 "data/maps/Route3/scripts.pory"
	face_right
	step_end

# 241 "data/maps/Route3/scripts.pory"
Route3_Movement_LeafExit:
# 242 "data/maps/Route3/scripts.pory"
	walk_up
# 242 "data/maps/Route3/scripts.pory"
	walk_up
	step_end

# 245 "data/maps/Route3/scripts.pory"
Route3_Movement_RivalPlayer1:
# 246 "data/maps/Route3/scripts.pory"
	walk_right
# 247 "data/maps/Route3/scripts.pory"
	walk_down
# 248 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 251 "data/maps/Route3/scripts.pory"
Route3_Movement_RivalPlayer1B:
# 252 "data/maps/Route3/scripts.pory"
	walk_right
# 252 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 255 "data/maps/Route3/scripts.pory"
Route3_Movement_Rival1:
# 256 "data/maps/Route3/scripts.pory"
	walk_up
# 256 "data/maps/Route3/scripts.pory"
	walk_up
# 257 "data/maps/Route3/scripts.pory"
	walk_right
# 257 "data/maps/Route3/scripts.pory"
	walk_right
# 257 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 260 "data/maps/Route3/scripts.pory"
Route3_Movement_Rival2:
# 261 "data/maps/Route3/scripts.pory"
	walk_left
# 261 "data/maps/Route3/scripts.pory"
	walk_left
# 262 "data/maps/Route3/scripts.pory"
	walk_down
# 262 "data/maps/Route3/scripts.pory"
	walk_down
	step_end

# 265 "data/maps/Route3/scripts.pory"
Route3_Movement_RivalLeafExit:
# 266 "data/maps/Route3/scripts.pory"
	walk_up
# 267 "data/maps/Route3/scripts.pory"
	walk_left
# 267 "data/maps/Route3/scripts.pory"
	walk_left
# 267 "data/maps/Route3/scripts.pory"
	walk_left
# 267 "data/maps/Route3/scripts.pory"
	walk_left
# 268 "data/maps/Route3/scripts.pory"
	walk_down
# 268 "data/maps/Route3/scripts.pory"
	walk_down
# 268 "data/maps/Route3/scripts.pory"
	walk_down
	step_end

Route3_Text_RossIntro::
# 272 "data/maps/Route3/scripts.pory"
	.string "I'm learning how to swim! Here check\n"
	.string "this out!$"

Route3_Text_RossLost::
# 276 "data/maps/Route3/scripts.pory"
	.string "Help mom I'm gonna drown!$"

Route3_Text_RossPost::
# 280 "data/maps/Route3/scripts.pory"
	.string "Wow you showed me! Looks like I need to\n"
	.string "practice dog paddling.$"

Route3_Text_IzzyIntro::
# 285 "data/maps/Route3/scripts.pory"
	.string "Eww gross get away from me you weirdo!$"

Route3_Text_IzzyLost::
# 289 "data/maps/Route3/scripts.pory"
	.string "Please help please help!$"

Route3_Text_IzzyPost::
# 293 "data/maps/Route3/scripts.pory"
	.string "I think you made me wet.$"

Route3_Text_RicardoIntro::
# 297 "data/maps/Route3/scripts.pory"
	.string "I brought my son here to play on the\n"
	.string "beach.$"

Route3_Text_RicardoLost::
# 301 "data/maps/Route3/scripts.pory"
	.string "You're making me look weak...$"

Route3_Text_RicardoPost::
# 305 "data/maps/Route3/scripts.pory"
	.string "Have you explored the cave carved in\n"
	.string "the rock down by the sea?$"

Route3_Text_PedroIntro::
# 309 "data/maps/Route3/scripts.pory"
	.string "Me and my dad are gonna kick your ass!$"

Route3_Text_PedroLost::
# 313 "data/maps/Route3/scripts.pory"
	.string "Dad how did we just loose?$"

Route3_Text_PedroPost::
# 317 "data/maps/Route3/scripts.pory"
	.string "Okay, you're good.$"

Route3_Text_MonicaIntro::
# 321 "data/maps/Route3/scripts.pory"
	.string "Hey! Stay away from my children.$"

Route3_Text_MonicaLost::
# 325 "data/maps/Route3/scripts.pory"
	.string "You know, I'm still available.$"

Route3_Text_MonicaPost::
# 329 "data/maps/Route3/scripts.pory"
	.string "Nice to see you!$"

Route3_Text_AmberIntro::
# 333 "data/maps/Route3/scripts.pory"
	.string "My mommy took me and Ross to the beach!$"

Route3_Text_AmberLost::
# 337 "data/maps/Route3/scripts.pory"
	.string "No, Mom!$"

Route3_Text_AmberPost::
# 341 "data/maps/Route3/scripts.pory"
	.string "You hurt my feelings, go awawy.$"

Route3_Text_DustinIntro::
# 345 "data/maps/Route3/scripts.pory"
	.string "Hey man do you ever want to race birds?$"

Route3_Text_DustinLost::
# 349 "data/maps/Route3/scripts.pory"
	.string "That's not correct.$"

Route3_Text_DustinPost::
# 353 "data/maps/Route3/scripts.pory"
	.string "Did you go thrugh the woods?$"

Route3_Text_JonIntro::
# 357 "data/maps/Route3/scripts.pory"
	.string "Today I thought I'd be a fisherman.$"

Route3_Text_JonLost::
# 361 "data/maps/Route3/scripts.pory"
	.string "I've lost my fish...$"

Route3_Text_JonPost::
# 365 "data/maps/Route3/scripts.pory"
	.string "Let's drink a few more beers!$"

Route3_Text_JoeIntro::
# 369 "data/maps/Route3/scripts.pory"
	.string "My friend Jon ain't great at outdoorsy\n"
	.string "stuff.$"

Route3_Text_JoeLost::
# 373 "data/maps/Route3/scripts.pory"
	.string "So much for that.$"

Route3_Text_JoePost::
# 377 "data/maps/Route3/scripts.pory"
	.string "Think I'll try a new bait.$"

Route3_Text_RyanIntro::
# 381 "data/maps/Route3/scripts.pory"
	.string "The Bugs!\n"
	.string "THE BUGS!!!$"

Route3_Text_RyanLost::
# 385 "data/maps/Route3/scripts.pory"
	.string "You helped me scratch the bugs.$"

Route3_Text_RyanPost::
# 389 "data/maps/Route3/scripts.pory"
	.string "Thank you a lot, these bugs are\n"
	.string "dangerous.$"

Route3_Text_MeganIntro::
# 393 "data/maps/Route3/scripts.pory"
	.string "Hey, didn't you use to make fun of me.$"

Route3_Text_MeganLost::
# 397 "data/maps/Route3/scripts.pory"
	.string "Looks like you're still laughing.$"

Route3_Text_MeganPost::
# 401 "data/maps/Route3/scripts.pory"
	.string "Hey haven't you heard anything about a\n"
	.string "new freeway the party was planning to\l"
	.string "build through here?$"

Route3_Text_DevonIntro::
# 405 "data/maps/Route3/scripts.pory"
	.string "You're not headed into the woods are\n"
	.string "you?$"

Route3_Text_DevonLost::
# 409 "data/maps/Route3/scripts.pory"
	.string "You're pretty tough.$"

Route3_Text_DevonPost::
# 413 "data/maps/Route3/scripts.pory"
	.string "You should be safe enough, but be\n"
	.string "careful that you do not get lost.$"

Route3_Text_Leaf1::
# 417 "data/maps/Route3/scripts.pory"
	.string "Hey {PLAYER} long time no see how\n"
	.string "have you been? While you slowpokes\l"
	.string "were getting stoned in town I was\l"
	.string "training my fresh caught Pokemon. Look\l"
	.string "{PLAYER} they're almost as cute as I\l"
	.string "am.$"

Route3_Text_LeafLost::
# 421 "data/maps/Route3/scripts.pory"
	.string "Wow {PLAYER} looks like I have a lot\n"
	.string "to learn$"

Route3_Text_Leaf1Post::
# 425 "data/maps/Route3/scripts.pory"
	.string "Haha you're way too good for me.\p"
	.string "But wait weren't you supposed to meet\n"
	.string "me with my dad?\p"
	.string "We need to find him! Where could he be?\p"
	.string "DAD?!$"

Route3_Text_OldMan::
# 429 "data/maps/Route3/scripts.pory"
	.string "Caverna Ilium was this cave's name\n"
	.string "before The Party changed it to Beach\l"
	.string "Cave.\p"
	.string "You should only go in if you're prepared.$"

Route3_Text_Leaf2::
# 433 "data/maps/Route3/scripts.pory"
	.string "Look out {PLAYER} it's {RIVAL}\n"
	.string "this is a trap!$"

Route3_Text_RivalIntro::
# 437 "data/maps/Route3/scripts.pory"
	.string "It's {PLAYER} is it? What a disgusting\n"
	.string "name though fitting for an animal like\l"
	.string "you. I spent six hours saving Humpty's\l"
	.string "life after the hospital turned me away\l"
	.string "but in the end I could not bring him\l"
	.string "back. You killed my only friend and now\l"
	.string "you're trapped the both of you like\l"
	.string "flies caught in my net.$"

Route3_Text_RivalLost::
# 441 "data/maps/Route3/scripts.pory"
	.string "These pathetic insects all let me down!!$"

Route3_Text_RivalPost::
# 445 "data/maps/Route3/scripts.pory"
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
# 449 "data/maps/Route3/scripts.pory"
	.string "Wow {PLAYER} I'm glad you're here all\n"
	.string "big and strong to protect me from\l"
	.string "creeps like that {RIVAL}. It's\l"
	.string "getting late and I want to see Mew!\l"
	.string "C'mon silly we need to find my dad!$"

Route3_Text_SaeclaraSign::
# 453 "data/maps/Route3/scripts.pory"
	.string "City Saeclara ->\n"
	.string "<- Silvan Woods\n"
	.string "<- Bulbus Town$"
