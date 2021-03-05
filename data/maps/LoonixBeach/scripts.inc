LoonixBeach_MapScripts::
	.byte 0


LoonixBeach_EventScript_Trainer_Blue::
	lockall
	faceplayer
	message LoonixBeach_Text_BlueFight
	waitmessage
	setvar VAR_MUGSHOT_ID, MUGSHOT_BLUE
	trainerbattle_no_intro TRAINER_BLUE, LoonixBeach_Text_BlueLost
	setflag FLAG_UNUSED_0x025
	releaseall
	end


LoonixBeach_EventScript_Item_Surfboard::
	lock
	finditem ITEM_SURFBOARD
	setflag FLAG_UNUSED_0x023
	release
	end


LoonixBeach_Text_BlueFight::
	.string "My first Pokeball is a BEAST BALL$"

LoonixBeach_Text_BlueLost::
	.string "I wonder why my face looks like that.$"
