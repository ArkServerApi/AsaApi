#pragma once


namespace EMissionDispatchMode
{
	enum Type:int
	{
		StartAnywhere = 0x0,
		RequireNearbyMissionDispatcher = 0x1,
		RequireInsideMissionDispatcher = 0x2,
		UseBPStaticCanStartMission = 0x3,
		RequireInsideDispatcherNoCheck = 0x4
	};
}