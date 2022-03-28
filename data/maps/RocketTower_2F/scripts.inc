RocketTower_2F_MapScripts::
	.byte 0


RocketTower_2F_EventScript_StairSign::
	lock
	msgbox RocketTower_2F_Text_StairSign
	closemessage
	release
	end


RocketTower_2F_Text_StairSign::
	.string "Rocket Tower - Floor 2\n"
	.string "Cafe$"
