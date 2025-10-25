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
	switch VAR_ULYSSES_STATE
# 84 "data/maps/CasaUlyssis/scripts.pory"
	case 0, CasaUlyssis_Script_Penelope_3
# 93 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Script_Penelope_Text_0
CasaUlyssis_Script_Penelope_1:
# 95 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_PENELOPE
# 96 "data/maps/CasaUlyssis/scripts.pory"
	closemessage
# 97 "data/maps/CasaUlyssis/scripts.pory"
	unfaceplayer
	return

CasaUlyssis_Script_Penelope_3:
# 85 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_PenelopeBeforeInvite
	goto CasaUlyssis_Script_Penelope_1


CasaUlyssis_Script_Telemachus::
# 101 "data/maps/CasaUlyssis/scripts.pory"
	faceplayer
# 102 "data/maps/CasaUlyssis/scripts.pory"
	switch VAR_ULYSSES_STATE
# 104 "data/maps/CasaUlyssis/scripts.pory"
	case 0, CasaUlyssis_Script_Telemachus_3
# 112 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Script_Penelope_Text_0
CasaUlyssis_Script_Telemachus_1:
# 114 "data/maps/CasaUlyssis/scripts.pory"
	closemessage
# 115 "data/maps/CasaUlyssis/scripts.pory"
	unfaceplayer
	return

CasaUlyssis_Script_Telemachus_3:
# 105 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_TelemachusBeforeInvite
	goto CasaUlyssis_Script_Telemachus_1


CasaUlyssis_Script_UlyssesDepart::
# 120 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 121 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Ulysses_Depart1
# 122 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 123 "data/maps/CasaUlyssis/scripts.pory"
	closemessage
# 125 "data/maps/CasaUlyssis/scripts.pory"
	applymovement LOCALID_CASAULYSSIS_ULYSSES, Common_Movement_ExclamationMark
# 126 "data/maps/CasaUlyssis/scripts.pory"
	waitmovement 0
# 128 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 129 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_Ulysses_Depart2
# 130 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 132 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_GaveInvite
# 134 "data/maps/CasaUlyssis/scripts.pory"
	applymovement LOCALID_CASAULYSSIS_ULYSSES, Common_Movement_ExclamationMark
# 135 "data/maps/CasaUlyssis/scripts.pory"
	waitmovement 0
# 149 "data/maps/CasaUlyssis/scripts.pory"
	setvar VAR_ULYSSES_STATE, 2
	end


CasaUlyssis_Script_Penelope_Text_0:
# 93 "data/maps/CasaUlyssis/scripts.pory"
	.string "VAR_ULYSSES_STATE OOB$"

CasaUlyssis_Text_UlyssesBeforeInvite::
# 154 "data/maps/CasaUlyssis/scripts.pory"
	.string "Hello, my name is Ulysses. I'm blessed to\n"
	.string "have my own beautiful family, farmland,\l"
	.string "and house. There's nothing more I need.$"

CasaUlyssis_Text_UlyssesFinal::
# 160 "data/maps/CasaUlyssis/scripts.pory"
	.string "WIP FIN Text$"

CasaUlyssis_Text_PenelopeBeforeInvite::
# 164 "data/maps/CasaUlyssis/scripts.pory"
	.string "My husband, Ulysses, is my whole world.$"

CasaUlyssis_Text_TelemachusBeforeInvite::
# 168 "data/maps/CasaUlyssis/scripts.pory"
	.string "Papa always gets me ice cream and he\n"
	.string "likes to play catch too!$"

CasaUlyssis_Text_Ulysses_Depart1::
# 172 "data/maps/CasaUlyssis/scripts.pory"
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
# 184 "data/maps/CasaUlyssis/scripts.pory"
	.string "What's that? You came to deliver me\n"
	.string "mail?$"

CasaUlyssis_Text_GaveInvite::
# 188 "data/maps/CasaUlyssis/scripts.pory"
	.string "{PLAYER} gave the Wedding Invitation\n"
	.string "to Ulysses.$"
