#include "constants/battle_ai.h"
#include "constants/moves.h"
#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"
#include "test/test.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_BODY_SLAM, MOVE_EFFECT_PARALYSIS) == TRUE);
}

AI_SINGLE_BATTLE_TEST("AI sees increased base power of Facade")
{
    u16 status1, expectedMove;

    PARAMETRIZE { status1 = STATUS1_NONE; expectedMove = MOVE_BODY_SLAM; }
    PARAMETRIZE { status1 = STATUS1_BURN; expectedMove = MOVE_FACADE; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_FACADE) == EFFECT_FACADE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { HP(60); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_BODY_SLAM, MOVE_FACADE); Status1(status1); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, expectedMove); }
    } SCENE {
        if (expectedMove == MOVE_FACADE)
            MESSAGE("Wobbuffet fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI sees increased base power of Smelling Salt")
{
    u16 status1, expectedMove;

    PARAMETRIZE { status1 = STATUS1_NONE; expectedMove = MOVE_BODY_SLAM; }
    PARAMETRIZE { status1 = STATUS1_PARALYSIS; expectedMove = MOVE_SMELLING_SALTS; }

    GIVEN {
        ASSUME(B_UPDATED_MOVE_DATA >= GEN_6);
        ASSUME(GetMoveEffect(MOVE_SMELLING_SALTS) == EFFECT_DOUBLE_POWER_ON_ARG_STATUS);
        ASSUME(GetMoveEffectArg_Status(MOVE_SMELLING_SALTS) == STATUS1_PARALYSIS);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { HP(60); Status1(status1); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_BODY_SLAM, MOVE_SMELLING_SALTS); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, expectedMove); }
    } SCENE {
        if (expectedMove == MOVE_SMELLING_SALTS)
            MESSAGE("Wobbuffet fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI sees increased base power of Wake Up Slap")
{
    u16 status1, expectedMove;

    PARAMETRIZE { status1 = STATUS1_NONE; expectedMove = MOVE_BODY_SLAM; }
    PARAMETRIZE { status1 = STATUS1_SLEEP; expectedMove = MOVE_WAKE_UP_SLAP; }

    GIVEN {
        ASSUME(B_UPDATED_MOVE_DATA >= GEN_6);
        ASSUME(GetMoveEffect(MOVE_WAKE_UP_SLAP) == EFFECT_DOUBLE_POWER_ON_ARG_STATUS);
        ASSUME(GetMoveEffectArg_Status(MOVE_WAKE_UP_SLAP) == STATUS1_SLEEP);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_MEGANIUM) { HP(35); Status1(status1); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_BODY_SLAM, MOVE_WAKE_UP_SLAP); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, expectedMove); }
    } SCENE {
        if (expectedMove == MOVE_WAKE_UP_SLAP)
            MESSAGE("Meganium fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI sees increased base power of Grav Apple")
{
    u32 movePlayer;
    u16 expectedMove;

    PARAMETRIZE { movePlayer = MOVE_CELEBRATE; expectedMove = MOVE_DRUM_BEATING; }
    PARAMETRIZE { movePlayer = MOVE_GRAVITY; expectedMove = MOVE_GRAV_APPLE; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_GRAV_APPLE) == EFFECT_GRAV_APPLE);
        ASSUME(GetMovePower(MOVE_GRAV_APPLE) == GetMovePower(MOVE_DRUM_BEATING));
        ASSUME(MoveHasAdditionalEffect(MOVE_DRUM_BEATING, MOVE_EFFECT_SPD_MINUS_1) == TRUE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { HP(81); Speed(20); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_DRUM_BEATING, MOVE_GRAV_APPLE); }
    } WHEN {
        TURN { MOVE(player, movePlayer); EXPECT_MOVE(opponent, MOVE_DRUM_BEATING); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, expectedMove); }
    } SCENE {
        if (expectedMove == MOVE_GRAV_APPLE)
            MESSAGE("Wobbuffet fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI sees increased base power of Flail")
{
    u16 hp, expectedMove;

    PARAMETRIZE { hp = 490; expectedMove = MOVE_BODY_SLAM; }
    PARAMETRIZE { hp = 5; expectedMove = MOVE_FLAIL; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_FLAIL) == EFFECT_FLAIL);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { Speed(10); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(hp); MaxHP(490); Speed(20); Moves(MOVE_BODY_SLAM, MOVE_FLAIL); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, expectedMove); }
    }
}

AI_SINGLE_BATTLE_TEST("AI will only use Dream Eater if target is asleep")
{
    u16 status1, expectedMove;

    PARAMETRIZE { status1 = STATUS1_NONE; expectedMove = MOVE_BODY_SLAM; }
    PARAMETRIZE { status1 = STATUS1_SLEEP; expectedMove = MOVE_DREAM_EATER; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_MEGANIUM) { HP(38); Status1(status1); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_BODY_SLAM, MOVE_DREAM_EATER); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, expectedMove); }
    } SCENE {
        if (expectedMove == MOVE_DREAM_EATER)
            MESSAGE("Meganium fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI sees increased base power of Spit Up")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_STOCKPILE) == EFFECT_STOCKPILE);
        ASSUME(GetMoveEffect(MOVE_SPIT_UP) == EFFECT_SPIT_UP);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { HP(43); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_STOCKPILE, MOVE_SPIT_UP, MOVE_SCRATCH); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_STOCKPILE); }
        TURN { EXPECT_MOVE(opponent, MOVE_SPIT_UP); }
    } SCENE {
        MESSAGE("Wobbuffet fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI can choose Counter or Mirror Coat if the predicted move split is correct and user doesn't faint")
{
    u16 playerMove = MOVE_NONE, opponentMove = MOVE_NONE;

    PARAMETRIZE { playerMove = MOVE_STRENGTH; opponentMove = MOVE_COUNTER; }
    PARAMETRIZE { playerMove = MOVE_POWER_GEM; opponentMove = MOVE_MIRROR_COAT; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_COUNTER) == EFFECT_COUNTER);
        ASSUME(GetMoveEffect(MOVE_MIRROR_COAT) == EFFECT_MIRROR_COAT);
        ASSUME(GetMoveCategory(MOVE_STRENGTH) == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(GetMoveCategory(MOVE_POWER_GEM) == DAMAGE_CATEGORY_SPECIAL);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(102); Speed(100); Moves(opponentMove, MOVE_STRENGTH); }
    } WHEN {
        TURN { MOVE(player, playerMove); EXPECT_MOVE(opponent, MOVE_STRENGTH); }
        TURN { MOVE(player, playerMove); EXPECT_MOVE(opponent, opponentMove); }
        TURN { MOVE(player, playerMove); EXPECT_MOVE(opponent, MOVE_STRENGTH); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI chooses moves with secondary effect that have a 100% chance to trigger")
{
    u16 ability;

    PARAMETRIZE { ability = ABILITY_NONE; }
    PARAMETRIZE { ability = ABILITY_SERENE_GRACE; }

    GIVEN {
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_SHADOW_BALL, MOVE_EFFECT_SP_DEF_MINUS_1, 20));
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_OCTAZOOKA, MOVE_EFFECT_ACC_MINUS_1, 50));
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_REGICE);
        OPPONENT(SPECIES_REGIROCK) { Ability(ability); Moves(MOVE_SHADOW_BALL, MOVE_OCTAZOOKA); }
    } WHEN {
        if (ability == ABILITY_NONE)
            TURN { EXPECT_MOVE(opponent, MOVE_SHADOW_BALL); }
        else
            TURN { EXPECT_MOVES(opponent, MOVE_OCTAZOOKA); }
    }
}

AI_DOUBLE_BATTLE_TEST("AI chooses moves that cure self or partner")
{
    u32 status1_0, status1_1, partnerAbility, move;

    PARAMETRIZE { status1_0 = STATUS1_NONE;         status1_1 = STATUS1_NONE; 
                  move = MOVE_HEAL_BELL;            partnerAbility = ABILITY_SCRAPPY; }
    PARAMETRIZE { status1_0 = STATUS1_TOXIC_POISON; status1_1 = STATUS1_NONE; 
                  move = MOVE_HEAL_BELL;            partnerAbility = ABILITY_SCRAPPY; }
    PARAMETRIZE { status1_0 = STATUS1_NONE;         status1_1 = STATUS1_PARALYSIS;
                  move = MOVE_HEAL_BELL;            partnerAbility = ABILITY_SCRAPPY; }
    PARAMETRIZE { status1_0 = STATUS1_NONE;         status1_1 = STATUS1_PARALYSIS; 
                  move = MOVE_HEAL_BELL;            partnerAbility = ABILITY_SOUNDPROOF; }

    PARAMETRIZE { status1_0 = STATUS1_NONE;         status1_1 = STATUS1_NONE; 
                  move = MOVE_REFRESH;              partnerAbility = ABILITY_SCRAPPY; }
    PARAMETRIZE { status1_0 = STATUS1_TOXIC_POISON; status1_1 = STATUS1_NONE; 
                  move = MOVE_REFRESH;              partnerAbility = ABILITY_SCRAPPY; }


    GIVEN {
        ASSUME(GetMoveEffect(MOVE_HEAL_BELL) == EFFECT_HEAL_BELL);
        WITH_CONFIG(GEN_CONFIG_HEAL_BELL_SOUNDPROOF, GEN_8);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_REGIROCK) { Moves(MOVE_ROCK_SLIDE, move, MOVE_ACID); Status1(status1_0); }
        OPPONENT(SPECIES_EXPLOUD) { Status1(status1_1); Ability(partnerAbility); }
    } WHEN {
        if (status1_0 != STATUS1_NONE || (status1_1 != STATUS1_NONE && partnerAbility != ABILITY_SOUNDPROOF))
            TURN { EXPECT_MOVE(opponentLeft, move); }
        else
            TURN { EXPECT_MOVE(opponentLeft, MOVE_ROCK_SLIDE); }
    }
}

AI_SINGLE_BATTLE_TEST("AI chooses moves that cure inactive party members")
{
    u32 status, ability, config;

    PARAMETRIZE { status = STATUS1_TOXIC_POISON; ability = ABILITY_SCRAPPY; }
    PARAMETRIZE { status = STATUS1_NONE;         ability = ABILITY_SCRAPPY; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; ability = ABILITY_SOUNDPROOF; config = GEN_4; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; ability = ABILITY_SOUNDPROOF; config = GEN_5; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_HEAL_BELL) == EFFECT_HEAL_BELL);
        WITH_CONFIG(GEN_CONFIG_HEAL_BELL_SOUNDPROOF, config);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_REGIROCK) { Moves(MOVE_BODY_PRESS, MOVE_HEAL_BELL); }
        OPPONENT(SPECIES_EXPLOUD) { Status1(status); Ability(ability); }
    } WHEN {
        if (status == STATUS1_NONE || (ability == ABILITY_SOUNDPROOF && config <= GEN_4))
            TURN { EXPECT_MOVE(opponent, MOVE_BODY_PRESS); }
        else
            TURN { EXPECT_MOVE(opponent, MOVE_HEAL_BELL); }
    }
}

AI_SINGLE_BATTLE_TEST("AI prioritizes Pursuit if it would KO opponent")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_PURSUIT) == EFFECT_PURSUIT);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY);
        PLAYER(SPECIES_ESPEON) { Level(5); }
        PLAYER(SPECIES_TYRANITAR);
        OPPONENT(SPECIES_TYRANITAR) { Moves(MOVE_CRUNCH, MOVE_PURSUIT); }
    } WHEN {
        TURN { SWITCH(player, 1); EXPECT_MOVE(opponent, MOVE_PURSUIT); SEND_OUT(player, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI uses Quick Guard against Quick Attack when opponent would die of poison")
{
    GIVEN {
        PLAYER(SPECIES_ZUBAT) { Moves(MOVE_QUICK_ATTACK); Status1(STATUS1_TOXIC_POISON); }
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREDICT_MOVE);
        OPPONENT(SPECIES_RATTATA) { Moves(MOVE_QUICK_GUARD, MOVE_TACKLE); }
    } WHEN {
        TURN { MOVE(player, MOVE_QUICK_ATTACK); EXPECT_MOVE(opponent, MOVE_QUICK_GUARD); }
    }
}

AI_SINGLE_BATTLE_TEST("AI uses Wide Guard against Earthquake when opponent would die of poison")
{
    GIVEN {
        PLAYER(SPECIES_ZUBAT) { Moves(MOVE_EARTHQUAKE); Status1(STATUS1_TOXIC_POISON); }
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREDICT_MOVE);
        OPPONENT(SPECIES_RATTATA) { Moves(MOVE_WIDE_GUARD, MOVE_TACKLE); }
    } WHEN {
        TURN { MOVE(player, MOVE_EARTHQUAKE); EXPECT_MOVE(opponent, MOVE_WIDE_GUARD); }
    }
}

AI_SINGLE_BATTLE_TEST("AI uses Worry Seed against Rest")
{
    u32 move;
    u64 aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT;

    PARAMETRIZE { move = MOVE_REST; }
    PARAMETRIZE { move = MOVE_EXTREME_SPEED; }
    PARAMETRIZE { move = MOVE_REST; aiFlags |= AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_PP_STALL_PREVENTION; }
    PARAMETRIZE { move = MOVE_EXTREME_SPEED; aiFlags |= AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_PP_STALL_PREVENTION; }
    GIVEN {
        AI_FLAGS(aiFlags);
        PLAYER(SPECIES_ZIGZAGOON) { Moves(move, MOVE_SLEEP_TALK, MOVE_HEADBUTT); }
        OPPONENT(SPECIES_ZIGZAGOON) { Moves(MOVE_WORRY_SEED, MOVE_HEADBUTT); }
    } WHEN {
        if (move == MOVE_REST)
            TURN { MOVE(player, MOVE_HEADBUTT); EXPECT_MOVE(opponent, MOVE_WORRY_SEED); }
        else
            TURN { MOVE(player, MOVE_HEADBUTT); NOT_EXPECT_MOVE(opponent, MOVE_WORRY_SEED); }
    }
}

AI_SINGLE_BATTLE_TEST("AI uses Simple Beam against Contrary Leaf Storm")
{
    u32 ability, move;
    PARAMETRIZE { ability = ABILITY_CONTRARY; move = MOVE_LEAF_STORM; }
    PARAMETRIZE { ability = ABILITY_CONTRARY; move = MOVE_CHARGE_BEAM; }
    PARAMETRIZE { ability = ABILITY_OVERGROW; move = MOVE_CHARGE_BEAM; }

    GIVEN {
        PLAYER(SPECIES_SERPERIOR) { Moves(move); Ability(ability); }
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT);
        OPPONENT(SPECIES_SWOOBAT) { Moves(MOVE_GUST, MOVE_SIMPLE_BEAM); }
    } WHEN {
        if (ability == ABILITY_CONTRARY && move == MOVE_LEAF_STORM)
            TURN { MOVE(player, move); EXPECT_MOVE(opponent, MOVE_SIMPLE_BEAM); }
        else
            TURN { MOVE(player, move); NOT_EXPECT_MOVE(opponent, MOVE_SIMPLE_BEAM); }
    }
}

AI_SINGLE_BATTLE_TEST("AI uses Skill Swap against Poison Heal")
{
    u8 status;
    u64 aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT;
    PARAMETRIZE { status = STATUS1_POISON; }
    PARAMETRIZE { status = STATUS1_POISON; aiFlags |= AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_PP_STALL_PREVENTION; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; aiFlags |= AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_PP_STALL_PREVENTION; }

    GIVEN {
        PLAYER(SPECIES_SHROOMISH) { Ability(ABILITY_POISON_HEAL); Status1(status); }
        AI_FLAGS(aiFlags);
        OPPONENT(SPECIES_SPINDA) { Moves(MOVE_SKILL_SWAP, MOVE_HEADBUTT); }
    } WHEN {
        if (status == STATUS1_TOXIC_POISON)
            TURN { EXPECT_MOVE(opponent, MOVE_SKILL_SWAP); }
        else
            TURN { NOT_EXPECT_MOVE(opponent, MOVE_SKILL_SWAP); }
    }
}

AI_SINGLE_BATTLE_TEST("AI uses Trick Room (singles)")
{
    u32 speed;
    PARAMETRIZE { speed = 10; }
    PARAMETRIZE { speed = 20; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_WOBBUFFET) { Speed(11); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(speed); Moves(MOVE_TACKLE, MOVE_TRICK_ROOM); }
    } WHEN {
        if (speed == 10)
            TURN { EXPECT_MOVE(opponent, MOVE_TRICK_ROOM); }
        else
            TURN { NOT_EXPECT_MOVE(opponent, MOVE_TRICK_ROOM); }
    }
}

AI_SINGLE_BATTLE_TEST("AI uses Quick Guard against Quick Attack when opponent would take poison damage")
{
    PASSES_RANDOMLY(PREDICT_MOVE_CHANCE, 100, RNG_AI_PREDICT_MOVE);
    GIVEN {
        PLAYER(SPECIES_RATTATA) { Moves(MOVE_QUICK_ATTACK); Status1(STATUS1_TOXIC_POISON); }
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREDICT_MOVE);
        OPPONENT(SPECIES_RATTATA) { Moves(MOVE_QUICK_GUARD, MOVE_TACKLE); }
    } WHEN {
        TURN { MOVE(player, MOVE_QUICK_ATTACK); EXPECT_MOVE(opponent, MOVE_QUICK_GUARD); }
    }
}

AI_SINGLE_BATTLE_TEST("AI uses Wide Guard against Earthquake when opponent would take poison damage")
{
    PASSES_RANDOMLY(PREDICT_MOVE_CHANCE, 100, RNG_AI_PREDICT_MOVE);
    GIVEN {
        PLAYER(SPECIES_RATTATA) { Moves(MOVE_EARTHQUAKE); Status1(STATUS1_TOXIC_POISON); }
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREDICT_MOVE);
        OPPONENT(SPECIES_RATTATA) { Moves(MOVE_WIDE_GUARD, MOVE_TACKLE); }
    } WHEN {
        TURN { MOVE(player, MOVE_EARTHQUAKE); EXPECT_MOVE(opponent, MOVE_WIDE_GUARD); }
    }
}
