#pragma once


enum class ERootMotionSourceStatusFlags:unsigned char
{
	Prepared = 0x1,
	Finished = 0x2,
	MarkedForRemoval = 0x4
};