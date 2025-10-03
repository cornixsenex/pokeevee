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
# 33 "data/maps/AedesLux_1F/scripts.pory"
	map_script_2 VAR_TEMP_B, 2, AedesLux_Script_SolvedPuzzle
# 34 "data/maps/AedesLux_1F/scripts.pory"
	map_script_2 VAR_TEMP_B, 3, AedesLux_Script_SolvedPuzzle
	.2byte 0


AedesLux_Script_SolvedPuzzle::
# 41 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 42 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_EFFECTIVE
# 45 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 49 "data/maps/AedesLux_1F/scripts.pory"
	switch VAR_TEMP_B
# 50 "data/maps/AedesLux_1F/scripts.pory"
	case 0, AedesLux_Script_SolvedPuzzle_3
# 54 "data/maps/AedesLux_1F/scripts.pory"
	case 1, AedesLux_Script_SolvedPuzzle_4
# 68 "data/maps/AedesLux_1F/scripts.pory"
	case 2, AedesLux_Script_SolvedPuzzle_5
# 82 "data/maps/AedesLux_1F/scripts.pory"
	case 3, AedesLux_Script_SolvedPuzzle_6
AedesLux_Script_SolvedPuzzle_6:
# 84 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_SolvedPuzzle_Text_1
# 85 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_SolvedPuzzle_1:
# 89 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
	end

AedesLux_Script_SolvedPuzzle_3:
# 51 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_SolvedPuzzle_Text_0
# 52 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_SolvedPuzzle_4:
# 56 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 40, METATILE_MauvilleGym_StairsL, FALSE
# 57 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 40, METATILE_MauvilleGym_StairsR, FALSE
# 58 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 41, METATILE_MauvilleGym_StairsL, FALSE
# 59 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 41, METATILE_MauvilleGym_StairsR, FALSE
# 60 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 61 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 63 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
# 65 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle2Flags
# 67 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 1
	goto AedesLux_Script_SolvedPuzzle_1

AedesLux_Script_SolvedPuzzle_5:
# 70 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 29, METATILE_MauvilleGym_StairsL, FALSE
# 71 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 29, METATILE_MauvilleGym_StairsR, FALSE
# 72 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 30, METATILE_MauvilleGym_StairsL, FALSE
# 73 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 30, METATILE_MauvilleGym_StairsR, FALSE
# 74 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 75 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 77 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
# 79 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3Flags
# 81 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 2
	goto AedesLux_Script_SolvedPuzzle_1


AedesLux_Script_SetupPuzzle1Flags::
# 97 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ClearAllFlags
# 98 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 99 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 100 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
# 101 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	return


AedesLux_Script_SetupPuzzle2Flags::
# 106 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ClearAllFlags
# 108 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 109 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 111 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
# 112 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 113 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
	return


AedesLux_Script_SetupPuzzle3Flags::
# 118 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3LFlags
# 119 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3RFlags
	return


AedesLux_Script_SetupPuzzle3LFlags::
# 125 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 126 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 127 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 128 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 129 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 130 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 131 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 132 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 133 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 135 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
# 136 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 137 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
# 138 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 139 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	return


AedesLux_Script_SetupPuzzle3RFlags::
# 145 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 146 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 147 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 148 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 149 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 150 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 151 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 152 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 153 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
# 155 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
# 156 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_D
	return


AedesLux_Script_PoleDanger::
# 163 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleDanger
# 164 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_PoleCompleted::
# 169 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleCompleted
# 170 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_PoleNothingHappened::
# 175 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_NothingHappened
# 176 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_Puzzle1L_Pole1::
# 183 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole1_2
AedesLux_Script_Puzzle1L_Pole1_1:
# 187 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_5
# 190 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole1_4:
# 192 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 194 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole1_9
AedesLux_Script_Puzzle1L_Pole1_8:
# 226 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole1_2:
# 184 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole1_1

AedesLux_Script_Puzzle1L_Pole1_5:
# 188 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole1_4

AedesLux_Script_Puzzle1L_Pole1_9:
# 196 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 197 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_13
AedesLux_Script_Puzzle1L_Pole1_11:
# 200 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_18
AedesLux_Script_Puzzle1L_Pole1_16:
# 205 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_24
AedesLux_Script_Puzzle1L_Pole1_23:
# 209 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_30
AedesLux_Script_Puzzle1L_Pole1_29:
# 213 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 215 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_34
AedesLux_Script_Puzzle1L_Pole1_32:
# 218 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_38
AedesLux_Script_Puzzle1L_Pole1_21:
# 223 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole1_8

AedesLux_Script_Puzzle1L_Pole1_12:
# 198 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_11

AedesLux_Script_Puzzle1L_Pole1_13:
# 197 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_12
	goto AedesLux_Script_Puzzle1L_Pole1_11

AedesLux_Script_Puzzle1L_Pole1_17:
# 201 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_16

AedesLux_Script_Puzzle1L_Pole1_18:
# 200 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_17
	goto AedesLux_Script_Puzzle1L_Pole1_16

AedesLux_Script_Puzzle1L_Pole1_22:
# 206 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole1_21

AedesLux_Script_Puzzle1L_Pole1_24:
# 205 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_22
# 205 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_22
	goto AedesLux_Script_Puzzle1L_Pole1_23

AedesLux_Script_Puzzle1L_Pole1_30:
# 210 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole1_29

AedesLux_Script_Puzzle1L_Pole1_33:
# 216 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole1_32

AedesLux_Script_Puzzle1L_Pole1_34:
# 215 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole1_33
	goto AedesLux_Script_Puzzle1L_Pole1_32

AedesLux_Script_Puzzle1L_Pole1_37:
# 219 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole1_21

AedesLux_Script_Puzzle1L_Pole1_38:
# 218 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole1_37
	goto AedesLux_Script_Puzzle1L_Pole1_21


AedesLux_Script_Puzzle1L_Pole2::
# 232 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole2_2
AedesLux_Script_Puzzle1L_Pole2_1:
# 236 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_5
# 239 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole2_4:
# 241 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 243 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole2_9
AedesLux_Script_Puzzle1L_Pole2_8:
# 274 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole2_2:
# 233 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole2_1

AedesLux_Script_Puzzle1L_Pole2_5:
# 237 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole2_4

AedesLux_Script_Puzzle1L_Pole2_9:
# 245 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 246 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole2_13
AedesLux_Script_Puzzle1L_Pole2_11:
# 249 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole2_18
AedesLux_Script_Puzzle1L_Pole2_16:
# 254 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_24
AedesLux_Script_Puzzle1L_Pole2_23:
# 258 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_30
AedesLux_Script_Puzzle1L_Pole2_29:
# 262 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 264 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_34
AedesLux_Script_Puzzle1L_Pole2_32:
# 268 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
AedesLux_Script_Puzzle1L_Pole2_21:
# 271 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole2_8

AedesLux_Script_Puzzle1L_Pole2_12:
# 247 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole2_11

AedesLux_Script_Puzzle1L_Pole2_13:
# 246 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_12
	goto AedesLux_Script_Puzzle1L_Pole2_11

AedesLux_Script_Puzzle1L_Pole2_17:
# 250 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole2_16

AedesLux_Script_Puzzle1L_Pole2_18:
# 249 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole2_17
	goto AedesLux_Script_Puzzle1L_Pole2_16

AedesLux_Script_Puzzle1L_Pole2_22:
# 255 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole2_21

AedesLux_Script_Puzzle1L_Pole2_24:
# 254 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_22
# 254 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole2_22
	goto AedesLux_Script_Puzzle1L_Pole2_23

AedesLux_Script_Puzzle1L_Pole2_30:
# 259 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole2_29

AedesLux_Script_Puzzle1L_Pole2_33:
# 265 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole2_32

AedesLux_Script_Puzzle1L_Pole2_34:
# 264 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole2_33
	goto AedesLux_Script_Puzzle1L_Pole2_32


AedesLux_Script_Puzzle1L_Pole3::
# 280 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole3_2
AedesLux_Script_Puzzle1L_Pole3_1:
# 284 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_5
# 287 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole3_4:
# 289 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 291 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole3_9
AedesLux_Script_Puzzle1L_Pole3_8:
# 317 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole3_2:
# 281 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole3_1

AedesLux_Script_Puzzle1L_Pole3_5:
# 285 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole3_4

AedesLux_Script_Puzzle1L_Pole3_9:
# 293 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 294 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole3_13
AedesLux_Script_Puzzle1L_Pole3_11:
# 299 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_19
AedesLux_Script_Puzzle1L_Pole3_18:
# 303 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_23
AedesLux_Script_Puzzle1L_Pole3_22:
# 307 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 309 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_26
AedesLux_Script_Puzzle1L_Pole3_16:
# 314 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole3_8

AedesLux_Script_Puzzle1L_Pole3_12:
# 295 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole3_11

AedesLux_Script_Puzzle1L_Pole3_13:
# 294 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_12
	goto AedesLux_Script_Puzzle1L_Pole3_11

AedesLux_Script_Puzzle1L_Pole3_17:
# 300 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle1L_Pole3_16

AedesLux_Script_Puzzle1L_Pole3_19:
# 299 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_17
	goto AedesLux_Script_Puzzle1L_Pole3_18

AedesLux_Script_Puzzle1L_Pole3_23:
# 304 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole3_22

AedesLux_Script_Puzzle1L_Pole3_25:
# 310 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole3_16

AedesLux_Script_Puzzle1L_Pole3_26:
# 309 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole3_25
	goto AedesLux_Script_Puzzle1L_Pole3_16


AedesLux_Script_Puzzle1L_Pole4::
# 323 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole4_2
AedesLux_Script_Puzzle1L_Pole4_1:
# 327 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_5
# 330 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole4_4:
# 332 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 334 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole4_9
AedesLux_Script_Puzzle1L_Pole4_8:
# 365 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole4_2:
# 324 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole4_1

AedesLux_Script_Puzzle1L_Pole4_5:
# 328 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole4_4

AedesLux_Script_Puzzle1L_Pole4_9:
# 336 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 337 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole4_13
AedesLux_Script_Puzzle1L_Pole4_11:
# 340 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole4_18
AedesLux_Script_Puzzle1L_Pole4_16:
# 345 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_24
AedesLux_Script_Puzzle1L_Pole4_23:
# 349 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_30
AedesLux_Script_Puzzle1L_Pole4_29:
# 353 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 355 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_34
AedesLux_Script_Puzzle1L_Pole4_32:
# 359 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
AedesLux_Script_Puzzle1L_Pole4_21:
# 362 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole4_8

AedesLux_Script_Puzzle1L_Pole4_12:
# 338 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole4_11

AedesLux_Script_Puzzle1L_Pole4_13:
# 337 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole4_12
	goto AedesLux_Script_Puzzle1L_Pole4_11

AedesLux_Script_Puzzle1L_Pole4_17:
# 341 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole4_16

AedesLux_Script_Puzzle1L_Pole4_18:
# 340 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_17
	goto AedesLux_Script_Puzzle1L_Pole4_16

AedesLux_Script_Puzzle1L_Pole4_22:
# 346 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole4_21

AedesLux_Script_Puzzle1L_Pole4_24:
# 345 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_22
# 345 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole4_22
	goto AedesLux_Script_Puzzle1L_Pole4_23

AedesLux_Script_Puzzle1L_Pole4_30:
# 350 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole4_29

AedesLux_Script_Puzzle1L_Pole4_33:
# 356 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole4_32

AedesLux_Script_Puzzle1L_Pole4_34:
# 355 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole4_33
	goto AedesLux_Script_Puzzle1L_Pole4_32


AedesLux_Script_Puzzle1L_Pole5::
# 371 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole5_2
AedesLux_Script_Puzzle1L_Pole5_1:
# 375 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_5
# 378 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole5_4:
# 380 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 382 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole5_9
AedesLux_Script_Puzzle1L_Pole5_8:
# 408 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole5_2:
# 372 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole5_1

AedesLux_Script_Puzzle1L_Pole5_5:
# 376 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole5_4

AedesLux_Script_Puzzle1L_Pole5_9:
# 384 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 385 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole5_13
AedesLux_Script_Puzzle1L_Pole5_11:
# 390 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_19
AedesLux_Script_Puzzle1L_Pole5_18:
# 394 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_23
AedesLux_Script_Puzzle1L_Pole5_22:
# 398 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 400 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_26
AedesLux_Script_Puzzle1L_Pole5_16:
# 405 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole5_8

AedesLux_Script_Puzzle1L_Pole5_12:
# 386 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole5_11

AedesLux_Script_Puzzle1L_Pole5_13:
# 385 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_12
	goto AedesLux_Script_Puzzle1L_Pole5_11

AedesLux_Script_Puzzle1L_Pole5_17:
# 391 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle1L_Pole5_16

AedesLux_Script_Puzzle1L_Pole5_19:
# 390 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_17
	goto AedesLux_Script_Puzzle1L_Pole5_18

AedesLux_Script_Puzzle1L_Pole5_23:
# 395 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole5_22

AedesLux_Script_Puzzle1L_Pole5_25:
# 401 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole5_16

AedesLux_Script_Puzzle1L_Pole5_26:
# 400 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole5_25
	goto AedesLux_Script_Puzzle1L_Pole5_16


AedesLux_Script_Puzzle1R_Pole6::
# 416 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole6_2
AedesLux_Script_Puzzle1R_Pole6_1:
# 420 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_5
# 423 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole6_4:
# 425 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 427 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole6_9
AedesLux_Script_Puzzle1R_Pole6_8:
# 453 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole6_2:
# 417 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole6_1

AedesLux_Script_Puzzle1R_Pole6_5:
# 421 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole6_4

AedesLux_Script_Puzzle1R_Pole6_9:
# 429 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 430 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole6_13
AedesLux_Script_Puzzle1R_Pole6_11:
# 435 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_19
AedesLux_Script_Puzzle1R_Pole6_18:
# 439 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_23
AedesLux_Script_Puzzle1R_Pole6_22:
# 443 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 445 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_26
AedesLux_Script_Puzzle1R_Pole6_16:
# 450 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole6_8

AedesLux_Script_Puzzle1R_Pole6_12:
# 431 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole6_11

AedesLux_Script_Puzzle1R_Pole6_13:
# 430 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_12
	goto AedesLux_Script_Puzzle1R_Pole6_11

AedesLux_Script_Puzzle1R_Pole6_17:
# 436 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle1R_Pole6_16

AedesLux_Script_Puzzle1R_Pole6_19:
# 435 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_17
	goto AedesLux_Script_Puzzle1R_Pole6_18

AedesLux_Script_Puzzle1R_Pole6_23:
# 440 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole6_22

AedesLux_Script_Puzzle1R_Pole6_25:
# 446 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole6_16

AedesLux_Script_Puzzle1R_Pole6_26:
# 445 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole6_25
	goto AedesLux_Script_Puzzle1R_Pole6_16


AedesLux_Script_Puzzle1R_Pole7::
# 459 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole7_2
AedesLux_Script_Puzzle1R_Pole7_1:
# 463 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_5
# 466 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole7_4:
# 468 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 470 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole7_9
AedesLux_Script_Puzzle1R_Pole7_8:
# 501 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole7_2:
# 460 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole7_1

AedesLux_Script_Puzzle1R_Pole7_5:
# 464 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole7_4

AedesLux_Script_Puzzle1R_Pole7_9:
# 472 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 473 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole7_13
AedesLux_Script_Puzzle1R_Pole7_11:
# 476 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole7_18
AedesLux_Script_Puzzle1R_Pole7_16:
# 481 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_24
AedesLux_Script_Puzzle1R_Pole7_23:
# 485 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_30
AedesLux_Script_Puzzle1R_Pole7_29:
# 489 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 491 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_34
AedesLux_Script_Puzzle1R_Pole7_32:
# 495 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
AedesLux_Script_Puzzle1R_Pole7_21:
# 498 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole7_8

AedesLux_Script_Puzzle1R_Pole7_12:
# 474 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole7_11

AedesLux_Script_Puzzle1R_Pole7_13:
# 473 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_12
	goto AedesLux_Script_Puzzle1R_Pole7_11

AedesLux_Script_Puzzle1R_Pole7_17:
# 477 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole7_16

AedesLux_Script_Puzzle1R_Pole7_18:
# 476 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole7_17
	goto AedesLux_Script_Puzzle1R_Pole7_16

AedesLux_Script_Puzzle1R_Pole7_22:
# 482 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole7_21

AedesLux_Script_Puzzle1R_Pole7_24:
# 481 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole7_22
# 481 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_22
	goto AedesLux_Script_Puzzle1R_Pole7_23

AedesLux_Script_Puzzle1R_Pole7_30:
# 486 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole7_29

AedesLux_Script_Puzzle1R_Pole7_33:
# 492 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole7_32

AedesLux_Script_Puzzle1R_Pole7_34:
# 491 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole7_33
	goto AedesLux_Script_Puzzle1R_Pole7_32


AedesLux_Script_Puzzle1R_Pole8::
# 507 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole8_2
AedesLux_Script_Puzzle1R_Pole8_1:
# 511 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_5
# 514 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole8_4:
# 516 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 518 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole8_9
AedesLux_Script_Puzzle1R_Pole8_8:
# 550 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole8_2:
# 508 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole8_1

AedesLux_Script_Puzzle1R_Pole8_5:
# 512 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole8_4

AedesLux_Script_Puzzle1R_Pole8_9:
# 520 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 521 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole8_13
AedesLux_Script_Puzzle1R_Pole8_11:
# 524 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole8_18
AedesLux_Script_Puzzle1R_Pole8_16:
# 529 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_24
AedesLux_Script_Puzzle1R_Pole8_23:
# 533 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_30
AedesLux_Script_Puzzle1R_Pole8_29:
# 537 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 539 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_34
AedesLux_Script_Puzzle1R_Pole8_32:
# 542 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_38
AedesLux_Script_Puzzle1R_Pole8_21:
# 547 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole8_8

AedesLux_Script_Puzzle1R_Pole8_12:
# 522 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole8_11

AedesLux_Script_Puzzle1R_Pole8_13:
# 521 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_12
	goto AedesLux_Script_Puzzle1R_Pole8_11

AedesLux_Script_Puzzle1R_Pole8_17:
# 525 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole8_16

AedesLux_Script_Puzzle1R_Pole8_18:
# 524 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_17
	goto AedesLux_Script_Puzzle1R_Pole8_16

AedesLux_Script_Puzzle1R_Pole8_22:
# 530 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole8_21

AedesLux_Script_Puzzle1R_Pole8_24:
# 529 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_22
# 529 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_22
	goto AedesLux_Script_Puzzle1R_Pole8_23

AedesLux_Script_Puzzle1R_Pole8_30:
# 534 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole8_29

AedesLux_Script_Puzzle1R_Pole8_33:
# 540 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole8_32

AedesLux_Script_Puzzle1R_Pole8_34:
# 539 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole8_33
	goto AedesLux_Script_Puzzle1R_Pole8_32

AedesLux_Script_Puzzle1R_Pole8_37:
# 543 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle1R_Pole8_21

AedesLux_Script_Puzzle1R_Pole8_38:
# 542 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole8_37
	goto AedesLux_Script_Puzzle1R_Pole8_21


AedesLux_Script_Puzzle1R_Pole9::
# 556 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole9_2
AedesLux_Script_Puzzle1R_Pole9_1:
# 560 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_5
# 563 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole9_4:
# 565 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 567 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole9_9
AedesLux_Script_Puzzle1R_Pole9_8:
# 598 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole9_2:
# 557 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole9_1

AedesLux_Script_Puzzle1R_Pole9_5:
# 561 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole9_4

AedesLux_Script_Puzzle1R_Pole9_9:
# 569 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 570 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole9_13
AedesLux_Script_Puzzle1R_Pole9_11:
# 573 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole9_18
AedesLux_Script_Puzzle1R_Pole9_16:
# 578 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_24
AedesLux_Script_Puzzle1R_Pole9_23:
# 582 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_30
AedesLux_Script_Puzzle1R_Pole9_29:
# 586 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 588 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_34
AedesLux_Script_Puzzle1R_Pole9_32:
# 592 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
AedesLux_Script_Puzzle1R_Pole9_21:
# 595 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole9_8

AedesLux_Script_Puzzle1R_Pole9_12:
# 571 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole9_11

AedesLux_Script_Puzzle1R_Pole9_13:
# 570 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_12
	goto AedesLux_Script_Puzzle1R_Pole9_11

AedesLux_Script_Puzzle1R_Pole9_17:
# 574 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole9_16

AedesLux_Script_Puzzle1R_Pole9_18:
# 573 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole9_17
	goto AedesLux_Script_Puzzle1R_Pole9_16

AedesLux_Script_Puzzle1R_Pole9_22:
# 579 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle1R_Pole9_21

AedesLux_Script_Puzzle1R_Pole9_24:
# 578 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_22
# 578 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole9_22
	goto AedesLux_Script_Puzzle1R_Pole9_23

AedesLux_Script_Puzzle1R_Pole9_30:
# 583 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole9_29

AedesLux_Script_Puzzle1R_Pole9_33:
# 589 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole9_32

AedesLux_Script_Puzzle1R_Pole9_34:
# 588 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole9_33
	goto AedesLux_Script_Puzzle1R_Pole9_32


AedesLux_Script_Puzzle1R_PoleA::
# 604 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_PoleA_2
AedesLux_Script_Puzzle1R_PoleA_1:
# 608 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_5
# 611 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_PoleA_4:
# 613 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 615 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_PoleA_9
AedesLux_Script_Puzzle1R_PoleA_8:
# 641 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_PoleA_2:
# 605 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_PoleA_1

AedesLux_Script_Puzzle1R_PoleA_5:
# 609 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_PoleA_4

AedesLux_Script_Puzzle1R_PoleA_9:
# 617 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 618 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_PoleA_13
AedesLux_Script_Puzzle1R_PoleA_11:
# 623 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_19
AedesLux_Script_Puzzle1R_PoleA_18:
# 627 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_23
AedesLux_Script_Puzzle1R_PoleA_22:
# 631 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 633 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_26
AedesLux_Script_Puzzle1R_PoleA_16:
# 638 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_PoleA_8

AedesLux_Script_Puzzle1R_PoleA_12:
# 619 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_PoleA_11

AedesLux_Script_Puzzle1R_PoleA_13:
# 618 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_12
	goto AedesLux_Script_Puzzle1R_PoleA_11

AedesLux_Script_Puzzle1R_PoleA_17:
# 624 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle1R_PoleA_16

AedesLux_Script_Puzzle1R_PoleA_19:
# 623 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_17
	goto AedesLux_Script_Puzzle1R_PoleA_18

AedesLux_Script_Puzzle1R_PoleA_23:
# 628 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_PoleA_22

AedesLux_Script_Puzzle1R_PoleA_25:
# 634 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_PoleA_16

AedesLux_Script_Puzzle1R_PoleA_26:
# 633 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_PoleA_25
	goto AedesLux_Script_Puzzle1R_PoleA_16


AedesLux_Script_Puzzle2L_Pole1::
# 650 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole1_2
AedesLux_Script_Puzzle2L_Pole1_1:
# 654 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_5
# 657 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole1_4:
# 659 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 661 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole1_9
AedesLux_Script_Puzzle2L_Pole1_8:
# 693 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole1_2:
# 651 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole1_1

AedesLux_Script_Puzzle2L_Pole1_5:
# 655 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole1_4

AedesLux_Script_Puzzle2L_Pole1_9:
# 663 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 664 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole1_13
AedesLux_Script_Puzzle2L_Pole1_11:
# 667 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole1_18
AedesLux_Script_Puzzle2L_Pole1_16:
# 672 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_24
AedesLux_Script_Puzzle2L_Pole1_23:
# 676 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_30
AedesLux_Script_Puzzle2L_Pole1_29:
# 680 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 682 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_34
AedesLux_Script_Puzzle2L_Pole1_32:
# 685 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_39
AedesLux_Script_Puzzle2L_Pole1_21:
# 690 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole1_8

AedesLux_Script_Puzzle2L_Pole1_12:
# 665 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole1_11

AedesLux_Script_Puzzle2L_Pole1_13:
# 664 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_12
	goto AedesLux_Script_Puzzle2L_Pole1_11

AedesLux_Script_Puzzle2L_Pole1_17:
# 668 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole1_16

AedesLux_Script_Puzzle2L_Pole1_18:
# 667 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_17
	goto AedesLux_Script_Puzzle2L_Pole1_16

AedesLux_Script_Puzzle2L_Pole1_22:
# 673 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_24:
# 672 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_22
# 672 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_22
	goto AedesLux_Script_Puzzle2L_Pole1_23

AedesLux_Script_Puzzle2L_Pole1_30:
# 677 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole1_29

AedesLux_Script_Puzzle2L_Pole1_33:
# 683 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole1_32

AedesLux_Script_Puzzle2L_Pole1_34:
# 682 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole1_33
	goto AedesLux_Script_Puzzle2L_Pole1_32

AedesLux_Script_Puzzle2L_Pole1_37:
# 686 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_38:
# 685 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole1_37
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_39:
# 685 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole1_38
	goto AedesLux_Script_Puzzle2L_Pole1_21


AedesLux_Script_Puzzle2L_Pole2::
# 699 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole2_2
AedesLux_Script_Puzzle2L_Pole2_1:
# 703 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_5
# 706 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole2_4:
# 708 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 710 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole2_9
AedesLux_Script_Puzzle2L_Pole2_8:
# 741 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole2_2:
# 700 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole2_1

AedesLux_Script_Puzzle2L_Pole2_5:
# 704 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole2_4

AedesLux_Script_Puzzle2L_Pole2_9:
# 712 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 713 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole2_13
AedesLux_Script_Puzzle2L_Pole2_11:
# 716 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole2_18
AedesLux_Script_Puzzle2L_Pole2_16:
# 721 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_24
AedesLux_Script_Puzzle2L_Pole2_23:
# 725 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_30
AedesLux_Script_Puzzle2L_Pole2_29:
# 729 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 731 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_34
AedesLux_Script_Puzzle2L_Pole2_32:
# 735 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
AedesLux_Script_Puzzle2L_Pole2_21:
# 738 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole2_8

AedesLux_Script_Puzzle2L_Pole2_12:
# 714 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole2_11

AedesLux_Script_Puzzle2L_Pole2_13:
# 713 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole2_12
	goto AedesLux_Script_Puzzle2L_Pole2_11

AedesLux_Script_Puzzle2L_Pole2_17:
# 717 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole2_16

AedesLux_Script_Puzzle2L_Pole2_18:
# 716 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_17
	goto AedesLux_Script_Puzzle2L_Pole2_16

AedesLux_Script_Puzzle2L_Pole2_22:
# 722 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole2_21

AedesLux_Script_Puzzle2L_Pole2_24:
# 721 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_22
# 721 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole2_22
	goto AedesLux_Script_Puzzle2L_Pole2_23

AedesLux_Script_Puzzle2L_Pole2_30:
# 726 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole2_29

AedesLux_Script_Puzzle2L_Pole2_33:
# 732 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole2_32

AedesLux_Script_Puzzle2L_Pole2_34:
# 731 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole2_33
	goto AedesLux_Script_Puzzle2L_Pole2_32


AedesLux_Script_Puzzle2L_Pole3::
# 747 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole3_2
AedesLux_Script_Puzzle2L_Pole3_1:
# 751 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_5
# 754 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole3_4:
# 756 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 758 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole3_9
AedesLux_Script_Puzzle2L_Pole3_8:
# 784 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole3_2:
# 748 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole3_1

AedesLux_Script_Puzzle2L_Pole3_5:
# 752 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole3_4

AedesLux_Script_Puzzle2L_Pole3_9:
# 760 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 761 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole3_13
AedesLux_Script_Puzzle2L_Pole3_11:
# 766 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_19
AedesLux_Script_Puzzle2L_Pole3_18:
# 770 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_23
AedesLux_Script_Puzzle2L_Pole3_22:
# 774 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 776 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_26
AedesLux_Script_Puzzle2L_Pole3_16:
# 781 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole3_8

AedesLux_Script_Puzzle2L_Pole3_12:
# 762 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole3_11

AedesLux_Script_Puzzle2L_Pole3_13:
# 761 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_12
	goto AedesLux_Script_Puzzle2L_Pole3_11

AedesLux_Script_Puzzle2L_Pole3_17:
# 767 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle2L_Pole3_16

AedesLux_Script_Puzzle2L_Pole3_19:
# 766 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_17
	goto AedesLux_Script_Puzzle2L_Pole3_18

AedesLux_Script_Puzzle2L_Pole3_23:
# 771 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole3_22

AedesLux_Script_Puzzle2L_Pole3_25:
# 777 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole3_16

AedesLux_Script_Puzzle2L_Pole3_26:
# 776 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole3_25
	goto AedesLux_Script_Puzzle2L_Pole3_16


AedesLux_Script_Puzzle2L_Pole4::
# 790 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole4_2
AedesLux_Script_Puzzle2L_Pole4_1:
# 794 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole4_5
# 797 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole4_4:
# 799 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 801 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole4_9
AedesLux_Script_Puzzle2L_Pole4_8:
# 833 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole4_2:
# 791 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole4_1

AedesLux_Script_Puzzle2L_Pole4_5:
# 795 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole4_4

AedesLux_Script_Puzzle2L_Pole4_9:
# 803 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 804 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole4_13
AedesLux_Script_Puzzle2L_Pole4_11:
# 807 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole4_18
AedesLux_Script_Puzzle2L_Pole4_16:
# 812 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole4_24
AedesLux_Script_Puzzle2L_Pole4_23:
# 816 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole4_30
AedesLux_Script_Puzzle2L_Pole4_29:
# 820 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 822 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole4_35
AedesLux_Script_Puzzle2L_Pole4_32:
# 825 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole4_40
AedesLux_Script_Puzzle2L_Pole4_21:
# 830 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole4_8

AedesLux_Script_Puzzle2L_Pole4_12:
# 805 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole4_11

AedesLux_Script_Puzzle2L_Pole4_13:
# 804 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole4_12
	goto AedesLux_Script_Puzzle2L_Pole4_11

AedesLux_Script_Puzzle2L_Pole4_17:
# 808 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole4_16

AedesLux_Script_Puzzle2L_Pole4_18:
# 807 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole4_17
	goto AedesLux_Script_Puzzle2L_Pole4_16

AedesLux_Script_Puzzle2L_Pole4_22:
# 813 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle2L_Pole4_21

AedesLux_Script_Puzzle2L_Pole4_24:
# 812 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole4_22
# 812 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole4_22
	goto AedesLux_Script_Puzzle2L_Pole4_23

AedesLux_Script_Puzzle2L_Pole4_30:
# 817 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole4_29

AedesLux_Script_Puzzle2L_Pole4_33:
# 823 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole4_32

AedesLux_Script_Puzzle2L_Pole4_34:
# 822 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole4_33
	goto AedesLux_Script_Puzzle2L_Pole4_32

AedesLux_Script_Puzzle2L_Pole4_35:
# 822 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole4_34
	goto AedesLux_Script_Puzzle2L_Pole4_32

AedesLux_Script_Puzzle2L_Pole4_39:
# 826 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle2L_Pole4_21

AedesLux_Script_Puzzle2L_Pole4_40:
# 825 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole4_39
	goto AedesLux_Script_Puzzle2L_Pole4_21


AedesLux_Script_Puzzle2L_Pole5::
# 839 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole5_2
AedesLux_Script_Puzzle2L_Pole5_1:
# 843 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole5_5
# 846 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole5_4:
# 848 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 850 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole5_9
AedesLux_Script_Puzzle2L_Pole5_8:
# 888 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole5_2:
# 840 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole5_1

AedesLux_Script_Puzzle2L_Pole5_5:
# 844 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole5_4

AedesLux_Script_Puzzle2L_Pole5_9:
# 852 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 853 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole5_13
AedesLux_Script_Puzzle2L_Pole5_11:
# 856 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole5_18
AedesLux_Script_Puzzle2L_Pole5_16:
# 859 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole5_23
AedesLux_Script_Puzzle2L_Pole5_21:
# 864 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole5_29
AedesLux_Script_Puzzle2L_Pole5_28:
# 868 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole5_37
AedesLux_Script_Puzzle2L_Pole5_36:
# 872 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 874 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole5_41
AedesLux_Script_Puzzle2L_Pole5_39:
# 877 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole5_46
AedesLux_Script_Puzzle2L_Pole5_44:
# 880 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole5_50
AedesLux_Script_Puzzle2L_Pole5_26:
# 885 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole5_8

AedesLux_Script_Puzzle2L_Pole5_12:
# 854 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole5_11

AedesLux_Script_Puzzle2L_Pole5_13:
# 853 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole5_12
	goto AedesLux_Script_Puzzle2L_Pole5_11

AedesLux_Script_Puzzle2L_Pole5_17:
# 857 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole5_16

AedesLux_Script_Puzzle2L_Pole5_18:
# 856 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole5_17
	goto AedesLux_Script_Puzzle2L_Pole5_16

AedesLux_Script_Puzzle2L_Pole5_22:
# 860 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole5_21

AedesLux_Script_Puzzle2L_Pole5_23:
# 859 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole5_22
	goto AedesLux_Script_Puzzle2L_Pole5_21

AedesLux_Script_Puzzle2L_Pole5_27:
# 865 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole5_26

AedesLux_Script_Puzzle2L_Pole5_29:
# 864 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole5_27
# 864 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole5_27
# 864 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole5_27
	goto AedesLux_Script_Puzzle2L_Pole5_28

AedesLux_Script_Puzzle2L_Pole5_37:
# 869 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole5_36

AedesLux_Script_Puzzle2L_Pole5_40:
# 875 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole5_39

AedesLux_Script_Puzzle2L_Pole5_41:
# 874 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole5_40
	goto AedesLux_Script_Puzzle2L_Pole5_39

AedesLux_Script_Puzzle2L_Pole5_45:
# 878 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle2L_Pole5_44

AedesLux_Script_Puzzle2L_Pole5_46:
# 877 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole5_45
	goto AedesLux_Script_Puzzle2L_Pole5_44

AedesLux_Script_Puzzle2L_Pole5_49:
# 881 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle2L_Pole5_26

AedesLux_Script_Puzzle2L_Pole5_50:
# 880 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole5_49
	goto AedesLux_Script_Puzzle2L_Pole5_26


AedesLux_Script_Puzzle2L_Pole6::
# 894 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole6_2
AedesLux_Script_Puzzle2L_Pole6_1:
# 898 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole6_5
# 901 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole6_4:
# 903 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 905 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole6_9
AedesLux_Script_Puzzle2L_Pole6_8:
# 937 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole6_2:
# 895 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole6_1

AedesLux_Script_Puzzle2L_Pole6_5:
# 899 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole6_4

AedesLux_Script_Puzzle2L_Pole6_9:
# 907 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 908 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole6_13
AedesLux_Script_Puzzle2L_Pole6_11:
# 911 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole6_18
AedesLux_Script_Puzzle2L_Pole6_16:
# 916 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole6_24
AedesLux_Script_Puzzle2L_Pole6_23:
# 920 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole6_30
AedesLux_Script_Puzzle2L_Pole6_29:
# 924 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 926 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole6_34
AedesLux_Script_Puzzle2L_Pole6_32:
# 929 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole6_38
AedesLux_Script_Puzzle2L_Pole6_21:
# 934 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole6_8

AedesLux_Script_Puzzle2L_Pole6_12:
# 909 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole6_11

AedesLux_Script_Puzzle2L_Pole6_13:
# 908 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole6_12
	goto AedesLux_Script_Puzzle2L_Pole6_11

AedesLux_Script_Puzzle2L_Pole6_17:
# 912 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole6_16

AedesLux_Script_Puzzle2L_Pole6_18:
# 911 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole6_17
	goto AedesLux_Script_Puzzle2L_Pole6_16

AedesLux_Script_Puzzle2L_Pole6_22:
# 917 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle2L_Pole6_21

AedesLux_Script_Puzzle2L_Pole6_24:
# 916 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole6_22
# 916 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole6_22
	goto AedesLux_Script_Puzzle2L_Pole6_23

AedesLux_Script_Puzzle2L_Pole6_30:
# 921 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole6_29

AedesLux_Script_Puzzle2L_Pole6_33:
# 927 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle2L_Pole6_32

AedesLux_Script_Puzzle2L_Pole6_34:
# 926 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole6_33
	goto AedesLux_Script_Puzzle2L_Pole6_32

AedesLux_Script_Puzzle2L_Pole6_37:
# 930 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle2L_Pole6_21

AedesLux_Script_Puzzle2L_Pole6_38:
# 929 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole6_37
	goto AedesLux_Script_Puzzle2L_Pole6_21


AedesLux_Script_Puzzle2L_Pole7::
# 943 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole7_2
AedesLux_Script_Puzzle2L_Pole7_1:
# 947 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole7_5
# 950 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole7_4:
# 952 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 954 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole7_9
AedesLux_Script_Puzzle2L_Pole7_8:
# 986 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole7_2:
# 944 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole7_1

AedesLux_Script_Puzzle2L_Pole7_5:
# 948 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole7_4

AedesLux_Script_Puzzle2L_Pole7_9:
# 956 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 957 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole7_13
AedesLux_Script_Puzzle2L_Pole7_11:
# 960 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole7_18
AedesLux_Script_Puzzle2L_Pole7_16:
# 965 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole7_24
AedesLux_Script_Puzzle2L_Pole7_23:
# 969 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole7_30
AedesLux_Script_Puzzle2L_Pole7_29:
# 973 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 975 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole7_34
AedesLux_Script_Puzzle2L_Pole7_32:
# 978 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole7_39
AedesLux_Script_Puzzle2L_Pole7_21:
# 983 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole7_8

AedesLux_Script_Puzzle2L_Pole7_12:
# 958 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole7_11

AedesLux_Script_Puzzle2L_Pole7_13:
# 957 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole7_12
	goto AedesLux_Script_Puzzle2L_Pole7_11

AedesLux_Script_Puzzle2L_Pole7_17:
# 961 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole7_16

AedesLux_Script_Puzzle2L_Pole7_18:
# 960 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole7_17
	goto AedesLux_Script_Puzzle2L_Pole7_16

AedesLux_Script_Puzzle2L_Pole7_22:
# 966 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle2L_Pole7_21

AedesLux_Script_Puzzle2L_Pole7_24:
# 965 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole7_22
# 965 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole7_22
	goto AedesLux_Script_Puzzle2L_Pole7_23

AedesLux_Script_Puzzle2L_Pole7_30:
# 970 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole7_29

AedesLux_Script_Puzzle2L_Pole7_33:
# 976 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle2L_Pole7_32

AedesLux_Script_Puzzle2L_Pole7_34:
# 975 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole7_33
	goto AedesLux_Script_Puzzle2L_Pole7_32

AedesLux_Script_Puzzle2L_Pole7_37:
# 979 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole7_21

AedesLux_Script_Puzzle2L_Pole7_38:
# 978 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole7_37
	goto AedesLux_Script_Puzzle2L_Pole7_21

AedesLux_Script_Puzzle2L_Pole7_39:
# 978 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole7_38
	goto AedesLux_Script_Puzzle2L_Pole7_21


AedesLux_Script_Puzzle2R_Pole8::
# 994 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole8_2
AedesLux_Script_Puzzle2R_Pole8_1:
# 998 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole8_5
# 1001 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole8_4:
# 1003 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1005 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole8_9
AedesLux_Script_Puzzle2R_Pole8_8:
# 1031 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole8_2:
# 995 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole8_1

AedesLux_Script_Puzzle2R_Pole8_5:
# 999 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole8_4

AedesLux_Script_Puzzle2R_Pole8_9:
# 1007 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1008 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole8_13
AedesLux_Script_Puzzle2R_Pole8_11:
# 1013 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole8_19
AedesLux_Script_Puzzle2R_Pole8_18:
# 1017 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole8_23
AedesLux_Script_Puzzle2R_Pole8_22:
# 1021 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 1023 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole8_26
AedesLux_Script_Puzzle2R_Pole8_16:
# 1028 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole8_8

AedesLux_Script_Puzzle2R_Pole8_12:
# 1009 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole8_11

AedesLux_Script_Puzzle2R_Pole8_13:
# 1008 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole8_12
	goto AedesLux_Script_Puzzle2R_Pole8_11

AedesLux_Script_Puzzle2R_Pole8_17:
# 1014 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle2R_Pole8_16

AedesLux_Script_Puzzle2R_Pole8_19:
# 1013 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole8_17
	goto AedesLux_Script_Puzzle2R_Pole8_18

AedesLux_Script_Puzzle2R_Pole8_23:
# 1018 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole8_22

AedesLux_Script_Puzzle2R_Pole8_25:
# 1024 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle2R_Pole8_16

AedesLux_Script_Puzzle2R_Pole8_26:
# 1023 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole8_25
	goto AedesLux_Script_Puzzle2R_Pole8_16


AedesLux_Script_Puzzle2R_Pole9::
# 1037 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole9_2
AedesLux_Script_Puzzle2R_Pole9_1:
# 1041 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole9_5
# 1044 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole9_4:
# 1046 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1048 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole9_9
AedesLux_Script_Puzzle2R_Pole9_8:
# 1079 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole9_2:
# 1038 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole9_1

AedesLux_Script_Puzzle2R_Pole9_5:
# 1042 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole9_4

AedesLux_Script_Puzzle2R_Pole9_9:
# 1050 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1051 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole9_13
AedesLux_Script_Puzzle2R_Pole9_11:
# 1054 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole9_18
AedesLux_Script_Puzzle2R_Pole9_16:
# 1059 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole9_24
AedesLux_Script_Puzzle2R_Pole9_23:
# 1063 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole9_30
AedesLux_Script_Puzzle2R_Pole9_29:
# 1067 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 1069 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole9_35
AedesLux_Script_Puzzle2R_Pole9_32:
# 1073 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
AedesLux_Script_Puzzle2R_Pole9_21:
# 1076 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole9_8

AedesLux_Script_Puzzle2R_Pole9_12:
# 1052 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole9_11

AedesLux_Script_Puzzle2R_Pole9_13:
# 1051 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole9_12
	goto AedesLux_Script_Puzzle2R_Pole9_11

AedesLux_Script_Puzzle2R_Pole9_17:
# 1055 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole9_16

AedesLux_Script_Puzzle2R_Pole9_18:
# 1054 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole9_17
	goto AedesLux_Script_Puzzle2R_Pole9_16

AedesLux_Script_Puzzle2R_Pole9_22:
# 1060 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle2R_Pole9_21

AedesLux_Script_Puzzle2R_Pole9_24:
# 1059 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole9_22
# 1059 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole9_22
	goto AedesLux_Script_Puzzle2R_Pole9_23

AedesLux_Script_Puzzle2R_Pole9_30:
# 1064 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole9_29

AedesLux_Script_Puzzle2R_Pole9_33:
# 1070 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_Pole9_32

AedesLux_Script_Puzzle2R_Pole9_34:
# 1069 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole9_33
	goto AedesLux_Script_Puzzle2R_Pole9_32

AedesLux_Script_Puzzle2R_Pole9_35:
# 1069 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_Pole9_34
	goto AedesLux_Script_Puzzle2R_Pole9_32


AedesLux_Script_Puzzle2R_PoleA::
# 1085 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleA_2
AedesLux_Script_Puzzle2R_PoleA_1:
# 1089 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleA_5
# 1092 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleA_4:
# 1094 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1096 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleA_9
AedesLux_Script_Puzzle2R_PoleA_8:
# 1134 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleA_2:
# 1086 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleA_1

AedesLux_Script_Puzzle2R_PoleA_5:
# 1090 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleA_4

AedesLux_Script_Puzzle2R_PoleA_9:
# 1098 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1099 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleA_13
AedesLux_Script_Puzzle2R_PoleA_11:
# 1102 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleA_18
AedesLux_Script_Puzzle2R_PoleA_16:
# 1105 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleA_23
AedesLux_Script_Puzzle2R_PoleA_21:
# 1110 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleA_29
AedesLux_Script_Puzzle2R_PoleA_28:
# 1114 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleA_37
AedesLux_Script_Puzzle2R_PoleA_36:
# 1118 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 1120 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleA_41
AedesLux_Script_Puzzle2R_PoleA_39:
# 1123 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleA_46
AedesLux_Script_Puzzle2R_PoleA_44:
# 1126 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleA_51
AedesLux_Script_Puzzle2R_PoleA_26:
# 1131 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleA_8

AedesLux_Script_Puzzle2R_PoleA_12:
# 1100 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleA_11

AedesLux_Script_Puzzle2R_PoleA_13:
# 1099 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleA_12
	goto AedesLux_Script_Puzzle2R_PoleA_11

AedesLux_Script_Puzzle2R_PoleA_17:
# 1103 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleA_16

AedesLux_Script_Puzzle2R_PoleA_18:
# 1102 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleA_17
	goto AedesLux_Script_Puzzle2R_PoleA_16

AedesLux_Script_Puzzle2R_PoleA_22:
# 1106 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleA_21

AedesLux_Script_Puzzle2R_PoleA_23:
# 1105 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleA_22
	goto AedesLux_Script_Puzzle2R_PoleA_21

AedesLux_Script_Puzzle2R_PoleA_27:
# 1111 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_PoleA_26

AedesLux_Script_Puzzle2R_PoleA_29:
# 1110 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleA_27
# 1110 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleA_27
# 1110 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleA_27
	goto AedesLux_Script_Puzzle2R_PoleA_28

AedesLux_Script_Puzzle2R_PoleA_37:
# 1115 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleA_36

AedesLux_Script_Puzzle2R_PoleA_40:
# 1121 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle2R_PoleA_39

AedesLux_Script_Puzzle2R_PoleA_41:
# 1120 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle2R_PoleA_40
	goto AedesLux_Script_Puzzle2R_PoleA_39

AedesLux_Script_Puzzle2R_PoleA_45:
# 1124 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle2R_PoleA_44

AedesLux_Script_Puzzle2R_PoleA_46:
# 1123 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleA_45
	goto AedesLux_Script_Puzzle2R_PoleA_44

AedesLux_Script_Puzzle2R_PoleA_49:
# 1127 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_PoleA_26

AedesLux_Script_Puzzle2R_PoleA_50:
# 1126 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleA_49
	goto AedesLux_Script_Puzzle2R_PoleA_26

AedesLux_Script_Puzzle2R_PoleA_51:
# 1126 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleA_50
	goto AedesLux_Script_Puzzle2R_PoleA_26


AedesLux_Script_Puzzle2R_PoleB::
# 1140 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleB_2
AedesLux_Script_Puzzle2R_PoleB_1:
# 1144 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_5
# 1147 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleB_4:
# 1149 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1151 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleB_9
AedesLux_Script_Puzzle2R_PoleB_8:
# 1183 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleB_2:
# 1141 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleB_1

AedesLux_Script_Puzzle2R_PoleB_5:
# 1145 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleB_4

AedesLux_Script_Puzzle2R_PoleB_9:
# 1153 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1154 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleB_13
AedesLux_Script_Puzzle2R_PoleB_11:
# 1157 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleB_18
AedesLux_Script_Puzzle2R_PoleB_16:
# 1162 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_24
AedesLux_Script_Puzzle2R_PoleB_23:
# 1166 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_30
AedesLux_Script_Puzzle2R_PoleB_29:
# 1170 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 1172 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleB_35
AedesLux_Script_Puzzle2R_PoleB_32:
# 1175 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleB_41
AedesLux_Script_Puzzle2R_PoleB_21:
# 1180 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleB_8

AedesLux_Script_Puzzle2R_PoleB_12:
# 1155 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleB_11

AedesLux_Script_Puzzle2R_PoleB_13:
# 1154 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleB_12
	goto AedesLux_Script_Puzzle2R_PoleB_11

AedesLux_Script_Puzzle2R_PoleB_17:
# 1158 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleB_16

AedesLux_Script_Puzzle2R_PoleB_18:
# 1157 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleB_17
	goto AedesLux_Script_Puzzle2R_PoleB_16

AedesLux_Script_Puzzle2R_PoleB_22:
# 1163 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle2R_PoleB_21

AedesLux_Script_Puzzle2R_PoleB_24:
# 1162 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleB_22
# 1162 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_22
	goto AedesLux_Script_Puzzle2R_PoleB_23

AedesLux_Script_Puzzle2R_PoleB_30:
# 1167 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleB_29

AedesLux_Script_Puzzle2R_PoleB_33:
# 1173 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_PoleB_32

AedesLux_Script_Puzzle2R_PoleB_34:
# 1172 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleB_33
	goto AedesLux_Script_Puzzle2R_PoleB_32

AedesLux_Script_Puzzle2R_PoleB_35:
# 1172 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleB_34
	goto AedesLux_Script_Puzzle2R_PoleB_32

AedesLux_Script_Puzzle2R_PoleB_39:
# 1176 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_PoleB_21

AedesLux_Script_Puzzle2R_PoleB_40:
# 1175 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleB_39
	goto AedesLux_Script_Puzzle2R_PoleB_21

AedesLux_Script_Puzzle2R_PoleB_41:
# 1175 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleB_40
	goto AedesLux_Script_Puzzle2R_PoleB_21


AedesLux_Script_Puzzle2R_PoleC::
# 1189 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleC_2
AedesLux_Script_Puzzle2R_PoleC_1:
# 1193 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleC_5
# 1196 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleC_4:
# 1198 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1200 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleC_9
AedesLux_Script_Puzzle2R_PoleC_8:
# 1238 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleC_2:
# 1190 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleC_1

AedesLux_Script_Puzzle2R_PoleC_5:
# 1194 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleC_4

AedesLux_Script_Puzzle2R_PoleC_9:
# 1202 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1203 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleC_13
AedesLux_Script_Puzzle2R_PoleC_11:
# 1206 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleC_18
AedesLux_Script_Puzzle2R_PoleC_16:
# 1209 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleC_23
AedesLux_Script_Puzzle2R_PoleC_21:
# 1214 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleC_29
AedesLux_Script_Puzzle2R_PoleC_28:
# 1218 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleC_37
AedesLux_Script_Puzzle2R_PoleC_36:
# 1222 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 1224 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleC_42
AedesLux_Script_Puzzle2R_PoleC_39:
# 1227 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleC_49
AedesLux_Script_Puzzle2R_PoleC_46:
# 1230 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleC_55
AedesLux_Script_Puzzle2R_PoleC_26:
# 1235 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleC_8

AedesLux_Script_Puzzle2R_PoleC_12:
# 1204 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleC_11

AedesLux_Script_Puzzle2R_PoleC_13:
# 1203 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleC_12
	goto AedesLux_Script_Puzzle2R_PoleC_11

AedesLux_Script_Puzzle2R_PoleC_17:
# 1207 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleC_16

AedesLux_Script_Puzzle2R_PoleC_18:
# 1206 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleC_17
	goto AedesLux_Script_Puzzle2R_PoleC_16

AedesLux_Script_Puzzle2R_PoleC_22:
# 1210 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleC_21

AedesLux_Script_Puzzle2R_PoleC_23:
# 1209 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleC_22
	goto AedesLux_Script_Puzzle2R_PoleC_21

AedesLux_Script_Puzzle2R_PoleC_27:
# 1215 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_PoleC_26

AedesLux_Script_Puzzle2R_PoleC_29:
# 1214 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleC_27
# 1214 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleC_27
# 1214 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleC_27
	goto AedesLux_Script_Puzzle2R_PoleC_28

AedesLux_Script_Puzzle2R_PoleC_37:
# 1219 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleC_36

AedesLux_Script_Puzzle2R_PoleC_40:
# 1225 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_PoleC_39

AedesLux_Script_Puzzle2R_PoleC_41:
# 1224 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleC_40
	goto AedesLux_Script_Puzzle2R_PoleC_39

AedesLux_Script_Puzzle2R_PoleC_42:
# 1224 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleC_41
	goto AedesLux_Script_Puzzle2R_PoleC_39

AedesLux_Script_Puzzle2R_PoleC_47:
# 1228 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_PoleC_46

AedesLux_Script_Puzzle2R_PoleC_48:
# 1227 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleC_47
	goto AedesLux_Script_Puzzle2R_PoleC_46

AedesLux_Script_Puzzle2R_PoleC_49:
# 1227 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleC_48
	goto AedesLux_Script_Puzzle2R_PoleC_46

AedesLux_Script_Puzzle2R_PoleC_53:
# 1231 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_PoleC_26

AedesLux_Script_Puzzle2R_PoleC_54:
# 1230 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleC_53
	goto AedesLux_Script_Puzzle2R_PoleC_26

AedesLux_Script_Puzzle2R_PoleC_55:
# 1230 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleC_54
	goto AedesLux_Script_Puzzle2R_PoleC_26


AedesLux_Script_Puzzle2R_PoleD::
# 1244 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleD_2
AedesLux_Script_Puzzle2R_PoleD_1:
# 1248 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleD_5
# 1251 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleD_4:
# 1253 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1255 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleD_9
AedesLux_Script_Puzzle2R_PoleD_8:
# 1293 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleD_2:
# 1245 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleD_1

AedesLux_Script_Puzzle2R_PoleD_5:
# 1249 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleD_4

AedesLux_Script_Puzzle2R_PoleD_9:
# 1257 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1258 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleD_13
AedesLux_Script_Puzzle2R_PoleD_11:
# 1261 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleD_18
AedesLux_Script_Puzzle2R_PoleD_16:
# 1264 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleD_23
AedesLux_Script_Puzzle2R_PoleD_21:
# 1269 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleD_29
AedesLux_Script_Puzzle2R_PoleD_28:
# 1273 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleD_37
AedesLux_Script_Puzzle2R_PoleD_36:
# 1277 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 1279 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleD_41
AedesLux_Script_Puzzle2R_PoleD_39:
# 1282 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleD_47
AedesLux_Script_Puzzle2R_PoleD_44:
# 1285 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleD_52
AedesLux_Script_Puzzle2R_PoleD_26:
# 1290 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleD_8

AedesLux_Script_Puzzle2R_PoleD_12:
# 1259 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleD_11

AedesLux_Script_Puzzle2R_PoleD_13:
# 1258 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleD_12
	goto AedesLux_Script_Puzzle2R_PoleD_11

AedesLux_Script_Puzzle2R_PoleD_17:
# 1262 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleD_16

AedesLux_Script_Puzzle2R_PoleD_18:
# 1261 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleD_17
	goto AedesLux_Script_Puzzle2R_PoleD_16

AedesLux_Script_Puzzle2R_PoleD_22:
# 1265 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleD_21

AedesLux_Script_Puzzle2R_PoleD_23:
# 1264 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleD_22
	goto AedesLux_Script_Puzzle2R_PoleD_21

AedesLux_Script_Puzzle2R_PoleD_27:
# 1270 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_PoleD_26

AedesLux_Script_Puzzle2R_PoleD_29:
# 1269 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleD_27
# 1269 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleD_27
# 1269 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleD_27
	goto AedesLux_Script_Puzzle2R_PoleD_28

AedesLux_Script_Puzzle2R_PoleD_37:
# 1274 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleD_36

AedesLux_Script_Puzzle2R_PoleD_40:
# 1280 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle2R_PoleD_39

AedesLux_Script_Puzzle2R_PoleD_41:
# 1279 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleD_40
	goto AedesLux_Script_Puzzle2R_PoleD_39

AedesLux_Script_Puzzle2R_PoleD_45:
# 1283 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_PoleD_44

AedesLux_Script_Puzzle2R_PoleD_46:
# 1282 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleD_45
	goto AedesLux_Script_Puzzle2R_PoleD_44

AedesLux_Script_Puzzle2R_PoleD_47:
# 1282 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleD_46
	goto AedesLux_Script_Puzzle2R_PoleD_44

AedesLux_Script_Puzzle2R_PoleD_51:
# 1286 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle2R_PoleD_26

AedesLux_Script_Puzzle2R_PoleD_52:
# 1285 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleD_51
	goto AedesLux_Script_Puzzle2R_PoleD_26


AedesLux_Script_Puzzle2R_PoleE::
# 1299 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleE_2
AedesLux_Script_Puzzle2R_PoleE_1:
# 1303 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleE_5
# 1306 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleE_4:
# 1308 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1310 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleE_9
AedesLux_Script_Puzzle2R_PoleE_8:
# 1336 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleE_2:
# 1300 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleE_1

AedesLux_Script_Puzzle2R_PoleE_5:
# 1304 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleE_4

AedesLux_Script_Puzzle2R_PoleE_9:
# 1312 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1313 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleE_13
AedesLux_Script_Puzzle2R_PoleE_11:
# 1318 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleE_19
AedesLux_Script_Puzzle2R_PoleE_18:
# 1322 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleE_23
AedesLux_Script_Puzzle2R_PoleE_22:
# 1326 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 1328 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleE_26
AedesLux_Script_Puzzle2R_PoleE_16:
# 1333 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleE_8

AedesLux_Script_Puzzle2R_PoleE_12:
# 1314 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleE_11

AedesLux_Script_Puzzle2R_PoleE_13:
# 1313 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleE_12
	goto AedesLux_Script_Puzzle2R_PoleE_11

AedesLux_Script_Puzzle2R_PoleE_17:
# 1319 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle2R_PoleE_16

AedesLux_Script_Puzzle2R_PoleE_19:
# 1318 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleE_17
	goto AedesLux_Script_Puzzle2R_PoleE_18

AedesLux_Script_Puzzle2R_PoleE_23:
# 1323 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleE_22

AedesLux_Script_Puzzle2R_PoleE_25:
# 1329 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle2R_PoleE_16

AedesLux_Script_Puzzle2R_PoleE_26:
# 1328 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleE_25
	goto AedesLux_Script_Puzzle2R_PoleE_16


AedesLux_Script_Puzzle2R_PoleF::
# 1342 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleF_2
AedesLux_Script_Puzzle2R_PoleF_1:
# 1346 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleF_5
# 1349 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleF_4:
# 1351 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1353 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleF_9
AedesLux_Script_Puzzle2R_PoleF_8:
# 1384 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleF_2:
# 1343 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleF_1

AedesLux_Script_Puzzle2R_PoleF_5:
# 1347 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleF_4

AedesLux_Script_Puzzle2R_PoleF_9:
# 1355 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1356 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleF_13
AedesLux_Script_Puzzle2R_PoleF_11:
# 1359 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleF_18
AedesLux_Script_Puzzle2R_PoleF_16:
# 1364 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleF_24
AedesLux_Script_Puzzle2R_PoleF_23:
# 1368 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleF_30
AedesLux_Script_Puzzle2R_PoleF_29:
# 1372 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 1374 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleF_35
AedesLux_Script_Puzzle2R_PoleF_32:
# 1378 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
AedesLux_Script_Puzzle2R_PoleF_21:
# 1381 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleF_8

AedesLux_Script_Puzzle2R_PoleF_12:
# 1357 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleF_11

AedesLux_Script_Puzzle2R_PoleF_13:
# 1356 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleF_12
	goto AedesLux_Script_Puzzle2R_PoleF_11

AedesLux_Script_Puzzle2R_PoleF_17:
# 1360 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleF_16

AedesLux_Script_Puzzle2R_PoleF_18:
# 1359 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleF_17
	goto AedesLux_Script_Puzzle2R_PoleF_16

AedesLux_Script_Puzzle2R_PoleF_22:
# 1365 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle2R_PoleF_21

AedesLux_Script_Puzzle2R_PoleF_24:
# 1364 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleF_22
# 1364 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleF_22
	goto AedesLux_Script_Puzzle2R_PoleF_23

AedesLux_Script_Puzzle2R_PoleF_30:
# 1369 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleF_29

AedesLux_Script_Puzzle2R_PoleF_33:
# 1375 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_PoleF_32

AedesLux_Script_Puzzle2R_PoleF_34:
# 1374 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleF_33
	goto AedesLux_Script_Puzzle2R_PoleF_32

AedesLux_Script_Puzzle2R_PoleF_35:
# 1374 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleF_34
	goto AedesLux_Script_Puzzle2R_PoleF_32


AedesLux_Script_Puzzle2R_Pole10::
# 1390 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole10_2
AedesLux_Script_Puzzle2R_Pole10_1:
# 1394 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole10_5
# 1397 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole10_4:
# 1399 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1401 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole10_9
AedesLux_Script_Puzzle2R_Pole10_8:
# 1439 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole10_2:
# 1391 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole10_1

AedesLux_Script_Puzzle2R_Pole10_5:
# 1395 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole10_4

AedesLux_Script_Puzzle2R_Pole10_9:
# 1403 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1404 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_Pole10_13
AedesLux_Script_Puzzle2R_Pole10_11:
# 1407 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole10_18
AedesLux_Script_Puzzle2R_Pole10_16:
# 1410 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole10_23
AedesLux_Script_Puzzle2R_Pole10_21:
# 1415 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole10_29
AedesLux_Script_Puzzle2R_Pole10_28:
# 1419 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole10_37
AedesLux_Script_Puzzle2R_Pole10_36:
# 1423 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 1425 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole10_42
AedesLux_Script_Puzzle2R_Pole10_39:
# 1428 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole10_48
AedesLux_Script_Puzzle2R_Pole10_46:
# 1431 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole10_52
AedesLux_Script_Puzzle2R_Pole10_26:
# 1436 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole10_8

AedesLux_Script_Puzzle2R_Pole10_12:
# 1405 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole10_11

AedesLux_Script_Puzzle2R_Pole10_13:
# 1404 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole10_12
	goto AedesLux_Script_Puzzle2R_Pole10_11

AedesLux_Script_Puzzle2R_Pole10_17:
# 1408 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole10_16

AedesLux_Script_Puzzle2R_Pole10_18:
# 1407 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole10_17
	goto AedesLux_Script_Puzzle2R_Pole10_16

AedesLux_Script_Puzzle2R_Pole10_22:
# 1411 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole10_21

AedesLux_Script_Puzzle2R_Pole10_23:
# 1410 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole10_22
	goto AedesLux_Script_Puzzle2R_Pole10_21

AedesLux_Script_Puzzle2R_Pole10_27:
# 1416 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_Pole10_26

AedesLux_Script_Puzzle2R_Pole10_29:
# 1415 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole10_27
# 1415 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole10_27
# 1415 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole10_27
	goto AedesLux_Script_Puzzle2R_Pole10_28

AedesLux_Script_Puzzle2R_Pole10_37:
# 1420 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole10_36

AedesLux_Script_Puzzle2R_Pole10_40:
# 1426 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_Pole10_39

AedesLux_Script_Puzzle2R_Pole10_41:
# 1425 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole10_40
	goto AedesLux_Script_Puzzle2R_Pole10_39

AedesLux_Script_Puzzle2R_Pole10_42:
# 1425 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole10_41
	goto AedesLux_Script_Puzzle2R_Pole10_39

AedesLux_Script_Puzzle2R_Pole10_47:
# 1429 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle2R_Pole10_46

AedesLux_Script_Puzzle2R_Pole10_48:
# 1428 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle2R_Pole10_47
	goto AedesLux_Script_Puzzle2R_Pole10_46

AedesLux_Script_Puzzle2R_Pole10_51:
# 1432 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle2R_Pole10_26

AedesLux_Script_Puzzle2R_Pole10_52:
# 1431 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole10_51
	goto AedesLux_Script_Puzzle2R_Pole10_26


AedesLux_Script_Puzzle2R_Pole11::
# 1445 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole11_2
AedesLux_Script_Puzzle2R_Pole11_1:
# 1449 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole11_5
# 1452 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole11_4:
# 1454 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1456 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole11_9
AedesLux_Script_Puzzle2R_Pole11_8:
# 1488 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole11_2:
# 1446 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole11_1

AedesLux_Script_Puzzle2R_Pole11_5:
# 1450 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole11_4

AedesLux_Script_Puzzle2R_Pole11_9:
# 1458 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1459 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_Pole11_13
AedesLux_Script_Puzzle2R_Pole11_11:
# 1462 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole11_18
AedesLux_Script_Puzzle2R_Pole11_16:
# 1467 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole11_24
AedesLux_Script_Puzzle2R_Pole11_23:
# 1471 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole11_30
AedesLux_Script_Puzzle2R_Pole11_29:
# 1475 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 1477 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole11_35
AedesLux_Script_Puzzle2R_Pole11_32:
# 1480 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole11_41
AedesLux_Script_Puzzle2R_Pole11_21:
# 1485 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole11_8

AedesLux_Script_Puzzle2R_Pole11_12:
# 1460 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole11_11

AedesLux_Script_Puzzle2R_Pole11_13:
# 1459 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole11_12
	goto AedesLux_Script_Puzzle2R_Pole11_11

AedesLux_Script_Puzzle2R_Pole11_17:
# 1463 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole11_16

AedesLux_Script_Puzzle2R_Pole11_18:
# 1462 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole11_17
	goto AedesLux_Script_Puzzle2R_Pole11_16

AedesLux_Script_Puzzle2R_Pole11_22:
# 1468 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle2R_Pole11_21

AedesLux_Script_Puzzle2R_Pole11_24:
# 1467 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole11_22
# 1467 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole11_22
	goto AedesLux_Script_Puzzle2R_Pole11_23

AedesLux_Script_Puzzle2R_Pole11_30:
# 1472 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole11_29

AedesLux_Script_Puzzle2R_Pole11_33:
# 1478 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_Pole11_32

AedesLux_Script_Puzzle2R_Pole11_34:
# 1477 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole11_33
	goto AedesLux_Script_Puzzle2R_Pole11_32

AedesLux_Script_Puzzle2R_Pole11_35:
# 1477 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole11_34
	goto AedesLux_Script_Puzzle2R_Pole11_32

AedesLux_Script_Puzzle2R_Pole11_39:
# 1481 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_Pole11_21

AedesLux_Script_Puzzle2R_Pole11_40:
# 1480 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_Pole11_39
	goto AedesLux_Script_Puzzle2R_Pole11_21

AedesLux_Script_Puzzle2R_Pole11_41:
# 1480 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole11_40
	goto AedesLux_Script_Puzzle2R_Pole11_21


AedesLux_Script_ResetPuzzle1::
# 1500 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 1501 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle1_1
# 1515 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle1_1:
# 1503 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_ResetPuzzle1_4
# 1508 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 1509 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 1510 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 1511 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle1Flags
# 1512 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	return

AedesLux_Script_ResetPuzzle1_4:
# 1504 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 1505 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle2::
# 1521 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 1522 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle2_1
# 1536 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle2_1:
# 1524 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_ResetPuzzle2_4
# 1529 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 1530 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 1531 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 1532 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle2Flags
# 1533 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	return

AedesLux_Script_ResetPuzzle2_4:
# 1525 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 1526 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle3L::
# 1542 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 1543 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle3L_1
# 1557 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle3L_1:
# 1545 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_ResetPuzzle3L_4
# 1550 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 1551 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 1552 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 1553 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3LFlags
# 1554 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3
	return

AedesLux_Script_ResetPuzzle3L_4:
# 1546 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 1547 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle3R::
# 1563 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 1564 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle3R_1
# 1578 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle3R_1:
# 1566 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_ResetPuzzle3R_4
# 1571 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 1572 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 1573 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 1574 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3RFlags
# 1575 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3
	return

AedesLux_Script_ResetPuzzle3R_4:
# 1567 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 1568 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_UpdatePuzzle::
# 1585 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 1586 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 1588 "data/maps/AedesLux_1F/scripts.pory"
	switch VAR_TEMP_A
# 1590 "data/maps/AedesLux_1F/scripts.pory"
	case 0, AedesLux_Script_UpdatePuzzle_3
# 1592 "data/maps/AedesLux_1F/scripts.pory"
	case 1, AedesLux_Script_UpdatePuzzle_4
# 1594 "data/maps/AedesLux_1F/scripts.pory"
	case 2, AedesLux_Script_UpdatePuzzle_5
# 1596 "data/maps/AedesLux_1F/scripts.pory"
	case 3, AedesLux_Script_UpdatePuzzle_6
# 1601 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_UpdatePuzzle_Text_1
# 1602 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_UpdatePuzzle_1:
	return

AedesLux_Script_UpdatePuzzle_3:
# 1591 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_4:
# 1593 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_5:
# 1595 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_6:
# 1597 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_UpdatePuzzle_Text_0
# 1598 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_DrawPuzzle1::
# 1612 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle1
# 1613 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1L
# 1614 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1R
# 1616 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle2::
# 1622 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle2
# 1623 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2L
# 1624 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2R
# 1626 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle3::
# 1632 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle3
# 1633 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3L
# 1634 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3R
# 1636 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle1L::
# 1642 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_4
AedesLux_Script_DrawPuzzle1L_3:
# 1648 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall, TRUE
# 1649 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol, TRUE
# 1650 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1651 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_1:
# 1654 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_10
AedesLux_Script_DrawPuzzle1L_9:
# 1659 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 1660 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor, FALSE
# 1661 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_7:
# 1664 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_16
AedesLux_Script_DrawPuzzle1L_15:
# 1670 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall, TRUE
# 1671 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall, TRUE
# 1672 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1673 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_13:
# 1676 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_22
AedesLux_Script_DrawPuzzle1L_21:
# 1681 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_Floor_Pole, TRUE
# 1682 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor, FALSE
# 1683 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_19:
	return

AedesLux_Script_DrawPuzzle1L_2:
# 1643 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 1644 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol_Electric_TopRight, TRUE
# 1645 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 1646 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_1

AedesLux_Script_DrawPuzzle1L_4:
# 1642 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_2
	goto AedesLux_Script_DrawPuzzle1L_3

AedesLux_Script_DrawPuzzle1L_8:
# 1655 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 1656 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 1657 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_7

AedesLux_Script_DrawPuzzle1L_10:
# 1654 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_8
	goto AedesLux_Script_DrawPuzzle1L_9

AedesLux_Script_DrawPuzzle1L_14:
# 1665 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 1666 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 1667 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 1668 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_13

AedesLux_Script_DrawPuzzle1L_16:
# 1664 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle1L_14
	goto AedesLux_Script_DrawPuzzle1L_15

AedesLux_Script_DrawPuzzle1L_20:
# 1677 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 1678 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 1679 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_19

AedesLux_Script_DrawPuzzle1L_22:
# 1676 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle1L_20
	goto AedesLux_Script_DrawPuzzle1L_21


AedesLux_Script_DrawPuzzle1R::
# 1690 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle1R_4
AedesLux_Script_DrawPuzzle1R_3:
# 1695 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 42, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 1696 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 43, METATILE_MauvilleGym_Floor, FALSE
# 1697 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 44, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1R_1:
# 1700 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle1R_10
AedesLux_Script_DrawPuzzle1R_9:
# 1705 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 45, METATILE_MauvilleGym_Floor_Pole, TRUE
# 1706 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 46, METATILE_MauvilleGym_Floor, FALSE
# 1707 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 47, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1R_7:
# 1710 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle1R_16
AedesLux_Script_DrawPuzzle1R_15:
# 1716 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 47, METATILE_MauvilleGym_Floor, FALSE
# 1717 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 47, METATILE_MauvilleGym_Floor, FALSE
# 1718 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 48, METATILE_MauvilleGym_Floor, FALSE
# 1719 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 48, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle1R_13:
# 1722 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle1R_22
AedesLux_Script_DrawPuzzle1R_21:
# 1728 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 47, METATILE_MauvilleGym_Floor, FALSE
# 1729 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 47, METATILE_MauvilleGym_Floor, FALSE
# 1730 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 48, METATILE_MauvilleGym_Floor, FALSE
# 1731 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 48, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle1R_19:
	return

AedesLux_Script_DrawPuzzle1R_2:
# 1691 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 42, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 1692 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 43, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 1693 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 44, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1R_1

AedesLux_Script_DrawPuzzle1R_4:
# 1690 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle1R_2
	goto AedesLux_Script_DrawPuzzle1R_3

AedesLux_Script_DrawPuzzle1R_8:
# 1701 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 45, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 1702 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 46, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 1703 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 47, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1R_7

AedesLux_Script_DrawPuzzle1R_10:
# 1700 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle1R_8
	goto AedesLux_Script_DrawPuzzle1R_9

AedesLux_Script_DrawPuzzle1R_14:
# 1711 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 47, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 1712 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 47, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 1713 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 48, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 1714 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 48, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1R_13

AedesLux_Script_DrawPuzzle1R_16:
# 1710 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle1R_14
	goto AedesLux_Script_DrawPuzzle1R_15

AedesLux_Script_DrawPuzzle1R_20:
# 1723 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 47, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 1724 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 47, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 1725 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 48, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 1726 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 48, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1R_19

AedesLux_Script_DrawPuzzle1R_22:
# 1722 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle1R_20
	goto AedesLux_Script_DrawPuzzle1R_21


AedesLux_Script_DrawPuzzle2L::
# 1739 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle2L_4
AedesLux_Script_DrawPuzzle2L_3:
# 1745 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 30, METATILE_MauvilleGym_Wall, TRUE
# 1746 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 30, METATILE_MauvilleGym_Wall, TRUE
# 1747 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1748 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2L_1:
# 1751 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle2L_10
AedesLux_Script_DrawPuzzle2L_9:
# 1757 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 30, METATILE_MauvilleGym_Wall, TRUE
# 1758 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 30, METATILE_MauvilleGym_Wall, TRUE
# 1759 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1760 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2L_7:
# 1763 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle2L_16
AedesLux_Script_DrawPuzzle2L_15:
# 1768 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 1769 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 32, METATILE_MauvilleGym_Floor, FALSE
# 1770 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 33, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_13:
# 1773 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle2L_22
AedesLux_Script_DrawPuzzle2L_21:
# 1779 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 33, METATILE_MauvilleGym_Floor, FALSE
# 1780 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 33, METATILE_MauvilleGym_Floor, FALSE
# 1781 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 34, METATILE_MauvilleGym_Floor, FALSE
# 1782 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 34, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2L_19:
# 1785 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle2L_28
AedesLux_Script_DrawPuzzle2L_27:
# 1790 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 34, METATILE_MauvilleGym_FloorLeftShadow_Pole, TRUE
# 1791 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 35, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 1792 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 36, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_25:
# 1795 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_34
AedesLux_Script_DrawPuzzle2L_33:
# 1800 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 34, METATILE_MauvilleGym_Floor_Pole, TRUE
# 1801 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 35, METATILE_MauvilleGym_Floor, FALSE
# 1802 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 36, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_31:
# 1805 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle2L_40
AedesLux_Script_DrawPuzzle2L_39:
# 1811 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 36, METATILE_MauvilleGym_Floor, FALSE
# 1812 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 36, METATILE_MauvilleGym_Floor, FALSE
# 1813 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 37, METATILE_MauvilleGym_Floor, FALSE
# 1814 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2L_37:
	return

AedesLux_Script_DrawPuzzle2L_2:
# 1740 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 1741 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 1742 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 1743 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_1

AedesLux_Script_DrawPuzzle2L_4:
# 1739 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle2L_2
	goto AedesLux_Script_DrawPuzzle2L_3

AedesLux_Script_DrawPuzzle2L_8:
# 1752 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 1753 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 1754 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 1755 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_7

AedesLux_Script_DrawPuzzle2L_10:
# 1751 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle2L_8
	goto AedesLux_Script_DrawPuzzle2L_9

AedesLux_Script_DrawPuzzle2L_14:
# 1764 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 1765 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 32, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 1766 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 33, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_13

AedesLux_Script_DrawPuzzle2L_16:
# 1763 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_14
	goto AedesLux_Script_DrawPuzzle2L_15

AedesLux_Script_DrawPuzzle2L_20:
# 1774 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 33, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 1775 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 33, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 1776 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 34, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 1777 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 34, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_19

AedesLux_Script_DrawPuzzle2L_22:
# 1773 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_20
	goto AedesLux_Script_DrawPuzzle2L_21

AedesLux_Script_DrawPuzzle2L_26:
# 1786 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 34, METATILE_MauvilleGym_FloorLeftShadow_Pole_Electric, TRUE
# 1787 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 35, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 1788 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 36, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_25

AedesLux_Script_DrawPuzzle2L_28:
# 1785 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle2L_26
	goto AedesLux_Script_DrawPuzzle2L_27

AedesLux_Script_DrawPuzzle2L_32:
# 1796 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 34, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 1797 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 35, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 1798 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 36, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_31

AedesLux_Script_DrawPuzzle2L_34:
# 1795 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle2L_32
	goto AedesLux_Script_DrawPuzzle2L_33

AedesLux_Script_DrawPuzzle2L_38:
# 1806 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 1807 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 36, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 1808 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 1809 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_37

AedesLux_Script_DrawPuzzle2L_40:
# 1805 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle2L_38
	goto AedesLux_Script_DrawPuzzle2L_39


AedesLux_Script_DrawPuzzle2R::
# 1821 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle2R_4
AedesLux_Script_DrawPuzzle2R_3:
# 1827 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 30, METATILE_MauvilleGym_Wall, TRUE
# 1828 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 30, METATILE_MauvilleGym_Wall, TRUE
# 1829 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1830 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_1:
# 1833 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle2R_10
AedesLux_Script_DrawPuzzle2R_9:
# 1839 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 30, METATILE_MauvilleGym_Wall, TRUE
# 1840 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 30, METATILE_MauvilleGym_Wall, TRUE
# 1841 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1842 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_7:
# 1845 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_16
AedesLux_Script_DrawPuzzle2R_15:
# 1851 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 30, METATILE_MauvilleGym_Wall, TRUE
# 1852 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 30, METATILE_MauvilleGym_WallSymbol, TRUE
# 1853 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1854 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_13:
# 1857 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_22
AedesLux_Script_DrawPuzzle2R_21:
# 1862 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 1863 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 32, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 1864 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 33, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_19:
# 1867 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle2R_28
AedesLux_Script_DrawPuzzle2R_27:
# 1872 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 1873 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 32, METATILE_MauvilleGym_Floor, FALSE
# 1874 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 33, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_25:
# 1877 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_34
AedesLux_Script_DrawPuzzle2R_33:
# 1883 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 33, METATILE_MauvilleGym_Floor, FALSE
# 1884 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 33, METATILE_MauvilleGym_Floor, FALSE
# 1885 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 34, METATILE_MauvilleGym_Floor, FALSE
# 1886 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 34, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_31:
# 1889 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_40
AedesLux_Script_DrawPuzzle2R_39:
# 1894 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 34, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 1895 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 35, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 1896 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 36, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_37:
# 1899 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_46
AedesLux_Script_DrawPuzzle2R_45:
# 1904 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 34, METATILE_MauvilleGym_Floor_Pole, TRUE
# 1905 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 35, METATILE_MauvilleGym_Floor, FALSE
# 1906 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 36, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_43:
# 1909 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_DrawPuzzle2R_52
AedesLux_Script_DrawPuzzle2R_51:
# 1915 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 36, METATILE_MauvilleGym_Floor, FALSE
# 1916 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1917 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 37, METATILE_MauvilleGym_Floor, FALSE
# 1918 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_49:
# 1921 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle2R_58
AedesLux_Script_DrawPuzzle2R_57:
# 1927 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1928 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1929 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 37, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 1930 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 37, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_55:
# 1933 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_64
AedesLux_Script_DrawPuzzle2R_63:
# 1939 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 36, METATILE_MauvilleGym_Floor, FALSE
# 1940 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 36, METATILE_MauvilleGym_Floor, FALSE
# 1941 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 37, METATILE_MauvilleGym_Floor, FALSE
# 1942 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_61:
	return

AedesLux_Script_DrawPuzzle2R_2:
# 1822 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 1823 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 1824 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 1825 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_1

AedesLux_Script_DrawPuzzle2R_4:
# 1821 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle2R_2
	goto AedesLux_Script_DrawPuzzle2R_3

AedesLux_Script_DrawPuzzle2R_8:
# 1834 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 1835 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 1836 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 1837 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_7

AedesLux_Script_DrawPuzzle2R_10:
# 1833 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_8
	goto AedesLux_Script_DrawPuzzle2R_9

AedesLux_Script_DrawPuzzle2R_14:
# 1846 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 1847 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 30, METATILE_MauvilleGym_WallSymbol_Electric_TopRight, TRUE
# 1848 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 1849 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_13

AedesLux_Script_DrawPuzzle2R_16:
# 1845 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle2R_14
	goto AedesLux_Script_DrawPuzzle2R_15

AedesLux_Script_DrawPuzzle2R_20:
# 1858 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 1859 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 32, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 1860 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 33, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_19

AedesLux_Script_DrawPuzzle2R_22:
# 1857 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_20
	goto AedesLux_Script_DrawPuzzle2R_21

AedesLux_Script_DrawPuzzle2R_26:
# 1868 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 1869 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 32, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 1870 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 33, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_25

AedesLux_Script_DrawPuzzle2R_28:
# 1867 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_26
	goto AedesLux_Script_DrawPuzzle2R_27

AedesLux_Script_DrawPuzzle2R_32:
# 1878 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 33, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 1879 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 33, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 1880 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 34, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 1881 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 34, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_31

AedesLux_Script_DrawPuzzle2R_34:
# 1877 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_32
	goto AedesLux_Script_DrawPuzzle2R_33

AedesLux_Script_DrawPuzzle2R_38:
# 1890 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 34, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 1891 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 35, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 1892 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 36, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_37

AedesLux_Script_DrawPuzzle2R_40:
# 1889 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_38
	goto AedesLux_Script_DrawPuzzle2R_39

AedesLux_Script_DrawPuzzle2R_44:
# 1900 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 34, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 1901 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 35, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 1902 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 36, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_43

AedesLux_Script_DrawPuzzle2R_46:
# 1899 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_DrawPuzzle2R_44
	goto AedesLux_Script_DrawPuzzle2R_45

AedesLux_Script_DrawPuzzle2R_50:
# 1910 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 1911 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 1912 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 1913 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_49

AedesLux_Script_DrawPuzzle2R_52:
# 1909 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle2R_50
	goto AedesLux_Script_DrawPuzzle2R_51

AedesLux_Script_DrawPuzzle2R_56:
# 1922 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopLeft, FALSE
# 1923 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 1924 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 37, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 1925 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 37, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_55

AedesLux_Script_DrawPuzzle2R_58:
# 1921 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_56
	goto AedesLux_Script_DrawPuzzle2R_57

AedesLux_Script_DrawPuzzle2R_62:
# 1934 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 1935 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 36, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 1936 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 1937 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_61

AedesLux_Script_DrawPuzzle2R_64:
# 1933 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_DrawPuzzle2R_62
	goto AedesLux_Script_DrawPuzzle2R_63


AedesLux_Script_DrawPuzzle3L::
	return


AedesLux_Script_DrawPuzzle3R::
	return


AedesLux_Script_CheckSolvePuzzle1::
# 1960 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle1_4
AedesLux_Script_CheckSolvePuzzle1_1:
	return

AedesLux_Script_CheckSolvePuzzle1_2:
# 1971 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_3:
# 1962 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle1_8
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_4:
# 1961 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle1_3
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_7:
# 1964 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle1_12
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_8:
# 1963 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle1_7
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_11:
# 1966 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle1_16
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_12:
# 1965 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle1_11
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_15:
# 1968 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle1_19
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_16:
# 1967 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle1_15
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_19:
# 1969 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle1_2
	goto AedesLux_Script_CheckSolvePuzzle1_1


AedesLux_Script_CheckSolvePuzzle2::
# 1978 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle2_4
AedesLux_Script_CheckSolvePuzzle2_1:
	return

AedesLux_Script_CheckSolvePuzzle2_2:
# 1997 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 2
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_3:
# 1980 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle2_8
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_4:
# 1979 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle2_3
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_7:
# 1982 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle2_12
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_8:
# 1981 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle2_7
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_11:
# 1984 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle2_16
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_12:
# 1983 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle2_11
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_15:
# 1986 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle2_20
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_16:
# 1985 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle2_15
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_19:
# 1988 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_CheckSolvePuzzle2_24
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_20:
# 1987 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle2_19
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_23:
# 1990 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_CheckSolvePuzzle2_28
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_24:
# 1989 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_CheckSolvePuzzle2_23
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_27:
# 1992 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_CheckSolvePuzzle2_32
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_28:
# 1991 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_CheckSolvePuzzle2_27
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_31:
# 1994 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_CheckSolvePuzzle2_2
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_32:
# 1993 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_CheckSolvePuzzle2_31
	goto AedesLux_Script_CheckSolvePuzzle2_1


AedesLux_Script_CheckSolvePuzzle3::
# 2004 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle3_4
AedesLux_Script_CheckSolvePuzzle3_1:
	return

AedesLux_Script_CheckSolvePuzzle3_2:
# 2024 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 3
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_3:
# 2006 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle3_8
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_4:
# 2005 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle3_3
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_7:
# 2008 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle3_12
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_8:
# 2007 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle3_7
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_11:
# 2010 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle3_16
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_12:
# 2009 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle3_11
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_15:
# 2012 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle3_20
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_16:
# 2011 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle3_15
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_19:
# 2014 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_CheckSolvePuzzle3_24
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_20:
# 2013 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle3_19
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_23:
# 2016 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_CheckSolvePuzzle3_28
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_24:
# 2015 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_CheckSolvePuzzle3_23
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_27:
# 2018 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_CheckSolvePuzzle3_32
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_28:
# 2017 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_CheckSolvePuzzle3_27
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_31:
# 2020 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_CheckSolvePuzzle3_35
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_32:
# 2019 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_CheckSolvePuzzle3_31
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_35:
# 2021 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_CheckSolvePuzzle3_2
	goto AedesLux_Script_CheckSolvePuzzle3_1


AedesLux_Script_ClearAllFlags::
# 2030 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 2031 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 2032 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 2033 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 2034 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 2035 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 2036 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 2037 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 2038 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 2039 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 2040 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 2041 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 2042 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 2043 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 2044 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 2045 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 2046 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 2047 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
# 2048 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_13
# 2049 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_14
# 2050 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_15
	return


AedesLux_Script_SolvedPuzzle_Text_0:
# 51 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_B = 0$"

AedesLux_Script_SolvedPuzzle_Text_1:
# 84 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_B OOB$"

AedesLux_Script_UpdatePuzzle_Text_0:
# 1597 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_A = 3$"

AedesLux_Script_UpdatePuzzle_Text_1:
# 1601 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_A OOB$"

AedesLux_Text_NothingHappened::
# 2054 "data/maps/AedesLux_1F/scripts.pory"
	.string "Nothing happened...$"

AedesLux_Text_PoleSwitch::
# 2058 "data/maps/AedesLux_1F/scripts.pory"
	.string "Would you like to flip the switch?$"

AedesLux_Text_PoleOn::
# 2062 "data/maps/AedesLux_1F/scripts.pory"
	.string "The pole is glowing with electricity.$"

AedesLux_Text_PoleOff::
# 2066 "data/maps/AedesLux_1F/scripts.pory"
	.string "The pole seems to be deactivated.$"

AedesLux_Text_PoleDanger::
# 2070 "data/maps/AedesLux_1F/scripts.pory"
	.string "This seems dangerous. Better leave it\n"
	.string "alone for now!$"

AedesLux_Text_PoleCompleted::
# 2074 "data/maps/AedesLux_1F/scripts.pory"
	.string "The switch seems stuck in place.$"
