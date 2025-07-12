OceanPerimeter2_MapScripts::
# 8 "data/maps/OceanPerimeter2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OceanPerimeter2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

OceanPerimeter2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/OceanPerimeter2/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS9_F
	return


OceanPerimeter2_Script_Transition_MareOccidens::
# 17 "data/maps/OceanPerimeter2/scripts.pory"
	setvar VAR_TEMP_5, 2
# 18 "data/maps/OceanPerimeter2/scripts.pory"
	special TransitionMapMusic
# 19 "data/maps/OceanPerimeter2/scripts.pory"
	special ShowMapNamePopup
	return


OceanPerimeter2_Script_Transition_MareSubtropicum::
# 23 "data/maps/OceanPerimeter2/scripts.pory"
	setvar VAR_TEMP_5, 1
# 24 "data/maps/OceanPerimeter2/scripts.pory"
	special TransitionMapMusic
# 25 "data/maps/OceanPerimeter2/scripts.pory"
	special ShowMapNamePopup
	return

