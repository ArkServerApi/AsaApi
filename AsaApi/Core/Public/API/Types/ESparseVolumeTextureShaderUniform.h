#pragma once


enum class ESparseVolumeTextureShaderUniform:int
{
	ESparseVolumeTexture_PhysicalUVToPageUV = 0x0,
	ESparseVolumeTexture_TileSize = 0x1,
	ESparseVolumeTexture_PageTableSize = 0x2,
	ESparseVolumeTexture_Count = 0x3
};