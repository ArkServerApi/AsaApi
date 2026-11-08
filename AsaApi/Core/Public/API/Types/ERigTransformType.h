#pragma once


namespace ERigTransformType
{
	enum Type:int
	{
		InitialLocal = 0x0,
		CurrentLocal = 0x1,
		InitialGlobal = 0x2,
		CurrentGlobal = 0x3,
		NumTransformTypes = 0x4
	};
}