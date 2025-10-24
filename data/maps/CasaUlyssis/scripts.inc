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
	return


CasaUlyssis_Script_Ulysses::
	return


CasaUlyssis_Script_Penelope::
	return


CasaUlyssis_Script_Telemachus::
	return

