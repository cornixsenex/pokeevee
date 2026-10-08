Peccadum_PalatiumFelix_MapScripts::
	.byte 0


Peccadum_PalatiumFelix_Script_Cashier::
# 50 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 51 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 53 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_6, 0
# 54 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showmoneybox 18, 0
# 55 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 6
# 56 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_Cashier
# 57 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 58 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_PALATIUM_FELIX_CASHIER, TRUE
# 59 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 61 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_Cashier_3
# 64 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_Cashier_4
# 66 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_Cashier_5
# 70 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Cashier_Text_0
# 71 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 72 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Cashier_1:
# 75 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_Cashier_3:
# 62 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_Cashier_1

Peccadum_PalatiumFelix_Script_Cashier_4:
# 65 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_Cashier_1

Peccadum_PalatiumFelix_Script_Cashier_5:
# 67 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	goto Peccadum_PalatiumFelix_Script_Cashier_1


Peccadum_PalatiumFelix_Script_CashierBye::
# 80 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidemoneybox
# 81 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 6
# 82 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierBye
# 83 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 84 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end


Peccadum_PalatiumFelix_Script_CashierBuyCoins::
# 91 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierPurchase
# 92 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 93 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 95 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PALATIUM_FELIX_COIN_CASHIER
# 96 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 98 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_CashierBuyCoins_3
# 116 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_CashierBuyCoins_4
# 132 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_CashierBuyCoins_5
# 148 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_CashierBuyCoins_6
# 164 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_CashierBuyCoins_7
# 180 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_CashierBuyCoins_8
# 196 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_CashierBuyCoins_9
# 212 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_CashierBuyCoins_10
# 228 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_CashierBuyCoins_11
# 244 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_CashierBuyCoins_12
# 260 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_CashierBuyCoins_13
# 276 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, Peccadum_PalatiumFelix_Script_CashierBuyCoins_14
# 279 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_CashierBuyCoins_Text_0
# 280 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 281 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_CashierBuyCoins_1:
# 285 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTakeCoins
# 286 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_3:
# 101 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9999
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_16
# 112 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_4:
# 117 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9995
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_19
# 128 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 129 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_5:
# 133 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9990
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_22
# 144 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 145 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_6:
# 149 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9975
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_25
# 160 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 161 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_7:
# 165 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9950
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_28
# 176 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 177 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_8:
# 181 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9900
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_31
# 192 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 193 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_9:
# 197 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9750
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_34
# 208 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 209 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_10:
# 213 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9500
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_37
# 224 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 225 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_11:
# 229 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9000
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_40
# 240 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 241 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_12:
# 245 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 7500
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_43
# 256 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 257 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_13:
# 261 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 5000
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_46
# 272 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 273 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_14:
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_16:
# 102 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 100
# 103 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_49
# 108 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_19:
# 118 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500
# 119 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_52
# 124 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 125 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_22:
# 134 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 1000
# 135 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_55
# 140 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 141 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_25:
# 150 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 2500
# 151 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_58
# 156 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 157 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_28:
# 166 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 5000
# 167 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_61
# 172 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 173 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_31:
# 182 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 10000
# 183 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_64
# 188 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 189 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_34:
# 198 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 25000
# 199 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_67
# 204 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 205 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_37:
# 214 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 50000
# 215 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_70
# 220 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 221 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_40:
# 230 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 100000
# 231 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_73
# 236 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 237 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_43:
# 246 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 250000
# 247 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_76
# 252 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 253 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_46:
# 262 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500000
# 263 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_79
# 268 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 269 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_49:
# 104 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 100
# 105 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1
# 106 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_52:
# 120 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 500
# 121 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5
# 122 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_55:
# 136 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 1000
# 137 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 10
# 138 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_58:
# 152 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 2500
# 153 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 25
# 154 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_61:
# 168 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 5000
# 169 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 50
# 170 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_64:
# 184 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 10000
# 185 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 100
# 186 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_67:
# 200 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 25000
# 201 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 250
# 202 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_70:
# 216 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 50000
# 217 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 500
# 218 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_73:
# 232 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 100000
# 233 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1000
# 234 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_76:
# 248 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 250000
# 249 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 2500
# 250 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_79:
# 264 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 500000
# 265 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5000
# 266 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1


Peccadum_PalatiumFelix_Script_CashierSellCoins::
# 291 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierSell
# 292 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 293 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 295 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PALATIUM_FELIX_COIN_CASHIER
# 296 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 298 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 300 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_CashierSellCoins_3
# 317 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_CashierSellCoins_4
# 334 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_CashierSellCoins_5
# 351 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_CashierSellCoins_6
# 368 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_CashierSellCoins_7
# 385 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_CashierSellCoins_8
# 402 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_CashierSellCoins_9
# 419 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_CashierSellCoins_10
# 436 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_CashierSellCoins_11
# 453 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_CashierSellCoins_12
# 470 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_CashierSellCoins_13
# 487 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, Peccadum_PalatiumFelix_Script_CashierSellCoins_14
# 490 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_CashierSellCoins_Text_0
# 491 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 492 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_CashierSellCoins_1:
# 496 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTakeMoney
# 497 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_3:
# 302 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_16
# 313 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_4:
# 319 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_19
# 330 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 331 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_5:
# 336 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_22
# 347 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 348 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_6:
# 353 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 24
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_25
# 364 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 365 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_7:
# 370 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 49
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_28
# 381 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 382 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_8:
# 387 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 99
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_31
# 398 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 399 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_9:
# 404 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 249
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_34
# 415 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 416 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_10:
# 421 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 499
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_37
# 432 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 433 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_11:
# 438 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 999
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_40
# 449 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 450 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_12:
# 455 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 2499
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_43
# 466 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 467 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_13:
# 472 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4999
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_46
# 483 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 484 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_14:
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_16:
# 303 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 999900
# 304 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_49
# 308 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1
# 309 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 100
# 310 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_19:
# 320 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 999500
# 321 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_52
# 325 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 326 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 500
# 327 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_22:
# 337 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 998000
# 338 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_55
# 342 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 10
# 343 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 1000
# 344 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_25:
# 354 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 997500
# 355 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_58
# 359 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 360 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 2500
# 361 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_28:
# 371 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 995000
# 372 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_61
# 376 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 50
# 377 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 5000
# 378 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_31:
# 388 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 990000
# 389 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_64
# 393 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 394 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 10000
# 395 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_34:
# 405 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 975000
# 406 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_67
# 410 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 250
# 411 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 25000
# 412 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_37:
# 422 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 950000
# 423 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_70
# 427 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 428 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 50000
# 429 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_40:
# 439 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 900000
# 440 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_73
# 444 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 445 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 100000
# 446 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_43:
# 456 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 750000
# 457 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_76
# 461 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 462 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 250000
# 463 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_46:
# 473 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500000
# 474 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_79
# 478 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5000
# 479 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 500000
# 480 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_49:
# 305 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_52:
# 322 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 323 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_55:
# 339 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 340 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_58:
# 356 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 357 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_61:
# 373 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 374 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_64:
# 390 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 391 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_67:
# 407 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 408 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_70:
# 424 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 425 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_73:
# 441 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 442 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_76:
# 458 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 459 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_79:
# 475 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 476 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1


Peccadum_PalatiumFelix_Script_CashierUpdateTransaction::
# 502 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatemoneybox
# 503 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 1, 6
# 504 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 505 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
	return


Peccadum_PalatiumFelix_Script_BlueRouletteDealer::
# 510 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 511 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 513 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro
# 515 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 516 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 5
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2
Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1:
# 521 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin, MSGBOX_YESNO
# 522 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4
# 525 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2:
# 517 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 518 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4:
# 523 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return


Peccadum_PalatiumFelix_Script_BlueRouletteBrain::
# 531 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
# 533 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
# 535 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 536 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3
# 538 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4
# 540 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5
# 542 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6
# 545 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0
# 546 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 547 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1:
# 551 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGoodLuck
# 552 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 554 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_C
# 555 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 556 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 557 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_ROULETTE_BALL
# 558 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 560 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_5, BlueRouletteSpin
# 561 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_ROULETTE_BALL2
# 562 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 564 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 565 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 566 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_5
# 567 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteBrain_9
# 570 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteAnnounce00
Peccadum_PalatiumFelix_Script_BlueRouletteBrain_8:
# 572 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 574 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3:
# 537 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4:
# 539 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5:
# 541 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6:
# 543 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_9:
# 568 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteAnnounceSpin
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_8


Peccadum_PalatiumFelix_Script_GetCoinWager::
# 580 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_TEMP_C, Peccadum_PalatiumFelix_Script_GetCoinWager_2
Peccadum_PalatiumFelix_Script_GetCoinWager_1:
# 584 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 0
# 586 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 588 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 589 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 590 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_COIN_WAGER, TRUE
# 591 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 592 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_RESULT
# 593 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 595 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_GetCoinWager_6
# 611 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_GetCoinWager_7
# 626 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_GetCoinWager_8
# 641 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_GetCoinWager_9
# 656 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_GetCoinWager_10
# 671 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_GetCoinWager_11
# 685 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_GetCoinWager_12
Peccadum_PalatiumFelix_Script_GetCoinWager_4:
# 690 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0
# 691 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 692 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_GetCoinWager_2:
# 581 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setflag FLAG_TEMP_C
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_6:
# 596 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_13
# 605 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_C
# 606 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 607 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 608 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_7:
# 612 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_16
# 621 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 622 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 623 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_8:
# 627 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 100
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_19
# 636 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 637 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 638 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_9:
# 642 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_22
# 651 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 652 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 653 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_10:
# 657 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_25
# 666 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 667 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 668 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_11:
# 672 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 2500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_28
# 681 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 682 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 683 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_12:
# 686 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_C
# 687 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 688 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_13:
# 597 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 598 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 599 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 600 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 601 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 602 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_16:
# 613 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 614 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 615 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 616 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 617 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 618 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 25
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_19:
# 628 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 629 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 630 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 631 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 632 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 633 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 100
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_22:
# 643 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 644 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 645 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 646 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 647 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 648 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 500
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_25:
# 658 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 659 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 660 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 661 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 662 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 663 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1000
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_28:
# 673 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 674 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 675 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 676 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 677 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 678 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 2500
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType::
# 698 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_1, 0
# 700 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType
# 701 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 702 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_TYPE, TRUE
# 703 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 705 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 707 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3
# 710 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4
# 713 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5
# 716 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6
Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1:
# 719 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7
# 722 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3:
# 708 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4:
# 711 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5:
# 714 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6:
# 717 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager::
# 728 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 730 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
# 732 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager
# 733 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 735 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 736 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 737 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_0
# 738 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 740 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 742 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3
# 758 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4
# 793 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5
# 826 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_6
# 859 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_7
# 862 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_5
# 863 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 864 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1:
# 868 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_2
# 869 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_2, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_9
# 877 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWager00, MSGBOX_YESNO
# 878 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_59
# 881 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3:
# 743 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_RANGE_0_NUMBER, TRUE
# 744 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 745 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_13
# 747 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_14
# 749 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_15
# 752 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_1
# 753 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 754 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4:
# 759 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_2
# 760 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 761 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_1_NUMBER
# 762 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 763 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 764 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_18
# 766 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_19
# 768 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_20
# 770 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_21
# 772 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_22
# 774 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_23
# 776 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_24
# 778 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_25
# 780 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_26
# 782 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_27
# 784 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_28
# 787 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_3
# 788 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 789 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5:
# 794 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_2_NUMBER
# 795 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 796 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 797 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_31
# 799 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_32
# 801 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_33
# 803 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_34
# 805 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_35
# 807 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_36
# 809 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_37
# 811 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_38
# 813 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_39
# 815 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_40
# 817 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_41
# 820 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4
# 821 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 822 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_6:
# 827 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_3_NUMBER
# 828 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 829 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 830 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_44
# 832 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_45
# 834 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_46
# 836 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_47
# 838 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_48
# 840 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_49
# 842 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_50
# 844 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_51
# 846 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_52
# 848 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_53
# 850 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_54
# 853 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4
# 854 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 855 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_7:
# 860 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_9:
# 870 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWagerNumber, MSGBOX_YESNO
# 871 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_56
# 874 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_13:
# 746 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_14:
# 748 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 31
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_15:
# 750 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_18:
# 765 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_19:
# 767 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 2
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_20:
# 769 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 3
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_21:
# 771 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 4
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_22:
# 773 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_23:
# 775 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 6
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_24:
# 777 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 7
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_25:
# 779 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 8
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_26:
# 781 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 9
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_27:
# 783 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 10
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_28:
# 785 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_31:
# 798 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 11
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_32:
# 800 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 12
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_33:
# 802 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 13
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_34:
# 804 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 14
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_35:
# 806 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 15
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_36:
# 808 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 16
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_37:
# 810 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 17
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_38:
# 812 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 18
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_39:
# 814 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 19
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_40:
# 816 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 20
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_41:
# 818 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_44:
# 831 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 21
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_45:
# 833 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 22
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_46:
# 835 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 23
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_47:
# 837 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 24
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_48:
# 839 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 25
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_49:
# 841 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 26
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_50:
# 843 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 27
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_51:
# 845 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 28
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_52:
# 847 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 29
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_53:
# 849 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 30
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_54:
# 851 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_56:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_59:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager::
# 888 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_4, 0
# 890 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager
# 891 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 893 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_COLOR, TRUE
# 894 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 896 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_4
# 898 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_2
# 906 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_3
# 914 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_4
# 922 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_5
# 925 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_Text_0
# 926 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 927 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_2:
# 899 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorRed, MSGBOX_YESNO
# 900 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_7
# 903 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_3:
# 907 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorBlue, MSGBOX_YESNO
# 908 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_10
# 911 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_4:
# 915 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorGreen, MSGBOX_YESNO
# 916 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_13
# 919 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_5:
# 923 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_7:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_10:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_13:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager::
# 934 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 936 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager
# 937 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 939 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 941 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 942 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 944 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2
# 952 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3
# 960 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4
# 968 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5
# 976 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6
# 979 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0
# 980 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 981 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2:
# 945 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0, MSGBOX_YESNO
# 946 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_8
# 949 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3:
# 953 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1, MSGBOX_YESNO
# 954 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_11
# 957 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4:
# 961 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2, MSGBOX_YESNO
# 962 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_14
# 965 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5:
# 969 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3, MSGBOX_YESNO
# 970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_17
# 973 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6:
# 977 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
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
# 988 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 990 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_2
# 997 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_3
# 1033 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_4
# 1070 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_2
# 1071 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1072 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_2:
# 991 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, VAR_TEMP_2
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_6
# 994 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_3:
# 998 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_4
# 1000 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_10
# 1010 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_11
# 1020 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_12
# 1027 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_0
# 1028 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1029 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_4:
# 1034 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 1036 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_15
# 1043 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_16
# 1050 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_17
# 1057 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_18
# 1064 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_1
# 1065 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1066 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_6:
# 992 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_10:
# 1001 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1001 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 4
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1001 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 6
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1001 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 8
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1002 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1002 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 12
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1002 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 14
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1002 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 16
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1002 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 18
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1003 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 20
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1003 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 22
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1003 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 24
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1003 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 26
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1003 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 28
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1004 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 30
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1007 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_11:
# 1011 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1011 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 3
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1011 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1011 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 7
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1012 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 9
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1012 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1012 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 13
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1012 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 15
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1012 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 17
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1013 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 19
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1013 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 21
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1013 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 23
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1013 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 25
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1013 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 27
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1014 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 29
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1017 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_12:
# 1021 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82
# 1021 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82
# 1024 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_15:
# 1037 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87
# 1037 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87
# 1040 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_16:
# 1044 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_94
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_93:
# 1047 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_17:
# 1051 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_99
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_98:
# 1054 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_18:
# 1058 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 20
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_104
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_103:
# 1061 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20:
# 1005 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51:
# 1015 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82:
# 1022 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87:
# 1038 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_92:
# 1045 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_94:
# 1044 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_92
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_93

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_97:
# 1052 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_99:
# 1051 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_97
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_98

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_102:
# 1059 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_104:
# 1058 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_102
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_103


Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin::
# 1078 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1079 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayerWin
# 1080 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1082 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 1084 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_3
# 1091 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_4
# 1104 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_5
# 1117 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1118 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_Text_0
# 1119 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1120 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1:
# 1123 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins VAR_TEMP_0
# 1124 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1125 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1126 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1127 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1128 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain
	return

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_3:
# 1085 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_7
# 1088 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_4:
# 1093 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_ne Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_10
# 1097 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_16
# 1100 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_5:
# 1106 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_ne Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_13
# 1110 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_19
# 1113 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_7:
# 1086 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 30
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_10:
# 1094 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 2
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_13:
# 1107 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 3
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_16:
# 1098 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 15
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_19:
# 1111 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 15
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1


Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose::
# 1132 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayerLose
# 1133 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain
	return


Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain::
# 1137 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayAgain, MSGBOX_YESNO
# 1138 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain_1
# 1141 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return

Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain_1:
# 1139 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return


Peccadum_PalatiumFelix_Script_BlueRouletteEnd::
# 1146 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_C, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2
Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1:
# 1194 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Bye
# 1196 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 1197 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1198 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1199 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2:
# 1147 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1148 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Refund
# 1149 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 1150 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5
# 1156 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 25, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6
# 1162 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 100, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7
# 1168 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 500, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8
# 1174 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1000, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9
# 1180 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2500, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10
# 1187 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0
# 1188 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1189 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5:
# 1151 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5
# 1152 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1153 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1154 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1155 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6:
# 1157 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 25
# 1158 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1159 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1160 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1161 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7:
# 1163 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 100
# 1164 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1165 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1166 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1167 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8:
# 1169 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 500
# 1170 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1171 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1172 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1173 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9:
# 1175 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1000
# 1176 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1177 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1178 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1179 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10:
# 1181 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 2500
# 1182 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1183 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1184 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1185 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1


Peccadum_PalatiumFelix_Script_DealerHiLoKabuto::
# 1204 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1206 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 1208 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Start, MSGBOX_YESNO
# 1210 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_2
# 1215 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1216 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_5
# 1219 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 1220 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_1:
# 1223 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_2:
# 1211 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_1

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_5:
# 1217 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_1


Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain::
# 1229 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
# 1231 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_ResetGame
# 1233 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 1236 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_RemoveCard
# 1237 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 1238 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_8, VAR_RESULT
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_3:
# 1241 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 1242 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_8
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_3
# 1243 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1245 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_B, Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_6
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_5:
# 1254 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_8
# 1255 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_7
# 1256 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_9
# 1256 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_9
# 1259 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_8:
# 1261 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_7, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_18
# 1261 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_18
# 1264 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceDealerCard
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_17:
# 1267 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_7
	goto_if_gt Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_26
# 1270 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_DealerWin
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_25:
# 1273 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_PlayAgainCoins
	return

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_6:
# 1246 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_15
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_14:
# 1249 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_23
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_5

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_9:
# 1257 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_8

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_15:
# 1247 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_14

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_18:
# 1262 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceDealerKabuto
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_17

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_23:
# 1250 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_7, 10
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_5

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_26:
# 1268 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_PlayerWinCoins
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_25


DealerHiLoKabuto_Script_GetCoinWager::
# 1277 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 0
# 1278 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1279 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 1280 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1281 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PALATIUM_FELIX_COIN_CASHIER
# 1282 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 1283 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 1284 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 1286 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, DealerHiLoKabuto_Script_GetCoinWager_2
# 1302 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, DealerHiLoKabuto_Script_GetCoinWager_3
# 1318 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, DealerHiLoKabuto_Script_GetCoinWager_4
# 1334 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, DealerHiLoKabuto_Script_GetCoinWager_5
# 1350 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, DealerHiLoKabuto_Script_GetCoinWager_6
# 1366 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, DealerHiLoKabuto_Script_GetCoinWager_7
# 1382 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, DealerHiLoKabuto_Script_GetCoinWager_8
# 1398 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, DealerHiLoKabuto_Script_GetCoinWager_9
# 1414 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, DealerHiLoKabuto_Script_GetCoinWager_10
# 1430 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, DealerHiLoKabuto_Script_GetCoinWager_11
# 1446 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, DealerHiLoKabuto_Script_GetCoinWager_12
# 1462 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, DealerHiLoKabuto_Script_GetCoinWager_13
# 1466 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Script_GetCoinWager_Text_0
# 1467 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1468 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

DealerHiLoKabuto_Script_GetCoinWager_2:
# 1287 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1288 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_15
# 1297 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1298 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 1299 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_GetCoinWager_3:
# 1303 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1304 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_18
# 1313 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1314 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1315 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_4:
# 1319 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1320 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_21
# 1329 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1330 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1331 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_5:
# 1335 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1336 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 24
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_24
# 1345 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1346 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1347 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_6:
# 1351 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1352 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 49
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_27
# 1361 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1362 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1363 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_7:
# 1367 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1368 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 99
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_30
# 1377 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1378 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1379 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_8:
# 1383 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1384 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 249
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_33
# 1393 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1394 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1395 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_9:
# 1399 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1400 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 499
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_36
# 1409 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1410 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1411 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_10:
# 1415 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1416 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 999
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_39
# 1425 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1426 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1427 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_11:
# 1431 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1432 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 2499
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_42
# 1441 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1442 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1443 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_12:
# 1447 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1448 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4999
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_45
# 1457 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1458 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1459 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_13:
# 1463 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1464 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_GetCoinWager_15:
# 1289 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1
# 1290 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1291 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1292 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1293 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1294 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

DealerHiLoKabuto_Script_GetCoinWager_18:
# 1305 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 1306 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1307 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1308 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1309 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1310 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5
	return

DealerHiLoKabuto_Script_GetCoinWager_21:
# 1321 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 10
# 1322 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1323 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1324 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1325 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1326 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 10
	return

DealerHiLoKabuto_Script_GetCoinWager_24:
# 1337 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 1338 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1339 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1340 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1341 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1342 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 25
	return

DealerHiLoKabuto_Script_GetCoinWager_27:
# 1353 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 50
# 1354 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1355 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1356 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1357 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1358 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 50
	return

DealerHiLoKabuto_Script_GetCoinWager_30:
# 1369 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 1370 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1371 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1372 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1373 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1374 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 100
	return

DealerHiLoKabuto_Script_GetCoinWager_33:
# 1385 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 250
# 1386 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1387 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1388 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1389 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1390 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 250
	return

DealerHiLoKabuto_Script_GetCoinWager_36:
# 1401 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 1402 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1403 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1404 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1405 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1406 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 500
	return

DealerHiLoKabuto_Script_GetCoinWager_39:
# 1417 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 1418 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1419 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1420 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1421 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1422 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1000
	return

DealerHiLoKabuto_Script_GetCoinWager_42:
# 1433 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 1434 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1435 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1436 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1437 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1438 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 2500
	return

DealerHiLoKabuto_Script_GetCoinWager_45:
# 1449 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5000
# 1450 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1451 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1452 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1453 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1454 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5000
	return


DealerHiLoKabuto_Script_PlayerWinCoins::
# 1474 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1475 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_PlayerWin
# 1476 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 2
# 1477 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins VAR_TEMP_0
# 1478 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1479 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1480 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1481 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return


DealerHiLoKabuto_Script_PlayAgainCoins::
# 1486 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_PlayAgain, MSGBOX_YESNO
# 1487 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DealerHiLoKabuto_Script_PlayAgainCoins_1
# 1490 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_PlayAgainCoins_1:
# 1488 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain
	return


Peccadum_PalatiumFelix_Script_TableDealer::
# 1495 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1496 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 1497 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 1498 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerOpen_TakeSeat
# 1499 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1500 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1501 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1502 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end


Peccadum_PalatiumFelix_Script_BusyDealer::
# 1507 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1508 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 1509 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerBusy
# 1510 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1511 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1512 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1513 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end


Peccadum_PalatiumFelix_Script_4HiLoKabutoA::
# 1518 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1519 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_PALATIUMFELIX_LOGISTICS_DONE, Peccadum_PalatiumFelix_Script_4HiLoKabutoA_2
Peccadum_PalatiumFelix_Script_4HiLoKabutoA_1:
# 1522 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_4HiLoKabuto
	return

Peccadum_PalatiumFelix_Script_4HiLoKabutoA_2:
# 1520 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_D, 1
	goto Peccadum_PalatiumFelix_Script_4HiLoKabutoA_1


Peccadum_PalatiumFelix_Script_4HiLoKabutoB::
# 1526 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1527 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_PALATIUMFELIX_LOGISTICS_DONE, Peccadum_PalatiumFelix_Script_4HiLoKabutoB_2
Peccadum_PalatiumFelix_Script_4HiLoKabutoB_1:
# 1540 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_4HiLoKabuto
	return

Peccadum_PalatiumFelix_Script_4HiLoKabutoB_2:
# 1528 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1529 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Peccadum_PalatiumFelix_Script_4HiLoKabutoB_4
# 1531 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Peccadum_PalatiumFelix_Script_4HiLoKabutoB_5
# 1534 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_4HiLoKabutoB_Text_0
# 1535 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1536 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_4HiLoKabutoB_4:
# 1530 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_D, 3
	goto Peccadum_PalatiumFelix_Script_4HiLoKabutoB_1

Peccadum_PalatiumFelix_Script_4HiLoKabutoB_5:
# 1532 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_D, 2
	goto Peccadum_PalatiumFelix_Script_4HiLoKabutoB_1


Peccadum_PalatiumFelix_Script_4HiLoKabuto::
# 1546 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1547 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_4HiLoKabuto, MSGBOX_YESNO
# 1548 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_4HiLoKabuto_1
# 1552 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group4_Script_CoinBrain
	return

Peccadum_PalatiumFelix_Script_4HiLoKabuto_1:
# 1549 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1550 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return


Peccadum_PalatiumFelix_Script_5HiLoKabuto::
# 1558 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1559 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1560 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_5HiLoKabuto, MSGBOX_YESNO
# 1561 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_5HiLoKabuto_1
# 1565 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group5_Script_CoinBrain
	return

Peccadum_PalatiumFelix_Script_5HiLoKabuto_1:
# 1562 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1563 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return


HiLoKabuto_Group4_Script_CoinBrain::
# 1571 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1572 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 1000
	goto_if_lt HiLoKabuto_Group4_Script_CoinBrain_2
# 1577 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 1578 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1579 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1580 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1581 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
HiLoKabuto_Group4_Script_CoinBrain_1:
# 1584 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_ResetGame
# 1586 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 1589 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_9, RandDigit
HiLoKabuto_Group4_Script_CoinBrain_7:
# 1592 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_A, RandDigit
# 1593 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_7
HiLoKabuto_Group4_Script_CoinBrain_11:
# 1596 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_B, RandDigit
# 1597 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_11
# 1597 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_11
HiLoKabuto_Group4_Script_CoinBrain_17:
# 1600 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_8, RandDigit
# 1601 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_17
# 1601 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_17
# 1601 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_B
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_17
# 1603 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_B, HiLoKabuto_Group4_Script_CoinBrain_24
HiLoKabuto_Group4_Script_CoinBrain_23:
# 1619 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_8
# 1620 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_27
# 1620 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_27
# 1623 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
HiLoKabuto_Group4_Script_CoinBrain_26:
# 1626 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_9
# 1627 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 10
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_36
# 1627 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_36
# 1630 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Card
HiLoKabuto_Group4_Script_CoinBrain_35:
# 1632 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_A
# 1633 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 10
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_45
# 1633 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_45
# 1636 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Card
HiLoKabuto_Group4_Script_CoinBrain_44:
# 1638 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_TEMP_B
# 1639 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 10
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_54
# 1639 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_54
# 1642 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Card
HiLoKabuto_Group4_Script_CoinBrain_53:
# 1645 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_65
HiLoKabuto_Group4_Script_CoinBrain_63:
# 1649 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_87
HiLoKabuto_Group4_Script_CoinBrain_83:
# 1651 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_82
HiLoKabuto_Group4_Script_CoinBrain_78:
# 1653 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_77
HiLoKabuto_Group4_Script_CoinBrain_75:
# 1656 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group4_Script_CoinBrain_Text_0
HiLoKabuto_Group4_Script_CoinBrain_61:
# 1660 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1661 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group4Coins_Text_PlayAgain, MSGBOX_YESNO
# 1662 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_69
# 1665 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1666 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_PALATIUMFELIX_LOGISTICS_DONE, HiLoKabuto_Group4_Script_CoinBrain_91
# 1669 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group4_Script_CoinBrain_2:
# 1573 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 1574 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1575 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	goto HiLoKabuto_Group4_Script_CoinBrain_1

HiLoKabuto_Group4_Script_CoinBrain_24:
# 1604 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_33
HiLoKabuto_Group4_Script_CoinBrain_32:
# 1607 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_42
HiLoKabuto_Group4_Script_CoinBrain_41:
# 1610 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_51
HiLoKabuto_Group4_Script_CoinBrain_50:
# 1613 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_59
	goto HiLoKabuto_Group4_Script_CoinBrain_23

HiLoKabuto_Group4_Script_CoinBrain_27:
# 1621 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto HiLoKabuto_Group4_Script_CoinBrain_26

HiLoKabuto_Group4_Script_CoinBrain_33:
# 1605 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto HiLoKabuto_Group4_Script_CoinBrain_32

HiLoKabuto_Group4_Script_CoinBrain_36:
# 1628 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Kabuto
	goto HiLoKabuto_Group4_Script_CoinBrain_35

HiLoKabuto_Group4_Script_CoinBrain_42:
# 1608 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_9, 10
	goto HiLoKabuto_Group4_Script_CoinBrain_41

HiLoKabuto_Group4_Script_CoinBrain_45:
# 1634 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Kabuto
	goto HiLoKabuto_Group4_Script_CoinBrain_44

HiLoKabuto_Group4_Script_CoinBrain_51:
# 1611 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_A, 10
	goto HiLoKabuto_Group4_Script_CoinBrain_50

HiLoKabuto_Group4_Script_CoinBrain_54:
# 1640 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Kabuto
	goto HiLoKabuto_Group4_Script_CoinBrain_53

HiLoKabuto_Group4_Script_CoinBrain_59:
# 1614 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_B, 10
	goto HiLoKabuto_Group4_Script_CoinBrain_23

HiLoKabuto_Group4_Script_CoinBrain_62:
# 1646 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group4_Script_PlayerWinCoins
	goto HiLoKabuto_Group4_Script_CoinBrain_61

HiLoKabuto_Group4_Script_CoinBrain_64:
# 1645 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_62
	goto HiLoKabuto_Group4_Script_CoinBrain_63

HiLoKabuto_Group4_Script_CoinBrain_65:
# 1645 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_64
	goto HiLoKabuto_Group4_Script_CoinBrain_63

HiLoKabuto_Group4_Script_CoinBrain_69:
# 1663 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group4_Script_CoinBrain
	return

HiLoKabuto_Group4_Script_CoinBrain_72:
# 1650 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler1Won
	goto HiLoKabuto_Group4_Script_CoinBrain_61

HiLoKabuto_Group4_Script_CoinBrain_73:
# 1652 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler2Won
	goto HiLoKabuto_Group4_Script_CoinBrain_61

HiLoKabuto_Group4_Script_CoinBrain_74:
# 1654 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler3Won
	goto HiLoKabuto_Group4_Script_CoinBrain_61

HiLoKabuto_Group4_Script_CoinBrain_76:
# 1653 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_74
	goto HiLoKabuto_Group4_Script_CoinBrain_75

HiLoKabuto_Group4_Script_CoinBrain_77:
# 1653 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_76
	goto HiLoKabuto_Group4_Script_CoinBrain_75

HiLoKabuto_Group4_Script_CoinBrain_81:
# 1651 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_73
	goto HiLoKabuto_Group4_Script_CoinBrain_78

HiLoKabuto_Group4_Script_CoinBrain_82:
# 1651 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_81
	goto HiLoKabuto_Group4_Script_CoinBrain_78

HiLoKabuto_Group4_Script_CoinBrain_86:
# 1649 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_72
	goto HiLoKabuto_Group4_Script_CoinBrain_83

HiLoKabuto_Group4_Script_CoinBrain_87:
# 1649 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_86
	goto HiLoKabuto_Group4_Script_CoinBrain_83

HiLoKabuto_Group4_Script_CoinBrain_91:
# 1667 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics
	return


HiLoKabuto_Group5_Script_CoinBrain::
# 1677 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1678 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 150
	goto_if_lt HiLoKabuto_Group5_Script_CoinBrain_2
# 1683 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 150
# 1684 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1685 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1686 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1687 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
HiLoKabuto_Group5_Script_CoinBrain_1:
# 1690 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_ResetGame
# 1692 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 1695 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_9, RandDigit
HiLoKabuto_Group5_Script_CoinBrain_7:
# 1698 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_A, RandDigit
# 1699 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_7
HiLoKabuto_Group5_Script_CoinBrain_11:
# 1702 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_B, RandDigit
# 1703 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_11
# 1703 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_11
HiLoKabuto_Group5_Script_CoinBrain_17:
# 1706 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_C, RandDigit
# 1707 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_17
# 1707 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_17
# 1707 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_B
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_17
HiLoKabuto_Group5_Script_CoinBrain_25:
# 1710 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_8, RandDigit
# 1711 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_25
# 1711 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_25
# 1711 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_B
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_25
# 1711 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_C
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_25
# 1713 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_B, HiLoKabuto_Group5_Script_CoinBrain_34
HiLoKabuto_Group5_Script_CoinBrain_33:
# 1732 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_8
# 1733 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_37
# 1733 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_37
# 1736 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
HiLoKabuto_Group5_Script_CoinBrain_36:
# 1739 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_9
# 1740 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_46
# 1740 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_46
# 1743 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Card
HiLoKabuto_Group5_Script_CoinBrain_45:
# 1745 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_A
# 1746 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_55
# 1746 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_55
# 1749 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Card
HiLoKabuto_Group5_Script_CoinBrain_54:
# 1751 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_TEMP_B
# 1752 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_64
# 1752 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_64
# 1755 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Card
HiLoKabuto_Group5_Script_CoinBrain_63:
# 1758 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_C
# 1759 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_73
# 1759 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_73
# 1762 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp4Card
HiLoKabuto_Group5_Script_CoinBrain_72:
# 1765 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_84
HiLoKabuto_Group5_Script_CoinBrain_82:
# 1769 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_120
HiLoKabuto_Group5_Script_CoinBrain_114:
# 1771 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_113
HiLoKabuto_Group5_Script_CoinBrain_107:
# 1773 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_106
HiLoKabuto_Group5_Script_CoinBrain_100:
# 1775 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_99
HiLoKabuto_Group5_Script_CoinBrain_97:
# 1778 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group4_Script_CoinBrain_Text_0
HiLoKabuto_Group5_Script_CoinBrain_80:
# 1782 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1783 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group5Coins_Text_PlayAgain, MSGBOX_YESNO
# 1784 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_90
# 1787 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1788 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group5_Script_CoinBrain_2:
# 1679 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 1680 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1681 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	goto HiLoKabuto_Group5_Script_CoinBrain_1

HiLoKabuto_Group5_Script_CoinBrain_34:
# 1714 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_43
HiLoKabuto_Group5_Script_CoinBrain_42:
# 1717 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_52
HiLoKabuto_Group5_Script_CoinBrain_51:
# 1720 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_61
HiLoKabuto_Group5_Script_CoinBrain_60:
# 1723 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_70
HiLoKabuto_Group5_Script_CoinBrain_69:
# 1726 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_78
	goto HiLoKabuto_Group5_Script_CoinBrain_33

HiLoKabuto_Group5_Script_CoinBrain_37:
# 1734 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_36

HiLoKabuto_Group5_Script_CoinBrain_43:
# 1715 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_42

HiLoKabuto_Group5_Script_CoinBrain_46:
# 1741 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Kabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_45

HiLoKabuto_Group5_Script_CoinBrain_52:
# 1718 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_9, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_51

HiLoKabuto_Group5_Script_CoinBrain_55:
# 1747 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Kabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_54

HiLoKabuto_Group5_Script_CoinBrain_61:
# 1721 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_A, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_60

HiLoKabuto_Group5_Script_CoinBrain_64:
# 1753 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Kabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_63

HiLoKabuto_Group5_Script_CoinBrain_70:
# 1724 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_B, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_69

HiLoKabuto_Group5_Script_CoinBrain_73:
# 1760 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp4Kabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_72

HiLoKabuto_Group5_Script_CoinBrain_78:
# 1727 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_C, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_33

HiLoKabuto_Group5_Script_CoinBrain_81:
# 1766 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group5_Script_PlayerWinCoins
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_83:
# 1765 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_87
	goto HiLoKabuto_Group5_Script_CoinBrain_82

HiLoKabuto_Group5_Script_CoinBrain_84:
# 1765 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_83
	goto HiLoKabuto_Group5_Script_CoinBrain_82

HiLoKabuto_Group5_Script_CoinBrain_87:
# 1765 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_C
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_81
	goto HiLoKabuto_Group5_Script_CoinBrain_82

HiLoKabuto_Group5_Script_CoinBrain_90:
# 1785 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group5_Script_CoinBrain
	return

HiLoKabuto_Group5_Script_CoinBrain_93:
# 1770 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler1Won
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_94:
# 1772 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler2Won
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_95:
# 1774 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler3Won
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_96:
# 1776 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler4Won
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_98:
# 1775 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_102
	goto HiLoKabuto_Group5_Script_CoinBrain_97

HiLoKabuto_Group5_Script_CoinBrain_99:
# 1775 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_98
	goto HiLoKabuto_Group5_Script_CoinBrain_97

HiLoKabuto_Group5_Script_CoinBrain_102:
# 1775 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_96
	goto HiLoKabuto_Group5_Script_CoinBrain_97

HiLoKabuto_Group5_Script_CoinBrain_105:
# 1773 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_109
	goto HiLoKabuto_Group5_Script_CoinBrain_100

HiLoKabuto_Group5_Script_CoinBrain_106:
# 1773 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_105
	goto HiLoKabuto_Group5_Script_CoinBrain_100

HiLoKabuto_Group5_Script_CoinBrain_109:
# 1773 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_C
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_95
	goto HiLoKabuto_Group5_Script_CoinBrain_100

HiLoKabuto_Group5_Script_CoinBrain_112:
# 1771 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_116
	goto HiLoKabuto_Group5_Script_CoinBrain_107

HiLoKabuto_Group5_Script_CoinBrain_113:
# 1771 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_112
	goto HiLoKabuto_Group5_Script_CoinBrain_107

HiLoKabuto_Group5_Script_CoinBrain_116:
# 1771 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_C
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_94
	goto HiLoKabuto_Group5_Script_CoinBrain_107

HiLoKabuto_Group5_Script_CoinBrain_119:
# 1769 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_123
	goto HiLoKabuto_Group5_Script_CoinBrain_114

HiLoKabuto_Group5_Script_CoinBrain_120:
# 1769 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_119
	goto HiLoKabuto_Group5_Script_CoinBrain_114

HiLoKabuto_Group5_Script_CoinBrain_123:
# 1769 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_C
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_93
	goto HiLoKabuto_Group5_Script_CoinBrain_114


HiLoKabuto_Group4_Script_PlayerWinCoins::
# 1794 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1795 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayerWin
# 1796 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 4000
# 1797 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1798 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1799 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1800 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group4Coins_Text_PlayAgain, MSGBOX_YESNO
# 1801 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group4_Script_PlayerWinCoins_1
# 1804 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1805 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_PALATIUMFELIX_LOGISTICS_DONE, HiLoKabuto_Group4_Script_PlayerWinCoins_4
# 1808 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group4_Script_PlayerWinCoins_1:
# 1802 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group4_Script_CoinBrain
	return

HiLoKabuto_Group4_Script_PlayerWinCoins_4:
# 1806 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics
	return


HiLoKabuto_Group5_Script_PlayerWinCoins::
# 1814 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1815 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayerWin
# 1816 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 750
# 1817 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1818 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1819 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1820 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group5Coins_Text_PlayAgain, MSGBOX_YESNO
# 1821 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group5_Script_PlayerWinCoins_1
# 1824 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1825 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group5_Script_PlayerWinCoins_1:
# 1822 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group5_Script_CoinBrain
	return


Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics::
# 1831 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group_Text_End
# 1832 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1835 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidefollower
# 1836 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1837 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 1838 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1841 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 1842 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_D
# 1843 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_3
# 1847 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_4
# 1849 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_5
# 1851 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_6
# 1854 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_1
# 1855 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_1:
# 1858 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1860 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_Cornelius1, MSGBOX_YESNO
# 1861 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_9
# 1906 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CorneliusDeny
# 1907 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1909 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_D
# 1910 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_21
# 1914 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_22
# 1916 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_23
# 1918 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_24
# 1921 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_1
# 1922 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_3:
# 1844 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_0
# 1845 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_4:
# 1848 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius1A
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_1

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_5:
# 1850 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius2A
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_1

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_6:
# 1852 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius3A
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_1

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_8:
# 1927 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_9:
# 1863 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setflag FLAG_PALATIUMFELIX_LOGISTICS_DONE
# 1865 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_Cornelius2
# 1866 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1868 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_D
# 1869 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_14
# 1873 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_15
# 1876 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_16
# 1879 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_17
# 1883 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_1
# 1884 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_12:
# 1888 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1889 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 1890 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 1891 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1893 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_Cornelius3
# 1894 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1895 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	giveitem ITEM_CORNELIUS_LETTER
# 1896 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_Cornelius4
# 1897 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1898 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Common_Movement_WalkRight8
# 1899 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1900 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removeobject 7
# 1901 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setobjectxy 7, 22, 4
# 1902 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 1903 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addobject 7
# 1904 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showobjectat 7, MAP_PECCADUM_PALATIUM_FELIX
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_8

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_14:
# 1870 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_0
# 1871 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_15:
# 1874 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius1C
# 1875 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Peccadum_PalatiumFelix_Movement_Cornelius1C
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_12

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_16:
# 1877 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius2C
# 1878 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Peccadum_PalatiumFelix_Movement_Cornelius2C
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_12

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_17:
# 1880 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius3C
# 1881 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Peccadum_PalatiumFelix_Movement_Cornelius3C
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_12

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_19:
# 1925 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_8

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_21:
# 1911 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_0
# 1912 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_22:
# 1915 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius1B
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_19

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_23:
# 1917 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius2B
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_19

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_24:
# 1919 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius3B
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_19


# 1932 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius1A:
# 1933 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_up
# 1934 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
	step_end

# 1937 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius2A:
# 1938 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_up
# 1939 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	face_left
	step_end

# 1942 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius3A:
# 1943 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_down
# 1944 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	face_left
	step_end

# 1948 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius1B:
# 1949 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_right
# 1950 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_down
# 1951 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	face_left
	step_end

# 1954 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius2B:
# 1955 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_down
# 1956 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	face_left
	step_end

# 1959 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius3B:
# 1960 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_up
# 1961 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	face_left
	step_end

# 1965 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius1C:
# 1966 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1966 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1966 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1966 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1966 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1966 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1966 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1966 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1966 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1966 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
	step_end

# 1969 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius2C:
# 1970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
	step_end

# 1973 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius3C:
# 1974 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_down
# 1975 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1975 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1975 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1975 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1975 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1975 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1975 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1975 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1975 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1975 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1975 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
# 1976 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_up
# 1976 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_up
# 1976 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_up
# 1977 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	face_left
	step_end

Peccadum_PalatiumFelix_Script_Cashier_Text_0:
# 70 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\n VAR_RESULT OOB Cashier$"

Peccadum_PalatiumFelix_Script_CashierBuyCoins_Text_0:
# 279 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nVARRESULT OOB BuyCoins$"

Peccadum_PalatiumFelix_Script_CashierSellCoins_Text_0:
# 490 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR, VAR_RESULT OOB SellCoins$"

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0:
# 545 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB$"

Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0:
# 690 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nBottom of GetCoinWager$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_0:
# 737 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "SPECIFIC NUM$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_1:
# 752 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_0_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_2:
# 759 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "CASE 1$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_3:
# 787 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_1_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4:
# 820 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_2_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_5:
# 862 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB in\nGetNumberWager$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_Text_0:
# 925 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_COLOR OOB$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0:
# 979 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_0:
# 1027 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_COLOR OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_1:
# 1064 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_2:
# 1070 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_Text_0:
# 1118 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB in PlayerWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0:
# 1187 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER OOB in RefundSwitch$"

DealerHiLoKabuto_Script_GetCoinWager_Text_0:
# 1466 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nVAR_RESULT OOB GetCoinWager$"

Peccadum_PalatiumFelix_Script_4HiLoKabutoB_Text_0:
# 1534 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nPlayerFacingDirection OOB$"

HiLoKabuto_Group4_Script_CoinBrain_Text_0:
# 1656 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nDeclare gambler winner\nOOB$"

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_0:
# 1844 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\n TRIGGER_LOGISTICS_SCENE = 0$"

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_1:
# 1854 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\n TRIGGER_LOGISTICS_SCENE OOB$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro::
# 1980 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I am the Blue Roulette table dealer.$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin::
# 1984 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to play a game of\n"
	.string "roulette?$"

Peccadum_PalatiumFelix_Text_NoCoins::
# 1988 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Excuse me sir, but coins are required to\n"
	.string "play games at Palatium Felix. Please\l"
	.string "speak with the cashier to purchase\l"
	.string "more.$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType::
# 1992 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "What kind of wager will you be placing?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager::
# 1996 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A wager on a winning number pays thirty\n"
	.string "to one. Are you sure that you will place\l"
	.string "a wager on a single number?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager::
# 2000 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The payout for a wager on color depends\n"
	.string "on which color you wager on. Both {COLOR RED}red\l"
	.string "{COLOR DARK_GRAY}and {COLOR BLUE}blue {COLOR DARK_GRAY}pay out at two to one while\l"
	.string "{COLOR GREEN}green {COLOR DARK_GRAY}pays out higher, fifteen to one.\l"
	.string "Are you sure that you will bet on color?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager::
# 2004 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A winning bet on range pays three to\n"
	.string "one, except for zero and double zero\l"
	.string "which pays the same as {COLOR GREEN}green{COLOR DARK_GRAY}, fifteen\l"
	.string "to one. Are you sure you want to wager\l"
	.string "on range?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager::
# 2008 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "There are thirty two individual spaces\n"
	.string "on the roulette wheel: numbers from one\l"
	.string "to thirty, single, and double nil. Which\l"
	.string "number will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager::
# 2012 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which range of numbers will you wager\n"
	.string "on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager::
# 2016 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which color will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorRed::
# 2020 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR RED}red{COLOR DARK_GRAY}.\n"
	.string "This wager will payout at two to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorBlue::
# 2024 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR BLUE}blue{COLOR DARK_GRAY}.\n"
	.string "This wager will payout at two to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorGreen::
# 2028 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR GREEN}green{COLOR DARK_GRAY}.\n"
	.string "This wager will payout fifteen to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0::
# 2032 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of zero and double zero. This will\l"
	.string "payout fifteen to one. Are you certain?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1::
# 2036 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers one through ten. This will\l"
	.string "payout at three to one. Will you confirm\l"
	.string "this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2::
# 2040 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "eleven through twenty. This will payout\l"
	.string "at three to one. Will you confirm this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3::
# 2044 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers from twenty one through\l"
	.string "thirty. The payout for this bet is three\l"
	.string "to one. Are you certain you want to\l"
	.string "place this bet?$"

CasinoDealer_Text_Refund::
# 2048 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Here are the unwagered coins back for\n"
	.string "you.$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWagerNumber::
# 2052 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on\n"
	.string "{STR_VAR_1}. The payout will be at\l"
	.string "thirty to one. Are you certain you want\l"
	.string "to place this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWager00::
# 2056 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to bet double zero. The\n"
	.string "payout will be at thirty to one. Are you\l"
	.string "certain you want to place this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGoodLuck::
# 2060 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Rien ne va plus! No more bets! Sir, good\n"
	.string "luck!$"

Peccadum_PalatiumFelix_Text_BlueRouletteAnnounceSpin::
# 2064 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The result of this spin is\n"
	.string "{STR_VAR_1}!$"

Peccadum_PalatiumFelix_Text_BlueRouletteAnnounce00::
# 2068 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The result of the spin: double zero!$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayerWin::
# 2072 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Congratulations {PLAYER}! You won\n"
	.string "your bet!$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayerLose::
# 2076 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you did not win your bet.$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayAgain::
# 2080 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to bet on roulette again?$"

Peccadum_PalatiumFelix_Text_Cashier::
# 2084 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Hello! Welcome to the Palatium Felix!\n"
	.string "Would you like to trade coins for cash?$"

Peccadum_PalatiumFelix_Text_CashierPurchase::
# 2088 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We're happy to sell you as many coins as\n"
	.string "you would like. They're one hundred\l"
	.string "bucks each. How many coins would you\l"
	.string "like to purchase?$"

Peccadum_PalatiumFelix_Text_CashierSell::
# 2092 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We're happy to exchange as many coins\n"
	.string "as you would like for one hundred bucks\l"
	.string "each. How many coins would you like to\l"
	.string "exchange?$"

Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney::
# 2096 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You don't have enough money for those\n"
	.string "coins.$"

Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins::
# 2100 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "room in your coin case to carry that\l"
	.string "many.$"

Peccadum_PalatiumFelix_Text_CashierTooMuchMoney::
# 2104 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "room to carry that much money in your\l"
	.string "purse.$"

Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins::
# 2108 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You don't have enough coins for that\n"
	.string "exchange.$"

Peccadum_PalatiumFelix_Text_CashierBye::
# 2112 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We hope to see you again soon! Good\n"
	.string "luck!$"

Peccadum_PalatiumFelix_Text_CashierTakeCoins::
# 2116 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Here are the coins you asked for sir.\n"
	.string "Thank you.$"

Peccadum_PalatiumFelix_Text_CashierTakeMoney::
# 2120 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "There is the money exchanged for you\n"
	.string "coins.$"

Peccadum_PalatiumFelix_Text_4HiLoKabuto::
# 2124 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "This is the high roller table. Buy in is\n"
	.string "one thousand coins. Do you want to\l"
	.string "play?$"

Peccadum_PalatiumFelix_Text_5HiLoKabuto::
# 2130 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Buy in for our table is one hundred and\n"
	.string "fifty coins. Would you like to join in?$"

HiLoKabuto_Group4Coins_Text_PlayAgain::
# 2134 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to wager another hand?\n"
	.string "Buy in will stay the same: one thousand\l"
	.string "coins.$"

HiLoKabuto_Group5Coins_Text_PlayAgain::
# 2138 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to wager another hand?\n"
	.string "Buy in will be one hundred fifty coins.$"

Peccadum_PalatiumFelix_Text_Cornelius1::
# 2142 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Hey kid, can I have a quick word with\n"
	.string "you?$"

Peccadum_PalatiumFelix_Text_Cornelius2::
# 2146 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Let's step away from inquisitive ears,\n"
	.string "back there in the corner by the cashier.$"

Peccadum_PalatiumFelix_Text_Cornelius3::
# 2150 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Now that we have ensured our privacy\n"
	.string "allow me to make an introduction. I am\l"
	.string "Cornelius Filisigni, owner and chief\l"
	.string "executive of the United Kashmir\l"
	.string "Trucking Company. I have lived a\l"
	.string "successful and long life but now I\l"
	.string "spend the days of my old age wasting\l"
	.string "away on this casino floor. After the\l"
	.string "passing of my dearest wife I found my\l"
	.string "life empty, void of purpose, and now the\l"
	.string "only semblance of meaning is whether\l"
	.string "Kabuto is high or low and if my wagered\l"
	.string "card comes out on top. Please trust me\l"
	.string "when I say this hollow life is all that\l"
	.string "waits for you if you remain in this\l"
	.string "accursed place for much longer. Thanks\l"
	.string "to my truck business, I have enough\l"
	.string "resources to absorb endless losses but\l"
	.string "look around and tell me what you see. An\l"
	.string "ocean of despair surrounding this\l"
	.string "island of misery disguised as wealth.\l"
	.string "The flashy lights and exquisite\l"
	.string "facades are lures to catch their prey:\l"
	.string "gamblers like us. The exhausted corpses\l"
	.string "of gamblers lie littered about town like\l"
	.string "cherry pits spat out without a care by\l"
	.string "the sticky lips of casino stained red by\l"
	.string "the flesh they tore. Poor men are\l"
	.string "ground down by the games believing\l"
	.string "they've found the path of success\l"
	.string "oblivious to their own destruction. I\l"
	.string "truly pity them. I see myself reflected\l"
	.string "in those scenes of poverty and wish\l"
	.string "that my business was medicine for\l"
	.string "broken souls instead of logistics.\l"
	.string "That's why I've asked to speak with you\l"
	.string "alone. You're far too young, too pure,\l"
	.string "too full of hope to waste away with us\l"
	.string "in Peccadum. I want to offer you what\l"
	.string "help I may and pray my unsolicited\l"
	.string "advice can help to steer you towards a\l"
	.string "better path. Take this envelope to the\l"
	.string "truck depot and speak to the front\l"
	.string "desk. Mention my name.$"

Peccadum_PalatiumFelix_Text_Cornelius4::
# 2195 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Officially, we only transport rocks, but\n"
	.string "there are other things, from time to\l"
	.string "time, which may have been misplaced by\l"
	.string "accident, incompetance, or willful\l"
	.string "misconduct, and find their way, one way\l"
	.string "or another, onto our trucks, then their\l"
	.string "destinations. So naturally this is\l"
	.string "prohibited but detection, let alone\l"
	.string "enforcement, is sparse to say the\l"
	.string "least. That letter will inform the\l"
	.string "drivers to stow you away and transport\l"
	.string "you to Urbia with haste. A land of\l"
	.string "opprotunity awaits where you can find a\l"
	.string "job, purchase a bike, and even start\l"
	.string "your own business one day. A place\l"
	.string "where all men, regardless of birth, can\l"
	.string "pursue life, liberty, hapiness, and\l"
	.string "escape this city of certain doom. Of\l"
	.string "course I can't force you, you have free\l"
	.string "will, to follow my advice but I believe\l"
	.string "that if you're worth saving, you'll save\l"
	.string "yourself. Therefore good luck!\l"
	.string "Godspeed! Oh! One more thing! My\l"
	.string "reputation and business depend on my\l"
	.string "ignorance of this hushed design.\l"
	.string "Therefore I will not speak of it again.\l"
	.string "Turning from you I must forget your\l"
	.string "face, regard you as another nameless\l"
	.string "boy, and know nothing of contraband\l"
	.string "letters. Farewell! May your life path\l"
	.string "lead you to peace.$"

Peccadum_PalatiumFelix_Text_CorneliusDeny::
# 2226 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I understand. Good luck. Have a nice\n"
	.string "day.$"
