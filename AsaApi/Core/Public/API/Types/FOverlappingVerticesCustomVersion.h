#pragma once


namespace FOverlappingVerticesCustomVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		DetectOVerlappingVertices = 0x1,
		VersionPlusOne = 0x2,
		LatestVersion = 0x1
	};
}