BigIslandS_MapScripts::
# 9 "data/maps/BigIslandS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BigIslandS_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/BigIslandS/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

BigIslandS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/BigIslandS/scripts.pory"
	checktrainerflag TRAINER_IGNIS_GRUNT_2
	goto_if 1, BigIslandS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BigIslandS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HideIgnisGrunts
	return

BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME:
# 16 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_OnResume
	return


BigIslandS_OnResume::
# 23 "data/maps/BigIslandS/scripts.pory"
	setstepcallback STEP_CB_ASH
	end


BigIslandS_Script_IgnisGrunt::
# 29 "data/maps/BigIslandS/scripts.pory"
	lock
# 30 "data/maps/BigIslandS/scripts.pory"
	faceplayer
# 31 "data/maps/BigIslandS/scripts.pory"
	compare VAR_ARGO_STATE, 3
	goto_if_lt BigIslandS_Script_IgnisGrunt_2
# 35 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_IgnisGruntFight
BigIslandS_Script_IgnisGrunt_1:
	end

BigIslandS_Script_IgnisGrunt_2:
# 32 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntBlock, MSGBOX_DEFAULT
# 33 "data/maps/BigIslandS/scripts.pory"
	closemessage
	goto BigIslandS_Script_IgnisGrunt_1


BigIslandS_Script_IgnisGruntFight::
# 42 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Script_IgnisGrunt1Pre, MSGBOX_DEFAULT
# 43 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 45 "data/maps/BigIslandS/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_2, BigIslandS_Script_IgnisGrunt1Lost, TRAINER_IGNIS_GRUNT_3, BigIslandS_Script_IgnisGrunt2Lost
# 47 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 48 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 49 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 51 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntPost, MSGBOX_DEFAULT
# 52 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 54 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, BigIslandS_Movement_IgnisGruntClear
# 55 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, BigIslandS_Movement_IgnisGruntClear
# 56 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 58 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HideIgnisGrunts
	end


BigIslandS_Script_HideIgnisGrunts::
# 65 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_S
# 66 "data/maps/BigIslandS/scripts.pory"
	removeobject 4
# 68 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_S
# 69 "data/maps/BigIslandS/scripts.pory"
	removeobject 5
	return


# 74 "data/maps/BigIslandS/scripts.pory"
BigIslandS_Movement_IgnisGruntClear:
# 75 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 75 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 75 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 75 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 75 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 75 "data/maps/BigIslandS/scripts.pory"
	walk_up
	step_end

BigIslandS_Text_IgnisGruntBlock::
# 79 "data/maps/BigIslandS/scripts.pory"
	.string "Onlyay ativenay ignisay areay\n"
	.string "elcomeway erehay.$"

BigIslandS_Script_IgnisGrunt1Pre::
# 87 "data/maps/BigIslandS/scripts.pory"
	.string "Owhay isay isthat outsideray?\n"
	.string "Ehay ustmay ebay erehay otay avesay\l"
	.string "ishay ittleay iendfray.\l"
	.string "Owhay areday ouyay ytray otay orcefay\l"
	.string "ouryay ayway insideay?\l"
	.string "Eway illway efendday ouray acredsay\l"
	.string "ountaintopmay.$"

BigIslandS_Script_IgnisGrunt1Lost::
# 92 "data/maps/BigIslandS/scripts.pory"
	.string "Eway oonsay illway ebay avengeday.$"

BigIslandS_Script_IgnisGrunt2Lost::
# 97 "data/maps/BigIslandS/scripts.pory"
	.string "Ouyay onway isthay oneay.$"

BigIslandS_Text_IgnisGruntPost::
# 102 "data/maps/BigIslandS/scripts.pory"
	.string "$"
