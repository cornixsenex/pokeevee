SaltySpitoon_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaltySpitoon_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SaltySpitoon_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SALTYSPITOON_STATE, 4, SaltySpitoon_EventScript_SetSSVar
	.2byte 0


SaltySpitoon_EventScript_SetSSVar::
	setvar VAR_SALTYSPITOON_STATE, 44
	end

