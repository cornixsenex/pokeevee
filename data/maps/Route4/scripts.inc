Route4_MapScripts::
	.byte 0


Route4_EventScript_Delia::
	trainerbattle_double TRAINER_DELIA_AND_BONNIE, Route4_Text_DeliaIntro, Route4_Text_DeliaLost, Route124_Text_LilaNotEnoughMons
	msgbox Route4_Text_DeliaPost
	closemessage
	end


Route4_EventScript_Bonnie::
	trainerbattle_double TRAINER_DELIA_AND_BONNIE, Route4_Text_BonnieIntro, Route4_Text_BonnieLost, Route124_Text_LilaNotEnoughMons
	msgbox Route4_Text_BonniePost
	closemessage
	end


Route4_EventScript_Charlie::
	trainerbattle_single TRAINER_CHARLIE, Route4_Text_CharlieIntro, Route4_Text_CharlieLost
	msgbox Route4_Text_CharliePost
	closemessage
	end


Route4_EventScript_Andy::
	trainerbattle_single TRAINER_ANDY, Route4_Text_AndyIntro, Route4_Text_AndyLost
	msgbox Route4_Text_AndyPost
	closemessage
	end


Route4_EventScript_Roy::
	trainerbattle_single TRAINER_ROY, Route4_Text_RoyIntro, Route4_Text_RoyLost
	msgbox Route4_Text_RoyPost
	closemessage
	end


Route4_EventScript_Will::
	trainerbattle_single TRAINER_WILL, Route4_Text_WillIntro, Route4_Text_WillLost
	msgbox Route4_Text_WillPost
	closemessage
	end


Route4_EventScript_Walton::
	trainerbattle_single TRAINER_WALTON, Route4_Text_WaltonIntro, Route4_Text_WaltonLost
	msgbox Route4_Text_WaltonPost
	closemessage
	end


Route4_EventScript_Lewis::
	trainerbattle_single TRAINER_LEWIS, Route4_Text_LewisIntro, Route4_Text_LewisLost
	msgbox Route4_Text_LewisPost
	closemessage
	end


Route4_EventScript_Liz::
	trainerbattle_single TRAINER_LIZ, Route4_Text_LizIntro, Route4_Text_LizLost
	msgbox Route4_Text_LizPost
	closemessage
	end


Route4_EventScript_Lindsey::
	trainerbattle_single TRAINER_LINDSEY, Route4_Text_LindseyIntro, Route4_Text_LindseyLost
	msgbox Route4_Text_LindseyPost
	closemessage
	end


Route4_EventScript_Lexy::
	trainerbattle_single TRAINER_LEXY, Route4_Text_LexyIntro, Route4_Text_LexyLost
	msgbox Route4_Text_LexyPost
	closemessage
	end


Route4_EventScript_Jeremy::
	trainerbattle_single TRAINER_JEREMY, Route4_Text_JeremyIntro, Route4_Text_JeremyLost
	msgbox Route4_Text_JeremyPost
	closemessage
	end


Route4_EventScript_Orion::
	trainerbattle_single TRAINER_ORION, Route4_Text_OrionIntro, Route4_Text_OrionLost
	msgbox Route4_Text_OrionPost
	closemessage
	end


Route4_EventScript_Kipland::
	trainerbattle_single TRAINER_KIPLAND, Route4_Text_KiplandIntro, Route4_Text_KiplandLost
	msgbox Route4_Text_KiplandPost
	closemessage
	end


Route4_EventScript_Mandy::
	trainerbattle_single TRAINER_MANDY, Route4_Text_MandyIntro, Route4_Text_MandyLost
	msgbox Route4_Text_MandyPost
	closemessage
	end


Route4_EventScript_Hecuba::
	trainerbattle_double TRAINER_AIAS_AND_HECUBA, Route4_Text_HecubaIntro, Route4_Text_HecubaLost, Route124_Text_LilaNotEnoughMons
	msgbox Route4_Text_HecubaPost
	closemessage
	end


Route4_EventScript_Aias::
	trainerbattle_double TRAINER_AIAS_AND_HECUBA, Route4_Text_AiasIntro, Route4_Text_AiasLost, Route124_Text_LilaNotEnoughMons
	msgbox Route4_Text_AiasPost
	closemessage
	end


Route4_EventScript_Les::
	trainerbattle_single TRAINER_LES, Route4_Text_LesIntro, Route4_Text_LesLost
	msgbox Route4_Text_LesPost
	closemessage
	end


Route4_EventScript_Sanjay::
	trainerbattle_single TRAINER_SANJAY, Route4_Text_SanjayIntro, Route4_Text_SanjayLost
	msgbox Route4_Text_SanjayPost
	closemessage
	end


Route4_EventScript_Willie::
	trainerbattle_single TRAINER_WILLIE, Route4_Text_WillieIntro, Route4_Text_WillieLost
	msgbox Route4_Text_WilliePost
	closemessage
	end


Route4_EventScript_Harry::
	trainerbattle_single TRAINER_HARRY, Route4_Text_HarryIntro, Route4_Text_HarryLost
	msgbox Route4_Text_HarryPost
	closemessage
	end


Route4_EventScript_Teucer::
	trainerbattle_single TRAINER_TEUCER, Route4_Text_TeucerIntro, Route4_Text_TeucerLost
	msgbox Route4_Text_TeucerPost
	closemessage
	end


Route4_EventScript_Syra::
	trainerbattle_single TRAINER_SYRA, Route4_Text_SyraIntro, Route4_Text_SyraLost
	msgbox Route4_Text_SyraPost
	closemessage
	end


Route4_EventScript_Sky::
	trainerbattle_single TRAINER_SKY, Route4_Text_SkyIntro, Route4_Text_SkyLost
	msgbox Route4_Text_SkyPost
	closemessage
	end


Route4_EventScript_Rocky::
	checktrainerflag TRAINER_ROCKY
	goto_if 0, Route4_EventScript_Rocky_2
	msgbox Route4_Text_RockyPost
	closemessage
Route4_EventScript_Rocky_1:
	closemessage
	end

Route4_EventScript_Rocky_2:
	msgbox Route4_Text_RockyIntro
	closemessage
	trainerbattle_no_intro TRAINER_ROCKY, Route4_Text_RockyLost
	msgbox Route4_Text_RockyDefeat
	closemessage
	giveitem ITEM_BLACK_BELT
	msgbox Route4_Text_RockyPost
	closemessage
	goto Route4_EventScript_Rocky_1


Route4_EventScript_Tyson::
	trainerbattle_single TRAINER_TYSON, Route4_Text_TysonIntro, Route4_Text_TysonLost
	msgbox Route4_Text_TysonPost
	closemessage
	end


Route4_EventScript_Stu::
	trainerbattle_single TRAINER_STU, Route4_Text_StuIntro, Route4_Text_StuLost
	msgbox Route4_Text_StuPost
	closemessage
	end


Route4_EventScript_Ali::
	trainerbattle_single TRAINER_ALI, Route4_Text_AliIntro, Route4_Text_AliLost
	msgbox Route4_Text_AliPost
	closemessage
	end


Route4_EventScript_Patroklos::
	trainerbattle_single TRAINER_PATROKLOS, Route4_Text_PatroklosIntro, Route4_Text_PatroklosLost
	msgbox Route4_Text_PatroklosPost
	closemessage
	end


Route4_EventScript_Epeus::
	trainerbattle_single TRAINER_EPEUS, Route4_Text_EpeusIntro, Route4_Text_EpeusLost
	msgbox Route4_Text_EpeusPost
	closemessage
	end


Route4_EventScript_Sandy::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Pygmalion::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Dido::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Betty::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Donovan::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Helen::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Paris::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_FatMan::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_RocketTrigger::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route4_Text_Rocket1
	closemessage
	msgbox Route4_Text_Rocket2
	applymovement 14, Route4_Movement_RocketExit
	applymovement 15, Route4_Movement_RocketExit
	waitmovement 0
	removeobject 14
	removeobject 15
	setflag FLAG_ROUTE4_HIDEROCKETS
	setvar VAR_ROUTE4_STATE, 1
	release
	end


Route4_Movement_RocketExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route4_Text_DeliaIntro::
	.string "We just got out of school. We're here to\n"
	.string "play!$"

Route4_Text_DeliaLost::
	.string "Why don't you pick on someone your own\n"
	.string "size?$"

Route4_Text_DeliaPost::
	.string "We actually don't go to school no more.$"

Route4_Text_BonnieIntro::
	.string "Watch out Delia! This guy wants to\n"
	.string "fight.$"

Route4_Text_BonnieLost::
	.string "You sure showed us that you can beat\n"
	.string "us up.$"

Route4_Text_BonniePost::
	.string "I hope we never see your face again.$"

Route4_Text_CharlieIntro::
	.string "One day I'll practice law and smash\n"
	.string "those rats.$"

Route4_Text_CharlieLost::
	.string "Ok, you win.$"

Route4_Text_CharliePost::
	.string "Please don't tell the waitress!$"

Route4_Text_AndyIntro::
	.string "It seems like everyone out here is rude.\n"
	.string "You can't even say hi to anyone\l"
	.string "without them trying to start up a\l"
	.string "fight.$"

Route4_Text_AndyLost::
	.string "This only proves my point...$"

Route4_Text_AndyPost::
	.string "Get out of here! You've messed me up\n"
	.string "enough!$"

Route4_Text_RoyIntro::
	.string "I excersize, shower, and I dress well.\n"
	.string "It's not my fault that I was born like\l"
	.string "this.$"

Route4_Text_RoyLost::
	.string "I would have won if I had better teeth.$"

Route4_Text_RoyPost::
	.string "Just go away! Stop looking at my teeth!$"

Route4_Text_WillIntro::
	.string "Can you imagine our reality?$"

Route4_Text_WillLost::
	.string "A rectangle twenty by twenty one.$"

Route4_Text_WillPost::
	.string "We've come to the conclusion: COWS EAT\n"
	.string "GRASS$"

Route4_Text_WaltonIntro::
	.string "Some people call me Chill!$"

Route4_Text_WaltonLost::
	.string "My name is Bill!$"

Route4_Text_WaltonPost::
	.string "Everyone's playing in The Steel Drumm\n"
	.string "Band$"

Route4_Text_LewisIntro::
	.string "I spend all of my time playing out here\n"
	.string "and helping my Pokemon grow stronger!$"

Route4_Text_LewisLost::
	.string "You're something else!$"

Route4_Text_LewisPost::
	.string "I'm not as strong as you. I won't give\n"
	.string "up, come back in a few years.$"

Route4_Text_LizIntro::
	.string "Would you mind if I stand next to you\n"
	.string "dude?$"

Route4_Text_LizLost::
	.string "Is it okay if I sit on you too?$"

Route4_Text_LizPost::
	.string "I think I left my jacket at your house.$"

Route4_Text_LindseyIntro::
	.string "I must warn you my Pokemon are fetch.$"

Route4_Text_LindseyLost::
	.string "This is the worst day I have ever had!$"

Route4_Text_LindseyPost::
	.string "It's not that I don't like Lexi, I do, but\n"
	.string "why does she have to borrow my\l"
	.string "clothes?$"

Route4_Text_LexyIntro::
	.string "I must warn you my Pokemon are fetch.$"

Route4_Text_LexyLost::
	.string "This is the worst day I have ever had!$"

Route4_Text_LexyPost::
	.string "It's not that I don't like Lexi, I do, but\n"
	.string "why does she have to borrow my\l"
	.string "clothes?$"

Route4_Text_JeremyIntro::
	.string "I've been at study now for many nights.\n"
	.string "I've mastered painting and dentistry\l"
	.string "too.$"

Route4_Text_JeremyLost::
	.string "I feel like I'm a real nobody man!$"

Route4_Text_JeremyPost::
	.string "I made all of my nowhere plans for\n"
	.string "nobody.$"

Route4_Text_OrionIntro::
	.string "I like to stay hidden, unseen, and\n"
	.string "watch.$"

Route4_Text_OrionLost::
	.string "This is exactly why I try to hide.$"

Route4_Text_OrionPost::
	.string "Up here, I have too many eyes on me.$"

Route4_Text_KiplandIntro::
	.string "I'm training!$"

Route4_Text_KiplandLost::
	.string "One day I'll be a blackbelt!$"

Route4_Text_KiplandPost::
	.string "I totally have a hot girl friend dude!$"

Route4_Text_MandyIntro::
	.string "Out of my way! This lane's for bicycles.$"

Route4_Text_MandyLost::
	.string "I think my tire must have popped a flat.$"

Route4_Text_MandyPost::
	.string "I totally have a hot girl friend dude!$"

Route4_Text_HecubaIntro::
	.string "My great lord Aias will keep me from\n"
	.string "harm.$"

Route4_Text_HecubaLost::
	.string "Apollo has forgotten me again!$"

Route4_Text_HecubaPost::
	.string "My husband recently has been this\n"
	.string "way...I worry often that he's lost his\l"
	.string "mind.$"

Route4_Text_AiasIntro::
	.string "I rush to arms once more against this\n"
	.string "youth! No man will keep me from my\l"
	.string "victory!$"

Route4_Text_AiasLost::
	.string "My cursed enemy has brought me shame.$"

Route4_Text_AiasPost::
	.string "Defeated now I sit and await death.$"

Route4_Text_LesIntro::
	.string "When I was younger I had but one dream:\n"
	.string "To wield a rod, to be a fisherman.$"

Route4_Text_LesLost::
	.string "I lied to you, there was another dream.$"

Route4_Text_LesPost::
	.string "Developing pork chop flavored soda\n"
	.string "would be a better use of my time here.$"

Route4_Text_SanjayIntro::
	.string "The fighting men up there terrfy me!$"

Route4_Text_SanjayLost::
	.string "You are viscious, just like those\n"
	.string "fighting men!$"

Route4_Text_SanjayPost::
	.string "Be careful if you try to climb the hill,\n"
	.string "those fighting men are not to be\l"
	.string "fooled with.$"

Route4_Text_WillieIntro::
	.string "Nothing compares to those sweet purple\n"
	.string "pills!$"

Route4_Text_WillieLost::
	.string "Just so you know my left eye's made of\n"
	.string "glass.$"

Route4_Text_WilliePost::
	.string "Let me know when you want to share my\n"
	.string "girl.$"

Route4_Text_HarryIntro::
	.string "They said I had this scar when I was\n"
	.string "born!$"

Route4_Text_HarryLost::
	.string "This isn't fair! I was the chosen one!$"

Route4_Text_HarryPost::
	.string "I've walked further than you around\n"
	.string "this world and seen many things you\l"
	.string "would not believe. I've seen centaurs,\l"
	.string "giants, and dragons too.$"

Route4_Text_TeucerIntro::
	.string "I lost my dad and washed across the\n"
	.string "sea.$"

Route4_Text_TeucerLost::
	.string "I'm going under!$"

Route4_Text_TeucerPost::
	.string "Have you seen my dad?$"

Route4_Text_SyraIntro::
	.string "Excuse me, do you think my nose is big?$"

Route4_Text_SyraLost::
	.string "You wouldn't be laughing if I were rich.$"

Route4_Text_SyraPost::
	.string "My nose is way too big and ugly!$"

Route4_Text_SkyIntro::
	.string "Like I've been spending all my time with\n"
	.string "birds and it got me like thinking...are\l"
	.string "they real?$"

Route4_Text_SkyLost::
	.string "I know one thing for certain, that loss\n"
	.string "was real.$"

Route4_Text_SkyPost::
	.string "I don't think Earth is flat or anything,\n"
	.string "but maybe there's an Earth within The\l"
	.string "Earth.$"

Route4_Text_RockyIntro::
	.string "I've learned that in this life you have\n"
	.string "to fight to win glory as well as win the\l"
	.string "bread. No western man has bested me\l"
	.string "thus far. Prepare to be tested, look to\l"
	.string "your strength.$"

Route4_Text_RockyLost::
	.string "Congratulations {PLAYER} our new\n"
	.string "master.$"

Route4_Text_RockyDefeat::
	.string "I must accept defeat. I kneel to you\n"
	.string "and as our new leader you must accept\l"
	.string "this black belt and command over our\l"
	.string "gang.$"

Route4_Text_RockyPost::
	.string "Be safe and wear your new black belt\n"
	.string "with pride$"

Route4_Text_TysonIntro::
	.string "I'll fuck you up! I'll bite your ear off,\n"
	.string "bitch!$"

Route4_Text_TysonLost::
	.string "Hey! Take it easy man!$"

Route4_Text_TysonPost::
	.string "Wow! What a fight! Before you face our\n"
	.string "master here be warned. He weilds power\l"
	.string "that far exceeds my own. You should\l"
	.string "not face him unprepared to lose.$"

Route4_Text_StuIntro::
	.string "I attend fighting class three times a\n"
	.string "week.$"

Route4_Text_StuLost::
	.string "Oh yeah? Can you break a wood board in\n"
	.string "half?$"

Route4_Text_StuPost::
	.string "You only won because you broke the\n"
	.string "rules, our master will not be bothered\l"
	.string "by you.$"

Route4_Text_AliIntro::
	.string "I do not want to fight. This is my job.$"

Route4_Text_AliLost::
	.string "You defeated me, with tenacity.$"

Route4_Text_AliPost::
	.string "Take caution with you if you venture\n"
	.string "on, I am nothing compared with our\l"
	.string "master.$"

Route4_Text_PatroklosIntro::
	.string "I've borrowed my tunic from my best\n"
	.string "friend.$"

Route4_Text_PatroklosLost::
	.string "It was fated that I would fall to you.$"

Route4_Text_PatroklosPost::
	.string "Be wary lest you fall to our master, he\n"
	.string "is the mightiest man that I know.$"

Route4_Text_EpeusIntro::
	.string "I cannot lose in hand to hand combat!$"

Route4_Text_EpeusLost::
	.string "I must sit down, go on, you win this\n"
	.string "round.$"

Route4_Text_EpeusPost::
	.string "I am an architecht of great revenge,\n"
	.string "beware I may attempt to beat you yet.$"

Route4_Text_Test::
	.string "Just a Test Message srry$"

Route4_Text_Rocket1::
	.string "This is no good what will we tell the\n"
	.string "boss?$"

Route4_Text_Rocket2::
	.string "Don't worry about that, leave it to me.\n"
	.string "There's no sign of her out here\l"
	.string "anyways...$"
