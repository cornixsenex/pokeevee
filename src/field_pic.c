#include "global.h"
#include "event_data.h"
#include "decompress.h"
#include "sprite.h"

#define TAG_PIC 0x3333

struct Pic
{
    const u32 *gfx;
    const u16 *pal;
    u8 shape;
    u8 size;
    const union AnimCmd *const *anims;
    SpriteCallback callback;
};

// These are example entries.
static const union AnimCmd sAnimCmdLoop[] =
{
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(64, 50),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnims[] =
{
    sAnimCmdLoop
};

//Altaria Test Example = 0
static const u32 sPic1Gfx[] = INCBIN_U32("graphics/pokemon/altaria/anim_front.4bpp.lz");
static const u16 sPic1Pal[] = INCBIN_U16("graphics/pokemon/altaria/normal.gbapal");

//Duck Test Example = 1
static const u32 sPic2Gfx[] = INCBIN_U32("graphics/battle_anims/sprites/duck.4bpp.lz");
static const u16 sPic2Pal[] = INCBIN_U16("graphics/battle_anims/sprites/duck.gbapal");

//Grandma - Bad OW Sprite shit = 2
static const u32 sPic3Gfx[] = INCBIN_U32("graphics/object_events/pics/people/grandma.4bpp.lz");
static const u16 sPic3Pal[] = INCBIN_U16("graphics/object_events/palettes/grandma.gbapal");

//Blue Rival Chad Pose = 3
static const u32 sPic4Gfx[] = INCBIN_U32("graphics/trainers/front_pics/blue_1_front_pic.4bpp.lz");
static const u16 sPic4Pal[] = INCBIN_U16("graphics/trainers/palettes/blue.gbapal");

//Leaf Battle = 4
static const u32 sPic5Gfx[] = INCBIN_U32("graphics/trainers/front_pics/leaf.4bpp.lz");
static const u16 sPic5Pal[] = INCBIN_U16("graphics/trainers/front_pics/leaf.gbapal");

//Triathelete M = Leaf's Dad = 5
static const u32 sPic6Gfx[] = INCBIN_U32("graphics/trainers/front_pics/running_triathlete_m.4bpp.lz");
static const u16 sPic6Pal[] = INCBIN_U16("graphics/trainers/front_pics/running_triathlete_m.gbapal");

//Sage = 6
static const u32 sPic7Gfx[] = INCBIN_U32("graphics/trainers/front_pics/elite_four_glacia.4bpp.lz");
static const u16 sPic7Pal[] = INCBIN_U16("graphics/trainers/front_pics/elite_four_glacia.gbapal");

//Blaine = 7
static const u32 sPic8Gfx[] = INCBIN_U32("graphics/trainers/front_pics/blaine_front_pic.4bpp.lz");
static const u16 sPic8Pal[] = INCBIN_U16("graphics/trainers/palettes/blaine.gbapal");

//Noland = 8
static const u32 sPic9Gfx[] = INCBIN_U32("graphics/trainers/front_pics/factory_head_noland.4bpp.lz");
static const u16 sPic9Pal[] = INCBIN_U16("graphics/trainers/front_pics/factory_head_noland.gbapal");

//Maxie = 9
static const u32 sPic10Gfx[] = INCBIN_U32("graphics/trainers/front_pics/magma_leader_maxie.4bpp.lz");
static const u16 sPic10Pal[] = INCBIN_U16("graphics/trainers/front_pics/magma_leader_maxie.gbapal");

//Gio = 10
static const u32 sPic11Gfx[] = INCBIN_U32("graphics/trainers/front_pics/giovanni_front_pic.4bpp.lz");
static const u16 sPic11Pal[] = INCBIN_U16("graphics/trainers/palettes/giovanni.gbapal");

//Mewtwo Armor = 11
static const u32 sPic12Gfx[] = INCBIN_U32("graphics/trainers/front_pics/mewtwo_armor_front_pic.4bpp.lz");
static const u16 sPic12Pal[] = INCBIN_U16("graphics/trainers/palettes/mewtwo_armor.gbapal");

//Cicero - Gentleman2 = 12
static const u32 sPic13Gfx[] = INCBIN_U32("graphics/trainers/front_pics/gentleman2_front_pic.4bpp.lz");
static const u16 sPic13Pal[] = INCBIN_U16("graphics/trainers/palettes/gentleman2.gbapal");

//Soldier = 13
static const u32 sPic14Gfx[] = INCBIN_U32("graphics/trainers/front_pics/soldier_front_pic.4bpp.lz");
static const u16 sPic14Pal[] = INCBIN_U16("graphics/trainers/palettes/soldier.gbapal");

//Lt_Surge = 14
static const u32 sPic15Gfx[] = INCBIN_U32("graphics/trainers/front_pics/lt_surge_front_pic.4bpp.lz");
static const u16 sPic15Pal[] = INCBIN_U16("graphics/trainers/palettes/lt_surge.gbapal");

//Mewtwo = 15
static const u32 sPic16Gfx[] = INCBIN_U32("graphics/pokemon/mewtwo/anim_front.4bpp.lz");
static const u16 sPic16Pal[] = INCBIN_U16("graphics/pokemon/mewtwo/normal.gbapal");

//Rival2 = 16
static const u32 sPic17Gfx[] = INCBIN_U32("graphics/trainers/front_pics/blue2_front_pic.4bpp.lz");
static const u16 sPic17Pal[] = INCBIN_U16("graphics/trainers/palettes/blue2.gbapal");

//Sailor = 17
static const u32 sPic18Gfx[] = INCBIN_U32("graphics/trainers/front_pics/sailor.4bpp.lz");
static const u16 sPic18Pal[] = INCBIN_U16("graphics/trainers/front_pics/sailor.gbapal");

//Youngster = 18
static const u32 sPic19Gfx[] = INCBIN_U32("graphics/trainers/front_pics/youngster.4bpp.lz");
static const u16 sPic19Pal[] = INCBIN_U16("graphics/trainers/front_pics/youngster.gbapal");

//Engineer = 19
static const u32 sPic20Gfx[] = INCBIN_U32("graphics/trainers/front_pics/engineer_front_pic.4bpp.lz");
static const u16 sPic20Pal[] = INCBIN_U16("graphics/trainers/palettes/engineer.gbapal");

//CueBallNoBike = 20
static const u32 sPic21Gfx[] = INCBIN_U32("graphics/trainers/front_pics/cue_ball_no_bike_front_pic.4bpp.lz");
static const u16 sPic21Pal[] = INCBIN_U16("graphics/trainers/palettes/cue_ball.gbapal");

//Archie = 21
static const u32 sPic22Gfx[] = INCBIN_U32("graphics/trainers/front_pics/aqua_leader_archie.4bpp.lz");
static const u16 sPic22Pal[] = INCBIN_U16("graphics/trainers/front_pics/aqua_leader_archie.gbapal");

//Magma M = 22
static const u32 sPic23Gfx[] = INCBIN_U32("graphics/trainers/front_pics/magma_grunt_m.4bpp.lz");
static const u16 sPic23Pal[] = INCBIN_U16("graphics/trainers/front_pics/magma_grunt_m.gbapal");

//Magma F = 23
static const u32 sPic24Gfx[] = INCBIN_U32("graphics/trainers/front_pics/magma_grunt_f.4bpp.lz");
static const u16 sPic24Pal[] = INCBIN_U16("graphics/trainers/front_pics/magma_grunt_f.gbapal");

//Hex Maniac = 24
static const u32 sPic25Gfx[] = INCBIN_U32("graphics/trainers/front_pics/hex_maniac.4bpp.lz");
static const u16 sPic25Pal[] = INCBIN_U16("graphics/trainers/front_pics/hex_maniac.gbapal");

//Juan = 25
static const u32 sPic26Gfx[] = INCBIN_U32("graphics/trainers/front_pics/leader_juan.4bpp.lz");
static const u16 sPic26Pal[] = INCBIN_U16("graphics/trainers/front_pics/leader_juan.gbapal");

//Super Nerd = 26
static const u32 sPic27Gfx[] = INCBIN_U32("graphics/trainers/front_pics/super_nerd_front_pic.4bpp.lz");
static const u16 sPic27Pal[] = INCBIN_U16("graphics/trainers/front_pics/super_nerd_front_pic.gbapal");

//Brandon = 27
static const u32 sPic28Gfx[] = INCBIN_U32("graphics/trainers/front_pics/pyramid_king_brandon.4bpp.lz");
static const u16 sPic28Pal[] = INCBIN_U16("graphics/trainers/front_pics/pyramid_king_brandon.gbapal");

//Lady = 28
static const u32 sPic29Gfx[] = INCBIN_U32("graphics/trainers/front_pics/lady.4bpp.lz");
static const u16 sPic29Pal[] = INCBIN_U16("graphics/trainers/front_pics/lady.gbapal");

//Oak = 29
static const u32 sPic30Gfx[] = INCBIN_U32("graphics/trainers/front_pics/professor_oak_front_pic.4bpp.lz");
static const u16 sPic30Pal[] = INCBIN_U16("graphics/trainers/front_pics/professor_oak_front_pic.gbapal");

//Granny = 30
static const u32 sPic31Gfx[] = INCBIN_U32("graphics/trainers/front_pics/granny_front_pic.4bpp.lz");
static const u16 sPic31Pal[] = INCBIN_U16("graphics/trainers/palettes/granny_front_pic.gbapal");

//Mew = 31
static const u32 sPic32Gfx[] = INCBIN_U32("graphics/pokemon/mew/anim_front.4bpp.lz");
static const u16 sPic32Pal[] = INCBIN_U16("graphics/pokemon/mew/normal.gbapal");

//News People / Interviewer = 32
static const u32 sPic33Gfx[] = INCBIN_U32("graphics/trainers/front_pics/interviewer.4bpp.lz");
static const u16 sPic33Pal[] = INCBIN_U16("graphics/trainers/front_pics/interviewer.gbapal");

//Scott = 33
static const u32 sPic34Gfx[] = INCBIN_U32("graphics/trainers/front_pics/scott.4bpp.lz");
static const u16 sPic34Pal[] = INCBIN_U16("graphics/trainers/palettes/scott.gbapal");

//Misty = 34
static const u32 sPic35Gfx[] = INCBIN_U32("graphics/trainers/front_pics/misty2_front_pic.4bpp.lz");
static const u16 sPic35Pal[] = INCBIN_U16("graphics/trainers/palettes/misty2.gbapal");

//Lenora = 35
static const u32 sPic36Gfx[] = INCBIN_U32("graphics/trainers/front_pics/lenora.4bpp.lz");
static const u16 sPic36Pal[] = INCBIN_U16("graphics/trainers/palettes/lenora.gbapal");

//Cynthia = 36
static const u32 sPic37Gfx[] = INCBIN_U32("graphics/trainers/front_pics/cynthia.4bpp.lz");
static const u16 sPic37Pal[] = INCBIN_U16("graphics/trainers/palettes/cynthia.gbapal");

//Beauty2 = 37
static const u32 sPic38Gfx[] = INCBIN_U32("graphics/trainers/front_pics/beauty2_front_pic.4bpp.lz");
static const u16 sPic38Pal[] = INCBIN_U16("graphics/trainers/palettes/beauty2.gbapal");

//Farmer = 38
static const u32 sPic39Gfx[] = INCBIN_U32("graphics/trainers/front_pics/farmer_m.4bpp.lz");
static const u16 sPic39Pal[] = INCBIN_U16("graphics/trainers/palettes/farmer_m.gbapal");

//Kando = 39
static const u32 sPic40Gfx[] = INCBIN_U32("graphics/trainers/front_pics/kando.4bpp.lz");
static const u16 sPic40Pal[] = INCBIN_U16("graphics/trainers/palettes/kando.gbapal");

//Steven = 40
static const u32 sPic41Gfx[] = INCBIN_U32("graphics/trainers/front_pics/steven.4bpp.lz");
static const u16 sPic41Pal[] = INCBIN_U16("graphics/trainers/palettes/steven.gbapal");


/* And this is an example script.


FieldPicExample_2pics:
	load_field_pic 0, 190, 98, VAR_0x8008
	load_field_pic 1, 32, 112, VAR_0x8009
	msgbox EverGrandeCity_PokemonLeague_1F_Text_229787, MSGBOX_DEFAULT
	destroy_field_pic 0, VAR_0x8008
	destroy_field_pic 1, VAR_0x8009
	return

    @ Some arguments can be omitted
FieldPicExample_1pic:
	load_field_pic 0, 190, 98
	msgbox EverGrandeCity_PokemonLeague_1F_Text_229787, MSGBOX_DEFAULT
	destroy_field_pic 0
	return

*/

static const struct Pic sPics[] =
{
	//Alteria
    {sPic1Gfx, sPic1Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64), sAnims},
	//Duck
    {sPic2Gfx, sPic2Pal, SPRITE_SHAPE(16x16), SPRITE_SIZE(16x16)},
	//Gma shit
    {sPic3Gfx, sPic3Pal, SPRITE_SHAPE(16x32), SPRITE_SIZE(16x32)},
	//Blue - Chad Pose
    {sPic4Gfx, sPic4Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Leaf
    {sPic5Gfx, sPic5Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Leafs Dad Triathlete
    {sPic6Gfx, sPic6Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},	
	//SAGE
    {sPic7Gfx, sPic7Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Blaine
    {sPic8Gfx, sPic8Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Indy = Noland
    {sPic9Gfx, sPic9Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Maxie
    {sPic10Gfx, sPic10Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Gio
    {sPic11Gfx, sPic11Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Mewtwo Armor
	{sPic12Gfx, sPic12Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Cicero
    {sPic13Gfx, sPic13Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Soldier
    {sPic14Gfx, sPic14Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Lt Surge
    {sPic15Gfx, sPic15Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Mewtwo
    //{sPic16Gfx, sPic16Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64), sAnims},
    {sPic16Gfx, sPic16Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//BLUE2 - Manic Pose
    {sPic17Gfx, sPic17Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Sailor
    {sPic18Gfx, sPic18Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Youngster
    {sPic19Gfx, sPic19Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Engineer
    {sPic20Gfx, sPic20Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Cue Ball No Bike
    {sPic21Gfx, sPic21Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Archie
    {sPic22Gfx, sPic22Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Magma M
    {sPic23Gfx, sPic23Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Magam F
    {sPic24Gfx, sPic24Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Hex Maniac
    {sPic25Gfx, sPic25Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Juan
    {sPic26Gfx, sPic26Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Super Nerd
    {sPic27Gfx, sPic27Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//BrandOn
    {sPic28Gfx, sPic28Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Lady
    {sPic29Gfx, sPic29Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Oak
    {sPic30Gfx, sPic30Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Granny
    {sPic31Gfx, sPic31Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Mew
    {sPic32Gfx, sPic32Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Interviewer 
    {sPic33Gfx, sPic33Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Scott 
    {sPic34Gfx, sPic34Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Misty
    {sPic35Gfx, sPic35Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Lenora
    {sPic36Gfx, sPic36Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Cynthia
    {sPic37Gfx, sPic37Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Beauty2
    {sPic38Gfx, sPic38Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Farmer
    {sPic39Gfx, sPic39Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Kando
    {sPic40Gfx, sPic40Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
	//Steven
    {sPic41Gfx, sPic41Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
};

static EWRAM_DATA u8 sLastPicId = 0;

void LoadFieldPic(void)
{
    struct CompressedSpriteSheet sheet;
    struct SpritePalette palSheet;
    struct SpriteTemplate spriteTempl;
    struct OamData oam = {0};
    u32 id = VarGet(gSpecialVar_0x8004);
    s16 x = (s16)(VarGet(gSpecialVar_0x8005));
    s16 y = (s16)(VarGet(gSpecialVar_0x8006));

    gSpecialVar_Result = 0xFF;

    if (id >= ARRAY_COUNT(sPics))
        return;

    if (GetSpriteTileStartByTag(TAG_PIC + id) == 0xFFFF)
    {
        const u8 *gfxPtr = (const u8*)(sPics[id].gfx); // To get the size, the pointer needs to be casted to u8.

        sheet.tag = TAG_PIC + id;
        sheet.data = sPics[id].gfx;
        sheet.size = (gfxPtr[3] << 16) | (gfxPtr[2] << 8) | gfxPtr[1];

        LoadCompressedSpriteSheet(&sheet);
    }

    if (IndexOfSpritePaletteTag(TAG_PIC + id) == 0xFF)
    {
        palSheet.tag = TAG_PIC + id;
        palSheet.data = sPics[id].pal;

        LoadSpritePalette(&palSheet);
    }

    oam.size = sPics[id].size;
    oam.shape = sPics[id].shape;
    oam.priority = 1;

    spriteTempl = gDummySpriteTemplate;
    spriteTempl.oam = &oam;
    spriteTempl.paletteTag = spriteTempl.tileTag = TAG_PIC + id;
    if (sPics[id].callback)
        spriteTempl.callback = sPics[id].callback;
    if (sPics[id].anims)
        spriteTempl.anims = sPics[id].anims;

    sLastPicId = CreateSprite(&spriteTempl, x, y, 0);
    if (sLastPicId == MAX_SPRITES)
        return;

    gSpecialVar_Result = sLastPicId;
}

void HideFieldPic(void)
{
    u32 spriteId = VarGet(gSpecialVar_0x8004);

    if (spriteId == 0xFF)
        gSprites[sLastPicId].invisible = TRUE;
    else
        gSprites[spriteId].invisible = TRUE;
}

void ShowFieldPic(void)
{
    u32 spriteId = VarGet(gSpecialVar_0x8004);

    if (spriteId == 0xFF)
        gSprites[sLastPicId].invisible = FALSE;
    else
        gSprites[spriteId].invisible = FALSE;
}

void ChangeFieldPicFrame(void)
{
    u32 num = VarGet(gSpecialVar_0x8004);
    u32 spriteId = VarGet(gSpecialVar_0x8005);

    if (spriteId == 0xFF)
        StartSpriteAnim(&gSprites[sLastPicId], num);
    else
        StartSpriteAnim(&gSprites[spriteId], num);
}

void DestroyFieldPic(void)
{
    u32 id = VarGet(gSpecialVar_0x8004);
    u32 spriteId = VarGet(gSpecialVar_0x8005);

    if (spriteId == 0xFF)
        DestroySprite(&gSprites[sLastPicId]);
    else
        DestroySprite(&gSprites[spriteId]);

    if (id != 0xFF)
    {
        FreeSpritePaletteByTag(TAG_PIC + id);
        FreeSpriteTilesByTag(TAG_PIC + id);
    }
}
