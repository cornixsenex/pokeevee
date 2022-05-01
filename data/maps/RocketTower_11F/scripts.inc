RocketTower_11F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_11F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_11F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call RocketTower_11F_OnResume
	return


RocketTower_11F_OnResume::
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_11F_OnResume_2
RocketTower_11F_OnResume_1:
	end

RocketTower_11F_OnResume_2:
	call RocketTower_11F_EventScript_OpenElevator
	goto RocketTower_11F_OnResume_1


RocketTower_11F_EventScript_OpenElevator::
	setmetatile 25, 3, METATILE_SilphLab_Elevator_Door_Open, 0
	return

