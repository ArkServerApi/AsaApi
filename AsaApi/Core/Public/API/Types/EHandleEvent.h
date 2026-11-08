#pragma once


enum class EHandleEvent:unsigned char
{
	LocalTransformUpdated = 0x0,
	GlobalTransformUpdated = 0x1,
	ComponentUpdated = 0x2,
	Max = 0x3
};