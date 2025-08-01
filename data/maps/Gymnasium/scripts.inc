Gymnasium_MapScripts::
# 6 "data/maps/Gymnasium/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/Gymnasium/scripts.pory"
	goto_if_set FLAG_GYMNASIUM_HECTORLEFT, Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/Gymnasium/scripts.pory"
	call Gymnasium_Script_HideHector
# 11 "data/maps/Gymnasium/scripts.pory"
	call Gymnasium_Script_ShowChampionProtesilaus
# 13 "data/maps/Gymnasium/scripts.pory"
	setflag FLAG_TEMP_B
	return


Gymnasium_Script_HideHector::
# 20 "data/maps/Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_GYMNASIUM_HECTOR, 0, 0
# 21 "data/maps/Gymnasium/scripts.pory"
	setobjectmovementtype LOCALID_GYMNASIUM_HECTOR, MOVEMENT_TYPE_INVISIBLE
	return


Gymnasium_Script_ShowChampionProtesilaus::
# 26 "data/maps/Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_GYMNASIUM_HECTORTRAINER, 7, 4
# 27 "data/maps/Gymnasium/scripts.pory"
	setobjectmovementtype LOCALID_GYMNASIUM_HECTORTRAINER, MOVEMENT_TYPE_FACE_DOWN
# 28 "data/maps/Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_GYMNASIUM_PROTESILAUSTRAINER, 3, 4
# 29 "data/maps/Gymnasium/scripts.pory"
	setobjectmovementtype LOCALID_GYMNASIUM_PROTESILAUSTRAINER, MOVEMENT_TYPE_FACE_DOWN
# 30 "data/maps/Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_GYMNASIUM_PROTESILAUS, 4, 2
# 31 "data/maps/Gymnasium/scripts.pory"
	setobjectmovementtype LOCALID_GYMNASIUM_PROTESILAUS, MOVEMENT_TYPE_FACE_DOWN
	return


Gymnasium_Script_BlackBelt::
# 37 "data/maps/Gymnasium/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 38 "data/maps/Gymnasium/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/Gymnasium/scripts.pory"
	case 0, Gymnasium_Script_BlackBelt_2
# 40 "data/maps/Gymnasium/scripts.pory"
	case 1, Gymnasium_Script_BlackBelt_2
# 41 "data/maps/Gymnasium/scripts.pory"
	case 2, Gymnasium_Script_BlackBelt_2
# 42 "data/maps/Gymnasium/scripts.pory"
	case 3, Gymnasium_Script_BlackBelt_2
# 44 "data/maps/Gymnasium/scripts.pory"
	case 4, Gymnasium_Script_BlackBelt_3
# 45 "data/maps/Gymnasium/scripts.pory"
	case 5, Gymnasium_Script_BlackBelt_3
# 46 "data/maps/Gymnasium/scripts.pory"
	case 6, Gymnasium_Script_BlackBelt_3
# 48 "data/maps/Gymnasium/scripts.pory"
	case 7, Gymnasium_Script_BlackBelt_4
# 49 "data/maps/Gymnasium/scripts.pory"
	case 8, Gymnasium_Script_BlackBelt_4
# 50 "data/maps/Gymnasium/scripts.pory"
	case 9, Gymnasium_Script_BlackBelt_4
Gymnasium_Script_BlackBelt_4:
# 52 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_BlackBelt3, MSGBOX_NPC
	return

Gymnasium_Script_BlackBelt_2:
# 43 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_BlackBelt1, MSGBOX_NPC
	return

Gymnasium_Script_BlackBelt_3:
# 47 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_BlackBelt2, MSGBOX_NPC
	return


Gymnasium_Script_Hector::
# 57 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Hector1, MSGBOX_NPC
# 58 "data/maps/Gymnasium/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_HECTOR, 1
# 59 "data/maps/Gymnasium/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Gymnasium_Script_Hector_1
# 63 "data/maps/Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_HECTOR, Common_Movement_ExclamationMark
# 64 "data/maps/Gymnasium/scripts.pory"
	waitmovement 0
# 66 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Hector_Wedding1
# 67 "data/maps/Gymnasium/scripts.pory"
	removeitem ITEM_WEDDING_INVITATION_HECTOR
# 69 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_GiveInvitation
# 70 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Hector_Wedding2
# 71 "data/maps/Gymnasium/scripts.pory"
	closemessage
# 73 "data/maps/Gymnasium/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 74 "data/maps/Gymnasium/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Gymnasium_Script_Hector_5
Gymnasium_Script_Hector_4:
# 78 "data/maps/Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_HECTOR, Common_Movement_WalkDown7
# 79 "data/maps/Gymnasium/scripts.pory"
	waitmovement 0
# 81 "data/maps/Gymnasium/scripts.pory"
	removeobject LOCALID_GYMNASIUM_HECTOR
# 82 "data/maps/Gymnasium/scripts.pory"
	call Gymnasium_Script_HideHector
# 83 "data/maps/Gymnasium/scripts.pory"
	addobject LOCALID_GYMNASIUM_HECTOR
# 85 "data/maps/Gymnasium/scripts.pory"
	setflag FLAG_GYMNASIUM_HECTORLEFT
	end

Gymnasium_Script_Hector_1:
	end

Gymnasium_Script_Hector_5:
# 75 "data/maps/Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_HECTOR, Common_Movement_WalkLeft
# 76 "data/maps/Gymnasium/scripts.pory"
	waitmovement 0
	goto Gymnasium_Script_Hector_4


Gymnasium_Script_TrainerHector::
	return


Gymnasium_Script_Protesilaus::
# 96 "data/maps/Gymnasium/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_HECTOR, 1
# 98 "data/maps/Gymnasium/scripts.pory"
	goto_if_set FLAG_TEMP_B, Gymnasium_Script_Protesilaus_1
# 102 "data/maps/Gymnasium/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Gymnasium_Script_Protesilaus_2
# 106 "data/maps/Gymnasium/scripts.pory"
	goto_if_set FLAG_GYMNASIUM_HECTORLEFT, Gymnasium_Script_Protesilaus_6
# 110 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Protesilaus_Train, MSGBOX_NPC
	return

Gymnasium_Script_Protesilaus_1:
# 99 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Protesilaus_Champion, MSGBOX_NPC
	return

Gymnasium_Script_Protesilaus_2:
# 103 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Protesilaus_BeforeHectorFight, MSGBOX_NPC
	return

Gymnasium_Script_Protesilaus_6:
# 107 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Protesilaus_AfterHectorExit, MSGBOX_NPC
	return


Gymnasium_Script_TrainerProtesilaus::
	return


Gymnasium_Script_Chiron::
	return


Gymnasium_Text_BlackBelt1::
# 123 "data/maps/Gymnasium/scripts.pory"
	.string "This is the Gymnasium, home of the\n"
	.string "Grand Tournanment.$"

Gymnasium_Text_BlackBelt2::
# 127 "data/maps/Gymnasium/scripts.pory"
	.string "I'm honored just to guard the door of\n"
	.string "this place.$"

Gymnasium_Text_BlackBelt3::
# 131 "data/maps/Gymnasium/scripts.pory"
	.string "You don't look like most of the men who\n"
	.string "come to the Gymnasium to train under\l"
	.string "Chiron and fight in the Grand\l"
	.string "Tournament.$"

Gymnasium_Text_Hector1::
# 135 "data/maps/Gymnasium/scripts.pory"
	.string "I've trained all my life for this\n"
	.string "tournanment. I'm ready. I will be the\l"
	.string "champion.$"

Gymnasium_Text_Hector_Wedding1::
# 140 "data/maps/Gymnasium/scripts.pory"
	.string "What's that? You brought something to\n"
	.string "give to me?$"

Gymnasium_Text_Hector_Wedding2::
# 144 "data/maps/Gymnasium/scripts.pory"
	.string "Wonderful news! My young brother,\n"
	.string "Paris, is staying as a guest at Nestor's\l"
	.string "house and is one of two candidates to\l"
	.string "wed Nestor's lovely daughter, Helen! I\l"
	.string "must attend. As much as I would like to\l"
	.string "stay, to win, to become the champion I\l"
	.string "have worked so hard to be, my family\l"
	.string "comes first. I will not act dishonorably\l"
	.string "by chasing vain glory and scorning the\l"
	.string "pious obligation to attend my brother's\l"
	.string "wedding. Even if he is not the groom, an\l"
	.string "invitation to the house of Nestor is\l"
	.string "honorable as well. Therefore, I lay down\l"
	.string "my bid for the wreath of laurel and my\l"
	.string "fight for victory. Farewell, all! I must\l"
	.string "be off for the house of Nestor to be\l"
	.string "with my dear Paris.$"

Gymnasium_Text_GiveInvitation::
# 164 "data/maps/Gymnasium/scripts.pory"
	.string "{PLAYER} gave the Wedding Invitation\n"
	.string "to Hector$"

Gymnasium_Text_Protesilaus_Train::
# 168 "data/maps/Gymnasium/scripts.pory"
	.string "$"

Gymnasium_Text_Protesilaus_BeforeHectorFight::
# 172 "data/maps/Gymnasium/scripts.pory"
	.string "$"

Gymnasium_Text_Protesilaus_AfterHectorExit::
# 176 "data/maps/Gymnasium/scripts.pory"
	.string "$"

Gymnasium_Text_Protesilaus_Champion::
# 180 "data/maps/Gymnasium/scripts.pory"
	.string "$"
