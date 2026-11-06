#pragma once


namespace EEnvQueryTrace
{
	enum Type:int
	{
		None = 0x0,
		Navigation = 0x1,
		GeometryByChannel = 0x2,
		GeometryByProfile = 0x3,
		NavigationOverLedges = 0x4
	};
}