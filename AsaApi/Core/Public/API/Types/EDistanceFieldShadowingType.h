#pragma once


enum class EDistanceFieldShadowingType:int
{
	DFS_DirectionalLightScatterTileCulling = 0x0,
	DFS_DirectionalLightTiledCulling = 0x1,
	DFS_PointLightTiledCulling = 0x2
};