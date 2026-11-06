#pragma once


enum class EConvexOverlapRemoval:int
{
	None = 0x0,
	All = 0x1,
	OnlyClusters = 0x2,
	OnlyClustersVsClusters = 0x3
};