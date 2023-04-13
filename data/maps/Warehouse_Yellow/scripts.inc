Warehouse_Yellow_MapScripts::
	.byte 0


Warehouse_Yellow_EventScript_TrainerYellow5::
	trainerbattle_single TRAINER_YELLOW5, Warehouse_Yellow_Text_Yellow5Intro, Warehouse_Yellow_Text_Yellow5Lost
	msgbox Warehouse_Yellow_Text_Yellow5Post
	closemessage
	end


Warehouse_Yellow_EventScript_TrainerYellow4::
	trainerbattle_single TRAINER_YELLOW4, Warehouse_Yellow_Text_Yellow2Intro, Warehouse_Yellow_Text_Yellow2Lost
	msgbox Warehouse_Yellow_Text_Yellow4Post
	closemessage
	end


Warehouse_Yellow_EventScript_TrainerYellow3::
	trainerbattle_single TRAINER_YELLOW3, Warehouse_Yellow_Text_Yellow3Intro, Warehouse_Yellow_Text_Yellow3Lost
	msgbox Warehouse_Yellow_Text_Yellow3Post
	closemessage
	end


Warehouse_Yellow_EventScript_TrainerYellow2::
	trainerbattle_single TRAINER_YELLOW2, Warehouse_Yellow_Text_Yellow2Intro, Warehouse_Yellow_Text_Yellow2Lost
	msgbox Warehouse_Yellow_Text_Yellow2Post
	closemessage
	end


Warehouse_Yellow_EventScript_TrainerYellow1::
	trainerbattle_single TRAINER_YELLOW1, Warehouse_Yellow_Text_Yellow1Intro, Warehouse_Yellow_Text_Yellow1Lost
	msgbox Warehouse_Yellow_Text_Yellow1Post
	closemessage
	end


Warehouse_Yellow_Text_Yellow5Intro::
	.string "What you want skinny? Where's your\n"
	.string "girl?$"

Warehouse_Yellow_Text_Yellow5Lost::
	.string "You fucking crazy skinny guy!$"

Warehouse_Yellow_Text_Yellow5Post::
	.string "Why do you always look so sad?$"

Warehouse_Yellow_Text_Yellow4Intro::
	.string "I fucked your mom's unshaved pussy!$"

Warehouse_Yellow_Text_Yellow4Lost::
	.string "Fucking A!$"

Warehouse_Yellow_Text_Yellow4Post::
	.string "You smoke weed green boy?$"

Warehouse_Yellow_Text_Yellow3Intro::
	.string "What's up man are you from round here?$"

Warehouse_Yellow_Text_Yellow3Lost::
	.string "I don't think that's OK. No way!$"

Warehouse_Yellow_Text_Yellow3Post::
	.string "Quit fucking around. Back to work!$"

Warehouse_Yellow_Text_Yellow2Intro::
	.string "What's happenin man? You work fast?$"

Warehouse_Yellow_Text_Yellow2Lost::
	.string "Alright holmes.$"

Warehouse_Yellow_Text_Yellow2Post::
	.string "I need to get my wisdom tooth pulled\n"
	.string "out. It hurts bad!$"

Warehouse_Yellow_Text_Yellow1Intro::
	.string "You came from sidewalks. We're from\n"
	.string "streets.$"

Warehouse_Yellow_Text_Yellow1Lost::
	.string "Alright, by bad.$"

Warehouse_Yellow_Text_Yellow1Post::
	.string "You are too strong.$"
