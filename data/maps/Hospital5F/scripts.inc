Hospital5F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Hospital5F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital5F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Hospital5F_OnResume
	return


Hospital5F_OnResume::
	call Hospital5F_EventScript_SetFloor5
	return


Hospital5F_EventScript_SetFloor5::
	setvar VAR_HOSPITAL_FLOOR, 5
	return

