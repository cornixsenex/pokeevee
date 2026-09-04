RocketTower_11F_MapScripts::
# 3 "data/maps/RocketTower_11F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_11F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_11F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/RocketTower_11F/scripts.pory"
	call RocketTower_11F_OnResume
	return


RocketTower_11F_OnResume::
# 10 "data/maps/RocketTower_11F/scripts.pory"
	call RocketTower_11F_EventScript_SetFloor11
# 11 "data/maps/RocketTower_11F/scripts.pory"
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_11F_OnResume_2
RocketTower_11F_OnResume_1:
	end

RocketTower_11F_OnResume_2:
# 12 "data/maps/RocketTower_11F/scripts.pory"
	call RocketTower_11F_EventScript_OpenElevator
	goto RocketTower_11F_OnResume_1


RocketTower_11F_EventScript_SetFloor11::
# 18 "data/maps/RocketTower_11F/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 11
	return


RocketTower_11F_EventScript_OpenElevator::
# 23 "data/maps/RocketTower_11F/scripts.pory"
	setmetatile 25, 3, METATILE_SilphLab_Elevator_Door_Open, 0
	return

