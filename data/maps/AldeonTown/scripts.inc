AldeonTown_MapScripts::
	.byte 0


AldeonTown_EventScript_FatMan::
	lockall
	faceplayer
	compare VAR_ROUTE1_STATE, 3
	goto_if_eq AldeonTown_EventScript_FatMan_2
	msgbox AldeonTown_Text_FatMan2
AldeonTown_EventScript_FatMan_1:
	closemessage
	releaseall
	end

AldeonTown_EventScript_FatMan_2:
	msgbox AldeonTown_Text_FatMan_BlockExit
	goto AldeonTown_EventScript_FatMan_1


AldeonTown_Text_FatMan_BlockExit::
	.string "Woah, hold your horses there young man!\n"
	.string "Be careful these here snorlaxes..or uh\l"
	.string "snorlacis, can be mighty dangerous you\l"
	.string "don't wanna get too close. If you just\l"
	.string "wait I'm sure he'll wander off soon. Why\l"
	.string "don't you go off and play?$"

AldeonTown_Text_FatMan2::
	.string "This town is great cuz the Rocket Party\n"
	.string "rarely ever bothers us!$"
