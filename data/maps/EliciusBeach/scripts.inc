EliciusBeach_MapScripts::
# 8 "data//maps/EliciusBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data//maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_ROUTE9_CLEARBLOCK, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data//maps/EliciusBeach/scripts.pory"
	setflag FLAG_ROUTE9_CLEARBLOCK
	return


EliciusBeach_EventScript_Misty::
# 18 "data//maps/EliciusBeach/scripts.pory"
	lock
# 19 "data//maps/EliciusBeach/scripts.pory"
	faceplayer
# 20 "data//maps/EliciusBeach/scripts.pory"
	checktrainerflag TRAINER_RIVAL4
	goto_if 0, EliciusBeach_EventScript_Misty_2
# 31 "data//maps/EliciusBeach/scripts.pory"
	msgbox EliciusBeach_Text_Misty3
# 32 "data//maps/EliciusBeach/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 33 "data//maps/EliciusBeach/scripts.pory"
	waitmovement 0
# 34 "data//maps/EliciusBeach/scripts.pory"
	removeobject 1
# 35 "data//maps/EliciusBeach/scripts.pory"
	setflag FLAG_ELICIUS_BEACH_HIDE_MISTY
EliciusBeach_EventScript_Misty_1:
# 38 "data//maps/EliciusBeach/scripts.pory"
	release
	return

EliciusBeach_EventScript_Misty_2:
# 22 "data//maps/EliciusBeach/scripts.pory"
	goto_if_set FLAG_ROUTE10_HIDE_RIVAL, EliciusBeach_EventScript_Misty_5
# 27 "data//maps/EliciusBeach/scripts.pory"
	msgbox EliciusBeach_Text_Misty2
	goto EliciusBeach_EventScript_Misty_1

EliciusBeach_EventScript_Misty_5:
# 23 "data//maps/EliciusBeach/scripts.pory"
	msgbox EliciusBeach_Text_Misty1
# 24 "data//maps/EliciusBeach/scripts.pory"
	clearflag FLAG_ROUTE10_HIDE_RIVAL
	goto EliciusBeach_EventScript_Misty_1


EliciusBeach_Text_Misty1::
# 42 "data//maps/EliciusBeach/scripts.pory"
	.string "Please help some weirdo stole our keys!$"

EliciusBeach_Text_Misty2::
# 46 "data//maps/EliciusBeach/scripts.pory"
	.string "I think he went down the beach$"

EliciusBeach_Text_Misty3::
# 50 "data//maps/EliciusBeach/scripts.pory"
	.string "Thanks!$"

EliciusBeach_Text_MistyIntro::
# 54 "data//maps/EliciusBeach/scripts.pory"
	.string "Lets battle$"

EliciusBeach_Text_MistyLost::
# 60 "data//maps/EliciusBeach/scripts.pory"
	.string "I've lost$"

EliciusBeach_Text_MistyPost::
# 65 "data//maps/EliciusBeach/scripts.pory"
	.string "You've already beaten me$"
