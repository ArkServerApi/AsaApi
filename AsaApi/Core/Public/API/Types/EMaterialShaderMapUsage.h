#pragma once


namespace EMaterialShaderMapUsage
{
	enum Type:int
	{
		Default = 0x0,
		LightmassExportEmissive = 0x1,
		LightmassExportDiffuse = 0x2,
		LightmassExportOpacity = 0x3,
		LightmassExportNormal = 0x4,
		MaterialExportBaseColor = 0x5,
		MaterialExportSpecular = 0x6,
		MaterialExportNormal = 0x7,
		MaterialExportTangent = 0x8,
		MaterialExportMetallic = 0x9,
		MaterialExportRoughness = 0xA,
		MaterialExportAnisotropy = 0xB,
		MaterialExportAO = 0xC,
		MaterialExportEmissive = 0xD,
		MaterialExportOpacity = 0xE,
		MaterialExportOpacityMask = 0xF,
		MaterialExportSubSurfaceColor = 0x10,
		MaterialExportClearCoat = 0x11,
		MaterialExportClearCoatRoughness = 0x12,
		MaterialExportCustomOutput = 0x13,
		MaterialExportShadingModel = 0x14,
		MaterialExportRefraction = 0x15
	};
}