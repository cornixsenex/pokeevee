Ardor_Uni1F_MapScripts::
	.byte 0


Ardor_Uni1F_EventScript_LeafTrigger1::
	lock
	setvar VAR_ARDOR_UNI, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Ardor_Uni1F_Movement_LeafApproach1
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox Ardor_Uni1F_Text_Leaf
	closemessage
	destroy_field_pic 4
	applymovement 1, Ardor_Uni1F_Movement_LeafExit
	waitmovement 0
	setflag FLAG_ARDOR_UNI1F_LEAF
	removeobject 1
	release
	end


Ardor_Uni1F_EventScript_LeafTrigger2::
	lock
	setvar VAR_ARDOR_UNI, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Ardor_Uni1F_Movement_LeafApproach2
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox Ardor_Uni1F_Text_Leaf
	closemessage
	destroy_field_pic 4
	applymovement 1, Ardor_Uni1F_Movement_LeafExit
	waitmovement 0
	setflag FLAG_ARDOR_UNI1F_LEAF
	removeobject 1
	release
	end


Ardor_Uni1F_EventScript_LeafTrigger3::
	lock
	setvar VAR_ARDOR_UNI, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Ardor_Uni1F_Movement_LeafApproach3
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox Ardor_Uni1F_Text_Leaf
	closemessage
	destroy_field_pic 4
	applymovement 1, Ardor_Uni1F_Movement_LeafExit
	waitmovement 0
	setflag FLAG_ARDOR_UNI1F_LEAF
	removeobject 1
	release
	end


Ardor_Uni1F_EventScript_LeafTrigger4::
	lock
	setvar VAR_ARDOR_UNI, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Ardor_Uni1F_Movement_LeafApproach4
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox Ardor_Uni1F_Text_Leaf
	closemessage
	destroy_field_pic 4
	applymovement 1, Ardor_Uni1F_Movement_LeafExit
	waitmovement 0
	setflag FLAG_ARDOR_UNI1F_LEAF
	removeobject 1
	release
	end


Ardor_Uni1F_EventScript_LeafTrigger5::
	lock
	setvar VAR_ARDOR_UNI, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Ardor_Uni1F_Movement_LeafApproach5
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox Ardor_Uni1F_Text_Leaf
	closemessage
	destroy_field_pic 4
	applymovement 1, Ardor_Uni1F_Movement_LeafExit
	waitmovement 0
	setflag FLAG_ARDOR_UNI1F_LEAF
	removeobject 1
	release
	end


Ardor_Uni1F_EventScript_ArchaeologyDoorSign::
	lock
	msgbox Ardor_Uni1F_Text_ArchaeologyDoorSign
	closemessage
	release
	end


Ardor_Uni1F_Movement_LeafApproach1:
	walk_left
	walk_diag_southwest
	face_down
	step_end

Ardor_Uni1F_Movement_LeafApproach2:
	walk_diag_southwest
	face_down
	step_end

Ardor_Uni1F_Movement_LeafApproach3:
	walk_down
	step_end

Ardor_Uni1F_Movement_LeafApproach4:
	walk_diag_southeast
	face_down
	step_end

Ardor_Uni1F_Movement_LeafApproach5:
	walk_right
	walk_diag_southeast
	face_down
	step_end

Ardor_Uni1F_Movement_LeafExit:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Ardor_Uni1F_Text_Leaf::
	.string "TESTER$"

Ardor_Uni1F_Text_ArchaeologyDoorSign::
	.string "MAGISTER INDIANUS ARCHAEOLOGIAE EX\n"
	.string "ACADEMIA IN PYRAMIDE EST. REVERTETUR\l"
	.string "IN ANNO PROXIMO$"
