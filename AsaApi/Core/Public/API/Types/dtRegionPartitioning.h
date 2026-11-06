#pragma once


enum class dtRegionPartitioning:int
{
	DT_REGION_MONOTONE = 0x0,
	DT_REGION_WATERSHED = 0x1,
	DT_REGION_CHUNKY = 0x2
};