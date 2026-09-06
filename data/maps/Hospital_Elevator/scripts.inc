Hospital_Elevator_MapScripts::
# 2 "data/maps/Hospital_Elevator/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Hospital_Elevator_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Hospital_Elevator_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Hospital_Elevator/scripts.pory"
	call Hospital_Elevator_OnLoad
	return


Hospital_Elevator_OnLoad::
# 9 "data/maps/Hospital_Elevator/scripts.pory"
	call Hospital_Elevator_EventScript_SetFloorWarp
	end


Hospital_Elevator_EventScript_SetFloorWarp::
# 15 "data/maps/Hospital_Elevator/scripts.pory"
	switch VAR_HOSPITAL_FLOOR
# 16 "data/maps/Hospital_Elevator/scripts.pory"
	case 0, Hospital_Elevator_EventScript_SetFloorWarp_3
# 17 "data/maps/Hospital_Elevator/scripts.pory"
	case 1, Hospital_Elevator_EventScript_SetFloorWarp_3
# 19 "data/maps/Hospital_Elevator/scripts.pory"
	case 2, Hospital_Elevator_EventScript_SetFloorWarp_4
# 21 "data/maps/Hospital_Elevator/scripts.pory"
	case 3, Hospital_Elevator_EventScript_SetFloorWarp_5
# 23 "data/maps/Hospital_Elevator/scripts.pory"
	case 4, Hospital_Elevator_EventScript_SetFloorWarp_6
# 25 "data/maps/Hospital_Elevator/scripts.pory"
	case 5, Hospital_Elevator_EventScript_SetFloorWarp_7
# 27 "data/maps/Hospital_Elevator/scripts.pory"
	case 6, Hospital_Elevator_EventScript_SetFloorWarp_8
# 29 "data/maps/Hospital_Elevator/scripts.pory"
	case 7, Hospital_Elevator_EventScript_SetFloorWarp_9
Hospital_Elevator_EventScript_SetFloorWarp_1:
	return

Hospital_Elevator_EventScript_SetFloorWarp_3:
# 18 "data/maps/Hospital_Elevator/scripts.pory"
	call Hospital_Elevator_EventScript_SetFloorWarp1
	goto Hospital_Elevator_EventScript_SetFloorWarp_1

Hospital_Elevator_EventScript_SetFloorWarp_4:
# 20 "data/maps/Hospital_Elevator/scripts.pory"
	call Hospital_Elevator_EventScript_SetFloorWarp2
	goto Hospital_Elevator_EventScript_SetFloorWarp_1

Hospital_Elevator_EventScript_SetFloorWarp_5:
# 22 "data/maps/Hospital_Elevator/scripts.pory"
	call Hospital_Elevator_EventScript_SetFloorWarp3
	goto Hospital_Elevator_EventScript_SetFloorWarp_1

Hospital_Elevator_EventScript_SetFloorWarp_6:
# 24 "data/maps/Hospital_Elevator/scripts.pory"
	call Hospital_Elevator_EventScript_SetFloorWarp4
	goto Hospital_Elevator_EventScript_SetFloorWarp_1

Hospital_Elevator_EventScript_SetFloorWarp_7:
# 26 "data/maps/Hospital_Elevator/scripts.pory"
	call Hospital_Elevator_EventScript_SetFloorWarp5
	goto Hospital_Elevator_EventScript_SetFloorWarp_1

Hospital_Elevator_EventScript_SetFloorWarp_8:
# 28 "data/maps/Hospital_Elevator/scripts.pory"
	call Hospital_Elevator_EventScript_SetFloorWarp6
	goto Hospital_Elevator_EventScript_SetFloorWarp_1

Hospital_Elevator_EventScript_SetFloorWarp_9:
# 30 "data/maps/Hospital_Elevator/scripts.pory"
	call Hospital_Elevator_EventScript_SetFloorWarp7
	goto Hospital_Elevator_EventScript_SetFloorWarp_1


Hospital_Elevator_EventScript_SetFloorWarp1::
# 37 "data/maps/Hospital_Elevator/scripts.pory"
	setdynamicwarp MAP_HOSPITAL1F, 10, 2
	return


Hospital_Elevator_EventScript_SetFloorWarp2::
# 42 "data/maps/Hospital_Elevator/scripts.pory"
	setdynamicwarp MAP_HOSPITAL2F, 10, 2
	return


Hospital_Elevator_EventScript_SetFloorWarp3::
# 47 "data/maps/Hospital_Elevator/scripts.pory"
	setdynamicwarp MAP_HOSPITAL3F, 10, 2
	return


Hospital_Elevator_EventScript_SetFloorWarp4::
# 52 "data/maps/Hospital_Elevator/scripts.pory"
	setdynamicwarp MAP_HOSPITAL4F, 10, 2
	return


Hospital_Elevator_EventScript_SetFloorWarp5::
# 57 "data/maps/Hospital_Elevator/scripts.pory"
	setdynamicwarp MAP_HOSPITAL5F, 10, 2
	return


Hospital_Elevator_EventScript_SetFloorWarp6::
# 62 "data/maps/Hospital_Elevator/scripts.pory"
	setdynamicwarp MAP_HOSPITAL6F, 10, 2
	return


Hospital_Elevator_EventScript_SetFloorWarp7::
# 67 "data/maps/Hospital_Elevator/scripts.pory"
	setdynamicwarp MAP_HOSPITAL7F, 10, 2
	return


Hospital_Elevator_EventScript_ChooseFloor::
# 72 "data/maps/Hospital_Elevator/scripts.pory"
	lock
# 73 "data/maps/Hospital_Elevator/scripts.pory"
	msgbox Hospital_Elevator_Text_ChooseFloor
# 74 "data/maps/Hospital_Elevator/scripts.pory"
	closemessage
# 75 "data/maps/Hospital_Elevator/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_HOSPITAL_ELEVATOR_FLOOR
# 76 "data/maps/Hospital_Elevator/scripts.pory"
	special ShowScrollableMultichoice
# 77 "data/maps/Hospital_Elevator/scripts.pory"
	waitstate
# 78 "data/maps/Hospital_Elevator/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/Hospital_Elevator/scripts.pory"
	case 0, Hospital_Elevator_EventScript_ChooseFloor_3
# 81 "data/maps/Hospital_Elevator/scripts.pory"
	case 1, Hospital_Elevator_EventScript_ChooseFloor_4
# 83 "data/maps/Hospital_Elevator/scripts.pory"
	case 2, Hospital_Elevator_EventScript_ChooseFloor_5
# 85 "data/maps/Hospital_Elevator/scripts.pory"
	case 3, Hospital_Elevator_EventScript_ChooseFloor_6
# 87 "data/maps/Hospital_Elevator/scripts.pory"
	case 4, Hospital_Elevator_EventScript_ChooseFloor_7
# 89 "data/maps/Hospital_Elevator/scripts.pory"
	case 5, Hospital_Elevator_EventScript_ChooseFloor_8
# 91 "data/maps/Hospital_Elevator/scripts.pory"
	case 6, Hospital_Elevator_EventScript_ChooseFloor_9
Hospital_Elevator_EventScript_ChooseFloor_1:
# 94 "data/maps/Hospital_Elevator/scripts.pory"
	call Hospital_Elevator_EventScript_SetFloorWarp
# 95 "data/maps/Hospital_Elevator/scripts.pory"
	release
	end

Hospital_Elevator_EventScript_ChooseFloor_3:
# 80 "data/maps/Hospital_Elevator/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 1
	goto Hospital_Elevator_EventScript_ChooseFloor_1

Hospital_Elevator_EventScript_ChooseFloor_4:
# 82 "data/maps/Hospital_Elevator/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 2
	goto Hospital_Elevator_EventScript_ChooseFloor_1

Hospital_Elevator_EventScript_ChooseFloor_5:
# 84 "data/maps/Hospital_Elevator/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 3
	goto Hospital_Elevator_EventScript_ChooseFloor_1

Hospital_Elevator_EventScript_ChooseFloor_6:
# 86 "data/maps/Hospital_Elevator/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 4
	goto Hospital_Elevator_EventScript_ChooseFloor_1

Hospital_Elevator_EventScript_ChooseFloor_7:
# 88 "data/maps/Hospital_Elevator/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 5
	goto Hospital_Elevator_EventScript_ChooseFloor_1

Hospital_Elevator_EventScript_ChooseFloor_8:
# 90 "data/maps/Hospital_Elevator/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 6
	goto Hospital_Elevator_EventScript_ChooseFloor_1

Hospital_Elevator_EventScript_ChooseFloor_9:
# 92 "data/maps/Hospital_Elevator/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 7
	goto Hospital_Elevator_EventScript_ChooseFloor_1


Hospital_Elevator_Text_ChooseFloor::
# 100 "data/maps/Hospital_Elevator/scripts.pory"
	.string "Which floor would you like to go to?$"
