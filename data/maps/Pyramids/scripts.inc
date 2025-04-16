Pyramids_MapScripts::
# 12 "data//maps/Pyramids/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data//maps/Pyramids/scripts.pory"
	specialvar VAR_RESULT, IsPyramidsDCactorum_F
# 16 "data//maps/Pyramids/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 19 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_5, 2
# 20 "data//maps/Pyramids/scripts.pory"
	setweather WEATHER_SUNNY
Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 24 "data//maps/Pyramids/scripts.pory"
	pyramid_updatelight 200, PYRAMID_LIGHT_SET_RADIUS
# 25 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_F, 1
# 28 "data//maps/Pyramids/scripts.pory"
	checkitem ITEM_BIG_HAMMER
# 29 "data//maps/Pyramids/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Pyramids_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 30 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_3, 1
	return


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
# 53 "data//maps/Pyramids/scripts.pory"
	lock
# 54 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 55 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 56 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 57 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 58 "data//maps/Pyramids/scripts.pory"
	call Pyramids_Script_PyramidBlock
	return


Pyramids_Script_PyramidBlockB::
# 62 "data//maps/Pyramids/scripts.pory"
	lock
# 63 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 64 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 65 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 66 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 67 "data//maps/Pyramids/scripts.pory"
	call Pyramids_Script_PyramidBlock
	return


Pyramids_Script_PyramidBlockC::
# 71 "data//maps/Pyramids/scripts.pory"
	lock
# 72 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 73 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 74 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 75 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 76 "data//maps/Pyramids/scripts.pory"
	call Pyramids_Script_PyramidBlock
	return


Pyramids_Script_PyramidBlock::
# 81 "data//maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_PyramidBlock
# 83 "data//maps/Pyramids/scripts.pory"
	checkitem ITEM_DIPLOMA
# 84 "data//maps/Pyramids/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pyramids_Script_PyramidBlock_2
# 97 "data//maps/Pyramids/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft2
# 98 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
Pyramids_Script_PyramidBlock_1:
# 100 "data//maps/Pyramids/scripts.pory"
	release
	end

Pyramids_Script_PyramidBlock_2:
# 86 "data//maps/Pyramids/scripts.pory"
	setvar VAR_TEMP_2, 1
# 87 "data//maps/Pyramids/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 88 "data//maps/Pyramids/scripts.pory"
	waitmovement 0
# 90 "data//maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_PyramidClearBlock1
# 91 "data//maps/Pyramids/scripts.pory"
	closemessage
# 92 "data//maps/Pyramids/scripts.pory"
	giveitem ITEM_BIG_HAMMER
# 94 "data//maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_PyramidClearBlock2
# 95 "data//maps/Pyramids/scripts.pory"
	closemessage
	goto Pyramids_Script_PyramidBlock_1


Pyramids_Script_Scientist::
# 105 "data//maps/Pyramids/scripts.pory"
	faceplayer
# 106 "data//maps/Pyramids/scripts.pory"
	msgbox Pyramids_Text_Scientist
# 107 "data//maps/Pyramids/scripts.pory"
	closemessage
# 108 "data//maps/Pyramids/scripts.pory"
	call Common_Script_Unfaceplayer
	end


Pyramids_Text_PyramidBlock::
# 112 "data//maps/Pyramids/scripts.pory"
	.string "Excuse me, sir, this area is closed by\n"
	.string "order of the Deseret Antique\l"
	.string "Department of Ancient Historic sites in\l"
	.string "conjunction with the Ardens School of\l"
	.string "Archaeology. You'll have to turn back.$"

Pyramids_Text_PyramidClearBlock1::
# 116 "data//maps/Pyramids/scripts.pory"
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
# 120 "data//maps/Pyramids/scripts.pory"
	.string "That Big Hammer will help you get inside.\n"
	.string "Report to Professor Indianus, who is in\l"
	.string "charge of this excavation. I'm sure\l"
	.string "he'll find something for you to do. Be\l"
	.string "careful, there are many dangerous\l"
	.string "pitfalls and ancient traps inside as\l"
	.string "well as deadly creatures lurking in the\l"
	.string "dark.$"

Pyramids_Text_Scientist::
# 124 "data//maps/Pyramids/scripts.pory"
	.string "Dedicating my life to the pursuit of\n"
	.string "archaelogical discovery for the general\l"
	.string "benefit of mankind has been a most\l"
	.string "rewarding decision.$"
