Route4_MapScripts::
# 11 "data//maps/Route4/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data//maps/Route4/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Route4
# 13 "data//maps/Route4/scripts.pory"
	switch VAR_RESULT
# 14 "data//maps/Route4/scripts.pory"
	case 1, Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data//maps/Route4/scripts.pory"
	case 2, Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 18 "data//maps/Route4/scripts.pory"
	case 3, Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data//maps/Route4/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data//maps/Route4/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data//maps/Route4/scripts.pory"
	setvar VAR_TEMP_5, 3
	return


Route4_Script_Transition_ViaLitoralis::
# 26 "data//maps/Route4/scripts.pory"
	setvar VAR_TEMP_5, 2
# 27 "data//maps/Route4/scripts.pory"
	special ShowMapNamePopup
	return


Route4_Script_Transition_ViaFidelium::
# 31 "data//maps/Route4/scripts.pory"
	setvar VAR_TEMP_5, 1
# 32 "data//maps/Route4/scripts.pory"
	special ShowMapNamePopup
	return


Route4_Script_Transition_SinusPacificus::
# 36 "data//maps/Route4/scripts.pory"
	setvar VAR_TEMP_5, 3
# 37 "data//maps/Route4/scripts.pory"
	special ShowMapNamePopup
	return


Route4_EventScript_Delia::
# 41 "data//maps/Route4/scripts.pory"
	trainerbattle_double TRAINER_DELIA_AND_BONNIE, Route4_Text_DeliaIntro, Route4_Text_DeliaLost, Route124_Text_LilaNotEnoughMons
# 42 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_DeliaPost
# 43 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Bonnie::
# 48 "data//maps/Route4/scripts.pory"
	trainerbattle_double TRAINER_DELIA_AND_BONNIE, Route4_Text_BonnieIntro, Route4_Text_BonnieLost, Route124_Text_LilaNotEnoughMons
# 49 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_BonniePost
# 50 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Charlie::
# 55 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_CHARLIE, Route4_Text_CharlieIntro, Route4_Text_CharlieLost
# 56 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_CharliePost
# 57 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Andy::
# 62 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ANDY, Route4_Text_AndyIntro, Route4_Text_AndyLost
# 63 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_AndyPost
# 64 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Roy::
# 69 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROY, Route4_Text_RoyIntro, Route4_Text_RoyLost
# 70 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_RoyPost
# 71 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Will::
# 76 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_WILL, Route4_Text_WillIntro, Route4_Text_WillLost
# 77 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_WillPost
# 78 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Walton::
# 83 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_WALTON, Route4_Text_WaltonIntro, Route4_Text_WaltonLost
# 84 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_WaltonPost
# 85 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Lewis::
# 90 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_LEWIS, Route4_Text_LewisIntro, Route4_Text_LewisLost
# 91 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_LewisPost
# 92 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Liz::
# 97 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_LIZ, Route4_Text_LizIntro, Route4_Text_LizLost
# 98 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_LizPost
# 99 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Lindsey::
# 104 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_LINDSEY, Route4_Text_LindseyIntro, Route4_Text_LindseyLost
# 105 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_LindseyPost
# 106 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Lexy::
# 111 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_LEXY, Route4_Text_LexyIntro, Route4_Text_LexyLost
# 112 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_LexyPost
# 113 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Jeremy::
# 118 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_JEREMY, Route4_Text_JeremyIntro, Route4_Text_JeremyLost
# 119 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_JeremyPost
# 120 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Orion::
# 125 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ORION, Route4_Text_OrionIntro, Route4_Text_OrionLost
# 126 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_OrionPost
# 127 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Kipland::
# 132 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_KIPLAND, Route4_Text_KiplandIntro, Route4_Text_KiplandLost
# 133 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_KiplandPost
# 134 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Mandy::
# 139 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_MANDY, Route4_Text_MandyIntro, Route4_Text_MandyLost
# 140 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_MandyPost
# 141 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Hecuba::
# 146 "data//maps/Route4/scripts.pory"
	trainerbattle_double TRAINER_AIAS_AND_HECUBA, Route4_Text_HecubaIntro, Route4_Text_HecubaLost, Route124_Text_LilaNotEnoughMons
# 147 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_HecubaPost
# 148 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Aias::
# 153 "data//maps/Route4/scripts.pory"
	trainerbattle_double TRAINER_AIAS_AND_HECUBA, Route4_Text_AiasIntro, Route4_Text_AiasLost, Route124_Text_LilaNotEnoughMons
# 154 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_AiasPost
# 155 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Les::
# 160 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_LES, Route4_Text_LesIntro, Route4_Text_LesLost
# 161 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_LesPost
# 162 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Sanjay::
# 167 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_SANJAY, Route4_Text_SanjayIntro, Route4_Text_SanjayLost
# 168 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_SanjayPost
# 169 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Willie::
# 174 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_WILLIE, Route4_Text_WillieIntro, Route4_Text_WillieLost
# 175 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_WilliePost
# 176 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Harry::
# 181 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_HARRY, Route4_Text_HarryIntro, Route4_Text_HarryLost
# 182 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_HarryPost
# 183 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Teucer::
# 188 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_TEUCER, Route4_Text_TeucerIntro, Route4_Text_TeucerLost
# 189 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_TeucerPost
# 190 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Syra::
# 195 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_SYRA, Route4_Text_SyraIntro, Route4_Text_SyraLost
# 196 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_SyraPost
# 197 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Sky::
# 202 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_SKY, Route4_Text_SkyIntro, Route4_Text_SkyLost
# 203 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_SkyPost
# 204 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Rocky::
# 209 "data//maps/Route4/scripts.pory"
	checktrainerflag TRAINER_ROCKY
	goto_if 0, Route4_EventScript_Rocky_2
# 219 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_RockyPost
# 220 "data//maps/Route4/scripts.pory"
	closemessage
Route4_EventScript_Rocky_1:
# 222 "data//maps/Route4/scripts.pory"
	closemessage
	end

Route4_EventScript_Rocky_2:
# 210 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_RockyIntro
# 211 "data//maps/Route4/scripts.pory"
	closemessage
# 212 "data//maps/Route4/scripts.pory"
	trainerbattle_no_intro TRAINER_ROCKY, Route4_Text_RockyLost
# 213 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_RockyDefeat
# 214 "data//maps/Route4/scripts.pory"
	closemessage
# 215 "data//maps/Route4/scripts.pory"
	giveitem ITEM_BLACK_BELT
# 216 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_RockyPost
# 217 "data//maps/Route4/scripts.pory"
	closemessage
	goto Route4_EventScript_Rocky_1


Route4_EventScript_Nestor::
# 227 "data//maps/Route4/scripts.pory"
	lock
# 228 "data//maps/Route4/scripts.pory"
	faceplayer
# 229 "data//maps/Route4/scripts.pory"
	checkitem ITEM_DIPLOMA, 1
# 230 "data//maps/Route4/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route4_EventScript_Nestor_2
# 233 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Nestor_Text_1
Route4_EventScript_Nestor_1:
# 235 "data//maps/Route4/scripts.pory"
	closemessage
	return

Route4_EventScript_Nestor_2:
# 231 "data//maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Nestor_Text_0
	goto Route4_EventScript_Nestor_1


Route4_EventScript_Sandy::
# 274 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_SANDY, Route4_Text_SandyIntro, Route4_Text_SandyLost
# 275 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_SandyPost
# 276 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Mago::
# 281 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_MAGO, Route4_Text_MagoIntro, Route4_Text_MagoLost
# 282 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_MagoPost
# 283 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Dido::
# 288 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_DIDO, Route4_Text_DidoIntro, Route4_Text_DidoLost
# 289 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_DidoPost
# 290 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Betty::
# 295 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_BETTY, Route4_Text_BettyIntro, Route4_Text_BettyLost
# 296 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_BettyPost
# 297 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Donovan::
# 302 "data//maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_DONOVAN, Route4_Text_DonovanIntro, Route4_Text_DonovanLost
# 303 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_DonovanPost
# 304 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Helen::
# 309 "data//maps/Route4/scripts.pory"
	trainerbattle_double TRAINER_HELEN_AND_PARIS, Route4_Text_HelenIntro, Route4_Text_HelenLost, Route124_Text_LilaNotEnoughMons
# 310 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_HelenPost
# 311 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_Paris::
# 316 "data//maps/Route4/scripts.pory"
	trainerbattle_double TRAINER_HELEN_AND_PARIS, Route4_Text_ParisIntro, Route4_Text_ParisLost, Route124_Text_LilaNotEnoughMons
# 317 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_ParisPost
# 318 "data//maps/Route4/scripts.pory"
	closemessage
	end


Route4_EventScript_FatMan::
# 323 "data//maps/Route4/scripts.pory"
	lock
# 324 "data//maps/Route4/scripts.pory"
	faceplayer
# 325 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_FatMan
# 326 "data//maps/Route4/scripts.pory"
	closemessage
# 327 "data//maps/Route4/scripts.pory"
	release
	end


Route4_EventScript_RocketTrigger::
# 332 "data//maps/Route4/scripts.pory"
	lock
# 333 "data//maps/Route4/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 334 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 335 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_Rocket1
# 336 "data//maps/Route4/scripts.pory"
	closemessage
# 337 "data//maps/Route4/scripts.pory"
	msgbox Route4_Text_Rocket2
# 338 "data//maps/Route4/scripts.pory"
	applymovement 14, Route4_Movement_RocketExit
# 339 "data//maps/Route4/scripts.pory"
	applymovement 15, Route4_Movement_RocketExit
# 340 "data//maps/Route4/scripts.pory"
	waitmovement 0
# 341 "data//maps/Route4/scripts.pory"
	removeobject 14
# 342 "data//maps/Route4/scripts.pory"
	removeobject 15
# 343 "data//maps/Route4/scripts.pory"
	setflag FLAG_ROUTE4_HIDEROCKETS
# 344 "data//maps/Route4/scripts.pory"
	setvar VAR_ROUTE4_STATE, 1
# 345 "data//maps/Route4/scripts.pory"
	release
	end


# 349 "data//maps/Route4/scripts.pory"
Route4_Movement_RocketExit:
# 350 "data//maps/Route4/scripts.pory"
	walk_left
# 350 "data//maps/Route4/scripts.pory"
	walk_left
# 350 "data//maps/Route4/scripts.pory"
	walk_left
# 350 "data//maps/Route4/scripts.pory"
	walk_left
# 350 "data//maps/Route4/scripts.pory"
	walk_left
# 350 "data//maps/Route4/scripts.pory"
	walk_left
# 350 "data//maps/Route4/scripts.pory"
	walk_left
# 350 "data//maps/Route4/scripts.pory"
	walk_left
# 350 "data//maps/Route4/scripts.pory"
	walk_left
	step_end

Route4_EventScript_Nestor_Text_0:
# 231 "data//maps/Route4/scripts.pory"
	.string "ENGLISH$"

Route4_EventScript_Nestor_Text_1:
# 233 "data//maps/Route4/scripts.pory"
	.string "LATINA$"

Route4_Text_DeliaIntro::
# 353 "data//maps/Route4/scripts.pory"
	.string "We just got out of school. We're here to\n"
	.string "play!$"

Route4_Text_DeliaLost::
# 357 "data//maps/Route4/scripts.pory"
	.string "Why don't you pick on someone your own\n"
	.string "size?$"

Route4_Text_DeliaPost::
# 361 "data//maps/Route4/scripts.pory"
	.string "We actually don't go to school no more.$"

Route4_Text_BonnieIntro::
# 365 "data//maps/Route4/scripts.pory"
	.string "Watch out Delia! This guy wants to\n"
	.string "fight.$"

Route4_Text_BonnieLost::
# 369 "data//maps/Route4/scripts.pory"
	.string "You sure showed us that you can beat\n"
	.string "us up.$"

Route4_Text_BonniePost::
# 373 "data//maps/Route4/scripts.pory"
	.string "I hope we never see your face again.$"

Route4_Text_CharlieIntro::
# 377 "data//maps/Route4/scripts.pory"
	.string "One day I'll practice law and smash\n"
	.string "those rats.$"

Route4_Text_CharlieLost::
# 381 "data//maps/Route4/scripts.pory"
	.string "Ok, you win.$"

Route4_Text_CharliePost::
# 385 "data//maps/Route4/scripts.pory"
	.string "Please don't tell the waitress!$"

Route4_Text_AndyIntro::
# 389 "data//maps/Route4/scripts.pory"
	.string "It seems like everyone out here is rude.\n"
	.string "You can't even say hi to anyone without\l"
	.string "them trying to start up a fight.$"

Route4_Text_AndyLost::
# 394 "data//maps/Route4/scripts.pory"
	.string "This only proves my point...$"

Route4_Text_AndyPost::
# 398 "data//maps/Route4/scripts.pory"
	.string "Get out of here! You've messed me up\n"
	.string "enough!$"

Route4_Text_RoyIntro::
# 402 "data//maps/Route4/scripts.pory"
	.string "I excersize, shower, and I dress well.\n"
	.string "It's not my fault that I was born like\l"
	.string "this.$"

Route4_Text_RoyLost::
# 407 "data//maps/Route4/scripts.pory"
	.string "I would have won if I had better teeth.$"

Route4_Text_RoyPost::
# 411 "data//maps/Route4/scripts.pory"
	.string "Just go away! Stop looking at my teeth!$"

Route4_Text_WillIntro::
# 415 "data//maps/Route4/scripts.pory"
	.string "Can you imagine our reality?$"

Route4_Text_WillLost::
# 420 "data//maps/Route4/scripts.pory"
	.string "A rectangle twenty by twenty one.$"

Route4_Text_WillPost::
# 424 "data//maps/Route4/scripts.pory"
	.string "We've come to the conclusion: COWS EAT\n"
	.string "GRASS$"

Route4_Text_WaltonIntro::
# 428 "data//maps/Route4/scripts.pory"
	.string "Some people call me Chill!$"

Route4_Text_WaltonLost::
# 433 "data//maps/Route4/scripts.pory"
	.string "My name is Bill!$"

Route4_Text_WaltonPost::
# 437 "data//maps/Route4/scripts.pory"
	.string "Everyone's playing in The Steel Drumm\n"
	.string "Band$"

Route4_Text_LewisIntro::
# 441 "data//maps/Route4/scripts.pory"
	.string "I spend all of my time playing out here\n"
	.string "and helping my Pokemon grow stronger!$"

Route4_Text_LewisLost::
# 446 "data//maps/Route4/scripts.pory"
	.string "You're something else!$"

Route4_Text_LewisPost::
# 450 "data//maps/Route4/scripts.pory"
	.string "I'm not as strong as you. I won't give\n"
	.string "up, come back in a few years.$"

Route4_Text_LizIntro::
# 454 "data//maps/Route4/scripts.pory"
	.string "Would you mind if I stand next to you\n"
	.string "dude?$"

Route4_Text_LizLost::
# 459 "data//maps/Route4/scripts.pory"
	.string "Is it okay if I sit on you too?$"

Route4_Text_LizPost::
# 463 "data//maps/Route4/scripts.pory"
	.string "I think I left my jacket at your house.$"

Route4_Text_LindseyIntro::
# 467 "data//maps/Route4/scripts.pory"
	.string "I must warn you my Pokemon are fetch.$"

Route4_Text_LindseyLost::
# 472 "data//maps/Route4/scripts.pory"
	.string "This is the worst day I have ever had!$"

Route4_Text_LindseyPost::
# 476 "data//maps/Route4/scripts.pory"
	.string "It's not that I don't like Lexi, I do, but\n"
	.string "why does she have to borrow my\l"
	.string "clothes?$"

Route4_Text_LexyIntro::
# 480 "data//maps/Route4/scripts.pory"
	.string "I must warn you my Pokemon are fetch.$"

Route4_Text_LexyLost::
# 485 "data//maps/Route4/scripts.pory"
	.string "This is the worst day I have ever had!$"

Route4_Text_LexyPost::
# 489 "data//maps/Route4/scripts.pory"
	.string "It's not that I don't like Lexi, I do, but\n"
	.string "why does she have to borrow my\l"
	.string "clothes?$"

Route4_Text_JeremyIntro::
# 493 "data//maps/Route4/scripts.pory"
	.string "I've been at study now for many nights.\n"
	.string "I've mastered painting and dentistry\l"
	.string "too.$"

Route4_Text_JeremyLost::
# 498 "data//maps/Route4/scripts.pory"
	.string "I feel like I'm a real nobody man!$"

Route4_Text_JeremyPost::
# 502 "data//maps/Route4/scripts.pory"
	.string "I made all of my nowhere plans for\n"
	.string "nobody.$"

Route4_Text_OrionIntro::
# 506 "data//maps/Route4/scripts.pory"
	.string "I like to stay hidden, unseen, and\n"
	.string "watch.$"

Route4_Text_OrionLost::
# 511 "data//maps/Route4/scripts.pory"
	.string "This is exactly why I try to hide.$"

Route4_Text_OrionPost::
# 515 "data//maps/Route4/scripts.pory"
	.string "Up here, I have too many eyes on me.$"

Route4_Text_KiplandIntro::
# 519 "data//maps/Route4/scripts.pory"
	.string "I'm training!$"

Route4_Text_KiplandLost::
# 524 "data//maps/Route4/scripts.pory"
	.string "One day I'll be a blackbelt!$"

Route4_Text_KiplandPost::
# 528 "data//maps/Route4/scripts.pory"
	.string "I totally have a hot girl friend dude!$"

Route4_Text_MandyIntro::
# 532 "data//maps/Route4/scripts.pory"
	.string "Out of my way! This lane's for bicycles.$"

Route4_Text_MandyLost::
# 537 "data//maps/Route4/scripts.pory"
	.string "I think my tire must have popped a flat.$"

Route4_Text_MandyPost::
# 541 "data//maps/Route4/scripts.pory"
	.string "I totally have a hot girl friend dude!$"

Route4_Text_HecubaIntro::
# 546 "data//maps/Route4/scripts.pory"
	.string "My great lord Aias will keep me from\n"
	.string "harm.$"

Route4_Text_HecubaLost::
# 551 "data//maps/Route4/scripts.pory"
	.string "Apollo has forgotten me again!$"

Route4_Text_HecubaPost::
# 555 "data//maps/Route4/scripts.pory"
	.string "My husband recently has been this\n"
	.string "way...I worry often that he's lost his\l"
	.string "mind.$"

Route4_Text_AiasIntro::
# 559 "data//maps/Route4/scripts.pory"
	.string "I rush to arms once more against this\n"
	.string "youth! No man will keep me from my\l"
	.string "victory!$"

Route4_Text_AiasLost::
# 564 "data//maps/Route4/scripts.pory"
	.string "My cursed enemy has brought me shame.$"

Route4_Text_AiasPost::
# 568 "data//maps/Route4/scripts.pory"
	.string "Defeated now I sit and await death.$"

Route4_Text_LesIntro::
# 572 "data//maps/Route4/scripts.pory"
	.string "When I was younger I had but one dream:\n"
	.string "To wield a rod, to be a fisherman.$"

Route4_Text_LesLost::
# 577 "data//maps/Route4/scripts.pory"
	.string "I lied to you, there was another dream.$"

Route4_Text_LesPost::
# 581 "data//maps/Route4/scripts.pory"
	.string "Developing pork chop flavored soda\n"
	.string "would be a better use of my time here.$"

Route4_Text_SanjayIntro::
# 585 "data//maps/Route4/scripts.pory"
	.string "The fighting men up there terrfy me!$"

Route4_Text_SanjayLost::
# 589 "data//maps/Route4/scripts.pory"
	.string "You are viscious, just like those\n"
	.string "fighting men!$"

Route4_Text_SanjayPost::
# 593 "data//maps/Route4/scripts.pory"
	.string "Be careful if you try to climb the hill,\n"
	.string "those fighting men are not to be fooled\l"
	.string "with.$"

Route4_Text_WillieIntro::
# 597 "data//maps/Route4/scripts.pory"
	.string "Nothing compares to those sweet purple\n"
	.string "pills!$"

Route4_Text_WillieLost::
# 601 "data//maps/Route4/scripts.pory"
	.string "Just so you know my left eye's made of\n"
	.string "glass.$"

Route4_Text_WilliePost::
# 605 "data//maps/Route4/scripts.pory"
	.string "Let me know when you want to share my\n"
	.string "girl.$"

Route4_Text_HarryIntro::
# 609 "data//maps/Route4/scripts.pory"
	.string "They said I had this scar when I was\n"
	.string "born!$"

Route4_Text_HarryLost::
# 613 "data//maps/Route4/scripts.pory"
	.string "This isn't fair! I was the chosen one!$"

Route4_Text_HarryPost::
# 617 "data//maps/Route4/scripts.pory"
	.string "I've walked further than you around\n"
	.string "this world and seen many things you\l"
	.string "would not believe. I've seen centaurs,\l"
	.string "giants, and dragons too.$"

Route4_Text_TeucerIntro::
# 621 "data//maps/Route4/scripts.pory"
	.string "I lost my dad and washed across the\n"
	.string "sea.$"

Route4_Text_TeucerLost::
# 625 "data//maps/Route4/scripts.pory"
	.string "I'm going under!$"

Route4_Text_TeucerPost::
# 629 "data//maps/Route4/scripts.pory"
	.string "Have you seen my dad?$"

Route4_Text_SyraIntro::
# 633 "data//maps/Route4/scripts.pory"
	.string "Excuse me, do you think my nose is big?$"

Route4_Text_SyraLost::
# 637 "data//maps/Route4/scripts.pory"
	.string "You wouldn't be laughing if I were rich.$"

Route4_Text_SyraPost::
# 641 "data//maps/Route4/scripts.pory"
	.string "My nose is way too big and ugly!$"

Route4_Text_SkyIntro::
# 645 "data//maps/Route4/scripts.pory"
	.string "Like I've been spending all my time with\n"
	.string "birds and it got me like thinking...are\l"
	.string "they real?$"

Route4_Text_SkyLost::
# 649 "data//maps/Route4/scripts.pory"
	.string "I know one thing for certain, that loss\n"
	.string "was real.$"

Route4_Text_SkyPost::
# 653 "data//maps/Route4/scripts.pory"
	.string "I don't think Earth is flat or anything,\n"
	.string "but maybe there's an Earth within The\l"
	.string "Earth.$"

Route4_Text_RockyIntro::
# 657 "data//maps/Route4/scripts.pory"
	.string "I've learned that in this life you have\n"
	.string "to fight to win glory as well as win the\l"
	.string "bread. No western man has bested me\l"
	.string "thus far. Prepare to be tested, look to\l"
	.string "your strength.$"

Route4_Text_RockyLost::
# 661 "data//maps/Route4/scripts.pory"
	.string "Congratulations {PLAYER} our new\n"
	.string "master.$"

Route4_Text_RockyDefeat::
# 665 "data//maps/Route4/scripts.pory"
	.string "I must accept defeat. I kneel to you\n"
	.string "and as our new leader you must accept\l"
	.string "this black belt and command over our\l"
	.string "gang.$"

Route4_Text_RockyPost::
# 669 "data//maps/Route4/scripts.pory"
	.string "Be safe and wear your new black belt\n"
	.string "with pride$"

Route4_Text_TysonIntro::
# 673 "data//maps/Route4/scripts.pory"
	.string "I'll fuck you up! I'll bite your ear off,\n"
	.string "bitch!$"

Route4_Text_TysonLost::
# 677 "data//maps/Route4/scripts.pory"
	.string "Hey! Take it easy man!$"

Route4_Text_TysonPost::
# 681 "data//maps/Route4/scripts.pory"
	.string "Wow! What a fight! Before you face our\n"
	.string "master here be warned. He weilds power\l"
	.string "that far exceeds my own. You should not\l"
	.string "face him unprepared to lose.$"

Route4_Text_StuIntro::
# 685 "data//maps/Route4/scripts.pory"
	.string "I attend fighting class three times a\n"
	.string "week.$"

Route4_Text_StuLost::
# 689 "data//maps/Route4/scripts.pory"
	.string "Oh yeah? Can you break a wood board in\n"
	.string "half?$"

Route4_Text_StuPost::
# 693 "data//maps/Route4/scripts.pory"
	.string "You only won because you broke the\n"
	.string "rules, our master will not be bothered\l"
	.string "by you.$"

Route4_Text_AliIntro::
# 697 "data//maps/Route4/scripts.pory"
	.string "I do not want to fight. This is my job.$"

Route4_Text_AliLost::
# 701 "data//maps/Route4/scripts.pory"
	.string "You defeated me, with tenacity.$"

Route4_Text_AliPost::
# 705 "data//maps/Route4/scripts.pory"
	.string "Take caution with you if you venture\n"
	.string "on, I am nothing compared with our\l"
	.string "master.$"

Route4_Text_PatroklosIntro::
# 709 "data//maps/Route4/scripts.pory"
	.string "I've borrowed my tunic from my best\n"
	.string "friend.$"

Route4_Text_PatroklosLost::
# 713 "data//maps/Route4/scripts.pory"
	.string "It was fated that I would fall to you.$"

Route4_Text_PatroklosPost::
# 717 "data//maps/Route4/scripts.pory"
	.string "Be wary lest you fall to our master, he\n"
	.string "is the mightiest man that I know.$"

Route4_Text_EpeusIntro::
# 721 "data//maps/Route4/scripts.pory"
	.string "I cannot lose in hand to hand combat!$"

Route4_Text_EpeusLost::
# 725 "data//maps/Route4/scripts.pory"
	.string "I must sit down, go on, you win this\n"
	.string "round.$"

Route4_Text_EpeusPost::
# 729 "data//maps/Route4/scripts.pory"
	.string "I am an architecht of great revenge,\n"
	.string "beware I may attempt to beat you yet.$"

Route4_Text_SandyIntro::
# 733 "data//maps/Route4/scripts.pory"
	.string "I aint from round these parts, I'm from\n"
	.string "Texas!$"

Route4_Text_SandyLost::
# 737 "data//maps/Route4/scripts.pory"
	.string "I'm goin back to Texas any day.$"

Route4_Text_SandyPost::
# 741 "data//maps/Route4/scripts.pory"
	.string "I spent some time down there, under the\n"
	.string "sea, but now I reckon it's time to go\l"
	.string "home.$"

Route4_Text_MagoIntro::
# 745 "data//maps/Route4/scripts.pory"
	.string "She's not my sister!$"

Route4_Text_MagoLost::
# 749 "data//maps/Route4/scripts.pory"
	.string "We're more like cousins...$"

Route4_Text_MagoPost::
# 753 "data//maps/Route4/scripts.pory"
	.string "A city once existed on this beach, at\n"
	.string "least that's what my grandfather told\l"
	.string "me...$"

Route4_Text_DidoIntro::
# 757 "data//maps/Route4/scripts.pory"
	.string "A weary traveller must never be allowed\n"
	.string "to pass without recognition.$"

Route4_Text_DidoLost::
# 761 "data//maps/Route4/scripts.pory"
	.string "Another heartbreak$"

Route4_Text_DidoPost::
# 765 "data//maps/Route4/scripts.pory"
	.string "My lover left me so now I have no reason\n"
	.string "left to live...$"

Route4_Text_BettyIntro::
# 769 "data//maps/Route4/scripts.pory"
	.string "Well gee you're certainly a daring one.$"

Route4_Text_BettyLost::
# 773 "data//maps/Route4/scripts.pory"
	.string "I've got to ask you. What is your\n"
	.string "secret?$"

Route4_Text_BettyPost::
# 777 "data//maps/Route4/scripts.pory"
	.string "To be beaten by you was something else!$"

Route4_Text_DonovanIntro::
# 781 "data//maps/Route4/scripts.pory"
	.string "There are two rabbits running in that\n"
	.string "ditch.$"

Route4_Text_DonovanLost::
# 785 "data//maps/Route4/scripts.pory"
	.string "This was not what I saw from my window!$"

Route4_Text_DonovanPost::
# 789 "data//maps/Route4/scripts.pory"
	.string "I spent so long at home staring outside\n"
	.string "wondering what the real world was about\l"
	.string "but just so fast as I come out to play\l"
	.string "someone like you comes by...ruins my\l"
	.string "day.$"

Route4_Text_HelenIntro::
# 793 "data//maps/Route4/scripts.pory"
	.string "We ran away together. Isn't that the\n"
	.string "best story of romance ever told?$"

Route4_Text_HelenLost::
# 797 "data//maps/Route4/scripts.pory"
	.string "This can't be happening! No! Not to me!$"

Route4_Text_HelenPost::
# 801 "data//maps/Route4/scripts.pory"
	.string "I curse the day I took him to be mine.$"

Route4_Text_ParisIntro::
# 805 "data//maps/Route4/scripts.pory"
	.string "The love goddess brought us two here\n"
	.string "today.$"

Route4_Text_ParisLost::
# 809 "data//maps/Route4/scripts.pory"
	.string "It was nothing but fate that led to\n"
	.string "this.$"

Route4_Text_ParisPost::
# 813 "data//maps/Route4/scripts.pory"
	.string "I still feel I was never in the wrong.$"

Route4_Text_FatMan::
# 817 "data//maps/Route4/scripts.pory"
	.string "I can't stop eating! It's all I enjoy.$"

Route4_Text_Test::
# 833 "data//maps/Route4/scripts.pory"
	.string "Just a Test Message srry...$"

Route4_Text_Rocket1::
# 837 "data//maps/Route4/scripts.pory"
	.string "This is no good what will we tell the\n"
	.string "boss?$"

Route4_Text_Rocket2::
# 841 "data//maps/Route4/scripts.pory"
	.string "Don't worry about that, leave it to me.\n"
	.string "There's no sign of her out here\l"
	.string "anyways...$"
