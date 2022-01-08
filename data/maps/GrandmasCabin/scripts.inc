GrandmasCabin_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call GrandmasCabin_HideMew
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_ROUTE1_STATE, 0, GrandmasCabin_HideMew
	map_script_2 VAR_ROUTE1_STATE, 1, GrandmasCabin_HideMew
	map_script_2 VAR_ROUTE1_STATE, 2, GrandmasCabin_HideMew
	map_script_2 VAR_ROUTE1_STATE, 3, GrandmasCabin_HideMew
	map_script_2 VAR_ROUTE1_STATE, 4, GrandmasCabin_HideMew
	map_script_2 VAR_ROUTE1_STATE, 5, GrandmasCabin_HideMew
	.2byte 0


GrandmasCabin_EventScript_Trigger::
	lockall
	call GrandmasCabin_EventScript_Mew
	setvar VAR_ROUTE1_STATE, 4
	setflag FLAG_UNUSED_0x027
	setflag FLAG_HIDE_GRANDMASCABIN_MEW
	releaseall
	end


GrandmasCabin_HideMew::
	removeobject 2
	end


GrandmasCabin_EventScript_Mew::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	playmoncry SPECIES_MEW, 0
	fadescreen 1
	waitmoncry
	removeobject 2
	fadescreen 0
	return


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


GrandmasCabin_Movement_Mew:
	face_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

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
