#pragma once


namespace ERecastDebugPathfindingFlags
{
	enum Type: char
	{
		Basic = 0x0,
		BestNode = 0x1,
		Vertices = 0x2,
		PathLength = 0x4
	};
}