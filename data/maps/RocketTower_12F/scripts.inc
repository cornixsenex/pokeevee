RocketTower_12F_MapScripts::
# 3 "data//maps/RocketTower_12F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_12F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_12F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data//maps/RocketTower_12F/scripts.pory"
	call RocketTower_12F_OnResume
	return


RocketTower_12F_OnResume::
# 10 "data//maps/RocketTower_12F/scripts.pory"
	call RocketTower_12F_EventScript_SetFloor12
# 11 "data//maps/RocketTower_12F/scripts.pory"
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_12F_OnResume_2
RocketTower_12F_OnResume_1:
	end

RocketTower_12F_OnResume_2:
# 12 "data//maps/RocketTower_12F/scripts.pory"
	call RocketTower_12F_EventScript_OpenElevator
	goto RocketTower_12F_OnResume_1


RocketTower_12F_EventScript_SetFloor12::
# 18 "data//maps/RocketTower_12F/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 12
	return


RocketTower_12F_EventScript_OpenElevator::
# 23 "data//maps/RocketTower_12F/scripts.pory"
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return


RocketTower_12F_EventScript_CardKey::
# 28 "data//maps/RocketTower_12F/scripts.pory"
	lock
# 29 "data//maps/RocketTower_12F/scripts.pory"
	setflag FLAG_RECEIVED_CARD_KEY
# 30 "data//maps/RocketTower_12F/scripts.pory"
	msgbox RocketTower_12F_Text_CardKey
# 31 "data//maps/RocketTower_12F/scripts.pory"
	closemessage
# 32 "data//maps/RocketTower_12F/scripts.pory"
	checkitemspace ITEM_CARD_KEY, 1
# 33 "data//maps/RocketTower_12F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RocketTower_12F_EventScript_CardKey_2
RocketTower_12F_EventScript_CardKey_1:
# 37 "data//maps/RocketTower_12F/scripts.pory"
	release
	end

RocketTower_12F_EventScript_CardKey_2:
# 34 "data//maps/RocketTower_12F/scripts.pory"
	removeobject 1
# 35 "data//maps/RocketTower_12F/scripts.pory"
	giveitem ITEM_CARD_KEY
	goto RocketTower_12F_EventScript_CardKey_1


RocketTower_12F_Text_CardKey::
# 41 "data//maps/RocketTower_12F/scripts.pory"
	.string "A card key with the red rocket logo$"
