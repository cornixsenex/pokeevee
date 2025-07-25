MareC_MapScripts::
# 3 "data/maps/MareC/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MareC_MapScripts_MAP_SCRIPT_ON_LOAD
# 9 "data/maps/MareC/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MareC_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 13 "data/maps/MareC/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MareC_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MareC_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/MareC/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_eq MareC_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MareC_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 5 "data/maps/MareC/scripts.pory"
	call MareC_Script_SupressSurf
	return

MareC_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/MareC/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 1, MareC_Script_HidePlayer
	.2byte 0

MareC_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/MareC/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 1, MareC_Script_SailToColchis
	.2byte 0


MareC_Script_SupressSurf::
# 21 "data/maps/MareC/scripts.pory"
	setmetatile 62, 30, METATILE_Slateport_CalmWater_False, FALSE
	end


MareC_Script_HidePlayer::
# 26 "data/maps/MareC/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5, 0
# 27 "data/maps/MareC/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
	end


MareC_Script_Argo::
# 32 "data/maps/MareC/scripts.pory"
	lockall
# 33 "data/maps/MareC/scripts.pory"
	applymovement LOCALID_MAREC_ARGO, Common_Movement_ExclamationMark
# 34 "data/maps/MareC/scripts.pory"
	waitmovement 0
# 35 "data/maps/MareC/scripts.pory"
	msgbox MareC_Text_ArgoIntro1, MSGBOX_YESNO
# 36 "data/maps/MareC/scripts.pory"
	closemessage
# 37 "data/maps/MareC/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareC_Script_Argo_2
# 41 "data/maps/MareC/scripts.pory"
	msgbox MareC_Text_ArgoFarewell
# 42 "data/maps/MareC/scripts.pory"
	closemessage
MareC_Script_Argo_1:
# 44 "data/maps/MareC/scripts.pory"
	releaseall
	end

MareC_Script_Argo_2:
# 38 "data/maps/MareC/scripts.pory"
	warpsilent MAP_ARGO, 16, 9
# 39 "data/maps/MareC/scripts.pory"
	waitstate
	goto MareC_Script_Argo_1


MareC_Script_SailToColchis::
# 49 "data/maps/MareC/scripts.pory"
	lockall
# 50 "data/maps/MareC/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 51 "data/maps/MareC/scripts.pory"
	applymovement LOCALID_MAREC_ARGO, MareC_Movement_SailToColchis1
# 52 "data/maps/MareC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareC_Movement_SailToColchis1
# 53 "data/maps/MareC/scripts.pory"
	waitmovement 0
# 54 "data/maps/MareC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 55 "data/maps/MareC/scripts.pory"
	waitmovement 0
# 56 "data/maps/MareC/scripts.pory"
	msgbox MareC_Text_Scylla, MSGBOX_DEFAULT
# 57 "data/maps/MareC/scripts.pory"
	closemessage
# 58 "data/maps/MareC/scripts.pory"
	showobjectat LOCALID_MAREC_ARGO, MAP_MARE_S4
# 59 "data/maps/MareC/scripts.pory"
	hideobjectat LOCALID_MAREC_ARGO, MAP_MARE_C
# 60 "data/maps/MareC/scripts.pory"
	applymovement LOCALID_MAREC_ARGO, MareC_Movement_SailToColchis2
# 61 "data/maps/MareC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareC_Movement_SailToColchis2
# 62 "data/maps/MareC/scripts.pory"
	waitmovement 0
# 63 "data/maps/MareC/scripts.pory"
	delay 15
# 64 "data/maps/MareC/scripts.pory"
	call BigIslandN_Script_ArgoArrival
# 65 "data/maps/MareC/scripts.pory"
	releaseall
	end


# 69 "data/maps/MareC/scripts.pory"
MareC_Movement_SailToColchis1:
# 70 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 70 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 71 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 72 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 73 "data/maps/MareC/scripts.pory"
	face_right
	step_end

# 77 "data/maps/MareC/scripts.pory"
MareC_Movement_SailToColchis2:
# 78 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 79 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 80 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 81 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 81 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 81 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 81 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 81 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 81 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 81 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 81 "data/maps/MareC/scripts.pory"
	walk_faster_left
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 83 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 84 "data/maps/MareC/scripts.pory"
	walk_faster_up
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 85 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 86 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 86 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 86 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 86 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 86 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 86 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 86 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 86 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 86 "data/maps/MareC/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 87 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 87 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 87 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 87 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 87 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 87 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 87 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 87 "data/maps/MareC/scripts.pory"
	walk_faster_right
# 88 "data/maps/MareC/scripts.pory"
	face_down
	step_end

MareC_Text_Scylla::
# 92 "data/maps/MareC/scripts.pory"
	.string "Ahoy mateys! Weigh anchor! Drop your\n"
	.string "oars! A mighty monster, whirlpool,\l"
	.string "clashing rocks, lie in our path ahead.\l"
	.string "Turn back lest Argo wreck and we\l"
	.string "perish!$"

MareC_Text_ArgoIntro1::
# 96 "data/maps/MareC/scripts.pory"
	.string "Ahoy matey! If you be lost at sea feel\n"
	.string "free to join us!\n"
	.string "Will you board Argo?$"

MareC_Text_ArgoFarewell::
# 100 "data/maps/MareC/scripts.pory"
	.string "Farewell! Calm winds and gentle seas to\n"
	.string "you.$"
