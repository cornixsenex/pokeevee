.set LOCALID_LUGIA, 1

NavelRock_Bottom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Bottom_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Bottom_OnResume
	.byte 0

NavelRock_Bottom_OnTransition:
	end

NavelRock_Bottom_EventScript_HideLugia::
	return

NavelRock_Bottom_EventScript_TryShowLugia::
	return

NavelRock_Bottom_OnResume:
	end

NavelRock_Bottom_EventScript_TryRemoveLugia::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject LOCALID_LUGIA
	return

NavelRock_Bottom_EventScript_Lugia::
	lock
	faceplayer
	waitse
	delay 20
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	seteventmon SPECIES_LUGIA, 70
	special BattleSetup_StartLegendaryBattle
	waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NavelRock_Bottom_EventScript_DefeatedLugia
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NavelRock_Bottom_EventScript_RanFromLugia
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NavelRock_Bottom_EventScript_RanFromLugia
	release
	end

NavelRock_Bottom_EventScript_DefeatedLugia::
	setvar VAR_0x8004, SPECIES_LUGIA
	goto Common_EventScript_LegendaryFlewAway
	end

NavelRock_Bottom_EventScript_RanFromLugia::
	setvar VAR_0x8004, SPECIES_LUGIA
	goto Common_EventScript_LegendaryFlewAway
	end
