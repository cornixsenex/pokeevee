Peccadum_PalatiumFelix_MapScripts::
	.byte 0


Peccadum_PalatiumFelix_Script_BlueRouletteDealer::
# 17 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 18 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 20 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro
# 22 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_1
# 23 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2
Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1:
# 28 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin, MSGBOX_YESNO
# 29 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4
# 32 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2:
# 24 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 25 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4:
# 30 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return


Peccadum_PalatiumFelix_Script_BlueRouletteBrain::
# 38 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
# 40 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
# 42 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 43 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_2
# 45 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3
# 47 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4
# 49 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5
# 52 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0
# 53 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 54 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_2:
# 44 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3:
# 46 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4:
# 48 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5:
# 50 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return


Peccadum_PalatiumFelix_Script_GetCoinWager::
# 68 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 0
# 70 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 72 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 73 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 74 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_COIN_WAGER, TRUE
# 75 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 76 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_RESULT
# 77 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 79 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_GetCoinWager_3
# 93 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_GetCoinWager_4
# 107 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_GetCoinWager_5
# 121 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_GetCoinWager_6
# 135 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_GetCoinWager_7
# 149 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_GetCoinWager_8
# 162 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_GetCoinWager_9
Peccadum_PalatiumFelix_Script_GetCoinWager_1:
# 166 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0
# 167 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 168 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_GetCoinWager_3:
# 80 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_10
# 88 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 89 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 90 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_4:
# 94 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_13
# 102 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 103 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 104 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_5:
# 108 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 100
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_16
# 116 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 117 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 118 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_6:
# 122 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_19
# 130 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 131 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 132 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_7:
# 136 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_22
# 144 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 145 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 146 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_8:
# 150 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 2500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_25
# 158 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 159 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 160 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_9:
# 163 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 164 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_10:
# 81 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 82 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 83 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 84 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 85 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_13:
# 95 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 96 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 97 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 98 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 99 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_16:
# 109 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 110 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 111 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 112 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 113 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_19:
# 123 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 124 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 125 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 126 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 127 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_22:
# 137 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 138 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 139 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 140 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 141 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_25:
# 151 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 152 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 153 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 154 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 155 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType::
# 174 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_1, 0
# 176 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType
# 177 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 178 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_TYPE, TRUE
# 179 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 181 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 183 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3
# 186 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4
# 189 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5
# 192 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6
Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1:
# 195 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7
# 198 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3:
# 184 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4:
# 187 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5:
# 190 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6:
# 193 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager::
# 204 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
# 206 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager
# 207 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 209 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
	return


Peccadum_PalatiumFelix_Script_BlueRouletteEnd::
# 219 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Bye
# 221 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 222 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 223 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 224 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 225 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end


Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0:
# 52 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB$"

Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0:
# 166 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nBottom of GetCoinWager$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro::
# 229 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I am the Blue Roulette table dealer.$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin::
# 233 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to play a game of\n"
	.string "roulette?$"

Peccadum_PalatiumFelix_Text_NoCoins::
# 237 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Excuse me sir, but coins are required to\n"
	.string "play games at Palatium Felix. Please\l"
	.string "speak with the cashier to purchase\l"
	.string "more.$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType::
# 241 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "What kind of wager will you be placing?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager::
# 245 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A wager on a winning number pays thirty\n"
	.string "to one. Are you sure that you will place\l"
	.string "a wager on a single number?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager::
# 249 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The payout for a wager on color depends\n"
	.string "on which color you wager on. Both red\l"
	.string "and blue pay out at two to one while\l"
	.string "green pays out higher, fifteen to one.\l"
	.string "Are you sure that you will bet on color?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager::
# 253 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A winning bet on range pays three to\n"
	.string "one, except for zero and double zero\l"
	.string "which pays the same as green, fifteen\l"
	.string "to one. Are you sure you want to wager\l"
	.string "on range?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager::
# 257 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "There are thirty two individual spaces\n"
	.string "on the roulette wheel: numbers from one\l"
	.string "to thirty, single, and double nil. Which\l"
	.string "number will you be wagering on?$"
