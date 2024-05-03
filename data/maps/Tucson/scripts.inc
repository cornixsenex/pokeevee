Tucson_MapScripts::
# 7 "data/maps/Tucson/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/Tucson/scripts.pory"
	call Tucson_OnTransition
	return


Tucson_OnTransition::
# 16 "data/maps/Tucson/scripts.pory"
	goto_if_set FLAG_BEACHCAVE_HIDE_HECTOR, Tucson_OnTransition_2
Tucson_OnTransition_1:
	end

Tucson_OnTransition_2:
# 17 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 17, 23, 10
# 18 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_DOWN
	goto Tucson_OnTransition_1


Tucson_Script_Nestor::
# 24 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Nestor_Intro, MSGBOX_NPC
# 25 "data/maps/Tucson/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 26 "data/maps/Tucson/scripts.pory"
	waitmovement 0
	end


Tucson_Script_Hector::
# 31 "data/maps/Tucson/scripts.pory"
	lock
# 32 "data/maps/Tucson/scripts.pory"
	faceplayer
# 33 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Hector, MSGBOX_NPC
# 34 "data/maps/Tucson/scripts.pory"
	release
	end


Tucson_Text_Nestor_Intro::
# 38 "data/maps/Tucson/scripts.pory"
	.string "I've lived a happy and eventful life but\l"
	.string "now I see my end approaching fast.\l"
	.string "Without a son to inherit my wealth I\l"
	.string "must rely on Helen, my daughter, to give\l"
	.string "birth to a legitimate heir and to that\l"
	.string "end I've arranged a marrieage between\l"
	.string "her and one of the two suitors:\l"
	.string "Menelaus, that brilliant business man,\l"
	.string "and the absent minded pretty Paris.$"

Tucson_Text_Nestor1::
# 42 "data/maps/Tucson/scripts.pory"
	.string "My daughter Helen, much to my dismay,\l"
	.string "refuses to marry until Castor and\l"
	.string "Pollux her twin brothers return home.\l"
	.string "Tell Castor and Pollux to hurry home.$"

Tucson_Text_Nestor2::
# 46 "data/maps/Tucson/scripts.pory"
	.string "$"

Tucson_Text_Hector::
# 50 "data/maps/Tucson/scripts.pory"
	.string "It is a great honor and true privaledge\l"
	.string "to be here in the great house of Nestor\l"
	.string "to see the wedding of lovely Helen\l"
	.string "whether my brother is the groom or not.$"
