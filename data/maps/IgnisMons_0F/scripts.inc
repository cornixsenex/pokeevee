IgnisMons_0F_MapScripts::
# 3 "data/maps/IgnisMons_0F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgnisMons_0F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

IgnisMons_0F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers
	return


IgnisMons_0F_Script_SetBarriers::
# 10 "data/maps/IgnisMons_0F/scripts.pory"
	switch VAR_IGNISMONS_STATE
# 11 "data/maps/IgnisMons_0F/scripts.pory"
	case 0, IgnisMons_0F_Script_SetBarriers_3
# 13 "data/maps/IgnisMons_0F/scripts.pory"
	case 1, IgnisMons_0F_Script_SetBarriers_4
# 15 "data/maps/IgnisMons_0F/scripts.pory"
	case 2, IgnisMons_0F_Script_SetBarriers_5
# 17 "data/maps/IgnisMons_0F/scripts.pory"
	case 3, IgnisMons_0F_Script_SetBarriers_6
# 20 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Init
IgnisMons_0F_Script_SetBarriers_1:
	end

IgnisMons_0F_Script_SetBarriers_3:
# 12 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Init
	goto IgnisMons_0F_Script_SetBarriers_1

IgnisMons_0F_Script_SetBarriers_4:
# 14 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Red
	goto IgnisMons_0F_Script_SetBarriers_1

IgnisMons_0F_Script_SetBarriers_5:
# 16 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Blue
	goto IgnisMons_0F_Script_SetBarriers_1

IgnisMons_0F_Script_SetBarriers_6:
# 18 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Green
	goto IgnisMons_0F_Script_SetBarriers_1


IgnisMons_0F_Script_SetBarriers_Init::
# 26 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowRed
# 27 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowBlue
# 28 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowGreen
	return


IgnisMons_0F_Script_RedButton::
# 34 "data/maps/IgnisMons_0F/scripts.pory"
	lockall
# 35 "data/maps/IgnisMons_0F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_0F_Script_RedButton_2
IgnisMons_0F_Script_RedButton_1:
# 41 "data/maps/IgnisMons_0F/scripts.pory"
	releaseall
	end

IgnisMons_0F_Script_RedButton_2:
# 36 "data/maps/IgnisMons_0F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 37 "data/maps/IgnisMons_0F/scripts.pory"
	playse SE_PIN
# 38 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Red
# 39 "data/maps/IgnisMons_0F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_0F_Script_RedButton_1


IgnisMons_0F_Script_BlueButton::
# 46 "data/maps/IgnisMons_0F/scripts.pory"
	lockall
# 47 "data/maps/IgnisMons_0F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_0F_Script_BlueButton_2
IgnisMons_0F_Script_BlueButton_1:
# 53 "data/maps/IgnisMons_0F/scripts.pory"
	releaseall
	end

IgnisMons_0F_Script_BlueButton_2:
# 48 "data/maps/IgnisMons_0F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 49 "data/maps/IgnisMons_0F/scripts.pory"
	playse SE_PIN
# 50 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Blue
# 51 "data/maps/IgnisMons_0F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_0F_Script_BlueButton_1


IgnisMons_0F_Script_GreenButton::
# 58 "data/maps/IgnisMons_0F/scripts.pory"
	lockall
# 59 "data/maps/IgnisMons_0F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_0F_Script_GreenButton_2
IgnisMons_0F_Script_GreenButton_1:
# 65 "data/maps/IgnisMons_0F/scripts.pory"
	releaseall
	end

IgnisMons_0F_Script_GreenButton_2:
# 60 "data/maps/IgnisMons_0F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 61 "data/maps/IgnisMons_0F/scripts.pory"
	playse SE_PIN
# 62 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Green
# 63 "data/maps/IgnisMons_0F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_0F_Script_GreenButton_1


IgnisMons_0F_Script_SetBarriers_Red::
# 70 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowBlue
# 71 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowGreen
# 73 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_HideRed
	return


IgnisMons_0F_Script_SetBarriers_Blue::
# 79 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowRed
# 80 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowGreen
# 82 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_HideBlue
	return


IgnisMons_0F_Script_SetBarriers_Green::
# 88 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowRed
# 89 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowBlue
# 91 "data/maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_HideGreen
	return


IgnisMons_0F_Script_ShowRed::
# 97 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 3, 8, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 98 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 4, 9, METATILE_IgnisMons_Barrier_Red, TRUE
# 99 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 9, 10, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 100 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 10, 11, METATILE_IgnisMons_Barrier_Red, TRUE
# 101 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 3, 12, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 102 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 4, 13, METATILE_IgnisMons_Barrier_Red, TRUE
# 103 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 36, METATILE_IgnisMons_Barrier_Red, TRUE
# 104 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 18, 37, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 106 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 12, 8, METATILE_IgnisMons_Button_Red, FALSE
# 107 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 1, 11, METATILE_IgnisMons_Button_Red_Shadow, FALSE
# 108 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 21, METATILE_IgnisMons_Button_Red, FALSE
# 109 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_Red, FALSE
	return


IgnisMons_0F_Script_ShowBlue::
# 115 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 11, 16, METATILE_IgnisMons_Barrier_Blue, TRUE
# 116 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 117 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 13, 16, METATILE_IgnisMons_Barrier_Blue, TRUE
# 119 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 15, METATILE_IgnisMons_Button_Blue, FALSE
	return


IgnisMons_0F_Script_ShowGreen::
# 125 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 6, 2, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 126 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 6, 3, METATILE_IgnisMons_Barrier_Green, TRUE
# 127 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 1, 19, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 128 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 18, METATILE_IgnisMons_Barrier_Green, TRUE
# 130 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 8, METATILE_IgnisMons_Button_Green, FALSE
# 131 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 14, 34, METATILE_IgnisMons_Button_Green, FALSE
	return


IgnisMons_0F_Script_HideRed::
# 137 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 3, 8, METATILE_IgnisMons_Floor_Shadow, FALSE
# 138 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 4, 9, METATILE_IgnisMons_Floor, FALSE
# 139 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 9, 10, METATILE_IgnisMons_Floor_Shadow, FALSE
# 140 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 10, 11, METATILE_IgnisMons_Floor, FALSE
# 141 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 3, 12, METATILE_IgnisMons_Floor_Shadow, FALSE
# 142 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 4, 13, METATILE_IgnisMons_Floor, FALSE
# 143 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 36, METATILE_IgnisMons_Floor, FALSE
# 144 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 18, 37, METATILE_IgnisMons_Floor_Shadow, FALSE
# 146 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 12, 8, METATILE_IgnisMons_Button_White, FALSE
# 147 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 1, 11, METATILE_IgnisMons_Button_White_Shadow, FALSE
# 148 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 21, METATILE_IgnisMons_Button_White, FALSE
# 149 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_0F_Script_HideBlue::
# 155 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 11, 16, METATILE_IgnisMons_Floor, FALSE
# 156 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Floor_Shadow, FALSE
# 157 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 13, 16, METATILE_IgnisMons_Floor, FALSE
# 159 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 15, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_0F_Script_HideGreen::
# 165 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 6, 2, METATILE_IgnisMons_Floor_Shadow, FALSE
# 166 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 6, 3, METATILE_IgnisMons_Floor, FALSE
# 167 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 1, 19, METATILE_IgnisMons_Floor_Shadow, FALSE
# 168 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 18, METATILE_IgnisMons_Floor, FALSE
# 170 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 8, METATILE_IgnisMons_Button_White, FALSE
# 171 "data/maps/IgnisMons_0F/scripts.pory"
	setmetatile 14, 34, METATILE_IgnisMons_Button_White, FALSE
	return

