Tucson_MapScripts::
# 16 "data/maps/Tucson/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/Tucson/scripts.pory"
	call Tucson_OnTransition
	return


Tucson_OnTransition::
# 25 "data/maps/Tucson/scripts.pory"
	goto_if_set FLAG_BEACHCAVE_HIDE_HECTOR, Tucson_OnTransition_2
Tucson_OnTransition_1:
	end

Tucson_OnTransition_2:
# 26 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 17, 23, 10
# 27 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_DOWN
	goto Tucson_OnTransition_1


Tucson_Script_Helen::
# 37 "data/maps/Tucson/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt Tucson_Script_Helen_2
# 45 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Helen3, MSGBOX_SIGN
Tucson_Script_Helen_1:
# 47 "data/maps/Tucson/scripts.pory"
	release
	end

Tucson_Script_Helen_2:
# 38 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Helen1, MSGBOX_SIGN
# 40 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Helen2, MSGBOX_NPC
# 41 "data/maps/Tucson/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 42 "data/maps/Tucson/scripts.pory"
	waitmovement 0
	goto Tucson_Script_Helen_1


Tucson_Script_Nestor::
# 53 "data/maps/Tucson/scripts.pory"
	lock
# 54 "data/maps/Tucson/scripts.pory"
	faceplayer
# 56 "data/maps/Tucson/scripts.pory"
	goto_if_unset FLAG_TUCSON_NESTOR_INTROD, Tucson_Script_Nestor_2
Tucson_Script_Nestor_1:
# 61 "data/maps/Tucson/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt Tucson_Script_Nestor_5
# 66 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Nestor2, MSGBOX_NPC
Tucson_Script_Nestor_4:
	end

Tucson_Script_Nestor_2:
# 57 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Nestor_Intro, MSGBOX_NPC
# 58 "data/maps/Tucson/scripts.pory"
	setflag FLAG_TUCSON_NESTOR_INTROD
	goto Tucson_Script_Nestor_1

Tucson_Script_Nestor_5:
# 63 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Nestor1, MSGBOX_NPC
	goto Tucson_Script_Nestor_4


Tucson_Script_Hector::
# 73 "data/maps/Tucson/scripts.pory"
	lock
# 74 "data/maps/Tucson/scripts.pory"
	faceplayer
# 75 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Hector, MSGBOX_NPC
# 76 "data/maps/Tucson/scripts.pory"
	release
	end


Tucson_Text_Nestor_Intro::
# 80 "data/maps/Tucson/scripts.pory"
	.string "I've lived a happy and eventful life but\n"
	.string "now I see my end approaching fast.\l"
	.string "Without a son to inherit my wealth I\l"
	.string "must rely on Helen, my daughter, to give\l"
	.string "birth to a legitimate heir and to that\l"
	.string "end I've arranged a marrieage between\l"
	.string "her and one of the two suitors:\l"
	.string "Menelaus, that brilliant business man,\l"
	.string "and the absent minded pretty Paris.$"

Tucson_Text_Nestor1::
# 84 "data/maps/Tucson/scripts.pory"
	.string "My daughter Helen, much to my dismay,\n"
	.string "refuses to marry until Castor and\l"
	.string "Pollux her twin brothers return home.\l"
	.string "Tell Castor and Pollux to hurry home.$"

Tucson_Text_Nestor2::
# 88 "data/maps/Tucson/scripts.pory"
	.string "$"

Tucson_Text_Hector::
# 92 "data/maps/Tucson/scripts.pory"
	.string "It is a great honor and true privaledge\n"
	.string "to be here in the great house of Nestor\l"
	.string "to see the wedding of lovely Helen\l"
	.string "whether my brother is the groom or not.$"

Tucson_Text_Helen1::
# 96 "data/maps/Tucson/scripts.pory"
	.string "Despite the radiant glow of your face\n"
	.string "my heart still shivers cold, I'm\l"
	.string "trembling. Dear Paris, know these tears\l"
	.string "that wet my cheecks are shed out of\l"
	.string "longing for Castor and Pollux. My dear\l"
	.string "brothers have been away for far too\l"
	.string "long and I now fear the worst.$"

Tucson_Text_Helen2::
# 100 "data/maps/Tucson/scripts.pory"
	.string "Please leave us be unless you bring us\n"
	.string "news that Castor and Pollux have\l"
	.string "returned home.$"

Tucson_Text_Helen3::
# 104 "data/maps/Tucson/scripts.pory"
	.string "Dear Paris I must not have slept last\n"
	.string "night between my dreams of you and\l"
	.string "those nightmares which filled my\l"
	.string "fragile heart up with despair. I pray my\l"
	.string "father says I'll marry you or never will\l"
	.string "I be merry again.$"
