Route3_MapScripts::
# 18 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 21 "data/maps/Route3/scripts.pory"
	specialvar VAR_RESULT, IsRoute3RiverDelta_F
# 22 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 25 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 1
Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 29 "data/maps/Route3/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_lt Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 23 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 30 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


Route3_Script_BridgeBlock::
# 37 "data/maps/Route3/scripts.pory"
	lock
# 38 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 39 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_BridgeBlock, MSGBOX_DEFAULT
# 41 "data/maps/Route3/scripts.pory"
	closemessage
# 42 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 43 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route3/scripts.pory"
	release
	end


Route3_Script_BridgeWorker::
# 49 "data/maps/Route3/scripts.pory"
	lock
# 50 "data/maps/Route3/scripts.pory"
	faceplayer
# 51 "data/maps/Route3/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route3_Script_BridgeWorker_2
Route3_Script_BridgeWorker_1:
# 57 "data/maps/Route3/scripts.pory"
	release
	end

Route3_Script_BridgeWorker_2:
# 52 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_BridgeBlock, MSGBOX_DEFAULT
# 53 "data/maps/Route3/scripts.pory"
	closemessage
# 54 "data/maps/Route3/scripts.pory"
	applymovement 14, Common_Movement_FaceUp
# 55 "data/maps/Route3/scripts.pory"
	waitmovement 0
	goto Route3_Script_BridgeWorker_1


Route3_EventScript_Ross::
# 62 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROSS, Route3_Text_RossIntro, Route3_Text_RossLost
# 63 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RossPost
# 64 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Izzy::
# 69 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_IZZY, Route3_Text_IzzyIntro, Route3_Text_IzzyLost
# 70 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_IzzyPost
# 71 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ricardo::
# 76 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RICARDO, Route3_Text_RicardoIntro, Route3_Text_RicardoLost
# 77 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RicardoPost
# 78 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Pedro::
# 83 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_PEDRO, Route3_Text_PedroIntro, Route3_Text_PedroLost
# 84 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_PedroPost
# 85 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Monica::
# 90 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MONICA, Route3_Text_MonicaIntro, Route3_Text_MonicaLost
# 91 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_MonicaPost
# 92 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Amber::
# 97 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_AMBER, Route3_Text_AmberIntro, Route3_Text_AmberLost
# 98 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_AmberPost
# 99 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Dustin::
# 104 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DUSTIN, Route3_Text_DustinIntro, Route3_Text_DustinLost
# 105 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_DustinPost
# 106 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Jon::
# 111 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JON, Route3_Text_JonIntro, Route3_Text_JonLost
# 112 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JonPost
# 113 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Joe::
# 118 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JOE, Route3_Text_JoeIntro, Route3_Text_JoeLost
# 119 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JoePost
# 120 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ryan::
# 125 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RYAN, Route3_Text_RyanIntro, Route3_Text_RyanLost
# 126 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RyanPost
# 127 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Megan::
# 131 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MEGAN, Route3_Text_MeganIntro, Route3_Text_MeganLost
# 132 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_MeganPost
# 133 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Devon::
# 138 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DEVON, Route3_Text_DevonIntro, Route3_Text_DevonLost
# 139 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_DevonPost
# 140 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_OldMan::
# 145 "data/maps/Route3/scripts.pory"
	lock
# 146 "data/maps/Route3/scripts.pory"
	faceplayer
# 147 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_OldMan
# 148 "data/maps/Route3/scripts.pory"
	closemessage
# 149 "data/maps/Route3/scripts.pory"
	release
	end


Route3_EventScript_SaeclaraSign::
# 154 "data/maps/Route3/scripts.pory"
	lock
# 155 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_SaeclaraSign
# 156 "data/maps/Route3/scripts.pory"
	closemessage
# 157 "data/maps/Route3/scripts.pory"
	release
	end


Route3_Script_Sign::
# 162 "data/maps/Route3/scripts.pory"
	lock
# 163 "data/maps/Route3/scripts.pory"
	switch VAR_TEMP_5
# 164 "data/maps/Route3/scripts.pory"
	case 0, Route3_Script_Sign_3
# 166 "data/maps/Route3/scripts.pory"
	case 1, Route3_Script_Sign_4
# 168 "data/maps/Route3/scripts.pory"
	case 2, Route3_Script_Sign_5
# 171 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_3, MSGBOX_DEFAULT
Route3_Script_Sign_1:
# 173 "data/maps/Route3/scripts.pory"
	closemessage
# 174 "data/maps/Route3/scripts.pory"
	special ShowMapNamePopup
# 175 "data/maps/Route3/scripts.pory"
	release
	end

Route3_Script_Sign_3:
# 165 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_0, MSGBOX_DEFAULT
	goto Route3_Script_Sign_1

Route3_Script_Sign_4:
# 167 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_1, MSGBOX_DEFAULT
	goto Route3_Script_Sign_1

Route3_Script_Sign_5:
# 169 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_2, MSGBOX_DEFAULT
	goto Route3_Script_Sign_1


Route3_Script_RiverDeltaTransition::
# 182 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 2
# 183 "data/maps/Route3/scripts.pory"
	special TransitionMapMusic
# 184 "data/maps/Route3/scripts.pory"
	special ShowMapNamePopup
	return


Route3_Script_CanelosCoveTransition::
# 190 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 1
# 191 "data/maps/Route3/scripts.pory"
	special TransitionMapMusic
# 192 "data/maps/Route3/scripts.pory"
	special ShowMapNamePopup
	return


Route3_Script_Scene_SilvanLeaf1::
# 196 "data/maps/Route3/scripts.pory"
	lock
# 197 "data/maps/Route3/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 2
# 198 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 199 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route3/scripts.pory"
	removeobject 15
# 202 "data/maps/Route3/scripts.pory"
	setobjectxyperm 15, 8, 6
# 203 "data/maps/Route3/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_LEFT
# 204 "data/maps/Route3/scripts.pory"
	addobject 15
# 205 "data/maps/Route3/scripts.pory"
	showobjectat 15, MAP_ROUTE3
# 207 "data/maps/Route3/scripts.pory"
	removeobject 16
# 208 "data/maps/Route3/scripts.pory"
	setobjectxyperm 16, 8, 7
# 209 "data/maps/Route3/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_FACE_LEFT
# 210 "data/maps/Route3/scripts.pory"
	addobject 16
# 211 "data/maps/Route3/scripts.pory"
	showobjectat 16, MAP_ROUTE3
# 213 "data/maps/Route3/scripts.pory"
	removeobject 17
# 214 "data/maps/Route3/scripts.pory"
	setobjectxyperm 17, 8, 8
# 215 "data/maps/Route3/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_LEFT
# 216 "data/maps/Route3/scripts.pory"
	addobject 17
# 217 "data/maps/Route3/scripts.pory"
	showobjectat 17, MAP_ROUTE3
# 219 "data/maps/Route3/scripts.pory"
	applymovement 15, Route3_Movement_SilvanLeaf1
# 220 "data/maps/Route3/scripts.pory"
	applymovement 16, Route3_Movement_SilvanLeaf1
# 221 "data/maps/Route3/scripts.pory"
	applymovement 17, Route3_Movement_SilvanLeaf1
# 222 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route3/scripts.pory"
	load_field_pic FIELD_PIC_SCOTT, 190, 98
# 225 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Scott1
# 226 "data/maps/Route3/scripts.pory"
	destroy_field_pic FIELD_PIC_SCOTT
# 228 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 229 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf1
# 230 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 232 "data/maps/Route3/scripts.pory"
	load_field_pic FIELD_PIC_SCOTT, 190, 98
# 233 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Scott2
# 234 "data/maps/Route3/scripts.pory"
	destroy_field_pic FIELD_PIC_SCOTT
# 236 "data/maps/Route3/scripts.pory"
	closemessage
# 237 "data/maps/Route3/scripts.pory"
	applymovement 15, Route3_Movement_SilvanLeaf2
# 238 "data/maps/Route3/scripts.pory"
	applymovement 16, Route3_Movement_SilvanLeaf2
# 239 "data/maps/Route3/scripts.pory"
	applymovement 17, Route3_Movement_SilvanLeaf2
# 240 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route3/scripts.pory"
	hideobjectat 15, MAP_ROUTE3
# 243 "data/maps/Route3/scripts.pory"
	hideobjectat 16, MAP_ROUTE3
# 244 "data/maps/Route3/scripts.pory"
	hideobjectat 17, MAP_ROUTE3
# 245 "data/maps/Route3/scripts.pory"
	removeobject 15
# 246 "data/maps/Route3/scripts.pory"
	removeobject 16
# 247 "data/maps/Route3/scripts.pory"
	removeobject 17
# 248 "data/maps/Route3/scripts.pory"
	setobjectxyperm 15, 0, 0
# 249 "data/maps/Route3/scripts.pory"
	setobjectxyperm 16, 0, 0
# 250 "data/maps/Route3/scripts.pory"
	setobjectxyperm 17, 0, 0
# 251 "data/maps/Route3/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_INVISIBLE
# 252 "data/maps/Route3/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_INVISIBLE
# 253 "data/maps/Route3/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_INVISIBLE
# 255 "data/maps/Route3/scripts.pory"
	setflag FLAG_SILVAN_FERRY_ISWEST
# 257 "data/maps/Route3/scripts.pory"
	release
	end


# 261 "data/maps/Route3/scripts.pory"
Route3_Movement_SilvanLeaf1:
# 262 "data/maps/Route3/scripts.pory"
	walk_left
# 262 "data/maps/Route3/scripts.pory"
	walk_left
# 262 "data/maps/Route3/scripts.pory"
	walk_left
# 262 "data/maps/Route3/scripts.pory"
	walk_left
# 262 "data/maps/Route3/scripts.pory"
	walk_left
# 262 "data/maps/Route3/scripts.pory"
	walk_left
# 262 "data/maps/Route3/scripts.pory"
	walk_left
	step_end

# 265 "data/maps/Route3/scripts.pory"
Route3_Movement_SilvanLeaf2:
# 266 "data/maps/Route3/scripts.pory"
	walk_right
# 266 "data/maps/Route3/scripts.pory"
	walk_right
# 266 "data/maps/Route3/scripts.pory"
	walk_right
# 266 "data/maps/Route3/scripts.pory"
	walk_right
# 266 "data/maps/Route3/scripts.pory"
	walk_right
# 266 "data/maps/Route3/scripts.pory"
	walk_right
# 266 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

Route3_Script_Sign_Text_0:
# 165 "data/maps/Route3/scripts.pory"
	.string "0$"

Route3_Script_Sign_Text_1:
# 167 "data/maps/Route3/scripts.pory"
	.string "1$"

Route3_Script_Sign_Text_2:
# 169 "data/maps/Route3/scripts.pory"
	.string "2$"

Route3_Script_Sign_Text_3:
# 171 "data/maps/Route3/scripts.pory"
	.string "OOB$"

Route3_Text_RossIntro::
# 270 "data/maps/Route3/scripts.pory"
	.string "I'm learning how to swim! Here check\n"
	.string "this out!$"

Route3_Text_RossLost::
# 274 "data/maps/Route3/scripts.pory"
	.string "Help mom I'm gonna drown!$"

Route3_Text_RossPost::
# 278 "data/maps/Route3/scripts.pory"
	.string "Wow you showed me! Looks like I need to\n"
	.string "practice dog paddling.$"

Route3_Text_IzzyIntro::
# 283 "data/maps/Route3/scripts.pory"
	.string "Eww gross get away from me you weirdo!$"

Route3_Text_IzzyLost::
# 287 "data/maps/Route3/scripts.pory"
	.string "Please help please help!$"

Route3_Text_IzzyPost::
# 291 "data/maps/Route3/scripts.pory"
	.string "I think you made me wet.$"

Route3_Text_RicardoIntro::
# 295 "data/maps/Route3/scripts.pory"
	.string "I brought my son here to play on the\n"
	.string "beach.$"

Route3_Text_RicardoLost::
# 299 "data/maps/Route3/scripts.pory"
	.string "You're making me look weak...$"

Route3_Text_RicardoPost::
# 303 "data/maps/Route3/scripts.pory"
	.string "Have you explored the cave carved in\n"
	.string "the rock down by the sea?$"

Route3_Text_PedroIntro::
# 307 "data/maps/Route3/scripts.pory"
	.string "Me and my dad are gonna kick your ass!$"

Route3_Text_PedroLost::
# 311 "data/maps/Route3/scripts.pory"
	.string "Dad how did we just loose?$"

Route3_Text_PedroPost::
# 315 "data/maps/Route3/scripts.pory"
	.string "Okay, you're good.$"

Route3_Text_MonicaIntro::
# 319 "data/maps/Route3/scripts.pory"
	.string "Hey! Stay away from my children.$"

Route3_Text_MonicaLost::
# 323 "data/maps/Route3/scripts.pory"
	.string "You know, I'm still available.$"

Route3_Text_MonicaPost::
# 327 "data/maps/Route3/scripts.pory"
	.string "Nice to see you!$"

Route3_Text_AmberIntro::
# 331 "data/maps/Route3/scripts.pory"
	.string "My mommy took me and Ross to the beach!$"

Route3_Text_AmberLost::
# 335 "data/maps/Route3/scripts.pory"
	.string "No, Mom!$"

Route3_Text_AmberPost::
# 339 "data/maps/Route3/scripts.pory"
	.string "You hurt my feelings, go awawy.$"

Route3_Text_DustinIntro::
# 343 "data/maps/Route3/scripts.pory"
	.string "Hey man do you ever want to race birds?$"

Route3_Text_DustinLost::
# 347 "data/maps/Route3/scripts.pory"
	.string "That's not correct.$"

Route3_Text_DustinPost::
# 351 "data/maps/Route3/scripts.pory"
	.string "Did you go thrugh the woods?$"

Route3_Text_JonIntro::
# 355 "data/maps/Route3/scripts.pory"
	.string "Today I thought I'd be a fisherman.$"

Route3_Text_JonLost::
# 359 "data/maps/Route3/scripts.pory"
	.string "I've lost my fish...$"

Route3_Text_JonPost::
# 363 "data/maps/Route3/scripts.pory"
	.string "Let's drink a few more beers!$"

Route3_Text_JoeIntro::
# 367 "data/maps/Route3/scripts.pory"
	.string "My friend Jon ain't great at outdoorsy\n"
	.string "stuff.$"

Route3_Text_JoeLost::
# 371 "data/maps/Route3/scripts.pory"
	.string "So much for that.$"

Route3_Text_JoePost::
# 375 "data/maps/Route3/scripts.pory"
	.string "Think I'll try a new bait.$"

Route3_Text_RyanIntro::
# 379 "data/maps/Route3/scripts.pory"
	.string "The Bugs!\n"
	.string "THE BUGS!!!$"

Route3_Text_RyanLost::
# 383 "data/maps/Route3/scripts.pory"
	.string "You helped me scratch the bugs.$"

Route3_Text_RyanPost::
# 387 "data/maps/Route3/scripts.pory"
	.string "Thank you a lot, these bugs are\n"
	.string "dangerous.$"

Route3_Text_MeganIntro::
# 391 "data/maps/Route3/scripts.pory"
	.string "Hey, didn't you use to make fun of me.$"

Route3_Text_MeganLost::
# 395 "data/maps/Route3/scripts.pory"
	.string "Looks like you're still laughing.$"

Route3_Text_MeganPost::
# 399 "data/maps/Route3/scripts.pory"
	.string "Hey haven't you heard anything about a\n"
	.string "new freeway the party was planning to\l"
	.string "build through here?$"

Route3_Text_DevonIntro::
# 403 "data/maps/Route3/scripts.pory"
	.string "You're not headed into the woods are\n"
	.string "you?$"

Route3_Text_DevonLost::
# 407 "data/maps/Route3/scripts.pory"
	.string "You're pretty tough.$"

Route3_Text_DevonPost::
# 411 "data/maps/Route3/scripts.pory"
	.string "You should be safe enough, but be\n"
	.string "careful that you do not get lost.$"

Route3_Text_OldMan::
# 415 "data/maps/Route3/scripts.pory"
	.string "Caverna Ilium was this cave's name\n"
	.string "before The Party changed it to Beach\l"
	.string "Cave.\p"
	.string "You should only go in if you're prepared.$"

Route3_Text_Leaf2::
# 419 "data/maps/Route3/scripts.pory"
	.string "Look out {PLAYER} it's {RIVAL}\n"
	.string "this is a trap!$"

Route3_Text_RivalIntro::
# 423 "data/maps/Route3/scripts.pory"
	.string "It's {PLAYER} is it? What a disgusting\n"
	.string "name though fitting for an animal like\l"
	.string "you. I spent six hours saving Humpty's\l"
	.string "life after the hospital turned me away\l"
	.string "but in the end I could not bring him\l"
	.string "back. You killed my only friend and now\l"
	.string "you're trapped the both of you like\l"
	.string "flies caught in my net.$"

Route3_Text_RivalLost::
# 427 "data/maps/Route3/scripts.pory"
	.string "These pathetic insects all let me down!!$"

Route3_Text_RivalPost::
# 431 "data/maps/Route3/scripts.pory"
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
# 435 "data/maps/Route3/scripts.pory"
	.string "Wow {PLAYER} I'm glad you're here all\n"
	.string "big and strong to protect me from\l"
	.string "creeps like that {RIVAL}. It's\l"
	.string "getting late and I want to see Mew!\l"
	.string "C'mon silly we need to find my dad!$"

Route3_Text_SaeclaraSign::
# 439 "data/maps/Route3/scripts.pory"
	.string "City Saeclara ->\n"
	.string "<- Silvan Woods\n"
	.string "<- Porta Pilo$"

Route3_Text_BridgeBlock::
# 443 "data/maps/Route3/scripts.pory"
	.string "Hey! Watch it! The bridge came down in\n"
	.string "the storm! We're working hard to fix it\l"
	.string "but for now you'll have to find another\l"
	.string "way across.$"

Route3_Text_Scott1::
# 451 "data/maps/Route3/scripts.pory"
	.string "Bad news! The old pontes, across Draco,\n"
	.string "were beaten down by that most mighty\l"
	.string "storm.$"

Route3_Text_Leaf1::
# 457 "data/maps/Route3/scripts.pory"
	.string "We won't give up our quest! There must\n"
	.string "be some expedient way across the river.$"

Route3_Text_Scott2::
# 463 "data/maps/Route3/scripts.pory"
	.string "We'll have to journey into glum Silva in\n"
	.string "hopes of finding some sure way across.\l"
	.string "Be careful {PLAYER}. In Silva many\l"
	.string "folk pushed out of town, criminals, and\l"
	.string "wild {PKMN} lurk in shadows and tall grass.\l"
	.string "Tread carefully, and carry a big stick!$"
