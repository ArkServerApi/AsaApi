#pragma once


namespace EMissionDispatcherTriggerMode
{
	enum Type:int
	{
		AutoStartMission = 0x0,
		Ignore = 0x1,
		ActivateViaMultiUse = 0x2
	};
}