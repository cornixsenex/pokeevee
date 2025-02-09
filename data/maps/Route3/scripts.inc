Route3_MapScripts::
# 12 "data//maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data//maps/Route3/scripts.pory"
	specialvar VAR_RESULT, IsRoute3RiverDelta
# 16 "data//maps/Route3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 19 "data//maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 1
Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 23 "data//maps/Route3/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_lt Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data//maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 24 "data//maps/Route3/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


Route3_Script_BridgeBlock::
# 31 "data//maps/Route3/scripts.pory"
	lock
# 32 "data//maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 33 "data//maps/Route3/scripts.pory"
	waitmovement 0
# 34 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_BridgeBlock, MSGBOX_DEFAULT
# 35 "data//maps/Route3/scripts.pory"
	closemessage
# 36 "data//maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 37 "data//maps/Route3/scripts.pory"
	waitmovement 0
# 38 "data//maps/Route3/scripts.pory"
	release
	end


Route3_Script_BridgeWorker::
# 43 "data//maps/Route3/scripts.pory"
	lock
# 44 "data//maps/Route3/scripts.pory"
	faceplayer
# 45 "data//maps/Route3/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route3_Script_BridgeWorker_2
Route3_Script_BridgeWorker_1:
# 51 "data//maps/Route3/scripts.pory"
	release
	end

Route3_Script_BridgeWorker_2:
# 46 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_BridgeBlock, MSGBOX_DEFAULT
# 47 "data//maps/Route3/scripts.pory"
	closemessage
# 48 "data//maps/Route3/scripts.pory"
	applymovement 14, Common_Movement_FaceUp
# 49 "data//maps/Route3/scripts.pory"
	waitmovement 0
	goto Route3_Script_BridgeWorker_1


Route3_EventScript_Ross::
# 56 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROSS, Route3_Text_RossIntro, Route3_Text_RossLost
# 57 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_RossPost
# 58 "data//maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Izzy::
# 63 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_IZZY, Route3_Text_IzzyIntro, Route3_Text_IzzyLost
# 64 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_IzzyPost
# 65 "data//maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ricardo::
# 70 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RICARDO, Route3_Text_RicardoIntro, Route3_Text_RicardoLost
# 71 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_RicardoPost
# 72 "data//maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Pedro::
# 77 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_PEDRO, Route3_Text_PedroIntro, Route3_Text_PedroLost
# 78 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_PedroPost
# 79 "data//maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Monica::
# 84 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MONICA, Route3_Text_MonicaIntro, Route3_Text_MonicaLost
# 85 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_MonicaPost
# 86 "data//maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Amber::
# 91 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_AMBER, Route3_Text_AmberIntro, Route3_Text_AmberLost
# 92 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_AmberPost
# 93 "data//maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Dustin::
# 98 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DUSTIN, Route3_Text_DustinIntro, Route3_Text_DustinLost
# 99 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_DustinPost
# 100 "data//maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Jon::
# 105 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JON, Route3_Text_JonIntro, Route3_Text_JonLost
# 106 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_JonPost
# 107 "data//maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Joe::
# 112 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JOE, Route3_Text_JoeIntro, Route3_Text_JoeLost
# 113 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_JoePost
# 114 "data//maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ryan::
# 119 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RYAN, Route3_Text_RyanIntro, Route3_Text_RyanLost
# 120 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_RyanPost
# 121 "data//maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Megan::
# 125 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MEGAN, Route3_Text_MeganIntro, Route3_Text_MeganLost
# 126 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_MeganPost
# 127 "data//maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Devon::
# 132 "data//maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DEVON, Route3_Text_DevonIntro, Route3_Text_DevonLost
# 133 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_DevonPost
# 134 "data//maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_OldMan::
# 139 "data//maps/Route3/scripts.pory"
	lock
# 140 "data//maps/Route3/scripts.pory"
	faceplayer
# 141 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_OldMan
# 142 "data//maps/Route3/scripts.pory"
	closemessage
# 143 "data//maps/Route3/scripts.pory"
	release
	end


Route3_EventScript_SaeclaraSign::
# 148 "data//maps/Route3/scripts.pory"
	lock
# 149 "data//maps/Route3/scripts.pory"
	msgbox Route3_Text_SaeclaraSign
# 150 "data//maps/Route3/scripts.pory"
	closemessage
# 151 "data//maps/Route3/scripts.pory"
	release
	end


Route3_Script_Sign::
# 156 "data//maps/Route3/scripts.pory"
	lock
# 157 "data//maps/Route3/scripts.pory"
	switch VAR_TEMP_5
# 158 "data//maps/Route3/scripts.pory"
	case 0, Route3_Script_Sign_3
# 160 "data//maps/Route3/scripts.pory"
	case 1, Route3_Script_Sign_4
# 162 "data//maps/Route3/scripts.pory"
	case 2, Route3_Script_Sign_5
# 165 "data//maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_3, MSGBOX_DEFAULT
Route3_Script_Sign_1:
# 167 "data//maps/Route3/scripts.pory"
	closemessage
# 168 "data//maps/Route3/scripts.pory"
	special ShowMapNamePopup
# 169 "data//maps/Route3/scripts.pory"
	release
	end

Route3_Script_Sign_3:
# 159 "data//maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_0, MSGBOX_DEFAULT
	goto Route3_Script_Sign_1

Route3_Script_Sign_4:
# 161 "data//maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_1, MSGBOX_DEFAULT
	goto Route3_Script_Sign_1

Route3_Script_Sign_5:
# 163 "data//maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_2, MSGBOX_DEFAULT
	goto Route3_Script_Sign_1


Route3_Script_RiverDeltaTransition::
# 176 "data//maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 2
# 177 "data//maps/Route3/scripts.pory"
	special ShowMapNamePopup
	return


Route3_Script_CanelosCoveTransition::
# 183 "data//maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 1
# 184 "data//maps/Route3/scripts.pory"
	special ShowMapNamePopup
	return


# 187 "data//maps/Route3/scripts.pory"
Route3_Movement_LeafIntro1:
# 188 "data//maps/Route3/scripts.pory"
	walk_down
# 189 "data//maps/Route3/scripts.pory"
	walk_right
# 190 "data//maps/Route3/scripts.pory"
	walk_down
# 191 "data//maps/Route3/scripts.pory"
	face_left
	step_end

# 194 "data//maps/Route3/scripts.pory"
Route3_Movement_LeafIntro2:
# 195 "data//maps/Route3/scripts.pory"
	walk_down
# 195 "data//maps/Route3/scripts.pory"
	walk_down
# 196 "data//maps/Route3/scripts.pory"
	face_right
	step_end

# 199 "data//maps/Route3/scripts.pory"
Route3_Movement_LeafExit:
# 200 "data//maps/Route3/scripts.pory"
	walk_up
# 200 "data//maps/Route3/scripts.pory"
	walk_up
	step_end

# 203 "data//maps/Route3/scripts.pory"
Route3_Movement_RivalPlayer1:
# 204 "data//maps/Route3/scripts.pory"
	walk_right
# 205 "data//maps/Route3/scripts.pory"
	walk_down
# 206 "data//maps/Route3/scripts.pory"
	walk_right
	step_end

# 209 "data//maps/Route3/scripts.pory"
Route3_Movement_RivalPlayer1B:
# 210 "data//maps/Route3/scripts.pory"
	walk_right
# 210 "data//maps/Route3/scripts.pory"
	walk_right
	step_end

# 213 "data//maps/Route3/scripts.pory"
Route3_Movement_Rival1:
# 214 "data//maps/Route3/scripts.pory"
	walk_up
# 214 "data//maps/Route3/scripts.pory"
	walk_up
# 215 "data//maps/Route3/scripts.pory"
	walk_right
# 215 "data//maps/Route3/scripts.pory"
	walk_right
# 215 "data//maps/Route3/scripts.pory"
	walk_right
	step_end

# 218 "data//maps/Route3/scripts.pory"
Route3_Movement_Rival2:
# 219 "data//maps/Route3/scripts.pory"
	walk_left
# 219 "data//maps/Route3/scripts.pory"
	walk_left
# 220 "data//maps/Route3/scripts.pory"
	walk_down
# 220 "data//maps/Route3/scripts.pory"
	walk_down
	step_end

# 223 "data//maps/Route3/scripts.pory"
Route3_Movement_RivalLeafExit:
# 224 "data//maps/Route3/scripts.pory"
	walk_up
# 225 "data//maps/Route3/scripts.pory"
	walk_left
# 225 "data//maps/Route3/scripts.pory"
	walk_left
# 225 "data//maps/Route3/scripts.pory"
	walk_left
# 225 "data//maps/Route3/scripts.pory"
	walk_left
# 226 "data//maps/Route3/scripts.pory"
	walk_down
# 226 "data//maps/Route3/scripts.pory"
	walk_down
# 226 "data//maps/Route3/scripts.pory"
	walk_down
	step_end

Route3_Script_Sign_Text_0:
# 159 "data//maps/Route3/scripts.pory"
	.string "0$"

Route3_Script_Sign_Text_1:
# 161 "data//maps/Route3/scripts.pory"
	.string "1$"

Route3_Script_Sign_Text_2:
# 163 "data//maps/Route3/scripts.pory"
	.string "2$"

Route3_Script_Sign_Text_3:
# 165 "data//maps/Route3/scripts.pory"
	.string "OOB$"

Route3_Text_RossIntro::
# 230 "data//maps/Route3/scripts.pory"
	.string "I'm learning how to swim! Here check\n"
	.string "this out!$"

Route3_Text_RossLost::
# 234 "data//maps/Route3/scripts.pory"
	.string "Help mom I'm gonna drown!$"

Route3_Text_RossPost::
# 238 "data//maps/Route3/scripts.pory"
	.string "Wow you showed me! Looks like I need to\n"
	.string "practice dog paddling.$"

Route3_Text_IzzyIntro::
# 243 "data//maps/Route3/scripts.pory"
	.string "Eww gross get away from me you weirdo!$"

Route3_Text_IzzyLost::
# 247 "data//maps/Route3/scripts.pory"
	.string "Please help please help!$"

Route3_Text_IzzyPost::
# 251 "data//maps/Route3/scripts.pory"
	.string "I think you made me wet.$"

Route3_Text_RicardoIntro::
# 255 "data//maps/Route3/scripts.pory"
	.string "I brought my son here to play on the\n"
	.string "beach.$"

Route3_Text_RicardoLost::
# 259 "data//maps/Route3/scripts.pory"
	.string "You're making me look weak...$"

Route3_Text_RicardoPost::
# 263 "data//maps/Route3/scripts.pory"
	.string "Have you explored the cave carved in\n"
	.string "the rock down by the sea?$"

Route3_Text_PedroIntro::
# 267 "data//maps/Route3/scripts.pory"
	.string "Me and my dad are gonna kick your ass!$"

Route3_Text_PedroLost::
# 271 "data//maps/Route3/scripts.pory"
	.string "Dad how did we just loose?$"

Route3_Text_PedroPost::
# 275 "data//maps/Route3/scripts.pory"
	.string "Okay, you're good.$"

Route3_Text_MonicaIntro::
# 279 "data//maps/Route3/scripts.pory"
	.string "Hey! Stay away from my children.$"

Route3_Text_MonicaLost::
# 283 "data//maps/Route3/scripts.pory"
	.string "You know, I'm still available.$"

Route3_Text_MonicaPost::
# 287 "data//maps/Route3/scripts.pory"
	.string "Nice to see you!$"

Route3_Text_AmberIntro::
# 291 "data//maps/Route3/scripts.pory"
	.string "My mommy took me and Ross to the beach!$"

Route3_Text_AmberLost::
# 295 "data//maps/Route3/scripts.pory"
	.string "No, Mom!$"

Route3_Text_AmberPost::
# 299 "data//maps/Route3/scripts.pory"
	.string "You hurt my feelings, go awawy.$"

Route3_Text_DustinIntro::
# 303 "data//maps/Route3/scripts.pory"
	.string "Hey man do you ever want to race birds?$"

Route3_Text_DustinLost::
# 307 "data//maps/Route3/scripts.pory"
	.string "That's not correct.$"

Route3_Text_DustinPost::
# 311 "data//maps/Route3/scripts.pory"
	.string "Did you go thrugh the woods?$"

Route3_Text_JonIntro::
# 315 "data//maps/Route3/scripts.pory"
	.string "Today I thought I'd be a fisherman.$"

Route3_Text_JonLost::
# 319 "data//maps/Route3/scripts.pory"
	.string "I've lost my fish...$"

Route3_Text_JonPost::
# 323 "data//maps/Route3/scripts.pory"
	.string "Let's drink a few more beers!$"

Route3_Text_JoeIntro::
# 327 "data//maps/Route3/scripts.pory"
	.string "My friend Jon ain't great at outdoorsy\n"
	.string "stuff.$"

Route3_Text_JoeLost::
# 331 "data//maps/Route3/scripts.pory"
	.string "So much for that.$"

Route3_Text_JoePost::
# 335 "data//maps/Route3/scripts.pory"
	.string "Think I'll try a new bait.$"

Route3_Text_RyanIntro::
# 339 "data//maps/Route3/scripts.pory"
	.string "The Bugs!\n"
	.string "THE BUGS!!!$"

Route3_Text_RyanLost::
# 343 "data//maps/Route3/scripts.pory"
	.string "You helped me scratch the bugs.$"

Route3_Text_RyanPost::
# 347 "data//maps/Route3/scripts.pory"
	.string "Thank you a lot, these bugs are\n"
	.string "dangerous.$"

Route3_Text_MeganIntro::
# 351 "data//maps/Route3/scripts.pory"
	.string "Hey, didn't you use to make fun of me.$"

Route3_Text_MeganLost::
# 355 "data//maps/Route3/scripts.pory"
	.string "Looks like you're still laughing.$"

Route3_Text_MeganPost::
# 359 "data//maps/Route3/scripts.pory"
	.string "Hey haven't you heard anything about a\n"
	.string "new freeway the party was planning to\l"
	.string "build through here?$"

Route3_Text_DevonIntro::
# 363 "data//maps/Route3/scripts.pory"
	.string "You're not headed into the woods are\n"
	.string "you?$"

Route3_Text_DevonLost::
# 367 "data//maps/Route3/scripts.pory"
	.string "You're pretty tough.$"

Route3_Text_DevonPost::
# 371 "data//maps/Route3/scripts.pory"
	.string "You should be safe enough, but be\n"
	.string "careful that you do not get lost.$"

Route3_Text_Leaf1::
# 375 "data//maps/Route3/scripts.pory"
	.string "Hey {PLAYER} long time no see how\n"
	.string "have you been? While you slowpokes\l"
	.string "were getting stoned in town I was\l"
	.string "training my fresh caught Pokemon. Look\l"
	.string "{PLAYER} they're almost as cute as I\l"
	.string "am.$"

Route3_Text_LeafLost::
# 379 "data//maps/Route3/scripts.pory"
	.string "Wow {PLAYER} looks like I have a lot\n"
	.string "to learn$"

Route3_Text_Leaf1Post::
# 383 "data//maps/Route3/scripts.pory"
	.string "Haha you're way too good for me.\p"
	.string "But wait weren't you supposed to meet\n"
	.string "me with my dad?\p"
	.string "We need to find him! Where could he be?\p"
	.string "DAD?!$"

Route3_Text_OldMan::
# 387 "data//maps/Route3/scripts.pory"
	.string "Caverna Ilium was this cave's name\n"
	.string "before The Party changed it to Beach\l"
	.string "Cave.\p"
	.string "You should only go in if you're prepared.$"

Route3_Text_Leaf2::
# 391 "data//maps/Route3/scripts.pory"
	.string "Look out {PLAYER} it's {RIVAL}\n"
	.string "this is a trap!$"

Route3_Text_RivalIntro::
# 395 "data//maps/Route3/scripts.pory"
	.string "It's {PLAYER} is it? What a disgusting\n"
	.string "name though fitting for an animal like\l"
	.string "you. I spent six hours saving Humpty's\l"
	.string "life after the hospital turned me away\l"
	.string "but in the end I could not bring him\l"
	.string "back. You killed my only friend and now\l"
	.string "you're trapped the both of you like\l"
	.string "flies caught in my net.$"

Route3_Text_RivalLost::
# 399 "data//maps/Route3/scripts.pory"
	.string "These pathetic insects all let me down!!$"

Route3_Text_RivalPost::
# 403 "data//maps/Route3/scripts.pory"
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
# 407 "data//maps/Route3/scripts.pory"
	.string "Wow {PLAYER} I'm glad you're here all\n"
	.string "big and strong to protect me from\l"
	.string "creeps like that {RIVAL}. It's\l"
	.string "getting late and I want to see Mew!\l"
	.string "C'mon silly we need to find my dad!$"

Route3_Text_SaeclaraSign::
# 411 "data//maps/Route3/scripts.pory"
	.string "City Saeclara ->\n"
	.string "<- Silvan Woods\n"
	.string "<- Porta Pilo$"

Route3_Text_BridgeBlock::
# 415 "data//maps/Route3/scripts.pory"
	.string "Hey! Watch it! The bridge came down in\n"
	.string "the storm! We're working hard to fix it\l"
	.string "but for now you'll have to find another\l"
	.string "way across.$"
