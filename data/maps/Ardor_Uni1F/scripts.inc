Ardor_Uni1F_MapScripts::
# 3 "data/maps/Ardor_Uni1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Ardor_Uni1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Ardor_Uni1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/Ardor_Uni1F/scripts.pory"
	call Ardor_Uni1F_EventScript_OpenDoors
	return


Ardor_Uni1F_EventScript_OpenDoors::
# 10 "data/maps/Ardor_Uni1F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GEOLOGY, Ardor_Uni1F_EventScript_OpenDoors_2
Ardor_Uni1F_EventScript_OpenDoors_1:
# 13 "data/maps/Ardor_Uni1F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_BIOLOGY, Ardor_Uni1F_EventScript_OpenDoors_5
Ardor_Uni1F_EventScript_OpenDoors_4:
# 16 "data/maps/Ardor_Uni1F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_CHEMISTRY, Ardor_Uni1F_EventScript_OpenDoors_8
Ardor_Uni1F_EventScript_OpenDoors_7:
# 19 "data/maps/Ardor_Uni1F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_MUSIC, Ardor_Uni1F_EventScript_OpenDoors_11
Ardor_Uni1F_EventScript_OpenDoors_10:
# 22 "data/maps/Ardor_Uni1F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_ARITHMETIC, Ardor_Uni1F_EventScript_OpenDoors_14
Ardor_Uni1F_EventScript_OpenDoors_13:
# 25 "data/maps/Ardor_Uni1F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GRAMMAR, Ardor_Uni1F_EventScript_OpenDoors_17
Ardor_Uni1F_EventScript_OpenDoors_16:
# 28 "data/maps/Ardor_Uni1F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_ART, Ardor_Uni1F_EventScript_OpenDoors_20
Ardor_Uni1F_EventScript_OpenDoors_19:
	end

Ardor_Uni1F_EventScript_OpenDoors_2:
# 11 "data/maps/Ardor_Uni1F/scripts.pory"
	setmetatile 2, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_1

Ardor_Uni1F_EventScript_OpenDoors_5:
# 14 "data/maps/Ardor_Uni1F/scripts.pory"
	setmetatile 7, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_4

Ardor_Uni1F_EventScript_OpenDoors_8:
# 17 "data/maps/Ardor_Uni1F/scripts.pory"
	setmetatile 12, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_7

Ardor_Uni1F_EventScript_OpenDoors_11:
# 20 "data/maps/Ardor_Uni1F/scripts.pory"
	setmetatile 17, 1, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_10

Ardor_Uni1F_EventScript_OpenDoors_14:
# 23 "data/maps/Ardor_Uni1F/scripts.pory"
	setmetatile 26, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_13

Ardor_Uni1F_EventScript_OpenDoors_17:
# 26 "data/maps/Ardor_Uni1F/scripts.pory"
	setmetatile 31, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_16

Ardor_Uni1F_EventScript_OpenDoors_20:
# 29 "data/maps/Ardor_Uni1F/scripts.pory"
	setmetatile 36, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni1F_EventScript_OpenDoors_19


Ardor_Uni1F_EventScript_GeologyDoorSign::
# 35 "data/maps/Ardor_Uni1F/scripts.pory"
	lock
# 36 "data/maps/Ardor_Uni1F/scripts.pory"
	msgbox Ardor_Uni1F_Text_GeologyDoorSign
# 37 "data/maps/Ardor_Uni1F/scripts.pory"
	closemessage
# 38 "data/maps/Ardor_Uni1F/scripts.pory"
	release
	end


Ardor_Uni1F_EventScript_BiologyDoorSign::
# 43 "data/maps/Ardor_Uni1F/scripts.pory"
	lock
# 44 "data/maps/Ardor_Uni1F/scripts.pory"
	msgbox Ardor_Uni1F_Text_BiologyDoorSign
# 45 "data/maps/Ardor_Uni1F/scripts.pory"
	closemessage
# 46 "data/maps/Ardor_Uni1F/scripts.pory"
	release
	end


Ardor_Uni1F_EventScript_ChemistryDoorSign::
# 51 "data/maps/Ardor_Uni1F/scripts.pory"
	lock
# 52 "data/maps/Ardor_Uni1F/scripts.pory"
	msgbox Ardor_Uni1F_Text_ChemistryDoorSign
# 53 "data/maps/Ardor_Uni1F/scripts.pory"
	closemessage
# 54 "data/maps/Ardor_Uni1F/scripts.pory"
	release
	end


Ardor_Uni1F_EventScript_MusicDoorSign::
# 59 "data/maps/Ardor_Uni1F/scripts.pory"
	lock
# 60 "data/maps/Ardor_Uni1F/scripts.pory"
	msgbox Ardor_Uni1F_Text_MusicDoorSign
# 61 "data/maps/Ardor_Uni1F/scripts.pory"
	closemessage
# 62 "data/maps/Ardor_Uni1F/scripts.pory"
	release
	end


Ardor_Uni1F_EventScript_ArtDoorSign::
# 67 "data/maps/Ardor_Uni1F/scripts.pory"
	lock
# 68 "data/maps/Ardor_Uni1F/scripts.pory"
	msgbox Ardor_Uni1F_Text_ArtDoorSign
# 69 "data/maps/Ardor_Uni1F/scripts.pory"
	closemessage
# 70 "data/maps/Ardor_Uni1F/scripts.pory"
	release
	end


Ardor_Uni1F_EventScript_GrammarDoorSign::
# 75 "data/maps/Ardor_Uni1F/scripts.pory"
	lock
# 76 "data/maps/Ardor_Uni1F/scripts.pory"
	msgbox Ardor_Uni1F_Text_GrammarDoorSign
# 77 "data/maps/Ardor_Uni1F/scripts.pory"
	closemessage
# 78 "data/maps/Ardor_Uni1F/scripts.pory"
	release
	end


Ardor_Uni1F_EventScript_ArithmeticDoorSign::
# 85 "data/maps/Ardor_Uni1F/scripts.pory"
	lock
# 86 "data/maps/Ardor_Uni1F/scripts.pory"
	msgbox Ardor_Uni1F_Text_ArithmeticDoorSign
# 87 "data/maps/Ardor_Uni1F/scripts.pory"
	closemessage
# 88 "data/maps/Ardor_Uni1F/scripts.pory"
	release
	end


Ardor_Uni1F_Text_GeologyDoorSign::
# 92 "data/maps/Ardor_Uni1F/scripts.pory"
	.string "GEOLOGIA\n"
	.string "MAGISTER PATRICIUS$"

Ardor_Uni1F_Text_BiologyDoorSign::
# 96 "data/maps/Ardor_Uni1F/scripts.pory"
	.string "BIOLOGIA\n"
	.string "MAGISTRA PHILIDA$"

Ardor_Uni1F_Text_ChemistryDoorSign::
# 100 "data/maps/Ardor_Uni1F/scripts.pory"
	.string "ALCHEMIA\n"
	.string "MAGISTER SEVERUS$"

Ardor_Uni1F_Text_MusicDoorSign::
# 104 "data/maps/Ardor_Uni1F/scripts.pory"
	.string "MUSICA\n"
	.string "MAGISTER GERARDUS$"

Ardor_Uni1F_Text_ArtDoorSign::
# 108 "data/maps/Ardor_Uni1F/scripts.pory"
	.string "ARS\n"
	.string "MAGISTRA GINA$"

Ardor_Uni1F_Text_GrammarDoorSign::
# 112 "data/maps/Ardor_Uni1F/scripts.pory"
	.string "GRAMMATICA\n"
	.string "MAGISTRA SMYTHA$"

Ardor_Uni1F_Text_ArithmeticDoorSign::
# 116 "data/maps/Ardor_Uni1F/scripts.pory"
	.string "ARITHMETICA\n"
	.string "MAGISTRA SADIA$"
