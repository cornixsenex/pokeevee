CityClara_CannabisClub_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setweather WEATHER_FOG_DIAGONAL
	return

CityClara_CannabisClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_CITYCLARA_STATE, 0, CityClar_CannabisCenter_ScottTrigger
	.2byte 0


CityClar_CannabisCenter_ScottTrigger::
	setvar VAR_CITYCLARA_STATE, 1
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox CityClara_CannabisCenter_Text_Leaf1
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_CannabisCenter_Movement_PlayerToScott
	waitmovement 0
	destroy_field_pic 4
	load_field_pic 5, 190, 98
	msgbox CityClara_CannabisCenter_Text_Scott1
	destroy_field_pic 5
	load_field_pic 4, 190, 98
	msgbox CityClara_CannabisCenter_Text_Leaf2
	destroy_field_pic 4
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_CannabisCenter_Movement_PlayerDown
	waitmovement 0
	applymovement 3, CityClara_CannabisCenter_Movement_LeafExit
	waitmovement 0
	removeobject 3
	clearflag FLAG_CLARACITY_HIDELEAF
	releaseall
	end


CityClara_CannabisCenter_Clerk::
	lock
	faceplayer
	msgbox CityClara_CannabisCenter_Text_Intro
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox CityClara_CannabisCenter_Text_Outtro
	release
	end


CityClara_CannabisCenter_Scott::
	lock
	faceplayer
	load_field_pic 5, 190, 98
	msgbox CityClara_CannabisCenter_Text_Scott
	closemessage
	destroy_field_pic 5
	applymovement 2, Common_Movement_FaceRight
	release
	end


CityClara_CannabisCenter_Movement_PlayerDown:
	walk_down
	face_up
	step_end

CityClara_CannabisCenter_Movement_PlayerToScott:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

CityClara_CannabisCenter_Movement_LeafExit:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

CityClara_CannabisCenter_Text_Intro::
	.string "Hey, good to see you. Here man hit the\n"
	.string "bong!$"

CityClara_CannabisCenter_Text_Outtro::
	.string "Just let me know if you want to smoke\n"
	.string "more.$"

CityClara_CannabisCenter_Text_Leaf1::
	.string "Oh {PLAYER} there you are! What took\n"
	.string "you so long? While we were waiting my\l"
	.string "dad got too high but I've grown\l"
	.string "impatient and must see mew.$"

CityClara_CannabisCenter_Text_Scott1::
	.string "Mew's like....a Pokemon...man...a LEDGEND!$"

CityClara_CannabisCenter_Text_Leaf2::
	.string "See what I mean? Dad is totally blitzed.\n"
	.string "I'll wait for you down by the church I\l"
	.string "guess but make sure to smoke up if\l"
	.string "you're tired.$"

CityClara_CannabisCenter_Text_Scott::
	.string "Bro....\p"
	.string "Dude! It's like why do the cows eat\n"
	.string "grass? And isn't life all connected as\l"
	.string "one straight through our moms right up\l"
	.string "the umbral cord...You will hear birds\l"
	.string "singing through tuesday's heat...$"
