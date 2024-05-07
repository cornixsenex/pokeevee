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
# 47 "data/maps/MareS5/scripts.pory"
	applymovement 1, MareS5_Movement_SailToColchis1
# 48 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_SailToColchis1
# 49 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 50 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 51 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 52 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_Scylla, MSGBOX_DEFAULT
# 53 "data/maps/MareS5/scripts.pory"
	closemessage
# 54 "data/maps/MareS5/scripts.pory"
	showobjectat 1, MAP_MARE_S4
# 55 "data/maps/MareS5/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 56 "data/maps/MareS5/scripts.pory"
	applymovement 1, MareS5_Movement_SailToColchis2
# 57 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_SailToColchis2
# 58 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 59 "data/maps/MareS5/scripts.pory"
	delay 50
# 60 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerExitsBoat1
# 61 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 62 "data/maps/MareS5/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 63 "data/maps/MareS5/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BIG_ISLAND_N
# 64 "data/maps/MareS5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerExitsBoat2
# 65 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 66 "data/maps/MareS5/scripts.pory"
	setflag FLAG_MARES5_HIDE_ARGO
# 67 "data/maps/MareS5/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 68 "data/maps/MareS5/scripts.pory"
	setvar VAR_ARGO_BOAT_STATE, 2
# 69 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArrivedAtColchis, MSGBOX_DEFAULT
# 70 "data/maps/MareS5/scripts.pory"
	releaseall
	end


# 74 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchisDirect:
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 75 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 76 "data/maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 79 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis1:
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 80 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 81 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 81 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 81 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 81 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 82 "data/maps/MareS5/scripts.pory"
	walk_right
	step_end

# 85 "data/maps/MareS5/scripts.pory"
MareS5_Movement_SailToColchis2:
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 86 "data/maps/MareS5/scripts.pory"
	walk_faster_right
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
# 87 "data/maps/MareS5/scripts.pory"
	walk_faster_down
	step_end

# 90 "data/maps/MareS5/scripts.pory"
MareS5_Movement_PlayerExitsBoat1:
# 91 "data/maps/MareS5/scripts.pory"
	walk_right
	step_end

# 94 "data/maps/MareS5/scripts.pory"
MareS5_Movement_PlayerExitsBoat2:
# 95 "data/maps/MareS5/scripts.pory"
	walk_down
# 95 "data/maps/MareS5/scripts.pory"
	walk_down
# 95 "data/maps/MareS5/scripts.pory"
	walk_down
# 95 "data/maps/MareS5/scripts.pory"
	walk_down
	step_end

MareS5_Text_ArgoIntro1::
# 98 "data/maps/MareS5/scripts.pory"
	.string "Ahoy matey! If you be lost at sea feel\l"
	.string "free to join us!\n"
	.string "Will you board Argo?$"

MareS5_Text_ArgoFarewell::
# 102 "data/maps/MareS5/scripts.pory"
	.string "Farewell! Calm winds and gentle seas to\l"
	.string "you.$"

MareS5_Text_ArrivedAtColchis::
# 106 "data/maps/MareS5/scripts.pory"
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

MareS5_Text_Scylla::
# 110 "data/maps/MareS5/scripts.pory"
	.string "Ahoy mateys! Weigh anchor! Drop your\l"
	.string "oars! A mighty monster, whirlpool,\l"
	.string "clashing rocks, lie in our path ahead.\l"
	.string "Turn back lest Argo wreck and we\l"
	.string "perish!$"
