Hospital1F_MapScripts::
	.byte 0


Hospiatl1F_EventScript_CheckPC::
	lockall
	setvar VAR_0x8004, PC_LOCATION_HOSPITAL
	special DoPCTurnOnEffect
	playse SE_PC_ON
	goto EventScript_PCMainMenu
	waitstate
	releaseall
	end

