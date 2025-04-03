PyramidInside1F_MapScripts::
	.byte 0


PyramidInside1F_Script_Indy::
# 6 "data/maps/PyramidInside1F/scripts.pory"
	lock
# 9 "data/maps/PyramidInside1F/scripts.pory"
	checkitem ITEM_MEWRA_SIGIL
# 11 "data/maps/PyramidInside1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PyramidInside1F_Script_Indy_2
PyramidInside1F_Script_Indy_1:
# 29 "data/maps/PyramidInside1F/scripts.pory"
	release
	end

PyramidInside1F_Script_Indy_2:
# 13 "data/maps/PyramidInside1F/scripts.pory"
	msgbox PyramidInside1F_Text_Indy1
# 15 "data/maps/PyramidInside1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 16 "data/maps/PyramidInside1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/PyramidInside1F/scripts.pory"
	msgbox PyramidInside1F_Text_Indy2
	goto PyramidInside1F_Script_Indy_1


PyramidInside1F_Text_Indy1::
# 34 "data/maps/PyramidInside1F/scripts.pory"
	.string "Hello, you must be new. I'm Professor\n"
	.string "Indianus, head of the Department of\l"
	.string "Archaeology at Ardens' school. I'm glad\l"
	.string "to see another pair of hands arrive to\l"
	.string "help with the excavation after we lost\l"
	.string "someone in the basement.$"

PyramidInside1F_Text_Indy2::
# 43 "data/maps/PyramidInside1F/scripts.pory"
	.string "What's that? You brought something to\n"
	.string "give to me?$"
