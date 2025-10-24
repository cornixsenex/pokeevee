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
	return


CasaUlyssis_Script_Telemachus::
	return


CasaUlyssis_Text_UlyssesBeforeInvite::
# 77 "data/maps/CasaUlyssis/scripts.pory"
	.string "$"

CasaUlyssis_Text_UlyssesFinal::
# 81 "data/maps/CasaUlyssis/scripts.pory"
	.string "$"
