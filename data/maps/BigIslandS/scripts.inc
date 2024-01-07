BigIslandS_MapScripts::
# 3 "data/maps/BigIslandS/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_OnResume
	return


BigIslandS_OnResume::
# 11 "data/maps/BigIslandS/scripts.pory"
	setstepcallback STEP_CB_ASH
	end

