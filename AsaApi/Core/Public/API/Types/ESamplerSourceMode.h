#pragma once


enum class ESamplerSourceMode:int
{
	SSM_FromTextureAsset = 0x0,
	SSM_Wrap_WorldGroupSettings = 0x1,
	SSM_Clamp_WorldGroupSettings = 0x2,
	SSM_TerrainWeightmapGroupSettings = 0x3
};