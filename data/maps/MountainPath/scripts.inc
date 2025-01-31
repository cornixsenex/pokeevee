MountainPath_MapScripts::
	.byte 0


MountainPath_EventScript_TestTrigger::
# 7 "data//maps/MountainPath/scripts.pory"
	lock
# 8 "data//maps/MountainPath/scripts.pory"
	setvar VAR_TEMP_0, 54
# 9 "data//maps/MountainPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 10 "data//maps/MountainPath/scripts.pory"
	waitmovement 0
# 11 "data//maps/MountainPath/scripts.pory"
	release
	end


MountainPath_EventScript_SandstormTrigger::
# 16 "data//maps/MountainPath/scripts.pory"
	setvar VAR_TEMP_0, 1
# 17 "data//maps/MountainPath/scripts.pory"
	setweather WEATHER_SANDSTORM
# 18 "data//maps/MountainPath/scripts.pory"
	fadenewbgm MUS_DESERT
# 19 "data//maps/MountainPath/scripts.pory"
	doweather
	end


MountainPath_EventScript_SunTrigger::
# 25 "data//maps/MountainPath/scripts.pory"
	setvar VAR_TEMP_0, 0
# 26 "data//maps/MountainPath/scripts.pory"
	setweather WEATHER_SUNNY
# 27 "data//maps/MountainPath/scripts.pory"
	fadenewbgm MUS_ABANDONED_SHIP
# 28 "data//maps/MountainPath/scripts.pory"
	doweather
	end

