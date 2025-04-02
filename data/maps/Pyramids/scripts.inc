Pyramids_MapScripts::
# 7 "data//maps/Pyramids/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data//maps/Pyramids/scripts.pory"
	pyramid_updatelight 200, PYRAMID_LIGHT_SET_RADIUS
# 11 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_F, 1
# 14 "data//maps/Pyramids/scripts.pory"
	checkitem ITEM_BIG_HAMMER
# 15 "data//maps/Pyramids/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Pyramids_Script_PyramidBlockA::
# 24 "data//maps/Pyramids/scripts.pory"
	lock
# 25 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 26 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 27 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 28 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 29 "data//maps/Pyramids/scripts.pory"
	call Pyramids_Script_PyramidBlock
	return


Pyramids_Script_PyramidBlockB::
# 33 "data//maps/Pyramids/scripts.pory"
	lock
# 34 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 35 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 36 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 37 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 38 "data//maps/Pyramids/scripts.pory"
	call Pyramids_Script_PyramidBlock
	return


Pyramids_Script_PyramidBlockC::
# 42 "data//maps/Pyramids/scripts.pory"
	lock
# 43 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 44 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 45 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 46 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 47 "data//maps/Pyramids/scripts.pory"
	call Pyramids_Script_PyramidBlock
	return


Pyramids_Script_PyramidBlock::
# 52 "data//maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_PyramidBlock
# 54 "data//maps/Pyramids/scripts.pory"
	checkitem ITEM_DIPLOMA
# 55 "data//maps/Pyramids/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pyramids_Script_PyramidBlock_2
# 66 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft2
# 67 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
Pyramids_Script_PyramidBlock_1:
# 69 "data//maps/Pyramids/scripts.pory"
	release
	end

Pyramids_Script_PyramidBlock_2:
# 57 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_2, 1
# 59 "data//maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_PyramidClearBlock1
# 60 "data//maps/Pyramids/scripts.pory"
	closemessage
# 61 "data//maps/Pyramids/scripts.pory"
	giveitem ITEM_BIG_HAMMER
# 63 "data//maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_PyramidClearBlock2
# 64 "data//maps/Pyramids/scripts.pory"
	closemessage
	goto Pyramids_Script_PyramidBlock_1


Pyramids_Text_PyramidBlock::
# 74 "data//maps/Pyramids/scripts.pory"
	.string "Excuse me, sir, this area is closed by\n"
	.string "order of the Deseret Antique\l"
	.string "Department of Ancient Historic sites in\l"
	.string "conjunction with the Ardens School of\l"
	.string "Archaeology. You'll have to turn back.$"

Pyramids_Text_PyramidClearBlock1::
# 78 "data//maps/Pyramids/scripts.pory"
	.string "What's that? You have a degree from\n"
	.string "Ardens? Well now...\n"
	.string "Scientia scientiam agnoscit, verumne\l"
	.string "dico?\n"
	.string "Salve, learned friend. I see you've come\l"
	.string "to help the excavation of the Pyramid.\l"
	.string "You'll need the right equipment for the\l"
	.string "job. Take this hammer to smash\l"
	.string "obstructive rocks.$"

Pyramids_Text_PyramidClearBlock2::
# 82 "data//maps/Pyramids/scripts.pory"
	.string "That Big Hammer will help you get inside.\n"
	.string "Report to Professor Indianus, who is in\l"
	.string "charge of this excavation. I'm sure\l"
	.string "he'll find something for you to do. Be\l"
	.string "careful, there are many dangerous\l"
	.string "pitfalls and ancient traps inside as\l"
	.string "well as deadly creatures lurking in the\l"
	.string "dark.$"
