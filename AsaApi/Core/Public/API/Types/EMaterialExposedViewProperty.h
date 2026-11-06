#pragma once


enum class EMaterialExposedViewProperty:int
{
	MEVP_BufferSize = 0x0,
	MEVP_FieldOfView = 0x1,
	MEVP_TanHalfFieldOfView = 0x2,
	MEVP_ViewSize = 0x3,
	MEVP_WorldSpaceViewPosition = 0x4,
	MEVP_WorldSpaceCameraPosition = 0x5,
	MEVP_ViewportOffset = 0x6,
	MEVP_TemporalSampleCount = 0x7,
	MEVP_TemporalSampleIndex = 0x8,
	MEVP_TemporalSampleOffset = 0x9,
	MEVP_RuntimeVirtualTextureOutputLevel = 0xA,
	MEVP_RuntimeVirtualTextureOutputDerivative = 0xB,
	MEVP_PreExposure = 0xC,
	MEVP_RuntimeVirtualTextureMaxLevel = 0xD,
	MEVP_ResolutionFraction = 0xE,
	MEVP_MAX = 0xF
};