#pragma once


namespace FMovieSceneEvaluationCustomVersion
{
	enum Type:int
	{
		Initial = 0x0,
		ChangeEvaluateNearestSectionDefault = 0x1,
		AddBlendingSupport = 0x2,
		EntityManager = 0x3,
		DeprecateEventGUIDs = 0x4,
		VersionPlusOne = 0x5,
		LatestVersion = 0x4
	};
}