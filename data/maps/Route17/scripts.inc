Route17_MapScripts::
	.byte 0


Route17_EventScript_Block1::
# 4 "data/maps/Route17/scripts.pory"
	lock
# 5 "data/maps/Route17/scripts.pory"
	faceplayer
# 6 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_Block1
# 7 "data/maps/Route17/scripts.pory"
	closemessage
# 8 "data/maps/Route17/scripts.pory"
	release
	end


Route17_Text_Block1::
# 13 "data/maps/Route17/scripts.pory"
	.string "This is the Via Fluvia which leads to\n"
	.string "Willow Spring but you cannot go\l"
	.string "through.The storm has destroyed two\l"
	.string "bridges ahead and it will be some time\l"
	.string "before they're fixed.$"
