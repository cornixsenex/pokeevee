RocketTower_Elevator_MapScripts::
# 2 "data/maps/RocketTower_Elevator/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RocketTower_Elevator_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

RocketTower_Elevator_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_OnLoad
	return


RocketTower_Elevator_OnLoad::
# 8 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp
	end


RocketTower_Elevator_EventScript_SetFloorWarp::
# 13 "data/maps/RocketTower_Elevator/scripts.pory"
	switch VAR_ROCKETTOWER_FLOOR
# 14 "data/maps/RocketTower_Elevator/scripts.pory"
	case 0, RocketTower_Elevator_EventScript_SetFloorWarp_3
# 15 "data/maps/RocketTower_Elevator/scripts.pory"
	case 1, RocketTower_Elevator_EventScript_SetFloorWarp_3
# 17 "data/maps/RocketTower_Elevator/scripts.pory"
	case 2, RocketTower_Elevator_EventScript_SetFloorWarp_4
# 19 "data/maps/RocketTower_Elevator/scripts.pory"
	case 3, RocketTower_Elevator_EventScript_SetFloorWarp_5
# 21 "data/maps/RocketTower_Elevator/scripts.pory"
	case 4, RocketTower_Elevator_EventScript_SetFloorWarp_6
# 23 "data/maps/RocketTower_Elevator/scripts.pory"
	case 5, RocketTower_Elevator_EventScript_SetFloorWarp_7
# 25 "data/maps/RocketTower_Elevator/scripts.pory"
	case 6, RocketTower_Elevator_EventScript_SetFloorWarp_8
# 27 "data/maps/RocketTower_Elevator/scripts.pory"
	case 7, RocketTower_Elevator_EventScript_SetFloorWarp_9
# 29 "data/maps/RocketTower_Elevator/scripts.pory"
	case 8, RocketTower_Elevator_EventScript_SetFloorWarp_10
# 31 "data/maps/RocketTower_Elevator/scripts.pory"
	case 9, RocketTower_Elevator_EventScript_SetFloorWarp_11
# 33 "data/maps/RocketTower_Elevator/scripts.pory"
	case 10, RocketTower_Elevator_EventScript_SetFloorWarp_12
# 35 "data/maps/RocketTower_Elevator/scripts.pory"
	case 11, RocketTower_Elevator_EventScript_SetFloorWarp_13
# 37 "data/maps/RocketTower_Elevator/scripts.pory"
	case 12, RocketTower_Elevator_EventScript_SetFloorWarp_14
# 39 "data/maps/RocketTower_Elevator/scripts.pory"
	case 13, RocketTower_Elevator_EventScript_SetFloorWarp_15
# 41 "data/maps/RocketTower_Elevator/scripts.pory"
	case 14, RocketTower_Elevator_EventScript_SetFloorWarp_16
RocketTower_Elevator_EventScript_SetFloorWarp_1:
	return

RocketTower_Elevator_EventScript_SetFloorWarp_3:
# 16 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp1
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1

RocketTower_Elevator_EventScript_SetFloorWarp_4:
# 18 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp2
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1

RocketTower_Elevator_EventScript_SetFloorWarp_5:
# 20 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp3
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1

RocketTower_Elevator_EventScript_SetFloorWarp_6:
# 22 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp4
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1

RocketTower_Elevator_EventScript_SetFloorWarp_7:
# 24 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp5
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1

RocketTower_Elevator_EventScript_SetFloorWarp_8:
# 26 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp6
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1

RocketTower_Elevator_EventScript_SetFloorWarp_9:
# 28 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp7
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1

RocketTower_Elevator_EventScript_SetFloorWarp_10:
# 30 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp8
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1

RocketTower_Elevator_EventScript_SetFloorWarp_11:
# 32 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp9
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1

RocketTower_Elevator_EventScript_SetFloorWarp_12:
# 34 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp10
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1

RocketTower_Elevator_EventScript_SetFloorWarp_13:
# 36 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp11
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1

RocketTower_Elevator_EventScript_SetFloorWarp_14:
# 38 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp12
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1

RocketTower_Elevator_EventScript_SetFloorWarp_15:
# 40 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp13
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1

RocketTower_Elevator_EventScript_SetFloorWarp_16:
# 42 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarpBF1
	goto RocketTower_Elevator_EventScript_SetFloorWarp_1


RocketTower_Elevator_EventScript_SetFloorWarpBF1::
# 48 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_BF1, 5, 1
	return


RocketTower_Elevator_EventScript_SetFloorWarp1::
# 53 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_1F, 25, 3
	return


RocketTower_Elevator_EventScript_SetFloorWarp2::
# 58 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_2F, 25, 3
	return


RocketTower_Elevator_EventScript_SetFloorWarp3::
# 63 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_3F, 25, 3
	return


RocketTower_Elevator_EventScript_SetFloorWarp4::
# 68 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_4F, 25, 3
	return


RocketTower_Elevator_EventScript_SetFloorWarp5::
# 73 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_5F, 25, 3
	return


RocketTower_Elevator_EventScript_SetFloorWarp6::
# 78 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_6F, 25, 3
	return


RocketTower_Elevator_EventScript_SetFloorWarp7::
# 83 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_7F, 25, 3
	return


RocketTower_Elevator_EventScript_SetFloorWarp8::
# 88 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_8F, 25, 3
	return


RocketTower_Elevator_EventScript_SetFloorWarp9::
# 93 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_9F, 25, 3
	return


RocketTower_Elevator_EventScript_SetFloorWarp10::
# 98 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_10F, 25, 3
	return


RocketTower_Elevator_EventScript_SetFloorWarp11::
# 103 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_11F, 25, 3
	return


RocketTower_Elevator_EventScript_SetFloorWarp12::
# 108 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_12F, 25, 3
	return


RocketTower_Elevator_EventScript_SetFloorWarp13::
# 113 "data/maps/RocketTower_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_TOWER_13F, 25, 3
	return


RocketTower_Elevlator_EventScript_ChooseFloor::
# 118 "data/maps/RocketTower_Elevator/scripts.pory"
	lock
# 119 "data/maps/RocketTower_Elevator/scripts.pory"
	msgbox RocketTower_Elevator_Text_ChooseFloor
# 120 "data/maps/RocketTower_Elevator/scripts.pory"
	closemessage
# 121 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_ROCKETTOWER_ELEVATOR_FLOOR
# 122 "data/maps/RocketTower_Elevator/scripts.pory"
	special ShowScrollableMultichoice
# 123 "data/maps/RocketTower_Elevator/scripts.pory"
	waitstate
# 125 "data/maps/RocketTower_Elevator/scripts.pory"
	switch VAR_RESULT
# 126 "data/maps/RocketTower_Elevator/scripts.pory"
	case 0, RocketTower_Elevlator_EventScript_ChooseFloor_3
# 128 "data/maps/RocketTower_Elevator/scripts.pory"
	case 1, RocketTower_Elevlator_EventScript_ChooseFloor_4
# 130 "data/maps/RocketTower_Elevator/scripts.pory"
	case 2, RocketTower_Elevlator_EventScript_ChooseFloor_5
# 132 "data/maps/RocketTower_Elevator/scripts.pory"
	case 3, RocketTower_Elevlator_EventScript_ChooseFloor_6
# 134 "data/maps/RocketTower_Elevator/scripts.pory"
	case 4, RocketTower_Elevlator_EventScript_ChooseFloor_7
# 136 "data/maps/RocketTower_Elevator/scripts.pory"
	case 5, RocketTower_Elevlator_EventScript_ChooseFloor_8
# 138 "data/maps/RocketTower_Elevator/scripts.pory"
	case 6, RocketTower_Elevlator_EventScript_ChooseFloor_9
# 140 "data/maps/RocketTower_Elevator/scripts.pory"
	case 7, RocketTower_Elevlator_EventScript_ChooseFloor_10
# 142 "data/maps/RocketTower_Elevator/scripts.pory"
	case 8, RocketTower_Elevlator_EventScript_ChooseFloor_11
# 144 "data/maps/RocketTower_Elevator/scripts.pory"
	case 9, RocketTower_Elevlator_EventScript_ChooseFloor_12
# 146 "data/maps/RocketTower_Elevator/scripts.pory"
	case 10, RocketTower_Elevlator_EventScript_ChooseFloor_13
# 148 "data/maps/RocketTower_Elevator/scripts.pory"
	case 11, RocketTower_Elevlator_EventScript_ChooseFloor_14
# 150 "data/maps/RocketTower_Elevator/scripts.pory"
	case 12, RocketTower_Elevlator_EventScript_ChooseFloor_15
# 152 "data/maps/RocketTower_Elevator/scripts.pory"
	case 13, RocketTower_Elevlator_EventScript_ChooseFloor_16
RocketTower_Elevlator_EventScript_ChooseFloor_1:
# 155 "data/maps/RocketTower_Elevator/scripts.pory"
	call RocketTower_Elevator_EventScript_SetFloorWarp
# 156 "data/maps/RocketTower_Elevator/scripts.pory"
	release
	end

RocketTower_Elevlator_EventScript_ChooseFloor_3:
# 127 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 14
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1

RocketTower_Elevlator_EventScript_ChooseFloor_4:
# 129 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 1
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1

RocketTower_Elevlator_EventScript_ChooseFloor_5:
# 131 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 2
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1

RocketTower_Elevlator_EventScript_ChooseFloor_6:
# 133 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 3
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1

RocketTower_Elevlator_EventScript_ChooseFloor_7:
# 135 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 4
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1

RocketTower_Elevlator_EventScript_ChooseFloor_8:
# 137 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 5
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1

RocketTower_Elevlator_EventScript_ChooseFloor_9:
# 139 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 6
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1

RocketTower_Elevlator_EventScript_ChooseFloor_10:
# 141 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 7
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1

RocketTower_Elevlator_EventScript_ChooseFloor_11:
# 143 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 8
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1

RocketTower_Elevlator_EventScript_ChooseFloor_12:
# 145 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 9
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1

RocketTower_Elevlator_EventScript_ChooseFloor_13:
# 147 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 10
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1

RocketTower_Elevlator_EventScript_ChooseFloor_14:
# 149 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 11
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1

RocketTower_Elevlator_EventScript_ChooseFloor_15:
# 151 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 12
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1

RocketTower_Elevlator_EventScript_ChooseFloor_16:
# 153 "data/maps/RocketTower_Elevator/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 13
	goto RocketTower_Elevlator_EventScript_ChooseFloor_1


RocketTower_Elevator_Text_ChooseFloor::
# 160 "data/maps/RocketTower_Elevator/scripts.pory"
	.string "Which floor would you like to go to?$"
