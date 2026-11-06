#pragma once


namespace EOnlineKeyValuePairDataType
{
	enum Type:int
	{
		Empty = 0x0,
		Int32 = 0x1,
		UInt32 = 0x2,
		Int64 = 0x3,
		UInt64 = 0x4,
		Double = 0x5,
		String = 0x6,
		Float = 0x7,
		Blob = 0x8,
		Bool = 0x9,
		Json = 0xA,
		MAX = 0xB
	};
}