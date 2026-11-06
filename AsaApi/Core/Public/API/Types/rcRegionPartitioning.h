#pragma once


enum class rcRegionPartitioning:int
{
	RC_REGION_MONOTONE = 0x0,
	RC_REGION_WATERSHED = 0x1,
	RC_REGION_CHUNKY = 0x2
};