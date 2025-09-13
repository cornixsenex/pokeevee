LakeIra_MapScripts::
	.byte 0


LakeIra_SunkenTreasure_TrivisShard1::
# 8 "data/maps/LakeIra/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD1
# 9 "data/maps/LakeIra/scripts.pory"
	closemessage
# 10 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_2, LakeIra_SunkenTreasure_TrivisShard1_4
LakeIra_SunkenTreasure_TrivisShard1_1:
# 21 "data/maps/LakeIra/scripts.pory"
	setflag FLAG_TRIVIS_SHARD_1
	end

LakeIra_SunkenTreasure_TrivisShard1_2:
# 18 "data/maps/LakeIra/scripts.pory"
	call LakeIra_Script_GiveTrivisFortitudinis
	goto LakeIra_SunkenTreasure_TrivisShard1_1

LakeIra_SunkenTreasure_TrivisShard1_3:
# 12 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_4, LakeIra_SunkenTreasure_TrivisShard1_8
	goto LakeIra_SunkenTreasure_TrivisShard1_1

LakeIra_SunkenTreasure_TrivisShard1_4:
# 11 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_3, LakeIra_SunkenTreasure_TrivisShard1_3
	goto LakeIra_SunkenTreasure_TrivisShard1_1

LakeIra_SunkenTreasure_TrivisShard1_7:
# 14 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_6, LakeIra_SunkenTreasure_TrivisShard1_12
	goto LakeIra_SunkenTreasure_TrivisShard1_1

LakeIra_SunkenTreasure_TrivisShard1_8:
# 13 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_5, LakeIra_SunkenTreasure_TrivisShard1_7
	goto LakeIra_SunkenTreasure_TrivisShard1_1

LakeIra_SunkenTreasure_TrivisShard1_11:
# 16 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_8, LakeIra_SunkenTreasure_TrivisShard1_2
	goto LakeIra_SunkenTreasure_TrivisShard1_1

LakeIra_SunkenTreasure_TrivisShard1_12:
# 15 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_7, LakeIra_SunkenTreasure_TrivisShard1_11
	goto LakeIra_SunkenTreasure_TrivisShard1_1


LakeIra_SunkenTreasure_TrivisShard2::
# 26 "data/maps/LakeIra/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD2
# 27 "data/maps/LakeIra/scripts.pory"
	closemessage
# 28 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_1, LakeIra_SunkenTreasure_TrivisShard2_4
LakeIra_SunkenTreasure_TrivisShard2_1:
# 39 "data/maps/LakeIra/scripts.pory"
	setflag FLAG_TRIVIS_SHARD_2
	end

LakeIra_SunkenTreasure_TrivisShard2_2:
# 36 "data/maps/LakeIra/scripts.pory"
	call LakeIra_Script_GiveTrivisFortitudinis
	goto LakeIra_SunkenTreasure_TrivisShard2_1

LakeIra_SunkenTreasure_TrivisShard2_3:
# 30 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_4, LakeIra_SunkenTreasure_TrivisShard2_8
	goto LakeIra_SunkenTreasure_TrivisShard2_1

LakeIra_SunkenTreasure_TrivisShard2_4:
# 29 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_3, LakeIra_SunkenTreasure_TrivisShard2_3
	goto LakeIra_SunkenTreasure_TrivisShard2_1

LakeIra_SunkenTreasure_TrivisShard2_7:
# 32 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_6, LakeIra_SunkenTreasure_TrivisShard2_12
	goto LakeIra_SunkenTreasure_TrivisShard2_1

LakeIra_SunkenTreasure_TrivisShard2_8:
# 31 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_5, LakeIra_SunkenTreasure_TrivisShard2_7
	goto LakeIra_SunkenTreasure_TrivisShard2_1

LakeIra_SunkenTreasure_TrivisShard2_11:
# 34 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_8, LakeIra_SunkenTreasure_TrivisShard2_2
	goto LakeIra_SunkenTreasure_TrivisShard2_1

LakeIra_SunkenTreasure_TrivisShard2_12:
# 33 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_7, LakeIra_SunkenTreasure_TrivisShard2_11
	goto LakeIra_SunkenTreasure_TrivisShard2_1


LakeIra_SunkenTreasure_TrivisShard3::
# 44 "data/maps/LakeIra/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD3
# 45 "data/maps/LakeIra/scripts.pory"
	closemessage
# 46 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_2, LakeIra_SunkenTreasure_TrivisShard3_4
LakeIra_SunkenTreasure_TrivisShard3_1:
# 57 "data/maps/LakeIra/scripts.pory"
	setflag FLAG_TRIVIS_SHARD_3
	end

LakeIra_SunkenTreasure_TrivisShard3_2:
# 54 "data/maps/LakeIra/scripts.pory"
	call LakeIra_Script_GiveTrivisFortitudinis
	goto LakeIra_SunkenTreasure_TrivisShard3_1

LakeIra_SunkenTreasure_TrivisShard3_3:
# 48 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_4, LakeIra_SunkenTreasure_TrivisShard3_8
	goto LakeIra_SunkenTreasure_TrivisShard3_1

LakeIra_SunkenTreasure_TrivisShard3_4:
# 47 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_1, LakeIra_SunkenTreasure_TrivisShard3_3
	goto LakeIra_SunkenTreasure_TrivisShard3_1

LakeIra_SunkenTreasure_TrivisShard3_7:
# 50 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_6, LakeIra_SunkenTreasure_TrivisShard3_12
	goto LakeIra_SunkenTreasure_TrivisShard3_1

LakeIra_SunkenTreasure_TrivisShard3_8:
# 49 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_5, LakeIra_SunkenTreasure_TrivisShard3_7
	goto LakeIra_SunkenTreasure_TrivisShard3_1

LakeIra_SunkenTreasure_TrivisShard3_11:
# 52 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_8, LakeIra_SunkenTreasure_TrivisShard3_2
	goto LakeIra_SunkenTreasure_TrivisShard3_1

LakeIra_SunkenTreasure_TrivisShard3_12:
# 51 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_7, LakeIra_SunkenTreasure_TrivisShard3_11
	goto LakeIra_SunkenTreasure_TrivisShard3_1


LakeIra_SunkenTreasure_TrivisShard4::
# 63 "data/maps/LakeIra/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD4
# 64 "data/maps/LakeIra/scripts.pory"
	closemessage
# 65 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_2, LakeIra_SunkenTreasure_TrivisShard4_4
LakeIra_SunkenTreasure_TrivisShard4_1:
# 76 "data/maps/LakeIra/scripts.pory"
	setflag FLAG_TRIVIS_SHARD_4
	end

LakeIra_SunkenTreasure_TrivisShard4_2:
# 73 "data/maps/LakeIra/scripts.pory"
	call LakeIra_Script_GiveTrivisFortitudinis
	goto LakeIra_SunkenTreasure_TrivisShard4_1

LakeIra_SunkenTreasure_TrivisShard4_3:
# 67 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_1, LakeIra_SunkenTreasure_TrivisShard4_8
	goto LakeIra_SunkenTreasure_TrivisShard4_1

LakeIra_SunkenTreasure_TrivisShard4_4:
# 66 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_3, LakeIra_SunkenTreasure_TrivisShard4_3
	goto LakeIra_SunkenTreasure_TrivisShard4_1

LakeIra_SunkenTreasure_TrivisShard4_7:
# 69 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_6, LakeIra_SunkenTreasure_TrivisShard4_12
	goto LakeIra_SunkenTreasure_TrivisShard4_1

LakeIra_SunkenTreasure_TrivisShard4_8:
# 68 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_5, LakeIra_SunkenTreasure_TrivisShard4_7
	goto LakeIra_SunkenTreasure_TrivisShard4_1

LakeIra_SunkenTreasure_TrivisShard4_11:
# 71 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_8, LakeIra_SunkenTreasure_TrivisShard4_2
	goto LakeIra_SunkenTreasure_TrivisShard4_1

LakeIra_SunkenTreasure_TrivisShard4_12:
# 70 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_7, LakeIra_SunkenTreasure_TrivisShard4_11
	goto LakeIra_SunkenTreasure_TrivisShard4_1


LakeIra_SunkenTreasure_TrivisShard5::
# 82 "data/maps/LakeIra/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD5
# 83 "data/maps/LakeIra/scripts.pory"
	closemessage
# 84 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_2, LakeIra_SunkenTreasure_TrivisShard5_4
LakeIra_SunkenTreasure_TrivisShard5_1:
# 95 "data/maps/LakeIra/scripts.pory"
	setflag FLAG_TRIVIS_SHARD_5
	end

LakeIra_SunkenTreasure_TrivisShard5_2:
# 92 "data/maps/LakeIra/scripts.pory"
	call LakeIra_Script_GiveTrivisFortitudinis
	goto LakeIra_SunkenTreasure_TrivisShard5_1

LakeIra_SunkenTreasure_TrivisShard5_3:
# 86 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_4, LakeIra_SunkenTreasure_TrivisShard5_8
	goto LakeIra_SunkenTreasure_TrivisShard5_1

LakeIra_SunkenTreasure_TrivisShard5_4:
# 85 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_3, LakeIra_SunkenTreasure_TrivisShard5_3
	goto LakeIra_SunkenTreasure_TrivisShard5_1

LakeIra_SunkenTreasure_TrivisShard5_7:
# 88 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_6, LakeIra_SunkenTreasure_TrivisShard5_12
	goto LakeIra_SunkenTreasure_TrivisShard5_1

LakeIra_SunkenTreasure_TrivisShard5_8:
# 87 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_1, LakeIra_SunkenTreasure_TrivisShard5_7
	goto LakeIra_SunkenTreasure_TrivisShard5_1

LakeIra_SunkenTreasure_TrivisShard5_11:
# 90 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_8, LakeIra_SunkenTreasure_TrivisShard5_2
	goto LakeIra_SunkenTreasure_TrivisShard5_1

LakeIra_SunkenTreasure_TrivisShard5_12:
# 89 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_7, LakeIra_SunkenTreasure_TrivisShard5_11
	goto LakeIra_SunkenTreasure_TrivisShard5_1


LakeIra_SunkenTreasure_TrivisShard6::
# 101 "data/maps/LakeIra/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD6
# 102 "data/maps/LakeIra/scripts.pory"
	closemessage
# 103 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_2, LakeIra_SunkenTreasure_TrivisShard6_4
LakeIra_SunkenTreasure_TrivisShard6_1:
# 114 "data/maps/LakeIra/scripts.pory"
	setflag FLAG_TRIVIS_SHARD_6
	end

LakeIra_SunkenTreasure_TrivisShard6_2:
# 111 "data/maps/LakeIra/scripts.pory"
	call LakeIra_Script_GiveTrivisFortitudinis
	goto LakeIra_SunkenTreasure_TrivisShard6_1

LakeIra_SunkenTreasure_TrivisShard6_3:
# 105 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_4, LakeIra_SunkenTreasure_TrivisShard6_8
	goto LakeIra_SunkenTreasure_TrivisShard6_1

LakeIra_SunkenTreasure_TrivisShard6_4:
# 104 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_3, LakeIra_SunkenTreasure_TrivisShard6_3
	goto LakeIra_SunkenTreasure_TrivisShard6_1

LakeIra_SunkenTreasure_TrivisShard6_7:
# 107 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_1, LakeIra_SunkenTreasure_TrivisShard6_12
	goto LakeIra_SunkenTreasure_TrivisShard6_1

LakeIra_SunkenTreasure_TrivisShard6_8:
# 106 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_5, LakeIra_SunkenTreasure_TrivisShard6_7
	goto LakeIra_SunkenTreasure_TrivisShard6_1

LakeIra_SunkenTreasure_TrivisShard6_11:
# 109 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_8, LakeIra_SunkenTreasure_TrivisShard6_2
	goto LakeIra_SunkenTreasure_TrivisShard6_1

LakeIra_SunkenTreasure_TrivisShard6_12:
# 108 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_7, LakeIra_SunkenTreasure_TrivisShard6_11
	goto LakeIra_SunkenTreasure_TrivisShard6_1


LakeIra_SunkenTreasure_TrivisShard7::
# 120 "data/maps/LakeIra/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD7
# 121 "data/maps/LakeIra/scripts.pory"
	closemessage
# 122 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_2, LakeIra_SunkenTreasure_TrivisShard7_4
LakeIra_SunkenTreasure_TrivisShard7_1:
# 133 "data/maps/LakeIra/scripts.pory"
	setflag FLAG_TRIVIS_SHARD_7
	end

LakeIra_SunkenTreasure_TrivisShard7_2:
# 130 "data/maps/LakeIra/scripts.pory"
	call LakeIra_Script_GiveTrivisFortitudinis
	goto LakeIra_SunkenTreasure_TrivisShard7_1

LakeIra_SunkenTreasure_TrivisShard7_3:
# 124 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_4, LakeIra_SunkenTreasure_TrivisShard7_8
	goto LakeIra_SunkenTreasure_TrivisShard7_1

LakeIra_SunkenTreasure_TrivisShard7_4:
# 123 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_3, LakeIra_SunkenTreasure_TrivisShard7_3
	goto LakeIra_SunkenTreasure_TrivisShard7_1

LakeIra_SunkenTreasure_TrivisShard7_7:
# 126 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_6, LakeIra_SunkenTreasure_TrivisShard7_12
	goto LakeIra_SunkenTreasure_TrivisShard7_1

LakeIra_SunkenTreasure_TrivisShard7_8:
# 125 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_5, LakeIra_SunkenTreasure_TrivisShard7_7
	goto LakeIra_SunkenTreasure_TrivisShard7_1

LakeIra_SunkenTreasure_TrivisShard7_11:
# 128 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_8, LakeIra_SunkenTreasure_TrivisShard7_2
	goto LakeIra_SunkenTreasure_TrivisShard7_1

LakeIra_SunkenTreasure_TrivisShard7_12:
# 127 "data/maps/LakeIra/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_1, LakeIra_SunkenTreasure_TrivisShard7_11
	goto LakeIra_SunkenTreasure_TrivisShard7_1


LakeIra_Script_GiveTrivisFortitudinis::
# 139 "data/maps/LakeIra/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 140 "data/maps/LakeIra/scripts.pory"
	waitmovement 0
# 142 "data/maps/LakeIra/scripts.pory"
	msgbox LakeIra_Text_TrivisShardsGlow
# 143 "data/maps/LakeIra/scripts.pory"
	closemessage
# 145 "data/maps/LakeIra/scripts.pory"
	playse SE_M_HYPER_BEAM
# 146 "data/maps/LakeIra/scripts.pory"
	waitse
# 148 "data/maps/LakeIra/scripts.pory"
	fadescreen FADE_TO_WHITE
# 149 "data/maps/LakeIra/scripts.pory"
	delay 40
# 150 "data/maps/LakeIra/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 152 "data/maps/LakeIra/scripts.pory"
	giveitem ITEM_TRIVIS_FORTITUDINIS, 1
# 154 "data/maps/LakeIra/scripts.pory"
	removeitem ITEM_TRIVIS_SHARD1
# 155 "data/maps/LakeIra/scripts.pory"
	removeitem ITEM_TRIVIS_SHARD2
# 156 "data/maps/LakeIra/scripts.pory"
	removeitem ITEM_TRIVIS_SHARD3
# 157 "data/maps/LakeIra/scripts.pory"
	removeitem ITEM_TRIVIS_SHARD4
# 158 "data/maps/LakeIra/scripts.pory"
	removeitem ITEM_TRIVIS_SHARD5
# 159 "data/maps/LakeIra/scripts.pory"
	removeitem ITEM_TRIVIS_SHARD6
# 160 "data/maps/LakeIra/scripts.pory"
	removeitem ITEM_TRIVIS_SHARD7
# 161 "data/maps/LakeIra/scripts.pory"
	removeitem ITEM_TRIVIS_SHARD8
	return


LakeIra_Text_TrivisShardsGlow::
# 166 "data/maps/LakeIra/scripts.pory"
	.string "The eight Trivis Shards began to glow.$"
