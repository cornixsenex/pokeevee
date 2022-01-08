BulbusTown_CannabisCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setweather WEATHER_FOG_DIAGONAL
	return

BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROUTE1_STATE, 3, BulbusTown_CannabisCenter_OnFrame
	map_script_2 VAR_ROUTE1_STATE, 4, BulbusTown_CannabisCenter_OnFrame
	.2byte 0


BulbusTown_CannabisCenter_OnFrame::
	setvar VAR_ROUTE1_STATE, 5
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, BulbusTown_CannabisCenter_Movement_Player
	load_field_pic 5, 190, 98
	msgbox BulbusTown_CannabisCenter_Text_Scott1
	waitmovement 0
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	closemessage
	destroy_field_pic 5
	applymovement 2, BulbusTown_CannabisCenter_Movement_Scott
	waitmovement 0
	removeobject 2
	setflag FLAG_HIDE_BULBUSSCOTT
	releaseall
	end


BulbusTown_CannabisCenter_Clerk::
	lock
	faceplayer
	msgbox BulbusTown_CannabisCenter_Intro
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox BulbusTown_CannabisCenter_Outtro
	release
	end


BulbusTown_CannabisCenter_Movement_Player:
	walk_up
	walk_up
	walk_up
	walk_up
	face_right
	step_end

BulbusTown_CannabisCenter_Movement_Scott:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	step_end

BulbusTown_CannabisCenter_Intro::
	.string "What's up dude? Scott told me you smoke\n"
	.string "for free, here hit this bong!$"

BulbusTown_CannabisCenter_Outtro::
	.string "Hows that feel? Just let me know if you\n"
	.string "need another one.$"

BulbusTown_CannabisCenter_Text_Scott1::
	.string "Hey {PLAYER} I knew you'd come, so\n"
	.string "what you think? The finest cannabis\l"
	.string "shop in the state. As a reward for\l"
	.string "saving my daughter I've let the\l"
	.string "business know you smoke for free.\l"
	.string "Speaking of Leaf she's in the Silvan\l"
	.string "Woods training the Pokemon that she\l"
	.string "just caught. We better go catch up to\l"
	.string "her here soon...$"
