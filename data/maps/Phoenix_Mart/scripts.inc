Phoenix_Mart_MapScripts::
	.byte 0


	.align 2
# 3 "data/maps/Phoenix_Mart/scripts.pory"
Phoenix_Mart_Mart_Shop:
# 4 "data/maps/Phoenix_Mart/scripts.pory"
	.2byte ITEM_LEMONADE
# 5 "data/maps/Phoenix_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

Phoenix_Mart_EventScript_Clerk::
# 9 "data/maps/Phoenix_Mart/scripts.pory"
	lock
# 10 "data/maps/Phoenix_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/Phoenix_Mart/scripts.pory"
	checkitem ITEM_KEG
# 12 "data/maps/Phoenix_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Phoenix_Mart_EventScript_Clerk_3
Phoenix_Mart_EventScript_Clerk_1:
# 38 "data/maps/Phoenix_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 39 "data/maps/Phoenix_Mart/scripts.pory"
	waitmessage
# 40 "data/maps/Phoenix_Mart/scripts.pory"
	pokemart Phoenix_Mart_Mart_Shop
# 41 "data/maps/Phoenix_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 42 "data/maps/Phoenix_Mart/scripts.pory"
	release
	end

Phoenix_Mart_EventScript_Clerk_2:
# 13 "data/maps/Phoenix_Mart/scripts.pory"
	showmoneybox 0, 0
# 14 "data/maps/Phoenix_Mart/scripts.pory"
	msgbox Phoenix_Mart_Text_ClerkKeg, MSGBOX_YESNO
# 15 "data/maps/Phoenix_Mart/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Phoenix_Mart_EventScript_Clerk_6
# 34 "data/maps/Phoenix_Mart/scripts.pory"
	msgbox Phoenix_Mart_Text_ClerkKegNo
# 35 "data/maps/Phoenix_Mart/scripts.pory"
	hidemoneybox
	goto Phoenix_Mart_EventScript_Clerk_1

Phoenix_Mart_EventScript_Clerk_3:
# 12 "data/maps/Phoenix_Mart/scripts.pory"
	goto_if_unset FLAG_PLEDGE_HAS_KEG, Phoenix_Mart_EventScript_Clerk_2
	goto Phoenix_Mart_EventScript_Clerk_1

Phoenix_Mart_EventScript_Clerk_6:
# 16 "data/maps/Phoenix_Mart/scripts.pory"
	checkmoney 69
# 17 "data/maps/Phoenix_Mart/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Phoenix_Mart_EventScript_Clerk_9
# 28 "data/maps/Phoenix_Mart/scripts.pory"
	msgbox Phoenix_Mart_Text_ClerkKegShortMoney
# 29 "data/maps/Phoenix_Mart/scripts.pory"
	hidemoneybox
# 30 "data/maps/Phoenix_Mart/scripts.pory"
	release
	end

Phoenix_Mart_EventScript_Clerk_9:
# 18 "data/maps/Phoenix_Mart/scripts.pory"
	removemoney 69
# 19 "data/maps/Phoenix_Mart/scripts.pory"
	updatemoneybox
# 20 "data/maps/Phoenix_Mart/scripts.pory"
	playse SE_SHOP
# 21 "data/maps/Phoenix_Mart/scripts.pory"
	waitse
# 22 "data/maps/Phoenix_Mart/scripts.pory"
	hidemoneybox
# 23 "data/maps/Phoenix_Mart/scripts.pory"
	giveitem ITEM_KEG
# 24 "data/maps/Phoenix_Mart/scripts.pory"
	msgbox Phoenix_Mart_Text_ClerkKegSold
# 25 "data/maps/Phoenix_Mart/scripts.pory"
	release
	end


Phoenix_Mart_Text_ClerkKeg::
# 46 "data/maps/Phoenix_Mart/scripts.pory"
	.string "Hey kid, you look like you like to party,\n"
	.string "you want to buy my last keg full of\l"
	.string "beer? I'll sell it to you for 69 bucks.$"

Phoenix_Mart_Text_ClerkKegSold::
# 50 "data/maps/Phoenix_Mart/scripts.pory"
	.string "It's yours! Don't drink it all at the\n"
	.string "same place haha!$"

Phoenix_Mart_Text_ClerkKegShortMoney::
# 54 "data/maps/Phoenix_Mart/scripts.pory"
	.string "Sorry, looks like you need some more\n"
	.string "money.$"

Phoenix_Mart_Text_ClerkKegNo::
# 58 "data/maps/Phoenix_Mart/scripts.pory"
	.string "That's fine, but these kegs are selling\n"
	.string "out fast...$"
