#pragma once


enum class EVTRequestPageStatus:int
{
	Invalid = 0x0,
	Saturated = 0x1,
	Pending = 0x2,
	Available = 0x3
};