Phoenix_Mart_MapScripts::
	.byte 0


	.align 2
Phoenix_Mart_Mart_Shop:
	.2byte ITEM_LEMONADE
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

Phoenix_Mart_EventScript_Clerk::
	lock
	faceplayer
	checkitem ITEM_KEG
	compare VAR_RESULT, FALSE
	goto_if_eq Phoenix_Mart_EventScript_Clerk_3
Phoenix_Mart_EventScript_Clerk_1:
	message gText_HowMayIServeYou
	waitmessage
	pokemart Phoenix_Mart_Mart_Shop
	msgbox gText_PleaseComeAgain
	release
	end

Phoenix_Mart_EventScript_Clerk_2:
	showmoneybox 0, 0
	msgbox Phoenix_Mart_Text_ClerkKeg, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Phoenix_Mart_EventScript_Clerk_7
	msgbox Phoenix_Mart_Text_ClerkKegNo
Phoenix_Mart_EventScript_Clerk_6:
	closemessage
	goto Phoenix_Mart_EventScript_Clerk_1

Phoenix_Mart_EventScript_Clerk_3:
	goto_if_unset FLAG_PLEDGE_HAS_KEG, Phoenix_Mart_EventScript_Clerk_2
	goto Phoenix_Mart_EventScript_Clerk_1

Phoenix_Mart_EventScript_Clerk_7:
	checkmoney 69
	compare VAR_RESULT, TRUE
	goto_if_eq Phoenix_Mart_EventScript_Clerk_10
	msgbox Phoenix_Mart_Text_ClerkKegShortMoney
	goto Phoenix_Mart_EventScript_Clerk_6

Phoenix_Mart_EventScript_Clerk_10:
	removemoney 69
	updatemoneybox
	playse SE_SHOP
	waitse
	giveitem ITEM_KEG
	hidemoneybox
	msgbox Phoenix_Mart_Text_ClerkKegSold
	goto Phoenix_Mart_EventScript_Clerk_6


Phoenix_Mart_Text_ClerkKeg::
	.string "Hey kid, you look like you like to party,\n"
	.string "you want to buy my last keg full of\l"
	.string "beer? I'll sell it to you for 69 bucks.$"

Phoenix_Mart_Text_ClerkKegSold::
	.string "It's yours! Don't drink it all at the\n"
	.string "same place haha!$"

Phoenix_Mart_Text_ClerkKegShortMoney::
	.string "Sorry, looks like you need some more\n"
	.string "money.$"

Phoenix_Mart_Text_ClerkKegNo::
	.string "That's fine, but these kegs are selling\n"
	.string "out fast...$"
