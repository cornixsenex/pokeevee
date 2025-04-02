Ardor_Uni2F_MapScripts::
# 6 "data//maps/Ardor_Uni2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 7 "data//maps/Ardor_Uni2F/scripts.pory"
	call Ardor_Uni2F_EventScript_OpenDoors
	return


Ardor_Uni2F_EventScript_OpenDoors::
# 13 "data//maps/Ardor_Uni2F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_LOGIC, Ardor_Uni2F_EventScript_OpenDoors_2
Ardor_Uni2F_EventScript_OpenDoors_1:
# 16 "data//maps/Ardor_Uni2F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_ALGEBRA, Ardor_Uni2F_EventScript_OpenDoors_5
Ardor_Uni2F_EventScript_OpenDoors_4:
# 19 "data//maps/Ardor_Uni2F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GEOMETRY, Ardor_Uni2F_EventScript_OpenDoors_8
Ardor_Uni2F_EventScript_OpenDoors_7:
# 22 "data//maps/Ardor_Uni2F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_HISTORY, Ardor_Uni2F_EventScript_OpenDoors_11
Ardor_Uni2F_EventScript_OpenDoors_10:
# 25 "data//maps/Ardor_Uni2F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_ARCHAEOLOGY, Ardor_Uni2F_EventScript_OpenDoors_14
Ardor_Uni2F_EventScript_OpenDoors_13:
# 28 "data//maps/Ardor_Uni2F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_PSYCHOLOGY, Ardor_Uni2F_EventScript_OpenDoors_17
Ardor_Uni2F_EventScript_OpenDoors_16:
	end

Ardor_Uni2F_EventScript_OpenDoors_2:
# 14 "data//maps/Ardor_Uni2F/scripts.pory"
	setmetatile 2, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni2F_EventScript_OpenDoors_1

Ardor_Uni2F_EventScript_OpenDoors_5:
# 17 "data//maps/Ardor_Uni2F/scripts.pory"
	setmetatile 7, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni2F_EventScript_OpenDoors_4

Ardor_Uni2F_EventScript_OpenDoors_8:
# 20 "data//maps/Ardor_Uni2F/scripts.pory"
	setmetatile 12, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni2F_EventScript_OpenDoors_7

Ardor_Uni2F_EventScript_OpenDoors_11:
# 23 "data//maps/Ardor_Uni2F/scripts.pory"
	setmetatile 26, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni2F_EventScript_OpenDoors_10

Ardor_Uni2F_EventScript_OpenDoors_14:
# 26 "data//maps/Ardor_Uni2F/scripts.pory"
	setmetatile 31, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni2F_EventScript_OpenDoors_13

Ardor_Uni2F_EventScript_OpenDoors_17:
# 29 "data//maps/Ardor_Uni2F/scripts.pory"
	setmetatile 36, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni2F_EventScript_OpenDoors_16


Ardor_Uni2F_EventScript_Leaf::
# 37 "data//maps/Ardor_Uni2F/scripts.pory"
	lock
# 38 "data//maps/Ardor_Uni2F/scripts.pory"
	faceplayer
# 39 "data//maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_Leaf1
# 40 "data//maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 41 "data//maps/Ardor_Uni2F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 42 "data//maps/Ardor_Uni2F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_ne Ardor_Uni2F_EventScript_Leaf_2
# 45 "data//maps/Ardor_Uni2F/scripts.pory"
	applymovement 1, Ardor_Uni2F_Movement_LeafExitS
Ardor_Uni2F_EventScript_Leaf_1:
# 47 "data//maps/Ardor_Uni2F/scripts.pory"
	waitmovement 0
# 48 "data//maps/Ardor_Uni2F/scripts.pory"
	setflag FLAG_ARDOR_UNI2F_LEAF
# 49 "data//maps/Ardor_Uni2F/scripts.pory"
	removeobject 1
# 50 "data//maps/Ardor_Uni2F/scripts.pory"
	release
	end

Ardor_Uni2F_EventScript_Leaf_2:
# 43 "data//maps/Ardor_Uni2F/scripts.pory"
	applymovement 1, Ardor_Uni2F_Movement_LeafExitN
	goto Ardor_Uni2F_EventScript_Leaf_1


Ardor_Uni2F_EventScript_ArchaeologyDoorSign::
# 55 "data//maps/Ardor_Uni2F/scripts.pory"
	lock
# 56 "data//maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_ArchaeologyDoorSign
# 57 "data//maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 58 "data//maps/Ardor_Uni2F/scripts.pory"
	release
	end


Ardor_Uni2F_EventScript_LogicDoorSign::
# 63 "data//maps/Ardor_Uni2F/scripts.pory"
	lock
# 64 "data//maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_LogicDoorSign
# 65 "data//maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 66 "data//maps/Ardor_Uni2F/scripts.pory"
	release
	end


Ardor_Uni2F_EventScript_AlgebraDoorSign::
# 71 "data//maps/Ardor_Uni2F/scripts.pory"
	lock
# 72 "data//maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_AlgebraDoorSign
# 73 "data//maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 74 "data//maps/Ardor_Uni2F/scripts.pory"
	release
	end


Ardor_Uni2F_EventScript_GeometryDoorSign::
# 79 "data//maps/Ardor_Uni2F/scripts.pory"
	lock
# 80 "data//maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_GeometryDoorSign
# 81 "data//maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 82 "data//maps/Ardor_Uni2F/scripts.pory"
	release
	end


Ardor_Uni2F_EventScript_HistoryDoorSign::
# 87 "data//maps/Ardor_Uni2F/scripts.pory"
	lock
# 88 "data//maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_HistoryDoorSign
# 89 "data//maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 90 "data//maps/Ardor_Uni2F/scripts.pory"
	release
	end


Ardor_Uni2F_EventScript_PsychologyDoorSign::
# 95 "data//maps/Ardor_Uni2F/scripts.pory"
	lock
# 96 "data//maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_PsychologyDoorSign
# 97 "data//maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 98 "data//maps/Ardor_Uni2F/scripts.pory"
	release
	end


# 102 "data//maps/Ardor_Uni2F/scripts.pory"
Ardor_Uni2F_Movement_LeafExitS:
# 103 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_down
# 103 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_down
# 104 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_right
# 104 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_right
# 104 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_right
# 105 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 105 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 105 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 105 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 105 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 105 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 105 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 105 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 105 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 105 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
	step_end

# 108 "data//maps/Ardor_Uni2F/scripts.pory"
Ardor_Uni2F_Movement_LeafExitN:
# 109 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 109 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 109 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 109 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 109 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 109 "data//maps/Ardor_Uni2F/scripts.pory"
	walk_up
	step_end

Ardor_Uni2F_Text_ArchaeologyDoorSign::
# 112 "data//maps/Ardor_Uni2F/scripts.pory"
	.string "MAGISTER INDIANUS ARCHAEOLOGIAE EX\n"
	.string "ACADEMIA IN PYRAMIDE EST. REVERTETUR\l"
	.string "IN ANNO PROXIMO$"

Ardor_Uni2F_Text_Leaf1::
# 116 "data//maps/Ardor_Uni2F/scripts.pory"
	.string "My gosh! This cafeteria's not bad! Oh\n"
	.string "hey {PLAYER} I found an Indianus. His\l"
	.string "door is halfway down the eastern hall\l"
	.string "but it won't open. I can't understand\l"
	.string "anything anybody even says so I don't\l"
	.string "know where Indianus is. I think I'm\l"
	.string "going back to the party, that boy told\l"
	.string "me to meet him at his frat, but don't\l"
	.string "give up! We need to find Indy and\l"
	.string "rescue Mew!$"

Ardor_Uni2F_Text_LogicDoorSign::
# 120 "data//maps/Ardor_Uni2F/scripts.pory"
	.string "LOGICA\n"
	.string "MAGISTER JOANNES$"

Ardor_Uni2F_Text_AlgebraDoorSign::
# 124 "data//maps/Ardor_Uni2F/scripts.pory"
	.string "ALGEBRA\n"
	.string "MAGISTRA CAMILLA$"

Ardor_Uni2F_Text_GeometryDoorSign::
# 128 "data//maps/Ardor_Uni2F/scripts.pory"
	.string "GEOMETRIA\n"
	.string "MAGISTER JEFFERSON$"

Ardor_Uni2F_Text_HistoryDoorSign::
# 132 "data//maps/Ardor_Uni2F/scripts.pory"
	.string "HISTORIA\n"
	.string "DOCTOR VIRTREUS$"

Ardor_Uni2F_Text_PsychologyDoorSign::
# 136 "data//maps/Ardor_Uni2F/scripts.pory"
	.string "PSYCHOLOGIA\n"
	.string "MAGISTRA LINDA$"
