BulbusTown_MapScripts::
	.byte 0


BulbusTown_EventScript_Sailor::
	lock
	faceplayer
	msgbox BulbusTown_Text_Sailor
	release
	end


BulbusTown_EventScript_Fisherman::
	lock
	faceplayer
	msgbox BulbusTown_Text_Fisherman
	release
	end


BulbusTown_EventScript_FightA::
	lock
	faceplayer
	msgbox BulbusTown_Text_FightA
	release
	end


BulbusTown_EventScript_FightB::
	lock
	faceplayer
	msgbox BulbusTown_Text_FightB
	release
	end


BulbusTown_Text_Sailor::
	.string "I'm not working, us sailors went on\n"
	.string "strike.$"

BulbusTown_Text_Fisherman::
	.string "Hey watch your step, this town is\n"
	.string "sometimes rough.$"

BulbusTown_Text_FightA::
	.string "How dare you speak of my sweet mum\n"
	.string "that way?$"

BulbusTown_Text_FightB::
	.string "This town ain't big enough for both of\n"
	.string "us!$"
