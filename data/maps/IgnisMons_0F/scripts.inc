IgnisMons_0F_MapScripts::
# 10 "data//maps/IgnisMons_0F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IgnisMons_0F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 18 "data//maps/IgnisMons_0F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgnisMons_0F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

IgnisMons_0F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data//maps/IgnisMons_0F/scripts.pory"
	compare VAR_ARGO_STATE, 4
	goto_if_lt IgnisMons_0F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 14 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_HideAmbush
	return

IgnisMons_0F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowAmbush
	return

IgnisMons_0F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 19 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_OnResume
	return


IgnisMons_0F_Script_OnResume::
# 25 "data//maps/IgnisMons_0F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
# 26 "data//maps/IgnisMons_0F/scripts.pory"
	switch VAR_IGNISMONS_STATE
# 27 "data//maps/IgnisMons_0F/scripts.pory"
	case 0, IgnisMons_0F_Script_OnResume_3
# 29 "data//maps/IgnisMons_0F/scripts.pory"
	case 1, IgnisMons_0F_Script_OnResume_4
# 31 "data//maps/IgnisMons_0F/scripts.pory"
	case 2, IgnisMons_0F_Script_OnResume_5
# 33 "data//maps/IgnisMons_0F/scripts.pory"
	case 3, IgnisMons_0F_Script_OnResume_6
# 36 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Init
IgnisMons_0F_Script_OnResume_1:
	end

IgnisMons_0F_Script_OnResume_3:
# 28 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Init
	goto IgnisMons_0F_Script_OnResume_1

IgnisMons_0F_Script_OnResume_4:
# 30 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Red
	goto IgnisMons_0F_Script_OnResume_1

IgnisMons_0F_Script_OnResume_5:
# 32 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Blue
	goto IgnisMons_0F_Script_OnResume_1

IgnisMons_0F_Script_OnResume_6:
# 34 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Green
	goto IgnisMons_0F_Script_OnResume_1


IgnisMons_0F_Script_ShowAmbush::
# 42 "data//maps/IgnisMons_0F/scripts.pory"
	setobjectxyperm 1, 15, 20
# 43 "data//maps/IgnisMons_0F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 44 "data//maps/IgnisMons_0F/scripts.pory"
	addobject 1
# 45 "data//maps/IgnisMons_0F/scripts.pory"
	showobjectat 1, MAP_IGNIS_MONS_0F
	end


IgnisMons_0F_Script_HideAmbush::
# 50 "data//maps/IgnisMons_0F/scripts.pory"
	setobjectxyperm 8, 8, 15
# 51 "data//maps/IgnisMons_0F/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WANDER_AROUND
# 52 "data//maps/IgnisMons_0F/scripts.pory"
	addobject 8
# 53 "data//maps/IgnisMons_0F/scripts.pory"
	showobjectat 8, MAP_IGNIS_MONS_0F
# 55 "data//maps/IgnisMons_0F/scripts.pory"
	setobjectxyperm 9, 12, 20
# 56 "data//maps/IgnisMons_0F/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
# 57 "data//maps/IgnisMons_0F/scripts.pory"
	addobject 9
# 58 "data//maps/IgnisMons_0F/scripts.pory"
	showobjectat 9, MAP_IGNIS_MONS_0F
	end


IgnisMons_0F_Script_SetBarriers_Init::
# 64 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowRed
# 65 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowBlue
# 66 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowGreen
	return


IgnisMons_0F_Script_RedButton::
# 72 "data//maps/IgnisMons_0F/scripts.pory"
	lockall
# 73 "data//maps/IgnisMons_0F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_0F_Script_RedButton_2
IgnisMons_0F_Script_RedButton_1:
# 79 "data//maps/IgnisMons_0F/scripts.pory"
	releaseall
	end

IgnisMons_0F_Script_RedButton_2:
# 74 "data//maps/IgnisMons_0F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 75 "data//maps/IgnisMons_0F/scripts.pory"
	playse SE_FU_ZAKU
# 76 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Red
# 77 "data//maps/IgnisMons_0F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_0F_Script_RedButton_1


IgnisMons_0F_Script_BlueButton::
# 84 "data//maps/IgnisMons_0F/scripts.pory"
	lockall
# 85 "data//maps/IgnisMons_0F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_0F_Script_BlueButton_2
IgnisMons_0F_Script_BlueButton_1:
# 91 "data//maps/IgnisMons_0F/scripts.pory"
	releaseall
	end

IgnisMons_0F_Script_BlueButton_2:
# 86 "data//maps/IgnisMons_0F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 87 "data//maps/IgnisMons_0F/scripts.pory"
	playse SE_FU_ZAKU
# 88 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Blue
# 89 "data//maps/IgnisMons_0F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_0F_Script_BlueButton_1


IgnisMons_0F_Script_GreenButton::
# 96 "data//maps/IgnisMons_0F/scripts.pory"
	lockall
# 97 "data//maps/IgnisMons_0F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_0F_Script_GreenButton_2
IgnisMons_0F_Script_GreenButton_1:
# 103 "data//maps/IgnisMons_0F/scripts.pory"
	releaseall
	end

IgnisMons_0F_Script_GreenButton_2:
# 98 "data//maps/IgnisMons_0F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 99 "data//maps/IgnisMons_0F/scripts.pory"
	playse SE_FU_ZAKU
# 100 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_SetBarriers_Green
# 101 "data//maps/IgnisMons_0F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_0F_Script_GreenButton_1


IgnisMons_0F_Script_SetBarriers_Red::
# 108 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowBlue
# 109 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowGreen
# 111 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_HideRed
	return


IgnisMons_0F_Script_SetBarriers_Blue::
# 117 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowRed
# 118 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowGreen
# 120 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_HideBlue
	return


IgnisMons_0F_Script_SetBarriers_Green::
# 126 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowRed
# 127 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_ShowBlue
# 129 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_0F_Script_HideGreen
	return


IgnisMons_0F_Script_ShowRed::
# 135 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 3, 8, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 136 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 4, 9, METATILE_IgnisMons_Barrier_Red, TRUE
# 137 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 9, 10, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 138 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 10, 11, METATILE_IgnisMons_Barrier_Red, TRUE
# 139 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 3, 12, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 140 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 4, 13, METATILE_IgnisMons_Barrier_Red, TRUE
# 141 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 36, METATILE_IgnisMons_Barrier_Red, TRUE
# 142 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 18, 37, METATILE_IgnisMons_Barrier_Red_Shadow, TRUE
# 144 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 12, 8, METATILE_IgnisMons_Button_Red, FALSE
# 145 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 1, 11, METATILE_IgnisMons_Button_Red_Shadow, FALSE
# 146 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 21, METATILE_IgnisMons_Button_Red, FALSE
# 147 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_Red, FALSE
	return


IgnisMons_0F_Script_ShowBlue::
# 153 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 11, 16, METATILE_IgnisMons_Barrier_Blue, TRUE
# 154 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Barrier_Blue_Shadow, TRUE
# 155 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 13, 16, METATILE_IgnisMons_Barrier_Blue, TRUE
# 157 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 15, METATILE_IgnisMons_Button_Blue, FALSE
	return


IgnisMons_0F_Script_ShowGreen::
# 163 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 6, 2, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 164 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 6, 3, METATILE_IgnisMons_Barrier_Green, TRUE
# 165 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 1, 19, METATILE_IgnisMons_Barrier_Green_Shadow, TRUE
# 166 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 18, METATILE_IgnisMons_Barrier_Green, TRUE
# 168 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 8, METATILE_IgnisMons_Button_Green, FALSE
# 169 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 14, 34, METATILE_IgnisMons_Button_Green, FALSE
	return


IgnisMons_0F_Script_HideRed::
# 175 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 3, 8, METATILE_IgnisMons_Floor_Shadow, FALSE
# 176 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 4, 9, METATILE_IgnisMons_Floor, FALSE
# 177 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 9, 10, METATILE_IgnisMons_Floor_Shadow, FALSE
# 178 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 10, 11, METATILE_IgnisMons_Floor, FALSE
# 179 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 3, 12, METATILE_IgnisMons_Floor_Shadow, FALSE
# 180 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 4, 13, METATILE_IgnisMons_Floor, FALSE
# 181 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 36, METATILE_IgnisMons_Floor, FALSE
# 182 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 18, 37, METATILE_IgnisMons_Floor_Shadow, FALSE
# 184 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 12, 8, METATILE_IgnisMons_Button_White, FALSE
# 185 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 1, 11, METATILE_IgnisMons_Button_White_Shadow, FALSE
# 186 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 21, METATILE_IgnisMons_Button_White, FALSE
# 187 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 40, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_0F_Script_HideBlue::
# 193 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 11, 16, METATILE_IgnisMons_Floor, FALSE
# 194 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 12, 15, METATILE_IgnisMons_Floor_Shadow, FALSE
# 195 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 13, 16, METATILE_IgnisMons_Floor, FALSE
# 197 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 15, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_0F_Script_HideGreen::
# 203 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 6, 2, METATILE_IgnisMons_Floor_Shadow, FALSE
# 204 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 6, 3, METATILE_IgnisMons_Floor, FALSE
# 205 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 1, 19, METATILE_IgnisMons_Floor_Shadow, FALSE
# 206 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 2, 18, METATILE_IgnisMons_Floor, FALSE
# 208 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 17, 8, METATILE_IgnisMons_Button_White, FALSE
# 209 "data//maps/IgnisMons_0F/scripts.pory"
	setmetatile 14, 34, METATILE_IgnisMons_Button_White, FALSE
	return


IgnisMons_0F_Script_PhilAmbush::
# 216 "data//maps/IgnisMons_0F/scripts.pory"
	lockall
# 217 "data//maps/IgnisMons_0F/scripts.pory"
	setvar VAR_ARGO_STATE, 4
# 218 "data//maps/IgnisMons_0F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 219 "data//maps/IgnisMons_0F/scripts.pory"
	waitmovement 0
# 220 "data//maps/IgnisMons_0F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgnisMons_0F_Movement_PhilAmbush1
# 221 "data//maps/IgnisMons_0F/scripts.pory"
	waitmovement 0
# 222 "data//maps/IgnisMons_0F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 223 "data//maps/IgnisMons_0F/scripts.pory"
	waitmovement 0
# 225 "data//maps/IgnisMons_0F/scripts.pory"
	msgbox IgnisMons_0F_Text_PhilAmbush, MSGBOX_DEFAULT
# 226 "data//maps/IgnisMons_0F/scripts.pory"
	closemessage
# 228 "data//maps/IgnisMons_0F/scripts.pory"
	applymovement 1, IgnisMons_0F_Movement_PhilAmbushExit
# 229 "data//maps/IgnisMons_0F/scripts.pory"
	waitmovement 0
# 230 "data//maps/IgnisMons_0F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 231 "data//maps/IgnisMons_0F/scripts.pory"
	waitmovement 0
# 233 "data//maps/IgnisMons_0F/scripts.pory"
	removeobject 8
# 234 "data//maps/IgnisMons_0F/scripts.pory"
	setobjectxyperm 8, 11, 17
# 235 "data//maps/IgnisMons_0F/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
# 236 "data//maps/IgnisMons_0F/scripts.pory"
	addobject 8
# 237 "data//maps/IgnisMons_0F/scripts.pory"
	showobjectat 8, MAP_IGNIS_MONS_0F
# 239 "data//maps/IgnisMons_0F/scripts.pory"
	removeobject 9
# 240 "data//maps/IgnisMons_0F/scripts.pory"
	setobjectxyperm 9, 12, 17
# 241 "data//maps/IgnisMons_0F/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
# 242 "data//maps/IgnisMons_0F/scripts.pory"
	addobject 9
# 243 "data//maps/IgnisMons_0F/scripts.pory"
	showobjectat 9, MAP_IGNIS_MONS_0F
# 245 "data//maps/IgnisMons_0F/scripts.pory"
	applymovement 8, IgnisMons_0F_Movement_PhilAmbusHDrifblim
# 246 "data//maps/IgnisMons_0F/scripts.pory"
	applymovement 9, IgnisMons_0F_Movement_PhilAmbusHDrifblim
# 248 "data//maps/IgnisMons_0F/scripts.pory"
	hideobjectat 1, MAP_IGNIS_MONS_0F
# 249 "data//maps/IgnisMons_0F/scripts.pory"
	removeobject 1
# 252 "data//maps/IgnisMons_0F/scripts.pory"
	call IgnisMons_1F_CollisionDrifblim
	end


# 258 "data//maps/IgnisMons_0F/scripts.pory"
IgnisMons_0F_Movement_PhilAmbush1:
# 259 "data//maps/IgnisMons_0F/scripts.pory"
	walk_up
# 259 "data//maps/IgnisMons_0F/scripts.pory"
	walk_up
# 259 "data//maps/IgnisMons_0F/scripts.pory"
	walk_up
# 259 "data//maps/IgnisMons_0F/scripts.pory"
	walk_up
	step_end

# 262 "data//maps/IgnisMons_0F/scripts.pory"
IgnisMons_0F_Movement_PhilAmbusHDrifblim:
# 263 "data//maps/IgnisMons_0F/scripts.pory"
	walk_down
# 263 "data//maps/IgnisMons_0F/scripts.pory"
	walk_down
	step_end

# 266 "data//maps/IgnisMons_0F/scripts.pory"
IgnisMons_0F_Movement_PhilAmbushExit:
# 267 "data//maps/IgnisMons_0F/scripts.pory"
	walk_up
# 267 "data//maps/IgnisMons_0F/scripts.pory"
	walk_up
# 267 "data//maps/IgnisMons_0F/scripts.pory"
	walk_up
# 267 "data//maps/IgnisMons_0F/scripts.pory"
	walk_up
# 267 "data//maps/IgnisMons_0F/scripts.pory"
	walk_up
# 268 "data//maps/IgnisMons_0F/scripts.pory"
	walk_right
# 269 "data//maps/IgnisMons_0F/scripts.pory"
	walk_up
	step_end

IgnisMons_0F_Text_PhilAmbush::
# 279 "data//maps/IgnisMons_0F/scripts.pory"
	.string "Turn back there is... Oolishfay\n"
	.string "outsideray ouyay ouldshay otnay\l"
	.string "avehay omecay... no hope for you turn\l"
	.string "back! Medea's spell...Ethay athpay\l"
	.string "ouyay eadtray eadslay onlyay otay\l"
	.string "ownfallday...Will overcome you too\l"
	.string "and...Ebay onegay oray ouyay\l"
	.string "ootay...Trap us both in this dance of\l"
	.string "darkness...Illway ecomebay ymay\l"
	.string "aveslay.$"
