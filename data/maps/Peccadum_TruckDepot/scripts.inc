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
# 27 "data//maps/Peccadum_TruckDepot/scripts.pory"
	closemessage
# 28 "data//maps/Peccadum_TruckDepot/scripts.pory"
	release
	end

Peccadum_TruckDepot_Script_Secretary_2:
# 6 "data//maps/Peccadum_TruckDepot/scripts.pory"
	call Peccadum_TruckDepot_Script_StartTruckScene
	goto Peccadum_TruckDepot_Script_Secretary_1

Peccadum_TruckDepot_Script_Secretary_5:
# 13 "data//maps/Peccadum_TruckDepot/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 14 "data//maps/Peccadum_TruckDepot/scripts.pory"
	waitmovement 0
# 16 "data//maps/Peccadum_TruckDepot/scripts.pory"
	msgbox Peccadum_TruckDepot_Text_Letter1
# 17 "data//maps/Peccadum_TruckDepot/scripts.pory"
	closemessage
# 19 "data//maps/Peccadum_TruckDepot/scripts.pory"
	removeitem ITEM_CORNELIUS_LETTER
# 20 "data//maps/Peccadum_TruckDepot/scripts.pory"
	playse SE_EFFECTIVE
# 21 "data//maps/Peccadum_TruckDepot/scripts.pory"
	waitse
# 23 "data//maps/Peccadum_TruckDepot/scripts.pory"
	msgbox Peccadum_TruckDepot_Text_Letter2
# 24 "data//maps/Peccadum_TruckDepot/scripts.pory"
	setflag FLAG_PECCADUM_TRUCK_READY
# 25 "data//maps/Peccadum_TruckDepot/scripts.pory"
	call Peccadum_TruckDepot_Script_StartTruckScene
	goto Peccadum_TruckDepot_Script_Secretary_4


Peccadum_TruckDepot_Script_StartTruckScene::
# 34 "data//maps/Peccadum_TruckDepot/scripts.pory"
	msgbox Peccadum_TruckDepot_Text_Ready, MSGBOX_YESNO
# 35 "data//maps/Peccadum_TruckDepot/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_TruckDepot_Script_StartTruckScene_1
# 43 "data//maps/Peccadum_TruckDepot/scripts.pory"
	msgbox Peccadum_TruckDepot_Text_NotReady
# 44 "data//maps/Peccadum_TruckDepot/scripts.pory"
	closemessage
# 45 "data//maps/Peccadum_TruckDepot/scripts.pory"
	release
	end

Peccadum_TruckDepot_Script_StartTruckScene_1:
# 37 "data//maps/Peccadum_TruckDepot/scripts.pory"
	msgbox Peccadum_TruckDepot_Text_TruckScene
# 38 "data//maps/Peccadum_TruckDepot/scripts.pory"
	closemessage
# 39 "data//maps/Peccadum_TruckDepot/scripts.pory"
	fadescreen FADE_TO_BLACK
# 40 "data//maps/Peccadum_TruckDepot/scripts.pory"
	special DoPeccadumTruckScene
	return


Peccadum_TruckDepot_Text_Welcome::
# 50 "data//maps/Peccadum_TruckDepot/scripts.pory"
	.string "Hello! Welcome to United Kashmir Truck\n"
	.string "Company, UKTC for short.$"

Peccadum_TruckDepot_Text_Letter1::
# 54 "data//maps/Peccadum_TruckDepot/scripts.pory"
	.string "What's that? You have a letter there\n"
	.string "for me?$"

Peccadum_TruckDepot_Text_Letter2::
# 58 "data//maps/Peccadum_TruckDepot/scripts.pory"
	.string "Cornelius wrote this? I understand. No\n"
	.string "words need to be said I'll see it done.$"

Peccadum_TruckDepot_Text_Ready::
# 62 "data//maps/Peccadum_TruckDepot/scripts.pory"
	.string "Are you ready to depart Peccadum?$"

Peccadum_TruckDepot_Text_NotReady::
# 66 "data//maps/Peccadum_TruckDepot/scripts.pory"
	.string "That's fine. Return when you're ready to\n"
	.string "go. We have many trucks leaving every\l"
	.string "day.$"

Peccadum_TruckDepot_Text_TruckScene::
# 70 "data//maps/Peccadum_TruckDepot/scripts.pory"
	.string "We'll leave at once, I'll stow you in the\n"
	.string "back with all the cargo bound for Urbia.\l"
	.string "The ride can be a bit bumpy at times so\l"
	.string "please take care you don't break\l"
	.string "anything. And finally, while inspections\l"
	.string "are rare, it goes without saying we\l"
	.string "don't know you and had no idea you had\l"
	.string "stown away. That being said, lets go, no\l"
	.string "time to waste!$"
