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
	checktrainerflag TRAINER_PIPPIN
	goto_if 0, Robustus_EventScript_Camper1_2
	lock
	faceplayer
	msgbox Robustus_Text_PippinPost
	closemessage
	release
Robustus_EventScript_Camper1_1:
	end

Robustus_EventScript_Camper1_2:
	call Robustus_EventScript_Counter
	trainerbattle_single TRAINER_PIPPIN, Robustus_Text_PippinIntro, Robustus_Text_PippinLost
	goto Robustus_EventScript_Camper1_1


Robustus_EventScript_Camper2::
	checktrainerflag TRAINER_GRAYSON
	goto_if 0, Robustus_EventScript_Camper2_1
	lock
	faceplayer
	msgbox Robustus_Text_GraysonPost
	closemessage
	release
	return

Robustus_EventScript_Camper2_1:
	call Robustus_EventScript_Counter
	trainerbattle_single TRAINER_GRAYSON, Robustus_Text_GraysonIntro, Robustus_Text_GraysonLost
	return


Robustus_EventScript_Camper3::
	checktrainerflag TRAINER_SEAN
	goto_if 0, Robustus_EventScript_Camper3_1
	lock
	faceplayer
	msgbox Robustus_Text_SeanPost
	closemessage
	release
	return

Robustus_EventScript_Camper3_1:
	call Robustus_EventScript_Counter
	trainerbattle_single TRAINER_SEAN, Robustus_Text_SeanIntro, Robustus_Text_SeanLost
	return


Robustus_EventScript_Camper4::
	checktrainerflag TRAINER_MERRY
	goto_if 0, Robustus_EventScript_Camper4_1
	lock
	faceplayer
	msgbox Robustus_Text_MerryPost
	closemessage
	release
	return

Robustus_EventScript_Camper4_1:
	call Robustus_EventScript_Counter
	trainerbattle_single TRAINER_MERRY, Robustus_Text_MerryIntro, Robustus_Text_MerryLost
	return


Robustus_EventScript_Camper5::
	checktrainerflag TRAINER_PATRICK
	goto_if 0, Robustus_EventScript_Camper5_1
	lock
	faceplayer
	msgbox Robustus_Text_PatrickPost
	closemessage
	release
	return

Robustus_EventScript_Camper5_1:
	call Robustus_EventScript_Counter
	trainerbattle_single TRAINER_PATRICK, Robustus_Text_PatrickIntro, Robustus_Text_PatrickLost
	return


Robustus_EventScript_ResetCounter::
	compare VAR_ROBUSTUS_STATE, 1
	goto_if_gt Robustus_EventScript_ResetCounter_2
	release
Robustus_EventScript_ResetCounter_1:
	end

Robustus_EventScript_ResetCounter_2:
	setvar VAR_ROBUSTUS_STATE, 1
	checktrainerflag TRAINER_PIPPIN
	goto_if 1, Robustus_EventScript_ResetCounter_6
Robustus_EventScript_ResetCounter_5:
	checktrainerflag TRAINER_GRAYSON
	goto_if 1, Robustus_EventScript_ResetCounter_9
Robustus_EventScript_ResetCounter_8:
	checktrainerflag TRAINER_SEAN
	goto_if 1, Robustus_EventScript_ResetCounter_12
Robustus_EventScript_ResetCounter_11:
	checktrainerflag TRAINER_MERRY
	goto_if 1, Robustus_EventScript_ResetCounter_15
Robustus_EventScript_ResetCounter_14:
	checktrainerflag TRAINER_PATRICK
	goto_if 1, Robustus_EventScript_ResetCounter_17
	goto Robustus_EventScript_ResetCounter_1

Robustus_EventScript_ResetCounter_6:
	cleartrainerflag TRAINER_PIPPIN
	goto Robustus_EventScript_ResetCounter_5

Robustus_EventScript_ResetCounter_9:
	cleartrainerflag TRAINER_GRAYSON
	goto Robustus_EventScript_ResetCounter_8

Robustus_EventScript_ResetCounter_12:
	cleartrainerflag TRAINER_SEAN
	goto Robustus_EventScript_ResetCounter_11

Robustus_EventScript_ResetCounter_15:
	cleartrainerflag TRAINER_MERRY
	goto Robustus_EventScript_ResetCounter_14

Robustus_EventScript_ResetCounter_17:
	cleartrainerflag TRAINER_PATRICK
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

Robustus_Text_PippinIntro::
	.string "TEST!$"

Robustus_Text_PippinLost::
	.string "TEST!$"

Robustus_Text_PippinPost::
	.string "TEST!$"

Robustus_Text_GraysonIntro::
	.string "TEST!$"

Robustus_Text_GraysonLost::
	.string "TEST!$"

Robustus_Text_GraysonPost::
	.string "TEST!$"

Robustus_Text_SeanIntro::
	.string "TEST!$"

Robustus_Text_SeanLost::
	.string "TEST!$"

Robustus_Text_SeanPost::
	.string "TEST!$"

Robustus_Text_MerryIntro::
	.string "TEST!$"

Robustus_Text_MerryLost::
	.string "TEST!$"

Robustus_Text_MerryPost::
	.string "TEST!$"

Robustus_Text_PatrickIntro::
	.string "TEST!$"

Robustus_Text_PatrickLost::
	.string "TEST!$"

Robustus_Text_PatrickPost::
	.string "TEST!$"

Robustus_Text_Test::
	.string "TEST!$"
