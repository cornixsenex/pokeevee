AedesAqua_Water1_MapScripts::
# 3 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD
# 37 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 50 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/AedesAqua_Water1/scripts.pory"
	compare VAR_AEDES_AQUA_STATE, 4
	goto_if_eq AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 6 "data/maps/AedesAqua_Water1/scripts.pory"
	compare VAR_AEDES_AQUA_STATE, 6
	goto_if_eq AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 7 "data/maps/AedesAqua_Water1/scripts.pory"
	compare VAR_AEDES_AQUA_STATE, 8
	goto_if_eq AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_2
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 14 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL2, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_9
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 17 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL4, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_12
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 20 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL5, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_15
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 23 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL7, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_18
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_17:
# 26 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL10, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_21
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_20:
# 29 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL11, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_24
AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_23:
# 32 "data/maps/AedesAqua_Water1/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL12, AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_26
	return

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 10 "data/maps/AedesAqua_Water1/scripts.pory"
	call AedesAqua_Water1_Script_SupressSurf
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_1

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 15 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 15, 24, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_8

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 18 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 50, 20, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_11

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 21 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 5, 31, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_14

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_18:
# 24 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 38, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_17

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_21:
# 27 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 18, 53, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_20

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_24:
# 30 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 52, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_23

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_LOAD_26:
# 33 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 11, 62, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	return

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 39 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 13, AedesAqua_Script_FacePlayerUp
# 40 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 15, AedesAqua_Script_FacePlayerUp
# 41 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 17, AedesAqua_Script_FacePlayerUp
# 44 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 4, AedesAqua_Water1_Script_HidePlayer
# 45 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 6, AedesAqua_Water1_Script_HidePlayer
# 46 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 8, AedesAqua_Water1_Script_HidePlayer
	.2byte 0

AedesAqua_Water1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 51 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 4, AedesAqua_Water1_Script_NoWaterfall4
# 52 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 6, AedesAqua_Water1_Script_NoWaterfall6
# 53 "data/maps/AedesAqua_Water1/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 8, AedesAqua_Water1_Script_NoWaterfall8
	.2byte 0


AedesAqua_Water1_Script_NoWaterfall4::
# 60 "data/maps/AedesAqua_Water1/scripts.pory"
	call AedesAqua_Water1_Script_ShowNoWaterfall
# 61 "data/maps/AedesAqua_Water1/scripts.pory"
	warpsilent MAP_AEDES_AQUA, 40, 18
	return


AedesAqua_Water1_Script_NoWaterfall6::
# 65 "data/maps/AedesAqua_Water1/scripts.pory"
	call AedesAqua_Water1_Script_ShowNoWaterfall
# 66 "data/maps/AedesAqua_Water1/scripts.pory"
	warpsilent MAP_AEDES_AQUA, 55, 34
	return


AedesAqua_Water1_Script_NoWaterfall8::
# 70 "data/maps/AedesAqua_Water1/scripts.pory"
	call AedesAqua_Water1_Script_ShowNoWaterfall
# 71 "data/maps/AedesAqua_Water1/scripts.pory"
	warpsilent MAP_AEDES_AQUA, 45, 52
	return


AedesAqua_Water1_Script_ShowNoWaterfall::
# 75 "data/maps/AedesAqua_Water1/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 76 "data/maps/AedesAqua_Water1/scripts.pory"
	waitse
# 78 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 26, 0, METATILE_Cave_RockWallE, TRUE
# 79 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 0, METATILE_Cave_RockWallTop, TRUE
# 80 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 0, METATILE_Cave_RockWallTop, TRUE
# 81 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 0, METATILE_Cave_RockWallTop, TRUE
# 82 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 0, METATILE_Cave_RockWallW, TRUE
# 83 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 0, METATILE_Cave_RockWallE, TRUE
# 84 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 0, METATILE_Cave_RockWallTop, TRUE
# 85 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 0, METATILE_Cave_RockWallTop, TRUE
# 86 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 0, METATILE_Cave_RockWallTop, TRUE
# 87 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 36, 0, METATILE_Cave_RockWallW, TRUE
# 89 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 26, 1, METATILE_Cave_RockWallE, TRUE
# 90 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 1, METATILE_Cave_RockWallTop, TRUE
# 91 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 1, METATILE_Cave_RockWallTop, TRUE
# 92 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 1, METATILE_Cave_RockWallTop, TRUE
# 93 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 1, METATILE_Cave_RockWallW, TRUE
# 94 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 1, METATILE_Cave_RockWallE, TRUE
# 95 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 1, METATILE_Cave_RockWallTop, TRUE
# 96 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 1, METATILE_Cave_RockWallTop, TRUE
# 97 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 1, METATILE_Cave_RockWallTop, TRUE
# 98 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 36, 1, METATILE_Cave_RockWallW, TRUE
# 100 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 26, 2, METATILE_Cave_RockWallSE, TRUE
# 101 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 2, METATILE_Cave_RockWallTop, TRUE
# 102 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 2, METATILE_Cave_RockWallTop, TRUE
# 103 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 2, METATILE_Cave_RockWallTop, TRUE
# 104 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 2, METATILE_Cave_RockWallSW, TRUE
# 105 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 31, 2, METATILE_Cave_RockWallS, TRUE
# 106 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 2, METATILE_Cave_RockWallSE, TRUE
# 107 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 2, METATILE_Cave_RockWallTop, TRUE
# 108 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 2, METATILE_Cave_RockWallTop, TRUE
# 109 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 2, METATILE_Cave_RockWallTop, TRUE
# 110 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 36, 2, METATILE_Cave_RockWallSW, TRUE
# 112 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 3, METATILE_Cave_RockWallS, TRUE
# 113 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 3, METATILE_Cave_RockWallS, TRUE
# 114 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 3, METATILE_Cave_RockWallS, TRUE
# 115 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 3, METATILE_Cave_RockWallS, TRUE
# 116 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 31, 3, METATILE_Cave_RockWallS, TRUE
# 117 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 3, METATILE_Cave_RockWallS, TRUE
# 118 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 3, METATILE_Cave_RockWallS, TRUE
# 119 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 3, METATILE_Cave_RockWallS, TRUE
# 120 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 3, METATILE_Cave_RockWallS, TRUE
# 122 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 4, METATILE_Cave_RockWallS, TRUE
# 123 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 4, METATILE_Cave_RockWallS, TRUE
# 124 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 4, METATILE_Cave_RockWallS, TRUE
# 125 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 4, METATILE_Cave_RockWallS, TRUE
# 126 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 31, 4, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 127 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 4, METATILE_Cave_RockWallS, TRUE
# 128 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 4, METATILE_Cave_RockWallS, TRUE
# 129 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 4, METATILE_Cave_RockWallS, TRUE
# 130 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 4, METATILE_Cave_RockWallS, TRUE
# 132 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 27, 5, METATILE_Cave_WaterLedgeS, TRUE
# 133 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 28, 5, METATILE_Cave_WaterLedgeS, TRUE
# 134 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 29, 5, METATILE_Cave_WaterLedgeS, TRUE
# 135 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 30, 5, METATILE_Cave_WaterDoorEdgeL, TRUE
# 136 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 31, 5, METATILE_Cave_CaveWater, TRUE
# 137 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 32, 5, METATILE_Cave_WaterDoorEdgeL, TRUE
# 138 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 33, 5, METATILE_Cave_WaterLedgeS, TRUE
# 139 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 34, 5, METATILE_Cave_WaterLedgeS, TRUE
# 140 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 35, 5, METATILE_Cave_WaterLedgeS, TRUE
# 141 "data/maps/AedesAqua_Water1/scripts.pory"
	special DrawWholeMapView
# 142 "data/maps/AedesAqua_Water1/scripts.pory"
	delay 50
	return


AedesAqua_Water1_Script_SupressSurf::
# 147 "data/maps/AedesAqua_Water1/scripts.pory"
	setmetatile 31, 6, METATILE_Cave_CaveWater_False, FALSE
	return


AedesAqua_Water1_Script_HidePlayer::
# 152 "data/maps/AedesAqua_Water1/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_AEDES_AQUA_WATER1
# 153 "data/maps/AedesAqua_Water1/scripts.pory"
	hideobjectat LOCALID_FOLLOWING_POKEMON, MAP_AEDES_AQUA_WATER1
	return


AedesAqua_Water1_Script_WaterControl4::
# 158 "data/maps/AedesAqua_Water1/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 159 "data/maps/AedesAqua_Water1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Water1_Script_WaterControl4_1
# 164 "data/maps/AedesAqua_Water1/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 4
# 166 "data/maps/AedesAqua_Water1/scripts.pory"
	call AedesAqua_Water1_Script_GoToWaterfallScene
	return

AedesAqua_Water1_Script_WaterControl4_1:
# 160 "data/maps/AedesAqua_Water1/scripts.pory"
	closemessage
	end


AedesAqua_Water1_Script_WaterControl6::
# 171 "data/maps/AedesAqua_Water1/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 172 "data/maps/AedesAqua_Water1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Water1_Script_WaterControl6_1
# 177 "data/maps/AedesAqua_Water1/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 6
# 179 "data/maps/AedesAqua_Water1/scripts.pory"
	call AedesAqua_Water1_Script_GoToWaterfallScene
	return

AedesAqua_Water1_Script_WaterControl6_1:
# 173 "data/maps/AedesAqua_Water1/scripts.pory"
	closemessage
	end


AedesAqua_Water1_Script_WaterControl8::
# 184 "data/maps/AedesAqua_Water1/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 185 "data/maps/AedesAqua_Water1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Water1_Script_WaterControl8_1
# 190 "data/maps/AedesAqua_Water1/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 8
# 192 "data/maps/AedesAqua_Water1/scripts.pory"
	call AedesAqua_Water1_Script_GoToWaterfallScene
	return

AedesAqua_Water1_Script_WaterControl8_1:
# 186 "data/maps/AedesAqua_Water1/scripts.pory"
	closemessage
	end


AedesAqua_Water1_Script_GoToWaterfallScene::
# 198 "data/maps/AedesAqua_Water1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 199 "data/maps/AedesAqua_Water1/scripts.pory"
	waitmovement 0
# 201 "data/maps/AedesAqua_Water1/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER1, 31, 6
# 202 "data/maps/AedesAqua_Water1/scripts.pory"
	waitstate
	return

