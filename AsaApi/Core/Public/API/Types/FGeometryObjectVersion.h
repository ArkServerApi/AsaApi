#pragma once


namespace FGeometryObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		CompressGeometryCache = 0x1,
		DynamicMeshVertexLayoutChange = 0x2,
		ExplicitMotionVectors = 0x3,
		VersionPlusOne = 0x4,
		LatestVersion = 0x3
	};
}