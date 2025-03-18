Peccadum_HarenaeAureae_MapScripts::
	.byte 0


Peccadum_HarenaeAureae_Script_Dancer::
# 10 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 11 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 12 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_Dancer1
# 13 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 14 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer, MSGBOX_YESNO
# 15 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_2
# 126 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 127 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
Peccadum_HarenaeAureae_Script_Dancer_1:
# 129 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end

Peccadum_HarenaeAureae_Script_Dancer_2:
# 16 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 17 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	multichoice 0, 0, MULTI_SALTYSPITOON_GET_WAGER, TRUE
# 18 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_RESULT
# 19 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, Peccadum_HarenaeAureae_Script_Dancer_6
# 36 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, Peccadum_HarenaeAureae_Script_Dancer_7
# 53 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, Peccadum_HarenaeAureae_Script_Dancer_8
# 70 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, Peccadum_HarenaeAureae_Script_Dancer_9
# 87 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, Peccadum_HarenaeAureae_Script_Dancer_10
# 104 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, Peccadum_HarenaeAureae_Script_Dancer_11
# 121 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 6, Peccadum_HarenaeAureae_Script_Dancer_12
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_6:
# 20 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1
# 21 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_13
# 32 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 33 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 34 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_7:
# 37 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10
# 38 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_16
# 49 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 50 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 51 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_8:
# 54 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100
# 55 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_19
# 66 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 67 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 68 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_9:
# 71 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1000
# 72 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_22
# 83 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 84 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 85 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_10:
# 88 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10000
# 89 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_25
# 100 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 101 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 102 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_11:
# 105 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100000
# 106 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_28
# 117 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 118 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 119 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_12:
# 122 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_13:
# 22 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1
# 23 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 24 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 25 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 26 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 27 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 28 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 29 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 30 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_16:
# 39 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10
# 40 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 41 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 42 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 43 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 44 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 45 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 46 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 47 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_19:
# 56 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100
# 57 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 58 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 59 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 60 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 61 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 62 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 63 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 64 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_22:
# 73 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1000
# 74 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 75 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 76 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 77 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 78 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 79 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 80 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 81 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_25:
# 90 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10000
# 91 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 92 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 93 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 94 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 95 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 96 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 97 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 98 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_28:
# 107 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100000
# 108 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 109 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 110 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 111 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 112 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 113 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 114 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 115 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1


Peccadum_HarenaeAureae_Script_CrashOutMan::
# 134 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 135 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 136 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 137 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_HarenaeAureae_Script_CrashOutMan_2
Peccadum_HarenaeAureae_Script_CrashOutMan_1:
# 142 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_CrashOut2
# 143 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 144 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 145 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 146 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end

Peccadum_HarenaeAureae_Script_CrashOutMan_2:
# 138 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_CrashOut1
# 139 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 140 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	giveitem ITEM_COIN_CASE
	goto Peccadum_HarenaeAureae_Script_CrashOutMan_1


Peccadum_HarenaeAureae_Script_Dealer1::
# 152 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 153 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 154 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerOpen
# 155 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 156 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 157 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 158 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_Dealer2::
# 163 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 164 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 165 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerOpen
# 166 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 167 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 168 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 169 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_Dealer3::
# 174 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 175 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 176 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerBusy
# 177 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 178 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 179 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 180 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_DealerHiLoKabuto::
# 185 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 198 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Text_Dancer1::
# 203 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Hey baby! How you doin?$"

Peccadum_HarenaeAureae_Text_TipDancer::
# 207 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Would you like to leave a tip?$"

Peccadum_HarenaeAureae_Text_TipDancerNoMoney::
# 211 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Guess I don't have enough! Better get\n"
	.string "going!$"

Peccadum_HarenaeAureae_Text_TipDancer2::
# 215 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Thanks baby!$"

Peccadum_HarenaeAureae_Text_CrashOut1::
# 220 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "I can't believe it! I lost everything! I\n"
	.string "will never gamble again. Take this!$"

Peccadum_HarenaeAureae_Text_CrashOut2::
# 225 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "That stupid little box ruined my life! I\n"
	.string "lost my job, my house, my family, and\l"
	.string "more gambling. It's your problem now!$"

Peccadum_HarenaeAureae_Text_DealerOpen::
# 229 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Hello. I am the High Low Kabuto table\n"
	.string "dealer. If you would like to play please\l"
	.string "have a seat and enter your wager.$"

Peccadum_HarenaeAureae_Text_DealerBusy::
# 233 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Please do not interrupt the current\n"
	.string "game.$"
