Peccadum_TruckDepot_MapScripts::
	.byte 0


Peccadum_TruckDepot_Script_Secretary::
# 4 "data//maps/Peccadum_TruckDepot/scripts.pory"
	lock
# 5 "data//maps/Peccadum_TruckDepot/scripts.pory"
	goto_if_set FLAG_PECCADUM_TRUCK_READY, Peccadum_TruckDepot_Script_Secretary_2
Peccadum_TruckDepot_Script_Secretary_1:
# 9 "data//maps/Peccadum_TruckDepot/scripts.pory"
	msgbox Peccadum_TruckDepot_Text_Welcome
# 11 "data//maps/Peccadum_TruckDepot/scripts.pory"
	checkitem ITEM_CORNELIUS_LETTER, 1
# 12 "data//maps/Peccadum_TruckDepot/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_TruckDepot_Script_Secretary_5
Peccadum_TruckDepot_Script_Secretary_4:
# 25 "data//maps/Peccadum_TruckDepot/scripts.pory"
	closemessage
# 26 "data//maps/Peccadum_TruckDepot/scripts.pory"
	release
	end

Peccadum_TruckDepot_Script_Secretary_2:
# 6 "data//maps/Peccadum_TruckDepot/scripts.pory"
	call Peccadum_TruckDepot_Script_StartTruckScene
	goto Peccadum_TruckDepot_Script_Secretary_1

Peccadum_TruckDepot_Script_Secretary_5:
# 14 "data//maps/Peccadum_TruckDepot/scripts.pory"
	msgbox Peccadum_TruckDepot_Text_Letter1
# 15 "data//maps/Peccadum_TruckDepot/scripts.pory"
	closemessage
# 17 "data//maps/Peccadum_TruckDepot/scripts.pory"
	removeitem ITEM_CORNELIUS_LETTER
# 18 "data//maps/Peccadum_TruckDepot/scripts.pory"
	playse SE_EFFECTIVE
# 19 "data//maps/Peccadum_TruckDepot/scripts.pory"
	waitse
# 21 "data//maps/Peccadum_TruckDepot/scripts.pory"
	msgbox Peccadum_TruckDepot_Text_Letter2
# 22 "data//maps/Peccadum_TruckDepot/scripts.pory"
	setflag FLAG_PECCADUM_TRUCK_READY
# 23 "data//maps/Peccadum_TruckDepot/scripts.pory"
	call Peccadum_TruckDepot_Script_StartTruckScene
	goto Peccadum_TruckDepot_Script_Secretary_4


Peccadum_TruckDepot_Script_StartTruckScene::
# 32 "data//maps/Peccadum_TruckDepot/scripts.pory"
	msgbox Peccadum_TruckDepot_Text_Ready, MSGBOX_YESNO
# 33 "data//maps/Peccadum_TruckDepot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_TruckDepot_Script_StartTruckScene_1
# 40 "data//maps/Peccadum_TruckDepot/scripts.pory"
	msgbox Peccadum_TruckDepot_Text_NotReady
# 41 "data//maps/Peccadum_TruckDepot/scripts.pory"
	closemessage
# 42 "data//maps/Peccadum_TruckDepot/scripts.pory"
	release
	end

Peccadum_TruckDepot_Script_StartTruckScene_1:
# 35 "data//maps/Peccadum_TruckDepot/scripts.pory"
	msgbox Peccadum_TruckDepot_Text_TruckScene
# 36 "data//maps/Peccadum_TruckDepot/scripts.pory"
	closemessage
# 37 "data//maps/Peccadum_TruckDepot/scripts.pory"
	special DoPeccadumTruckScene
	return


Peccadum_TruckDepot_Text_Welcome::
# 47 "data//maps/Peccadum_TruckDepot/scripts.pory"
	.string "Hello! Welcome to United Kashmir Truck\n"
	.string "Company, UKTC for short.$"

Peccadum_TruckDepot_Text_Letter1::
# 51 "data//maps/Peccadum_TruckDepot/scripts.pory"
	.string "What's that? You have a letter there\n"
	.string "for me?$"

Peccadum_TruckDepot_Text_Letter2::
# 55 "data//maps/Peccadum_TruckDepot/scripts.pory"
	.string "Cornelius wrote this? I understand. No\n"
	.string "words need to be said I'll see it done.$"

Peccadum_TruckDepot_Text_Ready::
# 59 "data//maps/Peccadum_TruckDepot/scripts.pory"
	.string "Are you ready to depart Peccadum?$"

Peccadum_TruckDepot_Text_NotReady::
# 63 "data//maps/Peccadum_TruckDepot/scripts.pory"
	.string "That's fine. Return when you're ready to\n"
	.string "go. We have many trucks leaving every\l"
	.string "day.$"

Peccadum_TruckDepot_Text_TruckScene::
# 67 "data//maps/Peccadum_TruckDepot/scripts.pory"
	.string "We'll leave at once, I'll stow you in the\n"
	.string "back with all the cargo bound for Urbia.\l"
	.string "The ride can be a bit bumpy at times so\l"
	.string "please take care you don't break\l"
	.string "anything. And finally, while inspection\l"
	.string "are rare, it goes without saying we\l"
	.string "don't know you and had no idea you had\l"
	.string "stown away. That being said, lets go, no\l"
	.string "time to waste!$"
