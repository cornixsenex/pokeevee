Hospital6F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Hospital6F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital6F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Hospital6F_OnResume
	return


Hospital6F_OnResume::
	call Hospital6F_EventScript_SetFloor6
	return


Hospital6F_EventScript_SetFloor6::
	setvar VAR_HOSPITAL_FLOOR, 6
	return
