CityClara_CannabisClub_MapScripts::
# 5 "data/maps/CityClara_CannabisClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/CityClara_CannabisClub/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 8 "data/maps/CityClara_CannabisClub/scripts.pory"
	compare VAR_CITYCLARA_STATE, 0
	goto_if_ne CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/CityClara_CannabisClub/scripts.pory"
	call CityClara_CannabisCenter_Script_ShowScott
	return


CityClara_CannabisCenter_Script_ShowScott::
# 15 "data/maps/CityClara_CannabisClub/scripts.pory"
	setobjectxyperm 2, 8, 4
# 16 "data/maps/CityClara_CannabisClub/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_CannabisCenter_Clerk::
# 22 "data/maps/CityClara_CannabisClub/scripts.pory"
	lock
# 23 "data/maps/CityClara_CannabisClub/scripts.pory"
	faceplayer
# 24 "data/maps/CityClara_CannabisClub/scripts.pory"
	msgbox CityClara_CannabisCenter_Text_Intro
# 25 "data/maps/CityClara_CannabisClub/scripts.pory"
	closemessage
# 26 "data/maps/CityClara_CannabisClub/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 27 "data/maps/CityClara_CannabisClub/scripts.pory"
	msgbox CityClara_CannabisCenter_Text_Outtro
# 28 "data/maps/CityClara_CannabisClub/scripts.pory"
	release
	end


CityClara_CannabisCenter_Scott::
# 33 "data/maps/CityClara_CannabisClub/scripts.pory"
	lock
# 34 "data/maps/CityClara_CannabisClub/scripts.pory"
	faceplayer
# 35 "data/maps/CityClara_CannabisClub/scripts.pory"
	load_field_pic FIELD_PIC_SCOTT, 190, 98
# 36 "data/maps/CityClara_CannabisClub/scripts.pory"
	msgbox CityClara_CannabisCenter_Text_Scott
# 37 "data/maps/CityClara_CannabisClub/scripts.pory"
	closemessage
# 38 "data/maps/CityClara_CannabisClub/scripts.pory"
	destroy_field_pic FIELD_PIC_SCOTT
# 39 "data/maps/CityClara_CannabisClub/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 40 "data/maps/CityClara_CannabisClub/scripts.pory"
	waitmovement 0
# 41 "data/maps/CityClara_CannabisClub/scripts.pory"
	release
	end


# 45 "data/maps/CityClara_CannabisClub/scripts.pory"
CityClara_CannabisCenter_Movement_PlayerDown:
# 46 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_down
# 47 "data/maps/CityClara_CannabisClub/scripts.pory"
	face_up
	step_end

# 50 "data/maps/CityClara_CannabisClub/scripts.pory"
CityClara_CannabisCenter_Movement_PlayerToScott:
# 51 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_up
# 51 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_up
# 51 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_up
# 52 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 52 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 52 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 52 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 52 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 53 "data/maps/CityClara_CannabisClub/scripts.pory"
	face_up
	step_end

# 56 "data/maps/CityClara_CannabisClub/scripts.pory"
CityClara_CannabisCenter_Movement_LeafExit:
# 57 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_down
# 58 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 58 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 58 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 58 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 58 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 59 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_down
# 59 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_down
# 59 "data/maps/CityClara_CannabisClub/scripts.pory"
	walk_down
	step_end

CityClara_CannabisCenter_Text_Intro::
# 62 "data/maps/CityClara_CannabisClub/scripts.pory"
	.string "Hey, good to see you. Here man hit the\n"
	.string "bong!$"

CityClara_CannabisCenter_Text_Outtro::
# 66 "data/maps/CityClara_CannabisClub/scripts.pory"
	.string "Just let me know if you want to smoke\n"
	.string "more.$"

CityClara_CannabisCenter_Text_Leaf1::
# 70 "data/maps/CityClara_CannabisClub/scripts.pory"
	.string "Oh {PLAYER} there you are! What took\n"
	.string "you so long? While we were waiting my\l"
	.string "dad got too high but I've grown\l"
	.string "impatient and must see mew.$"

CityClara_CannabisCenter_Text_Scott1::
# 74 "data/maps/CityClara_CannabisClub/scripts.pory"
	.string "Mew's like....a Pokemon...man...a LEDGEND!$"

CityClara_CannabisCenter_Text_Leaf2::
# 78 "data/maps/CityClara_CannabisClub/scripts.pory"
	.string "See what I mean? Dad is totally blitzed.\n"
	.string "I'll wait for you down by the church I\l"
	.string "guess but make sure to smoke up if\l"
	.string "you're tired.$"

CityClara_CannabisCenter_Text_Scott::
# 82 "data/maps/CityClara_CannabisClub/scripts.pory"
	.string "Bro....\p"
	.string "Dude! It's like why do the cows eat\n"
	.string "grass? And isn't life all connected as\l"
	.string "one straight through our moms right up\l"
	.string "the umbral cord...You will hear birds\l"
	.string "singing through tuesday's heat...$"
