Ardor_Uni3F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Ardor_Uni3F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Ardor_Uni3F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Ardor_Uni3F_EventScript_OpenDoors
	return


Ardor_Uni3F_EventScript_OpenDoors::
	goto_if_unset FLAG_OPEN_CLASS_PHILOSOPHY, Ardor_Uni3F_EventScript_OpenDoors_2
Ardor_Uni3F_EventScript_OpenDoors_1:
	goto_if_unset FLAG_OPEN_CLASS_PHYSICS, Ardor_Uni3F_EventScript_OpenDoors_5
Ardor_Uni3F_EventScript_OpenDoors_4:
	goto_if_unset FLAG_OPEN_CLASS_CALCULUS, Ardor_Uni3F_EventScript_OpenDoors_8
Ardor_Uni3F_EventScript_OpenDoors_7:
	goto_if_unset FLAG_OPEN_CLASS_LITERATURE, Ardor_Uni3F_EventScript_OpenDoors_11
Ardor_Uni3F_EventScript_OpenDoors_10:
	goto_if_unset FLAG_OPEN_CLASS_POETRY, Ardor_Uni3F_EventScript_OpenDoors_14
Ardor_Uni3F_EventScript_OpenDoors_13:
	goto_if_unset FLAG_OPEN_CLASS_RHETORIC, Ardor_Uni3F_EventScript_OpenDoors_17
Ardor_Uni3F_EventScript_OpenDoors_16:
	end

Ardor_Uni3F_EventScript_OpenDoors_2:
	setmetatile 2, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni3F_EventScript_OpenDoors_1

Ardor_Uni3F_EventScript_OpenDoors_5:
	setmetatile 7, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni3F_EventScript_OpenDoors_4

Ardor_Uni3F_EventScript_OpenDoors_8:
	setmetatile 12, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni3F_EventScript_OpenDoors_7

Ardor_Uni3F_EventScript_OpenDoors_11:
	setmetatile 26, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni3F_EventScript_OpenDoors_10

Ardor_Uni3F_EventScript_OpenDoors_14:
	setmetatile 31, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni3F_EventScript_OpenDoors_13

Ardor_Uni3F_EventScript_OpenDoors_17:
	setmetatile 36, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni3F_EventScript_OpenDoors_16


Ardor_Uni3F_EventScript_CalculusDoorSign::
	lock
	msgbox Ardor_Uni3F_Text_CalculusDoorSign
	closemessage
	release
	end


Ardor_Uni3F_EventScript_PhysicsDoorSign::
	lock
	msgbox Ardor_Uni3F_Text_PhysicsDoorSign
	closemessage
	release
	end


Ardor_Uni3F_EventScript_PhilosophyDoorSign::
	lock
	msgbox Ardor_Uni3F_Text_PhilosophyDoorSign
	closemessage
	release
	end


Ardor_Uni3F_EventScript_OfficeDoorSign::
	lock
	msgbox Ardor_Uni3F_Text_OfficeDoorSign
	closemessage
	release
	end


Ardor_Uni3F_EventScript_RhetoricDoorSign::
	lock
	msgbox Ardor_Uni3F_Text_RhetoricDoorSign
	closemessage
	release
	end


Ardor_Uni3F_EventScript_LiteratureDoorSign::
	lock
	msgbox Ardor_Uni3F_Text_LiteratureDoorSign
	closemessage
	release
	end


Ardor_Uni3F_EventScript_PoetryDoorSign::
	lock
	msgbox Ardor_Uni3F_Text_PoetryDoorSign
	closemessage
	release
	end


Ardor_Uni3F_Text_CalculusDoorSign::
	.string "CALCULUS\n"
	.string "MAGISTER HAGUS$"

Ardor_Uni3F_Text_PhysicsDoorSign::
	.string "PHYSICA\n"
	.string "MAGISTER CLANCIUS$"

Ardor_Uni3F_Text_PhilosophyDoorSign::
	.string "PHILOSOPHIA\n"
	.string "MAGISTER HAMLET$"

Ardor_Uni3F_Text_OfficeDoorSign::
	.string "CONSULES ARDENTIS\n"
	.string "ALBINUS ET PLATONUS$"

Ardor_Uni3F_Text_RhetoricDoorSign::
	.string "ORATUS\n"
	.string "MAGISTER STEPHANUS$"

Ardor_Uni3F_Text_LiteratureDoorSign::
	.string "LITERATURA\n"
	.string "MAGISTRA AEMILIA$"

Ardor_Uni3F_Text_PoetryDoorSign::
	.string "POEMATA\n"
	.string "MAGISTRA ANNA$"
