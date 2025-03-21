Peccadum_HarenaeAureae_MapScripts::
	.byte 0


Peccadum_HarenaeAureae_Script_Dancer::
# 32 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 33 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 34 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_Dancer1
# 35 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 36 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer, MSGBOX_YESNO
# 37 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_2
# 148 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 149 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
Peccadum_HarenaeAureae_Script_Dancer_1:
# 151 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end

Peccadum_HarenaeAureae_Script_Dancer_2:
# 38 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 39 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	multichoice 0, 0, MULTI_SALTYSPITOON_GET_WAGER, TRUE
# 40 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_RESULT
# 41 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, Peccadum_HarenaeAureae_Script_Dancer_6
# 58 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, Peccadum_HarenaeAureae_Script_Dancer_7
# 75 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, Peccadum_HarenaeAureae_Script_Dancer_8
# 92 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, Peccadum_HarenaeAureae_Script_Dancer_9
# 109 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, Peccadum_HarenaeAureae_Script_Dancer_10
# 126 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, Peccadum_HarenaeAureae_Script_Dancer_11
# 143 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 6, Peccadum_HarenaeAureae_Script_Dancer_12
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_6:
# 42 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1
# 43 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_13
# 54 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 55 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 56 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_7:
# 59 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10
# 60 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_16
# 71 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 72 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 73 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_8:
# 76 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100
# 77 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_19
# 88 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 89 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 90 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_9:
# 93 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1000
# 94 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_22
# 105 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 106 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 107 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_10:
# 110 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10000
# 111 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_25
# 122 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 123 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 124 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_11:
# 127 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100000
# 128 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Peccadum_HarenaeAureae_Script_Dancer_28
# 139 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 140 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancerNoMoney
# 141 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_12:
# 144 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_13:
# 44 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1
# 45 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 46 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 47 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 48 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 49 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 50 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 51 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 52 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_16:
# 61 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10
# 62 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 63 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 64 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 65 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 66 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 67 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 68 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 69 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_19:
# 78 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100
# 79 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 80 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 81 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 82 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 83 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 84 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 85 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 86 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_22:
# 95 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1000
# 96 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 97 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 98 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 99 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 100 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 101 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 102 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 103 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_25:
# 112 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10000
# 113 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 114 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 115 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 116 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 117 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 118 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 119 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 120 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1

Peccadum_HarenaeAureae_Script_Dancer_28:
# 129 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100000
# 130 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 131 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 132 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 133 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 134 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_TipDancer2
# 135 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 136 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 1, Colchis_Movement_MedeaDance_SpinInPlace
# 137 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
	goto Peccadum_HarenaeAureae_Script_Dancer_1


Peccadum_HarenaeAureae_Script_CrashOutMan::
# 156 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 157 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 158 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 159 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_HarenaeAureae_Script_CrashOutMan_2
Peccadum_HarenaeAureae_Script_CrashOutMan_1:
# 164 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_CrashOut2
# 165 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 166 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 167 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 168 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end

Peccadum_HarenaeAureae_Script_CrashOutMan_2:
# 160 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_CrashOut1
# 161 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 162 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	giveitem ITEM_COIN_CASE
	goto Peccadum_HarenaeAureae_Script_CrashOutMan_1


Peccadum_HarenaeAureae_Script_Dealer1::
# 174 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 175 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 176 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 177 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerOpen_TakeSeat
# 178 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 179 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 180 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 181 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_Dealer2::
# 186 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 187 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 188 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 189 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerOpen_TakeSeat
# 190 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 191 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 192 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 193 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_Dealer3::
# 198 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 199 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 200 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerBusy
# 201 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 202 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitmovement 0
# 203 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 204 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_DealerHiLoKabuto::
# 209 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 211 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro
# 213 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Start, MSGBOX_YESNO
# 215 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_2
# 219 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_Game
Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_1:
# 222 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end

Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_2:
# 216 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_End
	goto Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_1


Peccadum_HarenaeAureae_Script_DealerHiLoKabuto_Game::
# 229 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	return


DealerHiLoKabuto_Script_GetWager::
# 241 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_B, 0
# 242 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 243 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 244 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 245 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	multichoice 0, 0, MULTI_SALTYSPITOON_GET_WAGER, TRUE
# 246 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 247 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_TEMP_B
# 248 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, DealerHiLoKabuto_Script_GetWager_3
# 262 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, DealerHiLoKabuto_Script_GetWager_4
# 276 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, DealerHiLoKabuto_Script_GetWager_5
# 290 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, DealerHiLoKabuto_Script_GetWager_6
# 304 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, DealerHiLoKabuto_Script_GetWager_7
# 318 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, DealerHiLoKabuto_Script_GetWager_8
# 332 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 6, DealerHiLoKabuto_Script_GetWager_9
DealerHiLoKabuto_Script_GetWager_1:
	return

DealerHiLoKabuto_Script_GetWager_3:
# 249 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1
# 250 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_10
# 258 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 259 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 260 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_End
	goto DealerHiLoKabuto_Script_GetWager_1

DealerHiLoKabuto_Script_GetWager_4:
# 263 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10
# 264 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_13
# 272 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 273 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 274 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	goto DealerHiLoKabuto_Script_GetWager_1

DealerHiLoKabuto_Script_GetWager_5:
# 277 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100
# 278 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_16
# 286 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 287 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 288 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	goto DealerHiLoKabuto_Script_GetWager_1

DealerHiLoKabuto_Script_GetWager_6:
# 291 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1000
# 292 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_19
# 300 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 301 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 302 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	goto DealerHiLoKabuto_Script_GetWager_1

DealerHiLoKabuto_Script_GetWager_7:
# 305 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10000
# 306 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_22
# 314 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 315 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 316 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	goto DealerHiLoKabuto_Script_GetWager_1

DealerHiLoKabuto_Script_GetWager_8:
# 319 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100000
# 320 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DealerHiLoKabuto_Script_GetWager_25
# 328 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 329 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 330 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GetWager
	goto DealerHiLoKabuto_Script_GetWager_1

DealerHiLoKabuto_Script_GetWager_9:
# 333 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 334 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_End
	goto DealerHiLoKabuto_Script_GetWager_1

DealerHiLoKabuto_Script_GetWager_10:
# 251 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1
# 252 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 253 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 254 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 255 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 256 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	goto DealerHiLoKabuto_Script_GetWager_1

DealerHiLoKabuto_Script_GetWager_13:
# 265 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10
# 266 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 267 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 268 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 269 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 270 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	goto DealerHiLoKabuto_Script_GetWager_1

DealerHiLoKabuto_Script_GetWager_16:
# 279 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100
# 280 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 281 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 282 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 283 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 284 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	goto DealerHiLoKabuto_Script_GetWager_1

DealerHiLoKabuto_Script_GetWager_19:
# 293 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1000
# 294 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 295 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 296 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 297 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 298 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	goto DealerHiLoKabuto_Script_GetWager_1

DealerHiLoKabuto_Script_GetWager_22:
# 307 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10000
# 308 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 309 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 310 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 311 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 312 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	goto DealerHiLoKabuto_Script_GetWager_1

DealerHiLoKabuto_Script_GetWager_25:
# 321 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100000
# 322 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 323 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 324 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 325 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 326 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call DealerHiLoKabuto_Script_GameBrain
	goto DealerHiLoKabuto_Script_GetWager_1


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
	msgbox CasinoDealer_Text_Bye
# 470 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 471 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


Peccadum_HarenaeAureae_Script_Gambler::
# 476 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	faceplayer
# 478 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox Peccadum_HarenaeAureae_Text_Gambler1
# 479 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
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


Peccadum_HarenaeAureae_Script_4HiLoKabuto::
# 497 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 498 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group_Text_Intro, MSGBOX_YESNO
# 499 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_HarenaeAureae_Script_4HiLoKabuto_1
# 502 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group4_Script_Brain
	return

Peccadum_HarenaeAureae_Script_4HiLoKabuto_1:
# 500 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return


Peccadum_HarenaeAureae_Script_3HiLoKabuto::
# 507 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	lock
# 508 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group_Text_Intro, MSGBOX_YESNO
# 509 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Peccadum_HarenaeAureae_Script_3HiLoKabuto_1
# 512 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group3_Script_Brain
	return

Peccadum_HarenaeAureae_Script_3HiLoKabuto_1:
# 510 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return


HiLoKabuto_Group3_Script_Brain::
# 518 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
# 520 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_ResetGame
# 522 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 525 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_9, RandDigit
HiLoKabuto_Group3_Script_Brain_3:
# 528 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_8, RandDigit
# 529 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group3_Script_Brain_3
HiLoKabuto_Group3_Script_Brain_7:
# 532 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_E, RandDigit
# 533 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group3_Script_Brain_7
# 533 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_8
	goto_if_eq HiLoKabuto_Group3_Script_Brain_7
# 535 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	goto_if_set FLAG_TEMP_B, HiLoKabuto_Group3_Script_Brain_12
HiLoKabuto_Group3_Script_Brain_11:
# 548 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_E
# 549 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 10
	goto_if_eq HiLoKabuto_Group3_Script_Brain_15
# 549 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq HiLoKabuto_Group3_Script_Brain_15
# 552 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
HiLoKabuto_Group3_Script_Brain_14:
# 555 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_9
# 556 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, 10
	goto_if_eq HiLoKabuto_Group3_Script_Brain_24
# 556 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group3_Script_Brain_24
# 559 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Card
HiLoKabuto_Group3_Script_Brain_23:
# 561 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_8
# 562 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq HiLoKabuto_Group3_Script_Brain_33
# 562 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group3_Script_Brain_33
# 565 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Card
HiLoKabuto_Group3_Script_Brain_32:
# 568 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group3_Script_Brain_43
HiLoKabuto_Group3_Script_Brain_42:
# 572 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_E
	goto_if_gt HiLoKabuto_Group3_Script_Brain_52
HiLoKabuto_Group3_Script_Brain_50:
# 574 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_E
	goto_if_gt HiLoKabuto_Group3_Script_Brain_49
HiLoKabuto_Group3_Script_Brain_48:
# 577 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group3_Script_Brain_Text_0
HiLoKabuto_Group3_Script_Brain_40:
# 581 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group3_Script_PlayAgain
	return

HiLoKabuto_Group3_Script_Brain_12:
# 536 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq HiLoKabuto_Group3_Script_Brain_21
HiLoKabuto_Group3_Script_Brain_20:
# 539 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group3_Script_Brain_30
HiLoKabuto_Group3_Script_Brain_29:
# 542 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group3_Script_Brain_38
	goto HiLoKabuto_Group3_Script_Brain_11

HiLoKabuto_Group3_Script_Brain_15:
# 550 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto HiLoKabuto_Group3_Script_Brain_14

HiLoKabuto_Group3_Script_Brain_21:
# 537 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_E, 10
	goto HiLoKabuto_Group3_Script_Brain_20

HiLoKabuto_Group3_Script_Brain_24:
# 557 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Kabuto
	goto HiLoKabuto_Group3_Script_Brain_23

HiLoKabuto_Group3_Script_Brain_30:
# 540 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_9, 10
	goto HiLoKabuto_Group3_Script_Brain_29

HiLoKabuto_Group3_Script_Brain_33:
# 563 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Kabuto
	goto HiLoKabuto_Group3_Script_Brain_32

HiLoKabuto_Group3_Script_Brain_38:
# 543 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto HiLoKabuto_Group3_Script_Brain_11

HiLoKabuto_Group3_Script_Brain_41:
# 569 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group4_Script_PlayerWin
	goto HiLoKabuto_Group3_Script_Brain_40

HiLoKabuto_Group3_Script_Brain_43:
# 568 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group3_Script_Brain_41
	goto HiLoKabuto_Group3_Script_Brain_42

HiLoKabuto_Group3_Script_Brain_46:
# 573 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler1Won
	goto HiLoKabuto_Group3_Script_Brain_40

HiLoKabuto_Group3_Script_Brain_47:
# 575 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler2Won
	goto HiLoKabuto_Group3_Script_Brain_40

HiLoKabuto_Group3_Script_Brain_49:
# 574 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group3_Script_Brain_47
	goto HiLoKabuto_Group3_Script_Brain_48

HiLoKabuto_Group3_Script_Brain_52:
# 572 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group3_Script_Brain_46
	goto HiLoKabuto_Group3_Script_Brain_50


HiLoKabuto_Group4_Script_Brain::
# 587 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
# 589 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_ResetGame
# 591 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 594 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_9, RandDigit
HiLoKabuto_Group4_Script_Brain_3:
# 597 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_8, RandDigit
# 598 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group4_Script_Brain_3
HiLoKabuto_Group4_Script_Brain_7:
# 601 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_7, RandDigit
# 602 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group4_Script_Brain_7
# 602 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_8
	goto_if_eq HiLoKabuto_Group4_Script_Brain_7
HiLoKabuto_Group4_Script_Brain_13:
# 605 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_E, RandDigit
# 606 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group4_Script_Brain_13
# 606 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_8
	goto_if_eq HiLoKabuto_Group4_Script_Brain_13
# 606 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_7
	goto_if_eq HiLoKabuto_Group4_Script_Brain_13
# 608 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	goto_if_set FLAG_TEMP_B, HiLoKabuto_Group4_Script_Brain_20
HiLoKabuto_Group4_Script_Brain_19:
# 624 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_E
# 625 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 10
	goto_if_eq HiLoKabuto_Group4_Script_Brain_23
# 625 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq HiLoKabuto_Group4_Script_Brain_23
# 628 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
HiLoKabuto_Group4_Script_Brain_22:
# 631 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_9
# 632 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, 10
	goto_if_eq HiLoKabuto_Group4_Script_Brain_32
# 632 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group4_Script_Brain_32
# 635 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Card
HiLoKabuto_Group4_Script_Brain_31:
# 637 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_8
# 638 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq HiLoKabuto_Group4_Script_Brain_41
# 638 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group4_Script_Brain_41
# 641 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Card
HiLoKabuto_Group4_Script_Brain_40:
# 643 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_TEMP_7
# 644 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, 10
	goto_if_eq HiLoKabuto_Group4_Script_Brain_50
# 644 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq HiLoKabuto_Group4_Script_Brain_50
# 647 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Card
HiLoKabuto_Group4_Script_Brain_49:
# 650 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group4_Script_Brain_61
HiLoKabuto_Group4_Script_Brain_59:
# 654 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_E
	goto_if_gt HiLoKabuto_Group4_Script_Brain_80
HiLoKabuto_Group4_Script_Brain_76:
# 656 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_E
	goto_if_gt HiLoKabuto_Group4_Script_Brain_75
HiLoKabuto_Group4_Script_Brain_71:
# 658 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_E
	goto_if_gt HiLoKabuto_Group4_Script_Brain_70
HiLoKabuto_Group4_Script_Brain_68:
# 661 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group3_Script_Brain_Text_0
HiLoKabuto_Group4_Script_Brain_57:
# 665 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group4_Script_PlayAgain
	return

HiLoKabuto_Group4_Script_Brain_20:
# 609 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq HiLoKabuto_Group4_Script_Brain_29
HiLoKabuto_Group4_Script_Brain_28:
# 612 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group4_Script_Brain_38
HiLoKabuto_Group4_Script_Brain_37:
# 615 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group4_Script_Brain_47
HiLoKabuto_Group4_Script_Brain_46:
# 618 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq HiLoKabuto_Group4_Script_Brain_55
	goto HiLoKabuto_Group4_Script_Brain_19

HiLoKabuto_Group4_Script_Brain_23:
# 626 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto HiLoKabuto_Group4_Script_Brain_22

HiLoKabuto_Group4_Script_Brain_29:
# 610 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_E, 10
	goto HiLoKabuto_Group4_Script_Brain_28

HiLoKabuto_Group4_Script_Brain_32:
# 633 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Kabuto
	goto HiLoKabuto_Group4_Script_Brain_31

HiLoKabuto_Group4_Script_Brain_38:
# 613 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_9, 10
	goto HiLoKabuto_Group4_Script_Brain_37

HiLoKabuto_Group4_Script_Brain_41:
# 639 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Kabuto
	goto HiLoKabuto_Group4_Script_Brain_40

HiLoKabuto_Group4_Script_Brain_47:
# 616 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto HiLoKabuto_Group4_Script_Brain_46

HiLoKabuto_Group4_Script_Brain_50:
# 645 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Kabuto
	goto HiLoKabuto_Group4_Script_Brain_49

HiLoKabuto_Group4_Script_Brain_55:
# 619 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_7, 10
	goto HiLoKabuto_Group4_Script_Brain_19

HiLoKabuto_Group4_Script_Brain_58:
# 651 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group4_Script_PlayerWin
	goto HiLoKabuto_Group4_Script_Brain_57

HiLoKabuto_Group4_Script_Brain_60:
# 650 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_7
	goto_if_gt HiLoKabuto_Group4_Script_Brain_58
	goto HiLoKabuto_Group4_Script_Brain_59

HiLoKabuto_Group4_Script_Brain_61:
# 650 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group4_Script_Brain_60
	goto HiLoKabuto_Group4_Script_Brain_59

HiLoKabuto_Group4_Script_Brain_65:
# 655 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler1Won
	goto HiLoKabuto_Group4_Script_Brain_57

HiLoKabuto_Group4_Script_Brain_66:
# 657 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler2Won
	goto HiLoKabuto_Group4_Script_Brain_57

HiLoKabuto_Group4_Script_Brain_67:
# 659 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler3Won
	goto HiLoKabuto_Group4_Script_Brain_57

HiLoKabuto_Group4_Script_Brain_69:
# 658 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group4_Script_Brain_67
	goto HiLoKabuto_Group4_Script_Brain_68

HiLoKabuto_Group4_Script_Brain_70:
# 658 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group4_Script_Brain_69
	goto HiLoKabuto_Group4_Script_Brain_68

HiLoKabuto_Group4_Script_Brain_74:
# 656 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_7
	goto_if_gt HiLoKabuto_Group4_Script_Brain_66
	goto HiLoKabuto_Group4_Script_Brain_71

HiLoKabuto_Group4_Script_Brain_75:
# 656 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group4_Script_Brain_74
	goto HiLoKabuto_Group4_Script_Brain_71

HiLoKabuto_Group4_Script_Brain_79:
# 654 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_7
	goto_if_gt HiLoKabuto_Group4_Script_Brain_65
	goto HiLoKabuto_Group4_Script_Brain_76

HiLoKabuto_Group4_Script_Brain_80:
# 654 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group4_Script_Brain_79
	goto HiLoKabuto_Group4_Script_Brain_76


HiLoKabuto_Group5_Script_Brain::
# 671 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
# 673 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_ResetGame
# 675 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Script_DetermineHiOrLoKabuto
# 678 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_9, RandDigit
HiLoKabuto_Group5_Script_Brain_3:
# 681 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_8, RandDigit
# 682 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_Brain_3
HiLoKabuto_Group5_Script_Brain_7:
# 685 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_7, RandDigit
# 686 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_Brain_7
# 686 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_8
	goto_if_eq HiLoKabuto_Group5_Script_Brain_7
HiLoKabuto_Group5_Script_Brain_13:
# 689 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_6, RandDigit
# 690 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_Brain_13
# 690 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_8
	goto_if_eq HiLoKabuto_Group5_Script_Brain_13
# 690 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_7
	goto_if_eq HiLoKabuto_Group5_Script_Brain_13
HiLoKabuto_Group5_Script_Brain_21:
# 693 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_TEMP_E, RandDigit
# 694 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_9
	goto_if_eq HiLoKabuto_Group5_Script_Brain_21
# 694 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_8
	goto_if_eq HiLoKabuto_Group5_Script_Brain_21
# 694 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_7
	goto_if_eq HiLoKabuto_Group5_Script_Brain_21
# 694 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_6
	goto_if_eq HiLoKabuto_Group5_Script_Brain_21
# 696 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	goto_if_set FLAG_TEMP_B, HiLoKabuto_Group5_Script_Brain_30
HiLoKabuto_Group5_Script_Brain_29:
# 715 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_E
# 716 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 10
	goto_if_eq HiLoKabuto_Group5_Script_Brain_33
# 716 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_33
# 719 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerCard
HiLoKabuto_Group5_Script_Brain_32:
# 722 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_9
# 723 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, 10
	goto_if_eq HiLoKabuto_Group5_Script_Brain_42
# 723 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_42
# 726 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Card
HiLoKabuto_Group5_Script_Brain_41:
# 728 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_8
# 729 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, 10
	goto_if_eq HiLoKabuto_Group5_Script_Brain_51
# 729 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_51
# 732 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Card
HiLoKabuto_Group5_Script_Brain_50:
# 734 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_TEMP_7
# 735 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, 10
	goto_if_eq HiLoKabuto_Group5_Script_Brain_60
# 735 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_60
# 738 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Card
HiLoKabuto_Group5_Script_Brain_59:
# 741 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_6
# 742 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, 10
	goto_if_eq HiLoKabuto_Group5_Script_Brain_69
# 742 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_69
# 745 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp4Card
HiLoKabuto_Group5_Script_Brain_68:
# 748 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_Brain_80
HiLoKabuto_Group5_Script_Brain_78:
# 752 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_E
	goto_if_gt HiLoKabuto_Group5_Script_Brain_113
HiLoKabuto_Group5_Script_Brain_107:
# 754 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_E
	goto_if_gt HiLoKabuto_Group5_Script_Brain_106
HiLoKabuto_Group5_Script_Brain_100:
# 756 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_E
	goto_if_gt HiLoKabuto_Group5_Script_Brain_99
HiLoKabuto_Group5_Script_Brain_93:
# 758 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_E
	goto_if_gt HiLoKabuto_Group5_Script_Brain_92
HiLoKabuto_Group5_Script_Brain_90:
# 761 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group3_Script_Brain_Text_0
HiLoKabuto_Group5_Script_Brain_76:
# 765 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group5_Script_PlayAgain
	return

HiLoKabuto_Group5_Script_Brain_30:
# 697 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_39
HiLoKabuto_Group5_Script_Brain_38:
# 700 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_48
HiLoKabuto_Group5_Script_Brain_47:
# 703 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_57
HiLoKabuto_Group5_Script_Brain_56:
# 706 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_66
HiLoKabuto_Group5_Script_Brain_65:
# 709 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_eq HiLoKabuto_Group5_Script_Brain_74
	goto HiLoKabuto_Group5_Script_Brain_29

HiLoKabuto_Group5_Script_Brain_33:
# 717 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnouncePlayerKabuto
	goto HiLoKabuto_Group5_Script_Brain_32

HiLoKabuto_Group5_Script_Brain_39:
# 698 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_E, 10
	goto HiLoKabuto_Group5_Script_Brain_38

HiLoKabuto_Group5_Script_Brain_42:
# 724 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp1Kabuto
	goto HiLoKabuto_Group5_Script_Brain_41

HiLoKabuto_Group5_Script_Brain_48:
# 701 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_9, 10
	goto HiLoKabuto_Group5_Script_Brain_47

HiLoKabuto_Group5_Script_Brain_51:
# 730 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp2Kabuto
	goto HiLoKabuto_Group5_Script_Brain_50

HiLoKabuto_Group5_Script_Brain_57:
# 704 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_8, 10
	goto HiLoKabuto_Group5_Script_Brain_56

HiLoKabuto_Group5_Script_Brain_60:
# 736 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp3Kabuto
	goto HiLoKabuto_Group5_Script_Brain_59

HiLoKabuto_Group5_Script_Brain_66:
# 707 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_7, 10
	goto HiLoKabuto_Group5_Script_Brain_65

HiLoKabuto_Group5_Script_Brain_69:
# 743 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Text_AnnounceOp4Kabuto
	goto HiLoKabuto_Group5_Script_Brain_68

HiLoKabuto_Group5_Script_Brain_74:
# 710 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_6, 10
	goto HiLoKabuto_Group5_Script_Brain_29

HiLoKabuto_Group5_Script_Brain_77:
# 749 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group5_Script_PlayerWin
	goto HiLoKabuto_Group5_Script_Brain_76

HiLoKabuto_Group5_Script_Brain_79:
# 748 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_7
	goto_if_gt HiLoKabuto_Group5_Script_Brain_83
	goto HiLoKabuto_Group5_Script_Brain_78

HiLoKabuto_Group5_Script_Brain_80:
# 748 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_Brain_79
	goto HiLoKabuto_Group5_Script_Brain_78

HiLoKabuto_Group5_Script_Brain_83:
# 748 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_6
	goto_if_gt HiLoKabuto_Group5_Script_Brain_77
	goto HiLoKabuto_Group5_Script_Brain_78

HiLoKabuto_Group5_Script_Brain_86:
# 753 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler1Won
	goto HiLoKabuto_Group5_Script_Brain_76

HiLoKabuto_Group5_Script_Brain_87:
# 755 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler2Won
	goto HiLoKabuto_Group5_Script_Brain_76

HiLoKabuto_Group5_Script_Brain_88:
# 757 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler3Won
	goto HiLoKabuto_Group5_Script_Brain_76

HiLoKabuto_Group5_Script_Brain_89:
# 759 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_Gambler4Won
	goto HiLoKabuto_Group5_Script_Brain_76

HiLoKabuto_Group5_Script_Brain_91:
# 758 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_7
	goto_if_gt HiLoKabuto_Group5_Script_Brain_95
	goto HiLoKabuto_Group5_Script_Brain_90

HiLoKabuto_Group5_Script_Brain_92:
# 758 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_Brain_91
	goto HiLoKabuto_Group5_Script_Brain_90

HiLoKabuto_Group5_Script_Brain_95:
# 758 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_Brain_89
	goto HiLoKabuto_Group5_Script_Brain_90

HiLoKabuto_Group5_Script_Brain_98:
# 756 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_Brain_102
	goto HiLoKabuto_Group5_Script_Brain_93

HiLoKabuto_Group5_Script_Brain_99:
# 756 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_Brain_98
	goto HiLoKabuto_Group5_Script_Brain_93

HiLoKabuto_Group5_Script_Brain_102:
# 756 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_7, VAR_TEMP_6
	goto_if_gt HiLoKabuto_Group5_Script_Brain_88
	goto HiLoKabuto_Group5_Script_Brain_93

HiLoKabuto_Group5_Script_Brain_105:
# 754 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_7
	goto_if_gt HiLoKabuto_Group5_Script_Brain_109
	goto HiLoKabuto_Group5_Script_Brain_100

HiLoKabuto_Group5_Script_Brain_106:
# 754 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_gt HiLoKabuto_Group5_Script_Brain_105
	goto HiLoKabuto_Group5_Script_Brain_100

HiLoKabuto_Group5_Script_Brain_109:
# 754 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_6
	goto_if_gt HiLoKabuto_Group5_Script_Brain_87
	goto HiLoKabuto_Group5_Script_Brain_100

HiLoKabuto_Group5_Script_Brain_112:
# 752 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_7
	goto_if_gt HiLoKabuto_Group5_Script_Brain_116
	goto HiLoKabuto_Group5_Script_Brain_107

HiLoKabuto_Group5_Script_Brain_113:
# 752 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_8
	goto_if_gt HiLoKabuto_Group5_Script_Brain_112
	goto HiLoKabuto_Group5_Script_Brain_107

HiLoKabuto_Group5_Script_Brain_116:
# 752 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_TEMP_9, VAR_TEMP_6
	goto_if_gt HiLoKabuto_Group5_Script_Brain_86
	goto HiLoKabuto_Group5_Script_Brain_107


HiLoKabuto_Group_Script_GetWager::
# 769 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_B, 0
# 770 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 771 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 772 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 773 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	multichoice 0, 0, MULTI_SALTYSPITOON_GET_WAGER, TRUE
# 774 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 775 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_TEMP_B
# 776 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, HiLoKabuto_Group_Script_GetWager_2
# 790 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, HiLoKabuto_Group_Script_GetWager_3
# 804 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, HiLoKabuto_Group_Script_GetWager_4
# 818 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, HiLoKabuto_Group_Script_GetWager_5
# 832 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, HiLoKabuto_Group_Script_GetWager_6
# 846 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, HiLoKabuto_Group_Script_GetWager_7
# 860 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 6, HiLoKabuto_Group_Script_GetWager_8
	return

HiLoKabuto_Group_Script_GetWager_2:
# 777 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1
# 778 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HiLoKabuto_Group_Script_GetWager_9
# 786 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 787 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 788 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group_Script_GetWager_3:
# 791 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10
# 792 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HiLoKabuto_Group_Script_GetWager_12
# 800 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 801 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 802 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
	return

HiLoKabuto_Group_Script_GetWager_4:
# 805 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100
# 806 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HiLoKabuto_Group_Script_GetWager_15
# 814 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 815 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 816 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
	return

HiLoKabuto_Group_Script_GetWager_5:
# 819 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 1000
# 820 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HiLoKabuto_Group_Script_GetWager_18
# 828 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 829 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 830 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
	return

HiLoKabuto_Group_Script_GetWager_6:
# 833 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 10000
# 834 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HiLoKabuto_Group_Script_GetWager_21
# 842 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 843 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 844 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
	return

HiLoKabuto_Group_Script_GetWager_7:
# 847 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	checkmoney 100000
# 848 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HiLoKabuto_Group_Script_GetWager_24
# 856 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 857 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 858 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_GetWager
	return

HiLoKabuto_Group_Script_GetWager_8:
# 861 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
# 862 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group_Script_GetWager_9:
# 779 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1
# 780 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 781 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 782 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 783 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group_Script_GetWager_12:
# 793 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10
# 794 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 795 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 796 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 797 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group_Script_GetWager_15:
# 807 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100
# 808 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 809 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 810 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 811 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group_Script_GetWager_18:
# 821 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 1000
# 822 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 823 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 824 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 825 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group_Script_GetWager_21:
# 835 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 10000
# 836 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 837 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 838 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 839 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group_Script_GetWager_24:
# 849 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	removemoney 100000
# 850 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 851 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 852 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 853 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return


HiLoKabuto_Group_Script_ResetGame::
# 867 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_E, 0
# 868 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_9, 0
# 869 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_8, 0
# 870 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_7, 0
# 871 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setvar VAR_TEMP_6, 0
# 872 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_1
# 873 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_2
# 874 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_3
# 875 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_4
# 876 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_5
# 877 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_6
# 878 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_7
# 879 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_8
# 880 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_9
# 881 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_A
# 882 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	clearflag FLAG_TEMP_B
	return


HiLoKabuto_Script_DetermineHiOrLoKabuto::
# 887 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 888 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt HiLoKabuto_Script_DetermineHiOrLoKabuto_2
HiLoKabuto_Script_DetermineHiOrLoKabuto_1:
# 892 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	goto_if_set FLAG_TEMP_B, HiLoKabuto_Script_DetermineHiOrLoKabuto_5
# 895 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_KabutoLo
HiLoKabuto_Script_DetermineHiOrLoKabuto_4:
	return

HiLoKabuto_Script_DetermineHiOrLoKabuto_2:
# 889 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	setflag FLAG_TEMP_B
	goto HiLoKabuto_Script_DetermineHiOrLoKabuto_1

HiLoKabuto_Script_DetermineHiOrLoKabuto_5:
# 893 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Text_KabutoHi
	goto HiLoKabuto_Script_DetermineHiOrLoKabuto_4


HiLoKabuto_Group5_Script_PlayerWin::
# 901 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 902 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayerWin
# 903 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_TEMP_B
# 904 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, HiLoKabuto_Group5_Script_PlayerWin_3
# 906 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, HiLoKabuto_Group5_Script_PlayerWin_4
# 908 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, HiLoKabuto_Group5_Script_PlayerWin_5
# 910 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, HiLoKabuto_Group5_Script_PlayerWin_6
# 912 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, HiLoKabuto_Group5_Script_PlayerWin_7
# 914 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, HiLoKabuto_Group5_Script_PlayerWin_8
# 917 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Script_PlayerWin_Text_0
# 918 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
HiLoKabuto_Group5_Script_PlayerWin_1:
# 920 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 921 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 922 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 923 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group5_Script_PlayerWin_3:
# 905 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 5
	goto HiLoKabuto_Group5_Script_PlayerWin_1

HiLoKabuto_Group5_Script_PlayerWin_4:
# 907 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 50
	goto HiLoKabuto_Group5_Script_PlayerWin_1

HiLoKabuto_Group5_Script_PlayerWin_5:
# 909 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 500
	goto HiLoKabuto_Group5_Script_PlayerWin_1

HiLoKabuto_Group5_Script_PlayerWin_6:
# 911 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 5000
	goto HiLoKabuto_Group5_Script_PlayerWin_1

HiLoKabuto_Group5_Script_PlayerWin_7:
# 913 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 50000
	goto HiLoKabuto_Group5_Script_PlayerWin_1

HiLoKabuto_Group5_Script_PlayerWin_8:
# 915 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 500000
	goto HiLoKabuto_Group5_Script_PlayerWin_1


HiLoKabuto_Group4_Script_PlayerWin::
# 928 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 929 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayerWin
# 930 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_TEMP_B
# 931 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, HiLoKabuto_Group4_Script_PlayerWin_3
# 933 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, HiLoKabuto_Group4_Script_PlayerWin_4
# 935 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, HiLoKabuto_Group4_Script_PlayerWin_5
# 937 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, HiLoKabuto_Group4_Script_PlayerWin_6
# 939 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, HiLoKabuto_Group4_Script_PlayerWin_7
# 941 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, HiLoKabuto_Group4_Script_PlayerWin_8
# 944 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Script_PlayerWin_Text_0
# 945 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
HiLoKabuto_Group4_Script_PlayerWin_1:
# 947 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 948 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 949 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 950 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group4_Script_PlayerWin_3:
# 932 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 4
	goto HiLoKabuto_Group4_Script_PlayerWin_1

HiLoKabuto_Group4_Script_PlayerWin_4:
# 934 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 40
	goto HiLoKabuto_Group4_Script_PlayerWin_1

HiLoKabuto_Group4_Script_PlayerWin_5:
# 936 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 400
	goto HiLoKabuto_Group4_Script_PlayerWin_1

HiLoKabuto_Group4_Script_PlayerWin_6:
# 938 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 4000
	goto HiLoKabuto_Group4_Script_PlayerWin_1

HiLoKabuto_Group4_Script_PlayerWin_7:
# 940 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 40000
	goto HiLoKabuto_Group4_Script_PlayerWin_1

HiLoKabuto_Group4_Script_PlayerWin_8:
# 942 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 400000
	goto HiLoKabuto_Group4_Script_PlayerWin_1


HiLoKabuto_Group3_Script_PlayerWin::
# 955 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	showmoneybox 17, 0
# 956 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayerWin
# 957 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	switch VAR_TEMP_B
# 958 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 0, HiLoKabuto_Group3_Script_PlayerWin_3
# 960 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 1, HiLoKabuto_Group3_Script_PlayerWin_4
# 962 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 2, HiLoKabuto_Group3_Script_PlayerWin_5
# 964 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 3, HiLoKabuto_Group3_Script_PlayerWin_6
# 966 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 4, HiLoKabuto_Group3_Script_PlayerWin_7
# 968 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	case 5, HiLoKabuto_Group3_Script_PlayerWin_8
# 971 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox DealerHiLoKabuto_Script_PlayerWin_Text_0
# 972 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
HiLoKabuto_Group3_Script_PlayerWin_1:
# 974 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	updatemoneybox
# 975 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	playse SE_SHOP
# 976 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	waitse
# 977 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	hidemoneybox
	return

HiLoKabuto_Group3_Script_PlayerWin_3:
# 959 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 3
	goto HiLoKabuto_Group3_Script_PlayerWin_1

HiLoKabuto_Group3_Script_PlayerWin_4:
# 961 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 30
	goto HiLoKabuto_Group3_Script_PlayerWin_1

HiLoKabuto_Group3_Script_PlayerWin_5:
# 963 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 300
	goto HiLoKabuto_Group3_Script_PlayerWin_1

HiLoKabuto_Group3_Script_PlayerWin_6:
# 965 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 3000
	goto HiLoKabuto_Group3_Script_PlayerWin_1

HiLoKabuto_Group3_Script_PlayerWin_7:
# 967 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 30000
	goto HiLoKabuto_Group3_Script_PlayerWin_1

HiLoKabuto_Group3_Script_PlayerWin_8:
# 969 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	addmoney 300000
	goto HiLoKabuto_Group3_Script_PlayerWin_1


HiLoKabuto_Group3_Script_PlayAgain::
# 982 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayAgain, MSGBOX_YESNO
# 983 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group3_Script_PlayAgain_1
# 986 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group3_Script_PlayAgain_1:
# 984 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group3_Script_Brain
	return


HiLoKabuto_Group4_Script_PlayAgain::
# 991 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayAgain, MSGBOX_YESNO
# 992 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group4_Script_PlayAgain_1
# 995 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group4_Script_PlayAgain_1:
# 993 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group4_Script_Brain
	return


HiLoKabuto_Group5_Script_PlayAgain::
# 1000 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group_Text_PlayAgain, MSGBOX_YESNO
# 1001 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HiLoKabuto_Group5_Script_PlayAgain_1
# 1004 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group_Script_End
	return

HiLoKabuto_Group5_Script_PlayAgain_1:
# 1002 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	call HiLoKabuto_Group5_Script_Brain
	return


HiLoKabuto_Group_Script_End::
# 1011 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	msgbox HiLoKabuto_Group_Text_End
# 1012 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	closemessage
# 1013 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	release
	end


DealerHiLoKabuto_Script_PlayerWin_Text_0:
# 449 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "ERROR:\n Bottom of PlayerWin switch$"

HiLoKabuto_Group3_Script_Brain_Text_0:
# 577 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "ERROR\nDeclare gambler winner\nOOB$"

Peccadum_HarenaeAureae_Text_Dancer1::
# 1017 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Hey baby! How you doin?$"

Peccadum_HarenaeAureae_Text_TipDancer::
# 1021 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Would you like to leave a tip?$"

Peccadum_HarenaeAureae_Text_TipDancerNoMoney::
# 1025 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Guess I don't have enough! Better get\n"
	.string "going!$"

Peccadum_HarenaeAureae_Text_TipDancer2::
# 1029 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Thanks baby!$"

Peccadum_HarenaeAureae_Text_CrashOut1::
# 1034 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "I can't believe it! I lost everything!\n"
	.string "May I never again game... take this!$"

Peccadum_HarenaeAureae_Text_CrashOut2::
# 1039 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "That stupid little box ruined my life! I\n"
	.string "lost my job, my house, my family, and\l"
	.string "everything, but it's your problem now!$"

Peccadum_HarenaeAureae_Text_Gambler1::
# 1043 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "There is no greater thrill than winning\n"
	.string "big!$"

Peccadum_HarenaeAureae_Text_Gambler2::
# 1047 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Let Lady Luck lie with me on the draw!$"

Peccadum_HarenaeAureae_Text_Gambler3::
# 1051 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "I'm down a bit but I'll soon win it back!$"

Peccadum_HarenaeAureae_Text_Gambler4::
# 1055 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "There is no greater thrill than winning\n"
	.string "big!$"

Peccadum_HarenaeAureae_Text_Gambler5::
# 1059 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "There is no greater thrill than winning\n"
	.string "big!$"

Peccadum_HarenaeAureae_Text_DealerOpen_TakeSeat::
# 1063 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "If you would like to play please have a\n"
	.string "seat and enter your wager.$"

Peccadum_HarenaeAureae_Text_DealerBusy::
# 1067 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Please do not interrupt our current\n"
	.string "game$"

Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Intro::
# 1071 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Hello. I am the High Low Kabuto table\n"
	.string "dealer.$"

Peccadum_HarenaeAureae_Text_DealerHiLoKabuto_Start::
# 1075 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Are you here to gamble?$"

CasinoDealer_Text_Bye::
# 1079 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Have a nice day. Hope to see you again!$"

HiLoKabuto_Text_KabutoHi::
# 1083 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "The high card for this hand is Kabuto.$"

HiLoKabuto_Text_KabutoLo::
# 1087 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "The low card for this hand is Kabuto.$"

DealerHiLoKabuto_Text_AnnouncePlayerCard::
# 1091 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "{PLAYER} got {STR_VAR_1}!$"

DealerHiLoKabuto_Text_AnnouncePlayerKabuto::
# 1095 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "{PLAYER} got Kabuto!$"

DealerHiLoKabuto_Text_AnnounceDealerCard::
# 1099 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Dealer got {STR_VAR_2}!$"

DealerHiLoKabuto_Text_AnnounceDealerKabuto::
# 1103 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Dealer got Kabuto!$"

DealerHiLoKabuto_Text_PlayerWin::
# 1107 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Congratulations! You win your wager!$"

DealerHiLoKabuto_Text_DealerWin::
# 1111 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "So sorry but looks like you've lost this\n"
	.string "hand.$"

DealerHiLoKabuto_Text_PlayAgain::
# 1115 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Would you like me to deal you in again?$"

HiLoKabuto_Group_Text_Intro::
# 1119 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Joining our game of High Low Kabuto?$"

DealerHiLoKabuto_Text_AnnounceOp1Card::
# 1123 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 1 got {STR_VAR_1}.$"

DealerHiLoKabuto_Text_AnnounceOp1Kabuto::
# 1127 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 1 got Kabuto.$"

DealerHiLoKabuto_Text_AnnounceOp2Card::
# 1131 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 2 got {STR_VAR_2}.$"

DealerHiLoKabuto_Text_AnnounceOp2Kabuto::
# 1135 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 2 got Kabuto.$"

DealerHiLoKabuto_Text_AnnounceOp3Card::
# 1139 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 3 got {STR_VAR_3}.$"

DealerHiLoKabuto_Text_AnnounceOp3Kabuto::
# 1143 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 3 got Kabuto.$"

DealerHiLoKabuto_Text_AnnounceOp4Card::
# 1147 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 4 got {STR_VAR_1}.$"

DealerHiLoKabuto_Text_AnnounceOp4Kabuto::
# 1151 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 4 got Kabuto.$"

HiLoKabuto_Group_Text_PlayerWin::
# 1155 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Congratulations {PLAYER}! You win\n"
	.string "this hand!$"

HiLoKabuto_Text_Gambler1Won::
# 1159 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 1 won this hand.$"

HiLoKabuto_Text_Gambler2Won::
# 1163 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 2 won this hand.$"

HiLoKabuto_Text_Gambler3Won::
# 1167 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 3 won this hand.$"

HiLoKabuto_Text_Gambler4Won::
# 1171 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Opponent gambler 4 won this hand.$"

HiLoKabuto_Group_Text_PlayAgain::
# 1175 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Would you like to wager another hand?$"

HiLoKabuto_Group_Text_End::
# 1179 "data/maps/Peccadum_HarenaeAureae/scripts.pory"
	.string "Once you're ready to gamble, we'll be\n"
	.string "here.$"
