MareS5_MapScripts::
# 6 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MareS5_MapScripts_MAP_SCRIPT_ON_LOAD
# 12 "data/maps/MareS5/scripts.pory"
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

MareS5_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/MareS5/scripts.pory"
	map_script_2 VAR_ARGO_BOAT_STATE, 1, Mares5_OnFrame_SailToColchis
	.2byte 0


MareS5_Script_SupressSurf::
# 19 "data/maps/MareS5/scripts.pory"
	setmetatile 45, 45, METATILE_Slateport_CalmWater_False, FALSE
	end


MareS5_EventScript_Argo::
# 24 "data/maps/MareS5/scripts.pory"
	lockall
# 25 "data/maps/MareS5/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 26 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 27 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArgoIntro1, MSGBOX_YESNO
# 28 "data/maps/MareS5/scripts.pory"
	closemessage
# 29 "data/maps/MareS5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS5_EventScript_Argo_2
# 33 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArgoFarewell
# 34 "data/maps/MareS5/scripts.pory"
	closemessage
MareS5_EventScript_Argo_1:
# 36 "data/maps/MareS5/scripts.pory"
	releaseall
	end

MareS5_EventScript_Argo_2:
# 30 "data/maps/MareS5/scripts.pory"
	warpsilent MAP_ARGO, 16, 9
# 31 "data/maps/MareS5/scripts.pory"
	waitstate
	goto MareS5_EventScript_Argo_1


Mares5_OnFrame_SailToColchis::
# 41 "data/maps/MareS5/scripts.pory"
	lockall
# 42 "data/maps/MareS5/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5, 0
# 43 "data/maps/MareS5/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 44 "data/maps/MareS5/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 45 "data/maps/MareS5/scripts.pory"
	applymovement 1, MareS5_Movement_SailToColchisDirect
# 46 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_SailToColchisDirect
# 47 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 48 "data/maps/MareS5/scripts.pory"
	delay 50
# 49 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerExitsBoat1
# 50 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 51 "data/maps/MareS5/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 52 "data/maps/MareS5/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BIG_ISLAND_N
# 53 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerExitsBoat2
# 54 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 55 "data/maps/MareS5/scripts.pory"
	setflag FLAG_MARES5_HIDE_ARGO
# 56 "data/maps/MareS5/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 57 "data/maps/MareS5/scripts.pory"
	setvar VAR_ARGO_BOAT_STATE, 2
# 58 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArrivedAtColchis, MSGBOX_DEFAULT
# 59 "data/maps/MareS5/scripts.pory"
	releaseall
	end


# 63 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchisDirect:
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 64 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 65 "data/maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 68 "data/maps/MareS5/scripts.pory"
MareS5_Movement_PlayerExitsBoat1:
# 69 "data/maps/MareS5/scripts.pory"
	walk_right
	step_end

# 72 "data/maps/MareS5/scripts.pory"
MareS5_Movement_PlayerExitsBoat2:
# 73 "data/maps/MareS5/scripts.pory"
	walk_down
# 73 "data/maps/MareS5/scripts.pory"
	walk_down
# 73 "data/maps/MareS5/scripts.pory"
	walk_down
# 73 "data/maps/MareS5/scripts.pory"
	walk_down
	step_end

MareS5_Text_ArgoIntro1::
# 76 "data/maps/MareS5/scripts.pory"
	.string "Ahoy matey! If you be lost at sea feel\l"
	.string "free to join us!\n"
	.string "Will you board Argo?$"

MareS5_Text_ArgoFarewell::
# 80 "data/maps/MareS5/scripts.pory"
	.string "Farewell! Calm winds and gentle seas to\l"
	.string "you.$"

MareS5_Text_ArrivedAtColchis::
# 84 "data/maps/MareS5/scripts.pory"
	.string "We've landed on the north side of the\l"
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
