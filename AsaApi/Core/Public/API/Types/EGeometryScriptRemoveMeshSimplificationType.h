#pragma once


enum class EGeometryScriptRemoveMeshSimplificationType:unsigned char
{
	StandardQEM = 0x0,
	VolumePreserving = 0x1,
	AttributeAware = 0x2
};