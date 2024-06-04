IgnisMons_1F_MapScripts::
# 3 "data/maps/IgnisMons_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgnisMons_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

IgnisMons_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers
	return


IgnisMons_1F_Script_SetBarriers::
# 10 "data/maps/IgnisMons_1F/scripts.pory"
	switch VAR_IGNISMONS_STATE
# 11 "data/maps/IgnisMons_1F/scripts.pory"
	case 0, IgnisMons_1F_Script_SetBarriers_3
# 13 "data/maps/IgnisMons_1F/scripts.pory"
	case 1, IgnisMons_1F_Script_SetBarriers_4
# 15 "data/maps/IgnisMons_1F/scripts.pory"
	case 2, IgnisMons_1F_Script_SetBarriers_5
# 17 "data/maps/IgnisMons_1F/scripts.pory"
	case 3, IgnisMons_1F_Script_SetBarriers_6
# 20 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Init
IgnisMons_1F_Script_SetBarriers_1:
	end

IgnisMons_1F_Script_SetBarriers_3:
# 12 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Init
	goto IgnisMons_1F_Script_SetBarriers_1

IgnisMons_1F_Script_SetBarriers_4:
# 14 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Red
	goto IgnisMons_1F_Script_SetBarriers_1

IgnisMons_1F_Script_SetBarriers_5:
# 16 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Blue
	goto IgnisMons_1F_Script_SetBarriers_1

IgnisMons_1F_Script_SetBarriers_6:
# 18 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Green
	goto IgnisMons_1F_Script_SetBarriers_1


IgnisMons_1F_Script_SetBarriers_Init::
# 26 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowRed
# 27 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowBlue
# 28 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowGreen
	return


IgnisMons_1F_Script_RedButton::
# 34 "data/maps/IgnisMons_1F/scripts.pory"
	lockall
# 35 "data/maps/IgnisMons_1F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_1F_Script_RedButton_2
IgnisMons_1F_Script_RedButton_1:
# 41 "data/maps/IgnisMons_1F/scripts.pory"
	releaseall
	end

IgnisMons_1F_Script_RedButton_2:
# 36 "data/maps/IgnisMons_1F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 37 "data/maps/IgnisMons_1F/scripts.pory"
	playse SE_PIN
# 38 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Red
# 39 "data/maps/IgnisMons_1F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_1F_Script_RedButton_1


IgnisMons_1F_Script_BlueButton::
# 46 "data/maps/IgnisMons_1F/scripts.pory"
	lockall
# 47 "data/maps/IgnisMons_1F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_1F_Script_BlueButton_2
IgnisMons_1F_Script_BlueButton_1:
# 53 "data/maps/IgnisMons_1F/scripts.pory"
	releaseall
	end

IgnisMons_1F_Script_BlueButton_2:
# 48 "data/maps/IgnisMons_1F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 49 "data/maps/IgnisMons_1F/scripts.pory"
	playse SE_PIN
# 50 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Blue
# 51 "data/maps/IgnisMons_1F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_1F_Script_BlueButton_1


IgnisMons_1F_Script_GreenButton::
# 58 "data/maps/IgnisMons_1F/scripts.pory"
	lockall
# 59 "data/maps/IgnisMons_1F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_1F_Script_GreenButton_2
IgnisMons_1F_Script_GreenButton_1:
# 65 "data/maps/IgnisMons_1F/scripts.pory"
	releaseall
	end

IgnisMons_1F_Script_GreenButton_2:
# 60 "data/maps/IgnisMons_1F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 61 "data/maps/IgnisMons_1F/scripts.pory"
	playse SE_PIN
# 62 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Green
# 63 "data/maps/IgnisMons_1F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_1F_Script_GreenButton_1


IgnisMons_1F_Script_SetBarriers_Red::
# 70 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowBlue
# 71 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowGreen
# 73 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_HideRed
	return


IgnisMons_1F_Script_SetBarriers_Blue::
# 80 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowRed
# 81 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowGreen
# 83 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_HideBlue
	return


IgnisMons_1F_Script_SetBarriers_Green::
# 90 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowRed
# 91 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowBlue
# 93 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_HideGreen
	return


IgnisMons_1F_Script_ShowRed::
# 100 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 1, 31, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 101 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 2, 32, METATILE_IgnisMons_Barrier_Red, TRUE
# 102 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 4, 31, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 103 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 5, 32, METATILE_IgnisMons_Barrier_Red, TRUE
# 104 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 4, 24, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 105 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 5, 25, METATILE_IgnisMons_Barrier_Red, TRUE
# 106 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 14, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 107 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 15, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 108 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 16, METATILE_IgnisMons_Barrier_Red, TRUE
# 109 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 17, METATILE_IgnisMons_Barrier_Red, TRUE
# 110 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 7, 18, METATILE_IgnisMons_Barrier_Red, TRUE
# 111 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 7, 18, METATILE_IgnisMons_Barrier_Red, TRUE
# 113 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 1, 25, METATILE_IgnisMons_Button_Red_Shadow, FALSE
	return


IgnisMons_1F_Script_ShowBlue::
# 119 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 14, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 120 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 15, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 121 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 16, METATILE_IgnisMons_Barrier_Blue, TRUE
# 122 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 17, METATILE_IgnisMons_Barrier_Blue, TRUE
# 123 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 12, 13, METATILE_IgnisMons_Barrier_Blue, TRUE
# 124 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 12, 18, METATILE_IgnisMons_Barrier_Blue, TRUE
# 125 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Barrier_Blue, TRUE
# 126 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 15, METATILE_IgnisMons_Barrier_Blue, TRUE
# 127 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 16, METATILE_IgnisMons_Barrier_Blue, TRUE
# 128 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 17, METATILE_IgnisMons_Barrier_Blue, TRUE
# 129 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 14, 25, METATILE_IgnisMons_Barrier_Blue, TRUE
# 130 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 15, 24, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 131 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 16, 25, METATILE_IgnisMons_Barrier_Blue, TRUE
# 132 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 15, 31, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 133 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 16, 32, METATILE_IgnisMons_Barrier_Blue, TRUE
# 134 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 17, 31, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 136 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 18, 25, METATILE_IgnisMons_Button_Blue, FALSE
	return


IgnisMons_1F_Script_ShowGreen::
# 142 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 9, 24, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 143 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 9, 25, METATILE_IgnisMons_Barrier_Green, TRUE
# 144 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 10, 24, METATILE_IgnisMons_Barrier_Green, TRUE
# 145 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 10, 25, METATILE_IgnisMons_Barrier_Green, TRUE
	return


IgnisMons_1F_Script_HideRed::
# 152 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 1, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 153 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 2, 32, METATILE_IgnisMons_Floor, FALSE
# 154 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 4, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 155 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 5, 32, METATILE_IgnisMons_Floor, FALSE
# 156 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 4, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 157 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 5, 25, METATILE_IgnisMons_Floor, FALSE
# 158 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 14, METATILE_IgnisMons_Floor_Shadow, FALSE
# 159 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 15, METATILE_IgnisMons_Floor_Shadow, FALSE
# 160 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 16, METATILE_IgnisMons_Floor, FALSE
# 161 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 17, METATILE_IgnisMons_Floor, FALSE
# 162 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 7, 18, METATILE_IgnisMons_Floor, FALSE
# 163 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 7, 18, METATILE_IgnisMons_Floor, FALSE
# 165 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 1, 25, METATILE_IgnisMons_Button_White_Shadow, FALSE
	return


IgnisMons_1F_Script_HideBlue::
# 172 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 14, METATILE_IgnisMons_Floor_Shadow, FALSE
# 173 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 15, METATILE_IgnisMons_Floor_Shadow, FALSE
# 174 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 16, METATILE_IgnisMons_Floor, FALSE
# 175 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 17, METATILE_IgnisMons_Floor, FALSE
# 176 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 12, 13, METATILE_IgnisMons_Floor, FALSE
# 177 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 12, 18, METATILE_IgnisMons_Floor, FALSE
# 178 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Floor, FALSE
# 179 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 15, METATILE_IgnisMons_Floor, FALSE
# 180 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 16, METATILE_IgnisMons_Floor, FALSE
# 181 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 17, METATILE_IgnisMons_Floor, FALSE
# 182 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 14, 25, METATILE_IgnisMons_Floor, FALSE
# 183 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 15, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 184 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 16, 25, METATILE_IgnisMons_Floor, FALSE
# 185 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 15, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 186 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 16, 32, METATILE_IgnisMons_Floor, FALSE
# 187 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 17, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 189 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 18, 25, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_1F_Script_HideGreen::
# 195 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 9, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 196 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 9, 25, METATILE_IgnisMons_Floor, FALSE
# 197 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 10, 24, METATILE_IgnisMons_Floor, FALSE
# 198 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 10, 25, METATILE_IgnisMons_Floor, FALSE
	return

