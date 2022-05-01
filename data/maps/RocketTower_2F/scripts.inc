RocketTower_2F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_2F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_2F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call RocketTower_2F_OnResume
	return


RocketTower_2F_OnResume::
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_2F_OnResume_2
RocketTower_2F_OnResume_1:
	end

RocketTower_2F_OnResume_2:
	call RocketTower_2F_EventScript_OpenElevator
	goto RocketTower_2F_OnResume_1


RocketTower_2F_EventScript_OpenElevator::
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return


RocketTower_2F_EventScript_StairSign::
	lock
	msgbox RocketTower_2F_Text_StairSign
	closemessage
	release
	end


RocketTower_2F_Text_StairSign::
	.string "Rocket Tower - Floor 2\n"
	.string "Cafe$"
