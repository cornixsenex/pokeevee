Route3_MapScripts::
	.byte 0


Route3_EventScript_LeafTrigger1::
	lockall
	addobject 13
	showobjectat 13, MAP_ROUTE3
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement 13, Route3_Movement_LeafIntro1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	call Route3_EventScript_Leaf1
	releaseall
	end


Route3_EventScript_LeafTrigger2::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	addobject 13
	showobjectat 13, MAP_ROUTE3
	applymovement 13, Route3_Movement_LeafIntro2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	call Route3_EventScript_Leaf1
	releaseall
	end


Route3_EventScript_Leaf1::
	load_field_pic 4, 190, 98
	msgbox Route3_Text_Leaf1
	destroy_field_pic 4
	closemessage
	setvar VAR_MUGSHOT_ID, MUGSHOT_LEAF
	trainerbattle_no_intro TRAINER_LEAF1, Route3_Text_LeafLost
	load_field_pic 4, 190, 98
	msgbox Route3_Text_Leaf1Post
	closemessage
	destroy_field_pic 4
	applymovement 13, Route3_Movement_LeafExit
	waitmovement 0
	removeobject 13
	setvar VAR_ROUTE3_STATE, 1
	setflag FLAG_SILVANWOODS_HIDEFIGHT1
	return


Route3_EventScript_Ross::
	trainerbattle_single TRAINER_ROSS, Route3_Text_RossIntro, Route3_Text_RossLost
	msgbox Route3_Text_RossPost
	closemessage
	end


Route3_EventScript_Izzy::
	trainerbattle_single TRAINER_IZZY, Route3_Text_IzzyIntro, Route3_Text_IzzyLost
	msgbox Route3_Text_IzzyPost
	closemessage
	end


Route3_EventScript_Ricardo::
	trainerbattle_single TRAINER_RICARDO, Route3_Text_RicardoIntro, Route3_Text_RicardoLost
	msgbox Route3_Text_RicardoPost
	closemessage
	end


Route3_EventScript_Pedro::
	trainerbattle_single TRAINER_PEDRO, Route3_Text_PedroIntro, Route3_Text_PedroLost
	msgbox Route3_Text_PedroPost
	closemessage
	end


Route3_EventScript_Monica::
	trainerbattle_single TRAINER_MONICA, Route3_Text_MonicaIntro, Route3_Text_MonicaLost
	msgbox Route3_Text_MonicaPost
	closemessage
	end


Route3_EventScript_Amber::
	trainerbattle_single TRAINER_AMBER, Route3_Text_AmberIntro, Route3_Text_AmberLost
	msgbox Route3_Text_AmberPost
	closemessage
	end


Route3_EventScript_Dustin::
	trainerbattle_single TRAINER_DUSTIN, Route3_Text_DustinIntro, Route3_Text_DustinLost
	msgbox Route3_Text_DustinPost
	closemessage
	end


Route3_EventScript_Jon::
	trainerbattle_single TRAINER_JON, Route3_Text_JonIntro, Route3_Text_JonLost
	msgbox Route3_Text_JonPost
	closemessage
	end


Route3_EventScript_Joe::
	trainerbattle_single TRAINER_JOE, Route3_Text_JoeIntro, Route3_Text_JoeLost
	msgbox Route3_Text_JoePost
	closemessage
	end


Route3_EventScript_Ryan::
	trainerbattle_single TRAINER_RYAN, Route3_Text_RyanIntro, Route3_Text_RyanLost
	msgbox Route3_Text_RyanPost
	closemessage
	end


Route3_EventScript_Megan::
	trainerbattle_single TRAINER_MEGAN, Route3_Text_MeganIntro, Route3_Text_MeganLost
	msgbox Route3_Text_MeganPost
	closemessage
	end


Route3_EventScript_Devon::
	trainerbattle_single TRAINER_DEVON, Route3_Text_DevonIntro, Route3_Text_DevonLost
	msgbox Route3_Text_DevonPost
	closemessage
	end


Route3_EventScript_OldMan::
	lock
	faceplayer
	msgbox Route3_Text_OldMan
	closemessage
	release
	end


Route3_Movement_LeafIntro1:
	walk_down
	walk_right
	walk_down
	face_left
	step_end

Route3_Movement_LeafIntro2:
	walk_down
	walk_down
	face_right
	step_end

Route3_Movement_LeafExit:
	walk_up
	walk_up
	step_end

Route3_Text_RossIntro::
	.string "I'm learning how to swim! Here check\n"
	.string "this out!$"

Route3_Text_RossLost::
	.string "Help mom I'm gonna drown!$"

Route3_Text_RossPost::
	.string "Wow you showed me! Looks like I need to\n"
	.string "practice dog paddling.$"

Route3_Text_IzzyIntro::
	.string "Eww gross get away from me you weirdo!$"

Route3_Text_IzzyLost::
	.string "Please help please help!$"

Route3_Text_IzzyPost::
	.string "I think you made me wet.$"

Route3_Text_RicardoIntro::
	.string "I brought my son here to play on the\n"
	.string "beach.$"

Route3_Text_RicardoLost::
	.string "You're making me look weak...$"

Route3_Text_RicardoPost::
	.string "Have you explored the cave carved in\n"
	.string "the rock down by the sea?$"

Route3_Text_PedroIntro::
	.string "Me and my dad are gonna kick your ass!$"

Route3_Text_PedroLost::
	.string "Dad how did we just loose?$"

Route3_Text_PedroPost::
	.string "Okay, you're good.$"

Route3_Text_MonicaIntro::
	.string "Hey! Stay away from my children.$"

Route3_Text_MonicaLost::
	.string "You know, I'm still available.$"

Route3_Text_MonicaPost::
	.string "Nice to see you!$"

Route3_Text_AmberIntro::
	.string "My mommy took me and Ross to the beach!$"

Route3_Text_AmberLost::
	.string "No, Mom!$"

Route3_Text_AmberPost::
	.string "You hurt my feelings, go awawy.$"

Route3_Text_DustinIntro::
	.string "Hey man do you ever want to race birds?$"

Route3_Text_DustinLost::
	.string "That's not correct.$"

Route3_Text_DustinPost::
	.string "Did you go thrugh the woods?$"

Route3_Text_JonIntro::
	.string "Today I thought I'd be a fisherman.$"

Route3_Text_JonLost::
	.string "I've lost my fish...$"

Route3_Text_JonPost::
	.string "Let's drink a few more beers!$"

Route3_Text_JoeIntro::
	.string "My friend Jon ain't great at outdoorsy\n"
	.string "stuff.$"

Route3_Text_JoeLost::
	.string "So much for that.$"

Route3_Text_JoePost::
	.string "Think I'll try a new bait.$"

Route3_Text_RyanIntro::
	.string "The Bugs!\n"
	.string "THE BUGS!!!$"

Route3_Text_RyanLost::
	.string "You helped me scratch the bugs.$"

Route3_Text_RyanPost::
	.string "Thank you a lot, these bugs are\n"
	.string "dangerous.$"

Route3_Text_MeganIntro::
	.string "Hey, didn't you use to make fun of me.$"

Route3_Text_MeganLost::
	.string "Looks like you're still laughing.$"

Route3_Text_MeganPost::
	.string "Hey haven't you heard anything about a\n"
	.string "new freeway the party was planning to\l"
	.string "build through here?$"

Route3_Text_DevonIntro::
	.string "You're not headed into the woods are\n"
	.string "you?$"

Route3_Text_DevonLost::
	.string "You're pretty tough.$"

Route3_Text_DevonPost::
	.string "You should be safe enough, but be\n"
	.string "careful that you do not get lost.$"

Route3_Text_Leaf1::
	.string "Hey {PLAYER} long time no see how\n"
	.string "have you been? While you slowpokes\l"
	.string "were getting stoned in town I was\l"
	.string "training my fresh caught Pokemon. Look\l"
	.string "{PLAYER} they're almost as cute as I\l"
	.string "am.$"

Route3_Text_LeafLost::
	.string "Wow {PLAYER} looks like I have a lot\n"
	.string "to learn$"

Route3_Text_Leaf1Post::
	.string "Haha you're way too good for me.\p"
	.string "But wait weren't you supposed to meet\n"
	.string "me with my dad?\p"
	.string "We need to find him! Where could he be?\p"
	.string "DAD?!$"

Route3_Text_OldMan::
	.string "Caverna Ithica was this cave's name\n"
	.string "before The Party changed it to Beach\l"
	.string "Cave.\p"
	.string "You should only go in if you're prepared.$"
