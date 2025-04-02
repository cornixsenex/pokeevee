RocketTower_4F_MapScripts::
# 3 "data//maps/RocketTower_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_4F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_4F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data//maps/RocketTower_4F/scripts.pory"
	call RocketTower_4F_OnResume
	return


RocketTower_4F_OnResume::
# 10 "data//maps/RocketTower_4F/scripts.pory"
	call RocketTower_4F_EventScript_SetFloor4
# 11 "data//maps/RocketTower_4F/scripts.pory"
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_4F_OnResume_2
RocketTower_4F_OnResume_1:
	end

RocketTower_4F_OnResume_2:
# 12 "data//maps/RocketTower_4F/scripts.pory"
	call RocketTower_4F_EventScript_OpenElevator
	goto RocketTower_4F_OnResume_1


RocketTower_4F_EventScript_SetFloor4::
# 18 "data//maps/RocketTower_4F/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 4
	return


RocketTower_4F_EventScript_OpenElevator::
# 23 "data//maps/RocketTower_4F/scripts.pory"
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return

