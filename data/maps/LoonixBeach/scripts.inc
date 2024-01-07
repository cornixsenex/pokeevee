LoonixBeach_MapScripts::
	.byte 0


LoonixBeach_EventScript_Trainer_Blue::
# 5 "data/maps/LoonixBeach/scripts.pory"
	lockall
# 6 "data/maps/LoonixBeach/scripts.pory"
	faceplayer
# 7 "data/maps/LoonixBeach/scripts.pory"
	message LoonixBeach_Text_BlueFight
# 8 "data/maps/LoonixBeach/scripts.pory"
	waitmessage
# 9 "data/maps/LoonixBeach/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_BLUE
# 10 "data/maps/LoonixBeach/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL1, LoonixBeach_Text_BlueLost
# 11 "data/maps/LoonixBeach/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 12 "data/maps/LoonixBeach/scripts.pory"
	releaseall
	end


LoonixBeach_EventScript_Item_Surfboard::
# 17 "data/maps/LoonixBeach/scripts.pory"
	lock
# 18 "data/maps/LoonixBeach/scripts.pory"
	finditem ITEM_SURFBOARD
# 19 "data/maps/LoonixBeach/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 20 "data/maps/LoonixBeach/scripts.pory"
	release
	end


LoonixBeach_Text_BlueFight::
# 24 "data/maps/LoonixBeach/scripts.pory"
	.string "My first Pokeball is a BEAST BALL$"

LoonixBeach_Text_BlueLost::
# 28 "data/maps/LoonixBeach/scripts.pory"
	.string "I wonder why my face looks like that.$"
