Peccadum_HarenaeAureae_MapScripts::
	.byte 0


Peccadum_HarenaeAureae_Script_Dancer::
# 27 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 28 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 29 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_Dancer1
# 30 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 31 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer, MSGBOX_YESNO
# 32 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_2
# 143 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 144 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
Peccadum_HarenaeAureae_Script_Dancer_1:
# 146 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end

Peccadum_HarenaeAureae_Script_Dancer_2:
# 33 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 34 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	multichoice 0, 0, MULTI_SALTYSPITOON_GET_WAGER, TRUE
# 35 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_RESULT
# 36 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, Peccadum_HarenaeAureae_Script_Dancer_6
# 53 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, Peccadum_HarenaeAureae_Script_Dancer_7
# 70 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, Peccadum_HarenaeAureae_Script_Dancer_8
# 87 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, Peccadum_HarenaeAureae_Script_Dancer_9
# 104 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, Peccadum_HarenaeAureae_Script_Dancer_10
# 121 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, Peccadum_HarenaeAureae_Script_Dancer_11
# 138 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 6, Peccadum_HarenaeAureae_Script_Dancer_12
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_6:
# 37 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1
# 38 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_13
# 49 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 50 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 51 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_7:
# 54 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10
# 55 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_16
# 66 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 67 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 68 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_8:
# 71 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100
# 72 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_19
# 83 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 84 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 85 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_9:
# 88 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1000
# 89 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_22
# 100 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 101 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 102 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_10:
# 105 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10000
# 106 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_25
# 117 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 118 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 119 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_11:
# 122 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100000
# 123 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_28
# 134 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 135 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 136 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_12:
# 139 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_13:
# 39 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1
# 40 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 41 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 42 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 43 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 44 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 45 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 46 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 47 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_16:
# 56 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10
# 57 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 58 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 59 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 60 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 61 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 62 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 63 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 64 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_19:
# 73 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100
# 74 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 75 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 76 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 77 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 78 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 79 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 80 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 81 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_22:
# 90 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1000
# 91 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 92 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 93 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 94 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 95 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 96 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 97 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 98 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_25:
# 107 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10000
# 108 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 109 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 110 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 111 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 112 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 113 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 114 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 115 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_28:
# 124 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100000
# 125 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 126 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 127 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 128 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 129 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 130 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 131 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 132 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1


Peccadum_HarenaeAureae_Script_CrashOutMan::
# 151 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 152 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 153 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 154 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_HarenaeAureae_Script_CrashOutMan_2
Peccadum_HarenaeAureae_Script_CrashOutMan_1:
# 159 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_CrashOut2
# 160 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 161 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 162 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 163 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end

Peccadum_HarenaeAureae_Script_CrashOutMan_2:
# 155 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_CrashOut1
# 156 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 157 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	giveitem ITEM_COIN_CASE
	goto Peccadum_HarenaeAureae_Script_CrashOutMan_1


Peccadum_HarenaeAureae_Script_Dealer1::
# 169 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 170 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 171 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 172 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerOpen_TakeSeat
# 173 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 174 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 175 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 176 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_Dealer2::
# 181 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 182 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 183 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 184 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerOpen_TakeSeat
# 185 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 186 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 187 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 188 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_Dealer3::
# 193 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 194 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 195 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerBusy
# 196 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 197 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 198 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 199 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_DealerHiLoKabuto::
# 204 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 206 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 208 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Start, MSGBOX_YESNO
# 210 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_2
# 214 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_Game
Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_1:
# 217 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end

Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_2:
# 211 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_End
	goto Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_1


Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_Game::
# 224 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return


DealerHiLoKabuto_Script_GetWager::
# 236 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_B, 0
# 237 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 238 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 239 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 240 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	multichoice 0, 0, MULTI_SALTYSPITOON_GET_WAGER, TRUE
# 241 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 242 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_TEMP_B
# 243 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, DealerHiLoKabuto_Script_GetWager_2
# 257 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, DealerHiLoKabuto_Script_GetWager_3
# 271 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, DealerHiLoKabuto_Script_GetWager_4
# 285 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, DealerHiLoKabuto_Script_GetWager_5
# 299 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, DealerHiLoKabuto_Script_GetWager_6
# 313 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, DealerHiLoKabuto_Script_GetWager_7
# 327 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 6, DealerHiLoKabuto_Script_GetWager_8
	return

DealerHiLoKabuto_Script_GetWager_2:
# 244 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1
# 245 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_9
# 253 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 254 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 255 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_GetWager_3:
# 258 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10
# 259 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_12
# 267 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 268 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 269 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return

DealerHiLoKabuto_Script_GetWager_4:
# 272 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100
# 273 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_15
# 281 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 282 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 283 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return

DealerHiLoKabuto_Script_GetWager_5:
# 286 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1000
# 287 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_18
# 295 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 296 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 297 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return

DealerHiLoKabuto_Script_GetWager_6:
# 300 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10000
# 301 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_21
# 309 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 310 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 311 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return

DealerHiLoKabuto_Script_GetWager_7:
# 314 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100000
# 315 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_24
# 323 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 324 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 325 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return

DealerHiLoKabuto_Script_GetWager_8:
# 328 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 329 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_GetWager_9:
# 246 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1
# 247 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 248 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 249 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 250 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 251 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	return

DealerHiLoKabuto_Script_GetWager_12:
# 260 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10
# 261 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 262 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 263 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 264 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 265 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	return

DealerHiLoKabuto_Script_GetWager_15:
# 274 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100
# 275 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 276 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 277 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 278 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 279 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	return

DealerHiLoKabuto_Script_GetWager_18:
# 288 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1000
# 289 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 290 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 291 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 292 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 293 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	return

DealerHiLoKabuto_Script_GetWager_21:
# 302 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10000
# 303 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 304 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 305 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 306 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 307 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	return

DealerHiLoKabuto_Script_GetWager_24:
# 316 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100000
# 317 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 318 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 319 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 320 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 321 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	return


DealerHiLoKabuto_Script_GameBrain::
# 335 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_ResetGame
# 337 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 338 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt DealerHiLoKabuto_Script_GameBrain_2
DealerHiLoKabuto_Script_GameBrain_1:
# 342 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	goto_if_set FLAG_TEMP_B, DealerHiLoKabuto_Script_GameBrain_5
# 345 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_KabutoLo
DealerHiLoKabuto_Script_GameBrain_4:
# 349 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 350 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	copyvar VAR_TEMP_E, VAR_RESULT
# 352 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Script_RemoveCard
DealerHiLoKabuto_Script_GameBrain_10:
# 355 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 356 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_E
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_10
# 357 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	copyvar VAR_TEMP_D, VAR_RESULT
# 360 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	goto_if_set FLAG_TEMP_B, DealerHiLoKabuto_Script_GameBrain_13
DealerHiLoKabuto_Script_GameBrain_12:
# 369 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_E
# 370 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_D
# 372 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 10
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_16
# 372 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_16
# 375 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
DealerHiLoKabuto_Script_GameBrain_15:
# 377 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_D, 10
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_25
# 377 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_D, 0
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_25
# 380 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceDealerCard
DealerHiLoKabuto_Script_GameBrain_24:
# 383 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_D
	goto_if_gt DealerHiLoKabuto_Script_GameBrain_33
# 386 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_DealerWin
DealerHiLoKabuto_Script_GameBrain_32:
# 389 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_PlayAgain
	return

DealerHiLoKabuto_Script_GameBrain_2:
# 339 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_B
	goto DealerHiLoKabuto_Script_GameBrain_1

DealerHiLoKabuto_Script_GameBrain_5:
# 343 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_KabutoHi
	goto DealerHiLoKabuto_Script_GameBrain_4

DealerHiLoKabuto_Script_GameBrain_13:
# 361 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_22
DealerHiLoKabuto_Script_GameBrain_21:
# 364 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_D, 0
	goto_if_eq DealerHiLoKabuto_Script_GameBrain_30
	goto DealerHiLoKabuto_Script_GameBrain_12

DealerHiLoKabuto_Script_GameBrain_16:
# 373 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto DealerHiLoKabuto_Script_GameBrain_15

DealerHiLoKabuto_Script_GameBrain_22:
# 362 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_E, 10
	goto DealerHiLoKabuto_Script_GameBrain_21

DealerHiLoKabuto_Script_GameBrain_25:
# 378 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceDealerKabuto
	goto DealerHiLoKabuto_Script_GameBrain_24

DealerHiLoKabuto_Script_GameBrain_30:
# 365 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_D, 10
	goto DealerHiLoKabuto_Script_GameBrain_12

DealerHiLoKabuto_Script_GameBrain_33:
# 384 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_PlayerWin
	goto DealerHiLoKabuto_Script_GameBrain_32


DealerHiLoKabuto_Script_ResetGame::
# 394 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_D, 0
# 395 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_E, 0
# 396 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_1
# 397 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_2
# 398 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_3
# 399 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_4
# 400 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_5
# 401 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_6
# 402 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_7
# 403 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_8
# 404 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_9
# 405 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_A
# 406 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_B
	return


HiLoKabuto_Script_RemoveCard::
# 411 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_RESULT
# 412 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, HiLoKabuto_Script_RemoveCard_3
# 414 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, HiLoKabuto_Script_RemoveCard_4
# 416 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, HiLoKabuto_Script_RemoveCard_5
# 418 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, HiLoKabuto_Script_RemoveCard_6
# 420 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, HiLoKabuto_Script_RemoveCard_7
# 422 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, HiLoKabuto_Script_RemoveCard_8
# 424 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 6, HiLoKabuto_Script_RemoveCard_9
# 426 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 7, HiLoKabuto_Script_RemoveCard_10
# 428 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 8, HiLoKabuto_Script_RemoveCard_11
# 430 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 9, HiLoKabuto_Script_RemoveCard_12
HiLoKabuto_Script_RemoveCard_1:
	return

HiLoKabuto_Script_RemoveCard_3:
# 413 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_A
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_4:
# 415 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_1
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_5:
# 417 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_2
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_6:
# 419 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_3
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_7:
# 421 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_4
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_8:
# 423 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_5
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_9:
# 425 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_6
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_10:
# 427 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_7
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_11:
# 429 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_8
	goto HiLoKabuto_Script_RemoveCard_1

HiLoKabuto_Script_RemoveCard_12:
# 431 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_9
	goto HiLoKabuto_Script_RemoveCard_1


DealerHiLoKabuto_Script_PlayerWin::
# 437 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 438 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_PlayerWin
# 439 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_TEMP_B
# 440 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, DealerHiLoKabuto_Script_PlayerWin_3
# 442 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, DealerHiLoKabuto_Script_PlayerWin_4
# 444 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, DealerHiLoKabuto_Script_PlayerWin_5
# 446 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, DealerHiLoKabuto_Script_PlayerWin_6
# 448 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, DealerHiLoKabuto_Script_PlayerWin_7
# 450 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, DealerHiLoKabuto_Script_PlayerWin_8
# 453 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Script_PlayerWin_Text_0
# 454 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
DealerHiLoKabuto_Script_PlayerWin_1:
# 456 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 457 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 458 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 459 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

DealerHiLoKabuto_Script_PlayerWin_3:
# 441 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 2
	goto DealerHiLoKabuto_Script_PlayerWin_1

DealerHiLoKabuto_Script_PlayerWin_4:
# 443 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 20
	goto DealerHiLoKabuto_Script_PlayerWin_1

DealerHiLoKabuto_Script_PlayerWin_5:
# 445 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 200
	goto DealerHiLoKabuto_Script_PlayerWin_1

DealerHiLoKabuto_Script_PlayerWin_6:
# 447 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 2000
	goto DealerHiLoKabuto_Script_PlayerWin_1

DealerHiLoKabuto_Script_PlayerWin_7:
# 449 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 20000
	goto DealerHiLoKabuto_Script_PlayerWin_1

DealerHiLoKabuto_Script_PlayerWin_8:
# 451 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 200000
	goto DealerHiLoKabuto_Script_PlayerWin_1


DealerHiLoKabuto_Script_PlayAgain::
# 464 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_PlayAgain, MSGBOX_YESNO
# 465 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_PlayAgain_1
# 468 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_PlayAgain_1:
# 466 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return


DealerHiLoKabuto_Script_End::
# 473 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Bye
# 474 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 475 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


DealerHiLoKabuto_Script_PlayerWin_Text_0:
# 453 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "ERROR:\n Bottom of PlayerWin switch$"

Peccadum_HarenaeAureae_Text_Dancer1::
# 479 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Hey baby! How you doin?$"

Peccadum_HarenaeAureae_Text_TipDancer::
# 483 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Would you like to leave a tip?$"

Peccadum_HarenaeAureae_Text_TipDancerNoMoney::
# 487 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Guess I don't have enough! Better get\n"
	.string "going!$"

Peccadum_HarenaeAureae_Text_TipDancer2::
# 491 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Thanks baby!$"

Peccadum_HarenaeAureae_Text_CrashOut1::
# 496 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "I can't believe it! I lost everything! I\n"
	.string "will never gamble again. Take this!$"

Peccadum_HarenaeAureae_Text_CrashOut2::
# 501 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "That stupid little box ruined my life! I\n"
	.string "lost my job, my house, my family, and\l"
	.string "more gambling. It's your problem now!$"

Peccadum_HarenaeAureae_Text_DealerOpen_TakeSeat::
# 505 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "If you would like to play please have a\n"
	.string "seat and enter your wager.$"

Peccadum_HarenaeAureae_Text_DealerBusy::
# 509 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Please do not interrupt the current\n"
	.string "game.$"

Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro::
# 513 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Hello. I am the High Low Kabuto table\n"
	.string "dealer.$"

Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Start::
# 517 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Are you here to gamble?$"

Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Bye::
# 521 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Have a nice day. Hope to see you again!$"

DealerHiLoKabuto_Text_KabutoHi::
# 525 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Kabuto will be a high card this game.$"

DealerHiLoKabuto_Text_KabutoLo::
# 529 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Kabuto will be a low card this game.$"

DealerHiLoKabuto_Text_AnnouncePlayerCard::
# 533 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "{PLAYER} got {STR_VAR_1}!$"

DealerHiLoKabuto_Text_AnnouncePlayerKabuto::
# 537 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "{PLAYER} got Kabuto!$"

DealerHiLoKabuto_Text_AnnounceDealerCard::
# 541 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Dealer got {STR_VAR_2}!$"

DealerHiLoKabuto_Text_AnnounceDealerKabuto::
# 545 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Dealer got Kabuto!$"

DealerHiLoKabuto_Text_PlayerWin::
# 549 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Congratulations! You win your wager!$"

DealerHiLoKabuto_Text_DealerWin::
# 553 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "So sorry but looks like you've lost this\n"
	.string "hand.$"

DealerHiLoKabuto_Text_PlayAgain::
# 557 "data//maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Would you like me to deal you in again?$"
