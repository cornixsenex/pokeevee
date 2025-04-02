AldeonTown_House_MapScripts::
	.byte 0


AldeonTown_House_EventScript_OldMan::
# 7 "data//maps/AldeonTown_House/scripts.pory"
	lockall
# 8 "data//maps/AldeonTown_House/scripts.pory"
	faceplayer
# 9 "data//maps/AldeonTown_House/scripts.pory"
	compare VAR_GRANNY_STATE, 15
	goto_if_lt AldeonTown_House_EventScript_OldMan_2
# 15 "data//maps/AldeonTown_House/scripts.pory"
	msgbox AldeonTown_House_Text_OldMan3, MSGBOX_DEFAULT
AldeonTown_House_EventScript_OldMan_1:
# 17 "data//maps/AldeonTown_House/scripts.pory"
	closemessage
# 18 "data//maps/AldeonTown_House/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 19 "data//maps/AldeonTown_House/scripts.pory"
	waitmovement 0
# 20 "data//maps/AldeonTown_House/scripts.pory"
	releaseall
	end

AldeonTown_House_EventScript_OldMan_2:
# 10 "data//maps/AldeonTown_House/scripts.pory"
	msgbox AldeonTown_House_Text_OldMan1
# 11 "data//maps/AldeonTown_House/scripts.pory"
	closemessage
# 12 "data//maps/AldeonTown_House/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 13 "data//maps/AldeonTown_House/scripts.pory"
	msgbox AldeonTown_House_Text_OldMan2, MSGBOX_DEFAULT
	goto AldeonTown_House_EventScript_OldMan_1


AldeonTown_House_Text_OldMan1::
# 24 "data//maps/AldeonTown_House/scripts.pory"
	.string "If you feel tired why not take a nap?$"

AldeonTown_House_Text_OldMan2::
# 28 "data//maps/AldeonTown_House/scripts.pory"
	.string "Now don't you look better. Come back\n"
	.string "sometime.$"

AldeonTown_House_Text_OldMan3::
# 32 "data//maps/AldeonTown_House/scripts.pory"
	.string "I'm glad to see you survived the\n"
	.string "tempest unlike my brother, lately\l"
	.string "departed. He was ill when I returned and\l"
	.string "I held his hand as he took his final\l"
	.string "breath. As the sun rose I left to dig his\l"
	.string "grave when Mew herself appeared to pay\l"
	.string "respects. Though I am old, and know my\l"
	.string "time is near, the loss of one you love is\l"
	.string "still so sad...$"
