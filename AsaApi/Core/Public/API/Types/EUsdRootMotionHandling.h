#pragma once


enum class EUsdRootMotionHandling:int
{
	NoAdditionalRootMotion = 0x0,
	UseMotionFromSkelRoot = 0x1,
	UseMotionFromSkeleton = 0x2
};