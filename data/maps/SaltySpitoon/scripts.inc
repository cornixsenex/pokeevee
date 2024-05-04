SaltySpitoon_MapScripts::
# 34 "data/maps/SaltySpitoon/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaltySpitoon_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 40 "data/maps/SaltySpitoon/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaltySpitoon_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SaltySpitoon_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 35 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_GANG_STATE, 3
	goto_if_gt SaltySpitoon_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SaltySpitoon_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 36 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_MoveDoorMan
	return

SaltySpitoon_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 41 "data/maps/SaltySpitoon/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 4, SaltySpitoon_EventScript_SetSSVar
	.2byte 0


SaltySpitoon_EventScript_MoveDoorMan::
# 46 "data/maps/SaltySpitoon/scripts.pory"
	setobjectxyperm 20, 20, 3
	return


SaltySpitoon_EventScript_SetSSVar::
# 51 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 44
	end


SaltySpitoon_EventScript_HiLoKabutoTable::
# 56 "data/maps/SaltySpitoon/scripts.pory"
	lock
# 57 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_C, SaltySpitoon_EventScript_HiLoKabutoTable_2
# 62 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_Intro, MSGBOX_YESNO
# 63 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 64 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SaltySpitoon_EventScript_HiLoKabutoTable_5
# 72 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_Goodbye
SaltySpitoon_EventScript_HiLoKabutoTable_1:
# 75 "data/maps/SaltySpitoon/scripts.pory"
	release
	end

SaltySpitoon_EventScript_HiLoKabutoTable_2:
# 58 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_NoGame
# 59 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
	goto SaltySpitoon_EventScript_HiLoKabutoTable_1

SaltySpitoon_EventScript_HiLoKabutoTable_5:
# 66 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_DescribeGame
# 67 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 69 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_GetWager
	goto SaltySpitoon_EventScript_HiLoKabutoTable_1


SaltySpitoon_EventScript_HiLoKabuto_Goodbye::
# 80 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_Goodbye
# 81 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 82 "data/maps/SaltySpitoon/scripts.pory"
	release
	end


SaltySpitoon_EventScript_HiLoKabuto_GetWager::
# 88 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_TEMP_F, 0
# 89 "data/maps/SaltySpitoon/scripts.pory"
	showmoneybox 17, 0
# 90 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_GetWager
# 91 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 92 "data/maps/SaltySpitoon/scripts.pory"
	multichoice 0, 0, MULTI_SALTYSPITOON_GET_WAGER, TRUE
# 93 "data/maps/SaltySpitoon/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 94 "data/maps/SaltySpitoon/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/SaltySpitoon/scripts.pory"
	case 0, SaltySpitoon_EventScript_HiLoKabuto_GetWager_3
# 111 "data/maps/SaltySpitoon/scripts.pory"
	case 1, SaltySpitoon_EventScript_HiLoKabuto_GetWager_4
# 126 "data/maps/SaltySpitoon/scripts.pory"
	case 2, SaltySpitoon_EventScript_HiLoKabuto_GetWager_5
# 141 "data/maps/SaltySpitoon/scripts.pory"
	case 3, SaltySpitoon_EventScript_HiLoKabuto_GetWager_6
# 156 "data/maps/SaltySpitoon/scripts.pory"
	case 4, SaltySpitoon_EventScript_HiLoKabuto_GetWager_7
# 171 "data/maps/SaltySpitoon/scripts.pory"
	case 5, SaltySpitoon_EventScript_HiLoKabuto_GetWager_8
# 186 "data/maps/SaltySpitoon/scripts.pory"
	case 6, SaltySpitoon_EventScript_HiLoKabuto_GetWager_9
SaltySpitoon_EventScript_HiLoKabuto_GetWager_1:
	return

SaltySpitoon_EventScript_HiLoKabuto_GetWager_3:
# 97 "data/maps/SaltySpitoon/scripts.pory"
	checkmoney 1
# 98 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_GetWager_10
# 106 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 107 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 108 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 109 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_GetWager
	goto SaltySpitoon_EventScript_HiLoKabuto_GetWager_1

SaltySpitoon_EventScript_HiLoKabuto_GetWager_4:
# 112 "data/maps/SaltySpitoon/scripts.pory"
	checkmoney 10
# 113 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_GetWager_13
# 121 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 122 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 123 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 124 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_GetWager
	goto SaltySpitoon_EventScript_HiLoKabuto_GetWager_1

SaltySpitoon_EventScript_HiLoKabuto_GetWager_5:
# 127 "data/maps/SaltySpitoon/scripts.pory"
	checkmoney 100
# 128 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_GetWager_16
# 136 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 137 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 138 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 139 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_GetWager
	goto SaltySpitoon_EventScript_HiLoKabuto_GetWager_1

SaltySpitoon_EventScript_HiLoKabuto_GetWager_6:
# 142 "data/maps/SaltySpitoon/scripts.pory"
	checkmoney 1000
# 143 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_GetWager_19
# 151 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 152 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 153 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 154 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_GetWager
	goto SaltySpitoon_EventScript_HiLoKabuto_GetWager_1

SaltySpitoon_EventScript_HiLoKabuto_GetWager_7:
# 157 "data/maps/SaltySpitoon/scripts.pory"
	checkmoney 10000
# 158 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_GetWager_22
# 166 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 167 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 168 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 169 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_GetWager
	goto SaltySpitoon_EventScript_HiLoKabuto_GetWager_1

SaltySpitoon_EventScript_HiLoKabuto_GetWager_8:
# 172 "data/maps/SaltySpitoon/scripts.pory"
	checkmoney 100000
# 173 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_GetWager_25
# 181 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 182 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_WagerPoor
# 183 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 184 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_GetWager
	goto SaltySpitoon_EventScript_HiLoKabuto_GetWager_1

SaltySpitoon_EventScript_HiLoKabuto_GetWager_9:
# 187 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 188 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_Goodbye
	goto SaltySpitoon_EventScript_HiLoKabuto_GetWager_1

SaltySpitoon_EventScript_HiLoKabuto_GetWager_10:
# 99 "data/maps/SaltySpitoon/scripts.pory"
	removemoney 1
# 100 "data/maps/SaltySpitoon/scripts.pory"
	updatemoneybox
# 101 "data/maps/SaltySpitoon/scripts.pory"
	playse SE_SHOP
# 102 "data/maps/SaltySpitoon/scripts.pory"
	waitse
# 103 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 104 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_Brain
	goto SaltySpitoon_EventScript_HiLoKabuto_GetWager_1

SaltySpitoon_EventScript_HiLoKabuto_GetWager_13:
# 114 "data/maps/SaltySpitoon/scripts.pory"
	removemoney 10
# 115 "data/maps/SaltySpitoon/scripts.pory"
	updatemoneybox
# 116 "data/maps/SaltySpitoon/scripts.pory"
	playse SE_SHOP
# 117 "data/maps/SaltySpitoon/scripts.pory"
	waitse
# 118 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 119 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_Brain
	goto SaltySpitoon_EventScript_HiLoKabuto_GetWager_1

SaltySpitoon_EventScript_HiLoKabuto_GetWager_16:
# 129 "data/maps/SaltySpitoon/scripts.pory"
	removemoney 100
# 130 "data/maps/SaltySpitoon/scripts.pory"
	updatemoneybox
# 131 "data/maps/SaltySpitoon/scripts.pory"
	playse SE_SHOP
# 132 "data/maps/SaltySpitoon/scripts.pory"
	waitse
# 133 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 134 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_Brain
	goto SaltySpitoon_EventScript_HiLoKabuto_GetWager_1

SaltySpitoon_EventScript_HiLoKabuto_GetWager_19:
# 144 "data/maps/SaltySpitoon/scripts.pory"
	removemoney 1000
# 145 "data/maps/SaltySpitoon/scripts.pory"
	updatemoneybox
# 146 "data/maps/SaltySpitoon/scripts.pory"
	playse SE_SHOP
# 147 "data/maps/SaltySpitoon/scripts.pory"
	waitse
# 148 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 149 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_Brain
	goto SaltySpitoon_EventScript_HiLoKabuto_GetWager_1

SaltySpitoon_EventScript_HiLoKabuto_GetWager_22:
# 159 "data/maps/SaltySpitoon/scripts.pory"
	removemoney 10000
# 160 "data/maps/SaltySpitoon/scripts.pory"
	updatemoneybox
# 161 "data/maps/SaltySpitoon/scripts.pory"
	playse SE_SHOP
# 162 "data/maps/SaltySpitoon/scripts.pory"
	waitse
# 163 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 164 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_Brain
	goto SaltySpitoon_EventScript_HiLoKabuto_GetWager_1

SaltySpitoon_EventScript_HiLoKabuto_GetWager_25:
# 174 "data/maps/SaltySpitoon/scripts.pory"
	removemoney 100000
# 175 "data/maps/SaltySpitoon/scripts.pory"
	updatemoneybox
# 176 "data/maps/SaltySpitoon/scripts.pory"
	playse SE_SHOP
# 177 "data/maps/SaltySpitoon/scripts.pory"
	waitse
# 178 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 179 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_Brain
	goto SaltySpitoon_EventScript_HiLoKabuto_GetWager_1


SaltySpitoon_EventScript_HiLoKabuto_Brain::
# 196 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_Reset
# 199 "data/maps/SaltySpitoon/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 200 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt SaltySpitoon_EventScript_HiLoKabuto_Brain_2
# 203 "data/maps/SaltySpitoon/scripts.pory"
	clearflag FLAG_TEMP_B
SaltySpitoon_EventScript_HiLoKabuto_Brain_1:
# 208 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_B, SaltySpitoon_EventScript_HiLoKabuto_Brain_6
# 211 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_KabutoLo
SaltySpitoon_EventScript_HiLoKabuto_Brain_5:
# 213 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 218 "data/maps/SaltySpitoon/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 219 "data/maps/SaltySpitoon/scripts.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 220 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_TakeCard
SaltySpitoon_EventScript_HiLoKabuto_Brain_11:
# 224 "data/maps/SaltySpitoon/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 225 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_A
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_11
# 226 "data/maps/SaltySpitoon/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 227 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_TakeCard
SaltySpitoon_EventScript_HiLoKabuto_Brain_15:
# 231 "data/maps/SaltySpitoon/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 232 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_A
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_15
# 232 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_B
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_15
# 233 "data/maps/SaltySpitoon/scripts.pory"
	copyvar VAR_TEMP_C, VAR_RESULT
# 234 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_TakeCard
SaltySpitoon_EventScript_HiLoKabuto_Brain_21:
# 238 "data/maps/SaltySpitoon/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 239 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_A
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_21
# 239 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_B
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_21
# 239 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_C
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_21
# 240 "data/maps/SaltySpitoon/scripts.pory"
	copyvar VAR_TEMP_D, VAR_RESULT
# 241 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_TakeCard
SaltySpitoon_EventScript_HiLoKabuto_Brain_29:
# 245 "data/maps/SaltySpitoon/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 246 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_A
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_29
# 246 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_B
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_29
# 246 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_C
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_29
# 246 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_D
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_29
# 247 "data/maps/SaltySpitoon/scripts.pory"
	copyvar VAR_TEMP_E, VAR_RESULT
# 248 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_TakeCard
# 251 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_39
SaltySpitoon_EventScript_HiLoKabuto_Brain_37:
# 254 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_44
SaltySpitoon_EventScript_HiLoKabuto_Brain_42:
# 257 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, 0
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_49
SaltySpitoon_EventScript_HiLoKabuto_Brain_47:
# 260 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, 0
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_54
SaltySpitoon_EventScript_HiLoKabuto_Brain_52:
# 263 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_59
SaltySpitoon_EventScript_HiLoKabuto_Brain_57:
# 268 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_unset FLAG_TEMP_B, SaltySpitoon_EventScript_HiLoKabuto_Brain_63
SaltySpitoon_EventScript_HiLoKabuto_Brain_62:
# 286 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_1, SaltySpitoon_EventScript_HiLoKabuto_Brain_66
SaltySpitoon_EventScript_HiLoKabuto_Brain_65:
# 302 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_2, SaltySpitoon_EventScript_HiLoKabuto_Brain_71
SaltySpitoon_EventScript_HiLoKabuto_Brain_70:
# 318 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_3, SaltySpitoon_EventScript_HiLoKabuto_Brain_96
SaltySpitoon_EventScript_HiLoKabuto_Brain_95:
# 334 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_4, SaltySpitoon_EventScript_HiLoKabuto_Brain_110
SaltySpitoon_EventScript_HiLoKabuto_Brain_109:
# 350 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_5, SaltySpitoon_EventScript_HiLoKabuto_Brain_124
SaltySpitoon_EventScript_HiLoKabuto_Brain_123:
# 366 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_6, SaltySpitoon_EventScript_HiLoKabuto_Brain_138
SaltySpitoon_EventScript_HiLoKabuto_Brain_137:
# 382 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_7, SaltySpitoon_EventScript_HiLoKabuto_Brain_152
SaltySpitoon_EventScript_HiLoKabuto_Brain_151:
# 398 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_8, SaltySpitoon_EventScript_HiLoKabuto_Brain_166
SaltySpitoon_EventScript_HiLoKabuto_Brain_165:
# 414 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_9, SaltySpitoon_EventScript_HiLoKabuto_Brain_180
SaltySpitoon_EventScript_HiLoKabuto_Brain_179:
# 430 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_B, SaltySpitoon_EventScript_HiLoKabuto_Brain_194
SaltySpitoon_EventScript_HiLoKabuto_Brain_193:
# 447 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 452 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_B
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_242
SaltySpitoon_EventScript_HiLoKabuto_Brain_236:
# 456 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_235
SaltySpitoon_EventScript_HiLoKabuto_Brain_229:
# 460 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_A
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_228
SaltySpitoon_EventScript_HiLoKabuto_Brain_222:
# 464 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, VAR_TEMP_A
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_221
SaltySpitoon_EventScript_HiLoKabuto_Brain_215:
# 468 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_A
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_214
SaltySpitoon_EventScript_HiLoKabuto_Brain_212:
# 473 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_71
# 474 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
	return

SaltySpitoon_EventScript_HiLoKabuto_Brain_2:
# 201 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_TEMP_B
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_1

SaltySpitoon_EventScript_HiLoKabuto_Brain_6:
# 209 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_KabutoHi
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_5

SaltySpitoon_EventScript_HiLoKabuto_Brain_38:
# 252 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_TEMP_A, 10
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_37

SaltySpitoon_EventScript_HiLoKabuto_Brain_39:
# 251 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_B, SaltySpitoon_EventScript_HiLoKabuto_Brain_38
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_37

SaltySpitoon_EventScript_HiLoKabuto_Brain_43:
# 255 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_TEMP_B, 10
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_42

SaltySpitoon_EventScript_HiLoKabuto_Brain_44:
# 254 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_B, SaltySpitoon_EventScript_HiLoKabuto_Brain_43
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_42

SaltySpitoon_EventScript_HiLoKabuto_Brain_48:
# 258 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_TEMP_C, 10
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_47

SaltySpitoon_EventScript_HiLoKabuto_Brain_49:
# 257 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_B, SaltySpitoon_EventScript_HiLoKabuto_Brain_48
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_47

SaltySpitoon_EventScript_HiLoKabuto_Brain_53:
# 261 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_TEMP_D, 10
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_52

SaltySpitoon_EventScript_HiLoKabuto_Brain_54:
# 260 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_B, SaltySpitoon_EventScript_HiLoKabuto_Brain_53
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_52

SaltySpitoon_EventScript_HiLoKabuto_Brain_58:
# 264 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_TEMP_E, 10
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_57

SaltySpitoon_EventScript_HiLoKabuto_Brain_59:
# 263 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_B, SaltySpitoon_EventScript_HiLoKabuto_Brain_58
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_57

SaltySpitoon_EventScript_HiLoKabuto_Brain_63:
# 269 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_A, SaltySpitoon_EventScript_HiLoKabuto_Brain_68
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_62

SaltySpitoon_EventScript_HiLoKabuto_Brain_66:
# 287 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_73
# 289 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_74
# 291 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, 1
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_75
# 293 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_76
# 295 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_77
# 298 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_11
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_65

SaltySpitoon_EventScript_HiLoKabuto_Brain_68:
# 270 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_84
# 272 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_85
# 274 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, 0
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_86
# 276 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, 0
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_87
# 278 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_88
# 281 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_5
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_62

SaltySpitoon_EventScript_HiLoKabuto_Brain_71:
# 303 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_98
# 305 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_99
# 307 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, 2
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_100
# 309 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_101
# 311 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, 2
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_102
# 314 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_17
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_70

SaltySpitoon_EventScript_HiLoKabuto_Brain_73:
# 288 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_6
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_65

SaltySpitoon_EventScript_HiLoKabuto_Brain_74:
# 290 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_7
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_65

SaltySpitoon_EventScript_HiLoKabuto_Brain_75:
# 292 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_8
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_65

SaltySpitoon_EventScript_HiLoKabuto_Brain_76:
# 294 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_9
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_65

SaltySpitoon_EventScript_HiLoKabuto_Brain_77:
# 296 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_10
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_65

SaltySpitoon_EventScript_HiLoKabuto_Brain_84:
# 271 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_0
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_62

SaltySpitoon_EventScript_HiLoKabuto_Brain_85:
# 273 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_1
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_62

SaltySpitoon_EventScript_HiLoKabuto_Brain_86:
# 275 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_2
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_62

SaltySpitoon_EventScript_HiLoKabuto_Brain_87:
# 277 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_3
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_62

SaltySpitoon_EventScript_HiLoKabuto_Brain_88:
# 279 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_4
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_62

SaltySpitoon_EventScript_HiLoKabuto_Brain_96:
# 319 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, 3
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_112
# 321 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, 3
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_113
# 323 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, 3
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_114
# 325 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, 3
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_115
# 327 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, 3
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_116
# 330 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_23
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_95

SaltySpitoon_EventScript_HiLoKabuto_Brain_98:
# 304 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_12
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_70

SaltySpitoon_EventScript_HiLoKabuto_Brain_99:
# 306 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_13
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_70

SaltySpitoon_EventScript_HiLoKabuto_Brain_100:
# 308 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_14
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_70

SaltySpitoon_EventScript_HiLoKabuto_Brain_101:
# 310 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_15
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_70

SaltySpitoon_EventScript_HiLoKabuto_Brain_102:
# 312 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_16
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_70

SaltySpitoon_EventScript_HiLoKabuto_Brain_110:
# 335 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, 4
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_126
# 337 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_127
# 339 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, 4
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_128
# 341 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, 4
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_129
# 343 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, 4
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_130
# 346 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_29
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_109

SaltySpitoon_EventScript_HiLoKabuto_Brain_112:
# 320 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_18
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_95

SaltySpitoon_EventScript_HiLoKabuto_Brain_113:
# 322 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_19
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_95

SaltySpitoon_EventScript_HiLoKabuto_Brain_114:
# 324 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_20
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_95

SaltySpitoon_EventScript_HiLoKabuto_Brain_115:
# 326 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_21
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_95

SaltySpitoon_EventScript_HiLoKabuto_Brain_116:
# 328 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_22
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_95

SaltySpitoon_EventScript_HiLoKabuto_Brain_124:
# 351 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, 5
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_140
# 353 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, 5
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_141
# 355 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, 5
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_142
# 357 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, 5
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_143
# 359 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, 5
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_144
# 362 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_35
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_123

SaltySpitoon_EventScript_HiLoKabuto_Brain_126:
# 336 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_24
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_109

SaltySpitoon_EventScript_HiLoKabuto_Brain_127:
# 338 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_25
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_109

SaltySpitoon_EventScript_HiLoKabuto_Brain_128:
# 340 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_26
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_109

SaltySpitoon_EventScript_HiLoKabuto_Brain_129:
# 342 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_27
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_109

SaltySpitoon_EventScript_HiLoKabuto_Brain_130:
# 344 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_28
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_109

SaltySpitoon_EventScript_HiLoKabuto_Brain_138:
# 367 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, 6
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_154
# 369 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, 6
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_155
# 371 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, 6
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_156
# 373 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, 6
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_157
# 375 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, 6
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_158
# 378 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_41
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_137

SaltySpitoon_EventScript_HiLoKabuto_Brain_140:
# 352 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_30
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_123

SaltySpitoon_EventScript_HiLoKabuto_Brain_141:
# 354 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_31
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_123

SaltySpitoon_EventScript_HiLoKabuto_Brain_142:
# 356 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_32
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_123

SaltySpitoon_EventScript_HiLoKabuto_Brain_143:
# 358 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_33
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_123

SaltySpitoon_EventScript_HiLoKabuto_Brain_144:
# 360 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_34
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_123

SaltySpitoon_EventScript_HiLoKabuto_Brain_152:
# 383 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, 7
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_168
# 385 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_169
# 387 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, 7
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_170
# 389 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, 7
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_171
# 391 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, 7
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_172
# 394 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_47
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_151

SaltySpitoon_EventScript_HiLoKabuto_Brain_154:
# 368 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_36
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_137

SaltySpitoon_EventScript_HiLoKabuto_Brain_155:
# 370 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_37
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_137

SaltySpitoon_EventScript_HiLoKabuto_Brain_156:
# 372 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_38
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_137

SaltySpitoon_EventScript_HiLoKabuto_Brain_157:
# 374 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_39
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_137

SaltySpitoon_EventScript_HiLoKabuto_Brain_158:
# 376 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_40
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_137

SaltySpitoon_EventScript_HiLoKabuto_Brain_166:
# 399 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, 8
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_182
# 401 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_183
# 403 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, 8
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_184
# 405 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, 8
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_185
# 407 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, 8
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_186
# 410 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_53
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_165

SaltySpitoon_EventScript_HiLoKabuto_Brain_168:
# 384 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_42
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_151

SaltySpitoon_EventScript_HiLoKabuto_Brain_169:
# 386 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_43
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_151

SaltySpitoon_EventScript_HiLoKabuto_Brain_170:
# 388 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_44
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_151

SaltySpitoon_EventScript_HiLoKabuto_Brain_171:
# 390 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_45
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_151

SaltySpitoon_EventScript_HiLoKabuto_Brain_172:
# 392 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_46
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_151

SaltySpitoon_EventScript_HiLoKabuto_Brain_180:
# 415 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, 9
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_196
# 417 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, 9
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_197
# 419 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, 9
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_198
# 421 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, 9
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_199
# 423 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, 9
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_200
# 426 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_59
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_179

SaltySpitoon_EventScript_HiLoKabuto_Brain_182:
# 400 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_48
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_165

SaltySpitoon_EventScript_HiLoKabuto_Brain_183:
# 402 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_49
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_165

SaltySpitoon_EventScript_HiLoKabuto_Brain_184:
# 404 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_50
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_165

SaltySpitoon_EventScript_HiLoKabuto_Brain_185:
# 406 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_51
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_165

SaltySpitoon_EventScript_HiLoKabuto_Brain_186:
# 408 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_52
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_165

SaltySpitoon_EventScript_HiLoKabuto_Brain_194:
# 431 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_set FLAG_TEMP_A, SaltySpitoon_EventScript_HiLoKabuto_Brain_248
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_193

SaltySpitoon_EventScript_HiLoKabuto_Brain_196:
# 416 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_54
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_179

SaltySpitoon_EventScript_HiLoKabuto_Brain_197:
# 418 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_55
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_179

SaltySpitoon_EventScript_HiLoKabuto_Brain_198:
# 420 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_56
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_179

SaltySpitoon_EventScript_HiLoKabuto_Brain_199:
# 422 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_57
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_179

SaltySpitoon_EventScript_HiLoKabuto_Brain_200:
# 424 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_58
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_179

SaltySpitoon_EventScript_HiLoKabuto_Brain_207:
# 453 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_66
# 454 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_PlayerLost
	return

SaltySpitoon_EventScript_HiLoKabuto_Brain_208:
# 457 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_67
# 458 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_PlayerLost
	return

SaltySpitoon_EventScript_HiLoKabuto_Brain_209:
# 461 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_68
# 462 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_PlayerLost
	return

SaltySpitoon_EventScript_HiLoKabuto_Brain_210:
# 465 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_69
# 466 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_PlayerLost
	return

SaltySpitoon_EventScript_HiLoKabuto_Brain_211:
# 469 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_70
# 470 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_PlayerWon
	return

SaltySpitoon_EventScript_HiLoKabuto_Brain_213:
# 468 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_C
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_217
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_212

SaltySpitoon_EventScript_HiLoKabuto_Brain_214:
# 468 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_B
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_213
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_212

SaltySpitoon_EventScript_HiLoKabuto_Brain_217:
# 468 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, VAR_TEMP_D
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_211
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_212

SaltySpitoon_EventScript_HiLoKabuto_Brain_220:
# 464 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, VAR_TEMP_C
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_224
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_215

SaltySpitoon_EventScript_HiLoKabuto_Brain_221:
# 464 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, VAR_TEMP_B
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_220
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_215

SaltySpitoon_EventScript_HiLoKabuto_Brain_224:
# 464 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, VAR_TEMP_E
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_210
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_215

SaltySpitoon_EventScript_HiLoKabuto_Brain_227:
# 460 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_D
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_231
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_222

SaltySpitoon_EventScript_HiLoKabuto_Brain_228:
# 460 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_B
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_227
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_222

SaltySpitoon_EventScript_HiLoKabuto_Brain_231:
# 460 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, VAR_TEMP_E
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_209
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_222

SaltySpitoon_EventScript_HiLoKabuto_Brain_234:
# 456 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_D
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_238
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_229

SaltySpitoon_EventScript_HiLoKabuto_Brain_235:
# 456 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_C
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_234
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_229

SaltySpitoon_EventScript_HiLoKabuto_Brain_238:
# 456 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_E
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_208
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_229

SaltySpitoon_EventScript_HiLoKabuto_Brain_241:
# 452 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_D
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_245
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_236

SaltySpitoon_EventScript_HiLoKabuto_Brain_242:
# 452 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_C
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_241
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_236

SaltySpitoon_EventScript_HiLoKabuto_Brain_245:
# 452 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, VAR_TEMP_E
	goto_if_gt SaltySpitoon_EventScript_HiLoKabuto_Brain_207
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_236

SaltySpitoon_EventScript_HiLoKabuto_Brain_248:
# 432 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_A, 10
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_250
# 434 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_B, 10
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_251
# 436 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_C, 10
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_252
# 438 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_D, 10
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_253
# 440 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_E, 10
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_Brain_254
# 443 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_65
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_193

SaltySpitoon_EventScript_HiLoKabuto_Brain_250:
# 433 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_60
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_193

SaltySpitoon_EventScript_HiLoKabuto_Brain_251:
# 435 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_61
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_193

SaltySpitoon_EventScript_HiLoKabuto_Brain_252:
# 437 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_62
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_193

SaltySpitoon_EventScript_HiLoKabuto_Brain_253:
# 439 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_63
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_193

SaltySpitoon_EventScript_HiLoKabuto_Brain_254:
# 441 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_64
	goto SaltySpitoon_EventScript_HiLoKabuto_Brain_193


SaltySpitoon_EventScript_HiLoKabuto_PlayerLost::
# 480 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_YouLost
# 481 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 482 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_TEMP_9, 0
# 483 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_PlayAgain
	return


SaltySpitoon_EventScript_HiLoKabuto_PlayerWon::
# 487 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_TEMP_9, VAR_TEMP_9 + 1
# 488 "data/maps/SaltySpitoon/scripts.pory"
	showmoneybox 0, 0
# 489 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_YouWon
# 490 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 492 "data/maps/SaltySpitoon/scripts.pory"
	switch VAR_TEMP_F
# 493 "data/maps/SaltySpitoon/scripts.pory"
	case 0, SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_3
# 495 "data/maps/SaltySpitoon/scripts.pory"
	case 1, SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_4
# 497 "data/maps/SaltySpitoon/scripts.pory"
	case 2, SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_5
# 499 "data/maps/SaltySpitoon/scripts.pory"
	case 3, SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_6
# 501 "data/maps/SaltySpitoon/scripts.pory"
	case 4, SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_7
# 503 "data/maps/SaltySpitoon/scripts.pory"
	case 5, SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_8
# 506 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_Text_0
# 507 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_1:
# 509 "data/maps/SaltySpitoon/scripts.pory"
	updatemoneybox
# 510 "data/maps/SaltySpitoon/scripts.pory"
	playse SE_SHOP
# 511 "data/maps/SaltySpitoon/scripts.pory"
	waitse
# 512 "data/maps/SaltySpitoon/scripts.pory"
	hidemoneybox
# 513 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_TEMP_9, 1
	goto_if_ge SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_10
# 516 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_PlayAgain
	return

SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_3:
# 494 "data/maps/SaltySpitoon/scripts.pory"
	addmoney 5
	goto SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_1

SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_4:
# 496 "data/maps/SaltySpitoon/scripts.pory"
	addmoney 50
	goto SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_1

SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_5:
# 498 "data/maps/SaltySpitoon/scripts.pory"
	addmoney 500
	goto SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_1

SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_6:
# 500 "data/maps/SaltySpitoon/scripts.pory"
	addmoney 5000
	goto SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_1

SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_7:
# 502 "data/maps/SaltySpitoon/scripts.pory"
	addmoney 50000
	goto SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_1

SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_8:
# 504 "data/maps/SaltySpitoon/scripts.pory"
	addmoney 500000
	goto SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_1

SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_10:
# 514 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_Fight
	return


SaltySpitoon_EventScript_HiLoKabuto_Fight::
# 521 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_TEMP_C
# 522 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_Fight
# 524 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 525 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_HILOKABUTO
# 526 "data/maps/SaltySpitoon/scripts.pory"
	special DoSpecialTrainerBattle
# 527 "data/maps/SaltySpitoon/scripts.pory"
	waitstate
# 528 "data/maps/SaltySpitoon/scripts.pory"
	release
	end


SaltySpitoon_EventScript_ReeseTrainer::
# 533 "data/maps/SaltySpitoon/scripts.pory"
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_REESE, 0, SaltySpitoon_Text_ReeseLost, SaltySpitoon_Text_ReeseLost
	end


SaltySpitoon_EventScript_JohnTrainer::
# 538 "data/maps/SaltySpitoon/scripts.pory"
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_JOHN, 0, SaltySpitoon_Text_JohnLost, SaltySpitoon_Text_JohnLost
	end


SaltySpitoon_EventScript_HiLoKabuto_PlayAgain::
# 543 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_HiLoKabuto_PlayAgain, MSGBOX_YESNO
# 544 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 545 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SaltySpitoon_EventScript_HiLoKabuto_PlayAgain_1
# 548 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_Goodbye
	return

SaltySpitoon_EventScript_HiLoKabuto_PlayAgain_1:
# 546 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_HiLoKabuto_GetWager
	return


SaltySpitoon_EventScript_HiLoKabuto_Reset::
# 553 "data/maps/SaltySpitoon/scripts.pory"
	clearflag FLAG_TEMP_1
# 554 "data/maps/SaltySpitoon/scripts.pory"
	clearflag FLAG_TEMP_2
# 555 "data/maps/SaltySpitoon/scripts.pory"
	clearflag FLAG_TEMP_3
# 556 "data/maps/SaltySpitoon/scripts.pory"
	clearflag FLAG_TEMP_4
# 557 "data/maps/SaltySpitoon/scripts.pory"
	clearflag FLAG_TEMP_5
# 558 "data/maps/SaltySpitoon/scripts.pory"
	clearflag FLAG_TEMP_6
# 559 "data/maps/SaltySpitoon/scripts.pory"
	clearflag FLAG_TEMP_7
# 560 "data/maps/SaltySpitoon/scripts.pory"
	clearflag FLAG_TEMP_8
# 561 "data/maps/SaltySpitoon/scripts.pory"
	clearflag FLAG_TEMP_9
# 562 "data/maps/SaltySpitoon/scripts.pory"
	clearflag FLAG_TEMP_A
# 563 "data/maps/SaltySpitoon/scripts.pory"
	clearflag FLAG_TEMP_B
# 564 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_TEMP_A, 0
# 565 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_TEMP_B, 0
# 566 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_TEMP_C, 0
# 567 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_TEMP_D, 0
# 568 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_TEMP_E, 0
	return


SaltySpitoon_EventScript_HiLoKabuto_TakeCard::
# 573 "data/maps/SaltySpitoon/scripts.pory"
	switch VAR_RESULT
# 574 "data/maps/SaltySpitoon/scripts.pory"
	case 0, SaltySpitoon_EventScript_HiLoKabuto_TakeCard_3
# 576 "data/maps/SaltySpitoon/scripts.pory"
	case 1, SaltySpitoon_EventScript_HiLoKabuto_TakeCard_4
# 578 "data/maps/SaltySpitoon/scripts.pory"
	case 2, SaltySpitoon_EventScript_HiLoKabuto_TakeCard_5
# 580 "data/maps/SaltySpitoon/scripts.pory"
	case 3, SaltySpitoon_EventScript_HiLoKabuto_TakeCard_6
# 582 "data/maps/SaltySpitoon/scripts.pory"
	case 4, SaltySpitoon_EventScript_HiLoKabuto_TakeCard_7
# 584 "data/maps/SaltySpitoon/scripts.pory"
	case 5, SaltySpitoon_EventScript_HiLoKabuto_TakeCard_8
# 586 "data/maps/SaltySpitoon/scripts.pory"
	case 6, SaltySpitoon_EventScript_HiLoKabuto_TakeCard_9
# 588 "data/maps/SaltySpitoon/scripts.pory"
	case 7, SaltySpitoon_EventScript_HiLoKabuto_TakeCard_10
# 590 "data/maps/SaltySpitoon/scripts.pory"
	case 8, SaltySpitoon_EventScript_HiLoKabuto_TakeCard_11
# 592 "data/maps/SaltySpitoon/scripts.pory"
	case 9, SaltySpitoon_EventScript_HiLoKabuto_TakeCard_12
SaltySpitoon_EventScript_HiLoKabuto_TakeCard_1:
	return

SaltySpitoon_EventScript_HiLoKabuto_TakeCard_3:
# 575 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_TEMP_A
	goto SaltySpitoon_EventScript_HiLoKabuto_TakeCard_1

SaltySpitoon_EventScript_HiLoKabuto_TakeCard_4:
# 577 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_TEMP_1
	goto SaltySpitoon_EventScript_HiLoKabuto_TakeCard_1

SaltySpitoon_EventScript_HiLoKabuto_TakeCard_5:
# 579 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_TEMP_2
	goto SaltySpitoon_EventScript_HiLoKabuto_TakeCard_1

SaltySpitoon_EventScript_HiLoKabuto_TakeCard_6:
# 581 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_TEMP_3
	goto SaltySpitoon_EventScript_HiLoKabuto_TakeCard_1

SaltySpitoon_EventScript_HiLoKabuto_TakeCard_7:
# 583 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_TEMP_4
	goto SaltySpitoon_EventScript_HiLoKabuto_TakeCard_1

SaltySpitoon_EventScript_HiLoKabuto_TakeCard_8:
# 585 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_TEMP_5
	goto SaltySpitoon_EventScript_HiLoKabuto_TakeCard_1

SaltySpitoon_EventScript_HiLoKabuto_TakeCard_9:
# 587 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_TEMP_6
	goto SaltySpitoon_EventScript_HiLoKabuto_TakeCard_1

SaltySpitoon_EventScript_HiLoKabuto_TakeCard_10:
# 589 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_TEMP_7
	goto SaltySpitoon_EventScript_HiLoKabuto_TakeCard_1

SaltySpitoon_EventScript_HiLoKabuto_TakeCard_11:
# 591 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_TEMP_8
	goto SaltySpitoon_EventScript_HiLoKabuto_TakeCard_1

SaltySpitoon_EventScript_HiLoKabuto_TakeCard_12:
# 593 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_TEMP_9
	goto SaltySpitoon_EventScript_HiLoKabuto_TakeCard_1


SaltySpitoon_EventScript_Bartender::
# 601 "data/maps/SaltySpitoon/scripts.pory"
	lock
# 602 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_Bartender1
# 603 "data/maps/SaltySpitoon/scripts.pory"
	waitmessage
# 604 "data/maps/SaltySpitoon/scripts.pory"
	pokemart SaltySpitoon_Mart_Bartender
# 605 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_Bartender2
# 606 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 607 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_unset FLAG_SALTYSPITOON_BRAWL, SaltySpitoon_EventScript_Bartender_2
SaltySpitoon_EventScript_Bartender_1:
	end

SaltySpitoon_EventScript_Bartender_2:
# 608 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_CantinaBrawl
	goto SaltySpitoon_EventScript_Bartender_1


SaltySpitoon_EventScript_CantinaBrawl::
# 614 "data/maps/SaltySpitoon/scripts.pory"
	applymovement 17, Common_Movement_FaceRight
# 615 "data/maps/SaltySpitoon/scripts.pory"
	applymovement 18, Common_Movement_FaceLeft
# 616 "data/maps/SaltySpitoon/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 617 "data/maps/SaltySpitoon/scripts.pory"
	waitmovement 0
# 618 "data/maps/SaltySpitoon/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 619 "data/maps/SaltySpitoon/scripts.pory"
	waitmovement 0
# 620 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_EvazanIntro
# 621 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 622 "data/maps/SaltySpitoon/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 623 "data/maps/SaltySpitoon/scripts.pory"
	waitmovement 0
# 624 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_PondaBabuIntro
# 625 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 626 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_CANTINA_BRAWL
# 627 "data/maps/SaltySpitoon/scripts.pory"
	special DoSpecialTrainerBattle
# 628 "data/maps/SaltySpitoon/scripts.pory"
	waitstate
# 629 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_SALTYSPITOON_BRAWL
	return


SaltySpitoon_EventScript_EvazanTrainer::
# 634 "data/maps/SaltySpitoon/scripts.pory"
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_EVAZAN, 0, SaltySpitoon_Text_EvazanLost, SaltySpitoon_Text_EvazanLost
	end


SaltySpitoon_EventScript_PondaBabuTrainer::
# 639 "data/maps/SaltySpitoon/scripts.pory"
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_PONDA_BABU, 0, SaltySpitoon_Text_PondaBabuLost, SaltySpitoon_Text_PondaBabuLost
	end


SaltySpitoon_EventScript_PondaBabu::
# 644 "data/maps/SaltySpitoon/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 646 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SaltySpitoon_EventScript_PondaBabu_4
SaltySpitoon_EventScript_PondaBabu_3:
# 649 "data/maps/SaltySpitoon/scripts.pory"
	faceplayer
# 650 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_PondaBabuPost
# 651 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 652 "data/maps/SaltySpitoon/scripts.pory"
	applymovement 18, Common_Movement_FaceUp
# 653 "data/maps/SaltySpitoon/scripts.pory"
	waitmovement 0
SaltySpitoon_EventScript_PondaBabu_1:
	end

SaltySpitoon_EventScript_PondaBabu_2:
# 647 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_CantinaBrawl
	goto SaltySpitoon_EventScript_PondaBabu_1

SaltySpitoon_EventScript_PondaBabu_4:
# 646 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_unset FLAG_SALTYSPITOON_BRAWL, SaltySpitoon_EventScript_PondaBabu_2
	goto SaltySpitoon_EventScript_PondaBabu_3


SaltySpitoon_EventScript_Evazan::
# 659 "data/maps/SaltySpitoon/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 661 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SaltySpitoon_EventScript_Evazan_4
SaltySpitoon_EventScript_Evazan_3:
# 664 "data/maps/SaltySpitoon/scripts.pory"
	faceplayer
# 665 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_EvazanPost
# 666 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 667 "data/maps/SaltySpitoon/scripts.pory"
	applymovement 17, Common_Movement_FaceUp
# 668 "data/maps/SaltySpitoon/scripts.pory"
	waitmovement 0
SaltySpitoon_EventScript_Evazan_1:
	end

SaltySpitoon_EventScript_Evazan_2:
# 662 "data/maps/SaltySpitoon/scripts.pory"
	call SaltySpitoon_EventScript_CantinaBrawl
	goto SaltySpitoon_EventScript_Evazan_1

SaltySpitoon_EventScript_Evazan_4:
# 661 "data/maps/SaltySpitoon/scripts.pory"
	goto_if_unset FLAG_SALTYSPITOON_BRAWL, SaltySpitoon_EventScript_Evazan_2
	goto SaltySpitoon_EventScript_Evazan_3


SaltySpitoon_EventScript_Test::
# 674 "data/maps/SaltySpitoon/scripts.pory"
	lock
# 675 "data/maps/SaltySpitoon/scripts.pory"
	faceplayer
# 676 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_Test_Text_0
# 677 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 678 "data/maps/SaltySpitoon/scripts.pory"
	trainerbattle_two_trainers TRAINER_EVAZAN, SaltySpitoon_Text_EvazanLost, TRAINER_PONDA_BABU, SaltySpitoon_Text_PondaBabuLost
# 679 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_EventScript_Test_Text_1
# 680 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 681 "data/maps/SaltySpitoon/scripts.pory"
	release
	end


SaltySpitoon_EventScript_DeathsticksGuy::
# 686 "data/maps/SaltySpitoon/scripts.pory"
	lock
# 687 "data/maps/SaltySpitoon/scripts.pory"
	faceplayer
# 688 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_Deathsticks1
# 689 "data/maps/SaltySpitoon/scripts.pory"
	waitmessage
# 690 "data/maps/SaltySpitoon/scripts.pory"
	pokemart SaltySpitoon_Mart_Deathsticks
# 691 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_Deathsticks2
# 692 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 693 "data/maps/SaltySpitoon/scripts.pory"
	release
	end


SaltySpitoon_EventScript_BigGreen::
# 698 "data/maps/SaltySpitoon/scripts.pory"
	lock
# 699 "data/maps/SaltySpitoon/scripts.pory"
	faceplayer
# 700 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_BigGreen1
# 701 "data/maps/SaltySpitoon/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 702 "data/maps/SaltySpitoon/scripts.pory"
	waitmovement 0
# 703 "data/maps/SaltySpitoon/scripts.pory"
	msgbox SaltySpitoon_Text_BigGreen2
# 704 "data/maps/SaltySpitoon/scripts.pory"
	closemessage
# 705 "data/maps/SaltySpitoon/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 706 "data/maps/SaltySpitoon/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SaltySpitoon_EventScript_BigGreen_2
# 709 "data/maps/SaltySpitoon/scripts.pory"
	applymovement 12, SaltySpitoon_Movement_BigGreenExitL
SaltySpitoon_EventScript_BigGreen_1:
# 711 "data/maps/SaltySpitoon/scripts.pory"
	waitmovement 0
# 712 "data/maps/SaltySpitoon/scripts.pory"
	removeobject 12
# 713 "data/maps/SaltySpitoon/scripts.pory"
	setflag FLAG_SALTYSPITOON_BIGGREEN
# 714 "data/maps/SaltySpitoon/scripts.pory"
	setvar VAR_GANG_STATE, 1
# 715 "data/maps/SaltySpitoon/scripts.pory"
	release
	end

SaltySpitoon_EventScript_BigGreen_2:
# 707 "data/maps/SaltySpitoon/scripts.pory"
	applymovement 12, SaltySpitoon_Movement_BigGreenExitR
	goto SaltySpitoon_EventScript_BigGreen_1


# 719 "data/maps/SaltySpitoon/scripts.pory"
SaltySpitoon_Movement_BigGreenExitL:
# 720 "data/maps/SaltySpitoon/scripts.pory"
	walk_left
# 720 "data/maps/SaltySpitoon/scripts.pory"
	walk_left
# 720 "data/maps/SaltySpitoon/scripts.pory"
	walk_left
# 720 "data/maps/SaltySpitoon/scripts.pory"
	walk_left
# 721 "data/maps/SaltySpitoon/scripts.pory"
	walk_down
# 721 "data/maps/SaltySpitoon/scripts.pory"
	walk_down
# 721 "data/maps/SaltySpitoon/scripts.pory"
	walk_down
# 721 "data/maps/SaltySpitoon/scripts.pory"
	walk_down
# 721 "data/maps/SaltySpitoon/scripts.pory"
	walk_down
# 721 "data/maps/SaltySpitoon/scripts.pory"
	walk_down
	step_end

# 724 "data/maps/SaltySpitoon/scripts.pory"
SaltySpitoon_Movement_BigGreenExitR:
# 725 "data/maps/SaltySpitoon/scripts.pory"
	walk_right
# 725 "data/maps/SaltySpitoon/scripts.pory"
	walk_right
# 725 "data/maps/SaltySpitoon/scripts.pory"
	walk_right
# 725 "data/maps/SaltySpitoon/scripts.pory"
	walk_right
# 725 "data/maps/SaltySpitoon/scripts.pory"
	walk_right
# 726 "data/maps/SaltySpitoon/scripts.pory"
	walk_down
# 726 "data/maps/SaltySpitoon/scripts.pory"
	walk_down
# 726 "data/maps/SaltySpitoon/scripts.pory"
	walk_down
# 726 "data/maps/SaltySpitoon/scripts.pory"
	walk_down
# 726 "data/maps/SaltySpitoon/scripts.pory"
	walk_down
# 726 "data/maps/SaltySpitoon/scripts.pory"
	walk_down
	step_end

	.align 2
# 729 "data/maps/SaltySpitoon/scripts.pory"
SaltySpitoon_Mart_Deathsticks:
# 730 "data/maps/SaltySpitoon/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 731 "data/maps/SaltySpitoon/scripts.pory"
	.2byte ITEM_KIND_BUD
# 732 "data/maps/SaltySpitoon/scripts.pory"
	.2byte ITEM_DEATH_STICK
	.2byte ITEM_NONE

	.align 2
# 735 "data/maps/SaltySpitoon/scripts.pory"
SaltySpitoon_Mart_Bartender:
# 736 "data/maps/SaltySpitoon/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 737 "data/maps/SaltySpitoon/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 738 "data/maps/SaltySpitoon/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 739 "data/maps/SaltySpitoon/scripts.pory"
	.2byte ITEM_LEMONADE
# 740 "data/maps/SaltySpitoon/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_0:
# 271 "data/maps/SaltySpitoon/scripts.pory"
	.string "John got Kabuto low\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_1:
# 273 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bobby got Kabuto low\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_2:
# 275 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bill got Kabuto low\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_3:
# 277 "data/maps/SaltySpitoon/scripts.pory"
	.string "Reese got Kabuto low\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_4:
# 279 "data/maps/SaltySpitoon/scripts.pory"
	.string "{PLAYER} got Kabuto low\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_5:
# 281 "data/maps/SaltySpitoon/scripts.pory"
	.string "Problem checking 0$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_6:
# 288 "data/maps/SaltySpitoon/scripts.pory"
	.string "John got one\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_7:
# 290 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bobby got one\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_8:
# 292 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bill got one\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_9:
# 294 "data/maps/SaltySpitoon/scripts.pory"
	.string "Reese got one\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_10:
# 296 "data/maps/SaltySpitoon/scripts.pory"
	.string "{PLAYER} got one\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_11:
# 298 "data/maps/SaltySpitoon/scripts.pory"
	.string "Problem checking 1$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_12:
# 304 "data/maps/SaltySpitoon/scripts.pory"
	.string "John got two\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_13:
# 306 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bobby got two\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_14:
# 308 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bill got two\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_15:
# 310 "data/maps/SaltySpitoon/scripts.pory"
	.string "Reese got two\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_16:
# 312 "data/maps/SaltySpitoon/scripts.pory"
	.string "{PLAYER} got two\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_17:
# 314 "data/maps/SaltySpitoon/scripts.pory"
	.string "Problem checking 2$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_18:
# 320 "data/maps/SaltySpitoon/scripts.pory"
	.string "John got three\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_19:
# 322 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bobby got three\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_20:
# 324 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bill got three\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_21:
# 326 "data/maps/SaltySpitoon/scripts.pory"
	.string "Reese got three\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_22:
# 328 "data/maps/SaltySpitoon/scripts.pory"
	.string "{PLAYER} got three\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_23:
# 330 "data/maps/SaltySpitoon/scripts.pory"
	.string "Problem checking 3$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_24:
# 336 "data/maps/SaltySpitoon/scripts.pory"
	.string "John got four\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_25:
# 338 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bobby got four\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_26:
# 340 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bill got four\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_27:
# 342 "data/maps/SaltySpitoon/scripts.pory"
	.string "Reese got four\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_28:
# 344 "data/maps/SaltySpitoon/scripts.pory"
	.string "{PLAYER} got four\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_29:
# 346 "data/maps/SaltySpitoon/scripts.pory"
	.string "Problem checking 4$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_30:
# 352 "data/maps/SaltySpitoon/scripts.pory"
	.string "John got five\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_31:
# 354 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bobby got five\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_32:
# 356 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bill got five\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_33:
# 358 "data/maps/SaltySpitoon/scripts.pory"
	.string "Reese got five\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_34:
# 360 "data/maps/SaltySpitoon/scripts.pory"
	.string "{PLAYER} got five\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_35:
# 362 "data/maps/SaltySpitoon/scripts.pory"
	.string "Problem checking 5$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_36:
# 368 "data/maps/SaltySpitoon/scripts.pory"
	.string "John got six\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_37:
# 370 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bobby got six\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_38:
# 372 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bill got six\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_39:
# 374 "data/maps/SaltySpitoon/scripts.pory"
	.string "Reese got six\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_40:
# 376 "data/maps/SaltySpitoon/scripts.pory"
	.string "{PLAYER} got six\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_41:
# 378 "data/maps/SaltySpitoon/scripts.pory"
	.string "Problem checking 6$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_42:
# 384 "data/maps/SaltySpitoon/scripts.pory"
	.string "John got seven\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_43:
# 386 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bobby got seven\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_44:
# 388 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bill got seven\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_45:
# 390 "data/maps/SaltySpitoon/scripts.pory"
	.string "Reese got seven\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_46:
# 392 "data/maps/SaltySpitoon/scripts.pory"
	.string "{PLAYER} got seven\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_47:
# 394 "data/maps/SaltySpitoon/scripts.pory"
	.string "Problem checking 7$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_48:
# 400 "data/maps/SaltySpitoon/scripts.pory"
	.string "John got eight\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_49:
# 402 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bobby got eight\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_50:
# 404 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bill got eight\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_51:
# 406 "data/maps/SaltySpitoon/scripts.pory"
	.string "Reese got eight\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_52:
# 408 "data/maps/SaltySpitoon/scripts.pory"
	.string "{PLAYER} got eight\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_53:
# 410 "data/maps/SaltySpitoon/scripts.pory"
	.string "Problem checking 8$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_54:
# 416 "data/maps/SaltySpitoon/scripts.pory"
	.string "John got nine\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_55:
# 418 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bobby got nine\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_56:
# 420 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bill got nine\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_57:
# 422 "data/maps/SaltySpitoon/scripts.pory"
	.string "Reese got nine\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_58:
# 424 "data/maps/SaltySpitoon/scripts.pory"
	.string "{PLAYER} got nine\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_59:
# 426 "data/maps/SaltySpitoon/scripts.pory"
	.string "Problem checking 9$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_60:
# 433 "data/maps/SaltySpitoon/scripts.pory"
	.string "John got Kabuto high\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_61:
# 435 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bobby got Kabuto high\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_62:
# 437 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bill got Kabuto high\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_63:
# 439 "data/maps/SaltySpitoon/scripts.pory"
	.string "Reese got Kabuto high\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_64:
# 441 "data/maps/SaltySpitoon/scripts.pory"
	.string "{PLAYER} got Kabuto high\n$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_65:
# 443 "data/maps/SaltySpitoon/scripts.pory"
	.string "Problem checking 10$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_66:
# 453 "data/maps/SaltySpitoon/scripts.pory"
	.string "John won!$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_67:
# 457 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bobby won!$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_68:
# 461 "data/maps/SaltySpitoon/scripts.pory"
	.string "Bill won!$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_69:
# 465 "data/maps/SaltySpitoon/scripts.pory"
	.string "Reese won!$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_70:
# 469 "data/maps/SaltySpitoon/scripts.pory"
	.string "{PLAYER} won!$"

SaltySpitoon_EventScript_HiLoKabuto_Brain_Text_71:
# 473 "data/maps/SaltySpitoon/scripts.pory"
	.string "Problemo here at bottom of WhoWon :C$"

SaltySpitoon_EventScript_HiLoKabuto_PlayerWon_Text_0:
# 506 "data/maps/SaltySpitoon/scripts.pory"
	.string "PROBLEMO bottom of Pay Wager swithc$"

SaltySpitoon_EventScript_Test_Text_0:
# 676 "data/maps/SaltySpitoon/scripts.pory"
	.string "TEST DOUBLE BATTLE$"

SaltySpitoon_EventScript_Test_Text_1:
# 679 "data/maps/SaltySpitoon/scripts.pory"
	.string "TEST DONE$"

SaltySpitoon_Text_Deathsticks1::
# 743 "data/maps/SaltySpitoon/scripts.pory"
	.string "You wanna buy some deathsticks?$"

SaltySpitoon_Text_Deathsticks2::
# 747 "data/maps/SaltySpitoon/scripts.pory"
	.string "I don't wanna sell you any deathsticks.\l"
	.string "I wanna go home and rea think my life...$"

SaltySpitoon_Text_Bartender1::
# 751 "data/maps/SaltySpitoon/scripts.pory"
	.string "You wanna buy something?$"

SaltySpitoon_Text_Bartender2::
# 755 "data/maps/SaltySpitoon/scripts.pory"
	.string "Allright stranger.$"

SaltySpitoon_Text_HiLoKabuto_Intro::
# 759 "data/maps/SaltySpitoon/scripts.pory"
	.string "We're playing High Low Kabuto. You in?$"

SaltySpitoon_Text_HiLoKabuto_GetWager::
# 763 "data/maps/SaltySpitoon/scripts.pory"
	.string "How much will you be wagering this\l"
	.string "round?$"

SaltySpitoon_Text_HiLoKabuto_DescribeGame::
# 767 "data/maps/SaltySpitoon/scripts.pory"
	.string "On the table we have ten playing cards\l"
	.string "the numbers one through nine and\l"
	.string "Kabuto. Kabuto's value is zero or ten\l"
	.string "therefore that card is either high or\l"
	.string "low.$"

SaltySpitoon_Text_HiLoKabuto_Goodbye::
# 771 "data/maps/SaltySpitoon/scripts.pory"
	.string "When you feel like playing we'll still be\l"
	.string "here.$"

SaltySpitoon_Text_HiLoKabuto_WagerPoor::
# 775 "data/maps/SaltySpitoon/scripts.pory"
	.string "Looks like you're short on coin to back\l"
	.string "that bet.$"

SaltySpitoon_Text_HiLoKabuto_KabutoLo::
# 779 "data/maps/SaltySpitoon/scripts.pory"
	.string "Gentlemen, Kabuto is low this game. Now\l"
	.string "take your cards and let's see who has\l"
	.string "won.$"

SaltySpitoon_Text_HiLoKabuto_KabutoHi::
# 783 "data/maps/SaltySpitoon/scripts.pory"
	.string "Gentlemen, Kabuto is high this game. Now\l"
	.string "take your cards and let's see who has\l"
	.string "won.$"

SaltySpitoon_Text_HiLoKabuto_YouLost::
# 787 "data/maps/SaltySpitoon/scripts.pory"
	.string "That means you lose your wager kind\l"
	.string "stranger.$"

SaltySpitoon_Text_HiLoKabuto_YouWon::
# 791 "data/maps/SaltySpitoon/scripts.pory"
	.string "Congratulations {PLAYER} you won\l"
	.string "this round.$"

SaltySpitoon_Text_HiLoKabuto_PlayAgain::
# 795 "data/maps/SaltySpitoon/scripts.pory"
	.string "That was a good game. Will we play\l"
	.string "again?$"

SaltySpitoon_Text_EvazanIntro::
# 799 "data/maps/SaltySpitoon/scripts.pory"
	.string "He doesn't like you. I don't like you\l"
	.string "either.$"

SaltySpitoon_Text_EvazanLost::
# 803 "data/maps/SaltySpitoon/scripts.pory"
	.string "You will be sorry.$"

SaltySpitoon_Text_EvazanPost::
# 807 "data/maps/SaltySpitoon/scripts.pory"
	.string "You need to be more careful round here\l"
	.string "kid.$"

SaltySpitoon_Text_PondaBabuIntro::
# 811 "data/maps/SaltySpitoon/scripts.pory"
	.string "We're wanted men. I have the death\l"
	.string "sentence.$"

SaltySpitoon_Text_PondaBabuLost::
# 815 "data/maps/SaltySpitoon/scripts.pory"
	.string "Cold blood! Ow! My arm!$"

SaltySpitoon_Text_PondaBabuPost::
# 819 "data/maps/SaltySpitoon/scripts.pory"
	.string "You watch yourself. They say this place\l"
	.string "is rough.$"

SaltySpitoon_Text_ReeseLost::
# 823 "data/maps/SaltySpitoon/scripts.pory"
	.string "Prolly cheated at that too...$"

SaltySpitoon_Text_JohnLost::
# 827 "data/maps/SaltySpitoon/scripts.pory"
	.string "Tarnation!$"

SaltySpitoon_Text_NoGame::
# 831 "data/maps/SaltySpitoon/scripts.pory"
	.string "We're not playing right now so get you\l"
	.string "gone.$"

SaltySpitoon_Text_HiLoKabuto_Fight::
# 835 "data/maps/SaltySpitoon/scripts.pory"
	.string "No one can win three hands\l"
	.string "successively! This kind stranger\l"
	.string "{PLAYER} here must be cheating! To\l"
	.string "arms! To arms! Destroy the cheating\l"
	.string "man!$"

SaltySpitoon_Text_BigGreen1::
# 839 "data/maps/SaltySpitoon/scripts.pory"
	.string "I'm here because I am a troubled man.\l"
	.string "These dancing girls help me forget\l"
	.string "trouble, let sorrow waste away as time\l"
	.string "endures. Outside my troubles grow while\l"
	.string "I decline. Oh woe is me!$"

SaltySpitoon_Text_BigGreen2::
# 843 "data/maps/SaltySpitoon/scripts.pory"
	.string "But where are my manners? My name is\l"
	.string "Melvin. You call me Big Green. I'm sure\l"
	.string "you're looking to make a fortune and\l"
	.string "secure status among our city. Come see\l"
	.string "me at our safe house on Grow Street\l"
	.string "where we might discuss this at our\l"
	.string "leisure.$"
