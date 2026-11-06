#pragma once


enum class EMeshScreenAlignment:int
{
	PSMA_MeshFaceCameraWithRoll = 0x0,
	PSMA_MeshFaceCameraWithSpin = 0x1,
	PSMA_MeshFaceCameraWithLockedAxis = 0x2,
	PSMA_MAX = 0x3
};