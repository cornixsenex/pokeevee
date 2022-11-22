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

//Altaria Test Example
static const u32 sPic1Gfx[] = INCBIN_U32("graphics/pokemon/altaria/anim_front.4bpp.lz");
static const u16 sPic1Pal[] = INCBIN_U16("graphics/pokemon/altaria/normal.gbapal");

//Duck Test Example
static const u32 sPic2Gfx[] = INCBIN_U32("graphics/battle_anims/sprites/duck.4bpp.lz");
static const u16 sPic2Pal[] = INCBIN_U16("graphics/battle_anims/sprites/duck.gbapal");

//Grandma - Bad OW Sprite shit
static const u32 sPic3Gfx[] = INCBIN_U32("graphics/object_events/pics/people/grandma.4bpp.lz");
static const u16 sPic3Pal[] = INCBIN_U16("graphics/object_events/palettes/grandma.gbapal");

//Blue Rival Chad Pose = 3
static const u32 sPic4Gfx[] = INCBIN_U32("graphics/trainers/front_pics/blue_1_front_pic.4bpp.lz");
static const u16 sPic4Pal[] = INCBIN_U16("graphics/trainers/palettes/blue.gbapal");

//Leaf Battle = 4
static const u32 sPic5Gfx[] = INCBIN_U32("graphics/trainers/front_pics/leaf.4bpp.lz");
static const u16 sPic5Pal[] = INCBIN_U16("graphics/trainers/front_pics/leaf.gbapal");

//Leaf's Dad = 5
static const u32 sPic6Gfx[] = INCBIN_U32("graphics/trainers/front_pics/running_triathlete_m.4bpp.lz");
static const u16 sPic6Pal[] = INCBIN_U16("graphics/trainers/front_pics/running_triathlete_m.gbapal");

//Sage = 6
static const u32 sPic7Gfx[] = INCBIN_U32("graphics/trainers/front_pics/elite_four_glacia.4bpp.lz");
static const u16 sPic7Pal[] = INCBIN_U16("graphics/trainers/front_pics/elite_four_glacia.gbapal");

//Blaine = 7
static const u32 sPic8Gfx[] = INCBIN_U32("graphics/trainers/front_pics/blaine_front_pic.4bpp.lz");
static const u16 sPic8Pal[] = INCBIN_U16("graphics/trainers/palettes/blaine.gbapal");

//Indy = 8
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
	//Indy
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
