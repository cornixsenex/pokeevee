BulbusTown_CannabisCenter_MapScripts::
# 2 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
	return

BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0


BulbusTown_CannabisCenter_OnFrame::
# 11 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	lockall
# 12 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BulbusTown_CannabisCenter_Movement_Player
# 13 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	load_field_pic 5, 190, 98
# 14 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	msgbox BulbusTown_CannabisCenter_Text_Scott1
# 15 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	waitmovement 0
# 16 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 17 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	waitmovement 0
# 18 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	closemessage
# 19 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	destroy_field_pic 5
# 20 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	applymovement 2, BulbusTown_CannabisCenter_Movement_Scott
# 21 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	waitmovement 0
# 22 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	removeobject 2
# 23 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	setflag FLAG_HIDE_BULBUSSCOTT
# 24 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	releaseall
	end


BulbusTown_CannabisCenter_Clerk::
# 30 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	lock
# 31 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	faceplayer
# 32 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	msgbox BulbusTown_CannabisCenter_Intro
# 33 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	closemessage
# 34 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 35 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	msgbox BulbusTown_CannabisCenter_Outtro
# 36 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	release
	end


# 40 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
BulbusTown_CannabisCenter_Movement_Player:
# 41 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_up
# 41 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_up
# 41 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_up
# 41 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_up
# 42 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	face_right
	step_end

# 45 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
BulbusTown_CannabisCenter_Movement_Scott:
# 46 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_down
# 46 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_down
# 46 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_down
# 47 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_left
# 48 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_down
	step_end

BulbusTown_CannabisCenter_Intro::
# 52 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	.string "What's up dude? Scott told me you smoke\n"
	.string "for free, here hit this bong!$"

BulbusTown_CannabisCenter_Outtro::
# 56 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	.string "Hows that feel? Just let me know if you\n"
	.string "need another one.$"

BulbusTown_CannabisCenter_Text_Scott1::
# 60 "data/maps/BulbusTown_CannabisCenter/scripts.pory"
	.string "Hey {PLAYER} I knew you'd come, so\n"
	.string "what you think? The finest cannabis\l"
	.string "shop in the state. As a reward for\l"
	.string "saving my daughter I've let the\l"
	.string "business know you smoke for free.\l"
	.string "Speaking of Leaf she's in the Silvan\l"
	.string "Woods training the Pokemon that she\l"
	.string "just caught. We better go catch up to\l"
	.string "her here soon...$"
