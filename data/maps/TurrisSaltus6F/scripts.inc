TurrisSaltus6F_MapScripts::
# 3 "data/maps/TurrisSaltus6F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/TurrisSaltus6F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 23
	goto_if_lt TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

TurrisSaltus6F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/TurrisSaltus6F/scripts.pory"
	call TurrisSaltus6F_Script_ShowAeneasScene
	return


TurrisSaltus6F_Script_ShowAeneasScene::
# 13 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_CYNTHIA, 7, 2
# 14 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_CYNTHIA, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS6F_AENEAS, 9, 2
# 16 "data/maps/TurrisSaltus6F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS6F_AENEAS, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return

