DesertTemple_1F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, DesertTemple_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

DesertTemple_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call DesertTemple_1F_OnResume
	return


DesertTemple_1F_OnResume::
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_MIRAGE_TOWER_1F
	end

