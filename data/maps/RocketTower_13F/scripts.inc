RocketTower_13F_MapScripts::
	.byte 0


RocketTower_13F_EventScript_CheckPC::
	lockall
	setvar VAR_0x8004, 3
	special DoPCTurnOnEffect
	playse SE_PC_ON
	goto EventScript_PCMainMenu
	waitstate
	releaseall
	end

