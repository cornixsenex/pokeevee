RocketTower_13F_MapScripts::
	.byte 0


RocketTower_13F_EventScript_CheckPC::
	setvar VAR_0x8004, 3
	special DoPCTurnOnEffect
	playse SE_PC_ON
	special PlayerPC
	waitstate
	releaseall
	end

