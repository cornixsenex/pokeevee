AldeonTown_House_MapScripts::
	.byte 0


AldeonTown_House_EventScript_OldMan::
# 5 "data/maps/AldeonTown_House/scripts.pory"
	lockall
# 6 "data/maps/AldeonTown_House/scripts.pory"
	faceplayer
# 7 "data/maps/AldeonTown_House/scripts.pory"
	msgbox AldeonTown_House_Text_OldMan
# 8 "data/maps/AldeonTown_House/scripts.pory"
	closemessage
# 9 "data/maps/AldeonTown_House/scripts.pory"
	releaseall
	end


AldeonTown_House_Text_OldMan::
# 13 "data/maps/AldeonTown_House/scripts.pory"
	.string "If you feel tired why not take a nap?$"
