#pragma once


enum class EHairVisibilityRenderMode:int
{
	HairVisibilityRenderMode_Transmittance = 0x0,
	HairVisibilityRenderMode_PPLL = 0x1,
	HairVisibilityRenderMode_MSAA_Visibility = 0x2,
	HairVisibilityRenderMode_TransmittanceAndHairCount = 0x3,
	HairVisibilityRenderMode_ComputeRaster = 0x4,
	HairVisibilityRenderMode_ComputeRasterForward = 0x5,
	HairVisibilityRenderModeCount = 0x6
};