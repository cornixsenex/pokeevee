SuperWeenieHutJr_MapScripts::
	.byte 0


SuperWeenieHutJr_EventScript_DoorTriggerL::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	call SuperWeenieHutJr_EventScript_DoorBlock
	release
	return


SuperWeenieHutJr_EventScript_DoorTriggerR::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	call SuperWeenieHutJr_EventScript_DoorBlock
	release
	return


SuperWeenieHutJr_EventScript_DoorBlock::
	msgbox SuperWeenieHutJr_Text_DoorBlockA
	closemessage
	goto_if_set FLAG_HEALTH_INSURANCE_OBTAINED, SuperWeenieHutJr_EventScript_DoorBlock_2
	msgbox SuperWeenieHutJr_Text_DoorBlockB
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
SuperWeenieHutJr_EventScript_DoorBlock_1:
	return

SuperWeenieHutJr_EventScript_DoorBlock_2:
	setvar VAR_SWHJ_STATE, 1
	msgbox SuperWeenieHutJr_Text_DoorBlockC
	closemessage
	goto SuperWeenieHutJr_EventScript_DoorBlock_1


SuperWeenieHutJr_Text_DoorBlockA::
	.string "Hello there cutie tootie sunshine ray!\n"
	.string "Welcome to Super Weenie Hut Junior's\l"
	.string "where we make smiles and brighten your\l"
	.string "day. We just can't wait for you to play\l"
	.string "with us but first thing let's make sure\l"
	.string "you're insured.$"

SuperWeenieHutJr_Text_DoorBlockB::
	.string "Oh noodles! That's no good looks like\n"
	.string "you don't have insurance. At Super\l"
	.string "Weenie Hut Junior's safety is our\l"
	.string "priority and we don't want anyone to\l"
	.string "get hurt. I'm sorry but you will have to\l"
	.string "come back after getting insured. Have\l"
	.string "a good day!$"

SuperWeenieHutJr_Text_DoorBlockC::
	.string "Good news! You've been insured through\n"
	.string "Weenie Hut General. Welcome to Super\l"
	.string "Weenie Hut Juniors I hope you have an\l"
	.string "awesome time$"
