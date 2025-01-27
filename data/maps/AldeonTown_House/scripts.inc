AldeonTown_House_MapScripts::
	.byte 0


AldeonTown_House_EventScript_OldMan::
# 5 "data/maps/AldeonTown_House/scripts.pory"
	lockall
# 6 "data/maps/AldeonTown_House/scripts.pory"
	faceplayer
# 7 "data/maps/AldeonTown_House/scripts.pory"
	msgbox AldeonTown_House_Text_OldMan1
# 8 "data/maps/AldeonTown_House/scripts.pory"
	closemessage
# 9 "data/maps/AldeonTown_House/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 10 "data/maps/AldeonTown_House/scripts.pory"
	msgbox AldeonTown_House_Text_OldMan2, MSGBOX_DEFAULT
# 11 "data/maps/AldeonTown_House/scripts.pory"
	closemessage
# 12 "data/maps/AldeonTown_House/scripts.pory"
	releaseall
	end


AldeonTown_House_Text_OldMan1::
# 16 "data/maps/AldeonTown_House/scripts.pory"
	.string "If you feel tired why not take a nap?$"

AldeonTown_House_Text_OldMan2::
# 20 "data/maps/AldeonTown_House/scripts.pory"
	.string "Now don't you look better. Come back\n"
	.string "sometime.$"
