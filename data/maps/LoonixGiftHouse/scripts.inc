LoonixGiftHouse_MapScripts::
	.byte 0


LoonixGiftBall::
	lockall
	msgbox LoonixGiftBallText, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LoonixGiftBall_1
	givemon SPECIES_MEW, 5, ITEM_ORAN_BERRY
	compare VAR_RESULT, 0
	goto_if_eq LoonixGiftBall_5
	compare VAR_RESULT, 1
	goto_if_eq LoonixGiftBall_6
	goto Common_EventScript_NoMoreRoomForPokemon
LoonixGiftBall_4:
	releaseall
	end

LoonixGiftBall_1:
	msgbox LoonixGiftBallTextNo
	releaseall
	end

LoonixGiftBall_5:
	call LoonixGiftHouse_MewFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LoonixGiftBall_11
LoonixGiftBall_10:
	setflag FLAG_UNUSED_0x020
	goto LoonixGiftBall_4

LoonixGiftBall_6:
	call LoonixGiftHouse_MewFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LoonixGiftBall_14
	call Common_EventScript_TransferredToPC
LoonixGiftBall_13:
	setflag FLAG_UNUSED_0x020
	goto LoonixGiftBall_4

LoonixGiftBall_11:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LoonixGiftBall_10

LoonixGiftBall_14:
	call Common_EventScript_NameReceivedBoxMon
	goto LoonixGiftBall_13


LoonixGiftEgg::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x021, LoonixGiftEgg_1
	msgbox LoonixGiftHouse_WantEggText, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LoonixGiftEgg_4
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LoonixGiftEgg_7
	setflag FLAG_UNUSED_0x021
	msgbox LoonixGiftHouse_TakeCare
	playfanfare MUS_OBTAIN_ITEM
	message LoonixGiftHouse_EggText
	waitfanfare
	giveegg SPECIES_PICHU
	release
	end

LoonixGiftEgg_1:
	msgbox LoonixGiftHouse_SomethingNice
	release
	end

LoonixGiftEgg_4:
	msgbox LoonixGiftHouse_NoEggText
	release
	end

LoonixGiftEgg_7:
	msgbox LoonixGiftHouse_NoRoomForEgg
	release
	end


LoonixGiftArbok::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x022, LoonixGiftArbok_1
	msgbox LoonixGiftHouse_WantArbok, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LoonixGiftArbok_5
	givemon SPECIES_ARBOK, 5, ITEM_ORAN_BERRY
	compare VAR_RESULT, 0
	goto_if_eq LoonixGiftArbok_8
	compare VAR_RESULT, 1
	goto_if_eq LoonixGiftArbok_9
	goto Common_EventScript_NoMoreRoomForPokemon
LoonixGiftArbok_4:
	release
	end

LoonixGiftArbok_1:
	msgbox LoonixGiftHouse_HowsArbok
	release
	end

LoonixGiftArbok_5:
	msgbox LoonixGiftHouse_NoArbok
	release
	end

LoonixGiftArbok_8:
	call LoonixGiftHouse_ArbokFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LoonixGiftArbok_14
LoonixGiftArbok_13:
	setflag FLAG_UNUSED_0x022
	msgbox LoonixGiftHouse_EnjoyArbok
	goto LoonixGiftArbok_4

LoonixGiftArbok_9:
	call LoonixGiftHouse_ArbokFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LoonixGiftArbok_17
	call Common_EventScript_TransferredToPC
LoonixGiftArbok_16:
	setflag FLAG_UNUSED_0x022
	msgbox LoonixGiftHouse_EnjoyArbok
	goto LoonixGiftArbok_4

LoonixGiftArbok_14:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LoonixGiftArbok_13

LoonixGiftArbok_17:
	call Common_EventScript_NameReceivedBoxMon
	goto LoonixGiftArbok_16


LoonixGiftHouse_ArbokFanfare::
	bufferspeciesname 1, SPECIES_ARBOK
	playfanfare MUS_OBTAIN_ITEM
	message LoonixGiftHouse_ObtainedArbok
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_ARBOK
	return


LoonixGiftHouse_MewFanfare::
	bufferspeciesname 1, SPECIES_MEW
	removeobject 1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_SYS_POKEMON_GET
	message LoonixGiftBallText_ObtainedMew
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_MEW
	return


LoonixGiftHouse_Item_Kind_Bud::
	lock
	faceplayer
	giveitem ITEM_POTION
	release
	end


LoonixGiftHouse_Kind_Bud_Find::
	.string "GIVEITEM ITEM_POTION$"

LoonixGiftHouse_Item_Kind_Bud_Deny::
	.string "I've already got enough to smoke.\n"
	.string "Better come back later!$"

LoonixGiftBallTextNo::
	.string "Best not to take that.$"

LoonixGiftBallText::
	.string "This PokeBall contains MEW.\p"
	.string "Will you take it?$"

LoonixGiftBallText_ObtainedMew::
	.string "{PLAYER} obtained Mew!$"

LoonixGiftHouse_SomethingNice::
	.string "I hope something nice hatches soon!$"

LoonixGiftHouse_WantEggText::
	.string "Hey, could you please watch this egg\n"
	.string "for me?$"

LoonixGiftHouse_NoRoomForEgg::
	.string "Sorry, looks like you don't have room.\n"
	.string "Come back later!$"

LoonixGiftHouse_TakeCare::
	.string "Make sure you take good care of it!$"

LoonixGiftHouse_EggText::
	.string "{PLAYER} obtained an EGG$"

LoonixGiftHouse_NoEggText::
	.string "Okay, well let me know if you change\n"
	.string "your mind.$"

LoonixGiftHouse_HowsArbok::
	.string "Hey! How's ARBOK been doing?$"

LoonixGiftHouse_WantArbok::
	.string "Hey! I've got an ARBOK for you if you'd\n"
	.string "like.$"

LoonixGiftHouse_NoArbok::
	.string "That's allright, just come back if you\n"
	.string "change your mind!$"

LoonixGiftHouse_EnjoyArbok::
	.string "Right on, you take good care of ARBOK\n"
	.string "now you hear?$"

LoonixGiftHouse_ObtainedArbok::
	.string "{PLAYER} obtained ARBOK$"
