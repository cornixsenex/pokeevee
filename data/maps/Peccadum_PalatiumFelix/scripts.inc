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
# 97 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 99 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 101 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_CashierBuyCoins_3
# 117 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_CashierBuyCoins_4
# 133 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_CashierBuyCoins_5
# 149 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_CashierBuyCoins_6
# 165 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_CashierBuyCoins_7
# 181 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_CashierBuyCoins_8
# 197 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_CashierBuyCoins_9
# 213 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_CashierBuyCoins_10
# 229 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_CashierBuyCoins_11
# 245 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_CashierBuyCoins_12
# 261 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_CashierBuyCoins_13
# 277 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, Peccadum_PalatiumFelix_Script_CashierBuyCoins_14
# 280 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_CashierBuyCoins_Text_0
# 281 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 282 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_CashierBuyCoins_1:
# 286 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTakeCoins
# 287 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_3:
# 102 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9999
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_16
# 113 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_4:
# 118 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9995
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_19
# 129 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 130 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_5:
# 134 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9990
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_22
# 145 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 146 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_6:
# 150 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9975
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_25
# 161 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 162 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_7:
# 166 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9950
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_28
# 177 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 178 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_8:
# 182 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9900
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_31
# 193 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 194 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_9:
# 198 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9750
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_34
# 209 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 210 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_10:
# 214 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9500
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_37
# 225 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 226 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_11:
# 230 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9000
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_40
# 241 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 242 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_12:
# 246 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 7500
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_43
# 257 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 258 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_13:
# 262 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 5000
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_46
# 273 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 274 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_14:
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_16:
# 103 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 100
# 104 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_49
# 109 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_19:
# 119 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500
# 120 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_52
# 125 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 126 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_22:
# 135 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 1000
# 136 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_55
# 141 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 142 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_25:
# 151 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 2500
# 152 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_58
# 157 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 158 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_28:
# 167 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 5000
# 168 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_61
# 173 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 174 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_31:
# 183 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 10000
# 184 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_64
# 189 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 190 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_34:
# 199 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 25000
# 200 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_67
# 205 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 206 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_37:
# 215 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 50000
# 216 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_70
# 221 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 222 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_40:
# 231 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 100000
# 232 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_73
# 237 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 238 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_43:
# 247 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 250000
# 248 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_76
# 253 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 254 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_46:
# 263 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500000
# 264 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_79
# 269 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 270 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_49:
# 105 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 100
# 106 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1
# 107 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_52:
# 121 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 500
# 122 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5
# 123 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_55:
# 137 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 1000
# 138 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 10
# 139 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_58:
# 153 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 2500
# 154 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 25
# 155 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_61:
# 169 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 5000
# 170 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 50
# 171 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_64:
# 185 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 10000
# 186 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 100
# 187 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_67:
# 201 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 25000
# 202 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 250
# 203 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_70:
# 217 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 50000
# 218 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 500
# 219 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_73:
# 233 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 100000
# 234 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1000
# 235 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_76:
# 249 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 250000
# 250 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 2500
# 251 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_79:
# 265 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 500000
# 266 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5000
# 267 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1


Peccadum_PalatiumFelix_Script_CashierSellCoins::
# 292 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierSell
# 293 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 294 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 296 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PALATIUM_FELIX_COIN_CASHIER
# 297 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 298 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 300 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 302 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_CashierSellCoins_3
# 319 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_CashierSellCoins_4
# 336 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_CashierSellCoins_5
# 353 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_CashierSellCoins_6
# 370 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_CashierSellCoins_7
# 387 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_CashierSellCoins_8
# 404 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_CashierSellCoins_9
# 421 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_CashierSellCoins_10
# 438 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_CashierSellCoins_11
# 455 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_CashierSellCoins_12
# 472 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_CashierSellCoins_13
# 489 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, Peccadum_PalatiumFelix_Script_CashierSellCoins_14
# 492 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_CashierSellCoins_Text_0
# 493 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 494 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_CashierSellCoins_1:
# 498 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTakeMoney
# 499 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_3:
# 304 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_16
# 315 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_4:
# 321 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_19
# 332 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 333 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_5:
# 338 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_22
# 349 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 350 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_6:
# 355 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 24
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_25
# 366 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 367 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_7:
# 372 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 49
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_28
# 383 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 384 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_8:
# 389 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 99
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_31
# 400 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 401 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_9:
# 406 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 249
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_34
# 417 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 418 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_10:
# 423 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 499
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_37
# 434 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 435 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_11:
# 440 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 999
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_40
# 451 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 452 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_12:
# 457 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 2499
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_43
# 468 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 469 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_13:
# 474 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4999
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_46
# 485 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 486 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_14:
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_16:
# 305 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 999900
# 306 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_49
# 310 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1
# 311 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 100
# 312 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_19:
# 322 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 999500
# 323 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_52
# 327 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 328 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 500
# 329 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_22:
# 339 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 998000
# 340 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_55
# 344 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 10
# 345 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 1000
# 346 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_25:
# 356 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 997500
# 357 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_58
# 361 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 362 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 2500
# 363 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_28:
# 373 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 995000
# 374 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_61
# 378 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 50
# 379 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 5000
# 380 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_31:
# 390 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 990000
# 391 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_64
# 395 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 396 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 10000
# 397 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_34:
# 407 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 975000
# 408 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_67
# 412 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 250
# 413 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 25000
# 414 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_37:
# 424 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 950000
# 425 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_70
# 429 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 430 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 50000
# 431 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_40:
# 441 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 900000
# 442 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_73
# 446 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 447 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 100000
# 448 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_43:
# 458 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 750000
# 459 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_76
# 463 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 464 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 250000
# 465 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_46:
# 475 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500000
# 476 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_79
# 480 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5000
# 481 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 500000
# 482 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_49:
# 307 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_52:
# 324 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 325 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_55:
# 341 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 342 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_58:
# 358 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 359 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_61:
# 375 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 376 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_64:
# 392 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 393 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_67:
# 409 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 410 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_70:
# 426 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 427 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_73:
# 443 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 444 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_76:
# 460 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 461 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_79:
# 477 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 478 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1


Peccadum_PalatiumFelix_Script_CashierUpdateTransaction::
# 504 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatemoneybox
# 505 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 1, 6
# 506 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 507 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
	return


Peccadum_PalatiumFelix_Script_BlueRouletteDealer::
# 512 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 513 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 515 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro
# 517 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 518 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 5
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2
Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1:
# 523 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin, MSGBOX_YESNO
# 524 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4
# 527 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2:
# 519 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 520 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4:
# 525 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return


Peccadum_PalatiumFelix_Script_BlueRouletteBrain::
# 533 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
# 535 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
# 537 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 538 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3
# 540 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4
# 542 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5
# 544 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6
# 547 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0
# 548 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 549 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1:
# 553 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGoodLuck
# 554 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 556 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_C
# 557 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 558 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 559 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_ROULETTE_BALL
# 560 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 562 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_5, BlueRouletteSpin
# 563 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_ROULETTE_BALL2
# 564 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 566 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 567 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 568 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_5
# 569 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteBrain_9
# 572 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteAnnounce00
Peccadum_PalatiumFelix_Script_BlueRouletteBrain_8:
# 574 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 576 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3:
# 539 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4:
# 541 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5:
# 543 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6:
# 545 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_9:
# 570 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteAnnounceSpin
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_8


Peccadum_PalatiumFelix_Script_GetCoinWager::
# 582 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_TEMP_C, Peccadum_PalatiumFelix_Script_GetCoinWager_2
Peccadum_PalatiumFelix_Script_GetCoinWager_1:
# 586 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 0
# 588 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 590 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 591 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 592 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_COIN_WAGER, TRUE
# 593 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 594 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_RESULT
# 595 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 597 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_GetCoinWager_6
# 613 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_GetCoinWager_7
# 628 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_GetCoinWager_8
# 643 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_GetCoinWager_9
# 658 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_GetCoinWager_10
# 673 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_GetCoinWager_11
# 687 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_GetCoinWager_12
Peccadum_PalatiumFelix_Script_GetCoinWager_4:
# 692 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0
# 693 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 694 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_GetCoinWager_2:
# 583 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setflag FLAG_TEMP_C
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_6:
# 598 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_13
# 607 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_C
# 608 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 609 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 610 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_7:
# 614 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_16
# 623 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 624 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 625 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_8:
# 629 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 100
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_19
# 638 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 639 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 640 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_9:
# 644 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_22
# 653 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 654 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 655 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_10:
# 659 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_25
# 668 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 669 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 670 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_11:
# 674 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 2500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_28
# 683 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 684 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 685 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_12:
# 688 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_C
# 689 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 690 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_13:
# 599 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 600 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 601 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 602 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 603 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 604 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_16:
# 615 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 616 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 617 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 618 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 619 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 620 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 25
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_19:
# 630 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 631 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 632 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 633 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 634 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 635 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 100
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_22:
# 645 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 646 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 647 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 648 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 649 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 650 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 500
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_25:
# 660 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 661 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 662 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 663 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 664 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 665 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1000
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_28:
# 675 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 676 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 677 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 678 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 679 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 680 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 2500
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType::
# 700 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_1, 0
# 702 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType
# 703 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 704 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_TYPE, TRUE
# 705 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 707 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 709 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3
# 712 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4
# 715 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5
# 718 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6
Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1:
# 721 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7
# 724 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3:
# 710 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4:
# 713 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5:
# 716 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6:
# 719 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager::
# 730 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 732 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
# 734 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager
# 735 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 737 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 738 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 739 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_0
# 740 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 742 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 744 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3
# 760 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4
# 796 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5
# 830 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_6
# 864 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_7
# 867 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_5
# 868 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 869 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1:
# 873 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_2
# 874 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_2, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_9
# 882 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWager00, MSGBOX_YESNO
# 883 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_59
# 886 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3:
# 745 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_RANGE_0_NUMBER, TRUE
# 746 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 747 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_13
# 749 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_14
# 751 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_15
# 754 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_1
# 755 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 756 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4:
# 761 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_2
# 762 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 763 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_1_NUMBER
# 764 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 765 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 766 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 767 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_18
# 769 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_19
# 771 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_20
# 773 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_21
# 775 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_22
# 777 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_23
# 779 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_24
# 781 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_25
# 783 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_26
# 785 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_27
# 787 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_28
# 790 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_3
# 791 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 792 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5:
# 797 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_2_NUMBER
# 798 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 799 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 800 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 801 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_31
# 803 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_32
# 805 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_33
# 807 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_34
# 809 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_35
# 811 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_36
# 813 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_37
# 815 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_38
# 817 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_39
# 819 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_40
# 821 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_41
# 824 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4
# 825 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 826 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_6:
# 831 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_3_NUMBER
# 832 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 833 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 834 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 835 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_44
# 837 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_45
# 839 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_46
# 841 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_47
# 843 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_48
# 845 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_49
# 847 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_50
# 849 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_51
# 851 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_52
# 853 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_53
# 855 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_54
# 858 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4
# 859 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 860 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_7:
# 865 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_9:
# 875 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWagerNumber, MSGBOX_YESNO
# 876 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_56
# 879 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_13:
# 748 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_14:
# 750 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 31
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_15:
# 752 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_18:
# 768 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_19:
# 770 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 2
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_20:
# 772 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 3
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_21:
# 774 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 4
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_22:
# 776 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_23:
# 778 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 6
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_24:
# 780 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 7
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_25:
# 782 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 8
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_26:
# 784 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 9
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_27:
# 786 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 10
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_28:
# 788 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_31:
# 802 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 11
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_32:
# 804 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 12
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_33:
# 806 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 13
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_34:
# 808 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 14
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_35:
# 810 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 15
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_36:
# 812 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 16
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_37:
# 814 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 17
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_38:
# 816 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 18
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_39:
# 818 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 19
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_40:
# 820 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 20
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_41:
# 822 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_44:
# 836 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 21
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_45:
# 838 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 22
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_46:
# 840 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 23
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_47:
# 842 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 24
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_48:
# 844 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 25
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_49:
# 846 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 26
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_50:
# 848 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 27
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_51:
# 850 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 28
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_52:
# 852 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 29
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_53:
# 854 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 30
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_54:
# 856 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_56:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_59:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager::
# 893 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_4, 0
# 895 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager
# 896 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 898 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_COLOR, TRUE
# 899 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 901 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_4
# 903 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_2
# 911 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_3
# 919 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_4
# 927 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_5
# 930 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_Text_0
# 931 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 932 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_2:
# 904 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorRed, MSGBOX_YESNO
# 905 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_7
# 908 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_3:
# 912 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorBlue, MSGBOX_YESNO
# 913 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_10
# 916 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_4:
# 920 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorGreen, MSGBOX_YESNO
# 921 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_13
# 924 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_5:
# 928 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_7:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_10:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_13:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager::
# 939 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 941 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager
# 942 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 944 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 946 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 947 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 949 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2
# 957 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3
# 965 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4
# 973 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5
# 981 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6
# 984 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0
# 985 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 986 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2:
# 950 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0, MSGBOX_YESNO
# 951 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_8
# 954 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3:
# 958 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1, MSGBOX_YESNO
# 959 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_11
# 962 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4:
# 966 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2, MSGBOX_YESNO
# 967 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_14
# 970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5:
# 974 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3, MSGBOX_YESNO
# 975 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_17
# 978 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6:
# 982 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
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
# 993 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 995 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_2
# 1002 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_3
# 1038 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_4
# 1075 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_2
# 1076 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1077 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_2:
# 996 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, VAR_TEMP_2
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_6
# 999 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_3:
# 1003 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_4
# 1005 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_10
# 1015 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_11
# 1025 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_12
# 1032 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_0
# 1033 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1034 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_4:
# 1039 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 1041 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_15
# 1048 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_16
# 1055 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_17
# 1062 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_18
# 1069 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_1
# 1070 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1071 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_6:
# 997 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_10:
# 1006 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1006 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 4
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1006 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 6
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1006 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 8
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1007 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1007 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 12
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1007 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 14
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1007 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 16
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1007 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 18
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1008 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 20
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1008 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 22
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1008 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 24
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1008 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 26
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1008 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 28
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1009 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 30
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1012 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_11:
# 1016 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1016 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 3
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1016 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1016 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 7
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1017 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 9
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1017 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1017 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 13
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1017 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 15
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1017 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 17
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1018 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 19
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1018 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 21
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1018 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 23
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1018 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 25
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1018 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 27
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1019 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 29
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1022 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_12:
# 1026 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82
# 1026 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82
# 1029 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_15:
# 1042 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87
# 1042 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87
# 1045 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_16:
# 1049 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_94
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_93:
# 1052 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_17:
# 1056 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_99
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_98:
# 1059 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_18:
# 1063 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 20
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_104
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_103:
# 1066 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20:
# 1010 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51:
# 1020 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82:
# 1027 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87:
# 1043 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_92:
# 1050 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_94:
# 1049 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_92
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_93

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_97:
# 1057 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_99:
# 1056 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_97
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_98

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_102:
# 1064 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_104:
# 1063 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_102
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_103


Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin::
# 1083 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1084 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayerWin
# 1085 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1087 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 1089 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_3
# 1096 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_4
# 1109 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_5
# 1122 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1123 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_Text_0
# 1124 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1125 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1:
# 1128 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins VAR_TEMP_0
# 1129 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1130 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1131 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1132 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1133 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain
	return

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_3:
# 1090 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_7
# 1093 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_4:
# 1098 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_ne Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_10
# 1102 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_16
# 1105 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_5:
# 1111 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_ne Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_13
# 1115 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_19
# 1118 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_7:
# 1091 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 30
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_10:
# 1099 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 2
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_13:
# 1112 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 3
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_16:
# 1103 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 15
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_19:
# 1116 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 15
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1


Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose::
# 1137 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayerLose
# 1138 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain
	return


Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain::
# 1142 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayAgain, MSGBOX_YESNO
# 1143 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain_1
# 1146 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return

Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain_1:
# 1144 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return


Peccadum_PalatiumFelix_Script_BlueRouletteEnd::
# 1151 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_C, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2
Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1:
# 1199 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Bye
# 1201 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 1202 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1203 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1204 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2:
# 1152 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1153 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Refund
# 1154 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 1155 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5
# 1161 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 25, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6
# 1167 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 100, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7
# 1173 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 500, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8
# 1179 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1000, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9
# 1185 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2500, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10
# 1192 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0
# 1193 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1194 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5:
# 1156 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5
# 1157 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1158 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1159 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1160 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6:
# 1162 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 25
# 1163 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1164 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1165 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1166 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7:
# 1168 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 100
# 1169 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1170 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1171 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1172 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8:
# 1174 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 500
# 1175 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1176 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1177 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1178 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9:
# 1180 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1000
# 1181 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1182 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1183 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1184 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10:
# 1186 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 2500
# 1187 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1188 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1189 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1190 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1


Peccadum_PalatiumFelix_Script_DealerHiLoKabuto::
# 1209 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1211 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 1213 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Start, MSGBOX_YESNO
# 1215 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_2
# 1220 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1221 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_5
# 1224 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 1225 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_1:
# 1228 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_2:
# 1216 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_1

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_5:
# 1222 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_1


Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain::
# 1234 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
# 1236 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_ResetGame
# 1238 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 1241 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_RemoveCard
# 1242 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 1243 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_8, VAR_RESULT
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_3:
# 1246 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 1247 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_8
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_3
# 1248 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1250 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_B, Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_6
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_5:
# 1259 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_8
# 1260 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_7
# 1261 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_9
# 1261 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_9
# 1264 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_8:
# 1266 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_7, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_18
# 1266 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_18
# 1269 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceDealerCard
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_17:
# 1272 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_7
	goto_if_gt Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_26
# 1275 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_DealerWin
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_25:
# 1278 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_PlayAgainCoins
	return

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_6:
# 1251 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_15
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_14:
# 1254 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_23
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_5

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_9:
# 1262 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_8

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_15:
# 1252 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_14

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_18:
# 1267 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceDealerKabuto
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_17

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_23:
# 1255 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_7, 10
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_5

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_26:
# 1273 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_PlayerWinCoins
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_25


DealerHiLoKabuto_Script_GetCoinWager::
# 1282 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 0
# 1283 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1284 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 1285 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1286 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PALATIUM_FELIX_COIN_CASHIER
# 1287 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 1288 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 1289 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 1290 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 1292 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, DealerHiLoKabuto_Script_GetCoinWager_2
# 1308 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, DealerHiLoKabuto_Script_GetCoinWager_3
# 1324 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, DealerHiLoKabuto_Script_GetCoinWager_4
# 1340 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, DealerHiLoKabuto_Script_GetCoinWager_5
# 1356 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, DealerHiLoKabuto_Script_GetCoinWager_6
# 1372 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, DealerHiLoKabuto_Script_GetCoinWager_7
# 1388 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, DealerHiLoKabuto_Script_GetCoinWager_8
# 1404 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, DealerHiLoKabuto_Script_GetCoinWager_9
# 1420 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, DealerHiLoKabuto_Script_GetCoinWager_10
# 1436 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, DealerHiLoKabuto_Script_GetCoinWager_11
# 1452 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, DealerHiLoKabuto_Script_GetCoinWager_12
# 1468 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, DealerHiLoKabuto_Script_GetCoinWager_13
# 1472 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Script_GetCoinWager_Text_0
# 1473 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1474 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

DealerHiLoKabuto_Script_GetCoinWager_2:
# 1293 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1294 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_15
# 1303 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1304 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 1305 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_GetCoinWager_3:
# 1309 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1310 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_18
# 1319 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1320 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1321 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_4:
# 1325 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1326 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_21
# 1335 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1336 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1337 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_5:
# 1341 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1342 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 24
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_24
# 1351 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1352 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1353 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_6:
# 1357 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1358 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 49
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_27
# 1367 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1368 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1369 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_7:
# 1373 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1374 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 99
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_30
# 1383 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1384 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1385 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_8:
# 1389 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1390 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 249
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_33
# 1399 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1400 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1401 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_9:
# 1405 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1406 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 499
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_36
# 1415 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1416 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1417 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_10:
# 1421 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1422 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 999
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_39
# 1431 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1432 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1433 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_11:
# 1437 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1438 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 2499
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_42
# 1447 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1448 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1449 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_12:
# 1453 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1454 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4999
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_45
# 1463 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1464 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1465 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_13:
# 1469 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1470 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_GetCoinWager_15:
# 1295 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1
# 1296 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1297 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1298 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1299 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1300 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

DealerHiLoKabuto_Script_GetCoinWager_18:
# 1311 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 1312 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1313 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1314 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1315 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1316 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5
	return

DealerHiLoKabuto_Script_GetCoinWager_21:
# 1327 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 10
# 1328 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1329 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1330 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1331 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1332 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 10
	return

DealerHiLoKabuto_Script_GetCoinWager_24:
# 1343 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 1344 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1345 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1346 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1347 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1348 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 25
	return

DealerHiLoKabuto_Script_GetCoinWager_27:
# 1359 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 50
# 1360 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1361 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1362 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1363 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1364 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 50
	return

DealerHiLoKabuto_Script_GetCoinWager_30:
# 1375 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 1376 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1377 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1378 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1379 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1380 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 100
	return

DealerHiLoKabuto_Script_GetCoinWager_33:
# 1391 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 250
# 1392 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1393 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1394 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1395 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1396 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 250
	return

DealerHiLoKabuto_Script_GetCoinWager_36:
# 1407 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 1408 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1409 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1410 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1411 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1412 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 500
	return

DealerHiLoKabuto_Script_GetCoinWager_39:
# 1423 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 1424 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1425 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1426 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1427 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1428 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1000
	return

DealerHiLoKabuto_Script_GetCoinWager_42:
# 1439 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 1440 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1441 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1442 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1443 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1444 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 2500
	return

DealerHiLoKabuto_Script_GetCoinWager_45:
# 1455 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5000
# 1456 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1457 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1458 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1459 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1460 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5000
	return


DealerHiLoKabuto_Script_PlayerWinCoins::
# 1480 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1481 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_PlayerWin
# 1482 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 2
# 1483 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins VAR_TEMP_0
# 1484 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1485 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1486 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1487 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return


DealerHiLoKabuto_Script_PlayAgainCoins::
# 1492 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_PlayAgain, MSGBOX_YESNO
# 1493 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DealerHiLoKabuto_Script_PlayAgainCoins_1
# 1496 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_PlayAgainCoins_1:
# 1494 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain
	return


Peccadum_PalatiumFelix_Script_TableDealer::
# 1501 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1502 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 1503 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 1504 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerOpen_TakeSeat
# 1505 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1506 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1507 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1508 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end


Peccadum_PalatiumFelix_Script_BusyDealer::
# 1513 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1514 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 1515 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerBusy
# 1516 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1517 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1518 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1519 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end


Peccadum_PalatiumFelix_Script_4HiLoKabutoA::
# 1524 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1525 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_PALATIUMFELIX_LOGISTICS_DONE, Peccadum_PalatiumFelix_Script_4HiLoKabutoA_2
Peccadum_PalatiumFelix_Script_4HiLoKabutoA_1:
# 1528 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_4HiLoKabuto
	return

Peccadum_PalatiumFelix_Script_4HiLoKabutoA_2:
# 1526 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_D, 1
	goto Peccadum_PalatiumFelix_Script_4HiLoKabutoA_1


Peccadum_PalatiumFelix_Script_4HiLoKabutoB::
# 1532 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1533 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_PALATIUMFELIX_LOGISTICS_DONE, Peccadum_PalatiumFelix_Script_4HiLoKabutoB_2
Peccadum_PalatiumFelix_Script_4HiLoKabutoB_1:
# 1546 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_4HiLoKabuto
	return

Peccadum_PalatiumFelix_Script_4HiLoKabutoB_2:
# 1534 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1535 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Peccadum_PalatiumFelix_Script_4HiLoKabutoB_4
# 1537 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Peccadum_PalatiumFelix_Script_4HiLoKabutoB_5
# 1540 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_4HiLoKabutoB_Text_0
# 1541 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1542 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_4HiLoKabutoB_4:
# 1536 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_D, 3
	goto Peccadum_PalatiumFelix_Script_4HiLoKabutoB_1

Peccadum_PalatiumFelix_Script_4HiLoKabutoB_5:
# 1538 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_D, 2
	goto Peccadum_PalatiumFelix_Script_4HiLoKabutoB_1


Peccadum_PalatiumFelix_Script_4HiLoKabuto::
# 1552 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1553 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_4HiLoKabuto, MSGBOX_YESNO
# 1554 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_4HiLoKabuto_1
# 1558 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group4_Script_CoinBrain
	return

Peccadum_PalatiumFelix_Script_4HiLoKabuto_1:
# 1555 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1556 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return


Peccadum_PalatiumFelix_Script_5HiLoKabuto::
# 1564 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1565 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1566 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_5HiLoKabuto, MSGBOX_YESNO
# 1567 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_5HiLoKabuto_1
# 1571 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group5_Script_CoinBrain
	return

Peccadum_PalatiumFelix_Script_5HiLoKabuto_1:
# 1568 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1569 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return


HiLoKabuto_Group4_Script_CoinBrain::
# 1577 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1578 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 1000
	goto_if_lt HiLoKabuto_Group4_Script_CoinBrain_2
# 1583 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 1584 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1585 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1586 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1587 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
HiLoKabuto_Group4_Script_CoinBrain_1:
# 1590 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_ResetGame
# 1592 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 1595 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_9, RandDigit
HiLoKabuto_Group4_Script_CoinBrain_7:
# 1598 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_A, RandDigit
# 1599 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_7
HiLoKabuto_Group4_Script_CoinBrain_11:
# 1602 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_B, RandDigit
# 1603 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_11
# 1603 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_11
HiLoKabuto_Group4_Script_CoinBrain_17:
# 1606 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_8, RandDigit
# 1607 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_17
# 1607 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_17
# 1607 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_B
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_17
# 1609 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_B, HiLoKabuto_Group4_Script_CoinBrain_24
HiLoKabuto_Group4_Script_CoinBrain_23:
# 1625 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_8
# 1626 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_27
# 1626 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_27
# 1629 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
HiLoKabuto_Group4_Script_CoinBrain_26:
# 1632 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_9
# 1633 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 10
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_36
# 1633 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_36
# 1636 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Card
HiLoKabuto_Group4_Script_CoinBrain_35:
# 1638 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_A
# 1639 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 10
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_45
# 1639 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_45
# 1642 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Card
HiLoKabuto_Group4_Script_CoinBrain_44:
# 1644 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_TEMP_B
# 1645 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 10
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_54
# 1645 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_54
# 1648 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Card
HiLoKabuto_Group4_Script_CoinBrain_53:
# 1651 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_65
HiLoKabuto_Group4_Script_CoinBrain_63:
# 1655 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_87
HiLoKabuto_Group4_Script_CoinBrain_83:
# 1657 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_82
HiLoKabuto_Group4_Script_CoinBrain_78:
# 1659 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_77
HiLoKabuto_Group4_Script_CoinBrain_75:
# 1662 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group4_Script_CoinBrain_Text_0
HiLoKabuto_Group4_Script_CoinBrain_61:
# 1666 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1667 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group4Coins_Text_PlayAgain, MSGBOX_YESNO
# 1668 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_69
# 1671 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1672 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_PALATIUMFELIX_LOGISTICS_DONE, HiLoKabuto_Group4_Script_CoinBrain_91
# 1675 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group4_Script_CoinBrain_2:
# 1579 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 1580 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1581 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	goto HiLoKabuto_Group4_Script_CoinBrain_1

HiLoKabuto_Group4_Script_CoinBrain_24:
# 1610 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_33
HiLoKabuto_Group4_Script_CoinBrain_32:
# 1613 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_42
HiLoKabuto_Group4_Script_CoinBrain_41:
# 1616 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_51
HiLoKabuto_Group4_Script_CoinBrain_50:
# 1619 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq HiLoKabuto_Group4_Script_CoinBrain_59
	goto HiLoKabuto_Group4_Script_CoinBrain_23

HiLoKabuto_Group4_Script_CoinBrain_27:
# 1627 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto HiLoKabuto_Group4_Script_CoinBrain_26

HiLoKabuto_Group4_Script_CoinBrain_33:
# 1611 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto HiLoKabuto_Group4_Script_CoinBrain_32

HiLoKabuto_Group4_Script_CoinBrain_36:
# 1634 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Kabuto
	goto HiLoKabuto_Group4_Script_CoinBrain_35

HiLoKabuto_Group4_Script_CoinBrain_42:
# 1614 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_9, 10
	goto HiLoKabuto_Group4_Script_CoinBrain_41

HiLoKabuto_Group4_Script_CoinBrain_45:
# 1640 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Kabuto
	goto HiLoKabuto_Group4_Script_CoinBrain_44

HiLoKabuto_Group4_Script_CoinBrain_51:
# 1617 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_A, 10
	goto HiLoKabuto_Group4_Script_CoinBrain_50

HiLoKabuto_Group4_Script_CoinBrain_54:
# 1646 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Kabuto
	goto HiLoKabuto_Group4_Script_CoinBrain_53

HiLoKabuto_Group4_Script_CoinBrain_59:
# 1620 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_B, 10
	goto HiLoKabuto_Group4_Script_CoinBrain_23

HiLoKabuto_Group4_Script_CoinBrain_62:
# 1652 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group4_Script_PlayerWinCoins
	goto HiLoKabuto_Group4_Script_CoinBrain_61

HiLoKabuto_Group4_Script_CoinBrain_64:
# 1651 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_62
	goto HiLoKabuto_Group4_Script_CoinBrain_63

HiLoKabuto_Group4_Script_CoinBrain_65:
# 1651 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_64
	goto HiLoKabuto_Group4_Script_CoinBrain_63

HiLoKabuto_Group4_Script_CoinBrain_69:
# 1669 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group4_Script_CoinBrain
	return

HiLoKabuto_Group4_Script_CoinBrain_72:
# 1656 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler1Won
	goto HiLoKabuto_Group4_Script_CoinBrain_61

HiLoKabuto_Group4_Script_CoinBrain_73:
# 1658 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler2Won
	goto HiLoKabuto_Group4_Script_CoinBrain_61

HiLoKabuto_Group4_Script_CoinBrain_74:
# 1660 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler3Won
	goto HiLoKabuto_Group4_Script_CoinBrain_61

HiLoKabuto_Group4_Script_CoinBrain_76:
# 1659 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_74
	goto HiLoKabuto_Group4_Script_CoinBrain_75

HiLoKabuto_Group4_Script_CoinBrain_77:
# 1659 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_76
	goto HiLoKabuto_Group4_Script_CoinBrain_75

HiLoKabuto_Group4_Script_CoinBrain_81:
# 1657 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_73
	goto HiLoKabuto_Group4_Script_CoinBrain_78

HiLoKabuto_Group4_Script_CoinBrain_82:
# 1657 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_81
	goto HiLoKabuto_Group4_Script_CoinBrain_78

HiLoKabuto_Group4_Script_CoinBrain_86:
# 1655 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_72
	goto HiLoKabuto_Group4_Script_CoinBrain_83

HiLoKabuto_Group4_Script_CoinBrain_87:
# 1655 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group4_Script_CoinBrain_86
	goto HiLoKabuto_Group4_Script_CoinBrain_83

HiLoKabuto_Group4_Script_CoinBrain_91:
# 1673 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics
	return


HiLoKabuto_Group5_Script_CoinBrain::
# 1683 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1684 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 150
	goto_if_lt HiLoKabuto_Group5_Script_CoinBrain_2
# 1689 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 150
# 1690 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1691 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1692 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1693 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
HiLoKabuto_Group5_Script_CoinBrain_1:
# 1696 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_ResetGame
# 1698 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 1701 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_9, RandDigit
HiLoKabuto_Group5_Script_CoinBrain_7:
# 1704 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_A, RandDigit
# 1705 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_7
HiLoKabuto_Group5_Script_CoinBrain_11:
# 1708 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_B, RandDigit
# 1709 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_11
# 1709 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_11
HiLoKabuto_Group5_Script_CoinBrain_17:
# 1712 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_C, RandDigit
# 1713 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_17
# 1713 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_17
# 1713 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_B
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_17
HiLoKabuto_Group5_Script_CoinBrain_25:
# 1716 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_8, RandDigit
# 1717 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_25
# 1717 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_A
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_25
# 1717 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_B
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_25
# 1717 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_C
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_25
# 1719 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_B, HiLoKabuto_Group5_Script_CoinBrain_34
HiLoKabuto_Group5_Script_CoinBrain_33:
# 1738 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_8
# 1739 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_37
# 1739 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_37
# 1742 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
HiLoKabuto_Group5_Script_CoinBrain_36:
# 1745 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_9
# 1746 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_46
# 1746 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_46
# 1749 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Card
HiLoKabuto_Group5_Script_CoinBrain_45:
# 1751 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_A
# 1752 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_55
# 1752 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_55
# 1755 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Card
HiLoKabuto_Group5_Script_CoinBrain_54:
# 1757 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_TEMP_B
# 1758 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_64
# 1758 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_64
# 1761 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Card
HiLoKabuto_Group5_Script_CoinBrain_63:
# 1764 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_C
# 1765 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, 10
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_73
# 1765 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_73
# 1768 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp4Card
HiLoKabuto_Group5_Script_CoinBrain_72:
# 1771 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_84
HiLoKabuto_Group5_Script_CoinBrain_82:
# 1775 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_120
HiLoKabuto_Group5_Script_CoinBrain_114:
# 1777 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_113
HiLoKabuto_Group5_Script_CoinBrain_107:
# 1779 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_106
HiLoKabuto_Group5_Script_CoinBrain_100:
# 1781 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_99
HiLoKabuto_Group5_Script_CoinBrain_97:
# 1784 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group4_Script_CoinBrain_Text_0
HiLoKabuto_Group5_Script_CoinBrain_80:
# 1788 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1789 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group5Coins_Text_PlayAgain, MSGBOX_YESNO
# 1790 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_90
# 1793 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1794 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group5_Script_CoinBrain_2:
# 1685 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 1686 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1687 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	goto HiLoKabuto_Group5_Script_CoinBrain_1

HiLoKabuto_Group5_Script_CoinBrain_34:
# 1720 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_43
HiLoKabuto_Group5_Script_CoinBrain_42:
# 1723 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_52
HiLoKabuto_Group5_Script_CoinBrain_51:
# 1726 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_61
HiLoKabuto_Group5_Script_CoinBrain_60:
# 1729 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_70
HiLoKabuto_Group5_Script_CoinBrain_69:
# 1732 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, 0
	goto_if_eq HiLoKabuto_Group5_Script_CoinBrain_78
	goto HiLoKabuto_Group5_Script_CoinBrain_33

HiLoKabuto_Group5_Script_CoinBrain_37:
# 1740 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_36

HiLoKabuto_Group5_Script_CoinBrain_43:
# 1721 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_42

HiLoKabuto_Group5_Script_CoinBrain_46:
# 1747 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Kabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_45

HiLoKabuto_Group5_Script_CoinBrain_52:
# 1724 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_9, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_51

HiLoKabuto_Group5_Script_CoinBrain_55:
# 1753 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Kabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_54

HiLoKabuto_Group5_Script_CoinBrain_61:
# 1727 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_A, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_60

HiLoKabuto_Group5_Script_CoinBrain_64:
# 1759 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Kabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_63

HiLoKabuto_Group5_Script_CoinBrain_70:
# 1730 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_B, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_69

HiLoKabuto_Group5_Script_CoinBrain_73:
# 1766 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp4Kabuto
	goto HiLoKabuto_Group5_Script_CoinBrain_72

HiLoKabuto_Group5_Script_CoinBrain_78:
# 1733 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_C, 10
	goto HiLoKabuto_Group5_Script_CoinBrain_33

HiLoKabuto_Group5_Script_CoinBrain_81:
# 1772 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group5_Script_PlayerWinCoins
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_83:
# 1771 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_87
	goto HiLoKabuto_Group5_Script_CoinBrain_82

HiLoKabuto_Group5_Script_CoinBrain_84:
# 1771 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_83
	goto HiLoKabuto_Group5_Script_CoinBrain_82

HiLoKabuto_Group5_Script_CoinBrain_87:
# 1771 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_C
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_81
	goto HiLoKabuto_Group5_Script_CoinBrain_82

HiLoKabuto_Group5_Script_CoinBrain_90:
# 1791 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group5_Script_CoinBrain
	return

HiLoKabuto_Group5_Script_CoinBrain_93:
# 1776 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler1Won
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_94:
# 1778 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler2Won
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_95:
# 1780 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler3Won
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_96:
# 1782 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler4Won
	goto HiLoKabuto_Group5_Script_CoinBrain_80

HiLoKabuto_Group5_Script_CoinBrain_98:
# 1781 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_102
	goto HiLoKabuto_Group5_Script_CoinBrain_97

HiLoKabuto_Group5_Script_CoinBrain_99:
# 1781 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_98
	goto HiLoKabuto_Group5_Script_CoinBrain_97

HiLoKabuto_Group5_Script_CoinBrain_102:
# 1781 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_96
	goto HiLoKabuto_Group5_Script_CoinBrain_97

HiLoKabuto_Group5_Script_CoinBrain_105:
# 1779 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_109
	goto HiLoKabuto_Group5_Script_CoinBrain_100

HiLoKabuto_Group5_Script_CoinBrain_106:
# 1779 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_105
	goto HiLoKabuto_Group5_Script_CoinBrain_100

HiLoKabuto_Group5_Script_CoinBrain_109:
# 1779 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_C
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_95
	goto HiLoKabuto_Group5_Script_CoinBrain_100

HiLoKabuto_Group5_Script_CoinBrain_112:
# 1777 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_116
	goto HiLoKabuto_Group5_Script_CoinBrain_107

HiLoKabuto_Group5_Script_CoinBrain_113:
# 1777 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_112
	goto HiLoKabuto_Group5_Script_CoinBrain_107

HiLoKabuto_Group5_Script_CoinBrain_116:
# 1777 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_C
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_94
	goto HiLoKabuto_Group5_Script_CoinBrain_107

HiLoKabuto_Group5_Script_CoinBrain_119:
# 1775 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_B
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_123
	goto HiLoKabuto_Group5_Script_CoinBrain_114

HiLoKabuto_Group5_Script_CoinBrain_120:
# 1775 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_A
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_119
	goto HiLoKabuto_Group5_Script_CoinBrain_114

HiLoKabuto_Group5_Script_CoinBrain_123:
# 1775 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_C
	goto_if_gt HiLoKabuto_Group5_Script_CoinBrain_93
	goto HiLoKabuto_Group5_Script_CoinBrain_114


HiLoKabuto_Group4_Script_PlayerWinCoins::
# 1800 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1801 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayerWin
# 1802 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 4000
# 1803 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1804 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1805 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1806 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group4Coins_Text_PlayAgain, MSGBOX_YESNO
# 1807 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group4_Script_PlayerWinCoins_1
# 1810 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1811 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_PALATIUMFELIX_LOGISTICS_DONE, HiLoKabuto_Group4_Script_PlayerWinCoins_4
# 1814 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group4_Script_PlayerWinCoins_1:
# 1808 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group4_Script_CoinBrain
	return

HiLoKabuto_Group4_Script_PlayerWinCoins_4:
# 1812 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics
	return


HiLoKabuto_Group5_Script_PlayerWinCoins::
# 1820 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1821 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayerWin
# 1822 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 750
# 1823 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1824 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1825 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1826 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group5Coins_Text_PlayAgain, MSGBOX_YESNO
# 1827 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group5_Script_PlayerWinCoins_1
# 1830 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1831 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group5_Script_PlayerWinCoins_1:
# 1828 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Group5_Script_CoinBrain
	return


Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics::
# 1837 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setflag FLAG_PALATIUMFELIX_LOGISTICS_DONE
# 1838 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox HiLoKabuto_Group_Text_End
# 1839 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1842 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1843 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 1844 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1846 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1847 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_D
# 1848 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_3
# 1852 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_4
# 1854 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_5
# 1856 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_6
# 1859 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_1
# 1860 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_1:
# 1863 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1868 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_D
# 1869 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_10
# 1873 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_11
# 1875 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_12
# 1877 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_13
# 1880 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_1
# 1881 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_3:
# 1849 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_0
# 1850 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_4:
# 1853 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius1A
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_1

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_5:
# 1855 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius2A
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_1

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_6:
# 1857 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius3A
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_1

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_8:
# 1884 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1885 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_10:
# 1870 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_0
# 1871 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_11:
# 1874 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius1B
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_8

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_12:
# 1876 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius2B
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_8

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_13:
# 1878 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 7, Peccadum_PalatiumFelix_Movement_Cornelius3B
	goto Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_8


# 1889 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius1A:
# 1890 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_up
# 1891 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_left
	step_end

# 1894 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius2A:
# 1895 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_up
# 1896 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	face_left
	step_end

# 1899 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius3A:
# 1900 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_down
# 1901 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	face_left
	step_end

# 1904 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius1B:
# 1905 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_right
# 1906 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_down
# 1907 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	face_left
	step_end

# 1910 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius2B:
# 1911 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_down
# 1912 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	face_left
	step_end

# 1915 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
Peccadum_PalatiumFelix_Movement_Cornelius3B:
# 1916 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	walk_up
# 1917 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	face_left
	step_end

Peccadum_PalatiumFelix_Script_Cashier_Text_0:
# 70 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\n VAR_RESULT OOB Cashier$"

Peccadum_PalatiumFelix_Script_CashierBuyCoins_Text_0:
# 280 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nVARRESULT OOB BuyCoins$"

Peccadum_PalatiumFelix_Script_CashierSellCoins_Text_0:
# 492 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR, VAR_RESULT OOB SellCoins$"

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0:
# 547 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB$"

Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0:
# 692 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nBottom of GetCoinWager$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_0:
# 739 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "SPECIFIC NUM$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_1:
# 754 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_0_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_2:
# 761 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "CASE 1$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_3:
# 790 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_1_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4:
# 824 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_2_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_5:
# 867 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB in\nGetNumberWager$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_Text_0:
# 930 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_COLOR OOB$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0:
# 984 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_0:
# 1032 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_COLOR OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_1:
# 1069 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_2:
# 1075 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_Text_0:
# 1123 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB in PlayerWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0:
# 1192 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER OOB in RefundSwitch$"

DealerHiLoKabuto_Script_GetCoinWager_Text_0:
# 1472 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nVAR_RESULT OOB GetCoinWager$"

Peccadum_PalatiumFelix_Script_4HiLoKabutoB_Text_0:
# 1540 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nPlayerFacingDirection OOB$"

HiLoKabuto_Group4_Script_CoinBrain_Text_0:
# 1662 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nDeclare gambler winner\nOOB$"

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_0:
# 1849 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\n TRIGGER_LOGISTICS_SCENE = 0$"

Peccadum_PalatiumFelix_Script_Group4_End_TriggerLogistics_Text_1:
# 1859 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\n TRIGGER_LOGISTICS_SCENE OOB$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro::
# 1921 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I am the Blue Roulette table dealer.$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin::
# 1925 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to play a game of\n"
	.string "roulette?$"

Peccadum_PalatiumFelix_Text_NoCoins::
# 1929 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Excuse me sir, but coins are required to\n"
	.string "play games at Palatium Felix. Please\l"
	.string "speak with the cashier to purchase\l"
	.string "more.$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType::
# 1933 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "What kind of wager will you be placing?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager::
# 1937 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A wager on a winning number pays thirty\n"
	.string "to one. Are you sure that you will place\l"
	.string "a wager on a single number?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager::
# 1941 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The payout for a wager on color depends\n"
	.string "on which color you wager on. Both {COLOR RED}red\l"
	.string "{COLOR DARK_GRAY}and {COLOR BLUE}blue {COLOR DARK_GRAY}pay out at two to one while\l"
	.string "{COLOR GREEN}green {COLOR DARK_GRAY}pays out higher, fifteen to one.\l"
	.string "Are you sure that you will bet on color?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager::
# 1945 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A winning bet on range pays three to\n"
	.string "one, except for zero and double zero\l"
	.string "which pays the same as {COLOR GREEN}green{COLOR DARK_GRAY}, fifteen\l"
	.string "to one. Are you sure you want to wager\l"
	.string "on range?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager::
# 1949 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "There are thirty two individual spaces\n"
	.string "on the roulette wheel: numbers from one\l"
	.string "to thirty, single, and double nil. Which\l"
	.string "number will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager::
# 1953 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which range of numbers will you wager\n"
	.string "on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager::
# 1957 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which color will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorRed::
# 1961 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR RED}red{COLOR DARK_GRAY}.\n"
	.string "This wager will payout at two to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorBlue::
# 1965 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR BLUE}blue{COLOR DARK_GRAY}.\n"
	.string "This wager will payout at two to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorGreen::
# 1969 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR GREEN}green{COLOR DARK_GRAY}.\n"
	.string "This wager will payout fifteen to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0::
# 1973 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of zero and double zero. This will\l"
	.string "payout fifteen to one. Are you certain?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1::
# 1977 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers one through ten. This will\l"
	.string "payout at three to one. Will you confirm\l"
	.string "this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2::
# 1981 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "eleven through twenty. This will payout\l"
	.string "at three to one. Will you confirm this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3::
# 1985 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers from twenty one through\l"
	.string "thirty. The payout for this bet is three\l"
	.string "to one. Are you certain you want to\l"
	.string "place this bet?$"

CasinoDealer_Text_Refund::
# 1989 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Here are the unwagered coins back for\n"
	.string "you.$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWagerNumber::
# 1993 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on\n"
	.string "{STR_VAR_1}. The payout will be at\l"
	.string "thirty to one. Are you certain you want\l"
	.string "to place this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWager00::
# 1997 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to bet double zero. The\n"
	.string "payout will be at thirty to one. Are you\l"
	.string "certain you want to place this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGoodLuck::
# 2001 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Rien ne va plus! No more bets! Sir, good\n"
	.string "luck!$"

Peccadum_PalatiumFelix_Text_BlueRouletteAnnounceSpin::
# 2005 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The result of this spin is\n"
	.string "{STR_VAR_1}!$"

Peccadum_PalatiumFelix_Text_BlueRouletteAnnounce00::
# 2009 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The result of the spin: double zero!$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayerWin::
# 2013 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Congratulations {PLAYER}! You won\n"
	.string "your bet!$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayerLose::
# 2017 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you did not win your bet.$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayAgain::
# 2021 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to bet on roulette again?$"

Peccadum_PalatiumFelix_Text_Cashier::
# 2025 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Hello! Welcome to the Palatium Felix!\n"
	.string "Would you like to trade coins for cash?$"

Peccadum_PalatiumFelix_Text_CashierPurchase::
# 2029 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We're happy to sell you as many coins as\n"
	.string "you would like. They're one hundred\l"
	.string "bucks each. How many coins would you\l"
	.string "like to purchase?$"

Peccadum_PalatiumFelix_Text_CashierSell::
# 2033 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We're happy to exchange as many coins\n"
	.string "as you would like for one hundred bucks\l"
	.string "each. How many coins would you like to\l"
	.string "exchange?$"

Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney::
# 2037 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You don't have enough money for those\n"
	.string "coins.$"

Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins::
# 2041 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "room in your coin case to carry that\l"
	.string "many.$"

Peccadum_PalatiumFelix_Text_CashierTooMuchMoney::
# 2045 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "room to carry that much money in your\l"
	.string "purse.$"

Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins::
# 2049 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You don't have enough coins for that\n"
	.string "exchange.$"

Peccadum_PalatiumFelix_Text_CashierBye::
# 2053 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We hope to see you again soon! Good\n"
	.string "luck!$"

Peccadum_PalatiumFelix_Text_CashierTakeCoins::
# 2057 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Here are the coins you asked for sir.\n"
	.string "Thank you.$"

Peccadum_PalatiumFelix_Text_CashierTakeMoney::
# 2061 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "There is the money exchanged for you\n"
	.string "coins.$"

Peccadum_PalatiumFelix_Text_4HiLoKabuto::
# 2065 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "This is the high roller table. Buy in is\n"
	.string "one thousand coins. Do you want to\l"
	.string "play?$"

Peccadum_PalatiumFelix_Text_5HiLoKabuto::
# 2071 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Buy in for our table is one hundred and\n"
	.string "fifty coins. Would you like to join in?$"

HiLoKabuto_Group4Coins_Text_PlayAgain::
# 2075 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to wager another hand?\n"
	.string "Buy in will stay the same: one thousand\l"
	.string "coins.$"

HiLoKabuto_Group5Coins_Text_PlayAgain::
# 2079 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to wager another hand?\n"
	.string "Buy in will be one hundred fifty coins.$"
