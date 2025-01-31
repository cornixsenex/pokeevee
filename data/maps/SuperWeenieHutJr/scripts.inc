SuperWeenieHutJr_MapScripts::
	.byte 0


SuperWeenieHutJr_EventScript_DoorTriggerL::
# 28 "data//maps/SuperWeenieHutJr/scripts.pory"
	lock
# 29 "data//maps/SuperWeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 30 "data//maps/SuperWeenieHutJr/scripts.pory"
	waitmovement 0
# 31 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_DoorBlock
# 32 "data//maps/SuperWeenieHutJr/scripts.pory"
	release
	return


SuperWeenieHutJr_EventScript_DoorTriggerR::
# 36 "data//maps/SuperWeenieHutJr/scripts.pory"
	lock
# 37 "data//maps/SuperWeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 38 "data//maps/SuperWeenieHutJr/scripts.pory"
	waitmovement 0
# 39 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_DoorBlock
# 40 "data//maps/SuperWeenieHutJr/scripts.pory"
	release
	return


SuperWeenieHutJr_EventScript_DoorBlock::
# 44 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_DoorBlockA
# 45 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
# 46 "data//maps/SuperWeenieHutJr/scripts.pory"
	checkitem ITEM_INSURANCE_CARD, 1
# 47 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SuperWeenieHutJr_EventScript_DoorBlock_2
# 53 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_DoorBlockB
# 54 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
# 55 "data//maps/SuperWeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 56 "data//maps/SuperWeenieHutJr/scripts.pory"
	waitmovement 0
SuperWeenieHutJr_EventScript_DoorBlock_1:
	return

SuperWeenieHutJr_EventScript_DoorBlock_2:
# 48 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_SWHJ_STATE, 1
# 49 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_DoorBlockC
# 50 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
	goto SuperWeenieHutJr_EventScript_DoorBlock_1


SuperWeenieHutJr_EventScript_GraduateL::
# 62 "data//maps/SuperWeenieHutJr/scripts.pory"
	lock
# 63 "data//maps/SuperWeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 64 "data//maps/SuperWeenieHutJr/scripts.pory"
	waitmovement 0
# 65 "data//maps/SuperWeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 66 "data//maps/SuperWeenieHutJr/scripts.pory"
	waitmovement 0
# 67 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_Graduate
# 68 "data//maps/SuperWeenieHutJr/scripts.pory"
	release
	return


SuperWeenieHutJr_EventScript_GraduateR::
# 72 "data//maps/SuperWeenieHutJr/scripts.pory"
	lock
# 73 "data//maps/SuperWeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 74 "data//maps/SuperWeenieHutJr/scripts.pory"
	waitmovement 0
# 75 "data//maps/SuperWeenieHutJr/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 76 "data//maps/SuperWeenieHutJr/scripts.pory"
	waitmovement 0
# 77 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_Graduate
# 78 "data//maps/SuperWeenieHutJr/scripts.pory"
	release
	return


SuperWeenieHutJr_EventScript_Graduate::
# 82 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_SWHJ_STATE, 3
# 83 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_Graduate
# 84 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
	return


SuperWeenieHutJr_EventScript_TicTacToe_Purple::
# 102 "data//maps/SuperWeenieHutJr/scripts.pory"
	lock
# 103 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_E, 1
# 104 "data//maps/SuperWeenieHutJr/scripts.pory"
	faceplayer
# 105 "data//maps/SuperWeenieHutJr/scripts.pory"
	goto_if_set FLAG_TEMP_1, SuperWeenieHutJr_EventScript_TicTacToe_Purple_2
# 108 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_YesNo, MSGBOX_YESNO
# 109 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Purple_5
# 113 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Decline
SuperWeenieHutJr_EventScript_TicTacToe_Purple_1:
# 116 "data//maps/SuperWeenieHutJr/scripts.pory"
	release
	return

SuperWeenieHutJr_EventScript_TicTacToe_Purple_2:
# 106 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Post
	goto SuperWeenieHutJr_EventScript_TicTacToe_Purple_1

SuperWeenieHutJr_EventScript_TicTacToe_Purple_5:
# 110 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetToken
	goto SuperWeenieHutJr_EventScript_TicTacToe_Purple_1


SuperWeenieHutJr_EventScript_TicTacToe_Blue::
# 120 "data//maps/SuperWeenieHutJr/scripts.pory"
	lock
# 121 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_E, 2
# 122 "data//maps/SuperWeenieHutJr/scripts.pory"
	faceplayer
# 123 "data//maps/SuperWeenieHutJr/scripts.pory"
	goto_if_set FLAG_TEMP_2, SuperWeenieHutJr_EventScript_TicTacToe_Blue_2
# 126 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_YesNo, MSGBOX_YESNO
# 127 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Blue_5
# 131 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Decline
SuperWeenieHutJr_EventScript_TicTacToe_Blue_1:
# 134 "data//maps/SuperWeenieHutJr/scripts.pory"
	release
	return

SuperWeenieHutJr_EventScript_TicTacToe_Blue_2:
# 124 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Post
	goto SuperWeenieHutJr_EventScript_TicTacToe_Blue_1

SuperWeenieHutJr_EventScript_TicTacToe_Blue_5:
# 128 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetToken
	goto SuperWeenieHutJr_EventScript_TicTacToe_Blue_1


SuperWeenieHutJr_EventScript_TicTacToe_Orange::
# 138 "data//maps/SuperWeenieHutJr/scripts.pory"
	lock
# 139 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_E, 3
# 140 "data//maps/SuperWeenieHutJr/scripts.pory"
	faceplayer
# 141 "data//maps/SuperWeenieHutJr/scripts.pory"
	goto_if_set FLAG_TEMP_3, SuperWeenieHutJr_EventScript_TicTacToe_Orange_2
# 144 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_YesNo, MSGBOX_YESNO
# 145 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Orange_5
# 149 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Decline
SuperWeenieHutJr_EventScript_TicTacToe_Orange_1:
# 152 "data//maps/SuperWeenieHutJr/scripts.pory"
	release
	return

SuperWeenieHutJr_EventScript_TicTacToe_Orange_2:
# 142 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Post
	goto SuperWeenieHutJr_EventScript_TicTacToe_Orange_1

SuperWeenieHutJr_EventScript_TicTacToe_Orange_5:
# 146 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetToken
	goto SuperWeenieHutJr_EventScript_TicTacToe_Orange_1


SuperWeenieHutJr_EventScript_TicTacToe_Pink::
# 156 "data//maps/SuperWeenieHutJr/scripts.pory"
	lock
# 157 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_E, 4
# 158 "data//maps/SuperWeenieHutJr/scripts.pory"
	faceplayer
# 159 "data//maps/SuperWeenieHutJr/scripts.pory"
	goto_if_set FLAG_TEMP_4, SuperWeenieHutJr_EventScript_TicTacToe_Pink_2
# 162 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_YesNo, MSGBOX_YESNO
# 163 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Pink_5
# 167 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Decline
SuperWeenieHutJr_EventScript_TicTacToe_Pink_1:
# 170 "data//maps/SuperWeenieHutJr/scripts.pory"
	release
	return

SuperWeenieHutJr_EventScript_TicTacToe_Pink_2:
# 160 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Post
	goto SuperWeenieHutJr_EventScript_TicTacToe_Pink_1

SuperWeenieHutJr_EventScript_TicTacToe_Pink_5:
# 164 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetToken
	goto SuperWeenieHutJr_EventScript_TicTacToe_Pink_1


SuperWeenieHutJr_EventScript_TicTacToe_ClearGame::
# 174 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 0
# 175 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_D, 0
# 176 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 0
# 177 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 0
# 178 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 0
# 179 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 0
# 180 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 0
# 181 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 0
# 182 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 0
# 183 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 0
# 184 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 0
	return


SuperWeenieHutJr_EventScript_TicTacToe_GetToken::
# 189 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_ClearGame
# 190 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_XYes, MSGBOX_YESNO
# 191 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetToken_2
# 194 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_D, 2
SuperWeenieHutJr_EventScript_TicTacToe_GetToken_1:
# 196 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
# 197 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Brain
	return

SuperWeenieHutJr_EventScript_TicTacToe_GetToken_2:
# 192 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_D, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetToken_1


SuperWeenieHutJr_EventScript_TicTacToe_Brain::
# 204 "data//maps/SuperWeenieHutJr/scripts.pory"
	special DrawWholeMapView
# 208 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_93
SuperWeenieHutJr_EventScript_TicTacToe_Brain_89:
# 214 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_88
SuperWeenieHutJr_EventScript_TicTacToe_Brain_84:
# 222 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_83
SuperWeenieHutJr_EventScript_TicTacToe_Brain_79:
# 228 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_78
SuperWeenieHutJr_EventScript_TicTacToe_Brain_74:
# 236 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_73
SuperWeenieHutJr_EventScript_TicTacToe_Brain_69:
# 242 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_68
SuperWeenieHutJr_EventScript_TicTacToe_Brain_64:
# 250 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_63
SuperWeenieHutJr_EventScript_TicTacToe_Brain_59:
# 256 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_58
SuperWeenieHutJr_EventScript_TicTacToe_Brain_54:
# 264 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_53
SuperWeenieHutJr_EventScript_TicTacToe_Brain_49:
# 270 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_48
SuperWeenieHutJr_EventScript_TicTacToe_Brain_44:
# 278 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_43
SuperWeenieHutJr_EventScript_TicTacToe_Brain_39:
# 284 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_38
SuperWeenieHutJr_EventScript_TicTacToe_Brain_34:
# 292 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_33
SuperWeenieHutJr_EventScript_TicTacToe_Brain_29:
# 298 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_28
SuperWeenieHutJr_EventScript_TicTacToe_Brain_24:
# 306 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_23
SuperWeenieHutJr_EventScript_TicTacToe_Brain_19:
# 312 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_18
SuperWeenieHutJr_EventScript_TicTacToe_Brain_17:
# 322 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 10
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_147
# 324 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 9
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_148
# 329 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 8
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_149
# 331 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 7
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_150
# 333 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 6
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_151
# 335 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 5
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_152
# 337 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_153
# 339 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_154
# 341 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_155
# 343 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_156
# 346 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 1
SuperWeenieHutJr_EventScript_TicTacToe_Brain_146:
# 350 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_168
# 352 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_169
# 354 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_170
# 356 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_171
# 358 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 5
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_172
# 360 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 6
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_173
# 362 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 7
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_174
# 364 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 8
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_175
# 366 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_C, 9
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_176
# 369 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_EventScript_TicTacToe_Brain_Text_1
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_1:
# 209 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_98
# 212 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_2:
# 215 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_101
# 218 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_3:
# 223 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_104
# 226 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_4:
# 229 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_107
# 232 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_5:
# 237 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_110
# 240 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_6:
# 243 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_113
# 246 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_7:
# 251 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_116
# 254 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_8:
# 257 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_119
# 260 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_9:
# 265 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_122
# 268 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_10:
# 271 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_125
# 274 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_11:
# 279 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_128
# 282 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_12:
# 285 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_131
# 288 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_13:
# 293 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_134
# 296 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_14:
# 299 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_137
# 302 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_15:
# 307 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_140
# 310 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_16:
# 313 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_143
# 316 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Lose
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_18:
# 312 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_20
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_17

SuperWeenieHutJr_EventScript_TicTacToe_Brain_20:
# 312 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_16
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_17

SuperWeenieHutJr_EventScript_TicTacToe_Brain_23:
# 306 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_25
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_19

SuperWeenieHutJr_EventScript_TicTacToe_Brain_25:
# 306 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_15
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_19

SuperWeenieHutJr_EventScript_TicTacToe_Brain_28:
# 298 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_30
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_24

SuperWeenieHutJr_EventScript_TicTacToe_Brain_30:
# 298 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_14
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_24

SuperWeenieHutJr_EventScript_TicTacToe_Brain_33:
# 292 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_35
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_29

SuperWeenieHutJr_EventScript_TicTacToe_Brain_35:
# 292 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_13
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_29

SuperWeenieHutJr_EventScript_TicTacToe_Brain_38:
# 284 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_6, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_40
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_34

SuperWeenieHutJr_EventScript_TicTacToe_Brain_40:
# 284 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_12
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_34

SuperWeenieHutJr_EventScript_TicTacToe_Brain_43:
# 278 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_6, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_45
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_39

SuperWeenieHutJr_EventScript_TicTacToe_Brain_45:
# 278 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_11
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_39

SuperWeenieHutJr_EventScript_TicTacToe_Brain_48:
# 270 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_50
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_44

SuperWeenieHutJr_EventScript_TicTacToe_Brain_50:
# 270 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_8, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_10
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_44

SuperWeenieHutJr_EventScript_TicTacToe_Brain_53:
# 264 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_55
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_49

SuperWeenieHutJr_EventScript_TicTacToe_Brain_55:
# 264 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_8, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_9
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_49

SuperWeenieHutJr_EventScript_TicTacToe_Brain_58:
# 256 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_60
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_54

SuperWeenieHutJr_EventScript_TicTacToe_Brain_60:
# 256 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_8
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_54

SuperWeenieHutJr_EventScript_TicTacToe_Brain_63:
# 250 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_65
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_59

SuperWeenieHutJr_EventScript_TicTacToe_Brain_65:
# 250 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_7
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_59

SuperWeenieHutJr_EventScript_TicTacToe_Brain_68:
# 242 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_8, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_70
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_64

SuperWeenieHutJr_EventScript_TicTacToe_Brain_70:
# 242 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_6
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_64

SuperWeenieHutJr_EventScript_TicTacToe_Brain_73:
# 236 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_8, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_75
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_69

SuperWeenieHutJr_EventScript_TicTacToe_Brain_75:
# 236 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_5
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_69

SuperWeenieHutJr_EventScript_TicTacToe_Brain_78:
# 228 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_80
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_74

SuperWeenieHutJr_EventScript_TicTacToe_Brain_80:
# 228 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_6, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_4
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_74

SuperWeenieHutJr_EventScript_TicTacToe_Brain_83:
# 222 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_85
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_79

SuperWeenieHutJr_EventScript_TicTacToe_Brain_85:
# 222 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_6, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_3
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_79

SuperWeenieHutJr_EventScript_TicTacToe_Brain_88:
# 214 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_90
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_84

SuperWeenieHutJr_EventScript_TicTacToe_Brain_90:
# 214 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_2
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_84

SuperWeenieHutJr_EventScript_TicTacToe_Brain_93:
# 208 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_95
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_89

SuperWeenieHutJr_EventScript_TicTacToe_Brain_95:
# 208 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Brain_1
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_89

SuperWeenieHutJr_EventScript_TicTacToe_Brain_98:
# 210 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_101:
# 216 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_104:
# 224 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_107:
# 230 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_110:
# 238 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_113:
# 244 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_116:
# 252 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_119:
# 258 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_122:
# 266 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_125:
# 272 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_128:
# 280 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_131:
# 286 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_134:
# 294 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_137:
# 300 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_140:
# 308 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_143:
# 314 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Win
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_147:
# 323 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Tie
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_146

SuperWeenieHutJr_EventScript_TicTacToe_Brain_148:
# 325 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_EventScript_TicTacToe_Brain_Text_0
# 326 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
# 327 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 10
# 328 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Tie
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_146

SuperWeenieHutJr_EventScript_TicTacToe_Brain_149:
# 330 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 9
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_146

SuperWeenieHutJr_EventScript_TicTacToe_Brain_150:
# 332 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 8
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_146

SuperWeenieHutJr_EventScript_TicTacToe_Brain_151:
# 334 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 7
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_146

SuperWeenieHutJr_EventScript_TicTacToe_Brain_152:
# 336 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 6
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_146

SuperWeenieHutJr_EventScript_TicTacToe_Brain_153:
# 338 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 5
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_146

SuperWeenieHutJr_EventScript_TicTacToe_Brain_154:
# 340 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 4
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_146

SuperWeenieHutJr_EventScript_TicTacToe_Brain_155:
# 342 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 3
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_146

SuperWeenieHutJr_EventScript_TicTacToe_Brain_156:
# 344 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_C, 2
	goto SuperWeenieHutJr_EventScript_TicTacToe_Brain_146

SuperWeenieHutJr_EventScript_TicTacToe_Brain_168:
# 351 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetX
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_169:
# 353 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetO
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_170:
# 355 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetX
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_171:
# 357 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetO
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_172:
# 359 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetX
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_173:
# 361 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetO
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_174:
# 363 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetX
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_175:
# 365 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetO
	return

SuperWeenieHutJr_EventScript_TicTacToe_Brain_176:
# 367 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetX
	return


SuperWeenieHutJr_EventScript_TicTacToe_GetX::
# 375 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_2
# 380 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove
SuperWeenieHutJr_EventScript_TicTacToe_GetX_1:
# 386 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_6
SuperWeenieHutJr_EventScript_TicTacToe_GetX_5:
# 418 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_9
SuperWeenieHutJr_EventScript_TicTacToe_GetX_8:
# 450 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_30
SuperWeenieHutJr_EventScript_TicTacToe_GetX_29:
# 482 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_51
SuperWeenieHutJr_EventScript_TicTacToe_GetX_50:
# 513 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Brain
	return

SuperWeenieHutJr_EventScript_TicTacToe_GetX_2:
# 376 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_1

SuperWeenieHutJr_EventScript_TicTacToe_GetX_6:
# 387 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_11
# 390 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_12
# 393 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_13
# 396 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_14
# 399 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 5
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_15
# 402 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 6
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_16
# 405 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_17
# 408 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_18
# 411 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 9
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_19
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_5

SuperWeenieHutJr_EventScript_TicTacToe_GetX_9:
# 419 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_32
# 422 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_33
# 425 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_34
# 428 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_35
# 431 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 5
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_36
# 434 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 6
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_37
# 437 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_38
# 440 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_39
# 443 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 9
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_40
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_8

SuperWeenieHutJr_EventScript_TicTacToe_GetX_11:
# 388 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 1
# 389 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 6, 8, METATILE_weeniehutjr_TicTacToe_PurpleX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_5

SuperWeenieHutJr_EventScript_TicTacToe_GetX_12:
# 391 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 1
# 392 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 7, 8, METATILE_weeniehutjr_TicTacToe_PurpleX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_5

SuperWeenieHutJr_EventScript_TicTacToe_GetX_13:
# 394 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 1
# 395 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 8, 8, METATILE_weeniehutjr_TicTacToe_PurpleX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_5

SuperWeenieHutJr_EventScript_TicTacToe_GetX_14:
# 397 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 1
# 398 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 6, 9, METATILE_weeniehutjr_TicTacToe_PurpleX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_5

SuperWeenieHutJr_EventScript_TicTacToe_GetX_15:
# 400 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 1
# 401 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 7, 9, METATILE_weeniehutjr_TicTacToe_PurpleX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_5

SuperWeenieHutJr_EventScript_TicTacToe_GetX_16:
# 403 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 1
# 404 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 8, 9, METATILE_weeniehutjr_TicTacToe_PurpleX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_5

SuperWeenieHutJr_EventScript_TicTacToe_GetX_17:
# 406 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 1
# 407 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 6, 10, METATILE_weeniehutjr_TicTacToe_PurpleX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_5

SuperWeenieHutJr_EventScript_TicTacToe_GetX_18:
# 409 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 1
# 410 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 7, 10, METATILE_weeniehutjr_TicTacToe_PurpleX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_5

SuperWeenieHutJr_EventScript_TicTacToe_GetX_19:
# 412 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 1
# 413 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 8, 10, METATILE_weeniehutjr_TicTacToe_PurpleX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_5

SuperWeenieHutJr_EventScript_TicTacToe_GetX_30:
# 451 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_53
# 454 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_54
# 457 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_55
# 460 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_56
# 463 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 5
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_57
# 466 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 6
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_58
# 469 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_59
# 472 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_60
# 475 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 9
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_61
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_29

SuperWeenieHutJr_EventScript_TicTacToe_GetX_32:
# 420 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 1
# 421 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 11, 8, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_8

SuperWeenieHutJr_EventScript_TicTacToe_GetX_33:
# 423 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 1
# 424 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 12, 8, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_8

SuperWeenieHutJr_EventScript_TicTacToe_GetX_34:
# 426 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 1
# 427 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 13, 8, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_8

SuperWeenieHutJr_EventScript_TicTacToe_GetX_35:
# 429 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 1
# 430 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 11, 9, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_8

SuperWeenieHutJr_EventScript_TicTacToe_GetX_36:
# 432 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 1
# 433 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 12, 9, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_8

SuperWeenieHutJr_EventScript_TicTacToe_GetX_37:
# 435 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 1
# 436 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 13, 9, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_8

SuperWeenieHutJr_EventScript_TicTacToe_GetX_38:
# 438 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 1
# 439 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 11, 10, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_8

SuperWeenieHutJr_EventScript_TicTacToe_GetX_39:
# 441 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 1
# 442 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 12, 10, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_8

SuperWeenieHutJr_EventScript_TicTacToe_GetX_40:
# 444 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 1
# 445 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 13, 10, METATILE_weeniehutjr_TicTacToe_BlueX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_8

SuperWeenieHutJr_EventScript_TicTacToe_GetX_51:
# 483 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_71
# 486 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_72
# 489 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_73
# 492 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_74
# 495 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 5
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_75
# 498 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 6
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_76
# 501 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_77
# 504 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_78
# 507 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 9
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetX_79
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_50

SuperWeenieHutJr_EventScript_TicTacToe_GetX_53:
# 452 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 1
# 453 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 6, 12, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_29

SuperWeenieHutJr_EventScript_TicTacToe_GetX_54:
# 455 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 1
# 456 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 7, 12, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_29

SuperWeenieHutJr_EventScript_TicTacToe_GetX_55:
# 458 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 1
# 459 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 8, 12, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_29

SuperWeenieHutJr_EventScript_TicTacToe_GetX_56:
# 461 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 1
# 462 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 6, 13, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_29

SuperWeenieHutJr_EventScript_TicTacToe_GetX_57:
# 464 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 1
# 465 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 7, 13, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_29

SuperWeenieHutJr_EventScript_TicTacToe_GetX_58:
# 467 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 1
# 468 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 8, 13, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_29

SuperWeenieHutJr_EventScript_TicTacToe_GetX_59:
# 470 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 1
# 471 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 6, 14, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_29

SuperWeenieHutJr_EventScript_TicTacToe_GetX_60:
# 473 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 1
# 474 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 7, 14, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_29

SuperWeenieHutJr_EventScript_TicTacToe_GetX_61:
# 476 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 1
# 477 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 8, 14, METATILE_weeniehutjr_TicTacToe_OrangeX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_29

SuperWeenieHutJr_EventScript_TicTacToe_GetX_71:
# 484 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 1
# 485 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 11, 12, METATILE_weeniehutjr_TicTacToe_PinkX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_50

SuperWeenieHutJr_EventScript_TicTacToe_GetX_72:
# 487 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 1
# 488 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 12, 12, METATILE_weeniehutjr_TicTacToe_PinkX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_50

SuperWeenieHutJr_EventScript_TicTacToe_GetX_73:
# 490 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 1
# 491 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 13, 12, METATILE_weeniehutjr_TicTacToe_PinkX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_50

SuperWeenieHutJr_EventScript_TicTacToe_GetX_74:
# 493 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 1
# 494 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 11, 13, METATILE_weeniehutjr_TicTacToe_PinkX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_50

SuperWeenieHutJr_EventScript_TicTacToe_GetX_75:
# 496 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 1
# 497 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 12, 13, METATILE_weeniehutjr_TicTacToe_PinkX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_50

SuperWeenieHutJr_EventScript_TicTacToe_GetX_76:
# 499 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 1
# 500 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 13, 13, METATILE_weeniehutjr_TicTacToe_PinkX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_50

SuperWeenieHutJr_EventScript_TicTacToe_GetX_77:
# 502 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 1
# 503 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 11, 14, METATILE_weeniehutjr_TicTacToe_PinkX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_50

SuperWeenieHutJr_EventScript_TicTacToe_GetX_78:
# 505 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 1
# 506 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 12, 14, METATILE_weeniehutjr_TicTacToe_PinkX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_50

SuperWeenieHutJr_EventScript_TicTacToe_GetX_79:
# 508 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 1
# 509 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 13, 14, METATILE_weeniehutjr_TicTacToe_PinkX, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetX_50


SuperWeenieHutJr_EventScript_TicTacToe_GetO::
# 518 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_2
# 521 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove
SuperWeenieHutJr_EventScript_TicTacToe_GetO_1:
# 528 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_6
SuperWeenieHutJr_EventScript_TicTacToe_GetO_5:
# 560 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_9
SuperWeenieHutJr_EventScript_TicTacToe_GetO_8:
# 592 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_30
SuperWeenieHutJr_EventScript_TicTacToe_GetO_29:
# 624 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_51
SuperWeenieHutJr_EventScript_TicTacToe_GetO_50:
# 655 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_Brain
	return

SuperWeenieHutJr_EventScript_TicTacToe_GetO_2:
# 519 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_1

SuperWeenieHutJr_EventScript_TicTacToe_GetO_6:
# 529 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_11
# 532 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_12
# 535 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_13
# 538 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_14
# 541 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 5
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_15
# 544 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 6
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_16
# 547 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_17
# 550 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_18
# 553 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 9
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_19
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_5

SuperWeenieHutJr_EventScript_TicTacToe_GetO_9:
# 561 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_32
# 564 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_33
# 567 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_34
# 570 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_35
# 573 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 5
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_36
# 576 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 6
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_37
# 579 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_38
# 582 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_39
# 585 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 9
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_40
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_8

SuperWeenieHutJr_EventScript_TicTacToe_GetO_11:
# 530 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 2
# 531 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 6, 8, METATILE_weeniehutjr_TicTacToe_PurpleO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_5

SuperWeenieHutJr_EventScript_TicTacToe_GetO_12:
# 533 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 2
# 534 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 7, 8, METATILE_weeniehutjr_TicTacToe_PurpleO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_5

SuperWeenieHutJr_EventScript_TicTacToe_GetO_13:
# 536 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 2
# 537 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 8, 8, METATILE_weeniehutjr_TicTacToe_PurpleO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_5

SuperWeenieHutJr_EventScript_TicTacToe_GetO_14:
# 539 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 2
# 540 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 6, 9, METATILE_weeniehutjr_TicTacToe_PurpleO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_5

SuperWeenieHutJr_EventScript_TicTacToe_GetO_15:
# 542 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 2
# 543 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 7, 9, METATILE_weeniehutjr_TicTacToe_PurpleO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_5

SuperWeenieHutJr_EventScript_TicTacToe_GetO_16:
# 545 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 2
# 546 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 8, 9, METATILE_weeniehutjr_TicTacToe_PurpleO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_5

SuperWeenieHutJr_EventScript_TicTacToe_GetO_17:
# 548 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 2
# 549 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 6, 10, METATILE_weeniehutjr_TicTacToe_PurpleO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_5

SuperWeenieHutJr_EventScript_TicTacToe_GetO_18:
# 551 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 2
# 552 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 7, 10, METATILE_weeniehutjr_TicTacToe_PurpleO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_5

SuperWeenieHutJr_EventScript_TicTacToe_GetO_19:
# 554 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 2
# 555 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 8, 10, METATILE_weeniehutjr_TicTacToe_PurpleO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_5

SuperWeenieHutJr_EventScript_TicTacToe_GetO_30:
# 593 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_53
# 596 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_54
# 599 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_55
# 602 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_56
# 605 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 5
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_57
# 608 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 6
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_58
# 611 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_59
# 614 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_60
# 617 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 9
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_61
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_29

SuperWeenieHutJr_EventScript_TicTacToe_GetO_32:
# 562 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 2
# 563 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 11, 8, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_8

SuperWeenieHutJr_EventScript_TicTacToe_GetO_33:
# 565 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 2
# 566 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 12, 8, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_8

SuperWeenieHutJr_EventScript_TicTacToe_GetO_34:
# 568 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 2
# 569 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 13, 8, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_8

SuperWeenieHutJr_EventScript_TicTacToe_GetO_35:
# 571 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 2
# 572 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 11, 9, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_8

SuperWeenieHutJr_EventScript_TicTacToe_GetO_36:
# 574 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 2
# 575 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 12, 9, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_8

SuperWeenieHutJr_EventScript_TicTacToe_GetO_37:
# 577 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 2
# 578 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 13, 9, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_8

SuperWeenieHutJr_EventScript_TicTacToe_GetO_38:
# 580 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 2
# 581 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 11, 10, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_8

SuperWeenieHutJr_EventScript_TicTacToe_GetO_39:
# 583 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 2
# 584 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 12, 10, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_8

SuperWeenieHutJr_EventScript_TicTacToe_GetO_40:
# 586 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 2
# 587 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 13, 10, METATILE_weeniehutjr_TicTacToe_BlueO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_8

SuperWeenieHutJr_EventScript_TicTacToe_GetO_51:
# 625 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_71
# 628 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_72
# 631 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_73
# 634 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_74
# 637 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 5
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_75
# 640 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 6
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_76
# 643 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_77
# 646 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_78
# 649 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_B, 9
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetO_79
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_50

SuperWeenieHutJr_EventScript_TicTacToe_GetO_53:
# 594 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 2
# 595 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 6, 12, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_29

SuperWeenieHutJr_EventScript_TicTacToe_GetO_54:
# 597 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 2
# 598 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 7, 12, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_29

SuperWeenieHutJr_EventScript_TicTacToe_GetO_55:
# 600 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 2
# 601 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 8, 12, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_29

SuperWeenieHutJr_EventScript_TicTacToe_GetO_56:
# 603 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 2
# 604 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 6, 13, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_29

SuperWeenieHutJr_EventScript_TicTacToe_GetO_57:
# 606 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 2
# 607 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 7, 13, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_29

SuperWeenieHutJr_EventScript_TicTacToe_GetO_58:
# 609 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 2
# 610 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 8, 13, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_29

SuperWeenieHutJr_EventScript_TicTacToe_GetO_59:
# 612 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 2
# 613 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 6, 14, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_29

SuperWeenieHutJr_EventScript_TicTacToe_GetO_60:
# 615 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 2
# 616 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 7, 14, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_29

SuperWeenieHutJr_EventScript_TicTacToe_GetO_61:
# 618 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 2
# 619 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 8, 14, METATILE_weeniehutjr_TicTacToe_OrangeO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_29

SuperWeenieHutJr_EventScript_TicTacToe_GetO_71:
# 626 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_1, 2
# 627 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 11, 12, METATILE_weeniehutjr_TicTacToe_PinkO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_50

SuperWeenieHutJr_EventScript_TicTacToe_GetO_72:
# 629 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_2, 2
# 630 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 12, 12, METATILE_weeniehutjr_TicTacToe_PinkO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_50

SuperWeenieHutJr_EventScript_TicTacToe_GetO_73:
# 632 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_3, 2
# 633 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 13, 12, METATILE_weeniehutjr_TicTacToe_PinkO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_50

SuperWeenieHutJr_EventScript_TicTacToe_GetO_74:
# 635 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_4, 2
# 636 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 11, 13, METATILE_weeniehutjr_TicTacToe_PinkO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_50

SuperWeenieHutJr_EventScript_TicTacToe_GetO_75:
# 638 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_5, 2
# 639 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 12, 13, METATILE_weeniehutjr_TicTacToe_PinkO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_50

SuperWeenieHutJr_EventScript_TicTacToe_GetO_76:
# 641 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_6, 2
# 642 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 13, 13, METATILE_weeniehutjr_TicTacToe_PinkO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_50

SuperWeenieHutJr_EventScript_TicTacToe_GetO_77:
# 644 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_7, 2
# 645 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 11, 14, METATILE_weeniehutjr_TicTacToe_PinkO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_50

SuperWeenieHutJr_EventScript_TicTacToe_GetO_78:
# 647 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_8, 2
# 648 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 12, 14, METATILE_weeniehutjr_TicTacToe_PinkO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_50

SuperWeenieHutJr_EventScript_TicTacToe_GetO_79:
# 650 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_9, 2
# 651 "data//maps/SuperWeenieHutJr/scripts.pory"
	setmetatile 13, 14, METATILE_weeniehutjr_TicTacToe_PinkO, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetO_50


SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove::
# 659 "data//maps/SuperWeenieHutJr/scripts.pory"
	multichoicegrid 0, 0, MULTI_TICTACTOE_CHOOSE_MOVE, 3 TRUE
# 662 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_2
# 670 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_3
# 678 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_4
# 686 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_5
# 694 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_6
# 702 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_7
# 710 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_8
# 718 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_9
# 726 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_10
# 735 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_BottomOfGetPlayerMove
# 736 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1:
	return

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_2:
# 663 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_21
# 668 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_3:
# 671 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_24
# 676 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 2
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_4:
# 679 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_27
# 684 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 3
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_5:
# 687 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_30
# 692 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 4
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_6:
# 695 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_33
# 700 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 5
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_7:
# 703 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_36
# 708 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 6
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_8:
# 711 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_39
# 716 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 7
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_9:
# 719 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_42
# 724 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 8
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_10:
# 727 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_45
# 732 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 9
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_21:
# 664 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 665 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
# 666 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_24:
# 672 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 673 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
# 674 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_27:
# 680 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 681 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
# 682 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_30:
# 688 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 689 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
# 690 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_33:
# 696 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 697 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
# 698 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_36:
# 704 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 705 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
# 706 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_39:
# 712 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 713 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
# 714 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_42:
# 720 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 721 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
# 722 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_45:
# 728 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_BadMove
# 729 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
# 730 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetPlayerMove_1


SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove::
# 745 "data//maps/SuperWeenieHutJr/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 748 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_2
# 754 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_3
# 760 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_4
# 766 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_5
# 772 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_6
# 778 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_7
# 784 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_8
# 790 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_9
# 796 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_10
# 803 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove
SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1:
	return

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_2:
# 749 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_21
# 752 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_3:
# 755 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_24
# 758 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 2
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_4:
# 761 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_27
# 764 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 3
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_5:
# 767 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_30
# 770 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 4
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_6:
# 773 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_33
# 776 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 5
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_7:
# 779 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_36
# 782 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 6
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_8:
# 785 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_7, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_39
# 788 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 7
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_9:
# 791 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_42
# 794 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 8
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_10:
# 797 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_gt SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_45
# 800 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_B, 9
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_21:
# 750 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_24:
# 756 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_27:
# 762 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_30:
# 768 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_33:
# 774 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_36:
# 780 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_39:
# 786 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_42:
# 792 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1

SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_45:
# 798 "data//maps/SuperWeenieHutJr/scripts.pory"
	call SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove
	goto SuperWeenieHutJr_EventScript_TicTacToe_GetCPUMove_1


SuperWeenieHutJr_EventScript_TicTacToe_Win::
# 812 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_F, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Win_2
# 815 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_F, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Win_3
# 817 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_F, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Win_4
# 819 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Win_5
# 822 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_EventScript_TicTacToe_Win_Text_0
SuperWeenieHutJr_EventScript_TicTacToe_Win_1:
# 825 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Win_12
SuperWeenieHutJr_EventScript_TicTacToe_Win_11:
# 828 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Win_15
SuperWeenieHutJr_EventScript_TicTacToe_Win_14:
# 831 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Win_18
SuperWeenieHutJr_EventScript_TicTacToe_Win_17:
# 834 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Win_21
SuperWeenieHutJr_EventScript_TicTacToe_Win_20:
# 838 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Lost
# 839 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
	end

SuperWeenieHutJr_EventScript_TicTacToe_Win_2:
# 813 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_SWHJ_STATE, 2
# 814 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_F, 4
	goto SuperWeenieHutJr_EventScript_TicTacToe_Win_1

SuperWeenieHutJr_EventScript_TicTacToe_Win_3:
# 816 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_F, 3
	goto SuperWeenieHutJr_EventScript_TicTacToe_Win_1

SuperWeenieHutJr_EventScript_TicTacToe_Win_4:
# 818 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_F, 2
	goto SuperWeenieHutJr_EventScript_TicTacToe_Win_1

SuperWeenieHutJr_EventScript_TicTacToe_Win_5:
# 820 "data//maps/SuperWeenieHutJr/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto SuperWeenieHutJr_EventScript_TicTacToe_Win_1

SuperWeenieHutJr_EventScript_TicTacToe_Win_12:
# 826 "data//maps/SuperWeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_1
	goto SuperWeenieHutJr_EventScript_TicTacToe_Win_11

SuperWeenieHutJr_EventScript_TicTacToe_Win_15:
# 829 "data//maps/SuperWeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_2
	goto SuperWeenieHutJr_EventScript_TicTacToe_Win_14

SuperWeenieHutJr_EventScript_TicTacToe_Win_18:
# 832 "data//maps/SuperWeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_3
	goto SuperWeenieHutJr_EventScript_TicTacToe_Win_17

SuperWeenieHutJr_EventScript_TicTacToe_Win_21:
# 835 "data//maps/SuperWeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_4
	goto SuperWeenieHutJr_EventScript_TicTacToe_Win_20


SuperWeenieHutJr_EventScript_TicTacToe_Lose::
# 844 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Lose_2
SuperWeenieHutJr_EventScript_TicTacToe_Lose_1:
# 847 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Lose_5
SuperWeenieHutJr_EventScript_TicTacToe_Lose_4:
# 850 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Lose_8
SuperWeenieHutJr_EventScript_TicTacToe_Lose_7:
# 853 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Lose_11
SuperWeenieHutJr_EventScript_TicTacToe_Lose_10:
# 856 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Won
# 857 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
	end

SuperWeenieHutJr_EventScript_TicTacToe_Lose_2:
# 845 "data//maps/SuperWeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_1
	goto SuperWeenieHutJr_EventScript_TicTacToe_Lose_1

SuperWeenieHutJr_EventScript_TicTacToe_Lose_5:
# 848 "data//maps/SuperWeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_2
	goto SuperWeenieHutJr_EventScript_TicTacToe_Lose_4

SuperWeenieHutJr_EventScript_TicTacToe_Lose_8:
# 851 "data//maps/SuperWeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_3
	goto SuperWeenieHutJr_EventScript_TicTacToe_Lose_7

SuperWeenieHutJr_EventScript_TicTacToe_Lose_11:
# 854 "data//maps/SuperWeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_4
	goto SuperWeenieHutJr_EventScript_TicTacToe_Lose_10


SuperWeenieHutJr_EventScript_TicTacToe_Tie::
# 864 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Tie_2
SuperWeenieHutJr_EventScript_TicTacToe_Tie_1:
# 867 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 2
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Tie_5
SuperWeenieHutJr_EventScript_TicTacToe_Tie_4:
# 870 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 3
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Tie_8
SuperWeenieHutJr_EventScript_TicTacToe_Tie_7:
# 873 "data//maps/SuperWeenieHutJr/scripts.pory"
	compare VAR_TEMP_E, 4
	goto_if_eq SuperWeenieHutJr_EventScript_TicTacToe_Tie_11
SuperWeenieHutJr_EventScript_TicTacToe_Tie_10:
# 876 "data//maps/SuperWeenieHutJr/scripts.pory"
	msgbox SuperWeenieHutJr_Text_TicTacToe_Tied
# 877 "data//maps/SuperWeenieHutJr/scripts.pory"
	closemessage
	end

SuperWeenieHutJr_EventScript_TicTacToe_Tie_2:
# 865 "data//maps/SuperWeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_1
	goto SuperWeenieHutJr_EventScript_TicTacToe_Tie_1

SuperWeenieHutJr_EventScript_TicTacToe_Tie_5:
# 868 "data//maps/SuperWeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_2
	goto SuperWeenieHutJr_EventScript_TicTacToe_Tie_4

SuperWeenieHutJr_EventScript_TicTacToe_Tie_8:
# 871 "data//maps/SuperWeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_3
	goto SuperWeenieHutJr_EventScript_TicTacToe_Tie_7

SuperWeenieHutJr_EventScript_TicTacToe_Tie_11:
# 874 "data//maps/SuperWeenieHutJr/scripts.pory"
	setflag FLAG_TEMP_4
	goto SuperWeenieHutJr_EventScript_TicTacToe_Tie_10


SuperWeenieHutJr_EventScript_TicTacToe_Brain_Text_0:
# 325 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "TURN 9 INTO 10$"

SuperWeenieHutJr_EventScript_TicTacToe_Brain_Text_1:
# 369 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "TOO MANY TURNS IDK BOTTOM OF BRAIN$"

SuperWeenieHutJr_EventScript_TicTacToe_Win_Text_0:
# 822 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "TOO MANY WINS IDK$"

SuperWeenieHutJr_Text_DoorBlockA::
# 882 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "Hello there cutie tootie sunshine ray!\n"
	.string "Welcome to Super Weenie Hut Junior's\l"
	.string "where we make smiles and brighten your\l"
	.string "day. We just can't wait for you to play\l"
	.string "with us but first thing let's make sure\l"
	.string "you're insured.$"

SuperWeenieHutJr_Text_DoorBlockB::
# 886 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "Oh noodles! That's no good looks like\n"
	.string "you don't have insurance. At Super\l"
	.string "Weenie Hut Junior's safety is our\l"
	.string "priority and we don't want anyone to\l"
	.string "get hurt. I'm sorry but you will have to\l"
	.string "come back after getting insured. Have a\l"
	.string "good day!$"

SuperWeenieHutJr_Text_DoorBlockC::
# 890 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "Good news! You've been insured through\n"
	.string "Weenie Hut General. Welcome to Super\l"
	.string "Weenie Hut Juniors I hope you have an\l"
	.string "awesome time$"

SuperWeenieHutJr_Text_Graduate::
# 894 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "Congratulations {PLAYER} I see that\n"
	.string "you are gifted and prepared to\l"
	.string "graduate. I hereby knight you Squire\l"
	.string "Weenie Hut and invite you to our\l"
	.string "exclusive lounge right down the street\l"
	.string "three buildings to west.$"

SuperWeenieHutJr_Text_TicTacToe_YesNo::
# 898 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "You want to play a game of Tic Tac Toe?$"

SuperWeenieHutJr_Text_TicTacToe_Decline::
# 902 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "When you're ready to play just let me\n"
	.string "know.$"

SuperWeenieHutJr_Text_TicTacToe_Post::
# 906 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "Good game, I guess...$"

SuperWeenieHutJr_Text_TicTacToe_XYes::
# 910 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "Would you like to be X?$"

SuperWeenieHutJr_Text_TicTacToe_Lost::
# 914 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "Looks like I lost. I can't believe you\n"
	.string "won!$"

SuperWeenieHutJr_Text_TicTacToe_Won::
# 918 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "Looks like I won. I can't believe I won!$"

SuperWeenieHutJr_Text_TicTacToe_Tied::
# 922 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "Oh rats! Looks like we've tied in a\n"
	.string "Meowth's game.$"

SuperWeenieHutJr_Text_TicTacToe_BadMove::
# 926 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "That one's already taken! Try again!$"

SuperWeenieHutJr_Text_BottomOfGetPlayerMove::
# 930 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "This is the bottom of GetPlayerMove\n"
	.string "something went wrong$"

SuperWeenieHutJr_Text_BottomOfGetCPUMove::
# 934 "data//maps/SuperWeenieHutJr/scripts.pory"
	.string "This is the bottom of GetCPUMove\n"
	.string "something went wrong$"
