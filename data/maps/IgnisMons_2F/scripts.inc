IgnisMons_2F_MapScripts::
# 3 "data/maps/IgnisMons_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgnisMons_2F_MapScripts_MAP_SCRIPT_ON_RESUME
# 9 "data/maps/IgnisMons_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IgnisMons_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IgnisMons_2F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_OnResume
	return

IgnisMons_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/IgnisMons_2F/scripts.pory"
	map_script_2 VAR_FALSEFLOOR_WAIT, 1, IgnisMons_2F_FalseFloorContinue
	.2byte 0


IgnisMons_2F_Script_OnResume::
# 17 "data/maps/IgnisMons_2F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
# 18 "data/maps/IgnisMons_2F/scripts.pory"
	switch VAR_IGNISMONS_STATE
# 19 "data/maps/IgnisMons_2F/scripts.pory"
	case 0, IgnisMons_2F_Script_OnResume_3
# 21 "data/maps/IgnisMons_2F/scripts.pory"
	case 1, IgnisMons_2F_Script_OnResume_4
# 23 "data/maps/IgnisMons_2F/scripts.pory"
	case 2, IgnisMons_2F_Script_OnResume_5
# 25 "data/maps/IgnisMons_2F/scripts.pory"
	case 3, IgnisMons_2F_Script_OnResume_6
# 28 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Init
IgnisMons_2F_Script_OnResume_1:
	end

IgnisMons_2F_Script_OnResume_3:
# 20 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Init
	goto IgnisMons_2F_Script_OnResume_1

IgnisMons_2F_Script_OnResume_4:
# 22 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Red
	goto IgnisMons_2F_Script_OnResume_1

IgnisMons_2F_Script_OnResume_5:
# 24 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Blue
	goto IgnisMons_2F_Script_OnResume_1

IgnisMons_2F_Script_OnResume_6:
# 26 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Green
	goto IgnisMons_2F_Script_OnResume_1


IgnisMons_2F_Script_SetBarriers_Init::
# 34 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowRed
# 35 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowBlue
# 36 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowGreen
	return


IgnisMons_2F_Script_SetBarriers_Red::
# 42 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowBlue
# 43 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowGreen
# 45 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_HideRed
	return


IgnisMons_2F_Script_SetBarriers_Blue::
# 51 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowRed
# 52 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowGreen
# 54 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_HideBlue
	return


IgnisMons_2F_Script_SetBarriers_Green::
# 60 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowRed
# 61 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowBlue
# 63 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_HideGreen
	return


IgnisMons_2F_Script_RedButton::
# 69 "data/maps/IgnisMons_2F/scripts.pory"
	lockall
# 70 "data/maps/IgnisMons_2F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_2F_Script_RedButton_2
IgnisMons_2F_Script_RedButton_1:
# 76 "data/maps/IgnisMons_2F/scripts.pory"
	releaseall
	end

IgnisMons_2F_Script_RedButton_2:
# 71 "data/maps/IgnisMons_2F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 72 "data/maps/IgnisMons_2F/scripts.pory"
	playse SE_FU_ZAKU
# 73 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Red
# 74 "data/maps/IgnisMons_2F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_2F_Script_RedButton_1


IgnisMons_2F_Script_BlueButton::
# 81 "data/maps/IgnisMons_2F/scripts.pory"
	lockall
# 82 "data/maps/IgnisMons_2F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_2F_Script_BlueButton_2
IgnisMons_2F_Script_BlueButton_1:
# 88 "data/maps/IgnisMons_2F/scripts.pory"
	releaseall
	end

IgnisMons_2F_Script_BlueButton_2:
# 83 "data/maps/IgnisMons_2F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 84 "data/maps/IgnisMons_2F/scripts.pory"
	playse SE_FU_ZAKU
# 85 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Blue
# 86 "data/maps/IgnisMons_2F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_2F_Script_BlueButton_1


IgnisMons_2F_Script_GreenButton::
# 93 "data/maps/IgnisMons_2F/scripts.pory"
	lockall
# 94 "data/maps/IgnisMons_2F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_2F_Script_GreenButton_2
IgnisMons_2F_Script_GreenButton_1:
# 100 "data/maps/IgnisMons_2F/scripts.pory"
	releaseall
	end

IgnisMons_2F_Script_GreenButton_2:
# 95 "data/maps/IgnisMons_2F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 96 "data/maps/IgnisMons_2F/scripts.pory"
	playse SE_FU_ZAKU
# 97 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Green
# 98 "data/maps/IgnisMons_2F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_2F_Script_GreenButton_1


IgnisMons_2F_Script_ShowRed::
# 105 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 24, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 106 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 25, METATILE_IgnisMons_Barrier_Red, TRUE
# 107 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 10, 28, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 108 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 11, 29, METATILE_IgnisMons_Barrier_Red, TRUE
# 109 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 35, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 110 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 36, METATILE_IgnisMons_Barrier_Red, TRUE
# 111 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 37, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 112 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 38, METATILE_IgnisMons_Barrier_Red, TRUE
# 114 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 32, METATILE_IgnisMons_Button_Red, FALSE
	return


IgnisMons_2F_Script_ShowBlue::
# 119 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 7, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 120 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 7, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 121 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 10, 8, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 122 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 8, METATILE_IgnisMons_Barrier_Blue, TRUE
# 123 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 9, METATILE_IgnisMons_Barrier_Blue, TRUE
# 124 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 16, 25, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 125 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 17, 24, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 126 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 25, METATILE_IgnisMons_Barrier_Blue, TRUE
# 127 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 3, 29, METATILE_IgnisMons_Barrier_Blue, TRUE
# 128 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 4, 28, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 129 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 5, 29, METATILE_IgnisMons_Barrier_Blue, TRUE
# 130 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 32, METATILE_IgnisMons_Barrier_Blue, TRUE
# 131 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 31, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 132 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 16, 32, METATILE_IgnisMons_Barrier_Blue, TRUE
# 133 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 17, 36, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 134 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 35, METATILE_IgnisMons_Barrier_Blue, TRUE
# 135 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 37, METATILE_IgnisMons_Barrier_Blue, TRUE
# 137 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_Blue, FALSE
# 138 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 38, METATILE_IgnisMons_Button_Blue, FALSE
# 139 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 11, METATILE_IgnisMons_Button_Blue, FALSE
# 140 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 17, METATILE_IgnisMons_Button_Blue, FALSE
	return


IgnisMons_2F_Script_ShowGreen::
# 146 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 6, 4, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 147 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 7, 5, METATILE_IgnisMons_Barrier_Green, TRUE
# 148 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 4, METATILE_IgnisMons_Barrier_Green, TRUE
# 149 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 13, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 150 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 12, METATILE_IgnisMons_Barrier_Green, TRUE
# 151 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 27, METATILE_IgnisMons_Barrier_Green, TRUE
# 152 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 26, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 153 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 34, METATILE_IgnisMons_Barrier_Green, TRUE
# 154 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 33, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 156 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 8, METATILE_IgnisMons_Button_Green, FALSE
# 157 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 12, METATILE_IgnisMons_Button_Green_Shadow, FALSE
# 158 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 33, METATILE_IgnisMons_Button_Green, FALSE
# 159 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 11, 26, METATILE_IgnisMons_Button_Green, FALSE
	return


IgnisMons_2F_Script_HideRed::
# 165 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 166 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 25, METATILE_IgnisMons_Floor, FALSE
# 167 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 10, 28, METATILE_IgnisMons_Floor_Shadow, FALSE
# 168 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 11, 29, METATILE_IgnisMons_Floor, FALSE
# 169 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 35, METATILE_IgnisMons_Floor_Shadow, FALSE
# 170 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 36, METATILE_IgnisMons_Floor, FALSE
# 171 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 37, METATILE_IgnisMons_Floor_Shadow, FALSE
# 172 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 38, METATILE_IgnisMons_Floor, FALSE
# 174 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 32, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_2F_Script_HideBlue::
# 179 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 7, METATILE_IgnisMons_Floor_Shadow, FALSE
# 180 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 7, METATILE_IgnisMons_Floor_Shadow, FALSE
# 181 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 10, 8, METATILE_IgnisMons_Floor_Shadow, FALSE
# 182 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 8, METATILE_IgnisMons_Floor, FALSE
# 183 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 9, METATILE_IgnisMons_Floor, FALSE
# 184 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 16, 25, METATILE_IgnisMons_Floor_Shadow, FALSE
# 185 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 17, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 186 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 25, METATILE_IgnisMons_Floor, FALSE
# 187 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 3, 29, METATILE_IgnisMons_Floor, FALSE
# 188 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 4, 28, METATILE_IgnisMons_Floor_Shadow, FALSE
# 189 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 5, 29, METATILE_IgnisMons_Floor, FALSE
# 190 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 32, METATILE_IgnisMons_Floor, FALSE
# 191 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 192 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 16, 32, METATILE_IgnisMons_Floor, FALSE
# 193 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 17, 36, METATILE_IgnisMons_Floor_Shadow, FALSE
# 194 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 35, METATILE_IgnisMons_Floor, FALSE
# 195 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 18, 37, METATILE_IgnisMons_Floor, FALSE
# 197 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_White, FALSE
# 198 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 38, METATILE_IgnisMons_Button_White, FALSE
# 199 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 11, METATILE_IgnisMons_Button_White, FALSE
# 200 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 17, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_2F_Script_HideGreen::
# 206 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 6, 4, METATILE_IgnisMons_Floor_Shadow, FALSE
# 207 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 7, 5, METATILE_IgnisMons_Floor, FALSE
# 208 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 4, METATILE_IgnisMons_Floor, FALSE
# 209 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 13, METATILE_IgnisMons_Floor_Shadow, FALSE
# 210 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 13, 12, METATILE_IgnisMons_Floor, FALSE
# 211 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 14, 27, METATILE_IgnisMons_Floor, FALSE
# 212 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 15, 26, METATILE_IgnisMons_Floor_Shadow, FALSE
# 213 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 8, 34, METATILE_IgnisMons_Floor, FALSE
# 214 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 9, 33, METATILE_IgnisMons_Floor_Shadow, FALSE
# 216 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 8, METATILE_IgnisMons_Button_White, FALSE
# 217 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 12, 12, METATILE_IgnisMons_Button_White_Shadow, FALSE
# 218 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 2, 33, METATILE_IgnisMons_Button_White, FALSE
# 219 "data/maps/IgnisMons_2F/scripts.pory"
	setmetatile 11, 26, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_2F_FalseFloorContinue::
# 225 "data/maps/IgnisMons_2F/scripts.pory"
	lockall
# 226 "data/maps/IgnisMons_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 227 "data/maps/IgnisMons_2F/scripts.pory"
	waitmovement 0
# 228 "data/maps/IgnisMons_2F/scripts.pory"
	special FalseFloorMetatileUpdate
# 229 "data/maps/IgnisMons_2F/scripts.pory"
	call EventScript_FallDownFalseFloor
# 230 "data/maps/IgnisMons_2F/scripts.pory"
	releaseall
	end

