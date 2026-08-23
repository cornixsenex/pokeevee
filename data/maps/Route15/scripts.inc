Route15_MapScripts::
# 8 "data/maps/Route15/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route15_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route15_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/Route15/scripts.pory"
	goto_if_set FLAG_ROUTE15_DESERTCAVE_OPEN, Route15_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route15_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 10 "data/maps/Route15/scripts.pory"
	call Route15_EventScript_ShowCaveDoor
	return


Route15_EventScript_ShowCaveDoor::
# 17 "data/maps/Route15/scripts.pory"
	setmetatile 43, 38, METATILE_General_CaveEntrance_Bottom, 0
# 18 "data/maps/Route15/scripts.pory"
	setmetatile 43, 37, METATILE_General_CaveEntrance_Top, 1
	end


Route15_EventScript_DesertTempleWarp::
# 23 "data/maps/Route15/scripts.pory"
	lockall
# 24 "data/maps/Route15/scripts.pory"
	delay 20
# 25 "data/maps/Route15/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 26 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route15/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_SetInvisible
# 28 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route15/scripts.pory"
	playse SE_FALL
# 30 "data/maps/Route15/scripts.pory"
	delay 60
# 31 "data/maps/Route15/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_B1F, 9, 9
# 32 "data/maps/Route15/scripts.pory"
	waitstate
	end


Route15_Script_SunTrigger::
# 37 "data/maps/Route15/scripts.pory"
	setweather WEATHER_SUNNY
# 38 "data/maps/Route15/scripts.pory"
	doweather
	end


Route15_Script_SandstormTriggerUp::
# 43 "data/maps/Route15/scripts.pory"
	setvar VAR_TEMP_4, 2
# 44 "data/maps/Route15/scripts.pory"
	call Route15_Script_SandstormTrigger
	return


Route15_Script_SandstormTriggerLeft::
# 48 "data/maps/Route15/scripts.pory"
	setvar VAR_TEMP_4, 1
# 49 "data/maps/Route15/scripts.pory"
	call Route15_Script_SandstormTrigger
	return


Route15_Script_SandstormTriggerRight::
# 53 "data/maps/Route15/scripts.pory"
	setvar VAR_TEMP_4, 3
# 54 "data/maps/Route15/scripts.pory"
	call Route15_Script_SandstormTrigger
	return


Route15_Script_SandstormTrigger::
# 58 "data/maps/Route15/scripts.pory"
	setweather WEATHER_SANDSTORM
# 59 "data/maps/Route15/scripts.pory"
	doweather
# 60 "data/maps/Route15/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 61 "data/maps/Route15/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route15_Script_SandstormTrigger_2
# 80 "data/maps/Route15/scripts.pory"
	setvar VAR_TEMP_3, 1
Route15_Script_SandstormTrigger_1:
# 82 "data/maps/Route15/scripts.pory"
	release
	end

Route15_Script_SandstormTrigger_2:
# 62 "data/maps/Route15/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 63 "data/maps/Route15/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route15/scripts.pory"
	msgbox gText_SandstormIsVicious
# 65 "data/maps/Route15/scripts.pory"
	closemessage
# 66 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Route15_Script_SandstormTrigger_6
# 68 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Route15_Script_SandstormTrigger_7
# 70 "data/maps/Route15/scripts.pory"
	compare VAR_TEMP_4, 3
	goto_if_eq Route15_Script_SandstormTrigger_8
# 73 "data/maps/Route15/scripts.pory"
	msgbox Route15_Script_SandstormTrigger_Text_0
# 74 "data/maps/Route15/scripts.pory"
	closemessage
# 75 "data/maps/Route15/scripts.pory"
	release
	end

Route15_Script_SandstormTrigger_5:
# 78 "data/maps/Route15/scripts.pory"
	waitmovement 0
	goto Route15_Script_SandstormTrigger_1

Route15_Script_SandstormTrigger_6:
# 67 "data/maps/Route15/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft2
	goto Route15_Script_SandstormTrigger_5

Route15_Script_SandstormTrigger_7:
# 69 "data/maps/Route15/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
	goto Route15_Script_SandstormTrigger_5

Route15_Script_SandstormTrigger_8:
# 71 "data/maps/Route15/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
	goto Route15_Script_SandstormTrigger_5


Route15_Script_SandstormTrigger_Text_0:
# 73 "data/maps/Route15/scripts.pory"
	.string "ERROR: SandstormTrigger\nVAR_TEMP_4 OOB$"
