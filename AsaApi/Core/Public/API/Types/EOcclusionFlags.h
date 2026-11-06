#pragma once


namespace EOcclusionFlags
{
	enum Type:int
	{
		None = 0x0,
		CanBeOccluded = 0x1,
		AllowApproximateOcclusion = 0x4,
		HasPrecomputedVisibility = 0x8,
		HasSubprimitiveQueries = 0x10
	};
}