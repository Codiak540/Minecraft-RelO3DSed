#pragma once

#include <stdbool.h>
#include <stdint.h>

#include <world/Direction.h>

typedef uint32_t Block;

enum { Block_Air,
    //    Block_Sandstone,
       Block_RedSand,
       Block_Coarse_Dirt,
       Block_Chiesled_Deepslate,
       Block_Cracked_Deepslate_Bricks,
       Block_Deepslate_Bricks,
       Block_Deepslate,
       Block_Polished_Deepslate,
       Block_Bookshelf,
       Block_Lava,
       Block_Lapis,
       Block_Water,
       Block_Glowstone,
       Block_Birch_Planks,
       Block_Jungle_Planks,
       Block_Pumpkin,
       Block_Dark_Prismarine,
       Block_Acacia_Planks,
       Block_Prismarine_Bricks,
       Block_Obsidian,
       Block_Iron_Block,
       Block_Gold_Block,
       Block_Diamond_Block,
       Block_Dirt,
       Block_Grass,
       Block_Podzol,
       Block_Stone,
       Block_Cobblestone,
       Block_Cobblestone_mossy,
       Block_Sand,
       Block_Log,
       Block_Birch_Log,
       Block_Leaves,
       Block_Glass,
       Block_Stonebrick,
       Block_Brick,
       Block_Planks,
       Block_Wool,
       Block_Bedrock,
       Block_Big_Oak_Log,
       Block_Acacia_Log,
       Block_Spruce_Log,
       Block_Big_Oak_Planks,
       Block_Spruce_Planks,
       Block_Jungle_Log,
       Block_Andesite,
       Block_Smooth_Andesite,
       Block_Diorite,
       Block_Smooth_Diorite,
       Block_Granite,
       Block_Smooth_Granite,
       Block_Stonebrick_Cracked,
       Block_Stonebrick_Carved,
       Block_Stonebrick_Mossy,
       Block_Emerald,
       Block_End_Bricks,
       Blocks_Count };

void Block_Init();
void Block_Deinit();

void* Block_GetTextureMap();

void Block_GetTexture(Block block, Direction direction, uint32_t metadata, int16_t* out_uv);

void Block_GetColor(Block block, uint16_t metadata, Direction direction, uint8_t out_rgb[]);

bool Block_Opaque(Block block, uint8_t metadata);

extern const char* BlockNames[Blocks_Count];
