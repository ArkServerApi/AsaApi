#pragma once


namespace ECustomVersionSerializationFormat
{
	enum Type:int
	{
		Unknown = 0x0,
		Guids = 0x1,
		Enums = 0x2,
		Optimized = 0x3,
		CustomVersion_Automatic_Plus_One = 0x4,
		Latest = 0x3
	};
}