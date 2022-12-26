Hospital4F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Hospital4F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital4F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Hospital4F_OnResume
	return


Hospital4F_OnResume::
	call Hospital4F_EventScript_SetFloor4
	return


Hospital4F_EventScript_SetFloor4::
	setvar VAR_HOSPITAL_FLOOR, 4
	return

