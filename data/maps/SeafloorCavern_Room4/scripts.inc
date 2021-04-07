SeafloorCavern_Room4_MapScripts:: @ 8234C9B
	.byte 0


SeafloorCavern_Room4_EventScript_Grunt4:: @ 8234CB3
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, SeafloorCavern_Room4_Text_Grunt4Intro, SeafloorCavern_Room4_Text_Grunt4Defeat
	msgbox SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room4_Text_Grunt4Intro: @ 8234D3A
	.string "Who are you?\n"
	.string "Where do you think you're going?$"

SeafloorCavern_Room4_Text_Grunt4Defeat: @ 8234D68
	.string "I failed to win!$"

SeafloorCavern_Room4_Text_Grunt4PostBattle: @ 8234D79
	.string "My partner forgot the map in that\n"
	.string "submarine!\p"
	.string "How's that for being useless?$"

