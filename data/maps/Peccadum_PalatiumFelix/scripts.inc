Peccadum_PalatiumFelix_MapScripts::
	.byte 0


Peccadum_PalatiumFelix_Script_RouletteDealer::
# 6 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 7 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 9 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_RouletteDealerIntro
	return


Peccadum_PalatiumFelix_Text_RouletteDealerIntro::
# 17 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I am the Blue Roulette table dealer.\n"
	.string "Would you like to play a game of\l"
	.string "roulette?$"
