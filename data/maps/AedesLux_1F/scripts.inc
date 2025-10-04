AedesLux_1F_MapScripts::
# 27 "data/maps/AedesLux_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 32 "data/maps/AedesLux_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 29 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle1Flags
	return

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 33 "data/maps/AedesLux_1F/scripts.pory"
	map_script_2 VAR_TEMP_B, 1, AedesLux_Script_SolvedPuzzle
# 34 "data/maps/AedesLux_1F/scripts.pory"
	map_script_2 VAR_TEMP_B, 2, AedesLux_Script_SolvedPuzzle
# 35 "data/maps/AedesLux_1F/scripts.pory"
	map_script_2 VAR_TEMP_B, 3, AedesLux_Script_SolvedPuzzle
	.2byte 0


AedesLux_Script_ZeldaTrigger1::
# 43 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ZeldaScene
	return


AedesLux_Script_ZeldaTrigger2::
# 49 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ZeldaScene
	return


AedesLux_Script_ZeldaTrigger3::
# 55 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ZeldaScene
	return


AedesLux_Script_ZeldaTrigger4::
# 61 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ZeldaScene
	return


AedesLux_Script_ZeldaScene::
	end


AedesLux_Script_SolvedPuzzle::
# 76 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 77 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 79 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_EFFECTIVE
# 80 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 84 "data/maps/AedesLux_1F/scripts.pory"
	switch VAR_TEMP_B
# 85 "data/maps/AedesLux_1F/scripts.pory"
	case 0, AedesLux_Script_SolvedPuzzle_3
# 89 "data/maps/AedesLux_1F/scripts.pory"
	case 1, AedesLux_Script_SolvedPuzzle_4
# 103 "data/maps/AedesLux_1F/scripts.pory"
	case 2, AedesLux_Script_SolvedPuzzle_5
# 117 "data/maps/AedesLux_1F/scripts.pory"
	case 3, AedesLux_Script_SolvedPuzzle_6
# 130 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_SolvedPuzzle_Text_1
# 131 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_SolvedPuzzle_1:
# 135 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
	end

AedesLux_Script_SolvedPuzzle_3:
# 86 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_SolvedPuzzle_Text_0
# 87 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_SolvedPuzzle_4:
# 91 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 40, METATILE_MauvilleGym_StairsL, FALSE
# 92 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 40, METATILE_MauvilleGym_StairsR, FALSE
# 93 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 41, METATILE_MauvilleGym_StairsL, FALSE
# 94 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 41, METATILE_MauvilleGym_StairsR, FALSE
# 95 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 96 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 98 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
# 100 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle2Flags
# 102 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 1
	goto AedesLux_Script_SolvedPuzzle_1

AedesLux_Script_SolvedPuzzle_5:
# 105 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 29, METATILE_MauvilleGym_StairsL, FALSE
# 106 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 29, METATILE_MauvilleGym_StairsR, FALSE
# 107 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 30, METATILE_MauvilleGym_StairsL, FALSE
# 108 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 30, METATILE_MauvilleGym_StairsR, FALSE
# 109 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 110 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 112 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
# 114 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3Flags
# 116 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 2
	goto AedesLux_Script_SolvedPuzzle_1

AedesLux_Script_SolvedPuzzle_6:
# 119 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 18, METATILE_MauvilleGym_StairsL, FALSE
# 120 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 18, METATILE_MauvilleGym_StairsR, FALSE
# 121 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 19, METATILE_MauvilleGym_StairsL, FALSE
# 122 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 19, METATILE_MauvilleGym_StairsR, FALSE
# 123 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 20, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 124 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 20, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 126 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
# 128 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 3
	goto AedesLux_Script_SolvedPuzzle_1


AedesLux_Script_SetupPuzzle1Flags::
# 143 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ClearAllFlags
# 144 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 145 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 146 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
# 147 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	return


AedesLux_Script_SetupPuzzle2Flags::
# 152 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ClearAllFlags
# 154 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 155 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 157 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
# 158 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 159 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
	return


AedesLux_Script_SetupPuzzle3Flags::
# 164 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3LFlags
# 165 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3RFlags
	return


AedesLux_Script_SetupPuzzle3LFlags::
# 171 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 172 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 173 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 174 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 175 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 176 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 177 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 178 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 179 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 181 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
# 182 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 183 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
# 184 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 185 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	return


AedesLux_Script_SetupPuzzle3RFlags::
# 191 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 192 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 193 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 194 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 195 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 196 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 197 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 198 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 199 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
# 201 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
# 202 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_D
	return


AedesLux_Script_PoleDanger::
# 209 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleDanger
# 210 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_PoleCompleted::
# 215 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleCompleted
# 216 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_PoleNothingHappened::
# 221 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_NothingHappened
# 222 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_Puzzle1L_Pole1::
# 229 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole1_2
AedesLux_Script_Puzzle1L_Pole1_1:
# 233 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_5
# 236 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole1_4:
# 238 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 240 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole1_9
AedesLux_Script_Puzzle1L_Pole1_8:
# 272 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole1_2:
# 230 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole1_1

AedesLux_Script_Puzzle1L_Pole1_5:
# 234 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole1_4

AedesLux_Script_Puzzle1L_Pole1_9:
# 242 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 243 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_13
AedesLux_Script_Puzzle1L_Pole1_11:
# 246 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_18
AedesLux_Script_Puzzle1L_Pole1_16:
# 251 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_24
AedesLux_Script_Puzzle1L_Pole1_23:
# 255 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_30
AedesLux_Script_Puzzle1L_Pole1_29:
# 259 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 261 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_34
AedesLux_Script_Puzzle1L_Pole1_32:
# 264 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_38
AedesLux_Script_Puzzle1L_Pole1_21:
# 269 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole1_8

AedesLux_Script_Puzzle1L_Pole1_12:
# 244 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_11

AedesLux_Script_Puzzle1L_Pole1_13:
# 243 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_12
	goto AedesLux_Script_Puzzle1L_Pole1_11

AedesLux_Script_Puzzle1L_Pole1_17:
# 247 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_16

AedesLux_Script_Puzzle1L_Pole1_18:
# 246 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_17
	goto AedesLux_Script_Puzzle1L_Pole1_16

AedesLux_Script_Puzzle1L_Pole1_22:
# 252 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole1_21

AedesLux_Script_Puzzle1L_Pole1_24:
# 251 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_22
# 251 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_22
	goto AedesLux_Script_Puzzle1L_Pole1_23

AedesLux_Script_Puzzle1L_Pole1_30:
# 256 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole1_29

AedesLux_Script_Puzzle1L_Pole1_33:
# 262 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole1_32

AedesLux_Script_Puzzle1L_Pole1_34:
# 261 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole1_33
	goto AedesLux_Script_Puzzle1L_Pole1_32

AedesLux_Script_Puzzle1L_Pole1_37:
# 265 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole1_21

AedesLux_Script_Puzzle1L_Pole1_38:
# 264 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole1_37
	goto AedesLux_Script_Puzzle1L_Pole1_21


AedesLux_Script_Puzzle1L_Pole2::
# 278 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole2_2
AedesLux_Script_Puzzle1L_Pole2_1:
# 282 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_5
# 285 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole2_4:
# 287 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 289 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole2_9
AedesLux_Script_Puzzle1L_Pole2_8:
# 320 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole2_2:
# 279 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole2_1

AedesLux_Script_Puzzle1L_Pole2_5:
# 283 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole2_4

AedesLux_Script_Puzzle1L_Pole2_9:
# 291 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 292 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole2_13
AedesLux_Script_Puzzle1L_Pole2_11:
# 295 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole2_18
AedesLux_Script_Puzzle1L_Pole2_16:
# 300 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_24
AedesLux_Script_Puzzle1L_Pole2_23:
# 304 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_30
AedesLux_Script_Puzzle1L_Pole2_29:
# 308 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 310 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_34
AedesLux_Script_Puzzle1L_Pole2_32:
# 314 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
AedesLux_Script_Puzzle1L_Pole2_21:
# 317 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole2_8

AedesLux_Script_Puzzle1L_Pole2_12:
# 293 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole2_11

AedesLux_Script_Puzzle1L_Pole2_13:
# 292 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_12
	goto AedesLux_Script_Puzzle1L_Pole2_11

AedesLux_Script_Puzzle1L_Pole2_17:
# 296 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole2_16

AedesLux_Script_Puzzle1L_Pole2_18:
# 295 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole2_17
	goto AedesLux_Script_Puzzle1L_Pole2_16

AedesLux_Script_Puzzle1L_Pole2_22:
# 301 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole2_21

AedesLux_Script_Puzzle1L_Pole2_24:
# 300 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_22
# 300 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole2_22
	goto AedesLux_Script_Puzzle1L_Pole2_23

AedesLux_Script_Puzzle1L_Pole2_30:
# 305 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole2_29

AedesLux_Script_Puzzle1L_Pole2_33:
# 311 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole2_32

AedesLux_Script_Puzzle1L_Pole2_34:
# 310 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole2_33
	goto AedesLux_Script_Puzzle1L_Pole2_32


AedesLux_Script_Puzzle1L_Pole3::
# 326 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole3_2
AedesLux_Script_Puzzle1L_Pole3_1:
# 330 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_5
# 333 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole3_4:
# 335 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 337 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole3_9
AedesLux_Script_Puzzle1L_Pole3_8:
# 363 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole3_2:
# 327 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole3_1

AedesLux_Script_Puzzle1L_Pole3_5:
# 331 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole3_4

AedesLux_Script_Puzzle1L_Pole3_9:
# 339 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 340 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole3_13
AedesLux_Script_Puzzle1L_Pole3_11:
# 345 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_19
AedesLux_Script_Puzzle1L_Pole3_18:
# 349 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_23
AedesLux_Script_Puzzle1L_Pole3_22:
# 353 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 355 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_26
AedesLux_Script_Puzzle1L_Pole3_16:
# 360 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole3_8

AedesLux_Script_Puzzle1L_Pole3_12:
# 341 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole3_11

AedesLux_Script_Puzzle1L_Pole3_13:
# 340 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_12
	goto AedesLux_Script_Puzzle1L_Pole3_11

AedesLux_Script_Puzzle1L_Pole3_17:
# 346 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle1L_Pole3_16

AedesLux_Script_Puzzle1L_Pole3_19:
# 345 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_17
	goto AedesLux_Script_Puzzle1L_Pole3_18

AedesLux_Script_Puzzle1L_Pole3_23:
# 350 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole3_22

AedesLux_Script_Puzzle1L_Pole3_25:
# 356 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole3_16

AedesLux_Script_Puzzle1L_Pole3_26:
# 355 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole3_25
	goto AedesLux_Script_Puzzle1L_Pole3_16


AedesLux_Script_Puzzle1L_Pole4::
# 369 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole4_2
AedesLux_Script_Puzzle1L_Pole4_1:
# 373 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_5
# 376 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole4_4:
# 378 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 380 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole4_9
AedesLux_Script_Puzzle1L_Pole4_8:
# 411 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole4_2:
# 370 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole4_1

AedesLux_Script_Puzzle1L_Pole4_5:
# 374 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole4_4

AedesLux_Script_Puzzle1L_Pole4_9:
# 382 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 383 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole4_13
AedesLux_Script_Puzzle1L_Pole4_11:
# 386 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole4_18
AedesLux_Script_Puzzle1L_Pole4_16:
# 391 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_24
AedesLux_Script_Puzzle1L_Pole4_23:
# 395 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_30
AedesLux_Script_Puzzle1L_Pole4_29:
# 399 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 401 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_34
AedesLux_Script_Puzzle1L_Pole4_32:
# 405 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
AedesLux_Script_Puzzle1L_Pole4_21:
# 408 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole4_8

AedesLux_Script_Puzzle1L_Pole4_12:
# 384 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole4_11

AedesLux_Script_Puzzle1L_Pole4_13:
# 383 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole4_12
	goto AedesLux_Script_Puzzle1L_Pole4_11

AedesLux_Script_Puzzle1L_Pole4_17:
# 387 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole4_16

AedesLux_Script_Puzzle1L_Pole4_18:
# 386 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_17
	goto AedesLux_Script_Puzzle1L_Pole4_16

AedesLux_Script_Puzzle1L_Pole4_22:
# 392 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole4_21

AedesLux_Script_Puzzle1L_Pole4_24:
# 391 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_22
# 391 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole4_22
	goto AedesLux_Script_Puzzle1L_Pole4_23

AedesLux_Script_Puzzle1L_Pole4_30:
# 396 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole4_29

AedesLux_Script_Puzzle1L_Pole4_33:
# 402 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole4_32

AedesLux_Script_Puzzle1L_Pole4_34:
# 401 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole4_33
	goto AedesLux_Script_Puzzle1L_Pole4_32


AedesLux_Script_Puzzle1L_Pole5::
# 417 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole5_2
AedesLux_Script_Puzzle1L_Pole5_1:
# 421 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_5
# 424 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole5_4:
# 426 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 428 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole5_9
AedesLux_Script_Puzzle1L_Pole5_8:
# 454 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole5_2:
# 418 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole5_1

AedesLux_Script_Puzzle1L_Pole5_5:
# 422 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole5_4

AedesLux_Script_Puzzle1L_Pole5_9:
# 430 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 431 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole5_13
AedesLux_Script_Puzzle1L_Pole5_11:
# 436 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_19
AedesLux_Script_Puzzle1L_Pole5_18:
# 440 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_23
AedesLux_Script_Puzzle1L_Pole5_22:
# 444 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 446 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_26
AedesLux_Script_Puzzle1L_Pole5_16:
# 451 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole5_8

AedesLux_Script_Puzzle1L_Pole5_12:
# 432 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole5_11

AedesLux_Script_Puzzle1L_Pole5_13:
# 431 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_12
	goto AedesLux_Script_Puzzle1L_Pole5_11

AedesLux_Script_Puzzle1L_Pole5_17:
# 437 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle1L_Pole5_16

AedesLux_Script_Puzzle1L_Pole5_19:
# 436 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_17
	goto AedesLux_Script_Puzzle1L_Pole5_18

AedesLux_Script_Puzzle1L_Pole5_23:
# 441 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole5_22

AedesLux_Script_Puzzle1L_Pole5_25:
# 447 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole5_16

AedesLux_Script_Puzzle1L_Pole5_26:
# 446 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole5_25
	goto AedesLux_Script_Puzzle1L_Pole5_16


AedesLux_Script_Puzzle1R_Pole6::
# 462 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole6_2
AedesLux_Script_Puzzle1R_Pole6_1:
# 466 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_5
# 469 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole6_4:
# 471 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 473 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole6_9
AedesLux_Script_Puzzle1R_Pole6_8:
# 499 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole6_2:
# 463 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole6_1

AedesLux_Script_Puzzle1R_Pole6_5:
# 467 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole6_4

AedesLux_Script_Puzzle1R_Pole6_9:
# 475 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 476 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole6_13
AedesLux_Script_Puzzle1R_Pole6_11:
# 481 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_19
AedesLux_Script_Puzzle1R_Pole6_18:
# 485 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_23
AedesLux_Script_Puzzle1R_Pole6_22:
# 489 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 491 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_26
AedesLux_Script_Puzzle1R_Pole6_16:
# 496 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole6_8

AedesLux_Script_Puzzle1R_Pole6_12:
# 477 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole6_11

AedesLux_Script_Puzzle1R_Pole6_13:
# 476 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_12
	goto AedesLux_Script_Puzzle1R_Pole6_11

AedesLux_Script_Puzzle1R_Pole6_17:
# 482 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle1R_Pole6_16

AedesLux_Script_Puzzle1R_Pole6_19:
# 481 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_17
	goto AedesLux_Script_Puzzle1R_Pole6_18

AedesLux_Script_Puzzle1R_Pole6_23:
# 486 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole6_22

AedesLux_Script_Puzzle1R_Pole6_25:
# 492 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole6_16

AedesLux_Script_Puzzle1R_Pole6_26:
# 491 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole6_25
	goto AedesLux_Script_Puzzle1R_Pole6_16


AedesLux_Script_Puzzle1R_Pole7::
# 505 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole7_2
AedesLux_Script_Puzzle1R_Pole7_1:
# 509 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_5
# 512 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole7_4:
# 514 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 516 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole7_9
AedesLux_Script_Puzzle1R_Pole7_8:
# 547 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole7_2:
# 506 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole7_1

AedesLux_Script_Puzzle1R_Pole7_5:
# 510 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole7_4

AedesLux_Script_Puzzle1R_Pole7_9:
# 518 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 519 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole7_13
AedesLux_Script_Puzzle1R_Pole7_11:
# 522 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole7_18
AedesLux_Script_Puzzle1R_Pole7_16:
# 527 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_24
AedesLux_Script_Puzzle1R_Pole7_23:
# 531 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_30
AedesLux_Script_Puzzle1R_Pole7_29:
# 535 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 537 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_34
AedesLux_Script_Puzzle1R_Pole7_32:
# 541 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
AedesLux_Script_Puzzle1R_Pole7_21:
# 544 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole7_8

AedesLux_Script_Puzzle1R_Pole7_12:
# 520 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole7_11

AedesLux_Script_Puzzle1R_Pole7_13:
# 519 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_12
	goto AedesLux_Script_Puzzle1R_Pole7_11

AedesLux_Script_Puzzle1R_Pole7_17:
# 523 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole7_16

AedesLux_Script_Puzzle1R_Pole7_18:
# 522 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole7_17
	goto AedesLux_Script_Puzzle1R_Pole7_16

AedesLux_Script_Puzzle1R_Pole7_22:
# 528 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole7_21

AedesLux_Script_Puzzle1R_Pole7_24:
# 527 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole7_22
# 527 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_22
	goto AedesLux_Script_Puzzle1R_Pole7_23

AedesLux_Script_Puzzle1R_Pole7_30:
# 532 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole7_29

AedesLux_Script_Puzzle1R_Pole7_33:
# 538 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole7_32

AedesLux_Script_Puzzle1R_Pole7_34:
# 537 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole7_33
	goto AedesLux_Script_Puzzle1R_Pole7_32


AedesLux_Script_Puzzle1R_Pole8::
# 553 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole8_2
AedesLux_Script_Puzzle1R_Pole8_1:
# 557 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_5
# 560 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole8_4:
# 562 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 564 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole8_9
AedesLux_Script_Puzzle1R_Pole8_8:
# 596 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole8_2:
# 554 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole8_1

AedesLux_Script_Puzzle1R_Pole8_5:
# 558 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole8_4

AedesLux_Script_Puzzle1R_Pole8_9:
# 566 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 567 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole8_13
AedesLux_Script_Puzzle1R_Pole8_11:
# 570 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole8_18
AedesLux_Script_Puzzle1R_Pole8_16:
# 575 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_24
AedesLux_Script_Puzzle1R_Pole8_23:
# 579 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_30
AedesLux_Script_Puzzle1R_Pole8_29:
# 583 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 585 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_34
AedesLux_Script_Puzzle1R_Pole8_32:
# 588 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_38
AedesLux_Script_Puzzle1R_Pole8_21:
# 593 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole8_8

AedesLux_Script_Puzzle1R_Pole8_12:
# 568 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole8_11

AedesLux_Script_Puzzle1R_Pole8_13:
# 567 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_12
	goto AedesLux_Script_Puzzle1R_Pole8_11

AedesLux_Script_Puzzle1R_Pole8_17:
# 571 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole8_16

AedesLux_Script_Puzzle1R_Pole8_18:
# 570 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_17
	goto AedesLux_Script_Puzzle1R_Pole8_16

AedesLux_Script_Puzzle1R_Pole8_22:
# 576 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole8_21

AedesLux_Script_Puzzle1R_Pole8_24:
# 575 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_22
# 575 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_22
	goto AedesLux_Script_Puzzle1R_Pole8_23

AedesLux_Script_Puzzle1R_Pole8_30:
# 580 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole8_29

AedesLux_Script_Puzzle1R_Pole8_33:
# 586 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole8_32

AedesLux_Script_Puzzle1R_Pole8_34:
# 585 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole8_33
	goto AedesLux_Script_Puzzle1R_Pole8_32

AedesLux_Script_Puzzle1R_Pole8_37:
# 589 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle1R_Pole8_21

AedesLux_Script_Puzzle1R_Pole8_38:
# 588 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole8_37
	goto AedesLux_Script_Puzzle1R_Pole8_21


AedesLux_Script_Puzzle1R_Pole9::
# 602 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole9_2
AedesLux_Script_Puzzle1R_Pole9_1:
# 606 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_5
# 609 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole9_4:
# 611 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 613 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole9_9
AedesLux_Script_Puzzle1R_Pole9_8:
# 644 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole9_2:
# 603 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole9_1

AedesLux_Script_Puzzle1R_Pole9_5:
# 607 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole9_4

AedesLux_Script_Puzzle1R_Pole9_9:
# 615 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 616 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole9_13
AedesLux_Script_Puzzle1R_Pole9_11:
# 619 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole9_18
AedesLux_Script_Puzzle1R_Pole9_16:
# 624 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_24
AedesLux_Script_Puzzle1R_Pole9_23:
# 628 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_30
AedesLux_Script_Puzzle1R_Pole9_29:
# 632 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 634 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_34
AedesLux_Script_Puzzle1R_Pole9_32:
# 638 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
AedesLux_Script_Puzzle1R_Pole9_21:
# 641 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole9_8

AedesLux_Script_Puzzle1R_Pole9_12:
# 617 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole9_11

AedesLux_Script_Puzzle1R_Pole9_13:
# 616 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_12
	goto AedesLux_Script_Puzzle1R_Pole9_11

AedesLux_Script_Puzzle1R_Pole9_17:
# 620 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole9_16

AedesLux_Script_Puzzle1R_Pole9_18:
# 619 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole9_17
	goto AedesLux_Script_Puzzle1R_Pole9_16

AedesLux_Script_Puzzle1R_Pole9_22:
# 625 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle1R_Pole9_21

AedesLux_Script_Puzzle1R_Pole9_24:
# 624 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_22
# 624 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole9_22
	goto AedesLux_Script_Puzzle1R_Pole9_23

AedesLux_Script_Puzzle1R_Pole9_30:
# 629 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole9_29

AedesLux_Script_Puzzle1R_Pole9_33:
# 635 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole9_32

AedesLux_Script_Puzzle1R_Pole9_34:
# 634 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole9_33
	goto AedesLux_Script_Puzzle1R_Pole9_32


AedesLux_Script_Puzzle1R_PoleA::
# 650 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_PoleA_2
AedesLux_Script_Puzzle1R_PoleA_1:
# 654 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_5
# 657 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_PoleA_4:
# 659 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 661 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_PoleA_9
AedesLux_Script_Puzzle1R_PoleA_8:
# 687 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_PoleA_2:
# 651 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_PoleA_1

AedesLux_Script_Puzzle1R_PoleA_5:
# 655 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_PoleA_4

AedesLux_Script_Puzzle1R_PoleA_9:
# 663 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 664 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_PoleA_13
AedesLux_Script_Puzzle1R_PoleA_11:
# 669 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_19
AedesLux_Script_Puzzle1R_PoleA_18:
# 673 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_23
AedesLux_Script_Puzzle1R_PoleA_22:
# 677 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 679 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_26
AedesLux_Script_Puzzle1R_PoleA_16:
# 684 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_PoleA_8

AedesLux_Script_Puzzle1R_PoleA_12:
# 665 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_PoleA_11

AedesLux_Script_Puzzle1R_PoleA_13:
# 664 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_12
	goto AedesLux_Script_Puzzle1R_PoleA_11

AedesLux_Script_Puzzle1R_PoleA_17:
# 670 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle1R_PoleA_16

AedesLux_Script_Puzzle1R_PoleA_19:
# 669 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_17
	goto AedesLux_Script_Puzzle1R_PoleA_18

AedesLux_Script_Puzzle1R_PoleA_23:
# 674 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_PoleA_22

AedesLux_Script_Puzzle1R_PoleA_25:
# 680 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_PoleA_16

AedesLux_Script_Puzzle1R_PoleA_26:
# 679 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_PoleA_25
	goto AedesLux_Script_Puzzle1R_PoleA_16


AedesLux_Script_Puzzle2L_Pole1::
# 696 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole1_2
AedesLux_Script_Puzzle2L_Pole1_1:
# 700 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_5
# 703 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole1_4:
# 705 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 707 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole1_9
AedesLux_Script_Puzzle2L_Pole1_8:
# 739 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole1_2:
# 697 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole1_1

AedesLux_Script_Puzzle2L_Pole1_5:
# 701 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole1_4

AedesLux_Script_Puzzle2L_Pole1_9:
# 709 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 710 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole1_13
AedesLux_Script_Puzzle2L_Pole1_11:
# 713 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole1_18
AedesLux_Script_Puzzle2L_Pole1_16:
# 718 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_24
AedesLux_Script_Puzzle2L_Pole1_23:
# 722 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_30
AedesLux_Script_Puzzle2L_Pole1_29:
# 726 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 728 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_34
AedesLux_Script_Puzzle2L_Pole1_32:
# 731 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_39
AedesLux_Script_Puzzle2L_Pole1_21:
# 736 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole1_8

AedesLux_Script_Puzzle2L_Pole1_12:
# 711 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole1_11

AedesLux_Script_Puzzle2L_Pole1_13:
# 710 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_12
	goto AedesLux_Script_Puzzle2L_Pole1_11

AedesLux_Script_Puzzle2L_Pole1_17:
# 714 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole1_16

AedesLux_Script_Puzzle2L_Pole1_18:
# 713 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_17
	goto AedesLux_Script_Puzzle2L_Pole1_16

AedesLux_Script_Puzzle2L_Pole1_22:
# 719 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_24:
# 718 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_22
# 718 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_22
	goto AedesLux_Script_Puzzle2L_Pole1_23

AedesLux_Script_Puzzle2L_Pole1_30:
# 723 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole1_29

AedesLux_Script_Puzzle2L_Pole1_33:
# 729 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole1_32

AedesLux_Script_Puzzle2L_Pole1_34:
# 728 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole1_33
	goto AedesLux_Script_Puzzle2L_Pole1_32

AedesLux_Script_Puzzle2L_Pole1_37:
# 732 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_38:
# 731 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole1_37
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_39:
# 731 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole1_38
	goto AedesLux_Script_Puzzle2L_Pole1_21


AedesLux_Script_Puzzle2L_Pole2::
# 745 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole2_2
AedesLux_Script_Puzzle2L_Pole2_1:
# 749 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_5
# 752 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole2_4:
# 754 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 756 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole2_9
AedesLux_Script_Puzzle2L_Pole2_8:
# 787 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole2_2:
# 746 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole2_1

AedesLux_Script_Puzzle2L_Pole2_5:
# 750 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole2_4

AedesLux_Script_Puzzle2L_Pole2_9:
# 758 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 759 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole2_13
AedesLux_Script_Puzzle2L_Pole2_11:
# 762 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole2_18
AedesLux_Script_Puzzle2L_Pole2_16:
# 767 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_24
AedesLux_Script_Puzzle2L_Pole2_23:
# 771 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_30
AedesLux_Script_Puzzle2L_Pole2_29:
# 775 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 777 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_34
AedesLux_Script_Puzzle2L_Pole2_32:
# 781 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
AedesLux_Script_Puzzle2L_Pole2_21:
# 784 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole2_8

AedesLux_Script_Puzzle2L_Pole2_12:
# 760 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole2_11

AedesLux_Script_Puzzle2L_Pole2_13:
# 759 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole2_12
	goto AedesLux_Script_Puzzle2L_Pole2_11

AedesLux_Script_Puzzle2L_Pole2_17:
# 763 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole2_16

AedesLux_Script_Puzzle2L_Pole2_18:
# 762 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_17
	goto AedesLux_Script_Puzzle2L_Pole2_16

AedesLux_Script_Puzzle2L_Pole2_22:
# 768 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole2_21

AedesLux_Script_Puzzle2L_Pole2_24:
# 767 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_22
# 767 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole2_22
	goto AedesLux_Script_Puzzle2L_Pole2_23

AedesLux_Script_Puzzle2L_Pole2_30:
# 772 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole2_29

AedesLux_Script_Puzzle2L_Pole2_33:
# 778 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole2_32

AedesLux_Script_Puzzle2L_Pole2_34:
# 777 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole2_33
	goto AedesLux_Script_Puzzle2L_Pole2_32


AedesLux_Script_Puzzle2L_Pole3::
# 793 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole3_2
AedesLux_Script_Puzzle2L_Pole3_1:
# 797 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_5
# 800 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole3_4:
# 802 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 804 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole3_9
AedesLux_Script_Puzzle2L_Pole3_8:
# 830 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole3_2:
# 794 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole3_1

AedesLux_Script_Puzzle2L_Pole3_5:
# 798 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole3_4

AedesLux_Script_Puzzle2L_Pole3_9:
# 806 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 807 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole3_13
AedesLux_Script_Puzzle2L_Pole3_11:
# 812 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_19
AedesLux_Script_Puzzle2L_Pole3_18:
# 816 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_23
AedesLux_Script_Puzzle2L_Pole3_22:
# 820 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 822 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_26
AedesLux_Script_Puzzle2L_Pole3_16:
# 827 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole3_8

AedesLux_Script_Puzzle2L_Pole3_12:
# 808 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole3_11

AedesLux_Script_Puzzle2L_Pole3_13:
# 807 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_12
	goto AedesLux_Script_Puzzle2L_Pole3_11

AedesLux_Script_Puzzle2L_Pole3_17:
# 813 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle2L_Pole3_16

AedesLux_Script_Puzzle2L_Pole3_19:
# 812 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_17
	goto AedesLux_Script_Puzzle2L_Pole3_18

AedesLux_Script_Puzzle2L_Pole3_23:
# 817 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole3_22

AedesLux_Script_Puzzle2L_Pole3_25:
# 823 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole3_16

AedesLux_Script_Puzzle2L_Pole3_26:
# 822 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole3_25
	goto AedesLux_Script_Puzzle2L_Pole3_16


AedesLux_Script_Puzzle2L_Pole4::
# 836 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole4_2
AedesLux_Script_Puzzle2L_Pole4_1:
# 840 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole4_5
# 843 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole4_4:
# 845 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 847 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole4_9
AedesLux_Script_Puzzle2L_Pole4_8:
# 879 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole4_2:
# 837 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole4_1

AedesLux_Script_Puzzle2L_Pole4_5:
# 841 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole4_4

AedesLux_Script_Puzzle2L_Pole4_9:
# 849 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 850 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole4_13
AedesLux_Script_Puzzle2L_Pole4_11:
# 853 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole4_18
AedesLux_Script_Puzzle2L_Pole4_16:
# 858 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole4_24
AedesLux_Script_Puzzle2L_Pole4_23:
# 862 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole4_30
AedesLux_Script_Puzzle2L_Pole4_29:
# 866 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 868 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole4_35
AedesLux_Script_Puzzle2L_Pole4_32:
# 871 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole4_40
AedesLux_Script_Puzzle2L_Pole4_21:
# 876 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole4_8

AedesLux_Script_Puzzle2L_Pole4_12:
# 851 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole4_11

AedesLux_Script_Puzzle2L_Pole4_13:
# 850 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole4_12
	goto AedesLux_Script_Puzzle2L_Pole4_11

AedesLux_Script_Puzzle2L_Pole4_17:
# 854 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole4_16

AedesLux_Script_Puzzle2L_Pole4_18:
# 853 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole4_17
	goto AedesLux_Script_Puzzle2L_Pole4_16

AedesLux_Script_Puzzle2L_Pole4_22:
# 859 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle2L_Pole4_21

AedesLux_Script_Puzzle2L_Pole4_24:
# 858 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole4_22
# 858 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole4_22
	goto AedesLux_Script_Puzzle2L_Pole4_23

AedesLux_Script_Puzzle2L_Pole4_30:
# 863 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole4_29

AedesLux_Script_Puzzle2L_Pole4_33:
# 869 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole4_32

AedesLux_Script_Puzzle2L_Pole4_34:
# 868 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole4_33
	goto AedesLux_Script_Puzzle2L_Pole4_32

AedesLux_Script_Puzzle2L_Pole4_35:
# 868 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole4_34
	goto AedesLux_Script_Puzzle2L_Pole4_32

AedesLux_Script_Puzzle2L_Pole4_39:
# 872 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle2L_Pole4_21

AedesLux_Script_Puzzle2L_Pole4_40:
# 871 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole4_39
	goto AedesLux_Script_Puzzle2L_Pole4_21


AedesLux_Script_Puzzle2L_Pole5::
# 885 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole5_2
AedesLux_Script_Puzzle2L_Pole5_1:
# 889 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole5_5
# 892 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole5_4:
# 894 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 896 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole5_9
AedesLux_Script_Puzzle2L_Pole5_8:
# 934 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole5_2:
# 886 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole5_1

AedesLux_Script_Puzzle2L_Pole5_5:
# 890 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole5_4

AedesLux_Script_Puzzle2L_Pole5_9:
# 898 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 899 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole5_13
AedesLux_Script_Puzzle2L_Pole5_11:
# 902 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole5_18
AedesLux_Script_Puzzle2L_Pole5_16:
# 905 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole5_23
AedesLux_Script_Puzzle2L_Pole5_21:
# 910 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole5_29
AedesLux_Script_Puzzle2L_Pole5_28:
# 914 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole5_37
AedesLux_Script_Puzzle2L_Pole5_36:
# 918 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 920 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole5_41
AedesLux_Script_Puzzle2L_Pole5_39:
# 923 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole5_46
AedesLux_Script_Puzzle2L_Pole5_44:
# 926 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole5_50
AedesLux_Script_Puzzle2L_Pole5_26:
# 931 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole5_8

AedesLux_Script_Puzzle2L_Pole5_12:
# 900 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole5_11

AedesLux_Script_Puzzle2L_Pole5_13:
# 899 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole5_12
	goto AedesLux_Script_Puzzle2L_Pole5_11

AedesLux_Script_Puzzle2L_Pole5_17:
# 903 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole5_16

AedesLux_Script_Puzzle2L_Pole5_18:
# 902 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole5_17
	goto AedesLux_Script_Puzzle2L_Pole5_16

AedesLux_Script_Puzzle2L_Pole5_22:
# 906 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole5_21

AedesLux_Script_Puzzle2L_Pole5_23:
# 905 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole5_22
	goto AedesLux_Script_Puzzle2L_Pole5_21

AedesLux_Script_Puzzle2L_Pole5_27:
# 911 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole5_26

AedesLux_Script_Puzzle2L_Pole5_29:
# 910 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole5_27
# 910 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole5_27
# 910 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole5_27
	goto AedesLux_Script_Puzzle2L_Pole5_28

AedesLux_Script_Puzzle2L_Pole5_37:
# 915 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole5_36

AedesLux_Script_Puzzle2L_Pole5_40:
# 921 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole5_39

AedesLux_Script_Puzzle2L_Pole5_41:
# 920 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole5_40
	goto AedesLux_Script_Puzzle2L_Pole5_39

AedesLux_Script_Puzzle2L_Pole5_45:
# 924 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle2L_Pole5_44

AedesLux_Script_Puzzle2L_Pole5_46:
# 923 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole5_45
	goto AedesLux_Script_Puzzle2L_Pole5_44

AedesLux_Script_Puzzle2L_Pole5_49:
# 927 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle2L_Pole5_26

AedesLux_Script_Puzzle2L_Pole5_50:
# 926 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole5_49
	goto AedesLux_Script_Puzzle2L_Pole5_26


AedesLux_Script_Puzzle2L_Pole6::
# 940 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole6_2
AedesLux_Script_Puzzle2L_Pole6_1:
# 944 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole6_5
# 947 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole6_4:
# 949 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 951 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole6_9
AedesLux_Script_Puzzle2L_Pole6_8:
# 983 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole6_2:
# 941 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole6_1

AedesLux_Script_Puzzle2L_Pole6_5:
# 945 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole6_4

AedesLux_Script_Puzzle2L_Pole6_9:
# 953 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 954 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole6_13
AedesLux_Script_Puzzle2L_Pole6_11:
# 957 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole6_18
AedesLux_Script_Puzzle2L_Pole6_16:
# 962 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole6_24
AedesLux_Script_Puzzle2L_Pole6_23:
# 966 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole6_30
AedesLux_Script_Puzzle2L_Pole6_29:
# 970 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 972 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole6_34
AedesLux_Script_Puzzle2L_Pole6_32:
# 975 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole6_38
AedesLux_Script_Puzzle2L_Pole6_21:
# 980 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole6_8

AedesLux_Script_Puzzle2L_Pole6_12:
# 955 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole6_11

AedesLux_Script_Puzzle2L_Pole6_13:
# 954 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole6_12
	goto AedesLux_Script_Puzzle2L_Pole6_11

AedesLux_Script_Puzzle2L_Pole6_17:
# 958 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole6_16

AedesLux_Script_Puzzle2L_Pole6_18:
# 957 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole6_17
	goto AedesLux_Script_Puzzle2L_Pole6_16

AedesLux_Script_Puzzle2L_Pole6_22:
# 963 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle2L_Pole6_21

AedesLux_Script_Puzzle2L_Pole6_24:
# 962 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole6_22
# 962 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole6_22
	goto AedesLux_Script_Puzzle2L_Pole6_23

AedesLux_Script_Puzzle2L_Pole6_30:
# 967 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole6_29

AedesLux_Script_Puzzle2L_Pole6_33:
# 973 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle2L_Pole6_32

AedesLux_Script_Puzzle2L_Pole6_34:
# 972 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole6_33
	goto AedesLux_Script_Puzzle2L_Pole6_32

AedesLux_Script_Puzzle2L_Pole6_37:
# 976 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle2L_Pole6_21

AedesLux_Script_Puzzle2L_Pole6_38:
# 975 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole6_37
	goto AedesLux_Script_Puzzle2L_Pole6_21


AedesLux_Script_Puzzle2L_Pole7::
# 989 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole7_2
AedesLux_Script_Puzzle2L_Pole7_1:
# 993 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole7_5
# 996 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole7_4:
# 998 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1000 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole7_9
AedesLux_Script_Puzzle2L_Pole7_8:
# 1032 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole7_2:
# 990 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole7_1

AedesLux_Script_Puzzle2L_Pole7_5:
# 994 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole7_4

AedesLux_Script_Puzzle2L_Pole7_9:
# 1002 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1003 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole7_13
AedesLux_Script_Puzzle2L_Pole7_11:
# 1006 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole7_18
AedesLux_Script_Puzzle2L_Pole7_16:
# 1011 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole7_24
AedesLux_Script_Puzzle2L_Pole7_23:
# 1015 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole7_30
AedesLux_Script_Puzzle2L_Pole7_29:
# 1019 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 1021 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole7_34
AedesLux_Script_Puzzle2L_Pole7_32:
# 1024 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole7_39
AedesLux_Script_Puzzle2L_Pole7_21:
# 1029 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole7_8

AedesLux_Script_Puzzle2L_Pole7_12:
# 1004 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole7_11

AedesLux_Script_Puzzle2L_Pole7_13:
# 1003 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole7_12
	goto AedesLux_Script_Puzzle2L_Pole7_11

AedesLux_Script_Puzzle2L_Pole7_17:
# 1007 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole7_16

AedesLux_Script_Puzzle2L_Pole7_18:
# 1006 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole7_17
	goto AedesLux_Script_Puzzle2L_Pole7_16

AedesLux_Script_Puzzle2L_Pole7_22:
# 1012 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle2L_Pole7_21

AedesLux_Script_Puzzle2L_Pole7_24:
# 1011 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole7_22
# 1011 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole7_22
	goto AedesLux_Script_Puzzle2L_Pole7_23

AedesLux_Script_Puzzle2L_Pole7_30:
# 1016 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole7_29

AedesLux_Script_Puzzle2L_Pole7_33:
# 1022 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle2L_Pole7_32

AedesLux_Script_Puzzle2L_Pole7_34:
# 1021 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole7_33
	goto AedesLux_Script_Puzzle2L_Pole7_32

AedesLux_Script_Puzzle2L_Pole7_37:
# 1025 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole7_21

AedesLux_Script_Puzzle2L_Pole7_38:
# 1024 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole7_37
	goto AedesLux_Script_Puzzle2L_Pole7_21

AedesLux_Script_Puzzle2L_Pole7_39:
# 1024 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole7_38
	goto AedesLux_Script_Puzzle2L_Pole7_21


AedesLux_Script_Puzzle2R_Pole8::
# 1040 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole8_2
AedesLux_Script_Puzzle2R_Pole8_1:
# 1044 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole8_5
# 1047 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole8_4:
# 1049 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1051 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole8_9
AedesLux_Script_Puzzle2R_Pole8_8:
# 1077 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole8_2:
# 1041 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole8_1

AedesLux_Script_Puzzle2R_Pole8_5:
# 1045 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole8_4

AedesLux_Script_Puzzle2R_Pole8_9:
# 1053 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1054 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole8_13
AedesLux_Script_Puzzle2R_Pole8_11:
# 1059 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole8_19
AedesLux_Script_Puzzle2R_Pole8_18:
# 1063 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole8_23
AedesLux_Script_Puzzle2R_Pole8_22:
# 1067 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 1069 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole8_26
AedesLux_Script_Puzzle2R_Pole8_16:
# 1074 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole8_8

AedesLux_Script_Puzzle2R_Pole8_12:
# 1055 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole8_11

AedesLux_Script_Puzzle2R_Pole8_13:
# 1054 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole8_12
	goto AedesLux_Script_Puzzle2R_Pole8_11

AedesLux_Script_Puzzle2R_Pole8_17:
# 1060 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle2R_Pole8_16

AedesLux_Script_Puzzle2R_Pole8_19:
# 1059 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole8_17
	goto AedesLux_Script_Puzzle2R_Pole8_18

AedesLux_Script_Puzzle2R_Pole8_23:
# 1064 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole8_22

AedesLux_Script_Puzzle2R_Pole8_25:
# 1070 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle2R_Pole8_16

AedesLux_Script_Puzzle2R_Pole8_26:
# 1069 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole8_25
	goto AedesLux_Script_Puzzle2R_Pole8_16


AedesLux_Script_Puzzle2R_Pole9::
# 1083 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole9_2
AedesLux_Script_Puzzle2R_Pole9_1:
# 1087 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole9_5
# 1090 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole9_4:
# 1092 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1094 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole9_9
AedesLux_Script_Puzzle2R_Pole9_8:
# 1125 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole9_2:
# 1084 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole9_1

AedesLux_Script_Puzzle2R_Pole9_5:
# 1088 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole9_4

AedesLux_Script_Puzzle2R_Pole9_9:
# 1096 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1097 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole9_13
AedesLux_Script_Puzzle2R_Pole9_11:
# 1100 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole9_18
AedesLux_Script_Puzzle2R_Pole9_16:
# 1105 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole9_24
AedesLux_Script_Puzzle2R_Pole9_23:
# 1109 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole9_30
AedesLux_Script_Puzzle2R_Pole9_29:
# 1113 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 1115 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole9_35
AedesLux_Script_Puzzle2R_Pole9_32:
# 1119 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
AedesLux_Script_Puzzle2R_Pole9_21:
# 1122 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole9_8

AedesLux_Script_Puzzle2R_Pole9_12:
# 1098 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole9_11

AedesLux_Script_Puzzle2R_Pole9_13:
# 1097 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole9_12
	goto AedesLux_Script_Puzzle2R_Pole9_11

AedesLux_Script_Puzzle2R_Pole9_17:
# 1101 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole9_16

AedesLux_Script_Puzzle2R_Pole9_18:
# 1100 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole9_17
	goto AedesLux_Script_Puzzle2R_Pole9_16

AedesLux_Script_Puzzle2R_Pole9_22:
# 1106 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle2R_Pole9_21

AedesLux_Script_Puzzle2R_Pole9_24:
# 1105 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole9_22
# 1105 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole9_22
	goto AedesLux_Script_Puzzle2R_Pole9_23

AedesLux_Script_Puzzle2R_Pole9_30:
# 1110 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole9_29

AedesLux_Script_Puzzle2R_Pole9_33:
# 1116 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_Pole9_32

AedesLux_Script_Puzzle2R_Pole9_34:
# 1115 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole9_33
	goto AedesLux_Script_Puzzle2R_Pole9_32

AedesLux_Script_Puzzle2R_Pole9_35:
# 1115 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_Pole9_34
	goto AedesLux_Script_Puzzle2R_Pole9_32


AedesLux_Script_Puzzle2R_PoleA::
# 1131 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleA_2
AedesLux_Script_Puzzle2R_PoleA_1:
# 1135 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleA_5
# 1138 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleA_4:
# 1140 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1142 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleA_9
AedesLux_Script_Puzzle2R_PoleA_8:
# 1180 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleA_2:
# 1132 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleA_1

AedesLux_Script_Puzzle2R_PoleA_5:
# 1136 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleA_4

AedesLux_Script_Puzzle2R_PoleA_9:
# 1144 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1145 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleA_13
AedesLux_Script_Puzzle2R_PoleA_11:
# 1148 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleA_18
AedesLux_Script_Puzzle2R_PoleA_16:
# 1151 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleA_23
AedesLux_Script_Puzzle2R_PoleA_21:
# 1156 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleA_29
AedesLux_Script_Puzzle2R_PoleA_28:
# 1160 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleA_37
AedesLux_Script_Puzzle2R_PoleA_36:
# 1164 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 1166 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleA_41
AedesLux_Script_Puzzle2R_PoleA_39:
# 1169 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleA_46
AedesLux_Script_Puzzle2R_PoleA_44:
# 1172 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleA_51
AedesLux_Script_Puzzle2R_PoleA_26:
# 1177 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleA_8

AedesLux_Script_Puzzle2R_PoleA_12:
# 1146 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleA_11

AedesLux_Script_Puzzle2R_PoleA_13:
# 1145 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleA_12
	goto AedesLux_Script_Puzzle2R_PoleA_11

AedesLux_Script_Puzzle2R_PoleA_17:
# 1149 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleA_16

AedesLux_Script_Puzzle2R_PoleA_18:
# 1148 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleA_17
	goto AedesLux_Script_Puzzle2R_PoleA_16

AedesLux_Script_Puzzle2R_PoleA_22:
# 1152 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleA_21

AedesLux_Script_Puzzle2R_PoleA_23:
# 1151 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleA_22
	goto AedesLux_Script_Puzzle2R_PoleA_21

AedesLux_Script_Puzzle2R_PoleA_27:
# 1157 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_PoleA_26

AedesLux_Script_Puzzle2R_PoleA_29:
# 1156 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleA_27
# 1156 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleA_27
# 1156 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleA_27
	goto AedesLux_Script_Puzzle2R_PoleA_28

AedesLux_Script_Puzzle2R_PoleA_37:
# 1161 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleA_36

AedesLux_Script_Puzzle2R_PoleA_40:
# 1167 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle2R_PoleA_39

AedesLux_Script_Puzzle2R_PoleA_41:
# 1166 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle2R_PoleA_40
	goto AedesLux_Script_Puzzle2R_PoleA_39

AedesLux_Script_Puzzle2R_PoleA_45:
# 1170 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle2R_PoleA_44

AedesLux_Script_Puzzle2R_PoleA_46:
# 1169 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleA_45
	goto AedesLux_Script_Puzzle2R_PoleA_44

AedesLux_Script_Puzzle2R_PoleA_49:
# 1173 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_PoleA_26

AedesLux_Script_Puzzle2R_PoleA_50:
# 1172 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleA_49
	goto AedesLux_Script_Puzzle2R_PoleA_26

AedesLux_Script_Puzzle2R_PoleA_51:
# 1172 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleA_50
	goto AedesLux_Script_Puzzle2R_PoleA_26


AedesLux_Script_Puzzle2R_PoleB::
# 1186 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleB_2
AedesLux_Script_Puzzle2R_PoleB_1:
# 1190 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_5
# 1193 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleB_4:
# 1195 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1197 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleB_9
AedesLux_Script_Puzzle2R_PoleB_8:
# 1229 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleB_2:
# 1187 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleB_1

AedesLux_Script_Puzzle2R_PoleB_5:
# 1191 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleB_4

AedesLux_Script_Puzzle2R_PoleB_9:
# 1199 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1200 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleB_13
AedesLux_Script_Puzzle2R_PoleB_11:
# 1203 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleB_18
AedesLux_Script_Puzzle2R_PoleB_16:
# 1208 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_24
AedesLux_Script_Puzzle2R_PoleB_23:
# 1212 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_30
AedesLux_Script_Puzzle2R_PoleB_29:
# 1216 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 1218 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleB_35
AedesLux_Script_Puzzle2R_PoleB_32:
# 1221 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleB_41
AedesLux_Script_Puzzle2R_PoleB_21:
# 1226 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleB_8

AedesLux_Script_Puzzle2R_PoleB_12:
# 1201 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleB_11

AedesLux_Script_Puzzle2R_PoleB_13:
# 1200 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleB_12
	goto AedesLux_Script_Puzzle2R_PoleB_11

AedesLux_Script_Puzzle2R_PoleB_17:
# 1204 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleB_16

AedesLux_Script_Puzzle2R_PoleB_18:
# 1203 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleB_17
	goto AedesLux_Script_Puzzle2R_PoleB_16

AedesLux_Script_Puzzle2R_PoleB_22:
# 1209 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle2R_PoleB_21

AedesLux_Script_Puzzle2R_PoleB_24:
# 1208 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleB_22
# 1208 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_22
	goto AedesLux_Script_Puzzle2R_PoleB_23

AedesLux_Script_Puzzle2R_PoleB_30:
# 1213 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleB_29

AedesLux_Script_Puzzle2R_PoleB_33:
# 1219 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_PoleB_32

AedesLux_Script_Puzzle2R_PoleB_34:
# 1218 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleB_33
	goto AedesLux_Script_Puzzle2R_PoleB_32

AedesLux_Script_Puzzle2R_PoleB_35:
# 1218 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleB_34
	goto AedesLux_Script_Puzzle2R_PoleB_32

AedesLux_Script_Puzzle2R_PoleB_39:
# 1222 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_PoleB_21

AedesLux_Script_Puzzle2R_PoleB_40:
# 1221 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleB_39
	goto AedesLux_Script_Puzzle2R_PoleB_21

AedesLux_Script_Puzzle2R_PoleB_41:
# 1221 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleB_40
	goto AedesLux_Script_Puzzle2R_PoleB_21


AedesLux_Script_Puzzle2R_PoleC::
# 1235 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleC_2
AedesLux_Script_Puzzle2R_PoleC_1:
# 1239 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleC_5
# 1242 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleC_4:
# 1244 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1246 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleC_9
AedesLux_Script_Puzzle2R_PoleC_8:
# 1284 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleC_2:
# 1236 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleC_1

AedesLux_Script_Puzzle2R_PoleC_5:
# 1240 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleC_4

AedesLux_Script_Puzzle2R_PoleC_9:
# 1248 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1249 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleC_13
AedesLux_Script_Puzzle2R_PoleC_11:
# 1252 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleC_18
AedesLux_Script_Puzzle2R_PoleC_16:
# 1255 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleC_23
AedesLux_Script_Puzzle2R_PoleC_21:
# 1260 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleC_29
AedesLux_Script_Puzzle2R_PoleC_28:
# 1264 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleC_37
AedesLux_Script_Puzzle2R_PoleC_36:
# 1268 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 1270 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleC_42
AedesLux_Script_Puzzle2R_PoleC_39:
# 1273 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleC_49
AedesLux_Script_Puzzle2R_PoleC_46:
# 1276 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleC_55
AedesLux_Script_Puzzle2R_PoleC_26:
# 1281 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleC_8

AedesLux_Script_Puzzle2R_PoleC_12:
# 1250 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleC_11

AedesLux_Script_Puzzle2R_PoleC_13:
# 1249 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleC_12
	goto AedesLux_Script_Puzzle2R_PoleC_11

AedesLux_Script_Puzzle2R_PoleC_17:
# 1253 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleC_16

AedesLux_Script_Puzzle2R_PoleC_18:
# 1252 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleC_17
	goto AedesLux_Script_Puzzle2R_PoleC_16

AedesLux_Script_Puzzle2R_PoleC_22:
# 1256 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleC_21

AedesLux_Script_Puzzle2R_PoleC_23:
# 1255 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleC_22
	goto AedesLux_Script_Puzzle2R_PoleC_21

AedesLux_Script_Puzzle2R_PoleC_27:
# 1261 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_PoleC_26

AedesLux_Script_Puzzle2R_PoleC_29:
# 1260 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleC_27
# 1260 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleC_27
# 1260 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleC_27
	goto AedesLux_Script_Puzzle2R_PoleC_28

AedesLux_Script_Puzzle2R_PoleC_37:
# 1265 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleC_36

AedesLux_Script_Puzzle2R_PoleC_40:
# 1271 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_PoleC_39

AedesLux_Script_Puzzle2R_PoleC_41:
# 1270 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleC_40
	goto AedesLux_Script_Puzzle2R_PoleC_39

AedesLux_Script_Puzzle2R_PoleC_42:
# 1270 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleC_41
	goto AedesLux_Script_Puzzle2R_PoleC_39

AedesLux_Script_Puzzle2R_PoleC_47:
# 1274 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_PoleC_46

AedesLux_Script_Puzzle2R_PoleC_48:
# 1273 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleC_47
	goto AedesLux_Script_Puzzle2R_PoleC_46

AedesLux_Script_Puzzle2R_PoleC_49:
# 1273 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleC_48
	goto AedesLux_Script_Puzzle2R_PoleC_46

AedesLux_Script_Puzzle2R_PoleC_53:
# 1277 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_PoleC_26

AedesLux_Script_Puzzle2R_PoleC_54:
# 1276 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleC_53
	goto AedesLux_Script_Puzzle2R_PoleC_26

AedesLux_Script_Puzzle2R_PoleC_55:
# 1276 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleC_54
	goto AedesLux_Script_Puzzle2R_PoleC_26


AedesLux_Script_Puzzle2R_PoleD::
# 1290 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleD_2
AedesLux_Script_Puzzle2R_PoleD_1:
# 1294 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleD_5
# 1297 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleD_4:
# 1299 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1301 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleD_9
AedesLux_Script_Puzzle2R_PoleD_8:
# 1339 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleD_2:
# 1291 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleD_1

AedesLux_Script_Puzzle2R_PoleD_5:
# 1295 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleD_4

AedesLux_Script_Puzzle2R_PoleD_9:
# 1303 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1304 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleD_13
AedesLux_Script_Puzzle2R_PoleD_11:
# 1307 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleD_18
AedesLux_Script_Puzzle2R_PoleD_16:
# 1310 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleD_23
AedesLux_Script_Puzzle2R_PoleD_21:
# 1315 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleD_29
AedesLux_Script_Puzzle2R_PoleD_28:
# 1319 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleD_37
AedesLux_Script_Puzzle2R_PoleD_36:
# 1323 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 1325 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleD_41
AedesLux_Script_Puzzle2R_PoleD_39:
# 1328 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleD_47
AedesLux_Script_Puzzle2R_PoleD_44:
# 1331 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleD_52
AedesLux_Script_Puzzle2R_PoleD_26:
# 1336 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleD_8

AedesLux_Script_Puzzle2R_PoleD_12:
# 1305 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleD_11

AedesLux_Script_Puzzle2R_PoleD_13:
# 1304 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleD_12
	goto AedesLux_Script_Puzzle2R_PoleD_11

AedesLux_Script_Puzzle2R_PoleD_17:
# 1308 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleD_16

AedesLux_Script_Puzzle2R_PoleD_18:
# 1307 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleD_17
	goto AedesLux_Script_Puzzle2R_PoleD_16

AedesLux_Script_Puzzle2R_PoleD_22:
# 1311 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleD_21

AedesLux_Script_Puzzle2R_PoleD_23:
# 1310 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleD_22
	goto AedesLux_Script_Puzzle2R_PoleD_21

AedesLux_Script_Puzzle2R_PoleD_27:
# 1316 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_PoleD_26

AedesLux_Script_Puzzle2R_PoleD_29:
# 1315 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleD_27
# 1315 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleD_27
# 1315 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleD_27
	goto AedesLux_Script_Puzzle2R_PoleD_28

AedesLux_Script_Puzzle2R_PoleD_37:
# 1320 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleD_36

AedesLux_Script_Puzzle2R_PoleD_40:
# 1326 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle2R_PoleD_39

AedesLux_Script_Puzzle2R_PoleD_41:
# 1325 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleD_40
	goto AedesLux_Script_Puzzle2R_PoleD_39

AedesLux_Script_Puzzle2R_PoleD_45:
# 1329 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_PoleD_44

AedesLux_Script_Puzzle2R_PoleD_46:
# 1328 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleD_45
	goto AedesLux_Script_Puzzle2R_PoleD_44

AedesLux_Script_Puzzle2R_PoleD_47:
# 1328 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleD_46
	goto AedesLux_Script_Puzzle2R_PoleD_44

AedesLux_Script_Puzzle2R_PoleD_51:
# 1332 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle2R_PoleD_26

AedesLux_Script_Puzzle2R_PoleD_52:
# 1331 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleD_51
	goto AedesLux_Script_Puzzle2R_PoleD_26


AedesLux_Script_Puzzle2R_PoleE::
# 1345 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleE_2
AedesLux_Script_Puzzle2R_PoleE_1:
# 1349 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleE_5
# 1352 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleE_4:
# 1354 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1356 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleE_9
AedesLux_Script_Puzzle2R_PoleE_8:
# 1382 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleE_2:
# 1346 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleE_1

AedesLux_Script_Puzzle2R_PoleE_5:
# 1350 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleE_4

AedesLux_Script_Puzzle2R_PoleE_9:
# 1358 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1359 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleE_13
AedesLux_Script_Puzzle2R_PoleE_11:
# 1364 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleE_19
AedesLux_Script_Puzzle2R_PoleE_18:
# 1368 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleE_23
AedesLux_Script_Puzzle2R_PoleE_22:
# 1372 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 1374 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleE_26
AedesLux_Script_Puzzle2R_PoleE_16:
# 1379 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleE_8

AedesLux_Script_Puzzle2R_PoleE_12:
# 1360 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleE_11

AedesLux_Script_Puzzle2R_PoleE_13:
# 1359 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleE_12
	goto AedesLux_Script_Puzzle2R_PoleE_11

AedesLux_Script_Puzzle2R_PoleE_17:
# 1365 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle2R_PoleE_16

AedesLux_Script_Puzzle2R_PoleE_19:
# 1364 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleE_17
	goto AedesLux_Script_Puzzle2R_PoleE_18

AedesLux_Script_Puzzle2R_PoleE_23:
# 1369 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleE_22

AedesLux_Script_Puzzle2R_PoleE_25:
# 1375 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle2R_PoleE_16

AedesLux_Script_Puzzle2R_PoleE_26:
# 1374 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleE_25
	goto AedesLux_Script_Puzzle2R_PoleE_16


AedesLux_Script_Puzzle2R_PoleF::
# 1388 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleF_2
AedesLux_Script_Puzzle2R_PoleF_1:
# 1392 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleF_5
# 1395 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleF_4:
# 1397 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1399 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleF_9
AedesLux_Script_Puzzle2R_PoleF_8:
# 1430 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleF_2:
# 1389 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleF_1

AedesLux_Script_Puzzle2R_PoleF_5:
# 1393 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleF_4

AedesLux_Script_Puzzle2R_PoleF_9:
# 1401 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1402 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleF_13
AedesLux_Script_Puzzle2R_PoleF_11:
# 1405 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleF_18
AedesLux_Script_Puzzle2R_PoleF_16:
# 1410 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleF_24
AedesLux_Script_Puzzle2R_PoleF_23:
# 1414 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleF_30
AedesLux_Script_Puzzle2R_PoleF_29:
# 1418 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 1420 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleF_35
AedesLux_Script_Puzzle2R_PoleF_32:
# 1424 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
AedesLux_Script_Puzzle2R_PoleF_21:
# 1427 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleF_8

AedesLux_Script_Puzzle2R_PoleF_12:
# 1403 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleF_11

AedesLux_Script_Puzzle2R_PoleF_13:
# 1402 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleF_12
	goto AedesLux_Script_Puzzle2R_PoleF_11

AedesLux_Script_Puzzle2R_PoleF_17:
# 1406 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleF_16

AedesLux_Script_Puzzle2R_PoleF_18:
# 1405 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleF_17
	goto AedesLux_Script_Puzzle2R_PoleF_16

AedesLux_Script_Puzzle2R_PoleF_22:
# 1411 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle2R_PoleF_21

AedesLux_Script_Puzzle2R_PoleF_24:
# 1410 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleF_22
# 1410 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleF_22
	goto AedesLux_Script_Puzzle2R_PoleF_23

AedesLux_Script_Puzzle2R_PoleF_30:
# 1415 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleF_29

AedesLux_Script_Puzzle2R_PoleF_33:
# 1421 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_PoleF_32

AedesLux_Script_Puzzle2R_PoleF_34:
# 1420 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleF_33
	goto AedesLux_Script_Puzzle2R_PoleF_32

AedesLux_Script_Puzzle2R_PoleF_35:
# 1420 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleF_34
	goto AedesLux_Script_Puzzle2R_PoleF_32


AedesLux_Script_Puzzle2R_Pole10::
# 1436 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole10_2
AedesLux_Script_Puzzle2R_Pole10_1:
# 1440 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole10_5
# 1443 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole10_4:
# 1445 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1447 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole10_9
AedesLux_Script_Puzzle2R_Pole10_8:
# 1485 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole10_2:
# 1437 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole10_1

AedesLux_Script_Puzzle2R_Pole10_5:
# 1441 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole10_4

AedesLux_Script_Puzzle2R_Pole10_9:
# 1449 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1450 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_Pole10_13
AedesLux_Script_Puzzle2R_Pole10_11:
# 1453 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole10_18
AedesLux_Script_Puzzle2R_Pole10_16:
# 1456 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole10_23
AedesLux_Script_Puzzle2R_Pole10_21:
# 1461 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole10_29
AedesLux_Script_Puzzle2R_Pole10_28:
# 1465 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole10_37
AedesLux_Script_Puzzle2R_Pole10_36:
# 1469 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 1471 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole10_42
AedesLux_Script_Puzzle2R_Pole10_39:
# 1474 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole10_48
AedesLux_Script_Puzzle2R_Pole10_46:
# 1477 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole10_52
AedesLux_Script_Puzzle2R_Pole10_26:
# 1482 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole10_8

AedesLux_Script_Puzzle2R_Pole10_12:
# 1451 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole10_11

AedesLux_Script_Puzzle2R_Pole10_13:
# 1450 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole10_12
	goto AedesLux_Script_Puzzle2R_Pole10_11

AedesLux_Script_Puzzle2R_Pole10_17:
# 1454 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole10_16

AedesLux_Script_Puzzle2R_Pole10_18:
# 1453 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole10_17
	goto AedesLux_Script_Puzzle2R_Pole10_16

AedesLux_Script_Puzzle2R_Pole10_22:
# 1457 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole10_21

AedesLux_Script_Puzzle2R_Pole10_23:
# 1456 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole10_22
	goto AedesLux_Script_Puzzle2R_Pole10_21

AedesLux_Script_Puzzle2R_Pole10_27:
# 1462 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_Pole10_26

AedesLux_Script_Puzzle2R_Pole10_29:
# 1461 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole10_27
# 1461 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole10_27
# 1461 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole10_27
	goto AedesLux_Script_Puzzle2R_Pole10_28

AedesLux_Script_Puzzle2R_Pole10_37:
# 1466 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole10_36

AedesLux_Script_Puzzle2R_Pole10_40:
# 1472 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_Pole10_39

AedesLux_Script_Puzzle2R_Pole10_41:
# 1471 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole10_40
	goto AedesLux_Script_Puzzle2R_Pole10_39

AedesLux_Script_Puzzle2R_Pole10_42:
# 1471 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole10_41
	goto AedesLux_Script_Puzzle2R_Pole10_39

AedesLux_Script_Puzzle2R_Pole10_47:
# 1475 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle2R_Pole10_46

AedesLux_Script_Puzzle2R_Pole10_48:
# 1474 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle2R_Pole10_47
	goto AedesLux_Script_Puzzle2R_Pole10_46

AedesLux_Script_Puzzle2R_Pole10_51:
# 1478 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle2R_Pole10_26

AedesLux_Script_Puzzle2R_Pole10_52:
# 1477 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole10_51
	goto AedesLux_Script_Puzzle2R_Pole10_26


AedesLux_Script_Puzzle2R_Pole11::
# 1491 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole11_2
AedesLux_Script_Puzzle2R_Pole11_1:
# 1495 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole11_5
# 1498 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole11_4:
# 1500 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1502 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole11_9
AedesLux_Script_Puzzle2R_Pole11_8:
# 1534 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole11_2:
# 1492 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole11_1

AedesLux_Script_Puzzle2R_Pole11_5:
# 1496 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole11_4

AedesLux_Script_Puzzle2R_Pole11_9:
# 1504 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1505 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_Pole11_13
AedesLux_Script_Puzzle2R_Pole11_11:
# 1508 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole11_18
AedesLux_Script_Puzzle2R_Pole11_16:
# 1513 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole11_24
AedesLux_Script_Puzzle2R_Pole11_23:
# 1517 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole11_30
AedesLux_Script_Puzzle2R_Pole11_29:
# 1521 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 1523 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole11_35
AedesLux_Script_Puzzle2R_Pole11_32:
# 1526 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole11_41
AedesLux_Script_Puzzle2R_Pole11_21:
# 1531 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole11_8

AedesLux_Script_Puzzle2R_Pole11_12:
# 1506 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole11_11

AedesLux_Script_Puzzle2R_Pole11_13:
# 1505 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole11_12
	goto AedesLux_Script_Puzzle2R_Pole11_11

AedesLux_Script_Puzzle2R_Pole11_17:
# 1509 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole11_16

AedesLux_Script_Puzzle2R_Pole11_18:
# 1508 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole11_17
	goto AedesLux_Script_Puzzle2R_Pole11_16

AedesLux_Script_Puzzle2R_Pole11_22:
# 1514 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle2R_Pole11_21

AedesLux_Script_Puzzle2R_Pole11_24:
# 1513 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole11_22
# 1513 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole11_22
	goto AedesLux_Script_Puzzle2R_Pole11_23

AedesLux_Script_Puzzle2R_Pole11_30:
# 1518 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole11_29

AedesLux_Script_Puzzle2R_Pole11_33:
# 1524 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_Pole11_32

AedesLux_Script_Puzzle2R_Pole11_34:
# 1523 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole11_33
	goto AedesLux_Script_Puzzle2R_Pole11_32

AedesLux_Script_Puzzle2R_Pole11_35:
# 1523 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole11_34
	goto AedesLux_Script_Puzzle2R_Pole11_32

AedesLux_Script_Puzzle2R_Pole11_39:
# 1527 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_Pole11_21

AedesLux_Script_Puzzle2R_Pole11_40:
# 1526 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_Pole11_39
	goto AedesLux_Script_Puzzle2R_Pole11_21

AedesLux_Script_Puzzle2R_Pole11_41:
# 1526 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole11_40
	goto AedesLux_Script_Puzzle2R_Pole11_21


AedesLux_Script_Puzzle3L_Pole1::
# 1542 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole1_2
AedesLux_Script_Puzzle3L_Pole1_1:
# 1546 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole1_5
# 1549 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole1_4:
# 1551 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1553 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole1_9
AedesLux_Script_Puzzle3L_Pole1_8:
# 1579 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole1_2:
# 1543 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole1_1

AedesLux_Script_Puzzle3L_Pole1_5:
# 1547 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole1_4

AedesLux_Script_Puzzle3L_Pole1_9:
# 1555 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1556 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole1_13
AedesLux_Script_Puzzle3L_Pole1_11:
# 1561 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole1_19
AedesLux_Script_Puzzle3L_Pole1_18:
# 1565 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole1_23
AedesLux_Script_Puzzle3L_Pole1_22:
# 1569 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 1571 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole1_26
AedesLux_Script_Puzzle3L_Pole1_16:
# 1576 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole1_8

AedesLux_Script_Puzzle3L_Pole1_12:
# 1557 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole1_11

AedesLux_Script_Puzzle3L_Pole1_13:
# 1556 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole1_12
	goto AedesLux_Script_Puzzle3L_Pole1_11

AedesLux_Script_Puzzle3L_Pole1_17:
# 1562 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle3L_Pole1_16

AedesLux_Script_Puzzle3L_Pole1_19:
# 1561 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole1_17
	goto AedesLux_Script_Puzzle3L_Pole1_18

AedesLux_Script_Puzzle3L_Pole1_23:
# 1566 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole1_22

AedesLux_Script_Puzzle3L_Pole1_25:
# 1572 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle3L_Pole1_16

AedesLux_Script_Puzzle3L_Pole1_26:
# 1571 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole1_25
	goto AedesLux_Script_Puzzle3L_Pole1_16


AedesLux_Script_Puzzle3L_Pole2::
# 1585 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole2_2
AedesLux_Script_Puzzle3L_Pole2_1:
# 1589 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole2_5
# 1592 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole2_4:
# 1594 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1596 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole2_9
AedesLux_Script_Puzzle3L_Pole2_8:
# 1627 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole2_2:
# 1586 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole2_1

AedesLux_Script_Puzzle3L_Pole2_5:
# 1590 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole2_4

AedesLux_Script_Puzzle3L_Pole2_9:
# 1598 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1599 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole2_13
AedesLux_Script_Puzzle3L_Pole2_11:
# 1602 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole2_18
AedesLux_Script_Puzzle3L_Pole2_16:
# 1607 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole2_24
AedesLux_Script_Puzzle3L_Pole2_23:
# 1611 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole2_30
AedesLux_Script_Puzzle3L_Pole2_29:
# 1615 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 1617 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole2_34
AedesLux_Script_Puzzle3L_Pole2_32:
# 1621 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
AedesLux_Script_Puzzle3L_Pole2_21:
# 1624 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole2_8

AedesLux_Script_Puzzle3L_Pole2_12:
# 1600 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole2_11

AedesLux_Script_Puzzle3L_Pole2_13:
# 1599 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole2_12
	goto AedesLux_Script_Puzzle3L_Pole2_11

AedesLux_Script_Puzzle3L_Pole2_17:
# 1603 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole2_16

AedesLux_Script_Puzzle3L_Pole2_18:
# 1602 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole2_17
	goto AedesLux_Script_Puzzle3L_Pole2_16

AedesLux_Script_Puzzle3L_Pole2_22:
# 1608 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle3L_Pole2_21

AedesLux_Script_Puzzle3L_Pole2_24:
# 1607 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole2_22
# 1607 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole2_22
	goto AedesLux_Script_Puzzle3L_Pole2_23

AedesLux_Script_Puzzle3L_Pole2_30:
# 1612 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole2_29

AedesLux_Script_Puzzle3L_Pole2_33:
# 1618 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle3L_Pole2_32

AedesLux_Script_Puzzle3L_Pole2_34:
# 1617 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole2_33
	goto AedesLux_Script_Puzzle3L_Pole2_32


AedesLux_Script_Puzzle3L_Pole3::
# 1633 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole3_2
AedesLux_Script_Puzzle3L_Pole3_1:
# 1637 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole3_5
# 1640 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole3_4:
# 1642 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1644 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole3_9
AedesLux_Script_Puzzle3L_Pole3_8:
# 1670 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole3_2:
# 1634 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole3_1

AedesLux_Script_Puzzle3L_Pole3_5:
# 1638 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole3_4

AedesLux_Script_Puzzle3L_Pole3_9:
# 1646 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1647 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole3_13
AedesLux_Script_Puzzle3L_Pole3_11:
# 1652 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole3_19
AedesLux_Script_Puzzle3L_Pole3_18:
# 1656 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole3_23
AedesLux_Script_Puzzle3L_Pole3_22:
# 1660 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 1662 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole3_26
AedesLux_Script_Puzzle3L_Pole3_16:
# 1667 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole3_8

AedesLux_Script_Puzzle3L_Pole3_12:
# 1648 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole3_11

AedesLux_Script_Puzzle3L_Pole3_13:
# 1647 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole3_12
	goto AedesLux_Script_Puzzle3L_Pole3_11

AedesLux_Script_Puzzle3L_Pole3_17:
# 1653 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle3L_Pole3_16

AedesLux_Script_Puzzle3L_Pole3_19:
# 1652 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole3_17
	goto AedesLux_Script_Puzzle3L_Pole3_18

AedesLux_Script_Puzzle3L_Pole3_23:
# 1657 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole3_22

AedesLux_Script_Puzzle3L_Pole3_25:
# 1663 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle3L_Pole3_16

AedesLux_Script_Puzzle3L_Pole3_26:
# 1662 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole3_25
	goto AedesLux_Script_Puzzle3L_Pole3_16


AedesLux_Script_Puzzle3L_Pole4::
# 1676 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole4_2
AedesLux_Script_Puzzle3L_Pole4_1:
# 1680 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole4_5
# 1683 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole4_4:
# 1685 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1687 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole4_9
AedesLux_Script_Puzzle3L_Pole4_8:
# 1719 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole4_2:
# 1677 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole4_1

AedesLux_Script_Puzzle3L_Pole4_5:
# 1681 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole4_4

AedesLux_Script_Puzzle3L_Pole4_9:
# 1689 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1690 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole4_13
AedesLux_Script_Puzzle3L_Pole4_11:
# 1693 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole4_18
AedesLux_Script_Puzzle3L_Pole4_16:
# 1698 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole4_24
AedesLux_Script_Puzzle3L_Pole4_23:
# 1702 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole4_30
AedesLux_Script_Puzzle3L_Pole4_29:
# 1706 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 1708 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole4_34
AedesLux_Script_Puzzle3L_Pole4_32:
# 1711 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole4_39
AedesLux_Script_Puzzle3L_Pole4_21:
# 1716 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole4_8

AedesLux_Script_Puzzle3L_Pole4_12:
# 1691 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole4_11

AedesLux_Script_Puzzle3L_Pole4_13:
# 1690 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole4_12
	goto AedesLux_Script_Puzzle3L_Pole4_11

AedesLux_Script_Puzzle3L_Pole4_17:
# 1694 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole4_16

AedesLux_Script_Puzzle3L_Pole4_18:
# 1693 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole4_17
	goto AedesLux_Script_Puzzle3L_Pole4_16

AedesLux_Script_Puzzle3L_Pole4_22:
# 1699 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle3L_Pole4_21

AedesLux_Script_Puzzle3L_Pole4_24:
# 1698 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole4_22
# 1698 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole4_22
	goto AedesLux_Script_Puzzle3L_Pole4_23

AedesLux_Script_Puzzle3L_Pole4_30:
# 1703 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole4_29

AedesLux_Script_Puzzle3L_Pole4_33:
# 1709 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle3L_Pole4_32

AedesLux_Script_Puzzle3L_Pole4_34:
# 1708 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole4_33
	goto AedesLux_Script_Puzzle3L_Pole4_32

AedesLux_Script_Puzzle3L_Pole4_37:
# 1712 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle3L_Pole4_21

AedesLux_Script_Puzzle3L_Pole4_38:
# 1711 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole4_37
	goto AedesLux_Script_Puzzle3L_Pole4_21

AedesLux_Script_Puzzle3L_Pole4_39:
# 1711 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole4_38
	goto AedesLux_Script_Puzzle3L_Pole4_21


AedesLux_Script_Puzzle3L_Pole5::
# 1725 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole5_2
AedesLux_Script_Puzzle3L_Pole5_1:
# 1729 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole5_5
# 1732 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole5_4:
# 1734 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1736 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole5_9
AedesLux_Script_Puzzle3L_Pole5_8:
# 1767 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole5_2:
# 1726 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole5_1

AedesLux_Script_Puzzle3L_Pole5_5:
# 1730 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole5_4

AedesLux_Script_Puzzle3L_Pole5_9:
# 1738 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1739 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole5_13
AedesLux_Script_Puzzle3L_Pole5_11:
# 1742 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole5_18
AedesLux_Script_Puzzle3L_Pole5_16:
# 1747 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole5_24
AedesLux_Script_Puzzle3L_Pole5_23:
# 1751 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole5_30
AedesLux_Script_Puzzle3L_Pole5_29:
# 1755 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 1757 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole5_35
AedesLux_Script_Puzzle3L_Pole5_32:
# 1761 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
AedesLux_Script_Puzzle3L_Pole5_21:
# 1764 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole5_8

AedesLux_Script_Puzzle3L_Pole5_12:
# 1740 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole5_11

AedesLux_Script_Puzzle3L_Pole5_13:
# 1739 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole5_12
	goto AedesLux_Script_Puzzle3L_Pole5_11

AedesLux_Script_Puzzle3L_Pole5_17:
# 1743 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole5_16

AedesLux_Script_Puzzle3L_Pole5_18:
# 1742 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole5_17
	goto AedesLux_Script_Puzzle3L_Pole5_16

AedesLux_Script_Puzzle3L_Pole5_22:
# 1748 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle3L_Pole5_21

AedesLux_Script_Puzzle3L_Pole5_24:
# 1747 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole5_22
# 1747 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole5_22
	goto AedesLux_Script_Puzzle3L_Pole5_23

AedesLux_Script_Puzzle3L_Pole5_30:
# 1752 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole5_29

AedesLux_Script_Puzzle3L_Pole5_33:
# 1758 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle3L_Pole5_32

AedesLux_Script_Puzzle3L_Pole5_34:
# 1757 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole5_33
	goto AedesLux_Script_Puzzle3L_Pole5_32

AedesLux_Script_Puzzle3L_Pole5_35:
# 1757 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole5_34
	goto AedesLux_Script_Puzzle3L_Pole5_32


AedesLux_Script_Puzzle3L_Pole6::
# 1773 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole6_2
AedesLux_Script_Puzzle3L_Pole6_1:
# 1777 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole6_5
# 1780 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole6_4:
# 1782 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1784 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole6_9
AedesLux_Script_Puzzle3L_Pole6_8:
# 1821 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole6_2:
# 1774 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole6_1

AedesLux_Script_Puzzle3L_Pole6_5:
# 1778 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole6_4

AedesLux_Script_Puzzle3L_Pole6_9:
# 1786 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1787 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole6_13
AedesLux_Script_Puzzle3L_Pole6_11:
# 1790 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole6_18
AedesLux_Script_Puzzle3L_Pole6_16:
# 1793 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole6_23
AedesLux_Script_Puzzle3L_Pole6_21:
# 1798 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole6_29
AedesLux_Script_Puzzle3L_Pole6_28:
# 1802 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole6_37
AedesLux_Script_Puzzle3L_Pole6_36:
# 1806 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 1808 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole6_41
AedesLux_Script_Puzzle3L_Pole6_39:
# 1811 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole6_47
AedesLux_Script_Puzzle3L_Pole6_44:
# 1815 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
AedesLux_Script_Puzzle3L_Pole6_26:
# 1818 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole6_8

AedesLux_Script_Puzzle3L_Pole6_12:
# 1788 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole6_11

AedesLux_Script_Puzzle3L_Pole6_13:
# 1787 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole6_12
	goto AedesLux_Script_Puzzle3L_Pole6_11

AedesLux_Script_Puzzle3L_Pole6_17:
# 1791 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole6_16

AedesLux_Script_Puzzle3L_Pole6_18:
# 1790 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole6_17
	goto AedesLux_Script_Puzzle3L_Pole6_16

AedesLux_Script_Puzzle3L_Pole6_22:
# 1794 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole6_21

AedesLux_Script_Puzzle3L_Pole6_23:
# 1793 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole6_22
	goto AedesLux_Script_Puzzle3L_Pole6_21

AedesLux_Script_Puzzle3L_Pole6_27:
# 1799 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle3L_Pole6_26

AedesLux_Script_Puzzle3L_Pole6_29:
# 1798 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole6_27
# 1798 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole6_27
# 1798 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole6_27
	goto AedesLux_Script_Puzzle3L_Pole6_28

AedesLux_Script_Puzzle3L_Pole6_37:
# 1803 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole6_36

AedesLux_Script_Puzzle3L_Pole6_40:
# 1809 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle3L_Pole6_39

AedesLux_Script_Puzzle3L_Pole6_41:
# 1808 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole6_40
	goto AedesLux_Script_Puzzle3L_Pole6_39

AedesLux_Script_Puzzle3L_Pole6_45:
# 1812 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle3L_Pole6_44

AedesLux_Script_Puzzle3L_Pole6_46:
# 1811 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole6_45
	goto AedesLux_Script_Puzzle3L_Pole6_44

AedesLux_Script_Puzzle3L_Pole6_47:
# 1811 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole6_46
	goto AedesLux_Script_Puzzle3L_Pole6_44


AedesLux_Script_Puzzle3L_Pole7::
# 1827 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole7_2
AedesLux_Script_Puzzle3L_Pole7_1:
# 1831 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole7_5
# 1834 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole7_4:
# 1836 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1838 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole7_9
AedesLux_Script_Puzzle3L_Pole7_8:
# 1875 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole7_2:
# 1828 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole7_1

AedesLux_Script_Puzzle3L_Pole7_5:
# 1832 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole7_4

AedesLux_Script_Puzzle3L_Pole7_9:
# 1840 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1841 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole7_13
AedesLux_Script_Puzzle3L_Pole7_11:
# 1844 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole7_18
AedesLux_Script_Puzzle3L_Pole7_16:
# 1847 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole7_23
AedesLux_Script_Puzzle3L_Pole7_21:
# 1852 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole7_29
AedesLux_Script_Puzzle3L_Pole7_28:
# 1856 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole7_37
AedesLux_Script_Puzzle3L_Pole7_36:
# 1860 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 1862 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole7_41
AedesLux_Script_Puzzle3L_Pole7_39:
# 1865 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole7_47
AedesLux_Script_Puzzle3L_Pole7_44:
# 1869 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
AedesLux_Script_Puzzle3L_Pole7_26:
# 1872 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole7_8

AedesLux_Script_Puzzle3L_Pole7_12:
# 1842 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole7_11

AedesLux_Script_Puzzle3L_Pole7_13:
# 1841 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole7_12
	goto AedesLux_Script_Puzzle3L_Pole7_11

AedesLux_Script_Puzzle3L_Pole7_17:
# 1845 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole7_16

AedesLux_Script_Puzzle3L_Pole7_18:
# 1844 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole7_17
	goto AedesLux_Script_Puzzle3L_Pole7_16

AedesLux_Script_Puzzle3L_Pole7_22:
# 1848 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole7_21

AedesLux_Script_Puzzle3L_Pole7_23:
# 1847 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole7_22
	goto AedesLux_Script_Puzzle3L_Pole7_21

AedesLux_Script_Puzzle3L_Pole7_27:
# 1853 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle3L_Pole7_26

AedesLux_Script_Puzzle3L_Pole7_29:
# 1852 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole7_27
# 1852 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole7_27
# 1852 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole7_27
	goto AedesLux_Script_Puzzle3L_Pole7_28

AedesLux_Script_Puzzle3L_Pole7_37:
# 1857 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole7_36

AedesLux_Script_Puzzle3L_Pole7_40:
# 1863 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle3L_Pole7_39

AedesLux_Script_Puzzle3L_Pole7_41:
# 1862 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole7_40
	goto AedesLux_Script_Puzzle3L_Pole7_39

AedesLux_Script_Puzzle3L_Pole7_45:
# 1866 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle3L_Pole7_44

AedesLux_Script_Puzzle3L_Pole7_46:
# 1865 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole7_45
	goto AedesLux_Script_Puzzle3L_Pole7_44

AedesLux_Script_Puzzle3L_Pole7_47:
# 1865 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole7_46
	goto AedesLux_Script_Puzzle3L_Pole7_44


AedesLux_Script_Puzzle3L_Pole8::
# 1881 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole8_2
AedesLux_Script_Puzzle3L_Pole8_1:
# 1885 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole8_5
# 1888 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole8_4:
# 1890 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1892 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole8_9
AedesLux_Script_Puzzle3L_Pole8_8:
# 1918 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole8_2:
# 1882 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole8_1

AedesLux_Script_Puzzle3L_Pole8_5:
# 1886 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole8_4

AedesLux_Script_Puzzle3L_Pole8_9:
# 1894 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1895 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole8_13
AedesLux_Script_Puzzle3L_Pole8_11:
# 1900 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole8_19
AedesLux_Script_Puzzle3L_Pole8_18:
# 1904 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole8_23
AedesLux_Script_Puzzle3L_Pole8_22:
# 1908 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 1910 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole8_27
AedesLux_Script_Puzzle3L_Pole8_16:
# 1915 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole8_8

AedesLux_Script_Puzzle3L_Pole8_12:
# 1896 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole8_11

AedesLux_Script_Puzzle3L_Pole8_13:
# 1895 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole8_12
	goto AedesLux_Script_Puzzle3L_Pole8_11

AedesLux_Script_Puzzle3L_Pole8_17:
# 1901 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle3L_Pole8_16

AedesLux_Script_Puzzle3L_Pole8_19:
# 1900 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole8_17
	goto AedesLux_Script_Puzzle3L_Pole8_18

AedesLux_Script_Puzzle3L_Pole8_23:
# 1905 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole8_22

AedesLux_Script_Puzzle3L_Pole8_25:
# 1911 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle3L_Pole8_16

AedesLux_Script_Puzzle3L_Pole8_26:
# 1910 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole8_25
	goto AedesLux_Script_Puzzle3L_Pole8_16

AedesLux_Script_Puzzle3L_Pole8_27:
# 1910 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole8_26
	goto AedesLux_Script_Puzzle3L_Pole8_16


AedesLux_Script_Puzzle3L_Pole9::
# 1924 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole9_2
AedesLux_Script_Puzzle3L_Pole9_1:
# 1928 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole9_5
# 1931 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole9_4:
# 1933 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1935 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole9_9
AedesLux_Script_Puzzle3L_Pole9_8:
# 1961 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole9_2:
# 1925 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole9_1

AedesLux_Script_Puzzle3L_Pole9_5:
# 1929 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole9_4

AedesLux_Script_Puzzle3L_Pole9_9:
# 1937 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1938 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole9_13
AedesLux_Script_Puzzle3L_Pole9_11:
# 1943 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole9_19
AedesLux_Script_Puzzle3L_Pole9_18:
# 1947 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole9_23
AedesLux_Script_Puzzle3L_Pole9_22:
# 1951 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 1953 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole9_27
AedesLux_Script_Puzzle3L_Pole9_16:
# 1958 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole9_8

AedesLux_Script_Puzzle3L_Pole9_12:
# 1939 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole9_11

AedesLux_Script_Puzzle3L_Pole9_13:
# 1938 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole9_12
	goto AedesLux_Script_Puzzle3L_Pole9_11

AedesLux_Script_Puzzle3L_Pole9_17:
# 1944 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle3L_Pole9_16

AedesLux_Script_Puzzle3L_Pole9_19:
# 1943 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole9_17
	goto AedesLux_Script_Puzzle3L_Pole9_18

AedesLux_Script_Puzzle3L_Pole9_23:
# 1948 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole9_22

AedesLux_Script_Puzzle3L_Pole9_25:
# 1954 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle3L_Pole9_16

AedesLux_Script_Puzzle3L_Pole9_26:
# 1953 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole9_25
	goto AedesLux_Script_Puzzle3L_Pole9_16

AedesLux_Script_Puzzle3L_Pole9_27:
# 1953 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole9_26
	goto AedesLux_Script_Puzzle3L_Pole9_16


AedesLux_Script_Puzzle3R_PoleA::
# 1969 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleA_2
AedesLux_Script_Puzzle3R_PoleA_1:
# 1973 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleA_5
# 1976 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleA_4:
# 1978 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1980 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleA_9
AedesLux_Script_Puzzle3R_PoleA_8:
# 2012 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleA_2:
# 1970 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleA_1

AedesLux_Script_Puzzle3R_PoleA_5:
# 1974 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleA_4

AedesLux_Script_Puzzle3R_PoleA_9:
# 1982 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1983 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleA_13
AedesLux_Script_Puzzle3R_PoleA_11:
# 1986 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleA_18
AedesLux_Script_Puzzle3R_PoleA_16:
# 1991 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleA_24
AedesLux_Script_Puzzle3R_PoleA_23:
# 1995 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleA_30
AedesLux_Script_Puzzle3R_PoleA_29:
# 1999 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 2001 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleA_35
AedesLux_Script_Puzzle3R_PoleA_32:
# 2004 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleA_41
AedesLux_Script_Puzzle3R_PoleA_21:
# 2009 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleA_8

AedesLux_Script_Puzzle3R_PoleA_12:
# 1984 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleA_11

AedesLux_Script_Puzzle3R_PoleA_13:
# 1983 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleA_12
	goto AedesLux_Script_Puzzle3R_PoleA_11

AedesLux_Script_Puzzle3R_PoleA_17:
# 1987 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleA_16

AedesLux_Script_Puzzle3R_PoleA_18:
# 1986 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleA_17
	goto AedesLux_Script_Puzzle3R_PoleA_16

AedesLux_Script_Puzzle3R_PoleA_22:
# 1992 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle3R_PoleA_21

AedesLux_Script_Puzzle3R_PoleA_24:
# 1991 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleA_22
# 1991 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleA_22
	goto AedesLux_Script_Puzzle3R_PoleA_23

AedesLux_Script_Puzzle3R_PoleA_30:
# 1996 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleA_29

AedesLux_Script_Puzzle3R_PoleA_33:
# 2002 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle3R_PoleA_32

AedesLux_Script_Puzzle3R_PoleA_34:
# 2001 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleA_33
	goto AedesLux_Script_Puzzle3R_PoleA_32

AedesLux_Script_Puzzle3R_PoleA_35:
# 2001 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleA_34
	goto AedesLux_Script_Puzzle3R_PoleA_32

AedesLux_Script_Puzzle3R_PoleA_39:
# 2005 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle3R_PoleA_21

AedesLux_Script_Puzzle3R_PoleA_40:
# 2004 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle3R_PoleA_39
	goto AedesLux_Script_Puzzle3R_PoleA_21

AedesLux_Script_Puzzle3R_PoleA_41:
# 2004 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleA_40
	goto AedesLux_Script_Puzzle3R_PoleA_21


AedesLux_Script_Puzzle3R_PoleB::
# 2018 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleB_2
AedesLux_Script_Puzzle3R_PoleB_1:
# 2022 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleB_5
# 2025 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleB_4:
# 2027 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2029 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleB_9
AedesLux_Script_Puzzle3R_PoleB_8:
# 2067 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleB_2:
# 2019 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleB_1

AedesLux_Script_Puzzle3R_PoleB_5:
# 2023 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleB_4

AedesLux_Script_Puzzle3R_PoleB_9:
# 2031 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2032 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleB_13
AedesLux_Script_Puzzle3R_PoleB_11:
# 2035 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleB_18
AedesLux_Script_Puzzle3R_PoleB_16:
# 2038 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleB_23
AedesLux_Script_Puzzle3R_PoleB_21:
# 2043 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleB_29
AedesLux_Script_Puzzle3R_PoleB_28:
# 2047 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleB_37
AedesLux_Script_Puzzle3R_PoleB_36:
# 2051 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 2053 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleB_41
AedesLux_Script_Puzzle3R_PoleB_39:
# 2056 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleB_46
AedesLux_Script_Puzzle3R_PoleB_44:
# 2059 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleB_51
AedesLux_Script_Puzzle3R_PoleB_26:
# 2064 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleB_8

AedesLux_Script_Puzzle3R_PoleB_12:
# 2033 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleB_11

AedesLux_Script_Puzzle3R_PoleB_13:
# 2032 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleB_12
	goto AedesLux_Script_Puzzle3R_PoleB_11

AedesLux_Script_Puzzle3R_PoleB_17:
# 2036 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleB_16

AedesLux_Script_Puzzle3R_PoleB_18:
# 2035 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleB_17
	goto AedesLux_Script_Puzzle3R_PoleB_16

AedesLux_Script_Puzzle3R_PoleB_22:
# 2039 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleB_21

AedesLux_Script_Puzzle3R_PoleB_23:
# 2038 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleB_22
	goto AedesLux_Script_Puzzle3R_PoleB_21

AedesLux_Script_Puzzle3R_PoleB_27:
# 2044 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle3R_PoleB_26

AedesLux_Script_Puzzle3R_PoleB_29:
# 2043 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleB_27
# 2043 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleB_27
# 2043 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleB_27
	goto AedesLux_Script_Puzzle3R_PoleB_28

AedesLux_Script_Puzzle3R_PoleB_37:
# 2048 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleB_36

AedesLux_Script_Puzzle3R_PoleB_40:
# 2054 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle3R_PoleB_39

AedesLux_Script_Puzzle3R_PoleB_41:
# 2053 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleB_40
	goto AedesLux_Script_Puzzle3R_PoleB_39

AedesLux_Script_Puzzle3R_PoleB_45:
# 2057 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle3R_PoleB_44

AedesLux_Script_Puzzle3R_PoleB_46:
# 2056 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleB_45
	goto AedesLux_Script_Puzzle3R_PoleB_44

AedesLux_Script_Puzzle3R_PoleB_49:
# 2060 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle3R_PoleB_26

AedesLux_Script_Puzzle3R_PoleB_50:
# 2059 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleB_49
	goto AedesLux_Script_Puzzle3R_PoleB_26

AedesLux_Script_Puzzle3R_PoleB_51:
# 2059 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleB_50
	goto AedesLux_Script_Puzzle3R_PoleB_26


AedesLux_Script_Puzzle3R_PoleC::
# 2073 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleC_2
AedesLux_Script_Puzzle3R_PoleC_1:
# 2077 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleC_5
# 2080 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleC_4:
# 2082 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2084 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleC_9
AedesLux_Script_Puzzle3R_PoleC_8:
# 2116 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleC_2:
# 2074 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleC_1

AedesLux_Script_Puzzle3R_PoleC_5:
# 2078 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleC_4

AedesLux_Script_Puzzle3R_PoleC_9:
# 2086 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2087 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleC_13
AedesLux_Script_Puzzle3R_PoleC_11:
# 2090 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleC_18
AedesLux_Script_Puzzle3R_PoleC_16:
# 2095 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleC_24
AedesLux_Script_Puzzle3R_PoleC_23:
# 2099 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleC_30
AedesLux_Script_Puzzle3R_PoleC_29:
# 2103 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 2105 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleC_35
AedesLux_Script_Puzzle3R_PoleC_32:
# 2108 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleC_41
AedesLux_Script_Puzzle3R_PoleC_21:
# 2113 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleC_8

AedesLux_Script_Puzzle3R_PoleC_12:
# 2088 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleC_11

AedesLux_Script_Puzzle3R_PoleC_13:
# 2087 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleC_12
	goto AedesLux_Script_Puzzle3R_PoleC_11

AedesLux_Script_Puzzle3R_PoleC_17:
# 2091 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleC_16

AedesLux_Script_Puzzle3R_PoleC_18:
# 2090 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleC_17
	goto AedesLux_Script_Puzzle3R_PoleC_16

AedesLux_Script_Puzzle3R_PoleC_22:
# 2096 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle3R_PoleC_21

AedesLux_Script_Puzzle3R_PoleC_24:
# 2095 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleC_22
# 2095 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleC_22
	goto AedesLux_Script_Puzzle3R_PoleC_23

AedesLux_Script_Puzzle3R_PoleC_30:
# 2100 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleC_29

AedesLux_Script_Puzzle3R_PoleC_33:
# 2106 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle3R_PoleC_32

AedesLux_Script_Puzzle3R_PoleC_34:
# 2105 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleC_33
	goto AedesLux_Script_Puzzle3R_PoleC_32

AedesLux_Script_Puzzle3R_PoleC_35:
# 2105 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleC_34
	goto AedesLux_Script_Puzzle3R_PoleC_32

AedesLux_Script_Puzzle3R_PoleC_39:
# 2109 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle3R_PoleC_21

AedesLux_Script_Puzzle3R_PoleC_40:
# 2108 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleC_39
	goto AedesLux_Script_Puzzle3R_PoleC_21

AedesLux_Script_Puzzle3R_PoleC_41:
# 2108 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleC_40
	goto AedesLux_Script_Puzzle3R_PoleC_21


AedesLux_Script_Puzzle3R_PoleD::
# 2122 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleD_2
AedesLux_Script_Puzzle3R_PoleD_1:
# 2126 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleD_5
# 2129 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleD_4:
# 2131 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2133 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleD_9
AedesLux_Script_Puzzle3R_PoleD_8:
# 2170 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleD_2:
# 2123 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleD_1

AedesLux_Script_Puzzle3R_PoleD_5:
# 2127 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleD_4

AedesLux_Script_Puzzle3R_PoleD_9:
# 2135 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2136 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleD_13
AedesLux_Script_Puzzle3R_PoleD_11:
# 2139 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleD_18
AedesLux_Script_Puzzle3R_PoleD_16:
# 2142 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleD_23
AedesLux_Script_Puzzle3R_PoleD_21:
# 2147 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleD_29
AedesLux_Script_Puzzle3R_PoleD_28:
# 2151 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleD_37
AedesLux_Script_Puzzle3R_PoleD_36:
# 2155 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 2157 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleD_41
AedesLux_Script_Puzzle3R_PoleD_39:
# 2160 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleD_47
AedesLux_Script_Puzzle3R_PoleD_44:
# 2164 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
AedesLux_Script_Puzzle3R_PoleD_26:
# 2167 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleD_8

AedesLux_Script_Puzzle3R_PoleD_12:
# 2137 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleD_11

AedesLux_Script_Puzzle3R_PoleD_13:
# 2136 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleD_12
	goto AedesLux_Script_Puzzle3R_PoleD_11

AedesLux_Script_Puzzle3R_PoleD_17:
# 2140 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleD_16

AedesLux_Script_Puzzle3R_PoleD_18:
# 2139 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleD_17
	goto AedesLux_Script_Puzzle3R_PoleD_16

AedesLux_Script_Puzzle3R_PoleD_22:
# 2143 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleD_21

AedesLux_Script_Puzzle3R_PoleD_23:
# 2142 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle3R_PoleD_22
	goto AedesLux_Script_Puzzle3R_PoleD_21

AedesLux_Script_Puzzle3R_PoleD_27:
# 2148 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle3R_PoleD_26

AedesLux_Script_Puzzle3R_PoleD_29:
# 2147 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleD_27
# 2147 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleD_27
# 2147 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle3R_PoleD_27
	goto AedesLux_Script_Puzzle3R_PoleD_28

AedesLux_Script_Puzzle3R_PoleD_37:
# 2152 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleD_36

AedesLux_Script_Puzzle3R_PoleD_40:
# 2158 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle3R_PoleD_39

AedesLux_Script_Puzzle3R_PoleD_41:
# 2157 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleD_40
	goto AedesLux_Script_Puzzle3R_PoleD_39

AedesLux_Script_Puzzle3R_PoleD_45:
# 2161 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle3R_PoleD_44

AedesLux_Script_Puzzle3R_PoleD_46:
# 2160 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleD_45
	goto AedesLux_Script_Puzzle3R_PoleD_44

AedesLux_Script_Puzzle3R_PoleD_47:
# 2160 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleD_46
	goto AedesLux_Script_Puzzle3R_PoleD_44


AedesLux_Script_Puzzle3R_PoleE::
# 2176 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleE_2
AedesLux_Script_Puzzle3R_PoleE_1:
# 2180 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleE_5
# 2183 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleE_4:
# 2185 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2187 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleE_9
AedesLux_Script_Puzzle3R_PoleE_8:
# 2225 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleE_2:
# 2177 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleE_1

AedesLux_Script_Puzzle3R_PoleE_5:
# 2181 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleE_4

AedesLux_Script_Puzzle3R_PoleE_9:
# 2189 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2190 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleE_13
AedesLux_Script_Puzzle3R_PoleE_11:
# 2193 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleE_18
AedesLux_Script_Puzzle3R_PoleE_16:
# 2196 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleE_23
AedesLux_Script_Puzzle3R_PoleE_21:
# 2201 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleE_29
AedesLux_Script_Puzzle3R_PoleE_28:
# 2205 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleE_37
AedesLux_Script_Puzzle3R_PoleE_36:
# 2209 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 2211 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleE_42
AedesLux_Script_Puzzle3R_PoleE_39:
# 2214 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleE_49
AedesLux_Script_Puzzle3R_PoleE_46:
# 2217 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleE_55
AedesLux_Script_Puzzle3R_PoleE_26:
# 2222 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleE_8

AedesLux_Script_Puzzle3R_PoleE_12:
# 2191 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleE_11

AedesLux_Script_Puzzle3R_PoleE_13:
# 2190 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleE_12
	goto AedesLux_Script_Puzzle3R_PoleE_11

AedesLux_Script_Puzzle3R_PoleE_17:
# 2194 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleE_16

AedesLux_Script_Puzzle3R_PoleE_18:
# 2193 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleE_17
	goto AedesLux_Script_Puzzle3R_PoleE_16

AedesLux_Script_Puzzle3R_PoleE_22:
# 2197 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleE_21

AedesLux_Script_Puzzle3R_PoleE_23:
# 2196 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleE_22
	goto AedesLux_Script_Puzzle3R_PoleE_21

AedesLux_Script_Puzzle3R_PoleE_27:
# 2202 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle3R_PoleE_26

AedesLux_Script_Puzzle3R_PoleE_29:
# 2201 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleE_27
# 2201 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleE_27
# 2201 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleE_27
	goto AedesLux_Script_Puzzle3R_PoleE_28

AedesLux_Script_Puzzle3R_PoleE_37:
# 2206 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleE_36

AedesLux_Script_Puzzle3R_PoleE_40:
# 2212 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle3R_PoleE_39

AedesLux_Script_Puzzle3R_PoleE_41:
# 2211 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle3R_PoleE_40
	goto AedesLux_Script_Puzzle3R_PoleE_39

AedesLux_Script_Puzzle3R_PoleE_42:
# 2211 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleE_41
	goto AedesLux_Script_Puzzle3R_PoleE_39

AedesLux_Script_Puzzle3R_PoleE_47:
# 2215 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle3R_PoleE_46

AedesLux_Script_Puzzle3R_PoleE_48:
# 2214 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleE_47
	goto AedesLux_Script_Puzzle3R_PoleE_46

AedesLux_Script_Puzzle3R_PoleE_49:
# 2214 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleE_48
	goto AedesLux_Script_Puzzle3R_PoleE_46

AedesLux_Script_Puzzle3R_PoleE_53:
# 2218 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle3R_PoleE_26

AedesLux_Script_Puzzle3R_PoleE_54:
# 2217 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleE_53
	goto AedesLux_Script_Puzzle3R_PoleE_26

AedesLux_Script_Puzzle3R_PoleE_55:
# 2217 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleE_54
	goto AedesLux_Script_Puzzle3R_PoleE_26


AedesLux_Script_Puzzle3R_PoleF::
# 2231 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleF_2
AedesLux_Script_Puzzle3R_PoleF_1:
# 2235 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleF_5
# 2238 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleF_4:
# 2240 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2242 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleF_9
AedesLux_Script_Puzzle3R_PoleF_8:
# 2280 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleF_2:
# 2232 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleF_1

AedesLux_Script_Puzzle3R_PoleF_5:
# 2236 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleF_4

AedesLux_Script_Puzzle3R_PoleF_9:
# 2244 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2245 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleF_13
AedesLux_Script_Puzzle3R_PoleF_11:
# 2248 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleF_18
AedesLux_Script_Puzzle3R_PoleF_16:
# 2251 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleF_23
AedesLux_Script_Puzzle3R_PoleF_21:
# 2256 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleF_29
AedesLux_Script_Puzzle3R_PoleF_28:
# 2260 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleF_37
AedesLux_Script_Puzzle3R_PoleF_36:
# 2264 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 2266 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleF_41
AedesLux_Script_Puzzle3R_PoleF_39:
# 2269 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleF_47
AedesLux_Script_Puzzle3R_PoleF_44:
# 2272 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleF_52
AedesLux_Script_Puzzle3R_PoleF_26:
# 2277 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleF_8

AedesLux_Script_Puzzle3R_PoleF_12:
# 2246 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleF_11

AedesLux_Script_Puzzle3R_PoleF_13:
# 2245 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleF_12
	goto AedesLux_Script_Puzzle3R_PoleF_11

AedesLux_Script_Puzzle3R_PoleF_17:
# 2249 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleF_16

AedesLux_Script_Puzzle3R_PoleF_18:
# 2248 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleF_17
	goto AedesLux_Script_Puzzle3R_PoleF_16

AedesLux_Script_Puzzle3R_PoleF_22:
# 2252 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleF_21

AedesLux_Script_Puzzle3R_PoleF_23:
# 2251 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleF_22
	goto AedesLux_Script_Puzzle3R_PoleF_21

AedesLux_Script_Puzzle3R_PoleF_27:
# 2257 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle3R_PoleF_26

AedesLux_Script_Puzzle3R_PoleF_29:
# 2256 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleF_27
# 2256 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleF_27
# 2256 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleF_27
	goto AedesLux_Script_Puzzle3R_PoleF_28

AedesLux_Script_Puzzle3R_PoleF_37:
# 2261 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleF_36

AedesLux_Script_Puzzle3R_PoleF_40:
# 2267 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle3R_PoleF_39

AedesLux_Script_Puzzle3R_PoleF_41:
# 2266 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleF_40
	goto AedesLux_Script_Puzzle3R_PoleF_39

AedesLux_Script_Puzzle3R_PoleF_45:
# 2270 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle3R_PoleF_44

AedesLux_Script_Puzzle3R_PoleF_46:
# 2269 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleF_45
	goto AedesLux_Script_Puzzle3R_PoleF_44

AedesLux_Script_Puzzle3R_PoleF_47:
# 2269 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleF_46
	goto AedesLux_Script_Puzzle3R_PoleF_44

AedesLux_Script_Puzzle3R_PoleF_51:
# 2273 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle3R_PoleF_26

AedesLux_Script_Puzzle3R_PoleF_52:
# 2272 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_12, AedesLux_Script_Puzzle3R_PoleF_51
	goto AedesLux_Script_Puzzle3R_PoleF_26


AedesLux_Script_Puzzle3R_Pole10::
# 2286 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_Pole10_2
AedesLux_Script_Puzzle3R_Pole10_1:
# 2290 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole10_5
# 2293 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_Pole10_4:
# 2295 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2297 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_Pole10_9
AedesLux_Script_Puzzle3R_Pole10_8:
# 2328 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_Pole10_2:
# 2287 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_Pole10_1

AedesLux_Script_Puzzle3R_Pole10_5:
# 2291 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_Pole10_4

AedesLux_Script_Puzzle3R_Pole10_9:
# 2299 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2300 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_Pole10_13
AedesLux_Script_Puzzle3R_Pole10_11:
# 2303 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_Pole10_18
AedesLux_Script_Puzzle3R_Pole10_16:
# 2308 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole10_24
AedesLux_Script_Puzzle3R_Pole10_23:
# 2312 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole10_30
AedesLux_Script_Puzzle3R_Pole10_29:
# 2316 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 2318 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_Pole10_35
AedesLux_Script_Puzzle3R_Pole10_32:
# 2322 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
AedesLux_Script_Puzzle3R_Pole10_21:
# 2325 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_Pole10_8

AedesLux_Script_Puzzle3R_Pole10_12:
# 2301 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_Pole10_11

AedesLux_Script_Puzzle3R_Pole10_13:
# 2300 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_Pole10_12
	goto AedesLux_Script_Puzzle3R_Pole10_11

AedesLux_Script_Puzzle3R_Pole10_17:
# 2304 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_Pole10_16

AedesLux_Script_Puzzle3R_Pole10_18:
# 2303 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole10_17
	goto AedesLux_Script_Puzzle3R_Pole10_16

AedesLux_Script_Puzzle3R_Pole10_22:
# 2309 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle3R_Pole10_21

AedesLux_Script_Puzzle3R_Pole10_24:
# 2308 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_Pole10_22
# 2308 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole10_22
	goto AedesLux_Script_Puzzle3R_Pole10_23

AedesLux_Script_Puzzle3R_Pole10_30:
# 2313 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_Pole10_29

AedesLux_Script_Puzzle3R_Pole10_33:
# 2319 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle3R_Pole10_32

AedesLux_Script_Puzzle3R_Pole10_34:
# 2318 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_Pole10_33
	goto AedesLux_Script_Puzzle3R_Pole10_32

AedesLux_Script_Puzzle3R_Pole10_35:
# 2318 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_Pole10_34
	goto AedesLux_Script_Puzzle3R_Pole10_32


AedesLux_Script_Puzzle3R_Pole11::
# 2334 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_Pole11_2
AedesLux_Script_Puzzle3R_Pole11_1:
# 2338 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle3R_Pole11_5
# 2341 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_Pole11_4:
# 2343 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2345 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_Pole11_9
AedesLux_Script_Puzzle3R_Pole11_8:
# 2371 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_Pole11_2:
# 2335 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_Pole11_1

AedesLux_Script_Puzzle3R_Pole11_5:
# 2339 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_Pole11_4

AedesLux_Script_Puzzle3R_Pole11_9:
# 2347 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2348 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_Pole11_13
AedesLux_Script_Puzzle3R_Pole11_11:
# 2353 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle3R_Pole11_19
AedesLux_Script_Puzzle3R_Pole11_18:
# 2357 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle3R_Pole11_23
AedesLux_Script_Puzzle3R_Pole11_22:
# 2361 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 2363 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_Pole11_27
AedesLux_Script_Puzzle3R_Pole11_16:
# 2368 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_Pole11_8

AedesLux_Script_Puzzle3R_Pole11_12:
# 2349 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_Pole11_11

AedesLux_Script_Puzzle3R_Pole11_13:
# 2348 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_Pole11_12
	goto AedesLux_Script_Puzzle3R_Pole11_11

AedesLux_Script_Puzzle3R_Pole11_17:
# 2354 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle3R_Pole11_16

AedesLux_Script_Puzzle3R_Pole11_19:
# 2353 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_Pole11_17
	goto AedesLux_Script_Puzzle3R_Pole11_18

AedesLux_Script_Puzzle3R_Pole11_23:
# 2358 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_Pole11_22

AedesLux_Script_Puzzle3R_Pole11_25:
# 2364 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle3R_Pole11_16

AedesLux_Script_Puzzle3R_Pole11_26:
# 2363 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_Pole11_25
	goto AedesLux_Script_Puzzle3R_Pole11_16

AedesLux_Script_Puzzle3R_Pole11_27:
# 2363 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_Pole11_26
	goto AedesLux_Script_Puzzle3R_Pole11_16


AedesLux_Script_Puzzle3R_Pole12::
# 2377 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_Pole12_2
AedesLux_Script_Puzzle3R_Pole12_1:
# 2381 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole12_5
# 2384 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_Pole12_4:
# 2386 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2388 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_Pole12_9
AedesLux_Script_Puzzle3R_Pole12_8:
# 2414 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_Pole12_2:
# 2378 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_Pole12_1

AedesLux_Script_Puzzle3R_Pole12_5:
# 2382 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_Pole12_4

AedesLux_Script_Puzzle3R_Pole12_9:
# 2390 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2391 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_Pole12_13
AedesLux_Script_Puzzle3R_Pole12_11:
# 2396 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole12_19
AedesLux_Script_Puzzle3R_Pole12_18:
# 2400 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole12_23
AedesLux_Script_Puzzle3R_Pole12_22:
# 2404 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
# 2406 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole12_26
AedesLux_Script_Puzzle3R_Pole12_16:
# 2411 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_Pole12_8

AedesLux_Script_Puzzle3R_Pole12_12:
# 2392 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_Pole12_11

AedesLux_Script_Puzzle3R_Pole12_13:
# 2391 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole12_12
	goto AedesLux_Script_Puzzle3R_Pole12_11

AedesLux_Script_Puzzle3R_Pole12_17:
# 2397 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_12
	goto AedesLux_Script_Puzzle3R_Pole12_16

AedesLux_Script_Puzzle3R_Pole12_19:
# 2396 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole12_17
	goto AedesLux_Script_Puzzle3R_Pole12_18

AedesLux_Script_Puzzle3R_Pole12_23:
# 2401 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_Pole12_22

AedesLux_Script_Puzzle3R_Pole12_25:
# 2407 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle3R_Pole12_16

AedesLux_Script_Puzzle3R_Pole12_26:
# 2406 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_Pole12_25
	goto AedesLux_Script_Puzzle3R_Pole12_16


AedesLux_Script_ResetPuzzle1::
# 2422 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2423 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle1_1
# 2437 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle1_1:
# 2425 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_ResetPuzzle1_4
# 2430 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2431 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2432 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2433 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle1Flags
# 2434 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	return

AedesLux_Script_ResetPuzzle1_4:
# 2426 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2427 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle1L::
# 2443 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2444 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle1L_1
# 2462 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle1L_1:
# 2446 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_ResetPuzzle1L_4
# 2451 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2452 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2453 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2454 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 2455 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 2456 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 2457 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 2458 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 2459 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	return

AedesLux_Script_ResetPuzzle1L_4:
# 2447 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2448 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle1R::
# 2468 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2469 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle1R_1
# 2487 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle1R_1:
# 2471 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_ResetPuzzle1R_4
# 2476 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2477 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2478 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2479 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 2480 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 2481 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 2482 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
# 2483 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
# 2484 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	return

AedesLux_Script_ResetPuzzle1R_4:
# 2472 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2473 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle2::
# 2493 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2494 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle2_1
# 2508 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle2_1:
# 2496 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_ResetPuzzle2_4
# 2501 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2502 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2503 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2504 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle2Flags
# 2505 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	return

AedesLux_Script_ResetPuzzle2_4:
# 2497 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2498 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle2L::
# 2514 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2515 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle2L_1
# 2535 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle2L_1:
# 2517 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_ResetPuzzle2L_4
# 2522 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2523 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2524 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2525 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 2526 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 2527 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 2528 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 2529 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 2530 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 2531 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 2532 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	return

AedesLux_Script_ResetPuzzle2L_4:
# 2518 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2519 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle2R::
# 2541 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2542 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle2R_1
# 2565 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle2R_1:
# 2544 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_ResetPuzzle2R_4
# 2549 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2550 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2551 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2552 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 2553 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 2554 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 2555 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 2556 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 2557 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 2558 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 2559 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
# 2560 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 2561 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
# 2562 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	return

AedesLux_Script_ResetPuzzle2R_4:
# 2545 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2546 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle3L::
# 2571 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2572 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle3L_1
# 2586 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle3L_1:
# 2574 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_ResetPuzzle3L_4
# 2579 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2580 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2581 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2582 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3LFlags
# 2583 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3
	return

AedesLux_Script_ResetPuzzle3L_4:
# 2575 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2576 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle3R::
# 2592 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2593 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle3R_1
# 2607 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle3R_1:
# 2595 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_ResetPuzzle3R_4
# 2600 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2601 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2602 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2603 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3RFlags
# 2604 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3
	return

AedesLux_Script_ResetPuzzle3R_4:
# 2596 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2597 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_UpdatePuzzle::
# 2614 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2615 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2617 "data/maps/AedesLux_1F/scripts.pory"
	switch VAR_TEMP_A
# 2619 "data/maps/AedesLux_1F/scripts.pory"
	case 0, AedesLux_Script_UpdatePuzzle_3
# 2621 "data/maps/AedesLux_1F/scripts.pory"
	case 1, AedesLux_Script_UpdatePuzzle_4
# 2623 "data/maps/AedesLux_1F/scripts.pory"
	case 2, AedesLux_Script_UpdatePuzzle_5
# 2625 "data/maps/AedesLux_1F/scripts.pory"
	case 3, AedesLux_Script_UpdatePuzzle_6
# 2630 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_UpdatePuzzle_Text_1
# 2631 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_UpdatePuzzle_1:
	return

AedesLux_Script_UpdatePuzzle_3:
# 2620 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_4:
# 2622 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_5:
# 2624 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_6:
# 2626 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_UpdatePuzzle_Text_0
# 2627 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_DrawPuzzle1::
# 2641 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle1
# 2642 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1L
# 2643 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1R
# 2645 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle2::
# 2651 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle2
# 2652 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2L
# 2653 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2R
# 2655 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle3::
# 2661 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle3
# 2662 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3L
# 2663 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3R
# 2665 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle1L::
# 2671 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_4
AedesLux_Script_DrawPuzzle1L_3:
# 2677 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall, TRUE
# 2678 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol, TRUE
# 2679 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2680 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_1:
# 2683 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_10
AedesLux_Script_DrawPuzzle1L_9:
# 2688 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 2689 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor, FALSE
# 2690 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_7:
# 2693 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_16
AedesLux_Script_DrawPuzzle1L_15:
# 2699 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall, TRUE
# 2700 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall, TRUE
# 2701 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2702 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_13:
# 2705 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_22
AedesLux_Script_DrawPuzzle1L_21:
# 2710 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_Floor_Pole, TRUE
# 2711 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor, FALSE
# 2712 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_19:
	return

AedesLux_Script_DrawPuzzle1L_2:
# 2672 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2673 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol_Electric_TopRight, TRUE
# 2674 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2675 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_1

AedesLux_Script_DrawPuzzle1L_4:
# 2671 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_2
	goto AedesLux_Script_DrawPuzzle1L_3

AedesLux_Script_DrawPuzzle1L_8:
# 2684 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 2685 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2686 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_7

AedesLux_Script_DrawPuzzle1L_10:
# 2683 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_8
	goto AedesLux_Script_DrawPuzzle1L_9

AedesLux_Script_DrawPuzzle1L_14:
# 2694 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2695 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 2696 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2697 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_13

AedesLux_Script_DrawPuzzle1L_16:
# 2693 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle1L_14
	goto AedesLux_Script_DrawPuzzle1L_15

AedesLux_Script_DrawPuzzle1L_20:
# 2706 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 2707 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2708 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_19

AedesLux_Script_DrawPuzzle1L_22:
# 2705 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle1L_20
	goto AedesLux_Script_DrawPuzzle1L_21


AedesLux_Script_DrawPuzzle1R::
# 2719 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle1R_4
AedesLux_Script_DrawPuzzle1R_3:
# 2724 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 42, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 2725 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 43, METATILE_MauvilleGym_Floor, FALSE
# 2726 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 44, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1R_1:
# 2729 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle1R_10
AedesLux_Script_DrawPuzzle1R_9:
# 2734 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 45, METATILE_MauvilleGym_Floor_Pole, TRUE
# 2735 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 46, METATILE_MauvilleGym_Floor, FALSE
# 2736 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 47, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1R_7:
# 2739 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle1R_16
AedesLux_Script_DrawPuzzle1R_15:
# 2745 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 47, METATILE_MauvilleGym_Floor, FALSE
# 2746 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 47, METATILE_MauvilleGym_Floor, FALSE
# 2747 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 48, METATILE_MauvilleGym_Floor, FALSE
# 2748 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 48, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle1R_13:
# 2751 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle1R_22
AedesLux_Script_DrawPuzzle1R_21:
# 2757 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 47, METATILE_MauvilleGym_Floor, FALSE
# 2758 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 47, METATILE_MauvilleGym_Floor, FALSE
# 2759 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 48, METATILE_MauvilleGym_Floor, FALSE
# 2760 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 48, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle1R_19:
	return

AedesLux_Script_DrawPuzzle1R_2:
# 2720 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 42, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 2721 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 43, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2722 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 44, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1R_1

AedesLux_Script_DrawPuzzle1R_4:
# 2719 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle1R_2
	goto AedesLux_Script_DrawPuzzle1R_3

AedesLux_Script_DrawPuzzle1R_8:
# 2730 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 45, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 2731 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 46, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2732 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 47, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1R_7

AedesLux_Script_DrawPuzzle1R_10:
# 2729 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle1R_8
	goto AedesLux_Script_DrawPuzzle1R_9

AedesLux_Script_DrawPuzzle1R_14:
# 2740 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 47, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 2741 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 47, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 2742 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 48, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 2743 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 48, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1R_13

AedesLux_Script_DrawPuzzle1R_16:
# 2739 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle1R_14
	goto AedesLux_Script_DrawPuzzle1R_15

AedesLux_Script_DrawPuzzle1R_20:
# 2752 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 47, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 2753 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 47, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 2754 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 48, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 2755 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 48, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1R_19

AedesLux_Script_DrawPuzzle1R_22:
# 2751 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle1R_20
	goto AedesLux_Script_DrawPuzzle1R_21


AedesLux_Script_DrawPuzzle2L::
# 2768 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle2L_4
AedesLux_Script_DrawPuzzle2L_3:
# 2774 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 30, METATILE_MauvilleGym_Wall, TRUE
# 2775 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 30, METATILE_MauvilleGym_Wall, TRUE
# 2776 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2777 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2L_1:
# 2780 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle2L_10
AedesLux_Script_DrawPuzzle2L_9:
# 2786 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 30, METATILE_MauvilleGym_Wall, TRUE
# 2787 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 30, METATILE_MauvilleGym_Wall, TRUE
# 2788 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2789 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2L_7:
# 2792 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle2L_16
AedesLux_Script_DrawPuzzle2L_15:
# 2797 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 2798 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 32, METATILE_MauvilleGym_Floor, FALSE
# 2799 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 33, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_13:
# 2802 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle2L_22
AedesLux_Script_DrawPuzzle2L_21:
# 2808 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 33, METATILE_MauvilleGym_Floor, FALSE
# 2809 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 33, METATILE_MauvilleGym_Floor, FALSE
# 2810 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 34, METATILE_MauvilleGym_Floor, FALSE
# 2811 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 34, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2L_19:
# 2814 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle2L_28
AedesLux_Script_DrawPuzzle2L_27:
# 2819 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 34, METATILE_MauvilleGym_FloorLeftShadow_Pole, TRUE
# 2820 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 35, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 2821 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 36, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_25:
# 2824 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_34
AedesLux_Script_DrawPuzzle2L_33:
# 2829 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 34, METATILE_MauvilleGym_Floor_Pole, TRUE
# 2830 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 35, METATILE_MauvilleGym_Floor, FALSE
# 2831 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 36, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_31:
# 2834 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle2L_40
AedesLux_Script_DrawPuzzle2L_39:
# 2840 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 36, METATILE_MauvilleGym_Floor, FALSE
# 2841 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 36, METATILE_MauvilleGym_Floor, FALSE
# 2842 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 37, METATILE_MauvilleGym_Floor, FALSE
# 2843 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2L_37:
	return

AedesLux_Script_DrawPuzzle2L_2:
# 2769 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2770 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 2771 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2772 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_1

AedesLux_Script_DrawPuzzle2L_4:
# 2768 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle2L_2
	goto AedesLux_Script_DrawPuzzle2L_3

AedesLux_Script_DrawPuzzle2L_8:
# 2781 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2782 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 2783 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2784 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_7

AedesLux_Script_DrawPuzzle2L_10:
# 2780 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle2L_8
	goto AedesLux_Script_DrawPuzzle2L_9

AedesLux_Script_DrawPuzzle2L_14:
# 2793 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 2794 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 32, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2795 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 33, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_13

AedesLux_Script_DrawPuzzle2L_16:
# 2792 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_14
	goto AedesLux_Script_DrawPuzzle2L_15

AedesLux_Script_DrawPuzzle2L_20:
# 2803 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 33, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 2804 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 33, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 2805 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 34, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 2806 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 34, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_19

AedesLux_Script_DrawPuzzle2L_22:
# 2802 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_20
	goto AedesLux_Script_DrawPuzzle2L_21

AedesLux_Script_DrawPuzzle2L_26:
# 2815 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 34, METATILE_MauvilleGym_FloorLeftShadow_Pole_Electric, TRUE
# 2816 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 35, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 2817 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 36, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_25

AedesLux_Script_DrawPuzzle2L_28:
# 2814 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle2L_26
	goto AedesLux_Script_DrawPuzzle2L_27

AedesLux_Script_DrawPuzzle2L_32:
# 2825 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 34, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 2826 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 35, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2827 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 36, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_31

AedesLux_Script_DrawPuzzle2L_34:
# 2824 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle2L_32
	goto AedesLux_Script_DrawPuzzle2L_33

AedesLux_Script_DrawPuzzle2L_38:
# 2835 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 2836 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 36, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 2837 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 2838 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_37

AedesLux_Script_DrawPuzzle2L_40:
# 2834 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle2L_38
	goto AedesLux_Script_DrawPuzzle2L_39


AedesLux_Script_DrawPuzzle2R::
# 2850 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle2R_4
AedesLux_Script_DrawPuzzle2R_3:
# 2856 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 30, METATILE_MauvilleGym_Wall, TRUE
# 2857 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 30, METATILE_MauvilleGym_Wall, TRUE
# 2858 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2859 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_1:
# 2862 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle2R_10
AedesLux_Script_DrawPuzzle2R_9:
# 2868 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 30, METATILE_MauvilleGym_Wall, TRUE
# 2869 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 30, METATILE_MauvilleGym_Wall, TRUE
# 2870 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2871 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_7:
# 2874 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_16
AedesLux_Script_DrawPuzzle2R_15:
# 2880 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 30, METATILE_MauvilleGym_Wall, TRUE
# 2881 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 30, METATILE_MauvilleGym_WallSymbol, TRUE
# 2882 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2883 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_13:
# 2886 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_22
AedesLux_Script_DrawPuzzle2R_21:
# 2891 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 2892 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 32, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 2893 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 33, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_19:
# 2896 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle2R_28
AedesLux_Script_DrawPuzzle2R_27:
# 2901 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 2902 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 32, METATILE_MauvilleGym_Floor, FALSE
# 2903 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 33, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_25:
# 2906 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_34
AedesLux_Script_DrawPuzzle2R_33:
# 2912 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 33, METATILE_MauvilleGym_Floor, FALSE
# 2913 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 33, METATILE_MauvilleGym_Floor, FALSE
# 2914 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 34, METATILE_MauvilleGym_Floor, FALSE
# 2915 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 34, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_31:
# 2918 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_40
AedesLux_Script_DrawPuzzle2R_39:
# 2923 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 34, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 2924 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 35, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 2925 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 36, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_37:
# 2928 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_46
AedesLux_Script_DrawPuzzle2R_45:
# 2933 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 34, METATILE_MauvilleGym_Floor_Pole, TRUE
# 2934 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 35, METATILE_MauvilleGym_Floor, FALSE
# 2935 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 36, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_43:
# 2938 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_DrawPuzzle2R_52
AedesLux_Script_DrawPuzzle2R_51:
# 2944 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 36, METATILE_MauvilleGym_Floor, FALSE
# 2945 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2946 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 37, METATILE_MauvilleGym_Floor, FALSE
# 2947 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_49:
# 2950 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle2R_58
AedesLux_Script_DrawPuzzle2R_57:
# 2956 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2957 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2958 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 37, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2959 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 37, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_55:
# 2962 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_64
AedesLux_Script_DrawPuzzle2R_63:
# 2968 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 36, METATILE_MauvilleGym_Floor, FALSE
# 2969 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 36, METATILE_MauvilleGym_Floor, FALSE
# 2970 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 37, METATILE_MauvilleGym_Floor, FALSE
# 2971 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_61:
	return

AedesLux_Script_DrawPuzzle2R_2:
# 2851 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2852 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 2853 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2854 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_1

AedesLux_Script_DrawPuzzle2R_4:
# 2850 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle2R_2
	goto AedesLux_Script_DrawPuzzle2R_3

AedesLux_Script_DrawPuzzle2R_8:
# 2863 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2864 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 2865 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2866 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_7

AedesLux_Script_DrawPuzzle2R_10:
# 2862 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_8
	goto AedesLux_Script_DrawPuzzle2R_9

AedesLux_Script_DrawPuzzle2R_14:
# 2875 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2876 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 30, METATILE_MauvilleGym_WallSymbol_Electric_TopRight, TRUE
# 2877 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2878 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_13

AedesLux_Script_DrawPuzzle2R_16:
# 2874 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle2R_14
	goto AedesLux_Script_DrawPuzzle2R_15

AedesLux_Script_DrawPuzzle2R_20:
# 2887 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 2888 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 32, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 2889 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 33, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_19

AedesLux_Script_DrawPuzzle2R_22:
# 2886 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_20
	goto AedesLux_Script_DrawPuzzle2R_21

AedesLux_Script_DrawPuzzle2R_26:
# 2897 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 2898 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 32, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2899 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 33, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_25

AedesLux_Script_DrawPuzzle2R_28:
# 2896 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_26
	goto AedesLux_Script_DrawPuzzle2R_27

AedesLux_Script_DrawPuzzle2R_32:
# 2907 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 33, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 2908 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 33, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 2909 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 34, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 2910 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 34, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_31

AedesLux_Script_DrawPuzzle2R_34:
# 2906 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_32
	goto AedesLux_Script_DrawPuzzle2R_33

AedesLux_Script_DrawPuzzle2R_38:
# 2919 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 34, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 2920 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 35, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 2921 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 36, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_37

AedesLux_Script_DrawPuzzle2R_40:
# 2918 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_38
	goto AedesLux_Script_DrawPuzzle2R_39

AedesLux_Script_DrawPuzzle2R_44:
# 2929 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 34, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 2930 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 35, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2931 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 36, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_43

AedesLux_Script_DrawPuzzle2R_46:
# 2928 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_DrawPuzzle2R_44
	goto AedesLux_Script_DrawPuzzle2R_45

AedesLux_Script_DrawPuzzle2R_50:
# 2939 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 2940 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 2941 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 2942 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_49

AedesLux_Script_DrawPuzzle2R_52:
# 2938 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle2R_50
	goto AedesLux_Script_DrawPuzzle2R_51

AedesLux_Script_DrawPuzzle2R_56:
# 2951 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopLeft, FALSE
# 2952 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 2953 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 37, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2954 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 37, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_55

AedesLux_Script_DrawPuzzle2R_58:
# 2950 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_56
	goto AedesLux_Script_DrawPuzzle2R_57

AedesLux_Script_DrawPuzzle2R_62:
# 2963 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 2964 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 36, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 2965 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 2966 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_61

AedesLux_Script_DrawPuzzle2R_64:
# 2962 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_DrawPuzzle2R_62
	goto AedesLux_Script_DrawPuzzle2R_63


AedesLux_Script_DrawPuzzle3L::
# 2978 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle3L_4
AedesLux_Script_DrawPuzzle3L_3:
# 2984 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 17, METATILE_MauvilleGym_Wall, TRUE
# 2985 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 17, METATILE_MauvilleGym_Wall, TRUE
# 2986 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 18, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2987 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 18, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle3L_1:
# 2990 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle3L_10
AedesLux_Script_DrawPuzzle3L_9:
# 2995 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 18, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 2996 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 19, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 2997 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 20, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3L_7:
# 3000 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle3L_16
AedesLux_Script_DrawPuzzle3L_15:
# 3005 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 21, METATILE_MauvilleGym_FloorLeftShadow_Pole, TRUE
# 3006 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 22, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3007 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 23, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3L_13:
# 3010 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle3L_22
AedesLux_Script_DrawPuzzle3L_21:
# 3015 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 21, METATILE_MauvilleGym_FloorLeftShadow_Pole, TRUE
# 3016 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 22, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3017 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 23, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3L_19:
# 3020 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle3L_28
AedesLux_Script_DrawPuzzle3L_27:
# 3026 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 23, METATILE_MauvilleGym_Floor, FALSE
# 3027 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 23, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3028 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 24, METATILE_MauvilleGym_Floor, FALSE
# 3029 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 24, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3L_25:
# 3032 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle3L_34
AedesLux_Script_DrawPuzzle3L_33:
# 3038 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 23, METATILE_MauvilleGym_Floor, FALSE
# 3039 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 23, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3040 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 24, METATILE_MauvilleGym_Floor, FALSE
# 3041 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 24, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3L_31:
# 3044 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle3L_40
AedesLux_Script_DrawPuzzle3L_39:
# 3049 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 24, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3050 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 25, METATILE_MauvilleGym_Floor, FALSE
# 3051 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 26, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3L_37:
# 3054 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle3L_46
AedesLux_Script_DrawPuzzle3L_45:
# 3060 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 11, 23, METATILE_MauvilleGym_Floor, FALSE
# 3061 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 23, METATILE_MauvilleGym_Floor, FALSE
# 3062 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 11, 24, METATILE_MauvilleGym_Floor, FALSE
# 3063 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 24, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3L_43:
	return

AedesLux_Script_DrawPuzzle3L_2:
# 2979 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 17, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2980 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 17, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 2981 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 18, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2982 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 18, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3L_1

AedesLux_Script_DrawPuzzle3L_4:
# 2978 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle3L_2
	goto AedesLux_Script_DrawPuzzle3L_3

AedesLux_Script_DrawPuzzle3L_8:
# 2991 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 18, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 2992 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 19, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 2993 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 20, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3L_7

AedesLux_Script_DrawPuzzle3L_10:
# 2990 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle3L_8
	goto AedesLux_Script_DrawPuzzle3L_9

AedesLux_Script_DrawPuzzle3L_14:
# 3001 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 21, METATILE_MauvilleGym_FloorLeftShadow_Pole_Electric, TRUE
# 3002 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 22, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3003 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 23, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3L_13

AedesLux_Script_DrawPuzzle3L_16:
# 3000 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle3L_14
	goto AedesLux_Script_DrawPuzzle3L_15

AedesLux_Script_DrawPuzzle3L_20:
# 3011 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 21, METATILE_MauvilleGym_FloorLeftShadow_Pole_Electric, TRUE
# 3012 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 22, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3013 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 23, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3L_19

AedesLux_Script_DrawPuzzle3L_22:
# 3010 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle3L_20
	goto AedesLux_Script_DrawPuzzle3L_21

AedesLux_Script_DrawPuzzle3L_26:
# 3021 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 23, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3022 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 23, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 3023 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 24, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3024 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 24, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3L_25

AedesLux_Script_DrawPuzzle3L_28:
# 3020 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle3L_26
	goto AedesLux_Script_DrawPuzzle3L_27

AedesLux_Script_DrawPuzzle3L_32:
# 3033 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 23, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3034 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 23, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 3035 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 24, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3036 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 24, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3L_31

AedesLux_Script_DrawPuzzle3L_34:
# 3032 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle3L_32
	goto AedesLux_Script_DrawPuzzle3L_33

AedesLux_Script_DrawPuzzle3L_38:
# 3045 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 24, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3046 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 25, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3047 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 26, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3L_37

AedesLux_Script_DrawPuzzle3L_40:
# 3044 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle3L_38
	goto AedesLux_Script_DrawPuzzle3L_39

AedesLux_Script_DrawPuzzle3L_44:
# 3055 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 11, 23, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3056 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 23, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3057 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 11, 24, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3058 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 24, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3L_43

AedesLux_Script_DrawPuzzle3L_46:
# 3054 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle3L_44
	goto AedesLux_Script_DrawPuzzle3L_45


AedesLux_Script_DrawPuzzle3R::
# 3070 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle3R_4
AedesLux_Script_DrawPuzzle3R_3:
# 3076 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 19, METATILE_MauvilleGym_WallCorner, TRUE
# 3077 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 19, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3078 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 20, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3079 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 20, METATILE_MauvilleGym_FloorCornerShadow, FALSE
AedesLux_Script_DrawPuzzle3R_1:
# 3082 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle3R_10
AedesLux_Script_DrawPuzzle3R_9:
# 3087 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 20, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 3088 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 21, METATILE_MauvilleGym_Floor, FALSE
# 3089 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 22, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_7:
# 3092 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle3R_16
AedesLux_Script_DrawPuzzle3R_15:
# 3098 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 19, METATILE_MauvilleGym_Floor, FALSE
# 3099 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 19, METATILE_MauvilleGym_Floor, FALSE
# 3100 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 20, METATILE_MauvilleGym_Floor, FALSE
# 3101 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 20, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3R_13:
# 3104 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle3R_22
AedesLux_Script_DrawPuzzle3R_21:
# 3109 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 20, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3110 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 21, METATILE_MauvilleGym_Floor, FALSE
# 3111 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 22, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_19:
# 3114 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle3R_28
AedesLux_Script_DrawPuzzle3R_27:
# 3119 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 20, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3120 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 21, METATILE_MauvilleGym_Floor, FALSE
# 3121 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 22, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_25:
# 3124 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle3R_34
AedesLux_Script_DrawPuzzle3R_33:
# 3129 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 23, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3130 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 24, METATILE_MauvilleGym_Floor, FALSE
# 3131 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 25, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_31:
# 3134 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle3R_40
AedesLux_Script_DrawPuzzle3R_39:
# 3140 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 22, METATILE_MauvilleGym_Floor, FALSE
# 3141 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 22, METATILE_MauvilleGym_Floor, FALSE
# 3142 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 23, METATILE_MauvilleGym_Floor, FALSE
# 3143 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 23, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3R_37:
# 3146 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_DrawPuzzle3R_46
AedesLux_Script_DrawPuzzle3R_45:
# 3152 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 22, METATILE_MauvilleGym_Floor, FALSE
# 3153 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 22, METATILE_MauvilleGym_Floor, FALSE
# 3154 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 23, METATILE_MauvilleGym_Floor, FALSE
# 3155 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 23, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3R_43:
# 3158 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle3R_52
AedesLux_Script_DrawPuzzle3R_51:
# 3164 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 22, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3165 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 22, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3166 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 23, METATILE_MauvilleGym_Floor, FALSE
# 3167 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 23, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3R_49:
# 3170 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle3R_58
AedesLux_Script_DrawPuzzle3R_57:
# 3175 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 23, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3176 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 24, METATILE_MauvilleGym_Floor, FALSE
# 3177 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 25, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_55:
	return

AedesLux_Script_DrawPuzzle3R_2:
# 3071 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 19, METATILE_MauvilleGym_WallCorner_Electric_TopLeft, TRUE
# 3072 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 19, METATILE_MauvilleGym_FloorLeftShadow_Electric_TopRight, TRUE
# 3073 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 20, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 3074 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 20, METATILE_MauvilleGym_FloorCornerShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_1

AedesLux_Script_DrawPuzzle3R_4:
# 3070 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle3R_2
	goto AedesLux_Script_DrawPuzzle3R_3

AedesLux_Script_DrawPuzzle3R_8:
# 3083 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 20, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 3084 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 21, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3085 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 22, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_7

AedesLux_Script_DrawPuzzle3R_10:
# 3082 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle3R_8
	goto AedesLux_Script_DrawPuzzle3R_9

AedesLux_Script_DrawPuzzle3R_14:
# 3093 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 19, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3094 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 19, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3095 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 20, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3096 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 20, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_13

AedesLux_Script_DrawPuzzle3R_16:
# 3092 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle3R_14
	goto AedesLux_Script_DrawPuzzle3R_15

AedesLux_Script_DrawPuzzle3R_20:
# 3105 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 20, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3106 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 21, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3107 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 22, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_19

AedesLux_Script_DrawPuzzle3R_22:
# 3104 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_DrawPuzzle3R_20
	goto AedesLux_Script_DrawPuzzle3R_21

AedesLux_Script_DrawPuzzle3R_26:
# 3115 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 20, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3116 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 21, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3117 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 22, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_25

AedesLux_Script_DrawPuzzle3R_28:
# 3114 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle3R_26
	goto AedesLux_Script_DrawPuzzle3R_27

AedesLux_Script_DrawPuzzle3R_32:
# 3125 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 23, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3126 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 24, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3127 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 25, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_31

AedesLux_Script_DrawPuzzle3R_34:
# 3124 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_DrawPuzzle3R_32
	goto AedesLux_Script_DrawPuzzle3R_33

AedesLux_Script_DrawPuzzle3R_38:
# 3135 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 22, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3136 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 22, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3137 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 23, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3138 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 23, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_37

AedesLux_Script_DrawPuzzle3R_40:
# 3134 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle3R_38
	goto AedesLux_Script_DrawPuzzle3R_39

AedesLux_Script_DrawPuzzle3R_44:
# 3147 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 22, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3148 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 22, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3149 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 23, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3150 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 23, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_43

AedesLux_Script_DrawPuzzle3R_46:
# 3146 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle3R_44
	goto AedesLux_Script_DrawPuzzle3R_45

AedesLux_Script_DrawPuzzle3R_50:
# 3159 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 22, METATILE_MauvilleGym_FloorTopShadow_Electric_TopLeft, FALSE
# 3160 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 22, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 3161 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 23, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3162 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 23, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_49

AedesLux_Script_DrawPuzzle3R_52:
# 3158 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle3R_50
	goto AedesLux_Script_DrawPuzzle3R_51

AedesLux_Script_DrawPuzzle3R_56:
# 3171 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 23, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3172 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 24, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3173 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 25, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_55

AedesLux_Script_DrawPuzzle3R_58:
# 3170 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_DrawPuzzle3R_56
	goto AedesLux_Script_DrawPuzzle3R_57


AedesLux_Script_CheckSolvePuzzle1::
# 3185 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle1_4
AedesLux_Script_CheckSolvePuzzle1_1:
	return

AedesLux_Script_CheckSolvePuzzle1_2:
# 3196 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_3:
# 3187 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle1_8
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_4:
# 3186 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle1_3
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_7:
# 3189 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle1_12
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_8:
# 3188 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle1_7
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_11:
# 3191 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle1_16
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_12:
# 3190 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle1_11
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_15:
# 3193 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle1_19
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_16:
# 3192 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle1_15
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_19:
# 3194 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle1_2
	goto AedesLux_Script_CheckSolvePuzzle1_1


AedesLux_Script_CheckSolvePuzzle2::
# 3203 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle2_4
AedesLux_Script_CheckSolvePuzzle2_1:
	return

AedesLux_Script_CheckSolvePuzzle2_2:
# 3222 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 2
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_3:
# 3205 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle2_8
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_4:
# 3204 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle2_3
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_7:
# 3207 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle2_12
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_8:
# 3206 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle2_7
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_11:
# 3209 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle2_16
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_12:
# 3208 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle2_11
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_15:
# 3211 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle2_20
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_16:
# 3210 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle2_15
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_19:
# 3213 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_CheckSolvePuzzle2_24
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_20:
# 3212 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle2_19
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_23:
# 3215 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_CheckSolvePuzzle2_28
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_24:
# 3214 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_CheckSolvePuzzle2_23
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_27:
# 3217 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_CheckSolvePuzzle2_32
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_28:
# 3216 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_CheckSolvePuzzle2_27
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_31:
# 3219 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_CheckSolvePuzzle2_2
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_32:
# 3218 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_CheckSolvePuzzle2_31
	goto AedesLux_Script_CheckSolvePuzzle2_1


AedesLux_Script_CheckSolvePuzzle3::
# 3229 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle3_4
AedesLux_Script_CheckSolvePuzzle3_1:
	return

AedesLux_Script_CheckSolvePuzzle3_2:
# 3249 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 3
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_3:
# 3231 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle3_8
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_4:
# 3230 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle3_3
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_7:
# 3233 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle3_12
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_8:
# 3232 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle3_7
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_11:
# 3235 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle3_16
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_12:
# 3234 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle3_11
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_15:
# 3237 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle3_20
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_16:
# 3236 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle3_15
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_19:
# 3239 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_CheckSolvePuzzle3_24
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_20:
# 3238 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle3_19
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_23:
# 3241 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_CheckSolvePuzzle3_28
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_24:
# 3240 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_CheckSolvePuzzle3_23
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_27:
# 3243 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_CheckSolvePuzzle3_32
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_28:
# 3242 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_CheckSolvePuzzle3_27
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_31:
# 3245 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_CheckSolvePuzzle3_35
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_32:
# 3244 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_CheckSolvePuzzle3_31
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_35:
# 3246 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_CheckSolvePuzzle3_2
	goto AedesLux_Script_CheckSolvePuzzle3_1


AedesLux_Script_ClearAllFlags::
# 3255 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 3256 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 3257 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 3258 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 3259 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 3260 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 3261 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 3262 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 3263 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 3264 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 3265 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 3266 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 3267 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 3268 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 3269 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 3270 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 3271 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 3272 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
# 3273 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_13
# 3274 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_14
# 3275 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_15
	return


AedesLux_Script_SolvedPuzzle_Text_0:
# 86 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_B = 0$"

AedesLux_Script_SolvedPuzzle_Text_1:
# 130 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_B OOB$"

AedesLux_Script_UpdatePuzzle_Text_0:
# 2626 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_A = 3$"

AedesLux_Script_UpdatePuzzle_Text_1:
# 2630 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_A OOB$"

AedesLux_Text_NothingHappened::
# 3279 "data/maps/AedesLux_1F/scripts.pory"
	.string "Nothing happened...$"

AedesLux_Text_PoleSwitch::
# 3283 "data/maps/AedesLux_1F/scripts.pory"
	.string "Would you like to flip the switch?$"

AedesLux_Text_PoleOn::
# 3287 "data/maps/AedesLux_1F/scripts.pory"
	.string "The pole is glowing with electricity.$"

AedesLux_Text_PoleOff::
# 3291 "data/maps/AedesLux_1F/scripts.pory"
	.string "The pole seems to be deactivated.$"

AedesLux_Text_PoleDanger::
# 3295 "data/maps/AedesLux_1F/scripts.pory"
	.string "This seems dangerous. Better leave it\n"
	.string "alone for now!$"

AedesLux_Text_PoleCompleted::
# 3299 "data/maps/AedesLux_1F/scripts.pory"
	.string "The switch seems stuck in place.$"
