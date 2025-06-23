Route10_MapScripts::
# 17 "data/maps/Route10/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route10_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/Route10/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_Route10_F
	return


Route10_Script_Transition_ActaTranquilla::
# 26 "data/maps/Route10/scripts.pory"
	setvar VAR_TEMP_5, 2
# 27 "data/maps/Route10/scripts.pory"
	special TransitionMapMusic
# 28 "data/maps/Route10/scripts.pory"
	special ShowMapNamePopup
	return


Route10_Script_Transition_MareTranquillum::
# 32 "data/maps/Route10/scripts.pory"
	setvar VAR_TEMP_5, 3
# 33 "data/maps/Route10/scripts.pory"
	special TransitionMapMusic
# 34 "data/maps/Route10/scripts.pory"
	special ShowMapNamePopup
	return


Route10_EventScript_Krabby::
# 38 "data/maps/Route10/scripts.pory"
	lock
# 39 "data/maps/Route10/scripts.pory"
	playmoncry SPECIES_KRABBY, 0
# 40 "data/maps/Route10/scripts.pory"
	setflag FLAG_ROUTE10_HIDE_KRABBY
# 41 "data/maps/Route10/scripts.pory"
	waitmoncry
# 42 "data/maps/Route10/scripts.pory"
	setwildbattle SPECIES_KRABBY, 25
# 43 "data/maps/Route10/scripts.pory"
	dowildbattle
# 44 "data/maps/Route10/scripts.pory"
	fadescreenswapbuffers 1
# 45 "data/maps/Route10/scripts.pory"
	removeobject 17
# 46 "data/maps/Route10/scripts.pory"
	fadescreenswapbuffers 0
# 47 "data/maps/Route10/scripts.pory"
	release
	return


Route10_EventScript_Rival::
# 51 "data/maps/Route10/scripts.pory"
	lock
# 52 "data/maps/Route10/scripts.pory"
	load_field_pic 16, 190, 98
# 53 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_Rival1
# 54 "data/maps/Route10/scripts.pory"
	closemessage
# 55 "data/maps/Route10/scripts.pory"
	destroy_field_pic 16
# 56 "data/maps/Route10/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 57 "data/maps/Route10/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route10/scripts.pory"
	faceplayer
# 59 "data/maps/Route10/scripts.pory"
	load_field_pic 16, 190, 98
# 60 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_Rival2
# 61 "data/maps/Route10/scripts.pory"
	closemessage
# 62 "data/maps/Route10/scripts.pory"
	destroy_field_pic 16
# 63 "data/maps/Route10/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL4, Route10_Text_RivalLost
# 64 "data/maps/Route10/scripts.pory"
	load_field_pic 16, 190, 98
# 65 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_Rival3
# 66 "data/maps/Route10/scripts.pory"
	closemessage
# 67 "data/maps/Route10/scripts.pory"
	destroy_field_pic 16
# 68 "data/maps/Route10/scripts.pory"
	fadescreenswapbuffers 1
# 69 "data/maps/Route10/scripts.pory"
	setflag FLAG_ROUTE10_HIDE_RIVAL
# 70 "data/maps/Route10/scripts.pory"
	removeobject 1
# 71 "data/maps/Route10/scripts.pory"
	fadescreenswapbuffers 0
# 72 "data/maps/Route10/scripts.pory"
	release
	return


Route10_Text_Rival1::
# 79 "data/maps/Route10/scripts.pory"
	.string "I love the beach$"

Route10_Text_Rival2::
# 83 "data/maps/Route10/scripts.pory"
	.string "What are you doing here? So what I\n"
	.string "stole the keys?$"

Route10_Text_RivalLost::
# 87 "data/maps/Route10/scripts.pory"
	.string "How do you always win?$"

Route10_Text_Rival3::
# 91 "data/maps/Route10/scripts.pory"
	.string "Take the stupid keys and screw off$"
