MareS5_MapScripts::
# 11 "data//maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 22 "data//maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MareS5_MapScripts_MAP_SCRIPT_ON_LOAD
# 28 "data//maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MareS5_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 32 "data//maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MareS5_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data//maps/MareS5/scripts.pory"
	specialvar VAR_RESULT, IsMareS5MareTropicum_F
# 15 "data//maps/MareS5/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 18 "data//maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data//maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

MareS5_MapScripts_MAP_SCRIPT_ON_LOAD:
# 23 "data//maps/MareS5/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_eq MareS5_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MareS5_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 24 "data//maps/MareS5/scripts.pory"
	call MareS5_Script_SupressSurf
	return

MareS5_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 29 "data//maps/MareS5/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 1, MareS5_Script_HidePlayer
	.2byte 0

MareS5_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 33 "data//maps/MareS5/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 1, MareS5_OnFrame_SailToColchis
	.2byte 0


MareS5_Script_MareTropicumTransition::
# 39 "data//maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 1
# 40 "data//maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return


MareS5_Script_ActaEchonaTransition::
# 44 "data//maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 2
# 45 "data//maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return


MareS5_Script_SupressSurf::
# 49 "data//maps/MareS5/scripts.pory"
	setmetatile 45, 45, METATILE_Slateport_CalmWater_False, FALSE
	end


MareS5_Script_HidePlayer::
# 54 "data//maps/MareS5/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5, 0
# 55 "data//maps/MareS5/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
	end


MareS5_EventScript_Argo::
# 60 "data//maps/MareS5/scripts.pory"
	lockall
# 61 "data//maps/MareS5/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 62 "data//maps/MareS5/scripts.pory"
	waitmovement 0
# 63 "data//maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArgoIntro1, MSGBOX_YESNO
# 64 "data//maps/MareS5/scripts.pory"
	closemessage
# 65 "data//maps/MareS5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS5_EventScript_Argo_2
# 69 "data//maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArgoFarewell
# 70 "data//maps/MareS5/scripts.pory"
	closemessage
MareS5_EventScript_Argo_1:
# 72 "data//maps/MareS5/scripts.pory"
	releaseall
	end

MareS5_EventScript_Argo_2:
# 66 "data//maps/MareS5/scripts.pory"
	warpsilent MAP_ARGO, 16, 9
# 67 "data//maps/MareS5/scripts.pory"
	waitstate
	goto MareS5_EventScript_Argo_1


MareS5_OnFrame_SailToColchis::
# 77 "data//maps/MareS5/scripts.pory"
	lockall
# 78 "data//maps/MareS5/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 79 "data//maps/MareS5/scripts.pory"
	applymovement 1, MareS5_Movement_SailToColchis1
# 80 "data//maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_SailToColchis1
# 81 "data//maps/MareS5/scripts.pory"
	waitmovement 0
# 82 "data//maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 83 "data//maps/MareS5/scripts.pory"
	waitmovement 0
# 84 "data//maps/MareS5/scripts.pory"
	msgbox MareS5_Text_Scylla, MSGBOX_DEFAULT
# 85 "data//maps/MareS5/scripts.pory"
	closemessage
# 86 "data//maps/MareS5/scripts.pory"
	showobjectat 1, MAP_MARE_S4
# 87 "data//maps/MareS5/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 88 "data//maps/MareS5/scripts.pory"
	applymovement 1, MareS5_Movement_SailToColchis2
# 89 "data//maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_SailToColchis2
# 90 "data//maps/MareS5/scripts.pory"
	waitmovement 0
# 91 "data//maps/MareS5/scripts.pory"
	delay 15
# 92 "data//maps/MareS5/scripts.pory"
	call BigIslandN_Script_ArgoArrival
# 93 "data//maps/MareS5/scripts.pory"
	releaseall
	end


# 97 "data//maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchisDirect:
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 98 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 99 "data//maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 102 "data//maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis1:
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 103 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 104 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 104 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 104 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 104 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 104 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 105 "data//maps/MareS5/scripts.pory"
	walk_right
	step_end

# 108 "data//maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis2Totals:
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 109 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 110 "data//maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 113 "data//maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis2:
# 114 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 114 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 114 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 114 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 114 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 114 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 114 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 114 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 115 "data//maps/MareS5/scripts.pory"
	walk_faster_left
# 115 "data//maps/MareS5/scripts.pory"
	walk_faster_left
# 115 "data//maps/MareS5/scripts.pory"
	walk_faster_left
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 116 "data//maps/MareS5/scripts.pory"
	walk_faster_up
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 117 "data//maps/MareS5/scripts.pory"
	walk_faster_right
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
# 118 "data//maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 121 "data//maps/MareS5/scripts.pory"
MareS5_Movement_PlayerExitsBoat1:
# 122 "data//maps/MareS5/scripts.pory"
	walk_right
	step_end

# 125 "data//maps/MareS5/scripts.pory"
MareS5_Movement_PlayerExitsBoat2:
# 126 "data//maps/MareS5/scripts.pory"
	walk_down
# 126 "data//maps/MareS5/scripts.pory"
	walk_down
# 126 "data//maps/MareS5/scripts.pory"
	walk_down
# 126 "data//maps/MareS5/scripts.pory"
	walk_down
	step_end

MareS5_Text_ArgoIntro1::
# 129 "data//maps/MareS5/scripts.pory"
	.string "Ahoy matey! If you be lost at sea feel\n"
	.string "free to join us!\n"
	.string "Will you board Argo?$"

MareS5_Text_ArgoFarewell::
# 133 "data//maps/MareS5/scripts.pory"
	.string "Farewell! Calm winds and gentle seas to\n"
	.string "you.$"

MareS5_Text_ArrivedAtColchis::
# 137 "data//maps/MareS5/scripts.pory"
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
# 141 "data//maps/MareS5/scripts.pory"
	.string "Ahoy mateys! Weigh anchor! Drop your\n"
	.string "oars! A mighty monster, whirlpool,\l"
	.string "clashing rocks, lie in our path ahead.\l"
	.string "Turn back lest Argo wreck and we\l"
	.string "perish!$"
