#pragma once


namespace EMeshPass
{
	enum Type: char
	{
		DepthPass = 0x0,
		BasePass = 0x1,
		AnisotropyPass = 0x2,
		SkyPass = 0x3,
		SingleLayerWaterPass = 0x4,
		SingleLayerWaterDepthPrepass = 0x5,
		CSMShadowDepth = 0x6,
		VSMShadowDepth = 0x7,
		Distortion = 0x8,
		Velocity = 0x9,
		TranslucentVelocity = 0xA,
		TranslucencyStandard = 0xB,
		TranslucencyStandardModulate = 0xC,
		TranslucencyAfterDOF = 0xD,
		TranslucencyAfterDOFModulate = 0xE,
		TranslucencyAfterMotionBlur = 0xF,
		TranslucencyAll = 0x10,
		LightmapDensity = 0x11,
		DebugViewMode = 0x12,
		CustomDepth = 0x13,
		MobileBasePassCSM = 0x14,
		VirtualTexture = 0x15,
		LumenCardCapture = 0x16,
		LumenCardNanite = 0x17,
		LumenTranslucencyRadianceCacheMark = 0x18,
		LumenFrontLayerTranslucencyGBuffer = 0x19,
		DitheredLODFadingOutMaskPass = 0x1A,
		NaniteMeshPass = 0x1B,
		MeshDecal = 0x1C,
		Num = 0x1D,
		NumBits = 0x6
	};
}