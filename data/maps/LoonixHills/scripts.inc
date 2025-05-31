LoonixHills_MapScripts::
	.byte 0


LoonixHills_Script_GiftBall::
# 4 "data/maps/LoonixHills/scripts.pory"
	lockall
# 5 "data/maps/LoonixHills/scripts.pory"
	msgbox LoonixHills_Text_GiftBall, MSGBOX_YESNO
# 6 "data/maps/LoonixHills/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LoonixHills_Script_GiftBall_1
# 11 "data/maps/LoonixHills/scripts.pory"
	givemon SPECIES_DIALGA, 4, ITEM_MASTER_BALL
# 12 "data/maps/LoonixHills/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LoonixHills_Script_GiftBall_5
# 21 "data/maps/LoonixHills/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LoonixHills_Script_GiftBall_6
# 31 "data/maps/LoonixHills/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
LoonixHills_Script_GiftBall_4:
# 33 "data/maps/LoonixHills/scripts.pory"
	releaseall
	end

LoonixHills_Script_GiftBall_1:
# 7 "data/maps/LoonixHills/scripts.pory"
	msgbox LoonixHillsGiftBallTextNo
# 8 "data/maps/LoonixHills/scripts.pory"
	releaseall
	end

LoonixHills_Script_GiftBall_5:
# 13 "data/maps/LoonixHills/scripts.pory"
	call LoonixHills_Script_DialgaFanfare
# 14 "data/maps/LoonixHills/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 15 "data/maps/LoonixHills/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixHills_Script_GiftBall_11
LoonixHills_Script_GiftBall_10:
# 19 "data/maps/LoonixHills/scripts.pory"
	setflag FLAG_LOONIXHILLS_GAVEDIALGA
	goto LoonixHills_Script_GiftBall_4

LoonixHills_Script_GiftBall_6:
# 22 "data/maps/LoonixHills/scripts.pory"
	call LoonixHills_Script_DialgaFanfare
# 23 "data/maps/LoonixHills/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 24 "data/maps/LoonixHills/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixHills_Script_GiftBall_14
# 27 "data/maps/LoonixHills/scripts.pory"
	call Common_EventScript_TransferredToPC
LoonixHills_Script_GiftBall_13:
# 29 "data/maps/LoonixHills/scripts.pory"
	setflag FLAG_LOONIXHILLS_GAVEDIALGA
	goto LoonixHills_Script_GiftBall_4

LoonixHills_Script_GiftBall_11:
# 16 "data/maps/LoonixHills/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 17 "data/maps/LoonixHills/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LoonixHills_Script_GiftBall_10

LoonixHills_Script_GiftBall_14:
# 25 "data/maps/LoonixHills/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto LoonixHills_Script_GiftBall_13


LoonixHills_Script_RockClimb::
# 39 "data/maps/LoonixHills/scripts.pory"
	lock
# 40 "data/maps/LoonixHills/scripts.pory"
	giveitem ITEM_HM08
# 41 "data/maps/LoonixHills/scripts.pory"
	release
	end


LoonixHills_Script_DialgaFanfare::
# 46 "data/maps/LoonixHills/scripts.pory"
	bufferspeciesname 1, SPECIES_DIALGA
# 47 "data/maps/LoonixHills/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 48 "data/maps/LoonixHills/scripts.pory"
	message LoonixHills_Text_ObtainedDialga
# 49 "data/maps/LoonixHills/scripts.pory"
	waitmessage
# 50 "data/maps/LoonixHills/scripts.pory"
	waitfanfare
# 51 "data/maps/LoonixHills/scripts.pory"
	bufferspeciesname 0, SPECIES_DIALGA
	return


LoonixHills_Script_CheckRivalName::
# 56 "data/maps/LoonixHills/scripts.pory"
	lock
# 57 "data/maps/LoonixHills/scripts.pory"
	msgbox LoonixHills_Script_CheckRivalName_Text_0
# 58 "data/maps/LoonixHills/scripts.pory"
	release
	end


LoonixHills_Script_SetRivalName::
# 63 "data/maps/LoonixHills/scripts.pory"
	lock
# 64 "data/maps/LoonixHills/scripts.pory"
	msgbox LoonixHills_Text_SetRivalName, MSGBOX_YESNO
# 65 "data/maps/LoonixHills/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixHills_Script_SetRivalName_2
LoonixHills_Script_SetRivalName_1:
# 69 "data/maps/LoonixHills/scripts.pory"
	release
	end

LoonixHills_Script_SetRivalName_2:
# 66 "data/maps/LoonixHills/scripts.pory"
	special NameRival
# 67 "data/maps/LoonixHills/scripts.pory"
	waitstate
	goto LoonixHills_Script_SetRivalName_1


LoonixHills_Script_CheckRivalName_Text_0:
# 57 "data/maps/LoonixHills/scripts.pory"
	.string "Your rival's name is {RIVAL}$"

LoonixHills_Text_SetRivalName::
# 73 "data/maps/LoonixHills/scripts.pory"
	.string "Would you like to change your rival's\n"
	.string "name?$"

LoonixHills_Text_GiftBall::
# 77 "data/maps/LoonixHills/scripts.pory"
	.string "This ball contains Dialga.\n"
	.string "Will you take it?$"

LoonixHills_Text_ObtainedDialga::
# 81 "data/maps/LoonixHills/scripts.pory"
	.string "{PLAYER} obtained Dialga!$"

LoonixHillsGiftBallTextNo::
# 85 "data/maps/LoonixHills/scripts.pory"
	.string "Best not to take that.$"
