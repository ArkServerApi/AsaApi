#pragma once


namespace ESimulationQuery
{
	enum Type:int
	{
		None = 0x0,
		CollisionOverlap = 0x1,
		ShadeOverlap = 0x2,
		AnyOverlap = 0x3
	};
}