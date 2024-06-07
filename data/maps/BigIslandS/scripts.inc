BigIslandS_MapScripts::
# 9 "data/maps/BigIslandS/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME:
# 10 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_OnResume
	return


BigIslandS_OnResume::
# 17 "data/maps/BigIslandS/scripts.pory"
	setstepcallback STEP_CB_ASH
	end


BigIslandS_Script_IgnisGrunt::
# 23 "data/maps/BigIslandS/scripts.pory"
	lock
# 24 "data/maps/BigIslandS/scripts.pory"
	faceplayer
# 25 "data/maps/BigIslandS/scripts.pory"
	compare VAR_ARGO_STATE, 3
	goto_if_lt BigIslandS_Script_IgnisGrunt_2
# 29 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_IgnisGruntFight
BigIslandS_Script_IgnisGrunt_1:
	end

BigIslandS_Script_IgnisGrunt_2:
# 26 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntBlock, MSGBOX_DEFAULT
# 27 "data/maps/BigIslandS/scripts.pory"
	closemessage
	goto BigIslandS_Script_IgnisGrunt_1


BigIslandS_Script_IgnisGruntFight::
# 36 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Script_IgnisGrunt1Pre, MSGBOX_DEFAULT
# 37 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 39 "data/maps/BigIslandS/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_2, BigIslandS_Script_IgnisGrunt1Lost, TRAINER_IGNIS_GRUNT_3, BigIslandS_Script_IgnisGrunt2Lost
# 41 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 42 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 43 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 45 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntPost, MSGBOX_DEFAULT
# 46 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 48 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, BigIslandS_Movement_IgnisGruntClear
# 49 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, BigIslandS_Movement_IgnisGruntClear
# 50 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 52 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HideIgnisGrunts
# 54 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_BIGISLAND_S_HIDE_IGNISGRUNTS
	end


BigIslandS_Script_HideIgnisGrunts::
# 61 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Script_HideIgnisGrunts_Text_0
# 62 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 65 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 4, 58, 36
# 66 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 68 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 5, 59, 36
# 69 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 71 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_S
# 72 "data/maps/BigIslandS/scripts.pory"
	removeobject 4
# 74 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_S
# 75 "data/maps/BigIslandS/scripts.pory"
	removeobject 5
	end


BigIslandS_Script_ShowIgnisGrunts::
# 81 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 4, 55, 37
# 82 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 83 "data/maps/BigIslandS/scripts.pory"
	addobject 4
# 84 "data/maps/BigIslandS/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_S
# 86 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 5, 56, 37
# 87 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 88 "data/maps/BigIslandS/scripts.pory"
	addobject 5
# 89 "data/maps/BigIslandS/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_S
	return


# 95 "data/maps/BigIslandS/scripts.pory"
BigIslandS_Movement_IgnisGruntClear:
# 96 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 96 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 96 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 96 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 96 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 96 "data/maps/BigIslandS/scripts.pory"
	walk_up
	step_end

BigIslandS_Script_HideIgnisGrunts_Text_0:
# 61 "data/maps/BigIslandS/scripts.pory"
	.string "HIDE IGNIS GRUNTS$"

BigIslandS_Text_IgnisGruntBlock::
# 100 "data/maps/BigIslandS/scripts.pory"
	.string "Onlyay ativenay ignisay areay\n"
	.string "elcomeway erehay.$"

BigIslandS_Script_IgnisGrunt1Pre::
# 108 "data/maps/BigIslandS/scripts.pory"
	.string "Owhay isay isthat outsideray?\n"
	.string "Ehay ustmay ebay erehay otay avesay\l"
	.string "ishay ittleay iendfray.\l"
	.string "Owhay areday ouyay ytray otay orcefay\l"
	.string "ouryay ayway insideay?\l"
	.string "Eway illway efendday ouray acredsay\l"
	.string "ountaintopmay.$"

BigIslandS_Script_IgnisGrunt1Lost::
# 113 "data/maps/BigIslandS/scripts.pory"
	.string "Eway oonsay illway ebay avengeday.$"

BigIslandS_Script_IgnisGrunt2Lost::
# 118 "data/maps/BigIslandS/scripts.pory"
	.string "Ouyay onway isthay oneay.$"

BigIslandS_Text_IgnisGruntPost::
# 123 "data/maps/BigIslandS/scripts.pory"
	.string "Eway ustmay elltay Edeamay ofay isthay\n"
	.string "efeatday.$"
