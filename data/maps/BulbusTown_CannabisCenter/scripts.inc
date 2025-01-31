BulbusTown_CannabisCenter_MapScripts::
# 2 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
	return

BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	map_script_2 VAR_ROUTE1_STATE, 3, BulbusTown_CannabisCenter_OnFrame
# 7 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	map_script_2 VAR_ROUTE1_STATE, 4, BulbusTown_CannabisCenter_OnFrame
	.2byte 0


BulbusTown_CannabisCenter_OnFrame::
# 13 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	setvar VAR_ROUTE1_STATE, 5
# 14 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	lockall
# 15 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BulbusTown_CannabisCenter_Movement_Player
# 16 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	load_field_pic 5, 190, 98
# 17 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	msgbox BulbusTown_CannabisCenter_Text_Scott1
# 18 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	waitmovement 0
# 19 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 20 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	waitmovement 0
# 21 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	closemessage
# 22 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	destroy_field_pic 5
# 23 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	applymovement 2, BulbusTown_CannabisCenter_Movement_Scott
# 24 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	waitmovement 0
# 25 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	removeobject 2
# 26 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	setflag FLAG_HIDE_BULBUSSCOTT
# 27 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	releaseall
	end


BulbusTown_CannabisCenter_Clerk::
# 33 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	lock
# 34 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	faceplayer
# 35 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	msgbox BulbusTown_CannabisCenter_Intro
# 36 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	closemessage
# 37 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 38 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	msgbox BulbusTown_CannabisCenter_Outtro
# 39 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	release
	end


# 43 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
BulbusTown_CannabisCenter_Movement_Player:
# 44 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_up
# 44 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_up
# 44 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_up
# 44 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_up
# 45 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	face_right
	step_end

# 48 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
BulbusTown_CannabisCenter_Movement_Scott:
# 49 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_down
# 49 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_down
# 49 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_down
# 50 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_left
# 51 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_down
	step_end

BulbusTown_CannabisCenter_Intro::
# 55 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	.string "What's up dude? Scott told me you smoke\n"
	.string "for free, here hit this bong!$"

BulbusTown_CannabisCenter_Outtro::
# 59 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	.string "Hows that feel? Just let me know if you\n"
	.string "need another one.$"

BulbusTown_CannabisCenter_Text_Scott1::
# 63 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	.string "Hey {PLAYER} I knew you'd come, so\n"
	.string "what you think? The finest cannabis\l"
	.string "shop in the state. As a reward for\l"
	.string "saving my daughter I've let the\l"
	.string "business know you smoke for free.\l"
	.string "Speaking of Leaf she's in the Silvan\l"
	.string "Woods training the Pokemon that she\l"
	.string "just caught. We better go catch up to\l"
	.string "her here soon...$"
