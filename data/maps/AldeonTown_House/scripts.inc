AldeonTown_House_MapScripts::
	.byte 0


AldeonTown_House_EventScript_OldMan::
	lockall
	faceplayer
	msgbox AldeonTown_House_Text_OldMan
	closemessage
	releaseall
	end


AldeonTown_House_Text_OldMan::
	.string "If you feel tired why not take a nap?$"
