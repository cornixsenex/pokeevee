Pyramids_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	pyramid_updatelight 200, PYRAMID_LIGHT_SET_RADIUS
	setvar VAR_TEMP_F, 1
	end

