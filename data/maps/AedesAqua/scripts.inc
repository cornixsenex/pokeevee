AedesAqua_MapScripts::
# 2 "data/maps/AedesAqua/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AedesAqua_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 18 "data/maps/AedesAqua/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesAqua_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesAqua_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 13, AedesAqua_Script_HidePlayer
# 8 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 15, AedesAqua_Script_HidePlayer
# 9 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 17, AedesAqua_Script_HidePlayer
# 10 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 21, AedesAqua_Script_HidePlayer
	.2byte 0

AedesAqua_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 13, AedesAqua_Script_Waterfall13
# 20 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 15, AedesAqua_Script_Waterfall15
# 21 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 17, AedesAqua_Script_Waterfall17
# 22 "data/maps/AedesAqua/scripts.pory"
	map_script_2 VAR_AEDES_AQUA_STATE, 21, AedesAqua_Script_Waterfall21
	.2byte 0


AedesAqua_Script_HidePlayer::
# 27 "data/maps/AedesAqua/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_AEDES_AQUA
# 28 "data/maps/AedesAqua/scripts.pory"
	hideobjectat LOCALID_FOLLOWING_POKEMON, MAP_AEDES_AQUA
	return


AedesAqua_Script_Waterfall13::
# 33 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_ShowWaterfall
# 34 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER1, 24, 18
	return


AedesAqua_Script_Waterfall15::
# 38 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_ShowWaterfall
# 39 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER1, 48, 16
	return


AedesAqua_Script_Waterfall17::
# 43 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_ShowWaterfall
# 44 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER1, 16, 48
	return


AedesAqua_Script_Waterfall21::
# 48 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_ShowWaterfall
# 49 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA_WATER2, 8, 10
	return


AedesAqua_Script_ShowWaterfall::
# 54 "data/maps/AedesAqua/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 55 "data/maps/AedesAqua/scripts.pory"
	waitse
# 57 "data/maps/AedesAqua/scripts.pory"
	setmetatile 26, 0, METATILE_Cave_RockWallEWater, TRUE
# 58 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 0, METATILE_Cave_CaveWater, TRUE
# 59 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 0, METATILE_Cave_CaveWater, TRUE
# 60 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 0, METATILE_Cave_CaveWater, TRUE
# 61 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 0, METATILE_Cave_RockWallWWater, TRUE
# 62 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 0, METATILE_Cave_RockWallEWater, TRUE
# 63 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 0, METATILE_Cave_CaveWater, TRUE
# 64 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 0, METATILE_Cave_CaveWater, TRUE
# 65 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 0, METATILE_Cave_CaveWater, TRUE
# 66 "data/maps/AedesAqua/scripts.pory"
	setmetatile 36, 0, METATILE_Cave_RockWallWWater, TRUE
# 68 "data/maps/AedesAqua/scripts.pory"
	setmetatile 26, 1, METATILE_Cave_RockWallEWater, TRUE
# 69 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 1, METATILE_Cave_CaveWater, TRUE
# 70 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 1, METATILE_Cave_CaveWater, TRUE
# 71 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 1, METATILE_Cave_CaveWater, TRUE
# 72 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 1, METATILE_Cave_RockWallWWater, TRUE
# 73 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 1, METATILE_Cave_RockWallEWater, TRUE
# 74 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 1, METATILE_Cave_CaveWater, TRUE
# 75 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 1, METATILE_Cave_CaveWater, TRUE
# 76 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 1, METATILE_Cave_CaveWater, TRUE
# 77 "data/maps/AedesAqua/scripts.pory"
	setmetatile 36, 1, METATILE_Cave_RockWallWWater, TRUE
# 79 "data/maps/AedesAqua/scripts.pory"
	setmetatile 26, 2, METATILE_Cave_RockCornerSEWaterHalf, TRUE
# 80 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 2, METATILE_Cave_CaveWater, TRUE
# 81 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 2, METATILE_Cave_CaveWater, TRUE
# 82 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 2, METATILE_Cave_CaveWater, TRUE
# 83 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 2, METATILE_Cave_RockCornerSWWater, TRUE
# 84 "data/maps/AedesAqua/scripts.pory"
	setmetatile 31, 2, METATILE_Cave_RockWallSWater, TRUE
# 85 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 2, METATILE_Cave_RockCornerSEWater, TRUE
# 86 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 2, METATILE_Cave_CaveWater, TRUE
# 87 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 2, METATILE_Cave_CaveWater, TRUE
# 88 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 2, METATILE_Cave_CaveWater, TRUE
# 89 "data/maps/AedesAqua/scripts.pory"
	setmetatile 36, 2, METATILE_Cave_RockCornerSWWaterHalf, TRUE
# 91 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 3, METATILE_General_WaterfallTop, TRUE
# 92 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 3, METATILE_General_WaterfallTop, TRUE
# 93 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 3, METATILE_General_WaterfallTop, TRUE
# 94 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 3, METATILE_General_WaterfallTop, TRUE
# 95 "data/maps/AedesAqua/scripts.pory"
	setmetatile 31, 3, METATILE_General_WaterfallTop, TRUE
# 96 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 3, METATILE_General_WaterfallTop, TRUE
# 97 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 3, METATILE_General_WaterfallTop, TRUE
# 98 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 3, METATILE_General_WaterfallTop, TRUE
# 99 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 3, METATILE_General_WaterfallTop, TRUE
# 101 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 4, METATILE_General_WaterfallBottom, TRUE
# 102 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 4, METATILE_General_WaterfallBottom, TRUE
# 103 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 4, METATILE_General_WaterfallBottom, TRUE
# 104 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 4, METATILE_General_WaterfallBottom, TRUE
# 105 "data/maps/AedesAqua/scripts.pory"
	setmetatile 31, 4, METATILE_General_WaterfallBottom, TRUE
# 106 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 4, METATILE_General_WaterfallBottom, TRUE
# 107 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 4, METATILE_General_WaterfallBottom, TRUE
# 108 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 4, METATILE_General_WaterfallBottom, TRUE
# 109 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 4, METATILE_General_WaterfallBottom, TRUE
# 111 "data/maps/AedesAqua/scripts.pory"
	setmetatile 27, 5, METATILE_General_WaterfallBottom, TRUE
# 112 "data/maps/AedesAqua/scripts.pory"
	setmetatile 28, 5, METATILE_General_WaterfallBottom, TRUE
# 113 "data/maps/AedesAqua/scripts.pory"
	setmetatile 29, 5, METATILE_General_WaterfallBottom, TRUE
# 114 "data/maps/AedesAqua/scripts.pory"
	setmetatile 30, 5, METATILE_General_WaterfallBottom, TRUE
# 115 "data/maps/AedesAqua/scripts.pory"
	setmetatile 31, 5, METATILE_General_WaterfallBottom, TRUE
# 116 "data/maps/AedesAqua/scripts.pory"
	setmetatile 32, 5, METATILE_General_WaterfallBottom, TRUE
# 117 "data/maps/AedesAqua/scripts.pory"
	setmetatile 33, 5, METATILE_General_WaterfallBottom, TRUE
# 118 "data/maps/AedesAqua/scripts.pory"
	setmetatile 34, 5, METATILE_General_WaterfallBottom, TRUE
# 119 "data/maps/AedesAqua/scripts.pory"
	setmetatile 35, 5, METATILE_General_WaterfallBottom, TRUE
# 120 "data/maps/AedesAqua/scripts.pory"
	special DrawWholeMapView
# 121 "data/maps/AedesAqua/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 122 "data/maps/AedesAqua/scripts.pory"
	waitse
	return


AedesAqua_Script_FacePlayerUp::
# 127 "data/maps/AedesAqua/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 128 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 0
	return


AedesAqua_Script_WaterControlNoEffect::
# 133 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 134 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControlNoEffect_2
# 136 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControlNoEffect
AedesAqua_Script_WaterControlNoEffect_1:
# 138 "data/maps/AedesAqua/scripts.pory"
	closemessage
	return

AedesAqua_Script_WaterControlNoEffect_2:
	goto AedesAqua_Script_WaterControlNoEffect_1


AedesAqua_Script_WaterControl1::
# 142 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 143 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControl1_1
# 148 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 21
# 150 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_GoToWaterfallScene
	return

AedesAqua_Script_WaterControl1_1:
# 144 "data/maps/AedesAqua/scripts.pory"
	closemessage
	end


AedesAqua_Script_WaterControl3::
# 155 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 156 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControl3_1
# 161 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 13
# 163 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_GoToWaterfallScene
	return

AedesAqua_Script_WaterControl3_1:
# 157 "data/maps/AedesAqua/scripts.pory"
	closemessage
	end


AedesAqua_Script_WaterControl5::
# 168 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 169 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControl5_1
# 174 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 15
# 176 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_GoToWaterfallScene
	return

AedesAqua_Script_WaterControl5_1:
# 170 "data/maps/AedesAqua/scripts.pory"
	closemessage
	end


AedesAqua_Script_WaterControl7::
# 181 "data/maps/AedesAqua/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 182 "data/maps/AedesAqua/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AedesAqua_Script_WaterControl7_1
# 186 "data/maps/AedesAqua/scripts.pory"
	setvar VAR_AEDES_AQUA_STATE, 17
# 187 "data/maps/AedesAqua/scripts.pory"
	call AedesAqua_Script_GoToWaterfallScene
	return

AedesAqua_Script_WaterControl7_1:
# 183 "data/maps/AedesAqua/scripts.pory"
	closemessage
	end


AedesAqua_Script_GoToWaterfallScene::
# 193 "data/maps/AedesAqua/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 194 "data/maps/AedesAqua/scripts.pory"
	waitmovement 0
# 196 "data/maps/AedesAqua/scripts.pory"
	warpsilent MAP_AEDES_AQUA, 31, 6
# 197 "data/maps/AedesAqua/scripts.pory"
	waitstate
	return


AedesAqua_Text_WaterControl::
# 200 "data/maps/AedesAqua/scripts.pory"
	.string "It seems to be a control panel. Would\n"
	.string "you like to try pressing the buttons?$"

AedesAqua_Text_WaterControlNoEffect::
# 204 "data/maps/AedesAqua/scripts.pory"
	.string "It seems like nothing happened.$"
