CityClara_MapScripts::
	.byte 0


CityClara_EventScript_ClubSign::
	lock
	msgbox CityClara_Text_ClubSign
	closemessage
	release
	end


CityClara_EventScript_CannaWoman::
	lockall
	faceplayer
	msgbox CityClara_Text_CannaWoman
	closemessage
	releaseall
	end


CityClara_Text_ClubSign::
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_CannaWoman::
	.string "You see this building here? The Chronic\n"
	.string "Club? They got me so high I can barely\l"
	.string "walk!$"
