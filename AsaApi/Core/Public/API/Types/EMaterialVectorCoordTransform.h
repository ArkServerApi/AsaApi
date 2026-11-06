#pragma once


enum class EMaterialVectorCoordTransform:int
{
	TRANSFORM_Tangent = 0x0,
	TRANSFORM_Local = 0x1,
	TRANSFORM_World = 0x2,
	TRANSFORM_View = 0x3,
	TRANSFORM_Camera = 0x4,
	TRANSFORM_ParticleWorld = 0x5,
	TRANSFORM_Instance = 0x6,
	TRANSFORM_MAX = 0x7
};