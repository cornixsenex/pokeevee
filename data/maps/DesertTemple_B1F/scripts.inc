DesertTemple_B1F_MapScripts::
	.byte 0


DesertTemple_B1F_EventScript_Lamp::
# 4 "data/maps/DesertTemple_B1F/scripts.pory"
	lock
# 5 "data/maps/DesertTemple_B1F/scripts.pory"
	finditem ITEM_ANCIENT_LAMP
# 6 "data/maps/DesertTemple_B1F/scripts.pory"
	setflag FLAG_DESERTTEMPLE_BF1_HIDELAMP
# 7 "data/maps/DesertTemple_B1F/scripts.pory"
	removeobject 1
# 8 "data/maps/DesertTemple_B1F/scripts.pory"
	release
	end

