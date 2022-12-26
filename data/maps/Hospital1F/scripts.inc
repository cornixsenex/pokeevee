Hospital1F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Hospital1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital1F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Hospital1F_OnResume
	return


Hospital1F_OnResume::
	call Hospital1F_EventScript_SetFloor1
	return


Hospital1F_EventScript_SetFloor1::
	setvar VAR_HOSPITAL_FLOOR, 1
	return


Hospiatl1F_EventScript_CheckPC::
	lockall
	setvar VAR_0x8004, PC_LOCATION_HOSPITAL
	special DoPCTurnOnEffect
	playse SE_PC_ON
	goto EventScript_PCMainMenu
	waitstate
	releaseall
	end

