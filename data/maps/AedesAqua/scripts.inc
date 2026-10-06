AedesAqua_MapScripts::
# 4 "data/maps/AedesAqua/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD
# 38 "data/maps/AedesAqua/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AedesAqua_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 58 "data/maps/AedesAqua/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesAqua_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/AedesAqua/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL1, AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_2
AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 9 "data/maps/AedesAqua/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL2, AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_5
AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 12 "data/maps/AedesAqua/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL3, AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_8
AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 15 "data/maps/AedesAqua/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL4, AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_11
AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 18 "data/maps/AedesAqua/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL5, AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_14
AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 21 "data/maps/AedesAqua/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL7, AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_17
AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 24 "data/maps/AedesAqua/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL9, AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_20
AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_19:
# 27 "data/maps/AedesAqua/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL10, AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_23
AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_22:
# 30 "data/maps/AedesAqua/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL11, AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_26
AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_25:
# 33 "data/maps/AedesAqua/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL12, AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_28
	return

AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 7 "data/maps/AedesAqua/scripts.pory"
	setmetatile 43, 10, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_1

AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 10 "data/maps/AedesAqua/scripts.pory"
	setmetatile 15, 24, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_4

AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 13 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 25, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_7

AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 16 "data/maps/AedesAqua/scripts.pory"
	setmetatile 50, 20, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_10

AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 19 "data/maps/AedesAqua/scripts.pory"
	setmetatile 5, 31, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_13

AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_17:
# 22 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 38, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_16

AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_20:
# 25 "data/maps/AedesAqua/scripts.pory"
	setmetatile 52, 44, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_19

AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_23:
# 28 "data/maps/AedesAqua/scripts.pory"
	setmetatile 18, 53, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_22

AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_26:
# 31 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 52, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	goto AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_25

AedesAqua_MapScripts_MAP_SCRIPT_ON_LOAD_28:
# 34 "data/maps/AedesAqua/scripts.pory"
	setmetatile 11, 62, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	return

AedesAqua_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 41 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 2, AedesAqua_Script_FacePlayerUp
# 42 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 4, AedesAqua_Script_FacePlayerUp
# 43 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 6, AedesAqua_Script_FacePlayerUp
# 44 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 8, AedesAqua_Script_FacePlayerUp
# 47 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 13, AedesAqua_Script_HidePlayer
# 48 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 15, AedesAqua_Script_HidePlayer
# 49 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 17, AedesAqua_Script_HidePlayer
# 50 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 21, AedesAqua_Script_HidePlayer
	.2byte 0

AedesAqua_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 59 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 13, AedesAqua_Script_Waterfall13
# 60 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 15, AedesAqua_Script_Waterfall15
# 61 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 17, AedesAqua_Script_Waterfall17
# 62 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 21, AedesAqua_Script_Waterfall21
	.2byte 0


AedesAqua_Script_HidePlayer::
# 67 "data/maps/AedesAqua/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_AEDES_AQUA
# 68 "data/maps/AedesAqua/scripts.pory"
	hideobjectat LOCALID_FOLLOWING_POKEMON, MAP_AEDES_AQUA
	return


AedesAqua_Script_Waterfall13::
# 73 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_ShowWaterfall
# 74 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER1, 24, 18
# 75 "data/maps/AedesAqua/scripts.pory"
	waitstate
	return


AedesAqua_Script_Waterfall15::
# 79 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_ShowWaterfall
# 80 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER1, 48, 16
# 81 "data/maps/AedesAqua/scripts.pory"
	waitstate
	return


AedesAqua_Script_Waterfall17::
# 85 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_ShowWaterfall
# 86 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER1, 16, 48
# 87 "data/maps/AedesAqua/scripts.pory"
	waitstate
	return


AedesAqua_Script_Waterfall21::
# 91 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_ShowWaterfall
# 92 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER2, 8, 10
# 93 "data/maps/AedesAqua/scripts.pory"
	waitstate
	return


AedesAqua_Script_ShowWaterfall::
# 98 "data/maps/AedesAqua/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 99 "data/maps/AedesAqua/scripts.pory"
	waitse
# 101 "data/maps/AedesAqua/scripts.pory"
	setmetatile 26, 0, METATILE_Cave_RockWallEWater, TRUE
# 102 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 0, METATILE_Cave_CaveWater, TRUE
# 103 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 0, METATILE_Cave_CaveWater, TRUE
# 104 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 0, METATILE_Cave_CaveWater, TRUE
# 105 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 0, METATILE_Cave_RockWallWWater, TRUE
# 106 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 0, METATILE_Cave_RockWallEWater, TRUE
# 107 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 0, METATILE_Cave_CaveWater, TRUE
# 108 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 0, METATILE_Cave_CaveWater, TRUE
# 109 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 0, METATILE_Cave_CaveWater, TRUE
# 110 "data/maps/AedesAqua/scripts.pory"
	setmetatile 36, 0, METATILE_Cave_RockWallWWater, TRUE
# 112 "data/maps/AedesAqua/scripts.pory"
	setmetatile 26, 1, METATILE_Cave_RockWallEWater, TRUE
# 113 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 1, METATILE_Cave_CaveWater, TRUE
# 114 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 1, METATILE_Cave_CaveWater, TRUE
# 115 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 1, METATILE_Cave_CaveWater, TRUE
# 116 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 1, METATILE_Cave_RockWallWWater, TRUE
# 117 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 1, METATILE_Cave_RockWallEWater, TRUE
# 118 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 1, METATILE_Cave_CaveWater, TRUE
# 119 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 1, METATILE_Cave_CaveWater, TRUE
# 120 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 1, METATILE_Cave_CaveWater, TRUE
# 121 "data/maps/AedesAqua/scripts.pory"
	setmetatile 36, 1, METATILE_Cave_RockWallWWater, TRUE
# 123 "data/maps/AedesAqua/scripts.pory"
	setmetatile 26, 2, METATILE_Cave_RockCornerSEWaterHalf, TRUE
# 124 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 2, METATILE_Cave_CaveWater, TRUE
# 125 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 2, METATILE_Cave_CaveWater, TRUE
# 126 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 2, METATILE_Cave_CaveWater, TRUE
# 127 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 2, METATILE_Cave_RockCornerSWWater, TRUE
# 128 "data/maps/AedesAqua/scripts.pory"
	setmetatile 31, 2, METATILE_Cave_RockWallSWater, TRUE
# 129 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 2, METATILE_Cave_RockCornerSEWater, TRUE
# 130 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 2, METATILE_Cave_CaveWater, TRUE
# 131 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 2, METATILE_Cave_CaveWater, TRUE
# 132 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 2, METATILE_Cave_CaveWater, TRUE
# 133 "data/maps/AedesAqua/scripts.pory"
	setmetatile 36, 2, METATILE_Cave_RockCornerSWWaterHalf, TRUE
# 135 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 3, METATILE_General_WaterfallTop, TRUE
# 136 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 3, METATILE_General_WaterfallTop, TRUE
# 137 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 3, METATILE_General_WaterfallTop, TRUE
# 138 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 3, METATILE_General_WaterfallTop, TRUE
# 139 "data/maps/AedesAqua/scripts.pory"
	setmetatile 31, 3, METATILE_General_WaterfallTop, TRUE
# 140 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 3, METATILE_General_WaterfallTop, TRUE
# 141 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 3, METATILE_General_WaterfallTop, TRUE
# 142 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 3, METATILE_General_WaterfallTop, TRUE
# 143 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 3, METATILE_General_WaterfallTop, TRUE
# 145 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 4, METATILE_General_WaterfallBottom, TRUE
# 146 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 4, METATILE_General_WaterfallBottom, TRUE
# 147 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 4, METATILE_General_WaterfallBottom, TRUE
# 148 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 4, METATILE_General_WaterfallBottom, TRUE
# 149 "data/maps/AedesAqua/scripts.pory"
	setmetatile 31, 4, METATILE_General_WaterfallBottom, TRUE
# 150 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 4, METATILE_General_WaterfallBottom, TRUE
# 151 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 4, METATILE_General_WaterfallBottom, TRUE
# 152 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 4, METATILE_General_WaterfallBottom, TRUE
# 153 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 4, METATILE_General_WaterfallBottom, TRUE
# 155 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 5, METATILE_General_WaterfallBottom, TRUE
# 156 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 5, METATILE_General_WaterfallBottom, TRUE
# 157 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 5, METATILE_General_WaterfallBottom, TRUE
# 158 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 5, METATILE_General_WaterfallBottom, TRUE
# 159 "data/maps/AedesAqua/scripts.pory"
	setmetatile 31, 5, METATILE_General_WaterfallBottom, TRUE
# 160 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 5, METATILE_General_WaterfallBottom, TRUE
# 161 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 5, METATILE_General_WaterfallBottom, TRUE
# 162 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 5, METATILE_General_WaterfallBottom, TRUE
# 163 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 5, METATILE_General_WaterfallBottom, TRUE
# 164 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
# 165 "data/maps/AedesAqua/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 166 "data/maps/AedesAqua/scripts.pory"
	waitse
	return


AedesAqua_Script_FacePlayerUp::
# 171 "data/maps/AedesAqua/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 172 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 0
	return


AedesAqua_Script_WaterControlNoEffect::
# 177 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 178 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControlNoEffect_2
# 180 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControlNoEffect
AedesAqua_Script_WaterControlNoEffect_1:
# 182 "data/maps/AedesAqua/scripts.pory"
	closemessage
	return

AedesAqua_Script_WaterControlNoEffect_2:
	goto AedesAqua_Script_WaterControlNoEffect_1


AedesAqua_Script_WaterControl1::
# 186 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 187 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControl1_1
# 192 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 21
# 194 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_GoToWaterfallScene
	return

AedesAqua_Script_WaterControl1_1:
# 188 "data/maps/AedesAqua/scripts.pory"
	closemessage
	end


AedesAqua_Script_WaterControl3::
# 199 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 200 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControl3_1
# 205 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 13
# 207 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_GoToWaterfallScene
	return

AedesAqua_Script_WaterControl3_1:
# 201 "data/maps/AedesAqua/scripts.pory"
	closemessage
	end


AedesAqua_Script_WaterControl5::
# 212 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 213 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControl5_1
# 218 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 15
# 220 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_GoToWaterfallScene
	return

AedesAqua_Script_WaterControl5_1:
# 214 "data/maps/AedesAqua/scripts.pory"
	closemessage
	end


AedesAqua_Script_WaterControl7::
# 225 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 226 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControl7_1
# 230 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 17
# 231 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_GoToWaterfallScene
	return

AedesAqua_Script_WaterControl7_1:
# 227 "data/maps/AedesAqua/scripts.pory"
	closemessage
	end


AedesAqua_Script_GoToWaterfallScene::
# 237 "data/maps/AedesAqua/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 238 "data/maps/AedesAqua/scripts.pory"
	waitmovement 0
# 240 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA, 31, 6
# 241 "data/maps/AedesAqua/scripts.pory"
	waitstate
	return


AedesAqua_Script_Crystal1::
# 245 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL1, AedesAqua_Script_Crystal1_2
# 254 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 255 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal1_1:
	end

AedesAqua_Script_Crystal1_2:
# 246 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL1
# 247 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 248 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 249 "data/maps/AedesAqua/scripts.pory"
	waitse
# 250 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 251 "data/maps/AedesAqua/scripts.pory"
	setmetatile 43, 10, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 252 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal1_1


AedesAqua_Script_Crystal2::
# 261 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL2, AedesAqua_Script_Crystal2_2
# 270 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 271 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal2_1:
	end

AedesAqua_Script_Crystal2_2:
# 262 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL2
# 263 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 264 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 265 "data/maps/AedesAqua/scripts.pory"
	waitse
# 266 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 267 "data/maps/AedesAqua/scripts.pory"
	setmetatile 15, 24, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 268 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal2_1


AedesAqua_Script_Crystal3::
# 277 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL3, AedesAqua_Script_Crystal3_2
# 286 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 287 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal3_1:
	end

AedesAqua_Script_Crystal3_2:
# 278 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL3
# 279 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 280 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 281 "data/maps/AedesAqua/scripts.pory"
	waitse
# 282 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 283 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 25, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 284 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal3_1


AedesAqua_Script_Crystal4::
# 293 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL4, AedesAqua_Script_Crystal4_2
# 302 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 303 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal4_1:
	end

AedesAqua_Script_Crystal4_2:
# 294 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL4
# 295 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 296 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 297 "data/maps/AedesAqua/scripts.pory"
	waitse
# 298 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 299 "data/maps/AedesAqua/scripts.pory"
	setmetatile 50, 20, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 300 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal4_1


AedesAqua_Script_Crystal5::
# 309 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL5, AedesAqua_Script_Crystal5_2
# 318 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 319 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal5_1:
	end

AedesAqua_Script_Crystal5_2:
# 310 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL5
# 311 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 312 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 313 "data/maps/AedesAqua/scripts.pory"
	waitse
# 314 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 315 "data/maps/AedesAqua/scripts.pory"
	setmetatile 5, 31, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 316 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal5_1


AedesAqua_Script_Crystal7::
# 325 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL7, AedesAqua_Script_Crystal7_2
# 334 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 335 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal7_1:
	end

AedesAqua_Script_Crystal7_2:
# 326 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL7
# 327 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 328 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 329 "data/maps/AedesAqua/scripts.pory"
	waitse
# 330 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 331 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 38, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 332 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal7_1


AedesAqua_Script_Crystal9::
# 341 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL9, AedesAqua_Script_Crystal9_2
# 350 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 351 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal9_1:
	end

AedesAqua_Script_Crystal9_2:
# 342 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL9
# 343 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 344 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 345 "data/maps/AedesAqua/scripts.pory"
	waitse
# 346 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 347 "data/maps/AedesAqua/scripts.pory"
	setmetatile 52, 44, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 348 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal9_1


AedesAqua_Script_Crystal10::
# 357 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL10, AedesAqua_Script_Crystal10_2
# 366 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 367 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal10_1:
	end

AedesAqua_Script_Crystal10_2:
# 358 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL10
# 359 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 360 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 361 "data/maps/AedesAqua/scripts.pory"
	waitse
# 362 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 363 "data/maps/AedesAqua/scripts.pory"
	setmetatile 18, 53, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 364 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal10_1


AedesAqua_Script_Crystal11::
# 373 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL11, AedesAqua_Script_Crystal11_2
# 382 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 383 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal11_1:
	end

AedesAqua_Script_Crystal11_2:
# 374 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL11
# 375 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 376 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 377 "data/maps/AedesAqua/scripts.pory"
	waitse
# 378 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 379 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 52, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 380 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal11_1


AedesAqua_Script_Crystal12::
# 389 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL12, AedesAqua_Script_Crystal12_2
# 398 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 399 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal12_1:
	end

AedesAqua_Script_Crystal12_2:
# 390 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL12
# 391 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 392 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 393 "data/maps/AedesAqua/scripts.pory"
	waitse
# 394 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 395 "data/maps/AedesAqua/scripts.pory"
	setmetatile 11, 62, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 396 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal12_1


AedesAqua_Text_WaterControl::
# 404 "data/maps/AedesAqua/scripts.pory"
	.string "It seems to be a control panel. Would\n"
	.string "you like to try pressing the buttons?$"

AedesAqua_Text_WaterControlNoEffect::
# 408 "data/maps/AedesAqua/scripts.pory"
	.string "It seems like nothing happened.$"

AedesAqua_Text_CrystalPress::
# 412 "data/maps/AedesAqua/scripts.pory"
	.string "It looks like the blue crystal can be\n"
	.string "pushed down. Better press it!$"

AedesAqua_Text_CrystalPressed::
# 416 "data/maps/AedesAqua/scripts.pory"
	.string "The blue crystal won't go any further\n"
	.string "down.$"
