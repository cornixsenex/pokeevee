PyramidInside2F_MapScripts::
# 4 "data/maps/PyramidInside2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PyramidInside2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/PyramidInside2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PyramidInside2F_MapScripts_MAP_SCRIPT_ON_RESUME
# 12 "data/maps/PyramidInside2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PyramidInside2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PyramidInside2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/PyramidInside2F/scripts.pory"
	call CaveHole_FixCrackedGround
	return

PyramidInside2F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 9 "data/maps/PyramidInside2F/scripts.pory"
	call PyramidInside2F_Script_SetHoleWarp
	return

PyramidInside2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/PyramidInside2F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, EventScript_FallDownHole
	.2byte 0


PyramidInside2F_Script_SetHoleWarp::
# 21 "data/maps/PyramidInside2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 22 "data/maps/PyramidInside2F/scripts.pory"
	setholewarp MAP_PYRAMID_INSIDE1F
	end

