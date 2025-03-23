Peccadum_PalatiumFelix_MapScripts::
	.byte 0


Peccadum_PalatiumFelix_Script_Cashier::
# 39 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 40 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 42 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_6, 0
# 43 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showmoneybox 18, 0
# 44 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 6
# 45 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_Cashier
# 46 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 47 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_PALATIUM_FELIX_CASHIER, TRUE
# 48 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 50 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_Cashier_3
# 53 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_Cashier_4
# 55 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_Cashier_5
# 59 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Cashier_Text_0
# 60 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 61 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Cashier_1:
# 64 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_Cashier_3:
# 51 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_Cashier_1

Peccadum_PalatiumFelix_Script_Cashier_4:
# 54 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_Cashier_1

Peccadum_PalatiumFelix_Script_Cashier_5:
# 56 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	goto Peccadum_PalatiumFelix_Script_Cashier_1


Peccadum_PalatiumFelix_Script_CashierBye::
# 69 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidemoneybox
# 70 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 6
# 71 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierBye
# 72 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 73 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end


Peccadum_PalatiumFelix_Script_CashierBuyCoins::
# 80 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierPurchase
# 81 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 82 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 84 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PALATIUM_FELIX_COIN_CASHIER
# 85 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 86 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 88 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_CashierBuyCoins_3
# 106 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_CashierBuyCoins_4
# 122 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_CashierBuyCoins_5
# 138 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_CashierBuyCoins_6
# 154 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_CashierBuyCoins_7
# 170 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_CashierBuyCoins_8
# 186 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_CashierBuyCoins_9
# 202 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_CashierBuyCoins_10
# 218 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_CashierBuyCoins_11
# 234 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_CashierBuyCoins_12
# 250 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_CashierBuyCoins_13
# 266 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, Peccadum_PalatiumFelix_Script_CashierBuyCoins_14
# 269 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_CashierBuyCoins_Text_0
# 270 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 271 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_CashierBuyCoins_1:
# 275 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTakeCoins
# 276 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_3:
# 91 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9999
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_16
# 102 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_4:
# 107 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9995
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_19
# 118 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 119 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_5:
# 123 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9990
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_22
# 134 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 135 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_6:
# 139 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9975
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_25
# 150 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 151 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_7:
# 155 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9950
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_28
# 166 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 167 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_8:
# 171 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9900
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_31
# 182 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 183 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_9:
# 187 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9750
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_34
# 198 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 199 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_10:
# 203 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9500
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_37
# 214 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 215 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_11:
# 219 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9000
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_40
# 230 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 231 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_12:
# 235 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 7500
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_43
# 246 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 247 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_13:
# 251 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 5000
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_46
# 262 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 263 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_14:
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_16:
# 92 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 100
# 93 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_49
# 98 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_19:
# 108 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500
# 109 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_52
# 114 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 115 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_22:
# 124 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 1000
# 125 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_55
# 130 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 131 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_25:
# 140 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 2500
# 141 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_58
# 146 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 147 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_28:
# 156 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 5000
# 157 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_61
# 162 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 163 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_31:
# 172 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 10000
# 173 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_64
# 178 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 179 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_34:
# 188 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 25000
# 189 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_67
# 194 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 195 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_37:
# 204 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 50000
# 205 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_70
# 210 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 211 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_40:
# 220 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 100000
# 221 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_73
# 226 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 227 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_43:
# 236 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 250000
# 237 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_76
# 242 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 243 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_46:
# 252 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500000
# 253 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_79
# 258 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 259 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_49:
# 94 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 100
# 95 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1
# 96 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_52:
# 110 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 500
# 111 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5
# 112 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_55:
# 126 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 1000
# 127 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 10
# 128 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_58:
# 142 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 2500
# 143 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 25
# 144 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_61:
# 158 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 5000
# 159 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 50
# 160 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_64:
# 174 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 10000
# 175 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 100
# 176 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_67:
# 190 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 25000
# 191 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 250
# 192 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_70:
# 206 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 50000
# 207 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 500
# 208 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_73:
# 222 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 100000
# 223 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1000
# 224 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_76:
# 238 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 250000
# 239 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 2500
# 240 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_79:
# 254 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 500000
# 255 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5000
# 256 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1


Peccadum_PalatiumFelix_Script_CashierSellCoins::
# 281 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierSell
# 282 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 283 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 285 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PALATIUM_FELIX_COIN_CASHIER
# 286 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 287 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 289 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 291 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_CashierSellCoins_3
# 308 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_CashierSellCoins_4
# 325 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_CashierSellCoins_5
# 342 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_CashierSellCoins_6
# 359 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_CashierSellCoins_7
# 376 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_CashierSellCoins_8
# 393 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_CashierSellCoins_9
# 410 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_CashierSellCoins_10
# 427 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_CashierSellCoins_11
# 444 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_CashierSellCoins_12
# 461 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_CashierSellCoins_13
# 478 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, Peccadum_PalatiumFelix_Script_CashierSellCoins_14
# 481 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_CashierSellCoins_Text_0
# 482 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 483 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_CashierSellCoins_1:
# 487 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTakeMoney
# 488 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_3:
# 293 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_16
# 304 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_4:
# 310 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_19
# 321 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 322 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_5:
# 327 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_22
# 338 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 339 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_6:
# 344 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 24
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_25
# 355 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 356 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_7:
# 361 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 49
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_28
# 372 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 373 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_8:
# 378 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 99
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_31
# 389 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 390 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_9:
# 395 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 249
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_34
# 406 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 407 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_10:
# 412 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 499
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_37
# 423 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 424 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_11:
# 429 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 999
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_40
# 440 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 441 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_12:
# 446 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 2499
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_43
# 457 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 458 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_13:
# 463 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4999
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_46
# 474 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 475 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_14:
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_16:
# 294 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 999900
# 295 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_49
# 299 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1
# 300 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 100
# 301 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_19:
# 311 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 999500
# 312 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_52
# 316 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 317 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 500
# 318 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_22:
# 328 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 998000
# 329 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_55
# 333 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 10
# 334 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 1000
# 335 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_25:
# 345 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 997500
# 346 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_58
# 350 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 351 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 2500
# 352 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_28:
# 362 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 995000
# 363 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_61
# 367 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 50
# 368 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 5000
# 369 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_31:
# 379 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 990000
# 380 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_64
# 384 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 385 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 10000
# 386 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_34:
# 396 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 975000
# 397 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_67
# 401 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 250
# 402 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 25000
# 403 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_37:
# 413 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 950000
# 414 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_70
# 418 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 419 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 50000
# 420 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_40:
# 430 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 900000
# 431 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_73
# 435 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 436 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 100000
# 437 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_43:
# 447 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 750000
# 448 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_76
# 452 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 453 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 250000
# 454 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_46:
# 464 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500000
# 465 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_79
# 469 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5000
# 470 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 500000
# 471 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_49:
# 296 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_52:
# 313 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 314 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_55:
# 330 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 331 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_58:
# 347 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 348 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_61:
# 364 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 365 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_64:
# 381 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 382 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_67:
# 398 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 399 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_70:
# 415 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 416 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_73:
# 432 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 433 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_76:
# 449 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 450 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_79:
# 466 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 467 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1


Peccadum_PalatiumFelix_Script_CashierUpdateTransaction::
# 493 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatemoneybox
# 494 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 1, 6
# 495 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 496 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
	return


Peccadum_PalatiumFelix_Script_BlueRouletteDealer::
# 501 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 502 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 504 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro
# 506 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 507 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 5
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2
Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1:
# 512 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin, MSGBOX_YESNO
# 513 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4
# 516 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2:
# 508 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 509 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4:
# 514 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return


Peccadum_PalatiumFelix_Script_BlueRouletteBrain::
# 522 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
# 524 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
# 526 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 527 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3
# 529 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4
# 531 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5
# 533 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6
# 536 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0
# 537 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 538 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1:
# 542 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGoodLuck
# 543 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 545 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_C
# 546 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 547 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 548 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_ROULETTE_BALL
# 549 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 551 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_5, BlueRouletteSpin
# 552 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_ROULETTE_BALL2
# 553 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 555 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 556 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 557 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_5
# 558 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteBrain_9
# 561 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteAnnounce00
Peccadum_PalatiumFelix_Script_BlueRouletteBrain_8:
# 563 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 565 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3:
# 528 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4:
# 530 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5:
# 532 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6:
# 534 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_9:
# 559 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteAnnounceSpin
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_8


Peccadum_PalatiumFelix_Script_GetCoinWager::
# 571 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_TEMP_C, Peccadum_PalatiumFelix_Script_GetCoinWager_2
Peccadum_PalatiumFelix_Script_GetCoinWager_1:
# 575 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 0
# 577 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 579 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 580 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 581 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_COIN_WAGER, TRUE
# 582 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 583 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_RESULT
# 584 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 586 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_GetCoinWager_6
# 602 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_GetCoinWager_7
# 617 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_GetCoinWager_8
# 632 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_GetCoinWager_9
# 647 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_GetCoinWager_10
# 662 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_GetCoinWager_11
# 676 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_GetCoinWager_12
Peccadum_PalatiumFelix_Script_GetCoinWager_4:
# 681 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0
# 682 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 683 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_GetCoinWager_2:
# 572 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setflag FLAG_TEMP_C
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_6:
# 587 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_13
# 596 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_C
# 597 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 598 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 599 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_7:
# 603 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_16
# 612 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 613 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 614 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_8:
# 618 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 100
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_19
# 627 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 628 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 629 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_9:
# 633 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_22
# 642 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 643 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 644 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_10:
# 648 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_25
# 657 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 658 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 659 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_11:
# 663 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 2500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_28
# 672 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 673 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 674 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_12:
# 677 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_C
# 678 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 679 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_13:
# 588 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 589 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 590 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 591 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 592 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 593 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_16:
# 604 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 605 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 606 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 607 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 608 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 609 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 25
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_19:
# 619 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 620 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 621 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 622 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 623 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 624 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 100
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_22:
# 634 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 635 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 636 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 637 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 638 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 639 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 500
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_25:
# 649 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 650 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 651 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 652 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 653 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 654 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1000
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_28:
# 664 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 665 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 666 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 667 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 668 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 669 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 2500
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType::
# 689 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_1, 0
# 691 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType
# 692 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 693 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_TYPE, TRUE
# 694 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 696 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 698 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3
# 701 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4
# 704 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5
# 707 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6
Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1:
# 710 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7
# 713 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3:
# 699 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4:
# 702 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5:
# 705 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6:
# 708 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager::
# 719 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 721 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
# 723 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager
# 724 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 726 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 727 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 728 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_0
# 729 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 731 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 733 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3
# 749 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4
# 785 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5
# 819 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_6
# 853 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_7
# 856 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_5
# 857 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 858 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1:
# 862 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_2
# 863 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_2, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_9
# 871 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWager00, MSGBOX_YESNO
# 872 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_59
# 875 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3:
# 734 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_RANGE_0_NUMBER, TRUE
# 735 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 736 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_13
# 738 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_14
# 740 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_15
# 743 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_1
# 744 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 745 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4:
# 750 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_2
# 751 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 752 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_1_NUMBER
# 753 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 754 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 755 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 756 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_18
# 758 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_19
# 760 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_20
# 762 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_21
# 764 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_22
# 766 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_23
# 768 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_24
# 770 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_25
# 772 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_26
# 774 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_27
# 776 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_28
# 779 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_3
# 780 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 781 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5:
# 786 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_2_NUMBER
# 787 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 788 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 789 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 790 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_31
# 792 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_32
# 794 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_33
# 796 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_34
# 798 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_35
# 800 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_36
# 802 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_37
# 804 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_38
# 806 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_39
# 808 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_40
# 810 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_41
# 813 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4
# 814 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 815 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_6:
# 820 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_3_NUMBER
# 821 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 822 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 823 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 824 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_44
# 826 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_45
# 828 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_46
# 830 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_47
# 832 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_48
# 834 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_49
# 836 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_50
# 838 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_51
# 840 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_52
# 842 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_53
# 844 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_54
# 847 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4
# 848 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 849 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_7:
# 854 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_9:
# 864 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWagerNumber, MSGBOX_YESNO
# 865 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_56
# 868 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_13:
# 737 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_14:
# 739 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 31
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_15:
# 741 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_18:
# 757 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_19:
# 759 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 2
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_20:
# 761 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 3
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_21:
# 763 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 4
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_22:
# 765 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_23:
# 767 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 6
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_24:
# 769 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 7
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_25:
# 771 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 8
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_26:
# 773 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 9
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_27:
# 775 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 10
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_28:
# 777 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_31:
# 791 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 11
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_32:
# 793 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 12
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_33:
# 795 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 13
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_34:
# 797 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 14
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_35:
# 799 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 15
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_36:
# 801 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 16
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_37:
# 803 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 17
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_38:
# 805 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 18
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_39:
# 807 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 19
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_40:
# 809 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 20
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_41:
# 811 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_44:
# 825 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 21
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_45:
# 827 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 22
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_46:
# 829 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 23
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_47:
# 831 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 24
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_48:
# 833 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 25
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_49:
# 835 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 26
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_50:
# 837 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 27
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_51:
# 839 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 28
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_52:
# 841 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 29
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_53:
# 843 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 30
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_54:
# 845 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_56:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_59:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager::
# 882 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_4, 0
# 884 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager
# 885 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 887 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_COLOR, TRUE
# 888 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 890 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_4
# 892 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_2
# 900 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_3
# 908 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_4
# 916 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_5
# 919 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_Text_0
# 920 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 921 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_2:
# 893 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorRed, MSGBOX_YESNO
# 894 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_7
# 897 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_3:
# 901 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorBlue, MSGBOX_YESNO
# 902 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_10
# 905 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_4:
# 909 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorGreen, MSGBOX_YESNO
# 910 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_13
# 913 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_5:
# 917 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_7:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_10:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_13:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager::
# 928 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 930 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager
# 931 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 933 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 935 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 936 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 938 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2
# 946 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3
# 954 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4
# 962 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5
# 970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6
# 973 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0
# 974 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 975 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2:
# 939 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0, MSGBOX_YESNO
# 940 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_8
# 943 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3:
# 947 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1, MSGBOX_YESNO
# 948 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_11
# 951 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4:
# 955 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2, MSGBOX_YESNO
# 956 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_14
# 959 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5:
# 963 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3, MSGBOX_YESNO
# 964 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_17
# 967 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6:
# 971 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
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
# 982 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 984 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_2
# 991 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_3
# 1027 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_4
# 1064 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_2
# 1065 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1066 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_2:
# 985 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, VAR_TEMP_2
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_6
# 988 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_3:
# 992 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_4
# 994 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_10
# 1004 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_11
# 1014 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_12
# 1021 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_0
# 1022 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1023 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_4:
# 1028 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 1030 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_15
# 1037 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_16
# 1044 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_17
# 1051 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_18
# 1058 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_1
# 1059 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1060 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_6:
# 986 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_10:
# 995 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 995 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 4
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 995 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 6
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 995 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 8
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 996 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 996 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 12
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 996 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 14
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 996 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 16
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 996 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 18
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 997 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 20
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 997 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 22
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 997 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 24
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 997 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 26
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 997 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 28
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 998 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 30
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 1001 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_11:
# 1005 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1005 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 3
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1005 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1005 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 7
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1006 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 9
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1006 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1006 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 13
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1006 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 15
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1006 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 17
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1007 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 19
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1007 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 21
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1007 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 23
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1007 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 25
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1007 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 27
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1008 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 29
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 1011 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_12:
# 1015 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82
# 1015 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82
# 1018 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_15:
# 1031 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87
# 1031 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87
# 1034 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_16:
# 1038 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_94
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_93:
# 1041 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_17:
# 1045 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_99
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_98:
# 1048 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_18:
# 1052 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 20
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_104
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_103:
# 1055 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20:
# 999 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51:
# 1009 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82:
# 1016 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87:
# 1032 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_92:
# 1039 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_94:
# 1038 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_92
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_93

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_97:
# 1046 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_99:
# 1045 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_97
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_98

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_102:
# 1053 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_104:
# 1052 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_102
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_103


Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin::
# 1072 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1073 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayerWin
# 1074 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1076 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 1078 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_3
# 1085 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_4
# 1098 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_5
# 1111 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1112 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_Text_0
# 1113 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1114 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1:
# 1117 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins VAR_TEMP_0
# 1118 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1119 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1120 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1121 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1122 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain
	return

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_3:
# 1079 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_7
# 1082 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_4:
# 1087 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_ne Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_10
# 1091 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_16
# 1094 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_5:
# 1100 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_ne Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_13
# 1104 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_19
# 1107 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_7:
# 1080 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 30
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_10:
# 1088 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 2
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_13:
# 1101 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 3
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_16:
# 1092 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 15
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_19:
# 1105 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 15
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1


Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose::
# 1126 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayerLose
# 1127 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain
	return


Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain::
# 1131 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayAgain, MSGBOX_YESNO
# 1132 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain_1
# 1135 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return

Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain_1:
# 1133 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return


Peccadum_PalatiumFelix_Script_BlueRouletteEnd::
# 1140 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_C, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2
Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1:
# 1188 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Bye
# 1190 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 1191 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1192 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1193 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2:
# 1141 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1142 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Refund
# 1143 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 1144 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5
# 1150 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 25, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6
# 1156 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 100, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7
# 1162 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 500, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8
# 1168 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1000, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9
# 1174 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2500, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10
# 1181 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0
# 1182 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1183 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5:
# 1145 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5
# 1146 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1147 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1148 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1149 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6:
# 1151 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 25
# 1152 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1153 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1154 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1155 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7:
# 1157 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 100
# 1158 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1159 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1160 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1161 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8:
# 1163 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 500
# 1164 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1165 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1166 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1167 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9:
# 1169 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1000
# 1170 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1171 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1172 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1173 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10:
# 1175 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 2500
# 1176 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1177 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1178 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1179 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1


Peccadum_PalatiumFelix_Script_DealerHiLoKabuto::
# 1198 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1200 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 1202 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Start, MSGBOX_YESNO
# 1204 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_2
# 1209 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1210 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_5
# 1213 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 1214 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_1:
# 1217 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_2:
# 1205 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_1

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_5:
# 1211 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_1


Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain::
# 1223 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
# 1225 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_ResetGame
# 1227 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 1230 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call HiLoKabuto_Script_RemoveCard
# 1231 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 1232 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_8, VAR_RESULT
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_3:
# 1235 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 1236 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_8
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_3
# 1237 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1239 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_B, Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_6
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_5:
# 1248 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_8
# 1249 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_7
# 1250 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_9
# 1250 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_9
# 1253 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_8:
# 1255 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_7, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_18
# 1255 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_18
# 1258 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceDealerCard
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_17:
# 1261 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_7
	goto_if_gt Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_26
# 1264 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_DealerWin
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_25:
# 1267 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_PlayAgainCoins
	return

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_6:
# 1240 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_15
Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_14:
# 1243 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_23
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_5

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_9:
# 1251 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_8

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_15:
# 1241 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_14

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_18:
# 1256 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceDealerKabuto
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_17

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_23:
# 1244 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_7, 10
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_5

Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_26:
# 1262 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_PlayerWinCoins
	goto Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain_25


DealerHiLoKabuto_Script_GetCoinWager::
# 1271 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 0
# 1272 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1273 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 1274 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1275 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PALATIUM_FELIX_COIN_CASHIER
# 1276 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 1277 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 1278 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 1279 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 1281 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, DealerHiLoKabuto_Script_GetCoinWager_2
# 1297 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, DealerHiLoKabuto_Script_GetCoinWager_3
# 1313 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, DealerHiLoKabuto_Script_GetCoinWager_4
# 1329 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, DealerHiLoKabuto_Script_GetCoinWager_5
# 1345 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, DealerHiLoKabuto_Script_GetCoinWager_6
# 1361 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, DealerHiLoKabuto_Script_GetCoinWager_7
# 1377 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, DealerHiLoKabuto_Script_GetCoinWager_8
# 1393 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, DealerHiLoKabuto_Script_GetCoinWager_9
# 1409 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, DealerHiLoKabuto_Script_GetCoinWager_10
# 1425 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, DealerHiLoKabuto_Script_GetCoinWager_11
# 1441 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, DealerHiLoKabuto_Script_GetCoinWager_12
# 1457 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, DealerHiLoKabuto_Script_GetCoinWager_13
# 1461 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Script_GetCoinWager_Text_0
# 1462 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1463 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

DealerHiLoKabuto_Script_GetCoinWager_2:
# 1282 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1283 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_15
# 1292 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1293 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 1294 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_GetCoinWager_3:
# 1298 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1299 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_18
# 1308 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1309 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1310 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_4:
# 1314 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1315 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_21
# 1324 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1325 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1326 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_5:
# 1330 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1331 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 24
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_24
# 1340 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1341 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1342 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_6:
# 1346 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1347 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 49
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_27
# 1356 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1357 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1358 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_7:
# 1362 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1363 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 99
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_30
# 1372 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1373 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1374 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_8:
# 1378 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1379 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 249
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_33
# 1388 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1389 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1390 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_9:
# 1394 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1395 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 499
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_36
# 1404 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1405 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1406 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_10:
# 1410 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1411 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 999
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_39
# 1420 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1421 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1422 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_11:
# 1426 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1427 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 2499
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_42
# 1436 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1437 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1438 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_12:
# 1442 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 1443 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4999
	goto_if_gt DealerHiLoKabuto_Script_GetCoinWager_45
# 1452 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1453 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 1454 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_GetCoinWager
	return

DealerHiLoKabuto_Script_GetCoinWager_13:
# 1458 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1459 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_GetCoinWager_15:
# 1284 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1
# 1285 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1286 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1287 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1288 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1289 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

DealerHiLoKabuto_Script_GetCoinWager_18:
# 1300 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 1301 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1302 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1303 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1304 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1305 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5
	return

DealerHiLoKabuto_Script_GetCoinWager_21:
# 1316 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 10
# 1317 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1318 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1319 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1320 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1321 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 10
	return

DealerHiLoKabuto_Script_GetCoinWager_24:
# 1332 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 1333 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1334 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1335 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1336 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1337 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 25
	return

DealerHiLoKabuto_Script_GetCoinWager_27:
# 1348 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 50
# 1349 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1350 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1351 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1352 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1353 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 50
	return

DealerHiLoKabuto_Script_GetCoinWager_30:
# 1364 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 1365 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1366 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1367 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1368 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1369 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 100
	return

DealerHiLoKabuto_Script_GetCoinWager_33:
# 1380 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 250
# 1381 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1382 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1383 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1384 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1385 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 250
	return

DealerHiLoKabuto_Script_GetCoinWager_36:
# 1396 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 1397 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1398 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1399 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1400 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1401 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 500
	return

DealerHiLoKabuto_Script_GetCoinWager_39:
# 1412 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 1413 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1414 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1415 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1416 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1417 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1000
	return

DealerHiLoKabuto_Script_GetCoinWager_42:
# 1428 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 1429 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1430 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1431 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1432 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1433 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 2500
	return

DealerHiLoKabuto_Script_GetCoinWager_45:
# 1444 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5000
# 1445 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1446 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1447 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1448 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1449 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5000
	return


DealerHiLoKabuto_Script_PlayerWinCoins::
# 1469 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1470 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_PlayerWin
# 1471 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 2
# 1472 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins VAR_TEMP_0
# 1473 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1474 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1475 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1476 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	return


DealerHiLoKabuto_Script_PlayAgainCoins::
# 1481 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox DealerHiLoKabuto_Text_PlayAgain, MSGBOX_YESNO
# 1482 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DealerHiLoKabuto_Script_PlayAgainCoins_1
# 1485 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call DealerHiLoKabuto_Script_End
	return

DealerHiLoKabuto_Script_PlayAgainCoins_1:
# 1483 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_DealerHiLoKabuto_Brain
	return


Peccadum_PalatiumFelix_Script_TableDealer::
# 1490 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1491 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 1492 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 1493 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerOpen_TakeSeat
# 1494 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1495 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1496 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1497 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end


Peccadum_PalatiumFelix_Script_BusyDealer::
# 1502 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 1503 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 1504 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerBusy
# 1505 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1506 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1507 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1508 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end


Peccadum_PalatiumFelix_Script_Cashier_Text_0:
# 59 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\n VAR_RESULT OOB Cashier$"

Peccadum_PalatiumFelix_Script_CashierBuyCoins_Text_0:
# 269 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nVARRESULT OOB BuyCoins$"

Peccadum_PalatiumFelix_Script_CashierSellCoins_Text_0:
# 481 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR, VAR_RESULT OOB SellCoins$"

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0:
# 536 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB$"

Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0:
# 681 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nBottom of GetCoinWager$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_0:
# 728 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "SPECIFIC NUM$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_1:
# 743 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_0_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_2:
# 750 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "CASE 1$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_3:
# 779 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_1_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4:
# 813 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_2_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_5:
# 856 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB in\nGetNumberWager$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_Text_0:
# 919 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_COLOR OOB$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0:
# 973 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_0:
# 1021 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_COLOR OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_1:
# 1058 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_2:
# 1064 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_Text_0:
# 1112 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB in PlayerWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0:
# 1181 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER OOB in RefundSwitch$"

DealerHiLoKabuto_Script_GetCoinWager_Text_0:
# 1461 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nVAR_RESULT OOB GetCoinWager$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro::
# 1512 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I am the Blue Roulette table dealer.$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin::
# 1516 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to play a game of\n"
	.string "roulette?$"

Peccadum_PalatiumFelix_Text_NoCoins::
# 1520 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Excuse me sir, but coins are required to\n"
	.string "play games at Palatium Felix. Please\l"
	.string "speak with the cashier to purchase\l"
	.string "more.$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType::
# 1524 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "What kind of wager will you be placing?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager::
# 1528 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A wager on a winning number pays thirty\n"
	.string "to one. Are you sure that you will place\l"
	.string "a wager on a single number?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager::
# 1532 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The payout for a wager on color depends\n"
	.string "on which color you wager on. Both {COLOR RED}red\l"
	.string "{COLOR DARK_GRAY}and {COLOR BLUE}blue {COLOR DARK_GRAY}pay out at two to one while\l"
	.string "{COLOR GREEN}green {COLOR DARK_GRAY}pays out higher, fifteen to one.\l"
	.string "Are you sure that you will bet on color?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager::
# 1536 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A winning bet on range pays three to\n"
	.string "one, except for zero and double zero\l"
	.string "which pays the same as {COLOR GREEN}green{COLOR DARK_GRAY}, fifteen\l"
	.string "to one. Are you sure you want to wager\l"
	.string "on range?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager::
# 1540 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "There are thirty two individual spaces\n"
	.string "on the roulette wheel: numbers from one\l"
	.string "to thirty, single, and double nil. Which\l"
	.string "number will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager::
# 1544 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which range of numbers will you wager\n"
	.string "on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager::
# 1548 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which color will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorRed::
# 1552 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR RED}red{COLOR DARK_GRAY}.\n"
	.string "This wager will payout at two to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorBlue::
# 1556 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR BLUE}blue{COLOR DARK_GRAY}.\n"
	.string "This wager will payout at two to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorGreen::
# 1560 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR GREEN}green{COLOR DARK_GRAY}.\n"
	.string "This wager will payout fifteen to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0::
# 1564 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of zero and double zero. This will\l"
	.string "payout fifteen to one. Are you certain?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1::
# 1568 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers one through ten. This will\l"
	.string "payout at three to one. Will you confirm\l"
	.string "this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2::
# 1572 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "eleven through twenty. This will payout\l"
	.string "at three to one. Will you confirm this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3::
# 1576 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers from twenty one through\l"
	.string "thirty. The payout for this bet is three\l"
	.string "to one. Are you certain you want to\l"
	.string "place this bet?$"

CasinoDealer_Text_Refund::
# 1580 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Here are the unwagered coins back for\n"
	.string "you.$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWagerNumber::
# 1584 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on\n"
	.string "{STR_VAR_1}. The payout will be at\l"
	.string "thirty to one. Are you certain you want\l"
	.string "to place this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWager00::
# 1588 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to bet double zero. The\n"
	.string "payout will be at thirty to one. Are you\l"
	.string "certain you want to place this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGoodLuck::
# 1592 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Rien ne va plus! No more bets! Sir, good\n"
	.string "luck!$"

Peccadum_PalatiumFelix_Text_BlueRouletteAnnounceSpin::
# 1596 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The result of this spin is\n"
	.string "{STR_VAR_1}!$"

Peccadum_PalatiumFelix_Text_BlueRouletteAnnounce00::
# 1600 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The result of the spin: double zero!$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayerWin::
# 1604 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Congratulations {PLAYER}! You won\n"
	.string "your bet!$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayerLose::
# 1608 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you did not win your bet.$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayAgain::
# 1612 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to bet on roulette again?$"

Peccadum_PalatiumFelix_Text_Cashier::
# 1616 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Hello! Welcome to the Palatium Felix!\n"
	.string "Would you like to trade coins for cash?$"

Peccadum_PalatiumFelix_Text_CashierPurchase::
# 1620 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We're happy to sell you as many coins as\n"
	.string "you would like. They're one hundred\l"
	.string "bucks each. How many coins would you\l"
	.string "like to purchase?$"

Peccadum_PalatiumFelix_Text_CashierSell::
# 1624 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We're happy to exchange as many coins\n"
	.string "as you would like for one hundred bucks\l"
	.string "each. How many coins would you like to\l"
	.string "exchange?$"

Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney::
# 1628 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You don't have enough money for those\n"
	.string "coins.$"

Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins::
# 1632 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "room in your coin case to carry that\l"
	.string "many.$"

Peccadum_PalatiumFelix_Text_CashierTooMuchMoney::
# 1636 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "room to carry that much money in your\l"
	.string "purse.$"

Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins::
# 1640 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You don't have enough coins for that\n"
	.string "exchange.$"

Peccadum_PalatiumFelix_Text_CashierBye::
# 1644 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We hope to see you again soon! Good\n"
	.string "luck!$"

Peccadum_PalatiumFelix_Text_CashierTakeCoins::
# 1648 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Here are the coins you asked for sir.\n"
	.string "Thank you.$"

Peccadum_PalatiumFelix_Text_CashierTakeMoney::
# 1652 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "There is the money exchanged for you\n"
	.string "coins.$"
