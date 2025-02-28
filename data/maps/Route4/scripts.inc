Route4_MapScripts::
# 11 "data/maps/Route4/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/Route4/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Route4
# 13 "data/maps/Route4/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/Route4/scripts.pory"
	case 1, Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/Route4/scripts.pory"
	case 2, Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 18 "data/maps/Route4/scripts.pory"
	case 3, Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/Route4/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data/maps/Route4/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data/maps/Route4/scripts.pory"
	setvar VAR_TEMP_5, 3
	return


Route4_Script_Transition_ViaLitoralis::
# 26 "data/maps/Route4/scripts.pory"
	setvar VAR_TEMP_5, 2
# 27 "data/maps/Route4/scripts.pory"
	special TransitionMapMusic
# 28 "data/maps/Route4/scripts.pory"
	special ShowMapNamePopup
	return


Route4_Script_Transition_ViaFidelium::
# 32 "data/maps/Route4/scripts.pory"
	setvar VAR_TEMP_5, 1
# 33 "data/maps/Route4/scripts.pory"
	special TransitionMapMusic
# 34 "data/maps/Route4/scripts.pory"
	special ShowMapNamePopup
	return


Route4_Script_Transition_SinusPacificus::
# 38 "data/maps/Route4/scripts.pory"
	setvar VAR_TEMP_5, 3
# 39 "data/maps/Route4/scripts.pory"
	special TransitionMapMusic
# 40 "data/maps/Route4/scripts.pory"
	special ShowMapNamePopup
	return


Route4_EventScript_Delia::
# 44 "data/maps/Route4/scripts.pory"
	trainerbattle_double TRAINER_DELIA_AND_BONNIE, Route4_Text_DeliaIntro, Route4_Text_DeliaLost, Route124_Text_LilaNotEnoughMons
# 45 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_DeliaPost
# 46 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Bonnie::
# 51 "data/maps/Route4/scripts.pory"
	trainerbattle_double TRAINER_DELIA_AND_BONNIE, Route4_Text_BonnieIntro, Route4_Text_BonnieLost, Route124_Text_LilaNotEnoughMons
# 52 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_BonniePost
# 53 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Charlie::
# 58 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_CHARLIE, Route4_Text_CharlieIntro, Route4_Text_CharlieLost
# 59 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_CharliePost
# 60 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Andy::
# 65 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ANDY, Route4_Text_AndyIntro, Route4_Text_AndyLost
# 66 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_AndyPost
# 67 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Roy::
# 72 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROY, Route4_Text_RoyIntro, Route4_Text_RoyLost
# 73 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_RoyPost
# 74 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Will::
# 79 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_WILL, Route4_Text_WillIntro, Route4_Text_WillLost
# 80 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_WillPost
# 81 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Walton::
# 86 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_WALTON, Route4_Text_WaltonIntro, Route4_Text_WaltonLost
# 87 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_WaltonPost
# 88 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Lewis::
# 93 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_LEWIS, Route4_Text_LewisIntro, Route4_Text_LewisLost
# 94 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_LewisPost
# 95 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Liz::
# 100 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_LIZ, Route4_Text_LizIntro, Route4_Text_LizLost
# 101 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_LizPost
# 102 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Lindsey::
# 107 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_LINDSEY, Route4_Text_LindseyIntro, Route4_Text_LindseyLost
# 108 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_LindseyPost
# 109 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Lexy::
# 114 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_LEXY, Route4_Text_LexyIntro, Route4_Text_LexyLost
# 115 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_LexyPost
# 116 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Jeremy::
# 121 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_JEREMY, Route4_Text_JeremyIntro, Route4_Text_JeremyLost
# 122 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_JeremyPost
# 123 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Orion::
# 128 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ORION, Route4_Text_OrionIntro, Route4_Text_OrionLost
# 129 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_OrionPost
# 130 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Kipland::
# 135 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_KIPLAND, Route4_Text_KiplandIntro, Route4_Text_KiplandLost
# 136 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_KiplandPost
# 137 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Mandy::
# 142 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_MANDY, Route4_Text_MandyIntro, Route4_Text_MandyLost
# 143 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_MandyPost
# 144 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Hecuba::
# 149 "data/maps/Route4/scripts.pory"
	trainerbattle_double TRAINER_AIAS_AND_HECUBA, Route4_Text_HecubaIntro, Route4_Text_HecubaLost, Route124_Text_LilaNotEnoughMons
# 150 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_HecubaPost
# 151 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Aias::
# 156 "data/maps/Route4/scripts.pory"
	trainerbattle_double TRAINER_AIAS_AND_HECUBA, Route4_Text_AiasIntro, Route4_Text_AiasLost, Route124_Text_LilaNotEnoughMons
# 157 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_AiasPost
# 158 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Les::
# 163 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_LES, Route4_Text_LesIntro, Route4_Text_LesLost
# 164 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_LesPost
# 165 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Sanjay::
# 170 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_SANJAY, Route4_Text_SanjayIntro, Route4_Text_SanjayLost
# 171 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_SanjayPost
# 172 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Willie::
# 177 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_WILLIE, Route4_Text_WillieIntro, Route4_Text_WillieLost
# 178 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_WilliePost
# 179 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Harry::
# 184 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_HARRY, Route4_Text_HarryIntro, Route4_Text_HarryLost
# 185 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_HarryPost
# 186 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Teucer::
# 191 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_TEUCER, Route4_Text_TeucerIntro, Route4_Text_TeucerLost
# 192 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_TeucerPost
# 193 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Syra::
# 198 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_SYRA, Route4_Text_SyraIntro, Route4_Text_SyraLost
# 199 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_SyraPost
# 200 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Sky::
# 205 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_SKY, Route4_Text_SkyIntro, Route4_Text_SkyLost
# 206 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_SkyPost
# 207 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Rocky::
# 212 "data/maps/Route4/scripts.pory"
	checktrainerflag TRAINER_ROCKY
	goto_if 0, Route4_EventScript_Rocky_2
# 222 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_RockyPost
# 223 "data/maps/Route4/scripts.pory"
	closemessage
Route4_EventScript_Rocky_1:
# 225 "data/maps/Route4/scripts.pory"
	closemessage
	end

Route4_EventScript_Rocky_2:
# 213 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_RockyIntro
# 214 "data/maps/Route4/scripts.pory"
	closemessage
# 215 "data/maps/Route4/scripts.pory"
	trainerbattle_no_intro TRAINER_ROCKY, Route4_Text_RockyLost
# 216 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_RockyDefeat
# 217 "data/maps/Route4/scripts.pory"
	closemessage
# 218 "data/maps/Route4/scripts.pory"
	giveitem ITEM_BLACK_BELT
# 219 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_RockyPost
# 220 "data/maps/Route4/scripts.pory"
	closemessage
	goto Route4_EventScript_Rocky_1


Route4_EventScript_Nestor::
# 230 "data/maps/Route4/scripts.pory"
	lock
# 231 "data/maps/Route4/scripts.pory"
	faceplayer
# 232 "data/maps/Route4/scripts.pory"
	checkitem ITEM_DIPLOMA, 1
# 233 "data/maps/Route4/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route4_EventScript_Nestor_2
# 236 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Nestor_Text_1
Route4_EventScript_Nestor_1:
# 238 "data/maps/Route4/scripts.pory"
	closemessage
	return

Route4_EventScript_Nestor_2:
# 234 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Nestor_Text_0
	goto Route4_EventScript_Nestor_1


Route4_EventScript_Sandy::
# 277 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_SANDY, Route4_Text_SandyIntro, Route4_Text_SandyLost
# 278 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_SandyPost
# 279 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Mago::
# 284 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_MAGO, Route4_Text_MagoIntro, Route4_Text_MagoLost
# 285 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_MagoPost
# 286 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Dido::
# 291 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_DIDO, Route4_Text_DidoIntro, Route4_Text_DidoLost
# 292 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_DidoPost
# 293 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Betty::
# 298 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_BETTY, Route4_Text_BettyIntro, Route4_Text_BettyLost
# 299 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_BettyPost
# 300 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Donovan::
# 305 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_DONOVAN, Route4_Text_DonovanIntro, Route4_Text_DonovanLost
# 306 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_DonovanPost
# 307 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Helen::
# 312 "data/maps/Route4/scripts.pory"
	trainerbattle_double TRAINER_HELEN_AND_PARIS, Route4_Text_HelenIntro, Route4_Text_HelenLost, Route124_Text_LilaNotEnoughMons
# 313 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_HelenPost
# 314 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Paris::
# 319 "data/maps/Route4/scripts.pory"
	trainerbattle_double TRAINER_HELEN_AND_PARIS, Route4_Text_ParisIntro, Route4_Text_ParisLost, Route124_Text_LilaNotEnoughMons
# 320 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_ParisPost
# 321 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_FatMan::
# 326 "data/maps/Route4/scripts.pory"
	lock
# 327 "data/maps/Route4/scripts.pory"
	faceplayer
# 328 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_FatMan
# 329 "data/maps/Route4/scripts.pory"
	closemessage
# 330 "data/maps/Route4/scripts.pory"
	release
	end


Route4_EventScript_RocketTrigger::
# 335 "data/maps/Route4/scripts.pory"
	lock
# 336 "data/maps/Route4/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 337 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_Rocket1
# 339 "data/maps/Route4/scripts.pory"
	closemessage
# 340 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_Rocket2
# 341 "data/maps/Route4/scripts.pory"
	applymovement 14, Route4_Movement_RocketExit
# 342 "data/maps/Route4/scripts.pory"
	applymovement 15, Route4_Movement_RocketExit
# 343 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 344 "data/maps/Route4/scripts.pory"
	removeobject 14
# 345 "data/maps/Route4/scripts.pory"
	removeobject 15
# 346 "data/maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_HIDEROCKETS
# 347 "data/maps/Route4/scripts.pory"
	setvar VAR_ROUTE4_STATE, 1
# 348 "data/maps/Route4/scripts.pory"
	release
	end


# 352 "data/maps/Route4/scripts.pory"
Route4_Movement_RocketExit:
# 353 "data/maps/Route4/scripts.pory"
	walk_left
# 353 "data/maps/Route4/scripts.pory"
	walk_left
# 353 "data/maps/Route4/scripts.pory"
	walk_left
# 353 "data/maps/Route4/scripts.pory"
	walk_left
# 353 "data/maps/Route4/scripts.pory"
	walk_left
# 353 "data/maps/Route4/scripts.pory"
	walk_left
# 353 "data/maps/Route4/scripts.pory"
	walk_left
# 353 "data/maps/Route4/scripts.pory"
	walk_left
# 353 "data/maps/Route4/scripts.pory"
	walk_left
	step_end

Route4_EventScript_Nestor_Text_0:
# 234 "data/maps/Route4/scripts.pory"
	.string "ENGLISH$"

Route4_EventScript_Nestor_Text_1:
# 236 "data/maps/Route4/scripts.pory"
	.string "LATINA$"

Route4_Text_DeliaIntro::
# 356 "data/maps/Route4/scripts.pory"
	.string "We just got out of school. We're here to\n"
	.string "play!$"

Route4_Text_DeliaLost::
# 360 "data/maps/Route4/scripts.pory"
	.string "Why don't you pick on someone your own\n"
	.string "size?$"

Route4_Text_DeliaPost::
# 364 "data/maps/Route4/scripts.pory"
	.string "We actually don't go to school no more.$"

Route4_Text_BonnieIntro::
# 368 "data/maps/Route4/scripts.pory"
	.string "Watch out Delia! This guy wants to\n"
	.string "fight.$"

Route4_Text_BonnieLost::
# 372 "data/maps/Route4/scripts.pory"
	.string "You sure showed us that you can beat\n"
	.string "us up.$"

Route4_Text_BonniePost::
# 376 "data/maps/Route4/scripts.pory"
	.string "I hope we never see your face again.$"

Route4_Text_CharlieIntro::
# 380 "data/maps/Route4/scripts.pory"
	.string "One day I'll practice law and smash\n"
	.string "those rats.$"

Route4_Text_CharlieLost::
# 384 "data/maps/Route4/scripts.pory"
	.string "Ok, you win.$"

Route4_Text_CharliePost::
# 388 "data/maps/Route4/scripts.pory"
	.string "Please don't tell the waitress!$"

Route4_Text_AndyIntro::
# 392 "data/maps/Route4/scripts.pory"
	.string "It seems like everyone out here is rude.\n"
	.string "You can't even say hi to anyone without\l"
	.string "them trying to start up a fight.$"

Route4_Text_AndyLost::
# 397 "data/maps/Route4/scripts.pory"
	.string "This only proves my point...$"

Route4_Text_AndyPost::
# 401 "data/maps/Route4/scripts.pory"
	.string "Get out of here! You've messed me up\n"
	.string "enough!$"

Route4_Text_RoyIntro::
# 405 "data/maps/Route4/scripts.pory"
	.string "I excersize, shower, and I dress well.\n"
	.string "It's not my fault that I was born like\l"
	.string "this.$"

Route4_Text_RoyLost::
# 410 "data/maps/Route4/scripts.pory"
	.string "I would have won if I had better teeth.$"

Route4_Text_RoyPost::
# 414 "data/maps/Route4/scripts.pory"
	.string "Just go away! Stop looking at my teeth!$"

Route4_Text_WillIntro::
# 418 "data/maps/Route4/scripts.pory"
	.string "Can you imagine our reality?$"

Route4_Text_WillLost::
# 423 "data/maps/Route4/scripts.pory"
	.string "A rectangle twenty by twenty one.$"

Route4_Text_WillPost::
# 427 "data/maps/Route4/scripts.pory"
	.string "We've come to the conclusion: COWS EAT\n"
	.string "GRASS$"

Route4_Text_WaltonIntro::
# 431 "data/maps/Route4/scripts.pory"
	.string "Some people call me Chill!$"

Route4_Text_WaltonLost::
# 436 "data/maps/Route4/scripts.pory"
	.string "My name is Bill!$"

Route4_Text_WaltonPost::
# 440 "data/maps/Route4/scripts.pory"
	.string "Everyone's playing in The Steel Drumm\n"
	.string "Band$"

Route4_Text_LewisIntro::
# 444 "data/maps/Route4/scripts.pory"
	.string "I spend all of my time playing out here\n"
	.string "and helping my Pokemon grow stronger!$"

Route4_Text_LewisLost::
# 449 "data/maps/Route4/scripts.pory"
	.string "You're something else!$"

Route4_Text_LewisPost::
# 453 "data/maps/Route4/scripts.pory"
	.string "I'm not as strong as you. I won't give\n"
	.string "up, come back in a few years.$"

Route4_Text_LizIntro::
# 457 "data/maps/Route4/scripts.pory"
	.string "Would you mind if I stand next to you\n"
	.string "dude?$"

Route4_Text_LizLost::
# 462 "data/maps/Route4/scripts.pory"
	.string "Is it okay if I sit on you too?$"

Route4_Text_LizPost::
# 466 "data/maps/Route4/scripts.pory"
	.string "I think I left my jacket at your house.$"

Route4_Text_LindseyIntro::
# 470 "data/maps/Route4/scripts.pory"
	.string "I must warn you my Pokemon are fetch.$"

Route4_Text_LindseyLost::
# 475 "data/maps/Route4/scripts.pory"
	.string "This is the worst day I have ever had!$"

Route4_Text_LindseyPost::
# 479 "data/maps/Route4/scripts.pory"
	.string "It's not that I don't like Lexi, I do, but\n"
	.string "why does she have to borrow my\l"
	.string "clothes?$"

Route4_Text_LexyIntro::
# 483 "data/maps/Route4/scripts.pory"
	.string "I must warn you my Pokemon are fetch.$"

Route4_Text_LexyLost::
# 488 "data/maps/Route4/scripts.pory"
	.string "This is the worst day I have ever had!$"

Route4_Text_LexyPost::
# 492 "data/maps/Route4/scripts.pory"
	.string "It's not that I don't like Lexi, I do, but\n"
	.string "why does she have to borrow my\l"
	.string "clothes?$"

Route4_Text_JeremyIntro::
# 496 "data/maps/Route4/scripts.pory"
	.string "I've been at study now for many nights.\n"
	.string "I've mastered painting and dentistry\l"
	.string "too.$"

Route4_Text_JeremyLost::
# 501 "data/maps/Route4/scripts.pory"
	.string "I feel like I'm a real nobody man!$"

Route4_Text_JeremyPost::
# 505 "data/maps/Route4/scripts.pory"
	.string "I made all of my nowhere plans for\n"
	.string "nobody.$"

Route4_Text_OrionIntro::
# 509 "data/maps/Route4/scripts.pory"
	.string "I like to stay hidden, unseen, and\n"
	.string "watch.$"

Route4_Text_OrionLost::
# 514 "data/maps/Route4/scripts.pory"
	.string "This is exactly why I try to hide.$"

Route4_Text_OrionPost::
# 518 "data/maps/Route4/scripts.pory"
	.string "Up here, I have too many eyes on me.$"

Route4_Text_KiplandIntro::
# 522 "data/maps/Route4/scripts.pory"
	.string "I'm training!$"

Route4_Text_KiplandLost::
# 527 "data/maps/Route4/scripts.pory"
	.string "One day I'll be a blackbelt!$"

Route4_Text_KiplandPost::
# 531 "data/maps/Route4/scripts.pory"
	.string "I totally have a hot girl friend dude!$"

Route4_Text_MandyIntro::
# 535 "data/maps/Route4/scripts.pory"
	.string "Out of my way! This lane's for bicycles.$"

Route4_Text_MandyLost::
# 540 "data/maps/Route4/scripts.pory"
	.string "I think my tire must have popped a flat.$"

Route4_Text_MandyPost::
# 544 "data/maps/Route4/scripts.pory"
	.string "I totally have a hot girl friend dude!$"

Route4_Text_HecubaIntro::
# 549 "data/maps/Route4/scripts.pory"
	.string "My great lord Aias will keep me from\n"
	.string "harm.$"

Route4_Text_HecubaLost::
# 554 "data/maps/Route4/scripts.pory"
	.string "Apollo has forgotten me again!$"

Route4_Text_HecubaPost::
# 558 "data/maps/Route4/scripts.pory"
	.string "My husband recently has been this\n"
	.string "way...I worry often that he's lost his\l"
	.string "mind.$"

Route4_Text_AiasIntro::
# 562 "data/maps/Route4/scripts.pory"
	.string "I rush to arms once more against this\n"
	.string "youth! No man will keep me from my\l"
	.string "victory!$"

Route4_Text_AiasLost::
# 567 "data/maps/Route4/scripts.pory"
	.string "My cursed enemy has brought me shame.$"

Route4_Text_AiasPost::
# 571 "data/maps/Route4/scripts.pory"
	.string "Defeated now I sit and await death.$"

Route4_Text_LesIntro::
# 575 "data/maps/Route4/scripts.pory"
	.string "When I was younger I had but one dream:\n"
	.string "To wield a rod, to be a fisherman.$"

Route4_Text_LesLost::
# 580 "data/maps/Route4/scripts.pory"
	.string "I lied to you, there was another dream.$"

Route4_Text_LesPost::
# 584 "data/maps/Route4/scripts.pory"
	.string "Developing pork chop flavored soda\n"
	.string "would be a better use of my time here.$"

Route4_Text_SanjayIntro::
# 588 "data/maps/Route4/scripts.pory"
	.string "The fighting men up there terrfy me!$"

Route4_Text_SanjayLost::
# 592 "data/maps/Route4/scripts.pory"
	.string "You are viscious, just like those\n"
	.string "fighting men!$"

Route4_Text_SanjayPost::
# 596 "data/maps/Route4/scripts.pory"
	.string "Be careful if you try to climb the hill,\n"
	.string "those fighting men are not to be fooled\l"
	.string "with.$"

Route4_Text_WillieIntro::
# 600 "data/maps/Route4/scripts.pory"
	.string "Nothing compares to those sweet purple\n"
	.string "pills!$"

Route4_Text_WillieLost::
# 604 "data/maps/Route4/scripts.pory"
	.string "Just so you know my left eye's made of\n"
	.string "glass.$"

Route4_Text_WilliePost::
# 608 "data/maps/Route4/scripts.pory"
	.string "Let me know when you want to share my\n"
	.string "girl.$"

Route4_Text_HarryIntro::
# 612 "data/maps/Route4/scripts.pory"
	.string "They said I had this scar when I was\n"
	.string "born!$"

Route4_Text_HarryLost::
# 616 "data/maps/Route4/scripts.pory"
	.string "This isn't fair! I was the chosen one!$"

Route4_Text_HarryPost::
# 620 "data/maps/Route4/scripts.pory"
	.string "I've walked further than you around\n"
	.string "this world and seen many things you\l"
	.string "would not believe. I've seen centaurs,\l"
	.string "giants, and dragons too.$"

Route4_Text_TeucerIntro::
# 624 "data/maps/Route4/scripts.pory"
	.string "I lost my dad and washed across the\n"
	.string "sea.$"

Route4_Text_TeucerLost::
# 628 "data/maps/Route4/scripts.pory"
	.string "I'm going under!$"

Route4_Text_TeucerPost::
# 632 "data/maps/Route4/scripts.pory"
	.string "Have you seen my dad?$"

Route4_Text_SyraIntro::
# 636 "data/maps/Route4/scripts.pory"
	.string "Excuse me, do you think my nose is big?$"

Route4_Text_SyraLost::
# 640 "data/maps/Route4/scripts.pory"
	.string "You wouldn't be laughing if I were rich.$"

Route4_Text_SyraPost::
# 644 "data/maps/Route4/scripts.pory"
	.string "My nose is way too big and ugly!$"

Route4_Text_SkyIntro::
# 648 "data/maps/Route4/scripts.pory"
	.string "Like I've been spending all my time with\n"
	.string "birds and it got me like thinking...are\l"
	.string "they real?$"

Route4_Text_SkyLost::
# 652 "data/maps/Route4/scripts.pory"
	.string "I know one thing for certain, that loss\n"
	.string "was real.$"

Route4_Text_SkyPost::
# 656 "data/maps/Route4/scripts.pory"
	.string "I don't think Earth is flat or anything,\n"
	.string "but maybe there's an Earth within The\l"
	.string "Earth.$"

Route4_Text_RockyIntro::
# 660 "data/maps/Route4/scripts.pory"
	.string "I've learned that in this life you have\n"
	.string "to fight to win glory as well as win the\l"
	.string "bread. No western man has bested me\l"
	.string "thus far. Prepare to be tested, look to\l"
	.string "your strength.$"

Route4_Text_RockyLost::
# 664 "data/maps/Route4/scripts.pory"
	.string "Congratulations {PLAYER} our new\n"
	.string "master.$"

Route4_Text_RockyDefeat::
# 668 "data/maps/Route4/scripts.pory"
	.string "I must accept defeat. I kneel to you\n"
	.string "and as our new leader you must accept\l"
	.string "this black belt and command over our\l"
	.string "gang.$"

Route4_Text_RockyPost::
# 672 "data/maps/Route4/scripts.pory"
	.string "Be safe and wear your new black belt\n"
	.string "with pride$"

Route4_Text_TysonIntro::
# 676 "data/maps/Route4/scripts.pory"
	.string "I'll fuck you up! I'll bite your ear off,\n"
	.string "bitch!$"

Route4_Text_TysonLost::
# 680 "data/maps/Route4/scripts.pory"
	.string "Hey! Take it easy man!$"

Route4_Text_TysonPost::
# 684 "data/maps/Route4/scripts.pory"
	.string "Wow! What a fight! Before you face our\n"
	.string "master here be warned. He weilds power\l"
	.string "that far exceeds my own. You should not\l"
	.string "face him unprepared to lose.$"

Route4_Text_StuIntro::
# 688 "data/maps/Route4/scripts.pory"
	.string "I attend fighting class three times a\n"
	.string "week.$"

Route4_Text_StuLost::
# 692 "data/maps/Route4/scripts.pory"
	.string "Oh yeah? Can you break a wood board in\n"
	.string "half?$"

Route4_Text_StuPost::
# 696 "data/maps/Route4/scripts.pory"
	.string "You only won because you broke the\n"
	.string "rules, our master will not be bothered\l"
	.string "by you.$"

Route4_Text_AliIntro::
# 700 "data/maps/Route4/scripts.pory"
	.string "I do not want to fight. This is my job.$"

Route4_Text_AliLost::
# 704 "data/maps/Route4/scripts.pory"
	.string "You defeated me, with tenacity.$"

Route4_Text_AliPost::
# 708 "data/maps/Route4/scripts.pory"
	.string "Take caution with you if you venture\n"
	.string "on, I am nothing compared with our\l"
	.string "master.$"

Route4_Text_PatroklosIntro::
# 712 "data/maps/Route4/scripts.pory"
	.string "I've borrowed my tunic from my best\n"
	.string "friend.$"

Route4_Text_PatroklosLost::
# 716 "data/maps/Route4/scripts.pory"
	.string "It was fated that I would fall to you.$"

Route4_Text_PatroklosPost::
# 720 "data/maps/Route4/scripts.pory"
	.string "Be wary lest you fall to our master, he\n"
	.string "is the mightiest man that I know.$"

Route4_Text_EpeusIntro::
# 724 "data/maps/Route4/scripts.pory"
	.string "I cannot lose in hand to hand combat!$"

Route4_Text_EpeusLost::
# 728 "data/maps/Route4/scripts.pory"
	.string "I must sit down, go on, you win this\n"
	.string "round.$"

Route4_Text_EpeusPost::
# 732 "data/maps/Route4/scripts.pory"
	.string "I am an architecht of great revenge,\n"
	.string "beware I may attempt to beat you yet.$"

Route4_Text_SandyIntro::
# 736 "data/maps/Route4/scripts.pory"
	.string "I aint from round these parts, I'm from\n"
	.string "Texas!$"

Route4_Text_SandyLost::
# 740 "data/maps/Route4/scripts.pory"
	.string "I'm goin back to Texas any day.$"

Route4_Text_SandyPost::
# 744 "data/maps/Route4/scripts.pory"
	.string "I spent some time down there, under the\n"
	.string "sea, but now I reckon it's time to go\l"
	.string "home.$"

Route4_Text_MagoIntro::
# 748 "data/maps/Route4/scripts.pory"
	.string "She's not my sister!$"

Route4_Text_MagoLost::
# 752 "data/maps/Route4/scripts.pory"
	.string "We're more like cousins...$"

Route4_Text_MagoPost::
# 756 "data/maps/Route4/scripts.pory"
	.string "A city once existed on this beach, at\n"
	.string "least that's what my grandfather told\l"
	.string "me...$"

Route4_Text_DidoIntro::
# 760 "data/maps/Route4/scripts.pory"
	.string "A weary traveller must never be allowed\n"
	.string "to pass without recognition.$"

Route4_Text_DidoLost::
# 764 "data/maps/Route4/scripts.pory"
	.string "Another heartbreak$"

Route4_Text_DidoPost::
# 768 "data/maps/Route4/scripts.pory"
	.string "My lover left me so now I have no reason\n"
	.string "left to live...$"

Route4_Text_BettyIntro::
# 772 "data/maps/Route4/scripts.pory"
	.string "Well gee you're certainly a daring one.$"

Route4_Text_BettyLost::
# 776 "data/maps/Route4/scripts.pory"
	.string "I've got to ask you. What is your\n"
	.string "secret?$"

Route4_Text_BettyPost::
# 780 "data/maps/Route4/scripts.pory"
	.string "To be beaten by you was something else!$"

Route4_Text_DonovanIntro::
# 784 "data/maps/Route4/scripts.pory"
	.string "There are two rabbits running in that\n"
	.string "ditch.$"

Route4_Text_DonovanLost::
# 788 "data/maps/Route4/scripts.pory"
	.string "This was not what I saw from my window!$"

Route4_Text_DonovanPost::
# 792 "data/maps/Route4/scripts.pory"
	.string "I spent so long at home staring outside\n"
	.string "wondering what the real world was about\l"
	.string "but just so fast as I come out to play\l"
	.string "someone like you comes by...ruins my\l"
	.string "day.$"

Route4_Text_HelenIntro::
# 796 "data/maps/Route4/scripts.pory"
	.string "We ran away together. Isn't that the\n"
	.string "best story of romance ever told?$"

Route4_Text_HelenLost::
# 800 "data/maps/Route4/scripts.pory"
	.string "This can't be happening! No! Not to me!$"

Route4_Text_HelenPost::
# 804 "data/maps/Route4/scripts.pory"
	.string "I curse the day I took him to be mine.$"

Route4_Text_ParisIntro::
# 808 "data/maps/Route4/scripts.pory"
	.string "The love goddess brought us two here\n"
	.string "today.$"

Route4_Text_ParisLost::
# 812 "data/maps/Route4/scripts.pory"
	.string "It was nothing but fate that led to\n"
	.string "this.$"

Route4_Text_ParisPost::
# 816 "data/maps/Route4/scripts.pory"
	.string "I still feel I was never in the wrong.$"

Route4_Text_FatMan::
# 820 "data/maps/Route4/scripts.pory"
	.string "I can't stop eating! It's all I enjoy.$"

Route4_Text_Test::
# 836 "data/maps/Route4/scripts.pory"
	.string "Just a Test Message srry...$"

Route4_Text_Rocket1::
# 840 "data/maps/Route4/scripts.pory"
	.string "This is no good what will we tell the\n"
	.string "boss?$"

Route4_Text_Rocket2::
# 844 "data/maps/Route4/scripts.pory"
	.string "Don't worry about that, leave it to me.\n"
	.string "There's no sign of her out here\l"
	.string "anyways...$"
