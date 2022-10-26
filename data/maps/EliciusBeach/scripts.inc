EliciusBeach_MapScripts::
	.byte 0


EliciusBeach_EventScript_Misty::
	lock
	faceplayer
	checktrainerflag TRAINER_MISTY
	goto_if 0, EliciusBeach_EventScript_Misty_2
EliciusBeach_EventScript_Misty_1:
	msgbox EliciusBeach_Text_MistyPost
	release
	return

EliciusBeach_EventScript_Misty_2:
	trainerbattle_single TRAINER_MISTY, EliciusBeach_Text_MistyIntro, EliciusBeach_Text_MistyLost
	goto EliciusBeach_EventScript_Misty_1


EliciusBeach_Text_MistyIntro::
	.string "Lets battle$"

EliciusBeach_Text_MistyLost::
	.string "I've lost$"

EliciusBeach_Text_MistyPost::
	.string "You've already beaten me$"
