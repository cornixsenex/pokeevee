Route17_MapScripts::
	.byte 0


Route17_EventScript_Block1::
	lock
	faceplayer
	msgbox Route17_Text_Block1
	closemessage
	release
	end


Route17_Text_Block1::
	.string "This is the Via Fluvia which leads to\n"
	.string "Willow Spring but you cannot go\l"
	.string "through.The storm has destroyed two\l"
	.string "bridges ahead and it will be some time\l"
	.string "before they're fixed.$"
