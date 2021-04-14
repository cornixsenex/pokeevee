Route2_MapScripts::
	.byte 0


Route2_EventScript_Trainer_Adam::
	trainerbattle_single TRAINER_ADAM, Route2_Text_AdamFight, Route2_Text_AdamLost
	msgbox Route2_Text_AdamPost
	closemessage
	end


Route2_EventScript_Maddie::
	trainerbattle_single TRAINER_MADDIE, Route2_Text_MaddieFight, Route2_Text_MaddieLost
	msgbox Route2_Text_MaddiePost
	closemessage
	end


Route2_EventScript_Mia::
	trainerbattle_single TRAINER_MIA, Route2_Text_MiaFight, Route2_Text_MiaLost
	msgbox Route2_Text_MiaPost
	closemessage
	end


Route2_EventScript_Manny::
	trainerbattle_single TRAINER_MANNY, Route2_Text_MannyFight, Route2_Text_MiaLost
	msgbox Route2_Text_MannyPost
	closemessage
	end


Route2_EventScript_Abby::
	trainerbattle_double TRAINER_ABBY_AND_STORMY, Route2_Text_AbbyIntro, Route2_Text_AbbyLost, Route104_Text_GinaNotEnoughMons
	msgbox Route2_Text_AbbyPost
	closemessage
	release
	end


Route2_EventScript_Stormy::
	trainerbattle_double TRAINER_ABBY_AND_STORMY, Route2_Text_StormyIntro, Route2_Text_StormyLost, Route104_Text_GinaNotEnoughMons
	msgbox Route2_Text_StormyPost
	closemessage
	release
	end


Route2_Text_AdamFight::
	.string "I wear shorts and you look like a bitch.$"

Route2_Text_AdamLost::
	.string "Damn, I knew I should have worn jeans.$"

Route2_Text_AdamPost::
	.string "Come back in the summer time then I'll\n"
	.string "kick your ass!$"

Route2_Text_MaddieFight::
	.string "Come sit under this tree with me\n"
	.string "Moonbeam$"

Route2_Text_MaddieLost::
	.string "Okay that's rude!$"

Route2_Text_MaddiePost::
	.string "See you around I guess.$"

Route2_Text_MiaFight::
	.string "Sorry, but I doubt you can keep up.$"

Route2_Text_MiaLost::
	.string "Haha! Looks like you have been\n"
	.string "practising$"

Route2_Text_MiaPost::
	.string "Puff out your chest and do your best in\n"
	.string "school.$"

Route2_Text_MannyFight::
	.string "Uhh suh dude do you wanna do a dab?$"

Route2_Text_MannyLost::
	.string "Neighbor!$"

Route2_Text_MannyPost::
	.string "I can't believe you'd act like that!$"

Route2_Text_AbbyIntro::
	.string "We aren't quite lovers, but we're\n"
	.string "something close.$"

Route2_Text_AbbyLost::
	.string "My gosh Moldy$"

Route2_Text_AbbyPost::
	.string "I honestly don't think you're all that\n"
	.string "bad.$"

Route2_Text_StormyIntro::
	.string "I'll make you pay for what you did to me.$"

Route2_Text_StormyLost::
	.string "This isn't over yet$"

Route2_Text_StormyPost::
	.string "You're just like all the other men I\n"
	.string "hate.$"
