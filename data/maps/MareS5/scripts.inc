MareS5_MapScripts::
# 12 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 18 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MareS5_MapScripts_MAP_SCRIPT_ON_LOAD
# 24 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MareS5_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 28 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MareS5_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/MareS5/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS5_F
	return

MareS5_MapScripts_MAP_SCRIPT_ON_LOAD:
# 19 "data/maps/MareS5/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_eq MareS5_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MareS5_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 20 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_SupressSurf
	return

MareS5_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 25 "data/maps/MareS5/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 1, MareS5_Script_HidePlayer
	.2byte 0

MareS5_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/MareS5/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 1, MareS5_OnFrame_SailToColchis
	.2byte 0


MareS5_Script_Transition_IslaPina::
# 35 "data/maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 3
# 36 "data/maps/MareS5/scripts.pory"
	special TransitionMapMusic
# 37 "data/maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return


MareS5_Script_MareTropicumTransition::
# 41 "data/maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 1
# 42 "data/maps/MareS5/scripts.pory"
	special TransitionMapMusic
# 43 "data/maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return


MareS5_Script_ActaEchonaTransition::
# 47 "data/maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 2
# 48 "data/maps/MareS5/scripts.pory"
	special TransitionMapMusic
# 49 "data/maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return


MareS5_Script_SupressSurf::
# 53 "data/maps/MareS5/scripts.pory"
	setmetatile 45, 45, METATILE_Slateport_CalmWater_False, FALSE
	end


MareS5_Script_HidePlayer::
# 58 "data/maps/MareS5/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5, 0
# 59 "data/maps/MareS5/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
	end


MareS5_EventScript_Argo::
# 64 "data/maps/MareS5/scripts.pory"
	lockall
# 65 "data/maps/MareS5/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 66 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 67 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArgoIntro1, MSGBOX_YESNO
# 68 "data/maps/MareS5/scripts.pory"
	closemessage
# 69 "data/maps/MareS5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS5_EventScript_Argo_2
# 73 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArgoFarewell
# 74 "data/maps/MareS5/scripts.pory"
	closemessage
MareS5_EventScript_Argo_1:
# 76 "data/maps/MareS5/scripts.pory"
	releaseall
	end

MareS5_EventScript_Argo_2:
# 70 "data/maps/MareS5/scripts.pory"
	warpsilent MAP_ARGO, 16, 9
# 71 "data/maps/MareS5/scripts.pory"
	waitstate
	goto MareS5_EventScript_Argo_1


MareS5_OnFrame_SailToColchis::
# 81 "data/maps/MareS5/scripts.pory"
	lockall
# 82 "data/maps/MareS5/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 83 "data/maps/MareS5/scripts.pory"
	applymovement 1, MareS5_Movement_SailToColchis1
# 84 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_SailToColchis1
# 85 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 86 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 87 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 88 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_Scylla, MSGBOX_DEFAULT
# 89 "data/maps/MareS5/scripts.pory"
	closemessage
# 90 "data/maps/MareS5/scripts.pory"
	showobjectat 1, MAP_MARE_S4
# 91 "data/maps/MareS5/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 92 "data/maps/MareS5/scripts.pory"
	applymovement 1, MareS5_Movement_SailToColchis2
# 93 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_SailToColchis2
# 94 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 95 "data/maps/MareS5/scripts.pory"
	delay 15
# 96 "data/maps/MareS5/scripts.pory"
	call BigIslandN_Script_ArgoArrival
# 97 "data/maps/MareS5/scripts.pory"
	releaseall
	end


# 101 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchisDirect:
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 102 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 103 "data/maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 106 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis1:
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 107 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 108 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 108 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 108 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 108 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 108 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 109 "data/maps/MareS5/scripts.pory"
	walk_right
	step_end

# 112 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis2Totals:
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 113 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 114 "data/maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 117 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis2:
# 118 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 118 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 118 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 118 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 118 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 118 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 118 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 118 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 119 "data/maps/MareS5/scripts.pory"
	walk_faster_left
# 119 "data/maps/MareS5/scripts.pory"
	walk_faster_left
# 119 "data/maps/MareS5/scripts.pory"
	walk_faster_left
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 120 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 121 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 122 "data/maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 125 "data/maps/MareS5/scripts.pory"
MareS5_Movement_PlayerExitsBoat1:
# 126 "data/maps/MareS5/scripts.pory"
	walk_right
	step_end

# 129 "data/maps/MareS5/scripts.pory"
MareS5_Movement_PlayerExitsBoat2:
# 130 "data/maps/MareS5/scripts.pory"
	walk_down
# 130 "data/maps/MareS5/scripts.pory"
	walk_down
# 130 "data/maps/MareS5/scripts.pory"
	walk_down
# 130 "data/maps/MareS5/scripts.pory"
	walk_down
	step_end

MareS5_Text_ArgoIntro1::
# 133 "data/maps/MareS5/scripts.pory"
	.string "Ahoy matey! If you be lost at sea feel\n"
	.string "free to join us!\n"
	.string "Will you board Argo?$"

MareS5_Text_ArgoFarewell::
# 137 "data/maps/MareS5/scripts.pory"
	.string "Farewell! Calm winds and gentle seas to\n"
	.string "you.$"

MareS5_Text_ArrivedAtColchis::
# 141 "data/maps/MareS5/scripts.pory"
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
# 145 "data/maps/MareS5/scripts.pory"
	.string "Ahoy mateys! Weigh anchor! Drop your\n"
	.string "oars! A mighty monster, whirlpool,\l"
	.string "clashing rocks, lie in our path ahead.\l"
	.string "Turn back lest Argo wreck and we\l"
	.string "perish!$"
