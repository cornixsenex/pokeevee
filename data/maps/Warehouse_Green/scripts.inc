Warehouse_Green_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_GANG_STATE, 0, Warehouse_Green_EventScript_HideBigGreen
	map_script_2 VAR_GANG_STATE, 1, Warehouse_Green_EventScript_HideBigGreen
	.2byte 0


Warehouse_Green_EventScript_HideBigGreen::
	removeobject 5
	return

