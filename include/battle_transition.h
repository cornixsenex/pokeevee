#ifndef GUARD_BATTLE_TRANSITION_H
#define GUARD_BATTLE_TRANSITION_H

#include "constants/battle_transition.h"

void BattleTransition_StartOnField(u8 transitionId);
void BattleTransition_Start(u8 transitionId);
bool8 IsBattleTransitionDone(void);
bool8 FldEff_PokeballTrail(void);
void Task_BattleTransition_Intro(u8 taskId);
void GetBg0TilesDst(u16 **tilemap, u16 **tileset);

extern const struct SpritePalette gSpritePalette_Pokeball;

//enum {
//    MUGSHOT_SIDNEY,
//    MUGSHOT_PHOEBE,
//    MUGSHOT_GLACIA,
//    MUGSHOT_DRAKE,
//    MUGSHOT_CHAMPION,
//    MUGSHOTS_COUNT
//};

enum {
    B_TRANSITION_BLUR,
    B_TRANSITION_SWIRL,
    B_TRANSITION_SHUFFLE,
    B_TRANSITION_BIG_POKEBALL,
    B_TRANSITION_POKEBALLS_TRAIL,
    B_TRANSITION_CLOCKWISE_WIPE,
    B_TRANSITION_RIPPLE,
    B_TRANSITION_WAVE,
    B_TRANSITION_SLICE,
    B_TRANSITION_WHITE_BARS_FADE,
    B_TRANSITION_GRID_SQUARES,
    B_TRANSITION_ANGLED_WIPES,
    B_TRANSITION_SIDNEY,
    B_TRANSITION_PHOEBE,
    B_TRANSITION_GLACIA,
    B_TRANSITION_DRAKE,
    B_TRANSITION_CHAMPION,
    B_TRANSITION_AQUA, // Here below added in Emerald
    B_TRANSITION_MAGMA,
    B_TRANSITION_REGICE,
    B_TRANSITION_REGISTEEL,
    B_TRANSITION_REGIROCK,
    B_TRANSITION_KYOGRE,
    B_TRANSITION_GROUDON,
    B_TRANSITION_RAYQUAZA,
    B_TRANSITION_SHRED_SPLIT,
    B_TRANSITION_BLACKHOLE,
    B_TRANSITION_BLACKHOLE_PULSATE,
    B_TRANSITION_RECTANGULAR_SPIRAL,
    B_TRANSITION_FRONTIER_LOGO_WIGGLE,
    B_TRANSITION_FRONTIER_LOGO_WAVE,
    B_TRANSITION_FRONTIER_SQUARES,
    B_TRANSITION_FRONTIER_SQUARES_SCROLL,
    B_TRANSITION_FRONTIER_SQUARES_SPIRAL,
    B_TRANSITION_FRONTIER_CIRCLES_MEET,
    B_TRANSITION_FRONTIER_CIRCLES_CROSS,
    B_TRANSITION_FRONTIER_CIRCLES_ASYMMETRIC_SPIRAL,
    B_TRANSITION_FRONTIER_CIRCLES_SYMMETRIC_SPIRAL,
    B_TRANSITION_FRONTIER_CIRCLES_MEET_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_CROSS_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_ASYMMETRIC_SPIRAL_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_SYMMETRIC_SPIRAL_IN_SEQ,
    B_TRANSITION_COUNT
};

#define B_TRANSITION_BLUR                                      0
#define B_TRANSITION_SWIRL                                     1
#define B_TRANSITION_SHUFFLE                                   2
#define B_TRANSITION_BIG_POKEBALL                              3
#define B_TRANSITION_POKEBALLS_TRAIL                           4
#define B_TRANSITION_CLOCKWISE_BLACKFADE                       5
#define B_TRANSITION_RIPPLE                                    6
#define B_TRANSITION_WAVE                                      7
#define B_TRANSITION_SLICE                                     8
#define B_TRANSITION_WHITEFADE                                 9
#define B_TRANSITION_GRID_SQUARES                              10
#define B_TRANSITION_SHARDS                                    11
#define B_TRANSITION_SIDNEY                                    12
#define B_TRANSITION_PHOEBE                                    13
#define B_TRANSITION_GLACIA                                    14
#define B_TRANSITION_DRAKE                                     15
#define B_TRANSITION_CHAMPION                                  16
// added in Emerald
#define B_TRANSITION_AQUA                                      17
#define B_TRANSITION_MAGMA                                     18
#define B_TRANSITION_REGICE                                    19
#define B_TRANSITION_REGISTEEL                                 20
#define B_TRANSITION_REGIROCK                                  21
#define B_TRANSITION_KYOGRE                                    22
#define B_TRANSITION_GROUDON                                   23
#define B_TRANSITION_RAYQUAZA                                  24
#define B_TRANSITION_SHRED_SPLIT                               25
#define B_TRANSITION_BLACKHOLE1                                26
#define B_TRANSITION_BLACKHOLE2                                27
#define B_TRANSITION_RECTANGULAR_SPIRAL                        28
#define B_TRANSITION_FRONTIER_LOGO_WIGGLE                      29
#define B_TRANSITION_FRONTIER_LOGO_WAVE                        30
#define B_TRANSITION_FRONTIER_SQUARES                          31
#define B_TRANSITION_FRONTIER_SQUARES_SCROLL                   32
#define B_TRANSITION_FRONTIER_SQUARES_SPIRAL                   33
#define B_TRANSITION_FRONTIER_CIRCLES_MEET                     34
#define B_TRANSITION_FRONTIER_CIRCLES_CROSS                    35
#define B_TRANSITION_FRONTIER_CIRCLES_ASYMMETRIC_SPIRAL        36
#define B_TRANSITION_FRONTIER_CIRCLES_SYMMETRIC_SPIRAL         37
#define B_TRANSITION_FRONTIER_CIRCLES_MEET_IN_SEQ              38
#define B_TRANSITION_FRONTIER_CIRCLES_CROSS_IN_SEQ             39
#define B_TRANSITION_FRONTIER_CIRCLES_ASYMMETRIC_SPIRAL_IN_SEQ 40
#define B_TRANSITION_FRONTIER_CIRCLES_SYMMETRIC_SPIRAL_IN_SEQ  41
#define B_TRANSITION_MUGSHOT                                   42
#define B_TRANSITION_COUNT                                     43
// IDs for GetSpecialBattleTransition
enum {
    B_TRANSITION_GROUP_B_TOWER,
    B_TRANSITION_GROUP_B_DOME = 3,
    B_TRANSITION_GROUP_B_PALACE,
    B_TRANSITION_GROUP_B_ARENA,
    B_TRANSITION_GROUP_B_FACTORY,
    B_TRANSITION_GROUP_B_PIKE,
    B_TRANSITION_GROUP_B_PYRAMID = 10,
    B_TRANSITION_GROUP_TRAINER_HILL,
    B_TRANSITION_GROUP_SECRET_BASE,
    B_TRANSITION_GROUP_E_READER,
};

#endif // GUARD_BATTLE_TRANSITION_H
