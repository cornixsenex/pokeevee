#ifndef GUARD_CONSTANTS_MAP_TYPES_H
#define GUARD_CONSTANTS_MAP_TYPES_H

//CORNIX NOTE: These don't really matter so no need for a DYNAMIC one. Basically just make sure you select an "outdoor" one to ensure the DNS works and you're gucci

enum MapType
{
    MAP_TYPE_NONE,
    MAP_TYPE_TOWN,
    MAP_TYPE_CITY,
    MAP_TYPE_ROUTE,
    MAP_TYPE_UNDERGROUND,
    MAP_TYPE_UNDERWATER,
    MAP_TYPE_OCEAN_ROUTE,
    MAP_TYPE_UNKNOWN, // Not used by any map.
    MAP_TYPE_INDOOR,
    MAP_TYPE_SECRET_BASE,
};

enum MapBattleScene
{
    MAP_BATTLE_SCENE_NORMAL,
    MAP_BATTLE_SCENE_GYM,
    MAP_BATTLE_SCENE_MAGMA,
    MAP_BATTLE_SCENE_AQUA,
    MAP_BATTLE_SCENE_SIDNEY,
    MAP_BATTLE_SCENE_PHOEBE,
    MAP_BATTLE_SCENE_GLACIA,
    MAP_BATTLE_SCENE_DRAKE,
    MAP_BATTLE_SCENE_FRONTIER,
};

#endif  // GUARD_CONSTANTS_MAP_TYPES_H
