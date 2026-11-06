#pragma once


enum class AnimPhysCollisionType:unsigned char
{
	CoM = 0x0,
	CustomSphere = 0x1,
	InnerSphere = 0x2,
	OuterSphere = 0x3
};