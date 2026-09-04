RocketTower_10F_MapScripts::
# 3 "data/maps/RocketTower_10F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_10F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_10F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/RocketTower_10F/scripts.pory"
	call RocketTower_10F_OnResume
	return


RocketTower_10F_OnResume::
# 10 "data/maps/RocketTower_10F/scripts.pory"
	call RocketTower_10F_EventScript_SetFloor10
# 11 "data/maps/RocketTower_10F/scripts.pory"
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_10F_OnResume_2
RocketTower_10F_OnResume_1:
	end

RocketTower_10F_OnResume_2:
# 12 "data/maps/RocketTower_10F/scripts.pory"
	call RocketTower_10F_EventScript_OpenElevator
	goto RocketTower_10F_OnResume_1


RocketTower_10F_EventScript_SetFloor10::
# 18 "data/maps/RocketTower_10F/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 10
	return


RocketTower_10F_EventScript_OpenElevator::
# 23 "data/maps/RocketTower_10F/scripts.pory"
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return

