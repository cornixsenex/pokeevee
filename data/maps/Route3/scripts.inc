Route3_MapScripts::
# 19 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 22 "data/maps/Route3/scripts.pory"
	specialvar VAR_RESULT, IsRoute3RiverDelta
# 23 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 26 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 1
Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 30 "data/maps/Route3/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_lt Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 24 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 31 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


Route3_Script_BridgeBlock::
# 38 "data/maps/Route3/scripts.pory"
	lock
# 39 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 40 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_BridgeBlock, MSGBOX_DEFAULT
# 42 "data/maps/Route3/scripts.pory"
	closemessage
# 43 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 44 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route3/scripts.pory"
	release
	end


Route3_Script_BridgeWorker::
# 50 "data/maps/Route3/scripts.pory"
	lock
# 51 "data/maps/Route3/scripts.pory"
	faceplayer
# 52 "data/maps/Route3/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route3_Script_BridgeWorker_2
Route3_Script_BridgeWorker_1:
# 58 "data/maps/Route3/scripts.pory"
	release
	end

Route3_Script_BridgeWorker_2:
# 53 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_BridgeBlock, MSGBOX_DEFAULT
# 54 "data/maps/Route3/scripts.pory"
	closemessage
# 55 "data/maps/Route3/scripts.pory"
	applymovement 14, Common_Movement_FaceUp
# 56 "data/maps/Route3/scripts.pory"
	waitmovement 0
	goto Route3_Script_BridgeWorker_1


Route3_EventScript_Ross::
# 63 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROSS, Route3_Text_RossIntro, Route3_Text_RossLost
# 64 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RossPost
# 65 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Izzy::
# 70 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_IZZY, Route3_Text_IzzyIntro, Route3_Text_IzzyLost
# 71 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_IzzyPost
# 72 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ricardo::
# 77 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RICARDO, Route3_Text_RicardoIntro, Route3_Text_RicardoLost
# 78 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RicardoPost
# 79 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Pedro::
# 84 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_PEDRO, Route3_Text_PedroIntro, Route3_Text_PedroLost
# 85 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_PedroPost
# 86 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Monica::
# 91 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MONICA, Route3_Text_MonicaIntro, Route3_Text_MonicaLost
# 92 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_MonicaPost
# 93 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Amber::
# 98 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_AMBER, Route3_Text_AmberIntro, Route3_Text_AmberLost
# 99 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_AmberPost
# 100 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Dustin::
# 105 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DUSTIN, Route3_Text_DustinIntro, Route3_Text_DustinLost
# 106 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_DustinPost
# 107 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Jon::
# 112 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JON, Route3_Text_JonIntro, Route3_Text_JonLost
# 113 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JonPost
# 114 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Joe::
# 119 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_JOE, Route3_Text_JoeIntro, Route3_Text_JoeLost
# 120 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JoePost
# 121 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Ryan::
# 126 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_RYAN, Route3_Text_RyanIntro, Route3_Text_RyanLost
# 127 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RyanPost
# 128 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Megan::
# 132 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_MEGAN, Route3_Text_MeganIntro, Route3_Text_MeganLost
# 133 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_MeganPost
# 134 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_Devon::
# 139 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_DEVON, Route3_Text_DevonIntro, Route3_Text_DevonLost
# 140 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_DevonPost
# 141 "data/maps/Route3/scripts.pory"
	closemessage
	end


Route3_EventScript_OldMan::
# 146 "data/maps/Route3/scripts.pory"
	lock
# 147 "data/maps/Route3/scripts.pory"
	faceplayer
# 148 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_OldMan
# 149 "data/maps/Route3/scripts.pory"
	closemessage
# 150 "data/maps/Route3/scripts.pory"
	release
	end


Route3_EventScript_SaeclaraSign::
# 155 "data/maps/Route3/scripts.pory"
	lock
# 156 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_SaeclaraSign
# 157 "data/maps/Route3/scripts.pory"
	closemessage
# 158 "data/maps/Route3/scripts.pory"
	release
	end


Route3_Script_Sign::
# 163 "data/maps/Route3/scripts.pory"
	lock
# 164 "data/maps/Route3/scripts.pory"
	switch VAR_TEMP_5
# 165 "data/maps/Route3/scripts.pory"
	case 0, Route3_Script_Sign_3
# 167 "data/maps/Route3/scripts.pory"
	case 1, Route3_Script_Sign_4
# 169 "data/maps/Route3/scripts.pory"
	case 2, Route3_Script_Sign_5
# 172 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_3, MSGBOX_DEFAULT
Route3_Script_Sign_1:
# 174 "data/maps/Route3/scripts.pory"
	closemessage
# 175 "data/maps/Route3/scripts.pory"
	special ShowMapNamePopup
# 176 "data/maps/Route3/scripts.pory"
	release
	end

Route3_Script_Sign_3:
# 166 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_0, MSGBOX_DEFAULT
	goto Route3_Script_Sign_1

Route3_Script_Sign_4:
# 168 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_1, MSGBOX_DEFAULT
	goto Route3_Script_Sign_1

Route3_Script_Sign_5:
# 170 "data/maps/Route3/scripts.pory"
	msgbox Route3_Script_Sign_Text_2, MSGBOX_DEFAULT
	goto Route3_Script_Sign_1


Route3_Script_RiverDeltaTransition::
# 183 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 2
# 184 "data/maps/Route3/scripts.pory"
	special ShowMapNamePopup
	return


Route3_Script_CanelosCoveTransition::
# 190 "data/maps/Route3/scripts.pory"
	setvar VAR_TEMP_5, 1
# 191 "data/maps/Route3/scripts.pory"
	special ShowMapNamePopup
	return


Route3_Script_Scene_SilvanLeaf1::
# 195 "data/maps/Route3/scripts.pory"
	lock
# 196 "data/maps/Route3/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 2
# 197 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 198 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route3/scripts.pory"
	removeobject 15
# 201 "data/maps/Route3/scripts.pory"
	setobjectxyperm 15, 8, 6
# 202 "data/maps/Route3/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_LEFT
# 203 "data/maps/Route3/scripts.pory"
	addobject 15
# 204 "data/maps/Route3/scripts.pory"
	showobjectat 15, MAP_ROUTE3
# 206 "data/maps/Route3/scripts.pory"
	removeobject 16
# 207 "data/maps/Route3/scripts.pory"
	setobjectxyperm 16, 8, 7
# 208 "data/maps/Route3/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_FACE_LEFT
# 209 "data/maps/Route3/scripts.pory"
	addobject 16
# 210 "data/maps/Route3/scripts.pory"
	showobjectat 16, MAP_ROUTE3
# 212 "data/maps/Route3/scripts.pory"
	removeobject 17
# 213 "data/maps/Route3/scripts.pory"
	setobjectxyperm 17, 8, 8
# 214 "data/maps/Route3/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_LEFT
# 215 "data/maps/Route3/scripts.pory"
	addobject 17
# 216 "data/maps/Route3/scripts.pory"
	showobjectat 17, MAP_ROUTE3
# 218 "data/maps/Route3/scripts.pory"
	applymovement 15, Route3_Movement_SilvanLeaf1
# 219 "data/maps/Route3/scripts.pory"
	applymovement 16, Route3_Movement_SilvanLeaf1
# 220 "data/maps/Route3/scripts.pory"
	applymovement 17, Route3_Movement_SilvanLeaf1
# 221 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 223 "data/maps/Route3/scripts.pory"
	load_field_pic 33, 190, 98
# 224 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Scott1
# 225 "data/maps/Route3/scripts.pory"
	destroy_field_pic 33
# 227 "data/maps/Route3/scripts.pory"
	load_field_pic 4, 190, 98
# 228 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Leaf1
# 229 "data/maps/Route3/scripts.pory"
	destroy_field_pic 4
# 231 "data/maps/Route3/scripts.pory"
	load_field_pic 33, 190, 98
# 232 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_Scott2
# 233 "data/maps/Route3/scripts.pory"
	destroy_field_pic 33
# 235 "data/maps/Route3/scripts.pory"
	closemessage
# 236 "data/maps/Route3/scripts.pory"
	applymovement 15, Route3_Movement_SilvanLeaf2
# 237 "data/maps/Route3/scripts.pory"
	applymovement 16, Route3_Movement_SilvanLeaf2
# 238 "data/maps/Route3/scripts.pory"
	applymovement 17, Route3_Movement_SilvanLeaf2
# 239 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route3/scripts.pory"
	hideobjectat 15, MAP_ROUTE3
# 242 "data/maps/Route3/scripts.pory"
	hideobjectat 16, MAP_ROUTE3
# 243 "data/maps/Route3/scripts.pory"
	hideobjectat 17, MAP_ROUTE3
# 244 "data/maps/Route3/scripts.pory"
	removeobject 15
# 245 "data/maps/Route3/scripts.pory"
	removeobject 16
# 246 "data/maps/Route3/scripts.pory"
	removeobject 17
# 247 "data/maps/Route3/scripts.pory"
	setobjectxyperm 15, 0, 0
# 248 "data/maps/Route3/scripts.pory"
	setobjectxyperm 16, 0, 0
# 249 "data/maps/Route3/scripts.pory"
	setobjectxyperm 17, 0, 0
# 250 "data/maps/Route3/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_INVISIBLE
# 251 "data/maps/Route3/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_INVISIBLE
# 252 "data/maps/Route3/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_INVISIBLE
# 254 "data/maps/Route3/scripts.pory"
	setflag FLAG_SILVAN_FERRY_ISWEST
# 256 "data/maps/Route3/scripts.pory"
	release
	end


# 260 "data/maps/Route3/scripts.pory"
Route3_Movement_SilvanLeaf1:
# 261 "data/maps/Route3/scripts.pory"
	walk_left
# 261 "data/maps/Route3/scripts.pory"
	walk_left
# 261 "data/maps/Route3/scripts.pory"
	walk_left
# 261 "data/maps/Route3/scripts.pory"
	walk_left
# 261 "data/maps/Route3/scripts.pory"
	walk_left
# 261 "data/maps/Route3/scripts.pory"
	walk_left
# 261 "data/maps/Route3/scripts.pory"
	walk_left
	step_end

# 264 "data/maps/Route3/scripts.pory"
Route3_Movement_SilvanLeaf2:
# 265 "data/maps/Route3/scripts.pory"
	walk_right
# 265 "data/maps/Route3/scripts.pory"
	walk_right
# 265 "data/maps/Route3/scripts.pory"
	walk_right
# 265 "data/maps/Route3/scripts.pory"
	walk_right
# 265 "data/maps/Route3/scripts.pory"
	walk_right
# 265 "data/maps/Route3/scripts.pory"
	walk_right
# 265 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

Route3_Script_Sign_Text_0:
# 166 "data/maps/Route3/scripts.pory"
	.string "0$"

Route3_Script_Sign_Text_1:
# 168 "data/maps/Route3/scripts.pory"
	.string "1$"

Route3_Script_Sign_Text_2:
# 170 "data/maps/Route3/scripts.pory"
	.string "2$"

Route3_Script_Sign_Text_3:
# 172 "data/maps/Route3/scripts.pory"
	.string "OOB$"

Route3_Text_RossIntro::
# 269 "data/maps/Route3/scripts.pory"
	.string "I'm learning how to swim! Here check\n"
	.string "this out!$"

Route3_Text_RossLost::
# 273 "data/maps/Route3/scripts.pory"
	.string "Help mom I'm gonna drown!$"

Route3_Text_RossPost::
# 277 "data/maps/Route3/scripts.pory"
	.string "Wow you showed me! Looks like I need to\n"
	.string "practice dog paddling.$"

Route3_Text_IzzyIntro::
# 282 "data/maps/Route3/scripts.pory"
	.string "Eww gross get away from me you weirdo!$"

Route3_Text_IzzyLost::
# 286 "data/maps/Route3/scripts.pory"
	.string "Please help please help!$"

Route3_Text_IzzyPost::
# 290 "data/maps/Route3/scripts.pory"
	.string "I think you made me wet.$"

Route3_Text_RicardoIntro::
# 294 "data/maps/Route3/scripts.pory"
	.string "I brought my son here to play on the\n"
	.string "beach.$"

Route3_Text_RicardoLost::
# 298 "data/maps/Route3/scripts.pory"
	.string "You're making me look weak...$"

Route3_Text_RicardoPost::
# 302 "data/maps/Route3/scripts.pory"
	.string "Have you explored the cave carved in\n"
	.string "the rock down by the sea?$"

Route3_Text_PedroIntro::
# 306 "data/maps/Route3/scripts.pory"
	.string "Me and my dad are gonna kick your ass!$"

Route3_Text_PedroLost::
# 310 "data/maps/Route3/scripts.pory"
	.string "Dad how did we just loose?$"

Route3_Text_PedroPost::
# 314 "data/maps/Route3/scripts.pory"
	.string "Okay, you're good.$"

Route3_Text_MonicaIntro::
# 318 "data/maps/Route3/scripts.pory"
	.string "Hey! Stay away from my children.$"

Route3_Text_MonicaLost::
# 322 "data/maps/Route3/scripts.pory"
	.string "You know, I'm still available.$"

Route3_Text_MonicaPost::
# 326 "data/maps/Route3/scripts.pory"
	.string "Nice to see you!$"

Route3_Text_AmberIntro::
# 330 "data/maps/Route3/scripts.pory"
	.string "My mommy took me and Ross to the beach!$"

Route3_Text_AmberLost::
# 334 "data/maps/Route3/scripts.pory"
	.string "No, Mom!$"

Route3_Text_AmberPost::
# 338 "data/maps/Route3/scripts.pory"
	.string "You hurt my feelings, go awawy.$"

Route3_Text_DustinIntro::
# 342 "data/maps/Route3/scripts.pory"
	.string "Hey man do you ever want to race birds?$"

Route3_Text_DustinLost::
# 346 "data/maps/Route3/scripts.pory"
	.string "That's not correct.$"

Route3_Text_DustinPost::
# 350 "data/maps/Route3/scripts.pory"
	.string "Did you go thrugh the woods?$"

Route3_Text_JonIntro::
# 354 "data/maps/Route3/scripts.pory"
	.string "Today I thought I'd be a fisherman.$"

Route3_Text_JonLost::
# 358 "data/maps/Route3/scripts.pory"
	.string "I've lost my fish...$"

Route3_Text_JonPost::
# 362 "data/maps/Route3/scripts.pory"
	.string "Let's drink a few more beers!$"

Route3_Text_JoeIntro::
# 366 "data/maps/Route3/scripts.pory"
	.string "My friend Jon ain't great at outdoorsy\n"
	.string "stuff.$"

Route3_Text_JoeLost::
# 370 "data/maps/Route3/scripts.pory"
	.string "So much for that.$"

Route3_Text_JoePost::
# 374 "data/maps/Route3/scripts.pory"
	.string "Think I'll try a new bait.$"

Route3_Text_RyanIntro::
# 378 "data/maps/Route3/scripts.pory"
	.string "The Bugs!\n"
	.string "THE BUGS!!!$"

Route3_Text_RyanLost::
# 382 "data/maps/Route3/scripts.pory"
	.string "You helped me scratch the bugs.$"

Route3_Text_RyanPost::
# 386 "data/maps/Route3/scripts.pory"
	.string "Thank you a lot, these bugs are\n"
	.string "dangerous.$"

Route3_Text_MeganIntro::
# 390 "data/maps/Route3/scripts.pory"
	.string "Hey, didn't you use to make fun of me.$"

Route3_Text_MeganLost::
# 394 "data/maps/Route3/scripts.pory"
	.string "Looks like you're still laughing.$"

Route3_Text_MeganPost::
# 398 "data/maps/Route3/scripts.pory"
	.string "Hey haven't you heard anything about a\n"
	.string "new freeway the party was planning to\l"
	.string "build through here?$"

Route3_Text_DevonIntro::
# 402 "data/maps/Route3/scripts.pory"
	.string "You're not headed into the woods are\n"
	.string "you?$"

Route3_Text_DevonLost::
# 406 "data/maps/Route3/scripts.pory"
	.string "You're pretty tough.$"

Route3_Text_DevonPost::
# 410 "data/maps/Route3/scripts.pory"
	.string "You should be safe enough, but be\n"
	.string "careful that you do not get lost.$"

Route3_Text_OldMan::
# 414 "data/maps/Route3/scripts.pory"
	.string "Caverna Ilium was this cave's name\n"
	.string "before The Party changed it to Beach\l"
	.string "Cave.\p"
	.string "You should only go in if you're prepared.$"

Route3_Text_Leaf2::
# 418 "data/maps/Route3/scripts.pory"
	.string "Look out {PLAYER} it's {RIVAL}\n"
	.string "this is a trap!$"

Route3_Text_RivalIntro::
# 422 "data/maps/Route3/scripts.pory"
	.string "It's {PLAYER} is it? What a disgusting\n"
	.string "name though fitting for an animal like\l"
	.string "you. I spent six hours saving Humpty's\l"
	.string "life after the hospital turned me away\l"
	.string "but in the end I could not bring him\l"
	.string "back. You killed my only friend and now\l"
	.string "you're trapped the both of you like\l"
	.string "flies caught in my net.$"

Route3_Text_RivalLost::
# 426 "data/maps/Route3/scripts.pory"
	.string "These pathetic insects all let me down!!$"

Route3_Text_RivalPost::
# 430 "data/maps/Route3/scripts.pory"
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
# 434 "data/maps/Route3/scripts.pory"
	.string "Wow {PLAYER} I'm glad you're here all\n"
	.string "big and strong to protect me from\l"
	.string "creeps like that {RIVAL}. It's\l"
	.string "getting late and I want to see Mew!\l"
	.string "C'mon silly we need to find my dad!$"

Route3_Text_SaeclaraSign::
# 438 "data/maps/Route3/scripts.pory"
	.string "City Saeclara ->\n"
	.string "<- Silvan Woods\n"
	.string "<- Porta Pilo$"

Route3_Text_BridgeBlock::
# 442 "data/maps/Route3/scripts.pory"
	.string "Hey! Watch it! The bridge came down in\n"
	.string "the storm! We're working hard to fix it\l"
	.string "but for now you'll have to find another\l"
	.string "way across.$"

Route3_Text_Scott1::
# 450 "data/maps/Route3/scripts.pory"
	.string "Bad news! The old pontes, across Draco,\n"
	.string "were beaten down by that most mighty\l"
	.string "storm.$"

Route3_Text_Leaf1::
# 456 "data/maps/Route3/scripts.pory"
	.string "We won't give up our quest! There must\n"
	.string "be some expedient way across the river.$"

Route3_Text_Scott2::
# 462 "data/maps/Route3/scripts.pory"
	.string "We'll have to journey into glum Silva in\n"
	.string "hopes of finding some sure way across.\l"
	.string "Be careful {PLAYER}. In Silva many\l"
	.string "folk pushed out of town, criminals, and\l"
	.string "wild {PKMN} lurk in shadows and tall graas.\l"
	.string "Tread carefully, and carry a big stick!$"
