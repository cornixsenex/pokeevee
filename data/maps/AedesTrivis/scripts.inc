AedesTrivis_MapScripts::
# 5 "data/maps/AedesTrivis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AedesTrivis_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AedesTrivis_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/AedesTrivis/scripts.pory"
	compare VAR_ORESTES_STATE, 69
	goto_if_lt AedesTrivis_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

AedesTrivis_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 9 "data/maps/AedesTrivis/scripts.pory"
	call AedesTrivis_Script_HideTriforceFloor
	return


AedesTrivis_Script_HideTriforceFloor::
# 18 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 5, METATILE_PetalburgGym_TempleFloor, FALSE
# 20 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 6, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 21 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 6, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 22 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 6, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
	return

