AedesTerra_MapScripts::
	.byte 0


AedesTerra_Script_HideAllBridges::
	return


AedesTerra_Script_ShowBridgeLeft::
	return


AedesTerra_Script_ShowBridgeRight::
	return


AedesTerra_Script_ShowBridgeCenter::
	return


AedesTerra_Script_PersistSolution::
# 33 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS1, 24, 0
# 34 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS2, 24, 0
# 35 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS3, 24, 0
# 36 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS4, 24, 0
# 37 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS5, 24, 0
# 38 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE1, 24, 0
# 39 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 24, 0
# 40 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE2, 24, 0
# 41 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE3, 24, 0
	return


AedesTerra_Script_ResetPuzzle4::
# 46 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 47 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle4_2
AedesTerra_Script_ResetPuzzle4_1:
	end

AedesTerra_Script_ResetPuzzle4_2:
# 48 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesTerra_Script_ResetPuzzle4_4
# 54 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 55 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle4_1

AedesTerra_Script_ResetPuzzle4_4:
# 49 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 50 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS4
# 51 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS4, 8, 35
# 52 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS4
	goto AedesTerra_Script_ResetPuzzle4_1


AedesTerra_Script_ResetPuzzle5::
# 62 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 63 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle5_2
AedesTerra_Script_ResetPuzzle5_1:
	end

AedesTerra_Script_ResetPuzzle5_2:
# 64 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesTerra_Script_ResetPuzzle5_4
# 70 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 71 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle5_1

AedesTerra_Script_ResetPuzzle5_4:
# 65 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 66 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS5
# 67 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS5, 56, 37
# 68 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS5
	goto AedesTerra_Script_ResetPuzzle5_1


AedesTerra_Script_ResetPuzzle1::
# 78 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 79 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle1_2
AedesTerra_Script_ResetPuzzle1_1:
	end

AedesTerra_Script_ResetPuzzle1_2:
# 80 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesTerra_Script_ResetPuzzle1_4
# 89 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 90 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle1_1

AedesTerra_Script_ResetPuzzle1_4:
# 81 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 82 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS1
# 83 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE1
# 84 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS1, 14, 4
# 85 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE1, 8, 8
# 86 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS1
# 87 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE1
	goto AedesTerra_Script_ResetPuzzle1_1


AedesTerra_Script_ResetPuzzle2::
# 97 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 98 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle2_2
AedesTerra_Script_ResetPuzzle2_1:
	end

AedesTerra_Script_ResetPuzzle2_2:
# 99 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesTerra_Script_ResetPuzzle2_4
# 119 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 120 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle2_1

AedesTerra_Script_ResetPuzzle2_4:
# 100 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 101 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS2
# 102 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesTerra_Script_ResetPuzzle2_8
AedesTerra_Script_ResetPuzzle2_7:
# 106 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesTerra_Script_ResetPuzzle2_11
AedesTerra_Script_ResetPuzzle2_10:
# 110 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS2, 33, 11
# 111 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS2
# 112 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesTerra_Script_ResetPuzzle2_14
AedesTerra_Script_ResetPuzzle2_13:
# 115 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesTerra_Script_ResetPuzzle2_16
	goto AedesTerra_Script_ResetPuzzle2_1

AedesTerra_Script_ResetPuzzle2_8:
# 103 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE2
# 104 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 30, 8
	goto AedesTerra_Script_ResetPuzzle2_7

AedesTerra_Script_ResetPuzzle2_11:
# 107 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE2
# 108 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE2, 36, 8
	goto AedesTerra_Script_ResetPuzzle2_10

AedesTerra_Script_ResetPuzzle2_14:
# 113 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE2
	goto AedesTerra_Script_ResetPuzzle2_13

AedesTerra_Script_ResetPuzzle2_16:
# 116 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE2
	goto AedesTerra_Script_ResetPuzzle2_1


AedesTerra_Script_ResetPuzzle3::
# 127 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 128 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle3_2
AedesTerra_Script_ResetPuzzle3_1:
	end

AedesTerra_Script_ResetPuzzle3_2:
# 129 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesTerra_Script_ResetPuzzle3_4
# 138 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 139 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle3_1

AedesTerra_Script_ResetPuzzle3_4:
# 130 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 131 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS3
# 132 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE3
# 133 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS3, 55, 14
# 134 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE3, 58, 14
# 135 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS3
# 136 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE3
	goto AedesTerra_Script_ResetPuzzle3_1


AedesTerra_Script_SolvedPuzzle1::
# 146 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 148 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE2
# 149 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 30, 8
# 150 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE2
# 152 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_TEMP_1
	return


AedesTerra_Script_UnSolvedPuzzle1::
# 157 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE2
# 158 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 24, 0
# 159 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE2
# 161 "data/maps/AedesTerra/scripts.pory"
	clearflag FLAG_TEMP_1
	return


AedesTerra_Script_SolvedPuzzle2::
# 165 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 168 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_PersistSolution
# 170 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_AEDESTERRA_SOLVED
	return


AedesTerra_Script_SolvedPuzzle3::
# 174 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 176 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE3
# 177 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE3, 36, 8
# 178 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE3
# 180 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_TEMP_3
	return


AedesTerra_Script_UnSolvedPuzzle3::
# 185 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE3
# 186 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE3, 24, 0
# 187 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE3
# 189 "data/maps/AedesTerra/scripts.pory"
	clearflag FLAG_TEMP_3
	return


AedesTerra_Script_SolvedPuzzle::
# 194 "data/maps/AedesTerra/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 195 "data/maps/AedesTerra/scripts.pory"
	waitmovement 0
# 197 "data/maps/AedesTerra/scripts.pory"
	playse SE_SWITCH
# 198 "data/maps/AedesTerra/scripts.pory"
	waitse
	return


AedesTerra_Text_ResetPuzzle::
# 203 "data/maps/AedesTerra/scripts.pory"
	.string "Would you like to reset the puzzle?$"

AedesTerra_Text_CantReset::
# 207 "data/maps/AedesTerra/scripts.pory"
	.string "Nothing happened...$"
