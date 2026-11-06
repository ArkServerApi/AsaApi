#pragma once


enum class EControlRigComponentSpace:unsigned char
{
	WorldSpace = 0x0,
	ActorSpace = 0x1,
	ComponentSpace = 0x2,
	RigSpace = 0x3,
	LocalSpace = 0x4,
	Max = 0x5
};