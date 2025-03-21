Peccadum_PalatiumFelix_MapScripts::
	.byte 0


Peccadum_PalatiumFelix_Script_BlueRouletteDealer::
# 20 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 21 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 23 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro
# 25 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_1
# 26 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2
Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1:
# 31 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin, MSGBOX_YESNO
# 32 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4
# 35 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2:
# 27 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 28 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4:
# 33 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return


Peccadum_PalatiumFelix_Script_BlueRouletteBrain::
# 41 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
# 43 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
# 45 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 46 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3
# 48 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4
# 50 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5
# 52 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6
# 55 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0
# 56 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 57 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1:
# 62 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_2
	return

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3:
# 47 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4:
# 49 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5:
# 51 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6:
# 53 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1


Peccadum_PalatiumFelix_Script_GetCoinWager::
# 73 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Peccadum_PalatiumFelix_Script_GetCoinWager_2
Peccadum_PalatiumFelix_Script_GetCoinWager_1:
# 77 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 0
# 79 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 81 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 82 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 83 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_COIN_WAGER, TRUE
# 84 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 85 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_RESULT
# 86 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 88 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_GetCoinWager_6
# 103 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_GetCoinWager_7
# 117 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_GetCoinWager_8
# 131 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_GetCoinWager_9
# 145 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_GetCoinWager_10
# 159 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_GetCoinWager_11
# 172 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_GetCoinWager_12
Peccadum_PalatiumFelix_Script_GetCoinWager_4:
# 177 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0
# 178 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 179 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_GetCoinWager_2:
# 74 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setflag FLAG_TEMP_2
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_6:
# 89 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_13
# 97 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_2
# 98 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 99 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 100 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_7:
# 104 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_16
# 112 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 113 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 114 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_8:
# 118 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 100
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_19
# 126 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 127 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 128 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_9:
# 132 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_22
# 140 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 141 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 142 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_10:
# 146 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_25
# 154 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 155 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 156 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_11:
# 160 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 2500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_28
# 168 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 169 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 170 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_12:
# 173 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_2
# 174 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 175 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_13:
# 90 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 91 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 92 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 93 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 94 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_16:
# 105 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 106 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 107 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 108 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 109 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_19:
# 119 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 120 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 121 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 122 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 123 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_22:
# 133 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 134 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 135 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 136 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 137 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_25:
# 147 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 148 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 149 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 150 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 151 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_28:
# 161 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 162 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 163 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 164 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 165 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType::
# 185 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_1, 0
# 187 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType
# 188 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 189 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_TYPE, TRUE
# 190 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 192 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 194 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3
# 197 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4
# 200 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5
# 203 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6
Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1:
# 206 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7
# 209 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3:
# 195 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4:
# 198 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5:
# 201 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6:
# 204 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager::
# 215 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 217 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
# 219 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager
# 220 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 222 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 224 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 226 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_2
# 229 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3
# 232 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4
# 235 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_2:
# 227 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_RANGE_0_NUMBER, TRUE
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3:
# 230 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_RANGE_1_NUMBER, TRUE
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4:
# 233 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_RANGE_2_NUMBER, TRUE
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5:
# 236 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_RANGE_3_NUMBER, TRUE
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager::
# 249 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_4, 0
# 251 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager
# 252 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 254 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_COLOR, TRUE
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager::
# 262 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 264 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager
# 265 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 267 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 269 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 270 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 272 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2
# 280 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3
# 288 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4
# 296 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5
# 304 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6
# 307 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0
# 308 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 309 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2:
# 273 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0, MSGBOX_YESNO
# 274 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_8
# 277 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3:
# 281 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1, MSGBOX_YESNO
# 282 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_11
# 285 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4:
# 289 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2, MSGBOX_YESNO
# 290 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_14
# 293 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5:
# 297 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3, MSGBOX_YESNO
# 298 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_17
# 301 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6:
# 305 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_8:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_11:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_14:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_17:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteEnd::
# 315 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_2, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2
Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1:
# 363 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Bye
# 365 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 366 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 367 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 368 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 369 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2:
# 316 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 317 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Refund
# 318 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 319 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5
# 325 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6
# 331 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7
# 337 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8
# 343 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9
# 349 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10
# 356 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0
# 357 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 358 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5:
# 320 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5
# 321 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 322 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 323 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 324 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6:
# 326 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 25
# 327 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 328 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 329 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 330 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7:
# 332 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 100
# 333 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 334 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 335 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 336 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8:
# 338 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 500
# 339 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 340 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 341 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 342 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9:
# 344 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1000
# 345 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 346 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 347 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 348 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10:
# 350 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 2500
# 351 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 352 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 353 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 354 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1


Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0:
# 55 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB$"

Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0:
# 177 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nBottom of GetCoinWager$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0:
# 307 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB$"

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0:
# 356 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER OOB in RefundSwitch$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro::
# 373 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I am the Blue Roulette table dealer.$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin::
# 377 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to play a game of\n"
	.string "roulette?$"

Peccadum_PalatiumFelix_Text_NoCoins::
# 381 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Excuse me sir, but coins are required to\n"
	.string "play games at Palatium Felix. Please\l"
	.string "speak with the cashier to purchase\l"
	.string "more.$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType::
# 385 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "What kind of wager will you be placing?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager::
# 389 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A wager on a winning number pays thirty\n"
	.string "to one. Are you sure that you will place\l"
	.string "a wager on a single number?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager::
# 393 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The payout for a wager on color depends\n"
	.string "on which color you wager on. Both {COLOR RED}red\l"
	.string "{COLOR DARK_GRAY}and {COLOR BLUE}blue {COLOR DARK_GRAY}pay out at two to one while\l"
	.string "{COLOR GREEN}green {COLOR DARK_GRAY}pays out higher, fifteen to one.\l"
	.string "Are you sure that you will bet on color?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager::
# 397 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A winning bet on range pays three to\n"
	.string "one, except for zero and double zero\l"
	.string "which pays the same as {COLOR GREEN}green{COLOR DARK_GRAY}, fifteen\l"
	.string "to one. Are you sure you want to wager\l"
	.string "on range?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager::
# 401 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "There are thirty two individual spaces\n"
	.string "on the roulette wheel: numbers from one\l"
	.string "to thirty, single, and double nil. Which\l"
	.string "number will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager::
# 405 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which range of numbers will you wager\n"
	.string "on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager::
# 409 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which color will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0::
# 413 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of zero and double zero. This will\l"
	.string "payout at three to one. Are you\l"
	.string "certain?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1::
# 417 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers one through ten. This will\l"
	.string "payout at three to one. Will you confirm\l"
	.string "this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2::
# 421 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "eleven through twenty. This will payout\l"
	.string "at three to one. Will you confirm this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3::
# 425 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers from twenty one through\l"
	.string "thirty. The payout for this bet is three\l"
	.string "to one. Are you certain you want to\l"
	.string "place this bet?$"

CasinoDealer_Text_Refund::
# 429 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Here are the unwagered coins back for\n"
	.string "you.$"
