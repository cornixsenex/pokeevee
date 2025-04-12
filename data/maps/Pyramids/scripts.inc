Pyramids_MapScripts::
# 9 "data/maps/Pyramids/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/Pyramids/scripts.pory"
	pyramid_updatelight 200, PYRAMID_LIGHT_SET_RADIUS
# 13 "data/maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_F, 1
# 16 "data/maps/Pyramids/scripts.pory"
	checkitem ITEM_BIG_HAMMER
# 17 "data/maps/Pyramids/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Pyramids_Script_PyramidBlockA::
# 26 "data/maps/Pyramids/scripts.pory"
	lock
# 27 "data/maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 28 "data/maps/Pyramids/scripts.pory"
	waitmovement 0
# 29 "data/maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 30 "data/maps/Pyramids/scripts.pory"
	waitmovement 0
# 31 "data/maps/Pyramids/scripts.pory"
	call Pyramids_Script_PyramidBlock
	return


Pyramids_Script_PyramidBlockB::
# 35 "data/maps/Pyramids/scripts.pory"
	lock
# 36 "data/maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 37 "data/maps/Pyramids/scripts.pory"
	waitmovement 0
# 38 "data/maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 39 "data/maps/Pyramids/scripts.pory"
	waitmovement 0
# 40 "data/maps/Pyramids/scripts.pory"
	call Pyramids_Script_PyramidBlock
	return


Pyramids_Script_PyramidBlockC::
# 44 "data/maps/Pyramids/scripts.pory"
	lock
# 45 "data/maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 46 "data/maps/Pyramids/scripts.pory"
	waitmovement 0
# 47 "data/maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 48 "data/maps/Pyramids/scripts.pory"
	waitmovement 0
# 49 "data/maps/Pyramids/scripts.pory"
	call Pyramids_Script_PyramidBlock
	return


Pyramids_Script_PyramidBlock::
# 54 "data/maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_PyramidBlock
# 56 "data/maps/Pyramids/scripts.pory"
	checkitem ITEM_DIPLOMA
# 57 "data/maps/Pyramids/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pyramids_Script_PyramidBlock_2
# 70 "data/maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft2
# 71 "data/maps/Pyramids/scripts.pory"
	waitmovement 0
Pyramids_Script_PyramidBlock_1:
# 73 "data/maps/Pyramids/scripts.pory"
	release
	end

Pyramids_Script_PyramidBlock_2:
# 59 "data/maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_2, 1
# 60 "data/maps/Pyramids/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 61 "data/maps/Pyramids/scripts.pory"
	waitmovement 0
# 63 "data/maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_PyramidClearBlock1
# 64 "data/maps/Pyramids/scripts.pory"
	closemessage
# 65 "data/maps/Pyramids/scripts.pory"
	giveitem ITEM_BIG_HAMMER
# 67 "data/maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_PyramidClearBlock2
# 68 "data/maps/Pyramids/scripts.pory"
	closemessage
	goto Pyramids_Script_PyramidBlock_1


Pyramids_Text_PyramidBlock::
# 78 "data/maps/Pyramids/scripts.pory"
	.string "Excuse me, sir, this area is closed by\n"
	.string "order of the Deseret Antique\l"
	.string "Department of Ancient Historic sites in\l"
	.string "conjunction with the Ardens School of\l"
	.string "Archaeology. You'll have to turn back.$"

Pyramids_Text_PyramidClearBlock1::
# 82 "data/maps/Pyramids/scripts.pory"
	.string "What's that? You have a degree from\n"
	.string "Ardens? Well now...\p"
	.string "Scientia scientiam agnoscit, verumne\n"
	.string "dico?\p"
	.string "Salve, learned friend. I see you've come\n"
	.string "to help the excavation of the Pyramid.\l"
	.string "You'll need the right equipment for the\l"
	.string "job. Take this hammer to smash\l"
	.string "obstructive rocks.$"

Pyramids_Text_PyramidClearBlock2::
# 86 "data/maps/Pyramids/scripts.pory"
	.string "That Big Hammer will help you get inside.\n"
	.string "Report to Professor Indianus, who is in\l"
	.string "charge of this excavation. I'm sure\l"
	.string "he'll find something for you to do. Be\l"
	.string "careful, there are many dangerous\l"
	.string "pitfalls and ancient traps inside as\l"
	.string "well as deadly creatures lurking in the\l"
	.string "dark.$"
