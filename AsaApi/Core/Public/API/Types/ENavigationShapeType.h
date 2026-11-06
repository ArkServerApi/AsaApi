#pragma once


namespace ENavigationShapeType
{
	enum Type:int
	{
		Unknown = 0x0,
		Cylinder = 0x1,
		Box = 0x2,
		Convex = 0x3,
		InstancedConvex = 0x4
	};
}