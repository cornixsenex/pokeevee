Peccadum_HarenaeAureae_MapScripts::
	.byte 0


Peccadum_HarenaeAureae_Script_Dancer::
# 8 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 9 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 10 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_Dancer1
# 11 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 12 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_TipDancer, MSGBOX_YESNO
# 13 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_2
Peccadum_HarenaeAureae_Script_Dancer_1:
# 124 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end

Peccadum_HarenaeAureae_Script_Dancer_2:
# 14 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 15 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	multichoice 0, 0, MULTI_SALTYSPITOON_GET_WAGER, TRUE
# 16 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, Peccadum_HarenaeAureae_Script_Dancer_6
# 34 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, Peccadum_HarenaeAureae_Script_Dancer_7
# 51 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, Peccadum_HarenaeAureae_Script_Dancer_8
# 68 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, Peccadum_HarenaeAureae_Script_Dancer_9
# 85 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, Peccadum_HarenaeAureae_Script_Dancer_10
# 102 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, Peccadum_HarenaeAureae_Script_Dancer_11
# 119 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 6, Peccadum_HarenaeAureae_Script_Dancer_12
Peccadum_HarenaeAureae_Script_Dancer_4:
# 122 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_6:
# 18 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1
# 19 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_13
# 30 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 31 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_TipDancerNoMoney
# 32 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_4

Peccadum_HarenaeAureae_Script_Dancer_7:
# 35 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10
# 36 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_16
# 47 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 48 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_TipDancerNoMoney
# 49 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_4

Peccadum_HarenaeAureae_Script_Dancer_8:
# 52 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100
# 53 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_19
# 64 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 65 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_TipDancerNoMoney
# 66 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_4

Peccadum_HarenaeAureae_Script_Dancer_9:
# 69 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1000
# 70 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_22
# 81 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 82 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_TipDancerNoMoney
# 83 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_4

Peccadum_HarenaeAureae_Script_Dancer_10:
# 86 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10000
# 87 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_25
# 98 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 99 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_TipDancerNoMoney
# 100 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_4

Peccadum_HarenaeAureae_Script_Dancer_11:
# 103 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100000
# 104 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_28
# 115 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 116 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_TipDancerNoMoney
# 117 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_4

Peccadum_HarenaeAureae_Script_Dancer_12:
# 120 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	goto Peccadum_HarenaeAureae_Script_Dancer_4

Peccadum_HarenaeAureae_Script_Dancer_13:
# 20 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1
# 21 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 22 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 23 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 24 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 25 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_TipDancer2
# 26 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 27 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 28 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_4

Peccadum_HarenaeAureae_Script_Dancer_16:
# 37 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10
# 38 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 39 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 40 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 41 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 42 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_TipDancer2
# 43 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 44 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 45 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_4

Peccadum_HarenaeAureae_Script_Dancer_19:
# 54 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100
# 55 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 56 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 57 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 58 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 59 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_TipDancer2
# 60 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 61 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 62 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_4

Peccadum_HarenaeAureae_Script_Dancer_22:
# 71 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1000
# 72 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 73 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 74 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 75 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 76 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_TipDancer2
# 77 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 78 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 79 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_4

Peccadum_HarenaeAureae_Script_Dancer_25:
# 88 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10000
# 89 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 90 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 91 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 92 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 93 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_TipDancer2
# 94 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 95 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 96 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_4

Peccadum_HarenaeAureae_Script_Dancer_28:
# 105 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100000
# 106 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 107 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 108 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 109 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 110 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaAureae_Text_TipDancer2
# 111 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 112 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 113 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_4


Peccadum_HarenaAureae_Text_Dancer1::
# 128 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Hey baby! How you doin?$"

Peccadum_HarenaAureae_Text_TipDancer::
# 132 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Would you like to leave a tip?$"

Peccadum_HarenaAureae_Text_TipDancerNoMoney::
# 136 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Guess I don't have enough! Better get\n"
	.string "going!$"

Peccadum_HarenaAureae_Text_TipDancer2::
# 140 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Thanks baby!$"
