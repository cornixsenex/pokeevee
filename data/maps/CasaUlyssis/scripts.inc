CasaUlyssis_MapScripts::
# 2 "data/maps/CasaUlyssis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CasaUlyssis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 18 "data/maps/CasaUlyssis/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CasaUlyssis_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 23 "data/maps/CasaUlyssis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CasaUlyssis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CasaUlyssis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/CasaUlyssis/scripts.pory"
	compare VAR_ULYSSES_STATE, 0
	goto_if_eq CasaUlyssis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
CasaUlyssis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/CasaUlyssis/scripts.pory"
	compare VAR_ULYSSES_STATE, 1
	goto_if_eq CasaUlyssis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

CasaUlyssis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/CasaUlyssis/scripts.pory"
	call CasaUlyssis_Script_CheckUlyssesChase
	goto CasaUlyssis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CasaUlyssis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 10 "data/maps/CasaUlyssis/scripts.pory"
	call CasaUlyssis_Script_ShowUlyssesDepart
	return

CasaUlyssis_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 20 "data/maps/CasaUlyssis/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 1, Common_Script_FacePlayerUp
	.2byte 0

CasaUlyssis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 25 "data/maps/CasaUlyssis/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 1, CasaUlyssis_Script_UlyssesDepart
	.2byte 0


CasaUlyssis_Script_CheckUlyssesChase::
# 31 "data/maps/CasaUlyssis/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_ULYSSES
# 32 "data/maps/CasaUlyssis/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CasaUlyssis_Script_CheckUlyssesChase_2
CasaUlyssis_Script_CheckUlyssesChase_1:
	return

CasaUlyssis_Script_CheckUlyssesChase_2:
# 33 "data/maps/CasaUlyssis/scripts.pory"
	call CasaUlyssis_Script_ShowUlyssesAtTable
	goto CasaUlyssis_Script_CheckUlyssesChase_1


CasaUlyssis_Script_ShowUlyssesAtTable::
# 40 "data/maps/CasaUlyssis/scripts.pory"
	setobjectxyperm LOCALID_CASAULYSSIS_ULYSSES, 4, 6
# 41 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_ULYSSES, MOVEMENT_TYPE_FACE_RIGHT
# 43 "data/maps/CasaUlyssis/scripts.pory"
	setobjectxyperm LOCALID_CASAULYSSIS_PENELOPE, 7, 6
# 44 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_PENELOPE, MOVEMENT_TYPE_FACE_LEFT
# 46 "data/maps/CasaUlyssis/scripts.pory"
	setobjectxyperm LOCALID_CASAULYSSIS_TELEMACHUS, 9, 7
# 47 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_TELEMACHUS, MOVEMENT_TYPE_WANDER_AROUND
	return


CasaUlyssis_Script_ShowUlyssesDepart::
# 53 "data/maps/CasaUlyssis/scripts.pory"
	setobjectxyperm LOCALID_CASAULYSSIS_ULYSSES, 7, 7
# 54 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_ULYSSES, MOVEMENT_TYPE_FACE_DOWN
# 56 "data/maps/CasaUlyssis/scripts.pory"
	setobjectxyperm LOCALID_CASAULYSSIS_PENELOPE, 8, 7
# 57 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_PENELOPE, MOVEMENT_TYPE_FACE_DOWN
# 59 "data/maps/CasaUlyssis/scripts.pory"
	setobjectxyperm LOCALID_CASAULYSSIS_TELEMACHUS, 9, 7
# 60 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_TELEMACHUS, MOVEMENT_TYPE_FACE_DOWN
	return


CasaUlyssis_Script_Ulysses::
# 65 "data/maps/CasaUlyssis/scripts.pory"
	faceplayer
# 66 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 68 "data/maps/CasaUlyssis/scripts.pory"
	compare VAR_ULYSSES_STATE, 0
	goto_if_eq CasaUlyssis_Script_Ulysses_2
# 72 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_UlyssesFinal
CasaUlyssis_Script_Ulysses_1:
# 74 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 75 "data/maps/CasaUlyssis/scripts.pory"
	closemessage
# 76 "data/maps/CasaUlyssis/scripts.pory"
	unfaceplayer
	return

CasaUlyssis_Script_Ulysses_2:
# 69 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_UlyssesBeforeInvite
	goto CasaUlyssis_Script_Ulysses_1


CasaUlyssis_Script_Penelope::
# 80 "data/maps/CasaUlyssis/scripts.pory"
	faceplayer
# 81 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_PENELOPE, 190, 98
# 82 "data/maps/CasaUlyssis/scripts.pory"
	compare VAR_ULYSSES_STATE, 0
	goto_if_eq CasaUlyssis_Script_Penelope_2
# 85 "data/maps/CasaUlyssis/scripts.pory"
	compare VAR_ULYSSES_STATE, 69
	goto_if_lt CasaUlyssis_Script_Penelope_3
# 94 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_PenelopeAfterUlyssesReturns
CasaUlyssis_Script_Penelope_1:
# 96 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_PENELOPE
# 97 "data/maps/CasaUlyssis/scripts.pory"
	closemessage
# 98 "data/maps/CasaUlyssis/scripts.pory"
	unfaceplayer
	return

CasaUlyssis_Script_Penelope_2:
# 83 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_PenelopeBeforeInvite
	goto CasaUlyssis_Script_Penelope_1

CasaUlyssis_Script_Penelope_3:
# 86 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_PenelopeWhileUlyssesAway
	goto CasaUlyssis_Script_Penelope_1


CasaUlyssis_Script_Telemachus::
# 102 "data/maps/CasaUlyssis/scripts.pory"
	faceplayer
# 103 "data/maps/CasaUlyssis/scripts.pory"
	switch VAR_ULYSSES_STATE
# 105 "data/maps/CasaUlyssis/scripts.pory"
	case 0, CasaUlyssis_Script_Telemachus_3
# 113 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Script_Telemachus_Text_0
CasaUlyssis_Script_Telemachus_1:
# 115 "data/maps/CasaUlyssis/scripts.pory"
	closemessage
# 116 "data/maps/CasaUlyssis/scripts.pory"
	unfaceplayer
	return

CasaUlyssis_Script_Telemachus_3:
# 106 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_TelemachusBeforeInvite
	goto CasaUlyssis_Script_Telemachus_1


CasaUlyssis_Script_UlyssesDepart::
# 121 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 122 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Ulysses_Depart1
# 123 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 124 "data/maps/CasaUlyssis/scripts.pory"
	closemessage
# 126 "data/maps/CasaUlyssis/scripts.pory"
	applymovement LOCALID_CASAULYSSIS_ULYSSES, Common_Movement_ExclamationMark
# 127 "data/maps/CasaUlyssis/scripts.pory"
	waitmovement 0
# 129 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 130 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Ulysses_Depart2
# 131 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 133 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_GaveInvite
# 135 "data/maps/CasaUlyssis/scripts.pory"
	applymovement LOCALID_CASAULYSSIS_ULYSSES, Common_Movement_ExclamationMark
# 136 "data/maps/CasaUlyssis/scripts.pory"
	waitmovement 0
# 138 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 139 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Ulysses_Depart3
# 140 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 142 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_PENELOPE, 190, 98
# 143 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Penelope_Depart1
# 145 "data/maps/CasaUlyssis/scripts.pory"
	applymovement LOCALID_CASAULYSSIS_ULYSSES, Common_Movement_FaceRight
# 146 "data/maps/CasaUlyssis/scripts.pory"
	applymovement LOCALID_CASAULYSSIS_PENELOPE, Common_Movement_FaceLeft
# 147 "data/maps/CasaUlyssis/scripts.pory"
	waitmovement 0
# 149 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Penelope_Depart2
# 150 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_PENELOPE
# 152 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 153 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Ulysses_Depart4
# 154 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 156 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_PENELOPE, 190, 98
# 157 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Penelope_Depart3
# 158 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_PENELOPE
# 160 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 161 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Ulysses_Depart5
# 162 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 164 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_PENELOPE, 190, 98
# 165 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Penelope_Depart4
# 166 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_PENELOPE
# 168 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 169 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Ulysses_Depart6
# 170 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 172 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_PENELOPE, 190, 98
# 173 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Penelope_Depart5
# 174 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_PENELOPE
# 176 "data/maps/CasaUlyssis/scripts.pory"
	applymovement LOCALID_CASAULYSSIS_ULYSSES, Common_Movement_FaceDown
# 177 "data/maps/CasaUlyssis/scripts.pory"
	waitmovement 0
# 179 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 180 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Ulysses_Depart7
# 181 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 182 "data/maps/CasaUlyssis/scripts.pory"
	closemessage
# 184 "data/maps/CasaUlyssis/scripts.pory"
	applymovement LOCALID_CASAULYSSIS_ULYSSES, Common_Movement_WalkLeft
# 185 "data/maps/CasaUlyssis/scripts.pory"
	waitmovement 0
# 186 "data/maps/CasaUlyssis/scripts.pory"
	applymovement LOCALID_CASAULYSSIS_ULYSSES, Common_Movement_WalkDown2
# 187 "data/maps/CasaUlyssis/scripts.pory"
	waitmovement 0
# 189 "data/maps/CasaUlyssis/scripts.pory"
	removeobject LOCALID_CASAULYSSIS_ULYSSES
# 190 "data/maps/CasaUlyssis/scripts.pory"
	setobjectxyperm LOCALID_CASAULYSSIS_ULYSSES, 0, 0
# 191 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 192 "data/maps/CasaUlyssis/scripts.pory"
	addobject LOCALID_CASAULYSSIS_ULYSSES
# 194 "data/maps/CasaUlyssis/scripts.pory"
	applymovement LOCALID_CASAULYSSIS_PENELOPE, Common_Movement_FaceDown
# 195 "data/maps/CasaUlyssis/scripts.pory"
	waitmovement 0
# 196 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_PENELOPE, MOVEMENT_TYPE_FACE_DOWN
# 198 "data/maps/CasaUlyssis/scripts.pory"
	setvar VAR_ULYSSES_STATE, 2
	end


CasaUlyssis_Script_Telemachus_Text_0:
# 113 "data/maps/CasaUlyssis/scripts.pory"
	.string "VAR_ULYSSES_STATE OOB$"

CasaUlyssis_Text_UlyssesBeforeInvite::
# 203 "data/maps/CasaUlyssis/scripts.pory"
	.string "Hello, my name is Ulysses. I'm blessed to\n"
	.string "have my own beautiful family, farmland,\l"
	.string "and house. There's nothing more I need.$"

CasaUlyssis_Text_UlyssesFinal::
# 209 "data/maps/CasaUlyssis/scripts.pory"
	.string "WIP FIN Text$"

CasaUlyssis_Text_PenelopeBeforeInvite::
# 213 "data/maps/CasaUlyssis/scripts.pory"
	.string "My husband, Ulysses, is my whole world.$"

CasaUlyssis_Text_TelemachusBeforeInvite::
# 217 "data/maps/CasaUlyssis/scripts.pory"
	.string "Papa always gets me ice cream and he\n"
	.string "likes to play catch too!$"

CasaUlyssis_Text_Ulysses_Depart1::
# 221 "data/maps/CasaUlyssis/scripts.pory"
	.string "Welcome, fiend, to our happy little home.\n"
	.string "I'd like to introduce Penelope, my wife,\l"
	.string "and Telemachus, my young boy. Despite\l"
	.string "my recent loss of sanity I count myself\l"
	.string "among the luckiet people alive. I am\l"
	.string "wealthy in both material things and in\l"
	.string "family. Now tell me, friend, what brings\l"
	.string "you out this far across the ocean to\l"
	.string "our blessed home?$"

CasaUlyssis_Text_Ulysses_Depart2::
# 233 "data/maps/CasaUlyssis/scripts.pory"
	.string "What's that? You came to deliver me\n"
	.string "mail?$"

CasaUlyssis_Text_GaveInvite::
# 237 "data/maps/CasaUlyssis/scripts.pory"
	.string "{PLAYER} gave the Wedding Invitation\n"
	.string "to Ulysses.$"

CasaUlyssis_Text_Ulysses_Depart3::
# 241 "data/maps/CasaUlyssis/scripts.pory"
	.string "An old friend of mine, Menelaus, is\n"
	.string "getting married and wants me to be the\l"
	.string "best man at his wedding.$"

CasaUlyssis_Text_Penelope_Depart1::
# 247 "data/maps/CasaUlyssis/scripts.pory"
	.string "Menelaus?$"

CasaUlyssis_Text_Penelope_Depart2::
# 251 "data/maps/CasaUlyssis/scripts.pory"
	.string "Who's that? One of you childhood best\n"
	.string "friends?$"

CasaUlyssis_Text_Ulysses_Depart4::
# 255 "data/maps/CasaUlyssis/scripts.pory"
	.string "He's an old coworker of mine from the\n"
	.string "Commerce Guild. Though we never were\l"
	.string "too close, in fact I never respected\l"
	.string "the guy, he's Agamemnon's own younger\l"
	.string "brother so I have little choice but to\l"
	.string "attend.$"

CasaUlyssis_Text_Penelope_Depart3::
# 263 "data/maps/CasaUlyssis/scripts.pory"
	.string "It's strange he'd ask you to be his best\n"
	.string "man if the two of you were never that\l"
	.string "close but I understand you will have to\l"
	.string "go. We owe our fortunes to Agamemnon.$"

CasaUlyssis_Text_Ulysses_Depart5::
# 270 "data/maps/CasaUlyssis/scripts.pory"
	.string "He always was, let's say, an eccentric\n"
	.string "and irritating man. I'd imagine he has no\l"
	.string "one else in his life to ask. We worked\l"
	.string "together for a couple years, that may\l"
	.string "have been the deepest connection he\l"
	.string "formed with anyone. While I'm away be\l"
	.string "well assured, my one and only wife, I will\l"
	.string "endevour tirelessly to return promptly.\l"
	.string "Know that my mind is like the fixed\l"
	.string "course of the stars across the sky and\l"
	.string "that neither adventure nor women will\l"
	.string "draw me from my course. I'll be direct in\l"
	.string "my journey, just there and back again.$"

CasaUlyssis_Text_Penelope_Depart4::
# 286 "data/maps/CasaUlyssis/scripts.pory"
	.string "Faithful husband, my one and only love,\n"
	.string "I want to believe the sweet words you\l"
	.string "say but last time you...$"

CasaUlyssis_Text_Ulysses_Depart6::
# 292 "data/maps/CasaUlyssis/scripts.pory"
	.string "Penelope! I've changed! I was a younger\n"
	.string "man, on business trips, and I told you\l"
	.string "she tricked me in...$"

CasaUlyssis_Text_Penelope_Depart5::
# 298 "data/maps/CasaUlyssis/scripts.pory"
	.string "Farewell... I know no words of mine can\n"
	.string "sway your will and once you've made your\l"
	.string "mind up to depart nothing short of the\l"
	.string "wrath of the Ocean can delay, let alone\l"
	.string "break off, your leave. Be safe, my love,\l"
	.string "be quick in your return, and trust that\l"
	.string "I will wait here patiently, faithful, and\l"
	.string "lonesome until you return.$"

CasaUlyssis_Text_Ulysses_Depart7::
# 309 "data/maps/CasaUlyssis/scripts.pory"
	.string "Thank you for bringing me this urgent\n"
	.string "mail. Unfortunately, I must now be off.\l"
	.string "Excuse me for being an unkind host, but\l"
	.string "I have pressing business to attend.$"

CasaUlyssis_Text_PenelopeWhileUlyssesAway::
# 316 "data/maps/CasaUlyssis/scripts.pory"
	.string "I miss my husband and wish he'd return...$"

CasaUlyssis_Text_PenelopeAfterUlyssesReturns::
# 320 "data/maps/CasaUlyssis/scripts.pory"
	.string "After what felt like an eternity, our\n"
	.string "happy family's reunited!$"
