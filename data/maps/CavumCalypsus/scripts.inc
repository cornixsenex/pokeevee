CavumCalypsus_MapScripts::
# 3 "data/maps/CavumCalypsus/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CavumCalypsus_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CavumCalypsus_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/CavumCalypsus/scripts.pory"
	compare VAR_ULYSSES_STATE, 20
	goto_if_eq CavumCalypsus_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

CavumCalypsus_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/CavumCalypsus/scripts.pory"
	call CavumCalypsus_Script_ShowUlysses
	return


CavumCalypsus_Script_ShowUlysses::
# 12 "data/maps/CavumCalypsus/scripts.pory"
	setobjectxyperm LOCALID_CAVUMCALYPSUS_CALYPSO, 11, 5
# 13 "data/maps/CavumCalypsus/scripts.pory"
	setobjectmovementtype LOCALID_CAVUMCALYPSUS_CALYPSO, MOVEMENT_TYPE_FACE_DOWN
# 14 "data/maps/CavumCalypsus/scripts.pory"
	setobjectxyperm LOCALID_CAVUMCALYPSUS_ULYSSES, 11, 5
# 15 "data/maps/CavumCalypsus/scripts.pory"
	setobjectmovementtype LOCALID_CAVUMCALYPSUS_ULYSSES, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return


Common_Script_Bed::
# 20 "data/maps/CavumCalypsus/scripts.pory"
	msgbox Common_Text_Bed, MSGBOX_YESNO
# 21 "data/maps/CavumCalypsus/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_Script_Bed_2
Common_Script_Bed_1:
# 24 "data/maps/CavumCalypsus/scripts.pory"
	closemessage
	end

Common_Script_Bed_2:
# 22 "data/maps/CavumCalypsus/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Common_Script_Bed_1


CavumCalypsus_Script_UlyssesSceneA::
# 29 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 30 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 31 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 32 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 33 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 34 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 35 "data/maps/CavumCalypsus/scripts.pory"
	call CavumCalypsus_Script_UlyssesScene
	return


CavumCalypsus_Script_UlyssesSceneB::
# 39 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 40 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 41 "data/maps/CavumCalypsus/scripts.pory"
	call CavumCalypsus_Script_UlyssesScene
	return


CavumCalypsus_Script_UlyssesSceneC::
# 45 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 46 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 47 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 48 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 49 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 50 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 51 "data/maps/CavumCalypsus/scripts.pory"
	call CavumCalypsus_Script_UlyssesScene
	return


CavumCalypsus_Script_UlyssesScene::
# 55 "data/maps/CavumCalypsus/scripts.pory"
	delay 60
# 56 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 57 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 58 "data/maps/CavumCalypsus/scripts.pory"
	delay 60
# 59 "data/maps/CavumCalypsus/scripts.pory"
	lock
# 60 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_ULYSSES, Common_Movement_ExclamationMark
# 61 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 62 "data/maps/CavumCalypsus/scripts.pory"
	delay 60
# 64 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_ULYSSES, Common_Movement_WalkLeft2
# 65 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 66 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_ULYSSES, Common_Movement_WalkDown
# 67 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 68 "data/maps/CavumCalypsus/scripts.pory"
	load_field_pic FIELD_PIC_CALYPSO, 190, 98
# 69 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Text_Calypso1
# 70 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_CALYPSO, Common_Movement_ExclamationMark
# 71 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 72 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_CALYPSO, Common_Movement_FaceDown
# 73 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 74 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Script_UlyssesScene_Text_0
# 75 "data/maps/CavumCalypsus/scripts.pory"
	destroy_field_pic FIELD_PIC_CALYPSO
# 76 "data/maps/CavumCalypsus/scripts.pory"
	closemessage
# 77 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_CALYPSO, Common_Movement_WalkLeft
# 78 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 79 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_ULYSSES, Common_Movement_FaceRight
# 80 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 82 "data/maps/CavumCalypsus/scripts.pory"
	load_field_pic FIELD_PIC_CALYPSO, 190, 98
# 83 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Text_Calypso2
# 84 "data/maps/CavumCalypsus/scripts.pory"
	destroy_field_pic FIELD_PIC_CALYPSO
# 86 "data/maps/CavumCalypsus/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 87 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Text_Ulysses1
# 88 "data/maps/CavumCalypsus/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 90 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_CALYPSO, Common_Movement_ExclamationMark
# 91 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 93 "data/maps/CavumCalypsus/scripts.pory"
	load_field_pic FIELD_PIC_CALYPSO, 190, 98
# 94 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Text_Calypso3
# 95 "data/maps/CavumCalypsus/scripts.pory"
	destroy_field_pic FIELD_PIC_CALYPSO
# 97 "data/maps/CavumCalypsus/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 98 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Text_Ulysses2
# 99 "data/maps/CavumCalypsus/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 101 "data/maps/CavumCalypsus/scripts.pory"
	load_field_pic FIELD_PIC_CALYPSO, 190, 98
# 102 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Text_Calypso4
# 103 "data/maps/CavumCalypsus/scripts.pory"
	destroy_field_pic FIELD_PIC_CALYPSO
# 104 "data/maps/CavumCalypsus/scripts.pory"
	closemessage
# 106 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_CALYPSO, Common_Movement_WalkDown2
# 107 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 108 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_CALYPSO, Common_Movement_WalkRight
# 109 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 110 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_CALYPSO, Common_Movement_FaceDown
# 111 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 113 "data/maps/CavumCalypsus/scripts.pory"
	load_field_pic FIELD_PIC_CALYPSO, 190, 98
# 114 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Text_Calypso5
# 115 "data/maps/CavumCalypsus/scripts.pory"
	destroy_field_pic FIELD_PIC_CALYPSO
# 116 "data/maps/CavumCalypsus/scripts.pory"
	closemessage
# 118 "data/maps/CavumCalypsus/scripts.pory"
	trainerbattle_no_intro TRAINER_CALYPSO, CavumCalypsus_Text_CalypsoLost
# 120 "data/maps/CavumCalypsus/scripts.pory"
	load_field_pic FIELD_PIC_CALYPSO, 190, 98
# 121 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Text_Calypso5
# 122 "data/maps/CavumCalypsus/scripts.pory"
	destroy_field_pic FIELD_PIC_CALYPSO
# 123 "data/maps/CavumCalypsus/scripts.pory"
	closemessage
# 125 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_CALYPSO, Common_Movement_WalkLeft
# 126 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 127 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_CALYPSO, Common_Movement_WalkDown6
# 128 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 130 "data/maps/CavumCalypsus/scripts.pory"
	playse SE_M_DIVE
# 131 "data/maps/CavumCalypsus/scripts.pory"
	waitse
# 133 "data/maps/CavumCalypsus/scripts.pory"
	removeobject LOCALID_CAVUMCALYPSUS_CALYPSO
# 134 "data/maps/CavumCalypsus/scripts.pory"
	setobjectxyperm LOCALID_CAVUMCALYPSUS_CALYPSO, 0, 0
# 135 "data/maps/CavumCalypsus/scripts.pory"
	setobjectmovementtype LOCALID_CAVUMCALYPSUS_CALYPSO, MOVEMENT_TYPE_INVISIBLE
# 136 "data/maps/CavumCalypsus/scripts.pory"
	addobject LOCALID_CAVUMCALYPSUS_CALYPSO
# 138 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_ULYSSES, Common_Movement_WalkDown2
# 139 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 140 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_ULYSSES, Common_Movement_WalkRight2
# 141 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 142 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_ULYSSES, Common_Movement_FaceDown
# 143 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 145 "data/maps/CavumCalypsus/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 146 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Text_Ulysses3
# 147 "data/maps/CavumCalypsus/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 148 "data/maps/CavumCalypsus/scripts.pory"
	closemessage
# 150 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_ULYSSES, Common_Movement_WalkLeft
# 151 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 152 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_ULYSSES, Common_Movement_WalkDown6
# 153 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 155 "data/maps/CavumCalypsus/scripts.pory"
	removeobject LOCALID_CAVUMCALYPSUS_ULYSSES
# 156 "data/maps/CavumCalypsus/scripts.pory"
	setobjectxyperm LOCALID_CAVUMCALYPSUS_ULYSSES, 0, 0
# 157 "data/maps/CavumCalypsus/scripts.pory"
	setobjectmovementtype LOCALID_CAVUMCALYPSUS_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 158 "data/maps/CavumCalypsus/scripts.pory"
	addobject LOCALID_CAVUMCALYPSUS_ULYSSES
# 160 "data/maps/CavumCalypsus/scripts.pory"
	setvar VAR_ULYSSES_STATE, 21
	end


CavumCalypsus_Script_UlyssesScene_Text_0:
# 74 "data/maps/CavumCalypsus/scripts.pory"
	.string "Aaahh!$"

Common_Text_Bed::
# 165 "data/maps/CavumCalypsus/scripts.pory"
	.string "It's a comfortable looking bed! Would\n"
	.string "you like to take a rest?$"

CavumCalypsus_Text_Calypso1::
# 169 "data/maps/CavumCalypsus/scripts.pory"
	.string "Ulysses, darling, please come back to\n"
	.string "bed.$"

CavumCalypsus_Text_Calypso2::
# 173 "data/maps/CavumCalypsus/scripts.pory"
	.string "What's happening? Who's this? Do you\n"
	.string "know him?$"

CavumCalypsus_Text_Ulysses1::
# 177 "data/maps/CavumCalypsus/scripts.pory"
	.string "He is the herald of my departure. For\n"
	.string "too long you have kept me prisoner of\l"
	.string "your pleasure. The time's come, I must\l"
	.string "go.$"

CavumCalypsus_Text_Calypso3::
# 183 "data/maps/CavumCalypsus/scripts.pory"
	.string "You lied! Or else you have been\n"
	.string "enchanted by some rival power beyond\l"
	.string "my own. Did not you seven times swear\l"
	.string "faithfully to be my bed fellow, my\l"
	.string "lover? Why now scorn the sweet love\l"
	.string "that you and I have?$"

CavumCalypsus_Text_Ulysses2::
# 190 "data/maps/CavumCalypsus/scripts.pory"
	.string "My love is given to but one woman.\n"
	.string "Penelope, my wife and avowed queen,\l"
	.string "forever has my heart. It was a dream\l"
	.string "you cast upon my tongue, or some magic\l"
	.string "which caused my lips to swear a profane\l"
	.string "oath if ever I have pronounced such a\l"
	.string "thing for truly I cannot recall those\l"
	.string "words.$"

CavumCalypsus_Text_Calypso4::
# 218 "data/maps/CavumCalypsus/scripts.pory"
	.string "Penelope? I can't believe my ears! What\n"
	.string "happened to the man I thought I loved?\l"
	.string "Where is that virile man who's lips I\l"
	.string "kissed, who told me my love was the most\l"
	.string "potent, second to none, even\l"
	.string "Penelope's. There was no magic spell, or\l"
	.string "secret art of mine at play beyond the\l"
	.string "simple charms a woman works on the man\l"
	.string "whom she wants. Nothing but the arrows\l"
	.string "of Cupid were at work. Now I fear his\l"
	.string "twin sided shafts have shot a grievous\l"
	.string "pain into my heart. You've been\l"
	.string "deceived, or otherwise coerced, by this\l"
	.string "intruder to betray our love. I'll rescue\l"
	.string "you! I'll fight to save our love!$"

CavumCalypsus_Text_Calypso5::
# 235 "data/maps/CavumCalypsus/scripts.pory"
	.string "I don't know who you are, or where\n"
	.string "you're from, but I can tell you've come\l"
	.string "to take my man. If you want him you'll\l"
	.string "have to go through me.$"

CavumCalypsus_Text_CalypsoLost::
# 240 "data/maps/CavumCalypsus/scripts.pory"
	.string "Cupid's arrow pierced my heart fatally.$"

CavumCalypsus_Text_Calypso6::
# 245 "data/maps/CavumCalypsus/scripts.pory"
	.string "I won't endure a single wretched day\n"
	.string "upon this cursed Earth without my love!\l"
	.string "Forsaken, and alone, I'll drown myself!$"

CavumCalypsus_Text_Ulysses3::
# 251 "data/maps/CavumCalypsus/scripts.pory"
	.string "Thank you, {PLAYER}. I was trapped\n"
	.string "here, prisoner of foul Calypso's subtle\l"
	.string "magic arts. She forced me to perform\l"
	.string "unholy acts ans pronounce false\l"
	.string "beliefs in her base bed. I lived as in a\l"
	.string "dream, nay, a nightmare for all the time\l"
	.string "my heart cried out in pain and yearning\l"
	.string "for my wife, Penelope. I beg you not to\l"
	.string "mention this to her. A woman's heart is\l"
	.string "too fragile to hear stories of her man\l"
	.string "being so abused. The time has come at\l"
	.string "last, I shall depart with all possible\l"
	.string "haste for Nestor's house and my friend\l"
	.string "Menelaus' wedding.$"
