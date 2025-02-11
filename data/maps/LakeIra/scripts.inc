LakeIra_MapScripts::
# 11 "data/maps/LakeIra/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LakeIra_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LakeIra_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/LakeIra/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_LakeIra
# 13 "data/maps/LakeIra/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/LakeIra/scripts.pory"
	case 1, LakeIra_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/LakeIra/scripts.pory"
	case 2, LakeIra_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 18 "data/maps/LakeIra/scripts.pory"
	case 3, LakeIra_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

LakeIra_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/LakeIra/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

LakeIra_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data/maps/LakeIra/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

LakeIra_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data/maps/LakeIra/scripts.pory"
	setvar VAR_TEMP_5, 3
	return


LakeIra_Script_Transition_LagoDraco::
# 26 "data/maps/LakeIra/scripts.pory"
	setvar VAR_TEMP_5, 1
# 27 "data/maps/LakeIra/scripts.pory"
	special ShowMapNamePopup
	return


LakeIra_Script_Transition_LagoDracoShore::
# 31 "data/maps/LakeIra/scripts.pory"
	setvar VAR_TEMP_5, 2
# 32 "data/maps/LakeIra/scripts.pory"
	special ShowMapNamePopup
	return

