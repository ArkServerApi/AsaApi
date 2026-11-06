#pragma once


enum class EVisibilityBasedAnimTickOption:unsigned char
{
	LocalControlTickPoseAndRefreshBones = 0x0,
	AlwaysTickPoseAndRefreshBones = 0x1,
	AlwaysTickPose = 0x2,
	OnlyTickMontagesWhenNotRendered = 0x3,
	OnlyTickPoseWhenRendered = 0x4
};