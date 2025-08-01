Gymnasium_MapScripts::
# 5 "data/maps/Gymnasium/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/Gymnasium/scripts.pory"
	goto_if_set FLAG_GYMNASIUM_HECTORLEFT, Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/Gymnasium/scripts.pory"
	call Gymnasium_Script_HideHector
	return


Gymnasium_Script_HideHector::
# 19 "data/maps/Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_GYMNASIUM_HECTOR, 0, 0
# 20 "data/maps/Gymnasium/scripts.pory"
	setobjectmovementtype LOCALID_GYMNASIUM_HECTOR, MOVEMENT_TYPE_INVISIBLE
	return


Gymnasium_Script_BlackBelt::
# 26 "data/maps/Gymnasium/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 27 "data/maps/Gymnasium/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/Gymnasium/scripts.pory"
	case 0, Gymnasium_Script_BlackBelt_2
# 29 "data/maps/Gymnasium/scripts.pory"
	case 1, Gymnasium_Script_BlackBelt_2
# 30 "data/maps/Gymnasium/scripts.pory"
	case 2, Gymnasium_Script_BlackBelt_2
# 31 "data/maps/Gymnasium/scripts.pory"
	case 3, Gymnasium_Script_BlackBelt_2
# 33 "data/maps/Gymnasium/scripts.pory"
	case 4, Gymnasium_Script_BlackBelt_3
# 34 "data/maps/Gymnasium/scripts.pory"
	case 5, Gymnasium_Script_BlackBelt_3
# 35 "data/maps/Gymnasium/scripts.pory"
	case 6, Gymnasium_Script_BlackBelt_3
# 37 "data/maps/Gymnasium/scripts.pory"
	case 7, Gymnasium_Script_BlackBelt_4
# 38 "data/maps/Gymnasium/scripts.pory"
	case 8, Gymnasium_Script_BlackBelt_4
# 39 "data/maps/Gymnasium/scripts.pory"
	case 9, Gymnasium_Script_BlackBelt_4
Gymnasium_Script_BlackBelt_4:
# 41 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_BlackBelt3, MSGBOX_NPC
	return

Gymnasium_Script_BlackBelt_2:
# 32 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_BlackBelt1, MSGBOX_NPC
	return

Gymnasium_Script_BlackBelt_3:
# 36 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_BlackBelt2, MSGBOX_NPC
	return


Gymnasium_Script_Hector::
# 46 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Hector1, MSGBOX_NPC
# 47 "data/maps/Gymnasium/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_HECTOR, 1
# 48 "data/maps/Gymnasium/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Gymnasium_Script_Hector_1
# 52 "data/maps/Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_HECTOR, Common_Movement_ExclamationMark
# 53 "data/maps/Gymnasium/scripts.pory"
	waitmovement 0
# 55 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Hector_Wedding1
# 56 "data/maps/Gymnasium/scripts.pory"
	removeitem ITEM_WEDDING_INVITATION_HECTOR
# 58 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_GiveInvitation
# 59 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Hector_Wedding2
# 60 "data/maps/Gymnasium/scripts.pory"
	closemessage
# 62 "data/maps/Gymnasium/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 63 "data/maps/Gymnasium/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Gymnasium_Script_Hector_5
Gymnasium_Script_Hector_4:
# 67 "data/maps/Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_HECTOR, Common_Movement_WalkDown7
# 68 "data/maps/Gymnasium/scripts.pory"
	waitmovement 0
# 70 "data/maps/Gymnasium/scripts.pory"
	removeobject LOCALID_GYMNASIUM_HECTOR
# 71 "data/maps/Gymnasium/scripts.pory"
	call Gymnasium_Script_HideHector
# 72 "data/maps/Gymnasium/scripts.pory"
	addobject LOCALID_GYMNASIUM_HECTOR
# 74 "data/maps/Gymnasium/scripts.pory"
	setflag FLAG_GYMNASIUM_HECTORLEFT
	end

Gymnasium_Script_Hector_1:
	end

Gymnasium_Script_Hector_5:
# 64 "data/maps/Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_HECTOR, Common_Movement_WalkLeft
# 65 "data/maps/Gymnasium/scripts.pory"
	waitmovement 0
	goto Gymnasium_Script_Hector_4


Gymnasium_Script_TrainerHector::
	return


Gymnasium_Script_Protesilaus::
	return


Gymnasium_Script_TrainerProtesilaus::
	return


Gymnasium_Script_Chiron::
	return


Gymnasium_Text_BlackBelt1::
# 96 "data/maps/Gymnasium/scripts.pory"
	.string "$"

Gymnasium_Text_BlackBelt2::
# 100 "data/maps/Gymnasium/scripts.pory"
	.string "$"

Gymnasium_Text_BlackBelt3::
# 104 "data/maps/Gymnasium/scripts.pory"
	.string "$"

Gymnasium_Text_Hector1::
# 108 "data/maps/Gymnasium/scripts.pory"
	.string "$"

Gymnasium_Text_Hector_Wedding1::
# 112 "data/maps/Gymnasium/scripts.pory"
	.string "$"

Gymnasium_Text_Hector_Wedding2::
# 116 "data/maps/Gymnasium/scripts.pory"
	.string "$"

Gymnasium_Text_GiveInvitation::
# 120 "data/maps/Gymnasium/scripts.pory"
	.string "$"
