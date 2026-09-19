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


SRoute18_Script_UlyssesScene::
# 63 "data/maps/SRoute18/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 64 "data/maps/SRoute18/scripts.pory"
	waitmovement 0
# 66 "data/maps/SRoute18/scripts.pory"
	load_field_pic FIELD_PIC_NAUSICAA, 190, 98
# 67 "data/maps/SRoute18/scripts.pory"
	msgbox SRoute18_Text_Nausicaa
# 68 "data/maps/SRoute18/scripts.pory"
	destroy_field_pic FIELD_PIC_NAUSICAA
# 69 "data/maps/SRoute18/scripts.pory"
	closemessage
# 71 "data/maps/SRoute18/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 73 "data/maps/SRoute18/scripts.pory"
	removeobject LOCALID_SROUTE18_DOORBLOCK
# 74 "data/maps/SRoute18/scripts.pory"
	setobjectxyperm LOCALID_SROUTE18_DOORBLOCK, 7, 74
# 75 "data/maps/SRoute18/scripts.pory"
	setobjectmovementtype LOCALID_SROUTE18_DOORBLOCK, MOVEMENT_TYPE_INVISIBLE
# 76 "data/maps/SRoute18/scripts.pory"
	addobject LOCALID_SROUTE18_DOORBLOCK
# 78 "data/maps/SRoute18/scripts.pory"
	removeobject LOCALID_SROUTE18_NAUSICAA
# 79 "data/maps/SRoute18/scripts.pory"
	setobjectxyperm LOCALID_SROUTE18_NAUSICAA, 7, 74
# 80 "data/maps/SRoute18/scripts.pory"
	setobjectmovementtype LOCALID_SROUTE18_NAUSICAA, MOVEMENT_TYPE_INVISIBLE
# 81 "data/maps/SRoute18/scripts.pory"
	addobject LOCALID_SROUTE18_NAUSICAA
# 83 "data/maps/SRoute18/scripts.pory"
	removeobject LOCALID_SROUTE18_ULYSSES
# 84 "data/maps/SRoute18/scripts.pory"
	setobjectxyperm LOCALID_SROUTE18_ULYSSES, 7, 74
# 85 "data/maps/SRoute18/scripts.pory"
	setobjectmovementtype LOCALID_SROUTE18_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 86 "data/maps/SRoute18/scripts.pory"
	addobject LOCALID_SROUTE18_ULYSSES
# 88 "data/maps/SRoute18/scripts.pory"
	setvar VAR_ULYSSES_STATE, 22
# 90 "data/maps/SRoute18/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	end


Common_Script_LockedDoor::
# 96 "data/maps/SRoute18/scripts.pory"
	msgbox Common_Text_LockedDoor
# 97 "data/maps/SRoute18/scripts.pory"
	closemessage
	return


Common_Text_LockedDoor::
# 100 "data/maps/SRoute18/scripts.pory"
	.string "The door is locked.$"

SRoute18_Text_Nausicaa::
# 104 "data/maps/SRoute18/scripts.pory"
	.string "Hello? Mister, can you hear me? You\n"
	.string "don't look too good... Oh no! I better\l"
	.string "take you to Papa right away!$"
