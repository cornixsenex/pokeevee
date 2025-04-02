RocketTower_2F_MapScripts::
# 3 "data//maps/RocketTower_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_2F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_2F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data//maps/RocketTower_2F/scripts.pory"
	call RocketTower_2F_OnResume
	return


RocketTower_2F_OnResume::
# 10 "data//maps/RocketTower_2F/scripts.pory"
	call RocketTower_2F_EventScript_SetFloor2
# 11 "data//maps/RocketTower_2F/scripts.pory"
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_2F_OnResume_2
RocketTower_2F_OnResume_1:
	end

RocketTower_2F_OnResume_2:
# 12 "data//maps/RocketTower_2F/scripts.pory"
	call RocketTower_2F_EventScript_OpenElevator
	goto RocketTower_2F_OnResume_1


RocketTower_2F_EventScript_SetFloor2::
# 18 "data//maps/RocketTower_2F/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 2
	return


RocketTower_2F_EventScript_OpenElevator::
# 23 "data//maps/RocketTower_2F/scripts.pory"
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return


RocketTower_2F_EventScript_StairSign::
# 28 "data//maps/RocketTower_2F/scripts.pory"
	lock
# 29 "data//maps/RocketTower_2F/scripts.pory"
	msgbox RocketTower_2F_Text_StairSign
# 30 "data//maps/RocketTower_2F/scripts.pory"
	closemessage
# 31 "data//maps/RocketTower_2F/scripts.pory"
	release
	end


RocketTower_2F_Text_StairSign::
# 35 "data//maps/RocketTower_2F/scripts.pory"
	.string "Rocket Tower - Floor 2\n"
	.string "Cafe$"
