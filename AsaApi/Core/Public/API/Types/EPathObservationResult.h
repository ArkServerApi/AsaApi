#pragma once


namespace EPathObservationResult
{
	enum Type:int
	{
		NoLongerObserving = 0x0,
		NoChange = 0x1,
		RequestRepath = 0x2
	};
}