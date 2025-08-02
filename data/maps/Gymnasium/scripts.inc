Gymnasium_MapScripts::
# 10 "data/maps/Gymnasium/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/Gymnasium/scripts.pory"
	call Gymnasium_Script_SetGymnasiumState
# 14 "data/maps/Gymnasium/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/Gymnasium/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_gt Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/Gymnasium/scripts.pory"
	call Gymnasium_Script_HideHectorEtTrainer
	goto Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Gymnasium_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data/maps/Gymnasium/scripts.pory"
	call Gymnasium_Script_HideHector
# 21 "data/maps/Gymnasium/scripts.pory"
	call Gymnasium_Script_ShowChampionProtesilaus
	return


Gymnasium_Script_SetGymnasiumState::
# 28 "data/maps/Gymnasium/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_HECTOR, 1
# 30 "data/maps/Gymnasium/scripts.pory"
	goto_if_set FLAG_TEMP_B, Gymnasium_Script_SetGymnasiumState_2
# 34 "data/maps/Gymnasium/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Gymnasium_Script_SetGymnasiumState_3
# 38 "data/maps/Gymnasium/scripts.pory"
	goto_if_set FLAG_GYMNASIUM_HECTORLEFT, Gymnasium_Script_SetGymnasiumState_7
# 42 "data/maps/Gymnasium/scripts.pory"
	setvar VAR_TEMP_5, 1
Gymnasium_Script_SetGymnasiumState_1:
	return

Gymnasium_Script_SetGymnasiumState_2:
# 31 "data/maps/Gymnasium/scripts.pory"
	setvar VAR_TEMP_5, 4
	goto Gymnasium_Script_SetGymnasiumState_1

Gymnasium_Script_SetGymnasiumState_3:
# 35 "data/maps/Gymnasium/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto Gymnasium_Script_SetGymnasiumState_1

Gymnasium_Script_SetGymnasiumState_7:
# 39 "data/maps/Gymnasium/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto Gymnasium_Script_SetGymnasiumState_1


Gymnasium_Script_HideHector::
# 49 "data/maps/Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_GYMNASIUM_HECTOR, 0, 0
# 50 "data/maps/Gymnasium/scripts.pory"
	setobjectmovementtype LOCALID_GYMNASIUM_HECTOR, MOVEMENT_TYPE_INVISIBLE
	return


Gymnasium_Script_HideHectorEtTrainer::
# 55 "data/maps/Gymnasium/scripts.pory"
	call Gymnasium_Script_HideHector
# 56 "data/maps/Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_GYMNASIUM_HECTORTRAINER, 0, 0
# 57 "data/maps/Gymnasium/scripts.pory"
	setobjectmovementtype LOCALID_GYMNASIUM_HECTORTRAINER, MOVEMENT_TYPE_INVISIBLE
	return


Gymnasium_Script_ShowChampionProtesilaus::
# 62 "data/maps/Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_GYMNASIUM_HECTORTRAINER, 7, 4
# 63 "data/maps/Gymnasium/scripts.pory"
	setobjectmovementtype LOCALID_GYMNASIUM_HECTORTRAINER, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_GYMNASIUM_PROTESILAUSTRAINER, 3, 4
# 65 "data/maps/Gymnasium/scripts.pory"
	setobjectmovementtype LOCALID_GYMNASIUM_PROTESILAUSTRAINER, MOVEMENT_TYPE_FACE_DOWN
# 66 "data/maps/Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_GYMNASIUM_PROTESILAUS, 4, 2
# 67 "data/maps/Gymnasium/scripts.pory"
	setobjectmovementtype LOCALID_GYMNASIUM_PROTESILAUS, MOVEMENT_TYPE_FACE_DOWN
	return


Gymnasium_Script_BlackBelt::
# 73 "data/maps/Gymnasium/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 74 "data/maps/Gymnasium/scripts.pory"
	switch VAR_RESULT
# 75 "data/maps/Gymnasium/scripts.pory"
	case 0, Gymnasium_Script_BlackBelt_2
# 76 "data/maps/Gymnasium/scripts.pory"
	case 1, Gymnasium_Script_BlackBelt_2
# 77 "data/maps/Gymnasium/scripts.pory"
	case 2, Gymnasium_Script_BlackBelt_2
# 78 "data/maps/Gymnasium/scripts.pory"
	case 3, Gymnasium_Script_BlackBelt_2
# 80 "data/maps/Gymnasium/scripts.pory"
	case 4, Gymnasium_Script_BlackBelt_3
# 81 "data/maps/Gymnasium/scripts.pory"
	case 5, Gymnasium_Script_BlackBelt_3
# 82 "data/maps/Gymnasium/scripts.pory"
	case 6, Gymnasium_Script_BlackBelt_3
# 84 "data/maps/Gymnasium/scripts.pory"
	case 7, Gymnasium_Script_BlackBelt_4
# 85 "data/maps/Gymnasium/scripts.pory"
	case 8, Gymnasium_Script_BlackBelt_4
# 86 "data/maps/Gymnasium/scripts.pory"
	case 9, Gymnasium_Script_BlackBelt_4
Gymnasium_Script_BlackBelt_4:
# 88 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_BlackBelt3, MSGBOX_NPC
	return

Gymnasium_Script_BlackBelt_2:
# 79 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_BlackBelt1, MSGBOX_NPC
	return

Gymnasium_Script_BlackBelt_3:
# 83 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_BlackBelt2, MSGBOX_NPC
	return


Gymnasium_Script_Hector::
# 93 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Hector1, MSGBOX_NPC
# 94 "data/maps/Gymnasium/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_HECTOR, 1
# 95 "data/maps/Gymnasium/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Gymnasium_Script_Hector_1
# 99 "data/maps/Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_HECTOR, Common_Movement_ExclamationMark
# 100 "data/maps/Gymnasium/scripts.pory"
	waitmovement 0
# 102 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Hector_Wedding1
# 103 "data/maps/Gymnasium/scripts.pory"
	removeitem ITEM_WEDDING_INVITATION_HECTOR
# 105 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_GiveInvitation
# 106 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Hector_Wedding2
# 107 "data/maps/Gymnasium/scripts.pory"
	closemessage
# 109 "data/maps/Gymnasium/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 110 "data/maps/Gymnasium/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Gymnasium_Script_Hector_5
Gymnasium_Script_Hector_4:
# 114 "data/maps/Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_HECTOR, Common_Movement_WalkDown7
# 115 "data/maps/Gymnasium/scripts.pory"
	waitmovement 0
# 117 "data/maps/Gymnasium/scripts.pory"
	removeobject LOCALID_GYMNASIUM_HECTOR
# 118 "data/maps/Gymnasium/scripts.pory"
	call Gymnasium_Script_HideHector
# 119 "data/maps/Gymnasium/scripts.pory"
	addobject LOCALID_GYMNASIUM_HECTOR
# 121 "data/maps/Gymnasium/scripts.pory"
	setflag FLAG_GYMNASIUM_HECTORLEFT
# 123 "data/maps/Gymnasium/scripts.pory"
	addvar VAR_TEMP_5, 1
	end

Gymnasium_Script_Hector_1:
	end

Gymnasium_Script_Hector_5:
# 111 "data/maps/Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_HECTOR, Common_Movement_WalkLeft
# 112 "data/maps/Gymnasium/scripts.pory"
	waitmovement 0
	goto Gymnasium_Script_Hector_4


Gymnasium_Script_HectorTrainer::
# 130 "data/maps/Gymnasium/scripts.pory"
	switch VAR_TEMP_5
# 131 "data/maps/Gymnasium/scripts.pory"
	case 0, Gymnasium_Script_HectorTrainer_2
# 133 "data/maps/Gymnasium/scripts.pory"
	case 1, Gymnasium_Script_HectorTrainer_3
# 137 "data/maps/Gymnasium/scripts.pory"
	case 2, Gymnasium_Script_HectorTrainer_4
# 139 "data/maps/Gymnasium/scripts.pory"
	case 3, Gymnasium_Script_HectorTrainer_5
# 141 "data/maps/Gymnasium/scripts.pory"
	case 4, Gymnasium_Script_HectorTrainer_6
# 144 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Script_HectorTrainer_Text_0, MSGBOX_NPC
	return

Gymnasium_Script_HectorTrainer_2:
# 132 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Script_HectorTrainer_Text_0, MSGBOX_NPC
	return

Gymnasium_Script_HectorTrainer_3:
# 134 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Script_HectorTrainer_Text_1
# 135 "data/maps/Gymnasium/scripts.pory"
	closemessage
	end

Gymnasium_Script_HectorTrainer_4:
# 138 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_HectorTrainer1, MSGBOX_NPC
	return

Gymnasium_Script_HectorTrainer_5:
# 140 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_HectorTrainer2, MSGBOX_NPC
	return

Gymnasium_Script_HectorTrainer_6:
# 142 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_HectorTrainer3, MSGBOX_NPC
	return


Gymnasium_Script_Protesilaus::
# 149 "data/maps/Gymnasium/scripts.pory"
	switch VAR_TEMP_5
# 150 "data/maps/Gymnasium/scripts.pory"
	case 0, Gymnasium_Script_Protesilaus_2
# 152 "data/maps/Gymnasium/scripts.pory"
	case 1, Gymnasium_Script_Protesilaus_3
# 154 "data/maps/Gymnasium/scripts.pory"
	case 2, Gymnasium_Script_Protesilaus_4
# 156 "data/maps/Gymnasium/scripts.pory"
	case 3, Gymnasium_Script_Protesilaus_5
# 158 "data/maps/Gymnasium/scripts.pory"
	case 4, Gymnasium_Script_Protesilaus_6
# 161 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Script_HectorTrainer_Text_0, MSGBOX_NPC
	return

Gymnasium_Script_Protesilaus_2:
# 151 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Script_HectorTrainer_Text_0, MSGBOX_NPC
	return

Gymnasium_Script_Protesilaus_3:
# 153 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Protesilaus1, MSGBOX_NPC
	return

Gymnasium_Script_Protesilaus_4:
# 155 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Protesilaus2, MSGBOX_NPC
	return

Gymnasium_Script_Protesilaus_5:
# 157 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Protesilaus3, MSGBOX_NPC
	return

Gymnasium_Script_Protesilaus_6:
# 159 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Protesilaus4, MSGBOX_NPC
	return


Gymnasium_Script_ProtesilausTrainer::
# 166 "data/maps/Gymnasium/scripts.pory"
	switch VAR_TEMP_5
# 167 "data/maps/Gymnasium/scripts.pory"
	case 0, Gymnasium_Script_ProtesilausTrainer_2
# 169 "data/maps/Gymnasium/scripts.pory"
	case 1, Gymnasium_Script_ProtesilausTrainer_3
# 171 "data/maps/Gymnasium/scripts.pory"
	case 2, Gymnasium_Script_ProtesilausTrainer_4
# 173 "data/maps/Gymnasium/scripts.pory"
	case 3, Gymnasium_Script_ProtesilausTrainer_5
# 175 "data/maps/Gymnasium/scripts.pory"
	case 4, Gymnasium_Script_ProtesilausTrainer_6
# 178 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Script_HectorTrainer_Text_0, MSGBOX_NPC
	return

Gymnasium_Script_ProtesilausTrainer_2:
# 168 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Script_HectorTrainer_Text_0, MSGBOX_NPC
	return

Gymnasium_Script_ProtesilausTrainer_3:
# 170 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_ProtesilausTrainer1, MSGBOX_NPC
	return

Gymnasium_Script_ProtesilausTrainer_4:
# 172 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_ProtesilausTrainer2, MSGBOX_NPC
	return

Gymnasium_Script_ProtesilausTrainer_5:
# 174 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_ProtesilausTrainer3, MSGBOX_NPC
	return

Gymnasium_Script_ProtesilausTrainer_6:
# 176 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_ProtesilausTrainer4, MSGBOX_NPC
	return


Gymnasium_Script_Chiron::
# 183 "data/maps/Gymnasium/scripts.pory"
	switch VAR_TEMP_5
# 184 "data/maps/Gymnasium/scripts.pory"
	case 0, Gymnasium_Script_Chiron_2
# 186 "data/maps/Gymnasium/scripts.pory"
	case 1, Gymnasium_Script_Chiron_3
# 188 "data/maps/Gymnasium/scripts.pory"
	case 2, Gymnasium_Script_Chiron_4
# 190 "data/maps/Gymnasium/scripts.pory"
	case 3, Gymnasium_Script_Chiron_5
# 192 "data/maps/Gymnasium/scripts.pory"
	case 4, Gymnasium_Script_Chiron_6
# 195 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Script_HectorTrainer_Text_0, MSGBOX_NPC
	return

Gymnasium_Script_Chiron_2:
# 185 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Script_HectorTrainer_Text_0, MSGBOX_NPC
	return

Gymnasium_Script_Chiron_3:
# 187 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Chiron1, MSGBOX_NPC
	return

Gymnasium_Script_Chiron_4:
# 189 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Chiron2, MSGBOX_NPC
	return

Gymnasium_Script_Chiron_5:
# 191 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Chiron3, MSGBOX_NPC
	return

Gymnasium_Script_Chiron_6:
# 193 "data/maps/Gymnasium/scripts.pory"
	msgbox Gymnasium_Text_Chiron4, MSGBOX_NPC
	return


Gymnasium_Script_HectorTrainer_Text_0:
# 132 "data/maps/Gymnasium/scripts.pory"
	.string "ERROR\n GYMNASIUM_STATE OOB$"

Gymnasium_Script_HectorTrainer_Text_1:
# 134 "data/maps/Gymnasium/scripts.pory"
	.string "ERROR\nGYMNASIUM_STATE OOB$"

Gymnasium_Text_BlackBelt1::
# 200 "data/maps/Gymnasium/scripts.pory"
	.string "This is the Gymnasium, home of the\n"
	.string "Grand Tournanment.$"

Gymnasium_Text_BlackBelt2::
# 204 "data/maps/Gymnasium/scripts.pory"
	.string "I'm honored just to guard the door of\n"
	.string "this place.$"

Gymnasium_Text_BlackBelt3::
# 208 "data/maps/Gymnasium/scripts.pory"
	.string "You don't look like most of the men who\n"
	.string "come to the Gymnasium to train under\l"
	.string "Chiron and fight in the Grand\l"
	.string "Tournament.$"

Gymnasium_Text_Hector1::
# 212 "data/maps/Gymnasium/scripts.pory"
	.string "I've trained all my life for this\n"
	.string "tournanment. I'm ready. I will be the\l"
	.string "champion.$"

Gymnasium_Text_Hector_Wedding1::
# 217 "data/maps/Gymnasium/scripts.pory"
	.string "What's that? You brought something to\n"
	.string "give to me?$"

Gymnasium_Text_Hector_Wedding2::
# 221 "data/maps/Gymnasium/scripts.pory"
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
# 241 "data/maps/Gymnasium/scripts.pory"
	.string "{PLAYER} gave the Wedding Invitation\n"
	.string "to Hector$"

Gymnasium_Text_Protesilaus1::
# 245 "data/maps/Gymnasium/scripts.pory"
	.string "I'll beat anyone, any challenger!$"

Gymnasium_Text_Protesilaus2::
# 249 "data/maps/Gymnasium/scripts.pory"
	.string "That man over there, Hector, he is much\n"
	.string "larger and confident than I assumed.$"

Gymnasium_Text_Protesilaus3::
# 254 "data/maps/Gymnasium/scripts.pory"
	.string "Is he serious? Did he just withdraw?$"

Gymnasium_Text_Protesilaus4::
# 258 "data/maps/Gymnasium/scripts.pory"
	.string "My years of training have finally paid\n"
	.string "off! Look here, kid, if you work hard all\l"
	.string "your life perhaps one day you too can\l"
	.string "be the champ.$"

Gymnasium_Text_Chiron1::
# 264 "data/maps/Gymnasium/scripts.pory"
	.string "Hello, my name is Chiron I am the the\n"
	.string "grandmaster of the Gymnasium and\l"
	.string "preside over the Grand Tournement.$"

Gymnasium_Text_Chiron2::
# 270 "data/maps/Gymnasium/scripts.pory"
	.string "The championship fight will soon begin.\n"
	.string "I have seen dozens of champions\l"
	.string "crowned since the days of my youth\l"
	.string "when I myself crowned champion with\l"
	.string "the laurel wreath. In all those years no\l"
	.string "fight has been so far mismatched as\l"
	.string "today between Hector and Protesilaus.\l"
	.string "Hector is by far stronger, faster, more\l"
	.string "noble, and more calm. This fight will\l"
	.string "likely not last two whole rounds. I'm\l"
	.string "sure Hector will win, but still they must\l"
	.string "compete to determine the champion.$"

Gymnasium_Text_Chiron3::
# 284 "data/maps/Gymnasium/scripts.pory"
	.string "Never in all my days...Where did he go?$"

Gymnasium_Text_Chiron4::
# 288 "data/maps/Gymnasium/scripts.pory"
	.string "The champion, Protesilaus, has not\n"
	.string "earned his laurel wreath by victory but\l"
	.string "on a technicality. Without an opponent\l"
	.string "to challenge him he is the champion by\l"
	.string "default. If I were only fifteen years\l"
	.string "younger, a far cry from the figher I was\l"
	.string "back in my youth, I'd challenge this\l"
	.string "default champion and win!$"

Gymnasium_Text_ProtesilausTrainer1::
# 299 "data/maps/Gymnasium/scripts.pory"
	.string "Keep on your toes! Focus!$"

Gymnasium_Text_ProtesilausTrainer2::
# 303 "data/maps/Gymnasium/scripts.pory"
	.string "Stay loose! We'll need agility to beat\n"
	.string "Hector.$"

Gymnasium_Text_ProtesilausTrainer3::
# 307 "data/maps/Gymnasium/scripts.pory"
	.string "This must be some kind of ruse. Keep\n"
	.string "getting ready for battle!$"

Gymnasium_Text_ProtesilausTrainer4::
# 311 "data/maps/Gymnasium/scripts.pory"
	.string "It's been a long journey with\n"
	.string "Protesilaus but I am so proud to see all\l"
	.string "his hard work pay off. Being a\l"
	.string "champion's trainer will make my services\l"
	.string "command a much higher premium as well.$"

Gymnasium_Text_HectorTrainer1::
# 315 "data/maps/Gymnasium/scripts.pory"
	.string "We've trained all this time for this\n"
	.string "moment! You're ready! You're going to\l"
	.string "win!$"

Gymnasium_Text_HectorTrainer2::
# 319 "data/maps/Gymnasium/scripts.pory"
	.string "What? Where is he going? Hector!$"

Gymnasium_Text_HectorTrainer3::
# 323 "data/maps/Gymnasium/scripts.pory"
	.string "I can't believe it...disqualified...on a\n"
	.string "technicality... and now all that work\l"
	.string "just... gone...$"
