IgnisMons_2F_MapScripts::
# 3 "data/maps/IgnisMons_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgnisMons_2F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

IgnisMons_2F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers
	return


IgnisMons_2F_Script_SetBarriers::
# 10 "data/maps/IgnisMons_2F/scripts.pory"
	switch VAR_IGNISMONS_STATE
# 11 "data/maps/IgnisMons_2F/scripts.pory"
	case 0, IgnisMons_2F_Script_SetBarriers_3
# 13 "data/maps/IgnisMons_2F/scripts.pory"
	case 1, IgnisMons_2F_Script_SetBarriers_4
# 15 "data/maps/IgnisMons_2F/scripts.pory"
	case 2, IgnisMons_2F_Script_SetBarriers_5
# 17 "data/maps/IgnisMons_2F/scripts.pory"
	case 3, IgnisMons_2F_Script_SetBarriers_6
# 20 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Init
IgnisMons_2F_Script_SetBarriers_1:
	end

IgnisMons_2F_Script_SetBarriers_3:
# 12 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Init
	goto IgnisMons_2F_Script_SetBarriers_1

IgnisMons_2F_Script_SetBarriers_4:
# 14 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Red
	goto IgnisMons_2F_Script_SetBarriers_1

IgnisMons_2F_Script_SetBarriers_5:
# 16 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Blue
	goto IgnisMons_2F_Script_SetBarriers_1

IgnisMons_2F_Script_SetBarriers_6:
# 18 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Green
	goto IgnisMons_2F_Script_SetBarriers_1


IgnisMons_2F_Script_SetBarriers_Init::
# 26 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowRed
# 27 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowBlue
# 28 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowGreen
	return


IgnisMons_2F_Script_SetBarriers_Red::
# 34 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowBlue
# 35 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowGreen
# 37 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_HideRed
	return


IgnisMons_2F_Script_SetBarriers_Blue::
# 43 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowRed
# 44 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowGreen
# 46 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_HideBlue
	return


IgnisMons_2F_Script_SetBarriers_Green::
# 52 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowRed
# 53 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowBlue
# 55 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_HideGreen
	return


IgnisMons_2F_Script_RedButton::
# 61 "data/maps/IgnisMons_2F/scripts.pory"
	lockall
# 62 "data/maps/IgnisMons_2F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_2F_Script_RedButton_2
IgnisMons_2F_Script_RedButton_1:
# 68 "data/maps/IgnisMons_2F/scripts.pory"
	releaseall
	end

IgnisMons_2F_Script_RedButton_2:
# 63 "data/maps/IgnisMons_2F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 64 "data/maps/IgnisMons_2F/scripts.pory"
	playse SE_PIN
# 65 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Red
# 66 "data/maps/IgnisMons_2F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_2F_Script_RedButton_1


IgnisMons_2F_Script_BlueButton::
# 73 "data/maps/IgnisMons_2F/scripts.pory"
	lockall
# 74 "data/maps/IgnisMons_2F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_2F_Script_BlueButton_2
IgnisMons_2F_Script_BlueButton_1:
# 80 "data/maps/IgnisMons_2F/scripts.pory"
	releaseall
	end

IgnisMons_2F_Script_BlueButton_2:
# 75 "data/maps/IgnisMons_2F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 76 "data/maps/IgnisMons_2F/scripts.pory"
	playse SE_PIN
# 77 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Blue
# 78 "data/maps/IgnisMons_2F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_2F_Script_BlueButton_1


IgnisMons_2F_Script_GreenButton::
# 85 "data/maps/IgnisMons_2F/scripts.pory"
	lockall
# 86 "data/maps/IgnisMons_2F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_2F_Script_GreenButton_2
IgnisMons_2F_Script_GreenButton_1:
# 92 "data/maps/IgnisMons_2F/scripts.pory"
	releaseall
	end

IgnisMons_2F_Script_GreenButton_2:
# 87 "data/maps/IgnisMons_2F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 88 "data/maps/IgnisMons_2F/scripts.pory"
	playse SE_PIN
# 89 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Green
# 90 "data/maps/IgnisMons_2F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_2F_Script_GreenButton_1


IgnisMons_2F_Script_ShowRed::
# 97 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 24, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 98 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 25, METATILE_IgnisMons_Barrier_Red, TRUE
# 99 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 10, 28, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 100 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 11, 29, METATILE_IgnisMons_Barrier_Red, TRUE
# 101 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 35, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 102 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 36, METATILE_IgnisMons_Barrier_Red, TRUE
# 103 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 37, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 104 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 38, METATILE_IgnisMons_Barrier_Red, TRUE
# 106 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 32, METATILE_IgnisMons_Button_Red, FALSE
	return


IgnisMons_2F_Script_ShowBlue::
# 111 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 7, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 112 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 7, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 113 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 10, 8, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 114 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 8, METATILE_IgnisMons_Barrier_Blue, TRUE
# 115 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 9, METATILE_IgnisMons_Barrier_Blue, TRUE
# 116 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 16, 25, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 117 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 17, 24, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 118 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 25, METATILE_IgnisMons_Barrier_Blue, TRUE
# 119 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 3, 29, METATILE_IgnisMons_Barrier_Blue, TRUE
# 120 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 4, 28, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 121 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 5, 29, METATILE_IgnisMons_Barrier_Blue, TRUE
# 122 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 32, METATILE_IgnisMons_Barrier_Blue, TRUE
# 123 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 31, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 124 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 16, 32, METATILE_IgnisMons_Barrier_Blue, TRUE
# 125 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 17, 36, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 126 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 35, METATILE_IgnisMons_Barrier_Blue, TRUE
# 127 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 37, METATILE_IgnisMons_Barrier_Blue, TRUE
# 129 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_Blue, FALSE
# 130 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 38, METATILE_IgnisMons_Button_Blue, FALSE
# 131 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 11, METATILE_IgnisMons_Button_Blue, FALSE
# 132 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 17, METATILE_IgnisMons_Button_Blue, FALSE
	return


IgnisMons_2F_Script_ShowGreen::
# 138 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 6, 4, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 139 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 7, 5, METATILE_IgnisMons_Barrier_Green, TRUE
# 140 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 4, METATILE_IgnisMons_Barrier_Green, TRUE
# 141 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 13, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 142 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 12, METATILE_IgnisMons_Barrier_Green, TRUE
# 143 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 27, METATILE_IgnisMons_Barrier_Green, TRUE
# 144 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 26, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 145 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 34, METATILE_IgnisMons_Barrier_Green, TRUE
# 146 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 33, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 148 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 8, METATILE_IgnisMons_Button_Green, FALSE
# 149 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 12, METATILE_IgnisMons_Button_Green_Shadow, FALSE
# 150 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 33, METATILE_IgnisMons_Button_Green, FALSE
# 151 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 11, 26, METATILE_IgnisMons_Button_Green, FALSE
	return


IgnisMons_2F_Script_HideRed::
# 160 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 161 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 25, METATILE_IgnisMons_Floor, FALSE
# 162 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 10, 28, METATILE_IgnisMons_Floor_Shadow, FALSE
# 163 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 11, 29, METATILE_IgnisMons_Floor, FALSE
# 164 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 35, METATILE_IgnisMons_Floor_Shadow, FALSE
# 165 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 36, METATILE_IgnisMons_Floor, FALSE
# 166 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 37, METATILE_IgnisMons_Floor_Shadow, FALSE
# 167 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 38, METATILE_IgnisMons_Floor, FALSE
# 169 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 32, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_2F_Script_HideBlue::
# 174 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 7, METATILE_IgnisMons_Floor_Shadow, FALSE
# 175 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 7, METATILE_IgnisMons_Floor_Shadow, FALSE
# 176 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 10, 8, METATILE_IgnisMons_Floor_Shadow, FALSE
# 177 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 8, METATILE_IgnisMons_Floor, FALSE
# 178 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 9, METATILE_IgnisMons_Floor, FALSE
# 179 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 16, 25, METATILE_IgnisMons_Floor_Shadow, FALSE
# 180 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 17, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 181 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 25, METATILE_IgnisMons_Floor, FALSE
# 182 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 3, 29, METATILE_IgnisMons_Floor, FALSE
# 183 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 4, 28, METATILE_IgnisMons_Floor_Shadow, FALSE
# 184 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 5, 29, METATILE_IgnisMons_Floor, FALSE
# 185 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 32, METATILE_IgnisMons_Floor, FALSE
# 186 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 187 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 16, 32, METATILE_IgnisMons_Floor, FALSE
# 188 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 17, 36, METATILE_IgnisMons_Floor_Shadow, FALSE
# 189 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 35, METATILE_IgnisMons_Floor, FALSE
# 190 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 37, METATILE_IgnisMons_Floor, FALSE
# 192 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_White, FALSE
# 193 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 38, METATILE_IgnisMons_Button_White, FALSE
# 194 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 11, METATILE_IgnisMons_Button_White, FALSE
# 195 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 17, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_2F_Script_HideGreen::
# 201 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 6, 4, METATILE_IgnisMons_Floor_Shadow, FALSE
# 202 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 7, 5, METATILE_IgnisMons_Floor, FALSE
# 203 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 4, METATILE_IgnisMons_Floor, FALSE
# 204 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 13, METATILE_IgnisMons_Floor_Shadow, FALSE
# 205 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 12, METATILE_IgnisMons_Floor, FALSE
# 206 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 27, METATILE_IgnisMons_Floor, FALSE
# 207 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 26, METATILE_IgnisMons_Floor_Shadow, FALSE
# 208 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 34, METATILE_IgnisMons_Floor, FALSE
# 209 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 33, METATILE_IgnisMons_Floor, FALSE
# 211 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 8, METATILE_IgnisMons_Button_White, FALSE
# 212 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 12, METATILE_IgnisMons_Button_White_Shadow, FALSE
# 213 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 33, METATILE_IgnisMons_Button_White, FALSE
# 214 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 11, 26, METATILE_IgnisMons_Button_White, FALSE
	return

