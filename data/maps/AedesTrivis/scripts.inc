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
# 24 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 25 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 26 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 27 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 28 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 30 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 8, METATILE_PetalburgGym_TempleFloor, FALSE
# 31 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 8, METATILE_PetalburgGym_TempleFloor, FALSE
# 32 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 8, METATILE_PetalburgGym_TempleFloor, FALSE
# 33 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 8, METATILE_PetalburgGym_TempleFloor, FALSE
# 34 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 8, METATILE_PetalburgGym_TempleFloor, FALSE
# 35 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 8, METATILE_PetalburgGym_TempleFloor, FALSE
# 36 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 8, METATILE_PetalburgGym_TempleFloor, FALSE
# 38 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 39 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 40 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 41 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 42 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 43 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 44 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 45 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 46 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 48 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 10, METATILE_PetalburgGym_TempleFloor, FALSE
# 49 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 10, METATILE_PetalburgGym_TempleFloor, FALSE
# 50 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 10, METATILE_PetalburgGym_TempleFloor, FALSE
# 51 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 10, METATILE_PetalburgGym_TempleFloor, FALSE
# 52 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 10, METATILE_PetalburgGym_TempleFloor, FALSE
# 53 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 10, METATILE_PetalburgGym_TempleFloor, FALSE
# 54 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 10, METATILE_PetalburgGym_TempleFloor, FALSE
# 55 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 10, METATILE_PetalburgGym_TempleFloor, FALSE
# 56 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 10, METATILE_PetalburgGym_TempleFloor, FALSE
# 57 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 10, METATILE_PetalburgGym_TempleFloor, FALSE
# 58 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 10, METATILE_PetalburgGym_TempleFloor, FALSE
# 60 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 11, METATILE_PetalburgGym_TempleFloor, FALSE
# 62 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 11, METATILE_PetalburgGym_TempleFloor, FALSE
# 64 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 4, 12, METATILE_PetalburgGym_TempleFloor, FALSE
# 65 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 12, METATILE_PetalburgGym_TempleFloor, FALSE
# 66 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 12, METATILE_PetalburgGym_TempleFloor, FALSE
# 68 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 12, METATILE_PetalburgGym_TempleFloor, FALSE
# 69 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 12, METATILE_PetalburgGym_TempleFloor, FALSE
# 70 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 18, 12, METATILE_PetalburgGym_TempleFloor, FALSE
# 72 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 4, 12, METATILE_PetalburgGym_TempleFloor, FALSE
# 73 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 12, METATILE_PetalburgGym_TempleFloor, FALSE
# 74 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 12, METATILE_PetalburgGym_TempleFloor, FALSE
# 76 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 12, METATILE_PetalburgGym_TempleFloor, FALSE
# 77 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 12, METATILE_PetalburgGym_TempleFloor, FALSE
# 78 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 18, 12, METATILE_PetalburgGym_TempleFloor, FALSE
	return

