RocketTower_10F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_10F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_10F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call RocketTower_10F_OnResume
	return


RocketTower_10F_OnResume::
	call RocketTower_10F_EventScript_SetFloor10
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_10F_OnResume_2
RocketTower_10F_OnResume_1:
	end

RocketTower_10F_OnResume_2:
	call RocketTower_10F_EventScript_OpenElevator
	goto RocketTower_10F_OnResume_1


RocketTower_10F_EventScript_SetFloor10::
	setvar VAR_ROCKETTOWER_FLOOR, 10
	return


RocketTower_10F_EventScript_OpenElevator::
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return

