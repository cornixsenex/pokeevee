IgnisMons_1F_MapScripts::
# 14 "data/maps/IgnisMons_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgnisMons_1F_MapScripts_MAP_SCRIPT_ON_RESUME
# 19 "data/maps/IgnisMons_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IgnisMons_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IgnisMons_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 15 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_OnResume
	return

IgnisMons_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 20 "data/maps/IgnisMons_1F/scripts.pory"
	map_script_2 VAR_FALSEFLOOR_WAIT, 1, Common_Script_FalseFloorContinue
	.2byte 0


IgnisMons_1F_Script_OnResume::
# 28 "data/maps/IgnisMons_1F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
# 29 "data/maps/IgnisMons_1F/scripts.pory"
	switch VAR_IGNISMONS_STATE
# 30 "data/maps/IgnisMons_1F/scripts.pory"
	case 0, IgnisMons_1F_Script_OnResume_3
# 32 "data/maps/IgnisMons_1F/scripts.pory"
	case 1, IgnisMons_1F_Script_OnResume_4
# 34 "data/maps/IgnisMons_1F/scripts.pory"
	case 2, IgnisMons_1F_Script_OnResume_5
# 36 "data/maps/IgnisMons_1F/scripts.pory"
	case 3, IgnisMons_1F_Script_OnResume_6
# 39 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Init
IgnisMons_1F_Script_OnResume_1:
	end

IgnisMons_1F_Script_OnResume_3:
# 31 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Init
	goto IgnisMons_1F_Script_OnResume_1

IgnisMons_1F_Script_OnResume_4:
# 33 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Red
	goto IgnisMons_1F_Script_OnResume_1

IgnisMons_1F_Script_OnResume_5:
# 35 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Blue
	goto IgnisMons_1F_Script_OnResume_1

IgnisMons_1F_Script_OnResume_6:
# 37 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Green
	goto IgnisMons_1F_Script_OnResume_1


IgnisMons_1F_Script_SetBarriers_Init::
# 45 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowRed
# 46 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowBlue
# 47 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowGreen
	return


IgnisMons_1F_Script_RedButton::
# 53 "data/maps/IgnisMons_1F/scripts.pory"
	lockall
# 54 "data/maps/IgnisMons_1F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_1F_Script_RedButton_2
IgnisMons_1F_Script_RedButton_1:
# 60 "data/maps/IgnisMons_1F/scripts.pory"
	releaseall
	end

IgnisMons_1F_Script_RedButton_2:
# 55 "data/maps/IgnisMons_1F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 56 "data/maps/IgnisMons_1F/scripts.pory"
	playse SE_FU_ZAKU
# 57 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Red
# 58 "data/maps/IgnisMons_1F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_1F_Script_RedButton_1


IgnisMons_1F_Script_BlueButton::
# 65 "data/maps/IgnisMons_1F/scripts.pory"
	lockall
# 66 "data/maps/IgnisMons_1F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_1F_Script_BlueButton_2
IgnisMons_1F_Script_BlueButton_1:
# 72 "data/maps/IgnisMons_1F/scripts.pory"
	releaseall
	end

IgnisMons_1F_Script_BlueButton_2:
# 67 "data/maps/IgnisMons_1F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 68 "data/maps/IgnisMons_1F/scripts.pory"
	playse SE_FU_ZAKU
# 69 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Blue
# 70 "data/maps/IgnisMons_1F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_1F_Script_BlueButton_1


IgnisMons_1F_Script_GreenButton::
# 77 "data/maps/IgnisMons_1F/scripts.pory"
	lockall
# 78 "data/maps/IgnisMons_1F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_1F_Script_GreenButton_2
IgnisMons_1F_Script_GreenButton_1:
# 84 "data/maps/IgnisMons_1F/scripts.pory"
	releaseall
	end

IgnisMons_1F_Script_GreenButton_2:
# 79 "data/maps/IgnisMons_1F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 80 "data/maps/IgnisMons_1F/scripts.pory"
	playse SE_FU_ZAKU
# 81 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_SetBarriers_Green
# 82 "data/maps/IgnisMons_1F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_1F_Script_GreenButton_1


IgnisMons_1F_Script_SetBarriers_Red::
# 89 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowBlue
# 90 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowGreen
# 92 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_HideRed
	return


IgnisMons_1F_Script_SetBarriers_Blue::
# 99 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowRed
# 100 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowGreen
# 102 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_HideBlue
	return


IgnisMons_1F_Script_SetBarriers_Green::
# 109 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowRed
# 110 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_ShowBlue
# 112 "data/maps/IgnisMons_1F/scripts.pory"
	call IgnisMons_1F_Script_HideGreen
	return


IgnisMons_1F_Script_ShowRed::
# 119 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 1, 31, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 120 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 2, 32, METATILE_IgnisMons_Barrier_Red, TRUE
# 121 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 4, 31, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 122 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 5, 32, METATILE_IgnisMons_Barrier_Red, TRUE
# 123 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 4, 24, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 124 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 5, 25, METATILE_IgnisMons_Barrier_Red, TRUE
# 125 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 14, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 126 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 15, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 127 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 16, METATILE_IgnisMons_Barrier_Red, TRUE
# 128 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 17, METATILE_IgnisMons_Barrier_Red, TRUE
# 129 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 7, 13, METATILE_IgnisMons_Barrier_Red, TRUE
# 130 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 7, 18, METATILE_IgnisMons_Barrier_Red, TRUE
# 131 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 14, METATILE_IgnisMons_Barrier_Red, TRUE
# 132 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 15, METATILE_IgnisMons_Barrier_Red, TRUE
# 133 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 16, METATILE_IgnisMons_Barrier_Red, TRUE
# 134 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 17, METATILE_IgnisMons_Barrier_Red, TRUE
# 136 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 1, 25, METATILE_IgnisMons_Button_Red_Shadow, FALSE
	return


IgnisMons_1F_Script_ShowBlue::
# 142 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 14, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 143 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 15, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 144 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 16, METATILE_IgnisMons_Barrier_Blue, TRUE
# 145 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 17, METATILE_IgnisMons_Barrier_Blue, TRUE
# 146 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 12, 13, METATILE_IgnisMons_Barrier_Blue, TRUE
# 147 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 12, 18, METATILE_IgnisMons_Barrier_Blue, TRUE
# 148 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Barrier_Blue, TRUE
# 149 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 15, METATILE_IgnisMons_Barrier_Blue, TRUE
# 150 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 16, METATILE_IgnisMons_Barrier_Blue, TRUE
# 151 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 17, METATILE_IgnisMons_Barrier_Blue, TRUE
# 152 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 14, 25, METATILE_IgnisMons_Barrier_Blue, TRUE
# 153 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 15, 24, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 154 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 16, 25, METATILE_IgnisMons_Barrier_Blue, TRUE
# 155 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 15, 31, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 156 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 16, 32, METATILE_IgnisMons_Barrier_Blue, TRUE
# 157 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 17, 31, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 159 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 18, 25, METATILE_IgnisMons_Button_Blue, FALSE
	return


IgnisMons_1F_Script_ShowGreen::
# 165 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 9, 24, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 166 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 9, 25, METATILE_IgnisMons_Barrier_Green, TRUE
# 167 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 10, 24, METATILE_IgnisMons_Barrier_Green, TRUE
# 168 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 10, 25, METATILE_IgnisMons_Barrier_Green, TRUE
	return


IgnisMons_1F_Script_HideRed::
# 175 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 1, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 176 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 2, 32, METATILE_IgnisMons_Floor, FALSE
# 177 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 4, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 178 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 5, 32, METATILE_IgnisMons_Floor, FALSE
# 179 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 4, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 180 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 5, 25, METATILE_IgnisMons_Floor, FALSE
# 181 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 14, METATILE_IgnisMons_Floor_Shadow, FALSE
# 182 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 15, METATILE_IgnisMons_Floor_Shadow, FALSE
# 183 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 16, METATILE_IgnisMons_Floor, FALSE
# 184 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 6, 17, METATILE_IgnisMons_Floor, FALSE
# 185 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 7, 13, METATILE_IgnisMons_Floor, FALSE
# 186 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 7, 18, METATILE_IgnisMons_Floor, FALSE
# 187 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 14, METATILE_IgnisMons_Floor, FALSE
# 188 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 15, METATILE_IgnisMons_Floor, FALSE
# 189 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 16, METATILE_IgnisMons_Floor, FALSE
# 190 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 8, 17, METATILE_IgnisMons_Floor, FALSE
# 192 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 1, 25, METATILE_IgnisMons_Button_White_Shadow, FALSE
	return


IgnisMons_1F_Script_HideBlue::
# 199 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 14, METATILE_IgnisMons_Floor_Shadow, FALSE
# 200 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 15, METATILE_IgnisMons_Floor_Shadow, FALSE
# 201 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 16, METATILE_IgnisMons_Floor, FALSE
# 202 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 11, 17, METATILE_IgnisMons_Floor, FALSE
# 203 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 12, 13, METATILE_IgnisMons_Floor, FALSE
# 204 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 12, 18, METATILE_IgnisMons_Floor, FALSE
# 205 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Floor, FALSE
# 206 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 15, METATILE_IgnisMons_Floor, FALSE
# 207 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 16, METATILE_IgnisMons_Floor, FALSE
# 208 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 13, 17, METATILE_IgnisMons_Floor, FALSE
# 209 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 14, 25, METATILE_IgnisMons_Floor, FALSE
# 210 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 15, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 211 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 16, 25, METATILE_IgnisMons_Floor, FALSE
# 212 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 15, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 213 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 16, 32, METATILE_IgnisMons_Floor, FALSE
# 214 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 17, 31, METATILE_IgnisMons_Floor_Shadow, FALSE
# 216 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 18, 25, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_1F_Script_HideGreen::
# 222 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 9, 24, METATILE_IgnisMons_Floor_Shadow, FALSE
# 223 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 9, 25, METATILE_IgnisMons_Floor, FALSE
# 224 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 10, 24, METATILE_IgnisMons_Floor, FALSE
# 225 "data/maps/IgnisMons_1F/scripts.pory"
	setmetatile 10, 25, METATILE_IgnisMons_Floor, FALSE
	return


Common_Script_FalseFloorContinue::
# 231 "data/maps/IgnisMons_1F/scripts.pory"
	lockall
# 232 "data/maps/IgnisMons_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 233 "data/maps/IgnisMons_1F/scripts.pory"
	waitmovement 0
# 234 "data/maps/IgnisMons_1F/scripts.pory"
	special FalseFloorMetatileUpdate
# 235 "data/maps/IgnisMons_1F/scripts.pory"
	call EventScript_FallDownFalseFloor
# 236 "data/maps/IgnisMons_1F/scripts.pory"
	releaseall
	end


IgnisMons_1F_CollisionDrifblim::
# 241 "data/maps/IgnisMons_1F/scripts.pory"
	lock
# 242 "data/maps/IgnisMons_1F/scripts.pory"
	delay 20
# 243 "data/maps/IgnisMons_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 244 "data/maps/IgnisMons_1F/scripts.pory"
	waitmovement 0
# 245 "data/maps/IgnisMons_1F/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 246 "data/maps/IgnisMons_1F/scripts.pory"
	waitmoncry
# 247 "data/maps/IgnisMons_1F/scripts.pory"
	delay 20
# 248 "data/maps/IgnisMons_1F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 0
# 249 "data/maps/IgnisMons_1F/scripts.pory"
	warpsilent MAP_IGNIS_MONS_1F, 10, 41
# 250 "data/maps/IgnisMons_1F/scripts.pory"
	waitstate
	end

