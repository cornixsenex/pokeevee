CasaUlyssis_MapScripts::
# 8 "data/maps/CasaUlyssis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CasaUlyssis_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CasaUlyssis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/CasaUlyssis/scripts.pory"
	compare VAR_ULYSSES_STATE, 2
	goto_if_lt CasaUlyssis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

CasaUlyssis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/CasaUlyssis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 12 "data/maps/CasaUlyssis/scripts.pory"
	setvar VAR_TEMP_B, 1
	return


CasaUlyssis_Script_SetupUlyssesChase::
# 23 "data/maps/CasaUlyssis/scripts.pory"
	setvar VAR_TEMP_B, 0
# 25 "data/maps/CasaUlyssis/scripts.pory"
	setvar VAR_TEMP_A, 1
# 27 "data/maps/CasaUlyssis/scripts.pory"
	compare VAR_ULYSSES_STATE, 0
	goto_if_eq CasaUlyssis_Script_SetupUlyssesChase_1
	return

CasaUlyssis_Script_SetupUlyssesChase_1:
# 28 "data/maps/CasaUlyssis/scripts.pory"
	setvar VAR_ULYSSES_STATE, 1
	return


CasaUlyssis_Script_SetupUlyssesStand::
# 34 "data/maps/CasaUlyssis/scripts.pory"
	setvar VAR_TEMP_A, 0
# 36 "data/maps/CasaUlyssis/scripts.pory"
	setvar VAR_TEMP_B, 1
# 38 "data/maps/CasaUlyssis/scripts.pory"
	compare VAR_ULYSSES_STATE, 1
	goto_if_eq CasaUlyssis_Script_SetupUlyssesStand_1
	return

CasaUlyssis_Script_SetupUlyssesStand_1:
# 39 "data/maps/CasaUlyssis/scripts.pory"
	setvar VAR_ULYSSES_STATE, 0
	return

