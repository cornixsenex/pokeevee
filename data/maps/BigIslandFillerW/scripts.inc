BigIslandFillerW_MapScripts::
# 9 "data/maps/BigIslandFillerW/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BigIslandFillerW_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BigIslandFillerW_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/BigIslandFillerW/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS2_F
	return


BigIslandFillerW_Script_Transition_IslaIgnifera::
# 16 "data/maps/BigIslandFillerW/scripts.pory"
	setvar VAR_TEMP_5, 1
# 17 "data/maps/BigIslandFillerW/scripts.pory"
	special TransitionMapMusic
# 18 "data/maps/BigIslandFillerW/scripts.pory"
	special ShowMapNamePopup
	return


BigIslandFillerW_Script_Transition_MareSubtropicum::
# 22 "data/maps/BigIslandFillerW/scripts.pory"
	setvar VAR_TEMP_5, 2
# 23 "data/maps/BigIslandFillerW/scripts.pory"
	special TransitionMapMusic
# 24 "data/maps/BigIslandFillerW/scripts.pory"
	special ShowMapNamePopup
	return

