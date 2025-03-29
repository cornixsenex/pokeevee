Urbia_BikeShop_MapScripts::
	.byte 0


Urbia_BikeShop_Script_Salesman::
# 8 "data//maps/Urbia_BikeShop/scripts.pory"
	lock
# 9 "data//maps/Urbia_BikeShop/scripts.pory"
	checkitem ITEM_BICYCLE, 1
# 10 "data//maps/Urbia_BikeShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Urbia_BikeShop_Script_Salesman_1
# 28 "data//maps/Urbia_BikeShop/scripts.pory"
	msgbox Urbia_BikeShop_Text_Salesman4
# 29 "data//maps/Urbia_BikeShop/scripts.pory"
	closemessage
# 30 "data//maps/Urbia_BikeShop/scripts.pory"
	release
	end

Urbia_BikeShop_Script_Salesman_1:
# 12 "data//maps/Urbia_BikeShop/scripts.pory"
	goto_if_unset FLAG_URBIA_BIKESHOP_INTROD, Urbia_BikeShop_Script_Salesman_5
# 23 "data//maps/Urbia_BikeShop/scripts.pory"
	msgbox Urbia_BikeShop_Text_Salesman3
Urbia_BikeShop_Script_Salesman_4:
# 25 "data//maps/Urbia_BikeShop/scripts.pory"
	call Urbia_BikeShop_Script_SellBike
	return

Urbia_BikeShop_Script_Salesman_5:
# 14 "data//maps/Urbia_BikeShop/scripts.pory"
	setflag FLAG_URBIA_BIKESHOP_INTROD
# 15 "data//maps/Urbia_BikeShop/scripts.pory"
	msgbox Urbia_BikeShop_Text_Salesman1
# 16 "data//maps/Urbia_BikeShop/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 17 "data//maps/Urbia_BikeShop/scripts.pory"
	waitmovement 0
# 19 "data//maps/Urbia_BikeShop/scripts.pory"
	msgbox Urbia_BikeShop_Text_Salesman2
	goto Urbia_BikeShop_Script_Salesman_4


Urbia_BikeShop_Script_SellBike::
# 37 "data//maps/Urbia_BikeShop/scripts.pory"
	showmoneybox 17, 0
# 38 "data//maps/Urbia_BikeShop/scripts.pory"
	msgbox Urbia_BikeShop_Text_BuyBike, MSGBOX_YESNO
# 39 "data//maps/Urbia_BikeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Urbia_BikeShop_Script_SellBike_2
# 57 "data//maps/Urbia_BikeShop/scripts.pory"
	msgbox Urbia_BikeShop_Text_SalesmanComeBack
Urbia_BikeShop_Script_SellBike_1:
# 59 "data//maps/Urbia_BikeShop/scripts.pory"
	closemessage
# 60 "data//maps/Urbia_BikeShop/scripts.pory"
	release
	end

Urbia_BikeShop_Script_SellBike_2:
# 41 "data//maps/Urbia_BikeShop/scripts.pory"
	checkmoney 5000
# 42 "data//maps/Urbia_BikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Urbia_BikeShop_Script_SellBike_5
# 52 "data//maps/Urbia_BikeShop/scripts.pory"
	msgbox Urbia_BikeShop_Text_NotEnoughMoney
# 53 "data//maps/Urbia_BikeShop/scripts.pory"
	hidemoneybox
# 54 "data//maps/Urbia_BikeShop/scripts.pory"
	msgbox Urbia_BikeShop_Text_SalesmanComeBack
	goto Urbia_BikeShop_Script_SellBike_1

Urbia_BikeShop_Script_SellBike_5:
# 43 "data//maps/Urbia_BikeShop/scripts.pory"
	removemoney 5000
# 44 "data//maps/Urbia_BikeShop/scripts.pory"
	updatemoneybox
# 45 "data//maps/Urbia_BikeShop/scripts.pory"
	playse SE_SHOP
# 46 "data//maps/Urbia_BikeShop/scripts.pory"
	waitse
# 47 "data//maps/Urbia_BikeShop/scripts.pory"
	hidemoneybox
# 48 "data//maps/Urbia_BikeShop/scripts.pory"
	giveitem ITEM_BICYCLE
# 49 "data//maps/Urbia_BikeShop/scripts.pory"
	msgbox Urbia_BikeShop_Text_SoldBike
	goto Urbia_BikeShop_Script_SellBike_1


Urbia_BikeShop_Script_Worker::
# 65 "data//maps/Urbia_BikeShop/scripts.pory"
	lock
# 66 "data//maps/Urbia_BikeShop/scripts.pory"
	faceplayer
# 67 "data//maps/Urbia_BikeShop/scripts.pory"
	msgbox Urbia_BikeShop_Text_Worker
# 68 "data//maps/Urbia_BikeShop/scripts.pory"
	closemessage
# 69 "data//maps/Urbia_BikeShop/scripts.pory"
	release
	end


Urbia_BikeShop_Script_Book::
# 74 "data//maps/Urbia_BikeShop/scripts.pory"
	lock
# 75 "data//maps/Urbia_BikeShop/scripts.pory"
	msgbox Urbia_BikeShop_Text_Book
# 76 "data//maps/Urbia_BikeShop/scripts.pory"
	closemessage
# 77 "data//maps/Urbia_BikeShop/scripts.pory"
	release
	end


Urbia_BikeShop_Text_Book::
# 81 "data//maps/Urbia_BikeShop/scripts.pory"
	.string "It's a technical manual for maintenance\n"
	.string "and repairing bicycles. Seems\l"
	.string "complicated...better get going!$"

Urbia_BikeShop_Text_Worker::
# 85 "data//maps/Urbia_BikeShop/scripts.pory"
	.string "I am a certified bike technician but\n"
	.string "since those bicycles are made so well I\l"
	.string "hardly ever get to work on them. Maybe\l"
	.string "one day the factory will start to\l"
	.string "purposely lower the quality of their\l"
	.string "bicycles so they'll finally start to\l"
	.string "break down and I can get some work!$"

Urbia_BikeShop_Text_Salesman1::
# 89 "data//maps/Urbia_BikeShop/scripts.pory"
	.string "I can't believe how slow business has\n"
	.string "been. These bikes were selling faster\l"
	.string "than hotcakes back when the Via Magna\l"
	.string "was first built but now that everyone\l"
	.string "has their own bike no one comes in to\l"
	.string "buy them anymore. I think the factory\l"
	.string "makes them too well! They never break\l"
	.string "down...never need repair...$"

Urbia_BikeShop_Text_Salesman2::
# 93 "data//maps/Urbia_BikeShop/scripts.pory"
	.string "What's that? You say you do not own a\n"
	.string "bike? My friend, welcome! You've come to\l"
	.string "the right place! You'll find we sell the\l"
	.string "finest bicycles at a fair price,\l"
	.string "enjoyment guaranteed!$"

Urbia_BikeShop_Text_Salesman3::
# 97 "data//maps/Urbia_BikeShop/scripts.pory"
	.string "My friend, welcome back to our cycle\n"
	.string "shop. Are you ready to buy one of our\l"
	.string "bikes?$"

Urbia_BikeShop_Text_BuyBike::
# 101 "data//maps/Urbia_BikeShop/scripts.pory"
	.string "Our starter model comes in racing red\n"
	.string "and is on sale for five thousand\l"
	.string "dollars. Would you like to purchase this\l"
	.string "bicycle?$"

Urbia_BikeShop_Text_SoldBike::
# 105 "data//maps/Urbia_BikeShop/scripts.pory"
	.string "Congratulations, sir, on your new bike.\n"
	.string "Be sure to come back here if it breaks\l"
	.string "down!$"

Urbia_BikeShop_Text_SalesmanComeBack::
# 109 "data//maps/Urbia_BikeShop/scripts.pory"
	.string "Come back whenever you're ready to buy\n"
	.string "one of our bikes. Have a nice day,\l"
	.string "goodbye.$"

Urbia_BikeShop_Text_Salesman4::
# 113 "data//maps/Urbia_BikeShop/scripts.pory"
	.string "Hello again, my friend. How is that bike\n"
	.string "been treating you? OK? I'm sure you\l"
	.string "feel like a real stud riding along the\l"
	.string "road on that magnificent racing red\l"
	.string "bike.$"

Urbia_BikeShop_Text_NotEnoughMoney::
# 117 "data//maps/Urbia_BikeShop/scripts.pory"
	.string "My friend, it seems you lack sufficient\n"
	.string "funds to purchase our racing red\l"
	.string "bicycle.$"
