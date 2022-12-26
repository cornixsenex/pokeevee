Hospital3F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Hospital3F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital3F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Hospital3F_OnResume
	return


Hospital3F_OnResume::
	call Hospital3F_EventScript_SetFloor3
	return


Hospital3F_EventScript_SetFloor3::
	setvar VAR_HOSPITAL_FLOOR, 3
	return

