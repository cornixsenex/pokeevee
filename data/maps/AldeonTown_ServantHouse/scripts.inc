AldeonTown_ServantHouse_MapScripts::
# 5 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_LOAD
# 23 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	compare VAR_ORESTES_STATE, 8
	goto_if_eq AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	compare VAR_ORESTES_STATE, 8
	goto_if_gt AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	call AldeonTown_ServantHouse_Script_SetupOrestesScene
	goto AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	call AldeonTown_ServantHouse_Script_ShowServantByStairs
	return

AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_LOAD:
# 18 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	compare VAR_ORESTES_STATE, 9
	goto_if_lt AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 19 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	call AldeonTown_ServantHouse_Script_HideStairs
	return

AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 24 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	map_script_2 VAR_ORESTES_STATE, 8, AldeonTown_ServantHouse_Script_OrestesInServantHouse
	.2byte 0


AldeonTown_ServantHouse_Script_SetupOrestesScene::
# 30 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setobjectxyperm LOCALID_ALDEONSERVANTHOUSE_SERVANT, 6, 5
# 31 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setobjectxyperm LOCALID_ALDEONSERVANTHOUSE_ORESTES, 5, 5
# 32 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setobjectmovementtype LOCALID_ALDEONSERVANTHOUSE_ORESTES, MOVEMENT_TYPE_FACE_RIGHT
	return


AldeonTown_ServantHouse_Script_ShowServantByStairs::
# 37 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setobjectxyperm LOCALID_ALDEONSERVANTHOUSE_SERVANT, 7, 2
# 38 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setobjectmovementtype LOCALID_ALDEONSERVANTHOUSE_SERVANT, MOVEMENT_TYPE_FACE_DOWN
	return


AldeonTown_ServantHouse_Script_HideStairs::
# 43 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 5, 0, METATILE_GenericBuilding_BlueWallTop, TRUE
# 44 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 6, 0, METATILE_GenericBuilding_BlueWallTop, TRUE
# 45 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 7, 0, METATILE_GenericBuilding_BlueWallTop, TRUE
# 46 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 5, 1, METATILE_GenericBuilding_BlueWallBottom, TRUE
# 47 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 6, 1, METATILE_GenericBuilding_BlueWallBottom, TRUE
# 48 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 7, 1, METATILE_GenericBuilding_BlueWallBottom, TRUE
	return


AldeonTown_ServantHouse_Script_OrestesInServantHouse::
# 54 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 55 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 57 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 58 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 59 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 60 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 61 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 62 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 64 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	load_field_pic FIELD_PIC_SAILOR2, 190, 98
# 65 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_OrestesScene_Sailor1
# 66 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	destroy_field_pic FIELD_PIC_SAILOR2
# 68 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 69 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_OrestesScene_Orestes1
# 70 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 85 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setvar VAR_ORESTES_STATE, 9
	return


AldeonTown_ServantHouse_Script_Servant::
# 90 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	lock
# 91 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	faceplayer
# 93 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 94 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 1, AldeonTown_ServantHouse_Script_Servant_3
# 96 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 2, AldeonTown_ServantHouse_Script_Servant_3
# 98 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 3, AldeonTown_ServantHouse_Script_Servant_4
# 99 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 4, AldeonTown_ServantHouse_Script_Servant_4
# 101 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 5, AldeonTown_ServantHouse_Script_Servant_5
# 102 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 6, AldeonTown_ServantHouse_Script_Servant_5
# 104 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 7, AldeonTown_ServantHouse_Script_Servant_6
# 105 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 8, AldeonTown_ServantHouse_Script_Servant_6
# 108 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant5, MSGBOX_DEFAULT
AldeonTown_ServantHouse_Script_Servant_1:
# 110 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	closemessage
# 111 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 112 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 113 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	release
	end

AldeonTown_ServantHouse_Script_Servant_3:
# 97 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant1, MSGBOX_DEFAULT
	goto AldeonTown_ServantHouse_Script_Servant_1

AldeonTown_ServantHouse_Script_Servant_4:
# 100 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant2, MSGBOX_DEFAULT
	goto AldeonTown_ServantHouse_Script_Servant_1

AldeonTown_ServantHouse_Script_Servant_5:
# 103 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant3, MSGBOX_DEFAULT
	goto AldeonTown_ServantHouse_Script_Servant_1

AldeonTown_ServantHouse_Script_Servant_6:
# 106 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant4, MSGBOX_DEFAULT
	goto AldeonTown_ServantHouse_Script_Servant_1


AldeonTown_ServantHouse_Text_Servant1::
# 118 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Here house me entire life me servin'.$"

AldeonTown_ServantHouse_Text_Servant2::
# 122 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Before master's birthin' mighty Atreus\n"
	.string "here me servin' way back before\l"
	.string "Republic nosin' around.$"

AldeonTown_ServantHouse_Text_Servant3::
# 127 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Master Menelaus some time being gone.\n"
	.string "Family missin' him I think.$"

AldeonTown_ServantHouse_Text_Servant4::
# 132 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Not here but way back in island home me\n"
	.string "birthin'.$"

AldeonTown_ServantHouse_Text_Servant5::
# 137 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Good man Master Agamemnon being and\n"
	.string "kind master but recently not seemin'\l"
	.string "well. Indoors shuttin' like this Master\l"
	.string "Atreus never be doin'. Master Menelaus\l"
	.string "returnin' soon me hopin'.$"

AldeonTown_ServantHouse_Text_OrestesScene_Sailor1::
# 141 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "$"

AldeonTown_ServantHouse_Text_OrestesScene_Orestes1::
# 145 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "$"
