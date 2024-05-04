GrandmasCabin_MapScripts::
# 2 "data/maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/GrandmasCabin/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, GrandmasCabin_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_HideMew
	return

GrandmasCabin_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/GrandmasCabin/scripts.pory"
	map_script_2 VAR_ROUTE1_STATE, 0, GrandmasCabin_HideMew
# 8 "data/maps/GrandmasCabin/scripts.pory"
	map_script_2 VAR_ROUTE1_STATE, 1, GrandmasCabin_HideMew
# 9 "data/maps/GrandmasCabin/scripts.pory"
	map_script_2 VAR_ROUTE1_STATE, 2, GrandmasCabin_HideMew
# 10 "data/maps/GrandmasCabin/scripts.pory"
	map_script_2 VAR_ROUTE1_STATE, 3, GrandmasCabin_HideMew
# 11 "data/maps/GrandmasCabin/scripts.pory"
	map_script_2 VAR_ROUTE1_STATE, 4, GrandmasCabin_HideMew
# 12 "data/maps/GrandmasCabin/scripts.pory"
	map_script_2 VAR_ROUTE1_STATE, 5, GrandmasCabin_HideMew
	.2byte 0


GrandmasCabin_EventScript_Trigger::
# 17 "data/maps/GrandmasCabin/scripts.pory"
	lockall
# 18 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_EventScript_Mew
# 19 "data/maps/GrandmasCabin/scripts.pory"
	setvar VAR_ROUTE1_STATE, 4
# 20 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 21 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_HIDE_GRANDMASCABIN_MEW
# 22 "data/maps/GrandmasCabin/scripts.pory"
	releaseall
	end


GrandmasCabin_HideMew::
# 27 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 2
	end


GrandmasCabin_EventScript_Mew::
# 34 "data/maps/GrandmasCabin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 35 "data/maps/GrandmasCabin/scripts.pory"
	waitmovement 0
# 36 "data/maps/GrandmasCabin/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 37 "data/maps/GrandmasCabin/scripts.pory"
	fadescreen 1
# 38 "data/maps/GrandmasCabin/scripts.pory"
	waitmoncry
# 39 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 2
# 40 "data/maps/GrandmasCabin/scripts.pory"
	fadescreen 0
	return


GrandmasCabin_EventScript_EeveeFanfare::
# 46 "data/maps/GrandmasCabin/scripts.pory"
	bufferspeciesname 1, SPECIES_EEVEE
# 47 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_EventScript_FadeOut
# 48 "data/maps/GrandmasCabin/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 49 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 50 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 51 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 52 "data/maps/GrandmasCabin/scripts.pory"
	special EnableNationalPokedex
# 53 "data/maps/GrandmasCabin/scripts.pory"
	addvar VAR_ROUTE101_STATE, 1
# 54 "data/maps/GrandmasCabin/scripts.pory"
	message GrandmasCabin_ObtainedEevee
# 55 "data/maps/GrandmasCabin/scripts.pory"
	waitmessage
# 56 "data/maps/GrandmasCabin/scripts.pory"
	waitfanfare
# 57 "data/maps/GrandmasCabin/scripts.pory"
	bufferspeciesname 0, SPECIES_EEVEE
	return


# 65 "data/maps/GrandmasCabin/scripts.pory"

# 66 "data/maps/GrandmasCabin/scripts.pory"

# 67 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_EventScript_FadeOut::
# 68 "data/maps/GrandmasCabin/scripts.pory"
	fadescreen 1
# 69 "data/maps/GrandmasCabin/scripts.pory"
	removeobject 1
# 70 "data/maps/GrandmasCabin/scripts.pory"
	fadescreen 0
# 71 "data/maps/GrandmasCabin/scripts.pory"
	return

GrandmasCabin_EventScript_GiveEevee::
# 76 "data/maps/GrandmasCabin/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 77 "data/maps/GrandmasCabin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GrandmasCabin_EventScript_GiveEevee_2
GrandmasCabin_EventScript_GiveEevee_1:
# 86 "data/maps/GrandmasCabin/scripts.pory"
	releaseall
	end

GrandmasCabin_EventScript_GiveEevee_2:
# 78 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_EventScript_EeveeFanfare
# 79 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_EventScript_GiveEevee_Text_0, MSGBOX_YESNO
# 80 "data/maps/GrandmasCabin/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrandmasCabin_EventScript_GiveEevee_5
GrandmasCabin_EventScript_GiveEevee_4:
# 84 "data/maps/GrandmasCabin/scripts.pory"
	setflag FLAG_UNUSED_0x026
	goto GrandmasCabin_EventScript_GiveEevee_1

GrandmasCabin_EventScript_GiveEevee_5:
# 81 "data/maps/GrandmasCabin/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 82 "data/maps/GrandmasCabin/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto GrandmasCabin_EventScript_GiveEevee_4


GrandmasCabin_EventScript_StarterMonEevee::
# 91 "data/maps/GrandmasCabin/scripts.pory"
	lockall
# 92 "data/maps/GrandmasCabin/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, GrandmasCabin_EventScript_StarterMonEevee_1
# 98 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_EventScript_StarterMonEevee_Text_1, MSGBOX_YESNO
# 99 "data/maps/GrandmasCabin/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GrandmasCabin_EventScript_StarterMonEevee_5
# 105 "data/maps/GrandmasCabin/scripts.pory"
	call GrandmasCabin_EventScript_GiveEevee
# 107 "data/maps/GrandmasCabin/scripts.pory"
	releaseall
	end

GrandmasCabin_EventScript_StarterMonEevee_1:
# 93 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_EventScript_StarterMonEevee_Text_0
# 94 "data/maps/GrandmasCabin/scripts.pory"
	releaseall
	end

GrandmasCabin_EventScript_StarterMonEevee_5:
# 100 "data/maps/GrandmasCabin/scripts.pory"
	msgbox GrandmasCabin_EventScript_StarterMonEevee_Text_2
# 101 "data/maps/GrandmasCabin/scripts.pory"
	releaseall
	end


# 112 "data/maps/GrandmasCabin/scripts.pory"
GrandmasCabin_Movement_Mew:
# 113 "data/maps/GrandmasCabin/scripts.pory"
	face_down
# 114 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 114 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 114 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 114 "data/maps/GrandmasCabin/scripts.pory"
	walk_left
# 115 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 115 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 115 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 115 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 115 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 115 "data/maps/GrandmasCabin/scripts.pory"
	walk_right
# 116 "data/maps/GrandmasCabin/scripts.pory"
	walk_down
	step_end

GrandmasCabin_EventScript_GiveEevee_Text_0:
# 79 "data/maps/GrandmasCabin/scripts.pory"
	.string "Would you like to give a nickname to\l"
	.string "Eevee?$"

GrandmasCabin_EventScript_StarterMonEevee_Text_0:
# 93 "data/maps/GrandmasCabin/scripts.pory"
	.string "Sorry Eevee, you'll have to stay behind.$"

GrandmasCabin_EventScript_StarterMonEevee_Text_1:
# 98 "data/maps/GrandmasCabin/scripts.pory"
	.string "Will you take Eevee with you?$"

GrandmasCabin_EventScript_StarterMonEevee_Text_2:
# 100 "data/maps/GrandmasCabin/scripts.pory"
	.string "You decided not to bring Eevee.$"

GrandmasCabin_ObtainedEevee::
# 61 "data/maps/GrandmasCabin/scripts.pory"
	.string "{PLAYER} obtained Eevee!$"
