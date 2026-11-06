#pragma once


enum class ECapsuleShadowingType:int
{
	DirectionalLightTiledCulling = 0x0,
	PointLightTiledCulling = 0x1,
	IndirectTiledCulling = 0x2,
	MovableSkylightTiledCulling = 0x3,
	MovableSkylightTiledCullingGatherFromReceiverBentNormal = 0x4,
	MAX = 0x5
};