BulbusTown_MapScripts::
	.byte 0


BulbusTown_EventScript_Sailor::
# 5 "data/maps/BulbusTown/scripts.pory"
	lock
# 6 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 7 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Sailor
# 8 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_Fisherman::
# 13 "data/maps/BulbusTown/scripts.pory"
	lock
# 14 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 15 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Fisherman
# 16 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_FightA::
# 21 "data/maps/BulbusTown/scripts.pory"
	lock
# 22 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightA
# 23 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_FightB::
# 28 "data/maps/BulbusTown/scripts.pory"
	lock
# 29 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightB
# 30 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_ClubSign::
# 35 "data/maps/BulbusTown/scripts.pory"
	lock
# 36 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_ClubSign
# 37 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 38 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_TownSign::
# 43 "data/maps/BulbusTown/scripts.pory"
	lock
# 44 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_TownSign
# 45 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 46 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_Striker1::
# 51 "data/maps/BulbusTown/scripts.pory"
	lock
# 52 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 53 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Striker1
# 54 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 55 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_Striker2::
# 60 "data/maps/BulbusTown/scripts.pory"
	lock
# 61 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 62 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Striker2
# 63 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 64 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Text_Sailor::
# 69 "data/maps/BulbusTown/scripts.pory"
	.string "I'm not working, us sailors went on\l"
	.string "strike.$"

BulbusTown_Text_Fisherman::
# 75 "data/maps/BulbusTown/scripts.pory"
	.string "Hey watch your step, this town is\l"
	.string "sometimes rough.$"

BulbusTown_Text_FightA::
# 80 "data/maps/BulbusTown/scripts.pory"
	.string "How dare you speak of my sweet mum\l"
	.string "that way?$"

BulbusTown_Text_FightB::
# 84 "data/maps/BulbusTown/scripts.pory"
	.string "This town ain't big enough for both of\l"
	.string "us!$"

BulbusTown_Text_ClubSign::
# 88 "data/maps/BulbusTown/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

BulbusTown_Text_TownSign::
# 92 "data/maps/BulbusTown/scripts.pory"
	.string "Built on the bay, welcome to Bulbus\l"
	.string "Town!$"

BulbusTown_Text_Striker1::
# 96 "data/maps/BulbusTown/scripts.pory"
	.string "We need more money!$"

BulbusTown_Text_Striker2::
# 100 "data/maps/BulbusTown/scripts.pory"
	.string "We deserve more rights!$"
