AedesAqua_Water2_MapScripts::
# 3 "data/maps/AedesAqua_Water2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD
# 25 "data/maps/AedesAqua_Water2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 35 "data/maps/AedesAqua_Water2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/AedesAqua_Water2/scripts.pory"
	compare VAR_AEDES_AQUA_STATE, 2
	goto_if_eq AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 5 "data/maps/AedesAqua_Water2/scripts.pory"
	compare VAR_AEDES_AQUA_STATE, 15
	goto_if_eq AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_2
AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 10 "data/maps/AedesAqua_Water2/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL4, AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_7
AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 13 "data/maps/AedesAqua_Water2/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL5, AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_10
AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 16 "data/maps/AedesAqua_Water2/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL7, AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_13
AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 19 "data/maps/AedesAqua_Water2/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL10, AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_15
	return

AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 6 "data/maps/AedesAqua_Water2/scripts.pory"
	call AedesAqua_Water2_Script_SupressSurf
	goto AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_1

AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 11 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 50, 20, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_6

AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 14 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 5, 31, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_9

AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 17 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 29, 38, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_12

AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 20 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 18, 53, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	return

AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 27 "data/maps/AedesAqua_Water2/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 21, AedesAqua_Script_FacePlayerUp
# 30 "data/maps/AedesAqua_Water2/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 2, AedesAqua_Water2_Script_HidePlayer
# 31 "data/maps/AedesAqua_Water2/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 15, AedesAqua_Water2_Script_HidePlayer
	.2byte 0

AedesAqua_Water2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 36 "data/maps/AedesAqua_Water2/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 2, AedesAqua_Water2_Script_NoWaterfall2
# 37 "data/maps/AedesAqua_Water2/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 15, AedesAqua_Water2_Script_LowWaterfall15
	.2byte 0


AedesAqua_Water2_Script_ShowNoWaterfall::
# 44 "data/maps/AedesAqua_Water2/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 45 "data/maps/AedesAqua_Water2/scripts.pory"
	waitse
# 47 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 26, 0, METATILE_Cave_RockWallE, TRUE
# 48 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 27, 0, METATILE_Cave_RockWallTop, TRUE
# 49 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 28, 0, METATILE_Cave_RockWallTop, TRUE
# 50 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 29, 0, METATILE_Cave_RockWallTop, TRUE
# 51 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 30, 0, METATILE_Cave_RockWallW, TRUE
# 52 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 32, 0, METATILE_Cave_RockWallE, TRUE
# 53 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 33, 0, METATILE_Cave_RockWallTop, TRUE
# 54 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 34, 0, METATILE_Cave_RockWallTop, TRUE
# 55 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 35, 0, METATILE_Cave_RockWallTop, TRUE
# 56 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 36, 0, METATILE_Cave_RockWallW, TRUE
# 58 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 26, 1, METATILE_Cave_RockWallE, TRUE
# 59 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 27, 1, METATILE_Cave_RockWallTop, TRUE
# 60 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 28, 1, METATILE_Cave_RockWallTop, TRUE
# 61 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 29, 1, METATILE_Cave_RockWallTop, TRUE
# 62 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 30, 1, METATILE_Cave_RockWallW, TRUE
# 63 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 32, 1, METATILE_Cave_RockWallE, TRUE
# 64 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 33, 1, METATILE_Cave_RockWallTop, TRUE
# 65 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 34, 1, METATILE_Cave_RockWallTop, TRUE
# 66 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 35, 1, METATILE_Cave_RockWallTop, TRUE
# 67 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 36, 1, METATILE_Cave_RockWallW, TRUE
# 69 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 26, 2, METATILE_Cave_RockWallSE, TRUE
# 70 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 27, 2, METATILE_Cave_RockWallTop, TRUE
# 71 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 28, 2, METATILE_Cave_RockWallTop, TRUE
# 72 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 29, 2, METATILE_Cave_RockWallTop, TRUE
# 73 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 30, 2, METATILE_Cave_RockWallSW, TRUE
# 74 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 31, 2, METATILE_Cave_RockWallS, TRUE
# 75 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 32, 2, METATILE_Cave_RockWallSE, TRUE
# 76 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 33, 2, METATILE_Cave_RockWallTop, TRUE
# 77 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 34, 2, METATILE_Cave_RockWallTop, TRUE
# 78 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 35, 2, METATILE_Cave_RockWallTop, TRUE
# 79 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 36, 2, METATILE_Cave_RockWallSW, TRUE
# 81 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 27, 3, METATILE_Cave_RockWallS, TRUE
# 82 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 28, 3, METATILE_Cave_RockWallS, TRUE
# 83 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 29, 3, METATILE_Cave_RockWallS, TRUE
# 84 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 30, 3, METATILE_Cave_RockWallS, TRUE
# 85 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 31, 3, METATILE_Cave_RockWallS, TRUE
# 86 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 32, 3, METATILE_Cave_RockWallS, TRUE
# 87 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 33, 3, METATILE_Cave_RockWallS, TRUE
# 88 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 34, 3, METATILE_Cave_RockWallS, TRUE
# 89 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 35, 3, METATILE_Cave_RockWallS, TRUE
# 91 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 27, 4, METATILE_Cave_WaterLedgeS, TRUE
# 92 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 28, 4, METATILE_Cave_WaterLedgeS, TRUE
# 93 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 29, 4, METATILE_Cave_WaterLedgeS, TRUE
# 94 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 30, 4, METATILE_Cave_WaterDoorEdgeL, TRUE
# 95 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 31, 4, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 96 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 32, 4, METATILE_Cave_WaterDoorEdgeL, TRUE
# 97 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 33, 4, METATILE_Cave_WaterLedgeS, TRUE
# 98 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 34, 4, METATILE_Cave_WaterLedgeS, TRUE
# 99 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 35, 4, METATILE_Cave_WaterLedgeS, TRUE
# 100 "data/maps/AedesAqua_Water2/scripts.pory"
	special DrawWholeMapView
# 101 "data/maps/AedesAqua_Water2/scripts.pory"
	delay 50
	return


AedesAqua_Water2_Script_ShowLowWaterfall::
# 106 "data/maps/AedesAqua_Water2/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 107 "data/maps/AedesAqua_Water2/scripts.pory"
	waitse
# 108 "data/maps/AedesAqua_Water2/scripts.pory"
	delay 50
	return


AedesAqua_Water2_Script_NoWaterfall2::
# 113 "data/maps/AedesAqua_Water2/scripts.pory"
	call AedesAqua_Water2_Script_ShowNoWaterfall
# 114 "data/maps/AedesAqua_Water2/scripts.pory"
	warpsilent MAP_AEDES_AQUA, 58, 6
	return


AedesAqua_Water2_Script_LowWaterfall15::
# 118 "data/maps/AedesAqua_Water2/scripts.pory"
	call AedesAqua_Water2_Script_ShowLowWaterfall
# 119 "data/maps/AedesAqua_Water2/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER1, 48, 16
	return


AedesAqua_Water2_Script_HidePlayer::
# 123 "data/maps/AedesAqua_Water2/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_AEDES_AQUA_WATER2
# 124 "data/maps/AedesAqua_Water2/scripts.pory"
	hideobjectat LOCALID_FOLLOWING_POKEMON, MAP_AEDES_AQUA_WATER2
	return


AedesAqua_Water2_Script_SupressSurf::
# 129 "data/maps/AedesAqua_Water2/scripts.pory"
	setmetatile 31, 6, METATILE_Cave_CaveWater_False, FALSE
	return


AedesAqua_Water2_Script_WaterControl2::
# 134 "data/maps/AedesAqua_Water2/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 135 "data/maps/AedesAqua_Water2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Water2_Script_WaterControl2_1
# 140 "data/maps/AedesAqua_Water2/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 2
# 142 "data/maps/AedesAqua_Water2/scripts.pory"
	call AedesAqua_Water2_Script_GoToWaterfallScene
	return

AedesAqua_Water2_Script_WaterControl2_1:
# 136 "data/maps/AedesAqua_Water2/scripts.pory"
	closemessage
	end


AedesAqua_Water2_Script_WaterControl5::
# 147 "data/maps/AedesAqua_Water2/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 148 "data/maps/AedesAqua_Water2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Water2_Script_WaterControl5_1
# 153 "data/maps/AedesAqua_Water2/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 15
# 155 "data/maps/AedesAqua_Water2/scripts.pory"
	call AedesAqua_Water2_Script_GoToWaterfallScene
	return

AedesAqua_Water2_Script_WaterControl5_1:
# 149 "data/maps/AedesAqua_Water2/scripts.pory"
	closemessage
	end


AedesAqua_Water2_Script_GoToWaterfallScene::
# 162 "data/maps/AedesAqua_Water2/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 163 "data/maps/AedesAqua_Water2/scripts.pory"
	waitmovement 0
# 165 "data/maps/AedesAqua_Water2/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER2, 31, 6
# 166 "data/maps/AedesAqua_Water2/scripts.pory"
	waitstate
	return

