EliciusBeach_MapScripts::
	.byte 0


EliciusBeach_EventScript_Misty::
# 11 "data//maps/EliciusBeach/scripts.pory"
	lock
# 12 "data//maps/EliciusBeach/scripts.pory"
	faceplayer
# 13 "data//maps/EliciusBeach/scripts.pory"
	checktrainerflag TRAINER_RIVAL4
	goto_if 0, EliciusBeach_EventScript_Misty_2
# 24 "data//maps/EliciusBeach/scripts.pory"
	msgbox EliciusBeach_Text_Misty3
# 25 "data//maps/EliciusBeach/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 26 "data//maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 27 "data//maps/EliciusBeach/scripts.pory"
	removeobject 1
# 28 "data//maps/EliciusBeach/scripts.pory"
	setflag FLAG_ELICIUS_BEACH_HIDE_MISTY
EliciusBeach_EventScript_Misty_1:
# 31 "data//maps/EliciusBeach/scripts.pory"
	release
	return

EliciusBeach_EventScript_Misty_2:
# 15 "data//maps/EliciusBeach/scripts.pory"
	goto_if_set FLAG_ROUTE10_HIDE_RIVAL, EliciusBeach_EventScript_Misty_5
# 20 "data//maps/EliciusBeach/scripts.pory"
	msgbox EliciusBeach_Text_Misty2
	goto EliciusBeach_EventScript_Misty_1

EliciusBeach_EventScript_Misty_5:
# 16 "data//maps/EliciusBeach/scripts.pory"
	msgbox EliciusBeach_Text_Misty1
# 17 "data//maps/EliciusBeach/scripts.pory"
	clearflag FLAG_ROUTE10_HIDE_RIVAL
	goto EliciusBeach_EventScript_Misty_1


EliciusBeach_Text_Misty1::
# 35 "data//maps/EliciusBeach/scripts.pory"
	.string "Please help some weirdo stole our keys!$"

EliciusBeach_Text_Misty2::
# 39 "data//maps/EliciusBeach/scripts.pory"
	.string "I think he went down the beach$"

EliciusBeach_Text_Misty3::
# 43 "data//maps/EliciusBeach/scripts.pory"
	.string "Thanks!$"

EliciusBeach_Text_MistyIntro::
# 47 "data//maps/EliciusBeach/scripts.pory"
	.string "Lets battle$"

EliciusBeach_Text_MistyLost::
# 53 "data//maps/EliciusBeach/scripts.pory"
	.string "I've lost$"

EliciusBeach_Text_MistyPost::
# 58 "data//maps/EliciusBeach/scripts.pory"
	.string "You've already beaten me$"
