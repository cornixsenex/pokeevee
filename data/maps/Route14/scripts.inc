Route14_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route14_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route14_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Route14_OnResume
	return


Route14_OnResume::
	setstepcallback STEP_CB_ASH
	end

