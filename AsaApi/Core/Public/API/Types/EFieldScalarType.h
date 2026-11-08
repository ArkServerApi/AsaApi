#pragma once


enum class EFieldScalarType:int
{
	Scalar_ExternalClusterStrain = 0x0,
	Scalar_Kill = 0x1,
	Scalar_DisableThreshold = 0x2,
	Scalar_SleepingThreshold = 0x3,
	Scalar_InternalClusterStrain = 0x4,
	Scalar_DynamicConstraint = 0x5,
	Scalar_TargetMax = 0x6
};