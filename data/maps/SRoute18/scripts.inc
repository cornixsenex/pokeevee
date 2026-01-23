SRoute18_MapScripts::
# 10 "data/maps/SRoute18/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/SRoute18/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_SRoute18_F
# 14 "data/maps/SRoute18/scripts.pory"
	compare VAR_ULYSSES_STATE, 22
	goto_if_lt SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/SRoute18/scripts.pory"
	compare VAR_ULYSSES_STATE, 21
	goto_if_eq SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/SRoute18/scripts.pory"
	call SRoute18_Script_SetupDoorBlock
	goto SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SRoute18_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data/maps/SRoute18/scripts.pory"
	call SRoute18_Script_ShowUlysses
	return


SRoute18_Script_SetupDoorBlock::
# 25 "data/maps/SRoute18/scripts.pory"
	setobjectxyperm LOCALID_SROUTE18_DOORBLOCK, 15, 98
	return


SRoute18_Script_ShowUlysses::
# 30 "data/maps/SRoute18/scripts.pory"
	setobjectxyperm LOCALID_SROUTE18_ULYSSES, 11, 100
# 31 "data/maps/SRoute18/scripts.pory"
	setobjectmovementtype LOCALID_SROUTE18_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 32 "data/maps/SRoute18/scripts.pory"
	setobjectxyperm LOCALID_SROUTE18_NAUSICAA, 12, 100
# 33 "data/maps/SRoute18/scripts.pory"
	setobjectmovementtype LOCALID_SROUTE18_NAUSICAA, MOVEMENT_TYPE_FACE_LEFT
	return


SRoute18_Script_SinusPacificusTransition::
# 38 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 1
# 39 "data/maps/SRoute18/scripts.pory"
	special TransitionMapMusic
# 40 "data/maps/SRoute18/scripts.pory"
	special ShowMapNamePopup
	return


SRoute18_Script_CastrumTransition::
# 44 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 2
# 45 "data/maps/SRoute18/scripts.pory"
	special TransitionMapMusic
# 46 "data/maps/SRoute18/scripts.pory"
	special ShowMapNamePopup
	return


SRoute18_Script_SinusClarusTransition::
# 50 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 3
# 51 "data/maps/SRoute18/scripts.pory"
	special TransitionMapMusic
# 52 "data/maps/SRoute18/scripts.pory"
	special ShowMapNamePopup
	return


SRoute18_Script_MareInternumTransition::
# 56 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_5, 4
# 57 "data/maps/SRoute18/scripts.pory"
	special TransitionMapMusic
# 58 "data/maps/SRoute18/scripts.pory"
	special ShowMapNamePopup
	return


SRoute18_Script_TestTriggerOn2::
# 63 "data/maps/SRoute18/scripts.pory"
	lock
# 64 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_7, 1
# 65 "data/maps/SRoute18/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 66 "data/maps/SRoute18/scripts.pory"
	waitmovement 0
# 67 "data/maps/SRoute18/scripts.pory"
	msgbox SRoute18_Script_TestTriggerOn2_Text_0, MSGBOX_DEFAULT
# 68 "data/maps/SRoute18/scripts.pory"
	closemessage
# 69 "data/maps/SRoute18/scripts.pory"
	release
	end


SRoute18_Script_TestTriggerOn1::
# 74 "data/maps/SRoute18/scripts.pory"
	lock
# 75 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_7, 2
# 76 "data/maps/SRoute18/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 77 "data/maps/SRoute18/scripts.pory"
	waitmovement 0
# 78 "data/maps/SRoute18/scripts.pory"
	msgbox SRoute18_Script_TestTriggerOn1_Text_0, MSGBOX_DEFAULT
# 79 "data/maps/SRoute18/scripts.pory"
	closemessage
# 80 "data/maps/SRoute18/scripts.pory"
	release
	end


Sroute18_Script_TestPorygon::
# 85 "data/maps/SRoute18/scripts.pory"
	lock
# 86 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_7, 1
# 87 "data/maps/SRoute18/scripts.pory"
	msgbox Sroute18_Script_TestPorygon_Text_0, MSGBOX_DEFAULT
# 88 "data/maps/SRoute18/scripts.pory"
	closemessage
# 89 "data/maps/SRoute18/scripts.pory"
	release
	end


SRoute18_Script_UlyssesScene::
	return


Common_Script_LockedDoor::
# 106 "data/maps/SRoute18/scripts.pory"
	msgbox Common_Text_LockedDoor
# 107 "data/maps/SRoute18/scripts.pory"
	closemessage
	return


SRoute18_Script_TestTriggerOn2_Text_0:
# 67 "data/maps/SRoute18/scripts.pory"
	.string "TRIGGER 2!$"

SRoute18_Script_TestTriggerOn1_Text_0:
# 78 "data/maps/SRoute18/scripts.pory"
	.string "TRIGGER 1$"

Sroute18_Script_TestPorygon_Text_0:
# 87 "data/maps/SRoute18/scripts.pory"
	.string "VAR_TEMP_7 set to 1$"

Common_Text_LockedDoor::
# 110 "data/maps/SRoute18/scripts.pory"
	.string "The door is locked.$"
