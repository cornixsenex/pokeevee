Route2_MapScripts::
	.byte 0


Route2_EventScript_Trainer_Adam::
	trainerbattle_single TRAINER_BLUE, Route2_Text_AdamFight, Route2_Text_AdamLost
	msgbox Route2_Text_AdamPost
	closemessage
	end


Route2_Text_AdamFight::
	.string "I wear shorts and you look like a bitch.$"

Route2_Text_AdamLost::
	.string "Damn, I knew I should have worn jeans.$"

Route2_Text_AdamPost::
	.string "Come back in the summer time then I'll\n"
	.string "kick your ass!$"
