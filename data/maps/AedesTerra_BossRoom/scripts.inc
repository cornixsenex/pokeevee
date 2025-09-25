AedesTerra_BossRoom_MapScripts::
# 8 "data/maps/AedesTerra_BossRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 22 "data/maps/AedesTerra_BossRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/AedesTerra_BossRoom/scripts.pory"
	checktrainerflag TRAINER_GANONDORF
	goto_if 0, AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/AedesTerra_BossRoom/scripts.pory"
	goto_if_set FLAG_AEDESTERRA_TRIVIS, AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setvar VAR_TEMP_B, 1
# 12 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRABOSSROOM_GANONDORF, 10, 12
# 13 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTERRABOSSROOM_GANONDORF, MOVEMENT_TYPE_FACE_DOWN
	goto AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 17 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRABOSSROOM_TRIVIS, 0, 0
# 18 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTERRABOSSROOM_TRIVIS, MOVEMENT_TYPE_INVISIBLE
	return

AedesTerra_BossRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 23 "data/maps/AedesTerra_BossRoom/scripts.pory"
	map_script_2 VAR_TEMP_B, 1, AedesTerra_BossRoom_Script_GanondorfScene
	.2byte 0


AedesTerra_BossRoom_Script_GanondorfScene::
# 30 "data/maps/AedesTerra_BossRoom/scripts.pory"
	lockall
# 32 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setvar VAR_TEMP_B, 0
# 34 "data/maps/AedesTerra_BossRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 35 "data/maps/AedesTerra_BossRoom/scripts.pory"
	waitmovement 0
# 37 "data/maps/AedesTerra_BossRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp5
# 38 "data/maps/AedesTerra_BossRoom/scripts.pory"
	waitmovement 0
# 40 "data/maps/AedesTerra_BossRoom/scripts.pory"
	load_field_pic FIELD_PIC_GANONDORF, 190, 98
# 41 "data/maps/AedesTerra_BossRoom/scripts.pory"
	msgbox AedesTerra_BossRoom_Text_GanondorfPre
# 42 "data/maps/AedesTerra_BossRoom/scripts.pory"
	destroy_field_pic FIELD_PIC_GANONDORF
# 43 "data/maps/AedesTerra_BossRoom/scripts.pory"
	closemessage
# 45 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 47 "data/maps/AedesTerra_BossRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GANONDORF, AedesTerra_BossRoom_Text_GanondorfLost
# 49 "data/maps/AedesTerra_BossRoom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 50 "data/maps/AedesTerra_BossRoom/scripts.pory"
	removeobject LOCALID_AEDESTERRABOSSROOM_GANONDORF
# 51 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRABOSSROOM_GANONDORF, 0, 0
# 52 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTERRABOSSROOM_GANONDORF, MOVEMENT_TYPE_INVISIBLE
# 53 "data/maps/AedesTerra_BossRoom/scripts.pory"
	addobject LOCALID_AEDESTERRABOSSROOM_GANONDORF
# 55 "data/maps/AedesTerra_BossRoom/scripts.pory"
	releaseall
	end


AedesTerra_BossRoom_Script_Trivis::
# 61 "data/maps/AedesTerra_BossRoom/scripts.pory"
	msgbox AedesTerra_BossRoom_Text_Trivis
# 62 "data/maps/AedesTerra_BossRoom/scripts.pory"
	closemessage
# 64 "data/maps/AedesTerra_BossRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 65 "data/maps/AedesTerra_BossRoom/scripts.pory"
	delay 40
# 67 "data/maps/AedesTerra_BossRoom/scripts.pory"
	removeobject LOCALID_AEDESTERRABOSSROOM_TRIVIS
# 68 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRABOSSROOM_TRIVIS, 0, 0
# 69 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTERRABOSSROOM_TRIVIS, MOVEMENT_TYPE_INVISIBLE
# 70 "data/maps/AedesTerra_BossRoom/scripts.pory"
	addobject LOCALID_AEDESTERRABOSSROOM_TRIVIS
# 72 "data/maps/AedesTerra_BossRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 74 "data/maps/AedesTerra_BossRoom/scripts.pory"
	giveitem ITEM_TRIVIS_POTESTATIS
# 76 "data/maps/AedesTerra_BossRoom/scripts.pory"
	setflag FLAG_AEDESTERRA_TRIVIS
	return


AedesTerra_BossRoom_Text_GanondorfPre::
# 79 "data/maps/AedesTerra_BossRoom/scripts.pory"
	.string "You foolish child! You opened the path\n"
	.string "to the sacred power the green hero\l"
	.string "sealed here. Now all that's left for me\l"
	.string "to do is finish you and seize it for\l"
	.string "myself.$"

AedesTerra_BossRoom_Text_GanondorfLost::
# 87 "data/maps/AedesTerra_BossRoom/scripts.pory"
	.string "Impossible! Victory was so close!$"

AedesTerra_BossRoom_Text_Trivis::
# 92 "data/maps/AedesTerra_BossRoom/scripts.pory"
	.string "The golden triangle begins glowing\n"
	.string "brightly as you approach.$"
