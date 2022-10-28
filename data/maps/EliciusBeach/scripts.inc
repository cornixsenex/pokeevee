EliciusBeach_MapScripts::
	.byte 0


EliciusBeach_EventScript_Misty::
	lock
	faceplayer
	checktrainerflag TRAINER_RIVAL4
	goto_if 0, EliciusBeach_EventScript_Misty_2
	msgbox EliciusBeach_Text_Misty3
	applymovement 1, Common_Movement_WalkUp
	waitmovement 0
	removeobject 1
	setflag FLAG_ELICIUS_BEACH_HIDE_MISTY
EliciusBeach_EventScript_Misty_1:
	release
	return

EliciusBeach_EventScript_Misty_2:
	goto_if_set FLAG_ROUTE10_HIDE_RIVAL, EliciusBeach_EventScript_Misty_5
	msgbox EliciusBeach_Text_Misty2
	goto EliciusBeach_EventScript_Misty_1

EliciusBeach_EventScript_Misty_5:
	msgbox EliciusBeach_Text_Misty1
	clearflag FLAG_ROUTE10_HIDE_RIVAL
	goto EliciusBeach_EventScript_Misty_1


EliciusBeach_Text_Misty1::
	.string "Please help some weirdo stole our keys!$"

EliciusBeach_Text_Misty2::
	.string "I think he went down the beach$"

EliciusBeach_Text_Misty3::
	.string "Thanks!$"

EliciusBeach_Text_MistyIntro::
	.string "Lets battle$"

EliciusBeach_Text_MistyLost::
	.string "I've lost$"

EliciusBeach_Text_MistyPost::
	.string "You've already beaten me$"
