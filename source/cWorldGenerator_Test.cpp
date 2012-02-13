
#include "Globals.h"  // NOTE: MSVC stupidness requires this to be the same across all modules

#include "cWorldGenerator_Test.h"
#include "cChunk.h"
#include "BlockID.h"





void cWorldGenerator_Test::GenerateTerrain( cChunkPtr a_Chunk )
{
	char* BlockType = a_Chunk->pGetType();

	for(int x = 0; x < 16; x++) 
	{
		for(int z = 0; z < 16; z++)
		{
			for( int y = 1; y < 128; ++y )
			{
				unsigned int idx = cChunk::MakeIndex(x, y, z);
				BlockType[idx] = E_BLOCK_DIRT;
			}
		}
	}
}

void cWorldGenerator_Test::GenerateFoliage( cChunkPtr a_Chunk )
{
	(void)a_Chunk;
}