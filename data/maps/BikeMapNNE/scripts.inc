BikeMapNNE_MapScripts::
	.byte 0


BikeMapNNE_EventScript_TallGrassTest::
# 6 "data/maps/BikeMapNNE/scripts.pory"
	lock
# 7 "data/maps/BikeMapNNE/scripts.pory"
	setfieldeffectargument 0, 15
# 8 "data/maps/BikeMapNNE/scripts.pory"
	setfieldeffectargument 1, 20
# 9 "data/maps/BikeMapNNE/scripts.pory"
	setfieldeffectargument 2, 3
# 10 "data/maps/BikeMapNNE/scripts.pory"
	setfieldeffectargument 3, 2
# 11 "data/maps/BikeMapNNE/scripts.pory"
	setfieldeffectargument 4, MAP_NUM ( BIKE_MAP_NNE )
# 12 "data/maps/BikeMapNNE/scripts.pory"
	setfieldeffectargument 5, MAP_GROUP ( BIKE_MAP_NNE )
# 13 "data/maps/BikeMapNNE/scripts.pory"
	setfieldeffectargument 6, MAP_BIKE_MAP_NNE
# 14 "data/maps/BikeMapNNE/scripts.pory"
	setfieldeffectargument 7, 0
# 15 "data/maps/BikeMapNNE/scripts.pory"
	dofieldeffect FLDEFF_TALL_GRASS
# 16 "data/maps/BikeMapNNE/scripts.pory"
	waitfieldeffect FLDEFF_TALL_GRASS
# 17 "data/maps/BikeMapNNE/scripts.pory"
	delay 10
# 18 "data/maps/BikeMapNNE/scripts.pory"
	release
	end

