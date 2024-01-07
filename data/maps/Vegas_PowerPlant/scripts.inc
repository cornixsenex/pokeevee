Vegas_PowerPlant_MapScripts::
# 2 "data/maps/Vegas_PowerPlant/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Vegas_PowerPlant_MapScripts_MAP_SCRIPT_ON_RESUME
# 5 "data/maps/Vegas_PowerPlant/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Vegas_PowerPlant_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Vegas_PowerPlant_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Vegas_PowerPlant/scripts.pory"
	call Vegas_PowerPlant_OnResume
	return

Vegas_PowerPlant_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/Vegas_PowerPlant/scripts.pory"
	call Vegas_PowerPlant_OnTransition
	return


Vegas_PowerPlant_OnResume::
# 11 "data/maps/Vegas_PowerPlant/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Vegas_PowerPlant_OnResume_2
Vegas_PowerPlant_OnResume_1:
# 14 "data/maps/Vegas_PowerPlant/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Vegas_PowerPlant_OnResume_5
Vegas_PowerPlant_OnResume_4:
	end

Vegas_PowerPlant_OnResume_2:
# 12 "data/maps/Vegas_PowerPlant/scripts.pory"
	call Vegas_PowerPlant_EventScript_SetBarrierStateBlueButton
	goto Vegas_PowerPlant_OnResume_1

Vegas_PowerPlant_OnResume_5:
# 15 "data/maps/Vegas_PowerPlant/scripts.pory"
	call Vegas_PowerPlant_EventScript_SetBarrierStateGreenButton
	goto Vegas_PowerPlant_OnResume_4


Vegas_PowerPlant_OnTransition::
# 21 "data/maps/Vegas_PowerPlant/scripts.pory"
	setvar VAR_TEMP_1, 0
# 22 "data/maps/Vegas_PowerPlant/scripts.pory"
	setvar VAR_TEMP_2, 0
	end


Vegas_PowerPlant_EventScript_SetBarrierStateBlueButton::
# 28 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 12, 26, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 29 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 12, 27, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 30 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 12, 28, METATILE_BikeShop_Floor_Shadow_Top, 0
# 31 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 12, 29, METATILE_BikeShop_Floor_Normal, 0
# 32 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 12, 30, METATILE_BikeShop_Floor_Normal, 0
# 33 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 12, 31, METATILE_BikeShop_Wall_Edge_Top, 0
# 35 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 15, 14, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 36 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 15, 15, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 37 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 15, 16, METATILE_BikeShop_Floor_Shadow_Top, 0
# 38 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 15, 17, METATILE_BikeShop_Wall_Edge_Top, 0
# 40 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 18, 7, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 41 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 18, 8, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 42 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 18, 9, METATILE_BikeShop_Floor_Shadow_Top, 0
# 43 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 18, 10, METATILE_BikeShop_Floor_Normal, 0
# 44 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 18, 11, METATILE_BikeShop_Floor_Normal, 0
# 45 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 18, 12, METATILE_BikeShop_Wall_Edge_Top, 0
# 47 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 3, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 48 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 4, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 49 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 5, METATILE_BikeShop_Floor_Shadow_Top, 0
# 50 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 6, METATILE_BikeShop_Floor_Normal, 0
# 51 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 7, METATILE_BikeShop_Wall_Edge_Top, 0
# 53 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 38, 39, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 54 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 38, 31, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 55 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 38, 32, METATILE_BikeShop_Floor_Shadow_Top, 0
# 56 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 38, 33, METATILE_BikeShop_Floor_Normal, 0
# 57 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 38, 34, METATILE_BikeShop_Wall_Edge_Top, 0
# 60 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 8, 7, METATILE_BikeShop_Barrier_Green_Top, 1
# 61 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 8, 8, METATILE_BikeShop_Barrier_Green_TopMid, 1
# 62 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 8, 9, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 63 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 8, 10, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 64 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 8, 11, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 65 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 8, 12, METATILE_BikeShop_Barrier_Green_Bottom, 1
# 67 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 9, 35, METATILE_BikeShop_Barrier_Green_Top, 1
# 68 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 9, 36, METATILE_BikeShop_Barrier_Green_TopMid, 1
# 69 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 9, 37, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 70 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 9, 38, METATILE_BikeShop_Barrier_Green_Bottom, 1
# 72 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 26, 3, METATILE_BikeShop_Barrier_Green_Top, 1
# 73 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 26, 4, METATILE_BikeShop_Barrier_Green_TopMid, 1
# 74 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 26, 5, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 75 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 26, 6, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 76 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 26, 7, METATILE_BikeShop_Barrier_Green_Bottom, 1
# 78 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 27, 19, METATILE_BikeShop_Barrier_Green_Top, 1
# 79 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 27, 20, METATILE_BikeShop_Barrier_Green_TopMid, 1
# 80 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 27, 21, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 81 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 27, 22, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 82 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 27, 23, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 83 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 27, 24, METATILE_BikeShop_Barrier_Green_Bottom, 1
# 85 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 10, METATILE_BikeShop_Barrier_Green_Top, 1
# 86 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 11, METATILE_BikeShop_Barrier_Green_TopMid, 1
# 87 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 12, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 88 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 13, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 89 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 14, METATILE_BikeShop_Barrier_Green_Bottom, 1
# 91 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 32, 35, METATILE_BikeShop_Barrier_Green_Top, 1
# 92 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 32, 36, METATILE_BikeShop_Barrier_Green_TopMid, 1
# 93 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 32, 37, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 94 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 32, 38, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 95 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 32, 39, METATILE_BikeShop_Barrier_Green_Bottom, 1
# 97 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 6, 18, METATILE_BikeShop_Button_Pressed, 0
# 98 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 11, 2, METATILE_BikeShop_Button_Pressed, 0
# 99 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Pressed, 0
# 100 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 28, 13, METATILE_BikeShop_Button_Pressed, 0
# 101 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 35, 36, METATILE_BikeShop_Button_Pressed, 0
# 102 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 40, 21, METATILE_BikeShop_Button_Pressed, 0
# 103 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 34, 6, METATILE_BikeShop_Button_Pressed, 0
# 105 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 4, 18, METATILE_BikeShop_Button_Green, 0
# 106 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 11, 23, METATILE_BikeShop_Button_Green, 0
# 107 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Button_Green, 0
# 108 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 28, 5, METATILE_BikeShop_Button_Green, 0
# 109 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 38, 21, METATILE_BikeShop_Button_Green, 0
# 110 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 40, 38, METATILE_BikeShop_Button_Green, 0
	return


Vegas_PowerPlant_EventScript_SetBarrierStateGreenButton::
# 116 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 12, 26, METATILE_BikeShop_Barrier_Blue_Top, 1
# 117 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 12, 27, METATILE_BikeShop_Barrier_Blue_TopMid, 1
# 118 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 12, 28, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 119 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 12, 29, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 120 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 12, 30, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 121 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 12, 31, METATILE_BikeShop_Barrier_Blue_Bottom, 1
# 123 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 15, 14, METATILE_BikeShop_Barrier_Blue_Top, 1
# 124 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 15, 15, METATILE_BikeShop_Barrier_Blue_TopMid, 1
# 125 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 15, 16, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 126 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 15, 17, METATILE_BikeShop_Barrier_Blue_Bottom, 1
# 128 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 18, 7, METATILE_BikeShop_Barrier_Blue_Top, 1
# 129 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 18, 8, METATILE_BikeShop_Barrier_Blue_TopMid, 1
# 130 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 18, 9, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 131 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 18, 10, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 132 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 18, 11, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 133 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 18, 12, METATILE_BikeShop_Barrier_Blue_Bottom, 1
# 135 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 3, METATILE_BikeShop_Barrier_Blue_Top, 1
# 136 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 4, METATILE_BikeShop_Barrier_Blue_TopMid, 1
# 137 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 5, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 138 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 6, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 139 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 7, METATILE_BikeShop_Barrier_Blue_Bottom, 1
# 141 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 38, 39, METATILE_BikeShop_Barrier_Blue_Top, 1
# 142 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 38, 31, METATILE_BikeShop_Barrier_Blue_TopMid, 1
# 143 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 38, 32, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 144 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 38, 33, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 145 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 38, 34, METATILE_BikeShop_Barrier_Blue_Bottom, 1
# 148 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 8, 7, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 149 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 8, 8, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 150 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 8, 9, METATILE_BikeShop_Floor_Shadow_Top, 0
# 151 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 8, 10, METATILE_BikeShop_Floor_Normal, 0
# 152 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 8, 11, METATILE_BikeShop_Floor_Normal, 0
# 153 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 8, 12, METATILE_BikeShop_Wall_Edge_Top, 0
# 155 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 9, 35, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 156 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 9, 36, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 157 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 9, 37, METATILE_BikeShop_Floor_Shadow_Top, 0
# 158 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 9, 38, METATILE_BikeShop_Wall_Edge_Top, 0
# 160 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 26, 3, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 161 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 26, 4, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 162 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 26, 5, METATILE_BikeShop_Floor_Shadow_Top, 0
# 163 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 26, 6, METATILE_BikeShop_Floor_Normal, 0
# 164 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 26, 7, METATILE_BikeShop_Wall_Edge_Top, 0
# 166 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 27, 19, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 167 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 27, 20, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 168 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 27, 21, METATILE_BikeShop_Floor_Shadow_Top, 1
# 169 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 27, 22, METATILE_BikeShop_Floor_Normal, 0
# 170 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 27, 23, METATILE_BikeShop_Floor_Normal, 0
# 171 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 27, 24, METATILE_BikeShop_Wall_Edge_Top, 0
# 173 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 10, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 174 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 11, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 175 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 12, METATILE_BikeShop_Floor_Shadow_Top, 0
# 176 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 13, METATILE_BikeShop_Floor_Normal, 0
# 177 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 30, 14, METATILE_BikeShop_Wall_Edge_Top, 0
# 179 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 32, 35, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 180 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 32, 36, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 181 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 32, 37, METATILE_BikeShop_Floor_Shadow_Top, 0
# 182 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 32, 38, METATILE_BikeShop_Floor_Normal, 0
# 183 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 32, 39, METATILE_BikeShop_Wall_Edge_Top, 0
# 185 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 6, 18, METATILE_BikeShop_Button_Blue, 0
# 186 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 11, 2, METATILE_BikeShop_Button_Blue, 0
# 187 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Blue, 0
# 188 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 28, 13, METATILE_BikeShop_Button_Blue, 0
# 189 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 35, 36, METATILE_BikeShop_Button_Blue, 0
# 190 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 40, 21, METATILE_BikeShop_Button_Blue, 0
# 191 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 34, 6, METATILE_BikeShop_Button_Blue, 0
# 193 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 4, 18, METATILE_BikeShop_Button_Pressed, 0
# 194 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 11, 23, METATILE_BikeShop_Button_Pressed, 0
# 195 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Button_Pressed, 0
# 196 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 28, 5, METATILE_BikeShop_Button_Pressed, 0
# 197 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 38, 21, METATILE_BikeShop_Button_Pressed, 0
# 198 "data/maps/Vegas_PowerPlant/scripts.pory"
	setmetatile 40, 38, METATILE_BikeShop_Button_Pressed, 0
	return


Vegas_PowerPlant_EventScript_BlueButton::
# 203 "data/maps/Vegas_PowerPlant/scripts.pory"
	lockall
# 204 "data/maps/Vegas_PowerPlant/scripts.pory"
	setvar VAR_TEMP_1, 1
# 205 "data/maps/Vegas_PowerPlant/scripts.pory"
	setvar VAR_TEMP_2, 0
# 206 "data/maps/Vegas_PowerPlant/scripts.pory"
	playse SE_PIN
# 207 "data/maps/Vegas_PowerPlant/scripts.pory"
	call Vegas_PowerPlant_EventScript_SetBarrierStateBlueButton
# 208 "data/maps/Vegas_PowerPlant/scripts.pory"
	special DrawWholeMapView
# 209 "data/maps/Vegas_PowerPlant/scripts.pory"
	releaseall
	end


Vegas_PowerPlant_EventScript_GreenButton::
# 214 "data/maps/Vegas_PowerPlant/scripts.pory"
	lockall
# 215 "data/maps/Vegas_PowerPlant/scripts.pory"
	setvar VAR_TEMP_1, 0
# 216 "data/maps/Vegas_PowerPlant/scripts.pory"
	setvar VAR_TEMP_2, 1
# 217 "data/maps/Vegas_PowerPlant/scripts.pory"
	playse SE_PIN
# 218 "data/maps/Vegas_PowerPlant/scripts.pory"
	call Vegas_PowerPlant_EventScript_SetBarrierStateGreenButton
# 219 "data/maps/Vegas_PowerPlant/scripts.pory"
	special DrawWholeMapView
# 220 "data/maps/Vegas_PowerPlant/scripts.pory"
	releaseall
	end

