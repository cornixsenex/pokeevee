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

static const u32 sPic1Gfx[] = INCBIN_U32("graphics/pokemon/altaria/anim_front.4bpp.lz");
static const u16 sPic1Pal[] = INCBIN_U16("graphics/pokemon/altaria/normal.gbapal");

static const u32 sPic2Gfx[] = INCBIN_U32("graphics/battle_anims/sprites/duck.4bpp.lz");
static const u16 sPic2Pal[] = INCBIN_U16("graphics/battle_anims/sprites/duck.gbapal");

static const u32 sPic3Gfx[] = INCBIN_U32("graphics/object_events/pics/people/grandma.4bpp.lz");
static const u16 sPic3Pal[] = INCBIN_U16("graphics/object_events/palettes/grandma.gbapal");

static const u32 sPic4Gfx[] = INCBIN_U32("graphics/trainers/front_pics/blue_1_front_pic.4bpp.lz");
static const u16 sPic4Pal[] = INCBIN_U16("graphics/trainers/palettes/blue.gbapal");


static const u32 sPic5Gfx[] = INCBIN_U32("graphics/trainers/front_pics/leaf_front_pic.4bpp.lz");
static const u16 sPic5Pal[] = INCBIN_U16("graphics/trainers/palettes/leaf.gbapal");


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
    {sPic1Gfx, sPic1Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64), sAnims},
    {sPic2Gfx, sPic2Pal, SPRITE_SHAPE(16x16), SPRITE_SIZE(16x16)},
    {sPic3Gfx, sPic3Pal, SPRITE_SHAPE(16x32), SPRITE_SIZE(16x32)},
    {sPic4Gfx, sPic4Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
    {sPic5Gfx, sPic5Pal, SPRITE_SHAPE(64x64), SPRITE_SIZE(64x64)},
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
