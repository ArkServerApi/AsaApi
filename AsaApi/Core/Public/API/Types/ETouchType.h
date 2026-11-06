#pragma once


namespace ETouchType
{
	enum Type:int
	{
		Began = 0x0,
		Moved = 0x1,
		Stationary = 0x2,
		ForceChanged = 0x3,
		FirstMove = 0x4,
		Ended = 0x5,
		NumTypes = 0x6
	};
}