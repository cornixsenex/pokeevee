MareS8_MapScripts::
# 13 "data/maps/MareS8/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/MareS8/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS8_F
	return


MareS8_Script_Transition_MareTropicum::
# 21 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 3
# 22 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 23 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_MareSubtropicum::
# 27 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 2
# 28 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 29 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaIthaca::
# 33 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 1
# 34 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 35 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaHesperia::
# 39 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 4
# 40 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 41 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaTropica::
# 45 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 5
# 46 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 47 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_ArriveHesperia::
# 52 "data/maps/MareS8/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 53 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 55 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 56 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 22, 19
# 57 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_FACE_UP
# 58 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 59 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES9_PRISTIS, MAP_MARE_S9
# 62 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_BEROE
# 63 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 22, 19
# 64 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_LEFT
# 65 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_BEROE
# 66 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkLeft3
# 67 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 68 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkDown3
# 69 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 71 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ROMULUS
# 72 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 22, 19
# 73 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_LEFT
# 74 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ROMULUS
# 75 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 76 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 77 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ASCANIUS
# 78 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 22, 19
# 79 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_LEFT
# 80 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ASCANIUS
# 81 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 82 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 83 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 84 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_REMUS
# 85 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 22, 19
# 86 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_LEFT
# 87 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_REMUS
# 88 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft2
# 89 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft2
# 90 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft2
# 91 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 92 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 93 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 94 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 95 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 96 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 97 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 98 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 99 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 100 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown2
# 101 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown2
# 102 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown2
# 103 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 104 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 105 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 106 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 107 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 108 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 109 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 110 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 111 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 112 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 113 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 114 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 115 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 116 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 117 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 118 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 119 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 121 "data/maps/MareS8/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S9
# 122 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft4
# 123 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_MARE_S8
# 124 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 125 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 126 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 145 "data/maps/MareS8/scripts.pory"
	releaseall
	end

