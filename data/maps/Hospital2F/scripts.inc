Hospital2F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Hospital2F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital2F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Hospital2F_OnResume
	return


Hospital2F_OnResume::
	call Hospital2F_EventScript_SetFloor2
	return


Hospital2F_EventScript_SetFloor2::
	setvar VAR_HOSPITAL_FLOOR, 2
	return

