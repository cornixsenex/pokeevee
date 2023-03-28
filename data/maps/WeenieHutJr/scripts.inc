WeenieHutJr_MapScripts::
	.byte 0


WeenieHutJr_EventScript_DoorTriggerL::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	call WeenieHutJr_EventScript_DoorBlock
	release
	return


WeenieHutJr_EventScript_DoorTriggerR::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	call WeenieHutJr_EventScript_DoorBlock
	release
	return


WeenieHutJr_EventScript_DoorBlock::
	msgbox WeenieHutJr_Text_DoorBlockA
	closemessage
	compare VAR_SWHJ_STATE, 2
	goto_if_eq WeenieHutJr_EventScript_DoorBlock_2
	msgbox WeenieHutJr_Text_DoorBlockB
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
WeenieHutJr_EventScript_DoorBlock_1:
	return

WeenieHutJr_EventScript_DoorBlock_2:
	setvar VAR_SWHJ_STATE, 3
	msgbox WeenieHutJr_Text_DoorBlockC
	closemessage
	goto WeenieHutJr_EventScript_DoorBlock_1


WeenieHutJr_Text_DoorBlockA::
	.string "Hello. Welcome to Weenie Hut Junior's.$"

WeenieHutJr_Text_DoorBlockB::
	.string "This lounge is only for those few elite\n"
	.string "who graduate from Super Weenie Hut\l"
	.string "Junior's. I think that might be more\l"
	.string "your speed.$"

WeenieHutJr_Text_DoorBlockC::
	.string "Congratulations on your achievement!\n"
	.string "Enjoy your time at Weenie Hut Juniors!$"
