MareS5_MapScripts::
# 11 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 17 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MareS5_MapScripts_MAP_SCRIPT_ON_LOAD
# 23 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MareS5_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 27 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MareS5_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/MareS5/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS5_F
	return

MareS5_MapScripts_MAP_SCRIPT_ON_LOAD:
# 18 "data/maps/MareS5/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_eq MareS5_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MareS5_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 19 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_SupressSurf
	return

MareS5_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 24 "data/maps/MareS5/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 1, MareS5_Script_HidePlayer
	.2byte 0

MareS5_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 28 "data/maps/MareS5/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 1, MareS5_OnFrame_SailToColchis
	.2byte 0


MareS5_Script_MareTropicumTransition::
# 34 "data/maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 1
# 35 "data/maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return


MareS5_Script_ActaEchonaTransition::
# 39 "data/maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 2
# 40 "data/maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return


MareS5_Script_SupressSurf::
# 44 "data/maps/MareS5/scripts.pory"
	setmetatile 45, 45, METATILE_Slateport_CalmWater_False, FALSE
	end


MareS5_Script_HidePlayer::
# 49 "data/maps/MareS5/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5, 0
# 50 "data/maps/MareS5/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
	end


MareS5_EventScript_Argo::
# 55 "data/maps/MareS5/scripts.pory"
	lockall
# 56 "data/maps/MareS5/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 57 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 58 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArgoIntro1, MSGBOX_YESNO
# 59 "data/maps/MareS5/scripts.pory"
	closemessage
# 60 "data/maps/MareS5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS5_EventScript_Argo_2
# 64 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArgoFarewell
# 65 "data/maps/MareS5/scripts.pory"
	closemessage
MareS5_EventScript_Argo_1:
# 67 "data/maps/MareS5/scripts.pory"
	releaseall
	end

MareS5_EventScript_Argo_2:
# 61 "data/maps/MareS5/scripts.pory"
	warpsilent MAP_ARGO, 16, 9
# 62 "data/maps/MareS5/scripts.pory"
	waitstate
	goto MareS5_EventScript_Argo_1


MareS5_OnFrame_SailToColchis::
# 72 "data/maps/MareS5/scripts.pory"
	lockall
# 73 "data/maps/MareS5/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 74 "data/maps/MareS5/scripts.pory"
	applymovement 1, MareS5_Movement_SailToColchis1
# 75 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_SailToColchis1
# 76 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 77 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 78 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 79 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_Scylla, MSGBOX_DEFAULT
# 80 "data/maps/MareS5/scripts.pory"
	closemessage
# 81 "data/maps/MareS5/scripts.pory"
	showobjectat 1, MAP_MARE_S4
# 82 "data/maps/MareS5/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 83 "data/maps/MareS5/scripts.pory"
	applymovement 1, MareS5_Movement_SailToColchis2
# 84 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_SailToColchis2
# 85 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 86 "data/maps/MareS5/scripts.pory"
	delay 15
# 87 "data/maps/MareS5/scripts.pory"
	call BigIslandN_Script_ArgoArrival
# 88 "data/maps/MareS5/scripts.pory"
	releaseall
	end


# 92 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchisDirect:
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 94 "data/maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 97 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis1:
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 99 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 100 "data/maps/MareS5/scripts.pory"
	walk_right
	step_end

# 103 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis2Totals:
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data/maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 108 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis2:
# 109 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 109 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 109 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 109 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 109 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 109 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 109 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 109 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 110 "data/maps/MareS5/scripts.pory"
	walk_faster_left
# 110 "data/maps/MareS5/scripts.pory"
	walk_faster_left
# 110 "data/maps/MareS5/scripts.pory"
	walk_faster_left
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 111 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 112 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 116 "data/maps/MareS5/scripts.pory"
MareS5_Movement_PlayerExitsBoat1:
# 117 "data/maps/MareS5/scripts.pory"
	walk_right
	step_end

# 120 "data/maps/MareS5/scripts.pory"
MareS5_Movement_PlayerExitsBoat2:
# 121 "data/maps/MareS5/scripts.pory"
	walk_down
# 121 "data/maps/MareS5/scripts.pory"
	walk_down
# 121 "data/maps/MareS5/scripts.pory"
	walk_down
# 121 "data/maps/MareS5/scripts.pory"
	walk_down
	step_end

MareS5_Text_ArgoIntro1::
# 124 "data/maps/MareS5/scripts.pory"
	.string "Ahoy matey! If you be lost at sea feel\n"
	.string "free to join us!\n"
	.string "Will you board Argo?$"

MareS5_Text_ArgoFarewell::
# 128 "data/maps/MareS5/scripts.pory"
	.string "Farewell! Calm winds and gentle seas to\n"
	.string "you.$"

MareS5_Text_ArrivedAtColchis::
# 132 "data/maps/MareS5/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to\l"
	.string "this map Colchis is located within a\l"
	.string "cave on the west side of the island.\l"
	.string "Orpheus, search for food and fresh\l"
	.string "water And Theseus inquire with the town\l"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.\l"
	.string "Castor and Pollux you will guard the\l"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

MareS5_Text_Scylla::
# 136 "data/maps/MareS5/scripts.pory"
	.string "Ahoy mateys! Weigh anchor! Drop your\n"
	.string "oars! A mighty monster, whirlpool,\l"
	.string "clashing rocks, lie in our path ahead.\l"
	.string "Turn back lest Argo wreck and we\l"
	.string "perish!$"
