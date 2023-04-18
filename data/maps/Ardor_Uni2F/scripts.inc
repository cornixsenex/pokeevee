Ardor_Uni2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_LOAD:
	return


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
