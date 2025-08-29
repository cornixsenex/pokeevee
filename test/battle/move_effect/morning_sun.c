#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_MORNING_SUN) == EFFECT_MORNING_SUN);
}

SINGLE_BATTLE_TEST("Morning Sun recovers 1/2 of the user's max HP (Gen3+)")
{
    GIVEN {
        WITH_CONFIG(GEN_CONFIG_TIME_OF_DAY_HEALING_MOVES, GEN_3);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(200); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_MORNING_SUN); }
    } SCENE {
        HP_BAR(player, damage: -(200 / 2));
    }
}

SINGLE_BATTLE_TEST("Morning Sun recovers 2/3 of the user's max HP in Sunlight (Gen3+)")
{
    GIVEN {
        WITH_CONFIG(GEN_CONFIG_TIME_OF_DAY_HEALING_MOVES, GEN_3);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(300); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); MOVE(player, MOVE_MORNING_SUN); }
    } SCENE {
        HP_BAR(player, damage: -(300 / 1.5));
    }
}

SINGLE_BATTLE_TEST("Morning Sun recovers 1/4 of the user's max HP in Rain, Sandstorm, Hail, and Snow (Gen3+)")
{
    u32 move;
    PARAMETRIZE { move = MOVE_RAIN_DANCE; }
    PARAMETRIZE { move = MOVE_SANDSTORM; }
    PARAMETRIZE { move = MOVE_HAIL; }
    PARAMETRIZE { move = MOVE_SNOWSCAPE; }
    GIVEN {
        WITH_CONFIG(GEN_CONFIG_TIME_OF_DAY_HEALING_MOVES, GEN_3);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(400); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, move); MOVE(player, MOVE_MORNING_SUN); }
    } SCENE {
        HP_BAR(player, damage: -(400 / 4));
    }
}

TO_DO_BATTLE_TEST("TODO: Morning Sun recovers 1/4 of the user's max HP while it is not morning (Gen2)")

TO_DO_BATTLE_TEST("TODO: Morning Sun recovers 1/2 of the user's max HP in Sunlight while it is not morning (Gen2)")

TO_DO_BATTLE_TEST("TODO: Morning Sun recovers 1/8 of the user's max HP in Rain, Sandstorm, Hail, and Snow while it is not morning (Gen2)")

TO_DO_BATTLE_TEST("TODO: Morning Sun recovers 2/4 of the user's max HP while it is morning (Gen2)")

TO_DO_BATTLE_TEST("TODO: Morning Sun recovers 2/2 of the user's max HP in Sunlight while it is morning (Gen2)")

TO_DO_BATTLE_TEST("TODO: Morning Sun recovers 2/8 of the user's max HP in Rain, Sandstorm, Hail, and Snow while it is morning (Gen2)")
