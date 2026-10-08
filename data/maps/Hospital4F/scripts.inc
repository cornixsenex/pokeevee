Hospital4F_MapScripts::
# 3 "data/maps/Hospital4F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Hospital4F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital4F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/Hospital4F/scripts.pory"
	call Hospital4F_OnResume
	return


Hospital4F_OnResume::
# 13 "data/maps/Hospital4F/scripts.pory"
	call Hospital4F_EventScript_SetFloor4
	return


Hospital4F_EventScript_SetFloor4::
# 17 "data/maps/Hospital4F/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 4
	return

