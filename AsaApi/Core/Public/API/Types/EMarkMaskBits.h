#pragma once


namespace EMarkMaskBits
{
	enum Type:int
	{
		StaticMeshVisibilityMapMask = 0x2,
		StaticMeshFadeOutDitheredLODMapMask = 0x10,
		StaticMeshFadeInDitheredLODMapMask = 0x20
	};
}