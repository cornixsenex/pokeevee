PyramidInside1F_MapScripts::
	.byte 0


PyramidInside1F_Script_Indy::
# 6 "data/maps/PyramidInside1F/scripts.pory"
	lock
# 7 "data/maps/PyramidInside1F/scripts.pory"
	faceplayer
# 9 "data/maps/PyramidInside1F/scripts.pory"
	checkitem ITEM_MEWRA_SIGIL
# 11 "data/maps/PyramidInside1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PyramidInside1F_Script_Indy_2
PyramidInside1F_Script_Indy_1:
# 29 "data/maps/PyramidInside1F/scripts.pory"
	goto_if_set FLAG_LEAF_ISGF, PyramidInside1F_Script_Indy_5
# 43 "data/maps/PyramidInside1F/scripts.pory"
	msgbox PyramidInside1F_Text_Indy4
# 44 "data/maps/PyramidInside1F/scripts.pory"
	closemessage
# 45 "data/maps/PyramidInside1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 46 "data/maps/PyramidInside1F/scripts.pory"
	waitmovement 0
PyramidInside1F_Script_Indy_4:
# 49 "data/maps/PyramidInside1F/scripts.pory"
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
# 20 "data/maps/PyramidInside1F/scripts.pory"
	removeitem ITEM_MEWRA_SIGIL
# 21 "data/maps/PyramidInside1F/scripts.pory"
	msgbox PyramidInside1F_Text_GaveMewraSigil
# 23 "data/maps/PyramidInside1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 24 "data/maps/PyramidInside1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/PyramidInside1F/scripts.pory"
	msgbox PyramidInside1F_Text_Indy3
	goto PyramidInside1F_Script_Indy_1

PyramidInside1F_Script_Indy_5:
# 32 "data/maps/PyramidInside1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 33 "data/maps/PyramidInside1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/PyramidInside1F/scripts.pory"
	msgbox PyramidInside1F_Text_Indy5
# 36 "data/maps/PyramidInside1F/scripts.pory"
	closemessage
# 38 "data/maps/PyramidInside1F/scripts.pory"
	applymovement 1, Common_Movement_WalkUp3
# 39 "data/maps/PyramidInside1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/PyramidInside1F/scripts.pory"
	removeobject 1
	goto PyramidInside1F_Script_Indy_4


PyramidInside1F_Text_Indy1::
# 54 "data/maps/PyramidInside1F/scripts.pory"
	.string "Hello, you must be new. I'm Professor\n"
	.string "Indianus, head of the Department of\l"
	.string "Archaeology at Ardens' school. I'm glad\l"
	.string "to see another pair of hands arrive to\l"
	.string "help with the excavation after we lost\l"
	.string "someone in the basement.$"

PyramidInside1F_Text_Indy2::
# 63 "data/maps/PyramidInside1F/scripts.pory"
	.string "What's that? You brought something to\n"
	.string "give to me?$"

PyramidInside1F_Text_GaveMewraSigil::
# 67 "data/maps/PyramidInside1F/scripts.pory"
	.string "{PLAYER} gave Professor Indianus the\n"
	.string "Mewra Sigil.$"

PyramidInside1F_Text_Indy3::
# 71 "data/maps/PyramidInside1F/scripts.pory"
	.string "Where did you get this? Who sent you\n"
	.string "here? How did you know how to find me?\l"
	.string "My disguise has fooled the entire\l"
	.string "Ardens College for years! No one even\l"
	.string "suspected my notorious past life. I'd\l"
	.string "given up all hope of reclaiming my lost\l"
	.string "titles long years ago, my lad, since ere\l"
	.string "you walked. This sigil is a desperate\l"
	.string "call to arms to one who's already\l"
	.string "surrendered them. The pull to serve\l"
	.string "Mewra in me is strong, perhaps enough\l"
	.string "to pull me back to war, but long has our\l"
	.string "movement been extinguished. The Grand\l"
	.string "Army of old has declined to eleusive\l"
	.string "rebel cells in the shadows who's\l"
	.string "numbers have diminished under the\l"
	.string "oppresive yoke of the new government.\l"
	.string "Even if I decided to resume the bloody\l"
	.string "struggle to restore my crown decisive\l"
	.string "victory's impossible fighting alone,\l"
	.string "without the Grand Army. The\l"
	.string "infrastructure no longer exists to\l"
	.string "coordinate, let alone call to arms, the\l"
	.string "disparate and unorganized cells. To try\l"
	.string "this without aid is great folly, but you\l"
	.string "are young, my lad, not yet a man and\l"
	.string "asking you to help is negligent. A boy\l"
	.string "who still has never had a girl is not\l"
	.string "ready to risk his life in war. Perhaps in\l"
	.string "time you will find a girlfriend. and\l"
	.string "taste that sweet liquor we men call\l"
	.string "love. Until that time I will never embark\l"
	.string "upon this perilous journey with you.$"

PyramidInside1F_Text_Indy4::
# 106 "data/maps/PyramidInside1F/scripts.pory"
	.string "Return after you have found a\n"
	.string "girlfriend if your heart is dead set on\l"
	.string "bitter war.$"

PyramidInside1F_Text_Indy5::
# 111 "data/maps/PyramidInside1F/scripts.pory"
	.string "What's that? You say you now have a\n"
	.string "girlfriend? My lad, what lovely news!\l"
	.string "You are become a man who's cheeks\l"
	.string "display that first blossom of manly\l"
	.string "facial hair, but a girlfriend is not\l"
	.string "enough to prove you are ready to fight\l"
	.string "alongside me with my army. To prove\l"
	.string "yourself you must climb to the top of\l"
	.string "this ancient wonder. You'll need the\l"
	.string "strength of Heracles to cast aside\l"
	.string "boulders and great prowess in battle to\l"
	.string "defeat the challenger who waits to\l"
	.string "test your skill. The Pyramid is old, and\l"
	.string "tall, and strong. I will wait for you at\l"
	.string "the very top. Meet me up there, and pass\l"
	.string "your final test, then truly you'll have\l"
	.string "proved that you're the one to help me\l"
	.string "restore my fallen kingdom. If your own\l"
	.string "destiny is intertwined with mine, and all\l"
	.string "the people of Kashmir, then I'll soon\l"
	.string "see you atop this Pyramid.$"
