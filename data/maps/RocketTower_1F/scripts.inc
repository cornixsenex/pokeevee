RocketTower_1F_MapScripts::
# 3 "data//maps/RocketTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data//maps/RocketTower_1F/scripts.pory"
	call RocketTower_1F_OnResume
	return


RocketTower_1F_OnResume::
# 10 "data//maps/RocketTower_1F/scripts.pory"
	call RocketTower_1F_EventScript_SetFloor1
# 11 "data//maps/RocketTower_1F/scripts.pory"
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_1F_OnResume_2
RocketTower_1F_OnResume_1:
	end

RocketTower_1F_OnResume_2:
# 12 "data//maps/RocketTower_1F/scripts.pory"
	call RocketTower_1F_EventScript_OpenElevator
	goto RocketTower_1F_OnResume_1


RocketTower_1F_EventScript_SetFloor1::
# 18 "data//maps/RocketTower_1F/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 1
	return


RocketTower_1F_EventScript_OpenElevator::
# 23 "data//maps/RocketTower_1F/scripts.pory"
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return


RocketTower_1F_EventScript_StairSign::
# 28 "data//maps/RocketTower_1F/scripts.pory"
	lock
# 29 "data//maps/RocketTower_1F/scripts.pory"
	msgbox RocketTower_1F_Text_StairSign
# 30 "data//maps/RocketTower_1F/scripts.pory"
	closemessage
# 31 "data//maps/RocketTower_1F/scripts.pory"
	release
	end


RocketTower_1F_Text_StairSign::
# 39 "data//maps/RocketTower_1F/scripts.pory"
	.string "Rocket Tower - Floor 1\n"
	.string "Recption Area$"
