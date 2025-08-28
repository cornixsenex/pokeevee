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
	return


AedesAqua_Script_Waterfall15::
# 78 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_ShowWaterfall
# 79 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER1, 48, 16
	return


AedesAqua_Script_Waterfall17::
# 83 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_ShowWaterfall
# 84 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER1, 16, 48
	return


AedesAqua_Script_Waterfall21::
# 88 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_ShowWaterfall
# 89 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER2, 8, 10
	return


AedesAqua_Script_ShowWaterfall::
# 94 "data/maps/AedesAqua/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 95 "data/maps/AedesAqua/scripts.pory"
	waitse
# 97 "data/maps/AedesAqua/scripts.pory"
	setmetatile 26, 0, METATILE_Cave_RockWallEWater, TRUE
# 98 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 0, METATILE_Cave_CaveWater, TRUE
# 99 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 0, METATILE_Cave_CaveWater, TRUE
# 100 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 0, METATILE_Cave_CaveWater, TRUE
# 101 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 0, METATILE_Cave_RockWallWWater, TRUE
# 102 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 0, METATILE_Cave_RockWallEWater, TRUE
# 103 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 0, METATILE_Cave_CaveWater, TRUE
# 104 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 0, METATILE_Cave_CaveWater, TRUE
# 105 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 0, METATILE_Cave_CaveWater, TRUE
# 106 "data/maps/AedesAqua/scripts.pory"
	setmetatile 36, 0, METATILE_Cave_RockWallWWater, TRUE
# 108 "data/maps/AedesAqua/scripts.pory"
	setmetatile 26, 1, METATILE_Cave_RockWallEWater, TRUE
# 109 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 1, METATILE_Cave_CaveWater, TRUE
# 110 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 1, METATILE_Cave_CaveWater, TRUE
# 111 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 1, METATILE_Cave_CaveWater, TRUE
# 112 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 1, METATILE_Cave_RockWallWWater, TRUE
# 113 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 1, METATILE_Cave_RockWallEWater, TRUE
# 114 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 1, METATILE_Cave_CaveWater, TRUE
# 115 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 1, METATILE_Cave_CaveWater, TRUE
# 116 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 1, METATILE_Cave_CaveWater, TRUE
# 117 "data/maps/AedesAqua/scripts.pory"
	setmetatile 36, 1, METATILE_Cave_RockWallWWater, TRUE
# 119 "data/maps/AedesAqua/scripts.pory"
	setmetatile 26, 2, METATILE_Cave_RockCornerSEWaterHalf, TRUE
# 120 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 2, METATILE_Cave_CaveWater, TRUE
# 121 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 2, METATILE_Cave_CaveWater, TRUE
# 122 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 2, METATILE_Cave_CaveWater, TRUE
# 123 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 2, METATILE_Cave_RockCornerSWWater, TRUE
# 124 "data/maps/AedesAqua/scripts.pory"
	setmetatile 31, 2, METATILE_Cave_RockWallSWater, TRUE
# 125 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 2, METATILE_Cave_RockCornerSEWater, TRUE
# 126 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 2, METATILE_Cave_CaveWater, TRUE
# 127 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 2, METATILE_Cave_CaveWater, TRUE
# 128 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 2, METATILE_Cave_CaveWater, TRUE
# 129 "data/maps/AedesAqua/scripts.pory"
	setmetatile 36, 2, METATILE_Cave_RockCornerSWWaterHalf, TRUE
# 131 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 3, METATILE_General_WaterfallTop, TRUE
# 132 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 3, METATILE_General_WaterfallTop, TRUE
# 133 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 3, METATILE_General_WaterfallTop, TRUE
# 134 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 3, METATILE_General_WaterfallTop, TRUE
# 135 "data/maps/AedesAqua/scripts.pory"
	setmetatile 31, 3, METATILE_General_WaterfallTop, TRUE
# 136 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 3, METATILE_General_WaterfallTop, TRUE
# 137 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 3, METATILE_General_WaterfallTop, TRUE
# 138 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 3, METATILE_General_WaterfallTop, TRUE
# 139 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 3, METATILE_General_WaterfallTop, TRUE
# 141 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 4, METATILE_General_WaterfallBottom, TRUE
# 142 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 4, METATILE_General_WaterfallBottom, TRUE
# 143 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 4, METATILE_General_WaterfallBottom, TRUE
# 144 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 4, METATILE_General_WaterfallBottom, TRUE
# 145 "data/maps/AedesAqua/scripts.pory"
	setmetatile 31, 4, METATILE_General_WaterfallBottom, TRUE
# 146 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 4, METATILE_General_WaterfallBottom, TRUE
# 147 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 4, METATILE_General_WaterfallBottom, TRUE
# 148 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 4, METATILE_General_WaterfallBottom, TRUE
# 149 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 4, METATILE_General_WaterfallBottom, TRUE
# 151 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 5, METATILE_General_WaterfallBottom, TRUE
# 152 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 5, METATILE_General_WaterfallBottom, TRUE
# 153 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 5, METATILE_General_WaterfallBottom, TRUE
# 154 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 5, METATILE_General_WaterfallBottom, TRUE
# 155 "data/maps/AedesAqua/scripts.pory"
	setmetatile 31, 5, METATILE_General_WaterfallBottom, TRUE
# 156 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 5, METATILE_General_WaterfallBottom, TRUE
# 157 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 5, METATILE_General_WaterfallBottom, TRUE
# 158 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 5, METATILE_General_WaterfallBottom, TRUE
# 159 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 5, METATILE_General_WaterfallBottom, TRUE
# 160 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
# 161 "data/maps/AedesAqua/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 162 "data/maps/AedesAqua/scripts.pory"
	waitse
	return


AedesAqua_Script_FacePlayerUp::
# 167 "data/maps/AedesAqua/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 168 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 0
	return


AedesAqua_Script_WaterControlNoEffect::
# 173 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 174 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControlNoEffect_2
# 176 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControlNoEffect
AedesAqua_Script_WaterControlNoEffect_1:
# 178 "data/maps/AedesAqua/scripts.pory"
	closemessage
	return

AedesAqua_Script_WaterControlNoEffect_2:
	goto AedesAqua_Script_WaterControlNoEffect_1


AedesAqua_Script_WaterControl1::
# 182 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 183 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControl1_1
# 188 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 21
# 190 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_GoToWaterfallScene
	return

AedesAqua_Script_WaterControl1_1:
# 184 "data/maps/AedesAqua/scripts.pory"
	closemessage
	end


AedesAqua_Script_WaterControl3::
# 195 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 196 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControl3_1
# 201 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 13
# 203 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_GoToWaterfallScene
	return

AedesAqua_Script_WaterControl3_1:
# 197 "data/maps/AedesAqua/scripts.pory"
	closemessage
	end


AedesAqua_Script_WaterControl5::
# 208 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 209 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControl5_1
# 214 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 15
# 216 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_GoToWaterfallScene
	return

AedesAqua_Script_WaterControl5_1:
# 210 "data/maps/AedesAqua/scripts.pory"
	closemessage
	end


AedesAqua_Script_WaterControl7::
# 221 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 222 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControl7_1
# 226 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 17
# 227 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_GoToWaterfallScene
	return

AedesAqua_Script_WaterControl7_1:
# 223 "data/maps/AedesAqua/scripts.pory"
	closemessage
	end


AedesAqua_Script_GoToWaterfallScene::
# 233 "data/maps/AedesAqua/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 234 "data/maps/AedesAqua/scripts.pory"
	waitmovement 0
# 236 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA, 31, 6
# 237 "data/maps/AedesAqua/scripts.pory"
	waitstate
	return


AedesAqua_Script_Crystal1::
# 241 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL1, AedesAqua_Script_Crystal1_2
# 250 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 251 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal1_1:
	end

AedesAqua_Script_Crystal1_2:
# 242 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL1
# 243 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 244 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 245 "data/maps/AedesAqua/scripts.pory"
	waitse
# 246 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 247 "data/maps/AedesAqua/scripts.pory"
	setmetatile 43, 10, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 248 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal1_1


AedesAqua_Script_Crystal2::
# 257 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL2, AedesAqua_Script_Crystal2_2
# 266 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 267 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal2_1:
	end

AedesAqua_Script_Crystal2_2:
# 258 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL2
# 259 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 260 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 261 "data/maps/AedesAqua/scripts.pory"
	waitse
# 262 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 263 "data/maps/AedesAqua/scripts.pory"
	setmetatile 15, 24, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 264 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal2_1


AedesAqua_Script_Crystal3::
# 273 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL3, AedesAqua_Script_Crystal3_2
# 282 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 283 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal3_1:
	end

AedesAqua_Script_Crystal3_2:
# 274 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL3
# 275 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 276 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 277 "data/maps/AedesAqua/scripts.pory"
	waitse
# 278 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 279 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 25, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 280 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal3_1


AedesAqua_Script_Crystal4::
# 289 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL4, AedesAqua_Script_Crystal4_2
# 298 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 299 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal4_1:
	end

AedesAqua_Script_Crystal4_2:
# 290 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL4
# 291 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 292 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 293 "data/maps/AedesAqua/scripts.pory"
	waitse
# 294 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 295 "data/maps/AedesAqua/scripts.pory"
	setmetatile 50, 20, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 296 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal4_1


AedesAqua_Script_Crystal9::
# 305 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL9, AedesAqua_Script_Crystal9_2
# 314 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 315 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal9_1:
	end

AedesAqua_Script_Crystal9_2:
# 306 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL9
# 307 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 308 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 309 "data/maps/AedesAqua/scripts.pory"
	waitse
# 310 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 311 "data/maps/AedesAqua/scripts.pory"
	setmetatile 52, 44, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 312 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal9_1


AedesAqua_Script_Crystal11::
# 321 "data/maps/AedesAqua/scripts.pory"
	goto_if_unset FLAG_AEDES_AQUA_CRYSTAL11, AedesAqua_Script_Crystal11_2
# 330 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPressed
# 331 "data/maps/AedesAqua/scripts.pory"
	closemessage
AedesAqua_Script_Crystal11_1:
	end

AedesAqua_Script_Crystal11_2:
# 322 "data/maps/AedesAqua/scripts.pory"
	setflag FLAG_AEDES_AQUA_CRYSTAL11
# 323 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_CrystalPress
# 324 "data/maps/AedesAqua/scripts.pory"
	playse SE_SWITCH
# 325 "data/maps/AedesAqua/scripts.pory"
	waitse
# 326 "data/maps/AedesAqua/scripts.pory"
	closemessage
# 327 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 52, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 328 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
	goto AedesAqua_Script_Crystal11_1


AedesAqua_Text_WaterControl::
# 336 "data/maps/AedesAqua/scripts.pory"
	.string "It seems to be a control panel. Would\n"
	.string "you like to try pressing the buttons?$"

AedesAqua_Text_WaterControlNoEffect::
# 340 "data/maps/AedesAqua/scripts.pory"
	.string "It seems like nothing happened.$"

AedesAqua_Text_CrystalPress::
# 344 "data/maps/AedesAqua/scripts.pory"
	.string "It looks like the blue crystal can be\n"
	.string "pushed down. Better press it!$"

AedesAqua_Text_CrystalPressed::
# 348 "data/maps/AedesAqua/scripts.pory"
	.string "The blue crystal won't go any further\n"
	.string "down.$"
