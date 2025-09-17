AedesTerra_MapScripts::
	.byte 0


AedesTerra_Script_ResetPuzzle4::
# 15 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 16 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle4_2
AedesTerra_Script_ResetPuzzle4_1:
	end

AedesTerra_Script_ResetPuzzle4_2:
# 17 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesTerra_Script_ResetPuzzle4_4
# 23 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 24 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle4_1

AedesTerra_Script_ResetPuzzle4_4:
# 18 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 19 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS4
# 20 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS4, 8, 35
# 21 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS4
	goto AedesTerra_Script_ResetPuzzle4_1


AedesTerra_Script_ResetPuzzle5::
# 31 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 32 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle5_2
AedesTerra_Script_ResetPuzzle5_1:
	end

AedesTerra_Script_ResetPuzzle5_2:
# 33 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesTerra_Script_ResetPuzzle5_4
# 39 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 40 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle5_1

AedesTerra_Script_ResetPuzzle5_4:
# 34 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 35 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS5
# 36 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS5, 56, 37
# 37 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS5
	goto AedesTerra_Script_ResetPuzzle5_1


AedesTerra_Script_ResetPuzzle1::
# 47 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 48 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle1_2
AedesTerra_Script_ResetPuzzle1_1:
	end

AedesTerra_Script_ResetPuzzle1_2:
# 49 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesTerra_Script_ResetPuzzle1_4
# 58 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 59 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle1_1

AedesTerra_Script_ResetPuzzle1_4:
# 50 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 51 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS1
# 52 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE1
# 53 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS1, 14, 4
# 54 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE1, 8, 8
# 55 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS1
# 56 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE1
	goto AedesTerra_Script_ResetPuzzle1_1


AedesTerra_Script_ResetPuzzle2::
# 66 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 67 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle2_2
AedesTerra_Script_ResetPuzzle2_1:
	end

AedesTerra_Script_ResetPuzzle2_2:
# 68 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesTerra_Script_ResetPuzzle2_4
# 88 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 89 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle2_1

AedesTerra_Script_ResetPuzzle2_4:
# 69 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 70 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS2
# 71 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesTerra_Script_ResetPuzzle2_8
AedesTerra_Script_ResetPuzzle2_7:
# 75 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesTerra_Script_ResetPuzzle2_11
AedesTerra_Script_ResetPuzzle2_10:
# 79 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS2, 33, 11
# 80 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS2
# 81 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesTerra_Script_ResetPuzzle2_14
AedesTerra_Script_ResetPuzzle2_13:
# 84 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesTerra_Script_ResetPuzzle2_16
	goto AedesTerra_Script_ResetPuzzle2_1

AedesTerra_Script_ResetPuzzle2_8:
# 72 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE2
# 73 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 30, 8
	goto AedesTerra_Script_ResetPuzzle2_7

AedesTerra_Script_ResetPuzzle2_11:
# 76 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE2
# 77 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE2, 36, 8
	goto AedesTerra_Script_ResetPuzzle2_10

AedesTerra_Script_ResetPuzzle2_14:
# 82 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE2
	goto AedesTerra_Script_ResetPuzzle2_13

AedesTerra_Script_ResetPuzzle2_16:
# 85 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE2
	goto AedesTerra_Script_ResetPuzzle2_1


AedesTerra_Script_ResetPuzzle3::
# 96 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 97 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle3_2
AedesTerra_Script_ResetPuzzle3_1:
	end

AedesTerra_Script_ResetPuzzle3_2:
# 98 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesTerra_Script_ResetPuzzle3_4
# 107 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 108 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle3_1

AedesTerra_Script_ResetPuzzle3_4:
# 99 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 100 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS3
# 101 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE3
# 102 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS3, 55, 14
# 103 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE3, 58, 14
# 104 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS3
# 105 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE3
	goto AedesTerra_Script_ResetPuzzle3_1


AedesTerra_Script_SolvedPuzzle1::
# 115 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 117 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE2
# 118 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 30, 8
# 119 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE2
# 121 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_TEMP_1
	return


AedesTerra_Script_SolvedPuzzle::
# 126 "data/maps/AedesTerra/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 127 "data/maps/AedesTerra/scripts.pory"
	waitmovement 0
# 129 "data/maps/AedesTerra/scripts.pory"
	playse SE_SWITCH
# 130 "data/maps/AedesTerra/scripts.pory"
	waitse
	return


AedesTerra_Text_ResetPuzzle::
# 135 "data/maps/AedesTerra/scripts.pory"
	.string "Would you like to reset the puzzle?$"

AedesTerra_Text_CantReset::
# 139 "data/maps/AedesTerra/scripts.pory"
	.string "Nothing happened...$"
