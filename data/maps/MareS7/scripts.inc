MareS7_MapScripts::
# 13 "data/maps/MareS7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS7_F
# 18 "data/maps/MareS7/scripts.pory"
	compare VAR_ULYSSES_STATE, 0
	goto_if_eq MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_CheckUlyssesChase
	return


MareS7_Script_CheckUlyssesChase::
# 26 "data/maps/MareS7/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_ULYSSES
# 27 "data/maps/MareS7/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS7_Script_CheckUlyssesChase_2
MareS7_Script_CheckUlyssesChase_1:
	return

MareS7_Script_CheckUlyssesChase_2:
# 28 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_SetupUlyssesChase
	goto MareS7_Script_CheckUlyssesChase_1


MareS7_Script_SetupUlyssesChase::
# 35 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_ULYSSES, 11, 30
# 36 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_ULYSSES, MOVEMENT_TYPE_WANDER_AROUND
# 38 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TAUROS1, 9, 28
# 39 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TAUROS1, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 41 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TAUROS2, 13, 32
# 42 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TAUROS2, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT
# 44 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_PENELOPE, 11, 34
# 45 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_PENELOPE, MOVEMENT_TYPE_FACE_UP
# 47 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TELEMACHUS, 10, 34
# 48 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TELEMACHUS, MOVEMENT_TYPE_FACE_DOWN
	return


MareS7_Script_Transition_IslaIthaca::
# 53 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 1
# 54 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 55 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_MareSubtropicum::
# 59 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 2
# 60 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 61 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaHerbaBona::
# 65 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 3
# 66 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 67 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaArida::
# 71 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 4
# 72 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 73 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaIgnifera::
# 77 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 5
# 78 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 79 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return

