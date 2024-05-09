BigIslandN_MapScripts::
# 12 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_BOAT_STATE, 2
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 16 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideArgo
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo
	return


BigIslandN_Script_HideArgo::
# 23 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 24 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 25 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 2, MAP_BIG_ISLAND_N
# 26 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 27 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 3, MAP_BIG_ISLAND_N
# 28 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 29 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 30 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 31 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 32 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 33 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 34 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 35 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 36 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
	end


BigIslandN_Script_ShowArgo::
# 41 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 42 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 43 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 44 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 45 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 46 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 47 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 48 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 49 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 50 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 51 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 52 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 53 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 54 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 55 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 56 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
# 57 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 58 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 59 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 60 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 61 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
	end

