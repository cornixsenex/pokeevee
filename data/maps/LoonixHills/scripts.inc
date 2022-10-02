LoonixHills_MapScripts::
	.byte 0


LoonixHills_Script_GiftBall::
	lockall
	msgbox LoonixHills_Text_GiftBall, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LoonixHills_Script_GiftBall_1
	givemon SPECIES_DIALGA, 4, ITEM_MASTER_BALL
	compare VAR_RESULT, 0
	goto_if_eq LoonixHills_Script_GiftBall_5
	compare VAR_RESULT, 1
	goto_if_eq LoonixHills_Script_GiftBall_6
	goto Common_EventScript_NoMoreRoomForPokemon
LoonixHills_Script_GiftBall_4:
	releaseall
	end

LoonixHills_Script_GiftBall_1:
	msgbox LoonixHillsGiftBallTextNo
	releaseall
	end

LoonixHills_Script_GiftBall_5:
	call LoonixHills_Script_DialgaFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LoonixHills_Script_GiftBall_11
LoonixHills_Script_GiftBall_10:
	setflag FLAG_UNUSED_0x024
	goto LoonixHills_Script_GiftBall_4

LoonixHills_Script_GiftBall_6:
	call LoonixHills_Script_DialgaFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LoonixHills_Script_GiftBall_14
	call Common_EventScript_TransferredToPC
LoonixHills_Script_GiftBall_13:
	setflag FLAG_UNUSED_0x024
	goto LoonixHills_Script_GiftBall_4

LoonixHills_Script_GiftBall_11:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LoonixHills_Script_GiftBall_10

LoonixHills_Script_GiftBall_14:
	call Common_EventScript_NameReceivedBoxMon
	goto LoonixHills_Script_GiftBall_13


LoonixHills_Script_RockClimb::
	lock
	giveitem ITEM_HM08_DIVE
	release
	end


LoonixHills_Script_DialgaFanfare::
	bufferspeciesname 1, SPECIES_DIALGA
	playfanfare MUS_OBTAIN_ITEM
	message LoonixHills_Text_ObtainedDialga
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_DIALGA
	return


LoonixHills_Script_CheckRivalName::
	lock
	msgbox LoonixHills_Script_CheckRivalName_Text_0
	release
	end


LoonixHills_Script_SetRivalName::
	lock
	msgbox LoonixHills_Text_SetRivalName, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LoonixHills_Script_SetRivalName_2
LoonixHills_Script_SetRivalName_1:
	release
	end

LoonixHills_Script_SetRivalName_2:
	special NameRival
	waitstate
	goto LoonixHills_Script_SetRivalName_1


LoonixHills_Script_CheckRivalName_Text_0:
	.string "Your rival's name is {RIVAL}$"

LoonixHills_Text_SetRivalName::
	.string "Would you like to change your rival's\n"
	.string "name?$"

LoonixHills_Text_GiftBall::
	.string "This ball contains Dialga.\n"
	.string "Will you take it?$"

LoonixHills_Text_ObtainedDialga::
	.string "{PLAYER} obtained Dialga!$"

LoonixHillsGiftBallTextNo::
	.string "Best not to take that.$"
