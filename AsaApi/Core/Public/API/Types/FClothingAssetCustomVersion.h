#pragma once


namespace FClothingAssetCustomVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		AddVertexColorsToPhysicalMesh = 0x1,
		MovePropertiesToCommonBaseClasses = 0x2,
		VersionPlusOne = 0x3,
		LatestVersion = 0x2
	};
}