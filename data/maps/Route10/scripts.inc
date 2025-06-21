Route10_MapScripts::
# 14 "data/maps/Route10/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route10_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/Route10/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_EliciusBeach_F
	return


Route10_EventScript_Krabby::
# 29 "data/maps/Route10/scripts.pory"
	lock
# 30 "data/maps/Route10/scripts.pory"
	playmoncry SPECIES_KRABBY, 0
# 31 "data/maps/Route10/scripts.pory"
	setflag FLAG_ROUTE10_HIDE_KRABBY
# 32 "data/maps/Route10/scripts.pory"
	waitmoncry
# 33 "data/maps/Route10/scripts.pory"
	setwildbattle SPECIES_KRABBY, 25
# 34 "data/maps/Route10/scripts.pory"
	dowildbattle
# 35 "data/maps/Route10/scripts.pory"
	fadescreenswapbuffers 1
# 36 "data/maps/Route10/scripts.pory"
	removeobject 17
# 37 "data/maps/Route10/scripts.pory"
	fadescreenswapbuffers 0
# 38 "data/maps/Route10/scripts.pory"
	release
	return


Route10_EventScript_Rival::
# 44 "data/maps/Route10/scripts.pory"
	lock
# 45 "data/maps/Route10/scripts.pory"
	load_field_pic 16, 190, 98
# 46 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_Rival1
# 47 "data/maps/Route10/scripts.pory"
	closemessage
# 48 "data/maps/Route10/scripts.pory"
	destroy_field_pic 16
# 49 "data/maps/Route10/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 50 "data/maps/Route10/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route10/scripts.pory"
	faceplayer
# 52 "data/maps/Route10/scripts.pory"
	load_field_pic 16, 190, 98
# 53 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_Rival2
# 54 "data/maps/Route10/scripts.pory"
	closemessage
# 55 "data/maps/Route10/scripts.pory"
	destroy_field_pic 16
# 56 "data/maps/Route10/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL4, Route10_Text_RivalLost
# 57 "data/maps/Route10/scripts.pory"
	load_field_pic 16, 190, 98
# 58 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_Rival3
# 59 "data/maps/Route10/scripts.pory"
	closemessage
# 60 "data/maps/Route10/scripts.pory"
	destroy_field_pic 16
# 61 "data/maps/Route10/scripts.pory"
	fadescreenswapbuffers 1
# 62 "data/maps/Route10/scripts.pory"
	setflag FLAG_ROUTE10_HIDE_RIVAL
# 63 "data/maps/Route10/scripts.pory"
	removeobject 1
# 64 "data/maps/Route10/scripts.pory"
	fadescreenswapbuffers 0
# 65 "data/maps/Route10/scripts.pory"
	release
	return


Route10_Text_Rival1::
# 72 "data/maps/Route10/scripts.pory"
	.string "I love the beach$"

Route10_Text_Rival2::
# 76 "data/maps/Route10/scripts.pory"
	.string "What are you doing here? So what I\n"
	.string "stole the keys?$"

Route10_Text_RivalLost::
# 80 "data/maps/Route10/scripts.pory"
	.string "How do you always win?$"

Route10_Text_Rival3::
# 84 "data/maps/Route10/scripts.pory"
	.string "Take the stupid keys and screw off$"
