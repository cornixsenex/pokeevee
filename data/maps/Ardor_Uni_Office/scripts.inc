Ardor_Uni_Office_MapScripts::
	.byte 0


Ardor_Uni_Office_EventScript_IncrementVar::
# 10 "data/maps/Ardor_Uni_Office/scripts.pory"
	switch VAR_UNI_STATE
# 11 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 0, Ardor_Uni_Office_EventScript_IncrementVar_3
# 13 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 1, Ardor_Uni_Office_EventScript_IncrementVar_4
# 15 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 2, Ardor_Uni_Office_EventScript_IncrementVar_5
# 17 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 3, Ardor_Uni_Office_EventScript_IncrementVar_6
# 19 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 4, Ardor_Uni_Office_EventScript_IncrementVar_7
# 21 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 5, Ardor_Uni_Office_EventScript_IncrementVar_8
# 23 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 6, Ardor_Uni_Office_EventScript_IncrementVar_9
# 25 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 7, Ardor_Uni_Office_EventScript_IncrementVar_10
# 27 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 8, Ardor_Uni_Office_EventScript_IncrementVar_11
# 29 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 9, Ardor_Uni_Office_EventScript_IncrementVar_12
# 31 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 10, Ardor_Uni_Office_EventScript_IncrementVar_13
# 34 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_EventScript_IncrementVar_Text_0
# 35 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
Ardor_Uni_Office_EventScript_IncrementVar_1:
	return

Ardor_Uni_Office_EventScript_IncrementVar_3:
# 12 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 1
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_4:
# 14 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 2
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_5:
# 16 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 3
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_6:
# 18 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 4
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_7:
# 20 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 5
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_8:
# 22 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 6
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_9:
# 24 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 7
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_10:
# 26 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 8
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_11:
# 28 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 9
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_12:
# 30 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 10
	goto Ardor_Uni_Office_EventScript_IncrementVar_1

Ardor_Uni_Office_EventScript_IncrementVar_13:
# 32 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 11
	goto Ardor_Uni_Office_EventScript_IncrementVar_1


Ardor_Uni_Office_EventScript_ConsulL::
# 41 "data/maps/Ardor_Uni_Office/scripts.pory"
	lock
# 42 "data/maps/Ardor_Uni_Office/scripts.pory"
	faceplayer
# 43 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_UNI_STATE, 0
	goto_if_gt Ardor_Uni_Office_EventScript_ConsulL_2
# 46 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 1
# 47 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulLIntro
# 48 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 49 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_Consul
Ardor_Uni_Office_EventScript_ConsulL_1:
# 51 "data/maps/Ardor_Uni_Office/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 52 "data/maps/Ardor_Uni_Office/scripts.pory"
	waitmovement 0
# 53 "data/maps/Ardor_Uni_Office/scripts.pory"
	release
	end

Ardor_Uni_Office_EventScript_ConsulL_2:
# 44 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_Consul
	goto Ardor_Uni_Office_EventScript_ConsulL_1


Ardor_Uni_Office_EventScript_ConsulR::
# 58 "data/maps/Ardor_Uni_Office/scripts.pory"
	lock
# 59 "data/maps/Ardor_Uni_Office/scripts.pory"
	faceplayer
# 60 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_UNI_STATE, 0
	goto_if_gt Ardor_Uni_Office_EventScript_ConsulR_2
# 63 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 1
# 64 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulRIntro
# 65 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 66 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_Consul
Ardor_Uni_Office_EventScript_ConsulR_1:
# 68 "data/maps/Ardor_Uni_Office/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 69 "data/maps/Ardor_Uni_Office/scripts.pory"
	waitmovement 0
# 70 "data/maps/Ardor_Uni_Office/scripts.pory"
	release
	end

Ardor_Uni_Office_EventScript_ConsulR_2:
# 61 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_Consul
	goto Ardor_Uni_Office_EventScript_ConsulR_1


Ardor_Uni_TermState_IncrementVar::
# 75 "data/maps/Ardor_Uni_Office/scripts.pory"
	switch VAR_UNI_TERM_STATE
# 76 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 0, Ardor_Uni_TermState_IncrementVar_3
# 78 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 1, Ardor_Uni_TermState_IncrementVar_4
# 80 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 2, Ardor_Uni_TermState_IncrementVar_5
# 82 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 3, Ardor_Uni_TermState_IncrementVar_6
# 84 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 4, Ardor_Uni_TermState_IncrementVar_7
# 86 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 5, Ardor_Uni_TermState_IncrementVar_8
# 89 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_TermState_IncrementVar_Text_0
# 90 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
Ardor_Uni_TermState_IncrementVar_1:
	return

Ardor_Uni_TermState_IncrementVar_3:
# 77 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_TERM_STATE, 1
	goto Ardor_Uni_TermState_IncrementVar_1

Ardor_Uni_TermState_IncrementVar_4:
# 79 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_TERM_STATE, 2
	goto Ardor_Uni_TermState_IncrementVar_1

Ardor_Uni_TermState_IncrementVar_5:
# 81 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_TERM_STATE, 3
	goto Ardor_Uni_TermState_IncrementVar_1

Ardor_Uni_TermState_IncrementVar_6:
# 83 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_TERM_STATE, 4
	goto Ardor_Uni_TermState_IncrementVar_1

Ardor_Uni_TermState_IncrementVar_7:
# 85 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_TERM_STATE, 5
	goto Ardor_Uni_TermState_IncrementVar_1

Ardor_Uni_TermState_IncrementVar_8:
# 87 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_TERM_STATE, 6
	goto Ardor_Uni_TermState_IncrementVar_1


Ardor_Uni_Office_EventScript_Consul::
# 99 "data/maps/Ardor_Uni_Office/scripts.pory"
	checkitem ITEM_DIPLOMA
# 100 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_Office_EventScript_Consul_2
# 102 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_UNI_TERM_STATE, 4
	goto_if_gt Ardor_Uni_Office_EventScript_Consul_3
# 105 "data/maps/Ardor_Uni_Office/scripts.pory"
	switch VAR_UNI_STATE
# 106 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 0, Ardor_Uni_Office_EventScript_Consul_8
# 109 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 1, Ardor_Uni_Office_EventScript_Consul_9
# 111 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 2, Ardor_Uni_Office_EventScript_Consul_10
# 113 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 3, Ardor_Uni_Office_EventScript_Consul_11
# 115 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 4, Ardor_Uni_Office_EventScript_Consul_12
# 117 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 5, Ardor_Uni_Office_EventScript_Consul_13
# 119 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 6, Ardor_Uni_Office_EventScript_Consul_14
# 121 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 7, Ardor_Uni_Office_EventScript_Consul_15
# 123 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 8, Ardor_Uni_Office_EventScript_Consul_16
# 125 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 9, Ardor_Uni_Office_EventScript_Consul_17
# 126 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 10, Ardor_Uni_Office_EventScript_Consul_17
# 129 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_EventScript_Consul_Text_1
# 130 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
Ardor_Uni_Office_EventScript_Consul_1:
	return

Ardor_Uni_Office_EventScript_Consul_2:
# 101 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_ConsulDonate
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_3:
# 103 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_Graduate
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_8:
# 107 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_EventScript_Consul_Text_0
# 108 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_9:
# 110 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_ConsulRegister
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_10:
# 112 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_11:
# 114 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_ConsulRegister
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_12:
# 116 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_13:
# 118 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_ConsulRegister
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_14:
# 120 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_15:
# 122 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_ConsulRegister
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_16:
# 124 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1

Ardor_Uni_Office_EventScript_Consul_17:
# 127 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	goto Ardor_Uni_Office_EventScript_Consul_1


Ardor_Uni_Office_EventScript_Graduate::
# 137 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_TERM_STATE, 0
# 138 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_IncrementVar
# 139 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulCongrats
# 140 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 141 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_UNI_STATE, 9
	goto_if_eq Ardor_Uni_Office_EventScript_Graduate_2
# 148 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_ConsulRegister
Ardor_Uni_Office_EventScript_Graduate_1:
	return

Ardor_Uni_Office_EventScript_Graduate_2:
# 142 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_STATE, 10
# 143 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulGradutate
# 144 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 145 "data/maps/Ardor_Uni_Office/scripts.pory"
	giveitem ITEM_DIPLOMA
# 146 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_ConsulDonate
	goto Ardor_Uni_Office_EventScript_Graduate_1


Ardor_Uni_Office_EventScript_ConsulDonate::
# 154 "data/maps/Ardor_Uni_Office/scripts.pory"
	showmoneybox 0, 0
# 155 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulDonate, MSGBOX_YESNO
# 156 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 157 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_1
# 163 "data/maps/Ardor_Uni_Office/scripts.pory"
	switch VAR_UNI_TERM_STATE
# 164 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 0, Ardor_Uni_Office_EventScript_ConsulDonate_5
# 182 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 1, Ardor_Uni_Office_EventScript_ConsulDonate_6
# 201 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 2, Ardor_Uni_Office_EventScript_ConsulDonate_7
# 220 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 3, Ardor_Uni_Office_EventScript_ConsulDonate_8
# 239 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 4, Ardor_Uni_Office_EventScript_ConsulDonate_9
# 258 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 5, Ardor_Uni_Office_EventScript_ConsulDonate_10
# 279 "data/maps/Ardor_Uni_Office/scripts.pory"
	checkmoney 999998
# 280 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_30
# 286 "data/maps/Ardor_Uni_Office/scripts.pory"
	removemoney 999998
# 287 "data/maps/Ardor_Uni_Office/scripts.pory"
	updatemoneybox
# 288 "data/maps/Ardor_Uni_Office/scripts.pory"
	playse SE_SHOP
# 289 "data/maps/Ardor_Uni_Office/scripts.pory"
	waitse
# 290 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulDonated
# 291 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 292 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_1:
# 158 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulDonateNo
# 159 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 160 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_5:
# 165 "data/maps/Ardor_Uni_Office/scripts.pory"
	checkmoney 1000
# 166 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_12
# 172 "data/maps/Ardor_Uni_Office/scripts.pory"
	removemoney 1000
# 173 "data/maps/Ardor_Uni_Office/scripts.pory"
	updatemoneybox
# 174 "data/maps/Ardor_Uni_Office/scripts.pory"
	playse SE_SHOP
# 175 "data/maps/Ardor_Uni_Office/scripts.pory"
	waitse
# 176 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_TERM_STATE, 1
# 177 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulDonated
# 178 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 179 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_6:
# 184 "data/maps/Ardor_Uni_Office/scripts.pory"
	checkmoney 5000
# 185 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_15
# 191 "data/maps/Ardor_Uni_Office/scripts.pory"
	removemoney 5000
# 192 "data/maps/Ardor_Uni_Office/scripts.pory"
	updatemoneybox
# 193 "data/maps/Ardor_Uni_Office/scripts.pory"
	playse SE_SHOP
# 194 "data/maps/Ardor_Uni_Office/scripts.pory"
	waitse
# 195 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_TERM_STATE, 2
# 196 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulDonated
# 197 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 198 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_7:
# 203 "data/maps/Ardor_Uni_Office/scripts.pory"
	checkmoney 10000
# 204 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_18
# 210 "data/maps/Ardor_Uni_Office/scripts.pory"
	removemoney 10000
# 211 "data/maps/Ardor_Uni_Office/scripts.pory"
	updatemoneybox
# 212 "data/maps/Ardor_Uni_Office/scripts.pory"
	playse SE_SHOP
# 213 "data/maps/Ardor_Uni_Office/scripts.pory"
	waitse
# 214 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_TERM_STATE, 3
# 215 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulDonated
# 216 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 217 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_8:
# 222 "data/maps/Ardor_Uni_Office/scripts.pory"
	checkmoney 50000
# 223 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_21
# 229 "data/maps/Ardor_Uni_Office/scripts.pory"
	removemoney 50000
# 230 "data/maps/Ardor_Uni_Office/scripts.pory"
	updatemoneybox
# 231 "data/maps/Ardor_Uni_Office/scripts.pory"
	playse SE_SHOP
# 232 "data/maps/Ardor_Uni_Office/scripts.pory"
	waitse
# 233 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_TERM_STATE, 4
# 234 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulDonated
# 235 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 236 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_9:
# 241 "data/maps/Ardor_Uni_Office/scripts.pory"
	checkmoney 100000
# 242 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_24
# 248 "data/maps/Ardor_Uni_Office/scripts.pory"
	removemoney 100000
# 249 "data/maps/Ardor_Uni_Office/scripts.pory"
	updatemoneybox
# 250 "data/maps/Ardor_Uni_Office/scripts.pory"
	playse SE_SHOP
# 251 "data/maps/Ardor_Uni_Office/scripts.pory"
	waitse
# 252 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_TERM_STATE, 5
# 253 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulDonated
# 254 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 255 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_10:
# 260 "data/maps/Ardor_Uni_Office/scripts.pory"
	checkmoney 500000
# 261 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulDonate_27
# 267 "data/maps/Ardor_Uni_Office/scripts.pory"
	removemoney 1000
# 268 "data/maps/Ardor_Uni_Office/scripts.pory"
	updatemoneybox
# 269 "data/maps/Ardor_Uni_Office/scripts.pory"
	playse SE_SHOP
# 270 "data/maps/Ardor_Uni_Office/scripts.pory"
	waitse
# 271 "data/maps/Ardor_Uni_Office/scripts.pory"
	setvar VAR_UNI_TERM_STATE, 6
# 272 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulDonated
# 273 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 274 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_12:
# 167 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
# 168 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 169 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_15:
# 186 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
# 187 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 188 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_18:
# 205 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
# 206 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 207 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_21:
# 224 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
# 225 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 226 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_24:
# 243 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
# 244 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 245 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_27:
# 262 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
# 263 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 264 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulDonate_30:
# 281 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
# 282 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 283 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return


Ardor_Uni_Office_EventScript_ConsulRegister::
# 308 "data/maps/Ardor_Uni_Office/scripts.pory"
	showmoneybox 0, 0
# 309 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulRegister1, MSGBOX_YESNO
# 310 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 311 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulRegister_1
# 317 "data/maps/Ardor_Uni_Office/scripts.pory"
	checkmoney 1000
# 318 "data/maps/Ardor_Uni_Office/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Ardor_Uni_Office_EventScript_ConsulRegister_4
# 324 "data/maps/Ardor_Uni_Office/scripts.pory"
	removemoney 1000
# 325 "data/maps/Ardor_Uni_Office/scripts.pory"
	updatemoneybox
# 326 "data/maps/Ardor_Uni_Office/scripts.pory"
	playse SE_SHOP
# 327 "data/maps/Ardor_Uni_Office/scripts.pory"
	waitse
# 328 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_IncrementVar
# 329 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulRegisterWelcome
# 330 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 331 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
# 332 "data/maps/Ardor_Uni_Office/scripts.pory"
	switch VAR_UNI_STATE
# 333 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 2, Ardor_Uni_Office_EventScript_ConsulRegister_9
# 337 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 4, Ardor_Uni_Office_EventScript_ConsulRegister_10
# 341 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 6, Ardor_Uni_Office_EventScript_ConsulRegister_11
# 345 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 8, Ardor_Uni_Office_EventScript_ConsulRegister_12
# 350 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_EventScript_ConsulRegister_Text_0
Ardor_Uni_Office_EventScript_ConsulRegister_7:
# 352 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 357 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollScience
# 360 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_ConsulEnrolled
	return

Ardor_Uni_Office_EventScript_ConsulRegister_1:
# 312 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_EventScript_ConsulRegisterNo
# 313 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 314 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulRegister_4:
# 319 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulRegisterShort
# 320 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 321 "data/maps/Ardor_Uni_Office/scripts.pory"
	hidemoneybox
	return

Ardor_Uni_Office_EventScript_ConsulRegister_9:
# 334 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_GRAMMAR
# 335 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_ARITHMETIC
# 336 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulEnrolled1
	goto Ardor_Uni_Office_EventScript_ConsulRegister_7

Ardor_Uni_Office_EventScript_ConsulRegister_10:
# 338 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_ALGEBRA
# 339 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_LITERATURE
# 340 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulEnrolled2
	goto Ardor_Uni_Office_EventScript_ConsulRegister_7

Ardor_Uni_Office_EventScript_ConsulRegister_11:
# 342 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_GEOMETRY
# 343 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_POETRY
# 344 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulEnrolled3
	goto Ardor_Uni_Office_EventScript_ConsulRegister_7

Ardor_Uni_Office_EventScript_ConsulRegister_12:
# 346 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_CALCULUS
# 347 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_RHETORIC
# 348 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ConsulEnrolled4
	goto Ardor_Uni_Office_EventScript_ConsulRegister_7


Ardor_Uni_Office_EventScript_EnrollSocial::
# 369 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_EnrollSocialIntro
# 370 "data/maps/Ardor_Uni_Office/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_CHOOSE_SOCIAL, TRUE
# 371 "data/maps/Ardor_Uni_Office/scripts.pory"
	switch VAR_RESULT
# 372 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 0, Ardor_Uni_Office_EventScript_EnrollSocial_3
# 381 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 1, Ardor_Uni_Office_EventScript_EnrollSocial_4
# 390 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 2, Ardor_Uni_Office_EventScript_EnrollSocial_5
# 399 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 3, Ardor_Uni_Office_EventScript_EnrollSocial_6
# 409 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_EventScript_EnrollSocial_Text_0
# 410 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	end

Ardor_Uni_Office_EventScript_EnrollSocial_1:
	return

Ardor_Uni_Office_EventScript_EnrollSocial_3:
# 373 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_HISTORY, Ardor_Uni_Office_EventScript_EnrollSocial_8
# 378 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_HISTORY
# 379 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_4:
# 382 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_ARCHAEOLOGY, Ardor_Uni_Office_EventScript_EnrollSocial_11
# 387 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_ARCHAEOLOGY
# 388 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_5:
# 391 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_PSYCHOLOGY, Ardor_Uni_Office_EventScript_EnrollSocial_14
# 396 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_PSYCHOLOGY
# 397 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_6:
# 400 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_PHILOSOPHY, Ardor_Uni_Office_EventScript_EnrollSocial_17
# 405 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_PHILOSOPHY
# 406 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_8:
# 374 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_HistoryRepeat
# 375 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 376 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_11:
# 383 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ArchaeologyRepeat
# 384 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 385 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_14:
# 392 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_PsychologyRepeat
# 393 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 394 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1

Ardor_Uni_Office_EventScript_EnrollSocial_17:
# 401 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_PhilosophyRepeat
# 402 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 403 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollSocial_1


Ardor_Uni_Office_EventScript_EnrollScience::
# 417 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_EnrollScienceIntro
# 418 "data/maps/Ardor_Uni_Office/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_CHOOSE_SCIENCE, TRUE
# 419 "data/maps/Ardor_Uni_Office/scripts.pory"
	switch VAR_RESULT
# 420 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 0, Ardor_Uni_Office_EventScript_EnrollScience_3
# 429 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 1, Ardor_Uni_Office_EventScript_EnrollScience_4
# 438 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 2, Ardor_Uni_Office_EventScript_EnrollScience_5
# 451 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 3, Ardor_Uni_Office_EventScript_EnrollScience_6
# 466 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_EventScript_EnrollScience_Text_0
# 467 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	end

Ardor_Uni_Office_EventScript_EnrollScience_1:
	return

Ardor_Uni_Office_EventScript_EnrollScience_3:
# 421 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_GEOLOGY, Ardor_Uni_Office_EventScript_EnrollScience_8
# 426 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_GEOLOGY
# 427 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_4:
# 430 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_BIOLOGY, Ardor_Uni_Office_EventScript_EnrollScience_11
# 435 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_BIOLOGY
# 436 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_5:
# 439 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_CHEMISTRY, Ardor_Uni_Office_EventScript_EnrollScience_14
# 443 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_BIOLOGY
	goto_if 0, Ardor_Uni_Office_EventScript_EnrollScience_15
# 448 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_CHEMISTRY
# 449 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_6:
# 452 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_PHYSICS, Ardor_Uni_Office_EventScript_EnrollScience_19
# 456 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_CHEMISTRY
	goto_if 0, Ardor_Uni_Office_EventScript_EnrollScience_20
# 461 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_PHYSICS
# 462 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_PHYSICS_HIDE_GEM
# 463 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollSocial
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_8:
# 422 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_GeologyRepeat
# 423 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 424 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollScience
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_11:
# 431 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_BiologyRepeat
# 432 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 433 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollScience
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_14:
# 440 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ChemistryRepeat
# 441 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 442 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollScience
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_15:
# 444 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ChemistryPrereq
# 445 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 446 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollScience
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_19:
# 453 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_PhysicsRepeat
# 454 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 455 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollScience
	goto Ardor_Uni_Office_EventScript_EnrollScience_1

Ardor_Uni_Office_EventScript_EnrollScience_20:
# 457 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_PhysicsPrereq
# 458 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 459 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollScience
	goto Ardor_Uni_Office_EventScript_EnrollScience_1


Ardor_Uni_Office_EventScript_EnrollElective::
# 474 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_EnrollElectiveIntro
# 475 "data/maps/Ardor_Uni_Office/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_CHOOSE_ELECTIVE, TRUE
# 476 "data/maps/Ardor_Uni_Office/scripts.pory"
	switch VAR_RESULT
# 477 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 0, Ardor_Uni_Office_EventScript_EnrollElective_3
# 485 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 1, Ardor_Uni_Office_EventScript_EnrollElective_4
# 493 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 2, Ardor_Uni_Office_EventScript_EnrollElective_5
# 501 "data/maps/Ardor_Uni_Office/scripts.pory"
	case 3, Ardor_Uni_Office_EventScript_EnrollElective_6
# 514 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_EventScript_EnrollElective_Text_0
# 515 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	end

Ardor_Uni_Office_EventScript_EnrollElective_1:
	return

Ardor_Uni_Office_EventScript_EnrollElective_3:
# 478 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_ART, Ardor_Uni_Office_EventScript_EnrollElective_8
# 483 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_ART
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_4:
# 486 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_MUSIC, Ardor_Uni_Office_EventScript_EnrollElective_11
# 491 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_MUSIC
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_5:
# 494 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_GYM, Ardor_Uni_Office_EventScript_EnrollElective_14
# 499 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_GYM
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_6:
# 502 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_LOGIC, Ardor_Uni_Office_EventScript_EnrollElective_17
# 506 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_ALGEBRA
	goto_if 0, Ardor_Uni_Office_EventScript_EnrollElective_18
# 511 "data/maps/Ardor_Uni_Office/scripts.pory"
	setflag FLAG_OPEN_CLASS_LOGIC
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_8:
# 479 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_ArtRepeat
# 480 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 481 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_11:
# 487 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_MusicRepeat
# 488 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 489 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_14:
# 495 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_GymRepeat
# 496 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 497 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_17:
# 503 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_LogicRepeat
# 504 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 505 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollElective_1

Ardor_Uni_Office_EventScript_EnrollElective_18:
# 507 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_LogicPrereq
# 508 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
# 509 "data/maps/Ardor_Uni_Office/scripts.pory"
	call Ardor_Uni_Office_EventScript_EnrollElective
	goto Ardor_Uni_Office_EventScript_EnrollElective_1


Ardor_Uni_Office_EventScript_ConsulEnrolled::
# 523 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_GRAMMAR, Ardor_Uni_Office_EventScript_ConsulEnrolled_3
Ardor_Uni_Office_EventScript_ConsulEnrolled_1:
# 527 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_LITERATURE, Ardor_Uni_Office_EventScript_ConsulEnrolled_8
Ardor_Uni_Office_EventScript_ConsulEnrolled_6:
# 531 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_POETRY, Ardor_Uni_Office_EventScript_ConsulEnrolled_13
Ardor_Uni_Office_EventScript_ConsulEnrolled_11:
# 535 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_RHETORIC, Ardor_Uni_Office_EventScript_ConsulEnrolled_18
Ardor_Uni_Office_EventScript_ConsulEnrolled_16:
# 539 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_ARITHMETIC, Ardor_Uni_Office_EventScript_ConsulEnrolled_23
Ardor_Uni_Office_EventScript_ConsulEnrolled_21:
# 543 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_ALGEBRA, Ardor_Uni_Office_EventScript_ConsulEnrolled_28
Ardor_Uni_Office_EventScript_ConsulEnrolled_26:
# 547 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_GEOMETRY, Ardor_Uni_Office_EventScript_ConsulEnrolled_33
Ardor_Uni_Office_EventScript_ConsulEnrolled_31:
# 551 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_CALCULUS, Ardor_Uni_Office_EventScript_ConsulEnrolled_38
Ardor_Uni_Office_EventScript_ConsulEnrolled_36:
# 555 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_BIOLOGY, Ardor_Uni_Office_EventScript_ConsulEnrolled_43
Ardor_Uni_Office_EventScript_ConsulEnrolled_41:
# 559 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_GEOLOGY, Ardor_Uni_Office_EventScript_ConsulEnrolled_48
Ardor_Uni_Office_EventScript_ConsulEnrolled_46:
# 563 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_CHEMISTRY, Ardor_Uni_Office_EventScript_ConsulEnrolled_53
Ardor_Uni_Office_EventScript_ConsulEnrolled_51:
# 567 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_PHYSICS, Ardor_Uni_Office_EventScript_ConsulEnrolled_58
Ardor_Uni_Office_EventScript_ConsulEnrolled_56:
# 571 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_HISTORY, Ardor_Uni_Office_EventScript_ConsulEnrolled_63
Ardor_Uni_Office_EventScript_ConsulEnrolled_61:
# 575 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_ARCHAEOLOGY, Ardor_Uni_Office_EventScript_ConsulEnrolled_68
Ardor_Uni_Office_EventScript_ConsulEnrolled_66:
# 579 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_PSYCHOLOGY, Ardor_Uni_Office_EventScript_ConsulEnrolled_73
Ardor_Uni_Office_EventScript_ConsulEnrolled_71:
# 583 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_PHILOSOPHY, Ardor_Uni_Office_EventScript_ConsulEnrolled_78
Ardor_Uni_Office_EventScript_ConsulEnrolled_76:
# 587 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_GYM, Ardor_Uni_Office_EventScript_ConsulEnrolled_83
Ardor_Uni_Office_EventScript_ConsulEnrolled_81:
# 591 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_ART, Ardor_Uni_Office_EventScript_ConsulEnrolled_88
Ardor_Uni_Office_EventScript_ConsulEnrolled_86:
# 595 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_MUSIC, Ardor_Uni_Office_EventScript_ConsulEnrolled_93
Ardor_Uni_Office_EventScript_ConsulEnrolled_91:
# 599 "data/maps/Ardor_Uni_Office/scripts.pory"
	goto_if_set FLAG_OPEN_CLASS_LOGIC, Ardor_Uni_Office_EventScript_ConsulEnrolled_98
Ardor_Uni_Office_EventScript_ConsulEnrolled_96:
	return

Ardor_Uni_Office_EventScript_ConsulEnrolled_2:
# 524 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishGrammar
# 525 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_1

Ardor_Uni_Office_EventScript_ConsulEnrolled_3:
# 523 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_GRAMMAR
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_2
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_1

Ardor_Uni_Office_EventScript_ConsulEnrolled_7:
# 528 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishLiterature
# 529 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_6

Ardor_Uni_Office_EventScript_ConsulEnrolled_8:
# 527 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_LITERATURE
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_7
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_6

Ardor_Uni_Office_EventScript_ConsulEnrolled_12:
# 532 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishPoetry
# 533 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_11

Ardor_Uni_Office_EventScript_ConsulEnrolled_13:
# 531 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_POETRY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_12
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_11

Ardor_Uni_Office_EventScript_ConsulEnrolled_17:
# 536 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishRhetoric
# 537 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_16

Ardor_Uni_Office_EventScript_ConsulEnrolled_18:
# 535 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_RHETORIC
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_17
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_16

Ardor_Uni_Office_EventScript_ConsulEnrolled_22:
# 540 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishArithmetic
# 541 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_21

Ardor_Uni_Office_EventScript_ConsulEnrolled_23:
# 539 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_ARITHMETIC
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_22
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_21

Ardor_Uni_Office_EventScript_ConsulEnrolled_27:
# 544 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishAlgebra
# 545 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_26

Ardor_Uni_Office_EventScript_ConsulEnrolled_28:
# 543 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_ALGEBRA
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_27
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_26

Ardor_Uni_Office_EventScript_ConsulEnrolled_32:
# 548 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishGeometry
# 549 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_31

Ardor_Uni_Office_EventScript_ConsulEnrolled_33:
# 547 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_GEOMETRY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_32
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_31

Ardor_Uni_Office_EventScript_ConsulEnrolled_37:
# 552 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishCalculus
# 553 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_36

Ardor_Uni_Office_EventScript_ConsulEnrolled_38:
# 551 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_CALCULUS
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_37
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_36

Ardor_Uni_Office_EventScript_ConsulEnrolled_42:
# 556 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishBiology
# 557 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_41

Ardor_Uni_Office_EventScript_ConsulEnrolled_43:
# 555 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_BIOLOGY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_42
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_41

Ardor_Uni_Office_EventScript_ConsulEnrolled_47:
# 560 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishGeology
# 561 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_46

Ardor_Uni_Office_EventScript_ConsulEnrolled_48:
# 559 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_GEOLOGY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_47
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_46

Ardor_Uni_Office_EventScript_ConsulEnrolled_52:
# 564 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishChemistry
# 565 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_51

Ardor_Uni_Office_EventScript_ConsulEnrolled_53:
# 563 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_CHEMISTRY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_52
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_51

Ardor_Uni_Office_EventScript_ConsulEnrolled_57:
# 568 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishPhysics
# 569 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_56

Ardor_Uni_Office_EventScript_ConsulEnrolled_58:
# 567 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_PHYSICS
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_57
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_56

Ardor_Uni_Office_EventScript_ConsulEnrolled_62:
# 572 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishHistory
# 573 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_61

Ardor_Uni_Office_EventScript_ConsulEnrolled_63:
# 571 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_HISTORY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_62
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_61

Ardor_Uni_Office_EventScript_ConsulEnrolled_67:
# 576 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishArchaeology
# 577 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_66

Ardor_Uni_Office_EventScript_ConsulEnrolled_68:
# 575 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_ARCHAEOLOGY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_67
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_66

Ardor_Uni_Office_EventScript_ConsulEnrolled_72:
# 580 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishPsychology
# 581 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_71

Ardor_Uni_Office_EventScript_ConsulEnrolled_73:
# 579 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_PSYCHOLOGY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_72
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_71

Ardor_Uni_Office_EventScript_ConsulEnrolled_77:
# 584 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishPhilosophy
# 585 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_76

Ardor_Uni_Office_EventScript_ConsulEnrolled_78:
# 583 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_PHILOSOPHY
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_77
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_76

Ardor_Uni_Office_EventScript_ConsulEnrolled_82:
# 588 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishGym
# 589 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_81

Ardor_Uni_Office_EventScript_ConsulEnrolled_83:
# 587 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_82
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_81

Ardor_Uni_Office_EventScript_ConsulEnrolled_87:
# 592 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishArt
# 593 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_86

Ardor_Uni_Office_EventScript_ConsulEnrolled_88:
# 591 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_ART
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_87
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_86

Ardor_Uni_Office_EventScript_ConsulEnrolled_92:
# 596 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishMusic
# 597 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_91

Ardor_Uni_Office_EventScript_ConsulEnrolled_93:
# 595 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_MUSIC
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_92
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_91

Ardor_Uni_Office_EventScript_ConsulEnrolled_97:
# 600 "data/maps/Ardor_Uni_Office/scripts.pory"
	msgbox Ardor_Uni_Office_Text_FinishLogic
# 601 "data/maps/Ardor_Uni_Office/scripts.pory"
	closemessage
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_96

Ardor_Uni_Office_EventScript_ConsulEnrolled_98:
# 599 "data/maps/Ardor_Uni_Office/scripts.pory"
	checktrainerflag TRAINER_UNI_LOGIC
	goto_if 0, Ardor_Uni_Office_EventScript_ConsulEnrolled_97
	goto Ardor_Uni_Office_EventScript_ConsulEnrolled_96


Ardor_Uni_Office_EventScript_IncrementVar_Text_0:
# 34 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "VAR_UNI_STATE bad in IncVar$"

Ardor_Uni_TermState_IncrementVar_Text_0:
# 89 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "VAR_UNI_TERM_STATE BAD VALUE$"

Ardor_Uni_Office_EventScript_Consul_Text_0:
# 107 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "UNI_STATE is 0 in consul$"

Ardor_Uni_Office_EventScript_Consul_Text_1:
# 129 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "UNI_STATE problemo in consul$"

Ardor_Uni_Office_EventScript_ConsulRegister_Text_0:
# 350 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "PROBLEM IN UNI_STATE switch in ConsulRegister$"

Ardor_Uni_Office_EventScript_EnrollSocial_Text_0:
# 409 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "PROBLEMO in enroll social switcher$"

Ardor_Uni_Office_EventScript_EnrollScience_Text_0:
# 466 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "PROBLEMO in enroll science switcher$"

Ardor_Uni_Office_EventScript_EnrollElective_Text_0:
# 514 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "PROBLEMO in enroll elective switcher$"

Ardor_Uni_Office_Text_ConsulLIntro::
# 607 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Te non cognosco. Sum Albinus consulque\n"
	.string "Collegi Ardentis.$"

Ardor_Uni_Office_Text_ConsulRIntro::
# 611 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Te non cognosco. Sum Platonus\n"
	.string "consulque Collegi Ardentis.$"

Ardor_Uni_Office_Text_ConsulEnrolled1::
# 615 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "In sessione prima necesse est studere\n"
	.string "artem gramatici et arithmeticam.$"

Ardor_Uni_Office_Text_ConsulEnrolled2::
# 619 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "In sessione secunda necesse est\n"
	.string "studere literaturam at algebram.$"

Ardor_Uni_Office_Text_ConsulEnrolled3::
# 623 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "In sessione tertia necesse est studere\n"
	.string "artes poematis et geometriae.$"

Ardor_Uni_Office_Text_ConsulEnrolled4::
# 627 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "In sessione quarta necesse est\n"
	.string "studere oratum et calculum.$"

Ardor_Uni_Office_Text_FinishGrammar::
# 631 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude grammaticam in cubiculo quinto in\n"
	.string "tabulatione prima.$"

Ardor_Uni_Office_Text_FinishLiterature::
# 635 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude litteraturam in cubiculo quarto\n"
	.string "in tabulatione tertia.$"

Ardor_Uni_Office_Text_FinishPoetry::
# 639 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude poemata in cubiculo sexto in\n"
	.string "tabulatione tertia.$"

Ardor_Uni_Office_Text_FinishRhetoric::
# 643 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude oratum in cubiculo quinto in\n"
	.string "tabulatione tertia.$"

Ardor_Uni_Office_Text_FinishArithmetic::
# 647 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude arithmeticum in cubiculo quarto\n"
	.string "in tabulatione prima.$"

Ardor_Uni_Office_Text_FinishAlgebra::
# 651 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude algebram in cubiculo duo in\n"
	.string "tabulatione secunda.$"

Ardor_Uni_Office_Text_FinishGeometry::
# 655 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude geometriam in cubiculo tertio in\n"
	.string "tabulatione secunda.$"

Ardor_Uni_Office_Text_FinishCalculus::
# 659 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude calculum in cubiculo tertio in\n"
	.string "tabulatione tertia.$"

Ardor_Uni_Office_Text_FinishBiology::
# 663 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude biologiam in cubiculo secundo in\n"
	.string "tabulatione prima.$"

Ardor_Uni_Office_Text_FinishGeology::
# 667 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude geologiam in cubiculo primo in\n"
	.string "tabulatione prima.$"

Ardor_Uni_Office_Text_FinishChemistry::
# 671 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude alchemiam in cubiculo tertio in\n"
	.string "tabulatione prima.$"

Ardor_Uni_Office_Text_FinishPhysics::
# 675 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude physicas in cubiculo secundo in\n"
	.string "tabulatione tertia.$"

Ardor_Uni_Office_Text_FinishHistory::
# 679 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude historiam in cubiculo quarto in\n"
	.string "tabulatione secunda.$"

Ardor_Uni_Office_Text_FinishArchaeology::
# 683 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude archaeologiam in cubiculo quinto\n"
	.string "in tabulatione secunda.$"

Ardor_Uni_Office_Text_FinishPsychology::
# 687 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude psychologiam in cubiculo sexto in\n"
	.string "tabulatione secunda.$"

Ardor_Uni_Office_Text_FinishPhilosophy::
# 691 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude philosophiam in cubiculo primo in\n"
	.string "tabulatione tertia.$"

Ardor_Uni_Office_Text_FinishGym::
# 695 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude gymnasium in campo harpasti\n"
	.string "prope Collegium Ardentem in urbe.$"

Ardor_Uni_Office_Text_FinishArt::
# 699 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude picturam in cubiculo sexto in\n"
	.string "tabulatione prima.$"

Ardor_Uni_Office_Text_FinishMusic::
# 703 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude musicam prope ascensionem in\n"
	.string "tabulatione prima.$"

Ardor_Uni_Office_Text_FinishLogic::
# 707 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Stude logicam in cubiculo primo in\n"
	.string "tabulatione secunda.$"

Ardor_Uni_Office_EventScript_ConsulRegisterNo::
# 711 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Reveni cum lubidine descere. Vale.$"

Ardor_Uni_Office_Text_ConsulRegisterShort::
# 715 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Sacculus parvus est tuus. Reveni cum\n"
	.string "sacculo pleno.$"

Ardor_Uni_Office_Text_ConsulRegisterWelcome::
# 719 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Satis est nummerus tributi tui.\n"
	.string "Congratulatio! Numerus quinque est\l"
	.string "scholas te studere necesse est.\l"
	.string "Latinam, scientiam, artes, homines,\l"
	.string "matematicasque studebis sessione.\l"
	.string "Sessiones quattor diplomam Ardentis\l"
	.string "accipies post.$"

Ardor_Uni_Office_Text_ConsulRegister1::
# 723 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Salve puer, dice sic venisti studere\n"
	.string "Ardente artes. Pretium sessionis\l"
	.string "sestertii mille est. Emesne mille?$"

Ardor_Uni_Office_Text_EnrollScienceIntro::
# 727 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Quam scientiam studebis?$"

Ardor_Uni_Office_Text_EnrollSocialIntro::
# 731 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Quam scientiam societatis studebis?$"

Ardor_Uni_Office_Text_EnrollElectiveIntro::
# 735 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Quam artem otii studebis?$"

Ardor_Uni_Office_Text_GeologyRepeat::
# 739 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Scientem geologiae iam studuisti!\n"
	.string "Necesse semper est artes scientiasque\l"
	.string "studere novas.$"

Ardor_Uni_Office_Text_BiologyRepeat::
# 743 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Scientem biologiae iam studuisti!\n"
	.string "Necesse semper est artes scientiasque\l"
	.string "studere novas.$"

Ardor_Uni_Office_Text_ChemistryRepeat::
# 747 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Scientem alchemiae iam studuisti!\n"
	.string "Necesse semper est artes scientiasque\l"
	.string "studere novas.$"

Ardor_Uni_Office_Text_PhysicsRepeat::
# 751 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Scientem physicarum iam studuisti!\n"
	.string "Necesse semper est artes scientiasque\l"
	.string "studere novas.$"

Ardor_Uni_Office_Text_HistoryRepeat::
# 755 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Historiam iam studuisti! Necesse semper\n"
	.string "est artes scientiasque studere novas.$"

Ardor_Uni_Office_Text_ArchaeologyRepeat::
# 759 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Archaeologiam iam studuisti! Necesse\n"
	.string "semper est artes scientiasque studere\l"
	.string "novas.$"

Ardor_Uni_Office_Text_PsychologyRepeat::
# 763 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Psychologiam iam studuisti! Necesse\n"
	.string "semper est artes scientiasque studere\l"
	.string "novas.$"

Ardor_Uni_Office_Text_PhilosophyRepeat::
# 767 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Philosophiam iam studuisti! Necesse\n"
	.string "semper est artes scientiasque studere\l"
	.string "novas.$"

Ardor_Uni_Office_Text_GymRepeat::
# 771 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Gymnasium iam studuisti! Necesse\n"
	.string "semper est artes scientiasque studere\l"
	.string "novas.$"

Ardor_Uni_Office_Text_ArtRepeat::
# 775 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Artem picturae iam studuisti! Necesse\n"
	.string "semper est artes scientiasque studere\l"
	.string "novas.$"

Ardor_Uni_Office_Text_MusicRepeat::
# 779 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Artem musicae iam studuisti! Necesse\n"
	.string "semper est artes scientiasque studere\l"
	.string "novas.$"

Ardor_Uni_Office_Text_LogicRepeat::
# 783 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Logicam iam studuisti! Necesse semper\n"
	.string "est artes scientiasque studere novas.$"

Ardor_Uni_Office_Text_ChemistryPrereq::
# 787 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Necesse est studere scientiam\n"
	.string "biologiae ante alchemiam.$"

Ardor_Uni_Office_Text_PhysicsPrereq::
# 791 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Necesse est studere scientiam\n"
	.string "alchemiae ante physicas.$"

Ardor_Uni_Office_Text_LogicPrereq::
# 795 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Necesse est studere algebram ante\n"
	.string "logicam.$"

Ardor_Uni_Office_Text_ConsulCongrats::
# 799 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Artes quinque iam studuisti.\n"
	.string "Congratulatio! Sessionem perfecisti.$"

Ardor_Uni_Office_Text_ConsulGradutate::
# 803 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Omnia artes iam studuisti.\n"
	.string "Congratulatio! Collegium Ardentem\l"
	.string "perfecisti! Accipe hoc diploma.$"

Ardor_Uni_Office_Text_ConsulDonated::
# 807 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Gratias tibi ago.$"

Ardor_Uni_Office_Text_ConsulDonate::
# 811 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Salve alumne. Venisti donare?$"

Ardor_Uni_Office_Text_ConsulDonateNo::
# 815 "data/maps/Ardor_Uni_Office/scripts.pory"
	.string "Reveni cum lubidine donare. Vale alumne.$"
