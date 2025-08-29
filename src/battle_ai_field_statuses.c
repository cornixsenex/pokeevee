#include "global.h"
#include "battle_z_move.h"
#include "malloc.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_ai_field_statuses.h"
#include "battle_ai_util.h"
#include "battle_ai_main.h"
#include "battle_ai_switch_items.h"
#include "battle_factory.h"
#include "battle_setup.h"
#include "event_data.h"
#include "data.h"
#include "item.h"
#include "move.h"
#include "pokemon.h"
#include "random.h"
#include "recorded_battle.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/battle_ai.h"
#include "constants/battle_move_effects.h"
#include "constants/hold_effects.h"
#include "constants/moves.h"
#include "constants/items.h"

static bool32 DoesAbilityBenefitFromWeather(u32 ability, u32 weather);
static bool32 DoesAbilityBenefitFromFieldStatus(u32 ability, u32 fieldStatus);
// A move is light sensitive if it is boosted by Sunny Day and weakened by low light weathers.
static bool32 IsLightSensitiveMove(u32 move);
static bool32 HasLightSensitiveMove(u32 battler);
// The following functions all feed into WeatherChecker, which is then called by ShouldSetWeather and ShouldClearWeather.
// BenefitsFrom functions all return FIELD_EFFECT_POSITIVE if the weather or field effect is good to have in place from the perspective of the battler, FIELD_EFFECT_NEUTRAL if it is neither good nor bad, and FIELD_EFFECT_NEGATIVE if it is bad.
// The purpose of WeatherChecker and FieldStatusChecker is to cleanly homogenize the logic that's the same with all of them, and to more easily apply single battle logic to double battles.
// ShouldSetWeather and ShouldClearWeather are looking for a positive or negative result respectively, and check the entire side.
// If one pokemon has a positive result and the other has a negative result, it defaults to the opinion of the battler that may change the weather or field status.
static enum FieldEffectOutcome BenefitsFromSun(u32 battler);
static enum FieldEffectOutcome BenefitsFromSandstorm(u32 battler);
static enum FieldEffectOutcome BenefitsFromHailOrSnow(u32 battler, u32 weather);
static enum FieldEffectOutcome BenefitsFromRain(u32 battler);
// The following functions all feed into FieldStatusChecker, which is then called by ShouldSetFieldStatus and ShouldClearFieldStatus.
// They work approximately the same as the weather functions.
static enum FieldEffectOutcome BenefitsFromElectricTerrain(u32 battler);
static enum FieldEffectOutcome BenefitsFromGrassyTerrain(u32 battler);
static enum FieldEffectOutcome BenefitsFromMistyTerrain(u32 battler);
static enum FieldEffectOutcome BenefitsFromPsychicTerrain(u32 battler);
static enum FieldEffectOutcome BenefitsFromTrickRoom(u32 battler);

bool32 WeatherChecker(u32 battler, u32 weather, enum FieldEffectOutcome desiredResult)
{
    if (IsWeatherActive(B_WEATHER_PRIMAL_ANY) != WEATHER_INACTIVE)
        return (FIELD_EFFECT_BLOCKED == desiredResult);

    enum FieldEffectOutcome result = FIELD_EFFECT_NEUTRAL;
    enum FieldEffectOutcome firstResult = FIELD_EFFECT_NEUTRAL;

    u32 i;
    u32 battlersOnSide = 1;

    if (HasPartner(battler))
        battlersOnSide = 2;

    for (i = 0; i < battlersOnSide; i++)
    {
        if (weather & B_WEATHER_RAIN)
            result = BenefitsFromRain(battler);
        else if (weather & B_WEATHER_SUN)
            result = BenefitsFromSun(battler);
        else if (weather & B_WEATHER_SANDSTORM)
            result = BenefitsFromSandstorm(battler);
        else if (weather & B_WEATHER_ICY_ANY)
            result = BenefitsFromHailOrSnow(battler, weather);

        battler = BATTLE_PARTNER(battler);

        if (result != FIELD_EFFECT_NEUTRAL)
        {
            if (weather & B_WEATHER_DAMAGING_ANY && i == 0 && battlersOnSide == 2)
                firstResult = result;
        }
    }
    if (firstResult != FIELD_EFFECT_NEUTRAL)
        return (firstResult == result) && (result == desiredResult);
    return (result == desiredResult);
}

bool32 FieldStatusChecker(u32 battler, u32 fieldStatus, enum FieldEffectOutcome desiredResult)
{
    enum FieldEffectOutcome result = FIELD_EFFECT_NEUTRAL;
    enum FieldEffectOutcome firstResult = FIELD_EFFECT_NEUTRAL;
    u32 i;

    u32 battlersOnSide = 1;

    if (HasPartner(battler))
        battlersOnSide = 2;

    for (i = 0; i < battlersOnSide; i++)
    {
        // terrains
        if (fieldStatus & STATUS_FIELD_ELECTRIC_TERRAIN)
            result = BenefitsFromElectricTerrain(battler);
        if (fieldStatus & STATUS_FIELD_GRASSY_TERRAIN)
            result = BenefitsFromGrassyTerrain(battler);
        if (fieldStatus & STATUS_FIELD_MISTY_TERRAIN)
            result = BenefitsFromMistyTerrain(battler);
        if (fieldStatus & STATUS_FIELD_PSYCHIC_TERRAIN)
            result = BenefitsFromPsychicTerrain(battler);

        // other field statuses
        if (fieldStatus & STATUS_FIELD_TRICK_ROOM)
            result = BenefitsFromTrickRoom(battler);

        battler = BATTLE_PARTNER(battler);

        if (result != FIELD_EFFECT_NEUTRAL)
        {
            // Trick room wants both pokemon to agree, not just one
            if (fieldStatus & STATUS_FIELD_TRICK_ROOM && i == 0 && battlersOnSide == 2)
                firstResult = result;
        }
    }
    if (firstResult != FIELD_EFFECT_NEUTRAL)
        return (firstResult == result) && (result == desiredResult);
    return (result == desiredResult);
}

static bool32 DoesAbilityBenefitFromWeather(u32 ability, u32 weather)
{
    switch (ability)
    {
    case ABILITY_FORECAST:
        return (weather & (B_WEATHER_RAIN | B_WEATHER_SUN | B_WEATHER_ICY_ANY));
    case ABILITY_MAGIC_GUARD:
    case ABILITY_OVERCOAT:
        return (weather & B_WEATHER_DAMAGING_ANY);
    case ABILITY_SAND_FORCE:
    case ABILITY_SAND_RUSH:
    case ABILITY_SAND_VEIL:
        return (weather & B_WEATHER_SANDSTORM);
    case ABILITY_ICE_BODY:
    case ABILITY_ICE_FACE:
    case ABILITY_SNOW_CLOAK:
        return (weather & B_WEATHER_ICY_ANY);
    case ABILITY_SLUSH_RUSH:
        return (weather & B_WEATHER_SNOW);
    case ABILITY_DRY_SKIN:
    case ABILITY_HYDRATION:
    case ABILITY_RAIN_DISH:
    case ABILITY_SWIFT_SWIM:
        return (weather & B_WEATHER_RAIN);
    case ABILITY_CHLOROPHYLL:
    case ABILITY_FLOWER_GIFT:
    case ABILITY_HARVEST:
    case ABILITY_LEAF_GUARD:
    case ABILITY_ORICHALCUM_PULSE:
    case ABILITY_PROTOSYNTHESIS:
    case ABILITY_SOLAR_POWER:
        return (weather & B_WEATHER_SUN);
    default:
        break;
    }
    return FALSE;
}

static bool32 DoesAbilityBenefitFromFieldStatus(u32 ability, u32 fieldStatus)
{
    switch (ability)
    {
    case ABILITY_MIMICRY:
        return (fieldStatus & STATUS_FIELD_TERRAIN_ANY);
    case ABILITY_HADRON_ENGINE:
    case ABILITY_QUARK_DRIVE:
    case ABILITY_SURGE_SURFER:
        return (fieldStatus & STATUS_FIELD_ELECTRIC_TERRAIN);
    case ABILITY_GRASS_PELT:
        return (fieldStatus & STATUS_FIELD_GRASSY_TERRAIN);
    // no abilities inherently benefit from Misty or Psychic Terrains
    // return (fieldStatus & STATUS_FIELD_MISTY_TERRAIN);
    // return (fieldStatus & STATUS_FIELD_PSYCHIC_TERRAIN);
    default:
        break;
    }
    return FALSE;
}

static bool32 IsLightSensitiveMove(u32 move)
{
    switch (GetMoveEffect(move))
    {
    case EFFECT_SOLAR_BEAM:
    case EFFECT_MORNING_SUN:
    case EFFECT_SYNTHESIS:
    case EFFECT_MOONLIGHT:
    case EFFECT_GROWTH:
        return TRUE;
    default:
        return FALSE;
    }
}

static bool32 HasLightSensitiveMove(u32 battler)
{
    s32 i;
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && IsLightSensitiveMove(moves[i]))
            return TRUE;
    }

    return FALSE;
}

// Sun
// Utility Umbrella does NOT block Ancient Pokemon from their stat boosts.
static enum FieldEffectOutcome BenefitsFromSun(u32 battler)
{
    u32 ability = gAiLogicData->abilities[battler];

    if (gAiLogicData->holdEffects[battler] == HOLD_EFFECT_UTILITY_UMBRELLA)
    {
        if (ability == ABILITY_ORICHALCUM_PULSE || ability == ABILITY_PROTOSYNTHESIS)
            return FIELD_EFFECT_POSITIVE;
        else
            return FIELD_EFFECT_NEUTRAL;
    }

    if (DoesAbilityBenefitFromWeather(ability, B_WEATHER_SUN)
    || HasLightSensitiveMove(battler)
    || HasDamagingMoveOfType(battler, TYPE_FIRE)
    || HasMoveWithEffect(battler, EFFECT_HYDRO_STEAM))
        return FIELD_EFFECT_POSITIVE;

    if (HasMoveWithFlag(battler, MoveHas50AccuracyInSun) || HasDamagingMoveOfType(battler, TYPE_WATER) || gAiLogicData->abilities[battler] == ABILITY_DRY_SKIN)
        return FIELD_EFFECT_NEGATIVE;

    return FIELD_EFFECT_NEUTRAL;
}

// Sandstorm
static enum FieldEffectOutcome BenefitsFromSandstorm(u32 battler)
{
    if (DoesAbilityBenefitFromWeather(gAiLogicData->abilities[battler], B_WEATHER_SANDSTORM)
     || IS_BATTLER_OF_TYPE(battler, TYPE_ROCK))
        return FIELD_EFFECT_POSITIVE;

    if (gAiLogicData->holdEffects[battler] == HOLD_EFFECT_SAFETY_GOGGLES || IS_BATTLER_ANY_TYPE(battler, TYPE_ROCK, TYPE_GROUND, TYPE_STEEL))
    {
        if (!(IS_BATTLER_ANY_TYPE(FOE(battler), TYPE_ROCK, TYPE_GROUND, TYPE_STEEL))
         || gAiLogicData->holdEffects[FOE(battler)] == HOLD_EFFECT_SAFETY_GOGGLES
         || DoesAbilityBenefitFromWeather(gAiLogicData->abilities[FOE(battler)], B_WEATHER_SANDSTORM))
            return FIELD_EFFECT_POSITIVE;
        else
            return FIELD_EFFECT_NEUTRAL;
    }

    return FIELD_EFFECT_NEGATIVE;
}

// Hail or Snow
static enum FieldEffectOutcome BenefitsFromHailOrSnow(u32 battler, u32 weather)
{
    if (DoesAbilityBenefitFromWeather(gAiLogicData->abilities[battler], weather)
     || IS_BATTLER_OF_TYPE(battler, TYPE_ICE)
     || HasMoveWithFlag(battler, MoveAlwaysHitsInHailSnow)
     || HasBattlerSideMoveWithEffect(battler, EFFECT_AURORA_VEIL))
        return FIELD_EFFECT_POSITIVE;

    if ((weather & B_WEATHER_DAMAGING_ANY) && gAiLogicData->holdEffects[battler] != HOLD_EFFECT_SAFETY_GOGGLES)
        return FIELD_EFFECT_NEGATIVE;

    if (HasLightSensitiveMove(battler))
        return FIELD_EFFECT_NEGATIVE;

    if (HasMoveWithFlag(FOE(battler), MoveAlwaysHitsInHailSnow))
        return FIELD_EFFECT_NEGATIVE;

    return FIELD_EFFECT_NEUTRAL;
}

// Rain
static enum FieldEffectOutcome BenefitsFromRain(u32 battler)
{
    if (gAiLogicData->holdEffects[battler] == HOLD_EFFECT_UTILITY_UMBRELLA)
        return FIELD_EFFECT_NEUTRAL;

    if (DoesAbilityBenefitFromWeather(gAiLogicData->abilities[battler], B_WEATHER_RAIN)
      || HasMoveWithFlag(battler, MoveAlwaysHitsInRain)
      || HasDamagingMoveOfType(battler, TYPE_WATER))
        return FIELD_EFFECT_POSITIVE;

    if (HasLightSensitiveMove(battler) || HasDamagingMoveOfType(battler, TYPE_FIRE))
        return FIELD_EFFECT_NEGATIVE;

    if (HasMoveWithFlag(FOE(battler), MoveAlwaysHitsInRain))
        return FIELD_EFFECT_NEGATIVE;

    return FIELD_EFFECT_NEUTRAL;
}

//TODO: when is electric terrain bad?
static enum FieldEffectOutcome BenefitsFromElectricTerrain(u32 battler)
{
    if (DoesAbilityBenefitFromFieldStatus(gAiLogicData->abilities[battler], STATUS_FIELD_ELECTRIC_TERRAIN))
        return FIELD_EFFECT_POSITIVE;

    if (HasMoveWithEffect(battler, EFFECT_RISING_VOLTAGE))
        return FIELD_EFFECT_POSITIVE;

    if (HasMoveWithEffect(FOE(battler), EFFECT_REST) && IsBattlerGrounded(FOE(battler)))
        return FIELD_EFFECT_POSITIVE;

    bool32 grounded = IsBattlerGrounded(battler);
    if (grounded && HasBattlerSideMoveWithAdditionalEffect(FOE(battler), MOVE_EFFECT_SLEEP))
        return FIELD_EFFECT_POSITIVE;

    if (grounded && ((gBattleMons[battler].status1 & STATUS1_SLEEP)
    || gBattleMons[battler].volatiles.yawn
    || HasDamagingMoveOfType(battler, TYPE_ELECTRIC)))
        return FIELD_EFFECT_POSITIVE;

    if (HasBattlerSideMoveWithEffect(FOE(battler), EFFECT_RISING_VOLTAGE))
        return FIELD_EFFECT_NEGATIVE;


    return FIELD_EFFECT_NEUTRAL;
}

//TODO: when is grassy terrain bad?
static enum FieldEffectOutcome BenefitsFromGrassyTerrain(u32 battler)
{
    if (DoesAbilityBenefitFromFieldStatus(gAiLogicData->abilities[battler], STATUS_FIELD_GRASSY_TERRAIN))
        return FIELD_EFFECT_POSITIVE;

    if (HasMoveWithEffect(battler, EFFECT_GRASSY_GLIDE))
        return FIELD_EFFECT_POSITIVE;
    if (HasMoveWithAdditionalEffect(battler, MOVE_EFFECT_FLORAL_HEALING))
        return FIELD_EFFECT_POSITIVE;

    bool32 grounded = IsBattlerGrounded(battler);

    // Weaken spamming Earthquake, Magnitude, and Bulldoze.
    if (grounded && (HasBattlerSideMoveWithEffect(FOE(battler), EFFECT_EARTHQUAKE)
    || HasBattlerSideMoveWithEffect(FOE(battler), EFFECT_MAGNITUDE)))
        return FIELD_EFFECT_POSITIVE;

    if (grounded && HasDamagingMoveOfType(battler, TYPE_GRASS))
        return FIELD_EFFECT_POSITIVE;

    if (HasBattlerSideMoveWithEffect(FOE(battler), EFFECT_GRASSY_GLIDE))
        return FIELD_EFFECT_NEGATIVE;


    return FIELD_EFFECT_NEUTRAL;
}

//TODO: when is misty terrain bad?
static enum FieldEffectOutcome BenefitsFromMistyTerrain(u32 battler)
{
    if (DoesAbilityBenefitFromFieldStatus(gAiLogicData->abilities[battler], STATUS_FIELD_MISTY_TERRAIN))
        return FIELD_EFFECT_POSITIVE;

    if (HasBattlerSideMoveWithEffect(battler, EFFECT_MISTY_EXPLOSION))
        return FIELD_EFFECT_POSITIVE;

    bool32 grounded = IsBattlerGrounded(battler);
    bool32 allyGrounded = FALSE;
    if (HasPartner(battler))
        allyGrounded = IsBattlerGrounded(BATTLE_PARTNER(battler));

    if (HasMoveWithEffect(FOE(battler), EFFECT_REST) && IsBattlerGrounded(FOE(battler)))
        return FIELD_EFFECT_POSITIVE;

    // harass dragons
    if ((grounded || allyGrounded) 
     && (HasDamagingMoveOfType(FOE(battler), TYPE_DRAGON) || HasDamagingMoveOfType(BATTLE_PARTNER(FOE(battler)), TYPE_DRAGON)))
        return FIELD_EFFECT_POSITIVE;

    if ((grounded || allyGrounded) 
     && (HasNonVolatileMoveEffect(FOE(battler), MOVE_EFFECT_SLEEP) || HasNonVolatileMoveEffect(BATTLE_PARTNER(FOE(battler)), MOVE_EFFECT_SLEEP)))
        return FIELD_EFFECT_POSITIVE;

    if (grounded && (gBattleMons[battler].status1 & STATUS1_SLEEP || gBattleMons[battler].volatiles.yawn))
        return FIELD_EFFECT_POSITIVE;

    return FIELD_EFFECT_NEUTRAL;
}

//TODO: when is Psychic Terrain negative?
static enum FieldEffectOutcome BenefitsFromPsychicTerrain(u32 battler)
{
    if (DoesAbilityBenefitFromFieldStatus(gAiLogicData->abilities[battler], STATUS_FIELD_PSYCHIC_TERRAIN))
        return FIELD_EFFECT_POSITIVE;

    if (HasMoveWithEffect(battler, EFFECT_EXPANDING_FORCE))
        return FIELD_EFFECT_POSITIVE;

    bool32 grounded = IsBattlerGrounded(battler);
    bool32 allyGrounded = FALSE;
    if (HasPartner(battler))
        allyGrounded = IsBattlerGrounded(BATTLE_PARTNER(battler));

    // don't bother if we're not grounded
    if (grounded || allyGrounded)
    {
        // harass priority
        if (HasBattlerSideAbility(FOE(battler), ABILITY_GALE_WINGS, gAiLogicData)
         || HasBattlerSideAbility(FOE(battler), ABILITY_TRIAGE, gAiLogicData)
         || HasBattlerSideAbility(FOE(battler), ABILITY_PRANKSTER, gAiLogicData))
            return FIELD_EFFECT_POSITIVE;
    }

    if (grounded && (HasDamagingMoveOfType(battler, TYPE_PSYCHIC)))
        return FIELD_EFFECT_POSITIVE;

    if (HasBattlerSideMoveWithEffect(FOE(battler), EFFECT_EXPANDING_FORCE))
        return FIELD_EFFECT_NEGATIVE;

    if (HasBattlerSideAbility(battler, ABILITY_GALE_WINGS, gAiLogicData)
     || HasBattlerSideAbility(battler, ABILITY_TRIAGE, gAiLogicData)
     || HasBattlerSideAbility(battler, ABILITY_PRANKSTER, gAiLogicData))
        return FIELD_EFFECT_NEGATIVE;

    return FIELD_EFFECT_NEUTRAL;
}

static enum FieldEffectOutcome BenefitsFromTrickRoom(u32 battler)
{
    // If we're in singles, we literally only care about speed.
    if (IsBattle1v1())
    {
        if (gAiLogicData->speedStats[battler] < gAiLogicData->speedStats[FOE(battler)])
            return FIELD_EFFECT_POSITIVE;
        // If we tie, we shouldn't change trick room state.
        else if (gAiLogicData->speedStats[battler] == gAiLogicData->speedStats[FOE(battler)])
            return FIELD_EFFECT_NEUTRAL; 
        else
            return FIELD_EFFECT_NEGATIVE;
    }

    // First checking if we have enough priority for one pokemon to disregard Trick Room entirely.
    if (!(gFieldStatuses & STATUS_FIELD_PSYCHIC_TERRAIN))
    {
        u16* aiMoves = GetMovesArray(battler);
        for (int i = 0; i < MAX_MON_MOVES; i++)
        {
            u16 move = aiMoves[i];
            if (GetBattleMovePriority(battler, gAiLogicData->abilities[battler], move) > 0 && !(GetMovePriority(move) > 0 && IsBattleMoveStatus(move)))
            {
                return FIELD_EFFECT_POSITIVE;
            }
        }
    }

    // If we are faster or tie, we don't want trick room.
    if ((gAiLogicData->speedStats[battler] >= gAiLogicData->speedStats[FOE(battler)]) || (gAiLogicData->speedStats[battler] >= gAiLogicData->speedStats[BATTLE_PARTNER(FOE(battler))]))
        return FIELD_EFFECT_NEGATIVE;

    return FIELD_EFFECT_POSITIVE;
}


