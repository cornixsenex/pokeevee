RocketTower_5F_MapScripts::
# 3 "data//maps/RocketTower_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_5F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_5F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data//maps/RocketTower_5F/scripts.pory"
	call RocketTower_5F_OnResume
	return


RocketTower_5F_OnResume::
# 10 "data//maps/RocketTower_5F/scripts.pory"
	call RocketTower_5F_EventScript_SetFloor5
# 11 "data//maps/RocketTower_5F/scripts.pory"
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_5F_OnResume_2
RocketTower_5F_OnResume_1:
	end

RocketTower_5F_OnResume_2:
# 12 "data//maps/RocketTower_5F/scripts.pory"
	call RocketTower_5F_EventScript_OpenElevator
	goto RocketTower_5F_OnResume_1


RocketTower_5F_EventScript_SetFloor5::
# 18 "data//maps/RocketTower_5F/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 5
	return


RocketTower_5F_EventScript_OpenElevator::
# 23 "data//maps/RocketTower_5F/scripts.pory"
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return

