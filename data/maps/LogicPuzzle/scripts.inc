LogicPuzzle_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LogicPuzzle_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LogicPuzzle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LogicPuzzle_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_LOGIC_CLASS_STATE, 0, LogicPuzzle_EventScript_FacePlayerDown
	.2byte 0

LogicPuzzle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_LOGIC_CLASS_STATE, 0, LogicPuzzle_EventScript_Intro
	.2byte 0


LogicPuzzle_EventScript_FacePlayerDown::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	end


LogicPuzzle_EventScript_Intro::
	lock
	setvar VAR_LOGIC_CLASS_STATE, 69
	msgbox LogicPuzzle_Text_PuzzleIntro
	closemessage
	release
	end


LogicPuzzle_EventScript_Trigger1::
	lockall
	compare VAR_LOGIC_CLASS_STATE, 1
	goto_if_ne LogicPuzzle_EventScript_Trigger1_2
LogicPuzzle_EventScript_Trigger1_1:
	releaseall
	end

LogicPuzzle_EventScript_Trigger1_2:
	call LogicPuzzle_EventScript_SetPuzzle1
	goto LogicPuzzle_EventScript_Trigger1_1


LogicPuzzle_EventScript_Trigger2::
	lockall
	compare VAR_LOGIC_CLASS_STATE, 2
	goto_if_ne LogicPuzzle_EventScript_Trigger2_2
LogicPuzzle_EventScript_Trigger2_1:
	releaseall
	end

LogicPuzzle_EventScript_Trigger2_2:
	call LogicPuzzle_EventScript_SetPuzzle2
	goto LogicPuzzle_EventScript_Trigger2_1


LogicPuzzle_EventScript_Trigger3::
	lockall
	compare VAR_LOGIC_CLASS_STATE, 3
	goto_if_ne LogicPuzzle_EventScript_Trigger3_2
LogicPuzzle_EventScript_Trigger3_1:
	releaseall
	end

LogicPuzzle_EventScript_Trigger3_2:
	call LogicPuzzle_EventScript_SetPuzzle3
	goto LogicPuzzle_EventScript_Trigger3_1


LogicPuzzle_EventScript_Trigger4::
	lockall
	compare VAR_LOGIC_CLASS_STATE, 4
	goto_if_ne LogicPuzzle_EventScript_Trigger4_2
LogicPuzzle_EventScript_Trigger4_1:
	releaseall
	end

LogicPuzzle_EventScript_Trigger4_2:
	call LogicPuzzle_EventScript_SetPuzzle4
	goto LogicPuzzle_EventScript_Trigger4_1


LogicPuzzle_EventScript_Trigger5::
	lockall
	compare VAR_LOGIC_CLASS_STATE, 5
	goto_if_ne LogicPuzzle_EventScript_Trigger5_2
LogicPuzzle_EventScript_Trigger5_1:
	releaseall
	end

LogicPuzzle_EventScript_Trigger5_2:
	call LogicPuzzle_EventScript_SetPuzzle5
	goto LogicPuzzle_EventScript_Trigger5_1


LogicPuzzle_EventScript_Trigger6::
	lockall
	compare VAR_LOGIC_CLASS_STATE, 6
	goto_if_ne LogicPuzzle_EventScript_Trigger6_2
LogicPuzzle_EventScript_Trigger6_1:
	releaseall
	end

LogicPuzzle_EventScript_Trigger6_2:
	call LogicPuzzle_EventScript_SetPuzzle6
	goto LogicPuzzle_EventScript_Trigger6_1


LogicPuzzle_EventScript_Trigger7::
	lockall
	compare VAR_LOGIC_CLASS_STATE, 7
	goto_if_ne LogicPuzzle_EventScript_Trigger7_2
LogicPuzzle_EventScript_Trigger7_1:
	releaseall
	end

LogicPuzzle_EventScript_Trigger7_2:
	call LogicPuzzle_EventScript_SetPuzzle7
	goto LogicPuzzle_EventScript_Trigger7_1


LogicPuzzle_EventScript_Trigger8::
	lockall
	compare VAR_LOGIC_CLASS_STATE, 8
	goto_if_ne LogicPuzzle_EventScript_Trigger8_2
LogicPuzzle_EventScript_Trigger8_1:
	releaseall
	end

LogicPuzzle_EventScript_Trigger8_2:
	call LogicPuzzle_EventScript_SetPuzzle8
	goto LogicPuzzle_EventScript_Trigger8_1


LogicPuzzle_EventScript_Trigger9::
	lockall
	compare VAR_LOGIC_CLASS_STATE, 9
	goto_if_ne LogicPuzzle_EventScript_Trigger9_2
LogicPuzzle_EventScript_Trigger9_1:
	releaseall
	end

LogicPuzzle_EventScript_Trigger9_2:
	call LogicPuzzle_EventScript_SetPuzzle9
	goto LogicPuzzle_EventScript_Trigger9_1


LogicPuzzle_EventScript_Trigger10::
	lockall
	compare VAR_LOGIC_CLASS_STATE, 10
	goto_if_ne LogicPuzzle_EventScript_Trigger10_2
LogicPuzzle_EventScript_Trigger10_1:
	releaseall
	end

LogicPuzzle_EventScript_Trigger10_2:
	call LogicPuzzle_EventScript_SetPuzzle10
	goto LogicPuzzle_EventScript_Trigger10_1


LogicPuzzle_EventScript_Trigger11::
	lockall
	compare VAR_LOGIC_CLASS_STATE, 11
	goto_if_ne LogicPuzzle_EventScript_Trigger11_2
LogicPuzzle_EventScript_Trigger11_1:
	releaseall
	end

LogicPuzzle_EventScript_Trigger11_2:
	call LogicPuzzle_EventScript_SetPuzzle11
	goto LogicPuzzle_EventScript_Trigger11_1


LogicPuzzle_EventScript_Trigger12::
	lockall
	compare VAR_LOGIC_CLASS_STATE, 12
	goto_if_ne LogicPuzzle_EventScript_Trigger12_2
LogicPuzzle_EventScript_Trigger12_1:
	releaseall
	end

LogicPuzzle_EventScript_Trigger12_2:
	call LogicPuzzle_EventScript_SetPuzzle12
	goto LogicPuzzle_EventScript_Trigger12_1


LogicPuzzle_EventScript_SetPuzzle1::
	setvar VAR_LOGIC_CLASS_STATE, 1
	call LogicPuzzle_EventScript_ResetButtons
	setmetatile 1, 3, METATILE_MauvilleGym_PressedSwitch, FALSE
	call LogicPuzzle_EventScript_ClearBlock1
	call LogicPuzzle_EventScript_ClearBlock2
	call LogicPuzzle_EventScript_SetBlock3
	call LogicPuzzle_EventScript_SetBlock4
	call LogicPuzzle_EventScript_SetBlock5
	call LogicPuzzle_EventScript_SetBlock6
	call LogicPuzzle_EventScript_SetBlock7
	call LogicPuzzle_EventScript_SetBlock8
	call LogicPuzzle_EventScript_SetBlock9
	call LogicPuzzle_EventScript_SetBlock10
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	return


LogicPuzzle_EventScript_SetPuzzle2::
	setvar VAR_LOGIC_CLASS_STATE, 2
	call LogicPuzzle_EventScript_ResetButtons
	setmetatile 14, 3, METATILE_MauvilleGym_PressedSwitch, FALSE
	call LogicPuzzle_EventScript_SetBlock1
	call LogicPuzzle_EventScript_SetBlock2
	call LogicPuzzle_EventScript_ClearBlock3
	call LogicPuzzle_EventScript_SetBlock4
	call LogicPuzzle_EventScript_SetBlock5
	call LogicPuzzle_EventScript_SetBlock6
	call LogicPuzzle_EventScript_SetBlock7
	call LogicPuzzle_EventScript_SetBlock8
	call LogicPuzzle_EventScript_SetBlock9
	call LogicPuzzle_EventScript_SetBlock10
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	return


LogicPuzzle_EventScript_SetPuzzle3::
	setvar VAR_LOGIC_CLASS_STATE, 3
	call LogicPuzzle_EventScript_ResetButtons
	setmetatile 1, 7, METATILE_MauvilleGym_PressedSwitch, FALSE
	call LogicPuzzle_EventScript_SetBlock1
	call LogicPuzzle_EventScript_SetBlock2
	call LogicPuzzle_EventScript_SetBlock3
	call LogicPuzzle_EventScript_ClearBlock4
	call LogicPuzzle_EventScript_SetBlock5
	call LogicPuzzle_EventScript_ClearBlock6
	call LogicPuzzle_EventScript_ClearBlock7
	call LogicPuzzle_EventScript_SetBlock8
	call LogicPuzzle_EventScript_SetBlock9
	call LogicPuzzle_EventScript_SetBlock10
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	return


LogicPuzzle_EventScript_SetPuzzle4::
	setvar VAR_LOGIC_CLASS_STATE, 4
	call LogicPuzzle_EventScript_ResetButtons
	setmetatile 6, 6, METATILE_MauvilleGym_PressedSwitch, FALSE
	call LogicPuzzle_EventScript_SetBlock1
	call LogicPuzzle_EventScript_SetBlock2
	call LogicPuzzle_EventScript_SetBlock3
	call LogicPuzzle_EventScript_SetBlock4
	call LogicPuzzle_EventScript_ClearBlock5
	call LogicPuzzle_EventScript_SetBlock6
	call LogicPuzzle_EventScript_ClearBlock7
	call LogicPuzzle_EventScript_SetBlock8
	call LogicPuzzle_EventScript_SetBlock9
	call LogicPuzzle_EventScript_SetBlock10
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	return


LogicPuzzle_EventScript_SetPuzzle5::
	setvar VAR_LOGIC_CLASS_STATE, 5
	call LogicPuzzle_EventScript_ResetButtons
	setmetatile 9, 6, METATILE_MauvilleGym_PressedSwitch, FALSE
	call LogicPuzzle_EventScript_SetBlock1
	call LogicPuzzle_EventScript_SetBlock2
	call LogicPuzzle_EventScript_SetBlock3
	call LogicPuzzle_EventScript_SetBlock4
	call LogicPuzzle_EventScript_SetBlock5
	call LogicPuzzle_EventScript_SetBlock6
	call LogicPuzzle_EventScript_ClearBlock7
	call LogicPuzzle_EventScript_SetBlock8
	call LogicPuzzle_EventScript_ClearBlock9
	call LogicPuzzle_EventScript_SetBlock10
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	return


LogicPuzzle_EventScript_SetPuzzle6::
	setvar VAR_LOGIC_CLASS_STATE, 6
	call LogicPuzzle_EventScript_ResetButtons
	setmetatile 14, 7, METATILE_MauvilleGym_PressedSwitch, FALSE
	call LogicPuzzle_EventScript_SetBlock1
	call LogicPuzzle_EventScript_ClearBlock2
	call LogicPuzzle_EventScript_SetBlock3
	call LogicPuzzle_EventScript_SetBlock4
	call LogicPuzzle_EventScript_SetBlock5
	call LogicPuzzle_EventScript_SetBlock6
	call LogicPuzzle_EventScript_SetBlock7
	call LogicPuzzle_EventScript_ClearBlock8
	call LogicPuzzle_EventScript_SetBlock9
	call LogicPuzzle_EventScript_SetBlock10
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	return


LogicPuzzle_EventScript_SetPuzzle7::
	setvar VAR_LOGIC_CLASS_STATE, 7
	call LogicPuzzle_EventScript_ResetButtons
	setmetatile 2, 11, METATILE_MauvilleGym_PressedSwitch, FALSE
	call LogicPuzzle_EventScript_SetBlock1
	call LogicPuzzle_EventScript_SetBlock2
	call LogicPuzzle_EventScript_SetBlock3
	call LogicPuzzle_EventScript_SetBlock4
	call LogicPuzzle_EventScript_SetBlock5
	call LogicPuzzle_EventScript_ClearBlock6
	call LogicPuzzle_EventScript_SetBlock7
	call LogicPuzzle_EventScript_SetBlock8
	call LogicPuzzle_EventScript_ClearBlock9
	call LogicPuzzle_EventScript_SetBlock10
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	return


LogicPuzzle_EventScript_SetPuzzle8::
	setvar VAR_LOGIC_CLASS_STATE, 8
	call LogicPuzzle_EventScript_ResetButtons
	setmetatile 2, 13, METATILE_MauvilleGym_PressedSwitch, FALSE
	call LogicPuzzle_EventScript_SetBlock1
	call LogicPuzzle_EventScript_SetBlock2
	call LogicPuzzle_EventScript_SetBlock3
	call LogicPuzzle_EventScript_ClearBlock4
	call LogicPuzzle_EventScript_SetBlock5
	call LogicPuzzle_EventScript_SetBlock6
	call LogicPuzzle_EventScript_SetBlock7
	call LogicPuzzle_EventScript_SetBlock8
	call LogicPuzzle_EventScript_ClearBlock9
	call LogicPuzzle_EventScript_SetBlock10
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	return


LogicPuzzle_EventScript_SetPuzzle9::
	setvar VAR_LOGIC_CLASS_STATE, 9
	call LogicPuzzle_EventScript_ResetButtons
	setmetatile 6, 11, METATILE_MauvilleGym_PressedSwitch, FALSE
	call LogicPuzzle_EventScript_SetBlock1
	call LogicPuzzle_EventScript_SetBlock2
	call LogicPuzzle_EventScript_SetBlock3
	call LogicPuzzle_EventScript_SetBlock4
	call LogicPuzzle_EventScript_SetBlock5
	call LogicPuzzle_EventScript_SetBlock6
	call LogicPuzzle_EventScript_SetBlock7
	call LogicPuzzle_EventScript_SetBlock8
	call LogicPuzzle_EventScript_ClearBlock9
	call LogicPuzzle_EventScript_SetBlock10
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	return


LogicPuzzle_EventScript_SetPuzzle10::
	setvar VAR_LOGIC_CLASS_STATE, 10
	call LogicPuzzle_EventScript_ResetButtons
	setmetatile 9, 11, METATILE_MauvilleGym_PressedSwitch, FALSE
	call LogicPuzzle_EventScript_SetBlock1
	call LogicPuzzle_EventScript_SetBlock2
	call LogicPuzzle_EventScript_SetBlock3
	call LogicPuzzle_EventScript_ClearBlock4
	call LogicPuzzle_EventScript_SetBlock5
	call LogicPuzzle_EventScript_SetBlock6
	call LogicPuzzle_EventScript_SetBlock7
	call LogicPuzzle_EventScript_ClearBlock8
	call LogicPuzzle_EventScript_SetBlock9
	call LogicPuzzle_EventScript_ClearBlock10
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	return


LogicPuzzle_EventScript_SetPuzzle11::
	setvar VAR_LOGIC_CLASS_STATE, 11
	call LogicPuzzle_EventScript_ResetButtons
	setmetatile 13, 11, METATILE_MauvilleGym_PressedSwitch, FALSE
	call LogicPuzzle_EventScript_SetBlock1
	call LogicPuzzle_EventScript_SetBlock2
	call LogicPuzzle_EventScript_SetBlock3
	call LogicPuzzle_EventScript_SetBlock4
	call LogicPuzzle_EventScript_SetBlock5
	call LogicPuzzle_EventScript_SetBlock6
	call LogicPuzzle_EventScript_SetBlock7
	call LogicPuzzle_EventScript_SetBlock8
	call LogicPuzzle_EventScript_SetBlock9
	call LogicPuzzle_EventScript_SetBlock10
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	return


LogicPuzzle_EventScript_SetPuzzle12::
	setvar VAR_LOGIC_CLASS_STATE, 12
	call LogicPuzzle_EventScript_ResetButtons
	setmetatile 13, 13, METATILE_MauvilleGym_PressedSwitch, FALSE
	call LogicPuzzle_EventScript_SetBlock1
	call LogicPuzzle_EventScript_SetBlock2
	call LogicPuzzle_EventScript_SetBlock3
	call LogicPuzzle_EventScript_SetBlock4
	call LogicPuzzle_EventScript_SetBlock5
	call LogicPuzzle_EventScript_SetBlock6
	call LogicPuzzle_EventScript_SetBlock7
	call LogicPuzzle_EventScript_SetBlock8
	call LogicPuzzle_EventScript_SetBlock9
	call LogicPuzzle_EventScript_ClearBlock10
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	return


LogicPuzzle_EventScript_ResetButtons::
	setmetatile 1, 3, METATILE_MauvilleGym_RaisedSwitch, FALSE
	setmetatile 14, 13, METATILE_MauvilleGym_RaisedSwitch, FALSE
	setmetatile 1, 7, METATILE_MauvilleGym_RaisedSwitch, FALSE
	setmetatile 6, 6, METATILE_MauvilleGym_RaisedSwitch, FALSE
	setmetatile 9, 6, METATILE_MauvilleGym_RaisedSwitch, FALSE
	setmetatile 14, 7, METATILE_MauvilleGym_RaisedSwitch, FALSE
	setmetatile 2, 11, METATILE_MauvilleGym_RaisedSwitch, FALSE
	setmetatile 2, 13, METATILE_MauvilleGym_RaisedSwitch, FALSE
	setmetatile 6, 11, METATILE_MauvilleGym_RaisedSwitch, FALSE
	setmetatile 9, 11, METATILE_MauvilleGym_RaisedSwitch, FALSE
	setmetatile 13, 11, METATILE_MauvilleGym_RaisedSwitch, FALSE
	setmetatile 13, 13, METATILE_MauvilleGym_RaisedSwitch, FALSE
	return


LogicPuzzle_EventScript_SetBlock1::
	setmetatile 1, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
	setmetatile 1, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	setmetatile 2, 4, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
	setmetatile 2, 5, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
	setmetatile 3, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
	setmetatile 3, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock2::
	setmetatile 5, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
	setmetatile 5, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	setmetatile 6, 4, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
	setmetatile 6, 5, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
	setmetatile 7, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
	setmetatile 7, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	setmetatile 8, 4, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
	setmetatile 8, 5, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
	setmetatile 9, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
	setmetatile 9, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	setmetatile 10, 4, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
	setmetatile 10, 5, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock3::
	setmetatile 12, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
	setmetatile 12, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	setmetatile 13, 4, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
	setmetatile 13, 5, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
	setmetatile 14, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
	setmetatile 14, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock4::
	setmetatile 4, 5, METATILE_MauvilleGym_PoleBottom_On, TRUE
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	setmetatile 4, 8, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock5::
	setmetatile 11, 5, METATILE_MauvilleGym_PoleBottom_On, TRUE
	setmetatile 11, 6, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	setmetatile 11, 7, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	setmetatile 11, 8, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock6::
	setmetatile 1, 9, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	setmetatile 2, 9, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
	setmetatile 3, 9, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
	setmetatile 3, 10, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock7::
	setmetatile 5, 9, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
	setmetatile 5, 10, METATILE_MauvilleGym_GreenBeamH3_On, FALSE
	setmetatile 6, 9, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
	setmetatile 6, 10, METATILE_MauvilleGym_GreenBeamH4_On, FALSE
	setmetatile 7, 9, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
	setmetatile 7, 10, METATILE_MauvilleGym_GreenBeamH3_On, FALSE
	setmetatile 8, 9, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
	setmetatile 8, 10, METATILE_MauvilleGym_GreenBeamH4_On, FALSE
	setmetatile 9, 9, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
	setmetatile 9, 10, METATILE_MauvilleGym_GreenBeamH3_On, FALSE
	setmetatile 10, 9, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
	setmetatile 10, 10, METATILE_MauvilleGym_GreenBeamH4_On, FALSE
	return


LogicPuzzle_EventScript_SetBlock8::
	setmetatile 12, 9, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
	setmetatile 12, 10, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	setmetatile 13, 9, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
	setmetatile 13, 10, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
	setmetatile 14, 9, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
	setmetatile 14, 10, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock9::
	setmetatile 4, 10, METATILE_MauvilleGym_PoleBottom_On, TRUE
	setmetatile 4, 11, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	setmetatile 4, 12, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock10::
	setmetatile 11, 10, METATILE_MauvilleGym_PoleBottom_On, TRUE
	setmetatile 11, 11, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	setmetatile 11, 12, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	setmetatile 11, 13, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	return


LogicPuzzle_EventScript_ClearBlock1::
	setmetatile 1, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 1, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 2, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 2, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 3, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 3, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock2::
	setmetatile 5, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 5, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 6, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 6, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 7, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 7, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 8, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 8, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 9, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 9, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 10, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 10, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock3::
	setmetatile 12, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 12, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 13, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 13, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 14, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 14, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock4::
	setmetatile 4, 5, METATILE_MauvilleGym_PoleBottom_Off, TRUE
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 4, 8, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock5::
	setmetatile 11, 5, METATILE_MauvilleGym_PoleBottom_Off, TRUE
	setmetatile 11, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 11, 7, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 11, 8, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock6::
	setmetatile 1, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 2, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 3, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 3, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock7::
	setmetatile 5, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 5, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 6, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 6, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 7, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 7, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 8, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 8, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 9, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 9, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 10, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 10, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock8::
	setmetatile 12, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 12, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 13, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 13, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 14, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 14, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock9::
	setmetatile 4, 10, METATILE_MauvilleGym_PoleBottom_Off, TRUE
	setmetatile 4, 11, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 4, 12, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock10::
	setmetatile 11, 10, METATILE_MauvilleGym_PoleBottom_Off, TRUE
	setmetatile 11, 11, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 11, 12, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 11, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_TriggerFinish::
	lockall
	msgbox LogicPuzzle_Text_PuzzleFinished
	closemessage
	goto_if_set FLAG_RETURN_LOGIC_PUZZLE_LEFT, LogicPuzzle_EventScript_TriggerFinish_2
	setvar VAR_LOGIC_CLASS_STATE, 1
	warpsilent MAP_ARDOR_UNI_LOGIC_CLASS, 7, 3
LogicPuzzle_EventScript_TriggerFinish_1:
	waitstate
	releaseall
	end

LogicPuzzle_EventScript_TriggerFinish_2:
	setvar VAR_LOGIC_CLASS_STATE, 2
	warpsilent MAP_ARDOR_UNI_LOGIC_CLASS, 5, 3
	goto LogicPuzzle_EventScript_TriggerFinish_1


LogicPuzzle_Text_PuzzleIntro::
	.string "Reperi exitum cum logica.$"

LogicPuzzle_Text_PuzzleFinished::
	.string "Iam reperisti exitum!$"
