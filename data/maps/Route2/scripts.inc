Route2_MapScripts::
	.byte 0


Route2_EventScript_Trainer_Adam::
# 5 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ADAM, Route2_Text_AdamFight, Route2_Text_AdamLost
# 6 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_AdamPost
# 7 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_EventScript_Maddie::
# 12 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_MADDIE, Route2_Text_MaddieFight, Route2_Text_MaddieLost
# 13 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_MaddiePost
# 14 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_EventScript_Mia::
# 19 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_MIA, Route2_Text_MiaFight, Route2_Text_MiaLost
# 20 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_MiaPost
# 21 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_EventScript_Manny::
# 26 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_MANNY, Route2_Text_MannyFight, Route2_Text_MiaLost
# 27 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_MannyPost
# 28 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_EventScript_Abby::
# 33 "data/maps/Route2/scripts.pory"
	trainerbattle_double TRAINER_ABBY_AND_STORMY, Route2_Text_AbbyIntro, Route2_Text_AbbyLost, Route104_Text_GinaNotEnoughMons
# 34 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_AbbyPost
# 35 "data/maps/Route2/scripts.pory"
	closemessage
# 36 "data/maps/Route2/scripts.pory"
	release
	end


Route2_EventScript_Stormy::
# 41 "data/maps/Route2/scripts.pory"
	trainerbattle_double TRAINER_ABBY_AND_STORMY, Route2_Text_StormyIntro, Route2_Text_StormyLost, Route104_Text_GinaNotEnoughMons
# 42 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_StormyPost
# 43 "data/maps/Route2/scripts.pory"
	closemessage
# 44 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Text_AdamFight::
# 48 "data/maps/Route2/scripts.pory"
	.string "I wear shorts and you look like a bitch.$"

Route2_Text_AdamLost::
# 52 "data/maps/Route2/scripts.pory"
	.string "Damn, I knew I should have worn jeans.$"

Route2_Text_AdamPost::
# 56 "data/maps/Route2/scripts.pory"
	.string "Come back in the summer time then I'll\n"
	.string "kick your ass!$"

Route2_Text_MaddieFight::
# 60 "data/maps/Route2/scripts.pory"
	.string "Come sit under this tree with me\n"
	.string "Moonbeam$"

Route2_Text_MaddieLost::
# 64 "data/maps/Route2/scripts.pory"
	.string "Okay that's rude!$"

Route2_Text_MaddiePost::
# 68 "data/maps/Route2/scripts.pory"
	.string "See you around I guess.$"

Route2_Text_MiaFight::
# 72 "data/maps/Route2/scripts.pory"
	.string "Sorry, but I doubt you can keep up.$"

Route2_Text_MiaLost::
# 76 "data/maps/Route2/scripts.pory"
	.string "Haha! Looks like you have been\n"
	.string "practising$"

Route2_Text_MiaPost::
# 80 "data/maps/Route2/scripts.pory"
	.string "Puff out your chest and do your best in\n"
	.string "school.$"

Route2_Text_MannyFight::
# 84 "data/maps/Route2/scripts.pory"
	.string "Uhh suh dude do you wanna do a dab?$"

Route2_Text_MannyLost::
# 88 "data/maps/Route2/scripts.pory"
	.string "Neighbor!$"

Route2_Text_MannyPost::
# 92 "data/maps/Route2/scripts.pory"
	.string "I can't believe you'd act like that!$"

Route2_Text_AbbyIntro::
# 96 "data/maps/Route2/scripts.pory"
	.string "We aren't quite lovers, but we're\n"
	.string "something close.$"

Route2_Text_AbbyLost::
# 100 "data/maps/Route2/scripts.pory"
	.string "My gosh Moldy$"

Route2_Text_AbbyPost::
# 104 "data/maps/Route2/scripts.pory"
	.string "I honestly don't think you're all that\n"
	.string "bad.$"

Route2_Text_StormyIntro::
# 108 "data/maps/Route2/scripts.pory"
	.string "I'll make you pay for what you did to me.$"

Route2_Text_StormyLost::
# 112 "data/maps/Route2/scripts.pory"
	.string "This isn't over yet$"

Route2_Text_StormyPost::
# 116 "data/maps/Route2/scripts.pory"
	.string "You're just like all the other men I\n"
	.string "hate.$"
