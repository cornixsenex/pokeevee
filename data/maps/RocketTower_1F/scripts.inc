RocketTower_1F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call RocketTower_1F_OnResume
	return


RocketTower_1F_OnResume::
	call RocketTower_1F_EventScript_SetFloor1
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_1F_OnResume_2
RocketTower_1F_OnResume_1:
	end

RocketTower_1F_OnResume_2:
	call RocketTower_1F_EventScript_OpenElevator
	goto RocketTower_1F_OnResume_1


RocketTower_1F_EventScript_SetFloor1::
	setvar VAR_ROCKETTOWER_FLOOR, 1
	return


RocketTower_1F_EventScript_OpenElevator::
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return


RocketTower_1F_EventScript_StairSign::
	lock
	msgbox RocketTower_1F_Text_StairSign
	closemessage
	release
	end


RocketTower_1F_Text_StairSign::
	.string "Rocket Tower - Floor 1\n"
	.string "Recption Area$"
