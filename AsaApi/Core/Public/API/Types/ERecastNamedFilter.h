#pragma once


namespace ERecastNamedFilter
{
	enum Type:int
	{
		FilterOutNavLinks = 0x0,
		FilterOutAreas = 0x1,
		FilterOutNavLinksAndAreas = 0x2,
		NamedFiltersCount = 0x3
	};
}