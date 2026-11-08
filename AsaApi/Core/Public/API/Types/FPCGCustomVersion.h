#pragma once


namespace FPCGCustomVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		SplitProjectionNodeInputs = 0x1,
		MoveSelfPruningParamsOffFirstPin = 0x2,
		MoveParamsOffFirstPinDensityNodes = 0x3,
		SplitSamplerNodesInputs = 0x4,
		MovePointFilterParamsOffFirstPin = 0x5,
		AddParamPinToOverridableNodes = 0x6,
		SplitVolumeSamplerNodeInputs = 0x7,
		SplineSamplerUpdatedNodeInputs = 0x8,
		VersionPlusOne = 0x9,
		LatestVersion = 0x8
	};
}