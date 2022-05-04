RocketTower_4F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_4F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_4F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call RocketTower_4F_OnResume
	return


RocketTower_4F_OnResume::
	call RocketTower_4F_EventScript_SetFloor4
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_4F_OnResume_2
RocketTower_4F_OnResume_1:
	end

RocketTower_4F_OnResume_2:
	call RocketTower_4F_EventScript_OpenElevator
	goto RocketTower_4F_OnResume_1


RocketTower_4F_EventScript_SetFloor4::
	setvar VAR_ROCKETTOWER_FLOOR, 4
	return


RocketTower_4F_EventScript_OpenElevator::
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return

