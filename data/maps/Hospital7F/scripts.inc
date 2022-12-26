Hospital7F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Hospital7F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital7F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Hospital7F_OnResume
	return


Hospital7F_OnResume::
	call Hospital7F_EventScript_SetFloor7
	return


Hospital7F_EventScript_SetFloor7::
	setvar VAR_HOSPITAL_FLOOR, 7
	return

