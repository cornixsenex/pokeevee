Hospital7F_MapScripts::
# 3 "data/maps/Hospital7F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Hospital7F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital7F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/Hospital7F/scripts.pory"
	call Hospital7F_OnResume
	return


Hospital7F_OnResume::
# 13 "data/maps/Hospital7F/scripts.pory"
	call Hospital7F_EventScript_SetFloor7
	return


Hospital7F_EventScript_SetFloor7::
# 17 "data/maps/Hospital7F/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 7
	return

