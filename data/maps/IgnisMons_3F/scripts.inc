IgnisMons_3F_MapScripts::
# 3 "data/maps/IgnisMons_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgnisMons_3F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

IgnisMons_3F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers
	return


IgnisMons_3F_Script_SetBarriers::
# 10 "data/maps/IgnisMons_3F/scripts.pory"
	switch VAR_IGNISMONS_STATE
# 11 "data/maps/IgnisMons_3F/scripts.pory"
	case 0, IgnisMons_3F_Script_SetBarriers_3
# 13 "data/maps/IgnisMons_3F/scripts.pory"
	case 1, IgnisMons_3F_Script_SetBarriers_4
# 15 "data/maps/IgnisMons_3F/scripts.pory"
	case 2, IgnisMons_3F_Script_SetBarriers_5
# 17 "data/maps/IgnisMons_3F/scripts.pory"
	case 3, IgnisMons_3F_Script_SetBarriers_6
# 20 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Init
IgnisMons_3F_Script_SetBarriers_1:
	end

IgnisMons_3F_Script_SetBarriers_3:
# 12 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Init
	goto IgnisMons_3F_Script_SetBarriers_1

IgnisMons_3F_Script_SetBarriers_4:
# 14 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Red
	goto IgnisMons_3F_Script_SetBarriers_1

IgnisMons_3F_Script_SetBarriers_5:
# 16 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Blue
	goto IgnisMons_3F_Script_SetBarriers_1

IgnisMons_3F_Script_SetBarriers_6:
# 18 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Green
	goto IgnisMons_3F_Script_SetBarriers_1


IgnisMons_3F_Script_SetBarriers_Red::
# 26 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowBlue
# 27 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowGreen
# 29 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideRed
	return


IgnisMons_3F_Script_SetBarriers_Blue::
# 35 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowRed
# 36 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowGreen
# 38 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideBlue
	return


IgnisMons_3F_Script_SetBarriers_Green::
# 44 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowRed
# 45 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowBlue
# 47 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideGreen
	return


IgnisMons_3F_Script_SetBarriers_Init::
# 53 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowRed
# 54 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowBlue
# 55 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowGreen
	return


IgnisMons_3F_Script_RedButton::
# 61 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 62 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_3F_Script_RedButton_2
IgnisMons_3F_Script_RedButton_1:
# 68 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_RedButton_2:
# 63 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 64 "data/maps/IgnisMons_3F/scripts.pory"
	playse SE_PIN
# 65 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Red
# 66 "data/maps/IgnisMons_3F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_3F_Script_RedButton_1


IgnisMons_3F_Script_BlueButton::
# 73 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 74 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_3F_Script_BlueButton_2
IgnisMons_3F_Script_BlueButton_1:
# 80 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_BlueButton_2:
# 75 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 76 "data/maps/IgnisMons_3F/scripts.pory"
	playse SE_PIN
# 77 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Blue
# 78 "data/maps/IgnisMons_3F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_3F_Script_BlueButton_1


IgnisMons_3F_Script_GreenButton::
# 85 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 86 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_3F_Script_GreenButton_2
IgnisMons_3F_Script_GreenButton_1:
# 92 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_GreenButton_2:
# 87 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 88 "data/maps/IgnisMons_3F/scripts.pory"
	playse SE_PIN
# 89 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Green
# 90 "data/maps/IgnisMons_3F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_3F_Script_GreenButton_1


IgnisMons_3F_Script_ShowRed::
# 97 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 22, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 98 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 18, 23, METATILE_IgnisMons_Barrier_Red, TRUE
# 101 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 35, METATILE_IgnisMons_Button_Red, FALSE
	return


IgnisMons_3F_Script_ShowBlue::
# 106 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 5, 6, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 107 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 6, 5, METATILE_IgnisMons_Barrier_Blue, TRUE
# 108 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 6, METATILE_IgnisMons_Barrier_Blue, TRUE
# 109 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 110 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 111 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 14, 15, METATILE_IgnisMons_Barrier_Blue, TRUE
# 112 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 9, 40, METATILE_IgnisMons_Barrier_Blue, TRUE
# 113 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 39, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 114 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 11, 40, METATILE_IgnisMons_Barrier_Blue, TRUE
# 115 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 41, METATILE_IgnisMons_Barrier_Blue, TRUE
# 117 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_Blue, FALSE
	return


IgnisMons_3F_Script_ShowGreen::
# 123 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 6, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 124 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 5, METATILE_IgnisMons_Barrier_Green, TRUE
# 125 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 7, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 126 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 6, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 127 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 30, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 128 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 29, METATILE_IgnisMons_Barrier_Green, TRUE
# 129 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 3, 28, METATILE_IgnisMons_Barrier_Green, TRUE
# 131 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 17, METATILE_IgnisMons_Button_Green, FALSE
	return


IgnisMons_3F_Script_HideRed::
# 138 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 22, METATILE_IgnisMons_Floor_Shadow, FALSE
# 139 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 18, 23, METATILE_IgnisMons_Floor, FALSE
# 142 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 35, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_3F_Script_HideBlue::
# 147 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 5, 6, METATILE_IgnisMons_Floor_Shadow, FALSE
# 148 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 6, 5, METATILE_IgnisMons_Floor, FALSE
# 149 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 6, METATILE_IgnisMons_Floor, FALSE
# 150 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Floor_Shadow, FALSE
# 151 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Floor_Shadow, FALSE
# 152 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 14, 15, METATILE_IgnisMons_Floor, FALSE
# 153 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 9, 40, METATILE_IgnisMons_Floor, FALSE
# 154 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 39, METATILE_IgnisMons_Floor_Shadow, FALSE
# 155 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 11, 40, METATILE_IgnisMons_Floor, FALSE
# 156 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 41, METATILE_IgnisMons_Floor, FALSE
# 158 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_3F_Script_HideGreen::
# 164 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 6, METATILE_IgnisMons_Floor_Shadow, FALSE
# 165 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 5, METATILE_IgnisMons_Floor, FALSE
# 166 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 7, METATILE_IgnisMons_Floor_Shadow, FALSE
# 167 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 6, METATILE_IgnisMons_Floor_Shadow, FALSE
# 168 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 30, METATILE_IgnisMons_Floor_Shadow, FALSE
# 169 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 29, METATILE_IgnisMons_Floor, FALSE
# 170 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 3, 28, METATILE_IgnisMons_Floor, FALSE
# 172 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 17, METATILE_IgnisMons_Button_White, FALSE
	return

