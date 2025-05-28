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
	trainerbattle_no_intro TRAINER_TEST_BATTLE, LoonixBeach_Text_BlueLost
# 10 "data/maps/LoonixBeach/scripts.pory"
	releaseall
	end


LoonixBeach_EventScript_Item_Surfboard::
# 15 "data/maps/LoonixBeach/scripts.pory"
	lock
# 16 "data/maps/LoonixBeach/scripts.pory"
	finditem ITEM_SURFBOARD
# 17 "data/maps/LoonixBeach/scripts.pory"
	setflag FLAG_LOONIXBEACH_GAVESURFBOARD
# 18 "data/maps/LoonixBeach/scripts.pory"
	release
	end


LoonixBeach_Script_Sign1::
# 23 "data/maps/LoonixBeach/scripts.pory"
	trainerbattle_no_intro TRAINER_TEST_BATTLE, LoonixBeach_Text_BlueLost
	end


LoonixBeach_Script_Sign2::
# 28 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 5
# 29 "data/maps/LoonixBeach/scripts.pory"
	closemessage
	end


LoonixBeach_Script_Sign3::
# 34 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_MASTER_BALL, 1
# 35 "data/maps/LoonixBeach/scripts.pory"
	closemessage
	end


LoonixBeach_Text_BlueFight::
# 39 "data/maps/LoonixBeach/scripts.pory"
	.string "My first Pokeball is a BEAST BALL$"

LoonixBeach_Text_BlueLost::
# 43 "data/maps/LoonixBeach/scripts.pory"
	.string "I wonder why my face looks like that.$"
