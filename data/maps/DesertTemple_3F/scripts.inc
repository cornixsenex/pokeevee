DesertTemple_3F_MapScripts::
# 3 "data//maps/DesertTemple_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, DesertTemple_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

DesertTemple_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 4 "data//maps/DesertTemple_3F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, DesertTemple_3F_EventScript_FaceSnakes
	.2byte 0


DesertTemple_3F_EventScript_FaceSnakes::
# 11 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 12 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 2, DIR_SOUTH
# 13 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 3, DIR_WEST
# 14 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 4, DIR_SOUTH
# 15 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 5, DIR_SOUTH
# 16 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 6, DIR_NORTH
# 17 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 7, DIR_EAST
# 18 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 8, DIR_WEST
# 19 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 9, DIR_NORTH
# 20 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 10, DIR_WEST
# 21 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 11, DIR_EAST
# 22 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 12, DIR_SOUTH
# 23 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 13, DIR_NORTH
# 24 "data//maps/DesertTemple_3F/scripts.pory"
	turnobject 14, DIR_NORTH
	end


DesertTemple_3F_EventScript_CollisionEkans::
# 29 "data//maps/DesertTemple_3F/scripts.pory"
	lock
# 30 "data//maps/DesertTemple_3F/scripts.pory"
	delay 20
# 31 "data//maps/DesertTemple_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 32 "data//maps/DesertTemple_3F/scripts.pory"
	waitmovement 0
# 33 "data//maps/DesertTemple_3F/scripts.pory"
	playmoncry SPECIES_EKANS, CRY_MODE_NORMAL
# 34 "data//maps/DesertTemple_3F/scripts.pory"
	waitmoncry
# 35 "data//maps/DesertTemple_3F/scripts.pory"
	delay 20
# 36 "data//maps/DesertTemple_3F/scripts.pory"
	warpsilent MAP_DESERT_TEMPLE_1F, 11, 27
# 37 "data//maps/DesertTemple_3F/scripts.pory"
	waitstate
	end

