#ifndef GUARD_CONSTANTS_MAP_TYPES_H
#define GUARD_CONSTANTS_MAP_TYPES_H

//CORNIX NOTE: These don't really matter so no need for a DYNAMIC one. Basically just make sure you select an "outdoor" one to ensure the DNS works and you're gucci

#define MAP_TYPE_NONE        0
#define MAP_TYPE_TOWN        1
#define MAP_TYPE_CITY        2
#define MAP_TYPE_ROUTE       3
#define MAP_TYPE_UNDERGROUND 4
#define MAP_TYPE_UNDERWATER  5
#define MAP_TYPE_OCEAN_ROUTE 6
#define MAP_TYPE_UNKNOWN     7 // Not used by any map.
#define MAP_TYPE_INDOOR      8
#define MAP_TYPE_SECRET_BASE 9

#define MAP_BATTLE_SCENE_NORMAL       0
#define MAP_BATTLE_SCENE_GYM          1
#define MAP_BATTLE_SCENE_MAGMA        2
#define MAP_BATTLE_SCENE_AQUA         3
#define MAP_BATTLE_SCENE_SIDNEY       4
#define MAP_BATTLE_SCENE_PHOEBE       5
#define MAP_BATTLE_SCENE_GLACIA       6
#define MAP_BATTLE_SCENE_DRAKE        7
#define MAP_BATTLE_SCENE_FRONTIER     8

#endif  // GUARD_CONSTANTS_MAP_TYPES_H
