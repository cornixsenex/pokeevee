MareS7_MapScripts::
# 13 "data/maps/MareS7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS7_F
# 18 "data/maps/MareS7/scripts.pory"
	compare VAR_ULYSSES_STATE, 0
	goto_if_eq MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 21 "data/maps/MareS7/scripts.pory"
	compare VAR_ULYSSES_STATE, 1
	goto_if_eq MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 19 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_SetupUlyssesStand
	goto MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 22 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_SetupUlyssesChase
	return


MareS7_Script_SetupUlyssesStand::
# 29 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_ULYSSES, 8, 28
# 30 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
# 31 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TAUROS, 9, 28
# 32 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TAUROS, MOVEMENT_TYPE_FACE_RIGHT
	return


MareS7_Script_SetupUlyssesChase::
# 37 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_ULYSSES, 8, 28
# 38 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_ULYSSES, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 39 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TAUROS, 9, 28
# 40 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TAUROS, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
	return


MareS7_Script_Transition_IslaIthaca::
# 45 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 1
# 46 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 47 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_MareSubtropicum::
# 51 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 2
# 52 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 53 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaHerbaBona::
# 57 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 3
# 58 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 59 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaArida::
# 63 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 4
# 64 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 65 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaIgnifera::
# 69 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 5
# 70 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 71 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return

