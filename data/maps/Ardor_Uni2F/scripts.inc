Ardor_Uni2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Ardor_Uni2F_EventScript_OpenDoors
	return


Ardor_Uni2F_EventScript_OpenDoors::
	goto_if_set FLAG_OPEN_CLASS_COMPUTER, Ardor_Uni2F_EventScript_OpenDoors_2
Ardor_Uni2F_EventScript_OpenDoors_1:
	goto_if_set FLAG_OPEN_CLASS_ALGEBRA, Ardor_Uni2F_EventScript_OpenDoors_5
Ardor_Uni2F_EventScript_OpenDoors_4:
	goto_if_set FLAG_OPEN_CLASS_GEOMETRY, Ardor_Uni2F_EventScript_OpenDoors_8
Ardor_Uni2F_EventScript_OpenDoors_7:
	goto_if_set FLAG_OPEN_CLASS_HISTORY, Ardor_Uni2F_EventScript_OpenDoors_11
Ardor_Uni2F_EventScript_OpenDoors_10:
	goto_if_set FLAG_OPEN_CLASS_ARCHAEOLOGY, Ardor_Uni2F_EventScript_OpenDoors_14
Ardor_Uni2F_EventScript_OpenDoors_13:
	goto_if_set FLAG_OPEN_CLASS_PSYCHOLOGY, Ardor_Uni2F_EventScript_OpenDoors_17
Ardor_Uni2F_EventScript_OpenDoors_16:
	end

Ardor_Uni2F_EventScript_OpenDoors_2:
	setmetatile 2, 9, METATILE_General_Door, 0
	goto Ardor_Uni2F_EventScript_OpenDoors_1

Ardor_Uni2F_EventScript_OpenDoors_5:
	setmetatile 7, 9, METATILE_General_Door, 0
	goto Ardor_Uni2F_EventScript_OpenDoors_4

Ardor_Uni2F_EventScript_OpenDoors_8:
	setmetatile 12, 9, METATILE_General_Door, 0
	goto Ardor_Uni2F_EventScript_OpenDoors_7

Ardor_Uni2F_EventScript_OpenDoors_11:
	setmetatile 26, 9, METATILE_General_Door, 0
	goto Ardor_Uni2F_EventScript_OpenDoors_10

Ardor_Uni2F_EventScript_OpenDoors_14:
	setmetatile 31, 9, METATILE_General_Door, 0
	goto Ardor_Uni2F_EventScript_OpenDoors_13

Ardor_Uni2F_EventScript_OpenDoors_17:
	setmetatile 36, 9, METATILE_General_Door, 0
	goto Ardor_Uni2F_EventScript_OpenDoors_16


Ardor_Uni2F_EventScript_Leaf::
	lock
	faceplayer
	msgbox Ardor_Uni2F_Text_Leaf1
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Ardor_Uni2F_EventScript_Leaf_2
	applymovement 1, Ardor_Uni2F_Movement_LeafExitS
Ardor_Uni2F_EventScript_Leaf_1:
	waitmovement 0
	setflag FLAG_ARDOR_UNI2F_LEAF
	removeobject 1
	release
	end

Ardor_Uni2F_EventScript_Leaf_2:
	applymovement 1, Ardor_Uni2F_Movement_LeafExitN
	goto Ardor_Uni2F_EventScript_Leaf_1


Ardor_Uni2F_EventScript_ArchaeologyDoorSign::
	lock
	msgbox Ardor_Uni2F_Text_ArchaeologyDoorSign
	closemessage
	release
	end


Ardor_Uni2F_Movement_LeafExitS:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Ardor_Uni2F_Movement_LeafExitN:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Ardor_Uni2F_Text_ArchaeologyDoorSign::
	.string "MAGISTER INDIANUS ARCHAEOLOGIAE EX\n"
	.string "ACADEMIA IN PYRAMIDE EST. REVERTETUR\l"
	.string "IN ANNO PROXIMO$"

Ardor_Uni2F_Text_Leaf1::
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
