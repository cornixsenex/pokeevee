CityClara_CannabisClub_MapScripts::
# 2 "data//maps/CityClara_CannabisClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data//maps/CityClara_CannabisClub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data//maps/CityClara_CannabisClub/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
	return

CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data//maps/CityClara_CannabisClub/scripts.pory"
	map_script_2 VAR_CITYCLARA_STATE, 0, CityClar_CannabisCenter_ScottTrigger
	.2byte 0


CityClar_CannabisCenter_ScottTrigger::
# 11 "data//maps/CityClara_CannabisClub/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 1
# 12 "data//maps/CityClara_CannabisClub/scripts.pory"
	lockall
# 13 "data//maps/CityClara_CannabisClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 14 "data//maps/CityClara_CannabisClub/scripts.pory"
	waitmovement 0
# 15 "data//maps/CityClara_CannabisClub/scripts.pory"
	load_field_pic 4, 190, 98
# 16 "data//maps/CityClara_CannabisClub/scripts.pory"
	msgbox CityClara_CannabisCenter_Text_Leaf1
# 17 "data//maps/CityClara_CannabisClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_CannabisCenter_Movement_PlayerToScott
# 18 "data//maps/CityClara_CannabisClub/scripts.pory"
	waitmovement 0
# 19 "data//maps/CityClara_CannabisClub/scripts.pory"
	destroy_field_pic 4
# 20 "data//maps/CityClara_CannabisClub/scripts.pory"
	load_field_pic 5, 190, 98
# 21 "data//maps/CityClara_CannabisClub/scripts.pory"
	msgbox CityClara_CannabisCenter_Text_Scott1
# 22 "data//maps/CityClara_CannabisClub/scripts.pory"
	destroy_field_pic 5
# 23 "data//maps/CityClara_CannabisClub/scripts.pory"
	load_field_pic 4, 190, 98
# 24 "data//maps/CityClara_CannabisClub/scripts.pory"
	msgbox CityClara_CannabisCenter_Text_Leaf2
# 25 "data//maps/CityClara_CannabisClub/scripts.pory"
	destroy_field_pic 4
# 26 "data//maps/CityClara_CannabisClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_CannabisCenter_Movement_PlayerDown
# 27 "data//maps/CityClara_CannabisClub/scripts.pory"
	waitmovement 0
# 28 "data//maps/CityClara_CannabisClub/scripts.pory"
	applymovement 3, CityClara_CannabisCenter_Movement_LeafExit
# 29 "data//maps/CityClara_CannabisClub/scripts.pory"
	waitmovement 0
# 30 "data//maps/CityClara_CannabisClub/scripts.pory"
	removeobject 3
# 31 "data//maps/CityClara_CannabisClub/scripts.pory"
	releaseall
	end


CityClara_CannabisCenter_Clerk::
# 36 "data//maps/CityClara_CannabisClub/scripts.pory"
	lock
# 37 "data//maps/CityClara_CannabisClub/scripts.pory"
	faceplayer
# 38 "data//maps/CityClara_CannabisClub/scripts.pory"
	msgbox CityClara_CannabisCenter_Text_Intro
# 39 "data//maps/CityClara_CannabisClub/scripts.pory"
	closemessage
# 40 "data//maps/CityClara_CannabisClub/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 41 "data//maps/CityClara_CannabisClub/scripts.pory"
	msgbox CityClara_CannabisCenter_Text_Outtro
# 42 "data//maps/CityClara_CannabisClub/scripts.pory"
	release
	end


CityClara_CannabisCenter_Scott::
# 47 "data//maps/CityClara_CannabisClub/scripts.pory"
	lock
# 48 "data//maps/CityClara_CannabisClub/scripts.pory"
	faceplayer
# 49 "data//maps/CityClara_CannabisClub/scripts.pory"
	load_field_pic 5, 190, 98
# 50 "data//maps/CityClara_CannabisClub/scripts.pory"
	msgbox CityClara_CannabisCenter_Text_Scott
# 51 "data//maps/CityClara_CannabisClub/scripts.pory"
	closemessage
# 52 "data//maps/CityClara_CannabisClub/scripts.pory"
	destroy_field_pic 5
# 53 "data//maps/CityClara_CannabisClub/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 54 "data//maps/CityClara_CannabisClub/scripts.pory"
	release
	end


# 58 "data//maps/CityClara_CannabisClub/scripts.pory"
CityClara_CannabisCenter_Movement_PlayerDown:
# 59 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_down
# 60 "data//maps/CityClara_CannabisClub/scripts.pory"
	face_up
	step_end

# 63 "data//maps/CityClara_CannabisClub/scripts.pory"
CityClara_CannabisCenter_Movement_PlayerToScott:
# 64 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_up
# 64 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_up
# 64 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_up
# 65 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 65 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 65 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 65 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 65 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_right
# 66 "data//maps/CityClara_CannabisClub/scripts.pory"
	face_up
	step_end

# 69 "data//maps/CityClara_CannabisClub/scripts.pory"
CityClara_CannabisCenter_Movement_LeafExit:
# 70 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_down
# 71 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 71 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 71 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 71 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 71 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_left
# 72 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_down
# 72 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_down
# 72 "data//maps/CityClara_CannabisClub/scripts.pory"
	walk_down
	step_end

CityClara_CannabisCenter_Text_Intro::
# 75 "data//maps/CityClara_CannabisClub/scripts.pory"
	.string "Hey, good to see you. Here man hit the\n"
	.string "bong!$"

CityClara_CannabisCenter_Text_Outtro::
# 79 "data//maps/CityClara_CannabisClub/scripts.pory"
	.string "Just let me know if you want to smoke\n"
	.string "more.$"

CityClara_CannabisCenter_Text_Leaf1::
# 83 "data//maps/CityClara_CannabisClub/scripts.pory"
	.string "Oh {PLAYER} there you are! What took\n"
	.string "you so long? While we were waiting my\l"
	.string "dad got too high but I've grown\l"
	.string "impatient and must see mew.$"

CityClara_CannabisCenter_Text_Scott1::
# 87 "data//maps/CityClara_CannabisClub/scripts.pory"
	.string "Mew's like....a Pokemon...man...a LEDGEND!$"

CityClara_CannabisCenter_Text_Leaf2::
# 91 "data//maps/CityClara_CannabisClub/scripts.pory"
	.string "See what I mean? Dad is totally blitzed.\n"
	.string "I'll wait for you down by the church I\l"
	.string "guess but make sure to smoke up if\l"
	.string "you're tired.$"

CityClara_CannabisCenter_Text_Scott::
# 95 "data//maps/CityClara_CannabisClub/scripts.pory"
	.string "Bro....\p"
	.string "Dude! It's like why do the cows eat\n"
	.string "grass? And isn't life all connected as\l"
	.string "one straight through our moms right up\l"
	.string "the umbral cord...You will hear birds\l"
	.string "singing through tuesday's heat...$"
