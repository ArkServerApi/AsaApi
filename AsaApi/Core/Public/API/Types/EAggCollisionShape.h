#pragma once


namespace EAggCollisionShape
{
	enum Type:int
	{
		Sphere = 0x0,
		Box = 0x1,
		Sphyl = 0x2,
		Convex = 0x3,
		TaperedCapsule = 0x4,
		LevelSet = 0x5,
		Unknown = 0x6
	};
}