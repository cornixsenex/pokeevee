AedesAqua_Hallways_MapScripts::
# 4 "data/maps/AedesAqua_Hallways/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL1, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_2
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 15 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL2, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_5
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 24 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL3, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_8
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 33 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL4, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_11
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 42 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL5, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_14
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 51 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL6, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_17
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 60 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL7, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_20
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_19:
# 69 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL8, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_23
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_22:
# 78 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL9, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_26
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_25:
# 87 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL10, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_29
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_28:
# 96 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL11, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_32
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_31:
# 105 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL12, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_34
	return

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 7 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 66, METATILE_Cave_CaveFloorBottom, FALSE
# 8 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 66, METATILE_Cave_CaveFloorBottom, FALSE
# 9 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 66, METATILE_Cave_CaveFloorBottom, FALSE
# 10 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 66, METATILE_Cave_CaveFloorBottom, FALSE
# 11 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 66, METATILE_Cave_CaveFloorBottom, FALSE
# 12 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 66, METATILE_Cave_CaveFloorBottom, FALSE
# 13 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 66, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_1

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 16 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 62, METATILE_Cave_CaveFloorBottom, FALSE
# 17 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 62, METATILE_Cave_CaveFloorBottom, FALSE
# 18 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 62, METATILE_Cave_CaveFloorBottom, FALSE
# 19 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 62, METATILE_Cave_CaveFloorBottom, FALSE
# 20 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 62, METATILE_Cave_CaveFloorBottom, FALSE
# 21 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 62, METATILE_Cave_CaveFloorBottom, FALSE
# 22 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 62, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_4

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 25 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 58, METATILE_Cave_CaveFloorBottom, FALSE
# 26 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 58, METATILE_Cave_CaveFloorBottom, FALSE
# 27 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 58, METATILE_Cave_CaveFloorBottom, FALSE
# 28 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 58, METATILE_Cave_CaveFloorBottom, FALSE
# 29 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 58, METATILE_Cave_CaveFloorBottom, FALSE
# 30 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 58, METATILE_Cave_CaveFloorBottom, FALSE
# 31 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 58, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_7

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 34 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 54, METATILE_Cave_CaveFloorBottom, FALSE
# 35 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 54, METATILE_Cave_CaveFloorBottom, FALSE
# 36 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 54, METATILE_Cave_CaveFloorBottom, FALSE
# 37 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 54, METATILE_Cave_CaveFloorBottom, FALSE
# 38 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 54, METATILE_Cave_CaveFloorBottom, FALSE
# 39 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 54, METATILE_Cave_CaveFloorBottom, FALSE
# 40 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 54, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_10

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 43 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 50, METATILE_Cave_CaveFloorBottom, FALSE
# 44 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 50, METATILE_Cave_CaveFloorBottom, FALSE
# 45 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 50, METATILE_Cave_CaveFloorBottom, FALSE
# 46 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 50, METATILE_Cave_CaveFloorBottom, FALSE
# 47 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 50, METATILE_Cave_CaveFloorBottom, FALSE
# 48 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 50, METATILE_Cave_CaveFloorBottom, FALSE
# 49 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 50, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_13

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_17:
# 52 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 46, METATILE_Cave_CaveFloorBottom, FALSE
# 53 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 46, METATILE_Cave_CaveFloorBottom, FALSE
# 54 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 46, METATILE_Cave_CaveFloorBottom, FALSE
# 55 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 46, METATILE_Cave_CaveFloorBottom, FALSE
# 56 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 46, METATILE_Cave_CaveFloorBottom, FALSE
# 57 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 46, METATILE_Cave_CaveFloorBottom, FALSE
# 58 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 46, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_16

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_20:
# 61 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 42, METATILE_Cave_CaveFloorBottom, FALSE
# 62 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 42, METATILE_Cave_CaveFloorBottom, FALSE
# 63 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 42, METATILE_Cave_CaveFloorBottom, FALSE
# 64 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 42, METATILE_Cave_CaveFloorBottom, FALSE
# 65 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 42, METATILE_Cave_CaveFloorBottom, FALSE
# 66 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 42, METATILE_Cave_CaveFloorBottom, FALSE
# 67 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 42, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_19

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_23:
# 70 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 38, METATILE_Cave_CaveFloorBottom, FALSE
# 71 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 38, METATILE_Cave_CaveFloorBottom, FALSE
# 72 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 38, METATILE_Cave_CaveFloorBottom, FALSE
# 73 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 38, METATILE_Cave_CaveFloorBottom, FALSE
# 74 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 38, METATILE_Cave_CaveFloorBottom, FALSE
# 75 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 38, METATILE_Cave_CaveFloorBottom, FALSE
# 76 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 38, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_22

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_26:
# 79 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 34, METATILE_Cave_CaveFloorBottom, FALSE
# 80 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 34, METATILE_Cave_CaveFloorBottom, FALSE
# 81 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 34, METATILE_Cave_CaveFloorBottom, FALSE
# 82 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 34, METATILE_Cave_CaveFloorBottom, FALSE
# 83 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 34, METATILE_Cave_CaveFloorBottom, FALSE
# 84 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 34, METATILE_Cave_CaveFloorBottom, FALSE
# 85 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 34, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_25

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_29:
# 88 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 30, METATILE_Cave_CaveFloorBottom, FALSE
# 89 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 30, METATILE_Cave_CaveFloorBottom, FALSE
# 90 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 30, METATILE_Cave_CaveFloorBottom, FALSE
# 91 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 30, METATILE_Cave_CaveFloorBottom, FALSE
# 92 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 30, METATILE_Cave_CaveFloorBottom, FALSE
# 93 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 30, METATILE_Cave_CaveFloorBottom, FALSE
# 94 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 30, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_28

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_32:
# 97 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 26, METATILE_Cave_CaveFloorBottom, FALSE
# 98 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 26, METATILE_Cave_CaveFloorBottom, FALSE
# 99 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 26, METATILE_Cave_CaveFloorBottom, FALSE
# 100 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 26, METATILE_Cave_CaveFloorBottom, FALSE
# 101 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 26, METATILE_Cave_CaveFloorBottom, FALSE
# 102 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 26, METATILE_Cave_CaveFloorBottom, FALSE
# 103 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 26, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_31

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_34:
# 106 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 22, METATILE_Cave_CaveFloorBottom, FALSE
# 107 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 22, METATILE_Cave_CaveFloorBottom, FALSE
# 108 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 22, METATILE_Cave_CaveFloorBottom, FALSE
# 109 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 22, METATILE_Cave_CaveFloorBottom, FALSE
# 110 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 22, METATILE_Cave_CaveFloorBottom, FALSE
# 111 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 22, METATILE_Cave_CaveFloorBottom, FALSE
# 112 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 22, METATILE_Cave_CaveFloorBottom, FALSE
	return


AedesAqua_Hallways_Script_LinkMessage::
# 120 "data/maps/AedesAqua_Hallways/scripts.pory"
	msgbox AedesAqua_Text_LinkMessage, MSGBOX_SIGN
# 121 "data/maps/AedesAqua_Hallways/scripts.pory"
	closemessage
	return


AedesAqua_Hallways_Script_TestLink::
# 126 "data/maps/AedesAqua_Hallways/scripts.pory"
	trainerbattle_no_intro TRAINER_SMOKEY, LoonixBeach_Text_BlueLost
	return


AedesAqua_Text_LinkMessage::
# 130 "data/maps/AedesAqua_Hallways/scripts.pory"
	.string "The golden power which you seek\n"
	.string "Is not for anyone to keep.\n"
	.string "Too dangerous to leave alone,\n"
	.string "I took it from it's former home.\n"
	.string "The three components I have hid\n"
	.string "Within three temples dark and dim.\n"
	.string "The one I hide under the lake\n"
	.string "I have decided to unmake.\n"
	.string "The golden shards, which number eight,\n"
	.string "have been sunk to preserve our fate.\n"
	.string "The first is in this very room\n"
	.string "The rest under the sun and moon.\n"
	.string "The map will show you where they lie\n"
	.string "On the lake bed where fishes die$"
