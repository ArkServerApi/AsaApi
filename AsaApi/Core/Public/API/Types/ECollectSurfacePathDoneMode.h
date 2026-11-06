#pragma once


enum class ECollectSurfacePathDoneMode:int
{
	SnapCloseLoop = 0x0,
	SnapDoubleClick = 0x1,
	SnapDoubleClickOrCloseLoop = 0x2,
	ExternalLambda = 0x3,
	FixedNumPoints = 0x4
};