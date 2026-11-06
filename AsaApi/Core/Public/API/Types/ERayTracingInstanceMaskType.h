#pragma once


enum class ERayTracingInstanceMaskType:unsigned char
{
	Opaque = 0x0,
	Translucent = 0x1,
	ThinShadow = 0x2,
	Shadow = 0x3,
	FarField = 0x4,
	HairStrands = 0x5,
	SceneCapture = 0x6,
	VisibleInPrimaryRay = 0x7,
	VisibleInIndirectRay = 0x8
};