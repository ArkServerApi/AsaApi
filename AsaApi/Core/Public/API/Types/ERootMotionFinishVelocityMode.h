#pragma once


enum class ERootMotionFinishVelocityMode:unsigned char
{
	MaintainLastRootMotionVelocity = 0x0,
	SetVelocity = 0x1,
	ClampVelocity = 0x2
};