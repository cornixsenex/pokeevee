RocketTower_12F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_12F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_12F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call RocketTower_12F_OnResume
	return


RocketTower_12F_OnResume::
	compare VAR_ROCKETTOWER_STATE, 1
	goto_if_gt RocketTower_12F_OnResume_2
RocketTower_12F_OnResume_1:
	end

RocketTower_12F_OnResume_2:
	call RocketTower_12F_EventScript_OpenElevator
	goto RocketTower_12F_OnResume_1


RocketTower_12F_EventScript_OpenElevator::
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return


RocketTower_12F_EventScript_CardKey::
	lock
	setflag FLAG_RECEIVED_CARD_KEY
	msgbox RocketTower_12F_Text_CardKey
	closemessage
	checkitemspace ITEM_CARD_KEY, 1
	compare VAR_RESULT, 1
	goto_if_eq RocketTower_12F_EventScript_CardKey_2
RocketTower_12F_EventScript_CardKey_1:
	release
	end

RocketTower_12F_EventScript_CardKey_2:
	removeobject 1
	giveitem ITEM_CARD_KEY
	goto RocketTower_12F_EventScript_CardKey_1


RocketTower_12F_Text_CardKey::
	.string "A card key with the red rocket logo$"
