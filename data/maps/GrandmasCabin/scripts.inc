GrandmasCabin_MapScripts::
	.byte 0


GrandmasCabin_EventScript_EeveeFanfare::
	bufferspeciesname 1, SPECIES_EEVEE
	call GrandmasCabin_EventScript_FadeOut
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_SYS_POKEMON_GET
	addvar VAR_ROUTE101_STATE, 1
	message GrandmasCabin_ObtainedEevee
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_EEVEE
	return


GrandmasCabin_EventScript_FadeOut::
	fadescreen 1
	removeobject 1
	fadescreen 0
	return

GrandmasCabin_EventScript_GiveEevee::
	givemon SPECIES_EEVEE, 5, ITEM_NONE
	compare VAR_RESULT, 0
	goto_if_eq GrandmasCabin_EventScript_GiveEevee_2
GrandmasCabin_EventScript_GiveEevee_1:
	releaseall
	end

GrandmasCabin_EventScript_GiveEevee_2:
	call GrandmasCabin_EventScript_EeveeFanfare
	msgbox GrandmasCabin_EventScript_GiveEevee_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GrandmasCabin_EventScript_GiveEevee_5
GrandmasCabin_EventScript_GiveEevee_4:
	setflag FLAG_UNUSED_0x026
	goto GrandmasCabin_EventScript_GiveEevee_1

GrandmasCabin_EventScript_GiveEevee_5:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto GrandmasCabin_EventScript_GiveEevee_4


GrandmasCabin_EventScript_StarterMonEevee::
	lockall
	goto_if_set FLAG_SYS_POKEMON_GET, GrandmasCabin_EventScript_StarterMonEevee_1
	msgbox GrandmasCabin_EventScript_StarterMonEevee_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GrandmasCabin_EventScript_StarterMonEevee_5
	call GrandmasCabin_EventScript_GiveEevee
	releaseall
	end

GrandmasCabin_EventScript_StarterMonEevee_1:
	msgbox GrandmasCabin_EventScript_StarterMonEevee_Text_0
	releaseall
	end

GrandmasCabin_EventScript_StarterMonEevee_5:
	msgbox GrandmasCabin_EventScript_StarterMonEevee_Text_2
	releaseall
	end


GrandmasCabin_EventScript_GiveEevee_Text_0:
	.string "Would you like to give a nickname to\n"
	.string "Eevee?$"

GrandmasCabin_EventScript_StarterMonEevee_Text_0:
	.string "Sorry Eevee, you'll have to stay behind.$"

GrandmasCabin_EventScript_StarterMonEevee_Text_1:
	.string "Will you take Eevee with you?$"

GrandmasCabin_EventScript_StarterMonEevee_Text_2:
	.string "You decided not to bring Eevee.$"

GrandmasCabin_ObtainedEevee::
	.string "{PLAYER} obtained Eevee!$"
