AedesAqua_Hallways_MapScripts::
# 6 "data/maps/AedesAqua_Hallways/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/AedesAqua_Hallways/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/AedesAqua_Hallways/scripts.pory"
	checktrainerflag TRAINER_LINK
	goto_if 0, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/AedesAqua_Hallways/scripts.pory"
	setvar VAR_TEMP_6, 1
# 10 "data/maps/AedesAqua_Hallways/scripts.pory"
	setobjectxyperm LOCALID_AEDESAQUA_HALLWAYS_LINK, 28, 15
# 11 "data/maps/AedesAqua_Hallways/scripts.pory"
	setobjectmovementtype LOCALID_AEDESAQUA_HALLWAYS_LINK, MOVEMENT_TYPE_FACE_DOWN
	return

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD:
# 18 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL1, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_2
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 27 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL2, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_5
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 36 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL3, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_8
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 45 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL4, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_11
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 54 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL5, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_14
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 63 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL6, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_17
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 72 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL7, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_20
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_19:
# 81 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL8, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_23
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_22:
# 90 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL9, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_26
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_25:
# 99 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL10, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_29
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_28:
# 108 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL11, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_32
AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_31:
# 117 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_AEDES_AQUA_CRYSTAL12, AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_34
	return

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 19 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 66, METATILE_Cave_CaveFloorBottom, FALSE
# 20 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 66, METATILE_Cave_CaveFloorBottom, FALSE
# 21 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 66, METATILE_Cave_CaveFloorBottom, FALSE
# 22 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 66, METATILE_Cave_CaveFloorBottom, FALSE
# 23 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 66, METATILE_Cave_CaveFloorBottom, FALSE
# 24 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 66, METATILE_Cave_CaveFloorBottom, FALSE
# 25 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 66, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_1

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 28 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 62, METATILE_Cave_CaveFloorBottom, FALSE
# 29 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 62, METATILE_Cave_CaveFloorBottom, FALSE
# 30 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 62, METATILE_Cave_CaveFloorBottom, FALSE
# 31 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 62, METATILE_Cave_CaveFloorBottom, FALSE
# 32 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 62, METATILE_Cave_CaveFloorBottom, FALSE
# 33 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 62, METATILE_Cave_CaveFloorBottom, FALSE
# 34 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 62, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_4

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 37 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 58, METATILE_Cave_CaveFloorBottom, FALSE
# 38 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 58, METATILE_Cave_CaveFloorBottom, FALSE
# 39 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 58, METATILE_Cave_CaveFloorBottom, FALSE
# 40 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 58, METATILE_Cave_CaveFloorBottom, FALSE
# 41 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 58, METATILE_Cave_CaveFloorBottom, FALSE
# 42 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 58, METATILE_Cave_CaveFloorBottom, FALSE
# 43 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 58, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_7

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 46 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 54, METATILE_Cave_CaveFloorBottom, FALSE
# 47 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 54, METATILE_Cave_CaveFloorBottom, FALSE
# 48 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 54, METATILE_Cave_CaveFloorBottom, FALSE
# 49 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 54, METATILE_Cave_CaveFloorBottom, FALSE
# 50 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 54, METATILE_Cave_CaveFloorBottom, FALSE
# 51 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 54, METATILE_Cave_CaveFloorBottom, FALSE
# 52 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 54, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_10

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 55 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 50, METATILE_Cave_CaveFloorBottom, FALSE
# 56 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 50, METATILE_Cave_CaveFloorBottom, FALSE
# 57 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 50, METATILE_Cave_CaveFloorBottom, FALSE
# 58 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 50, METATILE_Cave_CaveFloorBottom, FALSE
# 59 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 50, METATILE_Cave_CaveFloorBottom, FALSE
# 60 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 50, METATILE_Cave_CaveFloorBottom, FALSE
# 61 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 50, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_13

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_17:
# 64 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 46, METATILE_Cave_CaveFloorBottom, FALSE
# 65 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 46, METATILE_Cave_CaveFloorBottom, FALSE
# 66 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 46, METATILE_Cave_CaveFloorBottom, FALSE
# 67 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 46, METATILE_Cave_CaveFloorBottom, FALSE
# 68 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 46, METATILE_Cave_CaveFloorBottom, FALSE
# 69 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 46, METATILE_Cave_CaveFloorBottom, FALSE
# 70 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 46, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_16

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_20:
# 73 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 42, METATILE_Cave_CaveFloorBottom, FALSE
# 74 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 42, METATILE_Cave_CaveFloorBottom, FALSE
# 75 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 42, METATILE_Cave_CaveFloorBottom, FALSE
# 76 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 42, METATILE_Cave_CaveFloorBottom, FALSE
# 77 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 42, METATILE_Cave_CaveFloorBottom, FALSE
# 78 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 42, METATILE_Cave_CaveFloorBottom, FALSE
# 79 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 42, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_19

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_23:
# 82 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 38, METATILE_Cave_CaveFloorBottom, FALSE
# 83 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 38, METATILE_Cave_CaveFloorBottom, FALSE
# 84 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 38, METATILE_Cave_CaveFloorBottom, FALSE
# 85 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 38, METATILE_Cave_CaveFloorBottom, FALSE
# 86 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 38, METATILE_Cave_CaveFloorBottom, FALSE
# 87 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 38, METATILE_Cave_CaveFloorBottom, FALSE
# 88 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 38, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_22

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_26:
# 91 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 34, METATILE_Cave_CaveFloorBottom, FALSE
# 92 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 34, METATILE_Cave_CaveFloorBottom, FALSE
# 93 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 34, METATILE_Cave_CaveFloorBottom, FALSE
# 94 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 34, METATILE_Cave_CaveFloorBottom, FALSE
# 95 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 34, METATILE_Cave_CaveFloorBottom, FALSE
# 96 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 34, METATILE_Cave_CaveFloorBottom, FALSE
# 97 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 34, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_25

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_29:
# 100 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 30, METATILE_Cave_CaveFloorBottom, FALSE
# 101 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 30, METATILE_Cave_CaveFloorBottom, FALSE
# 102 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 30, METATILE_Cave_CaveFloorBottom, FALSE
# 103 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 30, METATILE_Cave_CaveFloorBottom, FALSE
# 104 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 30, METATILE_Cave_CaveFloorBottom, FALSE
# 105 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 30, METATILE_Cave_CaveFloorBottom, FALSE
# 106 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 30, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_28

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_32:
# 109 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 26, METATILE_Cave_CaveFloorBottom, FALSE
# 110 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 26, METATILE_Cave_CaveFloorBottom, FALSE
# 111 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 26, METATILE_Cave_CaveFloorBottom, FALSE
# 112 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 26, METATILE_Cave_CaveFloorBottom, FALSE
# 113 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 26, METATILE_Cave_CaveFloorBottom, FALSE
# 114 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 26, METATILE_Cave_CaveFloorBottom, FALSE
# 115 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 26, METATILE_Cave_CaveFloorBottom, FALSE
	goto AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_31

AedesAqua_Hallways_MapScripts_MAP_SCRIPT_ON_LOAD_34:
# 118 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 25, 22, METATILE_Cave_CaveFloorBottom, FALSE
# 119 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 26, 22, METATILE_Cave_CaveFloorBottom, FALSE
# 120 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 27, 22, METATILE_Cave_CaveFloorBottom, FALSE
# 121 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 28, 22, METATILE_Cave_CaveFloorBottom, FALSE
# 122 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 29, 22, METATILE_Cave_CaveFloorBottom, FALSE
# 123 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 30, 22, METATILE_Cave_CaveFloorBottom, FALSE
# 124 "data/maps/AedesAqua_Hallways/scripts.pory"
	setmetatile 31, 22, METATILE_Cave_CaveFloorBottom, FALSE
	return


AedesAqua_Hallways_Script_LinkMessage::
# 132 "data/maps/AedesAqua_Hallways/scripts.pory"
	msgbox AedesAqua_Text_LinkMessage, MSGBOX_YESNO
# 133 "data/maps/AedesAqua_Hallways/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesAqua_Hallways_Script_LinkMessage_1
# 136 "data/maps/AedesAqua_Hallways/scripts.pory"
	closemessage
	return

AedesAqua_Hallways_Script_LinkMessage_1:
# 134 "data/maps/AedesAqua_Hallways/scripts.pory"
	warpsilent MAP_AEDES_AQUA, 31, 59
	return


AedesAqua_Hallways_Script_TriggerLinkA::
# 142 "data/maps/AedesAqua_Hallways/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 143 "data/maps/AedesAqua_Hallways/scripts.pory"
	waitmovement 0
# 145 "data/maps/AedesAqua_Hallways/scripts.pory"
	call AedesAqua_Hallways_Script_LinkScene
	return


AedesAqua_Hallways_Script_TriggerLinkB::
# 150 "data/maps/AedesAqua_Hallways/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 151 "data/maps/AedesAqua_Hallways/scripts.pory"
	waitmovement 0
# 153 "data/maps/AedesAqua_Hallways/scripts.pory"
	call AedesAqua_Hallways_Script_LinkScene
	return


AedesAqua_Hallways_Script_TriggerLinkC::
# 158 "data/maps/AedesAqua_Hallways/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 159 "data/maps/AedesAqua_Hallways/scripts.pory"
	waitmovement 0
# 161 "data/maps/AedesAqua_Hallways/scripts.pory"
	call AedesAqua_Hallways_Script_LinkScene
	return


AedesAqua_Hallways_Script_TriggerLinkD::
# 166 "data/maps/AedesAqua_Hallways/scripts.pory"
	call AedesAqua_Hallways_Script_LinkScene
	return


AedesAqua_Hallways_Script_TriggerLinkE::
# 171 "data/maps/AedesAqua_Hallways/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 172 "data/maps/AedesAqua_Hallways/scripts.pory"
	waitmovement 0
# 174 "data/maps/AedesAqua_Hallways/scripts.pory"
	call AedesAqua_Hallways_Script_LinkScene
	return


AedesAqua_Hallways_Script_TriggerLinkF::
# 179 "data/maps/AedesAqua_Hallways/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft2
# 180 "data/maps/AedesAqua_Hallways/scripts.pory"
	waitmovement 0
# 182 "data/maps/AedesAqua_Hallways/scripts.pory"
	call AedesAqua_Hallways_Script_LinkScene
	return


AedesAqua_Hallways_Script_TriggerLinkG::
# 187 "data/maps/AedesAqua_Hallways/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft3
# 188 "data/maps/AedesAqua_Hallways/scripts.pory"
	waitmovement 0
# 190 "data/maps/AedesAqua_Hallways/scripts.pory"
	call AedesAqua_Hallways_Script_LinkScene
	return


AedesAqua_Hallways_Script_LinkScene::
# 195 "data/maps/AedesAqua_Hallways/scripts.pory"
	setvar VAR_TEMP_6, 0
# 197 "data/maps/AedesAqua_Hallways/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 198 "data/maps/AedesAqua_Hallways/scripts.pory"
	waitmovement 0
# 200 "data/maps/AedesAqua_Hallways/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 202 "data/maps/AedesAqua_Hallways/scripts.pory"
	trainerbattle_no_intro TRAINER_LINK, AedesAqua_MiniBossRoom_Text_DarkBrendanLost
# 204 "data/maps/AedesAqua_Hallways/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 205 "data/maps/AedesAqua_Hallways/scripts.pory"
	removeobject LOCALID_AEDESAQUA_HALLWAYS_LINK
# 206 "data/maps/AedesAqua_Hallways/scripts.pory"
	setobjectxyperm LOCALID_AEDESAQUA_HALLWAYS_LINK, 0, 0
# 207 "data/maps/AedesAqua_Hallways/scripts.pory"
	setobjectmovementtype LOCALID_AEDESAQUA_HALLWAYS_LINK, MOVEMENT_TYPE_INVISIBLE
# 208 "data/maps/AedesAqua_Hallways/scripts.pory"
	addobject LOCALID_AEDESAQUA_HALLWAYS_LINK
	end


AedesAqua_Hallways_Script_Map::
# 213 "data/maps/AedesAqua_Hallways/scripts.pory"
	removeobject LOCALID_AEDESAQUA_HALLWAYS_MAP
# 214 "data/maps/AedesAqua_Hallways/scripts.pory"
	setobjectxyperm LOCALID_AEDESAQUA_HALLWAYS_MAP, 0, 0
# 215 "data/maps/AedesAqua_Hallways/scripts.pory"
	setobjectmovementtype LOCALID_AEDESAQUA_HALLWAYS_MAP, MOVEMENT_TYPE_INVISIBLE
# 216 "data/maps/AedesAqua_Hallways/scripts.pory"
	addobject LOCALID_AEDESAQUA_HALLWAYS_MAP
# 217 "data/maps/AedesAqua_Hallways/scripts.pory"
	giveitem ITEM_TRIVIS_MAP
# 218 "data/maps/AedesAqua_Hallways/scripts.pory"
	closemessage
	return


AedesAqua_Hallways_SunkenTreasure_TrivisShard8::
# 222 "data/maps/AedesAqua_Hallways/scripts.pory"
	giveitem ITEM_TRIVIS_SHARD8
# 223 "data/maps/AedesAqua_Hallways/scripts.pory"
	closemessage
# 224 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_2, AedesAqua_Hallways_SunkenTreasure_TrivisShard8_4
AedesAqua_Hallways_SunkenTreasure_TrivisShard8_1:
# 234 "data/maps/AedesAqua_Hallways/scripts.pory"
	setflag FLAG_TRIVIS_SHARD_8
	return

AedesAqua_Hallways_SunkenTreasure_TrivisShard8_2:
# 232 "data/maps/AedesAqua_Hallways/scripts.pory"
	call LakeIra_Script_GiveTrivisFortitudinis
	goto AedesAqua_Hallways_SunkenTreasure_TrivisShard8_1

AedesAqua_Hallways_SunkenTreasure_TrivisShard8_3:
# 226 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_4, AedesAqua_Hallways_SunkenTreasure_TrivisShard8_8
	goto AedesAqua_Hallways_SunkenTreasure_TrivisShard8_1

AedesAqua_Hallways_SunkenTreasure_TrivisShard8_4:
# 225 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_3, AedesAqua_Hallways_SunkenTreasure_TrivisShard8_3
	goto AedesAqua_Hallways_SunkenTreasure_TrivisShard8_1

AedesAqua_Hallways_SunkenTreasure_TrivisShard8_7:
# 228 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_6, AedesAqua_Hallways_SunkenTreasure_TrivisShard8_12
	goto AedesAqua_Hallways_SunkenTreasure_TrivisShard8_1

AedesAqua_Hallways_SunkenTreasure_TrivisShard8_8:
# 227 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_5, AedesAqua_Hallways_SunkenTreasure_TrivisShard8_7
	goto AedesAqua_Hallways_SunkenTreasure_TrivisShard8_1

AedesAqua_Hallways_SunkenTreasure_TrivisShard8_11:
# 230 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_1, AedesAqua_Hallways_SunkenTreasure_TrivisShard8_2
	goto AedesAqua_Hallways_SunkenTreasure_TrivisShard8_1

AedesAqua_Hallways_SunkenTreasure_TrivisShard8_12:
# 229 "data/maps/AedesAqua_Hallways/scripts.pory"
	goto_if_set FLAG_TRIVIS_SHARD_7, AedesAqua_Hallways_SunkenTreasure_TrivisShard8_11
	goto AedesAqua_Hallways_SunkenTreasure_TrivisShard8_1


EventScript_SunkenTreasure_Error::
# 238 "data/maps/AedesAqua_Hallways/scripts.pory"
	msgbox EventScript_SunkenTreasure_Error_Text_0
# 239 "data/maps/AedesAqua_Hallways/scripts.pory"
	closemessage
	end


EventScript_SunkenTreasure_Error_Text_0:
# 238 "data/maps/AedesAqua_Hallways/scripts.pory"
	.string "ERROR:\ntask->tFishingRod OOB\p$"

AedesAqua_Text_LinkMessage::
# 243 "data/maps/AedesAqua_Hallways/scripts.pory"
	.string "The golden power which you seek\n"
	.string "Is not for anyone to keep.\p"
	.string "Too dangerous to leave alone,\n"
	.string "I took it from it's former home.\p"
	.string "The three components I have hid\n"
	.string "Within three temples dark and dim.\p"
	.string "The one I hide under the lake\n"
	.string "I have decided to unmake.\p"
	.string "The golden shards, which number eight,\n"
	.string "have been sunk to preserve our fate.\p"
	.string "The first is in this very room\n"
	.string "The rest under the sun and moon.\p"
	.string "The map will show you where they lie\n"
	.string "On the lake bed where fishes die.\p"
	.string "Would you like to return to the\n"
	.string "beginning of the dungeon?$"
