SilvanWoods_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SilvanWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SilvanWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_ROUTE3_STATE, 0, SilvanWoods_OnWarp_ShowFight1
	map_script_2 VAR_ROUTE3_STATE, 1, SilvanWoods_OnWarp_ShowFight2
	.2byte 0


SilvanWoods_OnWarp_ShowFight1::
	addobject 35
	showobjectat 35, MAP_SILVAN_WOODS
	addobject 36
	showobjectat 36, MAP_SILVAN_WOODS
	addobject 37
	showobjectat 37, MAP_SILVAN_WOODS
	addobject 38
	showobjectat 38, MAP_SILVAN_WOODS
	end


SilvanWoods_OnWarp_ShowFight2::
	addobject 25
	showobjectat 25, MAP_SILVAN_WOODS
	addobject 26
	showobjectat 26, MAP_SILVAN_WOODS
	addobject 27
	showobjectat 27, MAP_SILVAN_WOODS
	addobject 28
	showobjectat 28, MAP_SILVAN_WOODS
	end


SilvanWoods_RivalTrigger1::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	addobject 34
	showobjectat 34, MAP_ROUTE3
	applymovement 34, SilvanWoods_Movement_RivalWalk
	waitmovement 0
	removeobject 34
	setvar VAR_ROUTE3_STATE, 2
	releaseall
	end


SilvanWoods_RivalTrigger2::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerRival
	addobject 34
	showobjectat 34, MAP_ROUTE3
	applymovement 34, SilvanWoods_Movement_RivalWalk
	waitmovement 0
	removeobject 34
	setvar VAR_ROUTE3_STATE, 2
	releaseall
	end


SilvanWoods_EventScript_Crystal::
	trainerbattle_single TRAINER_CRYSTAL, SilvanWoods_Text_CrystalIntro, SilvanWoods_Text_CrystalLost
	msgbox SilvanWoods_Text_CrystalPost
	closemessage
	end


SilvanWoods_EventScript_Noah::
	trainerbattle_single TRAINER_NOAH, SilvanWoods_Text_NoahIntro, SilvanWoods_Text_NoahLost
	msgbox SilvanWoods_Text_NoahPost
	closemessage
	end


SilvanWoods_EventScript_Fredrick::
	trainerbattle_single TRAINER_FREDRICK, SilvanWoods_Text_FredrickIntro, SilvanWoods_Text_FredrickLost
	msgbox SilvanWoods_Text_FredrickPost
	closemessage
	end


SilvanWoods_EventScript_Matt::
	trainerbattle_single TRAINER_MATT, SilvanWoods_Text_MattIntro, SilvanWoods_Text_MattLost
	msgbox SilvanWoods_Text_MattPost
	closemessage
	end


SilvanWoods_EventScript_Zander::
	trainerbattle_single TRAINER_ZANDER, SilvanWoods_Text_ZanderIntro, SilvanWoods_Text_MattLost
	msgbox SilvanWoods_Text_ZanderPost
	closemessage
	end


SilvanWoods_EventScript_Julia::
	trainerbattle_single TRAINER_JULIA, SilvanWoods_Text_JuliaIntro, SilvanWoods_Text_JuliaLost
	msgbox SilvanWoods_Text_JuliaPost
	closemessage
	end


SilvanWoods_EventScript_Rosa::
	trainerbattle_single TRAINER_ROSA, SilvanWoods_Text_RosaIntro, SilvanWoods_Text_RosaLost
	msgbox SilvanWoods_Text_RosaPost
	closemessage
	end


SilvanWoods_EventScript_Mary::
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MaryIntro, SilvanWoods_Text_MaryLost
	msgbox SilvanWoods_Text_MaryPost
	closemessage
	end


SilvanWoods_EventScript_Molly::
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MollyIntro, SilvanWoods_Text_MollyLost
	msgbox SilvanWoods_Text_MollyPost
	closemessage
	end


SilvanWoods_EventScript_Leah::
	trainerbattle_single TRAINER_LEAH, SilvanWoods_Text_LeahIntro, SilvanWoods_Text_LeahLost
	msgbox SilvanWoods_Text_LeahPost
	closemessage
	end


SilvanWoods_EventScript_Daisy::
	trainerbattle_single TRAINER_DAISY, SilvanWoods_Text_DaisyIntro, SilvanWoods_Text_DaisyLost
	msgbox SilvanWoods_Text_DaisyPost
	closemessage
	end


SilvanWoods_EventScript_Kelsey::
	trainerbattle_single TRAINER_KELSEY, SilvanWoods_Text_KelseyIntro, SilvanWoods_Text_KelseyLost
	msgbox SilvanWoods_Text_KelseyPost
	closemessage
	end


SilvanWoods_EventScript_Felix::
	trainerbattle_single TRAINER_FELIX, SilvanWoods_Text_FelixIntro, SilvanWoods_Text_FelixLost
	msgbox SilvanWoods_Text_FelixPost
	closemessage
	end


SilvanWoods_EventScript_Violet::
	trainerbattle_single TRAINER_VIOLET, SilvanWoods_Text_VioletIntro, SilvanWoods_Text_VioletLost
	msgbox SilvanWoods_Text_VioletPost
	closemessage
	end


SilvanWoods_EventScript_Ruby::
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_RubyIntro, SilvanWoods_Text_RubyLost
	msgbox SilvanWoods_Text_RubyPost
	closemessage
	end


SilvanWoods_EventScript_Jack::
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_JackIntro, SilvanWoods_Text_JackLost
	msgbox SilvanWoods_Text_JackPost
	closemessage
	end


SilvanWoods_EventScript_Lester::
	trainerbattle_single TRAINER_LESTER, SilvanWoods_Text_LesterIntro, SilvanWoods_Text_LesterLost
	msgbox SilvanWoods_Text_LesterPost
	closemessage
	end


SilvanWoods_EventScript_Neville::
	trainerbattle_single TRAINER_NEVILLE, SilvanWoods_Text_NevilleIntro, SilvanWoods_Text_JackLost
	msgbox SilvanWoods_Text_NevillePost
	closemessage
	end


SilvanWoods_Movement_PlayerRival:
	walk_left
	step_end

SilvanWoods_Movement_RivalWalk:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

SilvanWoods_Text_CrystalIntro::
	.string "What is the boiling point of semen?$"

SilvanWoods_Text_CrystalLost::
	.string "Your eyes are the same color as my shit!$"

SilvanWoods_Text_CrystalPost::
	.string "I lost my boyfriend somewhere in the\n"
	.string "woods.$"

SilvanWoods_Text_NoahIntro::
	.string "I don't do drugs, I'm just playing with\n"
	.string "bugs.$"

SilvanWoods_Text_NoahLost::
	.string "Are you on pot?$"

SilvanWoods_Text_NoahPost::
	.string "Mommy said 'Don't do drugs'$"

SilvanWoods_Text_FredrickIntro::
	.string "I'm teaching my boy how to hunt for\n"
	.string "bugs!$"

SilvanWoods_Text_FredrickLost::
	.string "You watching son?$"

SilvanWoods_Text_FredrickPost::
	.string "Be careful in the woods.$"

SilvanWoods_Text_MattIntro::
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_MattLost::
	.string "You win, you win!$"

SilvanWoods_Text_MattPost::
	.string "My bug was not stronger.$"

SilvanWoods_Text_ZanderIntro::
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_ZanderLost::
	.string "You win, you win!$"

SilvanWoods_Text_ZanderPost::
	.string "My bug was not stronger.$"

SilvanWoods_Text_JuliaIntro::
	.string "Haha I'm getting lit in the forest.$"

SilvanWoods_Text_JuliaLost::
	.string "You have no chill.$"

SilvanWoods_Text_JuliaPost::
	.string "Bro are you seeling weed?$"

SilvanWoods_Text_RosaIntro::
	.string "Let's see how you perform.$"

SilvanWoods_Text_RosaLost::
	.string "I can't keep up.$"

SilvanWoods_Text_RosaPost::
	.string "I'd like to fall in love beneath the\n"
	.string "trees.$"

SilvanWoods_Text_MaryIntro::
	.string "Hey watch it! This is where we like to\n"
	.string "play.$"

SilvanWoods_Text_MaryLost::
	.string "Oh nevermind$"

SilvanWoods_Text_MaryPost::
	.string "You're free to walk this way.$"

SilvanWoods_Text_MollyIntro::
	.string "Who let you out of bed looking like\n"
	.string "that?$"

SilvanWoods_Text_MollyLost::
	.string "I was no match.$"

SilvanWoods_Text_MollyPost::
	.string "I'm far too weak for you.$"

SilvanWoods_Text_LeahIntro::
	.string "I think you'll find I'm not like other\n"
	.string "girls.$"

SilvanWoods_Text_LeahLost::
	.string "Looks like I still have a lot left to\n"
	.string "learn.$"

SilvanWoods_Text_LeahPost::
	.string "I love it here and feel at complete\n"
	.string "peace whenever I can walk among these\l"
	.string "trees.$"

SilvanWoods_Text_DaisyIntro::
	.string "Men don't like me. They say I'm too\n"
	.string "forward.$"

SilvanWoods_Text_DaisyLost::
	.string "I can't believe I'm such a dumb lolcow!$"

SilvanWoods_Text_DaisyPost::
	.string "I hear men like it when you squish your\n"
	.string "face. Maybe I'll share a pic with\l"
	.string "Agatha.$"

SilvanWoods_Text_KelseyIntro::
	.string "I'm searching for a four leafed clover.$"

SilvanWoods_Text_KelseyLost::
	.string "Looks like I am in need of better luck.$"

SilvanWoods_Text_KelseyPost::
	.string "They say the four leaf clover is lucky.$"

SilvanWoods_Text_FelixIntro::
	.string "You will eat bugs and you will be happy.$"

SilvanWoods_Text_FelixLost::
	.string "Uhh dude now what will I have for\n"
	.string "dinner?$"

SilvanWoods_Text_FelixPost::
	.string "Crickets and worms are sources of\n"
	.string "protein.$"

SilvanWoods_Text_VioletIntro::
	.string "Each flower grows unique from all the\n"
	.string "rest.$"

SilvanWoods_Text_VioletLost::
	.string "No two roses are ever quite the same.$"

SilvanWoods_Text_VioletPost::
	.string "How many are the blooms that we call\n"
	.string "rose?$"

SilvanWoods_Text_RubyIntro::
	.string "I had suggested we go to the book\n"
	.string "depository but Jack insisted...$"

SilvanWoods_Text_RubyLost::
	.string "You can't say Silvan Woods has no\n"
	.string "welcome.$"

SilvanWoods_Text_RubyPost::
	.string "What do you mean? There was but one of\n"
	.string "us!$"

SilvanWoods_Text_JackIntro::
	.string "Are you aware of the Zapruder film?$"

SilvanWoods_Text_JackLost::
	.string "What's that? You say Mr. Oswald did it?$"

SilvanWoods_Text_JackPost::
	.string "Who was the man with the black\n"
	.string "umbrella?$"

SilvanWoods_Text_LesterIntro::
	.string "I had to take a rest after walking so\n"
	.string "far but there is nowhere great to sit.$"

SilvanWoods_Text_LesterLost::
	.string "Just goes to show the importance of\n"
	.string "health.$"

SilvanWoods_Text_LesterPost::
	.string "Oh man I'm not sure I can make it out...$"

SilvanWoods_Text_NevilleIntro::
	.string "No insect has ever broken my heart.$"

SilvanWoods_Text_NevilleLost::
	.string "My bugs! They let me down!$"

SilvanWoods_Text_NevillePost::
	.string "Dissapointing is the only thing I have\n"
	.string "to say.$"
