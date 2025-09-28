AedesLux_1F_MapScripts::
# 21 "data/maps/AedesLux_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 23 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 24 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
# 25 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
# 26 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	return


AedesLux_Script_PoleDanger::
# 32 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleDanger
# 33 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_Puzzle1L_Pole1::
# 41 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle1L_Pole1_2
# 47 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_Pole, MSGBOX_YESNO
# 49 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_5
# 54 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 55 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_10
AedesLux_Script_Puzzle1L_Pole1_8:
# 58 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_15
AedesLux_Script_Puzzle1L_Pole1_13:
# 63 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_19
# 67 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
AedesLux_Script_Puzzle1L_Pole1_18:
# 70 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 71 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 72 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1L
	end

AedesLux_Script_Puzzle1L_Pole1_2:
# 42 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleDeactivated
# 43 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole1_5:
# 50 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole1_9:
# 56 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_8

AedesLux_Script_Puzzle1L_Pole1_10:
# 55 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_9
	goto AedesLux_Script_Puzzle1L_Pole1_8

AedesLux_Script_Puzzle1L_Pole1_14:
# 59 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_13

AedesLux_Script_Puzzle1L_Pole1_15:
# 58 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_14
	goto AedesLux_Script_Puzzle1L_Pole1_13

AedesLux_Script_Puzzle1L_Pole1_19:
# 64 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole1_18


AedesLux_Script_ResetPuzzle1L::
# 81 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 82 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle1L_1
# 98 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle1L_1:
# 84 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_ResetPuzzle1L_4
# 89 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 90 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 91 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 92 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 93 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 94 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 95 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1L
	return

AedesLux_Script_ResetPuzzle1L_4:
# 85 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 86 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_DrawPuzzle1L::
# 107 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_4
AedesLux_Script_DrawPuzzle1L_3:
# 113 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall, TRUE
# 114 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol, TRUE
# 115 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 116 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_1:
# 119 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_10
AedesLux_Script_DrawPuzzle1L_9:
# 124 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 125 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor_ElectricV, FALSE
# 126 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_7:
# 129 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_16
AedesLux_Script_DrawPuzzle1L_15:
# 135 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall, TRUE
# 136 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall, TRUE
# 137 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 138 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_13:
# 141 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_22
AedesLux_Script_DrawPuzzle1L_21:
# 146 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 147 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor_ElectricV, FALSE
# 148 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_19:
# 152 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return

AedesLux_Script_DrawPuzzle1L_2:
# 108 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 109 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol_Electric_TopRight, TRUE
# 110 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 111 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_1

AedesLux_Script_DrawPuzzle1L_4:
# 107 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_2
	goto AedesLux_Script_DrawPuzzle1L_3

AedesLux_Script_DrawPuzzle1L_8:
# 120 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 121 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 122 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_7

AedesLux_Script_DrawPuzzle1L_10:
# 119 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_8
	goto AedesLux_Script_DrawPuzzle1L_9

AedesLux_Script_DrawPuzzle1L_14:
# 130 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 131 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 132 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 133 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_13

AedesLux_Script_DrawPuzzle1L_16:
# 129 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle1L_14
	goto AedesLux_Script_DrawPuzzle1L_15

AedesLux_Script_DrawPuzzle1L_20:
# 142 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 143 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 144 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_19

AedesLux_Script_DrawPuzzle1L_22:
# 141 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle1L_20
	goto AedesLux_Script_DrawPuzzle1L_21


AedesLux_Text_PoleDeactivated::
# 157 "data/maps/AedesLux_1F/scripts.pory"
	.string "It seems to have been deactivated.\n"
	.string "Best leave it alone for now!$"

AedesLux_Text_Pole::
# 161 "data/maps/AedesLux_1F/scripts.pory"
	.string "It seems to be some kind of electrical\n"
	.string "pole with a control panel. Would you like\l"
	.string "to flip the switch?$"

AedesLux_Text_PoleDanger::
# 165 "data/maps/AedesLux_1F/scripts.pory"
	.string "This seems dangerous. Better leave it\n"
	.string "alone for now.$"
