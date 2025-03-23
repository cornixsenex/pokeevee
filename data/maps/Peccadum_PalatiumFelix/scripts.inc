Peccadum_PalatiumFelix_MapScripts::
	.byte 0


Peccadum_PalatiumFelix_Script_Cashier::
# 42 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 43 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 45 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_6, 0
# 46 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	showmoneybox 18, 0
# 47 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 6
# 48 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_Cashier
# 49 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 50 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_PALATIUM_FELIX_CASHIER, TRUE
# 51 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 53 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_Cashier_3
# 56 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_Cashier_4
# 58 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_Cashier_5
# 62 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Cashier_Text_0
# 63 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 64 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Cashier_1:
# 67 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_Cashier_3:
# 54 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_Cashier_1

Peccadum_PalatiumFelix_Script_Cashier_4:
# 57 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_Cashier_1

Peccadum_PalatiumFelix_Script_Cashier_5:
# 59 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	goto Peccadum_PalatiumFelix_Script_Cashier_1


Peccadum_PalatiumFelix_Script_CashierBye::
# 72 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidemoneybox
# 73 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 6
# 74 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierBye
# 75 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 76 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end


Peccadum_PalatiumFelix_Script_CashierBuyCoins::
# 83 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierPurchase
# 84 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 85 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 87 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PALATIUM_FELIX_COIN_CASHIER
# 88 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 89 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 91 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 93 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_CashierBuyCoins_3
# 109 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_CashierBuyCoins_4
# 125 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_CashierBuyCoins_5
# 141 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_CashierBuyCoins_6
# 157 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_CashierBuyCoins_7
# 173 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_CashierBuyCoins_8
# 189 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_CashierBuyCoins_9
# 205 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_CashierBuyCoins_10
# 221 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_CashierBuyCoins_11
# 237 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_CashierBuyCoins_12
# 253 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_CashierBuyCoins_13
# 269 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, Peccadum_PalatiumFelix_Script_CashierBuyCoins_14
# 272 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_CashierBuyCoins_Text_0
# 273 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 274 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_CashierBuyCoins_1:
# 278 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTakeCoins
# 279 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_3:
# 94 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9999
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_16
# 105 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_4:
# 110 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9995
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_19
# 121 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 122 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_5:
# 126 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9990
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_22
# 137 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 138 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_6:
# 142 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9975
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_25
# 153 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 154 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_7:
# 158 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9950
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_28
# 169 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 170 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_8:
# 174 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9900
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_31
# 185 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 186 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_9:
# 190 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9750
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_34
# 201 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 202 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_10:
# 206 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9500
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_37
# 217 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 218 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_11:
# 222 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9000
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_40
# 233 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 234 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_12:
# 238 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 7500
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_43
# 249 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 250 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_13:
# 254 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 5000
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_46
# 265 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 266 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_14:
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_16:
# 95 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 100
# 96 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_49
# 101 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_19:
# 111 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500
# 112 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_52
# 117 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 118 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_22:
# 127 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 1000
# 128 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_55
# 133 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 134 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_25:
# 143 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 2500
# 144 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_58
# 149 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 150 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_28:
# 159 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 5000
# 160 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_61
# 165 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 166 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_31:
# 175 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 10000
# 176 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_64
# 181 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 182 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_34:
# 191 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 25000
# 192 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_67
# 197 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 198 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_37:
# 207 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 50000
# 208 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_70
# 213 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 214 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_40:
# 223 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 100000
# 224 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_73
# 229 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 230 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_43:
# 239 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 250000
# 240 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_76
# 245 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 246 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_46:
# 255 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500000
# 256 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_79
# 261 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 262 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_49:
# 97 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 100
# 98 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1
# 99 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_52:
# 113 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 500
# 114 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5
# 115 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_55:
# 129 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 1000
# 130 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 10
# 131 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_58:
# 145 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 2500
# 146 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 25
# 147 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_61:
# 161 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 5000
# 162 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 50
# 163 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_64:
# 177 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 10000
# 178 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 100
# 179 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_67:
# 193 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 25000
# 194 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 250
# 195 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_70:
# 209 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 50000
# 210 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 500
# 211 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_73:
# 225 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 100000
# 226 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1000
# 227 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_76:
# 241 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 250000
# 242 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 2500
# 243 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_79:
# 257 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 500000
# 258 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5000
# 259 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1


Peccadum_PalatiumFelix_Script_CashierSellCoins::
# 284 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierSell
# 285 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 286 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 288 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PALATIUM_FELIX_COIN_CASHIER
# 289 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 290 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 292 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 294 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_CashierSellCoins_3
# 311 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_CashierSellCoins_4
# 328 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_CashierSellCoins_5
# 345 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_CashierSellCoins_6
# 362 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_CashierSellCoins_7
# 379 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_CashierSellCoins_8
# 396 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_CashierSellCoins_9
# 413 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_CashierSellCoins_10
# 430 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_CashierSellCoins_11
# 447 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_CashierSellCoins_12
# 464 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_CashierSellCoins_13
# 481 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, Peccadum_PalatiumFelix_Script_CashierSellCoins_14
# 484 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_CashierSellCoins_Text_0
# 485 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 486 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_CashierSellCoins_1:
# 490 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTakeMoney
# 491 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_3:
# 296 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_16
# 307 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_4:
# 313 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_19
# 324 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 325 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_5:
# 330 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_22
# 341 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 342 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_6:
# 347 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 24
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_25
# 358 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 359 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_7:
# 364 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 49
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_28
# 375 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 376 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_8:
# 381 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 99
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_31
# 392 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 393 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_9:
# 398 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 249
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_34
# 409 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 410 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_10:
# 415 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 499
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_37
# 426 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 427 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_11:
# 432 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 999
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_40
# 443 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 444 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_12:
# 449 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 2499
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_43
# 460 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 461 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_13:
# 466 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4999
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_46
# 477 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 478 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_14:
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_16:
# 297 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 999900
# 298 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_49
# 302 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1
# 303 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 100
# 304 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_19:
# 314 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 999500
# 315 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_52
# 319 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 320 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 500
# 321 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_22:
# 331 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 998000
# 332 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_55
# 336 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 10
# 337 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 1000
# 338 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_25:
# 348 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 997500
# 349 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_58
# 353 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 354 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 2500
# 355 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_28:
# 365 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 995000
# 366 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_61
# 370 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 50
# 371 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 5000
# 372 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_31:
# 382 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 990000
# 383 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_64
# 387 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 388 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 10000
# 389 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_34:
# 399 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 975000
# 400 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_67
# 404 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 250
# 405 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 25000
# 406 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_37:
# 416 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 950000
# 417 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_70
# 421 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 422 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 50000
# 423 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_40:
# 433 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 900000
# 434 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_73
# 438 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 439 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 100000
# 440 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_43:
# 450 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 750000
# 451 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_76
# 455 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 456 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 250000
# 457 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_46:
# 467 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500000
# 468 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_79
# 472 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5000
# 473 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 500000
# 474 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_49:
# 299 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_52:
# 316 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 317 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_55:
# 333 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 334 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_58:
# 350 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 351 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_61:
# 367 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 368 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_64:
# 384 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 385 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_67:
# 401 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 402 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_70:
# 418 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 419 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_73:
# 435 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 436 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_76:
# 452 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 453 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_79:
# 469 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 470 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1


Peccadum_PalatiumFelix_Script_CashierUpdateTransaction::
# 496 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatemoneybox
# 497 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 1, 6
# 498 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 499 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
	return


Peccadum_PalatiumFelix_Script_BlueRouletteDealer::
# 504 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 505 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 507 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro
# 509 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 510 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 5
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2
Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1:
# 515 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin, MSGBOX_YESNO
# 516 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4
# 519 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2:
# 511 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 512 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4:
# 517 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return


Peccadum_PalatiumFelix_Script_BlueRouletteBrain::
# 525 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
# 527 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
# 529 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 530 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3
# 532 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4
# 534 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5
# 536 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6
# 539 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0
# 540 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 541 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1:
# 545 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGoodLuck
# 546 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 548 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_C
# 549 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 550 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 551 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_ROULETTE_BALL
# 552 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 554 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_5, BlueRouletteSpin
# 555 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_ROULETTE_BALL2
# 556 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 558 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 559 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 560 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_5
# 561 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteBrain_9
# 564 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteAnnounce00
Peccadum_PalatiumFelix_Script_BlueRouletteBrain_8:
# 566 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 568 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3:
# 531 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4:
# 533 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5:
# 535 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6:
# 537 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_9:
# 562 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteAnnounceSpin
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_8


Peccadum_PalatiumFelix_Script_GetCoinWager::
# 574 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_TEMP_C, Peccadum_PalatiumFelix_Script_GetCoinWager_2
Peccadum_PalatiumFelix_Script_GetCoinWager_1:
# 578 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 0
# 580 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 582 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 583 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 584 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_COIN_WAGER, TRUE
# 585 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 586 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_RESULT
# 587 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 589 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_GetCoinWager_6
# 605 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_GetCoinWager_7
# 620 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_GetCoinWager_8
# 635 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_GetCoinWager_9
# 650 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_GetCoinWager_10
# 665 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_GetCoinWager_11
# 679 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_GetCoinWager_12
Peccadum_PalatiumFelix_Script_GetCoinWager_4:
# 684 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0
# 685 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 686 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_GetCoinWager_2:
# 575 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setflag FLAG_TEMP_C
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_6:
# 590 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_13
# 599 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_C
# 600 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 601 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 602 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_7:
# 606 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_16
# 615 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 616 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 617 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_8:
# 621 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 100
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_19
# 630 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 631 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 632 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_9:
# 636 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_22
# 645 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 646 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 647 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_10:
# 651 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_25
# 660 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 661 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 662 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_11:
# 666 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 2500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_28
# 675 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 676 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 677 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_12:
# 680 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_C
# 681 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 682 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_13:
# 591 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 592 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 593 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 594 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 595 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 596 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_16:
# 607 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 608 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 609 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 610 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 611 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 612 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 25
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_19:
# 622 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 623 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 624 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 625 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 626 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 627 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 100
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_22:
# 637 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 638 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 639 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 640 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 641 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 642 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 500
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_25:
# 652 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 653 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 654 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 655 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 656 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 657 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1000
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_28:
# 667 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 668 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 669 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 670 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 671 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 672 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 2500
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType::
# 692 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_1, 0
# 694 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType
# 695 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 696 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_TYPE, TRUE
# 697 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 699 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 701 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3
# 704 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4
# 707 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5
# 710 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6
Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1:
# 713 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7
# 716 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3:
# 702 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4:
# 705 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5:
# 708 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6:
# 711 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager::
# 722 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 724 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
# 726 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager
# 727 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 729 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 730 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 731 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_0
# 732 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 734 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 736 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3
# 752 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4
# 788 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5
# 822 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_6
# 856 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_7
# 859 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_5
# 860 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 861 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1:
# 865 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_2
# 866 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_2, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_9
# 874 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWager00, MSGBOX_YESNO
# 875 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_59
# 878 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3:
# 737 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_RANGE_0_NUMBER, TRUE
# 738 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 739 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_13
# 741 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_14
# 743 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_15
# 746 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_1
# 747 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 748 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4:
# 753 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_2
# 754 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 755 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_1_NUMBER
# 756 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 757 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 758 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 759 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_18
# 761 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_19
# 763 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_20
# 765 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_21
# 767 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_22
# 769 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_23
# 771 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_24
# 773 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_25
# 775 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_26
# 777 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_27
# 779 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_28
# 782 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_3
# 783 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 784 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5:
# 789 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_2_NUMBER
# 790 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 791 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 792 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 793 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_31
# 795 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_32
# 797 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_33
# 799 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_34
# 801 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_35
# 803 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_36
# 805 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_37
# 807 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_38
# 809 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_39
# 811 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_40
# 813 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_41
# 816 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4
# 817 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 818 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_6:
# 823 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_3_NUMBER
# 824 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 825 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 826 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 827 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_44
# 829 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_45
# 831 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_46
# 833 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_47
# 835 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_48
# 837 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_49
# 839 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_50
# 841 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_51
# 843 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_52
# 845 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_53
# 847 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_54
# 850 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4
# 851 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 852 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_7:
# 857 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_9:
# 867 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWagerNumber, MSGBOX_YESNO
# 868 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_56
# 871 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_13:
# 740 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_14:
# 742 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 31
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_15:
# 744 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_18:
# 760 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_19:
# 762 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 2
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_20:
# 764 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 3
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_21:
# 766 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 4
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_22:
# 768 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_23:
# 770 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 6
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_24:
# 772 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 7
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_25:
# 774 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 8
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_26:
# 776 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 9
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_27:
# 778 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 10
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_28:
# 780 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_31:
# 794 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 11
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_32:
# 796 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 12
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_33:
# 798 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 13
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_34:
# 800 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 14
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_35:
# 802 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 15
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_36:
# 804 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 16
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_37:
# 806 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 17
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_38:
# 808 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 18
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_39:
# 810 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 19
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_40:
# 812 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 20
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_41:
# 814 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_44:
# 828 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 21
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_45:
# 830 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 22
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_46:
# 832 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 23
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_47:
# 834 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 24
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_48:
# 836 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 25
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_49:
# 838 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 26
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_50:
# 840 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 27
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_51:
# 842 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 28
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_52:
# 844 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 29
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_53:
# 846 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 30
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_54:
# 848 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_56:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_59:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager::
# 885 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_4, 0
# 887 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager
# 888 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 890 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_COLOR, TRUE
# 891 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 893 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_4
# 895 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_2
# 903 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_3
# 911 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_4
# 919 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_5
# 922 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_Text_0
# 923 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 924 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_2:
# 896 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorRed, MSGBOX_YESNO
# 897 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_7
# 900 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_3:
# 904 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorBlue, MSGBOX_YESNO
# 905 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_10
# 908 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_4:
# 912 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorGreen, MSGBOX_YESNO
# 913 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_13
# 916 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_5:
# 920 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_7:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_10:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_13:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager::
# 931 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 933 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager
# 934 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 936 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 938 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 939 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 941 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2
# 949 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3
# 957 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4
# 965 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5
# 973 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6
# 976 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0
# 977 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 978 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2:
# 942 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0, MSGBOX_YESNO
# 943 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_8
# 946 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3:
# 950 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1, MSGBOX_YESNO
# 951 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_11
# 954 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4:
# 958 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2, MSGBOX_YESNO
# 959 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_14
# 962 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5:
# 966 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3, MSGBOX_YESNO
# 967 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_17
# 970 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6:
# 974 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
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
# 985 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 987 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_2
# 994 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_3
# 1030 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_4
# 1067 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_2
# 1068 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1069 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_2:
# 988 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, VAR_TEMP_2
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_6
# 991 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_3:
# 995 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_4
# 997 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_10
# 1007 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_11
# 1017 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_12
# 1024 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_0
# 1025 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1026 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_4:
# 1031 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 1033 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_15
# 1040 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_16
# 1047 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_17
# 1054 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_18
# 1061 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_1
# 1062 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1063 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_6:
# 989 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_10:
# 998 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 998 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 4
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 998 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 6
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 998 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 8
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 999 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 999 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 12
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 999 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 14
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 999 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 16
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 999 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 18
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1000 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 20
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1000 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 22
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1000 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 24
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1000 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 26
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1000 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 28
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1001 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 30
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1004 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_11:
# 1008 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1008 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 3
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1008 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1008 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 7
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1009 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 9
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1009 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1009 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 13
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1009 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 15
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1009 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 17
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1010 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 19
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1010 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 21
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1010 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 23
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1010 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 25
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1010 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 27
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1011 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 29
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1014 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_12:
# 1018 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82
# 1018 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82
# 1021 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_15:
# 1034 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87
# 1034 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87
# 1037 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_16:
# 1041 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_94
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_93:
# 1044 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_17:
# 1048 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_99
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_98:
# 1051 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_18:
# 1055 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 20
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_104
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_103:
# 1058 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20:
# 1002 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51:
# 1012 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82:
# 1019 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87:
# 1035 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_92:
# 1042 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_94:
# 1041 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_92
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_93

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_97:
# 1049 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_99:
# 1048 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_97
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_98

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_102:
# 1056 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_104:
# 1055 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_102
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_103


Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin::
# 1075 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1076 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayerWin
# 1077 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1079 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 1081 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_3
# 1088 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_4
# 1101 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_5
# 1114 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1115 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_Text_0
# 1116 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1117 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1:
# 1120 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins VAR_TEMP_0
# 1121 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1122 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1123 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1124 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1125 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain
	return

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_3:
# 1082 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_7
# 1085 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_4:
# 1090 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_ne Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_10
# 1094 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_16
# 1097 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_5:
# 1103 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_ne Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_13
# 1107 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_19
# 1110 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_7:
# 1083 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 30
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_10:
# 1091 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 2
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_13:
# 1104 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 3
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_16:
# 1095 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 15
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_19:
# 1108 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 15
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1


Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose::
# 1129 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayerLose
# 1130 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain
	return


Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain::
# 1134 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayAgain, MSGBOX_YESNO
# 1135 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain_1
# 1138 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return

Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain_1:
# 1136 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return


Peccadum_PalatiumFelix_Script_BlueRouletteEnd::
# 1143 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_C, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2
Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1:
# 1191 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Bye
# 1193 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 1194 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1195 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1196 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2:
# 1144 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1145 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Refund
# 1146 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 1147 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5
# 1153 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 25, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6
# 1159 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 100, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7
# 1165 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 500, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8
# 1171 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1000, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9
# 1177 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2500, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10
# 1184 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0
# 1185 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1186 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5:
# 1148 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5
# 1149 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1150 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1151 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1152 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6:
# 1154 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 25
# 1155 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1156 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1157 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1158 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7:
# 1160 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 100
# 1161 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1162 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1163 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1164 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8:
# 1166 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 500
# 1167 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1168 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1169 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1170 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9:
# 1172 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1000
# 1173 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1174 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1175 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1176 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10:
# 1178 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 2500
# 1179 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1180 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1181 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1182 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1


Peccadum_PalatiumFelix_Script_DealerHiLoKabuto::
# 1201 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1203 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 1205 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Start, MSGBOX_YESNO
# 1207 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_2
# 1212 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1213 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_5
# 1216 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 1217 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_1:
# 1220 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_2:
# 1208 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_1

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_5:
# 1214 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_1


Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain::
# 1226 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
# 1228 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_ResetGame
# 1230 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 1233 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_RemoveCard
# 1234 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 1235 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_8, VAR_RESULT
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_3:
# 1238 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 1239 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_8
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_3
# 1240 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1242 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_B, Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_6
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_5:
# 1251 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_8
# 1252 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_7
# 1253 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_9
# 1253 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_9
# 1256 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_8:
# 1258 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_7, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_18
# 1258 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_18
# 1261 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceDealerCard
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_17:
# 1264 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_7
	goto_if_gt Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_26
# 1267 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_DealerWin
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_25:
# 1270 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_PlayAgainCoins
	return

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_6:
# 1243 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_15
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_14:
# 1246 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_23
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_5

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_9:
# 1254 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_8

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_15:
# 1244 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_14

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_18:
# 1259 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceDealerKabuto
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_17

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_23:
# 1247 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_7, 10
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_5

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_26:
# 1265 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_PlayerWinCoins
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_25


DealerHiLoKabuto_Script_GetCoinWager::
# 1274 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 0
# 1275 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1276 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 1277 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1278 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PALATIUM_FELIX_COIN_CASHIER
# 1279 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 1280 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 1281 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 1282 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 1284 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, DealerHiLoKabuto_Script_GetCoinWager_2
# 1300 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, DealerHiLoKabuto_Script_GetCoinWager_3
# 1316 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, DealerHiLoKabuto_Script_GetCoinWager_4
# 1332 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, DealerHiLoKabuto_Script_GetCoinWager_5
# 1348 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, DealerHiLoKabuto_Script_GetCoinWager_6
# 1364 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, DealerHiLoKabuto_Script_GetCoinWager_7
# 1380 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, DealerHiLoKabuto_Script_GetCoinWager_8
# 1396 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, DealerHiLoKabuto_Script_GetCoinWager_9
# 1412 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, DealerHiLoKabuto_Script_GetCoinWager_10
# 1428 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, DealerHiLoKabuto_Script_GetCoinWager_11
# 1444 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, DealerHiLoKabuto_Script_GetCoinWager_12
# 1460 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, DealerHiLoKabuto_Script_GetCoinWager_13
# 1464 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Script_GetCoinWager_Text_0
# 1465 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1466 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

DealerHiLoKabuto_Script_GetCoinWager_2:
# 1285 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1286 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_15
# 1295 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1296 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 1297 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_GetCoinWager_3:
# 1301 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1302 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_18
# 1311 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1312 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1313 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_4:
# 1317 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1318 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_21
# 1327 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1328 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1329 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_5:
# 1333 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1334 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 24
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_24
# 1343 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1344 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1345 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_6:
# 1349 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1350 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 49
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_27
# 1359 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1360 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1361 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_7:
# 1365 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1366 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 99
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_30
# 1375 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1376 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1377 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_8:
# 1381 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1382 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 249
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_33
# 1391 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1392 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1393 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_9:
# 1397 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1398 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 499
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_36
# 1407 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1408 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1409 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_10:
# 1413 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1414 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 999
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_39
# 1423 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1424 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1425 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_11:
# 1429 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1430 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 2499
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_42
# 1439 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1440 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1441 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_12:
# 1445 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1446 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4999
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_45
# 1455 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1456 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1457 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_13:
# 1461 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1462 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_GetCoinWager_15:
# 1287 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1
# 1288 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1289 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1290 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1291 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1292 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

DealerHiLoKabuto_Script_GetCoinWager_18:
# 1303 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 1304 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1305 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1306 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1307 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1308 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5
	return

DealerHiLoKabuto_Script_GetCoinWager_21:
# 1319 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 10
# 1320 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1321 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1322 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1323 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1324 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 10
	return

DealerHiLoKabuto_Script_GetCoinWager_24:
# 1335 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 1336 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1337 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1338 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1339 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1340 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 25
	return

DealerHiLoKabuto_Script_GetCoinWager_27:
# 1351 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 50
# 1352 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1353 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1354 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1355 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1356 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 50
	return

DealerHiLoKabuto_Script_GetCoinWager_30:
# 1367 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 1368 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1369 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1370 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1371 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1372 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 100
	return

DealerHiLoKabuto_Script_GetCoinWager_33:
# 1383 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 250
# 1384 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1385 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1386 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1387 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1388 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 250
	return

DealerHiLoKabuto_Script_GetCoinWager_36:
# 1399 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 1400 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1401 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1402 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1403 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1404 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 500
	return

DealerHiLoKabuto_Script_GetCoinWager_39:
# 1415 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 1416 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1417 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1418 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1419 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1420 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1000
	return

DealerHiLoKabuto_Script_GetCoinWager_42:
# 1431 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 1432 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1433 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1434 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1435 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1436 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 2500
	return

DealerHiLoKabuto_Script_GetCoinWager_45:
# 1447 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5000
# 1448 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1449 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1450 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1451 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1452 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5000
	return


DealerHiLoKabuto_Script_PlayerWinCoins::
# 1472 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1473 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_PlayerWin
# 1474 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 2
# 1475 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins VAR_TEMP_0
# 1476 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1477 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1478 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1479 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return


DealerHiLoKabuto_Script_PlayAgainCoins::
# 1484 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_PlayAgain, MSGBOX_YESNO
# 1485 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DealerHiLoKabuto_Script_PlayAgainCoins_1
# 1488 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_PlayAgainCoins_1:
# 1486 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain
	return


Peccadum_PalatiumFelix_Script_TableDealer::
# 1493 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1494 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 1495 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 1496 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerOpen_TakeSeat
# 1497 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1498 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1499 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1500 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end


Peccadum_PalatiumFelix_Script_BusyDealer::
# 1505 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1506 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 1507 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerBusy
# 1508 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1509 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1510 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1511 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end


Peccadum_PalatiumFelix_Script_4HiLoKabuto::
# 1517 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1518 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1519 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_4HiLoKabuto, MSGBOX_YESNO
# 1520 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_4HiLoKabuto_1
# 1524 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group4_Script_CoinBrain
	return

Peccadum_PalatiumFelix_Script_4HiLoKabuto_1:
# 1521 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1522 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return


Peccadum_PalatiumFelix_Script_5HiLoKabuto::
# 1530 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1531 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1532 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_5HiLoKabuto, MSGBOX_YESNO
# 1533 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_5HiLoKabuto_1
# 1537 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group5_Script_CoinBrain
	return

Peccadum_PalatiumFelix_Script_5HiLoKabuto_1:
# 1534 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1535 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return


HiLoKabuto_Group4_Script_CoinBrain::
# 1543 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1544 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 1000
	goto_if_lt HiLoKabuto_Group4_Script_CoinBrain_2
# 1549 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 1550 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1551 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1552 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1553 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
HiLoKabuto_Group4_Script_CoinBrain_1:
# 1556 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_ResetGame
# 1558 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 1561 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_9, RandDigit
HiLoKabuto_Group4_Script_CoinBrain_7:
# 1564 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_A, RandDigit
# 1565 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_7
HiLoKabuto_Group4_Script_CoinBrain_11:
# 1568 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_B, RandDigit
# 1569 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_11
# 1569 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_11
HiLoKabuto_Group4_Script_CoinBrain_17:
# 1572 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_8, RandDigit
# 1573 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_17
# 1573 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_17
# 1573 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_B
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_17
# 1575 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_B, HiLoKabuto_Group4_Script_CoinBrain_24
HiLoKabuto_Group4_Script_CoinBrain_23:
# 1591 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_8
# 1592 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_27
# 1592 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_27
# 1595 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
HiLoKabuto_Group4_Script_CoinBrain_26:
# 1598 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_9
# 1599 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 10
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_36
# 1599 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_36
# 1602 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Card
HiLoKabuto_Group4_Script_CoinBrain_35:
# 1604 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_A
# 1605 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 10
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_45
# 1605 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_45
# 1608 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Card
HiLoKabuto_Group4_Script_CoinBrain_44:
# 1610 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_TEMP_B
# 1611 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 10
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_54
# 1611 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_54
# 1614 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Card
HiLoKabuto_Group4_Script_CoinBrain_53:
# 1617 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_65
HiLoKabuto_Group4_Script_CoinBrain_63:
# 1621 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_87
HiLoKabuto_Group4_Script_CoinBrain_83:
# 1623 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_82
HiLoKabuto_Group4_Script_CoinBrain_78:
# 1625 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_77
HiLoKabuto_Group4_Script_CoinBrain_75:
# 1628 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group4_Script_CoinBrain_Text_0
HiLoKabuto_Group4_Script_CoinBrain_61:
# 1632 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1633 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group4Coins_Text_PlayAgain, MSGBOX_YESNO
# 1634 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_69
# 1637 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1638 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group4_Script_CoinBrain_2:
# 1545 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 1546 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1547 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	goto HiLoKabuto_Group4_Script_CoinBrain_1

HiLoKabuto_Group4_Script_CoinBrain_24:
# 1576 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_33
HiLoKabuto_Group4_Script_CoinBrain_32:
# 1579 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_42
HiLoKabuto_Group4_Script_CoinBrain_41:
# 1582 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_51
HiLoKabuto_Group4_Script_CoinBrain_50:
# 1585 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_59
	goto HiLoKabuto_Group4_Script_CoinBrain_23

HiLoKabuto_Group4_Script_CoinBrain_27:
# 1593 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto HiLoKabuto_Group4_Script_CoinBrain_26

HiLoKabuto_Group4_Script_CoinBrain_33:
# 1577 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto HiLoKabuto_Group4_Script_CoinBrain_32

HiLoKabuto_Group4_Script_CoinBrain_36:
# 1600 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Kabuto
	goto HiLoKabuto_Group4_Script_CoinBrain_35

HiLoKabuto_Group4_Script_CoinBrain_42:
# 1580 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_9, 10
	goto HiLoKabuto_Group4_Script_CoinBrain_41

HiLoKabuto_Group4_Script_CoinBrain_45:
# 1606 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Kabuto
	goto HiLoKabuto_Group4_Script_CoinBrain_44

HiLoKabuto_Group4_Script_CoinBrain_51:
# 1583 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_A, 10
	goto HiLoKabuto_Group4_Script_CoinBrain_50

HiLoKabuto_Group4_Script_CoinBrain_54:
# 1612 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Kabuto
	goto HiLoKabuto_Group4_Script_CoinBrain_53

HiLoKabuto_Group4_Script_CoinBrain_59:
# 1586 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_B, 10
	goto HiLoKabuto_Group4_Script_CoinBrain_23

HiLoKabuto_Group4_Script_CoinBrain_62:
# 1618 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group4_Script_PlayerWinCoins
	goto HiLoKabuto_Group4_Script_CoinBrain_61

HiLoKabuto_Group4_Script_CoinBrain_64:
# 1617 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_62
	goto HiLoKabuto_Group4_Script_CoinBrain_63

HiLoKabuto_Group4_Script_CoinBrain_65:
# 1617 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_64
	goto HiLoKabuto_Group4_Script_CoinBrain_63

HiLoKabuto_Group4_Script_CoinBrain_69:
# 1635 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group4_Script_CoinBrain
	return

HiLoKabuto_Group4_Script_CoinBrain_72:
# 1622 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler1Won
	goto HiLoKabuto_Group4_Script_CoinBrain_61

HiLoKabuto_Group4_Script_CoinBrain_73:
# 1624 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler2Won
	goto HiLoKabuto_Group4_Script_CoinBrain_61

HiLoKabuto_Group4_Script_CoinBrain_74:
# 1626 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler3Won
	goto HiLoKabuto_Group4_Script_CoinBrain_61

HiLoKabuto_Group4_Script_CoinBrain_76:
# 1625 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_74
	goto HiLoKabuto_Group4_Script_CoinBrain_75

HiLoKabuto_Group4_Script_CoinBrain_77:
# 1625 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_76
	goto HiLoKabuto_Group4_Script_CoinBrain_75

HiLoKabuto_Group4_Script_CoinBrain_81:
# 1623 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_73
	goto HiLoKabuto_Group4_Script_CoinBrain_78

HiLoKabuto_Group4_Script_CoinBrain_82:
# 1623 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_81
	goto HiLoKabuto_Group4_Script_CoinBrain_78

HiLoKabuto_Group4_Script_CoinBrain_86:
# 1621 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_72
	goto HiLoKabuto_Group4_Script_CoinBrain_83

HiLoKabuto_Group4_Script_CoinBrain_87:
# 1621 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_86
	goto HiLoKabuto_Group4_Script_CoinBrain_83


HiLoKabuto_Group5_Script_CoinBrain::
# 1645 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1646 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 150
	goto_if_lt HiLoKabuto_Group5_Script_CoinBrain_2
# 1651 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 150
# 1652 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1653 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1654 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1655 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
HiLoKabuto_Group5_Script_CoinBrain_1:
# 1658 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_ResetGame
# 1660 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 1663 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_9, RandDigit
HiLoKabuto_Group5_Script_CoinBrain_7:
# 1666 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_A, RandDigit
# 1667 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_7
HiLoKabuto_Group5_Script_CoinBrain_11:
# 1670 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_B, RandDigit
# 1671 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_11
# 1671 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_11
HiLoKabuto_Group5_Script_CoinBrain_17:
# 1674 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_C, RandDigit
# 1675 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_17
# 1675 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_17
# 1675 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_B
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_17
HiLoKabuto_Group5_Script_CoinBrain_25:
# 1678 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_8, RandDigit
# 1679 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_25
# 1679 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_25
# 1679 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_B
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_25
# 1679 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_C
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_25
# 1681 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_B, HiLoKabuto_Group5_Script_CoinBrain_34
HiLoKabuto_Group5_Script_CoinBrain_33:
# 1700 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_8
# 1701 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_37
# 1701 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_37
# 1704 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
HiLoKabuto_Group5_Script_CoinBrain_36:
# 1707 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_9
# 1708 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_46
# 1708 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_46
# 1711 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Card
HiLoKabuto_Group5_Script_CoinBrain_45:
# 1713 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_A
# 1714 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_55
# 1714 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_55
# 1717 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Card
HiLoKabuto_Group5_Script_CoinBrain_54:
# 1719 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_TEMP_B
# 1720 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_64
# 1720 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_64
# 1723 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Card
HiLoKabuto_Group5_Script_CoinBrain_63:
# 1726 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_C
# 1727 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_73
# 1727 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_73
# 1730 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp4Card
HiLoKabuto_Group5_Script_CoinBrain_72:
# 1733 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_84
HiLoKabuto_Group5_Script_CoinBrain_82:
# 1737 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_120
HiLoKabuto_Group5_Script_CoinBrain_114:
# 1739 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_113
HiLoKabuto_Group5_Script_CoinBrain_107:
# 1741 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_106
HiLoKabuto_Group5_Script_CoinBrain_100:
# 1743 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_99
HiLoKabuto_Group5_Script_CoinBrain_97:
# 1746 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group4_Script_CoinBrain_Text_0
HiLoKabuto_Group5_Script_CoinBrain_80:
# 1750 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1751 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group5Coins_Text_PlayAgain, MSGBOX_YESNO
# 1752 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_90
# 1755 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1756 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group5_Script_CoinBrain_2:
# 1647 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 1648 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1649 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	goto HiLoKabuto_Group5_Script_CoinBrain_1

HiLoKabuto_Group5_Script_CoinBrain_34:
# 1682 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_43
HiLoKabuto_Group5_Script_CoinBrain_42:
# 1685 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_52
HiLoKabuto_Group5_Script_CoinBrain_51:
# 1688 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_61
HiLoKabuto_Group5_Script_CoinBrain_60:
# 1691 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_70
HiLoKabuto_Group5_Script_CoinBrain_69:
# 1694 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_78
	goto HiLoKabuto_Group5_Script_CoinBrain_33

HiLoKabuto_Group5_Script_CoinBrain_37:
# 1702 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_36

HiLoKabuto_Group5_Script_CoinBrain_43:
# 1683 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_42

HiLoKabuto_Group5_Script_CoinBrain_46:
# 1709 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Kabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_45

HiLoKabuto_Group5_Script_CoinBrain_52:
# 1686 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_9, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_51

HiLoKabuto_Group5_Script_CoinBrain_55:
# 1715 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Kabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_54

HiLoKabuto_Group5_Script_CoinBrain_61:
# 1689 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_A, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_60

HiLoKabuto_Group5_Script_CoinBrain_64:
# 1721 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Kabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_63

HiLoKabuto_Group5_Script_CoinBrain_70:
# 1692 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_B, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_69

HiLoKabuto_Group5_Script_CoinBrain_73:
# 1728 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp4Kabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_72

HiLoKabuto_Group5_Script_CoinBrain_78:
# 1695 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_C, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_33

HiLoKabuto_Group5_Script_CoinBrain_81:
# 1734 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group5_Script_PlayerWinCoins
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_83:
# 1733 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_87
	goto HiLoKabuto_Group5_Script_CoinBrain_82

HiLoKabuto_Group5_Script_CoinBrain_84:
# 1733 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_83
	goto HiLoKabuto_Group5_Script_CoinBrain_82

HiLoKabuto_Group5_Script_CoinBrain_87:
# 1733 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_C
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_81
	goto HiLoKabuto_Group5_Script_CoinBrain_82

HiLoKabuto_Group5_Script_CoinBrain_90:
# 1753 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group5_Script_CoinBrain
	return

HiLoKabuto_Group5_Script_CoinBrain_93:
# 1738 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler1Won
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_94:
# 1740 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler2Won
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_95:
# 1742 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler3Won
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_96:
# 1744 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler4Won
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_98:
# 1743 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_102
	goto HiLoKabuto_Group5_Script_CoinBrain_97

HiLoKabuto_Group5_Script_CoinBrain_99:
# 1743 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_98
	goto HiLoKabuto_Group5_Script_CoinBrain_97

HiLoKabuto_Group5_Script_CoinBrain_102:
# 1743 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_96
	goto HiLoKabuto_Group5_Script_CoinBrain_97

HiLoKabuto_Group5_Script_CoinBrain_105:
# 1741 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_109
	goto HiLoKabuto_Group5_Script_CoinBrain_100

HiLoKabuto_Group5_Script_CoinBrain_106:
# 1741 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_105
	goto HiLoKabuto_Group5_Script_CoinBrain_100

HiLoKabuto_Group5_Script_CoinBrain_109:
# 1741 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_C
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_95
	goto HiLoKabuto_Group5_Script_CoinBrain_100

HiLoKabuto_Group5_Script_CoinBrain_112:
# 1739 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_116
	goto HiLoKabuto_Group5_Script_CoinBrain_107

HiLoKabuto_Group5_Script_CoinBrain_113:
# 1739 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_112
	goto HiLoKabuto_Group5_Script_CoinBrain_107

HiLoKabuto_Group5_Script_CoinBrain_116:
# 1739 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_C
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_94
	goto HiLoKabuto_Group5_Script_CoinBrain_107

HiLoKabuto_Group5_Script_CoinBrain_119:
# 1737 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_123
	goto HiLoKabuto_Group5_Script_CoinBrain_114

HiLoKabuto_Group5_Script_CoinBrain_120:
# 1737 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_119
	goto HiLoKabuto_Group5_Script_CoinBrain_114

HiLoKabuto_Group5_Script_CoinBrain_123:
# 1737 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_C
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_93
	goto HiLoKabuto_Group5_Script_CoinBrain_114


HiLoKabuto_Group4_Script_PlayerWinCoins::
# 1762 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1763 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayerWin
# 1764 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 4000
# 1765 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1766 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1767 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1768 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group4Coins_Text_PlayAgain, MSGBOX_YESNO
# 1769 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group4_Script_PlayerWinCoins_1
# 1772 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1773 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group4_Script_PlayerWinCoins_1:
# 1770 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group4_Script_CoinBrain
	return


HiLoKabuto_Group5_Script_PlayerWinCoins::
# 1778 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1779 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayerWin
# 1780 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 750
# 1781 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1782 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1783 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1784 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group5Coins_Text_PlayAgain, MSGBOX_YESNO
# 1785 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group5_Script_PlayerWinCoins_1
# 1788 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1789 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group5_Script_PlayerWinCoins_1:
# 1786 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group5_Script_CoinBrain
	return


Peccadum_PalatiumFelix_Script_Cashier_Text_0:
# 62 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\n VAR_RESULT OOB Cashier$"

Peccadum_PalatiumFelix_Script_CashierBuyCoins_Text_0:
# 272 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nVARRESULT OOB BuyCoins$"

Peccadum_PalatiumFelix_Script_CashierSellCoins_Text_0:
# 484 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR, VAR_RESULT OOB SellCoins$"

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0:
# 539 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB$"

Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0:
# 684 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nBottom of GetCoinWager$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_0:
# 731 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "SPECIFIC NUM$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_1:
# 746 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_0_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_2:
# 753 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "CASE 1$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_3:
# 782 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_1_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4:
# 816 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_2_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_5:
# 859 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB in\nGetNumberWager$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_Text_0:
# 922 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_COLOR OOB$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0:
# 976 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_0:
# 1024 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_COLOR OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_1:
# 1061 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_2:
# 1067 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_Text_0:
# 1115 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB in PlayerWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0:
# 1184 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER OOB in RefundSwitch$"

DealerHiLoKabuto_Script_GetCoinWager_Text_0:
# 1464 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nVAR_RESULT OOB GetCoinWager$"

HiLoKabuto_Group4_Script_CoinBrain_Text_0:
# 1628 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nDeclare gambler winner\nOOB$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro::
# 1793 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I am the Blue Roulette table dealer.$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin::
# 1797 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to play a game of\n"
	.string "roulette?$"

Peccadum_PalatiumFelix_Text_NoCoins::
# 1801 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Excuse me sir, but coins are required to\n"
	.string "play games at Palatium Felix. Please\l"
	.string "speak with the cashier to purchase\l"
	.string "more.$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType::
# 1805 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "What kind of wager will you be placing?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager::
# 1809 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A wager on a winning number pays thirty\n"
	.string "to one. Are you sure that you will place\l"
	.string "a wager on a single number?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager::
# 1813 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The payout for a wager on color depends\n"
	.string "on which color you wager on. Both {COLOR RED}red\l"
	.string "{COLOR DARK_GRAY}and {COLOR BLUE}blue {COLOR DARK_GRAY}pay out at two to one while\l"
	.string "{COLOR GREEN}green {COLOR DARK_GRAY}pays out higher, fifteen to one.\l"
	.string "Are you sure that you will bet on color?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager::
# 1817 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A winning bet on range pays three to\n"
	.string "one, except for zero and double zero\l"
	.string "which pays the same as {COLOR GREEN}green{COLOR DARK_GRAY}, fifteen\l"
	.string "to one. Are you sure you want to wager\l"
	.string "on range?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager::
# 1821 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "There are thirty two individual spaces\n"
	.string "on the roulette wheel: numbers from one\l"
	.string "to thirty, single, and double nil. Which\l"
	.string "number will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager::
# 1825 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which range of numbers will you wager\n"
	.string "on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager::
# 1829 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which color will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorRed::
# 1833 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR RED}red{COLOR DARK_GRAY}.\n"
	.string "This wager will payout at two to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorBlue::
# 1837 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR BLUE}blue{COLOR DARK_GRAY}.\n"
	.string "This wager will payout at two to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorGreen::
# 1841 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR GREEN}green{COLOR DARK_GRAY}.\n"
	.string "This wager will payout fifteen to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0::
# 1845 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of zero and double zero. This will\l"
	.string "payout fifteen to one. Are you certain?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1::
# 1849 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers one through ten. This will\l"
	.string "payout at three to one. Will you confirm\l"
	.string "this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2::
# 1853 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "eleven through twenty. This will payout\l"
	.string "at three to one. Will you confirm this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3::
# 1857 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers from twenty one through\l"
	.string "thirty. The payout for this bet is three\l"
	.string "to one. Are you certain you want to\l"
	.string "place this bet?$"

CasinoDealer_Text_Refund::
# 1861 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Here are the unwagered coins back for\n"
	.string "you.$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWagerNumber::
# 1865 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on\n"
	.string "{STR_VAR_1}. The payout will be at\l"
	.string "thirty to one. Are you certain you want\l"
	.string "to place this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWager00::
# 1869 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to bet double zero. The\n"
	.string "payout will be at thirty to one. Are you\l"
	.string "certain you want to place this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGoodLuck::
# 1873 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Rien ne va plus! No more bets! Sir, good\n"
	.string "luck!$"

Peccadum_PalatiumFelix_Text_BlueRouletteAnnounceSpin::
# 1877 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The result of this spin is\n"
	.string "{STR_VAR_1}!$"

Peccadum_PalatiumFelix_Text_BlueRouletteAnnounce00::
# 1881 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The result of the spin: double zero!$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayerWin::
# 1885 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Congratulations {PLAYER}! You won\n"
	.string "your bet!$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayerLose::
# 1889 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you did not win your bet.$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayAgain::
# 1893 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to bet on roulette again?$"

Peccadum_PalatiumFelix_Text_Cashier::
# 1897 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Hello! Welcome to the Palatium Felix!\n"
	.string "Would you like to trade coins for cash?$"

Peccadum_PalatiumFelix_Text_CashierPurchase::
# 1901 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We're happy to sell you as many coins as\n"
	.string "you would like. They're one hundred\l"
	.string "bucks each. How many coins would you\l"
	.string "like to purchase?$"

Peccadum_PalatiumFelix_Text_CashierSell::
# 1905 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We're happy to exchange as many coins\n"
	.string "as you would like for one hundred bucks\l"
	.string "each. How many coins would you like to\l"
	.string "exchange?$"

Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney::
# 1909 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You don't have enough money for those\n"
	.string "coins.$"

Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins::
# 1913 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "room in your coin case to carry that\l"
	.string "many.$"

Peccadum_PalatiumFelix_Text_CashierTooMuchMoney::
# 1917 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "room to carry that much money in your\l"
	.string "purse.$"

Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins::
# 1921 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You don't have enough coins for that\n"
	.string "exchange.$"

Peccadum_PalatiumFelix_Text_CashierBye::
# 1925 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We hope to see you again soon! Good\n"
	.string "luck!$"

Peccadum_PalatiumFelix_Text_CashierTakeCoins::
# 1929 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Here are the coins you asked for sir.\n"
	.string "Thank you.$"

Peccadum_PalatiumFelix_Text_CashierTakeMoney::
# 1933 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "There is the money exchanged for you\n"
	.string "coins.$"

Peccadum_PalatiumFelix_Text_4HiLoKabuto::
# 1937 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "This is the high roller table. Buy in is\n"
	.string "one thousand coins. Do you want to\l"
	.string "play?$"

Peccadum_PalatiumFelix_Text_5HiLoKabuto::
# 1943 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Buy in for our table is one hundred and\n"
	.string "fifty coins. Would you like to join in?$"

HiLoKabuto_Group4Coins_Text_PlayAgain::
# 1947 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to wager another hand?\n"
	.string "Buy in will stay the same: one thousand\l"
	.string "coins.$"

HiLoKabuto_Group5Coins_Text_PlayAgain::
# 1951 "data//maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to wager another hand?\n"
	.string "Buy in will be one hundred fifty coins.$"
