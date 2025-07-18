TurrisSaltus5F_MapScripts::
# 3 "data/maps/TurrisSaltus5F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TurrisSaltus5F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

TurrisSaltus5F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/TurrisSaltus5F/scripts.pory"
	setstepcallback STEP_CB_FALSE_FLOOR
	return

