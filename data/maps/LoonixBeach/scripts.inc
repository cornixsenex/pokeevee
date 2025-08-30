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
	giveitem ITEM_POTION, 1
# 24 "data/maps/LoonixBeach/scripts.pory"
	closemessage
# 25 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 4
# 26 "data/maps/LoonixBeach/scripts.pory"
	closemessage
	end


LoonixBeach_Script_Sign2::
# 31 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_BIG_HAMMER, 1
# 32 "data/maps/LoonixBeach/scripts.pory"
	closemessage
	end


LoonixBeach_Script_Sign3::
# 37 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_TRIVIS_POTESTATIS, 1
# 38 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_TRIVIS_SAPIENTIAE, 1
# 39 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_TRIVIS_FORTITUDINIS, 1
# 40 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD1, 1
# 41 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD2, 1
# 42 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD3, 1
# 43 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD4, 1
# 44 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD5, 1
# 45 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD6, 1
# 46 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD7, 1
# 47 "data/maps/LoonixBeach/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD8, 1
# 48 "data/maps/LoonixBeach/scripts.pory"
	closemessage
	end


LoonixBeach_Text_BlueFight::
# 52 "data/maps/LoonixBeach/scripts.pory"
	.string "My first Pokeball is a BEAST BALL$"

LoonixBeach_Text_BlueLost::
# 56 "data/maps/LoonixBeach/scripts.pory"
	.string "I wonder why my face looks like that.$"
