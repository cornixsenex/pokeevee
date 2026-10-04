IgnisMons_3F_MapScripts::
# 8 "data/maps/IgnisMons_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IgnisMons_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/IgnisMons_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgnisMons_3F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

IgnisMons_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_ARGO_STATE, 4
	goto_if_eq IgnisMons_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

IgnisMons_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowMedea
	return

IgnisMons_3F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 15 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_OnResume
	return


IgnisMons_3F_Script_OnResume::
# 21 "data/maps/IgnisMons_3F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
# 22 "data/maps/IgnisMons_3F/scripts.pory"
	switch VAR_IGNISMONS_STATE
# 23 "data/maps/IgnisMons_3F/scripts.pory"
	case 0, IgnisMons_3F_Script_OnResume_3
# 25 "data/maps/IgnisMons_3F/scripts.pory"
	case 1, IgnisMons_3F_Script_OnResume_4
# 27 "data/maps/IgnisMons_3F/scripts.pory"
	case 2, IgnisMons_3F_Script_OnResume_5
# 29 "data/maps/IgnisMons_3F/scripts.pory"
	case 3, IgnisMons_3F_Script_OnResume_6
# 32 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Init
IgnisMons_3F_Script_OnResume_1:
# 34 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_ARGO_STATE, 5
	goto_if_eq IgnisMons_3F_Script_OnResume_9
IgnisMons_3F_Script_OnResume_8:
	end

IgnisMons_3F_Script_OnResume_3:
# 24 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Init
	goto IgnisMons_3F_Script_OnResume_1

IgnisMons_3F_Script_OnResume_4:
# 26 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Red
	goto IgnisMons_3F_Script_OnResume_1

IgnisMons_3F_Script_OnResume_5:
# 28 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Blue
	goto IgnisMons_3F_Script_OnResume_1

IgnisMons_3F_Script_OnResume_6:
# 30 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Green
	goto IgnisMons_3F_Script_OnResume_1

IgnisMons_3F_Script_OnResume_9:
# 35 "data/maps/IgnisMons_3F/scripts.pory"
	hideobjectat 16, MAP_IGNIS_MONS_3F
# 36 "data/maps/IgnisMons_3F/scripts.pory"
	removeobject 16
# 37 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectxyperm 16, 14, 30
# 38 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_INVISIBLE
	goto IgnisMons_3F_Script_OnResume_8


IgnisMons_3F_Script_ShowMedea::
# 45 "data/maps/IgnisMons_3F/scripts.pory"
	hideobjectat 15, MAP_IGNIS_MONS_3F
# 46 "data/maps/IgnisMons_3F/scripts.pory"
	removeobject 15
# 48 "data/maps/IgnisMons_3F/scripts.pory"
	hideobjectat 14, MAP_IGNIS_MONS_3F
# 49 "data/maps/IgnisMons_3F/scripts.pory"
	removeobject 14
# 51 "data/maps/IgnisMons_3F/scripts.pory"
	hideobjectat 16, MAP_IGNIS_MONS_3F
# 52 "data/maps/IgnisMons_3F/scripts.pory"
	removeobject 16
# 54 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectxyperm 15, 7, 31
# 55 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/IgnisMons_3F/scripts.pory"
	addobject 15
# 57 "data/maps/IgnisMons_3F/scripts.pory"
	showobjectat 15, MAP_IGNIS_MONS_3F
# 59 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectxyperm 14, 8, 31
# 60 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_UP
# 61 "data/maps/IgnisMons_3F/scripts.pory"
	addobject 14
# 62 "data/maps/IgnisMons_3F/scripts.pory"
	showobjectat 14, MAP_IGNIS_MONS_3F
# 64 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectxyperm 16, 9, 31
# 65 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_FACE_UP
# 66 "data/maps/IgnisMons_3F/scripts.pory"
	addobject 16
# 67 "data/maps/IgnisMons_3F/scripts.pory"
	showobjectat 16, MAP_IGNIS_MONS_3F
	end


IgnisMons_3F_Script_HideMedea::
# 74 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectxyperm 15, 12, 30
# 75 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_INVISIBLE
# 77 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectxyperm 14, 13, 30
# 78 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_INVISIBLE
# 80 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectxyperm 16, 14, 30
# 81 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_INVISIBLE
# 83 "data/maps/IgnisMons_3F/scripts.pory"
	hideobjectat 15, MAP_IGNIS_MONS_3F
# 84 "data/maps/IgnisMons_3F/scripts.pory"
	removeobject 15
# 86 "data/maps/IgnisMons_3F/scripts.pory"
	hideobjectat 14, MAP_IGNIS_MONS_3F
# 87 "data/maps/IgnisMons_3F/scripts.pory"
	removeobject 14
# 89 "data/maps/IgnisMons_3F/scripts.pory"
	hideobjectat 16, MAP_IGNIS_MONS_3F
# 90 "data/maps/IgnisMons_3F/scripts.pory"
	removeobject 16
	return


IgnisMons_3F_Script_SetBarriers_Red::
# 99 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowBlue
# 100 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowGreen
# 102 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideRed
	return


IgnisMons_3F_Script_SetBarriers_Blue::
# 108 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowRed
# 109 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowGreen
# 111 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideBlue
	return


IgnisMons_3F_Script_SetBarriers_Green::
# 117 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowRed
# 118 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowBlue
# 120 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideGreen
	return


IgnisMons_3F_Script_SetBarriers_Init::
# 126 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowRed
# 127 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowBlue
# 128 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowGreen
	return


IgnisMons_3F_Script_RedButton::
# 134 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 135 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_3F_Script_RedButton_2
IgnisMons_3F_Script_RedButton_1:
# 141 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_RedButton_2:
# 136 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 137 "data/maps/IgnisMons_3F/scripts.pory"
	playse SE_FU_ZAKU
# 138 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Red
# 139 "data/maps/IgnisMons_3F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_3F_Script_RedButton_1


IgnisMons_3F_Script_BlueButton::
# 146 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 147 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_3F_Script_BlueButton_2
IgnisMons_3F_Script_BlueButton_1:
# 153 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_BlueButton_2:
# 148 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 149 "data/maps/IgnisMons_3F/scripts.pory"
	playse SE_FU_ZAKU
# 150 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Blue
# 151 "data/maps/IgnisMons_3F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_3F_Script_BlueButton_1


IgnisMons_3F_Script_GreenButton::
# 158 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 159 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_3F_Script_GreenButton_2
IgnisMons_3F_Script_GreenButton_1:
# 165 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_GreenButton_2:
# 160 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 161 "data/maps/IgnisMons_3F/scripts.pory"
	playse SE_FU_ZAKU
# 162 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Green
# 163 "data/maps/IgnisMons_3F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_3F_Script_GreenButton_1


IgnisMons_3F_Script_ShowRed::
# 170 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 22, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 171 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 18, 23, METATILE_IgnisMons_Barrier_Red, TRUE
# 174 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 35, METATILE_IgnisMons_Button_Red, FALSE
	return


IgnisMons_3F_Script_ShowBlue::
# 179 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 5, 6, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 180 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 6, 5, METATILE_IgnisMons_Barrier_Blue, TRUE
# 181 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 6, METATILE_IgnisMons_Barrier_Blue, TRUE
# 182 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 183 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 184 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 14, 15, METATILE_IgnisMons_Barrier_Blue, TRUE
# 185 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 9, 40, METATILE_IgnisMons_Barrier_Blue, TRUE
# 186 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 39, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 187 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 11, 40, METATILE_IgnisMons_Barrier_Blue, TRUE
# 188 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 41, METATILE_IgnisMons_Barrier_Blue, TRUE
# 190 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_Blue, FALSE
	return


IgnisMons_3F_Script_ShowGreen::
# 196 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 6, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 197 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 5, METATILE_IgnisMons_Barrier_Green, TRUE
# 198 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 7, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 199 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 6, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 200 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 30, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 201 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 29, METATILE_IgnisMons_Barrier_Green, TRUE
# 202 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 3, 28, METATILE_IgnisMons_Barrier_Green, TRUE
# 204 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 17, METATILE_IgnisMons_Button_Green, FALSE
	return


IgnisMons_3F_Script_HideRed::
# 211 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 22, METATILE_IgnisMons_Floor_Shadow, FALSE
# 212 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 18, 23, METATILE_IgnisMons_Floor, FALSE
# 215 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 35, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_3F_Script_HideBlue::
# 220 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 5, 6, METATILE_IgnisMons_Floor_Shadow, FALSE
# 221 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 6, 5, METATILE_IgnisMons_Floor, FALSE
# 222 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 6, METATILE_IgnisMons_Floor, FALSE
# 223 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Floor_Shadow, FALSE
# 224 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Floor_Shadow, FALSE
# 225 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 14, 15, METATILE_IgnisMons_Floor, FALSE
# 226 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 9, 40, METATILE_IgnisMons_Floor, FALSE
# 227 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 39, METATILE_IgnisMons_Floor_Shadow, FALSE
# 228 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 11, 40, METATILE_IgnisMons_Floor, FALSE
# 229 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 41, METATILE_IgnisMons_Floor, FALSE
# 231 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_3F_Script_HideGreen::
# 237 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 6, METATILE_IgnisMons_Floor_Shadow, FALSE
# 238 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 5, METATILE_IgnisMons_Floor, FALSE
# 239 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 7, METATILE_IgnisMons_Floor_Shadow, FALSE
# 240 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 6, METATILE_IgnisMons_Floor_Shadow, FALSE
# 241 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 30, METATILE_IgnisMons_Floor_Shadow, FALSE
# 242 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 29, METATILE_IgnisMons_Floor, FALSE
# 243 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 3, 28, METATILE_IgnisMons_Floor, FALSE
# 245 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 17, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_3F_Script_MedeaTriggerA::
# 251 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_TEMP_7, 1
# 252 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_Medea
	return


IgnisMons_3F_Script_MedeaTriggerB::
# 256 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_Medea
	return


IgnisMons_3F_Script_Medea::
# 261 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 263 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_ARGO_STATE, 5
# 267 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgnisMons_3F_Movement_ApproachMedea
# 268 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 0
# 270 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_TEMP_7, 1
	goto_if_eq IgnisMons_3F_Script_Medea_2
IgnisMons_3F_Script_Medea_1:
# 275 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 276 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 0
# 309 "data/maps/IgnisMons_3F/scripts.pory"
	msgbox IgnisMons_3F_Text_Medea1, MSGBOX_DEFAULT
# 310 "data/maps/IgnisMons_3F/scripts.pory"
	closemessage
# 311 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 312 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement 14, Common_Movement_WalkUp
# 313 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 314 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 0
# 315 "data/maps/IgnisMons_3F/scripts.pory"
	msgbox IgnisMons_3F_Text_Medea2, MSGBOX_DEFAULT
# 316 "data/maps/IgnisMons_3F/scripts.pory"
	closemessage
# 318 "data/maps/IgnisMons_3F/scripts.pory"
	trainerbattle_two_trainers TRAINER_PHILOCTETES, IgnisMons_3F_Text_PhilLost, TRAINER_MEDEA, IgnisMons_3F_Text_MedeaLost
# 320 "data/maps/IgnisMons_3F/scripts.pory"
	msgbox IgnisMons_3F_Text_Medea3, MSGBOX_DEFAULT
# 321 "data/maps/IgnisMons_3F/scripts.pory"
	closemessage
# 323 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement 14, IgnisMons_3F_Movement_MedeaExit
# 324 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 0
# 325 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement 15, IgnisMons_3F_Movement_PhilApproach
# 326 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 327 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 15
# 329 "data/maps/IgnisMons_3F/scripts.pory"
	msgbox IgnisMons_3F_Text_PhilPost, MSGBOX_DEFAULT
# 330 "data/maps/IgnisMons_3F/scripts.pory"
	closemessage
# 332 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement 15, IgnisMons_3F_Movement_PhilExit
# 333 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 0
# 340 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideMedea
# 341 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_Medea_2:
# 271 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 272 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 0
	goto IgnisMons_3F_Script_Medea_1


# 345 "data/maps/IgnisMons_3F/scripts.pory"
IgnisMons_3F_Movement_PhilApproach:
# 346 "data/maps/IgnisMons_3F/scripts.pory"
	walk_up
# 347 "data/maps/IgnisMons_3F/scripts.pory"
	face_right
	step_end

# 350 "data/maps/IgnisMons_3F/scripts.pory"
IgnisMons_3F_Movement_ApproachMedea:
# 351 "data/maps/IgnisMons_3F/scripts.pory"
	walk_left
# 351 "data/maps/IgnisMons_3F/scripts.pory"
	walk_left
# 351 "data/maps/IgnisMons_3F/scripts.pory"
	walk_left
# 351 "data/maps/IgnisMons_3F/scripts.pory"
	walk_left
# 351 "data/maps/IgnisMons_3F/scripts.pory"
	walk_left
# 352 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
# 352 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
	step_end

# 355 "data/maps/IgnisMons_3F/scripts.pory"
IgnisMons_3F_Movement_Medea_Foe:
# 356 "data/maps/IgnisMons_3F/scripts.pory"
	walk_up
# 356 "data/maps/IgnisMons_3F/scripts.pory"
	walk_up
# 356 "data/maps/IgnisMons_3F/scripts.pory"
	walk_up
	step_end

# 359 "data/maps/IgnisMons_3F/scripts.pory"
IgnisMons_3F_Movement_MedeaExit:
# 360 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 361 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
# 361 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
# 361 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
# 361 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
# 361 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
	step_end

# 364 "data/maps/IgnisMons_3F/scripts.pory"
IgnisMons_3F_Movement_HypnoExit:
# 365 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
# 365 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
# 365 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
# 365 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
# 365 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
	step_end

# 368 "data/maps/IgnisMons_3F/scripts.pory"
IgnisMons_3F_Movement_Phil:
# 369 "data/maps/IgnisMons_3F/scripts.pory"
	walk_up
# 370 "data/maps/IgnisMons_3F/scripts.pory"
	face_right
	step_end

# 373 "data/maps/IgnisMons_3F/scripts.pory"
IgnisMons_3F_Movement_PhilExit:
# 374 "data/maps/IgnisMons_3F/scripts.pory"
	walk_up
# 374 "data/maps/IgnisMons_3F/scripts.pory"
	walk_up
# 375 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 375 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 375 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 375 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 375 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 375 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 375 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 375 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 375 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
	step_end

IgnisMons_3F_Text_Medea1::
# 384 "data/maps/IgnisMons_3F/scripts.pory"
	.string "Ipmressiveay, erethat areay ewfay\n"
	.string "owhay omecay isthay arfay utbay\l"
	.string "entryay otay ethay acredsay allshay,\l"
	.string "underay ictstray enaltypay ofay\l"
	.string "eathday, isay orbiddenfay.$"

IgnisMons_3F_Text_Medea2::
# 388 "data/maps/IgnisMons_3F/scripts.pory"
	.string "Ownay oinjay ouryay iendfray asay ymay\n"
	.string "aveslay.\l"
	.string "Ogay Ypnohay!$"

IgnisMons_3F_Text_Medea3::
# 400 "data/maps/IgnisMons_3F/scripts.pory"
	.string "Iay underestimateday ouryay owerpay\n"
	.string "anday ensesay atthay iay amay\l"
	.string "eedednay ckbay atay omehay. Ecatehay\l"
	.string "arnsway atthay eway illway eetmay\l"
	.string "againay, etyay ightymay areay ethay\l"
	.string "allsway ofay eatgray Olchiscay anda\l"
	.string "ewfay avehay eyesay otayy indfay\l"
	.string "ethay ecretsay oorday. Estroyday\l"
	.string "eachotheray! Anebay! Iay ustmay ebay\l"
	.string "offay.$"

IgnisMons_3F_Text_MedeaLost::
# 405 "data/maps/IgnisMons_3F/scripts.pory"
	.string "Ypnohay! Owhay ouldcay ouyay ailfay\n"
	.string "emay?$"

IgnisMons_3F_Text_PhilPre::
# 411 "data/maps/IgnisMons_3F/scripts.pory"
	.string "Ownay ouyay... Get back... illway aypay...\n"
	.string "I do not wish... orfay oulingfay... to\l"
	.string "fight ... isthay...lwith you... empltay...$"

IgnisMons_3F_Text_PhilLost::
# 415 "data/maps/IgnisMons_3F/scripts.pory"
	.string "Where am I?$"

IgnisMons_3F_Text_MedeaPost::
# 422 "data/maps/IgnisMons_3F/scripts.pory"
	.string "Indeeday ouyay areay owerfulpay.\n"
	.string "Ethay oddessgay ivesgay onorhay otay\l"
	.string "osethay owhay efeatday erhay ellspay.\l"
	.string "Iay ustmay arnway Apapay ouyay'evay\l"
	.string "omecay orfay ouray eeceflay.$"

IgnisMons_3F_Text_PhilPost::
# 427 "data/maps/IgnisMons_3F/scripts.pory"
	.string "How could this happen? Great\n"
	.string "Philoctetes defeated by this boy,\l"
	.string "abandonded by the Argonauts and\l"
	.string "enslaved by a witch? Tell Jason and the\l"
	.string "other Argonauts that I was not the one\l"
	.string "who broke my oath, instead they\l"
	.string "nullified our fellowship when they left\l"
	.string "me for dead...Yet I was beat. I'm nothing\l"
	.string "more than a betrayed traitor, a\l"
	.string "disgrace to my family, and this earth.\l"
	.string "I'll never walk among men after this. I'll\l"
	.string "flee into the woods. Do not seek me.$"

IgnisMons_3F_Text_Medea::
# 441 "data/maps/IgnisMons_3F/scripts.pory"
	.string "Ipmressiveay, erethat areay ewfay\n"
	.string "owhay omecay isthay arfay utbay\l"
	.string "entryay otay ethay acredsay allshay,\l"
	.string "underay ictstray enaltypay ofay\l"
	.string "eathday, isay orbiddenfay. Itay\l"
	.string "ouldway ebay ightray otay itesmay\l"
	.string "ouyay erewhay ouyay andstay anday\l"
	.string "akemay ouyay ymay uppetpay, ikelay\l"
	.string "ouryay iendfray erehay, etyay Ecatehay\l"
	.string "onglystray ullspay ackbay ymay andhay.\l"
	.string "Iay ensesay atthay Iay amay eedenay\l"
	.string "achbay atay omehay. Isthay esselvay\l"
	.string "onay ongerlay ervessay ymay urposepay.\l"
	.string "Estroyday eachotheray! Iay ustmay\l"
	.string "ebay offay.$"
