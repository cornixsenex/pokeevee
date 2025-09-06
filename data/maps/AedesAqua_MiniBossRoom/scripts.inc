AedesAqua_MiniBossRoom_MapScripts::
# 3 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_LOAD
# 18 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL6, AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setobjectxyperm LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDAN, 10, 11
# 7 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setobjectmovementtype LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDAN, MOVEMENT_TYPE_CHASE_PLAYER
	return

AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	checktrainerflag TRAINER_DARKBRENDAN
	goto_if 0, AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 13 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL6, AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 14 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setmetatile 10, 4, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	return

AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_RESUME:
# 20 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

AedesAqua_MiniBossRoom_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 21 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	hideobjectat LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDAN, MAP_AEDES_AQUA_MINI_BOSS_ROOM
# 22 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	removeobject LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDAN
	return


AedesAqua_MiniBossRoom_Script_Crystal6::
# 28 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL6, AedesAqua_MiniBossRoom_Script_Crystal6_2
# 42 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 43 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	closemessage
AedesAqua_MiniBossRoom_Script_Crystal6_1:
	end

AedesAqua_MiniBossRoom_Script_Crystal6_2:
# 29 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL6
# 30 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 31 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	playse SE_SWITCH
# 32 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	waitse
# 33 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	closemessage
# 34 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setmetatile 10, 4, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 35 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	special DrawWholeMapView
# 37 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	removeobject LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDAN
# 38 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setobjectxyperm LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDAN, 10, 11
# 39 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setobjectmovementtype LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDAN, MOVEMENT_TYPE_CHASE_PLAYER
# 40 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	addobject LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDAN
	goto AedesAqua_MiniBossRoom_Script_Crystal6_1


AedesAqua_MiniBossRoom_Script_DarkBrendan::
# 49 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 50 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DARKBRENDAN, AedesAqua_MiniBossRoom_Text_DarkBrendanLost
# 51 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 53 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	removeobject LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDAN
# 54 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setobjectxyperm LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDAN, 0, 0
# 55 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setobjectmovementtype LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDAN, MOVEMENT_TYPE_INVISIBLE
# 56 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	addobject LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDAN
	return


AedesAqua_MiniBossRoom_Text_DarkBrendanLost::
# 59 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	.string "$"
