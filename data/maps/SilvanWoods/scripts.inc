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


SilvanWoods_EventScript_ScottTrigger::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 9, SilvanWoods_Movement_Scott1
	load_field_pic 5, 190, 98
	msgbox SilvanWoods_Text_ScottBlock
	waitmovement 0
	closemessage
	destroy_field_pic 5
	applymovement 9, SilvanWoods_Movement_Scott2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerStepBack
	waitmovement 0
	releaseall
	end


SilvanWoods_EventScript_ScottTriggerB::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 9, SilvanWoods_Movement_Scott1B
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	load_field_pic 5, 190, 98
	msgbox SilvanWoods_Text_ScottBlock
	waitmovement 0
	closemessage
	destroy_field_pic 5
	applymovement 9, SilvanWoods_Movement_Scott2B
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerStepBack
	waitmovement 0
	releaseall
	end


SilvanWoods_EventScript_Scott2Trigger::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerStepUp
	load_field_pic 4, 190, 98
	msgbox SilvanWoods_Text_Leaf1
	waitmovement 0
	destroy_field_pic 4
	load_field_pic 5, 190, 98
	msgbox SilvanWoods_Text_ScottPass
	destroy_field_pic 5
	load_field_pic 4, 190, 98
	msgbox SilvanWoods_Text_Leaf2
	closemessage
	destroy_field_pic 4
	applymovement 9, SilvanWoods_Movement_ScottExit
	applymovement 40, SilvanWoods_Movement_ScottExit
	waitmovement 0
	removeobject 9
	removeobject 40
	setflag FLAG_HIDE_SILVANWOODS_LEAF1
	setflag FLAG_HIDE_SILVANWOODS_SCOTT
	setvar VAR_ROUTE3_STATE, 5
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
	trainerbattle_single TRAINER_NEVILLE, SilvanWoods_Text_NevilleIntro, SilvanWoods_Text_NevilleLost
	msgbox SilvanWoods_Text_NevillePost
	closemessage
	end


SilvanWoods_EventScript_Wang::
	trainerbattle_single TRAINER_WANG, SilvanWoods_Text_WangIntro, SilvanWoods_Text_WangLost
	msgbox SilvanWoods_Text_WangPost
	closemessage
	end


SilvanWoods_EventScript_Sally::
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_SallyIntro, SilvanWoods_Text_SallyLost
	msgbox SilvanWoods_Text_SallyPost
	closemessage
	end


SilvanWoods_EventScript_Ed::
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_EdIntro, SilvanWoods_Text_EdLost
	msgbox SilvanWoods_Text_EdPost
	closemessage
	end


SilvanWoods_EventScript_Jay::
	trainerbattle_single TRAINER_JAY, SilvanWoods_Text_JayIntro, SilvanWoods_Text_JayLost
	msgbox SilvanWoods_Text_JayPost
	closemessage
	end


SilvanWoods_EventScript_Foster::
	trainerbattle_single TRAINER_FOSTER, SilvanWoods_Text_FosterIntro, SilvanWoods_Text_FosterLost
	msgbox SilvanWoods_Text_FosterPost
	closemessage
	end


SilvanWoods_EventScript_Douggie::
	trainerbattle_single TRAINER_DOUGGIE, SilvanWoods_Text_DouggieIntro, SilvanWoods_Text_FosterLost
	msgbox SilvanWoods_Text_DouggiePost
	closemessage
	end


SilvanWoods_EventScript_Smokey::
	trainerbattle_single TRAINER_DOUGGIE, SilvanWoods_Text_SmokeyIntro, SilvanWoods_Text_SmokeyLost
	msgbox SilvanWoods_Text_SmokeyPost
	closemessage
	end


SilvanWoods_EventScript_Stoney::
	trainerbattle_single TRAINER_DOUGGIE, SilvanWoods_Text_StoneyIntro, SilvanWoods_Text_StoneyLost
	msgbox SilvanWoods_Text_StoneyPost
	closemessage
	end


SilvanWoods_EventScript_Gary::
	trainerbattle_single TRAINER_GARY, SilvanWoods_Text_GaryIntro, SilvanWoods_Text_GaryLost
	msgbox SilvanWoods_Text_GaryPost
	setvar VAR_ROUTE3_STATE, 3
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

SilvanWoods_Movement_Scott1:
	walk_down
	walk_down
	step_end

SilvanWoods_Movement_Scott2:
	walk_up
	walk_up
	face_down
	step_end

SilvanWoods_Movement_PlayerStepBack:
	walk_down
	step_end

SilvanWoods_Movement_Scott1B:
	walk_down
	walk_down
	walk_down
	face_right
	step_end

SilvanWoods_Movement_Scott2B:
	walk_up
	walk_up
	walk_up
	face_down
	step_end

SilvanWoods_Movement_PlayerStepUp:
	walk_up
	walk_up
	step_end

SilvanWoods_Movement_ScottExit:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
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

SilvanWoods_Text_WangIntro::
	.string "Hey kid would you like to see my big\n"
	.string "worm?$"

SilvanWoods_Text_WangLost::
	.string "No need to cause a scene$"

SilvanWoods_Text_WangPost::
	.string "C'mon calm down. Besides it really was a\n"
	.string "monster worm!$"

SilvanWoods_Text_SallyIntro::
	.string "We walk out here as often as we can.$"

SilvanWoods_Text_SallyLost::
	.string "Video games are ruining the youth!$"

SilvanWoods_Text_SallyPost::
	.string "Back in my day we had no Pokemon and I\n"
	.string "don't like the way you kids trust them!$"

SilvanWoods_Text_EdIntro::
	.string "When I was young we stormed Normandy!$"

SilvanWoods_Text_EdLost::
	.string "Get off my lawn!$"

SilvanWoods_Text_EdPost::
	.string "I'm sorry, who are you?$"

SilvanWoods_Text_JayIntro::
	.string "We aren't here to enjoy the woods\n"
	.string "instead we came out here to fight and\l"
	.string "get fucked up.$"

SilvanWoods_Text_JayLost::
	.string "Hey bitch don't kill my vibe!$"

SilvanWoods_Text_JayPost::
	.string "Dude schools so hard, these teachers\n"
	.string "think that I should understand this\l"
	.string "complicated shit like traingles.$"

SilvanWoods_Text_FosterIntro::
	.string "Man have you ever just looked at your\n"
	.string "hands?$"

SilvanWoods_Text_FosterLost::
	.string "Did you steal my lighter?$"

SilvanWoods_Text_FosterPost::
	.string "I met this guy who told me that pig\n"
	.string "tastes just like human.$"

SilvanWoods_Text_DouggieIntro::
	.string "Haha! Dude, RIZZLAM! We're all\n"
	.string "RIZZLAMIC!$"

SilvanWoods_Text_DouggieLost::
	.string "You're honestly acting just like a\n"
	.string "bitch.$"

SilvanWoods_Text_DouggiePost::
	.string "I stole that kid's lighter wanna buy it?$"

SilvanWoods_Text_SmokeyIntro::
	.string "Oh dude I just picked up some fire weed!$"

SilvanWoods_Text_SmokeyLost::
	.string "I was thinking about some crazy shit.$"

SilvanWoods_Text_SmokeyPost::
	.string "Just sitting here all day and smoking\n"
	.string "weed sometimes I worry I may have\l"
	.string "fucked up.$"

SilvanWoods_Text_StoneyIntro::
	.string "Uhh bro we're taking dabs under the\n"
	.string "trees.$"

SilvanWoods_Text_StoneyLost::
	.string "Dabbed out! I need to go eat a hot dog...$"

SilvanWoods_Text_StoneyPost::
	.string "It's pretty cool up here in the forest\n"
	.string "the weed's better but I still miss the\l"
	.string "beach.$"

SilvanWoods_Text_GaryIntro::
	.string "There is no man alive who outsmokes me.$"

SilvanWoods_Text_GaryLost::
	.string "I'm smoked out man, I can' take one more\n"
	.string "hit.$"

SilvanWoods_Text_GaryPost::
	.string "Ok ok you've proved you aren't a bitch\n"
	.string "and we spent so long standing here\l"
	.string "fighting I might need to take another\l"
	.string "hit soon.$"

SilvanWoods_Text_ScottBlock::
	.string "Oh no this is not good I can't find Leaf!\n"
	.string "You haven't seen her recently have\l"
	.string "you? I know she must be somewhere in\l"
	.string "these woods. Will you please go find her\l"
	.string "and bring her here?$"

SilvanWoods_Text_Leaf1::
	.string "Hey {PLAYER}! There you are! Thanks\n"
	.string "for saving me again.$"

SilvanWoods_Text_ScottPass::
	.string "This {RIVAL} who is stalking you\n"
	.string "sounds dangerous we should stay as a\l"
	.string "group. Anyways {PLAYER} we're quite\l"
	.string "near Saeclara. This path should lead us\l"
	.string "directly to Mew. I cannot speak for\l"
	.string "either of you but all this excitement\l"
	.string "makes me want a bowl. So once your safe\l"
	.string "in town you can find me poking some\l"
	.string "smot in my local weed shop. Come with me\l"
	.string "Leaf we'll smoke some Indica.$"

SilvanWoods_Text_Leaf2::
	.string "Ok that's fine but I want to see Mew.\n"
	.string "Well {PLAYER} don't spend all day\l"
	.string "lollygagging here in the woods. We'll\l"
	.string "wait for you in town down at my dad's\l"
	.string "Chronic Cannabis store.$"
