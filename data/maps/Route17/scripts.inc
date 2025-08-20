Route17_MapScripts::
# 17 "data/maps/Route17/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 19 "data/maps/Route17/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Route17_F
# 20 "data/maps/Route17/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/Route17/scripts.pory"
	case 1, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 23 "data/maps/Route17/scripts.pory"
	case 2, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 25 "data/maps/Route17/scripts.pory"
	case 3, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 27 "data/maps/Route17/scripts.pory"
	case 4, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 29 "data/maps/Route17/scripts.pory"
	case 5, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 31 "data/maps/Route17/scripts.pory"
	case 6, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 33 "data/maps/Route17/scripts.pory"
	case 7, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 35 "data/maps/Route17/scripts.pory"
	case 8, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 39 "data/maps/Route17/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 4
	goto_if_gt Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 43 "data/maps/Route17/scripts.pory"
	compare VAR_ORESTES_STATE, 0
	goto_if_eq Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	return

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 22 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 24 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 26 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 28 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 4
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 30 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 5
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 32 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 6
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 34 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 7
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 36 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 8
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 40 "data/maps/Route17/scripts.pory"
	call Route17_Script_RemoveBridgeBlock
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 44 "data/maps/Route17/scripts.pory"
	call Route17_Script_ShowOrestesBridge
	return


Route17_Script_ShowOrestesBridge::
# 51 "data/maps/Route17/scripts.pory"
	setobjectxyperm LOCALID_ROUTE17_ORESTES, 25, 139
# 52 "data/maps/Route17/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE17_ORESTES, MOVEMENT_TYPE_FACE_DOWN
	return


Route17_Script_RemoveBridgeBlock::
# 57 "data/maps/Route17/scripts.pory"
	setobjectxyperm LOCALID_ROUTE17_BRIDGEBLOCK1, 20, 156
# 58 "data/maps/Route17/scripts.pory"
	setobjectxyperm LOCALID_ROUTE17_BRIDGEBLOCK2, 21, 156
	return


Route17_Script_Transition_LagoDraco::
# 63 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 1
# 64 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 65 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_LagoDracoShore::
# 69 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 2
# 70 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 71 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_UpperRioDraco::
# 75 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 3
# 76 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 77 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_LowerRioDraco::
# 81 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 4
# 82 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 83 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_UpperDracoEast::
# 87 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 5
# 88 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 89 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_LowerDracoEast::
# 93 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 6
# 94 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 95 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_UpperDracoWest::
# 99 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 7
# 100 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 101 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_LowerDracoWest::
# 105 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 8
# 106 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 107 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_BridgeBlock::
# 111 "data/maps/Route17/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 4
	goto_if_gt Route17_Script_BridgeBlock_1
# 114 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_Block1, MSGBOX_NPC
	return

Route17_Script_BridgeBlock_1:
# 112 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_Block2, MSGBOX_NPC
	return


Route17_Script_Orestes::
	return


Route17_Script_OrestesBridgeScene::
# 124 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 125 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route17/scripts.pory"
	setvar VAR_ORESTES_STATE, 1
	return


Route17_Text_Block1::
# 134 "data/maps/Route17/scripts.pory"
	.string "This is the Via Fluvia which leads to\n"
	.string "Lacus Drako and the town Salix but it is\l"
	.string "impossible to use now. The storm has\l"
	.string "destroyed two bridges ahead and it will\l"
	.string "be some time before they're fixed.$"

Route17_Text_Block2::
# 142 "data/maps/Route17/scripts.pory"
	.string "We managed to repair the lower bridge\n"
	.string "but the second one by the dragon's lake\l"
	.string "is still broken. Be careful of the road\l"
	.string "many wild, powerful pokemon attacked\l"
	.string "us while our men were hard at work.\l"
	.string "What's more the way to Salix has been\l"
	.string "shut by sleeping Snorlaxes...Snorlacii?\l"
	.string "We've sent word back to Urbia to send\l"
	.string "more men,and something to wake them,\l"
	.string "but that could be some time from now.\l"
	.string "You know how the bureaucrats in the\l"
	.string "capital forget about us common folk up\l"
	.string "in the hills.$"
