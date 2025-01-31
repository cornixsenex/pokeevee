AldeonTown_House_MapScripts::
	.byte 0


AldeonTown_House_EventScript_OldMan::
# 7 "data/maps/AldeonTown_House/scripts.pory"
	lockall
# 8 "data/maps/AldeonTown_House/scripts.pory"
	faceplayer
# 9 "data/maps/AldeonTown_House/scripts.pory"
	msgbox AldeonTown_House_Text_OldMan1
# 10 "data/maps/AldeonTown_House/scripts.pory"
	closemessage
# 11 "data/maps/AldeonTown_House/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 12 "data/maps/AldeonTown_House/scripts.pory"
	msgbox AldeonTown_House_Text_OldMan2, MSGBOX_DEFAULT
# 13 "data/maps/AldeonTown_House/scripts.pory"
	closemessage
# 14 "data/maps/AldeonTown_House/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 15 "data/maps/AldeonTown_House/scripts.pory"
	waitmovement 0
# 16 "data/maps/AldeonTown_House/scripts.pory"
	releaseall
	end


AldeonTown_House_Text_OldMan1::
# 20 "data/maps/AldeonTown_House/scripts.pory"
	.string "If you feel tired why not take a nap?$"

AldeonTown_House_Text_OldMan2::
# 24 "data/maps/AldeonTown_House/scripts.pory"
	.string "Now don't you look better. Come back\n"
	.string "sometime.$"
