TurrisSaltus2F_MapScripts::
# 3 "data/maps/TurrisSaltus2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TurrisSaltus2F_MapScripts_MAP_SCRIPT_ON_RESUME
# 7 "data/maps/TurrisSaltus2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TurrisSaltus2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TurrisSaltus2F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/TurrisSaltus2F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
	return

TurrisSaltus2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/TurrisSaltus2F/scripts.pory"
	map_script_2 VAR_FALSEFLOOR_WAIT, 1, Common_Script_FalseFloorContinue
	.2byte 0

