RocketTower_8F_MapScripts::
# 3 "data/maps/RocketTower_8F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_8F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_8F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/RocketTower_8F/scripts.pory"
	call RocketTower_8F_OnResume
	return


RocketTower_8F_OnResume::
# 10 "data/maps/RocketTower_8F/scripts.pory"
	call RocketTower_8F_EventScript_SetFloor8
# 11 "data/maps/RocketTower_8F/scripts.pory"
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_8F_OnResume_2
RocketTower_8F_OnResume_1:
	end

RocketTower_8F_OnResume_2:
# 12 "data/maps/RocketTower_8F/scripts.pory"
	call RocketTower_8F_EventScript_OpenElevator
	goto RocketTower_8F_OnResume_1


RocketTower_8F_EventScript_SetFloor8::
# 18 "data/maps/RocketTower_8F/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 8
	return


RocketTower_8F_EventScript_OpenElevator::
# 23 "data/maps/RocketTower_8F/scripts.pory"
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return

