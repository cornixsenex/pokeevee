CasaUlyssis_MapScripts::
# 2 "data/maps/CasaUlyssis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CasaUlyssis_MapScripts_MAP_SCRIPT_ON_TRANSITION
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


CasaUlyssis_Script_CheckUlyssesChase::
# 21 "data/maps/CasaUlyssis/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_ULYSSES
# 22 "data/maps/CasaUlyssis/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CasaUlyssis_Script_CheckUlyssesChase_2
CasaUlyssis_Script_CheckUlyssesChase_1:
	return

CasaUlyssis_Script_CheckUlyssesChase_2:
# 23 "data/maps/CasaUlyssis/scripts.pory"
	call CasaUlyssis_Script_ShowUlyssesAtTable
	goto CasaUlyssis_Script_CheckUlyssesChase_1


CasaUlyssis_Script_ShowUlyssesAtTable::
# 30 "data/maps/CasaUlyssis/scripts.pory"
	setobjectxyperm LOCALID_CASAULYSSIS_ULYSSES, 4, 6
# 31 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_ULYSSES, MOVEMENT_TYPE_FACE_RIGHT
# 33 "data/maps/CasaUlyssis/scripts.pory"
	setobjectxyperm LOCALID_CASAULYSSIS_PENELOPE, 7, 6
# 34 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_PENELOPE, MOVEMENT_TYPE_FACE_LEFT
# 36 "data/maps/CasaUlyssis/scripts.pory"
	setobjectxyperm LOCALID_CASAULYSSIS_TELEMACHUS, 9, 7
# 37 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_TELEMACHUS, MOVEMENT_TYPE_WANDER_AROUND
	return


CasaUlyssis_Script_ShowUlyssesDepart::
# 43 "data/maps/CasaUlyssis/scripts.pory"
	setobjectxyperm LOCALID_CASAULYSSIS_ULYSSES, 7, 7
# 44 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_ULYSSES, MOVEMENT_TYPE_FACE_DOWN
# 46 "data/maps/CasaUlyssis/scripts.pory"
	setobjectxyperm LOCALID_CASAULYSSIS_PENELOPE, 8, 7
# 47 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_PENELOPE, MOVEMENT_TYPE_FACE_DOWN
# 49 "data/maps/CasaUlyssis/scripts.pory"
	setobjectxyperm LOCALID_CASAULYSSIS_TELEMACHUS, 9, 7
# 50 "data/maps/CasaUlyssis/scripts.pory"
	setobjectmovementtype LOCALID_CASAULYSSIS_TELEMACHUS, MOVEMENT_TYPE_FACE_DOWN
	return


CasaUlyssis_Script_Ulysses::
# 55 "data/maps/CasaUlyssis/scripts.pory"
	faceplayer
# 56 "data/maps/CasaUlyssis/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 58 "data/maps/CasaUlyssis/scripts.pory"
	compare VAR_ULYSSES_STATE, 0
	goto_if_eq CasaUlyssis_Script_Ulysses_2
# 62 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_UlyssesFinal
CasaUlyssis_Script_Ulysses_1:
# 64 "data/maps/CasaUlyssis/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 65 "data/maps/CasaUlyssis/scripts.pory"
	closemessage
# 66 "data/maps/CasaUlyssis/scripts.pory"
	unfaceplayer
	return

CasaUlyssis_Script_Ulysses_2:
# 59 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_UlyssesBeforeInvite
	goto CasaUlyssis_Script_Ulysses_1


CasaUlyssis_Script_Penelope::
# 70 "data/maps/CasaUlyssis/scripts.pory"
	faceplayer
# 71 "data/maps/CasaUlyssis/scripts.pory"
	switch VAR_ULYSSES_STATE
# 73 "data/maps/CasaUlyssis/scripts.pory"
	case 0, CasaUlyssis_Script_Penelope_3
# 82 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Script_Penelope_Text_0
CasaUlyssis_Script_Penelope_1:
# 84 "data/maps/CasaUlyssis/scripts.pory"
	closemessage
# 85 "data/maps/CasaUlyssis/scripts.pory"
	unfaceplayer
	return

CasaUlyssis_Script_Penelope_3:
# 74 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_PenelopeBeforeInvite
	goto CasaUlyssis_Script_Penelope_1


CasaUlyssis_Script_Telemachus::
# 89 "data/maps/CasaUlyssis/scripts.pory"
	faceplayer
# 90 "data/maps/CasaUlyssis/scripts.pory"
	switch VAR_ULYSSES_STATE
# 92 "data/maps/CasaUlyssis/scripts.pory"
	case 0, CasaUlyssis_Script_Telemachus_3
# 100 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Script_Penelope_Text_0
CasaUlyssis_Script_Telemachus_1:
# 102 "data/maps/CasaUlyssis/scripts.pory"
	closemessage
# 103 "data/maps/CasaUlyssis/scripts.pory"
	unfaceplayer
	return

CasaUlyssis_Script_Telemachus_3:
# 93 "data/maps/CasaUlyssis/scripts.pory"
	msgbox CasaUlyssis_Text_TelemachusBeforeInvite
	goto CasaUlyssis_Script_Telemachus_1


CasaUlyssis_Script_Penelope_Text_0:
# 82 "data/maps/CasaUlyssis/scripts.pory"
	.string "VAR_ULYSSES_STATE OOB$"

CasaUlyssis_Text_UlyssesBeforeInvite::
# 106 "data/maps/CasaUlyssis/scripts.pory"
	.string "Hello, my name is Ulysses. I'm blessed to\n"
	.string "have my own beautiful family, farmland,\l"
	.string "and house. There's nothing more I need.$"

CasaUlyssis_Text_UlyssesFinal::
# 112 "data/maps/CasaUlyssis/scripts.pory"
	.string "WIP FIN Text$"

CasaUlyssis_Text_PenelopeBeforeInvite::
# 116 "data/maps/CasaUlyssis/scripts.pory"
	.string "My husband, Ulysses, is my whole world.$"

CasaUlyssis_Text_TelemachusBeforeInvite::
# 120 "data/maps/CasaUlyssis/scripts.pory"
	.string "Papa always gets me ice cream and he\n"
	.string "likes to play catch too!$"
