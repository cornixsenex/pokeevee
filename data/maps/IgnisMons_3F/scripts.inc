IgnisMons_3F_MapScripts::
# 3 "data/maps/IgnisMons_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgnisMons_3F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

IgnisMons_3F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_OnResume
	return


IgnisMons_3F_Script_OnResume::
# 10 "data/maps/IgnisMons_3F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
# 11 "data/maps/IgnisMons_3F/scripts.pory"
	switch VAR_IGNISMONS_STATE
# 12 "data/maps/IgnisMons_3F/scripts.pory"
	case 0, IgnisMons_3F_Script_OnResume_3
# 14 "data/maps/IgnisMons_3F/scripts.pory"
	case 1, IgnisMons_3F_Script_OnResume_4
# 16 "data/maps/IgnisMons_3F/scripts.pory"
	case 2, IgnisMons_3F_Script_OnResume_5
# 18 "data/maps/IgnisMons_3F/scripts.pory"
	case 3, IgnisMons_3F_Script_OnResume_6
# 21 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Init
IgnisMons_3F_Script_OnResume_1:
	end

IgnisMons_3F_Script_OnResume_3:
# 13 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Init
	goto IgnisMons_3F_Script_OnResume_1

IgnisMons_3F_Script_OnResume_4:
# 15 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Red
	goto IgnisMons_3F_Script_OnResume_1

IgnisMons_3F_Script_OnResume_5:
# 17 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Blue
	goto IgnisMons_3F_Script_OnResume_1

IgnisMons_3F_Script_OnResume_6:
# 19 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Green
	goto IgnisMons_3F_Script_OnResume_1


IgnisMons_3F_Script_SetBarriers_Red::
# 27 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowBlue
# 28 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowGreen
# 30 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideRed
	return


IgnisMons_3F_Script_SetBarriers_Blue::
# 36 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowRed
# 37 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowGreen
# 39 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideBlue
	return


IgnisMons_3F_Script_SetBarriers_Green::
# 45 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowRed
# 46 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowBlue
# 48 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideGreen
	return


IgnisMons_3F_Script_SetBarriers_Init::
# 54 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowRed
# 55 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowBlue
# 56 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowGreen
	return


IgnisMons_3F_Script_RedButton::
# 62 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 63 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_3F_Script_RedButton_2
IgnisMons_3F_Script_RedButton_1:
# 69 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_RedButton_2:
# 64 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 65 "data/maps/IgnisMons_3F/scripts.pory"
	playse SE_PIN
# 66 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Red
# 67 "data/maps/IgnisMons_3F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_3F_Script_RedButton_1


IgnisMons_3F_Script_BlueButton::
# 74 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 75 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_3F_Script_BlueButton_2
IgnisMons_3F_Script_BlueButton_1:
# 81 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_BlueButton_2:
# 76 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 77 "data/maps/IgnisMons_3F/scripts.pory"
	playse SE_PIN
# 78 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Blue
# 79 "data/maps/IgnisMons_3F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_3F_Script_BlueButton_1


IgnisMons_3F_Script_GreenButton::
# 86 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 87 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_3F_Script_GreenButton_2
IgnisMons_3F_Script_GreenButton_1:
# 93 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_GreenButton_2:
# 88 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 89 "data/maps/IgnisMons_3F/scripts.pory"
	playse SE_PIN
# 90 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Green
# 91 "data/maps/IgnisMons_3F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_3F_Script_GreenButton_1


IgnisMons_3F_Script_ShowRed::
# 98 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 22, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 99 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 18, 23, METATILE_IgnisMons_Barrier_Red, TRUE
# 102 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 35, METATILE_IgnisMons_Button_Red, FALSE
	return


IgnisMons_3F_Script_ShowBlue::
# 107 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 5, 6, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 108 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 6, 5, METATILE_IgnisMons_Barrier_Blue, TRUE
# 109 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 6, METATILE_IgnisMons_Barrier_Blue, TRUE
# 110 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 111 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 112 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 14, 15, METATILE_IgnisMons_Barrier_Blue, TRUE
# 113 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 9, 40, METATILE_IgnisMons_Barrier_Blue, TRUE
# 114 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 39, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 115 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 11, 40, METATILE_IgnisMons_Barrier_Blue, TRUE
# 116 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 41, METATILE_IgnisMons_Barrier_Blue, TRUE
# 118 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_Blue, FALSE
	return


IgnisMons_3F_Script_ShowGreen::
# 124 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 6, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 125 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 5, METATILE_IgnisMons_Barrier_Green, TRUE
# 126 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 7, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 127 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 6, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 128 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 30, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 129 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 29, METATILE_IgnisMons_Barrier_Green, TRUE
# 130 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 3, 28, METATILE_IgnisMons_Barrier_Green, TRUE
# 132 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 17, METATILE_IgnisMons_Button_Green, FALSE
	return


IgnisMons_3F_Script_HideRed::
# 139 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 22, METATILE_IgnisMons_Floor_Shadow, FALSE
# 140 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 18, 23, METATILE_IgnisMons_Floor, FALSE
# 143 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 35, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_3F_Script_HideBlue::
# 148 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 5, 6, METATILE_IgnisMons_Floor_Shadow, FALSE
# 149 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 6, 5, METATILE_IgnisMons_Floor, FALSE
# 150 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 6, METATILE_IgnisMons_Floor, FALSE
# 151 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Floor_Shadow, FALSE
# 152 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Floor_Shadow, FALSE
# 153 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 14, 15, METATILE_IgnisMons_Floor, FALSE
# 154 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 9, 40, METATILE_IgnisMons_Floor, FALSE
# 155 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 39, METATILE_IgnisMons_Floor_Shadow, FALSE
# 156 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 11, 40, METATILE_IgnisMons_Floor, FALSE
# 157 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 41, METATILE_IgnisMons_Floor, FALSE
# 159 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_3F_Script_HideGreen::
# 165 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 6, METATILE_IgnisMons_Floor_Shadow, FALSE
# 166 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 5, METATILE_IgnisMons_Floor, FALSE
# 167 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 7, METATILE_IgnisMons_Floor_Shadow, FALSE
# 168 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 6, METATILE_IgnisMons_Floor_Shadow, FALSE
# 169 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 30, METATILE_IgnisMons_Floor_Shadow, FALSE
# 170 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 29, METATILE_IgnisMons_Floor, FALSE
# 171 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 3, 28, METATILE_IgnisMons_Floor, FALSE
# 173 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 17, METATILE_IgnisMons_Button_White, FALSE
	return

