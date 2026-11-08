#pragma once


namespace EVisualLoggerVersion
{
	enum Type:int
	{
		Initial = 0x0,
		HistogramGraphsSerialization = 0x1,
		AddedOwnerClassName = 0x2,
		StatusCategoryWithChildren = 0x3,
		TransformationForShapes = 0x4,
		LargeWorldCoordinatesAndLocationValidityFlag = 0x5,
		VersionPlusOne = 0x6,
		LatestVersion = 0x5
	};
}