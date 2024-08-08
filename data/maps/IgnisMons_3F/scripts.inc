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


IgnisMons_3F_Script_ShowMedea::
# 39 "data/maps/IgnisMons_3F/scripts.pory"
	hideobjectat 15, MAP_IGNIS_MONS_3F
# 40 "data/maps/IgnisMons_3F/scripts.pory"
	removeobject 15
# 42 "data/maps/IgnisMons_3F/scripts.pory"
	hideobjectat 14, MAP_IGNIS_MONS_3F
# 43 "data/maps/IgnisMons_3F/scripts.pory"
	removeobject 14
# 45 "data/maps/IgnisMons_3F/scripts.pory"
	hideobjectat 16, MAP_IGNIS_MONS_3F
# 46 "data/maps/IgnisMons_3F/scripts.pory"
	removeobject 16
# 48 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectxyperm 15, 7, 31
# 49 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_UP
# 50 "data/maps/IgnisMons_3F/scripts.pory"
	addobject 15
# 51 "data/maps/IgnisMons_3F/scripts.pory"
	showobjectat 15, MAP_IGNIS_MONS_3F
# 53 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectxyperm 14, 8, 31
# 54 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/IgnisMons_3F/scripts.pory"
	addobject 14
# 56 "data/maps/IgnisMons_3F/scripts.pory"
	showobjectat 14, MAP_IGNIS_MONS_3F
# 58 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectxyperm 16, 9, 31
# 59 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_FACE_UP
# 60 "data/maps/IgnisMons_3F/scripts.pory"
	addobject 16
# 61 "data/maps/IgnisMons_3F/scripts.pory"
	showobjectat 16, MAP_IGNIS_MONS_3F
	end


IgnisMons_3F_Script_HideMedea::
# 68 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectxyperm 15, 12, 30
# 69 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_INVISIBLE
# 71 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectxyperm 14, 13, 30
# 72 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_INVISIBLE
# 74 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectxyperm 16, 14, 30
# 75 "data/maps/IgnisMons_3F/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_INVISIBLE
# 77 "data/maps/IgnisMons_3F/scripts.pory"
	hideobjectat 15, MAP_IGNIS_MONS_3F
# 78 "data/maps/IgnisMons_3F/scripts.pory"
	removeobject 15
# 80 "data/maps/IgnisMons_3F/scripts.pory"
	hideobjectat 14, MAP_IGNIS_MONS_3F
# 81 "data/maps/IgnisMons_3F/scripts.pory"
	removeobject 14
# 83 "data/maps/IgnisMons_3F/scripts.pory"
	hideobjectat 16, MAP_IGNIS_MONS_3F
# 84 "data/maps/IgnisMons_3F/scripts.pory"
	removeobject 16
	return


IgnisMons_3F_Script_SetBarriers_Red::
# 93 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowBlue
# 94 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowGreen
# 96 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideRed
	return


IgnisMons_3F_Script_SetBarriers_Blue::
# 102 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowRed
# 103 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowGreen
# 105 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideBlue
	return


IgnisMons_3F_Script_SetBarriers_Green::
# 111 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowRed
# 112 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowBlue
# 114 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideGreen
	return


IgnisMons_3F_Script_SetBarriers_Init::
# 120 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowRed
# 121 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowBlue
# 122 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_ShowGreen
	return


IgnisMons_3F_Script_RedButton::
# 128 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 129 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_3F_Script_RedButton_2
IgnisMons_3F_Script_RedButton_1:
# 135 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_RedButton_2:
# 130 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 131 "data/maps/IgnisMons_3F/scripts.pory"
	playse SE_FU_ZAKU
# 132 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Red
# 133 "data/maps/IgnisMons_3F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_3F_Script_RedButton_1


IgnisMons_3F_Script_BlueButton::
# 140 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 141 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_3F_Script_BlueButton_2
IgnisMons_3F_Script_BlueButton_1:
# 147 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_BlueButton_2:
# 142 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 143 "data/maps/IgnisMons_3F/scripts.pory"
	playse SE_FU_ZAKU
# 144 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Blue
# 145 "data/maps/IgnisMons_3F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_3F_Script_BlueButton_1


IgnisMons_3F_Script_GreenButton::
# 152 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 153 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_3F_Script_GreenButton_2
IgnisMons_3F_Script_GreenButton_1:
# 159 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_GreenButton_2:
# 154 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 155 "data/maps/IgnisMons_3F/scripts.pory"
	playse SE_FU_ZAKU
# 156 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_SetBarriers_Green
# 157 "data/maps/IgnisMons_3F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_3F_Script_GreenButton_1


IgnisMons_3F_Script_ShowRed::
# 164 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 22, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 165 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 18, 23, METATILE_IgnisMons_Barrier_Red, TRUE
# 168 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 35, METATILE_IgnisMons_Button_Red, FALSE
	return


IgnisMons_3F_Script_ShowBlue::
# 173 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 5, 6, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 174 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 6, 5, METATILE_IgnisMons_Barrier_Blue, TRUE
# 175 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 6, METATILE_IgnisMons_Barrier_Blue, TRUE
# 176 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 177 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 178 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 14, 15, METATILE_IgnisMons_Barrier_Blue, TRUE
# 179 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 9, 40, METATILE_IgnisMons_Barrier_Blue, TRUE
# 180 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 39, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 181 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 11, 40, METATILE_IgnisMons_Barrier_Blue, TRUE
# 182 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 41, METATILE_IgnisMons_Barrier_Blue, TRUE
# 184 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_Blue, FALSE
	return


IgnisMons_3F_Script_ShowGreen::
# 190 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 6, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 191 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 5, METATILE_IgnisMons_Barrier_Green, TRUE
# 192 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 7, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 193 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 6, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 194 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 30, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 195 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 29, METATILE_IgnisMons_Barrier_Green, TRUE
# 196 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 3, 28, METATILE_IgnisMons_Barrier_Green, TRUE
# 198 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 17, METATILE_IgnisMons_Button_Green, FALSE
	return


IgnisMons_3F_Script_HideRed::
# 205 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 22, METATILE_IgnisMons_Floor_Shadow, FALSE
# 206 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 18, 23, METATILE_IgnisMons_Floor, FALSE
# 209 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 17, 35, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_3F_Script_HideBlue::
# 214 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 5, 6, METATILE_IgnisMons_Floor_Shadow, FALSE
# 215 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 6, 5, METATILE_IgnisMons_Floor, FALSE
# 216 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 6, METATILE_IgnisMons_Floor, FALSE
# 217 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Floor_Shadow, FALSE
# 218 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 14, METATILE_IgnisMons_Floor_Shadow, FALSE
# 219 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 14, 15, METATILE_IgnisMons_Floor, FALSE
# 220 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 9, 40, METATILE_IgnisMons_Floor, FALSE
# 221 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 39, METATILE_IgnisMons_Floor_Shadow, FALSE
# 222 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 11, 40, METATILE_IgnisMons_Floor, FALSE
# 223 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 10, 41, METATILE_IgnisMons_Floor, FALSE
# 225 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_3F_Script_HideGreen::
# 231 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 6, METATILE_IgnisMons_Floor_Shadow, FALSE
# 232 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 5, METATILE_IgnisMons_Floor, FALSE
# 233 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 12, 7, METATILE_IgnisMons_Floor_Shadow, FALSE
# 234 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 13, 6, METATILE_IgnisMons_Floor_Shadow, FALSE
# 235 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 1, 30, METATILE_IgnisMons_Floor_Shadow, FALSE
# 236 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 2, 29, METATILE_IgnisMons_Floor, FALSE
# 237 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 3, 28, METATILE_IgnisMons_Floor, FALSE
# 239 "data/maps/IgnisMons_3F/scripts.pory"
	setmetatile 7, 17, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_3F_Script_MedeaTriggerA::
# 245 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_TEMP_7, 1
# 246 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_Medea
	return


IgnisMons_3F_Script_MedeaTriggerB::
# 250 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_Medea
	return


IgnisMons_3F_Script_Medea::
# 254 "data/maps/IgnisMons_3F/scripts.pory"
	lockall
# 256 "data/maps/IgnisMons_3F/scripts.pory"
	setvar VAR_ARGO_STATE, 5
# 258 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgnisMons_3F_Movement_Medea_Player
# 259 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 0
# 261 "data/maps/IgnisMons_3F/scripts.pory"
	compare VAR_TEMP_7, 1
	goto_if_eq IgnisMons_3F_Script_Medea_2
IgnisMons_3F_Script_Medea_1:
# 266 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 267 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 0
# 269 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement 15, IgnisMons_3F_Movement_Medea_Foe
# 270 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement 14, IgnisMons_3F_Movement_Medea_Foe
# 271 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement 16, IgnisMons_3F_Movement_Medea_Foe
# 272 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 0
# 274 "data/maps/IgnisMons_3F/scripts.pory"
	msgbox IgnisMons_3F_Text_MedeaPre, MSGBOX_DEFAULT
# 275 "data/maps/IgnisMons_3F/scripts.pory"
	closemessage
# 277 "data/maps/IgnisMons_3F/scripts.pory"
	trainerbattle_two_trainers TRAINER_PHILOCTETES, IgnisMons_3F_Text_PhiloctetesLost, TRAINER_MEDEA, IgnisMons_3F_Text_MedeaLost
# 279 "data/maps/IgnisMons_3F/scripts.pory"
	msgbox IgnisMons_3F_Text_MedeaPost, MSGBOX_DEFAULT
# 280 "data/maps/IgnisMons_3F/scripts.pory"
	closemessage
# 282 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement 14, IgnisMons_3F_Movement_Medea_Exit
# 283 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement 16, IgnisMons_3F_Movement_Medea_Exit
# 284 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 0
# 286 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 287 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement 15, IgnisMons_3F_Movement_Phil
# 288 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 0
# 290 "data/maps/IgnisMons_3F/scripts.pory"
	msgbox IgnisMons_3F_Text_PhilPost, MSGBOX_DEFAULT
# 291 "data/maps/IgnisMons_3F/scripts.pory"
	closemessage
# 293 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement 15, IgnisMons_3F_Movement_PhilExit
# 294 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 0
# 296 "data/maps/IgnisMons_3F/scripts.pory"
	call IgnisMons_3F_Script_HideMedea
# 298 "data/maps/IgnisMons_3F/scripts.pory"
	releaseall
	end

IgnisMons_3F_Script_Medea_2:
# 262 "data/maps/IgnisMons_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 263 "data/maps/IgnisMons_3F/scripts.pory"
	waitmovement 0
	goto IgnisMons_3F_Script_Medea_1


# 304 "data/maps/IgnisMons_3F/scripts.pory"
IgnisMons_3F_Movement_Medea_Player:
# 305 "data/maps/IgnisMons_3F/scripts.pory"
	walk_left
# 305 "data/maps/IgnisMons_3F/scripts.pory"
	walk_left
# 305 "data/maps/IgnisMons_3F/scripts.pory"
	walk_left
# 305 "data/maps/IgnisMons_3F/scripts.pory"
	walk_left
# 305 "data/maps/IgnisMons_3F/scripts.pory"
	walk_left
# 306 "data/maps/IgnisMons_3F/scripts.pory"
	face_down
	step_end

# 309 "data/maps/IgnisMons_3F/scripts.pory"
IgnisMons_3F_Movement_Medea_Foe:
# 310 "data/maps/IgnisMons_3F/scripts.pory"
	walk_up
# 310 "data/maps/IgnisMons_3F/scripts.pory"
	walk_up
# 310 "data/maps/IgnisMons_3F/scripts.pory"
	walk_up
	step_end

# 313 "data/maps/IgnisMons_3F/scripts.pory"
IgnisMons_3F_Movement_Medea_Exit:
# 314 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
# 314 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
# 314 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
# 314 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
# 314 "data/maps/IgnisMons_3F/scripts.pory"
	walk_down
	step_end

# 317 "data/maps/IgnisMons_3F/scripts.pory"
IgnisMons_3F_Movement_Phil:
# 318 "data/maps/IgnisMons_3F/scripts.pory"
	walk_up
# 319 "data/maps/IgnisMons_3F/scripts.pory"
	face_right
	step_end

# 322 "data/maps/IgnisMons_3F/scripts.pory"
IgnisMons_3F_Movement_PhilExit:
# 323 "data/maps/IgnisMons_3F/scripts.pory"
	walk_up
# 324 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 324 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 324 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 324 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 324 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 324 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 324 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 324 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
# 324 "data/maps/IgnisMons_3F/scripts.pory"
	walk_right
	step_end

IgnisMons_3F_Text_MedeaPre::
# 331 "data/maps/IgnisMons_3F/scripts.pory"
	.string "Impressiveay. Erethay areay ewfay\n"
	.string "owhay omecay isthay arfay utbay ouyay\l"
	.string "illway otnay escapeay ouryay esentpray\l"
	.string "oomday. Ownay oinjay ouryay iendfray\l"
	.string "asay ymay aveslay. Ogay Ypnohay!$"

IgnisMons_3F_Text_MedeaLost::
# 336 "data/maps/IgnisMons_3F/scripts.pory"
	.string "Ypnohay! Owhay ouldcay ouyay ailfay\n"
	.string "emay?$"

IgnisMons_3F_Text_PhiloctetesLost::
# 340 "data/maps/IgnisMons_3F/scripts.pory"
	.string "Where am I?$"

IgnisMons_3F_Text_MedeaPost::
# 347 "data/maps/IgnisMons_3F/scripts.pory"
	.string "Indeeday ouyay areay owerfulpay.\n"
	.string "Ethay oddessgay ivesgay onorhay otay\l"
	.string "osethay owhay efeatday erhay ellspay.\l"
	.string "Iay ustmay arnway Apapay ouyay'evay\l"
	.string "omecay orfay ouray eeceflay.$"

IgnisMons_3F_Text_PhilPost::
# 352 "data/maps/IgnisMons_3F/scripts.pory"
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
