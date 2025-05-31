SRoute18_MapScripts::
# 10 "data/maps/SRoute18/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/SRoute18/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_SRoute18_F
# 13 "data/maps/SRoute18/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 15 "data/maps/SRoute18/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 17 "data/maps/SRoute18/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 19 "data/maps/SRoute18/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 18 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 20 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 4
	return


SRoute18_Script_SinusPacificusTransition::
# 27 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 1
# 28 "data/maps/SRoute18/scripts.pory"
	special TransitionMapMusic
# 29 "data/maps/SRoute18/scripts.pory"
	special ShowMapNamePopup
	return


SRoute18_Script_CastrumTransition::
# 33 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 2
# 34 "data/maps/SRoute18/scripts.pory"
	special TransitionMapMusic
# 35 "data/maps/SRoute18/scripts.pory"
	special ShowMapNamePopup
	return


SRoute18_Script_SinusClarusTransition::
# 39 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 3
# 40 "data/maps/SRoute18/scripts.pory"
	special TransitionMapMusic
# 41 "data/maps/SRoute18/scripts.pory"
	special ShowMapNamePopup
	return


SRoute18_Script_MareInternumTransition::
# 45 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 4
# 46 "data/maps/SRoute18/scripts.pory"
	special TransitionMapMusic
# 47 "data/maps/SRoute18/scripts.pory"
	special ShowMapNamePopup
	return


SRoute18_Script_TestTriggerOn2::
# 52 "data/maps/SRoute18/scripts.pory"
	lock
# 53 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_7, 1
# 54 "data/maps/SRoute18/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 55 "data/maps/SRoute18/scripts.pory"
	waitmovement 0
# 56 "data/maps/SRoute18/scripts.pory"
	msgbox SRoute18_Script_TestTriggerOn2_Text_0, MSGBOX_DEFAULT
# 57 "data/maps/SRoute18/scripts.pory"
	closemessage
# 58 "data/maps/SRoute18/scripts.pory"
	release
	end


SRoute18_Script_TestTriggerOn1::
# 63 "data/maps/SRoute18/scripts.pory"
	lock
# 64 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_7, 2
# 65 "data/maps/SRoute18/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 66 "data/maps/SRoute18/scripts.pory"
	waitmovement 0
# 67 "data/maps/SRoute18/scripts.pory"
	msgbox SRoute18_Script_TestTriggerOn1_Text_0, MSGBOX_DEFAULT
# 68 "data/maps/SRoute18/scripts.pory"
	closemessage
# 69 "data/maps/SRoute18/scripts.pory"
	release
	end


Sroute18_Script_TestPorygon::
# 74 "data/maps/SRoute18/scripts.pory"
	lock
# 75 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_7, 1
# 76 "data/maps/SRoute18/scripts.pory"
	msgbox Sroute18_Script_TestPorygon_Text_0, MSGBOX_DEFAULT
# 77 "data/maps/SRoute18/scripts.pory"
	closemessage
# 78 "data/maps/SRoute18/scripts.pory"
	release
	end


SRoute18_Script_TestTriggerOn2_Text_0:
# 56 "data/maps/SRoute18/scripts.pory"
	.string "TRIGGER 2!$"

SRoute18_Script_TestTriggerOn1_Text_0:
# 67 "data/maps/SRoute18/scripts.pory"
	.string "TRIGGER 1$"

Sroute18_Script_TestPorygon_Text_0:
# 76 "data/maps/SRoute18/scripts.pory"
	.string "VAR_TEMP_7 set to 1$"
