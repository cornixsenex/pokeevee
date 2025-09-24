AedesTerra_BossRoom_MapScripts::
# 8 "data/maps/AedesTerra_BossRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/AedesTerra_BossRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/AedesTerra_BossRoom/scripts.pory"
	goto_if_unset FLAG_AEDESTERRA_GANONDORF, AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setvar VAR_TEMP_B, 1
	return

AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/AedesTerra_BossRoom/scripts.pory"
	map_script_2 VAR_TEMP_B, 1, AedesTerra_BossRoom_Script_GanondorfScene
	.2byte 0


AedesTerra_BossRoom_Script_GanondorfScene::
# 24 "data/maps/AedesTerra_BossRoom/scripts.pory"
	lockall
# 26 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setvar VAR_TEMP_B, 0
# 28 "data/maps/AedesTerra_BossRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 29 "data/maps/AedesTerra_BossRoom/scripts.pory"
	waitmovement 0
# 31 "data/maps/AedesTerra_BossRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp5
# 32 "data/maps/AedesTerra_BossRoom/scripts.pory"
	waitmovement 0
# 34 "data/maps/AedesTerra_BossRoom/scripts.pory"
	load_field_pic FIELD_PIC_GANONDORF, 190, 98
# 35 "data/maps/AedesTerra_BossRoom/scripts.pory"
	msgbox AedesTerra_BossRoom_Text_GanondorfPre
# 36 "data/maps/AedesTerra_BossRoom/scripts.pory"
	destroy_field_pic FIELD_PIC_GANONDORF
# 37 "data/maps/AedesTerra_BossRoom/scripts.pory"
	closemessage
# 39 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 41 "data/maps/AedesTerra_BossRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GANONDORF, AedesTerra_BossRoom_Text_GanondorfLost
# 43 "data/maps/AedesTerra_BossRoom/scripts.pory"
	clearflag FLAG_AEDESTERRA_GANONDORF
# 44 "data/maps/AedesTerra_BossRoom/scripts.pory"
	removeobject LOCALID_AEDESTERRABOSSROOM_GANONDORF
# 45 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRABOSSROOM_GANONDORF, 0, 0
# 46 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTERRABOSSROOM_GANONDORF, MOVEMENT_TYPE_INVISIBLE
# 47 "data/maps/AedesTerra_BossRoom/scripts.pory"
	addobject LOCALID_AEDESTERRABOSSROOM_GANONDORF
# 49 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setflag FLAG_AEDESTERRA_GANONDORF
# 51 "data/maps/AedesTerra_BossRoom/scripts.pory"
	releaseall
	end


AedesTerra_BossRoom_Text_GanondorfPre::
# 55 "data/maps/AedesTerra_BossRoom/scripts.pory"
	.string "$"

AedesTerra_BossRoom_Text_GanondorfLost::
# 60 "data/maps/AedesTerra_BossRoom/scripts.pory"
	.string "$"
