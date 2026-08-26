//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_FRONT_BRENDAN,
#line 5
        .gender = TRAINER_GENDER_MALE,
#line 6
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7
        .trainerBackPic = TRAINER_PIC_BACK_BRENDAN,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 9
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 10
        .trainerName = _("STEVEN"),
#line 11
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12
        .trainerPic = TRAINER_PIC_FRONT_STEVEN,
#line 13
        .gender = TRAINER_GENDER_MALE,
#line 14
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 16
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 15
        .trainerBackPic = TRAINER_PIC_BACK_STEVEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 18
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 22
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 21
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 20
            .lvl = 42,
#line 19
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 23
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 28
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 32
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 31
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 30
            .lvl = 43,
#line 29
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 33
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 38
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 42
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 41
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 40
            .lvl = 44,
#line 39
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 43
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 48
    [DIFFICULTY_NORMAL][PARTNER_LEAF] =
    {
#line 49
        .trainerName = _("{B_LEAF_NAME}"),
#line 50
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 51
        .trainerPic = TRAINER_PIC_FRONT_LEAF,
#line 52
        .gender = TRAINER_GENDER_FEMALE,
#line 53
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 55
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 54
        .trainerBackPic = TRAINER_PIC_BACK_LEAF,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 57
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 60
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 59
            .ability = ABILITY_CUTE_CHARM,
#line 58
            .lvl = 5,
#line 61
            .friendship = 255,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 62
                MOVE_SING,
                MOVE_DEFENSE_CURL,
                MOVE_CHARM,
                MOVE_POUND,
            },
            },
        },
    },
#line 67
    [DIFFICULTY_NORMAL][PARTNER_AENEAS] =
    {
#line 68
        .trainerName = _("Aeneas"),
#line 69
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 70
        .trainerPic = TRAINER_PIC_FRONT_STEVEN,
#line 71
        .gender = TRAINER_GENDER_MALE,
#line 72
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 74
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 73
        .trainerBackPic = TRAINER_PIC_BACK_STEVEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 76
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 80
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 79
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 78
            .lvl = 42,
#line 77
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 81
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 86
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 90
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 89
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 88
            .lvl = 43,
#line 87
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 91
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 96
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 100
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 99
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 98
            .lvl = 44,
#line 97
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 101
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
