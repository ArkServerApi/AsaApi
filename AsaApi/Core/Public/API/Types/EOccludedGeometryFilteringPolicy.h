#pragma once


enum class EOccludedGeometryFilteringPolicy:unsigned char
{
	NoOcclusionFiltering = 0x0,
	VisibilityBasedFiltering = 0x1
};