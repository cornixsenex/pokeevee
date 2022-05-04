RocketTower_8F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_8F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_8F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call RocketTower_8F_OnResume
	return


RocketTower_8F_OnResume::
	call RocketTower_8F_EventScript_SetFloor8
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_8F_OnResume_2
RocketTower_8F_OnResume_1:
	end

RocketTower_8F_OnResume_2:
	call RocketTower_8F_EventScript_OpenElevator
	goto RocketTower_8F_OnResume_1


RocketTower_8F_EventScript_SetFloor8::
	setvar VAR_ROCKETTOWER_FLOOR, 8
	return


RocketTower_8F_EventScript_OpenElevator::
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return

