#include <world/worldgen/SmeaGen.h>

#include <sino/sino.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <mtime.h>
void SmeaGen_Init(SmeaGen* gen, World* world) { gen->world = world; }

// based off https://github.com/smealum/3dscraft/blob/master/source/generation.c
void SmeaGen_Generate(WorkQueue* queue, WorkerItem item, void* this) {
	// const int r = rnum();
	SmeaGen* gen = this;
	for (int x = 0; x < CHUNK_SIZE; x++) {
		for (int z = 0; z < CHUNK_SIZE; z++) {			
			float px = (float)(x + item.chunk->x * CHUNK_SIZE);
			float pz = (float)(z + item.chunk->z * CHUNK_SIZE);

			const int smeasClusterSize = 8;
			const int smeasChunkHeight = 16;
			int height = (int)(sino_2d((px) / (smeasClusterSize * 6), (pz) / (smeasClusterSize * 6)) * smeasClusterSize) + (smeasChunkHeight * smeasClusterSize / 2);
			
			Chunk_SetBlock(item.chunk, x, 0, z, Block_Bedrock);
			Chunk_SetBlock(item.chunk, x, 1, z, Block_Bedrock);
			for (int y = 2; y < 20; y++) {
				Chunk_SetBlock(item.chunk, x, y, z, Block_Deepslate);
			}
			for (int y = 20; y < height - 3; y++) {
				Chunk_SetBlock(item.chunk, x, y, z, Block_Stone);
			}
			for (int y = height - 3; y < height; y++) {
				Chunk_SetBlock(item.chunk, x, y, z, Block_Dirt);
			}
			Chunk_SetBlock(item.chunk, x, height, z, Block_Grass);
		}
	}
	
	
	for(int i = 0; i < 50; i++){

	}
}
