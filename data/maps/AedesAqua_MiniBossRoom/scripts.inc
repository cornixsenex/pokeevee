AedesAqua_MiniBossRoom_MapScripts::
	.byte 0


AedesAqua_MiniBossRoom_Script_Crystal6::
# 7 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL6, AedesAqua_MiniBossRoom_Script_Crystal6_2
# 21 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 22 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	closemessage
AedesAqua_MiniBossRoom_Script_Crystal6_1:
	end

AedesAqua_MiniBossRoom_Script_Crystal6_2:
# 8 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL6
# 9 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 10 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	playse SE_SWITCH
# 11 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	waitse
# 12 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	closemessage
# 13 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setmetatile 10, 4, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 14 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	removeobject LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDEN
# 17 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setobjectxyperm LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDEN, 10, 11
# 18 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	setobjectmovementtype LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDEN, MOVEMENT_TYPE_CHASE_PLAYER
# 19 "data/maps/AedesAqua_MiniBossRoom/scripts.pory"
	addobject LOCALID_AEDESAQUA_MINIBOSSROOM_DARKBRENDEN
	goto AedesAqua_MiniBossRoom_Script_Crystal6_1


AedesAqua_MiniBossRoom_Script_DarkBrenden::
	return

