Ardor_Uni3F_MapScripts::
# 2 "data/maps/Ardor_Uni3F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Ardor_Uni3F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Ardor_Uni3F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Ardor_Uni3F/scripts.pory"
	call Ardor_Uni3F_EventScript_OpenDoors
	return


Ardor_Uni3F_EventScript_OpenDoors::
# 9 "data/maps/Ardor_Uni3F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_PHILOSOPHY, Ardor_Uni3F_EventScript_OpenDoors_2
Ardor_Uni3F_EventScript_OpenDoors_1:
# 12 "data/maps/Ardor_Uni3F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_PHYSICS, Ardor_Uni3F_EventScript_OpenDoors_5
Ardor_Uni3F_EventScript_OpenDoors_4:
# 15 "data/maps/Ardor_Uni3F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_CALCULUS, Ardor_Uni3F_EventScript_OpenDoors_8
Ardor_Uni3F_EventScript_OpenDoors_7:
# 18 "data/maps/Ardor_Uni3F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_LITERATURE, Ardor_Uni3F_EventScript_OpenDoors_11
Ardor_Uni3F_EventScript_OpenDoors_10:
# 21 "data/maps/Ardor_Uni3F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_RHETORIC, Ardor_Uni3F_EventScript_OpenDoors_14
Ardor_Uni3F_EventScript_OpenDoors_13:
# 24 "data/maps/Ardor_Uni3F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_POETRY, Ardor_Uni3F_EventScript_OpenDoors_17
Ardor_Uni3F_EventScript_OpenDoors_16:
	end

Ardor_Uni3F_EventScript_OpenDoors_2:
# 10 "data/maps/Ardor_Uni3F/scripts.pory"
	setmetatile 2, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni3F_EventScript_OpenDoors_1

Ardor_Uni3F_EventScript_OpenDoors_5:
# 13 "data/maps/Ardor_Uni3F/scripts.pory"
	setmetatile 7, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni3F_EventScript_OpenDoors_4

Ardor_Uni3F_EventScript_OpenDoors_8:
# 16 "data/maps/Ardor_Uni3F/scripts.pory"
	setmetatile 12, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni3F_EventScript_OpenDoors_7

Ardor_Uni3F_EventScript_OpenDoors_11:
# 19 "data/maps/Ardor_Uni3F/scripts.pory"
	setmetatile 26, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni3F_EventScript_OpenDoors_10

Ardor_Uni3F_EventScript_OpenDoors_14:
# 22 "data/maps/Ardor_Uni3F/scripts.pory"
	setmetatile 31, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni3F_EventScript_OpenDoors_13

Ardor_Uni3F_EventScript_OpenDoors_17:
# 25 "data/maps/Ardor_Uni3F/scripts.pory"
	setmetatile 36, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni3F_EventScript_OpenDoors_16


Ardor_Uni3F_EventScript_CalculusDoorSign::
# 31 "data/maps/Ardor_Uni3F/scripts.pory"
	lock
# 32 "data/maps/Ardor_Uni3F/scripts.pory"
	msgbox Ardor_Uni3F_Text_CalculusDoorSign
# 33 "data/maps/Ardor_Uni3F/scripts.pory"
	closemessage
# 34 "data/maps/Ardor_Uni3F/scripts.pory"
	release
	end


Ardor_Uni3F_EventScript_PhysicsDoorSign::
# 39 "data/maps/Ardor_Uni3F/scripts.pory"
	lock
# 40 "data/maps/Ardor_Uni3F/scripts.pory"
	msgbox Ardor_Uni3F_Text_PhysicsDoorSign
# 41 "data/maps/Ardor_Uni3F/scripts.pory"
	closemessage
# 42 "data/maps/Ardor_Uni3F/scripts.pory"
	release
	end


Ardor_Uni3F_EventScript_PhilosophyDoorSign::
# 47 "data/maps/Ardor_Uni3F/scripts.pory"
	lock
# 48 "data/maps/Ardor_Uni3F/scripts.pory"
	msgbox Ardor_Uni3F_Text_PhilosophyDoorSign
# 49 "data/maps/Ardor_Uni3F/scripts.pory"
	closemessage
# 50 "data/maps/Ardor_Uni3F/scripts.pory"
	release
	end


Ardor_Uni3F_EventScript_OfficeDoorSign::
# 55 "data/maps/Ardor_Uni3F/scripts.pory"
	lock
# 56 "data/maps/Ardor_Uni3F/scripts.pory"
	msgbox Ardor_Uni3F_Text_OfficeDoorSign
# 57 "data/maps/Ardor_Uni3F/scripts.pory"
	closemessage
# 58 "data/maps/Ardor_Uni3F/scripts.pory"
	release
	end


Ardor_Uni3F_EventScript_RhetoricDoorSign::
# 63 "data/maps/Ardor_Uni3F/scripts.pory"
	lock
# 64 "data/maps/Ardor_Uni3F/scripts.pory"
	msgbox Ardor_Uni3F_Text_RhetoricDoorSign
# 65 "data/maps/Ardor_Uni3F/scripts.pory"
	closemessage
# 66 "data/maps/Ardor_Uni3F/scripts.pory"
	release
	end


Ardor_Uni3F_EventScript_LiteratureDoorSign::
# 71 "data/maps/Ardor_Uni3F/scripts.pory"
	lock
# 72 "data/maps/Ardor_Uni3F/scripts.pory"
	msgbox Ardor_Uni3F_Text_LiteratureDoorSign
# 73 "data/maps/Ardor_Uni3F/scripts.pory"
	closemessage
# 74 "data/maps/Ardor_Uni3F/scripts.pory"
	release
	end


Ardor_Uni3F_EventScript_PoetryDoorSign::
# 79 "data/maps/Ardor_Uni3F/scripts.pory"
	lock
# 80 "data/maps/Ardor_Uni3F/scripts.pory"
	msgbox Ardor_Uni3F_Text_PoetryDoorSign
# 81 "data/maps/Ardor_Uni3F/scripts.pory"
	closemessage
# 82 "data/maps/Ardor_Uni3F/scripts.pory"
	release
	end


Ardor_Uni3F_Text_CalculusDoorSign::
# 86 "data/maps/Ardor_Uni3F/scripts.pory"
	.string "CALCULUS\n"
	.string "MAGISTER HAGUS$"

Ardor_Uni3F_Text_PhysicsDoorSign::
# 90 "data/maps/Ardor_Uni3F/scripts.pory"
	.string "PHYSICA\n"
	.string "MAGISTER CLANCIUS$"

Ardor_Uni3F_Text_PhilosophyDoorSign::
# 94 "data/maps/Ardor_Uni3F/scripts.pory"
	.string "PHILOSOPHIA\n"
	.string "MAGISTER HAMLET$"

Ardor_Uni3F_Text_OfficeDoorSign::
# 98 "data/maps/Ardor_Uni3F/scripts.pory"
	.string "CONSULES ARDENTIS\n"
	.string "ALBINUS ET PLATONUS$"

Ardor_Uni3F_Text_RhetoricDoorSign::
# 102 "data/maps/Ardor_Uni3F/scripts.pory"
	.string "ORATUS\n"
	.string "MAGISTER STEPHANUS$"

Ardor_Uni3F_Text_LiteratureDoorSign::
# 106 "data/maps/Ardor_Uni3F/scripts.pory"
	.string "LITERATURA\n"
	.string "MAGISTRA AEMILIA$"

Ardor_Uni3F_Text_PoetryDoorSign::
# 110 "data/maps/Ardor_Uni3F/scripts.pory"
	.string "POEMATA\n"
	.string "MAGISTRA ANNA$"
