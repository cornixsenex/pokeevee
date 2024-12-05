LoonixGiftHouse_MapScripts::
	.byte 0


LoonixGiftBall::
# 4 "data/maps/LoonixGiftHouse/scripts.pory"
	lockall
# 5 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox LoonixGiftBallText, MSGBOX_YESNO
# 6 "data/maps/LoonixGiftHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LoonixGiftBall_1
# 12 "data/maps/LoonixGiftHouse/scripts.pory"
	givemon SPECIES_MEW, 5, ITEM_ORAN_BERRY
# 13 "data/maps/LoonixGiftHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LoonixGiftBall_5
# 22 "data/maps/LoonixGiftHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LoonixGiftBall_6
# 32 "data/maps/LoonixGiftHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
LoonixGiftBall_4:
# 34 "data/maps/LoonixGiftHouse/scripts.pory"
	releaseall
	end

LoonixGiftBall_1:
# 7 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox LoonixGiftBallTextNo
# 8 "data/maps/LoonixGiftHouse/scripts.pory"
	releaseall
	end

LoonixGiftBall_5:
# 14 "data/maps/LoonixGiftHouse/scripts.pory"
	call LoonixGiftHouse_MewFanfare
# 15 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 16 "data/maps/LoonixGiftHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixGiftBall_11
LoonixGiftBall_10:
# 20 "data/maps/LoonixGiftHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
	goto LoonixGiftBall_4

LoonixGiftBall_6:
# 23 "data/maps/LoonixGiftHouse/scripts.pory"
	call LoonixGiftHouse_MewFanfare
# 24 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 25 "data/maps/LoonixGiftHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixGiftBall_14
# 28 "data/maps/LoonixGiftHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
LoonixGiftBall_13:
# 30 "data/maps/LoonixGiftHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
	goto LoonixGiftBall_4

LoonixGiftBall_11:
# 17 "data/maps/LoonixGiftHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 18 "data/maps/LoonixGiftHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LoonixGiftBall_10

LoonixGiftBall_14:
# 26 "data/maps/LoonixGiftHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto LoonixGiftBall_13


LoonixGiftEgg::
# 40 "data/maps/LoonixGiftHouse/scripts.pory"
	lock
# 41 "data/maps/LoonixGiftHouse/scripts.pory"
	faceplayer
# 42 "data/maps/LoonixGiftHouse/scripts.pory"
	goto_if_set FLAG_UNUSED_0x021, LoonixGiftEgg_1
# 47 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox LoonixGiftHouse_WantEggText, MSGBOX_YESNO
# 48 "data/maps/LoonixGiftHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LoonixGiftEgg_4
# 53 "data/maps/LoonixGiftHouse/scripts.pory"
	getpartysize
# 54 "data/maps/LoonixGiftHouse/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LoonixGiftEgg_7
# 59 "data/maps/LoonixGiftHouse/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 60 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox LoonixGiftHouse_TakeCare
# 61 "data/maps/LoonixGiftHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 62 "data/maps/LoonixGiftHouse/scripts.pory"
	message LoonixGiftHouse_EggText
# 63 "data/maps/LoonixGiftHouse/scripts.pory"
	waitfanfare
# 64 "data/maps/LoonixGiftHouse/scripts.pory"
	giveegg SPECIES_PICHU
# 65 "data/maps/LoonixGiftHouse/scripts.pory"
	release
	end

LoonixGiftEgg_1:
# 43 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox LoonixGiftHouse_SomethingNice
# 44 "data/maps/LoonixGiftHouse/scripts.pory"
	release
	end

LoonixGiftEgg_4:
# 49 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox LoonixGiftHouse_NoEggText
# 50 "data/maps/LoonixGiftHouse/scripts.pory"
	release
	end

LoonixGiftEgg_7:
# 55 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox LoonixGiftHouse_NoRoomForEgg
# 56 "data/maps/LoonixGiftHouse/scripts.pory"
	release
	end


LoonixGiftArbok::
# 73 "data/maps/LoonixGiftHouse/scripts.pory"
	lock
# 74 "data/maps/LoonixGiftHouse/scripts.pory"
	faceplayer
# 75 "data/maps/LoonixGiftHouse/scripts.pory"
	goto_if_set FLAG_UNUSED_0x022, LoonixGiftArbok_1
# 80 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox LoonixGiftHouse_WantArbok, MSGBOX_YESNO
# 81 "data/maps/LoonixGiftHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LoonixGiftArbok_5
# 86 "data/maps/LoonixGiftHouse/scripts.pory"
	givemon SPECIES_ARBOK, 5, ITEM_ORAN_BERRY
# 87 "data/maps/LoonixGiftHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LoonixGiftArbok_8
# 97 "data/maps/LoonixGiftHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LoonixGiftArbok_9
# 108 "data/maps/LoonixGiftHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
LoonixGiftArbok_4:
# 111 "data/maps/LoonixGiftHouse/scripts.pory"
	release
	end

LoonixGiftArbok_1:
# 76 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox LoonixGiftHouse_HowsArbok
# 77 "data/maps/LoonixGiftHouse/scripts.pory"
	release
	end

LoonixGiftArbok_5:
# 82 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox LoonixGiftHouse_NoArbok
# 83 "data/maps/LoonixGiftHouse/scripts.pory"
	release
	end

LoonixGiftArbok_8:
# 88 "data/maps/LoonixGiftHouse/scripts.pory"
	call LoonixGiftHouse_ArbokFanfare
# 89 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 90 "data/maps/LoonixGiftHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixGiftArbok_14
LoonixGiftArbok_13:
# 94 "data/maps/LoonixGiftHouse/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 95 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox LoonixGiftHouse_EnjoyArbok
	goto LoonixGiftArbok_4

LoonixGiftArbok_9:
# 98 "data/maps/LoonixGiftHouse/scripts.pory"
	call LoonixGiftHouse_ArbokFanfare
# 99 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 100 "data/maps/LoonixGiftHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LoonixGiftArbok_17
# 103 "data/maps/LoonixGiftHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
LoonixGiftArbok_16:
# 105 "data/maps/LoonixGiftHouse/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 106 "data/maps/LoonixGiftHouse/scripts.pory"
	msgbox LoonixGiftHouse_EnjoyArbok
	goto LoonixGiftArbok_4

LoonixGiftArbok_14:
# 91 "data/maps/LoonixGiftHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 92 "data/maps/LoonixGiftHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LoonixGiftArbok_13

LoonixGiftArbok_17:
# 101 "data/maps/LoonixGiftHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto LoonixGiftArbok_16


LoonixGiftHouse_ArbokFanfare::
# 117 "data/maps/LoonixGiftHouse/scripts.pory"
	bufferspeciesname 1, SPECIES_ARBOK
# 118 "data/maps/LoonixGiftHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 119 "data/maps/LoonixGiftHouse/scripts.pory"
	message LoonixGiftHouse_ObtainedArbok
# 120 "data/maps/LoonixGiftHouse/scripts.pory"
	waitmessage
# 121 "data/maps/LoonixGiftHouse/scripts.pory"
	waitfanfare
# 122 "data/maps/LoonixGiftHouse/scripts.pory"
	bufferspeciesname 0, SPECIES_ARBOK
	return


LoonixGiftHouse_MewFanfare::
# 128 "data/maps/LoonixGiftHouse/scripts.pory"
	bufferspeciesname 1, SPECIES_MEW
# 129 "data/maps/LoonixGiftHouse/scripts.pory"
	removeobject 1
# 130 "data/maps/LoonixGiftHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 131 "data/maps/LoonixGiftHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 132 "data/maps/LoonixGiftHouse/scripts.pory"
	message LoonixGiftBallText_ObtainedMew
# 133 "data/maps/LoonixGiftHouse/scripts.pory"
	waitmessage
# 134 "data/maps/LoonixGiftHouse/scripts.pory"
	waitfanfare
# 135 "data/maps/LoonixGiftHouse/scripts.pory"
	bufferspeciesname 0, SPECIES_MEW
	return


LoonixGiftHouse_Item_Kind_Bud::
# 140 "data/maps/LoonixGiftHouse/scripts.pory"
	lock
# 141 "data/maps/LoonixGiftHouse/scripts.pory"
	faceplayer
# 142 "data/maps/LoonixGiftHouse/scripts.pory"
	giveitem ITEM_KIND_BUD, 1
# 155 "data/maps/LoonixGiftHouse/scripts.pory"
	release
	end


LoonixGiftHouse_Kind_Bud_Find::
# 159 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "GIVEITEM ITEM_POTION$"

LoonixGiftHouse_Item_Kind_Bud_Deny::
# 163 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "I've already got enough to smoke.\n"
	.string "Better come back later!$"

LoonixGiftBallTextNo::
# 167 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "Best not to take that.$"

LoonixGiftBallText::
# 171 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "This PokeBall contains MEW.\p"
	.string "Will you take it?$"

LoonixGiftBallText_ObtainedMew::
# 176 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "{PLAYER} obtained Mew!$"

LoonixGiftHouse_SomethingNice::
# 180 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "I hope something nice hatches soon!$"

LoonixGiftHouse_WantEggText::
# 184 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "Hey, could you please watch this egg\n"
	.string "for me?$"

LoonixGiftHouse_NoRoomForEgg::
# 188 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "Sorry, looks like you don't have room.\n"
	.string "Come back later!$"

LoonixGiftHouse_TakeCare::
# 192 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "Make sure you take good care of it!$"

LoonixGiftHouse_EggText::
# 196 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "{PLAYER} obtained an EGG$"

LoonixGiftHouse_NoEggText::
# 200 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "Okay, well let me know if you change\n"
	.string "your mind.$"

LoonixGiftHouse_HowsArbok::
# 205 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "Hey! How's ARBOK been doing?$"

LoonixGiftHouse_WantArbok::
# 209 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "Hey! I've got an ARBOK for you if you'd\n"
	.string "like.$"

LoonixGiftHouse_NoArbok::
# 213 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "That's allright, just come back if you\n"
	.string "change your mind!$"

LoonixGiftHouse_EnjoyArbok::
# 217 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "Right on, you take good care of ARBOK\n"
	.string "now you hear?$"

LoonixGiftHouse_ObtainedArbok::
# 221 "data/maps/LoonixGiftHouse/scripts.pory"
	.string "{PLAYER} obtained ARBOK$"
