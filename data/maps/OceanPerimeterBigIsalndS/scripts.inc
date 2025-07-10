OceanPerimeterBigIsalndS_MapScripts::
# 10 "data/maps/OceanPerimeterBigIsalndS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OceanPerimeterBigIsalndS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

OceanPerimeterBigIsalndS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/OceanPerimeterBigIsalndS/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_OceanPerimeterBigIslandS_F
	return


OceanPerimeterBigIslandS_Script_Transition_MareOriens::
# 18 "data/maps/OceanPerimeterBigIsalndS/scripts.pory"
	setvar VAR_TEMP_5, 3
# 19 "data/maps/OceanPerimeterBigIsalndS/scripts.pory"
	special TransitionMapMusic
# 20 "data/maps/OceanPerimeterBigIsalndS/scripts.pory"
	special ShowMapNamePopup
	return


OceanPerimeterBigIslandS_Script_Transition_MareSubtropicum::
# 24 "data/maps/OceanPerimeterBigIsalndS/scripts.pory"
	setvar VAR_TEMP_5, 2
# 25 "data/maps/OceanPerimeterBigIsalndS/scripts.pory"
	special TransitionMapMusic
# 26 "data/maps/OceanPerimeterBigIsalndS/scripts.pory"
	special ShowMapNamePopup
	return


OceanPerimeterBigIslandS_Script_Transition_IslaIgnifera::
# 30 "data/maps/OceanPerimeterBigIsalndS/scripts.pory"
	setvar VAR_TEMP_5, 1
# 31 "data/maps/OceanPerimeterBigIsalndS/scripts.pory"
	special TransitionMapMusic
# 32 "data/maps/OceanPerimeterBigIsalndS/scripts.pory"
	special ShowMapNamePopup
	return

