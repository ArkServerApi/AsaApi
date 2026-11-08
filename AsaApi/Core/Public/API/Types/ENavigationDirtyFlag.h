#pragma once


namespace ENavigationDirtyFlag
{
	enum Type:int
	{
		Geometry = 0x1,
		DynamicModifier = 0x2,
		UseAgentHeight = 0x4,
		NavigationBounds = 0x8,
		All = 0x3
	};
}