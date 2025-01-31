Route10_MapScripts::
	.byte 0


Route10_EventScript_Krabby::
# 15 "data//maps/Route10/scripts.pory"
	lock
# 16 "data//maps/Route10/scripts.pory"
	playmoncry SPECIES_KRABBY, 0
# 17 "data//maps/Route10/scripts.pory"
	setflag FLAG_ROUTE10_HIDE_KRABBY
# 18 "data//maps/Route10/scripts.pory"
	waitmoncry
# 19 "data//maps/Route10/scripts.pory"
	setwildbattle SPECIES_KRABBY, 25
# 20 "data//maps/Route10/scripts.pory"
	dowildbattle
# 21 "data//maps/Route10/scripts.pory"
	fadescreen 1
# 22 "data//maps/Route10/scripts.pory"
	removeobject 17
# 23 "data//maps/Route10/scripts.pory"
	fadescreen 0
# 24 "data//maps/Route10/scripts.pory"
	release
	return


Route10_EventScript_Rival::
# 30 "data//maps/Route10/scripts.pory"
	lock
# 31 "data//maps/Route10/scripts.pory"
	load_field_pic 16, 190, 98
# 32 "data//maps/Route10/scripts.pory"
	msgbox Route10_Text_Rival1
# 33 "data//maps/Route10/scripts.pory"
	closemessage
# 34 "data//maps/Route10/scripts.pory"
	destroy_field_pic 16
# 35 "data//maps/Route10/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 36 "data//maps/Route10/scripts.pory"
	waitmovement 0
# 37 "data//maps/Route10/scripts.pory"
	faceplayer
# 38 "data//maps/Route10/scripts.pory"
	load_field_pic 16, 190, 98
# 39 "data//maps/Route10/scripts.pory"
	msgbox Route10_Text_Rival2
# 40 "data//maps/Route10/scripts.pory"
	closemessage
# 41 "data//maps/Route10/scripts.pory"
	destroy_field_pic 16
# 42 "data//maps/Route10/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL4, Route10_Text_RivalLost
# 43 "data//maps/Route10/scripts.pory"
	load_field_pic 16, 190, 98
# 44 "data//maps/Route10/scripts.pory"
	msgbox Route10_Text_Rival3
# 45 "data//maps/Route10/scripts.pory"
	closemessage
# 46 "data//maps/Route10/scripts.pory"
	destroy_field_pic 16
# 47 "data//maps/Route10/scripts.pory"
	fadescreen 1
# 48 "data//maps/Route10/scripts.pory"
	setflag FLAG_ROUTE10_HIDE_RIVAL
# 49 "data//maps/Route10/scripts.pory"
	removeobject 1
# 50 "data//maps/Route10/scripts.pory"
	fadescreen 0
# 51 "data//maps/Route10/scripts.pory"
	release
	return


Route10_Text_Rival1::
# 58 "data//maps/Route10/scripts.pory"
	.string "I love the beach$"

Route10_Text_Rival2::
# 62 "data//maps/Route10/scripts.pory"
	.string "What are you doing here? So what I\n"
	.string "stole the keys?$"

Route10_Text_RivalLost::
# 66 "data//maps/Route10/scripts.pory"
	.string "How do you always win?$"

Route10_Text_Rival3::
# 70 "data//maps/Route10/scripts.pory"
	.string "Take the stupid keys and screw off$"
