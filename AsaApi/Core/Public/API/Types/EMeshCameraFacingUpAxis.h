#pragma once


enum class EMeshCameraFacingUpAxis:int
{
	CameraFacing_NoneUP = 0x0,
	CameraFacing_ZUp = 0x1,
	CameraFacing_NegativeZUp = 0x2,
	CameraFacing_YUp = 0x3,
	CameraFacing_NegativeYUp = 0x4,
	CameraFacing_MAX = 0x5
};