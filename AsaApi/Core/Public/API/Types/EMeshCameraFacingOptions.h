#pragma once


enum class EMeshCameraFacingOptions:int
{
	XAxisFacing_NoUp = 0x0,
	XAxisFacing_ZUp = 0x1,
	XAxisFacing_NegativeZUp = 0x2,
	XAxisFacing_YUp = 0x3,
	XAxisFacing_NegativeYUp = 0x4,
	LockedAxis_ZAxisFacing = 0x5,
	LockedAxis_NegativeZAxisFacing = 0x6,
	LockedAxis_YAxisFacing = 0x7,
	LockedAxis_NegativeYAxisFacing = 0x8,
	VelocityAligned_ZAxisFacing = 0x9,
	VelocityAligned_NegativeZAxisFacing = 0xA,
	VelocityAligned_YAxisFacing = 0xB,
	VelocityAligned_NegativeYAxisFacing = 0xC,
	EMeshCameraFacingOptions_MAX = 0xD
};