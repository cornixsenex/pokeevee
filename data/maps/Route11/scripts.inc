Route11_MapScripts::
# 10 "data/maps/Route11/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route11_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route11_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/Route11/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_Route11_F
	return


Route11_Script_Transition_PortusUrbis::
# 19 "data/maps/Route11/scripts.pory"
	setvar VAR_TEMP_5, 1
# 20 "data/maps/Route11/scripts.pory"
	special TransitionMapMusic
# 21 "data/maps/Route11/scripts.pory"
	special ShowMapNamePopup
	return


Route11_Script_Transition_ActaTranquilla::
# 25 "data/maps/Route11/scripts.pory"
	setvar VAR_TEMP_5, 2
# 26 "data/maps/Route11/scripts.pory"
	special TransitionMapMusic
# 27 "data/maps/Route11/scripts.pory"
	special ShowMapNamePopup
	return


Route11_Script_Transition_MareTranquillum::
# 31 "data/maps/Route11/scripts.pory"
	setvar VAR_TEMP_5, 3
# 32 "data/maps/Route11/scripts.pory"
	special TransitionMapMusic
# 33 "data/maps/Route11/scripts.pory"
	special ShowMapNamePopup
	return

