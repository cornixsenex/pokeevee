IgnisMons_1F_MapScripts::
# 14 "data/maps/IgnisMons_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgnisMons_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

IgnisMons_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 15 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers
	return


IgnisMons_1F_Script_SetBarriers::
# 21 "data/maps/IgnisMons_1F/scripts.pory"
	switch VAR_IGNISMONS_STATE
# 22 "data/maps/IgnisMons_1F/scripts.pory"
	case 0, IgnisMons_1F_Script_SetBarriers_3
# 24 "data/maps/IgnisMons_1F/scripts.pory"
	case 1, IgnisMons_1F_Script_SetBarriers_4
# 26 "data/maps/IgnisMons_1F/scripts.pory"
	case 2, IgnisMons_1F_Script_SetBarriers_5
# 28 "data/maps/IgnisMons_1F/scripts.pory"
	case 3, IgnisMons_1F_Script_SetBarriers_6
# 31 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Init
IgnisMons_1F_Script_SetBarriers_1:
	end

IgnisMons_1F_Script_SetBarriers_3:
# 23 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Init
	goto IgnisMons_1F_Script_SetBarriers_1

IgnisMons_1F_Script_SetBarriers_4:
# 25 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Red
	goto IgnisMons_1F_Script_SetBarriers_1

IgnisMons_1F_Script_SetBarriers_5:
# 27 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Blue
	goto IgnisMons_1F_Script_SetBarriers_1

IgnisMons_1F_Script_SetBarriers_6:
# 29 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Green
	goto IgnisMons_1F_Script_SetBarriers_1


IgnisMons_1F_Script_SetBarriers_Init::
# 37 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowRed
# 38 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowBlue
# 39 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowGreen
	return


IgnisMons_1F_Script_RedButton::
# 45 "data/maps/IgnisMons_1F/scripts.pory"
	lockall
# 46 "data/maps/IgnisMons_1F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_1F_Script_RedButton_2
IgnisMons_1F_Script_RedButton_1:
# 52 "data/maps/IgnisMons_1F/scripts.pory"
	releaseall
	end

IgnisMons_1F_Script_RedButton_2:
# 47 "data/maps/IgnisMons_1F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 48 "data/maps/IgnisMons_1F/scripts.pory"
	playse SE_PIN
# 49 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Red
# 50 "data/maps/IgnisMons_1F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_1F_Script_RedButton_1


IgnisMons_1F_Script_BlueButton::
# 57 "data/maps/IgnisMons_1F/scripts.pory"
	lockall
# 58 "data/maps/IgnisMons_1F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_1F_Script_BlueButton_2
IgnisMons_1F_Script_BlueButton_1:
# 64 "data/maps/IgnisMons_1F/scripts.pory"
	releaseall
	end

IgnisMons_1F_Script_BlueButton_2:
# 59 "data/maps/IgnisMons_1F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 60 "data/maps/IgnisMons_1F/scripts.pory"
	playse SE_PIN
# 61 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Blue
# 62 "data/maps/IgnisMons_1F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_1F_Script_BlueButton_1


IgnisMons_1F_Script_GreenButton::
# 69 "data/maps/IgnisMons_1F/scripts.pory"
	lockall
# 70 "data/maps/IgnisMons_1F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_1F_Script_GreenButton_2
IgnisMons_1F_Script_GreenButton_1:
# 76 "data/maps/IgnisMons_1F/scripts.pory"
	releaseall
	end

IgnisMons_1F_Script_GreenButton_2:
# 71 "data/maps/IgnisMons_1F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 72 "data/maps/IgnisMons_1F/scripts.pory"
	playse SE_PIN
# 73 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Green
# 74 "data/maps/IgnisMons_1F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_1F_Script_GreenButton_1


IgnisMons_1F_Script_SetBarriers_Red::
# 81 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowBlue
# 82 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowGreen
# 84 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_HideRed
	return


IgnisMons_1F_Script_SetBarriers_Blue::
# 91 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowRed
# 92 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowGreen
# 94 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_HideBlue
	return


IgnisMons_1F_Script_SetBarriers_Green::
# 101 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowRed
# 102 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowBlue
# 104 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_HideGreen
	return


IgnisMons_1F_Script_ShowRed::
# 111 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 1, 31, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 112 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 2, 32, METATILE_IgnisMons_Barrier_Red, TRUE
# 113 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 4, 31, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 114 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 5, 32, METATILE_IgnisMons_Barrier_Red, TRUE
# 115 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 4, 24, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 116 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 5, 25, METATILE_IgnisMons_Barrier_Red, TRUE
# 117 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 14, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 118 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 15, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 119 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 16, METATILE_IgnisMons_Barrier_Red, TRUE
# 120 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 17, METATILE_IgnisMons_Barrier_Red, TRUE
# 121 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 7, 13, METATILE_IgnisMons_Barrier_Red, TRUE
# 122 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 7, 18, METATILE_IgnisMons_Barrier_Red, TRUE
# 123 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 14, METATILE_IgnisMons_Barrier_Red, TRUE
# 124 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 15, METATILE_IgnisMons_Barrier_Red, TRUE
# 125 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 16, METATILE_IgnisMons_Barrier_Red, TRUE
# 126 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 17, METATILE_IgnisMons_Barrier_Red, TRUE
# 128 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 1, 25, METATILE_IgnisMons_Button_Red_Shadow, FALSE
	return


IgnisMons_1F_Script_ShowBlue::
# 134 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 14, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 135 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 15, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 136 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 16, METATILE_IgnisMons_Barrier_Blue, TRUE
# 137 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 17, METATILE_IgnisMons_Barrier_Blue, TRUE
# 138 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 12, 13, METATILE_IgnisMons_Barrier_Blue, TRUE
# 139 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 12, 18, METATILE_IgnisMons_Barrier_Blue, TRUE
# 140 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Barrier_Blue, TRUE
# 141 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 15, METATILE_IgnisMons_Barrier_Blue, TRUE
# 142 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 16, METATILE_IgnisMons_Barrier_Blue, TRUE
# 143 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 17, METATILE_IgnisMons_Barrier_Blue, TRUE
# 144 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 14, 25, METATILE_IgnisMons_Barrier_Blue, TRUE
# 145 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 15, 24, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 146 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 16, 25, METATILE_IgnisMons_Barrier_Blue, TRUE
# 147 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 15, 31, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 148 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 16, 32, METATILE_IgnisMons_Barrier_Blue, TRUE
# 149 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 17, 31, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 151 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 18, 25, METATILE_IgnisMons_Button_Blue, FALSE
	return


IgnisMons_1F_Script_ShowGreen::
# 157 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 9, 24, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 158 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 9, 25, METATILE_IgnisMons_Barrier_Green, TRUE
# 159 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 10, 24, METATILE_IgnisMons_Barrier_Green, TRUE
# 160 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 10, 25, METATILE_IgnisMons_Barrier_Green, TRUE
	return


IgnisMons_1F_Script_HideRed::
# 167 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 1, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 168 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 2, 32, METATILE_IgnisMons_Floor, FALSE
# 169 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 4, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 170 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 5, 32, METATILE_IgnisMons_Floor, FALSE
# 171 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 4, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 172 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 5, 25, METATILE_IgnisMons_Floor, FALSE
# 173 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 14, METATILE_IgnisMons_Floor_Shadow, FALSE
# 174 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 15, METATILE_IgnisMons_Floor_Shadow, FALSE
# 175 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 16, METATILE_IgnisMons_Floor, FALSE
# 176 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 17, METATILE_IgnisMons_Floor, FALSE
# 177 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 7, 13, METATILE_IgnisMons_Floor, FALSE
# 178 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 7, 18, METATILE_IgnisMons_Floor, FALSE
# 179 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 14, METATILE_IgnisMons_Floor, FALSE
# 180 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 15, METATILE_IgnisMons_Floor, FALSE
# 181 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 16, METATILE_IgnisMons_Floor, FALSE
# 182 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 17, METATILE_IgnisMons_Floor, FALSE
# 184 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 1, 25, METATILE_IgnisMons_Button_White_Shadow, FALSE
	return


IgnisMons_1F_Script_HideBlue::
# 191 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 14, METATILE_IgnisMons_Floor_Shadow, FALSE
# 192 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 15, METATILE_IgnisMons_Floor_Shadow, FALSE
# 193 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 16, METATILE_IgnisMons_Floor, FALSE
# 194 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 17, METATILE_IgnisMons_Floor, FALSE
# 195 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 12, 13, METATILE_IgnisMons_Floor, FALSE
# 196 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 12, 18, METATILE_IgnisMons_Floor, FALSE
# 197 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Floor, FALSE
# 198 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 15, METATILE_IgnisMons_Floor, FALSE
# 199 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 16, METATILE_IgnisMons_Floor, FALSE
# 200 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 17, METATILE_IgnisMons_Floor, FALSE
# 201 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 14, 25, METATILE_IgnisMons_Floor, FALSE
# 202 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 15, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 203 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 16, 25, METATILE_IgnisMons_Floor, FALSE
# 204 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 15, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 205 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 16, 32, METATILE_IgnisMons_Floor, FALSE
# 206 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 17, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 208 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 18, 25, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_1F_Script_HideGreen::
# 214 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 9, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 215 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 9, 25, METATILE_IgnisMons_Floor, FALSE
# 216 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 10, 24, METATILE_IgnisMons_Floor, FALSE
# 217 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 10, 25, METATILE_IgnisMons_Floor, FALSE
	return

