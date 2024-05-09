MareS5_MapScripts::
# 6 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MareS5_MapScripts_MAP_SCRIPT_ON_LOAD
# 12 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MareS5_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 16 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MareS5_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MareS5_MapScripts_MAP_SCRIPT_ON_LOAD:
# 7 "data/maps/MareS5/scripts.pory"
	compare VAR_ARGO_BOAT_STATE, 1
	goto_if_eq MareS5_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MareS5_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 8 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_SupressSurf
	return

MareS5_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 13 "data/maps/MareS5/scripts.pory"
	map_script_2 VAR_ARGO_BOAT_STATE, 1, MareS5_Script_HidePlayer
	.2byte 0

MareS5_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/MareS5/scripts.pory"
	map_script_2 VAR_ARGO_BOAT_STATE, 1, MareS5_OnFrame_SailToColchis
	.2byte 0


MareS5_Script_SupressSurf::
# 23 "data/maps/MareS5/scripts.pory"
	setmetatile 45, 45, METATILE_Slateport_CalmWater_False, FALSE
	end


MareS5_Script_HidePlayer::
# 28 "data/maps/MareS5/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5, 0
# 29 "data/maps/MareS5/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
	end


MareS5_EventScript_Argo::
# 34 "data/maps/MareS5/scripts.pory"
	lockall
# 35 "data/maps/MareS5/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 36 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 37 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArgoIntro1, MSGBOX_YESNO
# 38 "data/maps/MareS5/scripts.pory"
	closemessage
# 39 "data/maps/MareS5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS5_EventScript_Argo_2
# 43 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArgoFarewell
# 44 "data/maps/MareS5/scripts.pory"
	closemessage
MareS5_EventScript_Argo_1:
# 46 "data/maps/MareS5/scripts.pory"
	releaseall
	end

MareS5_EventScript_Argo_2:
# 40 "data/maps/MareS5/scripts.pory"
	warpsilent MAP_ARGO, 16, 9
# 41 "data/maps/MareS5/scripts.pory"
	waitstate
	goto MareS5_EventScript_Argo_1


MareS5_OnFrame_SailToColchis::
# 51 "data/maps/MareS5/scripts.pory"
	lockall
# 52 "data/maps/MareS5/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 53 "data/maps/MareS5/scripts.pory"
	applymovement 1, MareS5_Movement_SailToColchis1
# 54 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_SailToColchis1
# 55 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 56 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 57 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 61 "data/maps/MareS5/scripts.pory"
	showobjectat 1, MAP_MARE_S4
# 62 "data/maps/MareS5/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 63 "data/maps/MareS5/scripts.pory"
	applymovement 1, MareS5_Movement_SailToColchis2
# 64 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_SailToColchis2
# 65 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 66 "data/maps/MareS5/scripts.pory"
	delay 50
# 67 "data/maps/MareS5/scripts.pory"
	call BigIslandN_Script_ArgoArrival
# 68 "data/maps/MareS5/scripts.pory"
	releaseall
	end


# 72 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchisDirect:
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 73 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 74 "data/maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 77 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis1:
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 78 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 79 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 79 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 79 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 79 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 79 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareS5/scripts.pory"
	walk_right
	step_end

# 83 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis2Totals:
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 85 "data/maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 88 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis2:
# 89 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 89 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 89 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 89 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 89 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 89 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 89 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 89 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 90 "data/maps/MareS5/scripts.pory"
	walk_faster_left
# 90 "data/maps/MareS5/scripts.pory"
	walk_faster_left
# 90 "data/maps/MareS5/scripts.pory"
	walk_faster_left
# 90 "data/maps/MareS5/scripts.pory"
	walk_faster_left
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 91 "data/maps/MareS5/scripts.pory"
	walk_faster_up
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 92 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 93 "data/maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 96 "data/maps/MareS5/scripts.pory"
MareS5_Movement_PlayerExitsBoat1:
# 97 "data/maps/MareS5/scripts.pory"
	walk_right
	step_end

# 100 "data/maps/MareS5/scripts.pory"
MareS5_Movement_PlayerExitsBoat2:
# 101 "data/maps/MareS5/scripts.pory"
	walk_down
# 101 "data/maps/MareS5/scripts.pory"
	walk_down
# 101 "data/maps/MareS5/scripts.pory"
	walk_down
# 101 "data/maps/MareS5/scripts.pory"
	walk_down
	step_end

MareS5_Text_ArgoIntro1::
# 104 "data/maps/MareS5/scripts.pory"
	.string "Ahoy matey! If you be lost at sea feel\n"
	.string "free to join us!\n"
	.string "Will you board Argo?$"

MareS5_Text_ArgoFarewell::
# 108 "data/maps/MareS5/scripts.pory"
	.string "Farewell! Calm winds and gentle seas to\n"
	.string "you.$"

MareS5_Text_ArrivedAtColchis::
# 112 "data/maps/MareS5/scripts.pory"
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
# 116 "data/maps/MareS5/scripts.pory"
	.string "Ahoy mateys! Weigh anchor! Drop your\n"
	.string "oars! A mighty monster, whirlpool,\l"
	.string "clashing rocks, lie in our path ahead.\l"
	.string "Turn back lest Argo wreck and we\l"
	.string "perish!$"
