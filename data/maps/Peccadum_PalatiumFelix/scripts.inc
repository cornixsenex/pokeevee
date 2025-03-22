Peccadum_PalatiumFelix_MapScripts::
	.byte 0


Peccadum_PalatiumFelix_Script_BlueRouletteDealer::
# 21 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 22 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 24 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro
# 26 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_1
# 27 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2
Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1:
# 32 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin, MSGBOX_YESNO
# 33 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4
# 36 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2:
# 28 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 29 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4:
# 34 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return


Peccadum_PalatiumFelix_Script_BlueRouletteBrain::
# 42 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
# 44 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
# 46 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 47 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3
# 49 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4
# 51 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5
# 53 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6
# 56 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0
# 57 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 58 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1:
# 62 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGoodLuck
# 63 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 65 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_2
# 66 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 67 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 68 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_ROULETTE_BALL
# 69 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 71 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_5, BlueRouletteSpin
# 72 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_ROULETTE_BALL2
# 73 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 75 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 76 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 77 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_5
# 78 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteBrain_9
# 81 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteAnnounce00
Peccadum_PalatiumFelix_Script_BlueRouletteBrain_8:
# 83 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 85 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3:
# 48 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4:
# 50 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5:
# 52 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6:
# 54 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_9:
# 79 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteAnnounceSpin
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_8


Peccadum_PalatiumFelix_Script_GetCoinWager::
# 91 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Peccadum_PalatiumFelix_Script_GetCoinWager_2
Peccadum_PalatiumFelix_Script_GetCoinWager_1:
# 95 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 0
# 97 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 99 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 100 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 101 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_COIN_WAGER, TRUE
# 102 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 103 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_RESULT
# 104 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 106 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_GetCoinWager_6
# 122 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_GetCoinWager_7
# 137 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_GetCoinWager_8
# 152 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_GetCoinWager_9
# 167 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_GetCoinWager_10
# 182 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_GetCoinWager_11
# 196 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_GetCoinWager_12
Peccadum_PalatiumFelix_Script_GetCoinWager_4:
# 201 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0
# 202 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 203 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_GetCoinWager_2:
# 92 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setflag FLAG_TEMP_2
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_6:
# 107 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_13
# 116 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_2
# 117 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 118 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 119 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_7:
# 123 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_16
# 132 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 133 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 134 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_8:
# 138 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 100
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_19
# 147 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 148 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 149 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_9:
# 153 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_22
# 162 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 163 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 164 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_10:
# 168 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_25
# 177 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 178 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 179 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_11:
# 183 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 2500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_28
# 192 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 193 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 194 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_12:
# 197 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_2
# 198 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 199 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_13:
# 108 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 109 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 110 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 111 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 112 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 113 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_16:
# 124 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 125 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 126 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 127 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 128 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 129 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 25
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_19:
# 139 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 140 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 141 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 142 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 143 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 144 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 100
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_22:
# 154 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 155 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 156 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 157 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 158 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 159 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 500
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_25:
# 169 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 170 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 171 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 172 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 173 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 174 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1000
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_28:
# 184 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 185 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 186 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 187 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 188 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 189 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 2500
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType::
# 209 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_1, 0
# 211 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType
# 212 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 213 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_TYPE, TRUE
# 214 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 216 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 218 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3
# 221 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4
# 224 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5
# 227 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6
Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1:
# 230 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7
# 233 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3:
# 219 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4:
# 222 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5:
# 225 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6:
# 228 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager::
# 239 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 241 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
# 243 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager
# 244 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 246 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 247 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 248 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_0
# 249 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 251 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 253 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3
# 269 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4
# 305 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5
# 339 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_6
# 373 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_7
# 376 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_5
# 377 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 378 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1:
# 382 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_2
# 383 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_2, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_9
# 391 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWager00, MSGBOX_YESNO
# 392 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_59
# 395 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3:
# 254 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_RANGE_0_NUMBER, TRUE
# 255 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 256 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_13
# 258 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_14
# 260 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_15
# 263 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_1
# 264 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 265 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4:
# 270 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_2
# 271 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 272 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_1_NUMBER
# 273 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 274 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 275 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 276 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_18
# 278 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_19
# 280 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_20
# 282 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_21
# 284 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_22
# 286 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_23
# 288 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_24
# 290 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_25
# 292 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_26
# 294 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_27
# 296 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_28
# 299 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_3
# 300 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 301 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5:
# 306 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_2_NUMBER
# 307 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 308 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 309 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 310 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_31
# 312 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_32
# 314 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_33
# 316 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_34
# 318 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_35
# 320 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_36
# 322 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_37
# 324 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_38
# 326 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_39
# 328 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_40
# 330 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_41
# 333 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4
# 334 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 335 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_6:
# 340 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_3_NUMBER
# 341 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 342 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 343 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 344 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_44
# 346 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_45
# 348 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_46
# 350 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_47
# 352 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_48
# 354 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_49
# 356 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_50
# 358 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_51
# 360 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_52
# 362 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_53
# 364 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_54
# 367 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4
# 368 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 369 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_7:
# 374 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_9:
# 384 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWagerNumber, MSGBOX_YESNO
# 385 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_56
# 388 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_13:
# 257 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_14:
# 259 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 31
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_15:
# 261 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_18:
# 277 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_19:
# 279 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 2
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_20:
# 281 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 3
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_21:
# 283 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 4
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_22:
# 285 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_23:
# 287 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 6
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_24:
# 289 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 7
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_25:
# 291 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 8
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_26:
# 293 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 9
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_27:
# 295 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 10
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_28:
# 297 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_31:
# 311 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 11
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_32:
# 313 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 12
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_33:
# 315 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 13
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_34:
# 317 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 14
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_35:
# 319 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 15
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_36:
# 321 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 16
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_37:
# 323 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 17
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_38:
# 325 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 18
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_39:
# 327 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 19
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_40:
# 329 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 20
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_41:
# 331 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_44:
# 345 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 21
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_45:
# 347 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 22
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_46:
# 349 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 23
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_47:
# 351 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 24
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_48:
# 353 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 25
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_49:
# 355 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 26
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_50:
# 357 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 27
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_51:
# 359 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 28
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_52:
# 361 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 29
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_53:
# 363 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 30
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_54:
# 365 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_56:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_59:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager::
# 402 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_4, 0
# 404 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager
# 405 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 407 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_COLOR, TRUE
# 408 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 410 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_4
# 412 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_2
# 420 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_3
# 428 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_4
# 436 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_5
# 439 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_Text_0
# 440 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 441 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_2:
# 413 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorRed, MSGBOX_YESNO
# 414 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_7
# 417 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_3:
# 421 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorBlue, MSGBOX_YESNO
# 422 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_10
# 425 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_4:
# 429 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorGreen, MSGBOX_YESNO
# 430 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_13
# 433 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_5:
# 437 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_7:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_10:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_13:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager::
# 448 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 450 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager
# 451 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 453 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 455 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 456 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 458 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2
# 466 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3
# 474 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4
# 482 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5
# 490 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6
# 493 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0
# 494 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 495 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2:
# 459 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0, MSGBOX_YESNO
# 460 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_8
# 463 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3:
# 467 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1, MSGBOX_YESNO
# 468 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_11
# 471 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4:
# 475 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2, MSGBOX_YESNO
# 476 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_14
# 479 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5:
# 483 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3, MSGBOX_YESNO
# 484 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_17
# 487 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6:
# 491 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
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


Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin::
# 502 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 504 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_2
# 511 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_3
# 547 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_4
# 584 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_2
# 585 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 586 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_2:
# 505 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, VAR_TEMP_2
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_6
# 508 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_3:
# 512 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_4
# 514 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_10
# 524 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_11
# 534 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_12
# 541 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_0
# 542 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 543 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_4:
# 548 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 550 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_15
# 557 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_16
# 564 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_17
# 571 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_18
# 578 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_1
# 579 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 580 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_6:
# 506 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_10:
# 515 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 515 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 4
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 515 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 6
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 515 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 8
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 516 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 516 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 12
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 516 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 14
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 516 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 16
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 516 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 18
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 517 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 20
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 517 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 22
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 517 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 24
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 517 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 26
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 517 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 28
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 518 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 30
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 521 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_11:
# 525 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 525 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 3
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 525 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 525 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 7
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 526 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 9
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 526 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 526 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 13
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 526 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 15
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 526 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 17
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 527 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 19
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 527 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 21
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 527 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 23
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 527 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 25
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 527 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 27
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 528 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 29
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 531 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_12:
# 535 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82
# 535 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82
# 538 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_15:
# 551 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87
# 551 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87
# 554 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_16:
# 558 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_94
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_93:
# 561 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_17:
# 565 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_99
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_98:
# 568 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_18:
# 572 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 20
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_104
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_103:
# 575 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20:
# 519 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51:
# 529 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82:
# 536 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87:
# 552 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_92:
# 559 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_94:
# 558 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_92
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_93

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_97:
# 566 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_99:
# 565 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_97
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_98

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_102:
# 573 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_104:
# 572 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_102
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_103


Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin::
# 592 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 593 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayerWin
# 594 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 596 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 598 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_3
# 605 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_4
# 618 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_5
# 631 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 632 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_Text_0
# 633 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 634 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1:
# 637 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins VAR_TEMP_0
# 638 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 639 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 640 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 641 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 642 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain
	return

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_3:
# 599 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_7
# 602 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_4:
# 607 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_ne Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_10
# 611 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_16
# 614 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_5:
# 620 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_ne Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_13
# 624 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_19
# 627 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_7:
# 600 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 30
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_10:
# 608 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 2
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_13:
# 621 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 3
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_16:
# 612 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 15
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_19:
# 625 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 15
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1


Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose::
# 646 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayerLose
# 647 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain
	return


Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain::
# 651 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayAgain, MSGBOX_YESNO
# 652 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain_1
# 655 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return

Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain_1:
# 653 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return


Peccadum_PalatiumFelix_Script_BlueRouletteEnd::
# 660 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_2, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2
Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1:
# 708 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Bye
# 710 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 711 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 712 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 713 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 714 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2:
# 661 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 662 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Refund
# 663 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 664 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5
# 670 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 25, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6
# 676 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 100, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7
# 682 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 500, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8
# 688 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1000, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9
# 694 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2500, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10
# 701 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0
# 702 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 703 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5:
# 665 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5
# 666 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 667 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 668 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 669 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6:
# 671 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 25
# 672 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 673 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 674 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 675 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7:
# 677 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 100
# 678 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 679 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 680 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 681 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8:
# 683 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 500
# 684 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 685 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 686 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 687 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9:
# 689 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1000
# 690 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 691 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 692 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 693 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10:
# 695 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 2500
# 696 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 697 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 698 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 699 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1


Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0:
# 56 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB$"

Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0:
# 201 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nBottom of GetCoinWager$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_0:
# 248 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "SPECIFIC NUM$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_1:
# 263 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_0_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_2:
# 270 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "CASE 1$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_3:
# 299 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_1_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4:
# 333 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_2_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_5:
# 376 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB in\nGetNumberWager$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_Text_0:
# 439 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_COLOR OOB$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0:
# 493 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_0:
# 541 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_COLOR OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_1:
# 578 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_2:
# 584 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_Text_0:
# 632 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB in PlayerWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0:
# 701 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER OOB in RefundSwitch$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro::
# 718 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I am the Blue Roulette table dealer.$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin::
# 722 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to play a game of\n"
	.string "roulette?$"

Peccadum_PalatiumFelix_Text_NoCoins::
# 726 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Excuse me sir, but coins are required to\n"
	.string "play games at Palatium Felix. Please\l"
	.string "speak with the cashier to purchase\l"
	.string "more.$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType::
# 730 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "What kind of wager will you be placing?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager::
# 734 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A wager on a winning number pays thirty\n"
	.string "to one. Are you sure that you will place\l"
	.string "a wager on a single number?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager::
# 738 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The payout for a wager on color depends\n"
	.string "on which color you wager on. Both {COLOR RED}red\l"
	.string "{COLOR DARK_GRAY}and {COLOR BLUE}blue {COLOR DARK_GRAY}pay out at two to one while\l"
	.string "{COLOR GREEN}green {COLOR DARK_GRAY}pays out higher, fifteen to one.\l"
	.string "Are you sure that you will bet on color?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager::
# 742 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A winning bet on range pays three to\n"
	.string "one, except for zero and double zero\l"
	.string "which pays the same as {COLOR GREEN}green{COLOR DARK_GRAY}, fifteen\l"
	.string "to one. Are you sure you want to wager\l"
	.string "on range?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager::
# 746 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "There are thirty two individual spaces\n"
	.string "on the roulette wheel: numbers from one\l"
	.string "to thirty, single, and double nil. Which\l"
	.string "number will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager::
# 750 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which range of numbers will you wager\n"
	.string "on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager::
# 754 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which color will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorRed::
# 758 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR RED}red{COLOR DARK_GRAY}.\n"
	.string "This wager will payout at two to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorBlue::
# 762 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR BLUE}blue{COLOR DARK_GRAY}.\n"
	.string "This wager will payout at two to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorGreen::
# 766 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR GREEN}green{COLOR DARK_GRAY}.\n"
	.string "This wager will payout fifteen to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0::
# 770 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of zero and double zero. This will\l"
	.string "payout fifteen to one. Are you certain?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1::
# 774 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers one through ten. This will\l"
	.string "payout at three to one. Will you confirm\l"
	.string "this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2::
# 778 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "eleven through twenty. This will payout\l"
	.string "at three to one. Will you confirm this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3::
# 782 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers from twenty one through\l"
	.string "thirty. The payout for this bet is three\l"
	.string "to one. Are you certain you want to\l"
	.string "place this bet?$"

CasinoDealer_Text_Refund::
# 786 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Here are the unwagered coins back for\n"
	.string "you.$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWagerNumber::
# 790 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on\n"
	.string "{STR_VAR_1}. The payout will be at\l"
	.string "thirty to one. Are you certain you want\l"
	.string "to place this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWager00::
# 794 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to bet double zero. The\n"
	.string "payout will be at thirty to one. Are you\l"
	.string "certain you want to place this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGoodLuck::
# 798 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Rien ne va plus! No more bets! Sir, good\n"
	.string "luck!$"

Peccadum_PalatiumFelix_Text_BlueRouletteAnnounceSpin::
# 802 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The result of this spin is\n"
	.string "{STR_VAR_1}!$"

Peccadum_PalatiumFelix_Text_BlueRouletteAnnounce00::
# 806 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The result of the spin: double zero!$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayerWin::
# 810 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Congratulations {PLAYER}! You won\n"
	.string "your bet!$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayerLose::
# 814 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you did not win your bet.$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayAgain::
# 818 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to bet on roulette again?$"
