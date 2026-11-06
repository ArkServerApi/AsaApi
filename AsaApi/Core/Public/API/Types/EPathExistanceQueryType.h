#pragma once


namespace EPathExistanceQueryType
{
	enum Type:int
	{
		NavmeshRaycast2D = 0x0,
		HierarchicalQuery = 0x1,
		RegularPathFinding = 0x2
	};
}