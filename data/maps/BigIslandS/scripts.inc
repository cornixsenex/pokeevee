BigIslandS_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME:
	call BigIslandS_OnResume
	return


BigIslandS_OnResume::
	setstepcallback STEP_CB_ASH
	end

