Peccadum_PalatiumFelix_MapScripts::
	.byte 0


Peccadum_PalatiumFelix_Script_Cashier::
# 21 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 22 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 24 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_6, 0
# 25 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showmoneybox 18, 0
# 26 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 6
# 27 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_Cashier
# 28 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 29 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_PALATIUM_FELIX_CASHIER, TRUE
# 30 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_Cashier_3
# 35 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_Cashier_4
# 37 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_Cashier_5
# 41 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_Cashier_Text_0
# 42 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 43 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_Cashier_1:
# 46 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_Cashier_3:
# 33 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_Cashier_1

Peccadum_PalatiumFelix_Script_Cashier_4:
# 36 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_Cashier_1

Peccadum_PalatiumFelix_Script_Cashier_5:
# 38 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	goto Peccadum_PalatiumFelix_Script_Cashier_1


Peccadum_PalatiumFelix_Script_CashierBye::
# 51 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidemoneybox
# 52 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 6
# 53 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierBye
# 54 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 55 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end


Peccadum_PalatiumFelix_Script_CashierBuyCoins::
# 62 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierPurchase
# 63 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 64 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 66 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PALATIUM_FELIX_COIN_CASHIER
# 67 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 68 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 70 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 72 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_CashierBuyCoins_3
# 88 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_CashierBuyCoins_4
# 104 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_CashierBuyCoins_5
# 120 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_CashierBuyCoins_6
# 136 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_CashierBuyCoins_7
# 152 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_CashierBuyCoins_8
# 168 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_CashierBuyCoins_9
# 184 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_CashierBuyCoins_10
# 200 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_CashierBuyCoins_11
# 216 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_CashierBuyCoins_12
# 232 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_CashierBuyCoins_13
# 248 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, Peccadum_PalatiumFelix_Script_CashierBuyCoins_14
# 251 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_CashierBuyCoins_Text_0
# 252 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 253 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_CashierBuyCoins_1:
# 257 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTakeCoins
# 258 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_3:
# 73 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9999
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_16
# 84 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_4:
# 89 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9995
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_19
# 100 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 101 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_5:
# 105 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9990
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_22
# 116 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 117 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_6:
# 121 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9975
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_25
# 132 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 133 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_7:
# 137 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9950
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_28
# 148 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 149 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_8:
# 153 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9900
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_31
# 164 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 165 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_9:
# 169 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9750
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_34
# 180 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 181 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_10:
# 185 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9500
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_37
# 196 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 197 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_11:
# 201 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9000
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_40
# 212 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 213 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_12:
# 217 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 7500
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_43
# 228 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 229 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_13:
# 233 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 5000
	goto_if_lt Peccadum_PalatiumFelix_Script_CashierBuyCoins_46
# 244 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins
# 245 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_14:
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_16:
# 74 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 100
# 75 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_49
# 80 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
	return

Peccadum_PalatiumFelix_Script_CashierBuyCoins_19:
# 90 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500
# 91 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_52
# 96 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 97 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_22:
# 106 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 1000
# 107 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_55
# 112 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 113 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_25:
# 122 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 2500
# 123 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_58
# 128 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 129 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_28:
# 138 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 5000
# 139 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_61
# 144 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 145 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_31:
# 154 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 10000
# 155 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_64
# 160 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 161 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_34:
# 170 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 25000
# 171 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_67
# 176 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 177 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_37:
# 186 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 50000
# 187 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_70
# 192 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 193 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_40:
# 202 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 100000
# 203 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_73
# 208 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 209 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_43:
# 218 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 250000
# 219 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_76
# 224 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 225 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_46:
# 234 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500000
# 235 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierBuyCoins_79
# 240 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney
# 241 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBuyCoins
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_49:
# 76 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 100
# 77 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1
# 78 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_52:
# 92 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 500
# 93 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5
# 94 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_55:
# 108 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 1000
# 109 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 10
# 110 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_58:
# 124 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 2500
# 125 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 25
# 126 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_61:
# 140 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 5000
# 141 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 50
# 142 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_64:
# 156 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 10000
# 157 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 100
# 158 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_67:
# 172 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 25000
# 173 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 250
# 174 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_70:
# 188 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 50000
# 189 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 500
# 190 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_73:
# 204 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 100000
# 205 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1000
# 206 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_76:
# 220 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 250000
# 221 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 2500
# 222 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1

Peccadum_PalatiumFelix_Script_CashierBuyCoins_79:
# 236 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removemoney 500000
# 237 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5000
# 238 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierBuyCoins_1


Peccadum_PalatiumFelix_Script_CashierSellCoins::
# 263 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierSell
# 264 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 265 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 267 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PALATIUM_FELIX_COIN_CASHIER
# 268 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 269 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 271 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 273 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_CashierSellCoins_3
# 290 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_CashierSellCoins_4
# 307 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_CashierSellCoins_5
# 324 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_CashierSellCoins_6
# 341 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_CashierSellCoins_7
# 358 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_CashierSellCoins_8
# 375 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_CashierSellCoins_9
# 392 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_CashierSellCoins_10
# 409 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_CashierSellCoins_11
# 426 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_CashierSellCoins_12
# 443 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_CashierSellCoins_13
# 460 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 11, Peccadum_PalatiumFelix_Script_CashierSellCoins_14
# 463 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_CashierSellCoins_Text_0
# 464 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 465 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_CashierSellCoins_1:
# 469 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTakeMoney
# 470 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierBye
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_3:
# 275 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_16
# 286 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_4:
# 292 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_19
# 303 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 304 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_5:
# 309 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 9
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_22
# 320 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 321 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_6:
# 326 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 24
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_25
# 337 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 338 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_7:
# 343 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 49
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_28
# 354 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 355 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_8:
# 360 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 99
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_31
# 371 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 372 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_9:
# 377 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 249
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_34
# 388 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 389 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_10:
# 394 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 499
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_37
# 405 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 406 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_11:
# 411 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 999
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_40
# 422 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 423 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_12:
# 428 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 2499
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_43
# 439 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 440 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_13:
# 445 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 4999
	goto_if_gt Peccadum_PalatiumFelix_Script_CashierSellCoins_46
# 456 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins
# 457 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_14:
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_16:
# 276 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 999900
# 277 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_49
# 281 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1
# 282 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 100
# 283 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_19:
# 293 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 999500
# 294 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_52
# 298 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 299 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 500
# 300 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_22:
# 310 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 998000
# 311 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_55
# 315 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 10
# 316 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 1000
# 317 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_25:
# 327 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 997500
# 328 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_58
# 332 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 333 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 2500
# 334 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_28:
# 344 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 995000
# 345 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_61
# 349 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 50
# 350 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 5000
# 351 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_31:
# 361 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 990000
# 362 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_64
# 366 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 367 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 10000
# 368 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_34:
# 378 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 975000
# 379 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_67
# 383 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 250
# 384 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 25000
# 385 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_37:
# 395 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 950000
# 396 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_70
# 400 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 401 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 50000
# 402 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_40:
# 412 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 900000
# 413 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_73
# 417 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 418 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 100000
# 419 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_43:
# 429 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 750000
# 430 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_76
# 434 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 435 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 250000
# 436 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_46:
# 446 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkmoney 500000
# 447 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_PalatiumFelix_Script_CashierSellCoins_79
# 451 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5000
# 452 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addmoney 500000
# 453 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierUpdateTransaction
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_49:
# 278 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
	return

Peccadum_PalatiumFelix_Script_CashierSellCoins_52:
# 295 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 296 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_55:
# 312 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 313 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_58:
# 329 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 330 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_61:
# 346 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 347 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_64:
# 363 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 364 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_67:
# 380 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 381 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_70:
# 397 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 398 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_73:
# 414 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 415 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_76:
# 431 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 432 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1

Peccadum_PalatiumFelix_Script_CashierSellCoins_79:
# 448 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_CashierTooMuchMoney
# 449 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_CashierSellCoins
	goto Peccadum_PalatiumFelix_Script_CashierSellCoins_1


Peccadum_PalatiumFelix_Script_CashierUpdateTransaction::
# 475 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatemoneybox
# 476 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 1, 6
# 477 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 478 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
	return


Peccadum_PalatiumFelix_Script_BlueRouletteDealer::
# 483 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	lock
# 484 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 486 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro
# 488 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_TEMP_6
# 489 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_6, 5
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2
Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1:
# 494 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin, MSGBOX_YESNO
# 495 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4
# 498 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_2:
# 490 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_NoCoins
# 491 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteDealer_1

Peccadum_PalatiumFelix_Script_BlueRouletteDealer_4:
# 496 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return


Peccadum_PalatiumFelix_Script_BlueRouletteBrain::
# 504 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
# 506 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
# 508 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 509 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3
# 511 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4
# 513 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5
# 515 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6
# 518 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0
# 519 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 520 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1:
# 524 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGoodLuck
# 525 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 527 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_2
# 528 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 529 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 530 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_ROULETTE_BALL
# 531 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 533 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	specialvar VAR_TEMP_5, BlueRouletteSpin
# 534 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_ROULETTE_BALL2
# 535 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 537 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 538 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 539 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_5
# 540 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteBrain_9
# 543 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteAnnounce00
Peccadum_PalatiumFelix_Script_BlueRouletteBrain_8:
# 545 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	faceplayer
# 547 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_3:
# 510 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_4:
# 512 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_5:
# 514 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_6:
# 516 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_1

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_9:
# 541 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteAnnounceSpin
	goto Peccadum_PalatiumFelix_Script_BlueRouletteBrain_8


Peccadum_PalatiumFelix_Script_GetCoinWager::
# 553 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Peccadum_PalatiumFelix_Script_GetCoinWager_2
Peccadum_PalatiumFelix_Script_GetCoinWager_1:
# 557 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 0
# 559 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 561 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 562 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 563 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_COIN_WAGER, TRUE
# 564 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 565 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	checkcoins VAR_RESULT
# 566 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 568 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_GetCoinWager_6
# 584 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_GetCoinWager_7
# 599 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_GetCoinWager_8
# 614 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_GetCoinWager_9
# 629 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_GetCoinWager_10
# 644 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_GetCoinWager_11
# 658 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_GetCoinWager_12
Peccadum_PalatiumFelix_Script_GetCoinWager_4:
# 663 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0
# 664 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 665 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_GetCoinWager_2:
# 554 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setflag FLAG_TEMP_2
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_1

Peccadum_PalatiumFelix_Script_GetCoinWager_6:
# 569 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_13
# 578 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_2
# 579 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 580 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 581 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_7:
# 585 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_16
# 594 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 595 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 596 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_8:
# 600 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 100
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_19
# 609 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 610 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 611 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_9:
# 615 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_22
# 624 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 625 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 626 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_10:
# 630 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_25
# 639 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 640 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 641 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_11:
# 645 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, 2500
	goto_if_ge Peccadum_PalatiumFelix_Script_GetCoinWager_28
# 654 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 655 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 656 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_GetCoinWager
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_12:
# 659 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	clearflag FLAG_TEMP_2
# 660 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 661 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_GetCoinWager_4

Peccadum_PalatiumFelix_Script_GetCoinWager_13:
# 570 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 5
# 571 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 572 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 573 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 574 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 575 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 5
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_16:
# 586 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 25
# 587 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 588 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 589 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 590 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 591 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 25
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_19:
# 601 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 100
# 602 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 603 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 604 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 605 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 606 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 100
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_22:
# 616 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 500
# 617 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 618 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 619 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 620 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 621 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 500
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_25:
# 631 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 1000
# 632 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 633 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 634 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 635 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 636 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 1000
	return

Peccadum_PalatiumFelix_Script_GetCoinWager_28:
# 646 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	removecoins 2500
# 647 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 648 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 649 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 650 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 651 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 2500
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType::
# 671 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_1, 0
# 673 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType
# 674 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 675 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_TYPE, TRUE
# 676 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 678 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 680 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3
# 683 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4
# 686 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5
# 689 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6
Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1:
# 692 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7
# 695 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_3:
# 681 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_4:
# 684 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_5:
# 687 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager, MSGBOX_YESNO
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_6:
# 690 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetWagerType_7:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager::
# 701 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 703 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
# 705 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager
# 706 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 708 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 709 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 710 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_0
# 711 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 713 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 715 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3
# 731 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4
# 767 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5
# 801 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_6
# 835 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_7
# 838 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_5
# 839 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 840 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1:
# 844 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_2
# 845 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_2, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_9
# 853 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWager00, MSGBOX_YESNO
# 854 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_59
# 857 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_3:
# 716 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_RANGE_0_NUMBER, TRUE
# 717 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 718 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_13
# 720 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_14
# 722 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_15
# 725 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_1
# 726 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 727 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_4:
# 732 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_2
# 733 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 734 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_1_NUMBER
# 735 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 736 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 737 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 738 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_18
# 740 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_19
# 742 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_20
# 744 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_21
# 746 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_22
# 748 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_23
# 750 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_24
# 752 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_25
# 754 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_26
# 756 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_27
# 758 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_28
# 761 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_3
# 762 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 763 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_5:
# 768 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_2_NUMBER
# 769 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 770 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 771 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 772 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_31
# 774 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_32
# 776 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_33
# 778 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_34
# 780 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_35
# 782 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_36
# 784 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_37
# 786 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_38
# 788 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_39
# 790 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_40
# 792 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_41
# 795 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4
# 796 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 797 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_6:
# 802 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GET_BLUE_ROULETTE_RANGE_3_NUMBER
# 803 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	special ShowScrollableMultichoice
# 804 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitstate
# 805 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_RESULT
# 806 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_44
# 808 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_45
# 810 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_46
# 812 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_47
# 814 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_48
# 816 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_49
# 818 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 6, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_50
# 820 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 7, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_51
# 822 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 8, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_52
# 824 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 9, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_53
# 826 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 10, Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_54
# 829 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4
# 830 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 831 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_7:
# 836 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_9:
# 846 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWagerNumber, MSGBOX_YESNO
# 847 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_56
# 850 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_13:
# 719 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 0
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_14:
# 721 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 31
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_15:
# 723 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_18:
# 739 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_19:
# 741 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 2
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_20:
# 743 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 3
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_21:
# 745 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 4
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_22:
# 747 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_23:
# 749 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 6
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_24:
# 751 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 7
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_25:
# 753 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 8
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_26:
# 755 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 9
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_27:
# 757 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 10
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_28:
# 759 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_31:
# 773 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 11
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_32:
# 775 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 12
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_33:
# 777 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 13
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_34:
# 779 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 14
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_35:
# 781 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 15
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_36:
# 783 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 16
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_37:
# 785 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 17
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_38:
# 787 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 18
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_39:
# 789 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 19
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_40:
# 791 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 20
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_41:
# 793 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_44:
# 807 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 21
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_45:
# 809 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 22
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_46:
# 811 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 23
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_47:
# 813 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 24
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_48:
# 815 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 25
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_49:
# 817 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 26
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_50:
# 819 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 27
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_51:
# 821 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 28
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_52:
# 823 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 29
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_53:
# 825 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_2, 30
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_54:
# 827 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	goto Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_1

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_56:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_59:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager::
# 864 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_4, 0
# 866 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager
# 867 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 869 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_COLOR, TRUE
# 870 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 872 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_4
# 874 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_2
# 882 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_3
# 890 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_4
# 898 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_5
# 901 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_Text_0
# 902 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 903 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_2:
# 875 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorRed, MSGBOX_YESNO
# 876 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_7
# 879 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_3:
# 883 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorBlue, MSGBOX_YESNO
# 884 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_10
# 887 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_4:
# 891 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorGreen, MSGBOX_YESNO
# 892 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_13
# 895 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_5:
# 899 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_7:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_10:
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_13:
	return


Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager::
# 910 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_3, 0
# 912 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager
# 913 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 915 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multichoice 0, 0, MULTI_GET_BLUE_ROULETTE_WAGER_RANGE, TRUE
# 917 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 918 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 920 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2
# 928 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3
# 936 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4
# 944 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5
# 952 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 4, Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6
# 955 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0
# 956 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 957 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_2:
# 921 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0, MSGBOX_YESNO
# 922 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_8
# 925 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_3:
# 929 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1, MSGBOX_YESNO
# 930 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_11
# 933 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_4:
# 937 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2, MSGBOX_YESNO
# 938 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_14
# 941 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_5:
# 945 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3, MSGBOX_YESNO
# 946 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_17
# 949 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager
	return

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_6:
# 953 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
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
# 964 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 966 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_2
# 973 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_3
# 1009 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_4
# 1046 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_2
# 1047 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1048 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_2:
# 967 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, VAR_TEMP_2
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_6
# 970 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_3:
# 974 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_4
# 976 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_10
# 986 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_11
# 996 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_12
# 1003 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_0
# 1004 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1005 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_4:
# 1010 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_3
# 1012 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_15
# 1019 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_16
# 1026 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_17
# 1033 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 3, Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_18
# 1040 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_1
# 1041 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1042 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_6:
# 968 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_10:
# 977 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 977 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 4
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 977 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 6
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 977 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 8
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 978 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 978 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 12
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 978 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 14
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 978 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 16
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 978 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 18
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 979 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 20
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 979 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 22
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 979 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 24
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 979 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 26
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 979 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 28
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 980 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 30
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20
# 983 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_11:
# 987 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 987 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 3
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 987 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 987 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 7
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 988 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 9
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 988 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 988 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 13
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 988 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 15
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 988 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 17
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 989 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 19
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 989 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 21
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 989 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 23
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 989 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 25
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 989 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 27
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 990 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 29
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51
# 993 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_12:
# 997 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82
# 997 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82
# 1000 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_15:
# 1013 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87
# 1013 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87
# 1016 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_16:
# 1020 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_94
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_93:
# 1023 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_17:
# 1027 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_99
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_98:
# 1030 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_18:
# 1034 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 20
	goto_if_gt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_104
Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_103:
# 1037 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_20:
# 981 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_51:
# 991 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_82:
# 998 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_87:
# 1014 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_92:
# 1021 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_94:
# 1020 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_92
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_93

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_97:
# 1028 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_99:
# 1027 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_97
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_98

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_102:
# 1035 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin
	return

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_104:
# 1034 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_5, 31
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_102
	goto Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_103


Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin::
# 1054 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1055 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayerWin
# 1056 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1058 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_1
# 1060 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 0, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_3
# 1067 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_4
# 1080 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2, Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_5
# 1093 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1094 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_Text_0
# 1095 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1096 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1:
# 1099 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins VAR_TEMP_0
# 1100 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1101 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1102 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1103 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
# 1104 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain
	return

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_3:
# 1061 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_7
# 1064 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_4:
# 1069 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_ne Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_10
# 1073 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_16
# 1076 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_5:
# 1082 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_ne Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_13
# 1086 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_TEMP_0, 100
	goto_if_lt Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_19
# 1089 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	setvar VAR_TEMP_0, 9999
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_7:
# 1062 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 30
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_10:
# 1070 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 2
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_13:
# 1083 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 3
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_16:
# 1074 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 15
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_19:
# 1087 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	multvar VAR_TEMP_0, 15
	goto Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_1


Peccadum_PalatiumFelix_Script_BlueRoulettePlayerLose::
# 1108 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayerLose
# 1109 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain
	return


Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain::
# 1113 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Text_BlueRoulettePlayAgain, MSGBOX_YESNO
# 1114 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain_1
# 1117 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteEnd
	return

Peccadum_PalatiumFelix_Script_BlueRoulettePlayAgain_1:
# 1115 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	call Peccadum_PalatiumFelix_Script_BlueRouletteBrain
	return


Peccadum_PalatiumFelix_Script_BlueRouletteEnd::
# 1122 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	goto_if_set FLAG_TEMP_2, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2
Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1:
# 1170 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Bye
# 1172 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 1173 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 1174 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitmovement 0
# 1175 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1176 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_2:
# 1123 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	showcoinsbox 21, 1
# 1124 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox CasinoDealer_Text_Refund
# 1125 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	switch VAR_TEMP_0
# 1126 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 5, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5
# 1132 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 25, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6
# 1138 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 100, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7
# 1144 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 500, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8
# 1150 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 1000, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9
# 1156 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	case 2500, Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10
# 1163 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	msgbox Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0
# 1164 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	closemessage
# 1165 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	release
	end

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_5:
# 1127 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 5
# 1128 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1129 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1130 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1131 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_6:
# 1133 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 25
# 1134 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1135 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1136 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1137 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_7:
# 1139 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 100
# 1140 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1141 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1142 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1143 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_8:
# 1145 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 500
# 1146 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1147 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1148 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1149 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_9:
# 1151 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 1000
# 1152 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1153 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1154 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1155 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_10:
# 1157 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	addcoins 2500
# 1158 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	updatecoinsbox 21, 1
# 1159 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	playse SE_SHOP
# 1160 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	waitse
# 1161 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	hidecoinsbox 21, 1
	goto Peccadum_PalatiumFelix_Script_BlueRouletteEnd_1


Peccadum_PalatiumFelix_Script_Cashier_Text_0:
# 41 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\n VAR_RESULT OOB Cashier$"

Peccadum_PalatiumFelix_Script_CashierBuyCoins_Text_0:
# 251 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nVARRESULT OOB BuyCoins$"

Peccadum_PalatiumFelix_Script_CashierSellCoins_Text_0:
# 463 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR, VAR_RESULT OOB SellCoins$"

Peccadum_PalatiumFelix_Script_BlueRouletteBrain_Text_0:
# 518 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB$"

Peccadum_PalatiumFelix_Script_GetCoinWager_Text_0:
# 663 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nBottom of GetCoinWager$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_0:
# 710 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "SPECIFIC NUM$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_1:
# 725 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_0_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_2:
# 732 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "CASE 1$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_3:
# 761 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_1_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_4:
# 795 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nOOB return from\nROULETTE_RANGE_2_NUMBER$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetNumberWager_Text_5:
# 838 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB in\nGetNumberWager$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetColorWager_Text_0:
# 901 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_COLOR OOB$"

Peccadum_PalatiumFelix_Script_BlueRouletteGetRangeWager_Text_0:
# 955 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_0:
# 1003 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_COLOR OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_1:
# 1040 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_RANGE OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteCheckWin_Text_2:
# 1046 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB in CheckWin$"

Peccadum_PalatiumFelix_Script_BlueRoulettePlayerWin_Text_0:
# 1094 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER_TYPE OOB in PlayerWin$"

Peccadum_PalatiumFelix_Script_BlueRouletteEnd_Text_0:
# 1163 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "ERROR\nWAGER OOB in RefundSwitch$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerIntro::
# 1180 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I am the Blue Roulette table dealer.$"

Peccadum_PalatiumFelix_Text_BlueRouletteDealerBegin::
# 1184 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to play a game of\n"
	.string "roulette?$"

Peccadum_PalatiumFelix_Text_NoCoins::
# 1188 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Excuse me sir, but coins are required to\n"
	.string "play games at Palatium Felix. Please\l"
	.string "speak with the cashier to purchase\l"
	.string "more.$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetWagerType::
# 1192 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "What kind of wager will you be placing?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmNumberWager::
# 1196 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A wager on a winning number pays thirty\n"
	.string "to one. Are you sure that you will place\l"
	.string "a wager on a single number?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorWager::
# 1200 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The payout for a wager on color depends\n"
	.string "on which color you wager on. Both {COLOR RED}red\l"
	.string "{COLOR DARK_GRAY}and {COLOR BLUE}blue {COLOR DARK_GRAY}pay out at two to one while\l"
	.string "{COLOR GREEN}green {COLOR DARK_GRAY}pays out higher, fifteen to one.\l"
	.string "Are you sure that you will bet on color?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRangeWager::
# 1204 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "A winning bet on range pays three to\n"
	.string "one, except for zero and double zero\l"
	.string "which pays the same as {COLOR GREEN}green{COLOR DARK_GRAY}, fifteen\l"
	.string "to one. Are you sure you want to wager\l"
	.string "on range?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetNumberWager::
# 1208 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "There are thirty two individual spaces\n"
	.string "on the roulette wheel: numbers from one\l"
	.string "to thirty, single, and double nil. Which\l"
	.string "number will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetRangeWager::
# 1212 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which range of numbers will you wager\n"
	.string "on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGetColorWager::
# 1216 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Which color will you be wagering on?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorRed::
# 1220 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR RED}red{COLOR DARK_GRAY}.\n"
	.string "This wager will payout at two to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorBlue::
# 1224 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR BLUE}blue{COLOR DARK_GRAY}.\n"
	.string "This wager will payout at two to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmColorGreen::
# 1228 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager color {COLOR GREEN}green{COLOR DARK_GRAY}.\n"
	.string "This wager will payout fifteen to one.\l"
	.string "Are you certain you want to place this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange0::
# 1232 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of zero and double zero. This will\l"
	.string "payout fifteen to one. Are you certain?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange1::
# 1236 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers one through ten. This will\l"
	.string "payout at three to one. Will you confirm\l"
	.string "this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange2::
# 1240 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "eleven through twenty. This will payout\l"
	.string "at three to one. Will you confirm this\l"
	.string "bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmRange3::
# 1244 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on the range\n"
	.string "of numbers from twenty one through\l"
	.string "thirty. The payout for this bet is three\l"
	.string "to one. Are you certain you want to\l"
	.string "place this bet?$"

CasinoDealer_Text_Refund::
# 1248 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Here are the unwagered coins back for\n"
	.string "you.$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWagerNumber::
# 1252 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to wager on\n"
	.string "{STR_VAR_1}. The payout will be at\l"
	.string "thirty to one. Are you certain you want\l"
	.string "to place this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteConfirmWager00::
# 1256 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You have chosen to bet double zero. The\n"
	.string "payout will be at thirty to one. Are you\l"
	.string "certain you want to place this bet?$"

Peccadum_PalatiumFelix_Text_BlueRouletteGoodLuck::
# 1260 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Rien ne va plus! No more bets! Sir, good\n"
	.string "luck!$"

Peccadum_PalatiumFelix_Text_BlueRouletteAnnounceSpin::
# 1264 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The result of this spin is\n"
	.string "{STR_VAR_1}!$"

Peccadum_PalatiumFelix_Text_BlueRouletteAnnounce00::
# 1268 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "The result of the spin: double zero!$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayerWin::
# 1272 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Congratulations {PLAYER}! You won\n"
	.string "your bet!$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayerLose::
# 1276 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you did not win your bet.$"

Peccadum_PalatiumFelix_Text_BlueRoulettePlayAgain::
# 1280 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Would you like to bet on roulette again?$"

Peccadum_PalatiumFelix_Text_Cashier::
# 1284 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Hello! Welcome to the Palatium Felix!\n"
	.string "Would you like to trade coins for cash?$"

Peccadum_PalatiumFelix_Text_CashierPurchase::
# 1288 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We're happy to sell you as many coins as\n"
	.string "you would like. They're one hundred\l"
	.string "bucks each. How many coins would you\l"
	.string "like to purchase?$"

Peccadum_PalatiumFelix_Text_CashierSell::
# 1292 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We're happy to exchange as many coins\n"
	.string "as you would like for one hundred bucks\l"
	.string "each. How many coins would you like to\l"
	.string "exchange?$"

Peccadum_PalatiumFelix_Text_CashierNotEnoughMoney::
# 1296 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You don't have enough money for those\n"
	.string "coins.$"

Peccadum_PalatiumFelix_Text_CashierNoRoomForCoins::
# 1300 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "room in your coin case to carry that\l"
	.string "many.$"

Peccadum_PalatiumFelix_Text_CashierTooMuchMoney::
# 1304 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "room to carry that much money in your\l"
	.string "purse.$"

Peccadum_PalatiumFelix_Text_CashierNotEnoughCoins::
# 1308 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "You don't have enough coins for that\n"
	.string "exchange.$"

Peccadum_PalatiumFelix_Text_CashierBye::
# 1312 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "We hope to see you again soon! Good\n"
	.string "luck!$"

Peccadum_PalatiumFelix_Text_CashierTakeCoins::
# 1316 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "Here are the coins you asked for sir.\n"
	.string "Thank you.$"

Peccadum_PalatiumFelix_Text_CashierTakeMoney::
# 1320 "data/maps/Peccadum_PalatiumFelix/scripts.pory"
	.string "There is the money exchanged for you\n"
	.string "coins.$"
