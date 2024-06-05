IgnisMons_2F_MapScripts::
# 3 "data/maps/IgnisMons_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgnisMons_2F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

IgnisMons_2F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_OnResume
	return


IgnisMons_2F_Script_OnResume::
# 10 "data/maps/IgnisMons_2F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
# 11 "data/maps/IgnisMons_2F/scripts.pory"
	switch VAR_IGNISMONS_STATE
# 12 "data/maps/IgnisMons_2F/scripts.pory"
	case 0, IgnisMons_2F_Script_OnResume_3
# 14 "data/maps/IgnisMons_2F/scripts.pory"
	case 1, IgnisMons_2F_Script_OnResume_4
# 16 "data/maps/IgnisMons_2F/scripts.pory"
	case 2, IgnisMons_2F_Script_OnResume_5
# 18 "data/maps/IgnisMons_2F/scripts.pory"
	case 3, IgnisMons_2F_Script_OnResume_6
# 21 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Init
IgnisMons_2F_Script_OnResume_1:
	end

IgnisMons_2F_Script_OnResume_3:
# 13 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Init
	goto IgnisMons_2F_Script_OnResume_1

IgnisMons_2F_Script_OnResume_4:
# 15 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Red
	goto IgnisMons_2F_Script_OnResume_1

IgnisMons_2F_Script_OnResume_5:
# 17 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Blue
	goto IgnisMons_2F_Script_OnResume_1

IgnisMons_2F_Script_OnResume_6:
# 19 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Green
	goto IgnisMons_2F_Script_OnResume_1


IgnisMons_2F_Script_SetBarriers_Init::
# 27 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowRed
# 28 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowBlue
# 29 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowGreen
	return


IgnisMons_2F_Script_SetBarriers_Red::
# 35 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowBlue
# 36 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowGreen
# 38 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_HideRed
	return


IgnisMons_2F_Script_SetBarriers_Blue::
# 44 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowRed
# 45 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowGreen
# 47 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_HideBlue
	return


IgnisMons_2F_Script_SetBarriers_Green::
# 53 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowRed
# 54 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowBlue
# 56 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_HideGreen
	return


IgnisMons_2F_Script_RedButton::
# 62 "data/maps/IgnisMons_2F/scripts.pory"
	lockall
# 63 "data/maps/IgnisMons_2F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_2F_Script_RedButton_2
IgnisMons_2F_Script_RedButton_1:
# 69 "data/maps/IgnisMons_2F/scripts.pory"
	releaseall
	end

IgnisMons_2F_Script_RedButton_2:
# 64 "data/maps/IgnisMons_2F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 65 "data/maps/IgnisMons_2F/scripts.pory"
	playse SE_PIN
# 66 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Red
# 67 "data/maps/IgnisMons_2F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_2F_Script_RedButton_1


IgnisMons_2F_Script_BlueButton::
# 74 "data/maps/IgnisMons_2F/scripts.pory"
	lockall
# 75 "data/maps/IgnisMons_2F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_2F_Script_BlueButton_2
IgnisMons_2F_Script_BlueButton_1:
# 81 "data/maps/IgnisMons_2F/scripts.pory"
	releaseall
	end

IgnisMons_2F_Script_BlueButton_2:
# 76 "data/maps/IgnisMons_2F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 77 "data/maps/IgnisMons_2F/scripts.pory"
	playse SE_PIN
# 78 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Blue
# 79 "data/maps/IgnisMons_2F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_2F_Script_BlueButton_1


IgnisMons_2F_Script_GreenButton::
# 86 "data/maps/IgnisMons_2F/scripts.pory"
	lockall
# 87 "data/maps/IgnisMons_2F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_2F_Script_GreenButton_2
IgnisMons_2F_Script_GreenButton_1:
# 93 "data/maps/IgnisMons_2F/scripts.pory"
	releaseall
	end

IgnisMons_2F_Script_GreenButton_2:
# 88 "data/maps/IgnisMons_2F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 89 "data/maps/IgnisMons_2F/scripts.pory"
	playse SE_PIN
# 90 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Green
# 91 "data/maps/IgnisMons_2F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_2F_Script_GreenButton_1


IgnisMons_2F_Script_ShowRed::
# 98 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 24, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 99 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 25, METATILE_IgnisMons_Barrier_Red, TRUE
# 100 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 10, 28, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 101 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 11, 29, METATILE_IgnisMons_Barrier_Red, TRUE
# 102 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 35, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 103 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 36, METATILE_IgnisMons_Barrier_Red, TRUE
# 104 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 37, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 105 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 38, METATILE_IgnisMons_Barrier_Red, TRUE
# 107 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 32, METATILE_IgnisMons_Button_Red, FALSE
	return


IgnisMons_2F_Script_ShowBlue::
# 112 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 7, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 113 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 7, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 114 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 10, 8, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 115 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 8, METATILE_IgnisMons_Barrier_Blue, TRUE
# 116 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 9, METATILE_IgnisMons_Barrier_Blue, TRUE
# 117 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 16, 25, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 118 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 17, 24, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 119 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 25, METATILE_IgnisMons_Barrier_Blue, TRUE
# 120 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 3, 29, METATILE_IgnisMons_Barrier_Blue, TRUE
# 121 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 4, 28, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 122 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 5, 29, METATILE_IgnisMons_Barrier_Blue, TRUE
# 123 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 32, METATILE_IgnisMons_Barrier_Blue, TRUE
# 124 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 31, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 125 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 16, 32, METATILE_IgnisMons_Barrier_Blue, TRUE
# 126 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 17, 36, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 127 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 35, METATILE_IgnisMons_Barrier_Blue, TRUE
# 128 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 37, METATILE_IgnisMons_Barrier_Blue, TRUE
# 130 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_Blue, FALSE
# 131 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 38, METATILE_IgnisMons_Button_Blue, FALSE
# 132 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 11, METATILE_IgnisMons_Button_Blue, FALSE
# 133 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 17, METATILE_IgnisMons_Button_Blue, FALSE
	return


IgnisMons_2F_Script_ShowGreen::
# 139 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 6, 4, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 140 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 7, 5, METATILE_IgnisMons_Barrier_Green, TRUE
# 141 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 4, METATILE_IgnisMons_Barrier_Green, TRUE
# 142 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 13, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 143 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 12, METATILE_IgnisMons_Barrier_Green, TRUE
# 144 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 27, METATILE_IgnisMons_Barrier_Green, TRUE
# 145 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 26, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 146 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 34, METATILE_IgnisMons_Barrier_Green, TRUE
# 147 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 33, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 149 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 8, METATILE_IgnisMons_Button_Green, FALSE
# 150 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 12, METATILE_IgnisMons_Button_Green_Shadow, FALSE
# 151 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 33, METATILE_IgnisMons_Button_Green, FALSE
# 152 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 11, 26, METATILE_IgnisMons_Button_Green, FALSE
	return


IgnisMons_2F_Script_HideRed::
# 161 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 162 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 25, METATILE_IgnisMons_Floor, FALSE
# 163 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 10, 28, METATILE_IgnisMons_Floor_Shadow, FALSE
# 164 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 11, 29, METATILE_IgnisMons_Floor, FALSE
# 165 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 35, METATILE_IgnisMons_Floor_Shadow, FALSE
# 166 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 36, METATILE_IgnisMons_Floor, FALSE
# 167 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 37, METATILE_IgnisMons_Floor_Shadow, FALSE
# 168 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 38, METATILE_IgnisMons_Floor, FALSE
# 170 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 32, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_2F_Script_HideBlue::
# 175 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 7, METATILE_IgnisMons_Floor_Shadow, FALSE
# 176 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 7, METATILE_IgnisMons_Floor_Shadow, FALSE
# 177 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 10, 8, METATILE_IgnisMons_Floor_Shadow, FALSE
# 178 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 8, METATILE_IgnisMons_Floor, FALSE
# 179 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 9, METATILE_IgnisMons_Floor, FALSE
# 180 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 16, 25, METATILE_IgnisMons_Floor_Shadow, FALSE
# 181 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 17, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 182 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 25, METATILE_IgnisMons_Floor, FALSE
# 183 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 3, 29, METATILE_IgnisMons_Floor, FALSE
# 184 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 4, 28, METATILE_IgnisMons_Floor_Shadow, FALSE
# 185 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 5, 29, METATILE_IgnisMons_Floor, FALSE
# 186 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 32, METATILE_IgnisMons_Floor, FALSE
# 187 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 188 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 16, 32, METATILE_IgnisMons_Floor, FALSE
# 189 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 17, 36, METATILE_IgnisMons_Floor_Shadow, FALSE
# 190 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 35, METATILE_IgnisMons_Floor, FALSE
# 191 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 37, METATILE_IgnisMons_Floor, FALSE
# 193 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_White, FALSE
# 194 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 38, METATILE_IgnisMons_Button_White, FALSE
# 195 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 11, METATILE_IgnisMons_Button_White, FALSE
# 196 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 17, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_2F_Script_HideGreen::
# 202 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 6, 4, METATILE_IgnisMons_Floor_Shadow, FALSE
# 203 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 7, 5, METATILE_IgnisMons_Floor, FALSE
# 204 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 4, METATILE_IgnisMons_Floor, FALSE
# 205 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 13, METATILE_IgnisMons_Floor_Shadow, FALSE
# 206 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 12, METATILE_IgnisMons_Floor, FALSE
# 207 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 27, METATILE_IgnisMons_Floor, FALSE
# 208 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 26, METATILE_IgnisMons_Floor_Shadow, FALSE
# 209 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 34, METATILE_IgnisMons_Floor, FALSE
# 210 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 33, METATILE_IgnisMons_Floor, FALSE
# 212 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 8, METATILE_IgnisMons_Button_White, FALSE
# 213 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 12, METATILE_IgnisMons_Button_White_Shadow, FALSE
# 214 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 33, METATILE_IgnisMons_Button_White, FALSE
# 215 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 11, 26, METATILE_IgnisMons_Button_White, FALSE
	return

