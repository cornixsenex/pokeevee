AedesLux_1F_MapScripts::
# 26 "data/maps/AedesLux_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 31 "data/maps/AedesLux_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 28 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle1Flags
	return

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 32 "data/maps/AedesLux_1F/scripts.pory"
	map_script_2 VAR_TEMP_B, 1, AedesLux_Script_SolvedPuzzle
	.2byte 0


AedesLux_Script_SolvedPuzzle::
# 39 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 40 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 42 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_EFFECTIVE
# 43 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 47 "data/maps/AedesLux_1F/scripts.pory"
	switch VAR_TEMP_B
# 48 "data/maps/AedesLux_1F/scripts.pory"
	case 0, AedesLux_Script_SolvedPuzzle_3
# 52 "data/maps/AedesLux_1F/scripts.pory"
	case 1, AedesLux_Script_SolvedPuzzle_4
# 66 "data/maps/AedesLux_1F/scripts.pory"
	case 2, AedesLux_Script_SolvedPuzzle_5
# 68 "data/maps/AedesLux_1F/scripts.pory"
	case 3, AedesLux_Script_SolvedPuzzle_5
AedesLux_Script_SolvedPuzzle_5:
# 71 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_SolvedPuzzle_Text_1
# 72 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_SolvedPuzzle_1:
# 76 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
	end

AedesLux_Script_SolvedPuzzle_3:
# 49 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_SolvedPuzzle_Text_0
# 50 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_SolvedPuzzle_4:
# 54 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 40, METATILE_MauvilleGym_StairsL, FALSE
# 55 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 40, METATILE_MauvilleGym_StairsR, FALSE
# 56 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 41, METATILE_MauvilleGym_StairsL, FALSE
# 57 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 41, METATILE_MauvilleGym_StairsR, FALSE
# 58 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 59 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 61 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
# 63 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle2Flags
# 65 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 1
	goto AedesLux_Script_SolvedPuzzle_1


AedesLux_Script_SetupPuzzle1Flags::
# 84 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ClearAllFlags
# 85 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 86 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 87 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
# 88 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	return


AedesLux_Script_SetupPuzzle2Flags::
# 93 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ClearAllFlags
# 95 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 96 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 98 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
# 99 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 100 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
	return


AedesLux_Script_PoleDanger::
# 108 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleDanger
# 109 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_PoleCompleted::
# 114 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleCompleted
# 115 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_PoleNothingHappened::
# 120 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_NothingHappened
# 121 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_Puzzle1L_Pole1::
# 128 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole1_2
AedesLux_Script_Puzzle1L_Pole1_1:
# 132 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_5
# 135 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole1_4:
# 137 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 139 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole1_9
AedesLux_Script_Puzzle1L_Pole1_8:
# 171 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole1_2:
# 129 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole1_1

AedesLux_Script_Puzzle1L_Pole1_5:
# 133 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole1_4

AedesLux_Script_Puzzle1L_Pole1_9:
# 141 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 142 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_13
AedesLux_Script_Puzzle1L_Pole1_11:
# 145 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_18
AedesLux_Script_Puzzle1L_Pole1_16:
# 150 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_24
AedesLux_Script_Puzzle1L_Pole1_23:
# 154 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_30
AedesLux_Script_Puzzle1L_Pole1_29:
# 158 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 160 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_34
AedesLux_Script_Puzzle1L_Pole1_32:
# 163 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_38
AedesLux_Script_Puzzle1L_Pole1_21:
# 168 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole1_8

AedesLux_Script_Puzzle1L_Pole1_12:
# 143 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_11

AedesLux_Script_Puzzle1L_Pole1_13:
# 142 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_12
	goto AedesLux_Script_Puzzle1L_Pole1_11

AedesLux_Script_Puzzle1L_Pole1_17:
# 146 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_16

AedesLux_Script_Puzzle1L_Pole1_18:
# 145 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_17
	goto AedesLux_Script_Puzzle1L_Pole1_16

AedesLux_Script_Puzzle1L_Pole1_22:
# 151 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole1_21

AedesLux_Script_Puzzle1L_Pole1_24:
# 150 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_22
# 150 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_22
	goto AedesLux_Script_Puzzle1L_Pole1_23

AedesLux_Script_Puzzle1L_Pole1_30:
# 155 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole1_29

AedesLux_Script_Puzzle1L_Pole1_33:
# 161 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole1_32

AedesLux_Script_Puzzle1L_Pole1_34:
# 160 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole1_33
	goto AedesLux_Script_Puzzle1L_Pole1_32

AedesLux_Script_Puzzle1L_Pole1_37:
# 164 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole1_21

AedesLux_Script_Puzzle1L_Pole1_38:
# 163 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole1_37
	goto AedesLux_Script_Puzzle1L_Pole1_21


AedesLux_Script_Puzzle1L_Pole2::
# 177 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole2_2
AedesLux_Script_Puzzle1L_Pole2_1:
# 181 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_5
# 184 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole2_4:
# 186 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 188 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole2_9
AedesLux_Script_Puzzle1L_Pole2_8:
# 219 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole2_2:
# 178 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole2_1

AedesLux_Script_Puzzle1L_Pole2_5:
# 182 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole2_4

AedesLux_Script_Puzzle1L_Pole2_9:
# 190 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 191 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole2_13
AedesLux_Script_Puzzle1L_Pole2_11:
# 194 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole2_18
AedesLux_Script_Puzzle1L_Pole2_16:
# 199 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_24
AedesLux_Script_Puzzle1L_Pole2_23:
# 203 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_30
AedesLux_Script_Puzzle1L_Pole2_29:
# 207 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 209 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_34
AedesLux_Script_Puzzle1L_Pole2_32:
# 213 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
AedesLux_Script_Puzzle1L_Pole2_21:
# 216 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole2_8

AedesLux_Script_Puzzle1L_Pole2_12:
# 192 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole2_11

AedesLux_Script_Puzzle1L_Pole2_13:
# 191 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_12
	goto AedesLux_Script_Puzzle1L_Pole2_11

AedesLux_Script_Puzzle1L_Pole2_17:
# 195 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole2_16

AedesLux_Script_Puzzle1L_Pole2_18:
# 194 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole2_17
	goto AedesLux_Script_Puzzle1L_Pole2_16

AedesLux_Script_Puzzle1L_Pole2_22:
# 200 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole2_21

AedesLux_Script_Puzzle1L_Pole2_24:
# 199 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_22
# 199 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole2_22
	goto AedesLux_Script_Puzzle1L_Pole2_23

AedesLux_Script_Puzzle1L_Pole2_30:
# 204 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole2_29

AedesLux_Script_Puzzle1L_Pole2_33:
# 210 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole2_32

AedesLux_Script_Puzzle1L_Pole2_34:
# 209 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole2_33
	goto AedesLux_Script_Puzzle1L_Pole2_32


AedesLux_Script_Puzzle1L_Pole3::
# 225 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole3_2
AedesLux_Script_Puzzle1L_Pole3_1:
# 229 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_5
# 232 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole3_4:
# 234 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 236 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole3_9
AedesLux_Script_Puzzle1L_Pole3_8:
# 262 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole3_2:
# 226 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole3_1

AedesLux_Script_Puzzle1L_Pole3_5:
# 230 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole3_4

AedesLux_Script_Puzzle1L_Pole3_9:
# 238 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 239 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole3_13
AedesLux_Script_Puzzle1L_Pole3_11:
# 244 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_19
AedesLux_Script_Puzzle1L_Pole3_18:
# 248 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_23
AedesLux_Script_Puzzle1L_Pole3_22:
# 252 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 254 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_26
AedesLux_Script_Puzzle1L_Pole3_16:
# 259 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole3_8

AedesLux_Script_Puzzle1L_Pole3_12:
# 240 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole3_11

AedesLux_Script_Puzzle1L_Pole3_13:
# 239 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_12
	goto AedesLux_Script_Puzzle1L_Pole3_11

AedesLux_Script_Puzzle1L_Pole3_17:
# 245 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle1L_Pole3_16

AedesLux_Script_Puzzle1L_Pole3_19:
# 244 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_17
	goto AedesLux_Script_Puzzle1L_Pole3_18

AedesLux_Script_Puzzle1L_Pole3_23:
# 249 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole3_22

AedesLux_Script_Puzzle1L_Pole3_25:
# 255 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole3_16

AedesLux_Script_Puzzle1L_Pole3_26:
# 254 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole3_25
	goto AedesLux_Script_Puzzle1L_Pole3_16


AedesLux_Script_Puzzle1L_Pole4::
# 268 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole4_2
AedesLux_Script_Puzzle1L_Pole4_1:
# 272 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_5
# 275 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole4_4:
# 277 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 279 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole4_9
AedesLux_Script_Puzzle1L_Pole4_8:
# 310 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole4_2:
# 269 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole4_1

AedesLux_Script_Puzzle1L_Pole4_5:
# 273 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole4_4

AedesLux_Script_Puzzle1L_Pole4_9:
# 281 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 282 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole4_13
AedesLux_Script_Puzzle1L_Pole4_11:
# 285 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole4_18
AedesLux_Script_Puzzle1L_Pole4_16:
# 290 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_24
AedesLux_Script_Puzzle1L_Pole4_23:
# 294 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_30
AedesLux_Script_Puzzle1L_Pole4_29:
# 298 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 300 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_34
AedesLux_Script_Puzzle1L_Pole4_32:
# 304 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
AedesLux_Script_Puzzle1L_Pole4_21:
# 307 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole4_8

AedesLux_Script_Puzzle1L_Pole4_12:
# 283 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole4_11

AedesLux_Script_Puzzle1L_Pole4_13:
# 282 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole4_12
	goto AedesLux_Script_Puzzle1L_Pole4_11

AedesLux_Script_Puzzle1L_Pole4_17:
# 286 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole4_16

AedesLux_Script_Puzzle1L_Pole4_18:
# 285 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_17
	goto AedesLux_Script_Puzzle1L_Pole4_16

AedesLux_Script_Puzzle1L_Pole4_22:
# 291 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole4_21

AedesLux_Script_Puzzle1L_Pole4_24:
# 290 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_22
# 290 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole4_22
	goto AedesLux_Script_Puzzle1L_Pole4_23

AedesLux_Script_Puzzle1L_Pole4_30:
# 295 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole4_29

AedesLux_Script_Puzzle1L_Pole4_33:
# 301 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole4_32

AedesLux_Script_Puzzle1L_Pole4_34:
# 300 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole4_33
	goto AedesLux_Script_Puzzle1L_Pole4_32


AedesLux_Script_Puzzle1L_Pole5::
# 316 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole5_2
AedesLux_Script_Puzzle1L_Pole5_1:
# 320 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_5
# 323 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole5_4:
# 325 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 327 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole5_9
AedesLux_Script_Puzzle1L_Pole5_8:
# 353 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole5_2:
# 317 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole5_1

AedesLux_Script_Puzzle1L_Pole5_5:
# 321 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole5_4

AedesLux_Script_Puzzle1L_Pole5_9:
# 329 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 330 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole5_13
AedesLux_Script_Puzzle1L_Pole5_11:
# 335 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_19
AedesLux_Script_Puzzle1L_Pole5_18:
# 339 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_23
AedesLux_Script_Puzzle1L_Pole5_22:
# 343 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 345 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_26
AedesLux_Script_Puzzle1L_Pole5_16:
# 350 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole5_8

AedesLux_Script_Puzzle1L_Pole5_12:
# 331 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole5_11

AedesLux_Script_Puzzle1L_Pole5_13:
# 330 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_12
	goto AedesLux_Script_Puzzle1L_Pole5_11

AedesLux_Script_Puzzle1L_Pole5_17:
# 336 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle1L_Pole5_16

AedesLux_Script_Puzzle1L_Pole5_19:
# 335 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_17
	goto AedesLux_Script_Puzzle1L_Pole5_18

AedesLux_Script_Puzzle1L_Pole5_23:
# 340 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole5_22

AedesLux_Script_Puzzle1L_Pole5_25:
# 346 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole5_16

AedesLux_Script_Puzzle1L_Pole5_26:
# 345 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole5_25
	goto AedesLux_Script_Puzzle1L_Pole5_16


AedesLux_Script_Puzzle1R_Pole6::
# 361 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole6_2
AedesLux_Script_Puzzle1R_Pole6_1:
# 365 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_5
# 368 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole6_4:
# 370 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 372 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole6_9
AedesLux_Script_Puzzle1R_Pole6_8:
# 398 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole6_2:
# 362 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole6_1

AedesLux_Script_Puzzle1R_Pole6_5:
# 366 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole6_4

AedesLux_Script_Puzzle1R_Pole6_9:
# 374 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 375 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole6_13
AedesLux_Script_Puzzle1R_Pole6_11:
# 380 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_19
AedesLux_Script_Puzzle1R_Pole6_18:
# 384 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_23
AedesLux_Script_Puzzle1R_Pole6_22:
# 388 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 390 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_26
AedesLux_Script_Puzzle1R_Pole6_16:
# 395 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole6_8

AedesLux_Script_Puzzle1R_Pole6_12:
# 376 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole6_11

AedesLux_Script_Puzzle1R_Pole6_13:
# 375 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_12
	goto AedesLux_Script_Puzzle1R_Pole6_11

AedesLux_Script_Puzzle1R_Pole6_17:
# 381 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle1R_Pole6_16

AedesLux_Script_Puzzle1R_Pole6_19:
# 380 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_17
	goto AedesLux_Script_Puzzle1R_Pole6_18

AedesLux_Script_Puzzle1R_Pole6_23:
# 385 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole6_22

AedesLux_Script_Puzzle1R_Pole6_25:
# 391 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole6_16

AedesLux_Script_Puzzle1R_Pole6_26:
# 390 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole6_25
	goto AedesLux_Script_Puzzle1R_Pole6_16


AedesLux_Script_Puzzle1R_Pole7::
# 404 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole7_2
AedesLux_Script_Puzzle1R_Pole7_1:
# 408 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_5
# 411 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole7_4:
# 413 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 415 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole7_9
AedesLux_Script_Puzzle1R_Pole7_8:
# 446 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole7_2:
# 405 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole7_1

AedesLux_Script_Puzzle1R_Pole7_5:
# 409 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole7_4

AedesLux_Script_Puzzle1R_Pole7_9:
# 417 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 418 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole7_13
AedesLux_Script_Puzzle1R_Pole7_11:
# 421 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole7_18
AedesLux_Script_Puzzle1R_Pole7_16:
# 426 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_24
AedesLux_Script_Puzzle1R_Pole7_23:
# 430 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_30
AedesLux_Script_Puzzle1R_Pole7_29:
# 434 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 436 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_34
AedesLux_Script_Puzzle1R_Pole7_32:
# 440 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
AedesLux_Script_Puzzle1R_Pole7_21:
# 443 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole7_8

AedesLux_Script_Puzzle1R_Pole7_12:
# 419 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole7_11

AedesLux_Script_Puzzle1R_Pole7_13:
# 418 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_12
	goto AedesLux_Script_Puzzle1R_Pole7_11

AedesLux_Script_Puzzle1R_Pole7_17:
# 422 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole7_16

AedesLux_Script_Puzzle1R_Pole7_18:
# 421 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole7_17
	goto AedesLux_Script_Puzzle1R_Pole7_16

AedesLux_Script_Puzzle1R_Pole7_22:
# 427 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole7_21

AedesLux_Script_Puzzle1R_Pole7_24:
# 426 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole7_22
# 426 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_22
	goto AedesLux_Script_Puzzle1R_Pole7_23

AedesLux_Script_Puzzle1R_Pole7_30:
# 431 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole7_29

AedesLux_Script_Puzzle1R_Pole7_33:
# 437 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole7_32

AedesLux_Script_Puzzle1R_Pole7_34:
# 436 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole7_33
	goto AedesLux_Script_Puzzle1R_Pole7_32


AedesLux_Script_Puzzle1R_Pole8::
# 452 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole8_2
AedesLux_Script_Puzzle1R_Pole8_1:
# 456 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_5
# 459 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole8_4:
# 461 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 463 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole8_9
AedesLux_Script_Puzzle1R_Pole8_8:
# 495 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole8_2:
# 453 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole8_1

AedesLux_Script_Puzzle1R_Pole8_5:
# 457 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole8_4

AedesLux_Script_Puzzle1R_Pole8_9:
# 465 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 466 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole8_13
AedesLux_Script_Puzzle1R_Pole8_11:
# 469 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole8_18
AedesLux_Script_Puzzle1R_Pole8_16:
# 474 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_24
AedesLux_Script_Puzzle1R_Pole8_23:
# 478 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_30
AedesLux_Script_Puzzle1R_Pole8_29:
# 482 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 484 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_34
AedesLux_Script_Puzzle1R_Pole8_32:
# 487 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_38
AedesLux_Script_Puzzle1R_Pole8_21:
# 492 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole8_8

AedesLux_Script_Puzzle1R_Pole8_12:
# 467 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole8_11

AedesLux_Script_Puzzle1R_Pole8_13:
# 466 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_12
	goto AedesLux_Script_Puzzle1R_Pole8_11

AedesLux_Script_Puzzle1R_Pole8_17:
# 470 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole8_16

AedesLux_Script_Puzzle1R_Pole8_18:
# 469 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_17
	goto AedesLux_Script_Puzzle1R_Pole8_16

AedesLux_Script_Puzzle1R_Pole8_22:
# 475 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole8_21

AedesLux_Script_Puzzle1R_Pole8_24:
# 474 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_22
# 474 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_22
	goto AedesLux_Script_Puzzle1R_Pole8_23

AedesLux_Script_Puzzle1R_Pole8_30:
# 479 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole8_29

AedesLux_Script_Puzzle1R_Pole8_33:
# 485 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole8_32

AedesLux_Script_Puzzle1R_Pole8_34:
# 484 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole8_33
	goto AedesLux_Script_Puzzle1R_Pole8_32

AedesLux_Script_Puzzle1R_Pole8_37:
# 488 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle1R_Pole8_21

AedesLux_Script_Puzzle1R_Pole8_38:
# 487 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole8_37
	goto AedesLux_Script_Puzzle1R_Pole8_21


AedesLux_Script_Puzzle1R_Pole9::
# 501 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole9_2
AedesLux_Script_Puzzle1R_Pole9_1:
# 505 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_5
# 508 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole9_4:
# 510 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 512 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole9_9
AedesLux_Script_Puzzle1R_Pole9_8:
# 543 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole9_2:
# 502 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole9_1

AedesLux_Script_Puzzle1R_Pole9_5:
# 506 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole9_4

AedesLux_Script_Puzzle1R_Pole9_9:
# 514 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 515 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole9_13
AedesLux_Script_Puzzle1R_Pole9_11:
# 518 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole9_18
AedesLux_Script_Puzzle1R_Pole9_16:
# 523 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_24
AedesLux_Script_Puzzle1R_Pole9_23:
# 527 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_30
AedesLux_Script_Puzzle1R_Pole9_29:
# 531 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 533 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_34
AedesLux_Script_Puzzle1R_Pole9_32:
# 537 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
AedesLux_Script_Puzzle1R_Pole9_21:
# 540 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole9_8

AedesLux_Script_Puzzle1R_Pole9_12:
# 516 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole9_11

AedesLux_Script_Puzzle1R_Pole9_13:
# 515 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_12
	goto AedesLux_Script_Puzzle1R_Pole9_11

AedesLux_Script_Puzzle1R_Pole9_17:
# 519 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole9_16

AedesLux_Script_Puzzle1R_Pole9_18:
# 518 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole9_17
	goto AedesLux_Script_Puzzle1R_Pole9_16

AedesLux_Script_Puzzle1R_Pole9_22:
# 524 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle1R_Pole9_21

AedesLux_Script_Puzzle1R_Pole9_24:
# 523 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_22
# 523 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole9_22
	goto AedesLux_Script_Puzzle1R_Pole9_23

AedesLux_Script_Puzzle1R_Pole9_30:
# 528 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole9_29

AedesLux_Script_Puzzle1R_Pole9_33:
# 534 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole9_32

AedesLux_Script_Puzzle1R_Pole9_34:
# 533 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole9_33
	goto AedesLux_Script_Puzzle1R_Pole9_32


AedesLux_Script_Puzzle1R_PoleA::
# 549 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_PoleA_2
AedesLux_Script_Puzzle1R_PoleA_1:
# 553 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_5
# 556 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_PoleA_4:
# 558 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 560 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_PoleA_9
AedesLux_Script_Puzzle1R_PoleA_8:
# 586 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_PoleA_2:
# 550 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_PoleA_1

AedesLux_Script_Puzzle1R_PoleA_5:
# 554 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_PoleA_4

AedesLux_Script_Puzzle1R_PoleA_9:
# 562 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 563 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_PoleA_13
AedesLux_Script_Puzzle1R_PoleA_11:
# 568 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_19
AedesLux_Script_Puzzle1R_PoleA_18:
# 572 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_23
AedesLux_Script_Puzzle1R_PoleA_22:
# 576 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 578 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_26
AedesLux_Script_Puzzle1R_PoleA_16:
# 583 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_PoleA_8

AedesLux_Script_Puzzle1R_PoleA_12:
# 564 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_PoleA_11

AedesLux_Script_Puzzle1R_PoleA_13:
# 563 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_12
	goto AedesLux_Script_Puzzle1R_PoleA_11

AedesLux_Script_Puzzle1R_PoleA_17:
# 569 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle1R_PoleA_16

AedesLux_Script_Puzzle1R_PoleA_19:
# 568 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_17
	goto AedesLux_Script_Puzzle1R_PoleA_18

AedesLux_Script_Puzzle1R_PoleA_23:
# 573 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_PoleA_22

AedesLux_Script_Puzzle1R_PoleA_25:
# 579 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_PoleA_16

AedesLux_Script_Puzzle1R_PoleA_26:
# 578 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_PoleA_25
	goto AedesLux_Script_Puzzle1R_PoleA_16


AedesLux_Script_Puzzle2L_Pole1::
# 595 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole1_2
AedesLux_Script_Puzzle2L_Pole1_1:
# 599 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_5
# 602 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole1_4:
# 604 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 606 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole1_9
AedesLux_Script_Puzzle2L_Pole1_8:
# 638 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole1_2:
# 596 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole1_1

AedesLux_Script_Puzzle2L_Pole1_5:
# 600 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole1_4

AedesLux_Script_Puzzle2L_Pole1_9:
# 608 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 609 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole1_13
AedesLux_Script_Puzzle2L_Pole1_11:
# 612 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole1_18
AedesLux_Script_Puzzle2L_Pole1_16:
# 617 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_24
AedesLux_Script_Puzzle2L_Pole1_23:
# 621 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_30
AedesLux_Script_Puzzle2L_Pole1_29:
# 625 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 627 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_34
AedesLux_Script_Puzzle2L_Pole1_32:
# 630 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_39
AedesLux_Script_Puzzle2L_Pole1_21:
# 635 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole1_8

AedesLux_Script_Puzzle2L_Pole1_12:
# 610 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole1_11

AedesLux_Script_Puzzle2L_Pole1_13:
# 609 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_12
	goto AedesLux_Script_Puzzle2L_Pole1_11

AedesLux_Script_Puzzle2L_Pole1_17:
# 613 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole1_16

AedesLux_Script_Puzzle2L_Pole1_18:
# 612 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_17
	goto AedesLux_Script_Puzzle2L_Pole1_16

AedesLux_Script_Puzzle2L_Pole1_22:
# 618 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_24:
# 617 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_22
# 617 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_22
	goto AedesLux_Script_Puzzle2L_Pole1_23

AedesLux_Script_Puzzle2L_Pole1_30:
# 622 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole1_29

AedesLux_Script_Puzzle2L_Pole1_33:
# 628 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole1_32

AedesLux_Script_Puzzle2L_Pole1_34:
# 627 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole1_33
	goto AedesLux_Script_Puzzle2L_Pole1_32

AedesLux_Script_Puzzle2L_Pole1_37:
# 631 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_38:
# 630 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole1_37
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_39:
# 630 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole1_38
	goto AedesLux_Script_Puzzle2L_Pole1_21


AedesLux_Script_Puzzle2L_Pole2::
# 644 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole2_2
AedesLux_Script_Puzzle2L_Pole2_1:
# 648 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_5
# 651 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole2_4:
# 653 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 655 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole2_9
AedesLux_Script_Puzzle2L_Pole2_8:
# 686 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole2_2:
# 645 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole2_1

AedesLux_Script_Puzzle2L_Pole2_5:
# 649 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole2_4

AedesLux_Script_Puzzle2L_Pole2_9:
# 657 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 658 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole2_13
AedesLux_Script_Puzzle2L_Pole2_11:
# 661 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole2_18
AedesLux_Script_Puzzle2L_Pole2_16:
# 666 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_24
AedesLux_Script_Puzzle2L_Pole2_23:
# 670 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_30
AedesLux_Script_Puzzle2L_Pole2_29:
# 674 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 676 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_34
AedesLux_Script_Puzzle2L_Pole2_32:
# 680 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
AedesLux_Script_Puzzle2L_Pole2_21:
# 683 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole2_8

AedesLux_Script_Puzzle2L_Pole2_12:
# 659 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole2_11

AedesLux_Script_Puzzle2L_Pole2_13:
# 658 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole2_12
	goto AedesLux_Script_Puzzle2L_Pole2_11

AedesLux_Script_Puzzle2L_Pole2_17:
# 662 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole2_16

AedesLux_Script_Puzzle2L_Pole2_18:
# 661 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_17
	goto AedesLux_Script_Puzzle2L_Pole2_16

AedesLux_Script_Puzzle2L_Pole2_22:
# 667 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole2_21

AedesLux_Script_Puzzle2L_Pole2_24:
# 666 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_22
# 666 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole2_22
	goto AedesLux_Script_Puzzle2L_Pole2_23

AedesLux_Script_Puzzle2L_Pole2_30:
# 671 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole2_29

AedesLux_Script_Puzzle2L_Pole2_33:
# 677 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole2_32

AedesLux_Script_Puzzle2L_Pole2_34:
# 676 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole2_33
	goto AedesLux_Script_Puzzle2L_Pole2_32


AedesLux_Script_Puzzle2L_Pole3::
# 692 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole3_2
AedesLux_Script_Puzzle2L_Pole3_1:
# 696 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_5
# 699 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole3_4:
# 701 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 703 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole3_9
AedesLux_Script_Puzzle2L_Pole3_8:
# 729 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole3_2:
# 693 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole3_1

AedesLux_Script_Puzzle2L_Pole3_5:
# 697 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole3_4

AedesLux_Script_Puzzle2L_Pole3_9:
# 705 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 706 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole3_13
AedesLux_Script_Puzzle2L_Pole3_11:
# 711 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_19
AedesLux_Script_Puzzle2L_Pole3_18:
# 715 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_23
AedesLux_Script_Puzzle2L_Pole3_22:
# 719 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 721 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_26
AedesLux_Script_Puzzle2L_Pole3_16:
# 726 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole3_8

AedesLux_Script_Puzzle2L_Pole3_12:
# 707 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole3_11

AedesLux_Script_Puzzle2L_Pole3_13:
# 706 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_12
	goto AedesLux_Script_Puzzle2L_Pole3_11

AedesLux_Script_Puzzle2L_Pole3_17:
# 712 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle2L_Pole3_16

AedesLux_Script_Puzzle2L_Pole3_19:
# 711 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_17
	goto AedesLux_Script_Puzzle2L_Pole3_18

AedesLux_Script_Puzzle2L_Pole3_23:
# 716 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole3_22

AedesLux_Script_Puzzle2L_Pole3_25:
# 722 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole3_16

AedesLux_Script_Puzzle2L_Pole3_26:
# 721 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole3_25
	goto AedesLux_Script_Puzzle2L_Pole3_16


AedesLux_Script_ResetPuzzle1::
# 737 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 738 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle1_1
# 752 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle1_1:
# 740 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_ResetPuzzle1_4
# 745 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 746 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 747 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 748 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle1Flags
# 749 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	return

AedesLux_Script_ResetPuzzle1_4:
# 741 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 742 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle2::
# 758 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 759 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle2_1
# 773 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle2_1:
# 761 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_ResetPuzzle2_4
# 766 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 767 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 768 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 769 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle2Flags
# 770 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	return

AedesLux_Script_ResetPuzzle2_4:
# 762 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 763 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_UpdatePuzzle::
# 780 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 781 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 783 "data/maps/AedesLux_1F/scripts.pory"
	switch VAR_TEMP_A
# 785 "data/maps/AedesLux_1F/scripts.pory"
	case 0, AedesLux_Script_UpdatePuzzle_3
# 787 "data/maps/AedesLux_1F/scripts.pory"
	case 1, AedesLux_Script_UpdatePuzzle_4
# 789 "data/maps/AedesLux_1F/scripts.pory"
	case 2, AedesLux_Script_UpdatePuzzle_5
# 791 "data/maps/AedesLux_1F/scripts.pory"
	case 3, AedesLux_Script_UpdatePuzzle_5
# 796 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_UpdatePuzzle_Text_1
# 797 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_UpdatePuzzle_1:
	return

AedesLux_Script_UpdatePuzzle_3:
# 786 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_4:
# 788 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_5:
# 792 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_UpdatePuzzle_Text_0
# 793 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_DrawPuzzle1::
# 807 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle1
# 808 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1L
# 809 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1R
# 811 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle2::
# 817 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle2
# 818 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2L
# 819 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2R
# 821 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle1L::
# 828 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_4
AedesLux_Script_DrawPuzzle1L_3:
# 834 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall, TRUE
# 835 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol, TRUE
# 836 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 837 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_1:
# 840 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_10
AedesLux_Script_DrawPuzzle1L_9:
# 845 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 846 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor, FALSE
# 847 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_7:
# 850 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_16
AedesLux_Script_DrawPuzzle1L_15:
# 856 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall, TRUE
# 857 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall, TRUE
# 858 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 859 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_13:
# 862 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_22
AedesLux_Script_DrawPuzzle1L_21:
# 867 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_Floor_Pole, TRUE
# 868 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor, FALSE
# 869 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_19:
	return

AedesLux_Script_DrawPuzzle1L_2:
# 829 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 830 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol_Electric_TopRight, TRUE
# 831 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 832 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_1

AedesLux_Script_DrawPuzzle1L_4:
# 828 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_2
	goto AedesLux_Script_DrawPuzzle1L_3

AedesLux_Script_DrawPuzzle1L_8:
# 841 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 842 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 843 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_7

AedesLux_Script_DrawPuzzle1L_10:
# 840 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_8
	goto AedesLux_Script_DrawPuzzle1L_9

AedesLux_Script_DrawPuzzle1L_14:
# 851 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 852 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 853 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 854 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_13

AedesLux_Script_DrawPuzzle1L_16:
# 850 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle1L_14
	goto AedesLux_Script_DrawPuzzle1L_15

AedesLux_Script_DrawPuzzle1L_20:
# 863 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 864 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 865 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_19

AedesLux_Script_DrawPuzzle1L_22:
# 862 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle1L_20
	goto AedesLux_Script_DrawPuzzle1L_21


AedesLux_Script_DrawPuzzle1R::
# 876 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle1R_4
AedesLux_Script_DrawPuzzle1R_3:
# 881 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 42, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 882 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 43, METATILE_MauvilleGym_Floor, FALSE
# 883 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 44, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1R_1:
# 886 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle1R_10
AedesLux_Script_DrawPuzzle1R_9:
# 891 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 45, METATILE_MauvilleGym_Floor_Pole, TRUE
# 892 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 46, METATILE_MauvilleGym_Floor, FALSE
# 893 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 47, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1R_7:
# 896 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle1R_16
AedesLux_Script_DrawPuzzle1R_15:
# 902 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 47, METATILE_MauvilleGym_Floor, FALSE
# 903 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 47, METATILE_MauvilleGym_Floor, FALSE
# 904 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 48, METATILE_MauvilleGym_Floor, FALSE
# 905 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 48, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle1R_13:
# 908 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle1R_22
AedesLux_Script_DrawPuzzle1R_21:
# 914 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 47, METATILE_MauvilleGym_Floor, FALSE
# 915 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 47, METATILE_MauvilleGym_Floor, FALSE
# 916 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 48, METATILE_MauvilleGym_Floor, FALSE
# 917 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 48, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle1R_19:
	return

AedesLux_Script_DrawPuzzle1R_2:
# 877 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 42, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 878 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 43, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 879 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 44, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1R_1

AedesLux_Script_DrawPuzzle1R_4:
# 876 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle1R_2
	goto AedesLux_Script_DrawPuzzle1R_3

AedesLux_Script_DrawPuzzle1R_8:
# 887 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 45, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 888 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 46, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 889 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 47, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1R_7

AedesLux_Script_DrawPuzzle1R_10:
# 886 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle1R_8
	goto AedesLux_Script_DrawPuzzle1R_9

AedesLux_Script_DrawPuzzle1R_14:
# 897 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 47, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 898 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 47, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 899 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 48, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 900 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 48, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1R_13

AedesLux_Script_DrawPuzzle1R_16:
# 896 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle1R_14
	goto AedesLux_Script_DrawPuzzle1R_15

AedesLux_Script_DrawPuzzle1R_20:
# 909 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 47, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 910 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 47, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 911 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 48, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 912 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 48, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1R_19

AedesLux_Script_DrawPuzzle1R_22:
# 908 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle1R_20
	goto AedesLux_Script_DrawPuzzle1R_21


AedesLux_Script_DrawPuzzle2L::
# 925 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle2L_4
AedesLux_Script_DrawPuzzle2L_3:
# 931 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 30, METATILE_MauvilleGym_Wall, TRUE
# 932 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 30, METATILE_MauvilleGym_Wall, TRUE
# 933 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 934 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2L_1:
# 937 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle2L_10
AedesLux_Script_DrawPuzzle2L_9:
# 943 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 30, METATILE_MauvilleGym_Wall, TRUE
# 944 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 30, METATILE_MauvilleGym_Wall, TRUE
# 945 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 946 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2L_7:
# 949 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle2L_16
AedesLux_Script_DrawPuzzle2L_15:
# 954 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 955 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 32, METATILE_MauvilleGym_Floor, FALSE
# 956 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 33, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_13:
# 959 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle2L_22
AedesLux_Script_DrawPuzzle2L_21:
# 965 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 33, METATILE_MauvilleGym_Floor, FALSE
# 966 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 33, METATILE_MauvilleGym_Floor, FALSE
# 967 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 34, METATILE_MauvilleGym_Floor, FALSE
# 968 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 34, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2L_19:
# 971 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle2L_28
AedesLux_Script_DrawPuzzle2L_27:
# 976 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 34, METATILE_MauvilleGym_FloorLeftShadow_Pole, TRUE
# 977 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 35, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 978 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 36, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_25:
# 981 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_34
AedesLux_Script_DrawPuzzle2L_33:
# 986 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 34, METATILE_MauvilleGym_Floor_Pole, TRUE
# 987 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 35, METATILE_MauvilleGym_Floor, FALSE
# 988 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 36, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_31:
# 991 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle2L_40
AedesLux_Script_DrawPuzzle2L_39:
# 997 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 36, METATILE_MauvilleGym_Floor, FALSE
# 998 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 36, METATILE_MauvilleGym_Floor, FALSE
# 999 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 37, METATILE_MauvilleGym_Floor, FALSE
# 1000 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2L_37:
	return

AedesLux_Script_DrawPuzzle2L_2:
# 926 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 927 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 928 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 929 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_1

AedesLux_Script_DrawPuzzle2L_4:
# 925 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle2L_2
	goto AedesLux_Script_DrawPuzzle2L_3

AedesLux_Script_DrawPuzzle2L_8:
# 938 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 939 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 940 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 941 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_7

AedesLux_Script_DrawPuzzle2L_10:
# 937 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle2L_8
	goto AedesLux_Script_DrawPuzzle2L_9

AedesLux_Script_DrawPuzzle2L_14:
# 950 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 951 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 32, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 952 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 33, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_13

AedesLux_Script_DrawPuzzle2L_16:
# 949 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_14
	goto AedesLux_Script_DrawPuzzle2L_15

AedesLux_Script_DrawPuzzle2L_20:
# 960 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 33, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 961 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 33, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 962 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 34, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 963 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 34, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_19

AedesLux_Script_DrawPuzzle2L_22:
# 959 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_20
	goto AedesLux_Script_DrawPuzzle2L_21

AedesLux_Script_DrawPuzzle2L_26:
# 972 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 34, METATILE_MauvilleGym_FloorLeftShadow_Pole_Electric, TRUE
# 973 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 35, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 974 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 36, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_25

AedesLux_Script_DrawPuzzle2L_28:
# 971 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle2L_26
	goto AedesLux_Script_DrawPuzzle2L_27

AedesLux_Script_DrawPuzzle2L_32:
# 982 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 34, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 983 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 35, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 984 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 36, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_31

AedesLux_Script_DrawPuzzle2L_34:
# 981 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle2L_32
	goto AedesLux_Script_DrawPuzzle2L_33

AedesLux_Script_DrawPuzzle2L_38:
# 992 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 993 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 36, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 994 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 995 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_37

AedesLux_Script_DrawPuzzle2L_40:
# 991 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle2L_38
	goto AedesLux_Script_DrawPuzzle2L_39


AedesLux_Script_DrawPuzzle2R::
# 1007 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle2R_4
AedesLux_Script_DrawPuzzle2R_3:
# 1013 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 30, METATILE_MauvilleGym_Wall, TRUE
# 1014 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 30, METATILE_MauvilleGym_Wall, TRUE
# 1015 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1016 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_1:
# 1019 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle2R_10
AedesLux_Script_DrawPuzzle2R_9:
# 1025 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 30, METATILE_MauvilleGym_Wall, TRUE
# 1026 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 30, METATILE_MauvilleGym_Wall, TRUE
# 1027 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1028 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_7:
# 1031 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_16
AedesLux_Script_DrawPuzzle2R_15:
# 1037 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 30, METATILE_MauvilleGym_Wall, TRUE
# 1038 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 30, METATILE_MauvilleGym_WallSymbol, TRUE
# 1039 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1040 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_13:
# 1043 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_22
AedesLux_Script_DrawPuzzle2R_21:
# 1048 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 1049 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 32, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 1050 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 33, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_19:
# 1053 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle2R_28
AedesLux_Script_DrawPuzzle2R_27:
# 1058 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 1059 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 32, METATILE_MauvilleGym_Floor, FALSE
# 1060 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 33, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_25:
# 1063 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_34
AedesLux_Script_DrawPuzzle2R_33:
# 1069 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 33, METATILE_MauvilleGym_Floor, FALSE
# 1070 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 33, METATILE_MauvilleGym_Floor, FALSE
# 1071 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 34, METATILE_MauvilleGym_Floor, FALSE
# 1072 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 34, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_31:
# 1075 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_40
AedesLux_Script_DrawPuzzle2R_39:
# 1080 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 34, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 1081 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 35, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 1082 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 36, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_37:
# 1085 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_46
AedesLux_Script_DrawPuzzle2R_45:
# 1090 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 34, METATILE_MauvilleGym_Floor_Pole, TRUE
# 1091 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 35, METATILE_MauvilleGym_Floor, FALSE
# 1092 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 36, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_43:
# 1095 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_DrawPuzzle2R_52
AedesLux_Script_DrawPuzzle2R_51:
# 1101 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 36, METATILE_MauvilleGym_Floor, FALSE
# 1102 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1103 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 37, METATILE_MauvilleGym_Floor, FALSE
# 1104 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_49:
# 1107 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle2R_58
AedesLux_Script_DrawPuzzle2R_57:
# 1113 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1114 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1115 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 37, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1116 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 37, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_55:
# 1119 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_64
AedesLux_Script_DrawPuzzle2R_63:
# 1125 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 36, METATILE_MauvilleGym_Floor, FALSE
# 1126 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 36, METATILE_MauvilleGym_Floor, FALSE
# 1127 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 37, METATILE_MauvilleGym_Floor, FALSE
# 1128 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_61:
	return

AedesLux_Script_DrawPuzzle2R_2:
# 1008 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 1009 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 1010 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 1011 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_1

AedesLux_Script_DrawPuzzle2R_4:
# 1007 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle2R_2
	goto AedesLux_Script_DrawPuzzle2R_3

AedesLux_Script_DrawPuzzle2R_8:
# 1020 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 1021 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 1022 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 1023 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_7

AedesLux_Script_DrawPuzzle2R_10:
# 1019 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle2R_8
	goto AedesLux_Script_DrawPuzzle2R_9

AedesLux_Script_DrawPuzzle2R_14:
# 1032 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 1033 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 30, METATILE_MauvilleGym_WallSymbol_Electric_TopRight, TRUE
# 1034 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 1035 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_13

AedesLux_Script_DrawPuzzle2R_16:
# 1031 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle2R_14
	goto AedesLux_Script_DrawPuzzle2R_15

AedesLux_Script_DrawPuzzle2R_20:
# 1044 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 1045 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 32, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 1046 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 33, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_19

AedesLux_Script_DrawPuzzle2R_22:
# 1043 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_20
	goto AedesLux_Script_DrawPuzzle2R_21

AedesLux_Script_DrawPuzzle2R_26:
# 1054 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 1055 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 32, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 1056 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 33, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_25

AedesLux_Script_DrawPuzzle2R_28:
# 1053 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_26
	goto AedesLux_Script_DrawPuzzle2R_27

AedesLux_Script_DrawPuzzle2R_32:
# 1064 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 33, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 1065 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 33, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 1066 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 34, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 1067 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 34, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_31

AedesLux_Script_DrawPuzzle2R_34:
# 1063 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_32
	goto AedesLux_Script_DrawPuzzle2R_33

AedesLux_Script_DrawPuzzle2R_38:
# 1076 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 34, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 1077 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 35, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 1078 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 36, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_37

AedesLux_Script_DrawPuzzle2R_40:
# 1075 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_38
	goto AedesLux_Script_DrawPuzzle2R_39

AedesLux_Script_DrawPuzzle2R_44:
# 1086 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 34, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 1087 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 35, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 1088 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 36, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_43

AedesLux_Script_DrawPuzzle2R_46:
# 1085 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_DrawPuzzle2R_44
	goto AedesLux_Script_DrawPuzzle2R_45

AedesLux_Script_DrawPuzzle2R_50:
# 1096 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 1097 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 1098 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 1099 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_49

AedesLux_Script_DrawPuzzle2R_52:
# 1095 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle2R_50
	goto AedesLux_Script_DrawPuzzle2R_51

AedesLux_Script_DrawPuzzle2R_56:
# 1108 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopLeft, FALSE
# 1109 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 1110 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 37, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 1111 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 37, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_55

AedesLux_Script_DrawPuzzle2R_58:
# 1107 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_56
	goto AedesLux_Script_DrawPuzzle2R_57

AedesLux_Script_DrawPuzzle2R_62:
# 1120 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 1121 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 36, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 1122 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 1123 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_61

AedesLux_Script_DrawPuzzle2R_64:
# 1119 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_DrawPuzzle2R_62
	goto AedesLux_Script_DrawPuzzle2R_63


AedesLux_Script_CheckSolvePuzzle1::
# 1136 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle1_4
AedesLux_Script_CheckSolvePuzzle1_1:
	return

AedesLux_Script_CheckSolvePuzzle1_2:
# 1147 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_3:
# 1138 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle1_8
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_4:
# 1137 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle1_3
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_7:
# 1140 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle1_12
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_8:
# 1139 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle1_7
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_11:
# 1142 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle1_16
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_12:
# 1141 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle1_11
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_15:
# 1144 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle1_19
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_16:
# 1143 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle1_15
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_19:
# 1145 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle1_2
	goto AedesLux_Script_CheckSolvePuzzle1_1


AedesLux_Script_CheckSolvePuzzle2::
# 1154 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle2_4
AedesLux_Script_CheckSolvePuzzle2_1:
	return

AedesLux_Script_CheckSolvePuzzle2_2:
# 1172 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 2
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_3:
# 1156 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle2_8
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_4:
# 1155 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle2_3
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_7:
# 1158 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle2_12
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_8:
# 1157 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle2_7
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_11:
# 1160 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle2_16
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_12:
# 1159 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle2_11
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_15:
# 1162 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle2_20
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_16:
# 1161 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle2_15
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_19:
# 1164 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_CheckSolvePuzzle2_24
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_20:
# 1163 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle2_19
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_23:
# 1166 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_CheckSolvePuzzle2_28
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_24:
# 1165 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_CheckSolvePuzzle2_23
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_27:
# 1168 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_CheckSolvePuzzle2_32
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_28:
# 1167 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_CheckSolvePuzzle2_27
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_31:
# 1170 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_CheckSolvePuzzle2_2
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_32:
# 1169 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_CheckSolvePuzzle2_31
	goto AedesLux_Script_CheckSolvePuzzle2_1


AedesLux_Script_ClearAllFlags::
# 1178 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 1179 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 1180 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 1181 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 1182 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 1183 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 1184 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 1185 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 1186 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 1187 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 1188 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 1189 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 1190 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 1191 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 1192 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 1193 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 1194 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 1195 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
# 1196 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_13
# 1197 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_14
# 1198 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_15
# 1199 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_16
# 1200 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_17
# 1201 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_18
# 1202 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_19
	return


AedesLux_Script_SolvedPuzzle_Text_0:
# 49 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_B = 0$"

AedesLux_Script_SolvedPuzzle_Text_1:
# 71 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_B OOB$"

AedesLux_Script_UpdatePuzzle_Text_0:
# 792 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_A = 3$"

AedesLux_Script_UpdatePuzzle_Text_1:
# 796 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_A OOB$"

AedesLux_Text_NothingHappened::
# 1206 "data/maps/AedesLux_1F/scripts.pory"
	.string "Nothing happened...$"

AedesLux_Text_PoleSwitch::
# 1210 "data/maps/AedesLux_1F/scripts.pory"
	.string "Would you like to flip the switch?$"

AedesLux_Text_PoleOn::
# 1214 "data/maps/AedesLux_1F/scripts.pory"
	.string "The pole is glowing with electricity.$"

AedesLux_Text_PoleOff::
# 1218 "data/maps/AedesLux_1F/scripts.pory"
	.string "The pole seems to be deactivated.$"

AedesLux_Text_PoleDanger::
# 1222 "data/maps/AedesLux_1F/scripts.pory"
	.string "This seems dangerous. Better leave it\n"
	.string "alone for now!$"

AedesLux_Text_PoleCompleted::
# 1226 "data/maps/AedesLux_1F/scripts.pory"
	.string "The switch seems stuck in place.$"
