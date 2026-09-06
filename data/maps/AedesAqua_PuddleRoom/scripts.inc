AedesAqua_PuddleRoom_MapScripts::
	.byte 0


AedesAqua_PuddleRoom_Script_Crystal8::
# 5 "data/maps/AedesAqua_PuddleRoom/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL8, AedesAqua_PuddleRoom_Script_Crystal8_2
# 14 "data/maps/AedesAqua_PuddleRoom/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 15 "data/maps/AedesAqua_PuddleRoom/scripts.pory"
	closemessage
AedesAqua_PuddleRoom_Script_Crystal8_1:
	end

AedesAqua_PuddleRoom_Script_Crystal8_2:
# 6 "data/maps/AedesAqua_PuddleRoom/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL8
# 7 "data/maps/AedesAqua_PuddleRoom/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 8 "data/maps/AedesAqua_PuddleRoom/scripts.pory"
	playse SE_SWITCH
# 9 "data/maps/AedesAqua_PuddleRoom/scripts.pory"
	waitse
# 10 "data/maps/AedesAqua_PuddleRoom/scripts.pory"
	closemessage
# 11 "data/maps/AedesAqua_PuddleRoom/scripts.pory"
	setmetatile 6, 6, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 12 "data/maps/AedesAqua_PuddleRoom/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_PuddleRoom_Script_Crystal8_1

