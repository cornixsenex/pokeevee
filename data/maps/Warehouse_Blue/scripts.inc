Warehouse_Blue_MapScripts::
	.byte 0


Warehouse_Blue_EventScript_TrainerBlue5::
	trainerbattle_single TRAINER_BLUE5, Warehouse_Blue_Text_Blue5Intro, Warehouse_Blue_Text_Blue5Lost
	msgbox Warehouse_Blue_Text_Blue5Post
	closemessage
	end


Warehouse_Blue_EventScript_TrainerBlue4::
	trainerbattle_single TRAINER_BLUE4, Warehouse_Blue_Text_Blue4Intro, Warehouse_Blue_Text_Blue4Lost
	msgbox Warehouse_Blue_Text_Blue4Post
	closemessage
	end


Warehouse_Blue_EventScript_TrainerBlue3::
	trainerbattle_single TRAINER_BLUE3, Warehouse_Blue_Text_Blue3Intro, Warehouse_Blue_Text_Blue3Lost
	msgbox Warehouse_Blue_Text_Blue3Post
	closemessage
	end


Warehouse_Blue_EventScript_TrainerBlue2::
	trainerbattle_single TRAINER_BLUE2, Warehouse_Blue_Text_Blue2Intro, Warehouse_Blue_Text_Blue2Lost
	msgbox Warehouse_Blue_Text_Blue2Post
	closemessage
	end


Warehouse_Blue_EventScript_TrainerBlue1::
	trainerbattle_single TRAINER_BLUE1, Warehouse_Blue_Text_Blue1Intro, Warehouse_Blue_Text_Blue1Lost
	msgbox Warehouse_Blue_Text_Blue1Post
	closemessage
	end


Warehouse_Blue_Text_Blue5Intro::
	.string "What you want skinny? Where's your\n"
	.string "girl?$"

Warehouse_Blue_Text_Blue5Lost::
	.string "You fucking crazy skinny guy!$"

Warehouse_Blue_Text_Blue5Post::
	.string "Why do you always look so sad?$"

Warehouse_Blue_Text_Blue4Intro::
	.string "I fucked your mom's unshaved pussy!$"

Warehouse_Blue_Text_Blue4Lost::
	.string "Fucking A!$"

Warehouse_Blue_Text_Blue4Post::
	.string "You smoke weed green boy?$"

Warehouse_Blue_Text_Blue3Intro::
	.string "What's up man are you from round here?$"

Warehouse_Blue_Text_Blue3Lost::
	.string "I don't think that's OK. No way!$"

Warehouse_Blue_Text_Blue3Post::
	.string "Quit fucking around. Back to work!$"

Warehouse_Blue_Text_Blue2Intro::
	.string "What's happenin man? You work fast?$"

Warehouse_Blue_Text_Blue2Lost::
	.string "Alright holmes.$"

Warehouse_Blue_Text_Blue2Post::
	.string "I need to get my wisdom tooth pulled\n"
	.string "out. It hurts bad!$"

Warehouse_Blue_Text_Blue1Intro::
	.string "You came from sidewalks. We're from\n"
	.string "streets.$"

Warehouse_Blue_Text_Blue1Lost::
	.string "Alright, by bad.$"

Warehouse_Blue_Text_Blue1Post::
	.string "You are too strong.$"
