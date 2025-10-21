#include <blocks/Block.h>

#include <rendering/TextureMap.h>
#include <rendering/VertexFmt.h>

static Texture_Map textureMap;

// PATH PREFIX
#define PPRX "romfs:/textures/blocks/"

/*.
 * Each line is: X(identifier, "filename")
 * - `identifier` becomes the field name in `icon` and is used throughout the code.
 * - `filename` is appended to PPRX when building the texture_files array and when fetching icons.
 */
#define BLOCK_TEXTURES \
    X(stone, "stone.png") \
    X(red_sand, "red_sand.png") \
    X(dirt, "dirt.png") \
    X(cobblestone, "cobblestone.png") \
    X(cobblestone_mossy, "cobblestone_mossy.png") \
    X(grass_side, "grass_side.png") \
    X(grass_top, "grass_top.png") \
    X(stonebrick, "stonebrick.png") \
    X(sand, "sand.png") \
    X(oaklog_side, "log_oak.png") \
    X(oaklog_top, "log_oak_top.png") \
    X(leaves_oak, "leaves_oak.png") \
    X(glass, "glass.png") \
    X(brick, "brick.png") \
    X(oakplanks, "planks_oak.png") \
    X(wool, "wool.png") \
    X(bedrock, "bedrock.png") \
    X(podzol_top, "dirt_podzol_top.png") \
    X(podzol_side, "dirt_podzol_side.png") \
    X(iron_block, "iron_block.png") \
    X(gold_block, "gold_block.png") \
    X(diamond_block, "diamond_block.png") \
    X(obsidian, "obsidian.png") \
    X(prismarine_bricks, "prismarine_bricks.png") \
    X(dark_prismarine, "prismarine_dark.png") \
    X(acacia_planks, "planks_acacia.png") \
    X(pumpkin_top, "pumpkin_top.png") \
    X(pumpkin_side, "pumpkin_side.png") \
    X(pumpkin_face, "pumpkin_face.png") \
    X(birch_planks, "planks_birch.png") \
    X(jungle_planks, "planks_jungle.png") \
    X(glowstone, "glowstone.png") \
    X(water, "water_placeholder.png") \
    X(lapis_block, "lapis_block.png") \
    X(lava, "lava.png") \
    X(birch_log, "log_birch.png") \
    X(birch_log_top, "log_birch_top.png") \
    X(log_big_oak_top, "log_big_oak_top.png") \
    X(log_big_oak, "log_big_oak.png") \
    X(log_acacia, "log_acacia.png") \
    X(log_acacia_top, "log_acacia_top.png") \
    X(log_spruce_top, "log_spruce_top.png") \
    X(log_spruce, "log_spruce.png") \
    X(big_oak_planks, "planks_big_oak.png") \
    X(spruce_planks, "planks_spruce.png") \
    X(jungle_log, "log_jungle.png") \
    X(jungle_log_top, "log_jungle_top.png") \
    X(andesite, "stone_andesite.png") \
    X(smooth_andesite, "stone_andesite_smooth.png") \
    X(diorite, "stone_diorite.png") \
    X(smooth_diorite, "stone_diorite_smooth.png") \
    X(granite, "stone_granite.png") \
    X(smooth_granite, "stone_granite_smooth.png") \
    X(stonebrick_carved, "stonebrick_carved.png") \
    X(stonebrick_cracked, "stonebrick_cracked.png") \
    X(stonebrick_mossy, "stonebrick_mossy.png") \
    X(end_bricks, "end_bricks.png") \
    X(bookshelf, "bookshelf.png") \
    X(deepslate, "deepslate/deepslate.png") \
    X(coarse_dirt, "coarse_dirt.png") \
    X(polished_deepslate, "deepslate/polished_deepslate.png") \
    X(deepslate_bricks, "deepslate/deepslate_bricks.png") \
    X(cracked_deepslate_bricks, "deepslate/cracked_deepslate_bricks.png") \
    X(chiseled_deepslate, "deepslate/chiseled_deepslate.png") \
    X(emerald_block, "emerald_block.png")

/* Build the texture_files array from BLOCK_TEXTURES */
static const char* texture_files[] = {
#define X(i,n) PPRX n,
    BLOCK_TEXTURES
#undef X
};

/* Icon struct generated from BLOCK_TEXTURES */
#undef X
#define X(i,n) Texture_MapIcon i;
static struct {
    BLOCK_TEXTURES
} icon;
#undef X

void Block_Init(void) {
    Texture_MapInit(&textureMap, texture_files, sizeof(texture_files) / sizeof(texture_files[0]));

    /* Populate icon.* from the texture map */
#define X(i,n) icon.i = Texture_MapGetIcon(&textureMap, PPRX n);
    BLOCK_TEXTURES
#undef X
}

void Block_Deinit(void) { C3D_TexDelete(&textureMap.texture); }

void* Block_GetTextureMap(void) { return &textureMap.texture; }

/* ------------------ Remaining original logic unchanged ------------------ */

void Block_GetTexture(Block block, Direction direction, uint32_t metadata, int16_t* out_uv) {
    Texture_MapIcon i = {0, 0, 0};
    switch (block) {
        case Block_Air:
            return;
        case Block_Deepslate:
            i = icon.deepslate;
            break;
        case Block_RedSand:
            i = icon.red_sand;
            break;
        case Block_Chiesled_Deepslate:
            i = icon.chiseled_deepslate;
            break;
        case Block_Deepslate_Bricks:
            i = icon.deepslate_bricks;
            break;
        case Block_Cracked_Deepslate_Bricks:
            i = icon.cracked_deepslate_bricks;
            break;
        case Block_Polished_Deepslate:
            i = icon.polished_deepslate;
            break;
        case Block_Lava:
            i = icon.lava;
            break;
        case Block_Lapis:
            i = icon.lapis_block;
            break;
        case Block_Water:
            i = icon.water;
            break;
        case Block_Glowstone:
            i = icon.glowstone;
            break;
        case Block_Jungle_Planks:
            i = icon.jungle_planks;
            break;
        case Block_Birch_Planks:
            i = icon.birch_planks;
            break;
        case Block_Acacia_Planks:
            i = icon.acacia_planks;
            break;
        case Block_Prismarine_Bricks:
            i = icon.prismarine_bricks;
            break;
        case Block_Dark_Prismarine:
            i = icon.dark_prismarine;
            break;
        case Block_Iron_Block:
            i = icon.iron_block;
            break;
        case Block_Obsidian:
            i = icon.obsidian;
            break;
        case Block_Diamond_Block:
            i = icon.diamond_block;
            break;
        case Block_Gold_Block:
            i = icon.gold_block;
            break;
        case Block_Dirt:
            i = icon.dirt;
            break;
        case Block_Stone:
            i = icon.stone;
            break;
        case Block_Grass:
            switch (direction) {
                case Direction_Top:
                    i = icon.grass_top;
                    break;
                case Direction_Bottom:
                    i = icon.dirt;
                    break;
                default:
                    i = icon.grass_side;
                    break;
            }
            break;
        case Block_Pumpkin:
            switch (direction) {
                case Direction_Top:
                    i = icon.pumpkin_top;
                    break;
                case Direction_West:
                    i = icon.pumpkin_face;
                    break;
                default:
                    i = icon.pumpkin_side;
                    break;
            }
            break;
        case Block_Podzol:
            switch(direction){
                case Direction_Top:
                    i = icon.podzol_top;
                    break;
                case Direction_Bottom:
                    i = icon.dirt;
                    break;
                default:
                    i = icon.podzol_side;
                    break;
            }
            break;
        case Block_Birch_Log:
            switch (direction) {
                case Direction_Top:
                    i = icon.birch_log_top;
                    break;
                case Direction_Bottom:
                    i = icon.birch_log_top;
                    break;
                default:
                    i = icon.birch_log;
                    break;
            }
            break;

        case Block_Cobblestone:
            i = icon.cobblestone;
            break;
        case Block_Cobblestone_mossy:
            i = icon.cobblestone_mossy;
            break;
        case Block_Log:
            switch (direction) {
                case Direction_Bottom:
                case Direction_Top:
                    i = icon.oaklog_top;
                    break;
                default:
                    i = icon.oaklog_side;
                    break;
            }
            break;
        case Block_Sand:
            i = icon.sand;
            break;
        case Block_Leaves:
            i = icon.leaves_oak;
            break;
        case Block_Glass:
            i = icon.glass;
            break;
        case Block_Stonebrick:
            i = icon.stonebrick;
            break;
        case Block_Brick:
            i = icon.brick;
            break;
        case Block_Planks:
            i = icon.oakplanks;
            break;
        case Block_Wool:
            i = icon.wool;
            break;
        case Block_Bedrock:
            i = icon.bedrock;
            break;
        case Block_Big_Oak_Log:
            switch(direction) {
                case Direction_Bottom:
                case Direction_Top:
                    i = icon.log_big_oak_top;
                    break;
                default:
                    i = icon.log_big_oak;
                    break;
            }
            break;
        case Block_Acacia_Log:
            switch(direction) {
                case Direction_Bottom:
                case Direction_Top:
                    i = icon.log_acacia_top;
                    break;
                default:
                    i = icon.log_acacia;
            }
            break;
        case Block_Spruce_Log:
            switch(direction) {
                case Direction_Bottom:
                case Direction_Top:
                    i = icon.log_spruce_top;
                    break;
                default:
                    i = icon.log_spruce;
            }
            break;

        case Block_Big_Oak_Planks:
            i = icon.big_oak_planks;
            break;
        case Block_Spruce_Planks:
            i = icon.spruce_planks;
            break;
        case Block_Jungle_Log:
            switch(direction) {
                case Direction_Bottom:
                case Direction_Top:
                    i = icon.jungle_log_top;
                    break;
                default:
                    i = icon.jungle_log;
            }
            break;
        case Block_Andesite:
            i = icon.andesite;
            break;
        case Block_Smooth_Andesite:
            i = icon.smooth_andesite;
            break;
        case Block_Diorite:
            i = icon.diorite;
            break;
        case Block_Smooth_Diorite:
            i = icon.smooth_diorite;
            break;
        case Block_Granite:
            i = icon.granite;
            break;
        case Block_Smooth_Granite:
            i = icon.smooth_granite;
            break;
        case Block_Stonebrick_Carved:
            i = icon.stonebrick_carved;
            break;
        case Block_Stonebrick_Cracked:
            i = icon.stonebrick_cracked;
            break;
        case Block_Emerald:
            i = icon.emerald_block;
            break;
        case Block_Stonebrick_Mossy:
            i = icon.stonebrick_mossy;
            break;
        case Block_End_Bricks:
            i = icon.end_bricks;
            break;
        case Block_Coarse_Dirt:
            i = icon.coarse_dirt;
            break;

        case Block_Bookshelf:
            switch (direction) {
                case Direction_Top:
                    i = icon.oakplanks;
                    break;
                case Direction_Bottom:
                    i = icon.oakplanks;
                    break;
                default:
                    i = icon.bookshelf;
                    break;
            }
            break;

        default: break;
    }
    out_uv[0] = i.u;
    out_uv[1] = i.v;
}

#define extractR(c) (((c) >> 16) & 0xff)
#define extractG(c) (((c) >> 8) & 0xff)
#define extractB(c) ((c) & 0xff)

void Block_GetColor(Block block, uint16_t metadata, Direction direction, uint8_t out_rgb[]) {
    if ((block == Block_Grass && direction == Direction_Top) || block == Block_Leaves) {
        out_rgb[0] = 140;
        out_rgb[1] = 214;
        out_rgb[2] = 123;
        return;
    }
    /* white, orange, magenta, light blue, yellow, lime, pink, gray, silver, cyan, purple, blue, green, red, black */
    const uint32_t dies[] = {
        16777215, 14188339, 11685080, 6724056, 15066419, 8375321, 15892389, 5000268,
        10066329, 5013401,  8339378,  3361970, 6704179, 6717235, 10040115, 1644825
    };
    if (block == Block_Wool || block == Block_Glass) {
        out_rgb[0] = extractR(dies[metadata]);
        out_rgb[1] = extractG(dies[metadata]);
        out_rgb[2] = extractB(dies[metadata]);
    } else {
        out_rgb[0] = 255;
        out_rgb[1] = 255;
        out_rgb[2] = 255;
    }
}

bool Block_Opaque(Block block, uint8_t metadata) {
    return block != Block_Air && block != Block_Glass && block != Block_Leaves;
}

/* Keep BlockNames exactly as before (unchanged) */
const char* BlockNames[Blocks_Count] = {
    "Air", "Water", "Stone", "Dirt",  "Iron Block", "Lapis Block","Diamond Block", "Gold Block", "sandstone", "Prismarine Bricks", "Dark Prismarine", "Acacia Planks","Obsidian", "Pumpkin","Grass", "Cactus", "Cobblestone", "Mossy Cobblestone", "Sand", "Log",
    "Leaves", "Glass", "Stone Bricks", "Bricks", "Planks", "Wool", "Bedrock", "Birch Planks", "Jungle Planks", "Glowstone", "lava", "big oak log", "acacia log", "spruce log", "big oak planks", "spruce planks", "jungle log", "diorite", "smooth diorite",
    "andesite", "smooth andesite", "stonebrick", "stonebrick carved", "stonebrick mossy", "andesite", "smooth andesite", "emerald block", "end bricks", "bookshelf", "deepslate", "deepslate bricks", "cracked deepslate bricks", "chiesled deepslate", "coarse dirt"
};
