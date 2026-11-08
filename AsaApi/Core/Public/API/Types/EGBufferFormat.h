#pragma once


namespace EGBufferFormat
{
	enum Type:int
	{
		Force8BitsPerChannel = 0x0,
		Default = 0x1,
		HighPrecisionNormals = 0x3,
		Force16BitsPerChannel = 0x5
	};
}