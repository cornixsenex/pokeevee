WeenieHutJr_MapScripts::
	.byte 0


WeenieHutJr_EventScript_DoorTriggerL::
# 30 "data//maps/WeenieHutJr/scripts.pory"
	goto_if_unset FLAG_TEMP_8, WeenieHutJr_EventScript_DoorTriggerL_2
WeenieHutJr_EventScript_DoorTriggerL_1:
# 37 "data//maps/WeenieHutJr/scripts.pory"
	release
	return

WeenieHutJr_EventScript_DoorTriggerL_2:
# 31 "data//maps/WeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_8
# 32 "data//maps/WeenieHutJr/scripts.pory"
	lock
# 33 "data//maps/WeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 34 "data//maps/WeenieHutJr/scripts.pory"
	waitmovement 0
# 35 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_DoorBlock
	goto WeenieHutJr_EventScript_DoorTriggerL_1


WeenieHutJr_EventScript_DoorTriggerR::
# 41 "data//maps/WeenieHutJr/scripts.pory"
	goto_if_unset FLAG_TEMP_8, WeenieHutJr_EventScript_DoorTriggerR_2
WeenieHutJr_EventScript_DoorTriggerR_1:
# 48 "data//maps/WeenieHutJr/scripts.pory"
	release
	return

WeenieHutJr_EventScript_DoorTriggerR_2:
# 42 "data//maps/WeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_8
# 43 "data//maps/WeenieHutJr/scripts.pory"
	lock
# 44 "data//maps/WeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 45 "data//maps/WeenieHutJr/scripts.pory"
	waitmovement 0
# 46 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_DoorBlock
	goto WeenieHutJr_EventScript_DoorTriggerR_1


WeenieHutJr_EventScript_DoorBlock::
# 52 "data//maps/WeenieHutJr/scripts.pory"
	msgbox WeenieHutJr_Text_DoorBlockA
# 53 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 54 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_SWHJ_STATE, 3
	goto_if_eq WeenieHutJr_EventScript_DoorBlock_2
# 57 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_SWHJ_STATE, 4
	goto_if_eq WeenieHutJr_EventScript_DoorBlock_3
# 67 "data//maps/WeenieHutJr/scripts.pory"
	msgbox WeenieHutJr_Text_DoorBlockB
# 68 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 69 "data//maps/WeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 70 "data//maps/WeenieHutJr/scripts.pory"
	waitmovement 0
# 71 "data//maps/WeenieHutJr/scripts.pory"
	clearflag FLAG_TEMP_8
WeenieHutJr_EventScript_DoorBlock_1:
	return

WeenieHutJr_EventScript_DoorBlock_2:
# 55 "data//maps/WeenieHutJr/scripts.pory"
	msgbox WeenieHutJr_Text_DoorOpens
# 56 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
	goto WeenieHutJr_EventScript_DoorBlock_1

WeenieHutJr_EventScript_DoorBlock_3:
# 58 "data//maps/WeenieHutJr/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 59 "data//maps/WeenieHutJr/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 60 "data//maps/WeenieHutJr/scripts.pory"
	waitmovement 0
# 61 "data//maps/WeenieHutJr/scripts.pory"
	msgbox WeenieHutJr_Text_DoorBlockD
# 62 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 63 "data//maps/WeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 64 "data//maps/WeenieHutJr/scripts.pory"
	waitmovement 0
# 65 "data//maps/WeenieHutJr/scripts.pory"
	clearflag FLAG_TEMP_8
	goto WeenieHutJr_EventScript_DoorBlock_1


WeenieHutJr_EventScript_KickOutR::
# 76 "data//maps/WeenieHutJr/scripts.pory"
	lock
# 77 "data//maps/WeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 78 "data//maps/WeenieHutJr/scripts.pory"
	waitmovement 0
# 79 "data//maps/WeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 80 "data//maps/WeenieHutJr/scripts.pory"
	waitmovement 0
# 81 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_KickOut
# 82 "data//maps/WeenieHutJr/scripts.pory"
	release
	return


WeenieHutJr_EventScript_KickOutL::
# 86 "data//maps/WeenieHutJr/scripts.pory"
	lock
# 87 "data//maps/WeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 88 "data//maps/WeenieHutJr/scripts.pory"
	waitmovement 0
# 89 "data//maps/WeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 90 "data//maps/WeenieHutJr/scripts.pory"
	waitmovement 0
# 91 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_KickOut
# 92 "data//maps/WeenieHutJr/scripts.pory"
	release
	return


WeenieHutJr_EventScript_KickOut::
# 96 "data//maps/WeenieHutJr/scripts.pory"
	clearflag FLAG_TEMP_8
# 97 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_SWHJ_STATE, 4
# 98 "data//maps/WeenieHutJr/scripts.pory"
	msgbox WeenieHutJr_Text_KickOut
# 99 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
	return


WeenieHutJr_EventScript_TicTacToe_Blue::
# 104 "data//maps/WeenieHutJr/scripts.pory"
	lock
# 105 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_E, 1
# 106 "data//maps/WeenieHutJr/scripts.pory"
	faceplayer
# 107 "data//maps/WeenieHutJr/scripts.pory"
	goto_if_set FLAG_TEMP_1, WeenieHutJr_EventScript_TicTacToe_Blue_2
# 114 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_YesNo, MSGBOX_YESNO
# 115 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Blue_8
# 119 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Decline
WeenieHutJr_EventScript_TicTacToe_Blue_1:
# 122 "data//maps/WeenieHutJr/scripts.pory"
	release
	return

WeenieHutJr_EventScript_TicTacToe_Blue_2:
# 108 "data//maps/WeenieHutJr/scripts.pory"
	checktrainerflag TRAINER_MEI_AND_LISA
	goto_if 1, WeenieHutJr_EventScript_TicTacToe_Blue_5
# 111 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Post
	goto WeenieHutJr_EventScript_TicTacToe_Blue_1

WeenieHutJr_EventScript_TicTacToe_Blue_5:
# 109 "data//maps/WeenieHutJr/scripts.pory"
	msgbox WeenieHutJr_Text_MeiAndLisaPost
	goto WeenieHutJr_EventScript_TicTacToe_Blue_1

WeenieHutJr_EventScript_TicTacToe_Blue_8:
# 116 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetToken
	goto WeenieHutJr_EventScript_TicTacToe_Blue_1


WeenieHutJr_EventScript_TicTacToe_Orange::
# 126 "data//maps/WeenieHutJr/scripts.pory"
	lock
# 127 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_E, 2
# 128 "data//maps/WeenieHutJr/scripts.pory"
	faceplayer
# 129 "data//maps/WeenieHutJr/scripts.pory"
	goto_if_set FLAG_TEMP_2, WeenieHutJr_EventScript_TicTacToe_Orange_2
# 136 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_YesNo, MSGBOX_YESNO
# 137 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Orange_8
# 141 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Decline
WeenieHutJr_EventScript_TicTacToe_Orange_1:
# 144 "data//maps/WeenieHutJr/scripts.pory"
	release
	return

WeenieHutJr_EventScript_TicTacToe_Orange_2:
# 130 "data//maps/WeenieHutJr/scripts.pory"
	checktrainerflag TRAINER_MEI_AND_LISA
	goto_if 1, WeenieHutJr_EventScript_TicTacToe_Orange_5
# 133 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Post
	goto WeenieHutJr_EventScript_TicTacToe_Orange_1

WeenieHutJr_EventScript_TicTacToe_Orange_5:
# 131 "data//maps/WeenieHutJr/scripts.pory"
	msgbox WeenieHutJr_Text_MeiAndLisaPost
	goto WeenieHutJr_EventScript_TicTacToe_Orange_1

WeenieHutJr_EventScript_TicTacToe_Orange_8:
# 138 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetToken
	goto WeenieHutJr_EventScript_TicTacToe_Orange_1


WeenieHutJr_EventScript_TicTacToe_ClearGame::
# 148 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 0
# 149 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_D, 0
# 150 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 0
# 151 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 0
# 152 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 0
# 153 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 0
# 154 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 0
# 155 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 0
# 156 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 0
# 157 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 0
# 158 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 0
	return


WeenieHutJr_EventScript_TicTacToe_Brain::
# 166 "data//maps/WeenieHutJr/scripts.pory"
	special DrawWholeMapView
# 170 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_93
WeenieHutJr_EventScript_TicTacToe_Brain_89:
# 176 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_88
WeenieHutJr_EventScript_TicTacToe_Brain_84:
# 184 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_83
WeenieHutJr_EventScript_TicTacToe_Brain_79:
# 190 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_78
WeenieHutJr_EventScript_TicTacToe_Brain_74:
# 198 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_73
WeenieHutJr_EventScript_TicTacToe_Brain_69:
# 204 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_68
WeenieHutJr_EventScript_TicTacToe_Brain_64:
# 212 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_63
WeenieHutJr_EventScript_TicTacToe_Brain_59:
# 218 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_58
WeenieHutJr_EventScript_TicTacToe_Brain_54:
# 226 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_53
WeenieHutJr_EventScript_TicTacToe_Brain_49:
# 232 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_48
WeenieHutJr_EventScript_TicTacToe_Brain_44:
# 240 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_43
WeenieHutJr_EventScript_TicTacToe_Brain_39:
# 246 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_38
WeenieHutJr_EventScript_TicTacToe_Brain_34:
# 254 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_33
WeenieHutJr_EventScript_TicTacToe_Brain_29:
# 260 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_28
WeenieHutJr_EventScript_TicTacToe_Brain_24:
# 268 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_23
WeenieHutJr_EventScript_TicTacToe_Brain_19:
# 274 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_18
WeenieHutJr_EventScript_TicTacToe_Brain_17:
# 284 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 10
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_147
# 286 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 9
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_148
# 291 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 8
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_149
# 293 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 7
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_150
# 295 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 6
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_151
# 297 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 5
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_152
# 299 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 4
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_153
# 301 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 3
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_154
# 303 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_155
# 305 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_156
# 308 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 1
WeenieHutJr_EventScript_TicTacToe_Brain_146:
# 312 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_168
# 314 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_169
# 316 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 3
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_170
# 318 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 4
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_171
# 320 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 5
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_172
# 322 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 6
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_173
# 324 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 7
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_174
# 326 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 8
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_175
# 328 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 9
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_176
# 331 "data//maps/WeenieHutJr/scripts.pory"
	msgbox WeenieHutJr_EventScript_TicTacToe_Brain_Text_1
	return

WeenieHutJr_EventScript_TicTacToe_Brain_1:
# 171 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_98
# 174 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_2:
# 177 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_101
# 180 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_3:
# 185 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_104
# 188 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_4:
# 191 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_107
# 194 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_5:
# 199 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_110
# 202 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_6:
# 205 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_113
# 208 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_7:
# 213 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_116
# 216 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_8:
# 219 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_119
# 222 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_9:
# 227 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_122
# 230 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_10:
# 233 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_125
# 236 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_11:
# 241 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_128
# 244 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_12:
# 247 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_131
# 250 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_13:
# 255 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_134
# 258 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_14:
# 261 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_137
# 264 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_15:
# 269 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_140
# 272 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_16:
# 275 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_143
# 278 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Lose
	return

WeenieHutJr_EventScript_TicTacToe_Brain_18:
# 274 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_20
	goto WeenieHutJr_EventScript_TicTacToe_Brain_17

WeenieHutJr_EventScript_TicTacToe_Brain_20:
# 274 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_16
	goto WeenieHutJr_EventScript_TicTacToe_Brain_17

WeenieHutJr_EventScript_TicTacToe_Brain_23:
# 268 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_25
	goto WeenieHutJr_EventScript_TicTacToe_Brain_19

WeenieHutJr_EventScript_TicTacToe_Brain_25:
# 268 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_15
	goto WeenieHutJr_EventScript_TicTacToe_Brain_19

WeenieHutJr_EventScript_TicTacToe_Brain_28:
# 260 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_30
	goto WeenieHutJr_EventScript_TicTacToe_Brain_24

WeenieHutJr_EventScript_TicTacToe_Brain_30:
# 260 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_14
	goto WeenieHutJr_EventScript_TicTacToe_Brain_24

WeenieHutJr_EventScript_TicTacToe_Brain_33:
# 254 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_35
	goto WeenieHutJr_EventScript_TicTacToe_Brain_29

WeenieHutJr_EventScript_TicTacToe_Brain_35:
# 254 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_13
	goto WeenieHutJr_EventScript_TicTacToe_Brain_29

WeenieHutJr_EventScript_TicTacToe_Brain_38:
# 246 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_6, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_40
	goto WeenieHutJr_EventScript_TicTacToe_Brain_34

WeenieHutJr_EventScript_TicTacToe_Brain_40:
# 246 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_12
	goto WeenieHutJr_EventScript_TicTacToe_Brain_34

WeenieHutJr_EventScript_TicTacToe_Brain_43:
# 240 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_6, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_45
	goto WeenieHutJr_EventScript_TicTacToe_Brain_39

WeenieHutJr_EventScript_TicTacToe_Brain_45:
# 240 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_11
	goto WeenieHutJr_EventScript_TicTacToe_Brain_39

WeenieHutJr_EventScript_TicTacToe_Brain_48:
# 232 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_50
	goto WeenieHutJr_EventScript_TicTacToe_Brain_44

WeenieHutJr_EventScript_TicTacToe_Brain_50:
# 232 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_8, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_10
	goto WeenieHutJr_EventScript_TicTacToe_Brain_44

WeenieHutJr_EventScript_TicTacToe_Brain_53:
# 226 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_55
	goto WeenieHutJr_EventScript_TicTacToe_Brain_49

WeenieHutJr_EventScript_TicTacToe_Brain_55:
# 226 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_8, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_9
	goto WeenieHutJr_EventScript_TicTacToe_Brain_49

WeenieHutJr_EventScript_TicTacToe_Brain_58:
# 218 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_60
	goto WeenieHutJr_EventScript_TicTacToe_Brain_54

WeenieHutJr_EventScript_TicTacToe_Brain_60:
# 218 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_8
	goto WeenieHutJr_EventScript_TicTacToe_Brain_54

WeenieHutJr_EventScript_TicTacToe_Brain_63:
# 212 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_65
	goto WeenieHutJr_EventScript_TicTacToe_Brain_59

WeenieHutJr_EventScript_TicTacToe_Brain_65:
# 212 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_7
	goto WeenieHutJr_EventScript_TicTacToe_Brain_59

WeenieHutJr_EventScript_TicTacToe_Brain_68:
# 204 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_8, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_70
	goto WeenieHutJr_EventScript_TicTacToe_Brain_64

WeenieHutJr_EventScript_TicTacToe_Brain_70:
# 204 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_6
	goto WeenieHutJr_EventScript_TicTacToe_Brain_64

WeenieHutJr_EventScript_TicTacToe_Brain_73:
# 198 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_8, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_75
	goto WeenieHutJr_EventScript_TicTacToe_Brain_69

WeenieHutJr_EventScript_TicTacToe_Brain_75:
# 198 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_5
	goto WeenieHutJr_EventScript_TicTacToe_Brain_69

WeenieHutJr_EventScript_TicTacToe_Brain_78:
# 190 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_80
	goto WeenieHutJr_EventScript_TicTacToe_Brain_74

WeenieHutJr_EventScript_TicTacToe_Brain_80:
# 190 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_6, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_4
	goto WeenieHutJr_EventScript_TicTacToe_Brain_74

WeenieHutJr_EventScript_TicTacToe_Brain_83:
# 184 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_85
	goto WeenieHutJr_EventScript_TicTacToe_Brain_79

WeenieHutJr_EventScript_TicTacToe_Brain_85:
# 184 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_6, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_3
	goto WeenieHutJr_EventScript_TicTacToe_Brain_79

WeenieHutJr_EventScript_TicTacToe_Brain_88:
# 176 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_90
	goto WeenieHutJr_EventScript_TicTacToe_Brain_84

WeenieHutJr_EventScript_TicTacToe_Brain_90:
# 176 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_2
	goto WeenieHutJr_EventScript_TicTacToe_Brain_84

WeenieHutJr_EventScript_TicTacToe_Brain_93:
# 170 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_95
	goto WeenieHutJr_EventScript_TicTacToe_Brain_89

WeenieHutJr_EventScript_TicTacToe_Brain_95:
# 170 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Brain_1
	goto WeenieHutJr_EventScript_TicTacToe_Brain_89

WeenieHutJr_EventScript_TicTacToe_Brain_98:
# 172 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_101:
# 178 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_104:
# 186 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_107:
# 192 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_110:
# 200 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_113:
# 206 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_116:
# 214 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_119:
# 220 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_122:
# 228 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_125:
# 234 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_128:
# 242 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_131:
# 248 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_134:
# 256 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_137:
# 262 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_140:
# 270 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_143:
# 276 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Win
	return

WeenieHutJr_EventScript_TicTacToe_Brain_147:
# 285 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Tie
	goto WeenieHutJr_EventScript_TicTacToe_Brain_146

WeenieHutJr_EventScript_TicTacToe_Brain_148:
# 287 "data//maps/WeenieHutJr/scripts.pory"
	msgbox WeenieHutJr_EventScript_TicTacToe_Brain_Text_0
# 288 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 289 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 10
# 290 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Tie
	goto WeenieHutJr_EventScript_TicTacToe_Brain_146

WeenieHutJr_EventScript_TicTacToe_Brain_149:
# 292 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 9
	goto WeenieHutJr_EventScript_TicTacToe_Brain_146

WeenieHutJr_EventScript_TicTacToe_Brain_150:
# 294 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 8
	goto WeenieHutJr_EventScript_TicTacToe_Brain_146

WeenieHutJr_EventScript_TicTacToe_Brain_151:
# 296 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 7
	goto WeenieHutJr_EventScript_TicTacToe_Brain_146

WeenieHutJr_EventScript_TicTacToe_Brain_152:
# 298 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 6
	goto WeenieHutJr_EventScript_TicTacToe_Brain_146

WeenieHutJr_EventScript_TicTacToe_Brain_153:
# 300 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 5
	goto WeenieHutJr_EventScript_TicTacToe_Brain_146

WeenieHutJr_EventScript_TicTacToe_Brain_154:
# 302 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 4
	goto WeenieHutJr_EventScript_TicTacToe_Brain_146

WeenieHutJr_EventScript_TicTacToe_Brain_155:
# 304 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 3
	goto WeenieHutJr_EventScript_TicTacToe_Brain_146

WeenieHutJr_EventScript_TicTacToe_Brain_156:
# 306 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 2
	goto WeenieHutJr_EventScript_TicTacToe_Brain_146

WeenieHutJr_EventScript_TicTacToe_Brain_168:
# 313 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetX
	return

WeenieHutJr_EventScript_TicTacToe_Brain_169:
# 315 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetO
	return

WeenieHutJr_EventScript_TicTacToe_Brain_170:
# 317 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetX
	return

WeenieHutJr_EventScript_TicTacToe_Brain_171:
# 319 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetO
	return

WeenieHutJr_EventScript_TicTacToe_Brain_172:
# 321 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetX
	return

WeenieHutJr_EventScript_TicTacToe_Brain_173:
# 323 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetO
	return

WeenieHutJr_EventScript_TicTacToe_Brain_174:
# 325 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetX
	return

WeenieHutJr_EventScript_TicTacToe_Brain_175:
# 327 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetO
	return

WeenieHutJr_EventScript_TicTacToe_Brain_176:
# 329 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetX
	return


WeenieHutJr_EventScript_TicTacToe_GetX::
# 337 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_2
# 340 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetCPUMove
WeenieHutJr_EventScript_TicTacToe_GetX_1:
# 345 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_6
WeenieHutJr_EventScript_TicTacToe_GetX_5:
# 377 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_9
WeenieHutJr_EventScript_TicTacToe_GetX_8:
# 409 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Brain
	return

WeenieHutJr_EventScript_TicTacToe_GetX_2:
# 338 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto WeenieHutJr_EventScript_TicTacToe_GetX_1

WeenieHutJr_EventScript_TicTacToe_GetX_6:
# 346 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_11
# 349 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_12
# 352 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 3
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_13
# 355 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_14
# 358 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 5
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_15
# 361 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 6
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_16
# 364 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_17
# 367 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_18
# 370 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 9
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_19
	goto WeenieHutJr_EventScript_TicTacToe_GetX_5

WeenieHutJr_EventScript_TicTacToe_GetX_9:
# 378 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_29
# 381 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_30
# 384 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 3
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_31
# 387 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_32
# 390 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 5
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_33
# 393 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 6
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_34
# 396 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_35
# 399 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_36
# 402 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 9
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetX_37
	goto WeenieHutJr_EventScript_TicTacToe_GetX_8

WeenieHutJr_EventScript_TicTacToe_GetX_11:
# 347 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 1
# 348 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 6, 10, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_5

WeenieHutJr_EventScript_TicTacToe_GetX_12:
# 350 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 1
# 351 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 7, 10, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_5

WeenieHutJr_EventScript_TicTacToe_GetX_13:
# 353 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 1
# 354 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 8, 10, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_5

WeenieHutJr_EventScript_TicTacToe_GetX_14:
# 356 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 1
# 357 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 6, 11, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_5

WeenieHutJr_EventScript_TicTacToe_GetX_15:
# 359 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 1
# 360 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 7, 11, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_5

WeenieHutJr_EventScript_TicTacToe_GetX_16:
# 362 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 1
# 363 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 8, 11, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_5

WeenieHutJr_EventScript_TicTacToe_GetX_17:
# 365 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 1
# 366 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 6, 12, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_5

WeenieHutJr_EventScript_TicTacToe_GetX_18:
# 368 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 1
# 369 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 7, 12, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_5

WeenieHutJr_EventScript_TicTacToe_GetX_19:
# 371 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 1
# 372 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 8, 12, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_5

WeenieHutJr_EventScript_TicTacToe_GetX_29:
# 379 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 1
# 380 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 11, 10, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_8

WeenieHutJr_EventScript_TicTacToe_GetX_30:
# 382 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 1
# 383 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 12, 10, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_8

WeenieHutJr_EventScript_TicTacToe_GetX_31:
# 385 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 1
# 386 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 13, 10, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_8

WeenieHutJr_EventScript_TicTacToe_GetX_32:
# 388 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 1
# 389 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 11, 11, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_8

WeenieHutJr_EventScript_TicTacToe_GetX_33:
# 391 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 1
# 392 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 12, 11, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_8

WeenieHutJr_EventScript_TicTacToe_GetX_34:
# 394 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 1
# 395 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 13, 11, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_8

WeenieHutJr_EventScript_TicTacToe_GetX_35:
# 397 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 1
# 398 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 11, 12, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_8

WeenieHutJr_EventScript_TicTacToe_GetX_36:
# 400 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 1
# 401 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 12, 12, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_8

WeenieHutJr_EventScript_TicTacToe_GetX_37:
# 403 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 1
# 404 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 13, 12, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetX_8


WeenieHutJr_EventScript_TicTacToe_GetO::
# 413 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_2
# 416 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetCPUMove
WeenieHutJr_EventScript_TicTacToe_GetO_1:
# 421 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_6
WeenieHutJr_EventScript_TicTacToe_GetO_5:
# 453 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_9
WeenieHutJr_EventScript_TicTacToe_GetO_8:
# 485 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Brain
	return

WeenieHutJr_EventScript_TicTacToe_GetO_2:
# 414 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto WeenieHutJr_EventScript_TicTacToe_GetO_1

WeenieHutJr_EventScript_TicTacToe_GetO_6:
# 422 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_11
# 425 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_12
# 428 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 3
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_13
# 431 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_14
# 434 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 5
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_15
# 437 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 6
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_16
# 440 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_17
# 443 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_18
# 446 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 9
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_19
	goto WeenieHutJr_EventScript_TicTacToe_GetO_5

WeenieHutJr_EventScript_TicTacToe_GetO_9:
# 454 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_29
# 457 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_30
# 460 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 3
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_31
# 463 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_32
# 466 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 5
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_33
# 469 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 6
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_34
# 472 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_35
# 475 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_36
# 478 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 9
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetO_37
	goto WeenieHutJr_EventScript_TicTacToe_GetO_8

WeenieHutJr_EventScript_TicTacToe_GetO_11:
# 423 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 2
# 424 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 6, 10, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_5

WeenieHutJr_EventScript_TicTacToe_GetO_12:
# 426 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 2
# 427 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 7, 10, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_5

WeenieHutJr_EventScript_TicTacToe_GetO_13:
# 429 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 2
# 430 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 8, 10, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_5

WeenieHutJr_EventScript_TicTacToe_GetO_14:
# 432 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 2
# 433 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 6, 11, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_5

WeenieHutJr_EventScript_TicTacToe_GetO_15:
# 435 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 2
# 436 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 7, 11, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_5

WeenieHutJr_EventScript_TicTacToe_GetO_16:
# 438 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 2
# 439 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 8, 11, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_5

WeenieHutJr_EventScript_TicTacToe_GetO_17:
# 441 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 2
# 442 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 6, 12, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_5

WeenieHutJr_EventScript_TicTacToe_GetO_18:
# 444 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 2
# 445 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 7, 12, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_5

WeenieHutJr_EventScript_TicTacToe_GetO_19:
# 447 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 2
# 448 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 8, 12, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_5

WeenieHutJr_EventScript_TicTacToe_GetO_29:
# 455 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 2
# 456 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 11, 10, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_8

WeenieHutJr_EventScript_TicTacToe_GetO_30:
# 458 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 2
# 459 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 12, 10, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_8

WeenieHutJr_EventScript_TicTacToe_GetO_31:
# 461 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 2
# 462 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 13, 10, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_8

WeenieHutJr_EventScript_TicTacToe_GetO_32:
# 464 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 2
# 465 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 11, 11, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_8

WeenieHutJr_EventScript_TicTacToe_GetO_33:
# 467 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 2
# 468 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 12, 11, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_8

WeenieHutJr_EventScript_TicTacToe_GetO_34:
# 470 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 2
# 471 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 13, 11, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_8

WeenieHutJr_EventScript_TicTacToe_GetO_35:
# 473 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 2
# 474 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 11, 12, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_8

WeenieHutJr_EventScript_TicTacToe_GetO_36:
# 476 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 2
# 477 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 12, 12, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_8

WeenieHutJr_EventScript_TicTacToe_GetO_37:
# 479 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 2
# 480 "data//maps/WeenieHutJr/scripts.pory"
	setmetatile 13, 12, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetO_8


WeenieHutJr_EventScript_TicTacToe_GetPlayerMove::
# 489 "data//maps/WeenieHutJr/scripts.pory"
	multichoicegrid 0, 0, MULTI_TICTACTOE_CHOOSE_MOVE, 3 TRUE
# 492 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_2
# 500 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_3
# 508 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_4
# 516 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_5
# 524 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_6
# 532 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_7
# 540 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_8
# 548 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_9
# 556 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_10
# 565 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_BottomOfGetPlayerMove
# 566 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1:
	return

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_2:
# 493 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_21
# 498 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_3:
# 501 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_24
# 506 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 2
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_4:
# 509 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_27
# 514 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 3
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_5:
# 517 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_30
# 522 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 4
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_6:
# 525 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_33
# 530 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 5
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_7:
# 533 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_36
# 538 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 6
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_8:
# 541 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_39
# 546 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 7
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_9:
# 549 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_42
# 554 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 8
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_10:
# 557 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_45
# 562 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 9
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_21:
# 494 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 495 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 496 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_24:
# 502 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 503 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 504 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_27:
# 510 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 511 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 512 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_30:
# 518 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 519 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 520 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_33:
# 526 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 527 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 528 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_36:
# 534 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 535 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 536 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_39:
# 542 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 543 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 544 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_42:
# 550 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 551 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 552 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_45:
# 558 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 559 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 560 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto WeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1


WeenieHutJr_EventScript_TicTacToe_GetCPUMove::
# 575 "data//maps/WeenieHutJr/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 578 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetCPUMove_2
# 584 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetCPUMove_3
# 590 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetCPUMove_4
# 596 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetCPUMove_5
# 602 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetCPUMove_6
# 608 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetCPUMove_7
# 614 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetCPUMove_8
# 620 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetCPUMove_9
# 626 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetCPUMove_10
# 633 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetCPUMove
WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1:
	return

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_2:
# 579 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetCPUMove_21
# 582 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_3:
# 585 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetCPUMove_24
# 588 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 2
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_4:
# 591 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetCPUMove_27
# 594 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 3
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_5:
# 597 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetCPUMove_30
# 600 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 4
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_6:
# 603 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetCPUMove_33
# 606 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 5
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_7:
# 609 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetCPUMove_36
# 612 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 6
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_8:
# 615 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetCPUMove_39
# 618 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 7
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_9:
# 621 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetCPUMove_42
# 624 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 8
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_10:
# 627 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_gt WeenieHutJr_EventScript_TicTacToe_GetCPUMove_45
# 630 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 9
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_21:
# 580 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_24:
# 586 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_27:
# 592 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_30:
# 598 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_33:
# 604 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_36:
# 610 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_39:
# 616 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_42:
# 622 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

WeenieHutJr_EventScript_TicTacToe_GetCPUMove_45:
# 628 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto WeenieHutJr_EventScript_TicTacToe_GetCPUMove_1


WeenieHutJr_EventScript_TicTacToe_Win::
# 639 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Win_2
# 643 "data//maps/WeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_2
# 644 "data//maps/WeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_4
WeenieHutJr_EventScript_TicTacToe_Win_1:
# 646 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Lost
# 647 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 648 "data//maps/WeenieHutJr/scripts.pory"
	goto_if_set FLAG_TEMP_3, WeenieHutJr_EventScript_TicTacToe_Win_7
WeenieHutJr_EventScript_TicTacToe_Win_5:
	end

WeenieHutJr_EventScript_TicTacToe_Win_2:
# 640 "data//maps/WeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_1
# 641 "data//maps/WeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_3
	goto WeenieHutJr_EventScript_TicTacToe_Win_1

WeenieHutJr_EventScript_TicTacToe_Win_6:
# 649 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_A, 7
# 650 "data//maps/WeenieHutJr/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 651 "data//maps/WeenieHutJr/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 652 "data//maps/WeenieHutJr/scripts.pory"
	waitmovement 0
# 653 "data//maps/WeenieHutJr/scripts.pory"
	msgbox WeenieHutJr_Text_MeiandLisaIntro
# 654 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 655 "data//maps/WeenieHutJr/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 656 "data//maps/WeenieHutJr/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 657 "data//maps/WeenieHutJr/scripts.pory"
	waitmovement 0
# 658 "data//maps/WeenieHutJr/scripts.pory"
	trainerbattle_no_intro TRAINER_MEI_AND_LISA, WeenieHutJr_Text_MeiAndLisaLost
	goto WeenieHutJr_EventScript_TicTacToe_Win_5

WeenieHutJr_EventScript_TicTacToe_Win_7:
# 648 "data//maps/WeenieHutJr/scripts.pory"
	goto_if_set FLAG_TEMP_4, WeenieHutJr_EventScript_TicTacToe_Win_6
	goto WeenieHutJr_EventScript_TicTacToe_Win_5


WeenieHutJr_EventScript_TicTacToe_Lose::
# 664 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Lose_2
# 667 "data//maps/WeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_2
WeenieHutJr_EventScript_TicTacToe_Lose_1:
# 669 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Lost
# 670 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
	end

WeenieHutJr_EventScript_TicTacToe_Lose_2:
# 665 "data//maps/WeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_1
	goto WeenieHutJr_EventScript_TicTacToe_Lose_1


WeenieHutJr_EventScript_TicTacToe_Tie::
# 675 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_Tie_2
# 678 "data//maps/WeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_2
WeenieHutJr_EventScript_TicTacToe_Tie_1:
# 680 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Tied
# 681 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
	end

WeenieHutJr_EventScript_TicTacToe_Tie_2:
# 676 "data//maps/WeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_1
	goto WeenieHutJr_EventScript_TicTacToe_Tie_1


WeenieHutJr_EventScript_TicTacToe_GetToken::
# 687 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_ClearGame
# 688 "data//maps/WeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_XYes, MSGBOX_YESNO
# 689 "data//maps/WeenieHutJr/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WeenieHutJr_EventScript_TicTacToe_GetToken_2
# 692 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_D, 2
WeenieHutJr_EventScript_TicTacToe_GetToken_1:
# 694 "data//maps/WeenieHutJr/scripts.pory"
	closemessage
# 695 "data//maps/WeenieHutJr/scripts.pory"
	call WeenieHutJr_EventScript_TicTacToe_Brain
	return

WeenieHutJr_EventScript_TicTacToe_GetToken_2:
# 690 "data//maps/WeenieHutJr/scripts.pory"
	setvar VAR_TEMP_D, 1
	goto WeenieHutJr_EventScript_TicTacToe_GetToken_1


WeenieHutJr_EventScript_TicTacToe_Brain_Text_0:
# 287 "data//maps/WeenieHutJr/scripts.pory"
	.string "TURN 9 INTO 10$"

WeenieHutJr_EventScript_TicTacToe_Brain_Text_1:
# 331 "data//maps/WeenieHutJr/scripts.pory"
	.string "TOO MANY TURNS IDK BOTTOM OF BRAIN$"

WeenieHutJr_Text_DoorBlockA::
# 699 "data//maps/WeenieHutJr/scripts.pory"
	.string "Hello. Welcome to Weenie Hut Junior's.$"

WeenieHutJr_Text_DoorBlockB::
# 703 "data//maps/WeenieHutJr/scripts.pory"
	.string "This lounge is only for those few elite\n"
	.string "who graduate from Super Weenie Hut\l"
	.string "Junior's. I think that might be more\l"
	.string "your speed.$"

WeenieHutJr_Text_DoorOpens::
# 707 "data//maps/WeenieHutJr/scripts.pory"
	.string "Congratulations on your achievement!\n"
	.string "Enjoy your time at Weenie Hut Juniors!$"

WeenieHutJr_Text_DoorBlockD::
# 711 "data//maps/WeenieHutJr/scripts.pory"
	.string "You wicked monster! Leave! Never come\n"
	.string "back.$"

WeenieHutJr_Text_KickOut::
# 715 "data//maps/WeenieHutJr/scripts.pory"
	.string "Fighting is strictly forbidden I must\n"
	.string "tell you to leave. You are forever\l"
	.string "banned as punishment for your\l"
	.string "disgusting deeds.$"

WeenieHutJr_Text_MeiandLisaIntro::
# 719 "data//maps/WeenieHutJr/scripts.pory"
	.string "I can't believe this guy beat you too\n"
	.string "sis! No icky boy will make us be loosers,\l"
	.string "C'mon Lisa let's show him what we've got!$"

WeenieHutJr_Text_MeiAndLisaLost::
# 723 "data//maps/WeenieHutJr/scripts.pory"
	.string "You're such a bully! Look you made Mei\n"
	.string "cry!$"

WeenieHutJr_Text_MeiAndLisaPost::
# 727 "data//maps/WeenieHutJr/scripts.pory"
	.string "Get out of here! I wish you'd never\n"
	.string "lived!$"
