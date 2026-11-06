#pragma once


enum class EDepthDrawingMode:int
{
	DDM_None = 0x0,
	DDM_NonMaskedOnly = 0x1,
	DDM_AllOccluders = 0x2,
	DDM_AllOpaque = 0x3,
	DDM_MaskedOnly = 0x4,
	DDM_AllOpaqueNoVelocity = 0x5
};