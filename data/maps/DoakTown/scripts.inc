DoakTown_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DoakTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DoakTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROBUSTUS_STATE, 6, Robustus_OnFrame_ExeuntCampers
	.2byte 0


Robustus_EventScript_LeafTrigger1::
	lock
	call Robustus_EventScript_Counter
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	release
	end


Robustus_EventScript_LeafTrigger2::
	lock
	call Robustus_EventScript_Counter
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	release
	end


Robustus_EventScript_Camper1::
	faceplayer
	msgbox Robustus_Text_Test
	closemessage
	call Robustus_EventScript_Counter
	release
	end


Robustus_EventScript_Camper2::
	faceplayer
	msgbox Robustus_Text_Test
	call Robustus_EventScript_Counter
	closemessage
	release
	end


Robustus_EventScript_Camper3::
	faceplayer
	msgbox Robustus_Text_Test
	call Robustus_EventScript_Counter
	closemessage
	release
	end


Robustus_EventScript_Camper4::
	faceplayer
	msgbox Robustus_Text_Test
	call Robustus_EventScript_Counter
	closemessage
	release
	end


Robustus_EventScript_Camper5::
	faceplayer
	msgbox Robustus_Text_Test
	call Robustus_EventScript_Counter
	closemessage
	release
	end


Robustus_EventScript_ResetCounter::
	compare VAR_ROBUSTUS_STATE, 1
	goto_if_gt Robustus_EventScript_ResetCounter_2
	release
Robustus_EventScript_ResetCounter_1:
	end

Robustus_EventScript_ResetCounter_2:
	setvar VAR_ROBUSTUS_STATE, 1
	goto Robustus_EventScript_ResetCounter_1


Robustus_EventScript_Counter::
	addvar VAR_ROBUSTUS_STATE, 1
	return


Robustus_OnFrame_ExeuntCampers::
	lock
	call Robustus_EventScript_Counter
	msgbox Robustus_Text_Test
	closemessage
	applymovement 4, Robustus_Movement_ExitCamper1
	applymovement 3, Robustus_Movement_ExitCamper2
	applymovement 5, Robustus_Movement_ExitCamper3
	applymovement 6, Robustus_Movement_ExitCamper4
	applymovement 7, Robustus_Movement_ExitCamper5
	waitmovement 0
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	setflag FLAG_ROBUSTUS_HIDECAMPERS
	release
	end


Robustus_Movement_ExitCamper1:
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Robustus_Movement_ExitCamper2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Robustus_Movement_ExitCamper3:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Robustus_Movement_ExitCamper4:
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Robustus_Movement_ExitCamper5:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Robustus_Text_Test::
	.string "TEST!$"
