Tucson_MapScripts::
	.byte 0


Tucson_Script_Nestor::
# 8 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Nestor, MSGBOX_NPC
# 9 "data/maps/Tucson/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 10 "data/maps/Tucson/scripts.pory"
	waitmovement 0
	end


Tucson_Text_Nestor::
# 15 "data/maps/Tucson/scripts.pory"
	.string "I've lived a happy and eventful life but\l"
	.string "now I see my end approaching fast.\l"
	.string "Without a son to inherit my wealth I\l"
	.string "must rely on Helen, my daughter, to give\l"
	.string "birth to a legitimate heir and to that\l"
	.string "end I've arranged a marrieage between\l"
	.string "her and one of the two suitors:\l"
	.string "Menelaus, that brilliant business man,\l"
	.string "and the absent minded pretty Paris. My\l"
	.string "daughter Helen, much to my dismay,\l"
	.string "refuses to marry until Castor and\l"
	.string "Pollux her twin brothers return home.\l"
	.string "Please find them and tell them to hurry\l"
	.string "home.$"
