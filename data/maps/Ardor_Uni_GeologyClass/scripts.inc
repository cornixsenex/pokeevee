Ardor_Uni_GeologyClass_MapScripts::
	.byte 0


Ardor_Uni_GeologyClass_EventScript_FossilMachine::
# 10 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	lock
# 11 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_FossilMachine
# 12 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 13 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checktrainerflag TRAINER_UNI_GEOLOGY
	goto_if 1, Ardor_Uni_GeologyClass_EventScript_FossilMachine_2
Ardor_Uni_GeologyClass_EventScript_FossilMachine_1:
# 44 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	release
	end

Ardor_Uni_GeologyClass_EventScript_FossilMachine_2:
# 15 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_HELIX_FOSSIL
# 16 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_FossilMachine_5
Ardor_Uni_GeologyClass_EventScript_FossilMachine_4:
# 19 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_DOME_FOSSIL
# 20 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_FossilMachine_8
Ardor_Uni_GeologyClass_EventScript_FossilMachine_7:
# 23 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_OLD_AMBER
# 24 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_FossilMachine_11
Ardor_Uni_GeologyClass_EventScript_FossilMachine_10:
# 27 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 28 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_FossilMachine_14
Ardor_Uni_GeologyClass_EventScript_FossilMachine_13:
# 31 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 32 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_FossilMachine_17
Ardor_Uni_GeologyClass_EventScript_FossilMachine_16:
# 35 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_SKULL_FOSSIL
# 36 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_FossilMachine_20
Ardor_Uni_GeologyClass_EventScript_FossilMachine_19:
# 39 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_ARMOR_FOSSIL
# 40 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_FossilMachine_22
	goto Ardor_Uni_GeologyClass_EventScript_FossilMachine_1

Ardor_Uni_GeologyClass_EventScript_FossilMachine_5:
# 17 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_FossilMachine_4

Ardor_Uni_GeologyClass_EventScript_FossilMachine_8:
# 21 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_FossilMachine_7

Ardor_Uni_GeologyClass_EventScript_FossilMachine_11:
# 25 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_FossilMachine_10

Ardor_Uni_GeologyClass_EventScript_FossilMachine_14:
# 29 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_FossilMachine_13

Ardor_Uni_GeologyClass_EventScript_FossilMachine_17:
# 33 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_FossilMachine_16

Ardor_Uni_GeologyClass_EventScript_FossilMachine_20:
# 37 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_FossilMachine_19

Ardor_Uni_GeologyClass_EventScript_FossilMachine_22:
# 41 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_FossilMachine_1


Ardor_Uni_GeologyClass_EventScript_MachineEnd::
# 49 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_NextTime
# 50 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
	end


Ardor_Uni_GeologyClass_EventScript_GiveHelix::
# 55 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	removeitem ITEM_HELIX_FOSSIL
# 56 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HELIX_FOSSIL
# 57 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_OMANYTE
# 58 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_GiveFossil
# 59 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 60 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	givemon SPECIES_OMANYTE, 1
# 61 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveHelix_2
# 72 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveHelix_3
# 84 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
Ardor_Uni_GeologyClass_EventScript_GiveHelix_1:
# 86 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_MachineEnd
	return

Ardor_Uni_GeologyClass_EventScript_GiveHelix_2:
# 62 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 63 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 64 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 65 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 66 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
# 67 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 68 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveHelix_7
	goto Ardor_Uni_GeologyClass_EventScript_GiveHelix_1

Ardor_Uni_GeologyClass_EventScript_GiveHelix_3:
# 73 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 75 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 76 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 77 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
# 78 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 79 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveHelix_10
Ardor_Uni_GeologyClass_EventScript_GiveHelix_9:
# 82 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto Ardor_Uni_GeologyClass_EventScript_GiveHelix_1

Ardor_Uni_GeologyClass_EventScript_GiveHelix_7:
# 69 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 70 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveHelix_1

Ardor_Uni_GeologyClass_EventScript_GiveHelix_10:
# 80 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveHelix_9


Ardor_Uni_GeologyClass_EventScript_GiveDome::
# 90 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	removeitem ITEM_DOME_FOSSIL
# 91 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DOME_FOSSIL
# 92 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_KABUTO
# 93 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_GiveFossil
# 94 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 95 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	givemon SPECIES_KABUTO, 1
# 96 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveDome_2
# 107 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveDome_3
# 119 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
Ardor_Uni_GeologyClass_EventScript_GiveDome_1:
# 121 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_MachineEnd
	return

Ardor_Uni_GeologyClass_EventScript_GiveDome_2:
# 97 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 98 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 99 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 100 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 101 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
# 102 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 103 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveDome_7
	goto Ardor_Uni_GeologyClass_EventScript_GiveDome_1

Ardor_Uni_GeologyClass_EventScript_GiveDome_3:
# 108 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 109 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 110 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 111 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 112 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
# 113 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 114 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveDome_10
Ardor_Uni_GeologyClass_EventScript_GiveDome_9:
# 117 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto Ardor_Uni_GeologyClass_EventScript_GiveDome_1

Ardor_Uni_GeologyClass_EventScript_GiveDome_7:
# 104 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 105 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveDome_1

Ardor_Uni_GeologyClass_EventScript_GiveDome_10:
# 115 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveDome_9


Ardor_Uni_GeologyClass_EventScript_GiveOldAmber::
# 125 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	removeitem ITEM_OLD_AMBER
# 126 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_OLD_AMBER
# 127 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_AERODACTYL
# 128 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_GiveFossil
# 129 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 130 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	givemon SPECIES_AERODACTYL, 1
# 131 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_2
# 142 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_3
# 154 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_1:
# 156 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_MachineEnd
	return

Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_2:
# 132 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 133 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 134 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 135 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 136 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
# 137 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 138 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_7
	goto Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_1

Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_3:
# 143 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 144 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 145 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 146 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 147 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
# 148 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 149 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_10
Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_9:
# 152 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_1

Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_7:
# 139 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 140 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_1

Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_10:
# 150 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveOldAmber_9


Ardor_Uni_GeologyClass_EventScript_GiveRoot::
# 160 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 161 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 162 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 163 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_GiveFossil
# 164 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 165 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	givemon SPECIES_LILEEP, 1
# 166 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveRoot_2
# 177 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveRoot_3
# 189 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
Ardor_Uni_GeologyClass_EventScript_GiveRoot_1:
# 191 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_MachineEnd
	return

Ardor_Uni_GeologyClass_EventScript_GiveRoot_2:
# 167 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 168 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 169 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 170 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 171 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
# 172 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 173 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveRoot_7
	goto Ardor_Uni_GeologyClass_EventScript_GiveRoot_1

Ardor_Uni_GeologyClass_EventScript_GiveRoot_3:
# 178 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 179 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 180 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 181 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 182 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
# 183 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 184 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveRoot_10
Ardor_Uni_GeologyClass_EventScript_GiveRoot_9:
# 187 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto Ardor_Uni_GeologyClass_EventScript_GiveRoot_1

Ardor_Uni_GeologyClass_EventScript_GiveRoot_7:
# 174 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 175 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveRoot_1

Ardor_Uni_GeologyClass_EventScript_GiveRoot_10:
# 185 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveRoot_9


Ardor_Uni_GeologyClass_EventScript_GiveClaw::
# 195 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 196 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 197 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 198 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_GiveFossil
# 199 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 200 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	givemon SPECIES_ANORITH, 1
# 201 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveClaw_2
# 212 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveClaw_3
# 224 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
Ardor_Uni_GeologyClass_EventScript_GiveClaw_1:
# 226 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_MachineEnd
	return

Ardor_Uni_GeologyClass_EventScript_GiveClaw_2:
# 202 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 203 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 204 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 205 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 206 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
# 207 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 208 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveClaw_7
	goto Ardor_Uni_GeologyClass_EventScript_GiveClaw_1

Ardor_Uni_GeologyClass_EventScript_GiveClaw_3:
# 213 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 214 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 215 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 216 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 217 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
# 218 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 219 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveClaw_10
Ardor_Uni_GeologyClass_EventScript_GiveClaw_9:
# 222 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto Ardor_Uni_GeologyClass_EventScript_GiveClaw_1

Ardor_Uni_GeologyClass_EventScript_GiveClaw_7:
# 209 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 210 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveClaw_1

Ardor_Uni_GeologyClass_EventScript_GiveClaw_10:
# 220 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveClaw_9


Ardor_Uni_GeologyClass_EventScript_GiveSkull::
# 230 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	removeitem ITEM_SKULL_FOSSIL
# 231 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SKULL_FOSSIL
# 232 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CRANIDOS
# 233 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_GiveFossil
# 234 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 235 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	givemon SPECIES_CRANIDOS, 1
# 236 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveSkull_2
# 247 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveSkull_3
# 259 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
Ardor_Uni_GeologyClass_EventScript_GiveSkull_1:
# 261 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_MachineEnd
	return

Ardor_Uni_GeologyClass_EventScript_GiveSkull_2:
# 237 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 238 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 239 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 240 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 241 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CRANIDOS
# 242 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 243 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveSkull_7
	goto Ardor_Uni_GeologyClass_EventScript_GiveSkull_1

Ardor_Uni_GeologyClass_EventScript_GiveSkull_3:
# 248 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 249 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 250 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 251 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 252 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CRANIDOS
# 253 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 254 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveSkull_10
Ardor_Uni_GeologyClass_EventScript_GiveSkull_9:
# 257 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto Ardor_Uni_GeologyClass_EventScript_GiveSkull_1

Ardor_Uni_GeologyClass_EventScript_GiveSkull_7:
# 244 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 245 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveSkull_1

Ardor_Uni_GeologyClass_EventScript_GiveSkull_10:
# 255 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveSkull_9


Ardor_Uni_GeologyClass_EventScript_GiveArmor::
# 265 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	removeitem ITEM_ARMOR_FOSSIL
# 266 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ARMOR_FOSSIL
# 267 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SHIELDON
# 268 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_GiveFossil
# 269 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 270 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	givemon SPECIES_SHIELDON, 1
# 271 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveArmor_2
# 282 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveArmor_3
# 294 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
Ardor_Uni_GeologyClass_EventScript_GiveArmor_1:
# 296 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_MachineEnd
	return

Ardor_Uni_GeologyClass_EventScript_GiveArmor_2:
# 272 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 273 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 274 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 275 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 276 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHIELDON
# 277 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 278 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveArmor_7
	goto Ardor_Uni_GeologyClass_EventScript_GiveArmor_1

Ardor_Uni_GeologyClass_EventScript_GiveArmor_3:
# 283 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 284 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ObtainedPokemon
# 285 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 286 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitfanfare
# 287 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHIELDON
# 288 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 289 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_GiveArmor_10
Ardor_Uni_GeologyClass_EventScript_GiveArmor_9:
# 292 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto Ardor_Uni_GeologyClass_EventScript_GiveArmor_1

Ardor_Uni_GeologyClass_EventScript_GiveArmor_7:
# 279 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 280 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveArmor_1

Ardor_Uni_GeologyClass_EventScript_GiveArmor_10:
# 290 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto Ardor_Uni_GeologyClass_EventScript_GiveArmor_9


Ardor_Uni_GeologyClass_EventScript_ChooseFossil::
# 300 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_FossilYN, MSGBOX_YESNO
# 301 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_ChooseFossil_2
Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1:
# 386 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_MachineEnd
	return

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_2:
# 302 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_WhichFossil
# 303 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	multichoice 0, 0, MULTI_CHOOSE_FOSSIL, FALSE
# 304 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	switch VAR_RESULT
# 306 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	case 0, Ardor_Uni_GeologyClass_EventScript_ChooseFossil_5
# 317 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	case 1, Ardor_Uni_GeologyClass_EventScript_ChooseFossil_6
# 328 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	case 2, Ardor_Uni_GeologyClass_EventScript_ChooseFossil_7
# 339 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	case 3, Ardor_Uni_GeologyClass_EventScript_ChooseFossil_8
# 350 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	case 4, Ardor_Uni_GeologyClass_EventScript_ChooseFossil_9
# 361 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	case 5, Ardor_Uni_GeologyClass_EventScript_ChooseFossil_10
# 372 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	case 6, Ardor_Uni_GeologyClass_EventScript_ChooseFossil_11
# 383 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_MachineEnd
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_5:
# 307 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_HELIX_FOSSIL
# 308 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_ChooseFossil_13
# 311 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HELIX_FOSSIL
# 312 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_NoFossil
# 313 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 314 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_6:
# 318 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_DOME_FOSSIL
# 319 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_ChooseFossil_16
# 322 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DOME_FOSSIL
# 323 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_NoFossil
# 324 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 325 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_7:
# 329 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_OLD_AMBER
# 330 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_ChooseFossil_19
# 333 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_OLD_AMBER
# 334 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_NoFossil
# 335 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 336 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_8:
# 340 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 341 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_ChooseFossil_22
# 344 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 345 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_NoFossil
# 346 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 347 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_9:
# 351 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 352 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_ChooseFossil_25
# 355 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 356 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_NoFossil
# 357 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 358 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_10:
# 362 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_SKULL_FOSSIL
# 363 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_ChooseFossil_28
# 366 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SKULL_FOSSIL
# 367 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_NoFossil
# 368 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 369 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_11:
# 373 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checkitem ITEM_ARMOR_FOSSIL
# 374 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_ChooseFossil_31
# 377 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ARMOR_FOSSIL
# 378 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_NoFossil
# 379 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 380 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ChooseFossil
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_13:
# 309 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_GiveHelix
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_16:
# 320 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_GiveDome
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_19:
# 331 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_GiveOldAmber
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_22:
# 342 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_GiveRoot
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_25:
# 353 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_GiveClaw
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_28:
# 364 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_GiveSkull
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1

Ardor_Uni_GeologyClass_EventScript_ChooseFossil_31:
# 375 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_GiveArmor
	goto Ardor_Uni_GeologyClass_EventScript_ChooseFossil_1


Ardor_Uni_GeologyClass_EventScript_Teacher::
# 390 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	lock
# 391 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	faceplayer
# 392 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	checktrainerflag TRAINER_UNI_GEOLOGY
	goto_if 1, Ardor_Uni_GeologyClass_EventScript_Teacher_2
# 395 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	goto_if_set FLAG_GEOLOGY_INTRO, Ardor_Uni_GeologyClass_EventScript_Teacher_3
# 415 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_ClassIntro
Ardor_Uni_GeologyClass_EventScript_Teacher_1:
# 417 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 418 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	waitmovement 0
# 419 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	release
	end

Ardor_Uni_GeologyClass_EventScript_Teacher_2:
# 393 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ClassFinished
# 394 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
	goto Ardor_Uni_GeologyClass_EventScript_Teacher_1

Ardor_Uni_GeologyClass_EventScript_Teacher_3:
# 397 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	specialvar VAR_RESULT, IsRockTypeInParty
# 398 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_Teacher_8
# 401 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_BringRockType
# 402 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
Ardor_Uni_GeologyClass_EventScript_Teacher_7:
# 404 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	specialvar VAR_RESULT, IsGroundTypeInParty
# 405 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_GeologyClass_EventScript_Teacher_12
# 408 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_BringGroundType
# 409 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
Ardor_Uni_GeologyClass_EventScript_Teacher_11:
# 411 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	goto_if_set FLAG_TEMP_1, Ardor_Uni_GeologyClass_EventScript_Teacher_16
	goto Ardor_Uni_GeologyClass_EventScript_Teacher_1

Ardor_Uni_GeologyClass_EventScript_Teacher_8:
# 399 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	setflag FLAG_TEMP_1
	goto Ardor_Uni_GeologyClass_EventScript_Teacher_7

Ardor_Uni_GeologyClass_EventScript_Teacher_12:
# 406 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	setflag FLAG_TEMP_2
	goto Ardor_Uni_GeologyClass_EventScript_Teacher_11

Ardor_Uni_GeologyClass_EventScript_Teacher_15:
# 412 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_GeologyClass_EventScript_Test
	goto Ardor_Uni_GeologyClass_EventScript_Teacher_1

Ardor_Uni_GeologyClass_EventScript_Teacher_16:
# 411 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	goto_if_set FLAG_TEMP_2, Ardor_Uni_GeologyClass_EventScript_Teacher_15
	goto Ardor_Uni_GeologyClass_EventScript_Teacher_1


Ardor_Uni_GeologyClass_EventScript_ClassIntro::
# 424 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	setflag FLAG_GEOLOGY_INTRO
# 425 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ClassIntro
# 426 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 427 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_BringRockType
# 428 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 429 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_BringGroundType
# 430 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
	return


Ardor_Uni_GeologyClass_EventScript_Test::
# 436 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_Test
# 437 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 438 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 439 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
# 440 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_GEOLOGY, Ardor_Uni_GeologyClass_Text_TeacherBattleLost
# 441 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 442 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	msgbox Ardor_Uni_GeologyClass_Text_ClassFinished
# 443 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	closemessage
	return


Ardor_Uni_Text_TestIntro::
# 447 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "Tempus iam est examinis.$"

Ardor_Uni_GeologyClass_Text_FossilMachine::
# 451 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "It's a machine used to ressurect fossil\n"
	.string "{PKMN}.$"

Ardor_Uni_GeologyClass_Text_NextTime::
# 455 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "Better come back later with more\n"
	.string "fossils to ressurect.$"

Ardor_Uni_GeologyClass_Text_FossilYN::
# 459 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "Will you put a fossil into the machine?$"

Ardor_Uni_GeologyClass_Text_GiveFossil::
# 463 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "{PLAYER} put the {STR_VAR_1} into\n"
	.string "the machine.$"

Ardor_Uni_GeologyClass_Text_ObtainedPokemon::
# 467 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2}\n"
	.string "from the machine.$"

Ardor_Uni_GeologyClass_Text_NoFossil::
# 471 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "{PLAYER} does not have any\n"
	.string "{STR_VAR_1}!$"

Ardor_Uni_GeologyClass_Text_WhichFossil::
# 475 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "Which type of fossil will you put into\n"
	.string "the machine?$"

Ardor_Uni_GeologyClass_Text_ClassFinished::
# 479 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "Congratulatio! Iam studuisti Geologiam.\n"
	.string "Usa machinam quando volas.$"

Ardor_Uni_GeologyClass_Text_TeacherBattleLost::
# 483 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "Lapides tui superiores sunt.$"

Ardor_Uni_GeologyClass_Text_Test::
# 487 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "Revenisti cum monstro lapidis et\n"
	.string "monstro telluris!$"

Ardor_Uni_GeologyClass_Text_BringGroundType::
# 491 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "Reveni cum monstro telluris.$"

Ardor_Uni_GeologyClass_Text_BringRockType::
# 495 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "Reveni cum monstro lapidis.$"

Ardor_Uni_GeologyClass_Text_ClassIntro::
# 499 "data/maps/Ardor_Uni_GeologyClass/scripts.pory"
	.string "Salve puer. Magister Patricius sum.\n"
	.string "Necesse est tibi docere scientiam\l"
	.string "geologiae. Geologia studium est lapidum\l"
	.string "et tellurum.$"
