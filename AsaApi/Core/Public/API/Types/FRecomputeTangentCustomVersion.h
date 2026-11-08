#pragma once


namespace FRecomputeTangentCustomVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		RuntimeRecomputeTangent = 0x1,
		RecomputeTangentVertexColorMask = 0x2,
		VersionPlusOne = 0x3,
		LatestVersion = 0x2
	};
}