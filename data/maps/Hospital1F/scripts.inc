Hospital1F_MapScripts::
# 3 "data/maps/Hospital1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Hospital1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/Hospital1F/scripts.pory"
	call Hospital1F_OnResume
	return


Hospital1F_OnResume::
# 13 "data/maps/Hospital1F/scripts.pory"
	call Hospital1F_EventScript_SetFloor1
	return


Hospital1F_EventScript_SetFloor1::
# 17 "data/maps/Hospital1F/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 1
	return


Hospiatl1F_EventScript_CheckPC::
# 23 "data/maps/Hospital1F/scripts.pory"
	lockall
# 24 "data/maps/Hospital1F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_HOSPITAL
# 25 "data/maps/Hospital1F/scripts.pory"
	special DoPCTurnOnEffect
# 26 "data/maps/Hospital1F/scripts.pory"
	playse SE_PC_ON
# 27 "data/maps/Hospital1F/scripts.pory"
	goto EventScript_PCMainMenu
# 28 "data/maps/Hospital1F/scripts.pory"
	waitstate
# 29 "data/maps/Hospital1F/scripts.pory"
	releaseall
	end

