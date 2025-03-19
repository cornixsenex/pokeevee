Peccadum_HarenaeAureae_MapScripts::
	.byte 0


Peccadum_HarenaeAureae_Script_Dancer::
# 33 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 34 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 35 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_Dancer1
# 36 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 37 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer, MSGBOX_YESNO
# 38 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_2
# 149 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 150 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
Peccadum_HarenaeAureae_Script_Dancer_1:
# 152 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end

Peccadum_HarenaeAureae_Script_Dancer_2:
# 39 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 40 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	multichoice 0, 0, MULTI_SALTYSPITOON_GET_WAGER, TRUE
# 41 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, Peccadum_HarenaeAureae_Script_Dancer_6
# 59 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, Peccadum_HarenaeAureae_Script_Dancer_7
# 76 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, Peccadum_HarenaeAureae_Script_Dancer_8
# 93 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, Peccadum_HarenaeAureae_Script_Dancer_9
# 110 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, Peccadum_HarenaeAureae_Script_Dancer_10
# 127 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, Peccadum_HarenaeAureae_Script_Dancer_11
# 144 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 6, Peccadum_HarenaeAureae_Script_Dancer_12
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_6:
# 43 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1
# 44 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_13
# 55 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 56 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 57 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_7:
# 60 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10
# 61 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_16
# 72 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 73 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 74 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_8:
# 77 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100
# 78 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_19
# 89 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 90 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 91 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_9:
# 94 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1000
# 95 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_22
# 106 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 107 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 108 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_10:
# 111 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10000
# 112 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_25
# 123 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 124 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 125 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_11:
# 128 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100000
# 129 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_28
# 140 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 141 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 142 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_12:
# 145 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_13:
# 45 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1
# 46 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 47 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 48 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 49 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 50 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 51 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 52 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 53 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_16:
# 62 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10
# 63 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 64 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 65 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 66 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 67 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 68 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 69 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 70 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_19:
# 79 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100
# 80 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 81 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 82 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 83 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 84 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 85 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 86 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 87 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_22:
# 96 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1000
# 97 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 98 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 99 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 100 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 101 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 102 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 103 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 104 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_25:
# 113 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10000
# 114 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 115 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 116 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 117 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 118 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 119 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 120 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 121 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_28:
# 130 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100000
# 131 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 132 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 133 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 134 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 135 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 136 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 137 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 138 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1


Peccadum_HarenaeAureae_Script_CrashOutMan::
# 157 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 158 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 159 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 160 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_HarenaeAureae_Script_CrashOutMan_2
Peccadum_HarenaeAureae_Script_CrashOutMan_1:
# 165 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_CrashOut2
# 166 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 167 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 168 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 169 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end

Peccadum_HarenaeAureae_Script_CrashOutMan_2:
# 161 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_CrashOut1
# 162 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 163 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	giveitem ITEM_COIN_CASE
	goto Peccadum_HarenaeAureae_Script_CrashOutMan_1


Peccadum_HarenaeAureae_Script_Dealer1::
# 175 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 176 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 177 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 178 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerOpen_TakeSeat
# 179 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 180 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 181 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 182 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_Dealer2::
# 187 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 188 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 189 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 190 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerOpen_TakeSeat
# 191 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 192 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 193 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 194 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_Dealer3::
# 199 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 200 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 201 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerBusy
# 202 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 203 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 204 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 205 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_DealerHiLoKabuto::
# 210 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 212 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 214 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Start, MSGBOX_YESNO
# 216 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_2
# 220 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_Game
Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_1:
# 223 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end

Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_2:
# 217 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_End
	goto Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_1


Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_Game::
# 230 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return


DealerHiLoKabuto_Script_GetWager::
# 242 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_B, 0
# 243 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 244 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 245 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 246 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	multichoice 0, 0, MULTI_SALTYSPITOON_GET_WAGER, TRUE
# 247 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 248 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_TEMP_B
# 249 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, DealerHiLoKabuto_Script_GetWager_2
# 263 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, DealerHiLoKabuto_Script_GetWager_3
# 277 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, DealerHiLoKabuto_Script_GetWager_4
# 291 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, DealerHiLoKabuto_Script_GetWager_5
# 305 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, DealerHiLoKabuto_Script_GetWager_6
# 319 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, DealerHiLoKabuto_Script_GetWager_7
# 333 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 6, DealerHiLoKabuto_Script_GetWager_8
	return

DealerHiLoKabuto_Script_GetWager_2:
# 250 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1
# 251 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_9
# 259 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 260 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 261 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_GetWager_3:
# 264 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10
# 265 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_12
# 273 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 274 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 275 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return

DealerHiLoKabuto_Script_GetWager_4:
# 278 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100
# 279 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_15
# 287 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 288 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 289 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return

DealerHiLoKabuto_Script_GetWager_5:
# 292 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1000
# 293 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_18
# 301 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 302 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 303 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return

DealerHiLoKabuto_Script_GetWager_6:
# 306 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10000
# 307 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_21
# 315 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 316 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 317 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return

DealerHiLoKabuto_Script_GetWager_7:
# 320 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100000
# 321 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_24
# 329 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 330 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 331 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return

DealerHiLoKabuto_Script_GetWager_8:
# 334 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 335 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_GetWager_9:
# 252 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1
# 253 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 254 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 255 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 256 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 257 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	return

DealerHiLoKabuto_Script_GetWager_12:
# 266 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10
# 267 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 268 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 269 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 270 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 271 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	return

DealerHiLoKabuto_Script_GetWager_15:
# 280 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100
# 281 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 282 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 283 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 284 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 285 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	return

DealerHiLoKabuto_Script_GetWager_18:
# 294 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1000
# 295 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 296 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 297 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 298 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 299 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	return

DealerHiLoKabuto_Script_GetWager_21:
# 308 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10000
# 309 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 310 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 311 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 312 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 313 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	return

DealerHiLoKabuto_Script_GetWager_24:
# 322 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100000
# 323 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 324 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 325 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 326 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 327 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	return


DealerHiLoKabuto_Script_GameBrain::
# 341 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_ResetGame
# 343 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 345 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 346 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	copyvar VAR_TEMP_E, VAR_RESULT
# 348 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Script_RemoveCard
DealerHiLoKabuto_Script_GameBrain_3:
# 351 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 352 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_E
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_3
# 353 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	copyvar VAR_TEMP_D, VAR_RESULT
# 356 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	goto_if_set FLAG_TEMP_B, DealerHiLoKabuto_Script_GameBrain_6
DealerHiLoKabuto_Script_GameBrain_5:
# 365 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_E
# 366 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_D
# 368 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 10
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_9
# 368 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_9
# 371 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
DealerHiLoKabuto_Script_GameBrain_8:
# 373 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_D, 10
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_18
# 373 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_D, 0
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_18
# 376 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceDealerCard
DealerHiLoKabuto_Script_GameBrain_17:
# 379 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_D
	goto_if_gt DealerHiLoKabuto_Script_GameBrain_26
# 382 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_DealerWin
DealerHiLoKabuto_Script_GameBrain_25:
# 385 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_PlayAgain
	return

DealerHiLoKabuto_Script_GameBrain_6:
# 357 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_15
DealerHiLoKabuto_Script_GameBrain_14:
# 360 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_D, 0
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_23
	goto DealerHiLoKabuto_Script_GameBrain_5

DealerHiLoKabuto_Script_GameBrain_9:
# 369 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto DealerHiLoKabuto_Script_GameBrain_8

DealerHiLoKabuto_Script_GameBrain_15:
# 358 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_E, 10
	goto DealerHiLoKabuto_Script_GameBrain_14

DealerHiLoKabuto_Script_GameBrain_18:
# 374 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceDealerKabuto
	goto DealerHiLoKabuto_Script_GameBrain_17

DealerHiLoKabuto_Script_GameBrain_23:
# 361 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_D, 10
	goto DealerHiLoKabuto_Script_GameBrain_5

DealerHiLoKabuto_Script_GameBrain_26:
# 380 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_PlayerWin
	goto DealerHiLoKabuto_Script_GameBrain_25


DealerHiLoKabuto_Script_ResetGame::
# 390 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_D, 0
# 391 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_E, 0
# 392 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_1
# 393 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_2
# 394 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_3
# 395 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_4
# 396 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_5
# 397 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_6
# 398 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_7
# 399 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_8
# 400 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_9
# 401 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_A
# 402 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_B
	return


HiLoKabuto_Script_RemoveCard::
# 407 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_RESULT
# 408 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, HiLoKabuto_Script_RemoveCard_3
# 410 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, HiLoKabuto_Script_RemoveCard_4
# 412 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, HiLoKabuto_Script_RemoveCard_5
# 414 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, HiLoKabuto_Script_RemoveCard_6
# 416 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, HiLoKabuto_Script_RemoveCard_7
# 418 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, HiLoKabuto_Script_RemoveCard_8
# 420 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 6, HiLoKabuto_Script_RemoveCard_9
# 422 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 7, HiLoKabuto_Script_RemoveCard_10
# 424 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 8, HiLoKabuto_Script_RemoveCard_11
# 426 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 9, HiLoKabuto_Script_RemoveCard_12
HiLoKabuto_Script_RemoveCard_1:
	return

HiLoKabuto_Script_RemoveCard_3:
# 409 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_A
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_4:
# 411 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_1
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_5:
# 413 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_2
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_6:
# 415 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_3
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_7:
# 417 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_4
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_8:
# 419 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_5
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_9:
# 421 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_6
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_10:
# 423 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_7
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_11:
# 425 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_8
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_12:
# 427 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_9
	goto HiLoKabuto_Script_RemoveCard_1


DealerHiLoKabuto_Script_PlayerWin::
# 433 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 434 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_PlayerWin
# 435 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_TEMP_B
# 436 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, DealerHiLoKabuto_Script_PlayerWin_3
# 438 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, DealerHiLoKabuto_Script_PlayerWin_4
# 440 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, DealerHiLoKabuto_Script_PlayerWin_5
# 442 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, DealerHiLoKabuto_Script_PlayerWin_6
# 444 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, DealerHiLoKabuto_Script_PlayerWin_7
# 446 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, DealerHiLoKabuto_Script_PlayerWin_8
# 449 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Script_PlayerWin_Text_0
# 450 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
DealerHiLoKabuto_Script_PlayerWin_1:
# 452 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 453 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 454 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 455 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

DealerHiLoKabuto_Script_PlayerWin_3:
# 437 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 2
	goto DealerHiLoKabuto_Script_PlayerWin_1

DealerHiLoKabuto_Script_PlayerWin_4:
# 439 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 20
	goto DealerHiLoKabuto_Script_PlayerWin_1

DealerHiLoKabuto_Script_PlayerWin_5:
# 441 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 200
	goto DealerHiLoKabuto_Script_PlayerWin_1

DealerHiLoKabuto_Script_PlayerWin_6:
# 443 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 2000
	goto DealerHiLoKabuto_Script_PlayerWin_1

DealerHiLoKabuto_Script_PlayerWin_7:
# 445 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 20000
	goto DealerHiLoKabuto_Script_PlayerWin_1

DealerHiLoKabuto_Script_PlayerWin_8:
# 447 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 200000
	goto DealerHiLoKabuto_Script_PlayerWin_1


DealerHiLoKabuto_Script_PlayAgain::
# 460 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_PlayAgain, MSGBOX_YESNO
# 461 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DealerHiLoKabuto_Script_PlayAgain_1
# 464 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_PlayAgain_1:
# 462 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return


DealerHiLoKabuto_Script_End::
# 469 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Bye
# 470 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 471 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_Gambler::
# 476 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 477 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 478 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_Gambler
# 479 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 14, Common_Movement_FaceRight
# 480 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 481 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 482 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_5HiLoKabuto::
# 487 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 488 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group_Text_Intro, MSGBOX_YESNO
# 489 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_HarenaeAureae_Script_5HiLoKabuto_1
# 492 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group5_Script_Brain
	return

Peccadum_HarenaeAureae_Script_5HiLoKabuto_1:
# 490 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return


HiLoKabuto_Group5_Script_Brain::
# 498 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
# 500 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_ResetGame
# 502 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 505 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_9, RandDigit
HiLoKabuto_Group5_Script_Brain_3:
# 508 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_8, RandDigit
# 509 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_Brain_3
HiLoKabuto_Group5_Script_Brain_7:
# 512 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_7, RandDigit
# 513 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_Brain_7
# 513 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_8
	goto_if_eq HiLoKabuto_Group5_Script_Brain_7
HiLoKabuto_Group5_Script_Brain_13:
# 516 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_6, RandDigit
# 517 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_Brain_13
# 517 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_8
	goto_if_eq HiLoKabuto_Group5_Script_Brain_13
# 517 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_7
	goto_if_eq HiLoKabuto_Group5_Script_Brain_13
HiLoKabuto_Group5_Script_Brain_21:
# 520 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_E, RandDigit
# 521 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_Brain_21
# 521 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_8
	goto_if_eq HiLoKabuto_Group5_Script_Brain_21
# 521 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_7
	goto_if_eq HiLoKabuto_Group5_Script_Brain_21
# 521 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_6
	goto_if_eq HiLoKabuto_Group5_Script_Brain_21
# 523 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	goto_if_set FLAG_TEMP_B, HiLoKabuto_Group5_Script_Brain_30
HiLoKabuto_Group5_Script_Brain_29:
# 542 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_E
# 543 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 10
	goto_if_eq HiLoKabuto_Group5_Script_Brain_33
# 543 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_33
# 546 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
HiLoKabuto_Group5_Script_Brain_32:
# 549 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_9
# 550 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, 10
	goto_if_eq HiLoKabuto_Group5_Script_Brain_42
# 550 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_42
# 553 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Card
HiLoKabuto_Group5_Script_Brain_41:
# 555 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_8
# 556 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq HiLoKabuto_Group5_Script_Brain_51
# 556 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_51
# 559 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Card
HiLoKabuto_Group5_Script_Brain_50:
# 561 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_TEMP_7
# 562 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, 10
	goto_if_eq HiLoKabuto_Group5_Script_Brain_60
# 562 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_60
# 565 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Card
HiLoKabuto_Group5_Script_Brain_59:
# 568 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_6
# 569 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, 10
	goto_if_eq HiLoKabuto_Group5_Script_Brain_69
# 569 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_69
# 572 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp4Card
HiLoKabuto_Group5_Script_Brain_68:
# 575 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_Brain_80
HiLoKabuto_Group5_Script_Brain_78:
# 579 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_E
	goto_if_gt HiLoKabuto_Group5_Script_Brain_113
HiLoKabuto_Group5_Script_Brain_107:
# 581 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_E
	goto_if_gt HiLoKabuto_Group5_Script_Brain_106
HiLoKabuto_Group5_Script_Brain_100:
# 583 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_E
	goto_if_gt HiLoKabuto_Group5_Script_Brain_99
HiLoKabuto_Group5_Script_Brain_93:
# 585 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_E
	goto_if_gt HiLoKabuto_Group5_Script_Brain_92
HiLoKabuto_Group5_Script_Brain_90:
# 588 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group5_Script_Brain_Text_0
HiLoKabuto_Group5_Script_Brain_76:
# 592 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group5_Script_PlayAgain
	return

HiLoKabuto_Group5_Script_Brain_30:
# 524 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_39
HiLoKabuto_Group5_Script_Brain_38:
# 527 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_48
HiLoKabuto_Group5_Script_Brain_47:
# 530 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_57
HiLoKabuto_Group5_Script_Brain_56:
# 533 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_66
HiLoKabuto_Group5_Script_Brain_65:
# 536 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_74
	goto HiLoKabuto_Group5_Script_Brain_29

HiLoKabuto_Group5_Script_Brain_33:
# 544 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto HiLoKabuto_Group5_Script_Brain_32

HiLoKabuto_Group5_Script_Brain_39:
# 525 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_E, 10
	goto HiLoKabuto_Group5_Script_Brain_38

HiLoKabuto_Group5_Script_Brain_42:
# 551 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Kabuto
	goto HiLoKabuto_Group5_Script_Brain_41

HiLoKabuto_Group5_Script_Brain_48:
# 528 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_9, 10
	goto HiLoKabuto_Group5_Script_Brain_47

HiLoKabuto_Group5_Script_Brain_51:
# 557 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Kabuto
	goto HiLoKabuto_Group5_Script_Brain_50

HiLoKabuto_Group5_Script_Brain_57:
# 531 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto HiLoKabuto_Group5_Script_Brain_56

HiLoKabuto_Group5_Script_Brain_60:
# 563 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Kabuto
	goto HiLoKabuto_Group5_Script_Brain_59

HiLoKabuto_Group5_Script_Brain_66:
# 534 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_7, 10
	goto HiLoKabuto_Group5_Script_Brain_65

HiLoKabuto_Group5_Script_Brain_69:
# 570 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp4Kabuto
	goto HiLoKabuto_Group5_Script_Brain_68

HiLoKabuto_Group5_Script_Brain_74:
# 537 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_6, 10
	goto HiLoKabuto_Group5_Script_Brain_29

HiLoKabuto_Group5_Script_Brain_77:
# 576 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group5_Script_PlayerWin
	goto HiLoKabuto_Group5_Script_Brain_76

HiLoKabuto_Group5_Script_Brain_79:
# 575 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_7
	goto_if_gt HiLoKabuto_Group5_Script_Brain_83
	goto HiLoKabuto_Group5_Script_Brain_78

HiLoKabuto_Group5_Script_Brain_80:
# 575 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_Brain_79
	goto HiLoKabuto_Group5_Script_Brain_78

HiLoKabuto_Group5_Script_Brain_83:
# 575 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_6
	goto_if_gt HiLoKabuto_Group5_Script_Brain_77
	goto HiLoKabuto_Group5_Script_Brain_78

HiLoKabuto_Group5_Script_Brain_86:
# 580 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler1Won
	goto HiLoKabuto_Group5_Script_Brain_76

HiLoKabuto_Group5_Script_Brain_87:
# 582 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler2Won
	goto HiLoKabuto_Group5_Script_Brain_76

HiLoKabuto_Group5_Script_Brain_88:
# 584 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler3Won
	goto HiLoKabuto_Group5_Script_Brain_76

HiLoKabuto_Group5_Script_Brain_89:
# 586 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler4Won
	goto HiLoKabuto_Group5_Script_Brain_76

HiLoKabuto_Group5_Script_Brain_91:
# 585 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_7
	goto_if_gt HiLoKabuto_Group5_Script_Brain_95
	goto HiLoKabuto_Group5_Script_Brain_90

HiLoKabuto_Group5_Script_Brain_92:
# 585 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_Brain_91
	goto HiLoKabuto_Group5_Script_Brain_90

HiLoKabuto_Group5_Script_Brain_95:
# 585 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_Brain_89
	goto HiLoKabuto_Group5_Script_Brain_90

HiLoKabuto_Group5_Script_Brain_98:
# 583 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_Brain_102
	goto HiLoKabuto_Group5_Script_Brain_93

HiLoKabuto_Group5_Script_Brain_99:
# 583 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_Brain_98
	goto HiLoKabuto_Group5_Script_Brain_93

HiLoKabuto_Group5_Script_Brain_102:
# 583 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_6
	goto_if_gt HiLoKabuto_Group5_Script_Brain_88
	goto HiLoKabuto_Group5_Script_Brain_93

HiLoKabuto_Group5_Script_Brain_105:
# 581 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_7
	goto_if_gt HiLoKabuto_Group5_Script_Brain_109
	goto HiLoKabuto_Group5_Script_Brain_100

HiLoKabuto_Group5_Script_Brain_106:
# 581 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_Brain_105
	goto HiLoKabuto_Group5_Script_Brain_100

HiLoKabuto_Group5_Script_Brain_109:
# 581 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_6
	goto_if_gt HiLoKabuto_Group5_Script_Brain_87
	goto HiLoKabuto_Group5_Script_Brain_100

HiLoKabuto_Group5_Script_Brain_112:
# 579 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_7
	goto_if_gt HiLoKabuto_Group5_Script_Brain_116
	goto HiLoKabuto_Group5_Script_Brain_107

HiLoKabuto_Group5_Script_Brain_113:
# 579 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_Brain_112
	goto HiLoKabuto_Group5_Script_Brain_107

HiLoKabuto_Group5_Script_Brain_116:
# 579 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_6
	goto_if_gt HiLoKabuto_Group5_Script_Brain_86
	goto HiLoKabuto_Group5_Script_Brain_107


HiLoKabuto_Group_Script_GetWager::
# 596 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_B, 0
# 597 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 598 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 599 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 600 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	multichoice 0, 0, MULTI_SALTYSPITOON_GET_WAGER, TRUE
# 601 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 602 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_TEMP_B
# 603 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, HiLoKabuto_Group_Script_GetWager_2
# 617 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, HiLoKabuto_Group_Script_GetWager_3
# 631 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, HiLoKabuto_Group_Script_GetWager_4
# 645 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, HiLoKabuto_Group_Script_GetWager_5
# 659 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, HiLoKabuto_Group_Script_GetWager_6
# 673 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, HiLoKabuto_Group_Script_GetWager_7
# 687 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 6, HiLoKabuto_Group_Script_GetWager_8
	return

HiLoKabuto_Group_Script_GetWager_2:
# 604 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1
# 605 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HiLoKabuto_Group_Script_GetWager_9
# 613 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 614 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 615 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
	return

HiLoKabuto_Group_Script_GetWager_3:
# 618 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10
# 619 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HiLoKabuto_Group_Script_GetWager_12
# 627 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 628 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 629 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group_Script_GetWager_4:
# 632 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100
# 633 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HiLoKabuto_Group_Script_GetWager_15
# 641 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 642 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 643 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
	return

HiLoKabuto_Group_Script_GetWager_5:
# 646 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1000
# 647 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HiLoKabuto_Group_Script_GetWager_18
# 655 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 656 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 657 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
	return

HiLoKabuto_Group_Script_GetWager_6:
# 660 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10000
# 661 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HiLoKabuto_Group_Script_GetWager_21
# 669 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 670 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 671 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
	return

HiLoKabuto_Group_Script_GetWager_7:
# 674 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100000
# 675 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HiLoKabuto_Group_Script_GetWager_24
# 683 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 684 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 685 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
	return

HiLoKabuto_Group_Script_GetWager_8:
# 688 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 689 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group_Script_GetWager_9:
# 606 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1
# 607 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 608 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 609 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 610 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group_Script_GetWager_12:
# 620 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10
# 621 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 622 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 623 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 624 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group_Script_GetWager_15:
# 634 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100
# 635 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 636 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 637 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 638 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group_Script_GetWager_18:
# 648 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1000
# 649 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 650 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 651 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 652 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group_Script_GetWager_21:
# 662 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10000
# 663 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 664 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 665 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 666 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group_Script_GetWager_24:
# 676 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100000
# 677 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 678 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 679 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 680 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return


HiLoKabuto_Group_Script_ResetGame::
# 694 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_E, 0
# 695 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_9, 0
# 696 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_8, 0
# 697 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_7, 0
# 698 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_6, 0
# 699 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_1
# 700 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_2
# 701 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_3
# 702 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_4
# 703 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_5
# 704 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_6
# 705 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_7
# 706 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_8
# 707 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_9
# 708 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_A
# 709 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_B
	return


HiLoKabuto_Script_DetermineHiOrLoKabuto::
# 714 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 715 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt HiLoKabuto_Script_DetermineHiOrLoKabuto_2
HiLoKabuto_Script_DetermineHiOrLoKabuto_1:
# 719 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	goto_if_set FLAG_TEMP_B, HiLoKabuto_Script_DetermineHiOrLoKabuto_5
# 722 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_KabutoLo
HiLoKabuto_Script_DetermineHiOrLoKabuto_4:
	return

HiLoKabuto_Script_DetermineHiOrLoKabuto_2:
# 716 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_B
	goto HiLoKabuto_Script_DetermineHiOrLoKabuto_1

HiLoKabuto_Script_DetermineHiOrLoKabuto_5:
# 720 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_KabutoHi
	goto HiLoKabuto_Script_DetermineHiOrLoKabuto_4


HiLoKabuto_Group5_Script_PlayerWin::
# 728 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 729 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayerWin
# 730 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_TEMP_B
# 731 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, HiLoKabuto_Group5_Script_PlayerWin_3
# 733 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, HiLoKabuto_Group5_Script_PlayerWin_4
# 735 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, HiLoKabuto_Group5_Script_PlayerWin_5
# 737 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, HiLoKabuto_Group5_Script_PlayerWin_6
# 739 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, HiLoKabuto_Group5_Script_PlayerWin_7
# 741 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, HiLoKabuto_Group5_Script_PlayerWin_8
# 744 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Script_PlayerWin_Text_0
# 745 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
HiLoKabuto_Group5_Script_PlayerWin_1:
# 747 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 748 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 749 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 750 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group5_Script_PlayerWin_3:
# 732 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 5
	goto HiLoKabuto_Group5_Script_PlayerWin_1

HiLoKabuto_Group5_Script_PlayerWin_4:
# 734 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 50
	goto HiLoKabuto_Group5_Script_PlayerWin_1

HiLoKabuto_Group5_Script_PlayerWin_5:
# 736 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 500
	goto HiLoKabuto_Group5_Script_PlayerWin_1

HiLoKabuto_Group5_Script_PlayerWin_6:
# 738 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 5000
	goto HiLoKabuto_Group5_Script_PlayerWin_1

HiLoKabuto_Group5_Script_PlayerWin_7:
# 740 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 50000
	goto HiLoKabuto_Group5_Script_PlayerWin_1

HiLoKabuto_Group5_Script_PlayerWin_8:
# 742 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 500000
	goto HiLoKabuto_Group5_Script_PlayerWin_1


HiLoKabuto_Group5_Script_PlayAgain::
# 755 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayAgain, MSGBOX_YESNO
# 756 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group5_Script_PlayAgain_1
# 759 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group5_Script_PlayAgain_1:
# 757 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group5_Script_Brain
	return


HiLoKabuto_Group_Script_End::
# 764 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group_Text_End
# 765 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 766 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


DealerHiLoKabuto_Script_PlayerWin_Text_0:
# 449 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "ERROR:\n Bottom of PlayerWin switch$"

HiLoKabuto_Group5_Script_Brain_Text_0:
# 588 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "ERROR\nDeclare gambler winner\nOOB$"

Peccadum_HarenaeAureae_Text_Dancer1::
# 772 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Hey baby! How you doin?$"

Peccadum_HarenaeAureae_Text_TipDancer::
# 776 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Would you like to leave a tip?$"

Peccadum_HarenaeAureae_Text_TipDancerNoMoney::
# 780 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Guess I don't have enough! Better get\n"
	.string "going!$"

Peccadum_HarenaeAureae_Text_TipDancer2::
# 784 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Thanks baby!$"

Peccadum_HarenaeAureae_Text_CrashOut1::
# 789 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "I can't believe it! I lost everything!\n"
	.string "May I never again game... take this!$"

Peccadum_HarenaeAureae_Text_CrashOut2::
# 794 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "That stupid little box ruined my life! I\n"
	.string "lost my job, my house, my family, and\l"
	.string "more gambling. It's your problem now!$"

Peccadum_HarenaeAureae_Text_Gambler::
# 798 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "There is no greater thrill than winning\n"
	.string "big!$"

Peccadum_HarenaeAureae_Text_DealerOpen_TakeSeat::
# 802 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "If you would like to play please have a\n"
	.string "seat and enter your wager.$"

Peccadum_HarenaeAureae_Text_DealerBusy::
# 806 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Please do not interrupt our current\n"
	.string "game$"

Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro::
# 810 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Hello. I am the High Low Kabuto table\n"
	.string "dealer.$"

Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Start::
# 814 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Are you here to gamble?$"

Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Bye::
# 818 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Have a nice day. Hope to see you again!$"

HiLoKabuto_Text_KabutoHi::
# 822 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "The high card for this hand is Kabuto.$"

HiLoKabuto_Text_KabutoLo::
# 826 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "The low card for this hand is Kabuto.$"

DealerHiLoKabuto_Text_AnnouncePlayerCard::
# 830 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "{PLAYER} got {STR_VAR_1}!$"

DealerHiLoKabuto_Text_AnnouncePlayerKabuto::
# 834 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "{PLAYER} got Kabuto!$"

DealerHiLoKabuto_Text_AnnounceDealerCard::
# 838 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Dealer got {STR_VAR_2}!$"

DealerHiLoKabuto_Text_AnnounceDealerKabuto::
# 842 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Dealer got Kabuto!$"

DealerHiLoKabuto_Text_PlayerWin::
# 846 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Congratulations! You win your wager!$"

DealerHiLoKabuto_Text_DealerWin::
# 850 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "So sorry but looks like you've lost this\n"
	.string "hand.$"

DealerHiLoKabuto_Text_PlayAgain::
# 854 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Would you like me to deal you in again?$"

HiLoKabuto_Group_Text_Intro::
# 858 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Joining our game of High Low Kabuto?$"

DealerHiLoKabuto_Text_AnnounceOp1Card::
# 862 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 1 got {STR_VAR_1}.$"

DealerHiLoKabuto_Text_AnnounceOp1Kabuto::
# 866 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 1 got Kabuto.$"

DealerHiLoKabuto_Text_AnnounceOp2Card::
# 870 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 2 got {STR_VAR_2}.$"

DealerHiLoKabuto_Text_AnnounceOp2Kabuto::
# 874 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 2 got Kabuto.$"

DealerHiLoKabuto_Text_AnnounceOp3Card::
# 878 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 3 got {STR_VAR_3}.$"

DealerHiLoKabuto_Text_AnnounceOp3Kabuto::
# 882 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 3 got Kabuto.$"

DealerHiLoKabuto_Text_AnnounceOp4Card::
# 886 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 4 got {STR_VAR_1}.$"

DealerHiLoKabuto_Text_AnnounceOp4Kabuto::
# 890 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 4 got Kabuto.$"

HiLoKabuto_Group_Text_PlayerWin::
# 894 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Congratulations {PLAYER}! You win\n"
	.string "this hand!$"

HiLoKabuto_Text_Gambler1Won::
# 898 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 1 won this hand.$"

HiLoKabuto_Text_Gambler2Won::
# 902 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 2 won this hand.$"

HiLoKabuto_Text_Gambler3Won::
# 906 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 3 won this hand.$"

HiLoKabuto_Text_Gambler4Won::
# 910 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 4 won this hand.$"

HiLoKabuto_Group_Text_PlayAgain::
# 914 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Would you like to wager another hand?$"

HiLoKabuto_Group_Text_End::
# 918 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Once you're ready to gamble, we'll be\n"
	.string "here.$"
