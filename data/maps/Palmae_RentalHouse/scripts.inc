Palmae_RentalHouse_MapScripts::
# 8 "data/maps/Palmae_RentalHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_UNI_STATE, 10
	goto_if_lt Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 14 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_ShowLeaf
	return

Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_ShowLandlady
	return


Palmae_RentalHouse_Script_ShowLandlady::
# 22 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectxyperm 2, 11, 4
# 23 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
	end


Palmae_RentalHouse_Script_ShowLeaf::
# 28 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectxyperm 1, 5, 5
# 29 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 31 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectxyperm 3, 5, 4
# 32 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	end

