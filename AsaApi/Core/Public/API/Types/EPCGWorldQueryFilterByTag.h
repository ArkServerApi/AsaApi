#pragma once


enum class EPCGWorldQueryFilterByTag:int
{
	NoTagFilter = 0x0,
	IncludeTagged = 0x1,
	ExcludeTagged = 0x2
};