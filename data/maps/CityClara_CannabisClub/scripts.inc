CityClara_CannabisClub_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setweather WEATHER_FOG_DIAGONAL
	return


CityClara_CannabisCenter_Clerk::
	lock
	faceplayer
	msgbox CityClara_CannabisCenter_Intro
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox CityClara_CannabisCenter_Outtro
	release
	end


CityClara_CannabisCenter_Intro::
	.string "Hey, good to see you. Here man hit the\n"
	.string "bong!$"

CityClara_CannabisCenter_Outtro::
	.string "Just let me know if you want to smoke\n"
	.string "more.$"
