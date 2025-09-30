AedesLux_1F_MapScripts::
# 26 "data/maps/AedesLux_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 28 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 29 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
# 30 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
# 31 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	return


AedesLux_Script_PoleDanger::
# 37 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleDanger
# 38 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_Puzzle1L_Pole1::
# 47 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle1L_Pole1_2
# 53 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_5
# 56 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole1_4:
# 58 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 60 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_9
# 65 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 66 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_14
AedesLux_Script_Puzzle1L_Pole1_12:
# 69 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_19
AedesLux_Script_Puzzle1L_Pole1_17:
# 74 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_25
AedesLux_Script_Puzzle1L_Pole1_24:
# 78 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 80 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_32
AedesLux_Script_Puzzle1L_Pole1_30:
# 83 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_36
AedesLux_Script_Puzzle1L_Pole1_22:
# 88 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 89 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 90 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	end

AedesLux_Script_Puzzle1L_Pole1_2:
# 48 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleDeactivated
# 49 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole1_5:
# 54 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole1_4

AedesLux_Script_Puzzle1L_Pole1_9:
# 61 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole1_13:
# 67 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_12

AedesLux_Script_Puzzle1L_Pole1_14:
# 66 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_13
	goto AedesLux_Script_Puzzle1L_Pole1_12

AedesLux_Script_Puzzle1L_Pole1_18:
# 70 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_17

AedesLux_Script_Puzzle1L_Pole1_19:
# 69 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_18
	goto AedesLux_Script_Puzzle1L_Pole1_17

AedesLux_Script_Puzzle1L_Pole1_23:
# 75 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole1_22

AedesLux_Script_Puzzle1L_Pole1_25:
# 74 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_23
# 74 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_23
	goto AedesLux_Script_Puzzle1L_Pole1_24

AedesLux_Script_Puzzle1L_Pole1_31:
# 81 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole1_30

AedesLux_Script_Puzzle1L_Pole1_32:
# 80 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole1_31
	goto AedesLux_Script_Puzzle1L_Pole1_30

AedesLux_Script_Puzzle1L_Pole1_35:
# 84 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole1_22

AedesLux_Script_Puzzle1L_Pole1_36:
# 83 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole1_35
	goto AedesLux_Script_Puzzle1L_Pole1_22


AedesLux_Script_ResetPuzzle1L::
# 99 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 100 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle1L_1
# 118 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle1L_1:
# 102 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_ResetPuzzle1L_4
# 107 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 108 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 109 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 110 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 111 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 112 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 113 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 114 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 115 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	return

AedesLux_Script_ResetPuzzle1L_4:
# 103 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 104 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_DrawPuzzle1::
# 126 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_DrawPuzzle1_2
# 130 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle1
# 131 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1L
# 132 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1R
# 134 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return

AedesLux_Script_DrawPuzzle1_2:
	return


AedesLux_Script_DrawPuzzle1L::
# 141 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_4
AedesLux_Script_DrawPuzzle1L_3:
# 147 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall, TRUE
# 148 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol, TRUE
# 149 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 150 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_1:
# 153 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_10
AedesLux_Script_DrawPuzzle1L_9:
# 158 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_Floor_Pole, TRUE
# 159 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor, FALSE
# 160 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_7:
# 163 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_16
AedesLux_Script_DrawPuzzle1L_15:
# 169 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall, TRUE
# 170 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall, TRUE
# 171 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 172 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_13:
# 175 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_22
AedesLux_Script_DrawPuzzle1L_21:
# 180 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_Floor_Pole, TRUE
# 181 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor, FALSE
# 182 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_19:
	return

AedesLux_Script_DrawPuzzle1L_2:
# 142 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 143 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol_Electric_TopRight, TRUE
# 144 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 145 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_1

AedesLux_Script_DrawPuzzle1L_4:
# 141 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_2
	goto AedesLux_Script_DrawPuzzle1L_3

AedesLux_Script_DrawPuzzle1L_8:
# 154 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 155 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 156 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_7

AedesLux_Script_DrawPuzzle1L_10:
# 153 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_8
	goto AedesLux_Script_DrawPuzzle1L_9

AedesLux_Script_DrawPuzzle1L_14:
# 164 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 165 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 166 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 167 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_13

AedesLux_Script_DrawPuzzle1L_16:
# 163 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle1L_14
	goto AedesLux_Script_DrawPuzzle1L_15

AedesLux_Script_DrawPuzzle1L_20:
# 176 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 177 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 178 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_19

AedesLux_Script_DrawPuzzle1L_22:
# 175 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle1L_20
	goto AedesLux_Script_DrawPuzzle1L_21


AedesLux_Script_DrawPuzzle1R::
	return


AedesLux_Script_CheckSolvePuzzle1::
# 197 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle1_4
AedesLux_Script_CheckSolvePuzzle1_1:
	return

AedesLux_Script_CheckSolvePuzzle1_2:
# 199 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
# 206 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 207 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 209 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_EFFECTIVE
# 210 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 212 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ClearAllFlags
# 214 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 40, METATILE_MauvilleGym_StairsL, FALSE
# 215 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 40, METATILE_MauvilleGym_StairsR, FALSE
# 216 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 41, METATILE_MauvilleGym_StairsL, FALSE
# 217 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 41, METATILE_MauvilleGym_StairsR, FALSE
# 218 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 219 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 221 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 1
# 223 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 224 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 225 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_F
# 226 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 227 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_3:
# 197 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle1_7
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_4:
# 197 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle1_3
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_7:
# 197 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle1_2
	goto AedesLux_Script_CheckSolvePuzzle1_1


AedesLux_Script_ClearAllFlags::
# 235 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 236 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 237 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 238 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 239 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 240 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 241 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 242 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 243 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 244 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 245 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 246 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 247 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 248 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 249 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 250 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 251 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 252 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
# 253 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_13
# 254 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_14
# 255 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_15
# 256 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_16
# 257 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_17
# 258 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_18
# 259 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_19
	return


AedesLux_Text_PoleDeactivated::
# 263 "data/maps/AedesLux_1F/scripts.pory"
	.string "Nothing happened...$"

AedesLux_Text_PoleSwitch::
# 267 "data/maps/AedesLux_1F/scripts.pory"
	.string "Would you like to flip the switch?$"

AedesLux_Text_PoleOn::
# 271 "data/maps/AedesLux_1F/scripts.pory"
	.string "The pole is glowing with electricity.$"

AedesLux_Text_PoleOff::
# 275 "data/maps/AedesLux_1F/scripts.pory"
	.string "The pole seems to be deactivated.$"

AedesLux_Text_PoleDanger::
# 279 "data/maps/AedesLux_1F/scripts.pory"
	.string "This seems dangerous. Better leave it\n"
	.string "alone for now!$"
