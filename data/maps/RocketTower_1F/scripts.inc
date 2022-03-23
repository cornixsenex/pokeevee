RocketTower_1F_MapScripts::
	.byte 0


RocketTower_1F_EventScript_StairSign::
	lock
	msgbox RocketTower_1F_Text_StairSign
	closemessage
	release
	end


RocketTower_1F_Text_StairSign::
	.string "Rocket Tower - Floor 1\n"
	.string "Recption Area$"
