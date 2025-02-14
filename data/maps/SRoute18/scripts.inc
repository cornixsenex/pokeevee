SRoute18_MapScripts::
# 10 "data//maps/SRoute18/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data//maps/SRoute18/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_SRoute18
# 13 "data//maps/SRoute18/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 15 "data//maps/SRoute18/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 17 "data//maps/SRoute18/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 19 "data//maps/SRoute18/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data//maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data//maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 18 "data//maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 20 "data//maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 4
	return


SRoute18_Script_SinusPacificusTransition::
# 27 "data//maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 1
# 28 "data//maps/SRoute18/scripts.pory"
	special ShowMapNamePopup
	return


SRoute18_Script_CastrumTransition::
# 32 "data//maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 2
# 33 "data//maps/SRoute18/scripts.pory"
	special ShowMapNamePopup
	return


SRoute18_Script_SinusClarusTransition::
# 37 "data//maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 3
# 38 "data//maps/SRoute18/scripts.pory"
	special ShowMapNamePopup
	return


SRoute18_Script_MareInternumTransition::
# 42 "data//maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 4
# 43 "data//maps/SRoute18/scripts.pory"
	special ShowMapNamePopup
	return


SRoute18_Script_TestTriggerOn2::
# 48 "data//maps/SRoute18/scripts.pory"
	lock
# 49 "data//maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_7, 1
# 50 "data//maps/SRoute18/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 51 "data//maps/SRoute18/scripts.pory"
	waitmovement 0
# 52 "data//maps/SRoute18/scripts.pory"
	msgbox SRoute18_Script_TestTriggerOn2_Text_0, MSGBOX_DEFAULT
# 53 "data//maps/SRoute18/scripts.pory"
	closemessage
# 54 "data//maps/SRoute18/scripts.pory"
	release
	end


SRoute18_Script_TestTriggerOn1::
# 59 "data//maps/SRoute18/scripts.pory"
	lock
# 60 "data//maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_7, 2
# 61 "data//maps/SRoute18/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 62 "data//maps/SRoute18/scripts.pory"
	waitmovement 0
# 63 "data//maps/SRoute18/scripts.pory"
	msgbox SRoute18_Script_TestTriggerOn1_Text_0, MSGBOX_DEFAULT
# 64 "data//maps/SRoute18/scripts.pory"
	closemessage
# 65 "data//maps/SRoute18/scripts.pory"
	release
	end


Sroute18_Script_TestPorygon::
# 70 "data//maps/SRoute18/scripts.pory"
	lock
# 71 "data//maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_7, 1
# 72 "data//maps/SRoute18/scripts.pory"
	msgbox Sroute18_Script_TestPorygon_Text_0, MSGBOX_DEFAULT
# 73 "data//maps/SRoute18/scripts.pory"
	closemessage
# 74 "data//maps/SRoute18/scripts.pory"
	release
	end


SRoute18_Script_TestTriggerOn2_Text_0:
# 52 "data//maps/SRoute18/scripts.pory"
	.string "TRIGGER 2!$"

SRoute18_Script_TestTriggerOn1_Text_0:
# 63 "data//maps/SRoute18/scripts.pory"
	.string "TRIGGER 1$"

Sroute18_Script_TestPorygon_Text_0:
# 72 "data//maps/SRoute18/scripts.pory"
	.string "VAR_TEMP_7 set to 1$"
