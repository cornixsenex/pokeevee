BulbusTown_Mart_MapScripts::
	.byte 0


BulbusTown_Mart_EventScript_Clerk::
# 4 "data/maps/BulbusTown_Mart/scripts.pory"
	lock
# 5 "data/maps/BulbusTown_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/BulbusTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/BulbusTown_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/BulbusTown_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Basic
# 9 "data/maps/BulbusTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 10 "data/maps/BulbusTown_Mart/scripts.pory"
	release
	end

