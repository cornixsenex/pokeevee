AedesAqua_Water1_MapScripts::
# 3 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 13 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 13, AedesAqua_Script_FacePlayerUp
# 6 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 15, AedesAqua_Script_FacePlayerUp
# 7 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 17, AedesAqua_Script_FacePlayerUp
	.2byte 0

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 2, AedesAqua_Water1_Script_NoWaterfall4
	.2byte 0


AedesAqua_Water1_Script_NoWaterfall4::
# 21 "data/maps/AedesAqua_Water1/scripts.pory"
	call AedesAqua_Water1_Script_ShowNoWaterfall
# 22 "data/maps/AedesAqua_Water1/scripts.pory"
	warpsilent MAP_AEDES_AQUA, 58, 6
	return


AedesAqua_Water1_Script_ShowNoWaterfall::
# 26 "data/maps/AedesAqua_Water1/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 27 "data/maps/AedesAqua_Water1/scripts.pory"
	waitse
# 29 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 26, 0, METATILE_Cave_RockWallE, TRUE
# 30 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 0, METATILE_Cave_RockWallTop, TRUE
# 31 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 0, METATILE_Cave_RockWallTop, TRUE
# 32 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 0, METATILE_Cave_RockWallTop, TRUE
# 33 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 0, METATILE_Cave_RockWallW, TRUE
# 34 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 0, METATILE_Cave_RockWallE, TRUE
# 35 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 0, METATILE_Cave_RockWallTop, TRUE
# 36 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 0, METATILE_Cave_RockWallTop, TRUE
# 37 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 0, METATILE_Cave_RockWallTop, TRUE
# 38 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 36, 0, METATILE_Cave_RockWallW, TRUE
# 40 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 26, 1, METATILE_Cave_RockWallE, TRUE
# 41 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 1, METATILE_Cave_RockWallTop, TRUE
# 42 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 1, METATILE_Cave_RockWallTop, TRUE
# 43 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 1, METATILE_Cave_RockWallTop, TRUE
# 44 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 1, METATILE_Cave_RockWallW, TRUE
# 45 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 1, METATILE_Cave_RockWallE, TRUE
# 46 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 1, METATILE_Cave_RockWallTop, TRUE
# 47 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 1, METATILE_Cave_RockWallTop, TRUE
# 48 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 1, METATILE_Cave_RockWallTop, TRUE
# 49 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 36, 1, METATILE_Cave_RockWallW, TRUE
# 51 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 26, 2, METATILE_Cave_RockWallSE, TRUE
# 52 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 2, METATILE_Cave_RockWallTop, TRUE
# 53 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 2, METATILE_Cave_RockWallTop, TRUE
# 54 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 2, METATILE_Cave_RockWallTop, TRUE
# 55 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 2, METATILE_Cave_RockWallSW, TRUE
# 56 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 31, 2, METATILE_Cave_RockWallS, TRUE
# 57 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 2, METATILE_Cave_RockWallSE, TRUE
# 58 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 2, METATILE_Cave_RockWallTop, TRUE
# 59 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 2, METATILE_Cave_RockWallTop, TRUE
# 60 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 2, METATILE_Cave_RockWallTop, TRUE
# 61 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 36, 2, METATILE_Cave_RockWallSW, TRUE
# 63 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 3, METATILE_Cave_RockWallS, TRUE
# 64 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 3, METATILE_Cave_RockWallS, TRUE
# 65 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 3, METATILE_Cave_RockWallS, TRUE
# 66 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 3, METATILE_Cave_RockWallS, TRUE
# 67 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 31, 3, METATILE_Cave_RockWallS, TRUE
# 68 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 3, METATILE_Cave_RockWallS, TRUE
# 69 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 3, METATILE_Cave_RockWallS, TRUE
# 70 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 3, METATILE_Cave_RockWallS, TRUE
# 71 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 3, METATILE_Cave_RockWallS, TRUE
# 73 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 4, METATILE_Cave_RockWallS, TRUE
# 74 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 4, METATILE_Cave_RockWallS, TRUE
# 75 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 4, METATILE_Cave_RockWallS, TRUE
# 76 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 4, METATILE_Cave_RockWallS, TRUE
# 77 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 31, 4, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 78 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 4, METATILE_Cave_RockWallS, TRUE
# 79 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 4, METATILE_Cave_RockWallS, TRUE
# 80 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 4, METATILE_Cave_RockWallS, TRUE
# 81 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 4, METATILE_Cave_RockWallS, TRUE
# 83 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 5, METATILE_Cave_RockWallS, TRUE
# 84 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 5, METATILE_Cave_RockWallS, TRUE
# 85 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 5, METATILE_Cave_RockWallS, TRUE
# 86 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 5, METATILE_Cave_RockWallS, TRUE
# 87 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 31, 5, METATILE_Cave_SealedChamberEntrance_BottomMid, TRUE
# 88 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 5, METATILE_Cave_RockWallS, TRUE
# 89 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 5, METATILE_Cave_RockWallS, TRUE
# 90 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 5, METATILE_Cave_RockWallS, TRUE
# 91 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 5, METATILE_Cave_RockWallS, TRUE
# 92 "data/maps/AedesAqua_Water1/scripts.pory"
	special DrawWholeMapView
# 93 "data/maps/AedesAqua_Water1/scripts.pory"
	delay 50
	return

