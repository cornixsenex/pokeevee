Warehouse_Red_MapScripts::
	.byte 0


Warehouse_Red_EventScript_TrainerRed5::
	trainerbattle_single TRAINER_RED5, Warehouse_Red_Text_Red5Intro, Warehouse_Red_Text_Red5Lost
	msgbox Warehouse_Red_Text_Red5Post
	closemessage
	end


Warehouse_Red_EventScript_TrainerRed4::
	trainerbattle_single TRAINER_RED4, Warehouse_Red_Text_Red4Intro, Warehouse_Red_Text_Red4Lost
	msgbox Warehouse_Red_Text_Red4Post
	closemessage
	end


Warehouse_Red_EventScript_TrainerRed3::
	trainerbattle_single TRAINER_RED3, Warehouse_Red_Text_Red3Intro, Warehouse_Red_Text_Red3Lost
	msgbox Warehouse_Red_Text_Red3Post
	closemessage
	end


Warehouse_Red_EventScript_TrainerRed2::
	trainerbattle_single TRAINER_RED2, Warehouse_Red_Text_Red2Intro, Warehouse_Red_Text_Red2Lost
	msgbox Warehouse_Red_Text_Red2Post
	closemessage
	end


Warehouse_Red_EventScript_TrainerRed1::
	trainerbattle_single TRAINER_RED1, Warehouse_Red_Text_Red1Intro, Warehouse_Red_Text_Red1Lost
	msgbox Warehouse_Red_Text_Red1Post
	closemessage
	end


Warehouse_Red_Text_Red5Intro::
	.string "Hello my enemy and how are you?$"

Warehouse_Red_Text_Red5Lost::
	.string "OK!$"

Warehouse_Red_Text_Red5Post::
	.string "It's good! We're good! I'm feeling good.$"

Warehouse_Red_Text_Red4Intro::
	.string "I may be blind but I am not stupid.$"

Warehouse_Red_Text_Red4Lost::
	.string "Something is not right here.$"

Warehouse_Red_Text_Red4Post::
	.string "Good job young man.$"

Warehouse_Red_Text_Red3Intro::
	.string "No wasting time let's get down to\n"
	.string "business.$"

Warehouse_Red_Text_Red3Lost::
	.string "I fought as a daughter born as a son.$"

Warehouse_Red_Text_Red3Post::
	.string "Once I find my center, I'm sure to win.$"

Warehouse_Red_Text_Red2Intro::
	.string "On the main land we call this drug Da Ma.$"

Warehouse_Red_Text_Red2Lost::
	.string "I think I might need to smoke some Da\n"
	.string "Ma.$"

Warehouse_Red_Text_Red2Post::
	.string "Have you tried the tea egg? It's rather\n"
	.string "good.$"

Warehouse_Red_Text_Red1Intro::
	.string "Intruder! Did you come here for dinner?$"

Warehouse_Red_Text_Red1Lost::
	.string "Your food will be poisoned!$"

Warehouse_Red_Text_Red1Post::
	.string "Please come back soone!$"
