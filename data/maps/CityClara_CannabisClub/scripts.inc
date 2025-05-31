CityClara_CannabisClub_MapScripts::
# 6 "data/maps/CityClara_CannabisClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/CityClara_CannabisClub/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 9 "data/maps/CityClara_CannabisClub/scripts.pory"
	compare VAR_CITYCLARA_STATE, 0
	goto_if_ne CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/CityClara_CannabisClub/scripts.pory"
	call CityClara_CannabisCenter_Script_ShowScott
	return


CityClara_CannabisCenter_Script_ShowScott::
# 16 "data/maps/CityClara_CannabisClub/scripts.pory"
	setobjectxyperm 2, 8, 4
# 17 "data/maps/CityClara_CannabisClub/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_CannabisCenter_Clerk::
# 23 "data/maps/CityClara_CannabisClub/scripts.pory"
	lock
# 24 "data/maps/CityClara_CannabisClub/scripts.pory"
	faceplayer
# 25 "data/maps/CityClara_CannabisClub/scripts.pory"
	msgbox CityClara_CannabisCenter_Text_Intro
# 26 "data/maps/CityClara_CannabisClub/scripts.pory"
	closemessage
# 27 "data/maps/CityClara_CannabisClub/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 28 "data/maps/CityClara_CannabisClub/scripts.pory"
	msgbox CityClara_CannabisCenter_Text_Outtro
# 29 "data/maps/CityClara_CannabisClub/scripts.pory"
	release
	end


CityClara_CannabisCenter_Scott::
# 34 "data/maps/CityClara_CannabisClub/scripts.pory"
	lock
# 35 "data/maps/CityClara_CannabisClub/scripts.pory"
	faceplayer
# 36 "data/maps/CityClara_CannabisClub/scripts.pory"
	load_field_pic 33, 190, 98
# 37 "data/maps/CityClara_CannabisClub/scripts.pory"
	msgbox CityClara_CannabisCenter_Text_Scott
# 38 "data/maps/CityClara_CannabisClub/scripts.pory"
	closemessage
# 39 "data/maps/CityClara_CannabisClub/scripts.pory"
	destroy_field_pic 33
# 40 "data/maps/CityClara_CannabisClub/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 41 "data/maps/CityClara_CannabisClub/scripts.pory"
	waitmovement 0
# 42 "data/maps/CityClara_CannabisClub/scripts.pory"
	release
	end


# 46 "data/maps/CityClara_CannabisClub/scripts.pory"
CityClara_CannabisCenter_Movement_PlayerDown:
# 47 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_down
# 48 "data/maps/CityClara_CannabisClub/scripts.pory"
	face_up
	step_end

# 51 "data/maps/CityClara_CannabisClub/scripts.pory"
CityClara_CannabisCenter_Movement_PlayerToScott:
# 52 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_up
# 52 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_up
# 52 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_up
# 53 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 53 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 53 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 53 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 53 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 54 "data/maps/CityClara_CannabisClub/scripts.pory"
	face_up
	step_end

# 57 "data/maps/CityClara_CannabisClub/scripts.pory"
CityClara_CannabisCenter_Movement_LeafExit:
# 58 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_down
# 59 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 59 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 59 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 59 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 59 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 60 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_down
# 60 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_down
# 60 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_down
	step_end

CityClara_CannabisCenter_Text_Intro::
# 63 "data/maps/CityClara_CannabisClub/scripts.pory"
	.string "Hey, good to see you. Here man hit the\n"
	.string "bong!$"

CityClara_CannabisCenter_Text_Outtro::
# 67 "data/maps/CityClara_CannabisClub/scripts.pory"
	.string "Just let me know if you want to smoke\n"
	.string "more.$"

CityClara_CannabisCenter_Text_Leaf1::
# 71 "data/maps/CityClara_CannabisClub/scripts.pory"
	.string "Oh {PLAYER} there you are! What took\n"
	.string "you so long? While we were waiting my\l"
	.string "dad got too high but I've grown\l"
	.string "impatient and must see mew.$"

CityClara_CannabisCenter_Text_Scott1::
# 75 "data/maps/CityClara_CannabisClub/scripts.pory"
	.string "Mew's like....a Pokemon...man...a LEDGEND!$"

CityClara_CannabisCenter_Text_Leaf2::
# 79 "data/maps/CityClara_CannabisClub/scripts.pory"
	.string "See what I mean? Dad is totally blitzed.\n"
	.string "I'll wait for you down by the church I\l"
	.string "guess but make sure to smoke up if\l"
	.string "you're tired.$"

CityClara_CannabisCenter_Text_Scott::
# 83 "data/maps/CityClara_CannabisClub/scripts.pory"
	.string "Bro....\p"
	.string "Dude! It's like why do the cows eat\n"
	.string "grass? And isn't life all connected as\l"
	.string "one straight through our moms right up\l"
	.string "the umbral cord...You will hear birds\l"
	.string "singing through tuesday's heat...$"
