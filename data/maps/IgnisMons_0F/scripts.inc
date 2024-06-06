IgnisMons_0F_MapScripts::
# 3 "data/maps/IgnisMons_0F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgnisMons_0F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

IgnisMons_0F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_OnResume
	return


IgnisMons_0F_Script_OnResume::
# 10 "data/maps/IgnisMons_0F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
# 11 "data/maps/IgnisMons_0F/scripts.pory"
	switch VAR_IGNISMONS_STATE
# 12 "data/maps/IgnisMons_0F/scripts.pory"
	case 0, IgnisMons_0F_Script_OnResume_3
# 14 "data/maps/IgnisMons_0F/scripts.pory"
	case 1, IgnisMons_0F_Script_OnResume_4
# 16 "data/maps/IgnisMons_0F/scripts.pory"
	case 2, IgnisMons_0F_Script_OnResume_5
# 18 "data/maps/IgnisMons_0F/scripts.pory"
	case 3, IgnisMons_0F_Script_OnResume_6
# 21 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Init
IgnisMons_0F_Script_OnResume_1:
	end

IgnisMons_0F_Script_OnResume_3:
# 13 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Init
	goto IgnisMons_0F_Script_OnResume_1

IgnisMons_0F_Script_OnResume_4:
# 15 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Red
	goto IgnisMons_0F_Script_OnResume_1

IgnisMons_0F_Script_OnResume_5:
# 17 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Blue
	goto IgnisMons_0F_Script_OnResume_1

IgnisMons_0F_Script_OnResume_6:
# 19 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Green
	goto IgnisMons_0F_Script_OnResume_1


IgnisMons_0F_Script_SetBarriers_Init::
# 27 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowRed
# 28 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowBlue
# 29 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowGreen
	return


IgnisMons_0F_Script_RedButton::
# 35 "data/maps/IgnisMons_0F/scripts.pory"
	lockall
# 36 "data/maps/IgnisMons_0F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_0F_Script_RedButton_2
IgnisMons_0F_Script_RedButton_1:
# 42 "data/maps/IgnisMons_0F/scripts.pory"
	releaseall
	end

IgnisMons_0F_Script_RedButton_2:
# 37 "data/maps/IgnisMons_0F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 38 "data/maps/IgnisMons_0F/scripts.pory"
	playse SE_FU_ZAKU
# 39 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Red
# 40 "data/maps/IgnisMons_0F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_0F_Script_RedButton_1


IgnisMons_0F_Script_BlueButton::
# 47 "data/maps/IgnisMons_0F/scripts.pory"
	lockall
# 48 "data/maps/IgnisMons_0F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_0F_Script_BlueButton_2
IgnisMons_0F_Script_BlueButton_1:
# 54 "data/maps/IgnisMons_0F/scripts.pory"
	releaseall
	end

IgnisMons_0F_Script_BlueButton_2:
# 49 "data/maps/IgnisMons_0F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 50 "data/maps/IgnisMons_0F/scripts.pory"
	playse SE_FU_ZAKU
# 51 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Blue
# 52 "data/maps/IgnisMons_0F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_0F_Script_BlueButton_1


IgnisMons_0F_Script_GreenButton::
# 59 "data/maps/IgnisMons_0F/scripts.pory"
	lockall
# 60 "data/maps/IgnisMons_0F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_0F_Script_GreenButton_2
IgnisMons_0F_Script_GreenButton_1:
# 66 "data/maps/IgnisMons_0F/scripts.pory"
	releaseall
	end

IgnisMons_0F_Script_GreenButton_2:
# 61 "data/maps/IgnisMons_0F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 62 "data/maps/IgnisMons_0F/scripts.pory"
	playse SE_FU_ZAKU
# 63 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Green
# 64 "data/maps/IgnisMons_0F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_0F_Script_GreenButton_1


IgnisMons_0F_Script_SetBarriers_Red::
# 71 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowBlue
# 72 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowGreen
# 74 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_HideRed
	return


IgnisMons_0F_Script_SetBarriers_Blue::
# 80 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowRed
# 81 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowGreen
# 83 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_HideBlue
	return


IgnisMons_0F_Script_SetBarriers_Green::
# 89 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowRed
# 90 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowBlue
# 92 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_HideGreen
	return


IgnisMons_0F_Script_ShowRed::
# 98 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 3, 8, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 99 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 4, 9, METATILE_IgnisMons_Barrier_Red, TRUE
# 100 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 9, 10, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 101 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 10, 11, METATILE_IgnisMons_Barrier_Red, TRUE
# 102 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 3, 12, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 103 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 4, 13, METATILE_IgnisMons_Barrier_Red, TRUE
# 104 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 36, METATILE_IgnisMons_Barrier_Red, TRUE
# 105 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 18, 37, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 107 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 12, 8, METATILE_IgnisMons_Button_Red, FALSE
# 108 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 1, 11, METATILE_IgnisMons_Button_Red_Shadow, FALSE
# 109 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 21, METATILE_IgnisMons_Button_Red, FALSE
# 110 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_Red, FALSE
	return


IgnisMons_0F_Script_ShowBlue::
# 116 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 11, 16, METATILE_IgnisMons_Barrier_Blue, TRUE
# 117 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 118 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 13, 16, METATILE_IgnisMons_Barrier_Blue, TRUE
# 120 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 15, METATILE_IgnisMons_Button_Blue, FALSE
	return


IgnisMons_0F_Script_ShowGreen::
# 126 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 6, 2, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 127 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 6, 3, METATILE_IgnisMons_Barrier_Green, TRUE
# 128 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 1, 19, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 129 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 18, METATILE_IgnisMons_Barrier_Green, TRUE
# 131 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 8, METATILE_IgnisMons_Button_Green, FALSE
# 132 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 14, 34, METATILE_IgnisMons_Button_Green, FALSE
	return


IgnisMons_0F_Script_HideRed::
# 138 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 3, 8, METATILE_IgnisMons_Floor_Shadow, FALSE
# 139 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 4, 9, METATILE_IgnisMons_Floor, FALSE
# 140 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 9, 10, METATILE_IgnisMons_Floor_Shadow, FALSE
# 141 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 10, 11, METATILE_IgnisMons_Floor, FALSE
# 142 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 3, 12, METATILE_IgnisMons_Floor_Shadow, FALSE
# 143 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 4, 13, METATILE_IgnisMons_Floor, FALSE
# 144 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 36, METATILE_IgnisMons_Floor, FALSE
# 145 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 18, 37, METATILE_IgnisMons_Floor_Shadow, FALSE
# 147 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 12, 8, METATILE_IgnisMons_Button_White, FALSE
# 148 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 1, 11, METATILE_IgnisMons_Button_White_Shadow, FALSE
# 149 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 21, METATILE_IgnisMons_Button_White, FALSE
# 150 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_0F_Script_HideBlue::
# 156 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 11, 16, METATILE_IgnisMons_Floor, FALSE
# 157 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Floor_Shadow, FALSE
# 158 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 13, 16, METATILE_IgnisMons_Floor, FALSE
# 160 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 15, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_0F_Script_HideGreen::
# 166 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 6, 2, METATILE_IgnisMons_Floor_Shadow, FALSE
# 167 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 6, 3, METATILE_IgnisMons_Floor, FALSE
# 168 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 1, 19, METATILE_IgnisMons_Floor_Shadow, FALSE
# 169 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 18, METATILE_IgnisMons_Floor, FALSE
# 171 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 8, METATILE_IgnisMons_Button_White, FALSE
# 172 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 14, 34, METATILE_IgnisMons_Button_White, FALSE
	return

