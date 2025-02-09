BulbusTown_CannabisCenter_MapScripts::
# 6 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 12 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 8 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 0
	goto_if_eq BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	call BulbusTown_CannabisCenter_Script_ShowScott
	return

BulbusTown_CannabisCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	map_script_2 VAR_SILVANWOODS_STATE, 0, BulbusTown_CannabisCenter_Script_ScottScene
	.2byte 0


BulbusTown_CannabisCenter_Script_ShowScott::
# 19 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	setobjectxyperm 2, 8, 4
# 20 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


BulbusTown_CannabisCenter_Script_ScottScene::
# 26 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	lockall
# 27 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 1
# 28 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BulbusTown_CannabisCenter_Movement_Player
# 29 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	load_field_pic 33, 190, 98
# 30 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	msgbox BulbusTown_CannabisCenter_Text_Scott1
# 31 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	waitmovement 0
# 32 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 33 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	waitmovement 0
# 34 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	msgbox BulbusTown_CannabisCenter_Text_Scott2
# 35 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	closemessage
# 36 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	destroy_field_pic 33
# 37 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	applymovement 2, BulbusTown_CannabisCenter_Movement_Scott
# 38 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	waitmovement 0
# 39 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	setobjectxyperm 2, 0, 0
# 40 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 41 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	removeobject 2
# 42 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	releaseall
	end


BulbusTown_CannabisCenter_Clerk::
# 48 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	lock
# 49 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	faceplayer
# 50 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	msgbox BulbusTown_CannabisCenter_Intro
# 51 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	closemessage
# 52 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 53 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	msgbox BulbusTown_CannabisCenter_Outtro
# 54 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	release
	end


# 58 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
BulbusTown_CannabisCenter_Movement_Player:
# 59 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_up
# 59 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_up
# 59 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_up
# 59 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_up
# 60 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	face_right
	step_end

# 63 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
BulbusTown_CannabisCenter_Movement_Scott:
# 64 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_down
# 64 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_down
# 64 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_down
# 65 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_left
# 66 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	walk_down
	step_end

BulbusTown_CannabisCenter_Intro::
# 70 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	.string "What's up dude? Scott told me you smoke\n"
	.string "for free, here hit this bong!$"

BulbusTown_CannabisCenter_Outtro::
# 74 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	.string "Hows that feel? Just let me know if you\n"
	.string "need another one. Bye bye!$"

BulbusTown_CannabisCenter_Text_Scott1::
# 78 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	.string "Hey {PLAYER}! What took so long? So\n"
	.string "what you think?$"

BulbusTown_CannabisCenter_Text_Scott2::
# 82 "data//maps/BulbusTown_CannabisCenter/scripts.pory"
	.string "I own the finest Lotus shop in state.\n"
	.string "If you're a Lotus head please, be my\l"
	.string "guest, and smoke here free of charge to\l"
	.string "your content. Once satisfied we must\l"
	.string "continue on the road to Saeclara. While\l"
	.string "you delayed my most impatient\l"
	.string "daughter's already grown tired of\l"
	.string "waiting and hit the road against my own\l"
	.string "orders to stick with me. We must find\l"
	.string "her and then together cross the mighty\l"
	.string "river and reach Saeclara.$"
