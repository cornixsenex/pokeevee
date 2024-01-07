CityClara_Mart_MapScripts::
	.byte 0


CityClara_Mart_EventScript_Clerk::
# 5 "data/maps/CityClara_Mart/scripts.pory"
	lock
# 6 "data/maps/CityClara_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/CityClara_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 8 "data/maps/CityClara_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/CityClara_Mart/scripts.pory"
	pokemart SlateportCity_Mart_Pokemart
# 10 "data/maps/CityClara_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 11 "data/maps/CityClara_Mart/scripts.pory"
	release
	end

