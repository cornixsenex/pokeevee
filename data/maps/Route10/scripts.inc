Route10_MapScripts::
	.byte 0


Route10_EventScript_Krabby::
	lock
	playmoncry SPECIES_KRABBY, 0
	setflag FLAG_ROUTE10_HIDE_KRABBY
	waitmoncry
	setwildbattle SPECIES_KRABBY, 25
	dowildbattle
	fadescreen 1
	removeobject 17
	fadescreen 0
	release
	return


Route10_EventScript_Rival::
	lock
	load_field_pic 16, 190, 98
	msgbox Route10_Text_Rival1
	closemessage
	destroy_field_pic 16
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	faceplayer
	load_field_pic 16, 190, 98
	msgbox Route10_Text_Rival2
	closemessage
	destroy_field_pic 16
	setvar VAR_MUGSHOT_ID, MUGSHOT_BLUE
	trainerbattle_no_intro TRAINER_RIVAL4, Route10_Text_RivalLost
	load_field_pic 16, 190, 98
	msgbox Route10_Text_Rival3
	closemessage
	destroy_field_pic 16
	fadescreen 1
	setflag FLAG_ROUTE10_HIDE_RIVAL
	removeobject 1
	fadescreen 0
	release
	return


Route10_Text_Rival1::
	.string "I love the beach$"

Route10_Text_Rival2::
	.string "What are you doing here? So what I\n"
	.string "stole the keys?$"

Route10_Text_RivalLost::
	.string "How do you always win?$"

Route10_Text_Rival3::
	.string "Take the stupid keys and screw off$"
