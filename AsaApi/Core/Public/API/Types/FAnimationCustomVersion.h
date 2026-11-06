#pragma once


namespace FAnimationCustomVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		BoneDrivenControllerMatchingMaya = 0x1,
		BoneDrivenControllerRemapping = 0x2,
		AnimDynamicsAddAngularOffsets = 0x3,
		RenamedStretchLimits = 0x4,
		ConvertIKToSupportBoneSocketTarget = 0x5,
		VersionPlusOne = 0x6,
		LatestVersion = 0x5
	};
}