Route3_MapScripts::
	.byte 0


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
