#pragma once


namespace EShaderCompressionFormat
{
	enum Type:int
	{
		None = 0x0,
		LZ4 = 0x1,
		Oodle = 0x2,
		Zlib = 0x3
	};
}