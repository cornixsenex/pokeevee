AedesAqua_Water1_MapScripts::
# 3 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD
# 33 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 44 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/AedesAqua_Water1/scripts.pory"
	compare VAR_AEDES_AQUA_STATE, 4
	goto_if_eq AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_2
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 10 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL2, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_5
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 13 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL4, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_8
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 16 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL5, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_11
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 19 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL7, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_14
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 22 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL10, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_17
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 25 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL11, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_20
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_19:
# 28 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL12, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_22
	return

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 6 "data/maps/AedesAqua_Water1/scripts.pory"
	call AedesAqua_Water1_Script_SupressSurf
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_1

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 11 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 15, 24, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_4

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 14 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 50, 20, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_7

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 17 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 5, 31, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_10

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 20 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 38, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_13

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_17:
# 23 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 18, 53, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_16

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_20:
# 26 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 52, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_19

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_22:
# 29 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 11, 62, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	return

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 35 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 13, AedesAqua_Script_FacePlayerUp
# 36 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 15, AedesAqua_Script_FacePlayerUp
# 37 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 17, AedesAqua_Script_FacePlayerUp
# 40 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 4, AedesAqua_Water1_Script_HidePlayer
	.2byte 0

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 45 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 4, AedesAqua_Water1_Script_NoWaterfall4
	.2byte 0


AedesAqua_Water1_Script_NoWaterfall4::
# 52 "data/maps/AedesAqua_Water1/scripts.pory"
	call AedesAqua_Water1_Script_ShowNoWaterfall
# 53 "data/maps/AedesAqua_Water1/scripts.pory"
	warpsilent MAP_AEDES_AQUA, 40, 18
	return


AedesAqua_Water1_Script_ShowNoWaterfall::
# 57 "data/maps/AedesAqua_Water1/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 58 "data/maps/AedesAqua_Water1/scripts.pory"
	waitse
# 60 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 26, 0, METATILE_Cave_RockWallE, TRUE
# 61 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 0, METATILE_Cave_RockWallTop, TRUE
# 62 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 0, METATILE_Cave_RockWallTop, TRUE
# 63 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 0, METATILE_Cave_RockWallTop, TRUE
# 64 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 0, METATILE_Cave_RockWallW, TRUE
# 65 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 0, METATILE_Cave_RockWallE, TRUE
# 66 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 0, METATILE_Cave_RockWallTop, TRUE
# 67 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 0, METATILE_Cave_RockWallTop, TRUE
# 68 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 0, METATILE_Cave_RockWallTop, TRUE
# 69 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 36, 0, METATILE_Cave_RockWallW, TRUE
# 71 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 26, 1, METATILE_Cave_RockWallE, TRUE
# 72 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 1, METATILE_Cave_RockWallTop, TRUE
# 73 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 1, METATILE_Cave_RockWallTop, TRUE
# 74 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 1, METATILE_Cave_RockWallTop, TRUE
# 75 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 1, METATILE_Cave_RockWallW, TRUE
# 76 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 1, METATILE_Cave_RockWallE, TRUE
# 77 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 1, METATILE_Cave_RockWallTop, TRUE
# 78 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 1, METATILE_Cave_RockWallTop, TRUE
# 79 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 1, METATILE_Cave_RockWallTop, TRUE
# 80 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 36, 1, METATILE_Cave_RockWallW, TRUE
# 82 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 26, 2, METATILE_Cave_RockWallSE, TRUE
# 83 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 2, METATILE_Cave_RockWallTop, TRUE
# 84 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 2, METATILE_Cave_RockWallTop, TRUE
# 85 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 2, METATILE_Cave_RockWallTop, TRUE
# 86 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 2, METATILE_Cave_RockWallSW, TRUE
# 87 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 31, 2, METATILE_Cave_RockWallS, TRUE
# 88 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 2, METATILE_Cave_RockWallSE, TRUE
# 89 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 2, METATILE_Cave_RockWallTop, TRUE
# 90 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 2, METATILE_Cave_RockWallTop, TRUE
# 91 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 2, METATILE_Cave_RockWallTop, TRUE
# 92 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 36, 2, METATILE_Cave_RockWallSW, TRUE
# 94 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 3, METATILE_Cave_RockWallS, TRUE
# 95 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 3, METATILE_Cave_RockWallS, TRUE
# 96 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 3, METATILE_Cave_RockWallS, TRUE
# 97 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 3, METATILE_Cave_RockWallS, TRUE
# 98 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 31, 3, METATILE_Cave_RockWallS, TRUE
# 99 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 3, METATILE_Cave_RockWallS, TRUE
# 100 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 3, METATILE_Cave_RockWallS, TRUE
# 101 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 3, METATILE_Cave_RockWallS, TRUE
# 102 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 3, METATILE_Cave_RockWallS, TRUE
# 104 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 4, METATILE_Cave_RockWallS, TRUE
# 105 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 4, METATILE_Cave_RockWallS, TRUE
# 106 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 4, METATILE_Cave_RockWallS, TRUE
# 107 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 4, METATILE_Cave_RockWallS, TRUE
# 108 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 31, 4, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 109 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 4, METATILE_Cave_RockWallS, TRUE
# 110 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 4, METATILE_Cave_RockWallS, TRUE
# 111 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 4, METATILE_Cave_RockWallS, TRUE
# 112 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 4, METATILE_Cave_RockWallS, TRUE
# 126 "data/maps/AedesAqua_Water1/scripts.pory"
	special DrawWholeMapView
# 127 "data/maps/AedesAqua_Water1/scripts.pory"
	delay 50
	return


AedesAqua_Water1_Script_SupressSurf::
# 132 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 31, 6, METATILE_Cave_CaveWater_False, FALSE
	return


AedesAqua_Water1_Script_HidePlayer::
# 137 "data/maps/AedesAqua_Water1/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_AEDES_AQUA_WATER1
# 138 "data/maps/AedesAqua_Water1/scripts.pory"
	hideobjectat LOCALID_FOLLOWING_POKEMON, MAP_AEDES_AQUA_WATER1
	return


AedesAqua_Water1_Script_WaterControl4::
# 143 "data/maps/AedesAqua_Water1/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 144 "data/maps/AedesAqua_Water1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Water1_Script_WaterControl4_1
# 149 "data/maps/AedesAqua_Water1/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 4
# 151 "data/maps/AedesAqua_Water1/scripts.pory"
	call AedesAqua_Water1_Script_GoToWaterfallScene
	return

AedesAqua_Water1_Script_WaterControl4_1:
# 145 "data/maps/AedesAqua_Water1/scripts.pory"
	closemessage
	end


AedesAqua_Water1_Script_GoToWaterfallScene::
# 157 "data/maps/AedesAqua_Water1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 158 "data/maps/AedesAqua_Water1/scripts.pory"
	waitmovement 0
# 160 "data/maps/AedesAqua_Water1/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER1, 31, 6
# 161 "data/maps/AedesAqua_Water1/scripts.pory"
	waitstate
	return

