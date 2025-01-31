AldeonTown_Mart_MapScripts::
	.byte 0


AldeonTown_Mart_EventScript_Clerk::
# 5 "data//maps/AldeonTown_Mart/scripts.pory"
	lock
# 6 "data//maps/AldeonTown_Mart/scripts.pory"
	faceplayer
# 7 "data//maps/AldeonTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 8 "data//maps/AldeonTown_Mart/scripts.pory"
	waitmessage
# 9 "data//maps/AldeonTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 10 "data//maps/AldeonTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 11 "data//maps/AldeonTown_Mart/scripts.pory"
	release
	end

