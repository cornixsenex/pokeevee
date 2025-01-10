Pyramids_MapScripts::
# 2 "data//maps/Pyramids/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data//maps/Pyramids/scripts.pory"
	pyramid_updatelight 200, PYRAMID_LIGHT_SET_RADIUS
# 4 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_F, 1
# 5 "data//maps/Pyramids/scripts.pory"
	compare VAR_INDY_STATE, 3
	goto_if_ne Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data//maps/Pyramids/scripts.pory"
	removeobject 1
# 7 "data//maps/Pyramids/scripts.pory"
	setflag FLAG_PYRAMIDS_HIDEMAXIE
	goto Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 5 "data//maps/Pyramids/scripts.pory"
	goto_if_unset FLAG_PYRAMIDS_HIDEMAXIE, Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

