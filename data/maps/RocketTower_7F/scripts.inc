RocketTower_7F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_7F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_7F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call RocketTower_7F_OnResume
	return


RocketTower_7F_OnResume::
	call RocketTower_7F_EventScript_SetFloor7
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_7F_OnResume_2
RocketTower_7F_OnResume_1:
	end

RocketTower_7F_OnResume_2:
	call RocketTower_7F_EventScript_OpenElevator
	goto RocketTower_7F_OnResume_1


RocketTower_7F_EventScript_SetFloor7::
	setvar VAR_ROCKETTOWER_FLOOR, 7
	return


RocketTower_7F_EventScript_OpenElevator::
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return

