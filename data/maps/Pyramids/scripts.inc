Pyramids_MapScripts::
# 12 "data//maps/Pyramids/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data//maps/Pyramids/scripts.pory"
	specialvar VAR_RESULT, IsPyramidsDCactorum
# 16 "data//maps/Pyramids/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 19 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_5, 2
Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 23 "data//maps/Pyramids/scripts.pory"
	pyramid_updatelight 200, PYRAMID_LIGHT_SET_RADIUS
# 24 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_F, 1
# 27 "data//maps/Pyramids/scripts.pory"
	checkitem ITEM_BIG_HAMMER
# 28 "data//maps/Pyramids/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	end

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 29 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_5


Pyramids_Script_VallisPyramidisTransition::
# 37 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_5, 2
# 38 "data//maps/Pyramids/scripts.pory"
	special TransitionMapMusic
# 39 "data//maps/Pyramids/scripts.pory"
	special ShowMapNamePopup
# 40 "data//maps/Pyramids/scripts.pory"
	setweather WEATHER_SUNNY
# 41 "data//maps/Pyramids/scripts.pory"
	doweather
	return


Pyramids_Script_DCactorumTransition::
# 45 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_5, 1
# 46 "data//maps/Pyramids/scripts.pory"
	special TransitionMapMusic
# 47 "data//maps/Pyramids/scripts.pory"
	special ShowMapNamePopup
# 48 "data//maps/Pyramids/scripts.pory"
	setweather WEATHER_SANDSTORM
# 49 "data//maps/Pyramids/scripts.pory"
	doweather
	return


Pyramids_Script_PyramidBlockA::
# 54 "data//maps/Pyramids/scripts.pory"
	lock
# 55 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 56 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 57 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 58 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 59 "data//maps/Pyramids/scripts.pory"
	call Pyramids_Script_PyramidBlock
	return


Pyramids_Script_PyramidBlockB::
# 63 "data//maps/Pyramids/scripts.pory"
	lock
# 64 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 65 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 66 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 67 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 68 "data//maps/Pyramids/scripts.pory"
	call Pyramids_Script_PyramidBlock
	return


Pyramids_Script_PyramidBlockC::
# 72 "data//maps/Pyramids/scripts.pory"
	lock
# 73 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 74 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 75 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 76 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 77 "data//maps/Pyramids/scripts.pory"
	call Pyramids_Script_PyramidBlock
	return


Pyramids_Script_PyramidBlock::
# 82 "data//maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_PyramidBlock
# 84 "data//maps/Pyramids/scripts.pory"
	checkitem ITEM_DIPLOMA
# 85 "data//maps/Pyramids/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pyramids_Script_PyramidBlock_2
# 98 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft2
# 99 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
Pyramids_Script_PyramidBlock_1:
# 101 "data//maps/Pyramids/scripts.pory"
	release
	end

Pyramids_Script_PyramidBlock_2:
# 87 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_2, 1
# 88 "data//maps/Pyramids/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 89 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 91 "data//maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_PyramidClearBlock1
# 92 "data//maps/Pyramids/scripts.pory"
	closemessage
# 93 "data//maps/Pyramids/scripts.pory"
	giveitem ITEM_BIG_HAMMER
# 95 "data//maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_PyramidClearBlock2
# 96 "data//maps/Pyramids/scripts.pory"
	closemessage
	goto Pyramids_Script_PyramidBlock_1


Pyramids_Script_Scientist::
# 106 "data//maps/Pyramids/scripts.pory"
	faceplayer
# 107 "data//maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_Scientist
# 108 "data//maps/Pyramids/scripts.pory"
	closemessage
# 109 "data//maps/Pyramids/scripts.pory"
	call Common_Script_Unfaceplayer
	end


Pyramids_Text_PyramidBlock::
# 113 "data//maps/Pyramids/scripts.pory"
	.string "Excuse me, sir, this area is closed by\n"
	.string "order of the Deseret Antique\l"
	.string "Department of Ancient Historic sites in\l"
	.string "conjunction with the Ardens School of\l"
	.string "Archaeology. You'll have to turn back.$"

Pyramids_Text_PyramidClearBlock1::
# 117 "data//maps/Pyramids/scripts.pory"
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
# 121 "data//maps/Pyramids/scripts.pory"
	.string "That Big Hammer will help you get inside.\n"
	.string "Report to Professor Indianus, who is in\l"
	.string "charge of this excavation. I'm sure\l"
	.string "he'll find something for you to do. Be\l"
	.string "careful, there are many dangerous\l"
	.string "pitfalls and ancient traps inside as\l"
	.string "well as deadly creatures lurking in the\l"
	.string "dark.$"

Pyramids_Text_Scientist::
# 125 "data//maps/Pyramids/scripts.pory"
	.string "Dedicating my life to the pursuit of\n"
	.string "archaelogical discovery for the general\l"
	.string "benefit of mankind has been a most\l"
	.string "rewarding decision.$"
